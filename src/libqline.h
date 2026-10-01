#pragma once
#ifndef LIBQLINE_H
#define LIBQLINE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qline.html)

/// q_line_new constructs a new QLine object.
///
/// @param other QLine*
///
QLine* q_line_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qline.html)

/// q_line_new2 constructs a new QLine object and invalidates the source QLine object.
///
/// @param other QLine*
///
QLine* q_line_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qline.html)

/// q_line_new3 constructs a new QLine object.
///
QLine* q_line_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qline.html)

/// q_line_new4 constructs a new QLine object.
///
/// @param pt1 QPoint*
/// @param pt2 QPoint*
///
QLine* q_line_new4(const void* pt1, const void* pt2);

/// [Upstream resources](https://doc.qt.io/qt-6/qline.html)

/// q_line_new5 constructs a new QLine object.
///
/// @param x1 int
/// @param y1 int
/// @param x2 int
/// @param y2 int
///
QLine* q_line_new5(int x1, int y1, int x2, int y2);

/// [Upstream resources](https://doc.qt.io/qt-6/qline.html)

/// q_line_new6 constructs a new QLine object.
///
/// @param param1 QLine*
///
QLine* q_line_new6(const void* param1);

/// q_line_copy_assign shallow copies `other` into `self`.
///
/// @param self QLine*
/// @param other QLine*
///
void q_line_copy_assign(void* self, void* other);

/// q_line_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QLine*
/// @param other QLine*
///
void q_line_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qline.html#isNull)
///
/// @param self const QLine*
///
bool q_line_is_null(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qline.html#p1)
///
/// @param self const QLine*
///
QPoint* q_line_p1(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qline.html#p2)
///
/// @param self const QLine*
///
QPoint* q_line_p2(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qline.html#x1)
///
/// @param self const QLine*
///
int32_t q_line_x1(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qline.html#y1)
///
/// @param self const QLine*
///
int32_t q_line_y1(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qline.html#x2)
///
/// @param self const QLine*
///
int32_t q_line_x2(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qline.html#y2)
///
/// @param self const QLine*
///
int32_t q_line_y2(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qline.html#dx)
///
/// @param self const QLine*
///
int32_t q_line_dx(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qline.html#dy)
///
/// @param self const QLine*
///
int32_t q_line_dy(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qline.html#translate)
///
/// @param self QLine*
/// @param p QPoint*
///
void q_line_translate(void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qline.html#translate)
///
/// @param self QLine*
/// @param dx int
/// @param dy int
///
void q_line_translate2(void* self, int dx, int dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qline.html#translated)
///
/// @param self const QLine*
/// @param p QPoint*
///
QLine* q_line_translated(const void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qline.html#translated)
///
/// @param self const QLine*
/// @param dx int
/// @param dy int
///
QLine* q_line_translated2(const void* self, int dx, int dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qline.html#center)
///
/// @param self const QLine*
///
QPoint* q_line_center(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qline.html#setP1)
///
/// @param self QLine*
/// @param p1 QPoint*
///
void q_line_set_p1(void* self, const void* p1);

/// [Upstream resources](https://doc.qt.io/qt-6/qline.html#setP2)
///
/// @param self QLine*
/// @param p2 QPoint*
///
void q_line_set_p2(void* self, const void* p2);

/// [Upstream resources](https://doc.qt.io/qt-6/qline.html#setPoints)
///
/// @param self QLine*
/// @param p1 QPoint*
/// @param p2 QPoint*
///
void q_line_set_points(void* self, const void* p1, const void* p2);

/// [Upstream resources](https://doc.qt.io/qt-6/qline.html#setLine)
///
/// @param self QLine*
/// @param x1 int
/// @param y1 int
/// @param x2 int
/// @param y2 int
///
void q_line_set_line(void* self, int x1, int y1, int x2, int y2);

/// [Upstream resources](https://doc.qt.io/qt-6/qline.html#toLineF)
///
/// @param self const QLine*
///
QLineF* q_line_to_line_f(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qline.html#dtor.QLine)
///
/// Delete this object from C++ memory.
///
/// @param self QLine*
///
void q_line_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html)

/// q_linef_new constructs a new QLineF object.
///
/// @param other QLineF*
///
QLineF* q_linef_new(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html)

/// q_linef_new2 constructs a new QLineF object and invalidates the source QLineF object.
///
/// @param other QLineF*
///
QLineF* q_linef_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html)

/// q_linef_new3 constructs a new QLineF object.
///
QLineF* q_linef_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html)

/// q_linef_new4 constructs a new QLineF object.
///
/// @param pt1 QPointF*
/// @param pt2 QPointF*
///
QLineF* q_linef_new4(const void* pt1, const void* pt2);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html)

/// q_linef_new5 constructs a new QLineF object.
///
/// @param x1 double
/// @param y1 double
/// @param x2 double
/// @param y2 double
///
QLineF* q_linef_new5(double x1, double y1, double x2, double y2);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html)

/// q_linef_new6 constructs a new QLineF object.
///
/// @param line QLine*
///
QLineF* q_linef_new6(const void* line);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html)

/// q_linef_new7 constructs a new QLineF object.
///
/// @param param1 QLineF*
///
QLineF* q_linef_new7(const void* param1);

/// q_linef_copy_assign shallow copies `other` into `self`.
///
/// @param self QLineF*
/// @param other QLineF*
///
void q_linef_copy_assign(void* self, void* other);

/// q_linef_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QLineF*
/// @param other QLineF*
///
void q_linef_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#fromPolar)
///
/// @param length double
/// @param angle double
///
QLineF* q_linef_from_polar(double length, double angle);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#isNull)
///
/// @param self const QLineF*
///
bool q_linef_is_null(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#p1)
///
/// @param self const QLineF*
///
QPointF* q_linef_p1(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#p2)
///
/// @param self const QLineF*
///
QPointF* q_linef_p2(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#x1)
///
/// @param self const QLineF*
///
double q_linef_x1(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#y1)
///
/// @param self const QLineF*
///
double q_linef_y1(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#x2)
///
/// @param self const QLineF*
///
double q_linef_x2(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#y2)
///
/// @param self const QLineF*
///
double q_linef_y2(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#dx)
///
/// @param self const QLineF*
///
double q_linef_dx(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#dy)
///
/// @param self const QLineF*
///
double q_linef_dy(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#length)
///
/// @param self const QLineF*
///
double q_linef_length(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#setLength)
///
/// @param self QLineF*
/// @param lenVal double
///
void q_linef_set_length(void* self, double lenVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#angle)
///
/// @param self const QLineF*
///
double q_linef_angle(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#setAngle)
///
/// @param self QLineF*
/// @param angle double
///
void q_linef_set_angle(void* self, double angle);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#angleTo)
///
/// @param self const QLineF*
/// @param l QLineF*
///
double q_linef_angle_to(const void* self, const void* l);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#unitVector)
///
/// @param self const QLineF*
///
QLineF* q_linef_unit_vector(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#normalVector)
///
/// @param self const QLineF*
///
QLineF* q_linef_normal_vector(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#intersects)
///
/// @param self const QLineF*
/// @param l QLineF*
///
/// @return enum QLineF__IntersectionType
///
int32_t q_linef_intersects(const void* self, const void* l);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#pointAt)
///
/// @param self const QLineF*
/// @param t double
///
QPointF* q_linef_point_at(const void* self, double t);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#translate)
///
/// @param self QLineF*
/// @param p QPointF*
///
void q_linef_translate(void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#translate)
///
/// @param self QLineF*
/// @param dx double
/// @param dy double
///
void q_linef_translate2(void* self, double dx, double dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#translated)
///
/// @param self const QLineF*
/// @param p QPointF*
///
QLineF* q_linef_translated(const void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#translated)
///
/// @param self const QLineF*
/// @param dx double
/// @param dy double
///
QLineF* q_linef_translated2(const void* self, double dx, double dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#center)
///
/// @param self const QLineF*
///
QPointF* q_linef_center(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#setP1)
///
/// @param self QLineF*
/// @param p1 QPointF*
///
void q_linef_set_p1(void* self, const void* p1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#setP2)
///
/// @param self QLineF*
/// @param p2 QPointF*
///
void q_linef_set_p2(void* self, const void* p2);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#setPoints)
///
/// @param self QLineF*
/// @param p1 QPointF*
/// @param p2 QPointF*
///
void q_linef_set_points(void* self, const void* p1, const void* p2);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#setLine)
///
/// @param self QLineF*
/// @param x1 double
/// @param y1 double
/// @param x2 double
/// @param y2 double
///
void q_linef_set_line(void* self, double x1, double y1, double x2, double y2);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#toLine)
///
/// @param self const QLineF*
///
QLine* q_linef_to_line(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#intersects)
///
/// @param self const QLineF*
/// @param l QLineF*
/// @param intersectionPoint QPointF*
///
/// @return enum QLineF__IntersectionType
///
int32_t q_linef_intersects2(const void* self, const void* l, void* intersectionPoint);

/// [Upstream resources](https://doc.qt.io/qt-6/qlinef.html#dtor.QLineF)
///
/// Delete this object from C++ memory.
///
/// @param self QLineF*
///
void q_linef_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qline.html#public-types)

typedef enum {
    QLINEF_INTERSECTIONTYPE_NOINTERSECTION = 0,
    QLINEF_INTERSECTIONTYPE_BOUNDEDINTERSECTION = 1,
    QLINEF_INTERSECTIONTYPE_UNBOUNDEDINTERSECTION = 2
} QLineF__IntersectionType;

#endif
