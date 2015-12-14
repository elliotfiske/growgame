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

// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t6_131;
// UnityEngine.UI.Toggle
struct Toggle_t6_66;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle>
struct IEnumerable_1_t1_929;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.ToggleGroup::.ctor()
extern "C" void ToggleGroup__ctor_m6_1170 (ToggleGroup_t6_131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ToggleGroup::get_allowSwitchOff()
extern "C" bool ToggleGroup_get_allowSwitchOff_m6_1171 (ToggleGroup_t6_131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::set_allowSwitchOff(System.Boolean)
extern "C" void ToggleGroup_set_allowSwitchOff_m6_1172 (ToggleGroup_t6_131 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::ValidateToggleIsInGroup(UnityEngine.UI.Toggle)
extern "C" void ToggleGroup_ValidateToggleIsInGroup_m6_1173 (ToggleGroup_t6_131 * __this, Toggle_t6_66 * ___toggle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::NotifyToggleOn(UnityEngine.UI.Toggle)
extern "C" void ToggleGroup_NotifyToggleOn_m6_1174 (ToggleGroup_t6_131 * __this, Toggle_t6_66 * ___toggle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::UnregisterToggle(UnityEngine.UI.Toggle)
extern "C" void ToggleGroup_UnregisterToggle_m6_1175 (ToggleGroup_t6_131 * __this, Toggle_t6_66 * ___toggle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::RegisterToggle(UnityEngine.UI.Toggle)
extern "C" void ToggleGroup_RegisterToggle_m6_1176 (ToggleGroup_t6_131 * __this, Toggle_t6_66 * ___toggle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ToggleGroup::AnyTogglesOn()
extern "C" bool ToggleGroup_AnyTogglesOn_m6_1177 (ToggleGroup_t6_131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle> UnityEngine.UI.ToggleGroup::ActiveToggles()
extern "C" Object_t* ToggleGroup_ActiveToggles_m6_1178 (ToggleGroup_t6_131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::SetAllTogglesOff()
extern "C" void ToggleGroup_SetAllTogglesOff_m6_1179 (ToggleGroup_t6_131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ToggleGroup::<AnyTogglesOn>m__4(UnityEngine.UI.Toggle)
extern "C" bool ToggleGroup_U3CAnyTogglesOnU3Em__4_m6_1180 (Object_t * __this /* static, unused */, Toggle_t6_66 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ToggleGroup::<ActiveToggles>m__5(UnityEngine.UI.Toggle)
extern "C" bool ToggleGroup_U3CActiveTogglesU3Em__5_m6_1181 (Object_t * __this /* static, unused */, Toggle_t6_66 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
