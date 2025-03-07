#pragma once
#ifndef SRCQT6C_LIBQHASHFUNCTIONS_H
#define SRCQT6C_LIBQHASHFUNCTIONS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

QHashSeed* q_hashseed_new(void* other);
QHashSeed* q_hashseed_new2(void* other);
QHashSeed* q_hashseed_new3();
QHashSeed* q_hashseed_new4(uint64_t d);
void q_hashseed_copy_assign(void* self, void* other);
void q_hashseed_move_assign(void* self, void* other);
uint64_t q_hashseed_to_unsigned_long(void* self);
QHashSeed* q_hashseed_global_seed();
void q_hashseed_set_deterministic_global_seed();
void q_hashseed_reset_random_global_seed();
void q_hashseed_delete(void* self);

#endif
