#include "../../SDK/SDK.h"

MAKE_SIGNATURE(CTFWeapon_ShouldDraw, "client.dll", "55 8B EC 83 EC 08 56 8B F1 57 8D 4E FC", 0x0);

MAKE_HOOK(CTFWeapon_ShouldDraw, Signatures::CTFWeapon_ShouldDraw.Get(), bool, __fastcall,
	void* ecx)
{
	if (const auto weapon = reinterpret_cast<C_TFWeaponBase*>(reinterpret_cast<uintptr_t>(ecx) - 4))
	{
		if (weapon->GetWeaponID() == TF_WEAPON_MEDIGUN)
		{
			if (const auto owner = reinterpret_cast<C_TFPlayer*>(weapon->m_hOwner().Get()))
			{
				if (owner->m_hActiveWeapon().Get() == weapon && !owner->InCond(TF_COND_TAUNTING))
				{
					return true;
				}
			}
		}
	}

	return CALL_ORIGINAL(ecx);
}
