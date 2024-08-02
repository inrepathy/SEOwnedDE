#include "../../SDK/SDK.h"

#include "../Features/CFG.h"

MAKE_SIGNATURE(CTFDroppedWeapon_OnDataChanged, "client.dll", "55 8B EC 83 EC 2C 53 56 8B 75 08 8B D9 57 56 89 5D FC", 0x0);
MAKE_SIGNATURE(CTFDroppedWeapon_ClientThink, "client.dll", "53 56 57 8B F9 E8 ? ? ? ? 8B F0 85 F6 0F 84 ? ? ? ? 8B 16", 0x0);
MAKE_SIGNATURE(CTFDroppedWeapon_OnInternalDrawModel, "client.dll", "55 8B EC 81 EC ? ? ? ? 56 57 8B 7D 08 8B F1 57 89 75 FC E8 ? ? ? ? 84 C0", 0x0);

MAKE_HOOK(CTFDroppedWeapon_OnDataChanged, Signatures::CTFDroppedWeapon_OnDataChanged.Get(), void, __fastcall,
	void* ecx, DataUpdateType_t updateType)
{
	if (CFG::Visuals_Disable_Dropped_Weapons)
		return;

	CALL_ORIGINAL(ecx, updateType);
}

MAKE_HOOK(CTFDroppedWeapon_ClientThink, Signatures::CTFDroppedWeapon_ClientThink.Get(), void, __fastcall,
	void* ecx)
{
	if (CFG::Visuals_Disable_Dropped_Weapons)
		return;

	CALL_ORIGINAL(ecx);
}

MAKE_HOOK(CTFDroppedWeapon_OnInternalDrawModel, Signatures::CTFDroppedWeapon_OnInternalDrawModel.Get(), bool, __fastcall,
	void* ecx, void* pInfo)
{
	if (CFG::Visuals_Disable_Dropped_Weapons)
		return false;

	return CALL_ORIGINAL(ecx, pInfo);
}
