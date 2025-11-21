#pragma once
#ifndef SRC_QT6C_LIBQPOINT_H
#define SRC_QT6C_LIBQPOINT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qpoint.html

/// q_point_new constructs a new QPoint object.
///
/// @param other QPoint*
QPoint* q_point_new(void* other);

/// q_point_new2 constructs a new QPoint object and invalidates the source QPoint object.
///
/// @param other QPoint*
QPoint* q_point_new2(void* other);

/// q_point_new3 constructs a new QPoint object.
///
QPoint* q_point_new3();

/// q_point_new4 constructs a new QPoint object.
///
/// @param xpos int
/// @param ypos int
QPoint* q_point_new4(int xpos, int ypos);

/// q_point_new5 constructs a new QPoint object.
///
/// @param param1 QPoint*
QPoint* q_point_new5(void* param1);

/// q_point_copy_assign shallow copies `other` into `self`.
///
/// @param self QPoint*
/// @param other QPoint*
void q_point_copy_assign(void* self, void* other);

/// q_point_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QPoint*
/// @param other QPoint*
void q_point_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#isNull)
///
/// @param self QPoint*
bool q_point_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#x)
///
/// @param self QPoint*
int32_t q_point_x(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#y)
///
/// @param self QPoint*
int32_t q_point_y(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#setX)
///
/// @param self QPoint*
/// @param x int
void q_point_set_x(void* self, int x);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#setY)
///
/// @param self QPoint*
/// @param y int
void q_point_set_y(void* self, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#manhattanLength)
///
/// @param self QPoint*
int32_t q_point_manhattan_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#transposed)
///
/// @param self QPoint*
QPoint* q_point_transposed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#rx)
///
/// @param self QPoint*
int* q_point_rx(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#ry)
///
/// @param self QPoint*
int* q_point_ry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#operator-2b-eq)
///
/// @param self QPoint*
/// @param p QPoint*
QPoint* q_point_operator_plus_assign(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#operator--eq)
///
/// @param self QPoint*
/// @param p QPoint*
QPoint* q_point_operator_minus_assign(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#operator-2a-eq)
///
/// @param self QPoint*
/// @param factor float
QPoint* q_point_operator_multiply_assign(void* self, float factor);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#operator-2a-eq)
///
/// @param self QPoint*
/// @param factor double
QPoint* q_point_operator_multiply_assign2(void* self, double factor);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#operator-2a-eq)
///
/// @param self QPoint*
/// @param factor int
QPoint* q_point_operator_multiply_assign3(void* self, int factor);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#operator-2f-eq)
///
/// @param self QPoint*
/// @param divisor double
QPoint* q_point_operator_divide_assign(void* self, double divisor);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#dotProduct)
///
/// @param p1 QPoint*
/// @param p2 QPoint*
int32_t q_point_dot_product(void* p1, void* p2);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#toPointF)
///
/// @param self QPoint*
QPointF* q_point_to_point_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#dtor.QPoint)
///
/// Delete this object from C++ memory.
///
/// @param self QPoint*
void q_point_delete(void* self);

/// https://doc.qt.io/qt-6/qpointf.html

/// q_pointf_new constructs a new QPointF object.
///
/// @param other QPointF*
QPointF* q_pointf_new(void* other);

/// q_pointf_new2 constructs a new QPointF object and invalidates the source QPointF object.
///
/// @param other QPointF*
QPointF* q_pointf_new2(void* other);

/// q_pointf_new3 constructs a new QPointF object.
///
QPointF* q_pointf_new3();

/// q_pointf_new4 constructs a new QPointF object.
///
/// @param p QPoint*
QPointF* q_pointf_new4(void* p);

/// q_pointf_new5 constructs a new QPointF object.
///
/// @param xpos double
/// @param ypos double
QPointF* q_pointf_new5(double xpos, double ypos);

/// q_pointf_new6 constructs a new QPointF object.
///
/// @param param1 QPointF*
QPointF* q_pointf_new6(void* param1);

/// q_pointf_copy_assign shallow copies `other` into `self`.
///
/// @param self QPointF*
/// @param other QPointF*
void q_pointf_copy_assign(void* self, void* other);

/// q_pointf_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QPointF*
/// @param other QPointF*
void q_pointf_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#manhattanLength)
///
/// @param self QPointF*
double q_pointf_manhattan_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#isNull)
///
/// @param self QPointF*
bool q_pointf_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#x)
///
/// @param self QPointF*
double q_pointf_x(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#y)
///
/// @param self QPointF*
double q_pointf_y(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#setX)
///
/// @param self QPointF*
/// @param x double
void q_pointf_set_x(void* self, double x);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#setY)
///
/// @param self QPointF*
/// @param y double
void q_pointf_set_y(void* self, double y);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#transposed)
///
/// @param self QPointF*
QPointF* q_pointf_transposed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#rx)
///
/// @param self QPointF*
double* q_pointf_rx(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#ry)
///
/// @param self QPointF*
double* q_pointf_ry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#operator-2b-eq)
///
/// @param self QPointF*
/// @param p QPointF*
QPointF* q_pointf_operator_plus_assign(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#operator--eq)
///
/// @param self QPointF*
/// @param p QPointF*
QPointF* q_pointf_operator_minus_assign(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#operator-2a-eq)
///
/// @param self QPointF*
/// @param c double
QPointF* q_pointf_operator_multiply_assign(void* self, double c);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#operator-2f-eq)
///
/// @param self QPointF*
/// @param c double
QPointF* q_pointf_operator_divide_assign(void* self, double c);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#dotProduct)
///
/// @param p1 QPointF*
/// @param p2 QPointF*
double q_pointf_dot_product(void* p1, void* p2);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#toPoint)
///
/// @param self QPointF*
QPoint* q_pointf_to_point(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#dtor.QPointF)
///
/// Delete this object from C++ memory.
///
/// @param self QPointF*
void q_pointf_delete(void* self);

#endif
