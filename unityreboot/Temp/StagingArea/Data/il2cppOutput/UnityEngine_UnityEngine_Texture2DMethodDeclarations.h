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

// UnityEngine.Texture2D
struct Texture2D_t5_25;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"

// UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
extern "C" Texture2D_t5_25 * Texture2D_get_whiteTexture_m5_73 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)
extern "C" Color_t5_128  Texture2D_GetPixelBilinear_m5_74 (Texture2D_t5_25 * __this, float ___u, float ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::INTERNAL_CALL_GetPixelBilinear(UnityEngine.Texture2D,System.Single,System.Single,UnityEngine.Color&)
extern "C" void Texture2D_INTERNAL_CALL_GetPixelBilinear_m5_75 (Object_t * __this /* static, unused */, Texture2D_t5_25 * ___self, float ___u, float ___v, Color_t5_128 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
