#include "../../SDK/SDK.h"

#include "../Features/CFG.h"

MAKE_SIGNATURE(CTFPlayerShared_InCond, "client.dll", "48 89 5C 24 ? 57 48 83 EC ? 8B DA 48 8B F9 83 FA ? 7D", 0x0);
MAKE_SIGNATURE(InCond_HudScopePaint, "client.dll", "E8 ? ? ? ? 84 C0 74 2E 8B CE E8 ? ? ? ? 85 C0 74 1A", 0x5); // update me
MAKE_SIGNATURE(InCond_ViewModelShouldDraw, "client.dll", "8D 88 ? ? ? ? E8 ? ? ? ? 84 C0 74 03 32 C0 C3", 0xB); // update me
MAKE_SIGNATURE(InCond_PlayerShouldDraw, "client.dll", "E8 ? ? ? ? 84 C0 74 ? 32 C0 48 8B 74 24", 0x5);
MAKE_SIGNATURE(InCond_WearableShouldDraw, "client.dll", "E8 ? ? ? ? 84 C0 0F 85 ? ? ? ? 41 BF", 0x5);

MAKE_HOOK(CTFPlayerShared_InCond, Signatures::CTFPlayerShared_InCond.Get(), bool, __fastcall,
	void* ecx, ETFCond cond)
{
	if (cond == TF_COND_DISGUISED || cond == TF_COND_DISGUISING)
	{
		if (CFG::Misc_Accuracy_Improvements)
		{
			if (C_TFPlayer* pOuter = *reinterpret_cast<C_TFPlayer**>(reinterpret_cast<std::uintptr_t>(ecx) + 392))
			{
				if (const auto pLocal = H::Entities->GetLocal())
				{
					if (pOuter->m_iTeamNum() != pLocal->m_iTeamNum())
						return false;
				}
			}
		}
	}

	if (cond == TF_COND_ZOOMED)
	{
		auto shouldDoOverrides = [&]() -> bool
		{
			if (CFG::Visuals_Removals_Mode == 1)
			{
				if (const auto pLocal = H::Entities->GetLocal())
				{
					if (pLocal->m_iObserverMode() == OBS_MODE_IN_EYE)
						return false;
				}
			}

			return true;
		};

		if (shouldDoOverrides())
		{
			const auto dwRetAddr = reinterpret_cast<std::uintptr_t>(_ReturnAddress());

			if (CFG::Visuals_Remove_Scope)
			{
				if (dwRetAddr == Signatures::InCond_HudScopePaint.Get())
					return false;

				if (CFG::Visuals_Remove_Zoom && dwRetAddr == Signatures::InCond_ViewModelShouldDraw.Get())
					return false;
			}

			if (I::Input->CAM_IsThirdPerson())
			{
				if (CFG::Visuals_Remove_Zoom)
				{
					if (dwRetAddr == Signatures::InCond_PlayerShouldDraw.Get() || dwRetAddr == Signatures::InCond_WearableShouldDraw.Get())
						return false;
				}
			}
		}
	}

	return CALL_ORIGINAL(ecx, cond);
}
