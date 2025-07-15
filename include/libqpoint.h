#pragma once
#ifndef SRCQT6C_LIBQPOINT_H
#define SRCQT6C_LIBQPOINT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qpoint.html

/// q_point_new constructs a new QPoint object.
///
/// ``` QPoint* other ```
QPoint* q_point_new(void* other);

/// q_point_new2 constructs a new QPoint object and invalidates the source QPoint object.
///
/// ``` QPoint* other ```
QPoint* q_point_new2(void* other);

/// q_point_new3 constructs a new QPoint object.
///
///
QPoint* q_point_new3();

/// q_point_new4 constructs a new QPoint object.
///
/// ``` int xpos, int ypos ```
QPoint* q_point_new4(int xpos, int ypos);

/// q_point_new5 constructs a new QPoint object.
///
/// ``` QPoint* param1 ```
QPoint* q_point_new5(void* param1);

/// q_point_copy_assign shallow copies `other` into `self`.
///
/// ``` QPoint* self, QPoint* other ```
void q_point_copy_assign(void* self, void* other);

/// q_point_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QPoint* self, QPoint* other ```
void q_point_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#isNull)
///
/// ``` QPoint* self ```
bool q_point_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#x)
///
/// ``` QPoint* self ```
int32_t q_point_x(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#y)
///
/// ``` QPoint* self ```
int32_t q_point_y(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#setX)
///
/// ``` QPoint* self, int x ```
void q_point_set_x(void* self, int x);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#setY)
///
/// ``` QPoint* self, int y ```
void q_point_set_y(void* self, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#manhattanLength)
///
/// ``` QPoint* self ```
int32_t q_point_manhattan_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#transposed)
///
/// ``` QPoint* self ```
QPoint* q_point_transposed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#operator+=)
///
/// ``` QPoint* self, QPoint* p ```
QPoint* q_point_operator_plus_assign(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#operator-=)
///
/// ``` QPoint* self, QPoint* p ```
QPoint* q_point_operator_minus_assign(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#operator*=)
///
/// ``` QPoint* self, float factor ```
QPoint* q_point_operator_multiply_assign(void* self, float factor);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#operator*=)
///
/// ``` QPoint* self, double factor ```
QPoint* q_point_operator_multiply_assign2(void* self, double factor);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#operator*=)
///
/// ``` QPoint* self, int factor ```
QPoint* q_point_operator_multiply_assign3(void* self, int factor);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#operator/=)
///
/// ``` QPoint* self, double divisor ```
QPoint* q_point_operator_divide_assign(void* self, double divisor);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#dotProduct)
///
/// ``` QPoint* p1, QPoint* p2 ```
int32_t q_point_dot_product(void* p1, void* p2);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#toPointF)
///
/// ``` QPoint* self ```
QPointF* q_point_to_point_f(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpoint.html#dtor.QPoint)
///
/// Delete this object from C++ memory.
///
/// ``` QPoint* self ```
void q_point_delete(void* self);

/// https://doc.qt.io/qt-6/qpointf.html

/// q_pointf_new constructs a new QPointF object.
///
/// ``` QPointF* other ```
QPointF* q_pointf_new(void* other);

/// q_pointf_new2 constructs a new QPointF object and invalidates the source QPointF object.
///
/// ``` QPointF* other ```
QPointF* q_pointf_new2(void* other);

/// q_pointf_new3 constructs a new QPointF object.
///
///
QPointF* q_pointf_new3();

/// q_pointf_new4 constructs a new QPointF object.
///
/// ``` QPoint* p ```
QPointF* q_pointf_new4(void* p);

/// q_pointf_new5 constructs a new QPointF object.
///
/// ``` double xpos, double ypos ```
QPointF* q_pointf_new5(double xpos, double ypos);

/// q_pointf_new6 constructs a new QPointF object.
///
/// ``` QPointF* param1 ```
QPointF* q_pointf_new6(void* param1);

/// q_pointf_copy_assign shallow copies `other` into `self`.
///
/// ``` QPointF* self, QPointF* other ```
void q_pointf_copy_assign(void* self, void* other);

/// q_pointf_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QPointF* self, QPointF* other ```
void q_pointf_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#manhattanLength)
///
/// ``` QPointF* self ```
double q_pointf_manhattan_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#isNull)
///
/// ``` QPointF* self ```
bool q_pointf_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#x)
///
/// ``` QPointF* self ```
double q_pointf_x(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#y)
///
/// ``` QPointF* self ```
double q_pointf_y(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#setX)
///
/// ``` QPointF* self, double x ```
void q_pointf_set_x(void* self, double x);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#setY)
///
/// ``` QPointF* self, double y ```
void q_pointf_set_y(void* self, double y);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#transposed)
///
/// ``` QPointF* self ```
QPointF* q_pointf_transposed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#operator+=)
///
/// ``` QPointF* self, QPointF* p ```
QPointF* q_pointf_operator_plus_assign(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#operator-=)
///
/// ``` QPointF* self, QPointF* p ```
QPointF* q_pointf_operator_minus_assign(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#operator*=)
///
/// ``` QPointF* self, double c ```
QPointF* q_pointf_operator_multiply_assign(void* self, double c);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#operator/=)
///
/// ``` QPointF* self, double c ```
QPointF* q_pointf_operator_divide_assign(void* self, double c);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#dotProduct)
///
/// ``` QPointF* p1, QPointF* p2 ```
double q_pointf_dot_product(void* p1, void* p2);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#toPoint)
///
/// ``` QPointF* self ```
QPoint* q_pointf_to_point(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpointf.html#dtor.QPointF)
///
/// Delete this object from C++ memory.
///
/// ``` QPointF* self ```
void q_pointf_delete(void* self);

#endif
