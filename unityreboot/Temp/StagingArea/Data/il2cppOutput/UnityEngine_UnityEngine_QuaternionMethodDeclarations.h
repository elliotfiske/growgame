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

// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" float Quaternion_Dot_m5_166 (Object_t * __this /* static, unused */, Quaternion_t5_37  ___a, Quaternion_t5_37  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C" Quaternion_t5_37  Quaternion_Inverse_m5_167 (Object_t * __this /* static, unused */, Quaternion_t5_37  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&,UnityEngine.Quaternion&)
extern "C" void Quaternion_INTERNAL_CALL_Inverse_m5_168 (Object_t * __this /* static, unused */, Quaternion_t5_37 * ___rotation, Quaternion_t5_37 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
extern "C" String_t* Quaternion_ToString_m5_169 (Quaternion_t5_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C" int32_t Quaternion_GetHashCode_m5_170 (Quaternion_t5_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C" bool Quaternion_Equals_m5_171 (Quaternion_t5_37 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Vector3_t5_35  Quaternion_op_Multiply_m5_172 (Object_t * __this /* static, unused */, Quaternion_t5_37  ___rotation, Vector3_t5_35  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" bool Quaternion_op_Inequality_m5_173 (Object_t * __this /* static, unused */, Quaternion_t5_37  ___lhs, Quaternion_t5_37  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
