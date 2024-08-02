#include "../../SDK/SDK.h"

#include "../Features/CFG.h"

MAKE_SIGNATURE(R_ComputeLightingOrigin, "engine.dll", "55 8B EC 83 EC 30 56 8B 75 0C 8B 96 ? ? ? ? 85 D2 74 06 8B 54 32 08 EB 02", 0x0);

MAKE_HOOK(R_ComputeLightingOrigin, Signatures::R_ComputeLightingOrigin.Get(), void, __cdecl,
	IClientRenderable* pRenderable, studiohdr_t* pStudioHdr, const matrix3x4_t& matrix, Vector& center)
{
	if (CFG::Misc_ComputeLightingOrigin_Fix)
	{
		if (!I::EngineClient->IsInGame() || !I::EngineClient->IsConnected() || !H::Entities->GetLocal())
		{
			CALL_ORIGINAL(pRenderable, pStudioHdr, matrix, center);

			return;
		}

		if (const auto pEntity = static_cast<C_BaseEntity*>(pRenderable))
		{
			if (const auto pOwner = pEntity->m_hOwnerEntity().Get())
			{
				if (pOwner->GetClassId() == ETFClassIds::CTFPlayer)
				{
					center = pOwner->As<C_TFPlayer>()->GetRenderCenter();

					return;
				}
			}
			else
			{
				if (pEntity->GetClassId() == ETFClassIds::CTFPlayer)
				{
					center = pEntity->As<C_TFPlayer>()->GetRenderCenter();

					return;
				}
			}
		}
	}

	CALL_ORIGINAL(pRenderable, pStudioHdr, matrix, center);
}
