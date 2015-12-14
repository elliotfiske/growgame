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

// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Vector4.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32,System.Int32)
extern "C" float Matrix4x4_get_Item_m5_200 (Matrix4x4_t5_39 * __this, int32_t ___row, int32_t ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
extern "C" float Matrix4x4_get_Item_m5_201 (Matrix4x4_t5_39 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Matrix4x4::GetHashCode()
extern "C" int32_t Matrix4x4_GetHashCode_m5_202 (Matrix4x4_t5_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::Equals(System.Object)
extern "C" bool Matrix4x4_Equals_m5_203 (Matrix4x4_t5_39 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
extern "C" Vector4_t5_41  Matrix4x4_GetColumn_m5_204 (Matrix4x4_t5_39 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
extern "C" Vector3_t5_35  Matrix4x4_MultiplyPoint3x4_m5_205 (Matrix4x4_t5_39 * __this, Vector3_t5_35  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Matrix4x4::ToString()
extern "C" String_t* Matrix4x4_ToString_m5_206 (Matrix4x4_t5_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
