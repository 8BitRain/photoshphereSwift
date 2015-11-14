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

// Pose3D
struct Pose3D_t58;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Void Pose3D::.ctor()
extern "C" void Pose3D__ctor_m206 (Pose3D_t58 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" void Pose3D__ctor_m207 (Pose3D_t58 * __this, Vector3_t5  ___position, Quaternion_t59  ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::.ctor(UnityEngine.Matrix4x4)
extern "C" void Pose3D__ctor_m208 (Pose3D_t58 * __this, Matrix4x4_t37  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::.cctor()
extern "C" void Pose3D__cctor_m209 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Pose3D::get_Position()
extern "C" Vector3_t5  Pose3D_get_Position_m210 (Pose3D_t58 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::set_Position(UnityEngine.Vector3)
extern "C" void Pose3D_set_Position_m211 (Pose3D_t58 * __this, Vector3_t5  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Pose3D::get_Orientation()
extern "C" Quaternion_t59  Pose3D_get_Orientation_m212 (Pose3D_t58 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::set_Orientation(UnityEngine.Quaternion)
extern "C" void Pose3D_set_Orientation_m213 (Pose3D_t58 * __this, Quaternion_t59  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Pose3D::get_Matrix()
extern "C" Matrix4x4_t37  Pose3D_get_Matrix_m214 (Pose3D_t58 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::set_Matrix(UnityEngine.Matrix4x4)
extern "C" void Pose3D_set_Matrix_m215 (Pose3D_t58 * __this, Matrix4x4_t37  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Pose3D::get_RightHandedMatrix()
extern "C" Matrix4x4_t37  Pose3D_get_RightHandedMatrix_m216 (Pose3D_t58 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::Set(UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" void Pose3D_Set_m217 (Pose3D_t58 * __this, Vector3_t5  ___position, Quaternion_t59  ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pose3D::Set(UnityEngine.Matrix4x4)
extern "C" void Pose3D_Set_m218 (Pose3D_t58 * __this, Matrix4x4_t37  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
