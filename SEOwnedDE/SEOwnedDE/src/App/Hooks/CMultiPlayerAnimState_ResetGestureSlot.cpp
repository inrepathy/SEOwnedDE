#include "../../SDK/SDK.h"

MAKE_SIGNATURE(CMultiPlayerAnimState_ResetGestureSlot, "client.dll", "55 8B EC 56 8B 75 08 57 56 8B F9 E8 ? ? ? ? 84 C0 74 43 C1 E6 04", 0x0);

MAKE_HOOK(CMultiPlayerAnimState_ResetGestureSlot, Signatures::CMultiPlayerAnimState_ResetGestureSlot.Get(), void, __fastcall,
	CMultiPlayerAnimState* ecx, int iGestureSlot)
{
	if (const auto pLocal = H::Entities->GetLocal())
	{
		if (const auto pAnimState = ecx)
		{
			if (pAnimState->m_pEntity == pLocal && iGestureSlot == GESTURE_SLOT_VCD && G::bStartedFakeTaunt)
			{
				return;
			}
		}
	}

	CALL_ORIGINAL(ecx, iGestureSlot);
}
