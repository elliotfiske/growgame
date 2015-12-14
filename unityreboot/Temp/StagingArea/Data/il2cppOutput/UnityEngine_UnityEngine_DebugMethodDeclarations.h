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

// UnityEngine.ILogger
struct ILogger_t5_233;
// System.Object
struct Object_t;
// UnityEngine.Object
struct Object_t5_5;
struct Object_t5_5_marshaled;
// System.Exception
struct Exception_t1_33;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Debug::.cctor()
extern "C" void Debug__cctor_m5_419 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ILogger UnityEngine.Debug::get_logger()
extern "C" Object_t * Debug_get_logger_m5_420 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" void Debug_Log_m5_421 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" void Debug_LogError_m5_422 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
extern "C" void Debug_LogError_m5_423 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t5_5 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern "C" void Debug_LogException_m5_424 (Object_t * __this /* static, unused */, Exception_t1_33 * ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
extern "C" void Debug_LogException_m5_425 (Object_t * __this /* static, unused */, Exception_t1_33 * ___exception, Object_t5_5 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" void Debug_LogWarning_m5_426 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
extern "C" void Debug_LogWarning_m5_427 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t5_5 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
