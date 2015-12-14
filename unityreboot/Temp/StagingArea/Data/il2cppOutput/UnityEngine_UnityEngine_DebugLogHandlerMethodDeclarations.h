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

// UnityEngine.DebugLogHandler
struct DebugLogHandler_t5_69;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t5_5;
struct Object_t5_5_marshaled;
// System.Exception
struct Exception_t1_33;
// System.Object[]
struct ObjectU5BU5D_t1_156;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_LogType.h"

// System.Void UnityEngine.DebugLogHandler::.ctor()
extern "C" void DebugLogHandler__ctor_m5_414 (DebugLogHandler_t5_69 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.DebugLogHandler::Internal_Log(UnityEngine.LogType,System.String,UnityEngine.Object)
extern "C" void DebugLogHandler_Internal_Log_m5_415 (Object_t * __this /* static, unused */, int32_t ___level, String_t* ___msg, Object_t5_5 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.DebugLogHandler::Internal_LogException(System.Exception,UnityEngine.Object)
extern "C" void DebugLogHandler_Internal_LogException_m5_416 (Object_t * __this /* static, unused */, Exception_t1_33 * ___exception, Object_t5_5 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.DebugLogHandler::LogFormat(UnityEngine.LogType,UnityEngine.Object,System.String,System.Object[])
extern "C" void DebugLogHandler_LogFormat_m5_417 (DebugLogHandler_t5_69 * __this, int32_t ___logType, Object_t5_5 * ___context, String_t* ___format, ObjectU5BU5D_t1_156* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.DebugLogHandler::LogException(System.Exception,UnityEngine.Object)
extern "C" void DebugLogHandler_LogException_m5_418 (DebugLogHandler_t5_69 * __this, Exception_t1_33 * ___exception, Object_t5_5 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
