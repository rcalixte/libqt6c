#pragma once
#ifndef SRCQT6C_LIBQFLOAT16_H
#define SRCQT6C_LIBQFLOAT16_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qfloat16.html

/// q_qfloat16_new constructs a new qfloat16 object.
///
///
qfloat16* q_qfloat16_new();

/// q_qfloat16_new2 constructs a new qfloat16 object.
///
/// ``` enum Qt__Initialization param1 ```
qfloat16* q_qfloat16_new2(int64_t param1);

/// q_qfloat16_new3 constructs a new qfloat16 object.
///
/// ``` float f ```
qfloat16* q_qfloat16_new3(float f);

/// q_qfloat16_copy_assign shallow copies `other` into `self`.
///
/// ``` qfloat16* self, qfloat16* other ```
void q_qfloat16_copy_assign(void* self, void* other);

/// q_qfloat16_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` qfloat16* self, qfloat16* other ```
void q_qfloat16_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qfloat16.html#operator float)
///
/// ``` qfloat16* self ```
float q_qfloat16_to_float(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfloat16.html#isInf)
///
/// ``` qfloat16* self ```
bool q_qfloat16_is_inf(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfloat16.html#isNaN)
///
/// ``` qfloat16* self ```
bool q_qfloat16_is_na_n(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfloat16.html#isFinite)
///
/// ``` qfloat16* self ```
bool q_qfloat16_is_finite(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfloat16.html#fpClassify)
///
/// ``` qfloat16* self ```
int32_t q_qfloat16_fp_classify(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfloat16.html#isNormal)
///
/// ``` qfloat16* self ```
bool q_qfloat16_is_normal(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qfloat16.html#dtor.qfloat16)
///
/// Delete this object from C++ memory.
///
/// ``` qfloat16* self ```
void q_qfloat16_delete(void* self);

#endif
