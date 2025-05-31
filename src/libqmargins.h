#pragma once
#ifndef SRCQT6C_LIBQMARGINS_H
#define SRCQT6C_LIBQMARGINS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qmargins.html

/// q_margins_new constructs a new QMargins object.
///
/// ``` QMargins* other ```
QMargins* q_margins_new(void* other);

/// q_margins_new2 constructs a new QMargins object and invalidates the source QMargins object.
///
/// ``` QMargins* other ```
QMargins* q_margins_new2(void* other);

/// q_margins_new3 constructs a new QMargins object.
///
///
QMargins* q_margins_new3();

/// q_margins_new4 constructs a new QMargins object.
///
/// ``` int left, int top, int right, int bottom ```
QMargins* q_margins_new4(int left, int top, int right, int bottom);

/// q_margins_new5 constructs a new QMargins object.
///
/// ``` QMargins* param1 ```
QMargins* q_margins_new5(void* param1);

/// q_margins_copy_assign shallow copies `other` into `self`.
///
/// ``` QMargins* self, QMargins* other ```
void q_margins_copy_assign(void* self, void* other);

/// q_margins_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QMargins* self, QMargins* other ```
void q_margins_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#isNull)
///
/// ``` QMargins* self ```
bool q_margins_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#left)
///
/// ``` QMargins* self ```
int32_t q_margins_left(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#top)
///
/// ``` QMargins* self ```
int32_t q_margins_top(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#right)
///
/// ``` QMargins* self ```
int32_t q_margins_right(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#bottom)
///
/// ``` QMargins* self ```
int32_t q_margins_bottom(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#setLeft)
///
/// ``` QMargins* self, int left ```
void q_margins_set_left(void* self, int left);

/// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#setTop)
///
/// ``` QMargins* self, int top ```
void q_margins_set_top(void* self, int top);

/// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#setRight)
///
/// ``` QMargins* self, int right ```
void q_margins_set_right(void* self, int right);

/// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#setBottom)
///
/// ``` QMargins* self, int bottom ```
void q_margins_set_bottom(void* self, int bottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#operator+=)
///
/// ``` QMargins* self, QMargins* margins ```
QMargins* q_margins_operator_plus_assign(void* self, void* margins);

/// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#operator-=)
///
/// ``` QMargins* self, QMargins* margins ```
QMargins* q_margins_operator_minus_assign(void* self, void* margins);

/// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#operator+=)
///
/// ``` QMargins* self, int param1 ```
QMargins* q_margins_operator_plus_assign_with_int(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#operator-=)
///
/// ``` QMargins* self, int param1 ```
QMargins* q_margins_operator_minus_assign_with_int(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#operator*=)
///
/// ``` QMargins* self, int param1 ```
QMargins* q_margins_operator_multiply_assign(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#operator/=)
///
/// ``` QMargins* self, int param1 ```
QMargins* q_margins_operator_divide_assign(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#operator*=)
///
/// ``` QMargins* self, double param1 ```
QMargins* q_margins_operator_multiply_assign_with_double(void* self, double param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#operator/=)
///
/// ``` QMargins* self, double param1 ```
QMargins* q_margins_operator_divide_assign_with_double(void* self, double param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#toMarginsF)
///
/// ``` QMargins* self ```
QMarginsF* q_margins_to_margins_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmargins.html#dtor.QMargins)
///
/// Delete this object from C++ memory.
///
/// ``` QMargins* self ```
void q_margins_delete(void* self);

/// https://doc.qt.io/qt-6/qmarginsf.html

/// q_marginsf_new constructs a new QMarginsF object.
///
/// ``` QMarginsF* other ```
QMarginsF* q_marginsf_new(void* other);

/// q_marginsf_new2 constructs a new QMarginsF object and invalidates the source QMarginsF object.
///
/// ``` QMarginsF* other ```
QMarginsF* q_marginsf_new2(void* other);

/// q_marginsf_new3 constructs a new QMarginsF object.
///
///
QMarginsF* q_marginsf_new3();

/// q_marginsf_new4 constructs a new QMarginsF object.
///
/// ``` double left, double top, double right, double bottom ```
QMarginsF* q_marginsf_new4(double left, double top, double right, double bottom);

/// q_marginsf_new5 constructs a new QMarginsF object.
///
/// ``` QMargins* margins ```
QMarginsF* q_marginsf_new5(void* margins);

/// q_marginsf_new6 constructs a new QMarginsF object.
///
/// ``` QMarginsF* param1 ```
QMarginsF* q_marginsf_new6(void* param1);

/// q_marginsf_copy_assign shallow copies `other` into `self`.
///
/// ``` QMarginsF* self, QMarginsF* other ```
void q_marginsf_copy_assign(void* self, void* other);

/// q_marginsf_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QMarginsF* self, QMarginsF* other ```
void q_marginsf_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#isNull)
///
/// ``` QMarginsF* self ```
bool q_marginsf_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#left)
///
/// ``` QMarginsF* self ```
double q_marginsf_left(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#top)
///
/// ``` QMarginsF* self ```
double q_marginsf_top(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#right)
///
/// ``` QMarginsF* self ```
double q_marginsf_right(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#bottom)
///
/// ``` QMarginsF* self ```
double q_marginsf_bottom(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#setLeft)
///
/// ``` QMarginsF* self, double aleft ```
void q_marginsf_set_left(void* self, double aleft);

/// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#setTop)
///
/// ``` QMarginsF* self, double atop ```
void q_marginsf_set_top(void* self, double atop);

/// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#setRight)
///
/// ``` QMarginsF* self, double aright ```
void q_marginsf_set_right(void* self, double aright);

/// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#setBottom)
///
/// ``` QMarginsF* self, double abottom ```
void q_marginsf_set_bottom(void* self, double abottom);

/// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#operator+=)
///
/// ``` QMarginsF* self, QMarginsF* margins ```
QMarginsF* q_marginsf_operator_plus_assign(void* self, void* margins);

/// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#operator-=)
///
/// ``` QMarginsF* self, QMarginsF* margins ```
QMarginsF* q_marginsf_operator_minus_assign(void* self, void* margins);

/// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#operator+=)
///
/// ``` QMarginsF* self, double addend ```
QMarginsF* q_marginsf_operator_plus_assign_with_addend(void* self, double addend);

/// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#operator-=)
///
/// ``` QMarginsF* self, double subtrahend ```
QMarginsF* q_marginsf_operator_minus_assign_with_subtrahend(void* self, double subtrahend);

/// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#operator*=)
///
/// ``` QMarginsF* self, double factor ```
QMarginsF* q_marginsf_operator_multiply_assign(void* self, double factor);

/// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#operator/=)
///
/// ``` QMarginsF* self, double divisor ```
QMarginsF* q_marginsf_operator_divide_assign(void* self, double divisor);

/// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#toMargins)
///
/// ``` QMarginsF* self ```
QMargins* q_marginsf_to_margins(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qmarginsf.html#dtor.QMarginsF)
///
/// Delete this object from C++ memory.
///
/// ``` QMarginsF* self ```
void q_marginsf_delete(void* self);

#endif
