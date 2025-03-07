#pragma once
#ifndef SRCQT6C_LIBQFACTORYINTERFACE_H
#define SRCQT6C_LIBQFACTORYINTERFACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include <string.h>

const char** q_factoryinterface_keys(void* self);
void q_factoryinterface_delete(void* self);

#endif
