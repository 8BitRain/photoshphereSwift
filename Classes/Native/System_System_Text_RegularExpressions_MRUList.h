#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.RegularExpressions.MRUList/Node
struct Node_t991;

#include "mscorlib_System_Object.h"

// System.Text.RegularExpressions.MRUList
struct  MRUList_t990  : public Object_t
{
	// System.Text.RegularExpressions.MRUList/Node System.Text.RegularExpressions.MRUList::head
	Node_t991 * ___head_0;
	// System.Text.RegularExpressions.MRUList/Node System.Text.RegularExpressions.MRUList::tail
	Node_t991 * ___tail_1;
};
