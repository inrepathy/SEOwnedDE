#pragma once

#include "../../Utils/SignatureManager/SignatureManager.h"

MAKE_SIGNATURE(KeyValues_LoadFromBuffer, "engine.dll", "4C 89 4C 24 ? 48 89 4C 24 ? 55 56", 0);
MAKE_SIGNATURE(KeyValues_Initialize, "engine.dll", "FF 15 ? ? ? ? 89 03 48 8B C3 48 83 C4", 0);
MAKE_SIGNATURE(KeyValues_FindKey, "client.dll", "E8 ? ? ? ? 89 44 9F 04", 0);
MAKE_SIGNATURE(CMatSystemSurface_StartDrawing, "vguimatsurface.dll", "40 53 56 57 48 83 EC ? 48 8B F9 80 3D", 0); //
MAKE_SIGNATURE(CMatSystemSurface_FinishDrawing, "vguimatsurface.dll", "40 53 48 83 EC ? 33 C9", 0); //
MAKE_SIGNATURE(C_TFPlayer_IsPlayerOnSteamFriendsList, "client.dll", "40 57 48 81 EC ? ? ? ? 48 8B FA E8", 0);
MAKE_SIGNATURE(InCond_HudScopePaint, "client.dll", "E8 ? ? ? ? 84 C0 74 2E 8B CE E8 ? ? ? ? 85 C0 74 1A", 5);
MAKE_SIGNATURE(InCond_ViewModelShouldDraw, "client.dll", "8D 88 ? ? ? ? E8 ? ? ? ? 84 C0 74 03 32 C0 C3", 11);
MAKE_SIGNATURE(InCond_PlayerShouldDraw, "client.dll", "E8 ? ? ? ? 84 C0 75 C5", 5);
MAKE_SIGNATURE(InCond_WearableShouldDraw, "client.dll", "E8 ? ? ? ? 84 C0 75 E1 6A 03", 5);
MAKE_SIGNATURE(RevealScoreboard_CTFPlayerShared_IsPlayerDominated_Desired, "client.dll", "84 C0 74 ? 80 7D ? ? 74 ? 8B 83", 0);
MAKE_SIGNATURE(RevealScoreboard_CTFPlayerShared_IsPlayerDominated_Jump, "client.dll", "89 45 BC E8 ? ? ? ? 3B C7 75 1D 80 7D F8 00 75 17 8B 4D C0", 0);
MAKE_SIGNATURE(RevealScoreboard_KeyValues_SetInt_Desired, "client.dll", "8B 03 8B CB 56 57 FF 90 ? ? ? ? 6A", 0);
MAKE_SIGNATURE(RevealScoreboard_KeyValues_SetInt_Jump, "client.dll", "89 45 BC E8 ? ? ? ? 3B C7 75 1D 80 7D F8 00 75 17 8B 4D C0", 0);
MAKE_SIGNATURE(CTFPlayerShared_InCond, "client.dll", "55 8B EC 83 EC 08 56 57 8B 7D 08 8B F1 83 FF 20", 0);
MAKE_SIGNATURE(KeyValues_SetInt, "client.dll", "55 8B EC 6A 01 FF 75 08 E8 ? ? ? ? 85 C0 74 0A 8B 4D 0C 89 48 0C C6 40 10 02", 0);
MAKE_SIGNATURE(CTFPlayerShared_IsPlayerDominated, "client.dll", "55 8B EC 56 57 8B F1 E8 ? ? ? ? 8B F8 85 FF 75 08 5F 32 C0 5E 5D C2 04 00", 0);
MAKE_SIGNATURE(CRendering3dView_EnableWorldFog, "client.dll", "55 8B EC 8B 0D ? ? ? ? 83 EC 0C 8B 01 53 56 FF 90 ? ? ? ? 8B F0 85 F6 74 07", 0);
MAKE_SIGNATURE(CThirdPersonManager_Update, "client.dll", "A1 ? ? ? ? 56 8B F1 85 C0 75 19 8B 0D ? ? ? ? 68 ? ? ? ? 8B 01 FF 50 34 A3 ? ? ? ? 85 C0 74 3F", 0);
MAKE_SIGNATURE(CBasePlayer_CalcPlayerView, "client.dll", "55 8B EC 83 EC 18 53 56 8B F1 8B 0D ? ? ? ? 57 8B 01", 0);
MAKE_SIGNATURE(AttribHookValue, "client.dll", "4C 8B DC 49 89 5B ? 49 89 6B ? 56 57 41 54 41 56 41 57 48 83 EC ? 48 8B 3D ? ? ? ? 4C 8D 35", 0); //
MAKE_SIGNATURE(CBaseEntity_BaseInterpolatePart1, "client.dll", "E8 ? ? ? ? 83 7D FC 00 8B D8", 0);
MAKE_SIGNATURE(CMultiPlayerAnimState_Update, "client.dll", "55 8B EC 81 EC ? ? ? ? 53 57 8B F9 8B 9F ? ? ? ? 89 5D E0 85 DB", 0);
MAKE_SIGNATURE(CSequenceTransitioner_CheckForSequenceChange, "client.dll", "E8 ? ? ? ? 8B 87 ? ? ? ? 83 EC 0C", 0);
MAKE_SIGNATURE(CL_CheckForPureServerWhitelist, "engine.dll", "55 8B EC 83 3D ? ? ? ? 01 7E ? 80 3D ? ? ? ? 00", 0);
MAKE_SIGNATURE(CMultiPlayerAnimState_PlayFlinchGesture, "client.dll", "55 8B EC 56 8B F1 8B 46 08 80 78 49 00 75 3D 57 8B 7D 08 81 FF ? ? ? ? 74 24", 0);
MAKE_SIGNATURE(CHudTFCrosshair_ShouldDraw, "client.dll", "8B 15 ? ? ? ? 57 8B F9 85 D2", 0);
MAKE_SIGNATURE(CTFGameMovement_ProcessMovement, "client.dll", "55 8B EC 56 57 8B 7D 08 8B F1 85 FF 74 6F 53 8B 5D 0C 85 DB", 0);
MAKE_SIGNATURE(TeamFortress_CalculateMaxSpeed, "client.dll", "88 54 24 ? 53 55", 0); //
MAKE_SIGNATURE(RenderLine, "engine.dll", "55 8B EC 81 EC ? ? ? ? 56 E8 ? ? ? ? 8B 0D ? ? ? ? 8B 01 FF 90 ? ? ? ? 8B F0 85 F6", 0);
MAKE_SIGNATURE(CBaseCombatWeapon_HasAmmo, "client.dll", "56 8B F1 83 BE ? ? ? ? ? 75 0D 83 BE ? ? ? ? ? 75 04", 0);
MAKE_SIGNATURE(CBasePlayer_GetAmmoCount, "client.dll", "48 89 5C 24 ? 57 48 83 EC ? 48 63 DA 48 8B F9 83 FB", 0); //
MAKE_SIGNATURE(C_BaseEntity_SetAbsOrigin, "client.dll", "48 89 5C 24 ? 57 48 83 EC ? 48 8B FA 48 8B D9 E8 ? ? ? ? F3 0F 10 83", 0); //
MAKE_SIGNATURE(C_BaseEntity_SetAbsAngles, "client.dll", "48 89 5C 24 ? 57 48 81 EC ? ? ? ? 48 8B FA 48 8B D9 E8 ? ? ? ? F3 0F 10 83", 0); //
MAKE_SIGNATURE(C_TFPlayer_UpdateClientSideAnimation, "client.dll", "48 89 5C 24 ? 57 48 83 EC ? 48 8B D9 E8 ? ? ? ? 48 8B F8 48 85 C0 74 ? 48 8B 00 48 8B CF FF 90 ? ? ? ? 84 C0 75 ? 33 FF 48 3B DF", 0); //
MAKE_SIGNATURE(CTFViewModel_CalcViewModelView, "client.dll", "55 8B EC 83 EC 70 8B 55 0C 53 8B 5D 08 89 4D FC 8B 02 89 45 E8 8B 42 04 89 45 EC 8B 42 08 89 45 F0 56 57", 0);
MAKE_SIGNATURE(INetChannel_SendNetMsg, "engine.dll", "55 8B EC 57 8B F9 8D 8F ? ? ? ? E8 ? ? ? ? 85 C0 75 07 B0 01 5F 5D C2 0C 00", 0);
MAKE_SIGNATURE(WriteUsercmd, "client.dll", "55 8B EC 83 EC 08 53 8B 5D 0C 56 8B 75 10 57 8B 7D 08 8B 46 04 40 39 43 04 8B 47 0C", 0);
MAKE_SIGNATURE(CL_Move, "engine.dll", "55 8B EC 83 EC 38 83 3D ? ? ? ? ? 0F 8C ? ? ? ? E8 ? ? ? ? 84 C0 0F 84 ? ? ? ? 8B 0D ? ? ? ? 56 33 F6 57 33 FF 89 75 EC", 0);
MAKE_SIGNATURE(CL_SendMove, "engine.dll", "55 8B EC 81 EC ? ? ? ? A1 ? ? ? ? 8D 4D CC 56 57 8B 3D ? ? ? ? 40 03 F8 C6 45 B0 01", 0);
MAKE_SIGNATURE(C_BaseEntity_SetAbsVelocity, "client.dll", "55 8B EC 83 EC 0C 56 57 8B 7D 08 8B F1 F3 0F 10 07 0F 2E 86 ? ? ? ? 9F F6 C4 44 7A 28", 0);
MAKE_SIGNATURE(C_BasePlayer_PostDataUpdate_SetAbsVelocityCall, "client.dll", "E8 ? ? ? ? 53 8B CF E8 ? ? ? ? 8D 47 F8 39 05 ? ? ? ? 0F 85 ? ? ? ? 8B 0D ? ? ? ? 8D 55 E8 52 8B 01 FF 50 4C 85 DB", 5);
MAKE_SIGNATURE(CTraceFilterSimple_ShouldHitEntity, "client.dll", "55 8B EC 53 8B 5D 0C 56 8B 75 08 57 53 56 8B F9 E8 ? ? ? ? 83 C4 08", 0);
MAKE_SIGNATURE(C_BaseAnimating_SetupBones, "client.dll", "55 8B EC 81 EC ? ? ? ? 53 56 8B 35 ? ? ? ? 8B D9 33 C9 33 D2 89 4D EC 89 55 F0 8B 46 08", 0);
MAKE_SIGNATURE(CNewParticleEffect_DrawModel, "client.dll", "55 8B EC 83 EC 30 53 8B D9 8B 0D ? ? ? ? 56 33 F6 89 75 DC 89 75 E0 8B 41 08 89 75 F4 89 75 F8 57", 0);
MAKE_SIGNATURE(C_TFWearable_ShouldDraw, "client.dll", "55 8B EC 83 EC 08 53 56 57 8B F9 8B 8F ? ? ? ? 85 C9 0F 84 ? ? ? ? BA ? ? ? ? 83 F9 FF 74 03 0F B7 D1", 0);
MAKE_SIGNATURE(C_TFWearable_InternalDrawModel, "client.dll", "55 8B EC 51 8B C1 53 8B 5D 08", 0);
MAKE_SIGNATURE(CMaterial_Uncache, "MaterialSystem.dll", "55 8B EC 81 EC ? ? ? ? 56 8B F1 8B 0D ? ? ? ? 57 8B 01 FF 90 ? ? ? ? 8B 16", 0);
MAKE_SIGNATURE(C_TFPlayer_AvoidPlayers, "client.dll", "E8 ? ? ? ? 8A 45 FF 5F 5E 8B E5 5D C2 08 00", 0);
MAKE_SIGNATURE(CL_ReadPackets, "engine.dll", "55 8B EC 83 EC 34 8B 0D ? ? ? ? 53 33 DB 89 5D DC 89 5D E0 8B 41 08", 0);
MAKE_SIGNATURE(CL_RunPrediction, "engine.dll", "55 8B EC 83 EC 10 8B 0D ? ? ? ? 33 D2 53 33 DB 89 55 F4 89 5D F0", 0);
MAKE_SIGNATURE(SharedRandomInt, "client.dll", "48 89 5C 24 ? 57 48 83 EC ? 8B FA 41 8B D8", 0); //
MAKE_SIGNATURE(CTFWeaponBase_GetProjectileFireSetup, "client.dll", "53 8B DC 83 EC 08 83 E4 F0 83 C4 04 55 8B 6B 04 89 6C 24 04 8B EC 81 EC ? ? ? ? 56 8B F1 57 8B 06 8B 80 ? ? ? ? FF D0 84 C0 74 12", 0);
MAKE_SIGNATURE(CTFWeaponBase_GetSpreadAngles, "client.dll", "55 8B EC 83 EC 18 56 57 6A 00 68 ? ? ? ? 68 ? ? ? ? 6A 00 8B F9 E8 ? ? ? ? 50 E8 ? ? ? ? 8B F0 83 C4 14 85 F6 74 10 8B 06", 0);
MAKE_SIGNATURE(C_BaseAnimating_FrameAdvance, "client.dll", "55 8B EC 83 EC 14 56 8B F1 57 80 BE ? ? ? ? ? 0F 85 ? ? ? ? 83 BE ? ? ? ? ? 75 05", 0);
MAKE_SIGNATURE(CTFWeaponBase_UpdateAllViewmodelAddons, "client.dll", "55 8B EC 83 EC 08 56 57 8B F1 E8 ? ? ? ? 8B F8 85 FF 0F 84 ? ? ? ? 8B 17", 0);
MAKE_SIGNATURE(CTFGameMovement_PlayerMove, "client.dll", "55 8B EC 83 EC 6C 56 8B F1 6A 7E 8B 8E ? ? ? ? 81 C1 ? ? ? ? E8 ? ? ? ? 84 C0 74 09 8B 46 08", 0);
MAKE_SIGNATURE(CGameMovement_PlayerMove, "client.dll", "E8 ? ? ? ? 8B BE ? ? ? ? 8B 4E 0C", 0);
MAKE_SIGNATURE(CInput_CAM_ToThirdPerson, "client.dll", "55 8B EC 83 EC 0C 8D 55 F4 56 8B F1 8B 0D ? ? ? ? 52 8B 01 FF 50 4C", 0);
MAKE_SIGNATURE(CInput_CAM_ToFirstPerson, "client.dll", "F3 0F 10 05 ? ? ? ? F3 0F 11 05 ? ? ? ? F3 0F 10 05 ? ? ? ? F3 0F 11 05 ? ? ? ? F3 0F 10 05 ? ? ? ? F3 0F 11 05 ? ? ? ? C6 81 95 00 00 00 00", 0);
MAKE_SIGNATURE(CSniperDot_ShouldDraw, "client.dll", "8B 41 78 C1 E8 05 A8 01 74 03 32 C0 C3", 0);
MAKE_SIGNATURE(CParticleSystemMgr_DrawRenderCache, "client.dll", "55 8B EC 81 EC 38 02 00 00 53 8B D9 57", 0);
MAKE_SIGNATURE(CBaseWorldView_DrawExecute, "client.dll", "55 8B EC 83 EC 08 A1 ? ? ? ? 53 56 57 8B D9 89 45 F8", 0);
MAKE_SIGNATURE(CGameEventManager_FireEventIntern, "engine.dll", "55 8B EC 83 EC 34 53 8B 5D 08 57 8B F9 89 7D FC 85 DB 75 0A 5F 32 C0", 0);
MAKE_SIGNATURE(C_TFRagdoll_CreateTFRagdoll, "client.dll", "E8 ? ? ? ? 8B CB E8 ? ? ? ? 84 C0 74 66", 0);
MAKE_SIGNATURE(C_TFPlayer_BRenderAsZombie, "client.dll", "55 8B EC 56 FF 75 08 8B F1 6A 02 E8 ? ? ? ? 83 C4 08 84 C0", 0);
MAKE_SIGNATURE(C_TFRagdoll_CreateTFRagdoll_C_TFPlayer_BRenderAsZombie_Call, "client.dll", "E8 ? ? ? ? 84 C0 74 07 C6 87 ? ? ? ? ? 8B 06 8B CE 6A 00 FF 90 ? ? ? ? 84 DB", 5);
MAKE_SIGNATURE(CTFWeaponBase_GetTracerType, "client.dll", "55 8B EC 51 53 56 57 8B F9 E8 ? ? ? ? 6A 00", 0);
MAKE_SIGNATURE(CTFPlayer_FireBullet, "client.dll", "55 8B EC 81 EC ? ? ? ? 53 56 57 8B F9 8B 5D", 0);
MAKE_SIGNATURE(CTFPlayer_MaybeDrawRailgunBeam, "client.dll", "55 8B EC 56 8B 75 0C 57 6A 01 6A 00 56 68 ? ? ? ? 6A 00 8B F9 E8 ? ? ? ? 83 C4 14 85 C0", 0);
MAKE_SIGNATURE(CTFWeaponBase_GetShootSound, "client.dll", "55 8B EC 53 8B 5D 08 57 8B F9 80 BF ? ? ? ? ? 0F 84 ? ? ? ? 8B 07", 0);
MAKE_SIGNATURE(BInEndOfMatch, "client.dll", "48 83 EC ? 48 8B 05 ? ? ? ? 48 85 C0 74 ? 83 78 ? ? 75", 0); //
MAKE_SIGNATURE(CMultiPlayerAnimState_ResetGestureSlot, "client.dll", "55 8B EC 56 8B 75 08 57 56 8B F9 E8 ? ? ? ? 84 C0 74 43 C1 E6 04", 0);
MAKE_SIGNATURE(CViewRender_DrawViewModels, "client.dll", "55 8B EC 81 EC ? ? ? ? 8B 15 ? ? ? ? 53 8B D9", 0);
MAKE_SIGNATURE(C_BaseEntity_EstimateAbsVelocity, "client.dll", "55 8B EC 83 EC 0C 56 8B F1 E8 ? ? ? ? 3B F0 75 2B 8B CE", 0);
MAKE_SIGNATURE(C_BaseEntity_InterpolateServerEntities, "client.dll", "55 8B EC 83 EC 30 8B 0D ? ? ? ? 53", 0);
MAKE_SIGNATURE(CTFWeaponBaseMelee_CalcIsAttackCriticalHelper, "client.dll", "40 57 48 83 EC ? 48 8B 05 ? ? ? ? 48 8B F9 83 78 ? ? 75", 0); //
MAKE_SIGNATURE(C_BaseEntity_AddVar, "client.dll", "55 8B EC 83 EC 0C 53 8B D9 56 33 F6 57 8B 4B 20 8B 7D 0C", 0);
MAKE_SIGNATURE(C_TFPlayer_C_TFPlayer_C_BaseEntity_AddVar_Call, "client.dll", "E8 ? ? ? ? 6A 30 6A 00 56", 5);
MAKE_SIGNATURE(DoEnginePostProcessing, "client.dll", "55 8B EC 81 EC ? ? ? ? 8B 0D ? ? ? ? 53 33 DB 89 5D 8C 89 5D 90 8B 01", 0);
MAKE_SIGNATURE(C_TFDroppedWeapon_OnDataChanged, "client.dll", "55 8B EC 83 EC 2C 53 56 8B 75 08 8B D9 57 56 89 5D FC", 0);
MAKE_SIGNATURE(C_TFDroppedWeapon_ClientThink, "client.dll", "53 56 57 8B F9 E8 ? ? ? ? 8B F0 85 F6 0F 84 ? ? ? ? 8B 16", 0);
MAKE_SIGNATURE(C_TFDroppedWeapon_OnInternalDrawModel, "client.dll", "55 8B EC 81 EC ? ? ? ? 56 57 8B 7D 08 8B F1 57 89 75 FC E8 ? ? ? ? 84 C0", 0);
MAKE_SIGNATURE(C_TFWeaponBase_GetAppropriateWorldOrViewModel, "client.dll", "56 57 6A 00 68 ? ? ? ? 68 ? ? ? ? 6A 00 8B F1 E8 ? ? ? ? 50 E8 ? ? ? ? 8B F8 83 C4 14 85 FF 74 ? 8B CE", 0);
MAKE_SIGNATURE(C_BaseAnimating_GetBonePosition, "client.dll", "55 8B EC 83 EC 30 56 6A 00 8B F1 E8", 0);
MAKE_SIGNATURE(C_TFPlayer_OnDataChanged, "client.dll", "55 8B EC 83 EC 10 53 8B D9 56 57 8D 7B F8 8B CF 89 7D F4", 0);
MAKE_SIGNATURE(CMultiPlayerAnimState_GetOuterAbsVelocity, "client.dll", "55 8B EC 8B 49 1C 5D E9 ? ? ? ? CC CC CC CC 55 8B EC 83 EC 0C", 0);
MAKE_SIGNATURE(CViewRender_RenderView, "client.dll", "55 8B EC 81 EC ? ? ? ? 53 56 57 8B F9 89 7D FC 8D 8F ? ? ? ?", 0);
MAKE_SIGNATURE(C_TFPlayer_UpdateWearables, "client.dll", "56 8B F1 E8 ? ? ? ? 8B 06 8B CE 6A 00 68 ? ? ? ? 68 ? ? ? ? 6A 00 FF 90 ? ? ? ? 50 E8 ? ? ? ? 83 C4 14", 0);
MAKE_SIGNATURE(C_BaseEntity_CreateShadow, "client.dll", "56 8B F1 8B 46 04 8D 4E 04 57 FF 50 7C 8B C8 85 C9 75 27", 0);
MAKE_SIGNATURE(R_ComputeLightingOrigin, "engine.dll", "55 8B EC 83 EC 30 56 8B 75 0C 8B 96 ? ? ? ? 85 D2 74 06 8B 54 32 08 EB 02", 0);
MAKE_SIGNATURE(C_TFWeaponBase_CalcIsAttackCriticalHelper, "client.dll", "48 89 5C 24 ? 55 56 57 48 81 EC ? ? ? ? 0F 29 74 24", 0); //
MAKE_SIGNATURE(LookupSequence, "client.dll", "55 8B EC 56 8B 75 08 85 F6 75 05 33 C0 5E 5D C3 8B CE E8 ? ? ? ? 84 C0 74 F0 53 57 8B CE 33 FF", 0);
MAKE_SIGNATURE(C_BaseEntity_InvalidateBoneCache, "client.dll", "8B 05 ? ? ? ? FF C8 C7 81", 0); //
MAKE_SIGNATURE(CEconItemSchema_GetItemDefinition, "client.dll", "E8 ? ? ? ? 0F B6 40 15", 0);
MAKE_SIGNATURE(CViewRender_PerformScreenOverlay, "client.dll", "E8 ? ? ? ? 8B 0D ? ? ? ? 8B 01 FF 90 ? ? ? ? A1 ? ? ? ? 83 78 30 00 75 61", 0);
MAKE_SIGNATURE(C_BaseEntity_ResetLatched, "client.dll", "53 8B D9 8B 03 8B 80 ? ? ? ? FF D0 84 C0 75 25 57 8B 7B 20", 0);
MAKE_SIGNATURE(C_OP_RenderSprites_RenderSpriteCard, "client.dll", "E8 ? ? ? ? 47 83 EE 01 75 E1", 0)
MAKE_SIGNATURE(CClientState_ProcessFixAngle, "engine.dll", "55 8B EC 8B 45 08 83 EC 08 F3 0F 10 15 ? ? ? ? F3 0F 10 0D ? ? ? ? F3 0F 10 40 ? 0F 2F C2 76 09 F3 0F 5C C1", 0);
MAKE_SIGNATURE(CUserMessages_DispatchUserMessage, "client.dll", "55 8B EC 8B 55 08 83 EC 18 56", 0);
MAKE_SIGNATURE(R_LoadSkys, "engine.dll", "E8 ? ? ? ? E8 ? ? ? ? 83 3D ? ? ? ? ? 7D 59 8B 0D ? ? ? ? 8B 01 FF 50 60 E8 ? ? ? ? 8B C8 8B 10", 0);
MAKE_SIGNATURE(CreatePhysicsObject, "vphysics.dll", "55 8B EC 81 EC ? ? ? ? 83 7D 10 00", 0);
MAKE_SIGNATURE(CPhysicsObject_RecomputeDragBases, "vphysics.dll", "55 8B EC 83 EC 38 57 8B F9 8B 07 8B 40 04 FF D0", 0);
MAKE_SIGNATURE(RenderBox, "engine.dll", "E8 ? ? ? ? 83 C4 1C 80 7F 24 00", 0);
MAKE_SIGNATURE(RenderWireframeBox, "engine.dll", "55 8B EC 81 EC ? ? ? ? 56 E8 ? ? ? ? 8B 0D ? ? ? ? 8B 01 FF 90 ? ? ? ? 8B F0 89 75 F8 85 F6 74 07 8B 06 8B CE", 0);
MAKE_SIGNATURE(C_BaseAnimating_DrawModel, "client.dll", "55 8B EC 83 EC 20 8B 15 ? ? ? ? 53 33 DB 56", 0);
MAKE_SIGNATURE(m_hViewmodelAttachment_DrawModel, "client.dll", "FF 75 0C FF 50 28 8B 8E ? ? ? ? 85 C9 74 28 BA ? ? ? ? 83 F9 FF 74 03 0F B7 D1", 6);
MAKE_SIGNATURE(CBaseClientState_SendStringCmd, "engine.dll", "55 8B EC 8B 49 10", 0);
MAKE_SIGNATURE(C_TFWeaponBaseGun_GetWeaponSpread, "client.dll", "55 8B EC 83 EC 08 56 8B F1 57 6A 01 6A 00", 0);
MAKE_SIGNATURE(FX_FireBullets, "client.dll", "55 8B EC 81 EC ? ? ? ? 53 8B 5D 18 56 53 E8 ? ? ? ? 8B F0 83 C4 04 85 F6 75 17", 0);
MAKE_SIGNATURE(C_TFGameRules_ModifySentChat, "client.dll", "55 8B EC 80 B9 ? ? ? ? ? 56 8B 75 08 74 26", 0);
MAKE_SIGNATURE(C_TFWeapon_ShouldDraw, "client.dll", "55 8B EC 83 EC 08 56 8B F1 57 8D 4E FC", 0);
MAKE_SIGNATURE(C_TFPlayer_ThirdPersonSwitch, "client.dll", "E8 ? ? ? ? 8A 87 ? ? ? ? 88 87 ? ? ? ?", 0);
MAKE_SIGNATURE(CBaseHudChat_ChatPrintf, "client.dll", "55 8B EC B8 ? ? ? ? E8 ? ? ? ? 53 56 57 8D 45 18", 0);
MAKE_SIGNATURE(CBaseHudChatLine_InsertAndColorizeText, "client.dll", "55 8B EC 83 EC 40 53 8B D9 56 57 89 5D D4", 0);