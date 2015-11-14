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

// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Quaternion__ctor_m937 (Quaternion_t59 * __this, float ___x, float ___y, float ___z, float ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" Quaternion_t59  Quaternion_get_identity_m492 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" float Quaternion_Dot_m938 (Object_t * __this /* static, unused */, Quaternion_t59  ___a, Quaternion_t59  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Quaternion_t59  Quaternion_LookRotation_m611 (Object_t * __this /* static, unused */, Vector3_t5  ___forward, Vector3_t5  ___upwards, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_LookRotation(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" Quaternion_t59  Quaternion_INTERNAL_CALL_LookRotation_m939 (Object_t * __this /* static, unused */, Vector3_t5 * ___forward, Vector3_t5 * ___upwards, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
extern "C" Quaternion_t59  Quaternion_Inverse_m940 (Object_t * __this /* static, unused */, Quaternion_t59  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)
extern "C" Quaternion_t59  Quaternion_INTERNAL_CALL_Inverse_m941 (Object_t * __this /* static, unused */, Quaternion_t59 * ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
extern "C" String_t* Quaternion_ToString_m942 (Quaternion_t59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
extern "C" int32_t Quaternion_GetHashCode_m943 (Quaternion_t59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
extern "C" bool Quaternion_Equals_m944 (Quaternion_t59 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" Quaternion_t59  Quaternion_op_Multiply_m502 (Object_t * __this /* static, unused */, Quaternion_t59  ___lhs, Quaternion_t59  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" Vector3_t5  Quaternion_op_Multiply_m504 (Object_t * __this /* static, unused */, Quaternion_t59  ___rotation, Vector3_t5  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C" bool Quaternion_op_Inequality_m945 (Object_t * __this /* static, unused */, Quaternion_t59  ___lhs, Quaternion_t59  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
