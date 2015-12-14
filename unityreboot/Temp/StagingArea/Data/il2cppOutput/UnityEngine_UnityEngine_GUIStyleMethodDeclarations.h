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

// UnityEngine.GUIStyle
struct GUIStyle_t5_20;
// UnityEngine.GUIStyleState
struct GUIStyleState_t5_165;
// UnityEngine.RectOffset
struct RectOffset_t5_19;
// UnityEngine.Font
struct Font_t5_127;
// UnityEngine.GUIContent
struct GUIContent_t5_153;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t5_24;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_ImagePosition.h"
#include "UnityEngine_UnityEngine_TextAnchor.h"
#include "UnityEngine_UnityEngine_TextClipping.h"
#include "UnityEngine_UnityEngine_FontStyle.h"
#include "UnityEngine_UnityEngine_Internal_DrawArguments.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Internal_DrawWithTextSelectionArgume.h"

// System.Void UnityEngine.GUIStyle::.ctor()
extern "C" void GUIStyle__ctor_m5_1075 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
extern "C" void GUIStyle__ctor_m5_1076 (GUIStyle_t5_20 * __this, GUIStyle_t5_20 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.cctor()
extern "C" void GUIStyle__cctor_m5_1077 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Finalize()
extern "C" void GUIStyle_Finalize_m5_1078 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::InternalOnAfterDeserialize()
extern "C" void GUIStyle_InternalOnAfterDeserialize_m5_1079 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
extern "C" GUIStyleState_t5_165 * GUIStyle_get_normal_m5_1080 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_normal(UnityEngine.GUIStyleState)
extern "C" void GUIStyle_set_normal_m5_1081 (GUIStyle_t5_20 * __this, GUIStyleState_t5_165 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_hover()
extern "C" GUIStyleState_t5_165 * GUIStyle_get_hover_m5_1082 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_hover(UnityEngine.GUIStyleState)
extern "C" void GUIStyle_set_hover_m5_1083 (GUIStyle_t5_20 * __this, GUIStyleState_t5_165 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_active()
extern "C" GUIStyleState_t5_165 * GUIStyle_get_active_m5_1084 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_active(UnityEngine.GUIStyleState)
extern "C" void GUIStyle_set_active_m5_1085 (GUIStyle_t5_20 * __this, GUIStyleState_t5_165 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_onNormal()
extern "C" GUIStyleState_t5_165 * GUIStyle_get_onNormal_m5_1086 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_onNormal(UnityEngine.GUIStyleState)
extern "C" void GUIStyle_set_onNormal_m5_1087 (GUIStyle_t5_20 * __this, GUIStyleState_t5_165 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_onHover()
extern "C" GUIStyleState_t5_165 * GUIStyle_get_onHover_m5_1088 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_onHover(UnityEngine.GUIStyleState)
extern "C" void GUIStyle_set_onHover_m5_1089 (GUIStyle_t5_20 * __this, GUIStyleState_t5_165 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_onActive()
extern "C" GUIStyleState_t5_165 * GUIStyle_get_onActive_m5_1090 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_onActive(UnityEngine.GUIStyleState)
extern "C" void GUIStyle_set_onActive_m5_1091 (GUIStyle_t5_20 * __this, GUIStyleState_t5_165 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_focused()
extern "C" GUIStyleState_t5_165 * GUIStyle_get_focused_m5_1092 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_focused(UnityEngine.GUIStyleState)
extern "C" void GUIStyle_set_focused_m5_1093 (GUIStyle_t5_20 * __this, GUIStyleState_t5_165 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_onFocused()
extern "C" GUIStyleState_t5_165 * GUIStyle_get_onFocused_m5_1094 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_onFocused(UnityEngine.GUIStyleState)
extern "C" void GUIStyle_set_onFocused_m5_1095 (GUIStyle_t5_20 * __this, GUIStyleState_t5_165 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_border()
extern "C" RectOffset_t5_19 * GUIStyle_get_border_m5_1096 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_border(UnityEngine.RectOffset)
extern "C" void GUIStyle_set_border_m5_1097 (GUIStyle_t5_20 * __this, RectOffset_t5_19 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
extern "C" RectOffset_t5_19 * GUIStyle_get_margin_m5_1098 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_margin(UnityEngine.RectOffset)
extern "C" void GUIStyle_set_margin_m5_1099 (GUIStyle_t5_20 * __this, RectOffset_t5_19 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
extern "C" RectOffset_t5_19 * GUIStyle_get_padding_m5_1100 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_padding(UnityEngine.RectOffset)
extern "C" void GUIStyle_set_padding_m5_1101 (GUIStyle_t5_20 * __this, RectOffset_t5_19 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_overflow()
extern "C" RectOffset_t5_19 * GUIStyle_get_overflow_m5_1102 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_overflow(UnityEngine.RectOffset)
extern "C" void GUIStyle_set_overflow_m5_1103 (GUIStyle_t5_20 * __this, RectOffset_t5_19 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::get_clipOffset()
extern "C" Vector2_t5_34  GUIStyle_get_clipOffset_m5_1104 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_clipOffset(UnityEngine.Vector2)
extern "C" void GUIStyle_set_clipOffset_m5_1105 (GUIStyle_t5_20 * __this, Vector2_t5_34  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.GUIStyle::get_font()
extern "C" Font_t5_127 * GUIStyle_get_font_m5_1106 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_font(UnityEngine.Font)
extern "C" void GUIStyle_set_font_m5_1107 (GUIStyle_t5_20 * __this, Font_t5_127 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_lineHeight()
extern "C" float GUIStyle_get_lineHeight_m5_1108 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" void GUIStyle_Internal_Draw_m5_1109 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t5_38  ___position, GUIContent_t5_153 * ___content, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" void GUIStyle_Draw_m5_1110 (GUIStyle_t5_20 * __this, Rect_t5_38  ___position, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" void GUIStyle_Draw_m5_1111 (GUIStyle_t5_20 * __this, Rect_t5_38  ___position, String_t* ___text, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.Texture,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" void GUIStyle_Draw_m5_1112 (GUIStyle_t5_20 * __this, Rect_t5_38  ___position, Texture_t5_24 * ___image, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" void GUIStyle_Draw_m5_1113 (GUIStyle_t5_20 * __this, Rect_t5_38  ___position, GUIContent_t5_153 * ___content, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
extern "C" void GUIStyle_Draw_m5_1114 (GUIStyle_t5_20 * __this, Rect_t5_38  ___position, GUIContent_t5_153 * ___content, int32_t ___controlID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" void GUIStyle_Draw_m5_1115 (GUIStyle_t5_20 * __this, Rect_t5_38  ___position, GUIContent_t5_153 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::DrawCursor(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Int32)
extern "C" void GUIStyle_DrawCursor_m5_1116 (GUIStyle_t5_20 * __this, Rect_t5_38  ___position, GUIContent_t5_153 * ___content, int32_t ___controlID, int32_t ___Character, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::DrawWithTextSelection(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C" void GUIStyle_DrawWithTextSelection_m5_1117 (GUIStyle_t5_20 * __this, Rect_t5_38  ___position, GUIContent_t5_153 * ___content, int32_t ___controlID, int32_t ___firstSelectedCharacter, int32_t ___lastSelectedCharacter, bool ___drawSelectionAsComposition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::DrawWithTextSelection(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Int32,System.Int32)
extern "C" void GUIStyle_DrawWithTextSelection_m5_1118 (GUIStyle_t5_20 * __this, Rect_t5_38  ___position, GUIContent_t5_153 * ___content, int32_t ___controlID, int32_t ___firstSelectedCharacter, int32_t ___lastSelectedCharacter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
extern "C" GUIStyle_t5_20 * GUIStyle_get_none_m5_1119 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::GetCursorPixelPosition(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
extern "C" Vector2_t5_34  GUIStyle_GetCursorPixelPosition_m5_1120 (GUIStyle_t5_20 * __this, Rect_t5_38  ___position, GUIContent_t5_153 * ___content, int32_t ___cursorStringIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::GetCursorStringIndex(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.Vector2)
extern "C" int32_t GUIStyle_GetCursorStringIndex_m5_1121 (GUIStyle_t5_20 * __this, Rect_t5_38  ___position, GUIContent_t5_153 * ___content, Vector2_t5_34  ___cursorPixelPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::GetNumCharactersThatFitWithinWidth(System.String,System.Single)
extern "C" int32_t GUIStyle_GetNumCharactersThatFitWithinWidth_m5_1122 (GUIStyle_t5_20 * __this, String_t* ___text, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
extern "C" Vector2_t5_34  GUIStyle_CalcSize_m5_1123 (GUIStyle_t5_20 * __this, GUIContent_t5_153 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSizeWithConstraints(UnityEngine.GUIContent,UnityEngine.Vector2)
extern "C" Vector2_t5_34  GUIStyle_CalcSizeWithConstraints_m5_1124 (GUIStyle_t5_20 * __this, GUIContent_t5_153 * ___content, Vector2_t5_34  ___constraints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcScreenSize(UnityEngine.Vector2)
extern "C" Vector2_t5_34  GUIStyle_CalcScreenSize_m5_1125 (GUIStyle_t5_20 * __this, Vector2_t5_34  ___contentSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::CalcHeight(UnityEngine.GUIContent,System.Single)
extern "C" float GUIStyle_CalcHeight_m5_1126 (GUIStyle_t5_20 * __this, GUIContent_t5_153 * ___content, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_isHeightDependantOnWidth()
extern "C" bool GUIStyle_get_isHeightDependantOnWidth_m5_1127 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::CalcMinMaxWidth(UnityEngine.GUIContent,System.Single&,System.Single&)
extern "C" void GUIStyle_CalcMinMaxWidth_m5_1128 (GUIStyle_t5_20 * __this, GUIContent_t5_153 * ___content, float* ___minWidth, float* ___maxWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::ToString()
extern "C" String_t* GUIStyle_ToString_m5_1129 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Init()
extern "C" void GUIStyle_Init_m5_1130 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::InitCopy(UnityEngine.GUIStyle)
extern "C" void GUIStyle_InitCopy_m5_1131 (GUIStyle_t5_20 * __this, GUIStyle_t5_20 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Cleanup()
extern "C" void GUIStyle_Cleanup_m5_1132 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::get_name()
extern "C" String_t* GUIStyle_get_name_m5_1133 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_name(System.String)
extern "C" void GUIStyle_set_name_m5_1134 (GUIStyle_t5_20 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
extern "C" IntPtr_t GUIStyle_GetStyleStatePtr_m5_1135 (GUIStyle_t5_20 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::AssignStyleState(System.Int32,System.IntPtr)
extern "C" void GUIStyle_AssignStyleState_m5_1136 (GUIStyle_t5_20 * __this, int32_t ___idx, IntPtr_t ___srcStyleState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
extern "C" IntPtr_t GUIStyle_GetRectOffsetPtr_m5_1137 (GUIStyle_t5_20 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::AssignRectOffset(System.Int32,System.IntPtr)
extern "C" void GUIStyle_AssignRectOffset_m5_1138 (GUIStyle_t5_20 * __this, int32_t ___idx, IntPtr_t ___srcRectOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ImagePosition UnityEngine.GUIStyle::get_imagePosition()
extern "C" int32_t GUIStyle_get_imagePosition_m5_1139 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_imagePosition(UnityEngine.ImagePosition)
extern "C" void GUIStyle_set_imagePosition_m5_1140 (GUIStyle_t5_20 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor UnityEngine.GUIStyle::get_alignment()
extern "C" int32_t GUIStyle_get_alignment_m5_1141 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
extern "C" void GUIStyle_set_alignment_m5_1142 (GUIStyle_t5_20 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_wordWrap()
extern "C" bool GUIStyle_get_wordWrap_m5_1143 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
extern "C" void GUIStyle_set_wordWrap_m5_1144 (GUIStyle_t5_20 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextClipping UnityEngine.GUIStyle::get_clipping()
extern "C" int32_t GUIStyle_get_clipping_m5_1145 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_clipping(UnityEngine.TextClipping)
extern "C" void GUIStyle_set_clipping_m5_1146 (GUIStyle_t5_20 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::get_contentOffset()
extern "C" Vector2_t5_34  GUIStyle_get_contentOffset_m5_1147 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_contentOffset(UnityEngine.Vector2)
extern "C" void GUIStyle_set_contentOffset_m5_1148 (GUIStyle_t5_20 * __this, Vector2_t5_34  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_get_contentOffset(UnityEngine.Vector2&)
extern "C" void GUIStyle_INTERNAL_get_contentOffset_m5_1149 (GUIStyle_t5_20 * __this, Vector2_t5_34 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_set_contentOffset(UnityEngine.Vector2&)
extern "C" void GUIStyle_INTERNAL_set_contentOffset_m5_1150 (GUIStyle_t5_20 * __this, Vector2_t5_34 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::get_Internal_clipOffset()
extern "C" Vector2_t5_34  GUIStyle_get_Internal_clipOffset_m5_1151 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_Internal_clipOffset(UnityEngine.Vector2)
extern "C" void GUIStyle_set_Internal_clipOffset_m5_1152 (GUIStyle_t5_20 * __this, Vector2_t5_34  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_get_Internal_clipOffset(UnityEngine.Vector2&)
extern "C" void GUIStyle_INTERNAL_get_Internal_clipOffset_m5_1153 (GUIStyle_t5_20 * __this, Vector2_t5_34 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_set_Internal_clipOffset(UnityEngine.Vector2&)
extern "C" void GUIStyle_INTERNAL_set_Internal_clipOffset_m5_1154 (GUIStyle_t5_20 * __this, Vector2_t5_34 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
extern "C" float GUIStyle_get_fixedWidth_m5_1155 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fixedWidth(System.Single)
extern "C" void GUIStyle_set_fixedWidth_m5_1156 (GUIStyle_t5_20 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
extern "C" float GUIStyle_get_fixedHeight_m5_1157 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fixedHeight(System.Single)
extern "C" void GUIStyle_set_fixedHeight_m5_1158 (GUIStyle_t5_20 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
extern "C" bool GUIStyle_get_stretchWidth_m5_1159 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)
extern "C" void GUIStyle_set_stretchWidth_m5_1160 (GUIStyle_t5_20 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
extern "C" bool GUIStyle_get_stretchHeight_m5_1161 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
extern "C" void GUIStyle_set_stretchHeight_m5_1162 (GUIStyle_t5_20 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)
extern "C" float GUIStyle_Internal_GetLineHeight_m5_1163 (Object_t * __this /* static, unused */, IntPtr_t ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::SetFontInternal(UnityEngine.Font)
extern "C" void GUIStyle_SetFontInternal_m5_1164 (GUIStyle_t5_20 * __this, Font_t5_127 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.GUIStyle::GetFontInternalDuringLoadingThread()
extern "C" Font_t5_127 * GUIStyle_GetFontInternalDuringLoadingThread_m5_1165 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.GUIStyle::GetFontInternal()
extern "C" Font_t5_127 * GUIStyle_GetFontInternal_m5_1166 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::get_fontSize()
extern "C" int32_t GUIStyle_get_fontSize_m5_1167 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
extern "C" void GUIStyle_set_fontSize_m5_1168 (GUIStyle_t5_20 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FontStyle UnityEngine.GUIStyle::get_fontStyle()
extern "C" int32_t GUIStyle_get_fontStyle_m5_1169 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fontStyle(UnityEngine.FontStyle)
extern "C" void GUIStyle_set_fontStyle_m5_1170 (GUIStyle_t5_20 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_richText()
extern "C" bool GUIStyle_get_richText_m5_1171 (GUIStyle_t5_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_richText(System.Boolean)
extern "C" void GUIStyle_set_richText_m5_1172 (GUIStyle_t5_20 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw(UnityEngine.GUIContent,UnityEngine.Internal_DrawArguments&)
extern "C" void GUIStyle_Internal_Draw_m5_1173 (Object_t * __this /* static, unused */, GUIContent_t5_153 * ___content, Internal_DrawArguments_t5_174 * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw2(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" void GUIStyle_Internal_Draw2_m5_1174 (Object_t * __this /* static, unused */, IntPtr_t ___style, Rect_t5_38  ___position, GUIContent_t5_153 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_Draw2(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" void GUIStyle_INTERNAL_CALL_Internal_Draw2_m5_1175 (Object_t * __this /* static, unused */, IntPtr_t ___style, Rect_t5_38 * ___position, GUIContent_t5_153 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_DrawPrefixLabel(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" void GUIStyle_Internal_DrawPrefixLabel_m5_1176 (Object_t * __this /* static, unused */, IntPtr_t ___style, Rect_t5_38  ___position, GUIContent_t5_153 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_DrawPrefixLabel(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C" void GUIStyle_INTERNAL_CALL_Internal_DrawPrefixLabel_m5_1177 (Object_t * __this /* static, unused */, IntPtr_t ___style, Rect_t5_38 * ___position, GUIContent_t5_153 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_GetCursorFlashOffset()
extern "C" float GUIStyle_Internal_GetCursorFlashOffset_m5_1178 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_DrawCursor(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,UnityEngine.Color)
extern "C" void GUIStyle_Internal_DrawCursor_m5_1179 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t5_38  ___position, GUIContent_t5_153 * ___content, int32_t ___pos, Color_t5_128  ___cursorColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_DrawCursor(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Color&)
extern "C" void GUIStyle_INTERNAL_CALL_Internal_DrawCursor_m5_1180 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t5_38 * ___position, GUIContent_t5_153 * ___content, int32_t ___pos, Color_t5_128 * ___cursorColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_DrawWithTextSelection(UnityEngine.GUIContent,UnityEngine.Internal_DrawWithTextSelectionArguments&)
extern "C" void GUIStyle_Internal_DrawWithTextSelection_m5_1181 (Object_t * __this /* static, unused */, GUIContent_t5_153 * ___content, Internal_DrawWithTextSelectionArguments_t5_175 * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
extern "C" void GUIStyle_SetDefaultFont_m5_1182 (Object_t * __this /* static, unused */, Font_t5_127 * ___font, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
extern "C" void GUIStyle_Internal_GetCursorPixelPosition_m5_1183 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t5_38  ___position, GUIContent_t5_153 * ___content, int32_t ___cursorStringIndex, Vector2_t5_34 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
extern "C" void GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m5_1184 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t5_38 * ___position, GUIContent_t5_153 * ___content, int32_t ___cursorStringIndex, Vector2_t5_34 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::Internal_GetCursorStringIndex(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.Vector2)
extern "C" int32_t GUIStyle_Internal_GetCursorStringIndex_m5_1185 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t5_38  ___position, GUIContent_t5_153 * ___content, Vector2_t5_34  ___cursorPixelPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorStringIndex(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,UnityEngine.Vector2&)
extern "C" int32_t GUIStyle_INTERNAL_CALL_Internal_GetCursorStringIndex_m5_1186 (Object_t * __this /* static, unused */, IntPtr_t ___target, Rect_t5_38 * ___position, GUIContent_t5_153 * ___content, Vector2_t5_34 * ___cursorPixelPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::Internal_GetNumCharactersThatFitWithinWidth(System.IntPtr,System.String,System.Single)
extern "C" int32_t GUIStyle_Internal_GetNumCharactersThatFitWithinWidth_m5_1187 (Object_t * __this /* static, unused */, IntPtr_t ___target, String_t* ___text, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcSize(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&)
extern "C" void GUIStyle_Internal_CalcSize_m5_1188 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t5_153 * ___content, Vector2_t5_34 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcSizeWithConstraints(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2,UnityEngine.Vector2&)
extern "C" void GUIStyle_Internal_CalcSizeWithConstraints_m5_1189 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t5_153 * ___content, Vector2_t5_34  ___maxSize, Vector2_t5_34 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_CalcSizeWithConstraints(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C" void GUIStyle_INTERNAL_CALL_Internal_CalcSizeWithConstraints_m5_1190 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t5_153 * ___content, Vector2_t5_34 * ___maxSize, Vector2_t5_34 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_CalcHeight(System.IntPtr,UnityEngine.GUIContent,System.Single)
extern "C" float GUIStyle_Internal_CalcHeight_m5_1191 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t5_153 * ___content, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcMinMaxWidth(System.IntPtr,UnityEngine.GUIContent,System.Single&,System.Single&)
extern "C" void GUIStyle_Internal_CalcMinMaxWidth_m5_1192 (Object_t * __this /* static, unused */, IntPtr_t ___target, GUIContent_t5_153 * ___content, float* ___minWidth, float* ___maxWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::op_Implicit(System.String)
extern "C" GUIStyle_t5_20 * GUIStyle_op_Implicit_m5_1193 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
