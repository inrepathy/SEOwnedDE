#pragma once
#include "iclientmode.h"
#include "bitbuf.h"
#include "checksum_crc.h"
#include "interface.h"

struct kbutton_t;
struct CameraThirdData_t;

using DWORD = unsigned long;

class CVerifiedUserCmd
{
public:
	CUserCmd m_cmd;
	CRC32_t m_crc;
};

class IInput
{
public:
	virtual	void Init_All(void) = 0;
	virtual void Shutdown_All(void) = 0;
	virtual int GetButtonBits(int) = 0;
	virtual void CreateMove(int sequence_number, float input_sample_frametime, bool active) = 0;
	virtual void ExtraMouseSample(float frametime, bool active) = 0;
	virtual bool WriteUsercmdDeltaToBuffer(bf_write *buf, int from, int to, bool isnewcommand) = 0;
	virtual void EncodeUserCmdToBuffer(bf_write &buf, int slot) = 0;
	virtual void DecodeUserCmdFromBuffer(bf_read &buf, int slot) = 0;
	virtual CUserCmd *GetUserCmd(int sequence_number) = 0;
	virtual void MakeWeaponSelection(void *weapon) = 0;
	virtual float KeyState(kbutton_t *key) = 0;
	virtual int KeyEvent(int eventcode, ButtonCode_t keynum, const char *pszCurrentBinding) = 0;
	virtual kbutton_t *FindKey(const char *name) = 0;
	virtual void ControllerCommands(void) = 0;
	virtual void Joystick_Advanced(void) = 0;
	virtual void Joystick_SetSampleTime(float frametime) = 0;
	virtual void IN_SetSampleTime(float frametime) = 0;
	virtual void AccumulateMouse(void) = 0;
	virtual void ActivateMouse(void) = 0;
	virtual void DeactivateMouse(void) = 0;
	virtual void ClearStates(void) = 0;
	virtual float GetLookSpring(void) = 0;
	virtual void GetFullscreenMousePos(int *mx, int *my, int *unclampedx = 0, int *unclampedy = 0) = 0;
	virtual void SetFullscreenMousePos(int mx, int my) = 0;
	virtual void ResetMouse(void) = 0;
	virtual	float GetLastForwardMove(void) = 0;
	virtual	float Joystick_GetForward(void) = 0;
	virtual	float Joystick_GetSide(void) = 0;
	virtual	float Joystick_GetPitch(void) = 0;
	virtual	float Joystick_GetYaw(void) = 0;
	virtual void CAM_Think(void) = 0;
	virtual int CAM_IsThirdPerson(void) = 0;
	virtual void CAM_ToThirdPerson(void) = 0;
	virtual void CAM_ToFirstPerson(void) = 0;
	virtual void CAM_StartMouseMove(void) = 0;
	virtual void CAM_EndMouseMove(void) = 0;
	virtual void CAM_StartDistance(void) = 0;
	virtual void CAM_EndDistance(void) = 0;
	virtual int CAM_InterceptingMouse(void) = 0;
	virtual void CAM_ToOrthographic() = 0;
	virtual	bool CAM_IsOrthographic() const = 0;
	virtual	void CAM_OrthographicSize(float &w, float &h) const = 0;
	virtual void SetPreferredGameActionSet(GameActionSet_t action_set) = 0;
	virtual GameActionSet_t GetPreferredGameActionSet() = 0;
	virtual void SetGameActionSetFlags(GameActionSetFlags_t action_set_flags) = 0;
	virtual void LevelInit(void) = 0;
	virtual void ClearInputButton(int bits) = 0;
	virtual	void CAM_SetCameraThirdData(CameraThirdData_t *pCameraData, const QAngle &vecCameraOffset) = 0;
	virtual void CAM_CameraThirdThink(void) = 0;
	virtual	bool EnableJoystickMode() = 0;
	virtual bool IsSteamControllerActive() = 0;

	CUserCmd *GetCommands() {
		return *reinterpret_cast<CUserCmd **>(reinterpret_cast<std::uintptr_t>(this) + 0xFC);
	}

	CVerifiedUserCmd *GetVerifiedCommands() {
		return *reinterpret_cast<CVerifiedUserCmd **>(reinterpret_cast<std::uintptr_t>(this) + 0x100);
	}
};

MAKE_INTERFACE_SIGNATURE(IInput, Input, "client.dll", "8B 0D ? ? ? ? 56 8B 01 FF 50 24 8B 45 FC 5F 5E 5B C7 40 ? ? ? ? ? 8B E5 5D C2 04 00", 2, 2);