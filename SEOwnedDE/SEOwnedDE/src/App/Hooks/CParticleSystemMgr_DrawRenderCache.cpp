#include "../../SDK/SDK.h"

#include "../Features/Materials/Materials.h"
#include "../Features/Outlines/Outlines.h"

MAKE_SIGNATURE(CBaseWorldView_DrawExecute, "client.dll", "55 8B EC 83 EC 08 A1 ? ? ? ? 53 56 57 8B D9 89 45 F8", 0x0);
MAKE_SIGNATURE(CParticleSystemMgr_DrawRenderCache, "client.dll", "55 8B EC 81 EC 38 02 00 00 53 8B D9 57", 0x0);

bool isDrawingWorld = false;

MAKE_HOOK(CBaseWorldView_DrawExecute, Signatures::CBaseWorldView_DrawExecute.Get(), void, __fastcall,
	void* ecx, float waterHeight, view_id_t viewID, float waterZAdjust)
{
	isDrawingWorld = true;
	CALL_ORIGINAL(ecx, waterHeight, viewID, waterZAdjust);
	isDrawingWorld = false;
}

MAKE_HOOK(CParticleSystemMgr_DrawRenderCache, Signatures::CParticleSystemMgr_DrawRenderCache.Get(), void, __fastcall,
	void* ecx, bool bShadowDepth)
{
	if (isDrawingWorld)
	{
		if (const auto rc = I::MaterialSystem->GetRenderContext())
		{
			rc->ClearBuffers(false, false, true);
		}

		F::Materials->Run();
		F::Outlines->RunModels();
	}

	CALL_ORIGINAL(ecx, bShadowDepth);
}
