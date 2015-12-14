#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUIStyle
struct GUIStyle_t5_20;
// UnityEngine.GUIContent
struct GUIContent_t5_153;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// UnityEngine.TextEditor
struct  TextEditor_t5_173  : public Object_t
{
	// UnityEngine.GUIStyle UnityEngine.TextEditor::style
	GUIStyle_t5_20 * ___style_0;
	// UnityEngine.Vector2 UnityEngine.TextEditor::scrollOffset
	Vector2_t5_34  ___scrollOffset_1;
	// UnityEngine.GUIContent UnityEngine.TextEditor::m_Content
	GUIContent_t5_153 * ___m_Content_2;
	// System.Int32 UnityEngine.TextEditor::m_iAltCursorPos
	int32_t ___m_iAltCursorPos_3;
};
