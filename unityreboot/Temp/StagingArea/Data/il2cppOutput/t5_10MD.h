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

struct t5_10;
struct t5_10_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m5_625 (t5_10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t5_10_marshal(const t5_10& unmarshaled, t5_10_marshaled& marshaled);
extern "C" void t5_10_marshal_back(const t5_10_marshaled& marshaled, t5_10& unmarshaled);
extern "C" void t5_10_marshal_cleanup(t5_10_marshaled& marshaled);
