#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t5_54;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// PixelPerfectCamera
struct  PixelPerfectCamera_t7_5  : public MonoBehaviour_t5_75
{
	// UnityEngine.Vector2 PixelPerfectCamera::nativeResolution
	Vector2_t5_34  ___nativeResolution_4;
	// UnityEngine.Transform PixelPerfectCamera::target
	Transform_t5_54 * ___target_5;
	// UnityEngine.Vector3 PixelPerfectCamera::velocity
	Vector3_t5_35  ___velocity_6;
	// System.Single PixelPerfectCamera::dampTime
	float ___dampTime_7;
};
struct PixelPerfectCamera_t7_5_StaticFields{
	// System.Single PixelPerfectCamera::pixelsToUnits
	float ___pixelsToUnits_2;
	// System.Single PixelPerfectCamera::scale
	float ___scale_3;
};
