#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t6_64;
// UnityEngine.UI.Image
struct Image_t6_65;
// System.String[]
struct StringU5BU5D_t1_198;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// DialogManager
struct  DialogManager_t7_2  : public MonoBehaviour_t5_75
{
	// UnityEngine.UI.Text DialogManager::dialogText
	Text_t6_64 * ___dialogText_3;
	// System.Single DialogManager::baseFontSize
	float ___baseFontSize_4;
	// UnityEngine.UI.Image DialogManager::downArrow
	Image_t6_65 * ___downArrow_5;
	// System.Int32 DialogManager::dialogNdx
	int32_t ___dialogNdx_6;
	// System.String[] DialogManager::strings
	StringU5BU5D_t1_198* ___strings_7;
};
struct DialogManager_t7_2_StaticFields{
	// System.Boolean DialogManager::showingDialog
	bool ___showingDialog_2;
};
