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

// System.Reflection.Emit.EnumBuilder
struct EnumBuilder_t1265;
// System.Reflection.Assembly
struct Assembly_t1057;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Module
struct Module_t1276;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t459;
// System.Reflection.Binder
struct Binder_t442;
// System.Type[]
struct TypeU5BU5D_t96;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t443;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t1734;
// System.Object[]
struct ObjectU5BU5D_t127;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t1735;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1328;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t444;
// System.String[]
struct StringU5BU5D_t95;
// System.Exception
struct Exception_t124;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "mscorlib_System_Reflection_TypeAttributes.h"
#include "mscorlib_System_Reflection_BindingFlags.h"
#include "mscorlib_System_Reflection_CallingConventions.h"

// System.Reflection.Assembly System.Reflection.Emit.EnumBuilder::get_Assembly()
extern "C" Assembly_t1057 * EnumBuilder_get_Assembly_m8048 (EnumBuilder_t1265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_AssemblyQualifiedName()
extern "C" String_t* EnumBuilder_get_AssemblyQualifiedName_m8049 (EnumBuilder_t1265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_BaseType()
extern "C" Type_t * EnumBuilder_get_BaseType_m8050 (EnumBuilder_t1265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_DeclaringType()
extern "C" Type_t * EnumBuilder_get_DeclaringType_m8051 (EnumBuilder_t1265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_FullName()
extern "C" String_t* EnumBuilder_get_FullName_m8052 (EnumBuilder_t1265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.EnumBuilder::get_Module()
extern "C" Module_t1276 * EnumBuilder_get_Module_m8053 (EnumBuilder_t1265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_Name()
extern "C" String_t* EnumBuilder_get_Name_m8054 (EnumBuilder_t1265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.EnumBuilder::get_Namespace()
extern "C" String_t* EnumBuilder_get_Namespace_m8055 (EnumBuilder_t1265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_ReflectedType()
extern "C" Type_t * EnumBuilder_get_ReflectedType_m8056 (EnumBuilder_t1265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.EnumBuilder::get_TypeHandle()
extern "C" RuntimeTypeHandle_t1075  EnumBuilder_get_TypeHandle_m8057 (EnumBuilder_t1265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::get_UnderlyingSystemType()
extern "C" Type_t * EnumBuilder_get_UnderlyingSystemType_m8058 (EnumBuilder_t1265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.EnumBuilder::GetAttributeFlagsImpl()
extern "C" int32_t EnumBuilder_GetAttributeFlagsImpl_m8059 (EnumBuilder_t1265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.EnumBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t459 * EnumBuilder_GetConstructorImpl_m8060 (EnumBuilder_t1265 * __this, int32_t ___bindingAttr, Binder_t442 * ___binder, int32_t ___callConvention, TypeU5BU5D_t96* ___types, ParameterModifierU5BU5D_t443* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.EnumBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t1734* EnumBuilder_GetConstructors_m8061 (EnumBuilder_t1265 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t127* EnumBuilder_GetCustomAttributes_m8062 (EnumBuilder_t1265 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.EnumBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t127* EnumBuilder_GetCustomAttributes_m8063 (EnumBuilder_t1265 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.EnumBuilder::GetElementType()
extern "C" Type_t * EnumBuilder_GetElementType_m8064 (EnumBuilder_t1265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.EnumBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * EnumBuilder_GetEvent_m8065 (EnumBuilder_t1265 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.EnumBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t * EnumBuilder_GetField_m8066 (EnumBuilder_t1265 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.EnumBuilder::GetFields(System.Reflection.BindingFlags)
extern "C" FieldInfoU5BU5D_t1735* EnumBuilder_GetFields_m8067 (EnumBuilder_t1265 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.EnumBuilder::GetInterfaces()
extern "C" TypeU5BU5D_t96* EnumBuilder_GetInterfaces_m8068 (EnumBuilder_t1265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.EnumBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * EnumBuilder_GetMethodImpl_m8069 (EnumBuilder_t1265 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t442 * ___binder, int32_t ___callConvention, TypeU5BU5D_t96* ___types, ParameterModifierU5BU5D_t443* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.EnumBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t1328* EnumBuilder_GetMethods_m8070 (EnumBuilder_t1265 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.EnumBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * EnumBuilder_GetPropertyImpl_m8071 (EnumBuilder_t1265 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t442 * ___binder, Type_t * ___returnType, TypeU5BU5D_t96* ___types, ParameterModifierU5BU5D_t443* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::HasElementTypeImpl()
extern "C" bool EnumBuilder_HasElementTypeImpl_m8072 (EnumBuilder_t1265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.EnumBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * EnumBuilder_InvokeMember_m8073 (EnumBuilder_t1265 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t442 * ___binder, Object_t * ___target, ObjectU5BU5D_t127* ___args, ParameterModifierU5BU5D_t443* ___modifiers, CultureInfo_t444 * ___culture, StringU5BU5D_t95* ___namedParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsArrayImpl()
extern "C" bool EnumBuilder_IsArrayImpl_m8074 (EnumBuilder_t1265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsByRefImpl()
extern "C" bool EnumBuilder_IsByRefImpl_m8075 (EnumBuilder_t1265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPointerImpl()
extern "C" bool EnumBuilder_IsPointerImpl_m8076 (EnumBuilder_t1265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsPrimitiveImpl()
extern "C" bool EnumBuilder_IsPrimitiveImpl_m8077 (EnumBuilder_t1265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsValueTypeImpl()
extern "C" bool EnumBuilder_IsValueTypeImpl_m8078 (EnumBuilder_t1265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.EnumBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool EnumBuilder_IsDefined_m8079 (EnumBuilder_t1265 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.EnumBuilder::CreateNotSupportedException()
extern "C" Exception_t124 * EnumBuilder_CreateNotSupportedException_m8080 (EnumBuilder_t1265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
