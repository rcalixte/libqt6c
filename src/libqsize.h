#pragma once
#ifndef SRC_QT6C_LIBQSIZE_H
#define SRC_QT6C_LIBQSIZE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html)

/// q_size_new constructs a new QSize object.
///
/// @param other QSize*
///
QSize* q_size_new(void* other);

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
QSize* q_size_new5(void* param1);

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
/// @param self QSize*
///
bool q_size_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#isEmpty)
///
/// @param self QSize*
///
bool q_size_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#isValid)
///
/// @param self QSize*
///
bool q_size_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#width)
///
/// @param self QSize*
///
int32_t q_size_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#height)
///
/// @param self QSize*
///
int32_t q_size_height(void* self);

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
/// @param self QSize*
///
QSize* q_size_transposed(void* self);

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
void q_size_scale2(void* self, void* s, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#scaled)
///
/// @param self QSize*
/// @param w int
/// @param h int
/// @param mode enum Qt__AspectRatioMode
///
QSize* q_size_scaled(void* self, int w, int h, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#scaled)
///
/// @param self QSize*
/// @param s QSize*
/// @param mode enum Qt__AspectRatioMode
///
QSize* q_size_scaled2(void* self, void* s, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#expandedTo)
///
/// @param self QSize*
/// @param param1 QSize*
///
QSize* q_size_expanded_to(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#boundedTo)
///
/// @param self QSize*
/// @param param1 QSize*
///
QSize* q_size_bounded_to(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#grownBy)
///
/// @param self QSize*
/// @param m QMargins*
///
QSize* q_size_grown_by(void* self, void* m);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#shrunkBy)
///
/// @param self QSize*
/// @param m QMargins*
///
QSize* q_size_shrunk_by(void* self, void* m);

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
QSize* q_size_operator_plus_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#operator--eq)
///
/// @param self QSize*
/// @param param1 QSize*
///
QSize* q_size_operator_minus_assign(void* self, void* param1);

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
/// @param self QSize*
///
QSizeF* q_size_to_size_f(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsize.html#dtor.QSize)
///
/// Delete this object from C++ memory.
///
/// @param self QSize*
///
void q_size_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html)

/// q_sizef_new constructs a new QSizeF object.
///
/// @param other QSizeF*
///
QSizeF* q_sizef_new(void* other);

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
QSizeF* q_sizef_new4(void* sz);

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
QSizeF* q_sizef_new6(void* param1);

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
/// @param self QSizeF*
///
bool q_sizef_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#isEmpty)
///
/// @param self QSizeF*
///
bool q_sizef_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#isValid)
///
/// @param self QSizeF*
///
bool q_sizef_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#width)
///
/// @param self QSizeF*
///
double q_sizef_width(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#height)
///
/// @param self QSizeF*
///
double q_sizef_height(void* self);

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
/// @param self QSizeF*
///
QSizeF* q_sizef_transposed(void* self);

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
void q_sizef_scale2(void* self, void* s, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#scaled)
///
/// @param self QSizeF*
/// @param w double
/// @param h double
/// @param mode enum Qt__AspectRatioMode
///
QSizeF* q_sizef_scaled(void* self, double w, double h, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#scaled)
///
/// @param self QSizeF*
/// @param s QSizeF*
/// @param mode enum Qt__AspectRatioMode
///
QSizeF* q_sizef_scaled2(void* self, void* s, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#expandedTo)
///
/// @param self QSizeF*
/// @param param1 QSizeF*
///
QSizeF* q_sizef_expanded_to(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#boundedTo)
///
/// @param self QSizeF*
/// @param param1 QSizeF*
///
QSizeF* q_sizef_bounded_to(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#grownBy)
///
/// @param self QSizeF*
/// @param m QMarginsF*
///
QSizeF* q_sizef_grown_by(void* self, void* m);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#shrunkBy)
///
/// @param self QSizeF*
/// @param m QMarginsF*
///
QSizeF* q_sizef_shrunk_by(void* self, void* m);

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
QSizeF* q_sizef_operator_plus_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#operator--eq)
///
/// @param self QSizeF*
/// @param param1 QSizeF*
///
QSizeF* q_sizef_operator_minus_assign(void* self, void* param1);

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
/// @param self QSizeF*
///
QSize* q_sizef_to_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsizef.html#dtor.QSizeF)
///
/// Delete this object from C++ memory.
///
/// @param self QSizeF*
///
void q_sizef_delete(void* self);

#endif
