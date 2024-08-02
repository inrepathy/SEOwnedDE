#include "../../SDK/SDK.h"

#include "../Features/MovementSimulation/MovementSimulation.h"

MAKE_SIGNATURE(CTFGameMovement_PlayerMove, "client.dll", "55 8B EC 83 EC 6C 56 8B F1 6A 7E 8B 8E ? ? ? ? 81 C1 ? ? ? ? E8 ? ? ? ? 84 C0 74 09 8B 46 08", 0x0);

MAKE_HOOK(CTFGameMovement_PlayerMove, Signatures::CTFGameMovement_PlayerMove.Get(), void, __fastcall,
	CTFGameMovement* ecx)
{
	if (F::MovementSimulation->IsRunning())
	{
		reinterpret_cast<void(__thiscall *)(void*)>(Memory::RelToAbs(Signatures::CGameMovement_PlayerMove.Get()))(ecx);
		return;
	}

	CALL_ORIGINAL(ecx);
}
