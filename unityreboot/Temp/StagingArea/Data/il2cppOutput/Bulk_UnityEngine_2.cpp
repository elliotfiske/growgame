#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// UnityEngine.Events.PersistentCall
struct PersistentCall_t5_213;
// UnityEngine.Object
struct Object_t5_5;
struct Object_t5_5_marshaled;
// System.String
struct String_t;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t5_208;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t5_209;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t5_216;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t5_214;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t5_215;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t1_156;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t1_31;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t5_217;
// UnityEngine.Events.UnityAction
struct UnityAction_t5_211;
// UnityEngine.Internal.DefaultValueAttribute
struct DefaultValueAttribute_t5_219;
// UnityEngine.Internal.ExcludeFromDocsAttribute
struct ExcludeFromDocsAttribute_t5_220;
// UnityEngine.Logger
struct Logger_t5_71;
// UnityEngine.ILogHandler
struct ILogHandler_t5_221;
// System.Exception
struct Exception_t1_33;
// UnityEngine.Scripting.RequiredByNativeCodeAttribute
struct RequiredByNativeCodeAttribute_t5_222;
// UnityEngine.Scripting.UsedByNativeCodeAttribute
struct UsedByNativeCodeAttribute_t5_223;
// UnityEngine.Serialization.FormerlySerializedAsAttribute
struct FormerlySerializedAsAttribute_t5_224;
// UnityEngineInternal.TypeInferenceRuleAttribute
struct TypeInferenceRuleAttribute_t5_226;
// UnityEngineInternal.GenericStack
struct GenericStack_t5_152;
// System.Delegate
struct Delegate_t1_22;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array.h"
#include "UnityEngine_UnityEngine_Events_PersistentCall.h"
#include "UnityEngine_UnityEngine_Events_PersistentCallMethodDeclarations.h"
#include "mscorlib_System_Void.h"
#include "UnityEngine_UnityEngine_Events_ArgumentCacheMethodDeclarations.h"
#include "mscorlib_System_ObjectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_ArgumentCache.h"
#include "UnityEngine_UnityEngine_Events_UnityEventCallState.h"
#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Object.h"
#include "mscorlib_System_String.h"
#include "UnityEngine_UnityEngine_Events_PersistentListenerMode.h"
#include "mscorlib_System_Boolean.h"
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
#include "mscorlib_System_StringMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
#include "UnityEngine_UnityEngine_Events_UnityEventBase.h"
#include "UnityEngine_UnityEngine_Events_UnityEventBaseMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_genMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_InvokableCallMethodDeclarations.h"
#include "mscorlib_System_Reflection_MethodInfo.h"
#include "mscorlib_System_Single.h"
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen.h"
#include "mscorlib_System_Int32.h"
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_0.h"
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_1.h"
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_2.h"
#include "UnityEngine_UnityEngine_Events_InvokableCall.h"
#include "mscorlib_System_TypeMethodDeclarations.h"
#include "mscorlib_System_Reflection_ConstructorInfoMethodDeclarations.h"
#include "mscorlib_System_Type.h"
#include "mscorlib_System_Reflection_ConstructorInfo.h"
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "mscorlib_ArrayTypes.h"
#include "UnityEngine_UnityEngine_Events_PersistentCallGroup.h"
#include "UnityEngine_UnityEngine_Events_PersistentCallGroupMethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen_14MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen_14.h"
#include "UnityEngine_UnityEngine_Events_InvokableCallList.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_InvokableCallListMethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0.h"
#include "mscorlib_System_Collections_Generic_List_1_gen_15MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen_15.h"
#include "mscorlib_System_Predicate_1_genMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
#include "mscorlib_System_Predicate_1_gen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Reflection_ParameterInfo.h"
#include "mscorlib_System_Reflection_BindingFlags.h"
#include "mscorlib_System_Reflection_Binder.h"
#include "mscorlib_System_Reflection_ParameterModifier.h"
#include "mscorlib_System_Reflection_MethodBase.h"
#include "mscorlib_System_Reflection_MethodBaseMethodDeclarations.h"
#include "mscorlib_System_Reflection_ParameterInfoMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent.h"
#include "UnityEngine_UnityEngine_Events_UnityEventMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityAction.h"
#include "UnityEngine_UnityEngine_Experimental_Director_FrameData.h"
#include "UnityEngine_UnityEngine_Experimental_Director_FrameDataMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttribute.h"
#include "UnityEngine_UnityEngine_Internal_DefaultValueAttributeMethodDeclarations.h"
#include "mscorlib_System_AttributeMethodDeclarations.h"
#include "mscorlib_System_Attribute.h"
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttribute.h"
#include "UnityEngine_UnityEngine_Internal_ExcludeFromDocsAttributeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Logger.h"
#include "UnityEngine_UnityEngine_LoggerMethodDeclarations.h"
#include "UnityEngine_UnityEngine_LogType.h"
#include "mscorlib_System_Exception.h"
#include "UnityEngine_UnityEngine_Scripting_RequiredByNativeCodeAttrib.h"
#include "UnityEngine_UnityEngine_Scripting_RequiredByNativeCodeAttribMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Scripting_UsedByNativeCodeAttribute.h"
#include "UnityEngine_UnityEngine_Scripting_UsedByNativeCodeAttributeMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAt.h"
#include "UnityEngine_UnityEngine_Serialization_FormerlySerializedAsAtMethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRules.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRulesMethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttribute.h"
#include "UnityEngine_UnityEngineInternal_TypeInferenceRuleAttributeMethodDeclarations.h"
#include "mscorlib_System_Enum.h"
#include "mscorlib_System_EnumMethodDeclarations.h"
#include "UnityEngine_UnityEngineInternal_GenericStack.h"
#include "UnityEngine_UnityEngineInternal_GenericStackMethodDeclarations.h"
#include "mscorlib_System_Collections_StackMethodDeclarations.h"
#include "mscorlib_System_Collections_Stack.h"
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtensions.h"
#include "UnityEngine_UnityEngineInternal_NetFxCoreExtensionsMethodDeclarations.h"
#include "mscorlib_System_Delegate.h"
#include "mscorlib_System_DelegateMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityActionMethodDeclarations.h"
#include "mscorlib_System_AsyncCallback.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Events.PersistentCall::.ctor()
extern TypeInfo* ArgumentCache_t5_208_il2cpp_TypeInfo_var;
extern "C" void PersistentCall__ctor_m5_1299 (PersistentCall_t5_213 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentCache_t5_208_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(917);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArgumentCache_t5_208 * L_0 = (ArgumentCache_t5_208 *)il2cpp_codegen_object_new (ArgumentCache_t5_208_il2cpp_TypeInfo_var);
		ArgumentCache__ctor_m5_1282(L_0, /*hidden argument*/NULL);
		__this->___m_Arguments_3 = L_0;
		__this->___m_CallState_4 = 2;
		Object__ctor_m1_0(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Events.PersistentCall::get_target()
extern "C" Object_t5_5 * PersistentCall_get_target_m5_1300 (PersistentCall_t5_213 * __this, const MethodInfo* method)
{
	{
		Object_t5_5 * L_0 = (__this->___m_Target_0);
		return L_0;
	}
}
// System.String UnityEngine.Events.PersistentCall::get_methodName()
extern "C" String_t* PersistentCall_get_methodName_m5_1301 (PersistentCall_t5_213 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_MethodName_1);
		return L_0;
	}
}
// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::get_mode()
extern "C" int32_t PersistentCall_get_mode_m5_1302 (PersistentCall_t5_213 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___m_Mode_2);
		return L_0;
	}
}
// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::get_arguments()
extern "C" ArgumentCache_t5_208 * PersistentCall_get_arguments_m5_1303 (PersistentCall_t5_213 * __this, const MethodInfo* method)
{
	{
		ArgumentCache_t5_208 * L_0 = (__this->___m_Arguments_3);
		return L_0;
	}
}
// System.Boolean UnityEngine.Events.PersistentCall::IsValid()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool PersistentCall_IsValid_m5_1304 (PersistentCall_t5_213 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		Object_t5_5 * L_0 = PersistentCall_get_target_m5_1300(__this, /*hidden argument*/NULL);
		bool L_1 = Object_op_Inequality_m5_520(NULL /*static, unused*/, L_0, (Object_t5_5 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = PersistentCall_get_methodName_m5_1301(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m1_399(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return G_B3_0;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetRuntimeCall(UnityEngine.Events.UnityEventBase)
extern TypeInfo* CachedInvokableCall_1_t5_239_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t5_240_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t5_241_il2cpp_TypeInfo_var;
extern TypeInfo* CachedInvokableCall_1_t5_242_il2cpp_TypeInfo_var;
extern TypeInfo* InvokableCall_t5_210_il2cpp_TypeInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m5_1367_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m5_1368_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m5_1369_MethodInfo_var;
extern const MethodInfo* CachedInvokableCall_1__ctor_m5_1370_MethodInfo_var;
extern "C" BaseInvokableCall_t5_209 * PersistentCall_GetRuntimeCall_m5_1305 (PersistentCall_t5_213 * __this, UnityEventBase_t5_216 * ___theEvent, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CachedInvokableCall_1_t5_239_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(918);
		CachedInvokableCall_1_t5_240_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(919);
		CachedInvokableCall_1_t5_241_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(920);
		CachedInvokableCall_1_t5_242_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(921);
		InvokableCall_t5_210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(922);
		CachedInvokableCall_1__ctor_m5_1367_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483722);
		CachedInvokableCall_1__ctor_m5_1368_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483723);
		CachedInvokableCall_1__ctor_m5_1369_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483724);
		CachedInvokableCall_1__ctor_m5_1370_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483725);
		s_Il2CppMethodIntialized = true;
	}
	MethodInfo_t * V_0 = {0};
	int32_t V_1 = {0};
	{
		int32_t L_0 = (__this->___m_CallState_4);
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		UnityEventBase_t5_216 * L_1 = ___theEvent;
		if (L_1)
		{
			goto IL_0013;
		}
	}

IL_0011:
	{
		return (BaseInvokableCall_t5_209 *)NULL;
	}

IL_0013:
	{
		UnityEventBase_t5_216 * L_2 = ___theEvent;
		MethodInfo_t * L_3 = UnityEventBase_FindMethod_m5_1318(L_2, __this, /*hidden argument*/NULL);
		V_0 = L_3;
		MethodInfo_t * L_4 = V_0;
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		return (BaseInvokableCall_t5_209 *)NULL;
	}

IL_0023:
	{
		int32_t L_5 = (__this->___m_Mode_2);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if (L_6 == 0)
		{
			goto IL_0051;
		}
		if (L_6 == 1)
		{
			goto IL_00d2;
		}
		if (L_6 == 2)
		{
			goto IL_005f;
		}
		if (L_6 == 3)
		{
			goto IL_008a;
		}
		if (L_6 == 4)
		{
			goto IL_0072;
		}
		if (L_6 == 5)
		{
			goto IL_00a2;
		}
		if (L_6 == 6)
		{
			goto IL_00ba;
		}
	}
	{
		goto IL_00df;
	}

IL_0051:
	{
		UnityEventBase_t5_216 * L_7 = ___theEvent;
		Object_t5_5 * L_8 = PersistentCall_get_target_m5_1300(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_9 = V_0;
		BaseInvokableCall_t5_209 * L_10 = (BaseInvokableCall_t5_209 *)VirtFuncInvoker2< BaseInvokableCall_t5_209 *, Object_t *, MethodInfo_t * >::Invoke(7 /* UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEventBase::GetDelegate(System.Object,System.Reflection.MethodInfo) */, L_7, L_8, L_9);
		return L_10;
	}

IL_005f:
	{
		Object_t5_5 * L_11 = PersistentCall_get_target_m5_1300(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_12 = V_0;
		ArgumentCache_t5_208 * L_13 = (__this->___m_Arguments_3);
		BaseInvokableCall_t5_209 * L_14 = PersistentCall_GetObjectCall_m5_1306(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0072:
	{
		Object_t5_5 * L_15 = PersistentCall_get_target_m5_1300(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_16 = V_0;
		ArgumentCache_t5_208 * L_17 = (__this->___m_Arguments_3);
		float L_18 = ArgumentCache_get_floatArgument_m5_1286(L_17, /*hidden argument*/NULL);
		CachedInvokableCall_1_t5_239 * L_19 = (CachedInvokableCall_1_t5_239 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t5_239_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m5_1367(L_19, L_15, L_16, L_18, /*hidden argument*/CachedInvokableCall_1__ctor_m5_1367_MethodInfo_var);
		return L_19;
	}

IL_008a:
	{
		Object_t5_5 * L_20 = PersistentCall_get_target_m5_1300(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_21 = V_0;
		ArgumentCache_t5_208 * L_22 = (__this->___m_Arguments_3);
		int32_t L_23 = ArgumentCache_get_intArgument_m5_1285(L_22, /*hidden argument*/NULL);
		CachedInvokableCall_1_t5_240 * L_24 = (CachedInvokableCall_1_t5_240 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t5_240_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m5_1368(L_24, L_20, L_21, L_23, /*hidden argument*/CachedInvokableCall_1__ctor_m5_1368_MethodInfo_var);
		return L_24;
	}

IL_00a2:
	{
		Object_t5_5 * L_25 = PersistentCall_get_target_m5_1300(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_26 = V_0;
		ArgumentCache_t5_208 * L_27 = (__this->___m_Arguments_3);
		String_t* L_28 = ArgumentCache_get_stringArgument_m5_1287(L_27, /*hidden argument*/NULL);
		CachedInvokableCall_1_t5_241 * L_29 = (CachedInvokableCall_1_t5_241 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t5_241_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m5_1369(L_29, L_25, L_26, L_28, /*hidden argument*/CachedInvokableCall_1__ctor_m5_1369_MethodInfo_var);
		return L_29;
	}

IL_00ba:
	{
		Object_t5_5 * L_30 = PersistentCall_get_target_m5_1300(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_31 = V_0;
		ArgumentCache_t5_208 * L_32 = (__this->___m_Arguments_3);
		bool L_33 = ArgumentCache_get_boolArgument_m5_1288(L_32, /*hidden argument*/NULL);
		CachedInvokableCall_1_t5_242 * L_34 = (CachedInvokableCall_1_t5_242 *)il2cpp_codegen_object_new (CachedInvokableCall_1_t5_242_il2cpp_TypeInfo_var);
		CachedInvokableCall_1__ctor_m5_1370(L_34, L_30, L_31, L_33, /*hidden argument*/CachedInvokableCall_1__ctor_m5_1370_MethodInfo_var);
		return L_34;
	}

IL_00d2:
	{
		Object_t5_5 * L_35 = PersistentCall_get_target_m5_1300(__this, /*hidden argument*/NULL);
		MethodInfo_t * L_36 = V_0;
		InvokableCall_t5_210 * L_37 = (InvokableCall_t5_210 *)il2cpp_codegen_object_new (InvokableCall_t5_210_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m5_1295(L_37, L_35, L_36, /*hidden argument*/NULL);
		return L_37;
	}

IL_00df:
	{
		return (BaseInvokableCall_t5_209 *)NULL;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.PersistentCall::GetObjectCall(UnityEngine.Object,System.Reflection.MethodInfo,UnityEngine.Events.ArgumentCache)
extern const Il2CppType* Object_t5_5_0_0_0_var;
extern const Il2CppType* CachedInvokableCall_1_t5_243_0_0_0_var;
extern const Il2CppType* MethodInfo_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TypeU5BU5D_t1_31_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t1_156_il2cpp_TypeInfo_var;
extern TypeInfo* BaseInvokableCall_t5_209_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t5_209 * PersistentCall_GetObjectCall_m5_1306 (Object_t * __this /* static, unused */, Object_t5_5 * ___target, MethodInfo_t * ___method, ArgumentCache_t5_208 * ___arguments, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t5_5_0_0_0_var = il2cpp_codegen_type_from_index(848);
		CachedInvokableCall_1_t5_243_0_0_0_var = il2cpp_codegen_type_from_index(923);
		MethodInfo_t_0_0_0_var = il2cpp_codegen_type_from_index(56);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		TypeU5BU5D_t1_31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		ObjectU5BU5D_t1_156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		BaseInvokableCall_t5_209_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(924);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * V_1 = {0};
	Type_t * V_2 = {0};
	ConstructorInfo_t1_268 * V_3 = {0};
	Object_t5_5 * V_4 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1_894(NULL /*static, unused*/, LoadTypeToken(Object_t5_5_0_0_0_var), /*hidden argument*/NULL);
		V_0 = L_0;
		ArgumentCache_t5_208 * L_1 = ___arguments;
		String_t* L_2 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5_1284(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_IsNullOrEmpty_m1_399(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0039;
		}
	}
	{
		ArgumentCache_t5_208 * L_4 = ___arguments;
		String_t* L_5 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5_1284(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = il2cpp_codegen_get_type((methodPointerType)&Type_GetType_m1_891, L_5, 0, "UnityEngine, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
		Type_t * L_7 = L_6;
		G_B2_0 = L_7;
		if (L_7)
		{
			G_B3_0 = L_7;
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1_894(NULL /*static, unused*/, LoadTypeToken(Object_t5_5_0_0_0_var), /*hidden argument*/NULL);
		G_B3_0 = L_8;
	}

IL_0038:
	{
		V_0 = G_B3_0;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m1_894(NULL /*static, unused*/, LoadTypeToken(CachedInvokableCall_1_t5_243_0_0_0_var), /*hidden argument*/NULL);
		V_1 = L_9;
		Type_t * L_10 = V_1;
		TypeU5BU5D_t1_31* L_11 = ((TypeU5BU5D_t1_31*)SZArrayNew(TypeU5BU5D_t1_31_il2cpp_TypeInfo_var, 1));
		Type_t * L_12 = V_0;
		ArrayElementTypeCheck (L_11, L_12);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_11, 0, sizeof(Type_t *))) = (Type_t *)L_12;
		Type_t * L_13 = (Type_t *)VirtFuncInvoker1< Type_t *, TypeU5BU5D_t1_31* >::Invoke(77 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_10, L_11);
		V_2 = L_13;
		Type_t * L_14 = V_2;
		TypeU5BU5D_t1_31* L_15 = ((TypeU5BU5D_t1_31*)SZArrayNew(TypeU5BU5D_t1_31_il2cpp_TypeInfo_var, 3));
		Type_t * L_16 = Type_GetTypeFromHandle_m1_894(NULL /*static, unused*/, LoadTypeToken(Object_t5_5_0_0_0_var), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 0, sizeof(Type_t *))) = (Type_t *)L_16;
		TypeU5BU5D_t1_31* L_17 = L_15;
		Type_t * L_18 = Type_GetTypeFromHandle_m1_894(NULL /*static, unused*/, LoadTypeToken(MethodInfo_t_0_0_0_var), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_17, L_18);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_17, 1, sizeof(Type_t *))) = (Type_t *)L_18;
		TypeU5BU5D_t1_31* L_19 = L_17;
		Type_t * L_20 = V_0;
		ArrayElementTypeCheck (L_19, L_20);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_19, 2, sizeof(Type_t *))) = (Type_t *)L_20;
		ConstructorInfo_t1_268 * L_21 = (ConstructorInfo_t1_268 *)VirtFuncInvoker1< ConstructorInfo_t1_268 *, TypeU5BU5D_t1_31* >::Invoke(67 /* System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[]) */, L_14, L_19);
		V_3 = L_21;
		ArgumentCache_t5_208 * L_22 = ___arguments;
		Object_t5_5 * L_23 = ArgumentCache_get_unityObjectArgument_m5_1283(L_22, /*hidden argument*/NULL);
		V_4 = L_23;
		Object_t5_5 * L_24 = V_4;
		bool L_25 = Object_op_Inequality_m5_520(NULL /*static, unused*/, L_24, (Object_t5_5 *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00aa;
		}
	}
	{
		Type_t * L_26 = V_0;
		Object_t5_5 * L_27 = V_4;
		Type_t * L_28 = Object_GetType_m1_5(L_27, /*hidden argument*/NULL);
		bool L_29 = (bool)VirtFuncInvoker1< bool, Type_t * >::Invoke(40 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_26, L_28);
		if (L_29)
		{
			goto IL_00aa;
		}
	}
	{
		V_4 = (Object_t5_5 *)NULL;
	}

IL_00aa:
	{
		ConstructorInfo_t1_268 * L_30 = V_3;
		ObjectU5BU5D_t1_156* L_31 = ((ObjectU5BU5D_t1_156*)SZArrayNew(ObjectU5BU5D_t1_156_il2cpp_TypeInfo_var, 3));
		Object_t5_5 * L_32 = ___target;
		ArrayElementTypeCheck (L_31, L_32);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_31, 0, sizeof(Object_t *))) = (Object_t *)L_32;
		ObjectU5BU5D_t1_156* L_33 = L_31;
		MethodInfo_t * L_34 = ___method;
		ArrayElementTypeCheck (L_33, L_34);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_33, 1, sizeof(Object_t *))) = (Object_t *)L_34;
		ObjectU5BU5D_t1_156* L_35 = L_33;
		Object_t5_5 * L_36 = V_4;
		ArrayElementTypeCheck (L_35, L_36);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_35, 2, sizeof(Object_t *))) = (Object_t *)L_36;
		Object_t * L_37 = ConstructorInfo_Invoke_m1_2736(L_30, L_35, /*hidden argument*/NULL);
		return ((BaseInvokableCall_t5_209 *)IsInstClass(L_37, BaseInvokableCall_t5_209_il2cpp_TypeInfo_var));
	}
}
// System.Void UnityEngine.Events.PersistentCallGroup::.ctor()
extern TypeInfo* List_1_t1_881_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1_5498_MethodInfo_var;
extern "C" void PersistentCallGroup__ctor_m5_1307 (PersistentCallGroup_t5_214 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t1_881_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(926);
		List_1__ctor_m1_5498_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483726);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1_0(__this, /*hidden argument*/NULL);
		List_1_t1_881 * L_0 = (List_1_t1_881 *)il2cpp_codegen_object_new (List_1_t1_881_il2cpp_TypeInfo_var);
		List_1__ctor_m1_5498(L_0, /*hidden argument*/List_1__ctor_m1_5498_MethodInfo_var);
		__this->___m_Calls_0 = L_0;
		return;
	}
}
// System.Void UnityEngine.Events.PersistentCallGroup::Initialize(UnityEngine.Events.InvokableCallList,UnityEngine.Events.UnityEventBase)
extern TypeInfo* Enumerator_t1_897_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t1_824_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m1_5499_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m1_5500_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m1_5501_MethodInfo_var;
extern "C" void PersistentCallGroup_Initialize_m5_1308 (PersistentCallGroup_t5_214 * __this, InvokableCallList_t5_215 * ___invokableList, UnityEventBase_t5_216 * ___unityEventBase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Enumerator_t1_897_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(927);
		IDisposable_t1_824_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(141);
		List_1_GetEnumerator_m1_5499_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483727);
		Enumerator_get_Current_m1_5500_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483728);
		Enumerator_MoveNext_m1_5501_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483729);
		s_Il2CppMethodIntialized = true;
	}
	PersistentCall_t5_213 * V_0 = {0};
	Enumerator_t1_897  V_1 = {0};
	BaseInvokableCall_t5_209 * V_2 = {0};
	Exception_t1_33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1_33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t1_881 * L_0 = (__this->___m_Calls_0);
		Enumerator_t1_897  L_1 = List_1_GetEnumerator_m1_5499(L_0, /*hidden argument*/List_1_GetEnumerator_m1_5499_MethodInfo_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003e;
		}

IL_0011:
		{
			PersistentCall_t5_213 * L_2 = Enumerator_get_Current_m1_5500((&V_1), /*hidden argument*/Enumerator_get_Current_m1_5500_MethodInfo_var);
			V_0 = L_2;
			PersistentCall_t5_213 * L_3 = V_0;
			bool L_4 = PersistentCall_IsValid_m5_1304(L_3, /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_0029;
			}
		}

IL_0024:
		{
			goto IL_003e;
		}

IL_0029:
		{
			PersistentCall_t5_213 * L_5 = V_0;
			UnityEventBase_t5_216 * L_6 = ___unityEventBase;
			BaseInvokableCall_t5_209 * L_7 = PersistentCall_GetRuntimeCall_m5_1305(L_5, L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			BaseInvokableCall_t5_209 * L_8 = V_2;
			if (!L_8)
			{
				goto IL_003e;
			}
		}

IL_0037:
		{
			InvokableCallList_t5_215 * L_9 = ___invokableList;
			BaseInvokableCall_t5_209 * L_10 = V_2;
			InvokableCallList_AddPersistentInvokableCall_m5_1310(L_9, L_10, /*hidden argument*/NULL);
		}

IL_003e:
		{
			bool L_11 = Enumerator_MoveNext_m1_5501((&V_1), /*hidden argument*/Enumerator_MoveNext_m1_5501_MethodInfo_var);
			if (L_11)
			{
				goto IL_0011;
			}
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1_33 *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		Enumerator_t1_897  L_12 = V_1;
		Enumerator_t1_897  L_13 = L_12;
		Object_t * L_14 = Box(Enumerator_t1_897_il2cpp_TypeInfo_var, &L_13);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1_824_il2cpp_TypeInfo_var, L_14);
		IL2CPP_END_FINALLY(79)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1_33 *)
	}

IL_005b:
	{
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::.ctor()
extern TypeInfo* List_1_t1_882_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1_5502_MethodInfo_var;
extern "C" void InvokableCallList__ctor_m5_1309 (InvokableCallList_t5_215 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t1_882_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		List_1__ctor_m1_5502_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483730);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t1_882 * L_0 = (List_1_t1_882 *)il2cpp_codegen_object_new (List_1_t1_882_il2cpp_TypeInfo_var);
		List_1__ctor_m1_5502(L_0, /*hidden argument*/List_1__ctor_m1_5502_MethodInfo_var);
		__this->___m_PersistentCalls_0 = L_0;
		List_1_t1_882 * L_1 = (List_1_t1_882 *)il2cpp_codegen_object_new (List_1_t1_882_il2cpp_TypeInfo_var);
		List_1__ctor_m1_5502(L_1, /*hidden argument*/List_1__ctor_m1_5502_MethodInfo_var);
		__this->___m_RuntimeCalls_1 = L_1;
		List_1_t1_882 * L_2 = (List_1_t1_882 *)il2cpp_codegen_object_new (List_1_t1_882_il2cpp_TypeInfo_var);
		List_1__ctor_m1_5502(L_2, /*hidden argument*/List_1__ctor_m1_5502_MethodInfo_var);
		__this->___m_ExecutingCalls_2 = L_2;
		__this->___m_NeedsUpdate_3 = 1;
		Object__ctor_m1_0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
extern "C" void InvokableCallList_AddPersistentInvokableCall_m5_1310 (InvokableCallList_t5_215 * __this, BaseInvokableCall_t5_209 * ___call, const MethodInfo* method)
{
	{
		List_1_t1_882 * L_0 = (__this->___m_PersistentCalls_0);
		BaseInvokableCall_t5_209 * L_1 = ___call;
		VirtActionInvoker1< BaseInvokableCall_t5_209 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_0, L_1);
		__this->___m_NeedsUpdate_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
extern "C" void InvokableCallList_AddListener_m5_1311 (InvokableCallList_t5_215 * __this, BaseInvokableCall_t5_209 * ___call, const MethodInfo* method)
{
	{
		List_1_t1_882 * L_0 = (__this->___m_RuntimeCalls_1);
		BaseInvokableCall_t5_209 * L_1 = ___call;
		VirtActionInvoker1< BaseInvokableCall_t5_209 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_0, L_1);
		__this->___m_NeedsUpdate_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* List_1_t1_882_il2cpp_TypeInfo_var;
extern TypeInfo* Predicate_1_t1_898_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1_5502_MethodInfo_var;
extern const MethodInfo* Predicate_1__ctor_m1_5503_MethodInfo_var;
extern const MethodInfo* List_1_RemoveAll_m1_5504_MethodInfo_var;
extern "C" void InvokableCallList_RemoveListener_m5_1312 (InvokableCallList_t5_215 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t1_882_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(928);
		Predicate_1_t1_898_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(929);
		List_1__ctor_m1_5502_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483730);
		Predicate_1__ctor_m1_5503_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483731);
		List_1_RemoveAll_m1_5504_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483732);
		s_Il2CppMethodIntialized = true;
	}
	List_1_t1_882 * V_0 = {0};
	int32_t V_1 = 0;
	{
		List_1_t1_882 * L_0 = (List_1_t1_882 *)il2cpp_codegen_object_new (List_1_t1_882_il2cpp_TypeInfo_var);
		List_1__ctor_m1_5502(L_0, /*hidden argument*/List_1__ctor_m1_5502_MethodInfo_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003b;
	}

IL_000d:
	{
		List_1_t1_882 * L_1 = (__this->___m_RuntimeCalls_1);
		int32_t L_2 = V_1;
		BaseInvokableCall_t5_209 * L_3 = (BaseInvokableCall_t5_209 *)VirtFuncInvoker1< BaseInvokableCall_t5_209 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_1, L_2);
		Object_t * L_4 = ___targetObj;
		MethodInfo_t * L_5 = ___method;
		bool L_6 = (bool)VirtFuncInvoker2< bool, Object_t *, MethodInfo_t * >::Invoke(5 /* System.Boolean UnityEngine.Events.BaseInvokableCall::Find(System.Object,System.Reflection.MethodInfo) */, L_3, L_4, L_5);
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		List_1_t1_882 * L_7 = V_0;
		List_1_t1_882 * L_8 = (__this->___m_RuntimeCalls_1);
		int32_t L_9 = V_1;
		BaseInvokableCall_t5_209 * L_10 = (BaseInvokableCall_t5_209 *)VirtFuncInvoker1< BaseInvokableCall_t5_209 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_8, L_9);
		VirtActionInvoker1< BaseInvokableCall_t5_209 * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Add(!0) */, L_7, L_10);
	}

IL_0037:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_003b:
	{
		int32_t L_12 = V_1;
		List_1_t1_882 * L_13 = (__this->___m_RuntimeCalls_1);
		int32_t L_14 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count() */, L_13);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_000d;
		}
	}
	{
		List_1_t1_882 * L_15 = (__this->___m_RuntimeCalls_1);
		List_1_t1_882 * L_16 = V_0;
		List_1_t1_882 * L_17 = L_16;
		IntPtr_t L_18 = { (void*)GetVirtualMethodInfo(L_17, 24) };
		Predicate_1_t1_898 * L_19 = (Predicate_1_t1_898 *)il2cpp_codegen_object_new (Predicate_1_t1_898_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m1_5503(L_19, L_17, L_18, /*hidden argument*/Predicate_1__ctor_m1_5503_MethodInfo_var);
		List_1_RemoveAll_m1_5504(L_15, L_19, /*hidden argument*/List_1_RemoveAll_m1_5504_MethodInfo_var);
		__this->___m_NeedsUpdate_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
extern "C" void InvokableCallList_ClearPersistent_m5_1313 (InvokableCallList_t5_215 * __this, const MethodInfo* method)
{
	{
		List_1_t1_882 * L_0 = (__this->___m_PersistentCalls_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear() */, L_0);
		__this->___m_NeedsUpdate_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
extern const MethodInfo* List_1_AddRange_m1_5505_MethodInfo_var;
extern "C" void InvokableCallList_Invoke_m5_1314 (InvokableCallList_t5_215 * __this, ObjectU5BU5D_t1_156* ___parameters, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_AddRange_m1_5505_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483733);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___m_NeedsUpdate_3);
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		List_1_t1_882 * L_1 = (__this->___m_ExecutingCalls_2);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::Clear() */, L_1);
		List_1_t1_882 * L_2 = (__this->___m_ExecutingCalls_2);
		List_1_t1_882 * L_3 = (__this->___m_PersistentCalls_0);
		List_1_AddRange_m1_5505(L_2, L_3, /*hidden argument*/List_1_AddRange_m1_5505_MethodInfo_var);
		List_1_t1_882 * L_4 = (__this->___m_ExecutingCalls_2);
		List_1_t1_882 * L_5 = (__this->___m_RuntimeCalls_1);
		List_1_AddRange_m1_5505(L_4, L_5, /*hidden argument*/List_1_AddRange_m1_5505_MethodInfo_var);
		__this->___m_NeedsUpdate_3 = 0;
	}

IL_003f:
	{
		V_0 = 0;
		goto IL_005c;
	}

IL_0046:
	{
		List_1_t1_882 * L_6 = (__this->___m_ExecutingCalls_2);
		int32_t L_7 = V_0;
		BaseInvokableCall_t5_209 * L_8 = (BaseInvokableCall_t5_209 *)VirtFuncInvoker1< BaseInvokableCall_t5_209 *, int32_t >::Invoke(31 /* !0 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Item(System.Int32) */, L_6, L_7);
		ObjectU5BU5D_t1_156* L_9 = ___parameters;
		VirtActionInvoker1< ObjectU5BU5D_t1_156* >::Invoke(4 /* System.Void UnityEngine.Events.BaseInvokableCall::Invoke(System.Object[]) */, L_8, L_9);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_005c:
	{
		int32_t L_11 = V_0;
		List_1_t1_882 * L_12 = (__this->___m_ExecutingCalls_2);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>::get_Count() */, L_12);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::.ctor()
extern TypeInfo* InvokableCallList_t5_215_il2cpp_TypeInfo_var;
extern TypeInfo* PersistentCallGroup_t5_214_il2cpp_TypeInfo_var;
extern "C" void UnityEventBase__ctor_m5_1315 (UnityEventBase_t5_216 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCallList_t5_215_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(930);
		PersistentCallGroup_t5_214_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(931);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_CallsDirty_3 = 1;
		Object__ctor_m1_0(__this, /*hidden argument*/NULL);
		InvokableCallList_t5_215 * L_0 = (InvokableCallList_t5_215 *)il2cpp_codegen_object_new (InvokableCallList_t5_215_il2cpp_TypeInfo_var);
		InvokableCallList__ctor_m5_1309(L_0, /*hidden argument*/NULL);
		__this->___m_Calls_0 = L_0;
		PersistentCallGroup_t5_214 * L_1 = (PersistentCallGroup_t5_214 *)il2cpp_codegen_object_new (PersistentCallGroup_t5_214_il2cpp_TypeInfo_var);
		PersistentCallGroup__ctor_m5_1307(L_1, /*hidden argument*/NULL);
		__this->___m_PersistentCalls_1 = L_1;
		Type_t * L_2 = Object_GetType_m1_5(__this, /*hidden argument*/NULL);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_2);
		__this->___m_TypeName_2 = L_3;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize_m5_1316 (UnityEventBase_t5_216 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
extern "C" void UnityEventBase_UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize_m5_1317 (UnityEventBase_t5_216 * __this, const MethodInfo* method)
{
	{
		UnityEventBase_DirtyPersistentCalls_m5_1320(__this, /*hidden argument*/NULL);
		Type_t * L_0 = Object_GetType_m1_5(__this, /*hidden argument*/NULL);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Type::get_AssemblyQualifiedName() */, L_0);
		__this->___m_TypeName_2 = L_1;
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(UnityEngine.Events.PersistentCall)
extern const Il2CppType* Object_t5_5_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_FindMethod_m5_1318 (UnityEventBase_t5_216 * __this, PersistentCall_t5_213 * ___call, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t5_5_0_0_0_var = il2cpp_codegen_type_from_index(848);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	Type_t * G_B3_0 = {0};
	Type_t * G_B2_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_0 = Type_GetTypeFromHandle_m1_894(NULL /*static, unused*/, LoadTypeToken(Object_t5_5_0_0_0_var), /*hidden argument*/NULL);
		V_0 = L_0;
		PersistentCall_t5_213 * L_1 = ___call;
		ArgumentCache_t5_208 * L_2 = PersistentCall_get_arguments_m5_1303(L_1, /*hidden argument*/NULL);
		String_t* L_3 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5_1284(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_IsNullOrEmpty_m1_399(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		PersistentCall_t5_213 * L_5 = ___call;
		ArgumentCache_t5_208 * L_6 = PersistentCall_get_arguments_m5_1303(L_5, /*hidden argument*/NULL);
		String_t* L_7 = ArgumentCache_get_unityObjectArgumentAssemblyTypeName_m5_1284(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = il2cpp_codegen_get_type((methodPointerType)&Type_GetType_m1_891, L_7, 0, "UnityEngine, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null");
		Type_t * L_9 = L_8;
		G_B2_0 = L_9;
		if (L_9)
		{
			G_B3_0 = L_9;
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m1_894(NULL /*static, unused*/, LoadTypeToken(Object_t5_5_0_0_0_var), /*hidden argument*/NULL);
		G_B3_0 = L_10;
	}

IL_0042:
	{
		V_0 = G_B3_0;
	}

IL_0043:
	{
		PersistentCall_t5_213 * L_11 = ___call;
		String_t* L_12 = PersistentCall_get_methodName_m5_1301(L_11, /*hidden argument*/NULL);
		PersistentCall_t5_213 * L_13 = ___call;
		Object_t5_5 * L_14 = PersistentCall_get_target_m5_1300(L_13, /*hidden argument*/NULL);
		PersistentCall_t5_213 * L_15 = ___call;
		int32_t L_16 = PersistentCall_get_mode_m5_1302(L_15, /*hidden argument*/NULL);
		Type_t * L_17 = V_0;
		MethodInfo_t * L_18 = UnityEventBase_FindMethod_m5_1319(__this, L_12, L_14, L_16, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod(System.String,System.Object,UnityEngine.Events.PersistentListenerMode,System.Type)
extern const Il2CppType* Single_t1_17_0_0_0_var;
extern const Il2CppType* Int32_t1_3_0_0_0_var;
extern const Il2CppType* Boolean_t1_20_0_0_0_var;
extern const Il2CppType* String_t_0_0_0_var;
extern const Il2CppType* Object_t5_5_0_0_0_var;
extern TypeInfo* TypeU5BU5D_t1_31_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_FindMethod_m5_1319 (UnityEventBase_t5_216 * __this, String_t* ___name, Object_t * ___listener, int32_t ___mode, Type_t * ___argumentType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Single_t1_17_0_0_0_var = il2cpp_codegen_type_from_index(43);
		Int32_t1_3_0_0_0_var = il2cpp_codegen_type_from_index(8);
		Boolean_t1_20_0_0_0_var = il2cpp_codegen_type_from_index(49);
		String_t_0_0_0_var = il2cpp_codegen_type_from_index(11);
		Object_t5_5_0_0_0_var = il2cpp_codegen_type_from_index(848);
		TypeU5BU5D_t1_31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	Type_t * G_B10_0 = {0};
	int32_t G_B10_1 = 0;
	TypeU5BU5D_t1_31* G_B10_2 = {0};
	TypeU5BU5D_t1_31* G_B10_3 = {0};
	String_t* G_B10_4 = {0};
	Object_t * G_B10_5 = {0};
	Type_t * G_B9_0 = {0};
	int32_t G_B9_1 = 0;
	TypeU5BU5D_t1_31* G_B9_2 = {0};
	TypeU5BU5D_t1_31* G_B9_3 = {0};
	String_t* G_B9_4 = {0};
	Object_t * G_B9_5 = {0};
	{
		int32_t L_0 = ___mode;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0029;
		}
		if (L_1 == 1)
		{
			goto IL_0032;
		}
		if (L_1 == 2)
		{
			goto IL_00ac;
		}
		if (L_1 == 3)
		{
			goto IL_005b;
		}
		if (L_1 == 4)
		{
			goto IL_0040;
		}
		if (L_1 == 5)
		{
			goto IL_0091;
		}
		if (L_1 == 6)
		{
			goto IL_0076;
		}
	}
	{
		goto IL_00d0;
	}

IL_0029:
	{
		String_t* L_2 = ___name;
		Object_t * L_3 = ___listener;
		MethodInfo_t * L_4 = (MethodInfo_t *)VirtFuncInvoker2< MethodInfo_t *, String_t*, Object_t * >::Invoke(6 /* System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::FindMethod_Impl(System.String,System.Object) */, __this, L_2, L_3);
		return L_4;
	}

IL_0032:
	{
		Object_t * L_5 = ___listener;
		String_t* L_6 = ___name;
		MethodInfo_t * L_7 = UnityEventBase_GetValidMethodInfo_m5_1326(NULL /*static, unused*/, L_5, L_6, ((TypeU5BU5D_t1_31*)SZArrayNew(TypeU5BU5D_t1_31_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return L_7;
	}

IL_0040:
	{
		Object_t * L_8 = ___listener;
		String_t* L_9 = ___name;
		TypeU5BU5D_t1_31* L_10 = ((TypeU5BU5D_t1_31*)SZArrayNew(TypeU5BU5D_t1_31_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1_894(NULL /*static, unused*/, LoadTypeToken(Single_t1_17_0_0_0_var), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_10, L_11);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_10, 0, sizeof(Type_t *))) = (Type_t *)L_11;
		MethodInfo_t * L_12 = UnityEventBase_GetValidMethodInfo_m5_1326(NULL /*static, unused*/, L_8, L_9, L_10, /*hidden argument*/NULL);
		return L_12;
	}

IL_005b:
	{
		Object_t * L_13 = ___listener;
		String_t* L_14 = ___name;
		TypeU5BU5D_t1_31* L_15 = ((TypeU5BU5D_t1_31*)SZArrayNew(TypeU5BU5D_t1_31_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16 = Type_GetTypeFromHandle_m1_894(NULL /*static, unused*/, LoadTypeToken(Int32_t1_3_0_0_0_var), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_15, L_16);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_15, 0, sizeof(Type_t *))) = (Type_t *)L_16;
		MethodInfo_t * L_17 = UnityEventBase_GetValidMethodInfo_m5_1326(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		return L_17;
	}

IL_0076:
	{
		Object_t * L_18 = ___listener;
		String_t* L_19 = ___name;
		TypeU5BU5D_t1_31* L_20 = ((TypeU5BU5D_t1_31*)SZArrayNew(TypeU5BU5D_t1_31_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21 = Type_GetTypeFromHandle_m1_894(NULL /*static, unused*/, LoadTypeToken(Boolean_t1_20_0_0_0_var), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_20, L_21);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_20, 0, sizeof(Type_t *))) = (Type_t *)L_21;
		MethodInfo_t * L_22 = UnityEventBase_GetValidMethodInfo_m5_1326(NULL /*static, unused*/, L_18, L_19, L_20, /*hidden argument*/NULL);
		return L_22;
	}

IL_0091:
	{
		Object_t * L_23 = ___listener;
		String_t* L_24 = ___name;
		TypeU5BU5D_t1_31* L_25 = ((TypeU5BU5D_t1_31*)SZArrayNew(TypeU5BU5D_t1_31_il2cpp_TypeInfo_var, 1));
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26 = Type_GetTypeFromHandle_m1_894(NULL /*static, unused*/, LoadTypeToken(String_t_0_0_0_var), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_25, L_26);
		*((Type_t **)(Type_t **)SZArrayLdElema(L_25, 0, sizeof(Type_t *))) = (Type_t *)L_26;
		MethodInfo_t * L_27 = UnityEventBase_GetValidMethodInfo_m5_1326(NULL /*static, unused*/, L_23, L_24, L_25, /*hidden argument*/NULL);
		return L_27;
	}

IL_00ac:
	{
		Object_t * L_28 = ___listener;
		String_t* L_29 = ___name;
		TypeU5BU5D_t1_31* L_30 = ((TypeU5BU5D_t1_31*)SZArrayNew(TypeU5BU5D_t1_31_il2cpp_TypeInfo_var, 1));
		Type_t * L_31 = ___argumentType;
		Type_t * L_32 = L_31;
		G_B9_0 = L_32;
		G_B9_1 = 0;
		G_B9_2 = L_30;
		G_B9_3 = L_30;
		G_B9_4 = L_29;
		G_B9_5 = L_28;
		if (L_32)
		{
			G_B10_0 = L_32;
			G_B10_1 = 0;
			G_B10_2 = L_30;
			G_B10_3 = L_30;
			G_B10_4 = L_29;
			G_B10_5 = L_28;
			goto IL_00c9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_33 = Type_GetTypeFromHandle_m1_894(NULL /*static, unused*/, LoadTypeToken(Object_t5_5_0_0_0_var), /*hidden argument*/NULL);
		G_B10_0 = L_33;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
		G_B10_5 = G_B9_5;
	}

IL_00c9:
	{
		ArrayElementTypeCheck (G_B10_2, G_B10_0);
		*((Type_t **)(Type_t **)SZArrayLdElema(G_B10_2, G_B10_1, sizeof(Type_t *))) = (Type_t *)G_B10_0;
		MethodInfo_t * L_34 = UnityEventBase_GetValidMethodInfo_m5_1326(NULL /*static, unused*/, G_B10_5, G_B10_4, G_B10_3, /*hidden argument*/NULL);
		return L_34;
	}

IL_00d0:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::DirtyPersistentCalls()
extern "C" void UnityEventBase_DirtyPersistentCalls_m5_1320 (UnityEventBase_t5_216 * __this, const MethodInfo* method)
{
	{
		InvokableCallList_t5_215 * L_0 = (__this->___m_Calls_0);
		InvokableCallList_ClearPersistent_m5_1313(L_0, /*hidden argument*/NULL);
		__this->___m_CallsDirty_3 = 1;
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RebuildPersistentCallsIfNeeded()
extern "C" void UnityEventBase_RebuildPersistentCallsIfNeeded_m5_1321 (UnityEventBase_t5_216 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___m_CallsDirty_3);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		PersistentCallGroup_t5_214 * L_1 = (__this->___m_PersistentCalls_1);
		InvokableCallList_t5_215 * L_2 = (__this->___m_Calls_0);
		PersistentCallGroup_Initialize_m5_1308(L_1, L_2, __this, /*hidden argument*/NULL);
		__this->___m_CallsDirty_3 = 0;
	}

IL_0024:
	{
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::AddCall(UnityEngine.Events.BaseInvokableCall)
extern "C" void UnityEventBase_AddCall_m5_1322 (UnityEventBase_t5_216 * __this, BaseInvokableCall_t5_209 * ___call, const MethodInfo* method)
{
	{
		InvokableCallList_t5_215 * L_0 = (__this->___m_Calls_0);
		BaseInvokableCall_t5_209 * L_1 = ___call;
		InvokableCallList_AddListener_m5_1311(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::RemoveListener(System.Object,System.Reflection.MethodInfo)
extern "C" void UnityEventBase_RemoveListener_m5_1323 (UnityEventBase_t5_216 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method)
{
	{
		InvokableCallList_t5_215 * L_0 = (__this->___m_Calls_0);
		Object_t * L_1 = ___targetObj;
		MethodInfo_t * L_2 = ___method;
		InvokableCallList_RemoveListener_m5_1312(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEventBase::Invoke(System.Object[])
extern "C" void UnityEventBase_Invoke_m5_1324 (UnityEventBase_t5_216 * __this, ObjectU5BU5D_t1_156* ___parameters, const MethodInfo* method)
{
	{
		UnityEventBase_RebuildPersistentCallsIfNeeded_m5_1321(__this, /*hidden argument*/NULL);
		InvokableCallList_t5_215 * L_0 = (__this->___m_Calls_0);
		ObjectU5BU5D_t1_156* L_1 = ___parameters;
		InvokableCallList_Invoke_m5_1314(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Events.UnityEventBase::ToString()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral232;
extern "C" String_t* UnityEventBase_ToString_m5_1325 (UnityEventBase_t5_216 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		_stringLiteral232 = il2cpp_codegen_string_literal_from_index(232);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Object_ToString_m1_7(__this, /*hidden argument*/NULL);
		Type_t * L_1 = Object_GetType_m1_5(__this, /*hidden argument*/NULL);
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Type::get_FullName() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m1_421(NULL /*static, unused*/, L_0, _stringLiteral232, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEventBase::GetValidMethodInfo(System.Object,System.String,System.Type[])
extern const Il2CppType* Object_t_0_0_0_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEventBase_GetValidMethodInfo_m5_1326 (Object_t * __this /* static, unused */, Object_t * ___obj, String_t* ___functionName, TypeU5BU5D_t1_31* ___argumentTypes, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_0_0_0_var = il2cpp_codegen_type_from_index(0);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	Type_t * V_0 = {0};
	MethodInfo_t * V_1 = {0};
	ParameterInfoU5BU5D_t1_801* V_2 = {0};
	bool V_3 = false;
	int32_t V_4 = 0;
	ParameterInfo_t1_346 * V_5 = {0};
	ParameterInfoU5BU5D_t1_801* V_6 = {0};
	int32_t V_7 = 0;
	Type_t * V_8 = {0};
	Type_t * V_9 = {0};
	{
		Object_t * L_0 = ___obj;
		Type_t * L_1 = Object_GetType_m1_5(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_008e;
	}

IL_000c:
	{
		Type_t * L_2 = V_0;
		String_t* L_3 = ___functionName;
		TypeU5BU5D_t1_31* L_4 = ___argumentTypes;
		MethodInfo_t * L_5 = (MethodInfo_t *)VirtFuncInvoker5< MethodInfo_t *, String_t*, int32_t, Binder_t1_320 *, TypeU5BU5D_t1_31*, ParameterModifierU5BU5D_t1_797* >::Invoke(48 /* System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[]) */, L_2, L_3, ((int32_t)52), (Binder_t1_320 *)NULL, L_4, (ParameterModifierU5BU5D_t1_797*)(ParameterModifierU5BU5D_t1_797*)NULL);
		V_1 = L_5;
		MethodInfo_t * L_6 = V_1;
		if (!L_6)
		{
			goto IL_0087;
		}
	}
	{
		MethodInfo_t * L_7 = V_1;
		ParameterInfoU5BU5D_t1_801* L_8 = (ParameterInfoU5BU5D_t1_801*)VirtFuncInvoker0< ParameterInfoU5BU5D_t1_801* >::Invoke(14 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_7);
		V_2 = L_8;
		V_3 = 1;
		V_4 = 0;
		ParameterInfoU5BU5D_t1_801* L_9 = V_2;
		V_6 = L_9;
		V_7 = 0;
		goto IL_0074;
	}

IL_0036:
	{
		ParameterInfoU5BU5D_t1_801* L_10 = V_6;
		int32_t L_11 = V_7;
		int32_t L_12 = L_11;
		V_5 = (*(ParameterInfo_t1_346 **)(ParameterInfo_t1_346 **)SZArrayLdElema(L_10, L_12, sizeof(ParameterInfo_t1_346 *)));
		TypeU5BU5D_t1_31* L_13 = ___argumentTypes;
		int32_t L_14 = V_4;
		int32_t L_15 = L_14;
		V_8 = (*(Type_t **)(Type_t **)SZArrayLdElema(L_13, L_15, sizeof(Type_t *)));
		ParameterInfo_t1_346 * L_16 = V_5;
		Type_t * L_17 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(6 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_16);
		V_9 = L_17;
		Type_t * L_18 = V_8;
		bool L_19 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, L_18);
		Type_t * L_20 = V_9;
		bool L_21 = (bool)VirtFuncInvoker0< bool >::Invoke(30 /* System.Boolean System.Type::get_IsPrimitive() */, L_20);
		V_3 = ((((int32_t)L_19) == ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_0068;
		}
	}
	{
		goto IL_007f;
	}

IL_0068:
	{
		int32_t L_23 = V_4;
		V_4 = ((int32_t)((int32_t)L_23+(int32_t)1));
		int32_t L_24 = V_7;
		V_7 = ((int32_t)((int32_t)L_24+(int32_t)1));
	}

IL_0074:
	{
		int32_t L_25 = V_7;
		ParameterInfoU5BU5D_t1_801* L_26 = V_6;
		if ((((int32_t)L_25) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_26)->max_length)))))))
		{
			goto IL_0036;
		}
	}

IL_007f:
	{
		bool L_27 = V_3;
		if (!L_27)
		{
			goto IL_0087;
		}
	}
	{
		MethodInfo_t * L_28 = V_1;
		return L_28;
	}

IL_0087:
	{
		Type_t * L_29 = V_0;
		Type_t * L_30 = (Type_t *)VirtFuncInvoker0< Type_t * >::Invoke(17 /* System.Type System.Type::get_BaseType() */, L_29);
		V_0 = L_30;
	}

IL_008e:
	{
		Type_t * L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m1_894(NULL /*static, unused*/, LoadTypeToken(Object_t_0_0_0_var), /*hidden argument*/NULL);
		if ((((Object_t*)(Type_t *)L_31) == ((Object_t*)(Type_t *)L_32)))
		{
			goto IL_00a4;
		}
	}
	{
		Type_t * L_33 = V_0;
		if (L_33)
		{
			goto IL_000c;
		}
	}

IL_00a4:
	{
		return (MethodInfo_t *)NULL;
	}
}
// System.Void UnityEngine.Events.UnityEvent::.ctor()
extern TypeInfo* ObjectU5BU5D_t1_156_il2cpp_TypeInfo_var;
extern "C" void UnityEvent__ctor_m5_1327 (UnityEvent_t5_217 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t1_156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___m_InvokeArray_4 = ((ObjectU5BU5D_t1_156*)SZArrayNew(ObjectU5BU5D_t1_156_il2cpp_TypeInfo_var, 0));
		UnityEventBase__ctor_m5_1315(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
extern "C" void UnityEvent_AddListener_m5_1328 (UnityEvent_t5_217 * __this, UnityAction_t5_211 * ___call, const MethodInfo* method)
{
	{
		UnityAction_t5_211 * L_0 = ___call;
		BaseInvokableCall_t5_209 * L_1 = UnityEvent_GetDelegate_m5_1331(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		UnityEventBase_AddCall_m5_1322(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent::FindMethod_Impl(System.String,System.Object)
extern TypeInfo* TypeU5BU5D_t1_31_il2cpp_TypeInfo_var;
extern "C" MethodInfo_t * UnityEvent_FindMethod_Impl_m5_1329 (UnityEvent_t5_217 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeU5BU5D_t1_31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(57);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___targetObj;
		String_t* L_1 = ___name;
		MethodInfo_t * L_2 = UnityEventBase_GetValidMethodInfo_m5_1326(NULL /*static, unused*/, L_0, L_1, ((TypeU5BU5D_t1_31*)SZArrayNew(TypeU5BU5D_t1_31_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern TypeInfo* InvokableCall_t5_210_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t5_209 * UnityEvent_GetDelegate_m5_1330 (UnityEvent_t5_217 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCall_t5_210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(922);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___target;
		MethodInfo_t * L_1 = ___theFunction;
		InvokableCall_t5_210 * L_2 = (InvokableCall_t5_210 *)il2cpp_codegen_object_new (InvokableCall_t5_210_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m5_1295(L_2, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(UnityEngine.Events.UnityAction)
extern TypeInfo* InvokableCall_t5_210_il2cpp_TypeInfo_var;
extern "C" BaseInvokableCall_t5_209 * UnityEvent_GetDelegate_m5_1331 (Object_t * __this /* static, unused */, UnityAction_t5_211 * ___action, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvokableCall_t5_210_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(922);
		s_Il2CppMethodIntialized = true;
	}
	{
		UnityAction_t5_211 * L_0 = ___action;
		InvokableCall_t5_210 * L_1 = (InvokableCall_t5_210 *)il2cpp_codegen_object_new (InvokableCall_t5_210_il2cpp_TypeInfo_var);
		InvokableCall__ctor_m5_1296(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
extern "C" void UnityEvent_Invoke_m5_1332 (UnityEvent_t5_217 * __this, const MethodInfo* method)
{
	{
		ObjectU5BU5D_t1_156* L_0 = (__this->___m_InvokeArray_4);
		UnityEventBase_Invoke_m5_1324(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Internal.DefaultValueAttribute::.ctor(System.String)
extern "C" void DefaultValueAttribute__ctor_m5_1333 (DefaultValueAttribute_t5_219 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		Attribute__ctor_m1_17(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value;
		__this->___DefaultValue_0 = L_0;
		return;
	}
}
// System.Object UnityEngine.Internal.DefaultValueAttribute::get_Value()
extern "C" Object_t * DefaultValueAttribute_get_Value_m5_1334 (DefaultValueAttribute_t5_219 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		return L_0;
	}
}
// System.Boolean UnityEngine.Internal.DefaultValueAttribute::Equals(System.Object)
extern TypeInfo* DefaultValueAttribute_t5_219_il2cpp_TypeInfo_var;
extern "C" bool DefaultValueAttribute_Equals_m5_1335 (DefaultValueAttribute_t5_219 * __this, Object_t * ___obj, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DefaultValueAttribute_t5_219_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(932);
		s_Il2CppMethodIntialized = true;
	}
	DefaultValueAttribute_t5_219 * V_0 = {0};
	{
		Object_t * L_0 = ___obj;
		V_0 = ((DefaultValueAttribute_t5_219 *)IsInstClass(L_0, DefaultValueAttribute_t5_219_il2cpp_TypeInfo_var));
		DefaultValueAttribute_t5_219 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return 0;
	}

IL_000f:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		DefaultValueAttribute_t5_219 * L_3 = V_0;
		Object_t * L_4 = DefaultValueAttribute_get_Value_m5_1334(L_3, /*hidden argument*/NULL);
		return ((((Object_t*)(Object_t *)L_4) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}

IL_0024:
	{
		Object_t * L_5 = (__this->___DefaultValue_0);
		DefaultValueAttribute_t5_219 * L_6 = V_0;
		Object_t * L_7 = DefaultValueAttribute_get_Value_m5_1334(L_6, /*hidden argument*/NULL);
		bool L_8 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_5, L_7);
		return L_8;
	}
}
// System.Int32 UnityEngine.Internal.DefaultValueAttribute::GetHashCode()
extern "C" int32_t DefaultValueAttribute_GetHashCode_m5_1336 (DefaultValueAttribute_t5_219 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___DefaultValue_0);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = Attribute_GetHashCode_m1_21(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_0012:
	{
		Object_t * L_2 = (__this->___DefaultValue_0);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return L_3;
	}
}
// System.Void UnityEngine.Internal.ExcludeFromDocsAttribute::.ctor()
extern "C" void ExcludeFromDocsAttribute__ctor_m5_1337 (ExcludeFromDocsAttribute_t5_220 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m1_17(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Logger::.ctor(UnityEngine.ILogHandler)
extern "C" void Logger__ctor_m5_1338 (Logger_t5_71 * __this, Object_t * ___logHandler, const MethodInfo* method)
{
	{
		Object__ctor_m1_0(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___logHandler;
		VirtActionInvoker1< Object_t * >::Invoke(9 /* System.Void UnityEngine.Logger::set_logHandler(UnityEngine.ILogHandler) */, __this, L_0);
		VirtActionInvoker1< bool >::Invoke(11 /* System.Void UnityEngine.Logger::set_logEnabled(System.Boolean) */, __this, 1);
		VirtActionInvoker1< int32_t >::Invoke(13 /* System.Void UnityEngine.Logger::set_filterLogType(UnityEngine.LogType) */, __this, 3);
		return;
	}
}
// UnityEngine.ILogHandler UnityEngine.Logger::get_logHandler()
extern "C" Object_t * Logger_get_logHandler_m5_1339 (Logger_t5_71 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U3ClogHandlerU3Ek__BackingField_0);
		return L_0;
	}
}
// System.Void UnityEngine.Logger::set_logHandler(UnityEngine.ILogHandler)
extern "C" void Logger_set_logHandler_m5_1340 (Logger_t5_71 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___U3ClogHandlerU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Logger::get_logEnabled()
extern "C" bool Logger_get_logEnabled_m5_1341 (Logger_t5_71 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3ClogEnabledU3Ek__BackingField_1);
		return L_0;
	}
}
// System.Void UnityEngine.Logger::set_logEnabled(System.Boolean)
extern "C" void Logger_set_logEnabled_m5_1342 (Logger_t5_71 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3ClogEnabledU3Ek__BackingField_1 = L_0;
		return;
	}
}
// UnityEngine.LogType UnityEngine.Logger::get_filterLogType()
extern "C" int32_t Logger_get_filterLogType_m5_1343 (Logger_t5_71 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CfilterLogTypeU3Ek__BackingField_2);
		return L_0;
	}
}
// System.Void UnityEngine.Logger::set_filterLogType(UnityEngine.LogType)
extern "C" void Logger_set_filterLogType_m5_1344 (Logger_t5_71 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CfilterLogTypeU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.Logger::IsLogTypeAllowed(UnityEngine.LogType)
extern "C" bool Logger_IsLogTypeAllowed_m5_1345 (Logger_t5_71 * __this, int32_t ___logType, const MethodInfo* method)
{
	int32_t G_B4_0 = 0;
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean UnityEngine.Logger::get_logEnabled() */, __this);
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = ___logType;
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(12 /* UnityEngine.LogType UnityEngine.Logger::get_filterLogType() */, __this);
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_3 = ___logType;
		G_B4_0 = ((((int32_t)L_3) == ((int32_t)4))? 1 : 0);
		goto IL_001e;
	}

IL_001d:
	{
		G_B4_0 = 1;
	}

IL_001e:
	{
		return G_B4_0;
	}

IL_001f:
	{
		return 0;
	}
}
// System.String UnityEngine.Logger::GetString(System.Object)
extern Il2CppCodeGenString* _stringLiteral2618;
extern "C" String_t* Logger_GetString_m5_1346 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral2618 = il2cpp_codegen_string_literal_from_index(2618);
		s_Il2CppMethodIntialized = true;
	}
	String_t* G_B3_0 = {0};
	{
		Object_t * L_0 = ___message;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		Object_t * L_1 = ___message;
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		G_B3_0 = L_2;
		goto IL_0016;
	}

IL_0011:
	{
		G_B3_0 = _stringLiteral2618;
	}

IL_0016:
	{
		return G_B3_0;
	}
}
// System.Void UnityEngine.Logger::Log(UnityEngine.LogType,System.Object)
extern TypeInfo* ObjectU5BU5D_t1_156_il2cpp_TypeInfo_var;
extern TypeInfo* ILogHandler_t5_221_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2619;
extern "C" void Logger_Log_m5_1347 (Logger_t5_71 * __this, int32_t ___logType, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t1_156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		ILogHandler_t5_221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(844);
		_stringLiteral2619 = il2cpp_codegen_string_literal_from_index(2619);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___logType;
		bool L_1 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(14 /* System.Boolean UnityEngine.Logger::IsLogTypeAllowed(UnityEngine.LogType) */, __this, L_0);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(8 /* UnityEngine.ILogHandler UnityEngine.Logger::get_logHandler() */, __this);
		int32_t L_3 = ___logType;
		ObjectU5BU5D_t1_156* L_4 = ((ObjectU5BU5D_t1_156*)SZArrayNew(ObjectU5BU5D_t1_156_il2cpp_TypeInfo_var, 1));
		Object_t * L_5 = ___message;
		String_t* L_6 = Logger_GetString_m5_1346(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_4, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_4, 0, sizeof(Object_t *))) = (Object_t *)L_6;
		InterfaceActionInvoker4< int32_t, Object_t5_5 *, String_t*, ObjectU5BU5D_t1_156* >::Invoke(0 /* System.Void UnityEngine.ILogHandler::LogFormat(UnityEngine.LogType,UnityEngine.Object,System.String,System.Object[]) */, ILogHandler_t5_221_il2cpp_TypeInfo_var, L_2, L_3, (Object_t5_5 *)NULL, _stringLiteral2619, L_4);
	}

IL_002d:
	{
		return;
	}
}
// System.Void UnityEngine.Logger::Log(UnityEngine.LogType,System.Object,UnityEngine.Object)
extern TypeInfo* ObjectU5BU5D_t1_156_il2cpp_TypeInfo_var;
extern TypeInfo* ILogHandler_t5_221_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2619;
extern "C" void Logger_Log_m5_1348 (Logger_t5_71 * __this, int32_t ___logType, Object_t * ___message, Object_t5_5 * ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t1_156_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		ILogHandler_t5_221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(844);
		_stringLiteral2619 = il2cpp_codegen_string_literal_from_index(2619);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___logType;
		bool L_1 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(14 /* System.Boolean UnityEngine.Logger::IsLogTypeAllowed(UnityEngine.LogType) */, __this, L_0);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(8 /* UnityEngine.ILogHandler UnityEngine.Logger::get_logHandler() */, __this);
		int32_t L_3 = ___logType;
		Object_t5_5 * L_4 = ___context;
		ObjectU5BU5D_t1_156* L_5 = ((ObjectU5BU5D_t1_156*)SZArrayNew(ObjectU5BU5D_t1_156_il2cpp_TypeInfo_var, 1));
		Object_t * L_6 = ___message;
		String_t* L_7 = Logger_GetString_m5_1346(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_5, L_7);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 0, sizeof(Object_t *))) = (Object_t *)L_7;
		InterfaceActionInvoker4< int32_t, Object_t5_5 *, String_t*, ObjectU5BU5D_t1_156* >::Invoke(0 /* System.Void UnityEngine.ILogHandler::LogFormat(UnityEngine.LogType,UnityEngine.Object,System.String,System.Object[]) */, ILogHandler_t5_221_il2cpp_TypeInfo_var, L_2, L_3, L_4, _stringLiteral2619, L_5);
	}

IL_002d:
	{
		return;
	}
}
// System.Void UnityEngine.Logger::LogFormat(UnityEngine.LogType,UnityEngine.Object,System.String,System.Object[])
extern TypeInfo* ILogHandler_t5_221_il2cpp_TypeInfo_var;
extern "C" void Logger_LogFormat_m5_1349 (Logger_t5_71 * __this, int32_t ___logType, Object_t5_5 * ___context, String_t* ___format, ObjectU5BU5D_t1_156* ___args, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILogHandler_t5_221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(844);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___logType;
		bool L_1 = (bool)VirtFuncInvoker1< bool, int32_t >::Invoke(14 /* System.Boolean UnityEngine.Logger::IsLogTypeAllowed(UnityEngine.LogType) */, __this, L_0);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Object_t * L_2 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(8 /* UnityEngine.ILogHandler UnityEngine.Logger::get_logHandler() */, __this);
		int32_t L_3 = ___logType;
		Object_t5_5 * L_4 = ___context;
		String_t* L_5 = ___format;
		ObjectU5BU5D_t1_156* L_6 = ___args;
		InterfaceActionInvoker4< int32_t, Object_t5_5 *, String_t*, ObjectU5BU5D_t1_156* >::Invoke(0 /* System.Void UnityEngine.ILogHandler::LogFormat(UnityEngine.LogType,UnityEngine.Object,System.String,System.Object[]) */, ILogHandler_t5_221_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5, L_6);
	}

IL_001c:
	{
		return;
	}
}
// System.Void UnityEngine.Logger::LogException(System.Exception,UnityEngine.Object)
extern TypeInfo* ILogHandler_t5_221_il2cpp_TypeInfo_var;
extern "C" void Logger_LogException_m5_1350 (Logger_t5_71 * __this, Exception_t1_33 * ___exception, Object_t5_5 * ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ILogHandler_t5_221_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(844);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean UnityEngine.Logger::get_logEnabled() */, __this);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(8 /* UnityEngine.ILogHandler UnityEngine.Logger::get_logHandler() */, __this);
		Exception_t1_33 * L_2 = ___exception;
		Object_t5_5 * L_3 = ___context;
		InterfaceActionInvoker2< Exception_t1_33 *, Object_t5_5 * >::Invoke(1 /* System.Void UnityEngine.ILogHandler::LogException(System.Exception,UnityEngine.Object) */, ILogHandler_t5_221_il2cpp_TypeInfo_var, L_1, L_2, L_3);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Scripting.RequiredByNativeCodeAttribute::.ctor()
extern "C" void RequiredByNativeCodeAttribute__ctor_m5_1351 (RequiredByNativeCodeAttribute_t5_222 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m1_17(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Scripting.UsedByNativeCodeAttribute::.ctor()
extern "C" void UsedByNativeCodeAttribute__ctor_m5_1352 (UsedByNativeCodeAttribute_t5_223 * __this, const MethodInfo* method)
{
	{
		Attribute__ctor_m1_17(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Serialization.FormerlySerializedAsAttribute::.ctor(System.String)
extern "C" void FormerlySerializedAsAttribute__ctor_m5_1353 (FormerlySerializedAsAttribute_t5_224 * __this, String_t* ___oldName, const MethodInfo* method)
{
	{
		Attribute__ctor_m1_17(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___oldName;
		__this->___m_oldName_0 = L_0;
		return;
	}
}
// System.String UnityEngine.Serialization.FormerlySerializedAsAttribute::get_oldName()
extern "C" String_t* FormerlySerializedAsAttribute_get_oldName_m5_1354 (FormerlySerializedAsAttribute_t5_224 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___m_oldName_0);
		return L_0;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(UnityEngineInternal.TypeInferenceRules)
extern TypeInfo* TypeInferenceRules_t5_225_il2cpp_TypeInfo_var;
extern "C" void TypeInferenceRuleAttribute__ctor_m5_1355 (TypeInferenceRuleAttribute_t5_226 * __this, int32_t ___rule, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TypeInferenceRules_t5_225_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(933);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___rule;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(TypeInferenceRules_t5_225_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_2);
		TypeInferenceRuleAttribute__ctor_m5_1356(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngineInternal.TypeInferenceRuleAttribute::.ctor(System.String)
extern "C" void TypeInferenceRuleAttribute__ctor_m5_1356 (TypeInferenceRuleAttribute_t5_226 * __this, String_t* ___rule, const MethodInfo* method)
{
	{
		Attribute__ctor_m1_17(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___rule;
		__this->____rule_0 = L_0;
		return;
	}
}
// System.String UnityEngineInternal.TypeInferenceRuleAttribute::ToString()
extern "C" String_t* TypeInferenceRuleAttribute_ToString_m5_1357 (TypeInferenceRuleAttribute_t5_226 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->____rule_0);
		return L_0;
	}
}
// System.Void UnityEngineInternal.GenericStack::.ctor()
extern "C" void GenericStack__ctor_m5_1358 (GenericStack_t5_152 * __this, const MethodInfo* method)
{
	{
		Stack__ctor_m1_1828(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Delegate UnityEngineInternal.NetFxCoreExtensions::CreateDelegate(System.Reflection.MethodInfo,System.Type,System.Object)
extern "C" Delegate_t1_22 * NetFxCoreExtensions_CreateDelegate_m5_1359 (Object_t * __this /* static, unused */, MethodInfo_t * ___self, Type_t * ___delegateType, Object_t * ___target, const MethodInfo* method)
{
	{
		Type_t * L_0 = ___delegateType;
		Object_t * L_1 = ___target;
		MethodInfo_t * L_2 = ___self;
		Delegate_t1_22 * L_3 = Delegate_CreateDelegate_m1_685(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Reflection.MethodInfo UnityEngineInternal.NetFxCoreExtensions::GetMethodInfo(System.Delegate)
extern "C" MethodInfo_t * NetFxCoreExtensions_GetMethodInfo_m5_1360 (Object_t * __this /* static, unused */, Delegate_t1_22 * ___self, const MethodInfo* method)
{
	{
		Delegate_t1_22 * L_0 = ___self;
		MethodInfo_t * L_1 = Delegate_get_Method_m1_678(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction__ctor_m5_1361 (UnityAction_t5_211 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void UnityEngine.Events.UnityAction::Invoke()
extern "C" void UnityAction_Invoke_m5_1362 (UnityAction_t5_211 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		UnityAction_Invoke_m5_1362((UnityAction_t5_211 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_UnityAction_t5_211(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult UnityEngine.Events.UnityAction::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_BeginInvoke_m5_1363 (UnityAction_t5_211 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void UnityEngine.Events.UnityAction::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_EndInvoke_m5_1364 (UnityAction_t5_211 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
