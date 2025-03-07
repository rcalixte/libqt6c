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

QLine* q_line_new(void* other);
QLine* q_line_new2(void* other);
QLine* q_line_new3();
QLine* q_line_new4(void* pt1, void* pt2);
QLine* q_line_new5(int x1, int y1, int x2, int y2);
QLine* q_line_new6(void* param1);
void q_line_copy_assign(void* self, void* other);
void q_line_move_assign(void* self, void* other);
bool q_line_is_null(void* self);
QPoint* q_line_p1(void* self);
QPoint* q_line_p2(void* self);
int32_t q_line_x1(void* self);
int32_t q_line_y1(void* self);
int32_t q_line_x2(void* self);
int32_t q_line_y2(void* self);
int32_t q_line_dx(void* self);
int32_t q_line_dy(void* self);
void q_line_translate(void* self, void* p);
void q_line_translate2(void* self, int dx, int dy);
QLine* q_line_translated(void* self, void* p);
QLine* q_line_translated2(void* self, int dx, int dy);
QPoint* q_line_center(void* self);
void q_line_set_p1(void* self, void* p1);
void q_line_set_p2(void* self, void* p2);
void q_line_set_points(void* self, void* p1, void* p2);
void q_line_set_line(void* self, int x1, int y1, int x2, int y2);
bool q_line_operator_equal(void* self, void* d);
bool q_line_operator_not_equal(void* self, void* d);
QLineF* q_line_to_line_f(void* self);
void q_line_delete(void* self);

QLineF* q_linef_new(void* other);
QLineF* q_linef_new2(void* other);
QLineF* q_linef_new3();
QLineF* q_linef_new4(void* pt1, void* pt2);
QLineF* q_linef_new5(double x1, double y1, double x2, double y2);
QLineF* q_linef_new6(void* line);
QLineF* q_linef_new7(void* param1);
void q_linef_copy_assign(void* self, void* other);
void q_linef_move_assign(void* self, void* other);
QLineF* q_linef_from_polar(double length, double angle);
bool q_linef_is_null(void* self);
QPointF* q_linef_p1(void* self);
QPointF* q_linef_p2(void* self);
double q_linef_x1(void* self);
double q_linef_y1(void* self);
double q_linef_x2(void* self);
double q_linef_y2(void* self);
double q_linef_dx(void* self);
double q_linef_dy(void* self);
double q_linef_length(void* self);
void q_linef_set_length(void* self, double lenVal);
double q_linef_angle(void* self);
void q_linef_set_angle(void* self, double angle);
double q_linef_angle_to(void* self, void* l);
QLineF* q_linef_unit_vector(void* self);
QLineF* q_linef_normal_vector(void* self);
int64_t q_linef_intersects(void* self, void* l);
QPointF* q_linef_point_at(void* self, double t);
void q_linef_translate(void* self, void* p);
void q_linef_translate2(void* self, double dx, double dy);
QLineF* q_linef_translated(void* self, void* p);
QLineF* q_linef_translated2(void* self, double dx, double dy);
QPointF* q_linef_center(void* self);
void q_linef_set_p1(void* self, void* p1);
void q_linef_set_p2(void* self, void* p2);
void q_linef_set_points(void* self, void* p1, void* p2);
void q_linef_set_line(void* self, double x1, double y1, double x2, double y2);
bool q_linef_operator_equal(void* self, void* d);
bool q_linef_operator_not_equal(void* self, void* d);
QLine* q_linef_to_line(void* self);
int64_t q_linef_intersects2(void* self, void* l, void* intersectionPoint);
void q_linef_delete(void* self);

/// https://doc.qt.io/qt-6/qline.html#types

typedef enum {
    QLINEF_INTERSECTIONTYPE_NOINTERSECTION = 0,
    QLINEF_INTERSECTIONTYPE_BOUNDEDINTERSECTION = 1,
    QLINEF_INTERSECTIONTYPE_UNBOUNDEDINTERSECTION = 2
} QLineF__IntersectionType;

#endif
