#include "libqfont.hpp"
#include "libqpen.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqpainterpath.hpp"
#include "libqpainterpath.h"

QPainterPath* q_painterpath_new() {
    return QPainterPath_new();
}

QPainterPath* q_painterpath_new2(void* startPoint) {
    return QPainterPath_new2((QPointF*)startPoint);
}

QPainterPath* q_painterpath_new3(void* other) {
    return QPainterPath_new3((QPainterPath*)other);
}

void q_painterpath_operator_assign(void* self, void* other) {
    QPainterPath_OperatorAssign((QPainterPath*)self, (QPainterPath*)other);
}

void q_painterpath_swap(void* self, void* other) {
    QPainterPath_Swap((QPainterPath*)self, (QPainterPath*)other);
}

void q_painterpath_clear(void* self) {
    QPainterPath_Clear((QPainterPath*)self);
}

void q_painterpath_reserve(void* self, int size) {
    QPainterPath_Reserve((QPainterPath*)self, size);
}

int32_t q_painterpath_capacity(void* self) {
    return QPainterPath_Capacity((QPainterPath*)self);
}

void q_painterpath_close_subpath(void* self) {
    QPainterPath_CloseSubpath((QPainterPath*)self);
}

void q_painterpath_move_to(void* self, void* p) {
    QPainterPath_MoveTo((QPainterPath*)self, (QPointF*)p);
}

void q_painterpath_move_to2(void* self, double x, double y) {
    QPainterPath_MoveTo2((QPainterPath*)self, x, y);
}

void q_painterpath_line_to(void* self, void* p) {
    QPainterPath_LineTo((QPainterPath*)self, (QPointF*)p);
}

void q_painterpath_line_to2(void* self, double x, double y) {
    QPainterPath_LineTo2((QPainterPath*)self, x, y);
}

void q_painterpath_arc_move_to(void* self, void* rect, double angle) {
    QPainterPath_ArcMoveTo((QPainterPath*)self, (QRectF*)rect, angle);
}

void q_painterpath_arc_move_to2(void* self, double x, double y, double w, double h, double angle) {
    QPainterPath_ArcMoveTo2((QPainterPath*)self, x, y, w, h, angle);
}

void q_painterpath_arc_to(void* self, void* rect, double startAngle, double arcLength) {
    QPainterPath_ArcTo((QPainterPath*)self, (QRectF*)rect, startAngle, arcLength);
}

void q_painterpath_arc_to2(void* self, double x, double y, double w, double h, double startAngle, double arcLength) {
    QPainterPath_ArcTo2((QPainterPath*)self, x, y, w, h, startAngle, arcLength);
}

void q_painterpath_cubic_to(void* self, void* ctrlPt1, void* ctrlPt2, void* endPt) {
    QPainterPath_CubicTo((QPainterPath*)self, (QPointF*)ctrlPt1, (QPointF*)ctrlPt2, (QPointF*)endPt);
}

void q_painterpath_cubic_to2(void* self, double ctrlPt1x, double ctrlPt1y, double ctrlPt2x, double ctrlPt2y, double endPtx, double endPty) {
    QPainterPath_CubicTo2((QPainterPath*)self, ctrlPt1x, ctrlPt1y, ctrlPt2x, ctrlPt2y, endPtx, endPty);
}

void q_painterpath_quad_to(void* self, void* ctrlPt, void* endPt) {
    QPainterPath_QuadTo((QPainterPath*)self, (QPointF*)ctrlPt, (QPointF*)endPt);
}

void q_painterpath_quad_to2(void* self, double ctrlPtx, double ctrlPty, double endPtx, double endPty) {
    QPainterPath_QuadTo2((QPainterPath*)self, ctrlPtx, ctrlPty, endPtx, endPty);
}

QPointF* q_painterpath_current_position(void* self) {
    return QPainterPath_CurrentPosition((QPainterPath*)self);
}

void q_painterpath_add_rect(void* self, void* rect) {
    QPainterPath_AddRect((QPainterPath*)self, (QRectF*)rect);
}

void q_painterpath_add_rect2(void* self, double x, double y, double w, double h) {
    QPainterPath_AddRect2((QPainterPath*)self, x, y, w, h);
}

void q_painterpath_add_ellipse(void* self, void* rect) {
    QPainterPath_AddEllipse((QPainterPath*)self, (QRectF*)rect);
}

void q_painterpath_add_ellipse2(void* self, double x, double y, double w, double h) {
    QPainterPath_AddEllipse2((QPainterPath*)self, x, y, w, h);
}

void q_painterpath_add_ellipse3(void* self, void* center, double rx, double ry) {
    QPainterPath_AddEllipse3((QPainterPath*)self, (QPointF*)center, rx, ry);
}

void q_painterpath_add_text(void* self, void* point, void* f, const char* text) {
    QPainterPath_AddText((QPainterPath*)self, (QPointF*)point, (QFont*)f, qstring(text));
}

void q_painterpath_add_text2(void* self, double x, double y, void* f, const char* text) {
    QPainterPath_AddText2((QPainterPath*)self, x, y, (QFont*)f, qstring(text));
}

void q_painterpath_add_path(void* self, void* path) {
    QPainterPath_AddPath((QPainterPath*)self, (QPainterPath*)path);
}

void q_painterpath_add_region(void* self, void* region) {
    QPainterPath_AddRegion((QPainterPath*)self, (QRegion*)region);
}

void q_painterpath_add_rounded_rect(void* self, void* rect, double xRadius, double yRadius) {
    QPainterPath_AddRoundedRect((QPainterPath*)self, (QRectF*)rect, xRadius, yRadius);
}

void q_painterpath_add_rounded_rect2(void* self, double x, double y, double w, double h, double xRadius, double yRadius) {
    QPainterPath_AddRoundedRect2((QPainterPath*)self, x, y, w, h, xRadius, yRadius);
}

void q_painterpath_connect_path(void* self, void* path) {
    QPainterPath_ConnectPath((QPainterPath*)self, (QPainterPath*)path);
}

bool q_painterpath_contains(void* self, void* pt) {
    return QPainterPath_Contains((QPainterPath*)self, (QPointF*)pt);
}

bool q_painterpath_contains2(void* self, void* rect) {
    return QPainterPath_Contains2((QPainterPath*)self, (QRectF*)rect);
}

bool q_painterpath_intersects(void* self, void* rect) {
    return QPainterPath_Intersects((QPainterPath*)self, (QRectF*)rect);
}

void q_painterpath_translate(void* self, double dx, double dy) {
    QPainterPath_Translate((QPainterPath*)self, dx, dy);
}

void q_painterpath_translate2(void* self, void* offset) {
    QPainterPath_Translate2((QPainterPath*)self, (QPointF*)offset);
}

QPainterPath* q_painterpath_translated(void* self, double dx, double dy) {
    return QPainterPath_Translated((QPainterPath*)self, dx, dy);
}

QPainterPath* q_painterpath_translated2(void* self, void* offset) {
    return QPainterPath_Translated2((QPainterPath*)self, (QPointF*)offset);
}

QRectF* q_painterpath_bounding_rect(void* self) {
    return QPainterPath_BoundingRect((QPainterPath*)self);
}

QRectF* q_painterpath_control_point_rect(void* self) {
    return QPainterPath_ControlPointRect((QPainterPath*)self);
}

int64_t q_painterpath_fill_rule(void* self) {
    return QPainterPath_FillRule((QPainterPath*)self);
}

void q_painterpath_set_fill_rule(void* self, int64_t fillRule) {
    QPainterPath_SetFillRule((QPainterPath*)self, fillRule);
}

bool q_painterpath_is_empty(void* self) {
    return QPainterPath_IsEmpty((QPainterPath*)self);
}

QPainterPath* q_painterpath_to_reversed(void* self) {
    return QPainterPath_ToReversed((QPainterPath*)self);
}

int32_t q_painterpath_element_count(void* self) {
    return QPainterPath_ElementCount((QPainterPath*)self);
}

QPainterPath__Element* q_painterpath_element_at(void* self, int i) {
    return QPainterPath_ElementAt((QPainterPath*)self, i);
}

void q_painterpath_set_element_position_at(void* self, int i, double x, double y) {
    QPainterPath_SetElementPositionAt((QPainterPath*)self, i, x, y);
}

double q_painterpath_length(void* self) {
    return QPainterPath_Length((QPainterPath*)self);
}

double q_painterpath_percent_at_length(void* self, double t) {
    return QPainterPath_PercentAtLength((QPainterPath*)self, t);
}

QPointF* q_painterpath_point_at_percent(void* self, double t) {
    return QPainterPath_PointAtPercent((QPainterPath*)self, t);
}

double q_painterpath_angle_at_percent(void* self, double t) {
    return QPainterPath_AngleAtPercent((QPainterPath*)self, t);
}

double q_painterpath_slope_at_percent(void* self, double t) {
    return QPainterPath_SlopeAtPercent((QPainterPath*)self, t);
}

bool q_painterpath_intersects2(void* self, void* p) {
    return QPainterPath_Intersects2((QPainterPath*)self, (QPainterPath*)p);
}

bool q_painterpath_contains3(void* self, void* p) {
    return QPainterPath_Contains3((QPainterPath*)self, (QPainterPath*)p);
}

QPainterPath* q_painterpath_united(void* self, void* r) {
    return QPainterPath_United((QPainterPath*)self, (QPainterPath*)r);
}

QPainterPath* q_painterpath_intersected(void* self, void* r) {
    return QPainterPath_Intersected((QPainterPath*)self, (QPainterPath*)r);
}

QPainterPath* q_painterpath_subtracted(void* self, void* r) {
    return QPainterPath_Subtracted((QPainterPath*)self, (QPainterPath*)r);
}

QPainterPath* q_painterpath_simplified(void* self) {
    return QPainterPath_Simplified((QPainterPath*)self);
}

bool q_painterpath_operator_equal(void* self, void* other) {
    return QPainterPath_OperatorEqual((QPainterPath*)self, (QPainterPath*)other);
}

bool q_painterpath_operator_not_equal(void* self, void* other) {
    return QPainterPath_OperatorNotEqual((QPainterPath*)self, (QPainterPath*)other);
}

QPainterPath* q_painterpath_operator_bitwise_and(void* self, void* other) {
    return QPainterPath_OperatorBitwiseAnd((QPainterPath*)self, (QPainterPath*)other);
}

QPainterPath* q_painterpath_operator_bitwise_or(void* self, void* other) {
    return QPainterPath_OperatorBitwiseOr((QPainterPath*)self, (QPainterPath*)other);
}

QPainterPath* q_painterpath_operator_plus(void* self, void* other) {
    return QPainterPath_OperatorPlus((QPainterPath*)self, (QPainterPath*)other);
}

QPainterPath* q_painterpath_operator_minus(void* self, void* other) {
    return QPainterPath_OperatorMinus((QPainterPath*)self, (QPainterPath*)other);
}

void q_painterpath_operator_bitwise_and_assign(void* self, void* other) {
    QPainterPath_OperatorBitwiseAndAssign((QPainterPath*)self, (QPainterPath*)other);
}

void q_painterpath_operator_bitwise_or_assign(void* self, void* other) {
    QPainterPath_OperatorBitwiseOrAssign((QPainterPath*)self, (QPainterPath*)other);
}

QPainterPath* q_painterpath_operator_plus_assign(void* self, void* other) {
    return QPainterPath_OperatorPlusAssign((QPainterPath*)self, (QPainterPath*)other);
}

QPainterPath* q_painterpath_operator_minus_assign(void* self, void* other) {
    return QPainterPath_OperatorMinusAssign((QPainterPath*)self, (QPainterPath*)other);
}

void q_painterpath_add_rounded_rect4(void* self, void* rect, double xRadius, double yRadius, int64_t mode) {
    QPainterPath_AddRoundedRect4((QPainterPath*)self, (QRectF*)rect, xRadius, yRadius, mode);
}

void q_painterpath_add_rounded_rect7(void* self, double x, double y, double w, double h, double xRadius, double yRadius, int64_t mode) {
    QPainterPath_AddRoundedRect7((QPainterPath*)self, x, y, w, h, xRadius, yRadius, mode);
}

void q_painterpath_delete(void* self) {
    QPainterPath_Delete((QPainterPath*)(self));
}

QPainterPathStroker* q_painterpathstroker_new() {
    return QPainterPathStroker_new();
}

QPainterPathStroker* q_painterpathstroker_new2(void* pen) {
    return QPainterPathStroker_new2((QPen*)pen);
}

void q_painterpathstroker_set_width(void* self, double width) {
    QPainterPathStroker_SetWidth((QPainterPathStroker*)self, width);
}

double q_painterpathstroker_width(void* self) {
    return QPainterPathStroker_Width((QPainterPathStroker*)self);
}

void q_painterpathstroker_set_cap_style(void* self, int64_t style) {
    QPainterPathStroker_SetCapStyle((QPainterPathStroker*)self, style);
}

int64_t q_painterpathstroker_cap_style(void* self) {
    return QPainterPathStroker_CapStyle((QPainterPathStroker*)self);
}

void q_painterpathstroker_set_join_style(void* self, int64_t style) {
    QPainterPathStroker_SetJoinStyle((QPainterPathStroker*)self, style);
}

int64_t q_painterpathstroker_join_style(void* self) {
    return QPainterPathStroker_JoinStyle((QPainterPathStroker*)self);
}

void q_painterpathstroker_set_miter_limit(void* self, double length) {
    QPainterPathStroker_SetMiterLimit((QPainterPathStroker*)self, length);
}

double q_painterpathstroker_miter_limit(void* self) {
    return QPainterPathStroker_MiterLimit((QPainterPathStroker*)self);
}

void q_painterpathstroker_set_curve_threshold(void* self, double threshold) {
    QPainterPathStroker_SetCurveThreshold((QPainterPathStroker*)self, threshold);
}

double q_painterpathstroker_curve_threshold(void* self) {
    return QPainterPathStroker_CurveThreshold((QPainterPathStroker*)self);
}

void q_painterpathstroker_set_dash_pattern(void* self, int64_t dashPattern) {
    QPainterPathStroker_SetDashPattern((QPainterPathStroker*)self, dashPattern);
}

void q_painterpathstroker_set_dash_pattern2(void* self, libqt_list dashPattern) {
    QPainterPathStroker_SetDashPattern2((QPainterPathStroker*)self, dashPattern);
}

libqt_list /* of double */ q_painterpathstroker_dash_pattern(void* self) {
    libqt_list _arr = QPainterPathStroker_DashPattern((QPainterPathStroker*)self);
    return _arr;
}

void q_painterpathstroker_set_dash_offset(void* self, double offset) {
    QPainterPathStroker_SetDashOffset((QPainterPathStroker*)self, offset);
}

double q_painterpathstroker_dash_offset(void* self) {
    return QPainterPathStroker_DashOffset((QPainterPathStroker*)self);
}

QPainterPath* q_painterpathstroker_create_stroke(void* self, void* path) {
    return QPainterPathStroker_CreateStroke((QPainterPathStroker*)self, (QPainterPath*)path);
}

void q_painterpathstroker_delete(void* self) {
    QPainterPathStroker_Delete((QPainterPathStroker*)(self));
}

QPainterPath__Element* q_painterpath__element_new() {
    return QPainterPath__Element_new();
}

QPainterPath__Element* q_painterpath__element_new2(void* param1) {
    return QPainterPath__Element_new2((QPainterPath__Element*)param1);
}

bool q_painterpath__element_is_move_to(void* self) {
    return QPainterPath__Element_IsMoveTo((QPainterPath__Element*)self);
}

bool q_painterpath__element_is_line_to(void* self) {
    return QPainterPath__Element_IsLineTo((QPainterPath__Element*)self);
}

bool q_painterpath__element_is_curve_to(void* self) {
    return QPainterPath__Element_IsCurveTo((QPainterPath__Element*)self);
}

QPointF* q_painterpath__element_to_q_point_f(void* self) {
    return QPainterPath__Element_ToQPointF((QPainterPath__Element*)self);
}

bool q_painterpath__element_operator_equal(void* self, void* e) {
    return QPainterPath__Element_OperatorEqual((QPainterPath__Element*)self, (QPainterPath__Element*)e);
}

bool q_painterpath__element_operator_not_equal(void* self, void* e) {
    return QPainterPath__Element_OperatorNotEqual((QPainterPath__Element*)self, (QPainterPath__Element*)e);
}

void q_painterpath__element_delete(void* self) {
    QPainterPath__Element_Delete((QPainterPath__Element*)(self));
}
