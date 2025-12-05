#pragma once
#ifndef SRC_QT6C_LIBQMARGINS_H
#define SRC_QT6C_LIBQMARGINS_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qmargins.html)

/// q_margins_new constructs a new QMargins object.
///
/// @param other QMargins*
///
QMargins* q_margins_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmargins.html)

/// q_margins_new2 constructs a new QMargins object and invalidates the source QMargins object.
///
/// @param other QMargins*
///
QMargins* q_margins_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmargins.html)

/// q_margins_new3 constructs a new QMargins object.
///
QMargins* q_margins_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qmargins.html)

/// q_margins_new4 constructs a new QMargins object.
///
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
QMargins* q_margins_new4(int left, int top, int right, int bottom);

/// [Upstream resources](https://doc.qt.io/qt-6/qmargins.html)

/// q_margins_new5 constructs a new QMargins object.
///
/// @param param1 QMargins*
///
QMargins* q_margins_new5(void* param1);

/// q_margins_copy_assign shallow copies `other` into `self`.
///
/// @param self QMargins*
/// @param other QMargins*
///
void q_margins_copy_assign(void* self, void* other);

/// q_margins_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QMargins*
/// @param other QMargins*
///
void q_margins_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#isNull)
///
/// @param self QMargins*
///
bool q_margins_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#left)
///
/// @param self QMargins*
///
int32_t q_margins_left(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#top)
///
/// @param self QMargins*
///
int32_t q_margins_top(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#right)
///
/// @param self QMargins*
///
int32_t q_margins_right(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#bottom)
///
/// @param self QMargins*
///
int32_t q_margins_bottom(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#setLeft)
///
/// @param self QMargins*
/// @param left int
///
void q_margins_set_left(void* self, int left);

/// [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#setTop)
///
/// @param self QMargins*
/// @param top int
///
void q_margins_set_top(void* self, int top);

/// [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#setRight)
///
/// @param self QMargins*
/// @param right int
///
void q_margins_set_right(void* self, int right);

/// [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#setBottom)
///
/// @param self QMargins*
/// @param bottom int
///
void q_margins_set_bottom(void* self, int bottom);

/// [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#operator-2b-eq)
///
/// @param self QMargins*
/// @param margins QMargins*
///
QMargins* q_margins_operator_plus_assign(void* self, void* margins);

/// [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#operator--eq)
///
/// @param self QMargins*
/// @param margins QMargins*
///
QMargins* q_margins_operator_minus_assign(void* self, void* margins);

/// [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#operator-2b-eq)
///
/// @param self QMargins*
/// @param param1 int
///
QMargins* q_margins_operator_plus_assign2(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#operator--eq)
///
/// @param self QMargins*
/// @param param1 int
///
QMargins* q_margins_operator_minus_assign2(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#operator-2a-eq)
///
/// @param self QMargins*
/// @param param1 int
///
QMargins* q_margins_operator_multiply_assign(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#operator-2f-eq)
///
/// @param self QMargins*
/// @param param1 int
///
QMargins* q_margins_operator_divide_assign(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#operator-2a-eq)
///
/// @param self QMargins*
/// @param param1 double
///
QMargins* q_margins_operator_multiply_assign2(void* self, double param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#operator-2f-eq)
///
/// @param self QMargins*
/// @param param1 double
///
QMargins* q_margins_operator_divide_assign2(void* self, double param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#toMarginsF)
///
/// @param self QMargins*
///
QMarginsF* q_margins_to_margins_f(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmargins.html#dtor.QMargins)
///
/// Delete this object from C++ memory.
///
/// @param self QMargins*
///
void q_margins_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html)

/// q_marginsf_new constructs a new QMarginsF object.
///
/// @param other QMarginsF*
///
QMarginsF* q_marginsf_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html)

/// q_marginsf_new2 constructs a new QMarginsF object and invalidates the source QMarginsF object.
///
/// @param other QMarginsF*
///
QMarginsF* q_marginsf_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html)

/// q_marginsf_new3 constructs a new QMarginsF object.
///
QMarginsF* q_marginsf_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html)

/// q_marginsf_new4 constructs a new QMarginsF object.
///
/// @param left double
/// @param top double
/// @param right double
/// @param bottom double
///
QMarginsF* q_marginsf_new4(double left, double top, double right, double bottom);

/// [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html)

/// q_marginsf_new5 constructs a new QMarginsF object.
///
/// @param margins QMargins*
///
QMarginsF* q_marginsf_new5(void* margins);

/// [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html)

/// q_marginsf_new6 constructs a new QMarginsF object.
///
/// @param param1 QMarginsF*
///
QMarginsF* q_marginsf_new6(void* param1);

/// q_marginsf_copy_assign shallow copies `other` into `self`.
///
/// @param self QMarginsF*
/// @param other QMarginsF*
///
void q_marginsf_copy_assign(void* self, void* other);

/// q_marginsf_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QMarginsF*
/// @param other QMarginsF*
///
void q_marginsf_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#isNull)
///
/// @param self QMarginsF*
///
bool q_marginsf_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#left)
///
/// @param self QMarginsF*
///
double q_marginsf_left(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#top)
///
/// @param self QMarginsF*
///
double q_marginsf_top(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#right)
///
/// @param self QMarginsF*
///
double q_marginsf_right(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#bottom)
///
/// @param self QMarginsF*
///
double q_marginsf_bottom(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#setLeft)
///
/// @param self QMarginsF*
/// @param aleft double
///
void q_marginsf_set_left(void* self, double aleft);

/// [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#setTop)
///
/// @param self QMarginsF*
/// @param atop double
///
void q_marginsf_set_top(void* self, double atop);

/// [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#setRight)
///
/// @param self QMarginsF*
/// @param aright double
///
void q_marginsf_set_right(void* self, double aright);

/// [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#setBottom)
///
/// @param self QMarginsF*
/// @param abottom double
///
void q_marginsf_set_bottom(void* self, double abottom);

/// [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#operator-2b-eq)
///
/// @param self QMarginsF*
/// @param margins QMarginsF*
///
QMarginsF* q_marginsf_operator_plus_assign(void* self, void* margins);

/// [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#operator--eq)
///
/// @param self QMarginsF*
/// @param margins QMarginsF*
///
QMarginsF* q_marginsf_operator_minus_assign(void* self, void* margins);

/// [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#operator-2b-eq)
///
/// @param self QMarginsF*
/// @param addend double
///
QMarginsF* q_marginsf_operator_plus_assign2(void* self, double addend);

/// [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#operator--eq)
///
/// @param self QMarginsF*
/// @param subtrahend double
///
QMarginsF* q_marginsf_operator_minus_assign2(void* self, double subtrahend);

/// [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#operator-2a-eq)
///
/// @param self QMarginsF*
/// @param factor double
///
QMarginsF* q_marginsf_operator_multiply_assign(void* self, double factor);

/// [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#operator-2f-eq)
///
/// @param self QMarginsF*
/// @param divisor double
///
QMarginsF* q_marginsf_operator_divide_assign(void* self, double divisor);

/// [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#toMargins)
///
/// @param self QMarginsF*
///
QMargins* q_marginsf_to_margins(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmarginsf.html#dtor.QMarginsF)
///
/// Delete this object from C++ memory.
///
/// @param self QMarginsF*
///
void q_marginsf_delete(void* self);

#endif
