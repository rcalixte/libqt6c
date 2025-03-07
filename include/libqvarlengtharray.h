#pragma once
#ifndef SRCQT6C_LIBQVARLENGTHARRAY_H
#define SRCQT6C_LIBQVARLENGTHARRAY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

int64_t q_vlabasebase_capacity(void* self);
int64_t q_vlabasebase_size(void* self);
bool q_vlabasebase_empty(void* self);
#endif
