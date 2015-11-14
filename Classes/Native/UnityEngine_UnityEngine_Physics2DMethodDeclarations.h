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

// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t407;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_RaycastHit2D.h"

// System.Void UnityEngine.Physics2D::.cctor()
extern "C" void Physics2D__cctor_m1390 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::Internal_Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_Internal_Raycast_m1391 (Object_t * __this /* static, unused */, Vector2_t16  ___origin, Vector2_t16  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t233 * ___raycastHit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics2D::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single,UnityEngine.RaycastHit2D&)
extern "C" void Physics2D_INTERNAL_CALL_Internal_Raycast_m1392 (Object_t * __this /* static, unused */, Vector2_t16 * ___origin, Vector2_t16 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, RaycastHit2D_t233 * ___raycastHit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern "C" RaycastHit2D_t233  Physics2D_Raycast_m1393 (Object_t * __this /* static, unused */, Vector2_t16  ___origin, Vector2_t16  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2D_t233  Physics2D_Raycast_m1394 (Object_t * __this /* static, unused */, Vector2_t16  ___origin, Vector2_t16  ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::RaycastAll(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
extern "C" RaycastHit2DU5BU5D_t407* Physics2D_RaycastAll_m1395 (Object_t * __this /* static, unused */, Vector2_t16  ___origin, Vector2_t16  ___direction, float ___distance, int32_t ___layerMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::INTERNAL_CALL_RaycastAll(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,System.Int32,System.Single,System.Single)
extern "C" RaycastHit2DU5BU5D_t407* Physics2D_INTERNAL_CALL_RaycastAll_m1396 (Object_t * __this /* static, unused */, Vector2_t16 * ___origin, Vector2_t16 * ___direction, float ___distance, int32_t ___layerMask, float ___minDepth, float ___maxDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
