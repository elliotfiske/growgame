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

// System.Action`1<UnityEngine.Font>
struct Action_1_t1_877;
// UnityEngine.Font
struct Font_t5_127;
// UnityEngine.Material
struct Material_t5_59;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern "C" void Font_add_textureRebuilt_m5_835 (Object_t * __this /* static, unused */, Action_1_t1_877 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern "C" void Font_remove_textureRebuilt_m5_836 (Object_t * __this /* static, unused */, Action_1_t1_877 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Font::get_material()
extern "C" Material_t5_59 * Font_get_material_m5_837 (Font_t5_127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
extern "C" bool Font_HasCharacter_m5_838 (Font_t5_127 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern "C" void Font_InvokeTextureRebuilt_Internal_m5_839 (Object_t * __this /* static, unused */, Font_t5_127 * ___font, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::get_dynamic()
extern "C" bool Font_get_dynamic_m5_840 (Font_t5_127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Font::get_fontSize()
extern "C" int32_t Font_get_fontSize_m5_841 (Font_t5_127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
