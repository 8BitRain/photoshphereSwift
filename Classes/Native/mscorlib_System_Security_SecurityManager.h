﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Object_t;
// System.Collections.Hashtable
struct Hashtable_t787;
// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t1559;

#include "mscorlib_System_Object.h"

// System.Security.SecurityManager
struct  SecurityManager_t1579  : public Object_t
{
};
struct SecurityManager_t1579_StaticFields{
	// System.Object System.Security.SecurityManager::_lockObject
	Object_t * ____lockObject_0;
	// System.Collections.Hashtable System.Security.SecurityManager::_declsecCache
	Hashtable_t787 * ____declsecCache_1;
	// System.Security.Permissions.SecurityPermission System.Security.SecurityManager::_execution
	SecurityPermission_t1559 * ____execution_2;
};
