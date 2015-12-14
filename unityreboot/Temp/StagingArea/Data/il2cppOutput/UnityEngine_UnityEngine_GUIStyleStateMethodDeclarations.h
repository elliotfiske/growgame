#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.GUIStyleState
struct GUIStyleState_t5_165;
// UnityEngine.GUIStyle
struct GUIStyle_t5_20;
// UnityEngine.Texture2D
struct Texture2D_t5_25;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.GUIStyleState::.ctor()
extern "C" void GUIStyleState__ctor_m5_1064 (GUIStyleState_t5_165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::.ctor(UnityEngine.GUIStyle,System.IntPtr)
extern "C" void GUIStyleState__ctor_m5_1065 (GUIStyleState_t5_165 * __this, GUIStyle_t5_20 * ___sourceStyle, IntPtr_t ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyleState::ProduceGUIStyleStateFromDeserialization(UnityEngine.GUIStyle,System.IntPtr)
extern "C" GUIStyleState_t5_165 * GUIStyleState_ProduceGUIStyleStateFromDeserialization_m5_1066 (Object_t * __this /* static, unused */, GUIStyle_t5_20 * ___sourceStyle, IntPtr_t ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyleState::GetGUIStyleState(UnityEngine.GUIStyle,System.IntPtr)
extern "C" GUIStyleState_t5_165 * GUIStyleState_GetGUIStyleState_m5_1067 (Object_t * __this /* static, unused */, GUIStyle_t5_20 * ___sourceStyle, IntPtr_t ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::Finalize()
extern "C" void GUIStyleState_Finalize_m5_1068 (GUIStyleState_t5_165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::Init()
extern "C" void GUIStyleState_Init_m5_1069 (GUIStyleState_t5_165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::Cleanup()
extern "C" void GUIStyleState_Cleanup_m5_1070 (GUIStyleState_t5_165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.GUIStyleState::GetBackgroundInternalFromDeserialization()
extern "C" Texture2D_t5_25 * GUIStyleState_GetBackgroundInternalFromDeserialization_m5_1071 (GUIStyleState_t5_165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.GUIStyleState::GetBackgroundInternal()
extern "C" Texture2D_t5_25 * GUIStyleState_GetBackgroundInternal_m5_1072 (GUIStyleState_t5_165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
extern "C" void GUIStyleState_set_textColor_m5_1073 (GUIStyleState_t5_165 * __this, Color_t5_128  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::INTERNAL_set_textColor(UnityEngine.Color&)
extern "C" void GUIStyleState_INTERNAL_set_textColor_m5_1074 (GUIStyleState_t5_165 * __this, Color_t5_128 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
