#include "libqpoint.hpp"
#include "libqline.hpp"
#include "libqline.h"

QLine* q_line_new(void* other) {
    return QLine_new((QLine*)other);
}

QLine* q_line_new2(void* other) {
    return QLine_new2((QLine*)other);
}

QLine* q_line_new3() {
    return QLine_new3();
}

QLine* q_line_new4(void* pt1, void* pt2) {
    return QLine_new4((QPoint*)pt1, (QPoint*)pt2);
}

QLine* q_line_new5(int x1, int y1, int x2, int y2) {
    return QLine_new5(x1, y1, x2, y2);
}

QLine* q_line_new6(void* param1) {
    return QLine_new6((QLine*)param1);
}

void q_line_copy_assign(void* self, void* other) {
    QLine_CopyAssign((QLine*)self, (QLine*)other);
}

void q_line_move_assign(void* self, void* other) {
    QLine_MoveAssign((QLine*)self, (QLine*)other);
}

bool q_line_is_null(void* self) {
    return QLine_IsNull((QLine*)self);
}

QPoint* q_line_p1(void* self) {
    return QLine_P1((QLine*)self);
}

QPoint* q_line_p2(void* self) {
    return QLine_P2((QLine*)self);
}

int32_t q_line_x1(void* self) {
    return QLine_X1((QLine*)self);
}

int32_t q_line_y1(void* self) {
    return QLine_Y1((QLine*)self);
}

int32_t q_line_x2(void* self) {
    return QLine_X2((QLine*)self);
}

int32_t q_line_y2(void* self) {
    return QLine_Y2((QLine*)self);
}

int32_t q_line_dx(void* self) {
    return QLine_Dx((QLine*)self);
}

int32_t q_line_dy(void* self) {
    return QLine_Dy((QLine*)self);
}

void q_line_translate(void* self, void* p) {
    QLine_Translate((QLine*)self, (QPoint*)p);
}

void q_line_translate2(void* self, int dx, int dy) {
    QLine_Translate2((QLine*)self, dx, dy);
}

QLine* q_line_translated(void* self, void* p) {
    return QLine_Translated((QLine*)self, (QPoint*)p);
}

QLine* q_line_translated2(void* self, int dx, int dy) {
    return QLine_Translated2((QLine*)self, dx, dy);
}

QPoint* q_line_center(void* self) {
    return QLine_Center((QLine*)self);
}

void q_line_set_p1(void* self, void* p1) {
    QLine_SetP1((QLine*)self, (QPoint*)p1);
}

void q_line_set_p2(void* self, void* p2) {
    QLine_SetP2((QLine*)self, (QPoint*)p2);
}

void q_line_set_points(void* self, void* p1, void* p2) {
    QLine_SetPoints((QLine*)self, (QPoint*)p1, (QPoint*)p2);
}

void q_line_set_line(void* self, int x1, int y1, int x2, int y2) {
    QLine_SetLine((QLine*)self, x1, y1, x2, y2);
}

QLineF* q_line_to_line_f(void* self) {
    return QLine_ToLineF((QLine*)self);
}

void q_line_delete(void* self) {
    QLine_Delete((QLine*)(self));
}

QLineF* q_linef_new(void* other) {
    return QLineF_new((QLineF*)other);
}

QLineF* q_linef_new2(void* other) {
    return QLineF_new2((QLineF*)other);
}

QLineF* q_linef_new3() {
    return QLineF_new3();
}

QLineF* q_linef_new4(void* pt1, void* pt2) {
    return QLineF_new4((QPointF*)pt1, (QPointF*)pt2);
}

QLineF* q_linef_new5(double x1, double y1, double x2, double y2) {
    return QLineF_new5(x1, y1, x2, y2);
}

QLineF* q_linef_new6(void* line) {
    return QLineF_new6((QLine*)line);
}

QLineF* q_linef_new7(void* param1) {
    return QLineF_new7((QLineF*)param1);
}

void q_linef_copy_assign(void* self, void* other) {
    QLineF_CopyAssign((QLineF*)self, (QLineF*)other);
}

void q_linef_move_assign(void* self, void* other) {
    QLineF_MoveAssign((QLineF*)self, (QLineF*)other);
}

QLineF* q_linef_from_polar(double length, double angle) {
    return QLineF_FromPolar(length, angle);
}

bool q_linef_is_null(void* self) {
    return QLineF_IsNull((QLineF*)self);
}

QPointF* q_linef_p1(void* self) {
    return QLineF_P1((QLineF*)self);
}

QPointF* q_linef_p2(void* self) {
    return QLineF_P2((QLineF*)self);
}

double q_linef_x1(void* self) {
    return QLineF_X1((QLineF*)self);
}

double q_linef_y1(void* self) {
    return QLineF_Y1((QLineF*)self);
}

double q_linef_x2(void* self) {
    return QLineF_X2((QLineF*)self);
}

double q_linef_y2(void* self) {
    return QLineF_Y2((QLineF*)self);
}

double q_linef_dx(void* self) {
    return QLineF_Dx((QLineF*)self);
}

double q_linef_dy(void* self) {
    return QLineF_Dy((QLineF*)self);
}

double q_linef_length(void* self) {
    return QLineF_Length((QLineF*)self);
}

void q_linef_set_length(void* self, double lenVal) {
    QLineF_SetLength((QLineF*)self, lenVal);
}

double q_linef_angle(void* self) {
    return QLineF_Angle((QLineF*)self);
}

void q_linef_set_angle(void* self, double angle) {
    QLineF_SetAngle((QLineF*)self, angle);
}

double q_linef_angle_to(void* self, void* l) {
    return QLineF_AngleTo((QLineF*)self, (QLineF*)l);
}

QLineF* q_linef_unit_vector(void* self) {
    return QLineF_UnitVector((QLineF*)self);
}

QLineF* q_linef_normal_vector(void* self) {
    return QLineF_NormalVector((QLineF*)self);
}

int64_t q_linef_intersects(void* self, void* l) {
    return QLineF_Intersects((QLineF*)self, (QLineF*)l);
}

QPointF* q_linef_point_at(void* self, double t) {
    return QLineF_PointAt((QLineF*)self, t);
}

void q_linef_translate(void* self, void* p) {
    QLineF_Translate((QLineF*)self, (QPointF*)p);
}

void q_linef_translate2(void* self, double dx, double dy) {
    QLineF_Translate2((QLineF*)self, dx, dy);
}

QLineF* q_linef_translated(void* self, void* p) {
    return QLineF_Translated((QLineF*)self, (QPointF*)p);
}

QLineF* q_linef_translated2(void* self, double dx, double dy) {
    return QLineF_Translated2((QLineF*)self, dx, dy);
}

QPointF* q_linef_center(void* self) {
    return QLineF_Center((QLineF*)self);
}

void q_linef_set_p1(void* self, void* p1) {
    QLineF_SetP1((QLineF*)self, (QPointF*)p1);
}

void q_linef_set_p2(void* self, void* p2) {
    QLineF_SetP2((QLineF*)self, (QPointF*)p2);
}

void q_linef_set_points(void* self, void* p1, void* p2) {
    QLineF_SetPoints((QLineF*)self, (QPointF*)p1, (QPointF*)p2);
}

void q_linef_set_line(void* self, double x1, double y1, double x2, double y2) {
    QLineF_SetLine((QLineF*)self, x1, y1, x2, y2);
}

QLine* q_linef_to_line(void* self) {
    return QLineF_ToLine((QLineF*)self);
}

int64_t q_linef_intersects2(void* self, void* l, void* intersectionPoint) {
    return QLineF_Intersects2((QLineF*)self, (QLineF*)l, (QPointF*)intersectionPoint);
}

void q_linef_delete(void* self) {
    QLineF_Delete((QLineF*)(self));
}
