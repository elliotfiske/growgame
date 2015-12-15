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

struct t5_13;
struct t5_13_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m5_12 (t5_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m5_13 (t5_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m5_14 (t5_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t5_13_marshal(const t5_13& unmarshaled, t5_13_marshaled& marshaled);
extern "C" void t5_13_marshal_back(const t5_13_marshaled& marshaled, t5_13& unmarshaled);
extern "C" void t5_13_marshal_cleanup(t5_13_marshaled& marshaled);
