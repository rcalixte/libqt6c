#pragma once
#ifndef SRC_QT6C_LIBQFLOAT16_H
#define SRC_QT6C_LIBQFLOAT16_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qfloat16.html

/// q_qfloat16_new constructs a new qfloat16 object.
///
qfloat16* q_qfloat16_new();

/// q_qfloat16_new2 constructs a new qfloat16 object.
///
/// @param param1 enum Qt__Initialization
qfloat16* q_qfloat16_new2(int32_t param1);

/// q_qfloat16_new3 constructs a new qfloat16 object.
///
/// @param f float
qfloat16* q_qfloat16_new3(float f);

/// q_qfloat16_copy_assign shallow copies `other` into `self`.
///
/// @param self qfloat16*
/// @param other qfloat16*
void q_qfloat16_copy_assign(void* self, void* other);

/// q_qfloat16_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self qfloat16*
/// @param other qfloat16*
void q_qfloat16_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qfloat16.html#operator)
///
/// @param self qfloat16*
float q_qfloat16_to_float(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfloat16.html#isInf)
///
/// @param self qfloat16*
bool q_qfloat16_is_inf(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfloat16.html#isNaN)
///
/// @param self qfloat16*
bool q_qfloat16_is_na_n(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfloat16.html#isFinite)
///
/// @param self qfloat16*
bool q_qfloat16_is_finite(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfloat16.html#fpClassify)
///
/// @param self qfloat16*
int32_t q_qfloat16_fp_classify(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfloat16.html#isNormal)
///
/// @param self qfloat16*
bool q_qfloat16_is_normal(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qfloat16.html#dtor.qfloat16)
///
/// Delete this object from C++ memory.
///
/// @param self qfloat16*
void q_qfloat16_delete(void* self);

#endif
