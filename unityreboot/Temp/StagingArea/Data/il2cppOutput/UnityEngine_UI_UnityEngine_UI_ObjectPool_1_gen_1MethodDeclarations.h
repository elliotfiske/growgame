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

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t6_202;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t5_265;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m6_1551_gshared (ObjectPool_1_t6_202 * __this, UnityAction_1_t5_265 * ___actionOnGet, UnityAction_1_t5_265 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m6_1551(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t6_202 *, UnityAction_1_t5_265 *, UnityAction_1_t5_265 *, const MethodInfo*))ObjectPool_1__ctor_m6_1551_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m6_1553_gshared (ObjectPool_1_t6_202 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m6_1553(__this, method) (( int32_t (*) (ObjectPool_1_t6_202 *, const MethodInfo*))ObjectPool_1_get_countAll_m6_1553_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m6_1555_gshared (ObjectPool_1_t6_202 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m6_1555(__this, ___value, method) (( void (*) (ObjectPool_1_t6_202 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m6_1555_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m6_1557_gshared (ObjectPool_1_t6_202 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countActive_m6_1557(__this, method) (( int32_t (*) (ObjectPool_1_t6_202 *, const MethodInfo*))ObjectPool_1_get_countActive_m6_1557_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m6_1559_gshared (ObjectPool_1_t6_202 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countInactive_m6_1559(__this, method) (( int32_t (*) (ObjectPool_1_t6_202 *, const MethodInfo*))ObjectPool_1_get_countInactive_m6_1559_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m6_1561_gshared (ObjectPool_1_t6_202 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m6_1561(__this, method) (( Object_t * (*) (ObjectPool_1_t6_202 *, const MethodInfo*))ObjectPool_1_Get_m6_1561_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m6_1563_gshared (ObjectPool_1_t6_202 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m6_1563(__this, ___element, method) (( void (*) (ObjectPool_1_t6_202 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m6_1563_gshared)(__this, ___element, method)
