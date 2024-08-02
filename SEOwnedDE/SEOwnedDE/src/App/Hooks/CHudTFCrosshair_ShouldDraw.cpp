#include "../../SDK/SDK.h"

MAKE_SIGNATURE(CHudTFCrosshair_ShouldDraw, "client.dll", "8B 15 ? ? ? ? 57 8B F9 85 D2", 0x0);

MAKE_HOOK(CHudTFCrosshair_ShouldDraw, Signatures::CHudTFCrosshair_ShouldDraw.Get(), bool, __fastcall,
	void* ecx)
{
	if (G::bStartedFakeTaunt)
	{
		return false;
	}

	return CALL_ORIGINAL(ecx);
}
