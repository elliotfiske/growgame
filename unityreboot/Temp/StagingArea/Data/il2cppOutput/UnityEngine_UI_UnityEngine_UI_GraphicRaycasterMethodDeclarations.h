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

// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_t6_80;
// UnityEngine.Canvas
struct Canvas_t5_139;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t6_37;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t1_905;
// UnityEngine.Camera
struct Camera_t5_68;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t1_913;
// UnityEngine.UI.Graphic
struct Graphic_t6_76;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_GraphicRaycaster_BlockingObjec.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.UI.GraphicRaycaster::.ctor()
extern "C" void GraphicRaycaster__ctor_m6_546 (GraphicRaycaster_t6_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::.cctor()
extern "C" void GraphicRaycaster__cctor_m6_547 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.GraphicRaycaster::get_sortOrderPriority()
extern "C" int32_t GraphicRaycaster_get_sortOrderPriority_m6_548 (GraphicRaycaster_t6_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.GraphicRaycaster::get_renderOrderPriority()
extern "C" int32_t GraphicRaycaster_get_renderOrderPriority_m6_549 (GraphicRaycaster_t6_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.GraphicRaycaster::get_ignoreReversedGraphics()
extern "C" bool GraphicRaycaster_get_ignoreReversedGraphics_m6_550 (GraphicRaycaster_t6_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::set_ignoreReversedGraphics(System.Boolean)
extern "C" void GraphicRaycaster_set_ignoreReversedGraphics_m6_551 (GraphicRaycaster_t6_80 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.GraphicRaycaster/BlockingObjects UnityEngine.UI.GraphicRaycaster::get_blockingObjects()
extern "C" int32_t GraphicRaycaster_get_blockingObjects_m6_552 (GraphicRaycaster_t6_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::set_blockingObjects(UnityEngine.UI.GraphicRaycaster/BlockingObjects)
extern "C" void GraphicRaycaster_set_blockingObjects_m6_553 (GraphicRaycaster_t6_80 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Canvas UnityEngine.UI.GraphicRaycaster::get_canvas()
extern "C" Canvas_t5_139 * GraphicRaycaster_get_canvas_m6_554 (GraphicRaycaster_t6_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C" void GraphicRaycaster_Raycast_m6_555 (GraphicRaycaster_t6_80 * __this, PointerEventData_t6_37 * ___eventData, List_1_t1_905 * ___resultAppendList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.UI.GraphicRaycaster::get_eventCamera()
extern "C" Camera_t5_68 * GraphicRaycaster_get_eventCamera_m6_556 (GraphicRaycaster_t6_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::Raycast(UnityEngine.Canvas,UnityEngine.Camera,UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.UI.Graphic>)
extern "C" void GraphicRaycaster_Raycast_m6_557 (Object_t * __this /* static, unused */, Canvas_t5_139 * ___canvas, Camera_t5_68 * ___eventCamera, Vector2_t5_34  ___pointerPosition, List_1_t1_913 * ___results, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.GraphicRaycaster::<Raycast>m__3(UnityEngine.UI.Graphic,UnityEngine.UI.Graphic)
extern "C" int32_t GraphicRaycaster_U3CRaycastU3Em__3_m6_558 (Object_t * __this /* static, unused */, Graphic_t6_76 * ___g1, Graphic_t6_76 * ___g2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
