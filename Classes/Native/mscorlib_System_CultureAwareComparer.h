#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Globalization.CompareInfo
struct CompareInfo_t880;

#include "mscorlib_System_StringComparer.h"

// System.CultureAwareComparer
struct  CultureAwareComparer_t1688  : public StringComparer_t437
{
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t880 * ____compareInfo_5;
};
