#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t293;
// UnityEngineInternal.GenericStack
struct GenericStack_t288;

#include "mscorlib_System_Object.h"

// UnityEngine.GUILayoutUtility/LayoutCache
struct  LayoutCache_t292  : public Object_t
{
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::topLevel
	GUILayoutGroup_t293 * ___topLevel_0;
	// UnityEngineInternal.GenericStack UnityEngine.GUILayoutUtility/LayoutCache::layoutGroups
	GenericStack_t288 * ___layoutGroups_1;
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::windows
	GUILayoutGroup_t293 * ___windows_2;
};
