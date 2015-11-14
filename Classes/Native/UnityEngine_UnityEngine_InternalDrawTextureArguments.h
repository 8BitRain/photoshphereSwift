#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t15;
// UnityEngine.Material
struct Material_t43;

#include "mscorlib_System_ValueType.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Color32.h"

// UnityEngine.InternalDrawTextureArguments
struct  InternalDrawTextureArguments_t167 
{
	// UnityEngine.Rect UnityEngine.InternalDrawTextureArguments::screenRect
	Rect_t19  ___screenRect_0;
	// UnityEngine.Texture UnityEngine.InternalDrawTextureArguments::texture
	Texture_t15 * ___texture_1;
	// UnityEngine.Rect UnityEngine.InternalDrawTextureArguments::sourceRect
	Rect_t19  ___sourceRect_2;
	// System.Int32 UnityEngine.InternalDrawTextureArguments::leftBorder
	int32_t ___leftBorder_3;
	// System.Int32 UnityEngine.InternalDrawTextureArguments::rightBorder
	int32_t ___rightBorder_4;
	// System.Int32 UnityEngine.InternalDrawTextureArguments::topBorder
	int32_t ___topBorder_5;
	// System.Int32 UnityEngine.InternalDrawTextureArguments::bottomBorder
	int32_t ___bottomBorder_6;
	// UnityEngine.Color32 UnityEngine.InternalDrawTextureArguments::color
	Color32_t168  ___color_7;
	// UnityEngine.Material UnityEngine.InternalDrawTextureArguments::mat
	Material_t43 * ___mat_8;
};
