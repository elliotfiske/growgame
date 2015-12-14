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

// UnityEngine.UI.RawImage
struct RawImage_t6_108;
// UnityEngine.Texture
struct Texture_t5_24;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t6_78;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.UI.RawImage::.ctor()
extern "C" void RawImage__ctor_m6_821 (RawImage_t6_108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.RawImage::get_mainTexture()
extern "C" Texture_t5_24 * RawImage_get_mainTexture_m6_822 (RawImage_t6_108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.RawImage::get_texture()
extern "C" Texture_t5_24 * RawImage_get_texture_m6_823 (RawImage_t6_108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
extern "C" void RawImage_set_texture_m6_824 (RawImage_t6_108 * __this, Texture_t5_24 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.RawImage::get_uvRect()
extern "C" Rect_t5_38  RawImage_get_uvRect_m6_825 (RawImage_t6_108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::set_uvRect(UnityEngine.Rect)
extern "C" void RawImage_set_uvRect_m6_826 (RawImage_t6_108 * __this, Rect_t5_38  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::SetNativeSize()
extern "C" void RawImage_SetNativeSize_m6_827 (RawImage_t6_108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::OnPopulateMesh(UnityEngine.UI.VertexHelper)
extern "C" void RawImage_OnPopulateMesh_m6_828 (RawImage_t6_108 * __this, VertexHelper_t6_78 * ___vh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
