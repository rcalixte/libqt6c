#pragma once
#ifndef SRC_QT6C_LIBQHASHFUNCTIONS_H
#define SRC_QT6C_LIBQHASHFUNCTIONS_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qhashseed.html

/// q_hashseed_new constructs a new QHashSeed object.
///
/// @param other QHashSeed*
QHashSeed* q_hashseed_new(void* other);

/// q_hashseed_new2 constructs a new QHashSeed object and invalidates the source QHashSeed object.
///
/// @param other QHashSeed*
QHashSeed* q_hashseed_new2(void* other);

/// q_hashseed_new3 constructs a new QHashSeed object.
///
QHashSeed* q_hashseed_new3();

/// q_hashseed_new4 constructs a new QHashSeed object.
///
/// @param d uint64_t
QHashSeed* q_hashseed_new4(uint64_t d);

/// q_hashseed_copy_assign shallow copies `other` into `self`.
///
/// @param self QHashSeed*
/// @param other QHashSeed*
void q_hashseed_copy_assign(void* self, void* other);

/// q_hashseed_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QHashSeed*
/// @param other QHashSeed*
void q_hashseed_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qhashseed.html#operator)
///
/// @param self QHashSeed*
uint64_t q_hashseed_to_unsigned_long(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhashseed.html#globalSeed)
///
QHashSeed* q_hashseed_global_seed();

/// [Qt documentation](https://doc.qt.io/qt-6/qhashseed.html#setDeterministicGlobalSeed)
///
void q_hashseed_set_deterministic_global_seed();

/// [Qt documentation](https://doc.qt.io/qt-6/qhashseed.html#resetRandomGlobalSeed)
///
void q_hashseed_reset_random_global_seed();

/// [Qt documentation](https://doc.qt.io/qt-6/qhashseed.html#dtor.QHashSeed)
///
/// Delete this object from C++ memory.
///
/// @param self QHashSeed*
void q_hashseed_delete(void* self);

#endif
