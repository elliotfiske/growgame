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

struct t5_245;
struct t5_5;
struct t5_5_marshaled;
struct t1_29;
struct t1_170;

#include "codegen/il2cpp-codegen.h"

extern "C" void m5_1395_gshared (t5_245 * __this, t5_5 * p0, t1_29 * p1, bool p2, const MethodInfo* method);
#define m5_1395(__this, p0, p1, p2, method) (( void (*) (t5_245 *, t5_5 *, t1_29 *, bool, const MethodInfo*))m5_1395_gshared)(__this, p0, p1, p2, method)
extern "C" void m5_1546_gshared (t5_245 * __this, t1_170* p0, const MethodInfo* method);
#define m5_1546(__this, p0, method) (( void (*) (t5_245 *, t1_170*, const MethodInfo*))m5_1546_gshared)(__this, p0, method)
