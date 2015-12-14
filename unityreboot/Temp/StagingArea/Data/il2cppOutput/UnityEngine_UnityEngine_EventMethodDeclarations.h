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

// UnityEngine.Event
struct Event_t5_144;
struct Event_t5_144_marshaled;
// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_EventType.h"
#include "UnityEngine_UnityEngine_EventModifiers.h"
#include "UnityEngine_UnityEngine_KeyCode.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Event::.ctor()
extern "C" void Event__ctor_m5_916 (Event_t5_144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::.ctor(System.Int32)
extern "C" void Event__ctor_m5_917 (Event_t5_144 * __this, int32_t ___displayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Finalize()
extern "C" void Event_Finalize_m5_918 (Event_t5_144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
extern "C" Vector2_t5_34  Event_get_mousePosition_m5_919 (Event_t5_144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Event UnityEngine.Event::get_current()
extern "C" Event_t5_144 * Event_get_current_m5_920 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_MakeMasterEventCurrent(System.Int32)
extern "C" void Event_Internal_MakeMasterEventCurrent_m5_921 (Object_t * __this /* static, unused */, int32_t ___displayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_isKey()
extern "C" bool Event_get_isKey_m5_922 (Event_t5_144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_isMouse()
extern "C" bool Event_get_isMouse_m5_923 (Event_t5_144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Event::GetHashCode()
extern "C" int32_t Event_GetHashCode_m5_924 (Event_t5_144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::Equals(System.Object)
extern "C" bool Event_Equals_m5_925 (Event_t5_144 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Event::ToString()
extern "C" String_t* Event_ToString_m5_926 (Event_t5_144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Init(System.Int32)
extern "C" void Event_Init_m5_927 (Event_t5_144 * __this, int32_t ___displayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Cleanup()
extern "C" void Event_Cleanup_m5_928 (Event_t5_144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::get_rawType()
extern "C" int32_t Event_get_rawType_m5_929 (Event_t5_144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::get_type()
extern "C" int32_t Event_get_type_m5_930 (Event_t5_144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)
extern "C" void Event_Internal_GetMousePosition_m5_931 (Event_t5_144 * __this, Vector2_t5_34 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
extern "C" int32_t Event_get_modifiers_m5_932 (Event_t5_144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.Event::get_character()
extern "C" uint16_t Event_get_character_m5_933 (Event_t5_144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Event::get_commandName()
extern "C" String_t* Event_get_commandName_m5_934 (Event_t5_144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
extern "C" int32_t Event_get_keyCode_m5_935 (Event_t5_144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
extern "C" void Event_Internal_SetNativeEvent_m5_936 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::set_displayIndex(System.Int32)
extern "C" void Event_set_displayIndex_m5_937 (Event_t5_144 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::PopEvent(UnityEngine.Event)
extern "C" bool Event_PopEvent_m5_938 (Object_t * __this /* static, unused */, Event_t5_144 * ___outEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Event_t5_144_marshal(const Event_t5_144& unmarshaled, Event_t5_144_marshaled& marshaled);
extern "C" void Event_t5_144_marshal_back(const Event_t5_144_marshaled& marshaled, Event_t5_144& unmarshaled);
extern "C" void Event_t5_144_marshal_cleanup(Event_t5_144_marshaled& marshaled);
