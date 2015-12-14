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

// UnityEngine.Camera
struct Camera_t5_68;
// UnityEngine.RenderTexture
struct RenderTexture_t5_26;
// UnityEngine.Camera[]
struct CameraU5BU5D_t5_196;
// UnityEngine.GameObject
struct GameObject_t5_82;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Ray.h"
#include "UnityEngine_UnityEngine_QueryTriggerInteraction.h"

// System.Single UnityEngine.Camera::get_nearClipPlane()
extern "C" float Camera_get_nearClipPlane_m5_385 (Camera_t5_68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_farClipPlane()
extern "C" float Camera_get_farClipPlane_m5_386 (Camera_t5_68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_orthographicSize()
extern "C" float Camera_get_orthographicSize_m5_387 (Camera_t5_68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
extern "C" void Camera_set_orthographicSize_m5_388 (Camera_t5_68 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_depth()
extern "C" float Camera_get_depth_m5_389 (Camera_t5_68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_cullingMask()
extern "C" int32_t Camera_get_cullingMask_m5_390 (Camera_t5_68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_eventMask()
extern "C" int32_t Camera_get_eventMask_m5_391 (Camera_t5_68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
extern "C" Rect_t5_38  Camera_get_pixelRect_m5_392 (Camera_t5_68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
extern "C" void Camera_INTERNAL_get_pixelRect_m5_393 (Camera_t5_68 * __this, Rect_t5_38 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
extern "C" RenderTexture_t5_26 * Camera_get_targetTexture_m5_394 (Camera_t5_68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
extern "C" int32_t Camera_get_clearFlags_m5_395 (Camera_t5_68 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToViewportPoint(UnityEngine.Vector3)
extern "C" Vector3_t5_35  Camera_WorldToViewportPoint_m5_396 (Camera_t5_68 * __this, Vector3_t5_35  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_CALL_WorldToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void Camera_INTERNAL_CALL_WorldToViewportPoint_m5_397 (Object_t * __this /* static, unused */, Camera_t5_68 * ___self, Vector3_t5_35 * ___position, Vector3_t5_35 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToWorldPoint(UnityEngine.Vector3)
extern "C" Vector3_t5_35  Camera_ViewportToWorldPoint_m5_398 (Camera_t5_68 * __this, Vector3_t5_35  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_CALL_ViewportToWorldPoint(UnityEngine.Camera,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void Camera_INTERNAL_CALL_ViewportToWorldPoint_m5_399 (Object_t * __this /* static, unused */, Camera_t5_68 * ___self, Vector3_t5_35 * ___position, Vector3_t5_35 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
extern "C" Vector3_t5_35  Camera_ScreenToViewportPoint_m5_400 (Camera_t5_68 * __this, Vector3_t5_35  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void Camera_INTERNAL_CALL_ScreenToViewportPoint_m5_401 (Object_t * __this /* static, unused */, Camera_t5_68 * ___self, Vector3_t5_35 * ___position, Vector3_t5_35 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C" Ray_t5_42  Camera_ScreenPointToRay_m5_402 (Camera_t5_68 * __this, Vector3_t5_35  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&,UnityEngine.Ray&)
extern "C" void Camera_INTERNAL_CALL_ScreenPointToRay_m5_403 (Object_t * __this /* static, unused */, Camera_t5_68 * ___self, Vector3_t5_35 * ___position, Ray_t5_42 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C" Camera_t5_68 * Camera_get_main_m5_404 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
extern "C" int32_t Camera_get_allCamerasCount_m5_405 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
extern "C" int32_t Camera_GetAllCameras_m5_406 (Object_t * __this /* static, unused */, CameraU5BU5D_t5_196* ___cameras, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
extern "C" void Camera_FireOnPreCull_m5_407 (Object_t * __this /* static, unused */, Camera_t5_68 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
extern "C" void Camera_FireOnPreRender_m5_408 (Object_t * __this /* static, unused */, Camera_t5_68 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
extern "C" void Camera_FireOnPostRender_m5_409 (Object_t * __this /* static, unused */, Camera_t5_68 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t5_82 * Camera_RaycastTry_m5_410 (Camera_t5_68 * __this, Ray_t5_42  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" GameObject_t5_82 * Camera_INTERNAL_CALL_RaycastTry_m5_411 (Object_t * __this /* static, unused */, Camera_t5_68 * ___self, Ray_t5_42 * ___ray, float ___distance, int32_t ___layerMask, int32_t ___queryTriggerInteraction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
extern "C" GameObject_t5_82 * Camera_RaycastTry2D_m5_412 (Camera_t5_68 * __this, Ray_t5_42  ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
extern "C" GameObject_t5_82 * Camera_INTERNAL_CALL_RaycastTry2D_m5_413 (Object_t * __this /* static, unused */, Camera_t5_68 * ___self, Ray_t5_42 * ___ray, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
