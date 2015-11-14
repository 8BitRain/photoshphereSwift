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

// System.IO.DirectoryInfo
struct DirectoryInfo_t1223;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t418;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.DirectoryInfo::.ctor(System.String)
extern "C" void DirectoryInfo__ctor_m7718 (DirectoryInfo_t1223 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::.ctor(System.String,System.Boolean)
extern "C" void DirectoryInfo__ctor_m7719 (DirectoryInfo_t1223 * __this, String_t* ___path, bool ___simpleOriginalPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DirectoryInfo__ctor_m7720 (DirectoryInfo_t1223 * __this, SerializationInfo_t418 * ___info, StreamingContext_t419  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::Initialize()
extern "C" void DirectoryInfo_Initialize_m7721 (DirectoryInfo_t1223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.DirectoryInfo::get_Exists()
extern "C" bool DirectoryInfo_get_Exists_m7722 (DirectoryInfo_t1223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.DirectoryInfo::get_Parent()
extern "C" DirectoryInfo_t1223 * DirectoryInfo_get_Parent_m7723 (DirectoryInfo_t1223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DirectoryInfo::Create()
extern "C" void DirectoryInfo_Create_m7724 (DirectoryInfo_t1223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.DirectoryInfo::ToString()
extern "C" String_t* DirectoryInfo_ToString_m7725 (DirectoryInfo_t1223 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
