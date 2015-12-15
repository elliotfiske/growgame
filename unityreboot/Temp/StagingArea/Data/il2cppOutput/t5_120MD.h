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

struct t5_120;
struct t5_120_marshaled;
struct t1_1;

#include "codegen/il2cpp-codegen.h"

extern "C" bool m5_1297 (t5_120 * __this, t1_1 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m5_1298 (t5_120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m5_1299 (t1_1 * __this , t5_120 * p0, t5_120 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t5_120_marshal(const t5_120& unmarshaled, t5_120_marshaled& marshaled);
extern "C" void t5_120_marshal_back(const t5_120_marshaled& marshaled, t5_120& unmarshaled);
extern "C" void t5_120_marshal_cleanup(t5_120_marshaled& marshaled);
