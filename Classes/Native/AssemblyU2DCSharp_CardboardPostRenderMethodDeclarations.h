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

// CardboardPostRender
struct CardboardPostRender_t41;
// UnityEngine.Camera
struct Camera_t31;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t75;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t76;
// UnityEngine.Color[]
struct ColorU5BU5D_t77;
// System.Int32[]
struct Int32U5BU5D_t68;

#include "codegen/il2cpp-codegen.h"

// System.Void CardboardPostRender::.ctor()
extern "C" void CardboardPostRender__ctor_m157 (CardboardPostRender_t41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::.cctor()
extern "C" void CardboardPostRender__cctor_m158 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera CardboardPostRender::get_camera()
extern "C" Camera_t31 * CardboardPostRender_get_camera_m159 (CardboardPostRender_t41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::set_camera(UnityEngine.Camera)
extern "C" void CardboardPostRender_set_camera_m160 (CardboardPostRender_t41 * __this, Camera_t31 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::Reset()
extern "C" void CardboardPostRender_Reset_m161 (CardboardPostRender_t41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::Awake()
extern "C" void CardboardPostRender_Awake_m162 (CardboardPostRender_t41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::OnRenderObject()
extern "C" void CardboardPostRender_OnRenderObject_m163 (CardboardPostRender_t41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::RebuildDistortionMesh()
extern "C" void CardboardPostRender_RebuildDistortionMesh_m164 (CardboardPostRender_t41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::ComputeMeshPoints(System.Int32,System.Int32,System.Boolean,UnityEngine.Vector3[]&,UnityEngine.Vector2[]&)
extern "C" void CardboardPostRender_ComputeMeshPoints_m165 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, bool ___distortVertices, Vector3U5BU5D_t75** ___vertices, Vector2U5BU5D_t76** ___tex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] CardboardPostRender::ComputeMeshColors(System.Int32,System.Int32,UnityEngine.Vector2[],System.Int32[],System.Boolean)
extern "C" ColorU5BU5D_t77* CardboardPostRender_ComputeMeshColors_m166 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, Vector2U5BU5D_t76* ___tex, Int32U5BU5D_t68* ___indices, bool ___distortVertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] CardboardPostRender::ComputeMeshIndices(System.Int32,System.Int32,System.Boolean)
extern "C" Int32U5BU5D_t68* CardboardPostRender_ComputeMeshIndices_m167 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, bool ___distortVertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::DrawUILayer()
extern "C" void CardboardPostRender_DrawUILayer_m168 (CardboardPostRender_t41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::ComputeUIMatrix()
extern "C" void CardboardPostRender_ComputeUIMatrix_m169 (CardboardPostRender_t41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::DrawSettingsButton()
extern "C" void CardboardPostRender_DrawSettingsButton_m170 (CardboardPostRender_t41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::DrawAlignmentMarker()
extern "C" void CardboardPostRender_DrawAlignmentMarker_m171 (CardboardPostRender_t41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CardboardPostRender::DrawVRBackButton()
extern "C" void CardboardPostRender_DrawVRBackButton_m172 (CardboardPostRender_t41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
