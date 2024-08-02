#include "../../SDK/SDK.h"

#include "../Features/CFG.h"

MAKE_SIGNATURE(CViewRender_PerformScreenOverlay, "client.dll", "E8 ? ? ? ? 8B 0D ? ? ? ? 8B 01 FF 90 ? ? ? ? A1 ? ? ? ? 83 78 30 00 75 61", 0x0);

MAKE_HOOK(CViewRender_PerformScreenOverlay, Memory::RelToAbs(Signatures::CViewRender_PerformScreenOverlay.Get()), void, __fastcall,
	void* ecx, int x, int y, int w, int h)
{
	if (CFG::Visuals_Remove_Screen_Overlay)
	{
		auto shouldDoOverrides = [&]()
		{
			if (CFG::Visuals_Removals_Mode == 1)
			{
				if (const auto pLocal = H::Entities->GetLocal())
				{
					if (pLocal->m_iObserverMode() == OBS_MODE_IN_EYE)
					{
						return false;
					}
				}
			}

			return true;
		};

		if (shouldDoOverrides())
		{
			return;
		}
	}

	CALL_ORIGINAL(ecx, x, y, w, h);
}