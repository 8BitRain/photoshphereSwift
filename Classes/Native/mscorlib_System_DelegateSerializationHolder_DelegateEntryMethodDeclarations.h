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

// System.DelegateSerializationHolder/DelegateEntry
struct DelegateEntry_t1645;
// System.Delegate
struct Delegate_t88;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t418;

#include "codegen/il2cpp-codegen.h"

// System.Void System.DelegateSerializationHolder/DelegateEntry::.ctor(System.Delegate,System.String)
extern "C" void DelegateEntry__ctor_m10429 (DelegateEntry_t1645 * __this, Delegate_t88 * ___del, String_t* ___targetLabel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.DelegateSerializationHolder/DelegateEntry::DeserializeDelegate(System.Runtime.Serialization.SerializationInfo)
extern "C" Delegate_t88 * DelegateEntry_DeserializeDelegate_m10430 (DelegateEntry_t1645 * __this, SerializationInfo_t418 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
