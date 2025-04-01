#pragma once
#ifndef SRCQT6C_LIBQHASHFUNCTIONS_H
#define SRCQT6C_LIBQHASHFUNCTIONS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qhashseed.html

/// q_hashseed_new constructs a new QHashSeed object.
///
/// ``` QHashSeed* other ```
QHashSeed* q_hashseed_new(void* other);

/// q_hashseed_new2 constructs a new QHashSeed object and invalidates the source QHashSeed object.
///
/// ``` QHashSeed* other ```
QHashSeed* q_hashseed_new2(void* other);

/// q_hashseed_new3 constructs a new QHashSeed object.
///
///
QHashSeed* q_hashseed_new3();

/// q_hashseed_new4 constructs a new QHashSeed object.
///
/// ``` uint64_t d ```
QHashSeed* q_hashseed_new4(uint64_t d);

/// q_hashseed_copy_assign shallow copies `other` into `self`.
///
/// ``` QHashSeed* self, QHashSeed* other ```
void q_hashseed_copy_assign(void* self, void* other);

/// q_hashseed_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QHashSeed* self, QHashSeed* other ```
void q_hashseed_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qhashseed.html#operator unsigned long)
///
/// ``` QHashSeed* self ```
uint64_t q_hashseed_to_unsigned_long(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhashseed.html#globalSeed)
///
///
QHashSeed* q_hashseed_global_seed();

/// [Qt documentation](https://doc.qt.io/qt-6/qhashseed.html#setDeterministicGlobalSeed)
///
///
void q_hashseed_set_deterministic_global_seed();

/// [Qt documentation](https://doc.qt.io/qt-6/qhashseed.html#resetRandomGlobalSeed)
///
///
void q_hashseed_reset_random_global_seed();

/// Delete this object from C++ memory.
///
/// ``` QHashSeed* self ```
void q_hashseed_delete(void* self);

#endif
