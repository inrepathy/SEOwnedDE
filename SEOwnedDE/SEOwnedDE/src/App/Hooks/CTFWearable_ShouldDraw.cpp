#include "../../SDK/SDK.h"

#include "../Features/CFG.h"

MAKE_SIGNATURE(CTFWearable_ShouldDraw, "client.dll", "55 8B EC 83 EC 08 53 56 57 8B F9 8B 8F ? ? ? ? 85 C9 0F 84 ? ? ? ? BA ? ? ? ? 83 F9 FF 74 03 0F B7 D1", 0x0);
MAKE_SIGNATURE(CTFWearable_InternalDrawModel, "client.dll", "55 8B EC 51 8B C1 53 8B 5D 08", 0x0);

MAKE_HOOK(CTFWearable_ShouldDraw, Signatures::CTFWearable_ShouldDraw.Get(), bool, __fastcall,
	void* ecx)
{
	if (CFG::Visuals_Disable_Wearables)
		return false;

	return CALL_ORIGINAL(ecx);
}

MAKE_HOOK(CTFWearable_InternalDrawModel, Signatures::CTFWearable_InternalDrawModel.Get(), int, __fastcall,
	void* ecx, int flags)
{
	if (CFG::Visuals_Disable_Wearables)
		return 0;

	return CALL_ORIGINAL(ecx, flags);
}