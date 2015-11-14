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

// UnityEngine.Mesh
struct Mesh_t42;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t75;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t397;
// System.Object
struct Object_t;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t398;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t399;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t76;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t400;
// UnityEngine.Color[]
struct ColorU5BU5D_t77;
// UnityEngine.Color32[]
struct Color32U5BU5D_t401;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t402;
// System.Int32[]
struct Int32U5BU5D_t68;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t403;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Mesh::.ctor()
extern "C" void Mesh__ctor_m519 (Mesh_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
extern "C" void Mesh_Internal_Create_m767 (Object_t * __this /* static, unused */, Mesh_t42 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear(System.Boolean)
extern "C" void Mesh_Clear_m768 (Mesh_t42 * __this, bool ___keepVertexLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear()
extern "C" void Mesh_Clear_m769 (Mesh_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
extern "C" Vector3U5BU5D_t75* Mesh_get_vertices_m770 (Mesh_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C" void Mesh_set_vertices_m520 (Mesh_t42 * __this, Vector3U5BU5D_t75* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C" void Mesh_SetVertices_m771 (Mesh_t42 * __this, List_1_t397 * ___inVertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetVerticesInternal(System.Object)
extern "C" void Mesh_SetVerticesInternal_m772 (Mesh_t42 * __this, Object_t * ___vertices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_normals()
extern "C" Vector3U5BU5D_t75* Mesh_get_normals_m773 (Mesh_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3>)
extern "C" void Mesh_SetNormals_m774 (Mesh_t42 * __this, List_1_t397 * ___inNormals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetNormalsInternal(System.Object)
extern "C" void Mesh_SetNormalsInternal_m775 (Mesh_t42 * __this, Object_t * ___normals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4[] UnityEngine.Mesh::get_tangents()
extern "C" Vector4U5BU5D_t398* Mesh_get_tangents_m776 (Mesh_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTangents(System.Collections.Generic.List`1<UnityEngine.Vector4>)
extern "C" void Mesh_SetTangents_m777 (Mesh_t42 * __this, List_1_t399 * ___inTangents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTangentsInternal(System.Object)
extern "C" void Mesh_SetTangentsInternal_m778 (Mesh_t42 * __this, Object_t * ___tangents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv()
extern "C" Vector2U5BU5D_t76* Mesh_get_uv_m779 (Mesh_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C" void Mesh_set_uv_m521 (Mesh_t42 * __this, Vector2U5BU5D_t76* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv2()
extern "C" Vector2U5BU5D_t76* Mesh_get_uv2_m780 (Mesh_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetUVs(System.Int32,System.Collections.Generic.List`1<UnityEngine.Vector2>)
extern "C" void Mesh_SetUVs_m781 (Mesh_t42 * __this, int32_t ___channel, List_1_t400 * ___uvs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetUVInternal(System.Object,System.Int32,System.Int32)
extern "C" void Mesh_SetUVInternal_m782 (Mesh_t42 * __this, Object_t * ___uvs, int32_t ___channel, int32_t ___dim, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_colors(UnityEngine.Color[])
extern "C" void Mesh_set_colors_m522 (Mesh_t42 * __this, ColorU5BU5D_t77* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] UnityEngine.Mesh::get_colors32()
extern "C" Color32U5BU5D_t401* Mesh_get_colors32_m783 (Mesh_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetColors(System.Collections.Generic.List`1<UnityEngine.Color32>)
extern "C" void Mesh_SetColors_m784 (Mesh_t42 * __this, List_1_t402 * ___inColors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetColors32Internal(System.Object)
extern "C" void Mesh_SetColors32Internal_m785 (Mesh_t42 * __this, Object_t * ___colors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::RecalculateBounds()
extern "C" void Mesh_RecalculateBounds_m786 (Mesh_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Optimize()
extern "C" void Mesh_Optimize_m524 (Mesh_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C" void Mesh_set_triangles_m523 (Mesh_t42 * __this, Int32U5BU5D_t68* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTriangles(System.Collections.Generic.List`1<System.Int32>,System.Int32)
extern "C" void Mesh_SetTriangles_m787 (Mesh_t42 * __this, List_1_t403 * ___inTriangles, int32_t ___submesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTrianglesInternal(System.Object,System.Int32)
extern "C" void Mesh_SetTrianglesInternal_m788 (Mesh_t42 * __this, Object_t * ___triangles, int32_t ___submesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.Mesh::GetIndices(System.Int32)
extern "C" Int32U5BU5D_t68* Mesh_GetIndices_m789 (Mesh_t42 * __this, int32_t ___submesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::UploadMeshData(System.Boolean)
extern "C" void Mesh_UploadMeshData_m525 (Mesh_t42 * __this, bool ___markNoLogerReadable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
