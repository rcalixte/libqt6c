#include "libqcolor.hpp"
#include "libqimage.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqtransform.hpp"
#include "libqvariant.hpp"
#include "libqbrush.hpp"
#include "libqbrush.h"

/// https://doc.qt.io/qt-6/qbrush.html

/// q_brush_new constructs a new QBrush object.
///
///
QBrush* q_brush_new() {
    return QBrush_new();
}

/// q_brush_new2 constructs a new QBrush object.
///
/// ``` enum Qt__BrushStyle bs ```
QBrush* q_brush_new2(int64_t bs) {
    return QBrush_new2(bs);
}

/// q_brush_new3 constructs a new QBrush object.
///
/// ``` QColor* color ```
QBrush* q_brush_new3(void* color) {
    return QBrush_new3((QColor*)color);
}

/// q_brush_new4 constructs a new QBrush object.
///
/// ``` enum Qt__GlobalColor color ```
QBrush* q_brush_new4(int64_t color) {
    return QBrush_new4(color);
}

/// q_brush_new5 constructs a new QBrush object.
///
/// ``` QColor* color, QPixmap* pixmap ```
QBrush* q_brush_new5(void* color, void* pixmap) {
    return QBrush_new5((QColor*)color, (QPixmap*)pixmap);
}

/// q_brush_new6 constructs a new QBrush object.
///
/// ``` enum Qt__GlobalColor color, QPixmap* pixmap ```
QBrush* q_brush_new6(int64_t color, void* pixmap) {
    return QBrush_new6(color, (QPixmap*)pixmap);
}

/// q_brush_new7 constructs a new QBrush object.
///
/// ``` QPixmap* pixmap ```
QBrush* q_brush_new7(void* pixmap) {
    return QBrush_new7((QPixmap*)pixmap);
}

/// q_brush_new8 constructs a new QBrush object.
///
/// ``` QImage* image ```
QBrush* q_brush_new8(void* image) {
    return QBrush_new8((QImage*)image);
}

/// q_brush_new9 constructs a new QBrush object.
///
/// ``` QBrush* brush ```
QBrush* q_brush_new9(void* brush) {
    return QBrush_new9((QBrush*)brush);
}

/// q_brush_new10 constructs a new QBrush object.
///
/// ``` QGradient* gradient ```
QBrush* q_brush_new10(void* gradient) {
    return QBrush_new10((QGradient*)gradient);
}

/// q_brush_new11 constructs a new QBrush object.
///
/// ``` QColor* color, enum Qt__BrushStyle bs ```
QBrush* q_brush_new11(void* color, int64_t bs) {
    return QBrush_new11((QColor*)color, bs);
}

/// q_brush_new12 constructs a new QBrush object.
///
/// ``` enum Qt__GlobalColor color, enum Qt__BrushStyle bs ```
QBrush* q_brush_new12(int64_t color, int64_t bs) {
    return QBrush_new12(color, bs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbrush.html#operator=)
///
/// ``` QBrush* self, QBrush* brush ```
void q_brush_operator_assign(void* self, void* brush) {
    QBrush_OperatorAssign((QBrush*)self, (QBrush*)brush);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbrush.html#swap)
///
/// ``` QBrush* self, QBrush* other ```
void q_brush_swap(void* self, void* other) {
    QBrush_Swap((QBrush*)self, (QBrush*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbrush.html#operator QVariant)
///
/// ``` QBrush* self ```
QVariant* q_brush_to_q_variant(void* self) {
    return QBrush_ToQVariant((QBrush*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbrush.html#style)
///
/// ``` QBrush* self ```
int64_t q_brush_style(void* self) {
    return QBrush_Style((QBrush*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbrush.html#setStyle)
///
/// ``` QBrush* self, enum Qt__BrushStyle style ```
void q_brush_set_style(void* self, int64_t style) {
    QBrush_SetStyle((QBrush*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbrush.html#transform)
///
/// ``` QBrush* self ```
QTransform* q_brush_transform(void* self) {
    return QBrush_Transform((QBrush*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbrush.html#setTransform)
///
/// ``` QBrush* self, QTransform* transform ```
void q_brush_set_transform(void* self, void* transform) {
    QBrush_SetTransform((QBrush*)self, (QTransform*)transform);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbrush.html#texture)
///
/// ``` QBrush* self ```
QPixmap* q_brush_texture(void* self) {
    return QBrush_Texture((QBrush*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbrush.html#setTexture)
///
/// ``` QBrush* self, QPixmap* pixmap ```
void q_brush_set_texture(void* self, void* pixmap) {
    QBrush_SetTexture((QBrush*)self, (QPixmap*)pixmap);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbrush.html#textureImage)
///
/// ``` QBrush* self ```
QImage* q_brush_texture_image(void* self) {
    return QBrush_TextureImage((QBrush*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbrush.html#setTextureImage)
///
/// ``` QBrush* self, QImage* image ```
void q_brush_set_texture_image(void* self, void* image) {
    QBrush_SetTextureImage((QBrush*)self, (QImage*)image);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbrush.html#color)
///
/// ``` QBrush* self ```
QColor* q_brush_color(void* self) {
    return QBrush_Color((QBrush*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbrush.html#setColor)
///
/// ``` QBrush* self, QColor* color ```
void q_brush_set_color(void* self, void* color) {
    QBrush_SetColor((QBrush*)self, (QColor*)color);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbrush.html#setColor)
///
/// ``` QBrush* self, enum Qt__GlobalColor color ```
void q_brush_set_color_with_color(void* self, int64_t color) {
    QBrush_SetColorWithColor((QBrush*)self, color);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbrush.html#gradient)
///
/// ``` QBrush* self ```
QGradient* q_brush_gradient(void* self) {
    return QBrush_Gradient((QBrush*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbrush.html#isOpaque)
///
/// ``` QBrush* self ```
bool q_brush_is_opaque(void* self) {
    return QBrush_IsOpaque((QBrush*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbrush.html#operator==)
///
/// ``` QBrush* self, QBrush* b ```
bool q_brush_operator_equal(void* self, void* b) {
    return QBrush_OperatorEqual((QBrush*)self, (QBrush*)b);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbrush.html#operator!=)
///
/// ``` QBrush* self, QBrush* b ```
bool q_brush_operator_not_equal(void* self, void* b) {
    return QBrush_OperatorNotEqual((QBrush*)self, (QBrush*)b);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbrush.html#isDetached)
///
/// ``` QBrush* self ```
bool q_brush_is_detached(void* self) {
    return QBrush_IsDetached((QBrush*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QBrush* self ```
void q_brush_delete(void* self) {
    QBrush_Delete((QBrush*)(self));
}

/// https://doc.qt.io/qt-6/qbrushdata.html

/// q_brushdata_new constructs a new QBrushData object.
///
/// ``` QBrushData* param1 ```
QBrushData* q_brushdata_new(void* param1) {
    return QBrushData_new((QBrushData*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbrushdata.html#operator=)
///
/// ``` QBrushData* self, QBrushData* param1 ```
void q_brushdata_operator_assign(void* self, void* param1) {
    QBrushData_OperatorAssign((QBrushData*)self, (QBrushData*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QBrushData* self ```
void q_brushdata_delete(void* self) {
    QBrushData_Delete((QBrushData*)(self));
}

/// https://doc.qt.io/qt-6/qgradient.html

/// q_gradient_new constructs a new QGradient object.
///
///
QGradient* q_gradient_new() {
    return QGradient_new();
}

/// q_gradient_new2 constructs a new QGradient object.
///
/// ``` enum QGradient__Preset param1 ```
QGradient* q_gradient_new2(int64_t param1) {
    return QGradient_new2(param1);
}

/// q_gradient_new3 constructs a new QGradient object.
///
/// ``` QGradient* param1 ```
QGradient* q_gradient_new3(void* param1) {
    return QGradient_new3((QGradient*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#type)
///
/// ``` QGradient* self ```
int64_t q_gradient_type(void* self) {
    return QGradient_Type((QGradient*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#setSpread)
///
/// ``` QGradient* self, enum QGradient__Spread spread ```
void q_gradient_set_spread(void* self, int64_t spread) {
    QGradient_SetSpread((QGradient*)self, spread);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#spread)
///
/// ``` QGradient* self ```
int64_t q_gradient_spread(void* self) {
    return QGradient_Spread((QGradient*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#setColorAt)
///
/// ``` QGradient* self, double pos, QColor* color ```
void q_gradient_set_color_at(void* self, double pos, void* color) {
    QGradient_SetColorAt((QGradient*)self, pos, (QColor*)color);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#stops)
///
/// ``` QGradient* self ```
libqt_list /* of libqt_pair  tuple of double and QColor*  */ q_gradient_stops(void* self) {
    libqt_list _arr = QGradient_Stops((QGradient*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#coordinateMode)
///
/// ``` QGradient* self ```
int64_t q_gradient_coordinate_mode(void* self) {
    return QGradient_CoordinateMode((QGradient*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#setCoordinateMode)
///
/// ``` QGradient* self, enum QGradient__CoordinateMode mode ```
void q_gradient_set_coordinate_mode(void* self, int64_t mode) {
    QGradient_SetCoordinateMode((QGradient*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#interpolationMode)
///
/// ``` QGradient* self ```
int64_t q_gradient_interpolation_mode(void* self) {
    return QGradient_InterpolationMode((QGradient*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#setInterpolationMode)
///
/// ``` QGradient* self, enum QGradient__InterpolationMode mode ```
void q_gradient_set_interpolation_mode(void* self, int64_t mode) {
    QGradient_SetInterpolationMode((QGradient*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#operator==)
///
/// ``` QGradient* self, QGradient* gradient ```
bool q_gradient_operator_equal(void* self, void* gradient) {
    return QGradient_OperatorEqual((QGradient*)self, (QGradient*)gradient);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#operator!=)
///
/// ``` QGradient* self, QGradient* other ```
bool q_gradient_operator_not_equal(void* self, void* other) {
    return QGradient_OperatorNotEqual((QGradient*)self, (QGradient*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QGradient* self ```
void q_gradient_delete(void* self) {
    QGradient_Delete((QGradient*)(self));
}

/// https://doc.qt.io/qt-6/qlineargradient.html

/// q_lineargradient_new constructs a new QLinearGradient object.
///
///
QLinearGradient* q_lineargradient_new() {
    return QLinearGradient_new();
}

/// q_lineargradient_new2 constructs a new QLinearGradient object.
///
/// ``` QPointF* start, QPointF* finalStop ```
QLinearGradient* q_lineargradient_new2(void* start, void* finalStop) {
    return QLinearGradient_new2((QPointF*)start, (QPointF*)finalStop);
}

/// q_lineargradient_new3 constructs a new QLinearGradient object.
///
/// ``` double xStart, double yStart, double xFinalStop, double yFinalStop ```
QLinearGradient* q_lineargradient_new3(double xStart, double yStart, double xFinalStop, double yFinalStop) {
    return QLinearGradient_new3(xStart, yStart, xFinalStop, yFinalStop);
}

/// q_lineargradient_new4 constructs a new QLinearGradient object.
///
/// ``` QLinearGradient* param1 ```
QLinearGradient* q_lineargradient_new4(void* param1) {
    return QLinearGradient_new4((QLinearGradient*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineargradient.html#start)
///
/// ``` QLinearGradient* self ```
QPointF* q_lineargradient_start(void* self) {
    return QLinearGradient_Start((QLinearGradient*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineargradient.html#setStart)
///
/// ``` QLinearGradient* self, QPointF* start ```
void q_lineargradient_set_start(void* self, void* start) {
    QLinearGradient_SetStart((QLinearGradient*)self, (QPointF*)start);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineargradient.html#setStart)
///
/// ``` QLinearGradient* self, double x, double y ```
void q_lineargradient_set_start2(void* self, double x, double y) {
    QLinearGradient_SetStart2((QLinearGradient*)self, x, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineargradient.html#finalStop)
///
/// ``` QLinearGradient* self ```
QPointF* q_lineargradient_final_stop(void* self) {
    return QLinearGradient_FinalStop((QLinearGradient*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineargradient.html#setFinalStop)
///
/// ``` QLinearGradient* self, QPointF* stop ```
void q_lineargradient_set_final_stop(void* self, void* stop) {
    QLinearGradient_SetFinalStop((QLinearGradient*)self, (QPointF*)stop);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlineargradient.html#setFinalStop)
///
/// ``` QLinearGradient* self, double x, double y ```
void q_lineargradient_set_final_stop2(void* self, double x, double y) {
    QLinearGradient_SetFinalStop2((QLinearGradient*)self, x, y);
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#type)
///
/// ``` QLinearGradient* self ```
int64_t q_lineargradient_type(void* self) {
    return QGradient_Type((QGradient*)self);
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#setSpread)
///
/// ``` QLinearGradient* self, enum QGradient__Spread spread ```
void q_lineargradient_set_spread(void* self, int64_t spread) {
    QGradient_SetSpread((QGradient*)self, spread);
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#spread)
///
/// ``` QLinearGradient* self ```
int64_t q_lineargradient_spread(void* self) {
    return QGradient_Spread((QGradient*)self);
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#setColorAt)
///
/// ``` QLinearGradient* self, double pos, QColor* color ```
void q_lineargradient_set_color_at(void* self, double pos, void* color) {
    QGradient_SetColorAt((QGradient*)self, pos, (QColor*)color);
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#stops)
///
/// ``` QLinearGradient* self ```
libqt_list /* of libqt_pair  tuple of double and QColor*  */ q_lineargradient_stops(void* self) {
    libqt_list _arr = QGradient_Stops((QGradient*)self);
    return _arr;
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#coordinateMode)
///
/// ``` QLinearGradient* self ```
int64_t q_lineargradient_coordinate_mode(void* self) {
    return QGradient_CoordinateMode((QGradient*)self);
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#setCoordinateMode)
///
/// ``` QLinearGradient* self, enum QGradient__CoordinateMode mode ```
void q_lineargradient_set_coordinate_mode(void* self, int64_t mode) {
    QGradient_SetCoordinateMode((QGradient*)self, mode);
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#interpolationMode)
///
/// ``` QLinearGradient* self ```
int64_t q_lineargradient_interpolation_mode(void* self) {
    return QGradient_InterpolationMode((QGradient*)self);
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#setInterpolationMode)
///
/// ``` QLinearGradient* self, enum QGradient__InterpolationMode mode ```
void q_lineargradient_set_interpolation_mode(void* self, int64_t mode) {
    QGradient_SetInterpolationMode((QGradient*)self, mode);
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#operator==)
///
/// ``` QLinearGradient* self, QGradient* gradient ```
bool q_lineargradient_operator_equal(void* self, void* gradient) {
    return QGradient_OperatorEqual((QGradient*)self, (QGradient*)gradient);
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#operator!=)
///
/// ``` QLinearGradient* self, QGradient* other ```
bool q_lineargradient_operator_not_equal(void* self, void* other) {
    return QGradient_OperatorNotEqual((QGradient*)self, (QGradient*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QLinearGradient* self ```
void q_lineargradient_delete(void* self) {
    QLinearGradient_Delete((QLinearGradient*)(self));
}

/// https://doc.qt.io/qt-6/qradialgradient.html

/// q_radialgradient_new constructs a new QRadialGradient object.
///
///
QRadialGradient* q_radialgradient_new() {
    return QRadialGradient_new();
}

/// q_radialgradient_new2 constructs a new QRadialGradient object.
///
/// ``` QPointF* center, double radius, QPointF* focalPoint ```
QRadialGradient* q_radialgradient_new2(void* center, double radius, void* focalPoint) {
    return QRadialGradient_new2((QPointF*)center, radius, (QPointF*)focalPoint);
}

/// q_radialgradient_new3 constructs a new QRadialGradient object.
///
/// ``` double cx, double cy, double radius, double fx, double fy ```
QRadialGradient* q_radialgradient_new3(double cx, double cy, double radius, double fx, double fy) {
    return QRadialGradient_new3(cx, cy, radius, fx, fy);
}

/// q_radialgradient_new4 constructs a new QRadialGradient object.
///
/// ``` QPointF* center, double radius ```
QRadialGradient* q_radialgradient_new4(void* center, double radius) {
    return QRadialGradient_new4((QPointF*)center, radius);
}

/// q_radialgradient_new5 constructs a new QRadialGradient object.
///
/// ``` double cx, double cy, double radius ```
QRadialGradient* q_radialgradient_new5(double cx, double cy, double radius) {
    return QRadialGradient_new5(cx, cy, radius);
}

/// q_radialgradient_new6 constructs a new QRadialGradient object.
///
/// ``` QPointF* center, double centerRadius, QPointF* focalPoint, double focalRadius ```
QRadialGradient* q_radialgradient_new6(void* center, double centerRadius, void* focalPoint, double focalRadius) {
    return QRadialGradient_new6((QPointF*)center, centerRadius, (QPointF*)focalPoint, focalRadius);
}

/// q_radialgradient_new7 constructs a new QRadialGradient object.
///
/// ``` double cx, double cy, double centerRadius, double fx, double fy, double focalRadius ```
QRadialGradient* q_radialgradient_new7(double cx, double cy, double centerRadius, double fx, double fy, double focalRadius) {
    return QRadialGradient_new7(cx, cy, centerRadius, fx, fy, focalRadius);
}

/// q_radialgradient_new8 constructs a new QRadialGradient object.
///
/// ``` QRadialGradient* param1 ```
QRadialGradient* q_radialgradient_new8(void* param1) {
    return QRadialGradient_new8((QRadialGradient*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qradialgradient.html#center)
///
/// ``` QRadialGradient* self ```
QPointF* q_radialgradient_center(void* self) {
    return QRadialGradient_Center((QRadialGradient*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qradialgradient.html#setCenter)
///
/// ``` QRadialGradient* self, QPointF* center ```
void q_radialgradient_set_center(void* self, void* center) {
    QRadialGradient_SetCenter((QRadialGradient*)self, (QPointF*)center);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qradialgradient.html#setCenter)
///
/// ``` QRadialGradient* self, double x, double y ```
void q_radialgradient_set_center2(void* self, double x, double y) {
    QRadialGradient_SetCenter2((QRadialGradient*)self, x, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qradialgradient.html#focalPoint)
///
/// ``` QRadialGradient* self ```
QPointF* q_radialgradient_focal_point(void* self) {
    return QRadialGradient_FocalPoint((QRadialGradient*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qradialgradient.html#setFocalPoint)
///
/// ``` QRadialGradient* self, QPointF* focalPoint ```
void q_radialgradient_set_focal_point(void* self, void* focalPoint) {
    QRadialGradient_SetFocalPoint((QRadialGradient*)self, (QPointF*)focalPoint);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qradialgradient.html#setFocalPoint)
///
/// ``` QRadialGradient* self, double x, double y ```
void q_radialgradient_set_focal_point2(void* self, double x, double y) {
    QRadialGradient_SetFocalPoint2((QRadialGradient*)self, x, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qradialgradient.html#radius)
///
/// ``` QRadialGradient* self ```
double q_radialgradient_radius(void* self) {
    return QRadialGradient_Radius((QRadialGradient*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qradialgradient.html#setRadius)
///
/// ``` QRadialGradient* self, double radius ```
void q_radialgradient_set_radius(void* self, double radius) {
    QRadialGradient_SetRadius((QRadialGradient*)self, radius);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qradialgradient.html#centerRadius)
///
/// ``` QRadialGradient* self ```
double q_radialgradient_center_radius(void* self) {
    return QRadialGradient_CenterRadius((QRadialGradient*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qradialgradient.html#setCenterRadius)
///
/// ``` QRadialGradient* self, double radius ```
void q_radialgradient_set_center_radius(void* self, double radius) {
    QRadialGradient_SetCenterRadius((QRadialGradient*)self, radius);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qradialgradient.html#focalRadius)
///
/// ``` QRadialGradient* self ```
double q_radialgradient_focal_radius(void* self) {
    return QRadialGradient_FocalRadius((QRadialGradient*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qradialgradient.html#setFocalRadius)
///
/// ``` QRadialGradient* self, double radius ```
void q_radialgradient_set_focal_radius(void* self, double radius) {
    QRadialGradient_SetFocalRadius((QRadialGradient*)self, radius);
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#type)
///
/// ``` QRadialGradient* self ```
int64_t q_radialgradient_type(void* self) {
    return QGradient_Type((QGradient*)self);
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#setSpread)
///
/// ``` QRadialGradient* self, enum QGradient__Spread spread ```
void q_radialgradient_set_spread(void* self, int64_t spread) {
    QGradient_SetSpread((QGradient*)self, spread);
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#spread)
///
/// ``` QRadialGradient* self ```
int64_t q_radialgradient_spread(void* self) {
    return QGradient_Spread((QGradient*)self);
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#setColorAt)
///
/// ``` QRadialGradient* self, double pos, QColor* color ```
void q_radialgradient_set_color_at(void* self, double pos, void* color) {
    QGradient_SetColorAt((QGradient*)self, pos, (QColor*)color);
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#stops)
///
/// ``` QRadialGradient* self ```
libqt_list /* of libqt_pair  tuple of double and QColor*  */ q_radialgradient_stops(void* self) {
    libqt_list _arr = QGradient_Stops((QGradient*)self);
    return _arr;
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#coordinateMode)
///
/// ``` QRadialGradient* self ```
int64_t q_radialgradient_coordinate_mode(void* self) {
    return QGradient_CoordinateMode((QGradient*)self);
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#setCoordinateMode)
///
/// ``` QRadialGradient* self, enum QGradient__CoordinateMode mode ```
void q_radialgradient_set_coordinate_mode(void* self, int64_t mode) {
    QGradient_SetCoordinateMode((QGradient*)self, mode);
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#interpolationMode)
///
/// ``` QRadialGradient* self ```
int64_t q_radialgradient_interpolation_mode(void* self) {
    return QGradient_InterpolationMode((QGradient*)self);
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#setInterpolationMode)
///
/// ``` QRadialGradient* self, enum QGradient__InterpolationMode mode ```
void q_radialgradient_set_interpolation_mode(void* self, int64_t mode) {
    QGradient_SetInterpolationMode((QGradient*)self, mode);
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#operator==)
///
/// ``` QRadialGradient* self, QGradient* gradient ```
bool q_radialgradient_operator_equal(void* self, void* gradient) {
    return QGradient_OperatorEqual((QGradient*)self, (QGradient*)gradient);
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#operator!=)
///
/// ``` QRadialGradient* self, QGradient* other ```
bool q_radialgradient_operator_not_equal(void* self, void* other) {
    return QGradient_OperatorNotEqual((QGradient*)self, (QGradient*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QRadialGradient* self ```
void q_radialgradient_delete(void* self) {
    QRadialGradient_Delete((QRadialGradient*)(self));
}

/// https://doc.qt.io/qt-6/qconicalgradient.html

/// q_conicalgradient_new constructs a new QConicalGradient object.
///
///
QConicalGradient* q_conicalgradient_new() {
    return QConicalGradient_new();
}

/// q_conicalgradient_new2 constructs a new QConicalGradient object.
///
/// ``` QPointF* center, double startAngle ```
QConicalGradient* q_conicalgradient_new2(void* center, double startAngle) {
    return QConicalGradient_new2((QPointF*)center, startAngle);
}

/// q_conicalgradient_new3 constructs a new QConicalGradient object.
///
/// ``` double cx, double cy, double startAngle ```
QConicalGradient* q_conicalgradient_new3(double cx, double cy, double startAngle) {
    return QConicalGradient_new3(cx, cy, startAngle);
}

/// q_conicalgradient_new4 constructs a new QConicalGradient object.
///
/// ``` QConicalGradient* param1 ```
QConicalGradient* q_conicalgradient_new4(void* param1) {
    return QConicalGradient_new4((QConicalGradient*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qconicalgradient.html#center)
///
/// ``` QConicalGradient* self ```
QPointF* q_conicalgradient_center(void* self) {
    return QConicalGradient_Center((QConicalGradient*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qconicalgradient.html#setCenter)
///
/// ``` QConicalGradient* self, QPointF* center ```
void q_conicalgradient_set_center(void* self, void* center) {
    QConicalGradient_SetCenter((QConicalGradient*)self, (QPointF*)center);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qconicalgradient.html#setCenter)
///
/// ``` QConicalGradient* self, double x, double y ```
void q_conicalgradient_set_center2(void* self, double x, double y) {
    QConicalGradient_SetCenter2((QConicalGradient*)self, x, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qconicalgradient.html#angle)
///
/// ``` QConicalGradient* self ```
double q_conicalgradient_angle(void* self) {
    return QConicalGradient_Angle((QConicalGradient*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qconicalgradient.html#setAngle)
///
/// ``` QConicalGradient* self, double angle ```
void q_conicalgradient_set_angle(void* self, double angle) {
    QConicalGradient_SetAngle((QConicalGradient*)self, angle);
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#type)
///
/// ``` QConicalGradient* self ```
int64_t q_conicalgradient_type(void* self) {
    return QGradient_Type((QGradient*)self);
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#setSpread)
///
/// ``` QConicalGradient* self, enum QGradient__Spread spread ```
void q_conicalgradient_set_spread(void* self, int64_t spread) {
    QGradient_SetSpread((QGradient*)self, spread);
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#spread)
///
/// ``` QConicalGradient* self ```
int64_t q_conicalgradient_spread(void* self) {
    return QGradient_Spread((QGradient*)self);
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#setColorAt)
///
/// ``` QConicalGradient* self, double pos, QColor* color ```
void q_conicalgradient_set_color_at(void* self, double pos, void* color) {
    QGradient_SetColorAt((QGradient*)self, pos, (QColor*)color);
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#stops)
///
/// ``` QConicalGradient* self ```
libqt_list /* of libqt_pair  tuple of double and QColor*  */ q_conicalgradient_stops(void* self) {
    libqt_list _arr = QGradient_Stops((QGradient*)self);
    return _arr;
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#coordinateMode)
///
/// ``` QConicalGradient* self ```
int64_t q_conicalgradient_coordinate_mode(void* self) {
    return QGradient_CoordinateMode((QGradient*)self);
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#setCoordinateMode)
///
/// ``` QConicalGradient* self, enum QGradient__CoordinateMode mode ```
void q_conicalgradient_set_coordinate_mode(void* self, int64_t mode) {
    QGradient_SetCoordinateMode((QGradient*)self, mode);
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#interpolationMode)
///
/// ``` QConicalGradient* self ```
int64_t q_conicalgradient_interpolation_mode(void* self) {
    return QGradient_InterpolationMode((QGradient*)self);
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#setInterpolationMode)
///
/// ``` QConicalGradient* self, enum QGradient__InterpolationMode mode ```
void q_conicalgradient_set_interpolation_mode(void* self, int64_t mode) {
    QGradient_SetInterpolationMode((QGradient*)self, mode);
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#operator==)
///
/// ``` QConicalGradient* self, QGradient* gradient ```
bool q_conicalgradient_operator_equal(void* self, void* gradient) {
    return QGradient_OperatorEqual((QGradient*)self, (QGradient*)gradient);
}

/// Inherited from QGradient
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgradient.html#operator!=)
///
/// ``` QConicalGradient* self, QGradient* other ```
bool q_conicalgradient_operator_not_equal(void* self, void* other) {
    return QGradient_OperatorNotEqual((QGradient*)self, (QGradient*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QConicalGradient* self ```
void q_conicalgradient_delete(void* self) {
    QConicalGradient_Delete((QConicalGradient*)(self));
}

/// https://doc.qt.io/qt-6/qgradient-qgradientdata.html

/// q_gradient__qgradientdata_new constructs a new QGradient::QGradientData object.
///
/// ``` QGradient__QGradientData* param1 ```
QGradient__QGradientData* q_gradient__qgradientdata_new(void* param1) {
    return QGradient__QGradientData_new((QGradient__QGradientData*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QGradient__QGradientData* self ```
void q_gradient__qgradientdata_delete(void* self) {
    QGradient__QGradientData_Delete((QGradient__QGradientData*)(self));
}