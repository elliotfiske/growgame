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

// UnityEngine.UI.VertexHelper
struct VertexHelper_t6_78;
// UnityEngine.Mesh
struct Mesh_t5_15;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t5_250;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t1_874;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1_887;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UIVertex.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Color32.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void UnityEngine.UI.VertexHelper::.ctor()
extern "C" void VertexHelper__ctor_m6_1385 (VertexHelper_t6_78 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::.ctor(UnityEngine.Mesh)
extern "C" void VertexHelper__ctor_m6_1386 (VertexHelper_t6_78 * __this, Mesh_t5_15 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::.cctor()
extern "C" void VertexHelper__cctor_m6_1387 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::Clear()
extern "C" void VertexHelper_Clear_m6_1388 (VertexHelper_t6_78 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.VertexHelper::get_currentVertCount()
extern "C" int32_t VertexHelper_get_currentVertCount_m6_1389 (VertexHelper_t6_78 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.VertexHelper::get_currentIndexCount()
extern "C" int32_t VertexHelper_get_currentIndexCount_m6_1390 (VertexHelper_t6_78 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::PopulateUIVertex(UnityEngine.UIVertex&,System.Int32)
extern "C" void VertexHelper_PopulateUIVertex_m6_1391 (VertexHelper_t6_78 * __this, UIVertex_t5_136 * ___vertex, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::SetUIVertex(UnityEngine.UIVertex,System.Int32)
extern "C" void VertexHelper_SetUIVertex_m6_1392 (VertexHelper_t6_78 * __this, UIVertex_t5_136  ___vertex, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::FillMesh(UnityEngine.Mesh)
extern "C" void VertexHelper_FillMesh_m6_1393 (VertexHelper_t6_78 * __this, Mesh_t5_15 * ___mesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::Dispose()
extern "C" void VertexHelper_Dispose_m6_1394 (VertexHelper_t6_78 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.Vector3,UnityEngine.Color32,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector3,UnityEngine.Vector4)
extern "C" void VertexHelper_AddVert_m6_1395 (VertexHelper_t6_78 * __this, Vector3_t5_35  ___position, Color32_t5_36  ___color, Vector2_t5_34  ___uv0, Vector2_t5_34  ___uv1, Vector3_t5_35  ___normal, Vector4_t5_41  ___tangent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.Vector3,UnityEngine.Color32,UnityEngine.Vector2)
extern "C" void VertexHelper_AddVert_m6_1396 (VertexHelper_t6_78 * __this, Vector3_t5_35  ___position, Color32_t5_36  ___color, Vector2_t5_34  ___uv0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.UIVertex)
extern "C" void VertexHelper_AddVert_m6_1397 (VertexHelper_t6_78 * __this, UIVertex_t5_136  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddTriangle(System.Int32,System.Int32,System.Int32)
extern "C" void VertexHelper_AddTriangle_m6_1398 (VertexHelper_t6_78 * __this, int32_t ___idx0, int32_t ___idx1, int32_t ___idx2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexQuad(UnityEngine.UIVertex[])
extern "C" void VertexHelper_AddUIVertexQuad_m6_1399 (VertexHelper_t6_78 * __this, UIVertexU5BU5D_t5_250* ___verts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Collections.Generic.List`1<System.Int32>)
extern "C" void VertexHelper_AddUIVertexStream_m6_1400 (VertexHelper_t6_78 * __this, List_1_t1_874 * ___verts, List_1_t1_887 * ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexTriangleStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void VertexHelper_AddUIVertexTriangleStream_m6_1401 (VertexHelper_t6_78 * __this, List_1_t1_874 * ___verts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.VertexHelper::GetUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
extern "C" void VertexHelper_GetUIVertexStream_m6_1402 (VertexHelper_t6_78 * __this, List_1_t1_874 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
