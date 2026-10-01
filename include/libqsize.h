#pragma once
#ifndef LIBQSIZE_H
#define LIBQSIZE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html)

/// q_size_new constructs a new QSize object.
///
/// @param other QSize*
///
QSize* q_size_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html)

/// q_size_new2 constructs a new QSize object and invalidates the source QSize object.
///
/// @param other QSize*
///
QSize* q_size_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html)

/// q_size_new3 constructs a new QSize object.
///
QSize* q_size_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html)

/// q_size_new4 constructs a new QSize object.
///
/// @param w int
/// @param h int
///
QSize* q_size_new4(int w, int h);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html)

/// q_size_new5 constructs a new QSize object.
///
/// @param param1 QSize*
///
QSize* q_size_new5(const void* param1);

/// q_size_copy_assign shallow copies `other` into `self`.
///
/// @param self QSize*
/// @param other QSize*
///
void q_size_copy_assign(void* self, void* other);

/// q_size_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QSize*
/// @param other QSize*
///
void q_size_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#isNull)
///
/// @param self const QSize*
///
bool q_size_is_null(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#isEmpty)
///
/// @param self const QSize*
///
bool q_size_is_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#isValid)
///
/// @param self const QSize*
///
bool q_size_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#width)
///
/// @param self const QSize*
///
int32_t q_size_width(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#height)
///
/// @param self const QSize*
///
int32_t q_size_height(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#setWidth)
///
/// @param self QSize*
/// @param w int
///
void q_size_set_width(void* self, int w);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#setHeight)
///
/// @param self QSize*
/// @param h int
///
void q_size_set_height(void* self, int h);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#transpose)
///
/// @param self QSize*
///
void q_size_transpose(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#transposed)
///
/// @param self const QSize*
///
QSize* q_size_transposed(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#scale)
///
/// @param self QSize*
/// @param w int
/// @param h int
/// @param mode enum Qt__AspectRatioMode
///
void q_size_scale(void* self, int w, int h, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#scale)
///
/// @param self QSize*
/// @param s QSize*
/// @param mode enum Qt__AspectRatioMode
///
void q_size_scale2(void* self, const void* s, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#scaled)
///
/// @param self const QSize*
/// @param w int
/// @param h int
/// @param mode enum Qt__AspectRatioMode
///
QSize* q_size_scaled(const void* self, int w, int h, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#scaled)
///
/// @param self const QSize*
/// @param s QSize*
/// @param mode enum Qt__AspectRatioMode
///
QSize* q_size_scaled2(const void* self, const void* s, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#expandedTo)
///
/// @param self const QSize*
/// @param param1 QSize*
///
QSize* q_size_expanded_to(const void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#boundedTo)
///
/// @param self const QSize*
/// @param param1 QSize*
///
QSize* q_size_bounded_to(const void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#grownBy)
///
/// @param self const QSize*
/// @param m QMargins*
///
QSize* q_size_grown_by(const void* self, void* m);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#shrunkBy)
///
/// @param self const QSize*
/// @param m QMargins*
///
QSize* q_size_shrunk_by(const void* self, void* m);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#rwidth)
///
/// @param self QSize*
///
int* q_size_rwidth(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#rheight)
///
/// @param self QSize*
///
int* q_size_rheight(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#operator-2b-eq)
///
/// @param self QSize*
/// @param param1 QSize*
///
QSize* q_size_operator_plus_assign(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#operator--eq)
///
/// @param self QSize*
/// @param param1 QSize*
///
QSize* q_size_operator_minus_assign(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#operator-2a-eq)
///
/// @param self QSize*
/// @param c double
///
QSize* q_size_operator_multiply_assign(void* self, double c);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#operator-2f-eq)
///
/// @param self QSize*
/// @param c double
///
QSize* q_size_operator_divide_assign(void* self, double c);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#toSizeF)
///
/// @param self const QSize*
///
QSizeF* q_size_to_size_f(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#operator-eq)
///
/// @param self QSize*
/// @param param1 QSize*
///
void q_size_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#dtor.QSize)
///
/// Delete this object from C++ memory.
///
/// @param self QSize*
///
void q_size_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#qHash)
///
/// @param s QSize*
/// @param seed size_t
///
size_t q_qsize_q_hash(const void* s, size_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html)

/// q_sizef_new constructs a new QSizeF object.
///
/// @param other QSizeF*
///
QSizeF* q_sizef_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html)

/// q_sizef_new2 constructs a new QSizeF object and invalidates the source QSizeF object.
///
/// @param other QSizeF*
///
QSizeF* q_sizef_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html)

/// q_sizef_new3 constructs a new QSizeF object.
///
QSizeF* q_sizef_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html)

/// q_sizef_new4 constructs a new QSizeF object.
///
/// @param sz QSize*
///
QSizeF* q_sizef_new4(const void* sz);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html)

/// q_sizef_new5 constructs a new QSizeF object.
///
/// @param w double
/// @param h double
///
QSizeF* q_sizef_new5(double w, double h);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html)

/// q_sizef_new6 constructs a new QSizeF object.
///
/// @param param1 QSizeF*
///
QSizeF* q_sizef_new6(const void* param1);

/// q_sizef_copy_assign shallow copies `other` into `self`.
///
/// @param self QSizeF*
/// @param other QSizeF*
///
void q_sizef_copy_assign(void* self, void* other);

/// q_sizef_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QSizeF*
/// @param other QSizeF*
///
void q_sizef_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#isNull)
///
/// @param self const QSizeF*
///
bool q_sizef_is_null(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#isEmpty)
///
/// @param self const QSizeF*
///
bool q_sizef_is_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#isValid)
///
/// @param self const QSizeF*
///
bool q_sizef_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#width)
///
/// @param self const QSizeF*
///
double q_sizef_width(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#height)
///
/// @param self const QSizeF*
///
double q_sizef_height(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#setWidth)
///
/// @param self QSizeF*
/// @param w double
///
void q_sizef_set_width(void* self, double w);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#setHeight)
///
/// @param self QSizeF*
/// @param h double
///
void q_sizef_set_height(void* self, double h);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#transpose)
///
/// @param self QSizeF*
///
void q_sizef_transpose(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#transposed)
///
/// @param self const QSizeF*
///
QSizeF* q_sizef_transposed(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#scale)
///
/// @param self QSizeF*
/// @param w double
/// @param h double
/// @param mode enum Qt__AspectRatioMode
///
void q_sizef_scale(void* self, double w, double h, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#scale)
///
/// @param self QSizeF*
/// @param s QSizeF*
/// @param mode enum Qt__AspectRatioMode
///
void q_sizef_scale2(void* self, const void* s, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#scaled)
///
/// @param self const QSizeF*
/// @param w double
/// @param h double
/// @param mode enum Qt__AspectRatioMode
///
QSizeF* q_sizef_scaled(const void* self, double w, double h, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#scaled)
///
/// @param self const QSizeF*
/// @param s QSizeF*
/// @param mode enum Qt__AspectRatioMode
///
QSizeF* q_sizef_scaled2(const void* self, const void* s, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#expandedTo)
///
/// @param self const QSizeF*
/// @param param1 QSizeF*
///
QSizeF* q_sizef_expanded_to(const void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#boundedTo)
///
/// @param self const QSizeF*
/// @param param1 QSizeF*
///
QSizeF* q_sizef_bounded_to(const void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#grownBy)
///
/// @param self const QSizeF*
/// @param m QMarginsF*
///
QSizeF* q_sizef_grown_by(const void* self, void* m);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#shrunkBy)
///
/// @param self const QSizeF*
/// @param m QMarginsF*
///
QSizeF* q_sizef_shrunk_by(const void* self, void* m);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#rwidth)
///
/// @param self QSizeF*
///
double* q_sizef_rwidth(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#rheight)
///
/// @param self QSizeF*
///
double* q_sizef_rheight(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#operator-2b-eq)
///
/// @param self QSizeF*
/// @param param1 QSizeF*
///
QSizeF* q_sizef_operator_plus_assign(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#operator--eq)
///
/// @param self QSizeF*
/// @param param1 QSizeF*
///
QSizeF* q_sizef_operator_minus_assign(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#operator-2a-eq)
///
/// @param self QSizeF*
/// @param c double
///
QSizeF* q_sizef_operator_multiply_assign(void* self, double c);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#operator-2f-eq)
///
/// @param self QSizeF*
/// @param c double
///
QSizeF* q_sizef_operator_divide_assign(void* self, double c);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#toSize)
///
/// @param self const QSizeF*
///
QSize* q_sizef_to_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#operator-eq)
///
/// @param self QSizeF*
/// @param param1 QSizeF*
///
void q_sizef_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#dtor.QSizeF)
///
/// Delete this object from C++ memory.
///
/// @param self QSizeF*
///
void q_sizef_delete(void* self);

#endif
