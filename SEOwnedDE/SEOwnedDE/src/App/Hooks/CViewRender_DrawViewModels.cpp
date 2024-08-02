#include "../../SDK/SDK.h"

#include "../Features/CFG.h"
#include "../Features/Outlines/Outlines.h"
#include "../Features/Paint/Paint.h"

MAKE_SIGNATURE(CViewRender_DrawViewModels, "client.dll", "55 8B EC 81 EC ? ? ? ? 8B 15 ? ? ? ? 53 8B D9", 0x0);

MAKE_HOOK(CViewRender_DrawViewModels, Signatures::CViewRender_DrawViewModels.Get(), void, __fastcall,
	void* ecx, const CViewSetup& viewRender, bool drawViewmodel)
{
	CALL_ORIGINAL(ecx, viewRender, drawViewmodel);

	F::Outlines->Run();
	F::Paint->Run();
}
