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

// UnityEngine.CanvasRenderer
struct CanvasRenderer_t5_141;
// UnityEngine.Material
struct Material_t5_59;
// UnityEngine.Texture
struct Texture_t5_24;
// UnityEngine.Mesh
struct Mesh_t5_15;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t1_874;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1_883;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t1_886;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1_885;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t1_884;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1_887;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.CanvasRenderer::SetColor(UnityEngine.Color)
extern "C" void CanvasRenderer_SetColor_m5_874 (CanvasRenderer_t5_141 * __this, Color_t5_128  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
extern "C" void CanvasRenderer_INTERNAL_CALL_SetColor_m5_875 (Object_t * __this /* static, unused */, CanvasRenderer_t5_141 * ___self, Color_t5_128 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.CanvasRenderer::GetColor()
extern "C" Color_t5_128  CanvasRenderer_GetColor_m5_876 (CanvasRenderer_t5_141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_GetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
extern "C" void CanvasRenderer_INTERNAL_CALL_GetColor_m5_877 (Object_t * __this /* static, unused */, CanvasRenderer_t5_141 * ___self, Color_t5_128 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetAlpha(System.Single)
extern "C" void CanvasRenderer_SetAlpha_m5_878 (CanvasRenderer_t5_141 * __this, float ___alpha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::EnableRectClipping(UnityEngine.Rect)
extern "C" void CanvasRenderer_EnableRectClipping_m5_879 (CanvasRenderer_t5_141 * __this, Rect_t5_38  ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_EnableRectClipping(UnityEngine.CanvasRenderer,UnityEngine.Rect&)
extern "C" void CanvasRenderer_INTERNAL_CALL_EnableRectClipping_m5_880 (Object_t * __this /* static, unused */, CanvasRenderer_t5_141 * ___self, Rect_t5_38 * ___rect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::DisableRectClipping()
extern "C" void CanvasRenderer_DisableRectClipping_m5_881 (CanvasRenderer_t5_141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::set_hasPopInstruction(System.Boolean)
extern "C" void CanvasRenderer_set_hasPopInstruction_m5_882 (CanvasRenderer_t5_141 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CanvasRenderer::get_materialCount()
extern "C" int32_t CanvasRenderer_get_materialCount_m5_883 (CanvasRenderer_t5_141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::set_materialCount(System.Int32)
extern "C" void CanvasRenderer_set_materialCount_m5_884 (CanvasRenderer_t5_141 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,System.Int32)
extern "C" void CanvasRenderer_SetMaterial_m5_885 (CanvasRenderer_t5_141 * __this, Material_t5_59 * ___material, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)
extern "C" void CanvasRenderer_SetMaterial_m5_886 (CanvasRenderer_t5_141 * __this, Material_t5_59 * ___material, Texture_t5_24 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::set_popMaterialCount(System.Int32)
extern "C" void CanvasRenderer_set_popMaterialCount_m5_887 (CanvasRenderer_t5_141 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetPopMaterial(UnityEngine.Material,System.Int32)
extern "C" void CanvasRenderer_SetPopMaterial_m5_888 (CanvasRenderer_t5_141 * __this, Material_t5_59 * ___material, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetTexture(UnityEngine.Texture)
extern "C" void CanvasRenderer_SetTexture_m5_889 (CanvasRenderer_t5_141 * __this, Texture_t5_24 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetMesh(UnityEngine.Mesh)
extern "C" void CanvasRenderer_SetMesh_m5_890 (CanvasRenderer_t5_141 * __this, Mesh_t5_15 * ___mesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::Clear()
extern "C" void CanvasRenderer_Clear_m5_891 (CanvasRenderer_t5_141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SplitUIVertexStreams(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Color32>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector4>,System.Collections.Generic.List`1<System.Int32>)
extern "C" void CanvasRenderer_SplitUIVertexStreams_m5_892 (Object_t * __this /* static, unused */, List_1_t1_874 * ___verts, List_1_t1_883 * ___positions, List_1_t1_886 * ___colors, List_1_t1_885 * ___uv0S, List_1_t1_885 * ___uv1S, List_1_t1_883 * ___normals, List_1_t1_884 * ___tangents, List_1_t1_887 * ___indicies, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SplitUIVertexStreamsInternal(System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object)
extern "C" void CanvasRenderer_SplitUIVertexStreamsInternal_m5_893 (Object_t * __this /* static, unused */, Object_t * ___verts, Object_t * ___positions, Object_t * ___colors, Object_t * ___uv0S, Object_t * ___uv1S, Object_t * ___normals, Object_t * ___tangents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SplitIndiciesStreamsInternal(System.Object,System.Object)
extern "C" void CanvasRenderer_SplitIndiciesStreamsInternal_m5_894 (Object_t * __this /* static, unused */, Object_t * ___verts, Object_t * ___indicies, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::CreateUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Color32>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector4>,System.Collections.Generic.List`1<System.Int32>)
extern "C" void CanvasRenderer_CreateUIVertexStream_m5_895 (Object_t * __this /* static, unused */, List_1_t1_874 * ___verts, List_1_t1_883 * ___positions, List_1_t1_886 * ___colors, List_1_t1_885 * ___uv0S, List_1_t1_885 * ___uv1S, List_1_t1_883 * ___normals, List_1_t1_884 * ___tangents, List_1_t1_887 * ___indicies, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::CreateUIVertexStreamInternal(System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object)
extern "C" void CanvasRenderer_CreateUIVertexStreamInternal_m5_896 (Object_t * __this /* static, unused */, Object_t * ___verts, Object_t * ___positions, Object_t * ___colors, Object_t * ___uv0S, Object_t * ___uv1S, Object_t * ___normals, Object_t * ___tangents, Object_t * ___indicies, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::AddUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Color32>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector2>,System.Collections.Generic.List`1<UnityEngine.Vector3>,System.Collections.Generic.List`1<UnityEngine.Vector4>)
extern "C" void CanvasRenderer_AddUIVertexStream_m5_897 (Object_t * __this /* static, unused */, List_1_t1_874 * ___verts, List_1_t1_883 * ___positions, List_1_t1_886 * ___colors, List_1_t1_885 * ___uv0S, List_1_t1_885 * ___uv1S, List_1_t1_883 * ___normals, List_1_t1_884 * ___tangents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasRenderer::get_cull()
extern "C" bool CanvasRenderer_get_cull_m5_898 (CanvasRenderer_t5_141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::set_cull(System.Boolean)
extern "C" void CanvasRenderer_set_cull_m5_899 (CanvasRenderer_t5_141 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
extern "C" int32_t CanvasRenderer_get_absoluteDepth_m5_900 (CanvasRenderer_t5_141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.CanvasRenderer::get_hasMoved()
extern "C" bool CanvasRenderer_get_hasMoved_m5_901 (CanvasRenderer_t5_141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
