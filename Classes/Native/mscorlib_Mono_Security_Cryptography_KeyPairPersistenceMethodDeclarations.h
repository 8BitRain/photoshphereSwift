﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t1139;
// System.Security.Cryptography.CspParameters
struct CspParameters_t859;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Cryptography.KeyPairPersistence::.ctor(System.Security.Cryptography.CspParameters)
extern "C" void KeyPairPersistence__ctor_m6880 (KeyPairPersistence_t1139 * __this, CspParameters_t859 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::.ctor(System.Security.Cryptography.CspParameters,System.String)
extern "C" void KeyPairPersistence__ctor_m6881 (KeyPairPersistence_t1139 * __this, CspParameters_t859 * ___parameters, String_t* ___keyPair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::.cctor()
extern "C" void KeyPairPersistence__cctor_m6882 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_Filename()
extern "C" String_t* KeyPairPersistence_get_Filename_m6883 (KeyPairPersistence_t1139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_KeyValue()
extern "C" String_t* KeyPairPersistence_get_KeyValue_m6884 (KeyPairPersistence_t1139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::set_KeyValue(System.String)
extern "C" void KeyPairPersistence_set_KeyValue_m6885 (KeyPairPersistence_t1139 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::Load()
extern "C" bool KeyPairPersistence_Load_m6886 (KeyPairPersistence_t1139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::Save()
extern "C" void KeyPairPersistence_Save_m6887 (KeyPairPersistence_t1139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::Remove()
extern "C" void KeyPairPersistence_Remove_m6888 (KeyPairPersistence_t1139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_UserPath()
extern "C" String_t* KeyPairPersistence_get_UserPath_m6889 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_MachinePath()
extern "C" String_t* KeyPairPersistence_get_MachinePath_m6890 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_CanSecure(System.String)
extern "C" bool KeyPairPersistence__CanSecure_m6891 (Object_t * __this /* static, unused */, String_t* ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_ProtectUser(System.String)
extern "C" bool KeyPairPersistence__ProtectUser_m6892 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_ProtectMachine(System.String)
extern "C" bool KeyPairPersistence__ProtectMachine_m6893 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_IsUserProtected(System.String)
extern "C" bool KeyPairPersistence__IsUserProtected_m6894 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_IsMachineProtected(System.String)
extern "C" bool KeyPairPersistence__IsMachineProtected_m6895 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::CanSecure(System.String)
extern "C" bool KeyPairPersistence_CanSecure_m6896 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::ProtectUser(System.String)
extern "C" bool KeyPairPersistence_ProtectUser_m6897 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::ProtectMachine(System.String)
extern "C" bool KeyPairPersistence_ProtectMachine_m6898 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::IsUserProtected(System.String)
extern "C" bool KeyPairPersistence_IsUserProtected_m6899 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::IsMachineProtected(System.String)
extern "C" bool KeyPairPersistence_IsMachineProtected_m6900 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_CanChange()
extern "C" bool KeyPairPersistence_get_CanChange_m6901 (KeyPairPersistence_t1139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_UseDefaultKeyContainer()
extern "C" bool KeyPairPersistence_get_UseDefaultKeyContainer_m6902 (KeyPairPersistence_t1139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_UseMachineKeyStore()
extern "C" bool KeyPairPersistence_get_UseMachineKeyStore_m6903 (KeyPairPersistence_t1139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_ContainerName()
extern "C" String_t* KeyPairPersistence_get_ContainerName_m6904 (KeyPairPersistence_t1139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CspParameters Mono.Security.Cryptography.KeyPairPersistence::Copy(System.Security.Cryptography.CspParameters)
extern "C" CspParameters_t859 * KeyPairPersistence_Copy_m6905 (KeyPairPersistence_t1139 * __this, CspParameters_t859 * ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::FromXml(System.String)
extern "C" void KeyPairPersistence_FromXml_m6906 (KeyPairPersistence_t1139 * __this, String_t* ___xml, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::ToXml()
extern "C" String_t* KeyPairPersistence_ToXml_m6907 (KeyPairPersistence_t1139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
