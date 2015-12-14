#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.ILogHandler
struct ILogHandler_t5_221;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_LogType.h"

// UnityEngine.Logger
struct  Logger_t5_71  : public Object_t
{
	// UnityEngine.ILogHandler UnityEngine.Logger::<logHandler>k__BackingField
	Object_t * ___U3ClogHandlerU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Logger::<logEnabled>k__BackingField
	bool ___U3ClogEnabledU3Ek__BackingField_1;
	// UnityEngine.LogType UnityEngine.Logger::<filterLogType>k__BackingField
	int32_t ___U3CfilterLogTypeU3Ek__BackingField_2;
};
