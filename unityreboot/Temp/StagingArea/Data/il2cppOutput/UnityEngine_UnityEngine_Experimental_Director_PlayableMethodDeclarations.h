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

// UnityEngine.Experimental.Director.Playable
struct Playable_t5_87;
// UnityEngine.Experimental.Director.Playable[]
struct PlayableU5BU5D_t5_235;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.List`1<UnityEngine.Experimental.Director.Playable>
struct List_1_t1_889;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Experimental_Director_PlayState.h"
#include "UnityEngine_UnityEngine_Experimental_Director_FrameData.h"

// System.Void UnityEngine.Experimental.Director.Playable::.ctor()
extern "C" void Playable__ctor_m5_619 (Playable_t5_87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::.ctor(System.Boolean)
extern "C" void Playable__ctor_m5_620 (Playable_t5_87 * __this, bool ___callCPPConstructor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::Dispose(System.Boolean)
extern "C" void Playable_Dispose_m5_621 (Playable_t5_87 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::GetUniqueIDInternal()
extern "C" int32_t Playable_GetUniqueIDInternal_m5_622 (Playable_t5_87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::Connect(UnityEngine.Experimental.Director.Playable,UnityEngine.Experimental.Director.Playable)
extern "C" bool Playable_Connect_m5_623 (Object_t * __this /* static, unused */, Playable_t5_87 * ___source, Playable_t5_87 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::Connect(UnityEngine.Experimental.Director.Playable,UnityEngine.Experimental.Director.Playable,System.Int32,System.Int32)
extern "C" bool Playable_Connect_m5_624 (Object_t * __this /* static, unused */, Playable_t5_87 * ___source, Playable_t5_87 * ___target, int32_t ___sourceOutputPort, int32_t ___targetInputPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::Disconnect(UnityEngine.Experimental.Director.Playable,System.Int32)
extern "C" void Playable_Disconnect_m5_625 (Object_t * __this /* static, unused */, Playable_t5_87 * ___target, int32_t ___inputPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::ReleaseEnginePlayable()
extern "C" void Playable_ReleaseEnginePlayable_m5_626 (Playable_t5_87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::InstantiateEnginePlayable()
extern "C" void Playable_InstantiateEnginePlayable_m5_627 (Playable_t5_87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::GenerateUniqueId()
extern "C" int32_t Playable_GenerateUniqueId_m5_628 (Playable_t5_87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::SetInputWeightInternal(System.Int32,System.Single)
extern "C" bool Playable_SetInputWeightInternal_m5_629 (Playable_t5_87 * __this, int32_t ___inputIndex, float ___weight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Experimental.Director.Playable::GetInputWeightInternal(System.Int32)
extern "C" float Playable_GetInputWeightInternal_m5_630 (Playable_t5_87 * __this, int32_t ___inputIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double UnityEngine.Experimental.Director.Playable::get_time()
extern "C" double Playable_get_time_m5_631 (Playable_t5_87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::set_time(System.Double)
extern "C" void Playable_set_time_m5_632 (Playable_t5_87 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.PlayState UnityEngine.Experimental.Director.Playable::get_state()
extern "C" int32_t Playable_get_state_m5_633 (Playable_t5_87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::set_state(UnityEngine.Experimental.Director.PlayState)
extern "C" void Playable_set_state_m5_634 (Playable_t5_87 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::ConnectInternal(UnityEngine.Experimental.Director.Playable,UnityEngine.Experimental.Director.Playable,System.Int32,System.Int32)
extern "C" bool Playable_ConnectInternal_m5_635 (Object_t * __this /* static, unused */, Playable_t5_87 * ___source, Playable_t5_87 * ___target, int32_t ___sourceOutputPort, int32_t ___targetInputPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::DisconnectInternal(UnityEngine.Experimental.Director.Playable,System.Int32)
extern "C" void Playable_DisconnectInternal_m5_636 (Object_t * __this /* static, unused */, Playable_t5_87 * ___target, int32_t ___inputPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.Playable::GetInput(System.Int32)
extern "C" Playable_t5_87 * Playable_GetInput_m5_637 (Playable_t5_87 * __this, int32_t ___inputPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable[] UnityEngine.Experimental.Director.Playable::GetInputs()
extern "C" PlayableU5BU5D_t5_235* Playable_GetInputs_m5_638 (Playable_t5_87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::get_inputCount()
extern "C" int32_t Playable_get_inputCount_m5_639 (Playable_t5_87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::get_outputCount()
extern "C" int32_t Playable_get_outputCount_m5_640 (Playable_t5_87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::ClearInputs()
extern "C" void Playable_ClearInputs_m5_641 (Playable_t5_87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable UnityEngine.Experimental.Director.Playable::GetOutput(System.Int32)
extern "C" Playable_t5_87 * Playable_GetOutput_m5_642 (Playable_t5_87 * __this, int32_t ___outputPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Experimental.Director.Playable[] UnityEngine.Experimental.Director.Playable::GetOutputs()
extern "C" PlayableU5BU5D_t5_235* Playable_GetOutputs_m5_643 (Playable_t5_87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::GetInputsInternal(System.Object)
extern "C" void Playable_GetInputsInternal_m5_644 (Playable_t5_87 * __this, Object_t * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::GetOutputsInternal(System.Object)
extern "C" void Playable_GetOutputsInternal_m5_645 (Playable_t5_87 * __this, Object_t * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::Finalize()
extern "C" void Playable_Finalize_m5_646 (Playable_t5_87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::Dispose()
extern "C" void Playable_Dispose_m5_647 (Playable_t5_87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::Equals(System.Object)
extern "C" bool Playable_Equals_m5_648 (Playable_t5_87 * __this, Object_t * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Experimental.Director.Playable::GetHashCode()
extern "C" int32_t Playable_GetHashCode_m5_649 (Playable_t5_87 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::CompareIntPtr(UnityEngine.Experimental.Director.Playable,UnityEngine.Experimental.Director.Playable)
extern "C" bool Playable_CompareIntPtr_m5_650 (Object_t * __this /* static, unused */, Playable_t5_87 * ___lhs, Playable_t5_87 * ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::IsNativePlayableAlive(UnityEngine.Experimental.Director.Playable)
extern "C" bool Playable_IsNativePlayableAlive_m5_651 (Object_t * __this /* static, unused */, Playable_t5_87 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::CheckPlayableValidity(UnityEngine.Experimental.Director.Playable,System.String)
extern "C" bool Playable_CheckPlayableValidity_m5_652 (Object_t * __this /* static, unused */, Playable_t5_87 * ___playable, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::CheckInputBounds(System.Int32)
extern "C" bool Playable_CheckInputBounds_m5_653 (Playable_t5_87 * __this, int32_t ___inputIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::CheckInputBounds(System.Int32,System.Boolean)
extern "C" bool Playable_CheckInputBounds_m5_654 (Playable_t5_87 * __this, int32_t ___inputIndex, bool ___acceptAny, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Experimental.Director.Playable::GetInputWeight(System.Int32)
extern "C" float Playable_GetInputWeight_m5_655 (Playable_t5_87 * __this, int32_t ___inputIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::SetInputWeight(System.Int32,System.Single)
extern "C" bool Playable_SetInputWeight_m5_656 (Playable_t5_87 * __this, int32_t ___inputIndex, float ___weight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::GetInputs(System.Collections.Generic.List`1<UnityEngine.Experimental.Director.Playable>)
extern "C" void Playable_GetInputs_m5_657 (Playable_t5_87 * __this, List_1_t1_889 * ___inputList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::GetOutputs(System.Collections.Generic.List`1<UnityEngine.Experimental.Director.Playable>)
extern "C" void Playable_GetOutputs_m5_658 (Playable_t5_87 * __this, List_1_t1_889 * ___outputList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::PrepareFrame(UnityEngine.Experimental.Director.FrameData)
extern "C" void Playable_PrepareFrame_m5_659 (Playable_t5_87 * __this, FrameData_t5_218  ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::ProcessFrame(UnityEngine.Experimental.Director.FrameData,System.Object)
extern "C" void Playable_ProcessFrame_m5_660 (Playable_t5_87 * __this, FrameData_t5_218  ___info, Object_t * ___playerData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::OnSetTime(System.Single)
extern "C" void Playable_OnSetTime_m5_661 (Playable_t5_87 * __this, float ___localTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Experimental.Director.Playable::OnSetPlayState(UnityEngine.Experimental.Director.PlayState)
extern "C" void Playable_OnSetPlayState_m5_662 (Playable_t5_87 * __this, int32_t ___newState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::op_Equality(UnityEngine.Experimental.Director.Playable,UnityEngine.Experimental.Director.Playable)
extern "C" bool Playable_op_Equality_m5_663 (Object_t * __this /* static, unused */, Playable_t5_87 * ___x, Playable_t5_87 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::op_Inequality(UnityEngine.Experimental.Director.Playable,UnityEngine.Experimental.Director.Playable)
extern "C" bool Playable_op_Inequality_m5_664 (Object_t * __this /* static, unused */, Playable_t5_87 * ___x, Playable_t5_87 * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Experimental.Director.Playable::op_Implicit(UnityEngine.Experimental.Director.Playable)
extern "C" bool Playable_op_Implicit_m5_665 (Object_t * __this /* static, unused */, Playable_t5_87 * ___exists, const MethodInfo* method) IL2CPP_METHOD_ATTR;
