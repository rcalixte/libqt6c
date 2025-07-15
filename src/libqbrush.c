#include "libqcolor.hpp"
#include "libqimage.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqtransform.hpp"
#include "libqvariant.hpp"
#include "libqbrush.hpp"
#include "libqbrush.h"

QBrush* q_brush_new() {
    return QBrush_new();
}

QBrush* q_brush_new2(int64_t bs) {
    return QBrush_new2(bs);
}

QBrush* q_brush_new3(void* color) {
    return QBrush_new3((QColor*)color);
}

QBrush* q_brush_new4(int64_t color) {
    return QBrush_new4(color);
}

QBrush* q_brush_new5(void* color, void* pixmap) {
    return QBrush_new5((QColor*)color, (QPixmap*)pixmap);
}

QBrush* q_brush_new6(int64_t color, void* pixmap) {
    return QBrush_new6(color, (QPixmap*)pixmap);
}

QBrush* q_brush_new7(void* pixmap) {
    return QBrush_new7((QPixmap*)pixmap);
}

QBrush* q_brush_new8(void* image) {
    return QBrush_new8((QImage*)image);
}

QBrush* q_brush_new9(void* brush) {
    return QBrush_new9((QBrush*)brush);
}

QBrush* q_brush_new10(void* gradient) {
    return QBrush_new10((QGradient*)gradient);
}

QBrush* q_brush_new11(void* color, int64_t bs) {
    return QBrush_new11((QColor*)color, bs);
}

QBrush* q_brush_new12(int64_t color, int64_t bs) {
    return QBrush_new12(color, bs);
}

void q_brush_operator_assign(void* self, void* brush) {
    QBrush_OperatorAssign((QBrush*)self, (QBrush*)brush);
}

void q_brush_swap(void* self, void* other) {
    QBrush_Swap((QBrush*)self, (QBrush*)other);
}

QVariant* q_brush_to_q_variant(void* self) {
    return QBrush_ToQVariant((QBrush*)self);
}

int64_t q_brush_style(void* self) {
    return QBrush_Style((QBrush*)self);
}

void q_brush_set_style(void* self, int64_t style) {
    QBrush_SetStyle((QBrush*)self, style);
}

QTransform* q_brush_transform(void* self) {
    return QBrush_Transform((QBrush*)self);
}

void q_brush_set_transform(void* self, void* transform) {
    QBrush_SetTransform((QBrush*)self, (QTransform*)transform);
}

QPixmap* q_brush_texture(void* self) {
    return QBrush_Texture((QBrush*)self);
}

void q_brush_set_texture(void* self, void* pixmap) {
    QBrush_SetTexture((QBrush*)self, (QPixmap*)pixmap);
}

QImage* q_brush_texture_image(void* self) {
    return QBrush_TextureImage((QBrush*)self);
}

void q_brush_set_texture_image(void* self, void* image) {
    QBrush_SetTextureImage((QBrush*)self, (QImage*)image);
}

const QColor* q_brush_color(void* self) {
    return QBrush_Color((QBrush*)self);
}

void q_brush_set_color(void* self, void* color) {
    QBrush_SetColor((QBrush*)self, (QColor*)color);
}

void q_brush_set_color2(void* self, int64_t color) {
    QBrush_SetColor2((QBrush*)self, color);
}

const QGradient* q_brush_gradient(void* self) {
    return QBrush_Gradient((QBrush*)self);
}

bool q_brush_is_opaque(void* self) {
    return QBrush_IsOpaque((QBrush*)self);
}

bool q_brush_operator_equal(void* self, void* b) {
    return QBrush_OperatorEqual((QBrush*)self, (QBrush*)b);
}

bool q_brush_operator_not_equal(void* self, void* b) {
    return QBrush_OperatorNotEqual((QBrush*)self, (QBrush*)b);
}

bool q_brush_is_detached(void* self) {
    return QBrush_IsDetached((QBrush*)self);
}

void q_brush_delete(void* self) {
    QBrush_Delete((QBrush*)(self));
}

QBrushData* q_brushdata_new(void* param1) {
    return QBrushData_new((QBrushData*)param1);
}

void q_brushdata_operator_assign(void* self, void* param1) {
    QBrushData_OperatorAssign((QBrushData*)self, (QBrushData*)param1);
}

void q_brushdata_delete(void* self) {
    QBrushData_Delete((QBrushData*)(self));
}

QGradient* q_gradient_new() {
    return QGradient_new();
}

QGradient* q_gradient_new2(int64_t param1) {
    return QGradient_new2(param1);
}

QGradient* q_gradient_new3(void* param1) {
    return QGradient_new3((QGradient*)param1);
}

int64_t q_gradient_type(void* self) {
    return QGradient_Type((QGradient*)self);
}

void q_gradient_set_spread(void* self, int64_t spread) {
    QGradient_SetSpread((QGradient*)self, spread);
}

int64_t q_gradient_spread(void* self) {
    return QGradient_Spread((QGradient*)self);
}

void q_gradient_set_color_at(void* self, double pos, void* color) {
    QGradient_SetColorAt((QGradient*)self, pos, (QColor*)color);
}

libqt_list /* of libqt_pair  tuple of double and QColor*  */ q_gradient_stops(void* self) {
    libqt_list _arr = QGradient_Stops((QGradient*)self);
    return _arr;
}

int64_t q_gradient_coordinate_mode(void* self) {
    return QGradient_CoordinateMode((QGradient*)self);
}

void q_gradient_set_coordinate_mode(void* self, int64_t mode) {
    QGradient_SetCoordinateMode((QGradient*)self, mode);
}

int64_t q_gradient_interpolation_mode(void* self) {
    return QGradient_InterpolationMode((QGradient*)self);
}

void q_gradient_set_interpolation_mode(void* self, int64_t mode) {
    QGradient_SetInterpolationMode((QGradient*)self, mode);
}

bool q_gradient_operator_equal(void* self, void* gradient) {
    return QGradient_OperatorEqual((QGradient*)self, (QGradient*)gradient);
}

bool q_gradient_operator_not_equal(void* self, void* other) {
    return QGradient_OperatorNotEqual((QGradient*)self, (QGradient*)other);
}

void q_gradient_delete(void* self) {
    QGradient_Delete((QGradient*)(self));
}

QLinearGradient* q_lineargradient_new() {
    return QLinearGradient_new();
}

QLinearGradient* q_lineargradient_new2(void* start, void* finalStop) {
    return QLinearGradient_new2((QPointF*)start, (QPointF*)finalStop);
}

QLinearGradient* q_lineargradient_new3(double xStart, double yStart, double xFinalStop, double yFinalStop) {
    return QLinearGradient_new3(xStart, yStart, xFinalStop, yFinalStop);
}

QLinearGradient* q_lineargradient_new4(void* param1) {
    return QLinearGradient_new4((QLinearGradient*)param1);
}

QPointF* q_lineargradient_start(void* self) {
    return QLinearGradient_Start((QLinearGradient*)self);
}

void q_lineargradient_set_start(void* self, void* start) {
    QLinearGradient_SetStart((QLinearGradient*)self, (QPointF*)start);
}

void q_lineargradient_set_start2(void* self, double x, double y) {
    QLinearGradient_SetStart2((QLinearGradient*)self, x, y);
}

QPointF* q_lineargradient_final_stop(void* self) {
    return QLinearGradient_FinalStop((QLinearGradient*)self);
}

void q_lineargradient_set_final_stop(void* self, void* stop) {
    QLinearGradient_SetFinalStop((QLinearGradient*)self, (QPointF*)stop);
}

void q_lineargradient_set_final_stop2(void* self, double x, double y) {
    QLinearGradient_SetFinalStop2((QLinearGradient*)self, x, y);
}

int64_t q_lineargradient_type(void* self) {
    return QGradient_Type((QGradient*)self);
}

void q_lineargradient_set_spread(void* self, int64_t spread) {
    QGradient_SetSpread((QGradient*)self, spread);
}

int64_t q_lineargradient_spread(void* self) {
    return QGradient_Spread((QGradient*)self);
}

void q_lineargradient_set_color_at(void* self, double pos, void* color) {
    QGradient_SetColorAt((QGradient*)self, pos, (QColor*)color);
}

libqt_list /* of libqt_pair  tuple of double and QColor*  */ q_lineargradient_stops(void* self) {
    libqt_list _arr = QGradient_Stops((QGradient*)self);
    return _arr;
}

int64_t q_lineargradient_coordinate_mode(void* self) {
    return QGradient_CoordinateMode((QGradient*)self);
}

void q_lineargradient_set_coordinate_mode(void* self, int64_t mode) {
    QGradient_SetCoordinateMode((QGradient*)self, mode);
}

int64_t q_lineargradient_interpolation_mode(void* self) {
    return QGradient_InterpolationMode((QGradient*)self);
}

void q_lineargradient_set_interpolation_mode(void* self, int64_t mode) {
    QGradient_SetInterpolationMode((QGradient*)self, mode);
}

bool q_lineargradient_operator_equal(void* self, void* gradient) {
    return QGradient_OperatorEqual((QGradient*)self, (QGradient*)gradient);
}

bool q_lineargradient_operator_not_equal(void* self, void* other) {
    return QGradient_OperatorNotEqual((QGradient*)self, (QGradient*)other);
}

void q_lineargradient_delete(void* self) {
    QLinearGradient_Delete((QLinearGradient*)(self));
}

QRadialGradient* q_radialgradient_new() {
    return QRadialGradient_new();
}

QRadialGradient* q_radialgradient_new2(void* center, double radius, void* focalPoint) {
    return QRadialGradient_new2((QPointF*)center, radius, (QPointF*)focalPoint);
}

QRadialGradient* q_radialgradient_new3(double cx, double cy, double radius, double fx, double fy) {
    return QRadialGradient_new3(cx, cy, radius, fx, fy);
}

QRadialGradient* q_radialgradient_new4(void* center, double radius) {
    return QRadialGradient_new4((QPointF*)center, radius);
}

QRadialGradient* q_radialgradient_new5(double cx, double cy, double radius) {
    return QRadialGradient_new5(cx, cy, radius);
}

QRadialGradient* q_radialgradient_new6(void* center, double centerRadius, void* focalPoint, double focalRadius) {
    return QRadialGradient_new6((QPointF*)center, centerRadius, (QPointF*)focalPoint, focalRadius);
}

QRadialGradient* q_radialgradient_new7(double cx, double cy, double centerRadius, double fx, double fy, double focalRadius) {
    return QRadialGradient_new7(cx, cy, centerRadius, fx, fy, focalRadius);
}

QRadialGradient* q_radialgradient_new8(void* param1) {
    return QRadialGradient_new8((QRadialGradient*)param1);
}

QPointF* q_radialgradient_center(void* self) {
    return QRadialGradient_Center((QRadialGradient*)self);
}

void q_radialgradient_set_center(void* self, void* center) {
    QRadialGradient_SetCenter((QRadialGradient*)self, (QPointF*)center);
}

void q_radialgradient_set_center2(void* self, double x, double y) {
    QRadialGradient_SetCenter2((QRadialGradient*)self, x, y);
}

QPointF* q_radialgradient_focal_point(void* self) {
    return QRadialGradient_FocalPoint((QRadialGradient*)self);
}

void q_radialgradient_set_focal_point(void* self, void* focalPoint) {
    QRadialGradient_SetFocalPoint((QRadialGradient*)self, (QPointF*)focalPoint);
}

void q_radialgradient_set_focal_point2(void* self, double x, double y) {
    QRadialGradient_SetFocalPoint2((QRadialGradient*)self, x, y);
}

double q_radialgradient_radius(void* self) {
    return QRadialGradient_Radius((QRadialGradient*)self);
}

void q_radialgradient_set_radius(void* self, double radius) {
    QRadialGradient_SetRadius((QRadialGradient*)self, radius);
}

double q_radialgradient_center_radius(void* self) {
    return QRadialGradient_CenterRadius((QRadialGradient*)self);
}

void q_radialgradient_set_center_radius(void* self, double radius) {
    QRadialGradient_SetCenterRadius((QRadialGradient*)self, radius);
}

double q_radialgradient_focal_radius(void* self) {
    return QRadialGradient_FocalRadius((QRadialGradient*)self);
}

void q_radialgradient_set_focal_radius(void* self, double radius) {
    QRadialGradient_SetFocalRadius((QRadialGradient*)self, radius);
}

int64_t q_radialgradient_type(void* self) {
    return QGradient_Type((QGradient*)self);
}

void q_radialgradient_set_spread(void* self, int64_t spread) {
    QGradient_SetSpread((QGradient*)self, spread);
}

int64_t q_radialgradient_spread(void* self) {
    return QGradient_Spread((QGradient*)self);
}

void q_radialgradient_set_color_at(void* self, double pos, void* color) {
    QGradient_SetColorAt((QGradient*)self, pos, (QColor*)color);
}

libqt_list /* of libqt_pair  tuple of double and QColor*  */ q_radialgradient_stops(void* self) {
    libqt_list _arr = QGradient_Stops((QGradient*)self);
    return _arr;
}

int64_t q_radialgradient_coordinate_mode(void* self) {
    return QGradient_CoordinateMode((QGradient*)self);
}

void q_radialgradient_set_coordinate_mode(void* self, int64_t mode) {
    QGradient_SetCoordinateMode((QGradient*)self, mode);
}

int64_t q_radialgradient_interpolation_mode(void* self) {
    return QGradient_InterpolationMode((QGradient*)self);
}

void q_radialgradient_set_interpolation_mode(void* self, int64_t mode) {
    QGradient_SetInterpolationMode((QGradient*)self, mode);
}

bool q_radialgradient_operator_equal(void* self, void* gradient) {
    return QGradient_OperatorEqual((QGradient*)self, (QGradient*)gradient);
}

bool q_radialgradient_operator_not_equal(void* self, void* other) {
    return QGradient_OperatorNotEqual((QGradient*)self, (QGradient*)other);
}

void q_radialgradient_delete(void* self) {
    QRadialGradient_Delete((QRadialGradient*)(self));
}

QConicalGradient* q_conicalgradient_new() {
    return QConicalGradient_new();
}

QConicalGradient* q_conicalgradient_new2(void* center, double startAngle) {
    return QConicalGradient_new2((QPointF*)center, startAngle);
}

QConicalGradient* q_conicalgradient_new3(double cx, double cy, double startAngle) {
    return QConicalGradient_new3(cx, cy, startAngle);
}

QConicalGradient* q_conicalgradient_new4(void* param1) {
    return QConicalGradient_new4((QConicalGradient*)param1);
}

QPointF* q_conicalgradient_center(void* self) {
    return QConicalGradient_Center((QConicalGradient*)self);
}

void q_conicalgradient_set_center(void* self, void* center) {
    QConicalGradient_SetCenter((QConicalGradient*)self, (QPointF*)center);
}

void q_conicalgradient_set_center2(void* self, double x, double y) {
    QConicalGradient_SetCenter2((QConicalGradient*)self, x, y);
}

double q_conicalgradient_angle(void* self) {
    return QConicalGradient_Angle((QConicalGradient*)self);
}

void q_conicalgradient_set_angle(void* self, double angle) {
    QConicalGradient_SetAngle((QConicalGradient*)self, angle);
}

int64_t q_conicalgradient_type(void* self) {
    return QGradient_Type((QGradient*)self);
}

void q_conicalgradient_set_spread(void* self, int64_t spread) {
    QGradient_SetSpread((QGradient*)self, spread);
}

int64_t q_conicalgradient_spread(void* self) {
    return QGradient_Spread((QGradient*)self);
}

void q_conicalgradient_set_color_at(void* self, double pos, void* color) {
    QGradient_SetColorAt((QGradient*)self, pos, (QColor*)color);
}

libqt_list /* of libqt_pair  tuple of double and QColor*  */ q_conicalgradient_stops(void* self) {
    libqt_list _arr = QGradient_Stops((QGradient*)self);
    return _arr;
}

int64_t q_conicalgradient_coordinate_mode(void* self) {
    return QGradient_CoordinateMode((QGradient*)self);
}

void q_conicalgradient_set_coordinate_mode(void* self, int64_t mode) {
    QGradient_SetCoordinateMode((QGradient*)self, mode);
}

int64_t q_conicalgradient_interpolation_mode(void* self) {
    return QGradient_InterpolationMode((QGradient*)self);
}

void q_conicalgradient_set_interpolation_mode(void* self, int64_t mode) {
    QGradient_SetInterpolationMode((QGradient*)self, mode);
}

bool q_conicalgradient_operator_equal(void* self, void* gradient) {
    return QGradient_OperatorEqual((QGradient*)self, (QGradient*)gradient);
}

bool q_conicalgradient_operator_not_equal(void* self, void* other) {
    return QGradient_OperatorNotEqual((QGradient*)self, (QGradient*)other);
}

void q_conicalgradient_delete(void* self) {
    QConicalGradient_Delete((QConicalGradient*)(self));
}

QGradient__QGradientData* q_gradient__qgradientdata_new(void* param1) {
    return QGradient__QGradientData_new((QGradient__QGradientData*)param1);
}

void q_gradient__qgradientdata_delete(void* self) {
    QGradient__QGradientData_Delete((QGradient__QGradientData*)(self));
}
