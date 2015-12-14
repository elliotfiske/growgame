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

struct t5_117;
struct t5_117_marshaled;
struct t1_1;

#include "codegen/il2cpp-codegen.h"

extern "C" bool m5_1279 (t5_117 * __this, t1_1 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m5_1280 (t5_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m5_1281 (t1_1 * __this , t5_117 * p0, t5_117 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t5_117_marshal(const t5_117& unmarshaled, t5_117_marshaled& marshaled);
extern "C" void t5_117_marshal_back(const t5_117_marshaled& marshaled, t5_117& unmarshaled);
extern "C" void t5_117_marshal_cleanup(t5_117_marshaled& marshaled);
