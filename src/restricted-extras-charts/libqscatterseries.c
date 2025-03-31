#include "libqabstractaxis.hpp"
#include "libqabstractseries.hpp"
#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqbrush.hpp"
#include "libqchart.hpp"
#include "../libqevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqimage.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqpen.hpp"
#include "../libqpoint.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "libqxyseries.hpp"
#include "../libqcoreevent.hpp"
#include "libqscatterseries.hpp"
#include "libqscatterseries.h"

/// https://doc.qt.io/qt-6/qscatterseries.html

/// q_scatterseries_new constructs a new QScatterSeries object.
///
///
QScatterSeries* q_scatterseries_new() {
    return QScatterSeries_new();
}

/// q_scatterseries_new2 constructs a new QScatterSeries object.
///
/// ``` QObject* parent ```
QScatterSeries* q_scatterseries_new2(void* parent) {
    return QScatterSeries_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QScatterSeries* self ```
QMetaObject* q_scatterseries_meta_object(void* self) {
    return QScatterSeries_MetaObject((QScatterSeries*)self);
}

/// ``` QScatterSeries* self, const char* param1 ```
void* q_scatterseries_metacast(void* self, const char* param1) {
    return QScatterSeries_Metacast((QScatterSeries*)self, param1);
}

/// ``` QScatterSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scatterseries_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QScatterSeries_Metacall((QScatterSeries*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QScatterSeries* self, int32_t (*slot)(QScatterSeries*, enum QMetaObject__Call, int, void*) ```
void q_scatterseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QScatterSeries_OnMetacall((QScatterSeries*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QScatterSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scatterseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QScatterSeries_QBaseMetacall((QScatterSeries*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scatterseries_tr(const char* s) {
    libqt_string _str = QScatterSeries_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries.html#type)
///
/// ``` QScatterSeries* self ```
int64_t q_scatterseries_type(void* self) {
    return QScatterSeries_Type((QScatterSeries*)self);
}

/// Allows for overriding the related default method
///
/// ``` QScatterSeries* self, int64_t (*slot)() ```
void q_scatterseries_on_type(void* self, int64_t (*slot)()) {
    QScatterSeries_OnType((QScatterSeries*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QScatterSeries* self ```
int64_t q_scatterseries_qbase_type(void* self) {
    return QScatterSeries_QBaseType((QScatterSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries.html#setPen)
///
/// ``` QScatterSeries* self, QPen* pen ```
void q_scatterseries_set_pen(void* self, void* pen) {
    QScatterSeries_SetPen((QScatterSeries*)self, (QPen*)pen);
}

/// Allows for overriding the related default method
///
/// ``` QScatterSeries* self, void (*slot)(QScatterSeries*, QPen*) ```
void q_scatterseries_on_set_pen(void* self, void (*slot)(void*, void*)) {
    QScatterSeries_OnSetPen((QScatterSeries*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QScatterSeries* self, QPen* pen ```
void q_scatterseries_qbase_set_pen(void* self, void* pen) {
    QScatterSeries_QBaseSetPen((QScatterSeries*)self, (QPen*)pen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries.html#setBrush)
///
/// ``` QScatterSeries* self, QBrush* brush ```
void q_scatterseries_set_brush(void* self, void* brush) {
    QScatterSeries_SetBrush((QScatterSeries*)self, (QBrush*)brush);
}

/// Allows for overriding the related default method
///
/// ``` QScatterSeries* self, void (*slot)(QScatterSeries*, QBrush*) ```
void q_scatterseries_on_set_brush(void* self, void (*slot)(void*, void*)) {
    QScatterSeries_OnSetBrush((QScatterSeries*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QScatterSeries* self, QBrush* brush ```
void q_scatterseries_qbase_set_brush(void* self, void* brush) {
    QScatterSeries_QBaseSetBrush((QScatterSeries*)self, (QBrush*)brush);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries.html#brush)
///
/// ``` QScatterSeries* self ```
QBrush* q_scatterseries_brush(void* self) {
    return QScatterSeries_Brush((QScatterSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries.html#setColor)
///
/// ``` QScatterSeries* self, QColor* color ```
void q_scatterseries_set_color(void* self, void* color) {
    QScatterSeries_SetColor((QScatterSeries*)self, (QColor*)color);
}

/// Allows for overriding the related default method
///
/// ``` QScatterSeries* self, void (*slot)(QScatterSeries*, QColor*) ```
void q_scatterseries_on_set_color(void* self, void (*slot)(void*, void*)) {
    QScatterSeries_OnSetColor((QScatterSeries*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QScatterSeries* self, QColor* color ```
void q_scatterseries_qbase_set_color(void* self, void* color) {
    QScatterSeries_QBaseSetColor((QScatterSeries*)self, (QColor*)color);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries.html#color)
///
/// ``` QScatterSeries* self ```
QColor* q_scatterseries_color(void* self) {
    return QScatterSeries_Color((QScatterSeries*)self);
}

/// Allows for overriding the related default method
///
/// ``` QScatterSeries* self, QColor* (*slot)() ```
void q_scatterseries_on_color(void* self, QColor* (*slot)()) {
    QScatterSeries_OnColor((QScatterSeries*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QScatterSeries* self ```
QColor* q_scatterseries_qbase_color(void* self) {
    return QScatterSeries_QBaseColor((QScatterSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries.html#setBorderColor)
///
/// ``` QScatterSeries* self, QColor* color ```
void q_scatterseries_set_border_color(void* self, void* color) {
    QScatterSeries_SetBorderColor((QScatterSeries*)self, (QColor*)color);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries.html#borderColor)
///
/// ``` QScatterSeries* self ```
QColor* q_scatterseries_border_color(void* self) {
    return QScatterSeries_BorderColor((QScatterSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries.html#markerShape)
///
/// ``` QScatterSeries* self ```
int64_t q_scatterseries_marker_shape(void* self) {
    return QScatterSeries_MarkerShape((QScatterSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries.html#setMarkerShape)
///
/// ``` QScatterSeries* self, enum QScatterSeries__MarkerShape shape ```
void q_scatterseries_set_marker_shape(void* self, int64_t shape) {
    QScatterSeries_SetMarkerShape((QScatterSeries*)self, shape);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries.html#markerSize)
///
/// ``` QScatterSeries* self ```
double q_scatterseries_marker_size(void* self) {
    return QScatterSeries_MarkerSize((QScatterSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries.html#setMarkerSize)
///
/// ``` QScatterSeries* self, double size ```
void q_scatterseries_set_marker_size(void* self, double size) {
    QScatterSeries_SetMarkerSize((QScatterSeries*)self, size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries.html#colorChanged)
///
/// ``` QScatterSeries* self, QColor* color ```
void q_scatterseries_color_changed(void* self, void* color) {
    QScatterSeries_ColorChanged((QScatterSeries*)self, (QColor*)color);
}

/// ``` QScatterSeries* self, void (*slot)(QScatterSeries*, QColor*) ```
void q_scatterseries_on_color_changed(void* self, void (*slot)(void*, void*)) {
    QScatterSeries_Connect_ColorChanged((QScatterSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries.html#borderColorChanged)
///
/// ``` QScatterSeries* self, QColor* color ```
void q_scatterseries_border_color_changed(void* self, void* color) {
    QScatterSeries_BorderColorChanged((QScatterSeries*)self, (QColor*)color);
}

/// ``` QScatterSeries* self, void (*slot)(QScatterSeries*, QColor*) ```
void q_scatterseries_on_border_color_changed(void* self, void (*slot)(void*, void*)) {
    QScatterSeries_Connect_BorderColorChanged((QScatterSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries.html#markerShapeChanged)
///
/// ``` QScatterSeries* self, enum QScatterSeries__MarkerShape shape ```
void q_scatterseries_marker_shape_changed(void* self, int64_t shape) {
    QScatterSeries_MarkerShapeChanged((QScatterSeries*)self, shape);
}

/// ``` QScatterSeries* self, void (*slot)(QScatterSeries*, enum QScatterSeries__MarkerShape) ```
void q_scatterseries_on_marker_shape_changed(void* self, void (*slot)(void*, int64_t)) {
    QScatterSeries_Connect_MarkerShapeChanged((QScatterSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscatterseries.html#markerSizeChanged)
///
/// ``` QScatterSeries* self, double size ```
void q_scatterseries_marker_size_changed(void* self, double size) {
    QScatterSeries_MarkerSizeChanged((QScatterSeries*)self, size);
}

/// ``` QScatterSeries* self, void (*slot)(QScatterSeries*, double) ```
void q_scatterseries_on_marker_size_changed(void* self, void (*slot)(void*, double)) {
    QScatterSeries_Connect_MarkerSizeChanged((QScatterSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scatterseries_tr2(const char* s, const char* c) {
    libqt_string _str = QScatterSeries_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scatterseries_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QScatterSeries_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#append)
///
/// ``` QScatterSeries* self, double x, double y ```
void q_scatterseries_append(void* self, double x, double y) {
    QXYSeries_Append((QXYSeries*)self, x, y);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#append)
///
/// ``` QScatterSeries* self, QPointF* point ```
void q_scatterseries_append_with_point(void* self, void* point) {
    QXYSeries_AppendWithPoint((QXYSeries*)self, (QPointF*)point);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#append)
///
/// ``` QScatterSeries* self, QPointF* points[] ```
void q_scatterseries_append_with_points(void* self, void* points[]) {
    QPointF** points_arr = (QPointF**)points;
    size_t points_len = 0;
    while (points_arr[points_len] != NULL) {
        points_len++;
    }
    libqt_list points_list = {
        .len = points_len,
        .data = {(QPointF*)points},
    };
    QXYSeries_AppendWithPoints((QXYSeries*)self, points_list);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// ``` QScatterSeries* self, double oldX, double oldY, double newX, double newY ```
void q_scatterseries_replace(void* self, double oldX, double oldY, double newX, double newY) {
    QXYSeries_Replace((QXYSeries*)self, oldX, oldY, newX, newY);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// ``` QScatterSeries* self, QPointF* oldPoint, QPointF* newPoint ```
void q_scatterseries_replace2(void* self, void* oldPoint, void* newPoint) {
    QXYSeries_Replace2((QXYSeries*)self, (QPointF*)oldPoint, (QPointF*)newPoint);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// ``` QScatterSeries* self, int index, double newX, double newY ```
void q_scatterseries_replace3(void* self, int index, double newX, double newY) {
    QXYSeries_Replace3((QXYSeries*)self, index, newX, newY);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// ``` QScatterSeries* self, int index, QPointF* newPoint ```
void q_scatterseries_replace4(void* self, int index, void* newPoint) {
    QXYSeries_Replace4((QXYSeries*)self, index, (QPointF*)newPoint);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#remove)
///
/// ``` QScatterSeries* self, double x, double y ```
void q_scatterseries_remove(void* self, double x, double y) {
    QXYSeries_Remove((QXYSeries*)self, x, y);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#remove)
///
/// ``` QScatterSeries* self, QPointF* point ```
void q_scatterseries_remove_with_point(void* self, void* point) {
    QXYSeries_RemoveWithPoint((QXYSeries*)self, (QPointF*)point);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#remove)
///
/// ``` QScatterSeries* self, int index ```
void q_scatterseries_remove_with_index(void* self, int index) {
    QXYSeries_RemoveWithIndex((QXYSeries*)self, index);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#removePoints)
///
/// ``` QScatterSeries* self, int index, int count ```
void q_scatterseries_remove_points(void* self, int index, int count) {
    QXYSeries_RemovePoints((QXYSeries*)self, index, count);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#insert)
///
/// ``` QScatterSeries* self, int index, QPointF* point ```
void q_scatterseries_insert(void* self, int index, void* point) {
    QXYSeries_Insert((QXYSeries*)self, index, (QPointF*)point);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clear)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_clear(void* self) {
    QXYSeries_Clear((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#count)
///
/// ``` QScatterSeries* self ```
int32_t q_scatterseries_count(void* self) {
    return QXYSeries_Count((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#points)
///
/// ``` QScatterSeries* self ```
libqt_list /* of QPointF* */ q_scatterseries_points(void* self) {
    libqt_list _arr = QXYSeries_Points((QXYSeries*)self);
    return _arr;
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsVector)
///
/// ``` QScatterSeries* self ```
libqt_list /* of QPointF* */ q_scatterseries_points_vector(void* self) {
    libqt_list _arr = QXYSeries_PointsVector((QXYSeries*)self);
    return _arr;
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#at)
///
/// ``` QScatterSeries* self, int index ```
QPointF* q_scatterseries_at(void* self, int index) {
    return QXYSeries_At((QXYSeries*)self, index);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#operator<<)
///
/// ``` QScatterSeries* self, QPointF* point ```
QXYSeries* q_scatterseries_operator_shift_left(void* self, void* point) {
    return QXYSeries_OperatorShiftLeft((QXYSeries*)self, (QPointF*)point);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#operator<<)
///
/// ``` QScatterSeries* self, QPointF* points[] ```
QXYSeries* q_scatterseries_operator_shift_left_with_points(void* self, void* points[]) {
    QPointF** points_arr = (QPointF**)points;
    size_t points_len = 0;
    while (points_arr[points_len] != NULL) {
        points_len++;
    }
    libqt_list points_list = {
        .len = points_len,
        .data = {(QPointF*)points},
    };
    return QXYSeries_OperatorShiftLeftWithPoints((QXYSeries*)self, points_list);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pen)
///
/// ``` QScatterSeries* self ```
QPen* q_scatterseries_pen(void* self) {
    return QXYSeries_Pen((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setSelectedColor)
///
/// ``` QScatterSeries* self, QColor* color ```
void q_scatterseries_set_selected_color(void* self, void* color) {
    QXYSeries_SetSelectedColor((QXYSeries*)self, (QColor*)color);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedColor)
///
/// ``` QScatterSeries* self ```
QColor* q_scatterseries_selected_color(void* self) {
    return QXYSeries_SelectedColor((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointsVisible)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_set_points_visible(void* self) {
    QXYSeries_SetPointsVisible((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsVisible)
///
/// ``` QScatterSeries* self ```
bool q_scatterseries_points_visible(void* self) {
    return QXYSeries_PointsVisible((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsFormat)
///
/// ``` QScatterSeries* self, const char* format ```
void q_scatterseries_set_point_labels_format(void* self, const char* format) {
    QXYSeries_SetPointLabelsFormat((QXYSeries*)self, qstring(format));
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFormat)
///
/// ``` QScatterSeries* self ```
const char* q_scatterseries_point_labels_format(void* self) {
    libqt_string _str = QXYSeries_PointLabelsFormat((QXYSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsVisible)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_set_point_labels_visible(void* self) {
    QXYSeries_SetPointLabelsVisible((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisible)
///
/// ``` QScatterSeries* self ```
bool q_scatterseries_point_labels_visible(void* self) {
    return QXYSeries_PointLabelsVisible((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsFont)
///
/// ``` QScatterSeries* self, QFont* font ```
void q_scatterseries_set_point_labels_font(void* self, void* font) {
    QXYSeries_SetPointLabelsFont((QXYSeries*)self, (QFont*)font);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFont)
///
/// ``` QScatterSeries* self ```
QFont* q_scatterseries_point_labels_font(void* self) {
    return QXYSeries_PointLabelsFont((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsColor)
///
/// ``` QScatterSeries* self, QColor* color ```
void q_scatterseries_set_point_labels_color(void* self, void* color) {
    QXYSeries_SetPointLabelsColor((QXYSeries*)self, (QColor*)color);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColor)
///
/// ``` QScatterSeries* self ```
QColor* q_scatterseries_point_labels_color(void* self) {
    return QXYSeries_PointLabelsColor((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsClipping)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_set_point_labels_clipping(void* self) {
    QXYSeries_SetPointLabelsClipping((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClipping)
///
/// ``` QScatterSeries* self ```
bool q_scatterseries_point_labels_clipping(void* self) {
    return QXYSeries_PointLabelsClipping((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#replace)
///
/// ``` QScatterSeries* self, QPointF* points[] ```
void q_scatterseries_replace_with_points(void* self, void* points[]) {
    QPointF** points_arr = (QPointF**)points;
    size_t points_len = 0;
    while (points_arr[points_len] != NULL) {
        points_len++;
    }
    libqt_list points_list = {
        .len = points_len,
        .data = {(QPointF*)points},
    };
    QXYSeries_ReplaceWithPoints((QXYSeries*)self, points_list);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#isPointSelected)
///
/// ``` QScatterSeries* self, int index ```
bool q_scatterseries_is_point_selected(void* self, int index) {
    return QXYSeries_IsPointSelected((QXYSeries*)self, index);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectPoint)
///
/// ``` QScatterSeries* self, int index ```
void q_scatterseries_select_point(void* self, int index) {
    QXYSeries_SelectPoint((QXYSeries*)self, index);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#deselectPoint)
///
/// ``` QScatterSeries* self, int index ```
void q_scatterseries_deselect_point(void* self, int index) {
    QXYSeries_DeselectPoint((QXYSeries*)self, index);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointSelected)
///
/// ``` QScatterSeries* self, int index, bool selected ```
void q_scatterseries_set_point_selected(void* self, int index, bool selected) {
    QXYSeries_SetPointSelected((QXYSeries*)self, index, selected);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectAllPoints)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_select_all_points(void* self) {
    QXYSeries_SelectAllPoints((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#deselectAllPoints)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_deselect_all_points(void* self) {
    QXYSeries_DeselectAllPoints((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectPoints)
///
/// ``` QScatterSeries* self, int* indexes[] ```
void q_scatterseries_select_points(void* self, int* indexes[]) {
    size_t indexes_len = 0;
    while (indexes[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(int*)indexes},
    };
    QXYSeries_SelectPoints((QXYSeries*)self, indexes_list);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#deselectPoints)
///
/// ``` QScatterSeries* self, int* indexes[] ```
void q_scatterseries_deselect_points(void* self, int* indexes[]) {
    size_t indexes_len = 0;
    while (indexes[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(int*)indexes},
    };
    QXYSeries_DeselectPoints((QXYSeries*)self, indexes_list);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#toggleSelection)
///
/// ``` QScatterSeries* self, int* indexes[] ```
void q_scatterseries_toggle_selection(void* self, int* indexes[]) {
    size_t indexes_len = 0;
    while (indexes[indexes_len] != NULL) {
        indexes_len++;
    }
    libqt_list indexes_list = {
        .len = indexes_len,
        .data = {(int*)indexes},
    };
    QXYSeries_ToggleSelection((QXYSeries*)self, indexes_list);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedPoints)
///
/// ``` QScatterSeries* self ```
libqt_list /* of int */ q_scatterseries_selected_points(void* self) {
    libqt_list _arr = QXYSeries_SelectedPoints((QXYSeries*)self);
    return _arr;
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setLightMarker)
///
/// ``` QScatterSeries* self, QImage* lightMarker ```
void q_scatterseries_set_light_marker(void* self, void* lightMarker) {
    QXYSeries_SetLightMarker((QXYSeries*)self, (QImage*)lightMarker);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#lightMarker)
///
/// ``` QScatterSeries* self ```
QImage* q_scatterseries_light_marker(void* self) {
    return QXYSeries_LightMarker((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setSelectedLightMarker)
///
/// ``` QScatterSeries* self, QImage* selectedLightMarker ```
void q_scatterseries_set_selected_light_marker(void* self, void* selectedLightMarker) {
    QXYSeries_SetSelectedLightMarker((QXYSeries*)self, (QImage*)selectedLightMarker);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarker)
///
/// ``` QScatterSeries* self ```
QImage* q_scatterseries_selected_light_marker(void* self) {
    return QXYSeries_SelectedLightMarker((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineVisible)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_set_best_fit_line_visible(void* self) {
    QXYSeries_SetBestFitLineVisible((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisible)
///
/// ``` QScatterSeries* self ```
bool q_scatterseries_best_fit_line_visible(void* self) {
    return QXYSeries_BestFitLineVisible((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineEquation)
///
/// ``` QScatterSeries* self, bool* ok ```
libqt_pair /* tuple of double and double */ q_scatterseries_best_fit_line_equation(void* self, bool* ok) {
    return QXYSeries_BestFitLineEquation((QXYSeries*)self, (bool*)ok);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLinePen)
///
/// ``` QScatterSeries* self, QPen* pen ```
void q_scatterseries_set_best_fit_line_pen(void* self, void* pen) {
    QXYSeries_SetBestFitLinePen((QXYSeries*)self, (QPen*)pen);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePen)
///
/// ``` QScatterSeries* self ```
QPen* q_scatterseries_best_fit_line_pen(void* self) {
    return QXYSeries_BestFitLinePen((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineColor)
///
/// ``` QScatterSeries* self, QColor* color ```
void q_scatterseries_set_best_fit_line_color(void* self, void* color) {
    QXYSeries_SetBestFitLineColor((QXYSeries*)self, (QColor*)color);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColor)
///
/// ``` QScatterSeries* self ```
QColor* q_scatterseries_best_fit_line_color(void* self) {
    return QXYSeries_BestFitLineColor((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clearPointConfiguration)
///
/// ``` QScatterSeries* self, int index ```
void q_scatterseries_clear_point_configuration(void* self, int index) {
    QXYSeries_ClearPointConfiguration((QXYSeries*)self, index);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clearPointConfiguration)
///
/// ``` QScatterSeries* self, int index, enum QXYSeries__PointConfiguration key ```
void q_scatterseries_clear_point_configuration2(void* self, int index, int64_t key) {
    QXYSeries_ClearPointConfiguration2((QXYSeries*)self, index, key);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clearPointsConfiguration)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_clear_points_configuration(void* self) {
    QXYSeries_ClearPointsConfiguration((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clearPointsConfiguration)
///
/// ``` QScatterSeries* self, enum QXYSeries__PointConfiguration key ```
void q_scatterseries_clear_points_configuration_with_key(void* self, int64_t key) {
    QXYSeries_ClearPointsConfigurationWithKey((QXYSeries*)self, key);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointConfiguration)
///
/// ``` QScatterSeries* self, int index, libqt_map /* of enum QXYSeries__PointConfiguration to QVariant* */ configuration ```
void q_scatterseries_set_point_configuration(void* self, int index, libqt_map /* of int64_t to QVariant* */ configuration) {
    QXYSeries_SetPointConfiguration((QXYSeries*)self, index, configuration);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointConfiguration)
///
/// ``` QScatterSeries* self, int index, enum QXYSeries__PointConfiguration key, QVariant* value ```
void q_scatterseries_set_point_configuration2(void* self, int index, int64_t key, void* value) {
    QXYSeries_SetPointConfiguration2((QXYSeries*)self, index, key, (QVariant*)value);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointsConfiguration)
///
/// ``` QScatterSeries* self, libqt_map /* of int to libqt_map  of enum QXYSeries__PointConfiguration to QVariant*  */ pointsConfiguration ```
void q_scatterseries_set_points_configuration(void* self, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ pointsConfiguration) {
    QXYSeries_SetPointsConfiguration((QXYSeries*)self, pointsConfiguration);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointConfiguration)
///
/// ``` QScatterSeries* self, int index ```
libqt_map /* of int64_t to QVariant* */ q_scatterseries_point_configuration(void* self, int index) {
    return QXYSeries_PointConfiguration((QXYSeries*)self, index);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsConfiguration)
///
/// ``` QScatterSeries* self ```
libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ q_scatterseries_points_configuration(void* self) {
    return QXYSeries_PointsConfiguration((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#sizeBy)
///
/// ``` QScatterSeries* self, double* sourceData[], double minSize, double maxSize ```
void q_scatterseries_size_by(void* self, double* sourceData[], double minSize, double maxSize) {
    size_t sourceData_len = 0;
    while (sourceData[sourceData_len] != NULL) {
        sourceData_len++;
    }
    libqt_list sourceData_list = {
        .len = sourceData_len,
        .data = {(double*)sourceData},
    };
    QXYSeries_SizeBy((QXYSeries*)self, sourceData_list, minSize, maxSize);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#colorBy)
///
/// ``` QScatterSeries* self, double* sourceData[] ```
void q_scatterseries_color_by(void* self, double* sourceData[]) {
    size_t sourceData_len = 0;
    while (sourceData[sourceData_len] != NULL) {
        sourceData_len++;
    }
    libqt_list sourceData_list = {
        .len = sourceData_len,
        .data = {(double*)sourceData},
    };
    QXYSeries_ColorBy((QXYSeries*)self, sourceData_list);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#clicked)
///
/// ``` QScatterSeries* self, QPointF* point ```
void q_scatterseries_clicked(void* self, void* point) {
    QXYSeries_Clicked((QXYSeries*)self, (QPointF*)point);
}

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, QPointF*) ```
void q_scatterseries_on_clicked(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_Clicked((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#hovered)
///
/// ``` QScatterSeries* self, QPointF* point, bool state ```
void q_scatterseries_hovered(void* self, void* point, bool state) {
    QXYSeries_Hovered((QXYSeries*)self, (QPointF*)point, state);
}

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, QPointF*, bool) ```
void q_scatterseries_on_hovered(void* self, void (*slot)(void*, void*, bool)) {
    QXYSeries_Connect_Hovered((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pressed)
///
/// ``` QScatterSeries* self, QPointF* point ```
void q_scatterseries_pressed(void* self, void* point) {
    QXYSeries_Pressed((QXYSeries*)self, (QPointF*)point);
}

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, QPointF*) ```
void q_scatterseries_on_pressed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_Pressed((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#released)
///
/// ``` QScatterSeries* self, QPointF* point ```
void q_scatterseries_released(void* self, void* point) {
    QXYSeries_Released((QXYSeries*)self, (QPointF*)point);
}

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, QPointF*) ```
void q_scatterseries_on_released(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_Released((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#doubleClicked)
///
/// ``` QScatterSeries* self, QPointF* point ```
void q_scatterseries_double_clicked(void* self, void* point) {
    QXYSeries_DoubleClicked((QXYSeries*)self, (QPointF*)point);
}

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, QPointF*) ```
void q_scatterseries_on_double_clicked(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_DoubleClicked((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointReplaced)
///
/// ``` QScatterSeries* self, int index ```
void q_scatterseries_point_replaced(void* self, int index) {
    QXYSeries_PointReplaced((QXYSeries*)self, index);
}

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, int) ```
void q_scatterseries_on_point_replaced(void* self, void (*slot)(void*, int)) {
    QXYSeries_Connect_PointReplaced((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointRemoved)
///
/// ``` QScatterSeries* self, int index ```
void q_scatterseries_point_removed(void* self, int index) {
    QXYSeries_PointRemoved((QXYSeries*)self, index);
}

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, int) ```
void q_scatterseries_on_point_removed(void* self, void (*slot)(void*, int)) {
    QXYSeries_Connect_PointRemoved((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointAdded)
///
/// ``` QScatterSeries* self, int index ```
void q_scatterseries_point_added(void* self, int index) {
    QXYSeries_PointAdded((QXYSeries*)self, index);
}

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, int) ```
void q_scatterseries_on_point_added(void* self, void (*slot)(void*, int)) {
    QXYSeries_Connect_PointAdded((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedColorChanged)
///
/// ``` QScatterSeries* self, QColor* color ```
void q_scatterseries_selected_color_changed(void* self, void* color) {
    QXYSeries_SelectedColorChanged((QXYSeries*)self, (QColor*)color);
}

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, QColor*) ```
void q_scatterseries_on_selected_color_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_SelectedColorChanged((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsReplaced)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_points_replaced(void* self) {
    QXYSeries_PointsReplaced((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*) ```
void q_scatterseries_on_points_replaced(void* self, void (*slot)(void*)) {
    QXYSeries_Connect_PointsReplaced((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFormatChanged)
///
/// ``` QScatterSeries* self, const char* format ```
void q_scatterseries_point_labels_format_changed(void* self, const char* format) {
    QXYSeries_PointLabelsFormatChanged((QXYSeries*)self, qstring(format));
}

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, const char*) ```
void q_scatterseries_on_point_labels_format_changed(void* self, void (*slot)(void*, const char*)) {
    QXYSeries_Connect_PointLabelsFormatChanged((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsVisibilityChanged)
///
/// ``` QScatterSeries* self, bool visible ```
void q_scatterseries_point_labels_visibility_changed(void* self, bool visible) {
    QXYSeries_PointLabelsVisibilityChanged((QXYSeries*)self, visible);
}

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, bool) ```
void q_scatterseries_on_point_labels_visibility_changed(void* self, void (*slot)(void*, bool)) {
    QXYSeries_Connect_PointLabelsVisibilityChanged((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsFontChanged)
///
/// ``` QScatterSeries* self, QFont* font ```
void q_scatterseries_point_labels_font_changed(void* self, void* font) {
    QXYSeries_PointLabelsFontChanged((QXYSeries*)self, (QFont*)font);
}

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, QFont*) ```
void q_scatterseries_on_point_labels_font_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_PointLabelsFontChanged((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsColorChanged)
///
/// ``` QScatterSeries* self, QColor* color ```
void q_scatterseries_point_labels_color_changed(void* self, void* color) {
    QXYSeries_PointLabelsColorChanged((QXYSeries*)self, (QColor*)color);
}

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, QColor*) ```
void q_scatterseries_on_point_labels_color_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_PointLabelsColorChanged((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointLabelsClippingChanged)
///
/// ``` QScatterSeries* self, bool clipping ```
void q_scatterseries_point_labels_clipping_changed(void* self, bool clipping) {
    QXYSeries_PointLabelsClippingChanged((QXYSeries*)self, clipping);
}

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, bool) ```
void q_scatterseries_on_point_labels_clipping_changed(void* self, void (*slot)(void*, bool)) {
    QXYSeries_Connect_PointLabelsClippingChanged((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsRemoved)
///
/// ``` QScatterSeries* self, int index, int count ```
void q_scatterseries_points_removed(void* self, int index, int count) {
    QXYSeries_PointsRemoved((QXYSeries*)self, index, count);
}

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, int, int) ```
void q_scatterseries_on_points_removed(void* self, void (*slot)(void*, int, int)) {
    QXYSeries_Connect_PointsRemoved((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#penChanged)
///
/// ``` QScatterSeries* self, QPen* pen ```
void q_scatterseries_pen_changed(void* self, void* pen) {
    QXYSeries_PenChanged((QXYSeries*)self, (QPen*)pen);
}

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, QPen*) ```
void q_scatterseries_on_pen_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_PenChanged((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedPointsChanged)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_selected_points_changed(void* self) {
    QXYSeries_SelectedPointsChanged((QXYSeries*)self);
}

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*) ```
void q_scatterseries_on_selected_points_changed(void* self, void (*slot)(void*)) {
    QXYSeries_Connect_SelectedPointsChanged((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#lightMarkerChanged)
///
/// ``` QScatterSeries* self, QImage* lightMarker ```
void q_scatterseries_light_marker_changed(void* self, void* lightMarker) {
    QXYSeries_LightMarkerChanged((QXYSeries*)self, (QImage*)lightMarker);
}

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, QImage*) ```
void q_scatterseries_on_light_marker_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_LightMarkerChanged((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#selectedLightMarkerChanged)
///
/// ``` QScatterSeries* self, QImage* selectedLightMarker ```
void q_scatterseries_selected_light_marker_changed(void* self, void* selectedLightMarker) {
    QXYSeries_SelectedLightMarkerChanged((QXYSeries*)self, (QImage*)selectedLightMarker);
}

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, QImage*) ```
void q_scatterseries_on_selected_light_marker_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_SelectedLightMarkerChanged((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineVisibilityChanged)
///
/// ``` QScatterSeries* self, bool visible ```
void q_scatterseries_best_fit_line_visibility_changed(void* self, bool visible) {
    QXYSeries_BestFitLineVisibilityChanged((QXYSeries*)self, visible);
}

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, bool) ```
void q_scatterseries_on_best_fit_line_visibility_changed(void* self, void (*slot)(void*, bool)) {
    QXYSeries_Connect_BestFitLineVisibilityChanged((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLinePenChanged)
///
/// ``` QScatterSeries* self, QPen* pen ```
void q_scatterseries_best_fit_line_pen_changed(void* self, void* pen) {
    QXYSeries_BestFitLinePenChanged((QXYSeries*)self, (QPen*)pen);
}

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, QPen*) ```
void q_scatterseries_on_best_fit_line_pen_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_BestFitLinePenChanged((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#bestFitLineColorChanged)
///
/// ``` QScatterSeries* self, QColor* color ```
void q_scatterseries_best_fit_line_color_changed(void* self, void* color) {
    QXYSeries_BestFitLineColorChanged((QXYSeries*)self, (QColor*)color);
}

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, QColor*) ```
void q_scatterseries_on_best_fit_line_color_changed(void* self, void (*slot)(void*, void*)) {
    QXYSeries_Connect_BestFitLineColorChanged((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#pointsConfigurationChanged)
///
/// ``` QScatterSeries* self, libqt_map /* of int to libqt_map  of enum QXYSeries__PointConfiguration to QVariant*  */ configuration ```
void q_scatterseries_points_configuration_changed(void* self, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */ configuration) {
    QXYSeries_PointsConfigurationChanged((QXYSeries*)self, configuration);
}

/// Inherited from QXYSeries
///
/// ``` QScatterSeries* self, void (*slot)(QXYSeries*, libqt_map /* of int to libqt_map  of enum QXYSeries__PointConfiguration to QVariant*  */) ```
void q_scatterseries_on_points_configuration_changed(void* self, void (*slot)(void*, libqt_map /* of int to libqt_map  of int64_t to QVariant*  */)) {
    QXYSeries_Connect_PointsConfigurationChanged((QXYSeries*)self, (intptr_t)slot);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointsVisible)
///
/// ``` QScatterSeries* self, bool visible ```
void q_scatterseries_set_points_visible1(void* self, bool visible) {
    QXYSeries_SetPointsVisible1((QXYSeries*)self, visible);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsVisible)
///
/// ``` QScatterSeries* self, bool visible ```
void q_scatterseries_set_point_labels_visible1(void* self, bool visible) {
    QXYSeries_SetPointLabelsVisible1((QXYSeries*)self, visible);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setPointLabelsClipping)
///
/// ``` QScatterSeries* self, bool enabled ```
void q_scatterseries_set_point_labels_clipping1(void* self, bool enabled) {
    QXYSeries_SetPointLabelsClipping1((QXYSeries*)self, enabled);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#setBestFitLineVisible)
///
/// ``` QScatterSeries* self, bool visible ```
void q_scatterseries_set_best_fit_line_visible1(void* self, bool visible) {
    QXYSeries_SetBestFitLineVisible1((QXYSeries*)self, visible);
}

/// Inherited from QXYSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qxyseries.html#colorBy)
///
/// ``` QScatterSeries* self, double* sourceData[], QLinearGradient* gradient ```
void q_scatterseries_color_by2(void* self, double* sourceData[], void* gradient) {
    size_t sourceData_len = 0;
    while (sourceData[sourceData_len] != NULL) {
        sourceData_len++;
    }
    libqt_list sourceData_list = {
        .len = sourceData_len,
        .data = {(double*)sourceData},
    };
    QXYSeries_ColorBy2((QXYSeries*)self, sourceData_list, (QLinearGradient*)gradient);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// ``` QScatterSeries* self, const char* name ```
void q_scatterseries_set_name(void* self, const char* name) {
    QAbstractSeries_SetName((QAbstractSeries*)self, qstring(name));
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// ``` QScatterSeries* self ```
const char* q_scatterseries_name(void* self) {
    libqt_string _str = QAbstractSeries_Name((QAbstractSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_set_visible(void* self) {
    QAbstractSeries_SetVisible((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// ``` QScatterSeries* self ```
bool q_scatterseries_is_visible(void* self) {
    return QAbstractSeries_IsVisible((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// ``` QScatterSeries* self ```
double q_scatterseries_opacity(void* self) {
    return QAbstractSeries_Opacity((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// ``` QScatterSeries* self, double opacity ```
void q_scatterseries_set_opacity(void* self, double opacity) {
    QAbstractSeries_SetOpacity((QAbstractSeries*)self, opacity);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_set_use_open_g_l(void* self) {
    QAbstractSeries_SetUseOpenGL((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// ``` QScatterSeries* self ```
bool q_scatterseries_use_open_g_l(void* self) {
    return QAbstractSeries_UseOpenGL((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// ``` QScatterSeries* self ```
QChart* q_scatterseries_chart(void* self) {
    return QAbstractSeries_Chart((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// ``` QScatterSeries* self, QAbstractAxis* axis ```
bool q_scatterseries_attach_axis(void* self, void* axis) {
    return QAbstractSeries_AttachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// ``` QScatterSeries* self, QAbstractAxis* axis ```
bool q_scatterseries_detach_axis(void* self, void* axis) {
    return QAbstractSeries_DetachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// ``` QScatterSeries* self ```
libqt_list /* of QAbstractAxis* */ q_scatterseries_attached_axes(void* self) {
    libqt_list _arr = QAbstractSeries_AttachedAxes((QAbstractSeries*)self);
    return _arr;
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_show(void* self) {
    QAbstractSeries_Show((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_hide(void* self) {
    QAbstractSeries_Hide((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_name_changed(void* self) {
    QAbstractSeries_NameChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QScatterSeries* self, void (*slot)(QAbstractSeries*) ```
void q_scatterseries_on_name_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_NameChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_visible_changed(void* self) {
    QAbstractSeries_VisibleChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QScatterSeries* self, void (*slot)(QAbstractSeries*) ```
void q_scatterseries_on_visible_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_VisibleChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_opacity_changed(void* self) {
    QAbstractSeries_OpacityChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QScatterSeries* self, void (*slot)(QAbstractSeries*) ```
void q_scatterseries_on_opacity_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_OpacityChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_use_open_g_l_changed(void* self) {
    QAbstractSeries_UseOpenGLChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QScatterSeries* self, void (*slot)(QAbstractSeries*) ```
void q_scatterseries_on_use_open_g_l_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_UseOpenGLChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QScatterSeries* self, bool visible ```
void q_scatterseries_set_visible1(void* self, bool visible) {
    QAbstractSeries_SetVisible1((QAbstractSeries*)self, visible);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QScatterSeries* self, bool enable ```
void q_scatterseries_set_use_open_g_l1(void* self, bool enable) {
    QAbstractSeries_SetUseOpenGL1((QAbstractSeries*)self, enable);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QScatterSeries* self ```
const char* q_scatterseries_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QScatterSeries* self, const char* name ```
void q_scatterseries_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QScatterSeries* self ```
bool q_scatterseries_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QScatterSeries* self ```
bool q_scatterseries_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QScatterSeries* self ```
bool q_scatterseries_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QScatterSeries* self ```
bool q_scatterseries_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QScatterSeries* self, bool b ```
bool q_scatterseries_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QScatterSeries* self ```
QThread* q_scatterseries_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QScatterSeries* self, QThread* thread ```
void q_scatterseries_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QScatterSeries* self, int interval ```
int32_t q_scatterseries_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QScatterSeries* self, int id ```
void q_scatterseries_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QScatterSeries* self ```
libqt_list /* of QObject* */ q_scatterseries_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QScatterSeries* self, QObject* parent ```
void q_scatterseries_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QScatterSeries* self, QObject* filterObj ```
void q_scatterseries_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QScatterSeries* self, QObject* obj ```
void q_scatterseries_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scatterseries_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QScatterSeries* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scatterseries_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scatterseries_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scatterseries_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QScatterSeries* self, const char* name, QVariant* value ```
bool q_scatterseries_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QScatterSeries* self, const char* name ```
QVariant* q_scatterseries_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QScatterSeries* self ```
const char** q_scatterseries_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QScatterSeries* self ```
QBindingStorage* q_scatterseries_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QScatterSeries* self ```
QBindingStorage* q_scatterseries_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QScatterSeries* self, void (*slot)(QObject*) ```
void q_scatterseries_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QScatterSeries* self ```
QObject* q_scatterseries_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QScatterSeries* self, const char* classname ```
bool q_scatterseries_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QScatterSeries* self ```
void q_scatterseries_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QScatterSeries* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scatterseries_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scatterseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QScatterSeries* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scatterseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QScatterSeries* self, QObject* param1 ```
void q_scatterseries_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QScatterSeries* self, void (*slot)(QObject*, QObject*) ```
void q_scatterseries_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScatterSeries* self, QEvent* event ```
bool q_scatterseries_event(void* self, void* event) {
    return QScatterSeries_Event((QScatterSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScatterSeries* self, QEvent* event ```
bool q_scatterseries_qbase_event(void* self, void* event) {
    return QScatterSeries_QBaseEvent((QScatterSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScatterSeries* self, bool (*slot)(QScatterSeries*, QEvent*) ```
void q_scatterseries_on_event(void* self, bool (*slot)(void*, void*)) {
    QScatterSeries_OnEvent((QScatterSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScatterSeries* self, QObject* watched, QEvent* event ```
bool q_scatterseries_event_filter(void* self, void* watched, void* event) {
    return QScatterSeries_EventFilter((QScatterSeries*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScatterSeries* self, QObject* watched, QEvent* event ```
bool q_scatterseries_qbase_event_filter(void* self, void* watched, void* event) {
    return QScatterSeries_QBaseEventFilter((QScatterSeries*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScatterSeries* self, bool (*slot)(QScatterSeries*, QObject*, QEvent*) ```
void q_scatterseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QScatterSeries_OnEventFilter((QScatterSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScatterSeries* self, QTimerEvent* event ```
void q_scatterseries_timer_event(void* self, void* event) {
    QScatterSeries_TimerEvent((QScatterSeries*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScatterSeries* self, QTimerEvent* event ```
void q_scatterseries_qbase_timer_event(void* self, void* event) {
    QScatterSeries_QBaseTimerEvent((QScatterSeries*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScatterSeries* self, void (*slot)(QScatterSeries*, QTimerEvent*) ```
void q_scatterseries_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QScatterSeries_OnTimerEvent((QScatterSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScatterSeries* self, QChildEvent* event ```
void q_scatterseries_child_event(void* self, void* event) {
    QScatterSeries_ChildEvent((QScatterSeries*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScatterSeries* self, QChildEvent* event ```
void q_scatterseries_qbase_child_event(void* self, void* event) {
    QScatterSeries_QBaseChildEvent((QScatterSeries*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScatterSeries* self, void (*slot)(QScatterSeries*, QChildEvent*) ```
void q_scatterseries_on_child_event(void* self, void (*slot)(void*, void*)) {
    QScatterSeries_OnChildEvent((QScatterSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScatterSeries* self, QEvent* event ```
void q_scatterseries_custom_event(void* self, void* event) {
    QScatterSeries_CustomEvent((QScatterSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScatterSeries* self, QEvent* event ```
void q_scatterseries_qbase_custom_event(void* self, void* event) {
    QScatterSeries_QBaseCustomEvent((QScatterSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScatterSeries* self, void (*slot)(QScatterSeries*, QEvent*) ```
void q_scatterseries_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QScatterSeries_OnCustomEvent((QScatterSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScatterSeries* self, QMetaMethod* signal ```
void q_scatterseries_connect_notify(void* self, void* signal) {
    QScatterSeries_ConnectNotify((QScatterSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScatterSeries* self, QMetaMethod* signal ```
void q_scatterseries_qbase_connect_notify(void* self, void* signal) {
    QScatterSeries_QBaseConnectNotify((QScatterSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScatterSeries* self, void (*slot)(QScatterSeries*, QMetaMethod*) ```
void q_scatterseries_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QScatterSeries_OnConnectNotify((QScatterSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScatterSeries* self, QMetaMethod* signal ```
void q_scatterseries_disconnect_notify(void* self, void* signal) {
    QScatterSeries_DisconnectNotify((QScatterSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScatterSeries* self, QMetaMethod* signal ```
void q_scatterseries_qbase_disconnect_notify(void* self, void* signal) {
    QScatterSeries_QBaseDisconnectNotify((QScatterSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScatterSeries* self, void (*slot)(QScatterSeries*, QMetaMethod*) ```
void q_scatterseries_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QScatterSeries_OnDisconnectNotify((QScatterSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScatterSeries* self ```
QObject* q_scatterseries_sender(void* self) {
    return QScatterSeries_Sender((QScatterSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScatterSeries* self ```
QObject* q_scatterseries_qbase_sender(void* self) {
    return QScatterSeries_QBaseSender((QScatterSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScatterSeries* self, QObject* (*slot)() ```
void q_scatterseries_on_sender(void* self, QObject* (*slot)()) {
    QScatterSeries_OnSender((QScatterSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScatterSeries* self ```
int32_t q_scatterseries_sender_signal_index(void* self) {
    return QScatterSeries_SenderSignalIndex((QScatterSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScatterSeries* self ```
int32_t q_scatterseries_qbase_sender_signal_index(void* self) {
    return QScatterSeries_QBaseSenderSignalIndex((QScatterSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScatterSeries* self, int32_t (*slot)() ```
void q_scatterseries_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QScatterSeries_OnSenderSignalIndex((QScatterSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScatterSeries* self, const char* signal ```
int32_t q_scatterseries_receivers(void* self, const char* signal) {
    return QScatterSeries_Receivers((QScatterSeries*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScatterSeries* self, const char* signal ```
int32_t q_scatterseries_qbase_receivers(void* self, const char* signal) {
    return QScatterSeries_QBaseReceivers((QScatterSeries*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScatterSeries* self, int32_t (*slot)(QScatterSeries*, const char*) ```
void q_scatterseries_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QScatterSeries_OnReceivers((QScatterSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScatterSeries* self, QMetaMethod* signal ```
bool q_scatterseries_is_signal_connected(void* self, void* signal) {
    return QScatterSeries_IsSignalConnected((QScatterSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScatterSeries* self, QMetaMethod* signal ```
bool q_scatterseries_qbase_is_signal_connected(void* self, void* signal) {
    return QScatterSeries_QBaseIsSignalConnected((QScatterSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScatterSeries* self, bool (*slot)(QScatterSeries*, QMetaMethod*) ```
void q_scatterseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QScatterSeries_OnIsSignalConnected((QScatterSeries*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QScatterSeries* self ```
void q_scatterseries_delete(void* self) {
    QScatterSeries_Delete((QScatterSeries*)(self));
}