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

// UnityEngine.UI.LayoutRebuilder
struct LayoutRebuilder_t6_151;
// UnityEngine.RectTransform
struct RectTransform_t5_53;
// UnityEngine.Transform
struct Transform_t5_54;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t1_888;
// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t5_254;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.Component
struct Component_t5_17;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"

// System.Void UnityEngine.UI.LayoutRebuilder::.ctor()
extern "C" void LayoutRebuilder__ctor_m6_1334 (LayoutRebuilder_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::.cctor()
extern "C" void LayoutRebuilder__cctor_m6_1335 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::Initialize(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_Initialize_m6_1336 (LayoutRebuilder_t6_151 * __this, RectTransform_t5_53 * ___controller, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::Clear()
extern "C" void LayoutRebuilder_Clear_m6_1337 (LayoutRebuilder_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::ReapplyDrivenProperties(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_ReapplyDrivenProperties_m6_1338 (Object_t * __this /* static, unused */, RectTransform_t5_53 * ___driven, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.LayoutRebuilder::get_transform()
extern "C" Transform_t5_54 * LayoutRebuilder_get_transform_m6_1339 (LayoutRebuilder_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::IsDestroyed()
extern "C" bool LayoutRebuilder_IsDestroyed_m6_1340 (LayoutRebuilder_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::StripDisabledBehavioursFromList(System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" void LayoutRebuilder_StripDisabledBehavioursFromList_m6_1341 (Object_t * __this /* static, unused */, List_1_t1_888 * ___components, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::ForceRebuildLayoutImmediate(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_ForceRebuildLayoutImmediate_m6_1342 (Object_t * __this /* static, unused */, RectTransform_t5_53 * ___layoutRoot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void LayoutRebuilder_Rebuild_m6_1343 (LayoutRebuilder_t6_151 * __this, int32_t ___executing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::PerformLayoutControl(UnityEngine.RectTransform,UnityEngine.Events.UnityAction`1<UnityEngine.Component>)
extern "C" void LayoutRebuilder_PerformLayoutControl_m6_1344 (LayoutRebuilder_t6_151 * __this, RectTransform_t5_53 * ___rect, UnityAction_1_t5_254 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::PerformLayoutCalculation(UnityEngine.RectTransform,UnityEngine.Events.UnityAction`1<UnityEngine.Component>)
extern "C" void LayoutRebuilder_PerformLayoutCalculation_m6_1345 (LayoutRebuilder_t6_151 * __this, RectTransform_t5_53 * ___rect, UnityAction_1_t5_254 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutForRebuild(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_MarkLayoutForRebuild_m6_1346 (Object_t * __this /* static, unused */, RectTransform_t5_53 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::ValidLayoutGroup(UnityEngine.RectTransform,System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" bool LayoutRebuilder_ValidLayoutGroup_m6_1347 (Object_t * __this /* static, unused */, RectTransform_t5_53 * ___parent, List_1_t1_888 * ___comps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::ValidController(UnityEngine.RectTransform,System.Collections.Generic.List`1<UnityEngine.Component>)
extern "C" bool LayoutRebuilder_ValidController_m6_1348 (Object_t * __this /* static, unused */, RectTransform_t5_53 * ___layoutRoot, List_1_t1_888 * ___comps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutRootForRebuild(UnityEngine.RectTransform)
extern "C" void LayoutRebuilder_MarkLayoutRootForRebuild_m6_1349 (Object_t * __this /* static, unused */, RectTransform_t5_53 * ___controller, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::LayoutComplete()
extern "C" void LayoutRebuilder_LayoutComplete_m6_1350 (LayoutRebuilder_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::GraphicUpdateComplete()
extern "C" void LayoutRebuilder_GraphicUpdateComplete_m6_1351 (LayoutRebuilder_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.LayoutRebuilder::GetHashCode()
extern "C" int32_t LayoutRebuilder_GetHashCode_m6_1352 (LayoutRebuilder_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::Equals(System.Object)
extern "C" bool LayoutRebuilder_Equals_m6_1353 (LayoutRebuilder_t6_151 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.LayoutRebuilder::ToString()
extern "C" String_t* LayoutRebuilder_ToString_m6_1354 (LayoutRebuilder_t6_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<s_Rebuilders>m__6(UnityEngine.UI.LayoutRebuilder)
extern "C" void LayoutRebuilder_U3Cs_RebuildersU3Em__6_m6_1355 (Object_t * __this /* static, unused */, LayoutRebuilder_t6_151 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutRebuilder::<StripDisabledBehavioursFromList>m__7(UnityEngine.Component)
extern "C" bool LayoutRebuilder_U3CStripDisabledBehavioursFromListU3Em__7_m6_1356 (Object_t * __this /* static, unused */, Component_t5_17 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__8(UnityEngine.Component)
extern "C" void LayoutRebuilder_U3CRebuildU3Em__8_m6_1357 (Object_t * __this /* static, unused */, Component_t5_17 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__9(UnityEngine.Component)
extern "C" void LayoutRebuilder_U3CRebuildU3Em__9_m6_1358 (Object_t * __this /* static, unused */, Component_t5_17 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__A(UnityEngine.Component)
extern "C" void LayoutRebuilder_U3CRebuildU3Em__A_m6_1359 (Object_t * __this /* static, unused */, Component_t5_17 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutRebuilder::<Rebuild>m__B(UnityEngine.Component)
extern "C" void LayoutRebuilder_U3CRebuildU3Em__B_m6_1360 (Object_t * __this /* static, unused */, Component_t5_17 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
