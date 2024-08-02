#include "../../SDK/SDK.h"

#include "../Features/CFG.h"

MAKE_SIGNATURE(CBasePlayer_CalcPlayerView, "client.dll", "55 8B EC 83 EC 18 53 56 8B F1 8B 0D ? ? ? ? 57 8B 01", 0x0);

MAKE_HOOK(CBasePlayer_CalcPlayerView, Signatures::CBasePlayer_CalcPlayerView.Get(), void, __fastcall,
	void* ecx, Vector& eyeOrigin, QAngle& eyeAngles, float& fov)
{
	if (CFG::Visuals_Remove_Punch)
	{
		if (const auto pBasePlayer = static_cast<C_BasePlayer*>(ecx))
		{
			const Vec3 vOldPunch = pBasePlayer->m_vecPunchAngle();
			pBasePlayer->m_vecPunchAngle() = {};
			CALL_ORIGINAL(ecx, eyeOrigin, eyeAngles, fov);
			pBasePlayer->m_vecPunchAngle() = vOldPunch;
			return;
		}
	}

	CALL_ORIGINAL(ecx, eyeOrigin, eyeAngles, fov);
}
