#include "libqcolor.hpp"
#include "libqimage.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqtransform.hpp"
#include "libqvariant.hpp"
#include "libqbrush.hpp"
#include "libqbrush.h"

QBrush* q_brush_new() {
    return QBrush_New();
}

QBrush* q_brush_new2(int32_t bs) {
    return QBrush_New2(bs);
}

QBrush* q_brush_new3(const void* color) {
    return QBrush_New3((QColor*)color);
}

QBrush* q_brush_new4(int32_t color) {
    return QBrush_New4(color);
}

QBrush* q_brush_new5(const void* color, const void* pixmap) {
    return QBrush_New5((QColor*)color, (QPixmap*)pixmap);
}

QBrush* q_brush_new6(int32_t color, const void* pixmap) {
    return QBrush_New6(color, (QPixmap*)pixmap);
}

QBrush* q_brush_new7(const void* pixmap) {
    return QBrush_New7((QPixmap*)pixmap);
}

QBrush* q_brush_new8(const void* image) {
    return QBrush_New8((QImage*)image);
}

QBrush* q_brush_new9(const void* brush) {
    return QBrush_New9((QBrush*)brush);
}

QBrush* q_brush_new10(const void* gradient) {
    return QBrush_New10((QGradient*)gradient);
}

QBrush* q_brush_new11(const void* color, int32_t bs) {
    return QBrush_New11((QColor*)color, bs);
}

QBrush* q_brush_new12(int32_t color, int32_t bs) {
    return QBrush_New12(color, bs);
}

void q_brush_operator_assign(void* self, const void* brush) {
    QBrush_OperatorAssign((QBrush*)self, (QBrush*)brush);
}

void q_brush_swap(void* self, void* other) {
    QBrush_Swap((QBrush*)self, (QBrush*)other);
}

QVariant* q_brush_to_q_variant(const void* self) {
    return QBrush_ToQVariant((QBrush*)self);
}

int32_t q_brush_style(const void* self) {
    return QBrush_Style((QBrush*)self);
}

void q_brush_set_style(void* self, int32_t style) {
    QBrush_SetStyle((QBrush*)self, style);
}

QTransform* q_brush_transform(const void* self) {
    return QBrush_Transform((QBrush*)self);
}

void q_brush_set_transform(void* self, const void* transform) {
    QBrush_SetTransform((QBrush*)self, (QTransform*)transform);
}

QPixmap* q_brush_texture(const void* self) {
    return QBrush_Texture((QBrush*)self);
}

void q_brush_set_texture(void* self, const void* pixmap) {
    QBrush_SetTexture((QBrush*)self, (QPixmap*)pixmap);
}

QImage* q_brush_texture_image(const void* self) {
    return QBrush_TextureImage((QBrush*)self);
}

void q_brush_set_texture_image(void* self, const void* image) {
    QBrush_SetTextureImage((QBrush*)self, (QImage*)image);
}

const QColor* q_brush_color(const void* self) {
    return QBrush_Color((QBrush*)self);
}

void q_brush_set_color(void* self, const void* color) {
    QBrush_SetColor((QBrush*)self, (QColor*)color);
}

void q_brush_set_color2(void* self, int32_t color) {
    QBrush_SetColor2((QBrush*)self, color);
}

const QGradient* q_brush_gradient(const void* self) {
    return QBrush_Gradient((QBrush*)self);
}

bool q_brush_is_opaque(const void* self) {
    return QBrush_IsOpaque((QBrush*)self);
}

bool q_brush_operator_equal(const void* self, const void* b) {
    return QBrush_OperatorEqual((QBrush*)self, (QBrush*)b);
}

bool q_brush_operator_not_equal(const void* self, const void* b) {
    return QBrush_OperatorNotEqual((QBrush*)self, (QBrush*)b);
}

bool q_brush_is_detached(const void* self) {
    return QBrush_IsDetached((QBrush*)self);
}

void q_brush_delete(void* self) {
    QBrush_Delete((QBrush*)(self));
}

QGradient* q_gradient_new() {
    return QGradient_New();
}

QGradient* q_gradient_new2(int32_t param1) {
    return QGradient_New2(param1);
}

QGradient* q_gradient_new3(const void* param1) {
    return QGradient_New3((QGradient*)param1);
}

int32_t q_gradient_type(const void* self) {
    return QGradient_Type((QGradient*)self);
}

void q_gradient_set_spread(void* self, int32_t spread) {
    QGradient_SetSpread((QGradient*)self, spread);
}

int32_t q_gradient_spread(const void* self) {
    return QGradient_Spread((QGradient*)self);
}

void q_gradient_set_color_at(void* self, double pos, const void* color) {
    QGradient_SetColorAt((QGradient*)self, pos, (QColor*)color);
}

void q_gradient_set_stops(void* self, libqt_list /* of pair_double_qcolor tuple of double and QColor* */ stops) {
    QGradient_SetStops((QGradient*)self, stops);
}

libqt_list /* of pair_double_qcolor tuple of double and QColor* */ q_gradient_stops(const void* self) {
    return QGradient_Stops((QGradient*)self);
}

int32_t q_gradient_coordinate_mode(const void* self) {
    return QGradient_CoordinateMode((QGradient*)self);
}

void q_gradient_set_coordinate_mode(void* self, int32_t mode) {
    QGradient_SetCoordinateMode((QGradient*)self, mode);
}

int32_t q_gradient_interpolation_mode(const void* self) {
    return QGradient_InterpolationMode((QGradient*)self);
}

void q_gradient_set_interpolation_mode(void* self, int32_t mode) {
    QGradient_SetInterpolationMode((QGradient*)self, mode);
}

bool q_gradient_operator_equal(const void* self, const void* gradient) {
    return QGradient_OperatorEqual((QGradient*)self, (QGradient*)gradient);
}

bool q_gradient_operator_not_equal(const void* self, const void* other) {
    return QGradient_OperatorNotEqual((QGradient*)self, (QGradient*)other);
}

void q_gradient_delete(void* self) {
    QGradient_Delete((QGradient*)(self));
}

QLinearGradient* q_lineargradient_new() {
    return QLinearGradient_New();
}

QLinearGradient* q_lineargradient_new2(const void* start, const void* finalStop) {
    return QLinearGradient_New2((QPointF*)start, (QPointF*)finalStop);
}

QLinearGradient* q_lineargradient_new3(double xStart, double yStart, double xFinalStop, double yFinalStop) {
    return QLinearGradient_New3(xStart, yStart, xFinalStop, yFinalStop);
}

QLinearGradient* q_lineargradient_new4(const void* param1) {
    return QLinearGradient_New4((QLinearGradient*)param1);
}

QPointF* q_lineargradient_start(const void* self) {
    return QLinearGradient_Start((QLinearGradient*)self);
}

void q_lineargradient_set_start(void* self, const void* start) {
    QLinearGradient_SetStart((QLinearGradient*)self, (QPointF*)start);
}

void q_lineargradient_set_start2(void* self, double x, double y) {
    QLinearGradient_SetStart2((QLinearGradient*)self, x, y);
}

QPointF* q_lineargradient_final_stop(const void* self) {
    return QLinearGradient_FinalStop((QLinearGradient*)self);
}

void q_lineargradient_set_final_stop(void* self, const void* stop) {
    QLinearGradient_SetFinalStop((QLinearGradient*)self, (QPointF*)stop);
}

void q_lineargradient_set_final_stop2(void* self, double x, double y) {
    QLinearGradient_SetFinalStop2((QLinearGradient*)self, x, y);
}

int32_t q_lineargradient_type(const void* self) {
    return QGradient_Type((QGradient*)self);
}

void q_lineargradient_set_spread(void* self, int32_t spread) {
    QGradient_SetSpread((QGradient*)self, spread);
}

int32_t q_lineargradient_spread(const void* self) {
    return QGradient_Spread((QGradient*)self);
}

void q_lineargradient_set_color_at(void* self, double pos, const void* color) {
    QGradient_SetColorAt((QGradient*)self, pos, (QColor*)color);
}

void q_lineargradient_set_stops(void* self, libqt_list /* of pair_double_qcolor tuple of double and QColor* */ stops) {
    QGradient_SetStops((QGradient*)self, stops);
}

libqt_list /* of pair_double_qcolor tuple of double and QColor* */ q_lineargradient_stops(const void* self) {
    return QGradient_Stops((QGradient*)self);
}

int32_t q_lineargradient_coordinate_mode(const void* self) {
    return QGradient_CoordinateMode((QGradient*)self);
}

void q_lineargradient_set_coordinate_mode(void* self, int32_t mode) {
    QGradient_SetCoordinateMode((QGradient*)self, mode);
}

int32_t q_lineargradient_interpolation_mode(const void* self) {
    return QGradient_InterpolationMode((QGradient*)self);
}

void q_lineargradient_set_interpolation_mode(void* self, int32_t mode) {
    QGradient_SetInterpolationMode((QGradient*)self, mode);
}

bool q_lineargradient_operator_equal(const void* self, const void* gradient) {
    return QGradient_OperatorEqual((QGradient*)self, (QGradient*)gradient);
}

bool q_lineargradient_operator_not_equal(const void* self, const void* other) {
    return QGradient_OperatorNotEqual((QGradient*)self, (QGradient*)other);
}

void q_lineargradient_delete(void* self) {
    QLinearGradient_Delete((QLinearGradient*)(self));
}

QRadialGradient* q_radialgradient_new() {
    return QRadialGradient_New();
}

QRadialGradient* q_radialgradient_new2(const void* center, double radius, const void* focalPoint) {
    return QRadialGradient_New2((QPointF*)center, radius, (QPointF*)focalPoint);
}

QRadialGradient* q_radialgradient_new3(double cx, double cy, double radius, double fx, double fy) {
    return QRadialGradient_New3(cx, cy, radius, fx, fy);
}

QRadialGradient* q_radialgradient_new4(const void* center, double radius) {
    return QRadialGradient_New4((QPointF*)center, radius);
}

QRadialGradient* q_radialgradient_new5(double cx, double cy, double radius) {
    return QRadialGradient_New5(cx, cy, radius);
}

QRadialGradient* q_radialgradient_new6(const void* center, double centerRadius, const void* focalPoint, double focalRadius) {
    return QRadialGradient_New6((QPointF*)center, centerRadius, (QPointF*)focalPoint, focalRadius);
}

QRadialGradient* q_radialgradient_new7(double cx, double cy, double centerRadius, double fx, double fy, double focalRadius) {
    return QRadialGradient_New7(cx, cy, centerRadius, fx, fy, focalRadius);
}

QRadialGradient* q_radialgradient_new8(const void* param1) {
    return QRadialGradient_New8((QRadialGradient*)param1);
}

QPointF* q_radialgradient_center(const void* self) {
    return QRadialGradient_Center((QRadialGradient*)self);
}

void q_radialgradient_set_center(void* self, const void* center) {
    QRadialGradient_SetCenter((QRadialGradient*)self, (QPointF*)center);
}

void q_radialgradient_set_center2(void* self, double x, double y) {
    QRadialGradient_SetCenter2((QRadialGradient*)self, x, y);
}

QPointF* q_radialgradient_focal_point(const void* self) {
    return QRadialGradient_FocalPoint((QRadialGradient*)self);
}

void q_radialgradient_set_focal_point(void* self, const void* focalPoint) {
    QRadialGradient_SetFocalPoint((QRadialGradient*)self, (QPointF*)focalPoint);
}

void q_radialgradient_set_focal_point2(void* self, double x, double y) {
    QRadialGradient_SetFocalPoint2((QRadialGradient*)self, x, y);
}

double q_radialgradient_radius(const void* self) {
    return QRadialGradient_Radius((QRadialGradient*)self);
}

void q_radialgradient_set_radius(void* self, double radius) {
    QRadialGradient_SetRadius((QRadialGradient*)self, radius);
}

double q_radialgradient_center_radius(const void* self) {
    return QRadialGradient_CenterRadius((QRadialGradient*)self);
}

void q_radialgradient_set_center_radius(void* self, double radius) {
    QRadialGradient_SetCenterRadius((QRadialGradient*)self, radius);
}

double q_radialgradient_focal_radius(const void* self) {
    return QRadialGradient_FocalRadius((QRadialGradient*)self);
}

void q_radialgradient_set_focal_radius(void* self, double radius) {
    QRadialGradient_SetFocalRadius((QRadialGradient*)self, radius);
}

int32_t q_radialgradient_type(const void* self) {
    return QGradient_Type((QGradient*)self);
}

void q_radialgradient_set_spread(void* self, int32_t spread) {
    QGradient_SetSpread((QGradient*)self, spread);
}

int32_t q_radialgradient_spread(const void* self) {
    return QGradient_Spread((QGradient*)self);
}

void q_radialgradient_set_color_at(void* self, double pos, const void* color) {
    QGradient_SetColorAt((QGradient*)self, pos, (QColor*)color);
}

void q_radialgradient_set_stops(void* self, libqt_list /* of pair_double_qcolor tuple of double and QColor* */ stops) {
    QGradient_SetStops((QGradient*)self, stops);
}

libqt_list /* of pair_double_qcolor tuple of double and QColor* */ q_radialgradient_stops(const void* self) {
    return QGradient_Stops((QGradient*)self);
}

int32_t q_radialgradient_coordinate_mode(const void* self) {
    return QGradient_CoordinateMode((QGradient*)self);
}

void q_radialgradient_set_coordinate_mode(void* self, int32_t mode) {
    QGradient_SetCoordinateMode((QGradient*)self, mode);
}

int32_t q_radialgradient_interpolation_mode(const void* self) {
    return QGradient_InterpolationMode((QGradient*)self);
}

void q_radialgradient_set_interpolation_mode(void* self, int32_t mode) {
    QGradient_SetInterpolationMode((QGradient*)self, mode);
}

bool q_radialgradient_operator_equal(const void* self, const void* gradient) {
    return QGradient_OperatorEqual((QGradient*)self, (QGradient*)gradient);
}

bool q_radialgradient_operator_not_equal(const void* self, const void* other) {
    return QGradient_OperatorNotEqual((QGradient*)self, (QGradient*)other);
}

void q_radialgradient_delete(void* self) {
    QRadialGradient_Delete((QRadialGradient*)(self));
}

QConicalGradient* q_conicalgradient_new() {
    return QConicalGradient_New();
}

QConicalGradient* q_conicalgradient_new2(const void* center, double startAngle) {
    return QConicalGradient_New2((QPointF*)center, startAngle);
}

QConicalGradient* q_conicalgradient_new3(double cx, double cy, double startAngle) {
    return QConicalGradient_New3(cx, cy, startAngle);
}

QConicalGradient* q_conicalgradient_new4(const void* param1) {
    return QConicalGradient_New4((QConicalGradient*)param1);
}

QPointF* q_conicalgradient_center(const void* self) {
    return QConicalGradient_Center((QConicalGradient*)self);
}

void q_conicalgradient_set_center(void* self, const void* center) {
    QConicalGradient_SetCenter((QConicalGradient*)self, (QPointF*)center);
}

void q_conicalgradient_set_center2(void* self, double x, double y) {
    QConicalGradient_SetCenter2((QConicalGradient*)self, x, y);
}

double q_conicalgradient_angle(const void* self) {
    return QConicalGradient_Angle((QConicalGradient*)self);
}

void q_conicalgradient_set_angle(void* self, double angle) {
    QConicalGradient_SetAngle((QConicalGradient*)self, angle);
}

int32_t q_conicalgradient_type(const void* self) {
    return QGradient_Type((QGradient*)self);
}

void q_conicalgradient_set_spread(void* self, int32_t spread) {
    QGradient_SetSpread((QGradient*)self, spread);
}

int32_t q_conicalgradient_spread(const void* self) {
    return QGradient_Spread((QGradient*)self);
}

void q_conicalgradient_set_color_at(void* self, double pos, const void* color) {
    QGradient_SetColorAt((QGradient*)self, pos, (QColor*)color);
}

void q_conicalgradient_set_stops(void* self, libqt_list /* of pair_double_qcolor tuple of double and QColor* */ stops) {
    QGradient_SetStops((QGradient*)self, stops);
}

libqt_list /* of pair_double_qcolor tuple of double and QColor* */ q_conicalgradient_stops(const void* self) {
    return QGradient_Stops((QGradient*)self);
}

int32_t q_conicalgradient_coordinate_mode(const void* self) {
    return QGradient_CoordinateMode((QGradient*)self);
}

void q_conicalgradient_set_coordinate_mode(void* self, int32_t mode) {
    QGradient_SetCoordinateMode((QGradient*)self, mode);
}

int32_t q_conicalgradient_interpolation_mode(const void* self) {
    return QGradient_InterpolationMode((QGradient*)self);
}

void q_conicalgradient_set_interpolation_mode(void* self, int32_t mode) {
    QGradient_SetInterpolationMode((QGradient*)self, mode);
}

bool q_conicalgradient_operator_equal(const void* self, const void* gradient) {
    return QGradient_OperatorEqual((QGradient*)self, (QGradient*)gradient);
}

bool q_conicalgradient_operator_not_equal(const void* self, const void* other) {
    return QGradient_OperatorNotEqual((QGradient*)self, (QGradient*)other);
}

void q_conicalgradient_delete(void* self) {
    QConicalGradient_Delete((QConicalGradient*)(self));
}

QGradient__QGradientData* q_gradient__qgradientdata_new(const void* param1) {
    return QGradient__QGradientData_New((QGradient__QGradientData*)param1);
}

void q_gradient__qgradientdata_delete(void* self) {
    QGradient__QGradientData_Delete((QGradient__QGradientData*)(self));
}
