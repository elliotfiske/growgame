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

struct t5_9;
struct t5_9_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m5_9 (t5_9 * __this, float p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t5_9_marshal(const t5_9& unmarshaled, t5_9_marshaled& marshaled);
extern "C" void t5_9_marshal_back(const t5_9_marshaled& marshaled, t5_9& unmarshaled);
extern "C" void t5_9_marshal_cleanup(t5_9_marshaled& marshaled);
