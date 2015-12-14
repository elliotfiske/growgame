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

// DialogManager
struct DialogManager_t7_2;
// System.String[]
struct StringU5BU5D_t1_198;

#include "codegen/il2cpp-codegen.h"

// System.Void DialogManager::.ctor()
extern "C" void DialogManager__ctor_m7_3 (DialogManager_t7_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DialogManager::.cctor()
extern "C" void DialogManager__cctor_m7_4 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DialogManager::Awake()
extern "C" void DialogManager_Awake_m7_5 (DialogManager_t7_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DialogManager::Update()
extern "C" void DialogManager_Update_m7_6 (DialogManager_t7_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DialogManager::ShowDialog(System.String[])
extern "C" void DialogManager_ShowDialog_m7_7 (DialogManager_t7_2 * __this, StringU5BU5D_t1_198* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DialogManager::GlobalShowDialog(System.String[])
extern "C" void DialogManager_GlobalShowDialog_m7_8 (Object_t * __this /* static, unused */, StringU5BU5D_t1_198* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DialogManager::DismissDialog()
extern "C" void DialogManager_DismissDialog_m7_9 (DialogManager_t7_2 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
