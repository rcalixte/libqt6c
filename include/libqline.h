#pragma once
#ifndef SRCQT6C_LIBQLINE_H
#define SRCQT6C_LIBQLINE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqpoint.h"

/// https://doc.qt.io/qt-6/qline.html

/// q_line_new constructs a new QLine object.
///
/// ``` QLine* other ```
QLine* q_line_new(void* other);

/// q_line_new2 constructs a new QLine object and invalidates the source QLine object.
///
/// ``` QLine* other ```
QLine* q_line_new2(void* other);

/// q_line_new3 constructs a new QLine object.
///
///
QLine* q_line_new3();

/// q_line_new4 constructs a new QLine object.
///
/// ``` QPoint* pt1, QPoint* pt2 ```
QLine* q_line_new4(void* pt1, void* pt2);

/// q_line_new5 constructs a new QLine object.
///
/// ``` int x1, int y1, int x2, int y2 ```
QLine* q_line_new5(int x1, int y1, int x2, int y2);

/// q_line_new6 constructs a new QLine object.
///
/// ``` QLine* param1 ```
QLine* q_line_new6(void* param1);

/// q_line_copy_assign shallow copies `other` into `self`.
///
/// ``` QLine* self, QLine* other ```
void q_line_copy_assign(void* self, void* other);

/// q_line_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QLine* self, QLine* other ```
void q_line_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#isNull)
///
/// ``` QLine* self ```
bool q_line_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#p1)
///
/// ``` QLine* self ```
QPoint* q_line_p1(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#p2)
///
/// ``` QLine* self ```
QPoint* q_line_p2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#x1)
///
/// ``` QLine* self ```
int32_t q_line_x1(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#y1)
///
/// ``` QLine* self ```
int32_t q_line_y1(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#x2)
///
/// ``` QLine* self ```
int32_t q_line_x2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#y2)
///
/// ``` QLine* self ```
int32_t q_line_y2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#dx)
///
/// ``` QLine* self ```
int32_t q_line_dx(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#dy)
///
/// ``` QLine* self ```
int32_t q_line_dy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#translate)
///
/// ``` QLine* self, QPoint* p ```
void q_line_translate(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#translate)
///
/// ``` QLine* self, int dx, int dy ```
void q_line_translate2(void* self, int dx, int dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#translated)
///
/// ``` QLine* self, QPoint* p ```
QLine* q_line_translated(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#translated)
///
/// ``` QLine* self, int dx, int dy ```
QLine* q_line_translated2(void* self, int dx, int dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#center)
///
/// ``` QLine* self ```
QPoint* q_line_center(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#setP1)
///
/// ``` QLine* self, QPoint* p1 ```
void q_line_set_p1(void* self, void* p1);

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#setP2)
///
/// ``` QLine* self, QPoint* p2 ```
void q_line_set_p2(void* self, void* p2);

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#setPoints)
///
/// ``` QLine* self, QPoint* p1, QPoint* p2 ```
void q_line_set_points(void* self, void* p1, void* p2);

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#setLine)
///
/// ``` QLine* self, int x1, int y1, int x2, int y2 ```
void q_line_set_line(void* self, int x1, int y1, int x2, int y2);

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#operator==)
///
/// ``` QLine* self, QLine* d ```
bool q_line_operator_equal(void* self, void* d);

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#operator!=)
///
/// ``` QLine* self, QLine* d ```
bool q_line_operator_not_equal(void* self, void* d);

/// [Qt documentation](https://doc.qt.io/qt-6/qline.html#toLineF)
///
/// ``` QLine* self ```
QLineF* q_line_to_line_f(void* self);

/// Delete this object from C++ memory.
///
/// ``` QLine* self ```
void q_line_delete(void* self);

/// https://doc.qt.io/qt-6/qlinef.html

/// q_linef_new constructs a new QLineF object.
///
/// ``` QLineF* other ```
QLineF* q_linef_new(void* other);

/// q_linef_new2 constructs a new QLineF object and invalidates the source QLineF object.
///
/// ``` QLineF* other ```
QLineF* q_linef_new2(void* other);

/// q_linef_new3 constructs a new QLineF object.
///
///
QLineF* q_linef_new3();

/// q_linef_new4 constructs a new QLineF object.
///
/// ``` QPointF* pt1, QPointF* pt2 ```
QLineF* q_linef_new4(void* pt1, void* pt2);

/// q_linef_new5 constructs a new QLineF object.
///
/// ``` double x1, double y1, double x2, double y2 ```
QLineF* q_linef_new5(double x1, double y1, double x2, double y2);

/// q_linef_new6 constructs a new QLineF object.
///
/// ``` QLine* line ```
QLineF* q_linef_new6(void* line);

/// q_linef_new7 constructs a new QLineF object.
///
/// ``` QLineF* param1 ```
QLineF* q_linef_new7(void* param1);

/// q_linef_copy_assign shallow copies `other` into `self`.
///
/// ``` QLineF* self, QLineF* other ```
void q_linef_copy_assign(void* self, void* other);

/// q_linef_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QLineF* self, QLineF* other ```
void q_linef_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#fromPolar)
///
/// ``` double length, double angle ```
QLineF* q_linef_from_polar(double length, double angle);

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#isNull)
///
/// ``` QLineF* self ```
bool q_linef_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#p1)
///
/// ``` QLineF* self ```
QPointF* q_linef_p1(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#p2)
///
/// ``` QLineF* self ```
QPointF* q_linef_p2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#x1)
///
/// ``` QLineF* self ```
double q_linef_x1(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#y1)
///
/// ``` QLineF* self ```
double q_linef_y1(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#x2)
///
/// ``` QLineF* self ```
double q_linef_x2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#y2)
///
/// ``` QLineF* self ```
double q_linef_y2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#dx)
///
/// ``` QLineF* self ```
double q_linef_dx(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#dy)
///
/// ``` QLineF* self ```
double q_linef_dy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#length)
///
/// ``` QLineF* self ```
double q_linef_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#setLength)
///
/// ``` QLineF* self, double lenVal ```
void q_linef_set_length(void* self, double lenVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#angle)
///
/// ``` QLineF* self ```
double q_linef_angle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#setAngle)
///
/// ``` QLineF* self, double angle ```
void q_linef_set_angle(void* self, double angle);

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#angleTo)
///
/// ``` QLineF* self, QLineF* l ```
double q_linef_angle_to(void* self, void* l);

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#unitVector)
///
/// ``` QLineF* self ```
QLineF* q_linef_unit_vector(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#normalVector)
///
/// ``` QLineF* self ```
QLineF* q_linef_normal_vector(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#intersects)
///
/// ``` QLineF* self, QLineF* l ```
int64_t q_linef_intersects(void* self, void* l);

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#pointAt)
///
/// ``` QLineF* self, double t ```
QPointF* q_linef_point_at(void* self, double t);

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#translate)
///
/// ``` QLineF* self, QPointF* p ```
void q_linef_translate(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#translate)
///
/// ``` QLineF* self, double dx, double dy ```
void q_linef_translate2(void* self, double dx, double dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#translated)
///
/// ``` QLineF* self, QPointF* p ```
QLineF* q_linef_translated(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#translated)
///
/// ``` QLineF* self, double dx, double dy ```
QLineF* q_linef_translated2(void* self, double dx, double dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#center)
///
/// ``` QLineF* self ```
QPointF* q_linef_center(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#setP1)
///
/// ``` QLineF* self, QPointF* p1 ```
void q_linef_set_p1(void* self, void* p1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#setP2)
///
/// ``` QLineF* self, QPointF* p2 ```
void q_linef_set_p2(void* self, void* p2);

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#setPoints)
///
/// ``` QLineF* self, QPointF* p1, QPointF* p2 ```
void q_linef_set_points(void* self, void* p1, void* p2);

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#setLine)
///
/// ``` QLineF* self, double x1, double y1, double x2, double y2 ```
void q_linef_set_line(void* self, double x1, double y1, double x2, double y2);

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#operator==)
///
/// ``` QLineF* self, QLineF* d ```
bool q_linef_operator_equal(void* self, void* d);

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#operator!=)
///
/// ``` QLineF* self, QLineF* d ```
bool q_linef_operator_not_equal(void* self, void* d);

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#toLine)
///
/// ``` QLineF* self ```
QLine* q_linef_to_line(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlinef.html#intersects)
///
/// ``` QLineF* self, QLineF* l, QPointF* intersectionPoint ```
int64_t q_linef_intersects2(void* self, void* l, void* intersectionPoint);

/// Delete this object from C++ memory.
///
/// ``` QLineF* self ```
void q_linef_delete(void* self);

/// https://doc.qt.io/qt-6/qline.html#types

typedef enum {
    QLINEF_INTERSECTIONTYPE_NOINTERSECTION = 0,
    QLINEF_INTERSECTIONTYPE_BOUNDEDINTERSECTION = 1,
    QLINEF_INTERSECTIONTYPE_UNBOUNDEDINTERSECTION = 2
} QLineF__IntersectionType;

#endif
