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

struct t5_119;
struct t5_119_marshaled;
struct t1_1;

#include "codegen/il2cpp-codegen.h"

extern "C" bool m5_1283 (t5_119 * __this, t1_1 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m5_1284 (t5_119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m5_1285 (t1_1 * __this , t5_119 * p0, t5_119 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t5_119_marshal(const t5_119& unmarshaled, t5_119_marshaled& marshaled);
extern "C" void t5_119_marshal_back(const t5_119_marshaled& marshaled, t5_119& unmarshaled);
extern "C" void t5_119_marshal_cleanup(t5_119_marshaled& marshaled);
