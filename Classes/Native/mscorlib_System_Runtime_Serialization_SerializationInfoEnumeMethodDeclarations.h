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

// System.Runtime.Serialization.SerializationInfoEnumerator
struct SerializationInfoEnumerator_t1517;
// System.Collections.ArrayList
struct ArrayList_t722;
// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_SerializationEntry.h"

// System.Void System.Runtime.Serialization.SerializationInfoEnumerator::.ctor(System.Collections.ArrayList)
extern "C" void SerializationInfoEnumerator__ctor_m9237 (SerializationInfoEnumerator_t1517 * __this, ArrayList_t722 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.SerializationInfoEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * SerializationInfoEnumerator_System_Collections_IEnumerator_get_Current_m9238 (SerializationInfoEnumerator_t1517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationEntry System.Runtime.Serialization.SerializationInfoEnumerator::get_Current()
extern "C" SerializationEntry_t1515  SerializationInfoEnumerator_get_Current_m9239 (SerializationInfoEnumerator_t1517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Serialization.SerializationInfoEnumerator::get_Name()
extern "C" String_t* SerializationInfoEnumerator_get_Name_m9240 (SerializationInfoEnumerator_t1517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.SerializationInfoEnumerator::get_Value()
extern "C" Object_t * SerializationInfoEnumerator_get_Value_m9241 (SerializationInfoEnumerator_t1517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.SerializationInfoEnumerator::MoveNext()
extern "C" bool SerializationInfoEnumerator_MoveNext_m9242 (SerializationInfoEnumerator_t1517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfoEnumerator::Reset()
extern "C" void SerializationInfoEnumerator_Reset_m9243 (SerializationInfoEnumerator_t1517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
