#include "libqfont.hpp"
#include "libqpen.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include <string.h>
#include "libqpainterpath.hpp"
#include "libqpainterpath.h"

/// https://doc.qt.io/qt-6/qpainterpath.html

/// q_painterpath_new constructs a new QPainterPath object.
///
///
QPainterPath* q_painterpath_new() {
    return QPainterPath_new();
}

/// q_painterpath_new2 constructs a new QPainterPath object.
///
/// ``` QPointF* startPoint ```
QPainterPath* q_painterpath_new2(void* startPoint) {
    return QPainterPath_new2((QPointF*)startPoint);
}

/// q_painterpath_new3 constructs a new QPainterPath object.
///
/// ``` QPainterPath* other ```
QPainterPath* q_painterpath_new3(void* other) {
    return QPainterPath_new3((QPainterPath*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator=)
///
/// ``` QPainterPath* self, QPainterPath* other ```
void q_painterpath_operator_assign(void* self, void* other) {
    QPainterPath_OperatorAssign((QPainterPath*)self, (QPainterPath*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#swap)
///
/// ``` QPainterPath* self, QPainterPath* other ```
void q_painterpath_swap(void* self, void* other) {
    QPainterPath_Swap((QPainterPath*)self, (QPainterPath*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#clear)
///
/// ``` QPainterPath* self ```
void q_painterpath_clear(void* self) {
    QPainterPath_Clear((QPainterPath*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#reserve)
///
/// ``` QPainterPath* self, int size ```
void q_painterpath_reserve(void* self, int size) {
    QPainterPath_Reserve((QPainterPath*)self, size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#capacity)
///
/// ``` QPainterPath* self ```
int32_t q_painterpath_capacity(void* self) {
    return QPainterPath_Capacity((QPainterPath*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#closeSubpath)
///
/// ``` QPainterPath* self ```
void q_painterpath_close_subpath(void* self) {
    QPainterPath_CloseSubpath((QPainterPath*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#moveTo)
///
/// ``` QPainterPath* self, QPointF* p ```
void q_painterpath_move_to(void* self, void* p) {
    QPainterPath_MoveTo((QPainterPath*)self, (QPointF*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#moveTo)
///
/// ``` QPainterPath* self, double x, double y ```
void q_painterpath_move_to2(void* self, double x, double y) {
    QPainterPath_MoveTo2((QPainterPath*)self, x, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#lineTo)
///
/// ``` QPainterPath* self, QPointF* p ```
void q_painterpath_line_to(void* self, void* p) {
    QPainterPath_LineTo((QPainterPath*)self, (QPointF*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#lineTo)
///
/// ``` QPainterPath* self, double x, double y ```
void q_painterpath_line_to2(void* self, double x, double y) {
    QPainterPath_LineTo2((QPainterPath*)self, x, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#arcMoveTo)
///
/// ``` QPainterPath* self, QRectF* rect, double angle ```
void q_painterpath_arc_move_to(void* self, void* rect, double angle) {
    QPainterPath_ArcMoveTo((QPainterPath*)self, (QRectF*)rect, angle);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#arcMoveTo)
///
/// ``` QPainterPath* self, double x, double y, double w, double h, double angle ```
void q_painterpath_arc_move_to2(void* self, double x, double y, double w, double h, double angle) {
    QPainterPath_ArcMoveTo2((QPainterPath*)self, x, y, w, h, angle);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#arcTo)
///
/// ``` QPainterPath* self, QRectF* rect, double startAngle, double arcLength ```
void q_painterpath_arc_to(void* self, void* rect, double startAngle, double arcLength) {
    QPainterPath_ArcTo((QPainterPath*)self, (QRectF*)rect, startAngle, arcLength);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#arcTo)
///
/// ``` QPainterPath* self, double x, double y, double w, double h, double startAngle, double arcLength ```
void q_painterpath_arc_to2(void* self, double x, double y, double w, double h, double startAngle, double arcLength) {
    QPainterPath_ArcTo2((QPainterPath*)self, x, y, w, h, startAngle, arcLength);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#cubicTo)
///
/// ``` QPainterPath* self, QPointF* ctrlPt1, QPointF* ctrlPt2, QPointF* endPt ```
void q_painterpath_cubic_to(void* self, void* ctrlPt1, void* ctrlPt2, void* endPt) {
    QPainterPath_CubicTo((QPainterPath*)self, (QPointF*)ctrlPt1, (QPointF*)ctrlPt2, (QPointF*)endPt);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#cubicTo)
///
/// ``` QPainterPath* self, double ctrlPt1x, double ctrlPt1y, double ctrlPt2x, double ctrlPt2y, double endPtx, double endPty ```
void q_painterpath_cubic_to2(void* self, double ctrlPt1x, double ctrlPt1y, double ctrlPt2x, double ctrlPt2y, double endPtx, double endPty) {
    QPainterPath_CubicTo2((QPainterPath*)self, ctrlPt1x, ctrlPt1y, ctrlPt2x, ctrlPt2y, endPtx, endPty);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#quadTo)
///
/// ``` QPainterPath* self, QPointF* ctrlPt, QPointF* endPt ```
void q_painterpath_quad_to(void* self, void* ctrlPt, void* endPt) {
    QPainterPath_QuadTo((QPainterPath*)self, (QPointF*)ctrlPt, (QPointF*)endPt);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#quadTo)
///
/// ``` QPainterPath* self, double ctrlPtx, double ctrlPty, double endPtx, double endPty ```
void q_painterpath_quad_to2(void* self, double ctrlPtx, double ctrlPty, double endPtx, double endPty) {
    QPainterPath_QuadTo2((QPainterPath*)self, ctrlPtx, ctrlPty, endPtx, endPty);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#currentPosition)
///
/// ``` QPainterPath* self ```
QPointF* q_painterpath_current_position(void* self) {
    return QPainterPath_CurrentPosition((QPainterPath*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addRect)
///
/// ``` QPainterPath* self, QRectF* rect ```
void q_painterpath_add_rect(void* self, void* rect) {
    QPainterPath_AddRect((QPainterPath*)self, (QRectF*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addRect)
///
/// ``` QPainterPath* self, double x, double y, double w, double h ```
void q_painterpath_add_rect2(void* self, double x, double y, double w, double h) {
    QPainterPath_AddRect2((QPainterPath*)self, x, y, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addEllipse)
///
/// ``` QPainterPath* self, QRectF* rect ```
void q_painterpath_add_ellipse(void* self, void* rect) {
    QPainterPath_AddEllipse((QPainterPath*)self, (QRectF*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addEllipse)
///
/// ``` QPainterPath* self, double x, double y, double w, double h ```
void q_painterpath_add_ellipse2(void* self, double x, double y, double w, double h) {
    QPainterPath_AddEllipse2((QPainterPath*)self, x, y, w, h);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addEllipse)
///
/// ``` QPainterPath* self, QPointF* center, double rx, double ry ```
void q_painterpath_add_ellipse3(void* self, void* center, double rx, double ry) {
    QPainterPath_AddEllipse3((QPainterPath*)self, (QPointF*)center, rx, ry);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addText)
///
/// ``` QPainterPath* self, QPointF* point, QFont* f, const char* text ```
void q_painterpath_add_text(void* self, void* point, void* f, const char* text) {
    QPainterPath_AddText((QPainterPath*)self, (QPointF*)point, (QFont*)f, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addText)
///
/// ``` QPainterPath* self, double x, double y, QFont* f, const char* text ```
void q_painterpath_add_text2(void* self, double x, double y, void* f, const char* text) {
    QPainterPath_AddText2((QPainterPath*)self, x, y, (QFont*)f, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addPath)
///
/// ``` QPainterPath* self, QPainterPath* path ```
void q_painterpath_add_path(void* self, void* path) {
    QPainterPath_AddPath((QPainterPath*)self, (QPainterPath*)path);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addRegion)
///
/// ``` QPainterPath* self, QRegion* region ```
void q_painterpath_add_region(void* self, void* region) {
    QPainterPath_AddRegion((QPainterPath*)self, (QRegion*)region);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addRoundedRect)
///
/// ``` QPainterPath* self, QRectF* rect, double xRadius, double yRadius ```
void q_painterpath_add_rounded_rect(void* self, void* rect, double xRadius, double yRadius) {
    QPainterPath_AddRoundedRect((QPainterPath*)self, (QRectF*)rect, xRadius, yRadius);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addRoundedRect)
///
/// ``` QPainterPath* self, double x, double y, double w, double h, double xRadius, double yRadius ```
void q_painterpath_add_rounded_rect2(void* self, double x, double y, double w, double h, double xRadius, double yRadius) {
    QPainterPath_AddRoundedRect2((QPainterPath*)self, x, y, w, h, xRadius, yRadius);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#connectPath)
///
/// ``` QPainterPath* self, QPainterPath* path ```
void q_painterpath_connect_path(void* self, void* path) {
    QPainterPath_ConnectPath((QPainterPath*)self, (QPainterPath*)path);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#contains)
///
/// ``` QPainterPath* self, QPointF* pt ```
bool q_painterpath_contains(void* self, void* pt) {
    return QPainterPath_Contains((QPainterPath*)self, (QPointF*)pt);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#contains)
///
/// ``` QPainterPath* self, QRectF* rect ```
bool q_painterpath_contains_with_rect(void* self, void* rect) {
    return QPainterPath_ContainsWithRect((QPainterPath*)self, (QRectF*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#intersects)
///
/// ``` QPainterPath* self, QRectF* rect ```
bool q_painterpath_intersects(void* self, void* rect) {
    return QPainterPath_Intersects((QPainterPath*)self, (QRectF*)rect);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#translate)
///
/// ``` QPainterPath* self, double dx, double dy ```
void q_painterpath_translate(void* self, double dx, double dy) {
    QPainterPath_Translate((QPainterPath*)self, dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#translate)
///
/// ``` QPainterPath* self, QPointF* offset ```
void q_painterpath_translate_with_offset(void* self, void* offset) {
    QPainterPath_TranslateWithOffset((QPainterPath*)self, (QPointF*)offset);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#translated)
///
/// ``` QPainterPath* self, double dx, double dy ```
QPainterPath* q_painterpath_translated(void* self, double dx, double dy) {
    return QPainterPath_Translated((QPainterPath*)self, dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#translated)
///
/// ``` QPainterPath* self, QPointF* offset ```
QPainterPath* q_painterpath_translated_with_offset(void* self, void* offset) {
    return QPainterPath_TranslatedWithOffset((QPainterPath*)self, (QPointF*)offset);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#boundingRect)
///
/// ``` QPainterPath* self ```
QRectF* q_painterpath_bounding_rect(void* self) {
    return QPainterPath_BoundingRect((QPainterPath*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#controlPointRect)
///
/// ``` QPainterPath* self ```
QRectF* q_painterpath_control_point_rect(void* self) {
    return QPainterPath_ControlPointRect((QPainterPath*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#fillRule)
///
/// ``` QPainterPath* self ```
int64_t q_painterpath_fill_rule(void* self) {
    return QPainterPath_FillRule((QPainterPath*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#setFillRule)
///
/// ``` QPainterPath* self, enum Qt__FillRule fillRule ```
void q_painterpath_set_fill_rule(void* self, int64_t fillRule) {
    QPainterPath_SetFillRule((QPainterPath*)self, fillRule);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#isEmpty)
///
/// ``` QPainterPath* self ```
bool q_painterpath_is_empty(void* self) {
    return QPainterPath_IsEmpty((QPainterPath*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#toReversed)
///
/// ``` QPainterPath* self ```
QPainterPath* q_painterpath_to_reversed(void* self) {
    return QPainterPath_ToReversed((QPainterPath*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#elementCount)
///
/// ``` QPainterPath* self ```
int32_t q_painterpath_element_count(void* self) {
    return QPainterPath_ElementCount((QPainterPath*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#elementAt)
///
/// ``` QPainterPath* self, int i ```
QPainterPath__Element* q_painterpath_element_at(void* self, int i) {
    return QPainterPath_ElementAt((QPainterPath*)self, i);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#setElementPositionAt)
///
/// ``` QPainterPath* self, int i, double x, double y ```
void q_painterpath_set_element_position_at(void* self, int i, double x, double y) {
    QPainterPath_SetElementPositionAt((QPainterPath*)self, i, x, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#length)
///
/// ``` QPainterPath* self ```
double q_painterpath_length(void* self) {
    return QPainterPath_Length((QPainterPath*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#percentAtLength)
///
/// ``` QPainterPath* self, double t ```
double q_painterpath_percent_at_length(void* self, double t) {
    return QPainterPath_PercentAtLength((QPainterPath*)self, t);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#pointAtPercent)
///
/// ``` QPainterPath* self, double t ```
QPointF* q_painterpath_point_at_percent(void* self, double t) {
    return QPainterPath_PointAtPercent((QPainterPath*)self, t);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#angleAtPercent)
///
/// ``` QPainterPath* self, double t ```
double q_painterpath_angle_at_percent(void* self, double t) {
    return QPainterPath_AngleAtPercent((QPainterPath*)self, t);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#slopeAtPercent)
///
/// ``` QPainterPath* self, double t ```
double q_painterpath_slope_at_percent(void* self, double t) {
    return QPainterPath_SlopeAtPercent((QPainterPath*)self, t);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#intersects)
///
/// ``` QPainterPath* self, QPainterPath* p ```
bool q_painterpath_intersects_with_q_painter_path(void* self, void* p) {
    return QPainterPath_IntersectsWithQPainterPath((QPainterPath*)self, (QPainterPath*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#contains)
///
/// ``` QPainterPath* self, QPainterPath* p ```
bool q_painterpath_contains_with_q_painter_path(void* self, void* p) {
    return QPainterPath_ContainsWithQPainterPath((QPainterPath*)self, (QPainterPath*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#united)
///
/// ``` QPainterPath* self, QPainterPath* r ```
QPainterPath* q_painterpath_united(void* self, void* r) {
    return QPainterPath_United((QPainterPath*)self, (QPainterPath*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#intersected)
///
/// ``` QPainterPath* self, QPainterPath* r ```
QPainterPath* q_painterpath_intersected(void* self, void* r) {
    return QPainterPath_Intersected((QPainterPath*)self, (QPainterPath*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#subtracted)
///
/// ``` QPainterPath* self, QPainterPath* r ```
QPainterPath* q_painterpath_subtracted(void* self, void* r) {
    return QPainterPath_Subtracted((QPainterPath*)self, (QPainterPath*)r);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#simplified)
///
/// ``` QPainterPath* self ```
QPainterPath* q_painterpath_simplified(void* self) {
    return QPainterPath_Simplified((QPainterPath*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator==)
///
/// ``` QPainterPath* self, QPainterPath* other ```
bool q_painterpath_operator_equal(void* self, void* other) {
    return QPainterPath_OperatorEqual((QPainterPath*)self, (QPainterPath*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator!=)
///
/// ``` QPainterPath* self, QPainterPath* other ```
bool q_painterpath_operator_not_equal(void* self, void* other) {
    return QPainterPath_OperatorNotEqual((QPainterPath*)self, (QPainterPath*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator&)
///
/// ``` QPainterPath* self, QPainterPath* other ```
QPainterPath* q_painterpath_operator_bitwise_and(void* self, void* other) {
    return QPainterPath_OperatorBitwiseAnd((QPainterPath*)self, (QPainterPath*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator|)
///
/// ``` QPainterPath* self, QPainterPath* other ```
QPainterPath* q_painterpath_operator_bitwise_or(void* self, void* other) {
    return QPainterPath_OperatorBitwiseOr((QPainterPath*)self, (QPainterPath*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator+)
///
/// ``` QPainterPath* self, QPainterPath* other ```
QPainterPath* q_painterpath_operator_plus(void* self, void* other) {
    return QPainterPath_OperatorPlus((QPainterPath*)self, (QPainterPath*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator-)
///
/// ``` QPainterPath* self, QPainterPath* other ```
QPainterPath* q_painterpath_operator_minus(void* self, void* other) {
    return QPainterPath_OperatorMinus((QPainterPath*)self, (QPainterPath*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator&=)
///
/// ``` QPainterPath* self, QPainterPath* other ```
void q_painterpath_operator_bitwise_and_assign(void* self, void* other) {
    QPainterPath_OperatorBitwiseAndAssign((QPainterPath*)self, (QPainterPath*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator|=)
///
/// ``` QPainterPath* self, QPainterPath* other ```
void q_painterpath_operator_bitwise_or_assign(void* self, void* other) {
    QPainterPath_OperatorBitwiseOrAssign((QPainterPath*)self, (QPainterPath*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator+=)
///
/// ``` QPainterPath* self, QPainterPath* other ```
QPainterPath* q_painterpath_operator_plus_assign(void* self, void* other) {
    return QPainterPath_OperatorPlusAssign((QPainterPath*)self, (QPainterPath*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#operator-=)
///
/// ``` QPainterPath* self, QPainterPath* other ```
QPainterPath* q_painterpath_operator_minus_assign(void* self, void* other) {
    return QPainterPath_OperatorMinusAssign((QPainterPath*)self, (QPainterPath*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addRoundedRect)
///
/// ``` QPainterPath* self, QRectF* rect, double xRadius, double yRadius, enum Qt__SizeMode mode ```
void q_painterpath_add_rounded_rect4(void* self, void* rect, double xRadius, double yRadius, int64_t mode) {
    QPainterPath_AddRoundedRect4((QPainterPath*)self, (QRectF*)rect, xRadius, yRadius, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath.html#addRoundedRect)
///
/// ``` QPainterPath* self, double x, double y, double w, double h, double xRadius, double yRadius, enum Qt__SizeMode mode ```
void q_painterpath_add_rounded_rect7(void* self, double x, double y, double w, double h, double xRadius, double yRadius, int64_t mode) {
    QPainterPath_AddRoundedRect7((QPainterPath*)self, x, y, w, h, xRadius, yRadius, mode);
}

/// Delete this object from C++ memory.
///
/// ``` QPainterPath* self ```
void q_painterpath_delete(void* self) {
    QPainterPath_Delete((QPainterPath*)(self));
}

/// https://doc.qt.io/qt-6/qpainterpathstroker.html

/// q_painterpathstroker_new constructs a new QPainterPathStroker object.
///
///
QPainterPathStroker* q_painterpathstroker_new() {
    return QPainterPathStroker_new();
}

/// q_painterpathstroker_new2 constructs a new QPainterPathStroker object.
///
/// ``` QPen* pen ```
QPainterPathStroker* q_painterpathstroker_new2(void* pen) {
    return QPainterPathStroker_new2((QPen*)pen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#setWidth)
///
/// ``` QPainterPathStroker* self, double width ```
void q_painterpathstroker_set_width(void* self, double width) {
    QPainterPathStroker_SetWidth((QPainterPathStroker*)self, width);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#width)
///
/// ``` QPainterPathStroker* self ```
double q_painterpathstroker_width(void* self) {
    return QPainterPathStroker_Width((QPainterPathStroker*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#setCapStyle)
///
/// ``` QPainterPathStroker* self, enum Qt__PenCapStyle style ```
void q_painterpathstroker_set_cap_style(void* self, int64_t style) {
    QPainterPathStroker_SetCapStyle((QPainterPathStroker*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#capStyle)
///
/// ``` QPainterPathStroker* self ```
int64_t q_painterpathstroker_cap_style(void* self) {
    return QPainterPathStroker_CapStyle((QPainterPathStroker*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#setJoinStyle)
///
/// ``` QPainterPathStroker* self, enum Qt__PenJoinStyle style ```
void q_painterpathstroker_set_join_style(void* self, int64_t style) {
    QPainterPathStroker_SetJoinStyle((QPainterPathStroker*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#joinStyle)
///
/// ``` QPainterPathStroker* self ```
int64_t q_painterpathstroker_join_style(void* self) {
    return QPainterPathStroker_JoinStyle((QPainterPathStroker*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#setMiterLimit)
///
/// ``` QPainterPathStroker* self, double length ```
void q_painterpathstroker_set_miter_limit(void* self, double length) {
    QPainterPathStroker_SetMiterLimit((QPainterPathStroker*)self, length);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#miterLimit)
///
/// ``` QPainterPathStroker* self ```
double q_painterpathstroker_miter_limit(void* self) {
    return QPainterPathStroker_MiterLimit((QPainterPathStroker*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#setCurveThreshold)
///
/// ``` QPainterPathStroker* self, double threshold ```
void q_painterpathstroker_set_curve_threshold(void* self, double threshold) {
    QPainterPathStroker_SetCurveThreshold((QPainterPathStroker*)self, threshold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#curveThreshold)
///
/// ``` QPainterPathStroker* self ```
double q_painterpathstroker_curve_threshold(void* self) {
    return QPainterPathStroker_CurveThreshold((QPainterPathStroker*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#setDashPattern)
///
/// ``` QPainterPathStroker* self, enum Qt__PenStyle dashPattern ```
void q_painterpathstroker_set_dash_pattern(void* self, int64_t dashPattern) {
    QPainterPathStroker_SetDashPattern((QPainterPathStroker*)self, dashPattern);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#setDashPattern)
///
/// ``` QPainterPathStroker* self, double* dashPattern[] ```
void q_painterpathstroker_set_dash_pattern_with_dash_pattern(void* self, double* dashPattern[]) {
    size_t dashPattern_len = 0;
    while (dashPattern[dashPattern_len] != NULL) {
        dashPattern_len++;
    }
    libqt_list dashPattern_list = {
        .len = dashPattern_len,
        .data = {(double*)dashPattern},
    };
    QPainterPathStroker_SetDashPatternWithDashPattern((QPainterPathStroker*)self, dashPattern_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#dashPattern)
///
/// ``` QPainterPathStroker* self ```
libqt_list /* of double */ q_painterpathstroker_dash_pattern(void* self) {
    libqt_list _arr = QPainterPathStroker_DashPattern((QPainterPathStroker*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#setDashOffset)
///
/// ``` QPainterPathStroker* self, double offset ```
void q_painterpathstroker_set_dash_offset(void* self, double offset) {
    QPainterPathStroker_SetDashOffset((QPainterPathStroker*)self, offset);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#dashOffset)
///
/// ``` QPainterPathStroker* self ```
double q_painterpathstroker_dash_offset(void* self) {
    return QPainterPathStroker_DashOffset((QPainterPathStroker*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpathstroker.html#createStroke)
///
/// ``` QPainterPathStroker* self, QPainterPath* path ```
QPainterPath* q_painterpathstroker_create_stroke(void* self, void* path) {
    return QPainterPathStroker_CreateStroke((QPainterPathStroker*)self, (QPainterPath*)path);
}

/// Delete this object from C++ memory.
///
/// ``` QPainterPathStroker* self ```
void q_painterpathstroker_delete(void* self) {
    QPainterPathStroker_Delete((QPainterPathStroker*)(self));
}

/// https://doc.qt.io/qt-6/qpainterpath-element.html

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath__element.html#isMoveTo)
///
/// ``` QPainterPath__Element* self ```
bool q_painterpath__element_is_move_to(void* self) {
    return QPainterPath__Element_IsMoveTo((QPainterPath__Element*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath__element.html#isLineTo)
///
/// ``` QPainterPath__Element* self ```
bool q_painterpath__element_is_line_to(void* self) {
    return QPainterPath__Element_IsLineTo((QPainterPath__Element*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath__element.html#isCurveTo)
///
/// ``` QPainterPath__Element* self ```
bool q_painterpath__element_is_curve_to(void* self) {
    return QPainterPath__Element_IsCurveTo((QPainterPath__Element*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath__element.html#operator QPointF)
///
/// ``` QPainterPath__Element* self ```
QPointF* q_painterpath__element_to_q_point_f(void* self) {
    return QPainterPath__Element_ToQPointF((QPainterPath__Element*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath__element.html#operator==)
///
/// ``` QPainterPath__Element* self, QPainterPath__Element* e ```
bool q_painterpath__element_operator_equal(void* self, void* e) {
    return QPainterPath__Element_OperatorEqual((QPainterPath__Element*)self, (QPainterPath__Element*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpainterpath__element.html#operator!=)
///
/// ``` QPainterPath__Element* self, QPainterPath__Element* e ```
bool q_painterpath__element_operator_not_equal(void* self, void* e) {
    return QPainterPath__Element_OperatorNotEqual((QPainterPath__Element*)self, (QPainterPath__Element*)e);
}

/// Delete this object from C++ memory.
///
/// ``` QPainterPath__Element* self ```
void q_painterpath__element_delete(void* self) {
    QPainterPath__Element_Delete((QPainterPath__Element*)(self));
}