#include "libqabstractaxis.hpp"
#include "libqabstractseries.hpp"
#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqbrush.hpp"
#include "libqchart.hpp"
#include "../libqevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "libqlineseries.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqpen.hpp"
#include "../libqpoint.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqareaseries.hpp"
#include "libqareaseries.h"

/// https://doc.qt.io/qt-6/qareaseries.html

/// q_areaseries_new constructs a new QAreaSeries object.
///
///
QAreaSeries* q_areaseries_new() {
    return QAreaSeries_new();
}

/// q_areaseries_new2 constructs a new QAreaSeries object.
///
/// ``` QLineSeries* upperSeries ```
QAreaSeries* q_areaseries_new2(void* upperSeries) {
    return QAreaSeries_new2((QLineSeries*)upperSeries);
}

/// q_areaseries_new3 constructs a new QAreaSeries object.
///
/// ``` QObject* parent ```
QAreaSeries* q_areaseries_new3(void* parent) {
    return QAreaSeries_new3((QObject*)parent);
}

/// q_areaseries_new4 constructs a new QAreaSeries object.
///
/// ``` QLineSeries* upperSeries, QLineSeries* lowerSeries ```
QAreaSeries* q_areaseries_new4(void* upperSeries, void* lowerSeries) {
    return QAreaSeries_new4((QLineSeries*)upperSeries, (QLineSeries*)lowerSeries);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAreaSeries* self ```
QMetaObject* q_areaseries_meta_object(void* self) {
    return QAreaSeries_MetaObject((QAreaSeries*)self);
}

/// ``` QAreaSeries* self, const char* param1 ```
void* q_areaseries_metacast(void* self, const char* param1) {
    return QAreaSeries_Metacast((QAreaSeries*)self, param1);
}

/// ``` QAreaSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_areaseries_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAreaSeries_Metacall((QAreaSeries*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QAreaSeries* self, int32_t (*slot)(QAreaSeries*, enum QMetaObject__Call, int, void*) ```
void q_areaseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAreaSeries_OnMetacall((QAreaSeries*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAreaSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_areaseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAreaSeries_QBaseMetacall((QAreaSeries*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_areaseries_tr(const char* s) {
    libqt_string _str = QAreaSeries_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#type)
///
/// ``` QAreaSeries* self ```
int64_t q_areaseries_type(void* self) {
    return QAreaSeries_Type((QAreaSeries*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAreaSeries* self, int64_t (*slot)() ```
void q_areaseries_on_type(void* self, int64_t (*slot)()) {
    QAreaSeries_OnType((QAreaSeries*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAreaSeries* self ```
int64_t q_areaseries_qbase_type(void* self) {
    return QAreaSeries_QBaseType((QAreaSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#setUpperSeries)
///
/// ``` QAreaSeries* self, QLineSeries* series ```
void q_areaseries_set_upper_series(void* self, void* series) {
    QAreaSeries_SetUpperSeries((QAreaSeries*)self, (QLineSeries*)series);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#upperSeries)
///
/// ``` QAreaSeries* self ```
QLineSeries* q_areaseries_upper_series(void* self) {
    return QAreaSeries_UpperSeries((QAreaSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#setLowerSeries)
///
/// ``` QAreaSeries* self, QLineSeries* series ```
void q_areaseries_set_lower_series(void* self, void* series) {
    QAreaSeries_SetLowerSeries((QAreaSeries*)self, (QLineSeries*)series);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#lowerSeries)
///
/// ``` QAreaSeries* self ```
QLineSeries* q_areaseries_lower_series(void* self) {
    return QAreaSeries_LowerSeries((QAreaSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#setPen)
///
/// ``` QAreaSeries* self, QPen* pen ```
void q_areaseries_set_pen(void* self, void* pen) {
    QAreaSeries_SetPen((QAreaSeries*)self, (QPen*)pen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#pen)
///
/// ``` QAreaSeries* self ```
QPen* q_areaseries_pen(void* self) {
    return QAreaSeries_Pen((QAreaSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#setBrush)
///
/// ``` QAreaSeries* self, QBrush* brush ```
void q_areaseries_set_brush(void* self, void* brush) {
    QAreaSeries_SetBrush((QAreaSeries*)self, (QBrush*)brush);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#brush)
///
/// ``` QAreaSeries* self ```
QBrush* q_areaseries_brush(void* self) {
    return QAreaSeries_Brush((QAreaSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#setColor)
///
/// ``` QAreaSeries* self, QColor* color ```
void q_areaseries_set_color(void* self, void* color) {
    QAreaSeries_SetColor((QAreaSeries*)self, (QColor*)color);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#color)
///
/// ``` QAreaSeries* self ```
QColor* q_areaseries_color(void* self) {
    return QAreaSeries_Color((QAreaSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#setBorderColor)
///
/// ``` QAreaSeries* self, QColor* color ```
void q_areaseries_set_border_color(void* self, void* color) {
    QAreaSeries_SetBorderColor((QAreaSeries*)self, (QColor*)color);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#borderColor)
///
/// ``` QAreaSeries* self ```
QColor* q_areaseries_border_color(void* self) {
    return QAreaSeries_BorderColor((QAreaSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#setPointsVisible)
///
/// ``` QAreaSeries* self ```
void q_areaseries_set_points_visible(void* self) {
    QAreaSeries_SetPointsVisible((QAreaSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#pointsVisible)
///
/// ``` QAreaSeries* self ```
bool q_areaseries_points_visible(void* self) {
    return QAreaSeries_PointsVisible((QAreaSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#setPointLabelsFormat)
///
/// ``` QAreaSeries* self, const char* format ```
void q_areaseries_set_point_labels_format(void* self, const char* format) {
    QAreaSeries_SetPointLabelsFormat((QAreaSeries*)self, qstring(format));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#pointLabelsFormat)
///
/// ``` QAreaSeries* self ```
const char* q_areaseries_point_labels_format(void* self) {
    libqt_string _str = QAreaSeries_PointLabelsFormat((QAreaSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#setPointLabelsVisible)
///
/// ``` QAreaSeries* self ```
void q_areaseries_set_point_labels_visible(void* self) {
    QAreaSeries_SetPointLabelsVisible((QAreaSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#pointLabelsVisible)
///
/// ``` QAreaSeries* self ```
bool q_areaseries_point_labels_visible(void* self) {
    return QAreaSeries_PointLabelsVisible((QAreaSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#setPointLabelsFont)
///
/// ``` QAreaSeries* self, QFont* font ```
void q_areaseries_set_point_labels_font(void* self, void* font) {
    QAreaSeries_SetPointLabelsFont((QAreaSeries*)self, (QFont*)font);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#pointLabelsFont)
///
/// ``` QAreaSeries* self ```
QFont* q_areaseries_point_labels_font(void* self) {
    return QAreaSeries_PointLabelsFont((QAreaSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#setPointLabelsColor)
///
/// ``` QAreaSeries* self, QColor* color ```
void q_areaseries_set_point_labels_color(void* self, void* color) {
    QAreaSeries_SetPointLabelsColor((QAreaSeries*)self, (QColor*)color);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#pointLabelsColor)
///
/// ``` QAreaSeries* self ```
QColor* q_areaseries_point_labels_color(void* self) {
    return QAreaSeries_PointLabelsColor((QAreaSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#setPointLabelsClipping)
///
/// ``` QAreaSeries* self ```
void q_areaseries_set_point_labels_clipping(void* self) {
    QAreaSeries_SetPointLabelsClipping((QAreaSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#pointLabelsClipping)
///
/// ``` QAreaSeries* self ```
bool q_areaseries_point_labels_clipping(void* self) {
    return QAreaSeries_PointLabelsClipping((QAreaSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#clicked)
///
/// ``` QAreaSeries* self, QPointF* point ```
void q_areaseries_clicked(void* self, void* point) {
    QAreaSeries_Clicked((QAreaSeries*)self, (QPointF*)point);
}

/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, QPointF*) ```
void q_areaseries_on_clicked(void* self, void (*slot)(void*, void*)) {
    QAreaSeries_Connect_Clicked((QAreaSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#hovered)
///
/// ``` QAreaSeries* self, QPointF* point, bool state ```
void q_areaseries_hovered(void* self, void* point, bool state) {
    QAreaSeries_Hovered((QAreaSeries*)self, (QPointF*)point, state);
}

/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, QPointF*, bool) ```
void q_areaseries_on_hovered(void* self, void (*slot)(void*, void*, bool)) {
    QAreaSeries_Connect_Hovered((QAreaSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#pressed)
///
/// ``` QAreaSeries* self, QPointF* point ```
void q_areaseries_pressed(void* self, void* point) {
    QAreaSeries_Pressed((QAreaSeries*)self, (QPointF*)point);
}

/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, QPointF*) ```
void q_areaseries_on_pressed(void* self, void (*slot)(void*, void*)) {
    QAreaSeries_Connect_Pressed((QAreaSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#released)
///
/// ``` QAreaSeries* self, QPointF* point ```
void q_areaseries_released(void* self, void* point) {
    QAreaSeries_Released((QAreaSeries*)self, (QPointF*)point);
}

/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, QPointF*) ```
void q_areaseries_on_released(void* self, void (*slot)(void*, void*)) {
    QAreaSeries_Connect_Released((QAreaSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#doubleClicked)
///
/// ``` QAreaSeries* self, QPointF* point ```
void q_areaseries_double_clicked(void* self, void* point) {
    QAreaSeries_DoubleClicked((QAreaSeries*)self, (QPointF*)point);
}

/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, QPointF*) ```
void q_areaseries_on_double_clicked(void* self, void (*slot)(void*, void*)) {
    QAreaSeries_Connect_DoubleClicked((QAreaSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#selected)
///
/// ``` QAreaSeries* self ```
void q_areaseries_selected(void* self) {
    QAreaSeries_Selected((QAreaSeries*)self);
}

/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*) ```
void q_areaseries_on_selected(void* self, void (*slot)(void*)) {
    QAreaSeries_Connect_Selected((QAreaSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#colorChanged)
///
/// ``` QAreaSeries* self, QColor* color ```
void q_areaseries_color_changed(void* self, void* color) {
    QAreaSeries_ColorChanged((QAreaSeries*)self, (QColor*)color);
}

/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, QColor*) ```
void q_areaseries_on_color_changed(void* self, void (*slot)(void*, void*)) {
    QAreaSeries_Connect_ColorChanged((QAreaSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#borderColorChanged)
///
/// ``` QAreaSeries* self, QColor* color ```
void q_areaseries_border_color_changed(void* self, void* color) {
    QAreaSeries_BorderColorChanged((QAreaSeries*)self, (QColor*)color);
}

/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, QColor*) ```
void q_areaseries_on_border_color_changed(void* self, void (*slot)(void*, void*)) {
    QAreaSeries_Connect_BorderColorChanged((QAreaSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#pointLabelsFormatChanged)
///
/// ``` QAreaSeries* self, const char* format ```
void q_areaseries_point_labels_format_changed(void* self, const char* format) {
    QAreaSeries_PointLabelsFormatChanged((QAreaSeries*)self, qstring(format));
}

/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, const char*) ```
void q_areaseries_on_point_labels_format_changed(void* self, void (*slot)(void*, const char*)) {
    QAreaSeries_Connect_PointLabelsFormatChanged((QAreaSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#pointLabelsVisibilityChanged)
///
/// ``` QAreaSeries* self, bool visible ```
void q_areaseries_point_labels_visibility_changed(void* self, bool visible) {
    QAreaSeries_PointLabelsVisibilityChanged((QAreaSeries*)self, visible);
}

/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, bool) ```
void q_areaseries_on_point_labels_visibility_changed(void* self, void (*slot)(void*, bool)) {
    QAreaSeries_Connect_PointLabelsVisibilityChanged((QAreaSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#pointLabelsFontChanged)
///
/// ``` QAreaSeries* self, QFont* font ```
void q_areaseries_point_labels_font_changed(void* self, void* font) {
    QAreaSeries_PointLabelsFontChanged((QAreaSeries*)self, (QFont*)font);
}

/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, QFont*) ```
void q_areaseries_on_point_labels_font_changed(void* self, void (*slot)(void*, void*)) {
    QAreaSeries_Connect_PointLabelsFontChanged((QAreaSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#pointLabelsColorChanged)
///
/// ``` QAreaSeries* self, QColor* color ```
void q_areaseries_point_labels_color_changed(void* self, void* color) {
    QAreaSeries_PointLabelsColorChanged((QAreaSeries*)self, (QColor*)color);
}

/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, QColor*) ```
void q_areaseries_on_point_labels_color_changed(void* self, void (*slot)(void*, void*)) {
    QAreaSeries_Connect_PointLabelsColorChanged((QAreaSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#pointLabelsClippingChanged)
///
/// ``` QAreaSeries* self, bool clipping ```
void q_areaseries_point_labels_clipping_changed(void* self, bool clipping) {
    QAreaSeries_PointLabelsClippingChanged((QAreaSeries*)self, clipping);
}

/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, bool) ```
void q_areaseries_on_point_labels_clipping_changed(void* self, void (*slot)(void*, bool)) {
    QAreaSeries_Connect_PointLabelsClippingChanged((QAreaSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_areaseries_tr2(const char* s, const char* c) {
    libqt_string _str = QAreaSeries_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_areaseries_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAreaSeries_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#setPointsVisible)
///
/// ``` QAreaSeries* self, bool visible ```
void q_areaseries_set_points_visible1(void* self, bool visible) {
    QAreaSeries_SetPointsVisible1((QAreaSeries*)self, visible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#setPointLabelsVisible)
///
/// ``` QAreaSeries* self, bool visible ```
void q_areaseries_set_point_labels_visible1(void* self, bool visible) {
    QAreaSeries_SetPointLabelsVisible1((QAreaSeries*)self, visible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries.html#setPointLabelsClipping)
///
/// ``` QAreaSeries* self, bool enabled ```
void q_areaseries_set_point_labels_clipping1(void* self, bool enabled) {
    QAreaSeries_SetPointLabelsClipping1((QAreaSeries*)self, enabled);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// ``` QAreaSeries* self, const char* name ```
void q_areaseries_set_name(void* self, const char* name) {
    QAbstractSeries_SetName((QAbstractSeries*)self, qstring(name));
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// ``` QAreaSeries* self ```
const char* q_areaseries_name(void* self) {
    libqt_string _str = QAbstractSeries_Name((QAbstractSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QAreaSeries* self ```
void q_areaseries_set_visible(void* self) {
    QAbstractSeries_SetVisible((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// ``` QAreaSeries* self ```
bool q_areaseries_is_visible(void* self) {
    return QAbstractSeries_IsVisible((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// ``` QAreaSeries* self ```
double q_areaseries_opacity(void* self) {
    return QAbstractSeries_Opacity((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// ``` QAreaSeries* self, double opacity ```
void q_areaseries_set_opacity(void* self, double opacity) {
    QAbstractSeries_SetOpacity((QAbstractSeries*)self, opacity);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QAreaSeries* self ```
void q_areaseries_set_use_open_g_l(void* self) {
    QAbstractSeries_SetUseOpenGL((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// ``` QAreaSeries* self ```
bool q_areaseries_use_open_g_l(void* self) {
    return QAbstractSeries_UseOpenGL((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// ``` QAreaSeries* self ```
QChart* q_areaseries_chart(void* self) {
    return QAbstractSeries_Chart((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// ``` QAreaSeries* self, QAbstractAxis* axis ```
bool q_areaseries_attach_axis(void* self, void* axis) {
    return QAbstractSeries_AttachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// ``` QAreaSeries* self, QAbstractAxis* axis ```
bool q_areaseries_detach_axis(void* self, void* axis) {
    return QAbstractSeries_DetachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// ``` QAreaSeries* self ```
libqt_list /* of QAbstractAxis* */ q_areaseries_attached_axes(void* self) {
    libqt_list _arr = QAbstractSeries_AttachedAxes((QAbstractSeries*)self);
    return _arr;
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// ``` QAreaSeries* self ```
void q_areaseries_show(void* self) {
    QAbstractSeries_Show((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// ``` QAreaSeries* self ```
void q_areaseries_hide(void* self) {
    QAbstractSeries_Hide((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QAreaSeries* self ```
void q_areaseries_name_changed(void* self) {
    QAbstractSeries_NameChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QAreaSeries* self, void (*slot)(QAbstractSeries*) ```
void q_areaseries_on_name_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_NameChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QAreaSeries* self ```
void q_areaseries_visible_changed(void* self) {
    QAbstractSeries_VisibleChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QAreaSeries* self, void (*slot)(QAbstractSeries*) ```
void q_areaseries_on_visible_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_VisibleChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QAreaSeries* self ```
void q_areaseries_opacity_changed(void* self) {
    QAbstractSeries_OpacityChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QAreaSeries* self, void (*slot)(QAbstractSeries*) ```
void q_areaseries_on_opacity_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_OpacityChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QAreaSeries* self ```
void q_areaseries_use_open_g_l_changed(void* self) {
    QAbstractSeries_UseOpenGLChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QAreaSeries* self, void (*slot)(QAbstractSeries*) ```
void q_areaseries_on_use_open_g_l_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_UseOpenGLChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QAreaSeries* self, bool visible ```
void q_areaseries_set_visible1(void* self, bool visible) {
    QAbstractSeries_SetVisible1((QAbstractSeries*)self, visible);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QAreaSeries* self, bool enable ```
void q_areaseries_set_use_open_g_l1(void* self, bool enable) {
    QAbstractSeries_SetUseOpenGL1((QAbstractSeries*)self, enable);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAreaSeries* self ```
const char* q_areaseries_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAreaSeries* self, const char* name ```
void q_areaseries_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAreaSeries* self ```
bool q_areaseries_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAreaSeries* self ```
bool q_areaseries_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAreaSeries* self ```
bool q_areaseries_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAreaSeries* self ```
bool q_areaseries_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAreaSeries* self, bool b ```
bool q_areaseries_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAreaSeries* self ```
QThread* q_areaseries_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAreaSeries* self, QThread* thread ```
void q_areaseries_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAreaSeries* self, int interval ```
int32_t q_areaseries_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAreaSeries* self, int id ```
void q_areaseries_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAreaSeries* self ```
libqt_list /* of QObject* */ q_areaseries_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAreaSeries* self, QObject* parent ```
void q_areaseries_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAreaSeries* self, QObject* filterObj ```
void q_areaseries_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAreaSeries* self, QObject* obj ```
void q_areaseries_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_areaseries_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAreaSeries* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_areaseries_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_areaseries_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_areaseries_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAreaSeries* self ```
void q_areaseries_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAreaSeries* self ```
void q_areaseries_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAreaSeries* self, const char* name, QVariant* value ```
bool q_areaseries_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAreaSeries* self, const char* name ```
QVariant* q_areaseries_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAreaSeries* self ```
const char** q_areaseries_dynamic_property_names(void* self) {
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
/// ``` QAreaSeries* self ```
QBindingStorage* q_areaseries_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAreaSeries* self ```
QBindingStorage* q_areaseries_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAreaSeries* self ```
void q_areaseries_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QAreaSeries* self, void (*slot)(QObject*) ```
void q_areaseries_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAreaSeries* self ```
QObject* q_areaseries_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAreaSeries* self, const char* classname ```
bool q_areaseries_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAreaSeries* self ```
void q_areaseries_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAreaSeries* self, int interval, enum Qt__TimerType timerType ```
int32_t q_areaseries_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_areaseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAreaSeries* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_areaseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAreaSeries* self, QObject* param1 ```
void q_areaseries_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QAreaSeries* self, void (*slot)(QObject*, QObject*) ```
void q_areaseries_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaSeries* self, QEvent* event ```
bool q_areaseries_event(void* self, void* event) {
    return QAreaSeries_Event((QAreaSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaSeries* self, QEvent* event ```
bool q_areaseries_qbase_event(void* self, void* event) {
    return QAreaSeries_QBaseEvent((QAreaSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaSeries* self, bool (*slot)(QAreaSeries*, QEvent*) ```
void q_areaseries_on_event(void* self, bool (*slot)(void*, void*)) {
    QAreaSeries_OnEvent((QAreaSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaSeries* self, QObject* watched, QEvent* event ```
bool q_areaseries_event_filter(void* self, void* watched, void* event) {
    return QAreaSeries_EventFilter((QAreaSeries*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaSeries* self, QObject* watched, QEvent* event ```
bool q_areaseries_qbase_event_filter(void* self, void* watched, void* event) {
    return QAreaSeries_QBaseEventFilter((QAreaSeries*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaSeries* self, bool (*slot)(QAreaSeries*, QObject*, QEvent*) ```
void q_areaseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAreaSeries_OnEventFilter((QAreaSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaSeries* self, QTimerEvent* event ```
void q_areaseries_timer_event(void* self, void* event) {
    QAreaSeries_TimerEvent((QAreaSeries*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaSeries* self, QTimerEvent* event ```
void q_areaseries_qbase_timer_event(void* self, void* event) {
    QAreaSeries_QBaseTimerEvent((QAreaSeries*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, QTimerEvent*) ```
void q_areaseries_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAreaSeries_OnTimerEvent((QAreaSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaSeries* self, QChildEvent* event ```
void q_areaseries_child_event(void* self, void* event) {
    QAreaSeries_ChildEvent((QAreaSeries*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaSeries* self, QChildEvent* event ```
void q_areaseries_qbase_child_event(void* self, void* event) {
    QAreaSeries_QBaseChildEvent((QAreaSeries*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, QChildEvent*) ```
void q_areaseries_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAreaSeries_OnChildEvent((QAreaSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaSeries* self, QEvent* event ```
void q_areaseries_custom_event(void* self, void* event) {
    QAreaSeries_CustomEvent((QAreaSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaSeries* self, QEvent* event ```
void q_areaseries_qbase_custom_event(void* self, void* event) {
    QAreaSeries_QBaseCustomEvent((QAreaSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, QEvent*) ```
void q_areaseries_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAreaSeries_OnCustomEvent((QAreaSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaSeries* self, QMetaMethod* signal ```
void q_areaseries_connect_notify(void* self, void* signal) {
    QAreaSeries_ConnectNotify((QAreaSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaSeries* self, QMetaMethod* signal ```
void q_areaseries_qbase_connect_notify(void* self, void* signal) {
    QAreaSeries_QBaseConnectNotify((QAreaSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, QMetaMethod*) ```
void q_areaseries_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAreaSeries_OnConnectNotify((QAreaSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaSeries* self, QMetaMethod* signal ```
void q_areaseries_disconnect_notify(void* self, void* signal) {
    QAreaSeries_DisconnectNotify((QAreaSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaSeries* self, QMetaMethod* signal ```
void q_areaseries_qbase_disconnect_notify(void* self, void* signal) {
    QAreaSeries_QBaseDisconnectNotify((QAreaSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, QMetaMethod*) ```
void q_areaseries_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAreaSeries_OnDisconnectNotify((QAreaSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaSeries* self ```
QObject* q_areaseries_sender(void* self) {
    return QAreaSeries_Sender((QAreaSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaSeries* self ```
QObject* q_areaseries_qbase_sender(void* self) {
    return QAreaSeries_QBaseSender((QAreaSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaSeries* self, QObject* (*slot)() ```
void q_areaseries_on_sender(void* self, QObject* (*slot)()) {
    QAreaSeries_OnSender((QAreaSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaSeries* self ```
int32_t q_areaseries_sender_signal_index(void* self) {
    return QAreaSeries_SenderSignalIndex((QAreaSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaSeries* self ```
int32_t q_areaseries_qbase_sender_signal_index(void* self) {
    return QAreaSeries_QBaseSenderSignalIndex((QAreaSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaSeries* self, int32_t (*slot)() ```
void q_areaseries_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAreaSeries_OnSenderSignalIndex((QAreaSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaSeries* self, const char* signal ```
int32_t q_areaseries_receivers(void* self, const char* signal) {
    return QAreaSeries_Receivers((QAreaSeries*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaSeries* self, const char* signal ```
int32_t q_areaseries_qbase_receivers(void* self, const char* signal) {
    return QAreaSeries_QBaseReceivers((QAreaSeries*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaSeries* self, int32_t (*slot)(QAreaSeries*, const char*) ```
void q_areaseries_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAreaSeries_OnReceivers((QAreaSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaSeries* self, QMetaMethod* signal ```
bool q_areaseries_is_signal_connected(void* self, void* signal) {
    return QAreaSeries_IsSignalConnected((QAreaSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaSeries* self, QMetaMethod* signal ```
bool q_areaseries_qbase_is_signal_connected(void* self, void* signal) {
    return QAreaSeries_QBaseIsSignalConnected((QAreaSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaSeries* self, bool (*slot)(QAreaSeries*, QMetaMethod*) ```
void q_areaseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAreaSeries_OnIsSignalConnected((QAreaSeries*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAreaSeries* self ```
void q_areaseries_delete(void* self) {
    QAreaSeries_Delete((QAreaSeries*)(self));
}