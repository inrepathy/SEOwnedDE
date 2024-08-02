#include "../../SDK/SDK.h"

#include "../Features/CFG.h"

MAKE_SIGNATURE(CTFPlayer_MaybeDrawRailgunBeam, "client.dll", "55 8B EC 56 8B 75 0C 57 6A 01 6A 00 56 68 ? ? ? ? 6A 00 8B F9 E8 ? ? ? ? 83 C4 14 85 C0", 0x0);

//Hello I am TF2 developer and today we're going to shitcode

MAKE_HOOK(CTFPlayer_MaybeDrawRailgunBeam, Signatures::CTFPlayer_MaybeDrawRailgunBeam.Get(), void, __fastcall,
	C_TFPlayer* ecx, void* pFilter, C_TFWeaponBase* pWeapon, const Vector& vStartPos, const Vector& vEndPos)
{
	if (CFG::Visuals_Tracer_Type)
	{
		if (const auto pLocal = H::Entities->GetLocal())
		{
			if (ecx == pLocal)
				return;
		}
	}

	CALL_ORIGINAL(ecx, pFilter, pWeapon, vStartPos, vEndPos);
}
