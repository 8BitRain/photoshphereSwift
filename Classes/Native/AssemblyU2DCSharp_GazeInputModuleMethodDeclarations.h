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

// GazeInputModule
struct GazeInputModule_t54;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void GazeInputModule::.ctor()
extern "C" void GazeInputModule__ctor_m194 (GazeInputModule_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GazeInputModule::ShouldActivateModule()
extern "C" bool GazeInputModule_ShouldActivateModule_m195 (GazeInputModule_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::DeactivateModule()
extern "C" void GazeInputModule_DeactivateModule_m196 (GazeInputModule_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GazeInputModule::IsPointerOverGameObject(System.Int32)
extern "C" bool GazeInputModule_IsPointerOverGameObject_m197 (GazeInputModule_t54 * __this, int32_t ___pointerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::Process()
extern "C" void GazeInputModule_Process_m198 (GazeInputModule_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::CastRayFromGaze()
extern "C" void GazeInputModule_CastRayFromGaze_m199 (GazeInputModule_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::UpdateCurrentObject()
extern "C" void GazeInputModule_UpdateCurrentObject_m200 (GazeInputModule_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::PlaceCursor()
extern "C" void GazeInputModule_PlaceCursor_m201 (GazeInputModule_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::HandleDrag()
extern "C" void GazeInputModule_HandleDrag_m202 (GazeInputModule_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::HandlePendingClick()
extern "C" void GazeInputModule_HandlePendingClick_m203 (GazeInputModule_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GazeInputModule::HandleTrigger()
extern "C" void GazeInputModule_HandleTrigger_m204 (GazeInputModule_t54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 GazeInputModule::NormalizedCartesianToSpherical(UnityEngine.Vector3)
extern "C" Vector2_t16  GazeInputModule_NormalizedCartesianToSpherical_m205 (GazeInputModule_t54 * __this, Vector3_t5  ___cartCoords, const MethodInfo* method) IL2CPP_METHOD_ATTR;
