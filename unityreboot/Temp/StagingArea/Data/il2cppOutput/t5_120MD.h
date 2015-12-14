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


#include "codegen/il2cpp-codegen.h"

extern "C" void t5_120_marshal(const t5_120& unmarshaled, t5_120_marshaled& marshaled);
extern "C" void t5_120_marshal_back(const t5_120_marshaled& marshaled, t5_120& unmarshaled);
extern "C" void t5_120_marshal_cleanup(t5_120_marshaled& marshaled);
