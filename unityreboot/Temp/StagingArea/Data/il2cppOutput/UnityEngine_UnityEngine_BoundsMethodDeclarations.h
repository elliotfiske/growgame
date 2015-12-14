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
#include "UnityEngine_UnityEngine_Bounds.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Bounds__ctor_m5_207 (Bounds_t5_40 * __this, Vector3_t5_35  ___center, Vector3_t5_35  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Bounds::GetHashCode()
extern "C" int32_t Bounds_GetHashCode_m5_208 (Bounds_t5_40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::Equals(System.Object)
extern "C" bool Bounds_Equals_m5_209 (Bounds_t5_40 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
extern "C" Vector3_t5_35  Bounds_get_center_m5_210 (Bounds_t5_40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_center(UnityEngine.Vector3)
extern "C" void Bounds_set_center_m5_211 (Bounds_t5_40 * __this, Vector3_t5_35  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
extern "C" Vector3_t5_35  Bounds_get_size_m5_212 (Bounds_t5_40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_size(UnityEngine.Vector3)
extern "C" void Bounds_set_size_m5_213 (Bounds_t5_40 * __this, Vector3_t5_35  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
extern "C" Vector3_t5_35  Bounds_get_extents_m5_214 (Bounds_t5_40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::set_extents(UnityEngine.Vector3)
extern "C" void Bounds_set_extents_m5_215 (Bounds_t5_40 * __this, Vector3_t5_35  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_min()
extern "C" Vector3_t5_35  Bounds_get_min_m5_216 (Bounds_t5_40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
extern "C" Vector3_t5_35  Bounds_get_max_m5_217 (Bounds_t5_40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::SetMinMax(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void Bounds_SetMinMax_m5_218 (Bounds_t5_40 * __this, Vector3_t5_35  ___min, Vector3_t5_35  ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Bounds::Encapsulate(UnityEngine.Vector3)
extern "C" void Bounds_Encapsulate_m5_219 (Bounds_t5_40 * __this, Vector3_t5_35  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Bounds::ToString()
extern "C" String_t* Bounds_ToString_m5_220 (Bounds_t5_40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::op_Equality(UnityEngine.Bounds,UnityEngine.Bounds)
extern "C" bool Bounds_op_Equality_m5_221 (Object_t * __this /* static, unused */, Bounds_t5_40  ___lhs, Bounds_t5_40  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Bounds::op_Inequality(UnityEngine.Bounds,UnityEngine.Bounds)
extern "C" bool Bounds_op_Inequality_m5_222 (Object_t * __this /* static, unused */, Bounds_t5_40  ___lhs, Bounds_t5_40  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
