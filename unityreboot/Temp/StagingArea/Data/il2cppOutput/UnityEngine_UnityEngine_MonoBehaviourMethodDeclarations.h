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

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t5_75;
// System.String
struct String_t;
// UnityEngine.Coroutine
struct Coroutine_t5_13;
struct Coroutine_t5_13_marshaled;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" void MonoBehaviour__ctor_m5_443 (MonoBehaviour_t5_75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::Internal_CancelInvokeAll()
extern "C" void MonoBehaviour_Internal_CancelInvokeAll_m5_444 (MonoBehaviour_t5_75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.MonoBehaviour::Internal_IsInvokingAll()
extern "C" bool MonoBehaviour_Internal_IsInvokingAll_m5_445 (MonoBehaviour_t5_75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
extern "C" void MonoBehaviour_Invoke_m5_446 (MonoBehaviour_t5_75 * __this, String_t* ___methodName, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
extern "C" void MonoBehaviour_InvokeRepeating_m5_447 (MonoBehaviour_t5_75 * __this, String_t* ___methodName, float ___time, float ___repeatRate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::CancelInvoke()
extern "C" void MonoBehaviour_CancelInvoke_m5_448 (MonoBehaviour_t5_75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::CancelInvoke(System.String)
extern "C" void MonoBehaviour_CancelInvoke_m5_449 (MonoBehaviour_t5_75 * __this, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.MonoBehaviour::IsInvoking(System.String)
extern "C" bool MonoBehaviour_IsInvoking_m5_450 (MonoBehaviour_t5_75 * __this, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.MonoBehaviour::IsInvoking()
extern "C" bool MonoBehaviour_IsInvoking_m5_451 (MonoBehaviour_t5_75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" Coroutine_t5_13 * MonoBehaviour_StartCoroutine_m5_452 (MonoBehaviour_t5_75 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
extern "C" Coroutine_t5_13 * MonoBehaviour_StartCoroutine_Auto_m5_453 (MonoBehaviour_t5_75 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)
extern "C" Coroutine_t5_13 * MonoBehaviour_StartCoroutine_m5_454 (MonoBehaviour_t5_75 * __this, String_t* ___methodName, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
extern "C" Coroutine_t5_13 * MonoBehaviour_StartCoroutine_m5_455 (MonoBehaviour_t5_75 * __this, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
extern "C" void MonoBehaviour_StopCoroutine_m5_456 (MonoBehaviour_t5_75 * __this, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutine_m5_457 (MonoBehaviour_t5_75 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_m5_458 (MonoBehaviour_t5_75 * __this, Coroutine_t5_13 * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)
extern "C" void MonoBehaviour_StopCoroutineViaEnumerator_Auto_m5_459 (MonoBehaviour_t5_75 * __this, Object_t * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)
extern "C" void MonoBehaviour_StopCoroutine_Auto_m5_460 (MonoBehaviour_t5_75 * __this, Coroutine_t5_13 * ___routine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
extern "C" void MonoBehaviour_StopAllCoroutines_m5_461 (MonoBehaviour_t5_75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern "C" void MonoBehaviour_print_m5_462 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.MonoBehaviour::get_useGUILayout()
extern "C" bool MonoBehaviour_get_useGUILayout_m5_463 (MonoBehaviour_t5_75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::set_useGUILayout(System.Boolean)
extern "C" void MonoBehaviour_set_useGUILayout_m5_464 (MonoBehaviour_t5_75 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
