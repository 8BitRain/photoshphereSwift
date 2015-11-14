#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t81;
// System.Type[]
struct TypeU5BU5D_t96;

#include "mscorlib_System_Object.h"

// System.Runtime.Serialization.Formatters.Binary.BinaryCommon
struct  BinaryCommon_t1484  : public Object_t
{
};
struct BinaryCommon_t1484_StaticFields{
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::BinaryHeader
	ByteU5BU5D_t81* ___BinaryHeader_0;
	// System.Type[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::_typeCodesToType
	TypeU5BU5D_t96* ____typeCodesToType_1;
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::_typeCodeMap
	ByteU5BU5D_t81* ____typeCodeMap_2;
	// System.Boolean System.Runtime.Serialization.Formatters.Binary.BinaryCommon::UseReflectionSerialization
	bool ___UseReflectionSerialization_3;
};
