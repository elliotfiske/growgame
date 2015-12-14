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

// UnityEngine.Events.UnityEvent`1<System.Single>
struct UnityEvent_1_t5_247;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t5_256;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t5_209;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::.ctor()
extern "C" void UnityEvent_1__ctor_m5_1381_gshared (UnityEvent_1_t5_247 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m5_1381(__this, method) (( void (*) (UnityEvent_1_t5_247 *, const MethodInfo*))UnityEvent_1__ctor_m5_1381_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m5_1383_gshared (UnityEvent_1_t5_247 * __this, UnityAction_1_t5_256 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m5_1383(__this, ___call, method) (( void (*) (UnityEvent_1_t5_247 *, UnityAction_1_t5_256 *, const MethodInfo*))UnityEvent_1_AddListener_m5_1383_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m5_1429_gshared (UnityEvent_1_t5_247 * __this, UnityAction_1_t5_256 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m5_1429(__this, ___call, method) (( void (*) (UnityEvent_1_t5_247 *, UnityAction_1_t5_256 *, const MethodInfo*))UnityEvent_1_RemoveListener_m5_1429_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Single>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m5_1560_gshared (UnityEvent_1_t5_247 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m5_1560(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t5_247 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m5_1560_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t5_209 * UnityEvent_1_GetDelegate_m5_1561_gshared (UnityEvent_1_t5_247 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m5_1561(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t5_209 * (*) (UnityEvent_1_t5_247 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m5_1561_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Single>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t5_209 * UnityEvent_1_GetDelegate_m5_1562_gshared (Object_t * __this /* static, unused */, UnityAction_1_t5_256 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m5_1562(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t5_209 * (*) (Object_t * /* static, unused */, UnityAction_1_t5_256 *, const MethodInfo*))UnityEvent_1_GetDelegate_m5_1562_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Single>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m5_1382_gshared (UnityEvent_1_t5_247 * __this, float ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m5_1382(__this, ___arg0, method) (( void (*) (UnityEvent_1_t5_247 *, float, const MethodInfo*))UnityEvent_1_Invoke_m5_1382_gshared)(__this, ___arg0, method)
