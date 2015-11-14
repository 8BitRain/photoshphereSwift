#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Cardboard
struct Cardboard_t28;
// UnityEngine.Camera
struct Camera_t31;
// StereoController
struct StereoController_t32;
// BaseVRDevice
struct BaseVRDevice_t33;
// UnityEngine.RenderTexture
struct RenderTexture_t13;
// System.Uri
struct Uri_t29;
// Cardboard/StereoScreenChangeDelegate
struct StereoScreenChangeDelegate_t26;
// System.Action
struct Action_t30;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_Cardboard_DistortionCorrectionMethod.h"
#include "AssemblyU2DCSharp_Cardboard_BackButtonModes.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// Cardboard
struct  Cardboard_t28  : public MonoBehaviour_t2
{
	// System.Boolean Cardboard::vrModeEnabled
	bool ___vrModeEnabled_5;
	// Cardboard/DistortionCorrectionMethod Cardboard::distortionCorrection
	int32_t ___distortionCorrection_6;
	// System.Boolean Cardboard::enableAlignmentMarker
	bool ___enableAlignmentMarker_7;
	// System.Boolean Cardboard::enableSettingsButton
	bool ___enableSettingsButton_8;
	// Cardboard/BackButtonModes Cardboard::backButtonMode
	int32_t ___backButtonMode_9;
	// System.Boolean Cardboard::tapIsTrigger
	bool ___tapIsTrigger_10;
	// System.Single Cardboard::neckModelScale
	float ___neckModelScale_11;
	// System.Boolean Cardboard::autoDriftCorrection
	bool ___autoDriftCorrection_12;
	// System.Boolean Cardboard::electronicDisplayStabilization
	bool ___electronicDisplayStabilization_13;
	// System.Boolean Cardboard::syncWithCardboardApp
	bool ___syncWithCardboardApp_14;
	// System.Single Cardboard::stereoScreenScale
	float ___stereoScreenScale_16;
	// UnityEngine.Vector2 Cardboard::defaultComfortableViewingRange
	Vector2_t16  ___defaultComfortableViewingRange_18;
	// System.Uri Cardboard::DefaultDeviceProfile
	Uri_t29 * ___DefaultDeviceProfile_19;
	// System.Boolean Cardboard::updated
	bool ___updated_20;
	// Cardboard/StereoScreenChangeDelegate Cardboard::OnStereoScreenChanged
	StereoScreenChangeDelegate_t26 * ___OnStereoScreenChanged_21;
	// System.Action Cardboard::OnTrigger
	Action_t30 * ___OnTrigger_22;
	// System.Action Cardboard::OnTilt
	Action_t30 * ___OnTilt_23;
	// System.Action Cardboard::OnProfileChange
	Action_t30 * ___OnProfileChange_24;
	// System.Action Cardboard::OnBackButton
	Action_t30 * ___OnBackButton_25;
	// System.Boolean Cardboard::<NativeDistortionCorrectionSupported>k__BackingField
	bool ___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_26;
	// System.Boolean Cardboard::<NativeUILayerSupported>k__BackingField
	bool ___U3CNativeUILayerSupportedU3Ek__BackingField_27;
	// System.Boolean Cardboard::<Triggered>k__BackingField
	bool ___U3CTriggeredU3Ek__BackingField_28;
	// System.Boolean Cardboard::<Tilted>k__BackingField
	bool ___U3CTiltedU3Ek__BackingField_29;
	// System.Boolean Cardboard::<ProfileChanged>k__BackingField
	bool ___U3CProfileChangedU3Ek__BackingField_30;
	// System.Boolean Cardboard::<BackButtonPressed>k__BackingField
	bool ___U3CBackButtonPressedU3Ek__BackingField_31;
};
struct Cardboard_t28_StaticFields{
	// Cardboard Cardboard::sdk
	Cardboard_t28 * ___sdk_2;
	// UnityEngine.Camera Cardboard::currentMainCamera
	Camera_t31 * ___currentMainCamera_3;
	// StereoController Cardboard::currentController
	StereoController_t32 * ___currentController_4;
	// BaseVRDevice Cardboard::device
	BaseVRDevice_t33 * ___device_15;
	// UnityEngine.RenderTexture Cardboard::stereoScreen
	RenderTexture_t13 * ___stereoScreen_17;
};
