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

// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t977;
// System.Text.RegularExpressions.Capture
struct Capture_t976;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t73;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.CaptureCollection::.ctor(System.Int32)
extern "C" void CaptureCollection__ctor_m5249 (CaptureCollection_t977 * __this, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.CaptureCollection::get_Count()
extern "C" int32_t CaptureCollection_get_Count_m5250 (CaptureCollection_t977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.CaptureCollection::get_IsSynchronized()
extern "C" bool CaptureCollection_get_IsSynchronized_m5251 (CaptureCollection_t977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CaptureCollection::SetValue(System.Text.RegularExpressions.Capture,System.Int32)
extern "C" void CaptureCollection_SetValue_m5252 (CaptureCollection_t977 * __this, Capture_t976 * ___cap, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.RegularExpressions.CaptureCollection::get_SyncRoot()
extern "C" Object_t * CaptureCollection_get_SyncRoot_m5253 (CaptureCollection_t977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.CaptureCollection::CopyTo(System.Array,System.Int32)
extern "C" void CaptureCollection_CopyTo_m5254 (CaptureCollection_t977 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Text.RegularExpressions.CaptureCollection::GetEnumerator()
extern "C" Object_t * CaptureCollection_GetEnumerator_m5255 (CaptureCollection_t977 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
