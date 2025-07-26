#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQAREASERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQAREASERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qareaseries-qtcharts.html

/// q_areaseries_new constructs a new QAreaSeries object.
///
///
QAreaSeries* q_areaseries_new();

/// q_areaseries_new2 constructs a new QAreaSeries object.
///
/// ``` QLineSeries* upperSeries ```
QAreaSeries* q_areaseries_new2(void* upperSeries);

/// q_areaseries_new3 constructs a new QAreaSeries object.
///
/// ``` QObject* parent ```
QAreaSeries* q_areaseries_new3(void* parent);

/// q_areaseries_new4 constructs a new QAreaSeries object.
///
/// ``` QLineSeries* upperSeries, QLineSeries* lowerSeries ```
QAreaSeries* q_areaseries_new4(void* upperSeries, void* lowerSeries);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAreaSeries* self ```
const QMetaObject* q_areaseries_meta_object(void* self);

/// ``` QAreaSeries* self, const char* param1 ```
void* q_areaseries_metacast(void* self, const char* param1);

/// ``` QAreaSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_areaseries_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QAreaSeries* self, int32_t (*slot)(QAreaSeries*, enum QMetaObject__Call, int, void*) ```
void q_areaseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QAreaSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_areaseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_areaseries_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#type)
///
/// ``` QAreaSeries* self ```
int64_t q_areaseries_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// ``` QAreaSeries* self, int64_t (*slot)() ```
void q_areaseries_on_type(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#type)
///
/// Base class method implementation
///
/// ``` QAreaSeries* self ```
int64_t q_areaseries_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setUpperSeries)
///
/// ``` QAreaSeries* self, QLineSeries* series ```
void q_areaseries_set_upper_series(void* self, void* series);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#upperSeries)
///
/// ``` QAreaSeries* self ```
QLineSeries* q_areaseries_upper_series(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setLowerSeries)
///
/// ``` QAreaSeries* self, QLineSeries* series ```
void q_areaseries_set_lower_series(void* self, void* series);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#lowerSeries)
///
/// ``` QAreaSeries* self ```
QLineSeries* q_areaseries_lower_series(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPen)
///
/// ``` QAreaSeries* self, QPen* pen ```
void q_areaseries_set_pen(void* self, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pen)
///
/// ``` QAreaSeries* self ```
QPen* q_areaseries_pen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setBrush)
///
/// ``` QAreaSeries* self, QBrush* brush ```
void q_areaseries_set_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#brush)
///
/// ``` QAreaSeries* self ```
QBrush* q_areaseries_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setColor)
///
/// ``` QAreaSeries* self, QColor* color ```
void q_areaseries_set_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#color)
///
/// ``` QAreaSeries* self ```
QColor* q_areaseries_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setBorderColor)
///
/// ``` QAreaSeries* self, QColor* color ```
void q_areaseries_set_border_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#borderColor)
///
/// ``` QAreaSeries* self ```
QColor* q_areaseries_border_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointsVisible)
///
/// ``` QAreaSeries* self ```
void q_areaseries_set_points_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointsVisible)
///
/// ``` QAreaSeries* self ```
bool q_areaseries_points_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointLabelsFormat)
///
/// ``` QAreaSeries* self, const char* format ```
void q_areaseries_set_point_labels_format(void* self, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsFormat)
///
/// ``` QAreaSeries* self ```
const char* q_areaseries_point_labels_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointLabelsVisible)
///
/// ``` QAreaSeries* self ```
void q_areaseries_set_point_labels_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsVisible)
///
/// ``` QAreaSeries* self ```
bool q_areaseries_point_labels_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointLabelsFont)
///
/// ``` QAreaSeries* self, QFont* font ```
void q_areaseries_set_point_labels_font(void* self, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsFont)
///
/// ``` QAreaSeries* self ```
QFont* q_areaseries_point_labels_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointLabelsColor)
///
/// ``` QAreaSeries* self, QColor* color ```
void q_areaseries_set_point_labels_color(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsColor)
///
/// ``` QAreaSeries* self ```
QColor* q_areaseries_point_labels_color(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointLabelsClipping)
///
/// ``` QAreaSeries* self ```
void q_areaseries_set_point_labels_clipping(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsClipping)
///
/// ``` QAreaSeries* self ```
bool q_areaseries_point_labels_clipping(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#clicked)
///
/// ``` QAreaSeries* self, QPointF* point ```
void q_areaseries_clicked(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#clicked)
///
/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, QPointF*) ```
void q_areaseries_on_clicked(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#hovered)
///
/// ``` QAreaSeries* self, QPointF* point, bool state ```
void q_areaseries_hovered(void* self, void* point, bool state);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#hovered)
///
/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, QPointF*, bool) ```
void q_areaseries_on_hovered(void* self, void (*slot)(void*, void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pressed)
///
/// ``` QAreaSeries* self, QPointF* point ```
void q_areaseries_pressed(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pressed)
///
/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, QPointF*) ```
void q_areaseries_on_pressed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#released)
///
/// ``` QAreaSeries* self, QPointF* point ```
void q_areaseries_released(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#released)
///
/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, QPointF*) ```
void q_areaseries_on_released(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#doubleClicked)
///
/// ``` QAreaSeries* self, QPointF* point ```
void q_areaseries_double_clicked(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#doubleClicked)
///
/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, QPointF*) ```
void q_areaseries_on_double_clicked(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#selected)
///
/// ``` QAreaSeries* self ```
void q_areaseries_selected(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#selected)
///
/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*) ```
void q_areaseries_on_selected(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#colorChanged)
///
/// ``` QAreaSeries* self, QColor* color ```
void q_areaseries_color_changed(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#colorChanged)
///
/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, QColor*) ```
void q_areaseries_on_color_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#borderColorChanged)
///
/// ``` QAreaSeries* self, QColor* color ```
void q_areaseries_border_color_changed(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#borderColorChanged)
///
/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, QColor*) ```
void q_areaseries_on_border_color_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsFormatChanged)
///
/// ``` QAreaSeries* self, const char* format ```
void q_areaseries_point_labels_format_changed(void* self, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsFormatChanged)
///
/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, const char*) ```
void q_areaseries_on_point_labels_format_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsVisibilityChanged)
///
/// ``` QAreaSeries* self, bool visible ```
void q_areaseries_point_labels_visibility_changed(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsVisibilityChanged)
///
/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, bool) ```
void q_areaseries_on_point_labels_visibility_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsFontChanged)
///
/// ``` QAreaSeries* self, QFont* font ```
void q_areaseries_point_labels_font_changed(void* self, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsFontChanged)
///
/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, QFont*) ```
void q_areaseries_on_point_labels_font_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsColorChanged)
///
/// ``` QAreaSeries* self, QColor* color ```
void q_areaseries_point_labels_color_changed(void* self, void* color);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsColorChanged)
///
/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, QColor*) ```
void q_areaseries_on_point_labels_color_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsClippingChanged)
///
/// ``` QAreaSeries* self, bool clipping ```
void q_areaseries_point_labels_clipping_changed(void* self, bool clipping);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsClippingChanged)
///
/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, bool) ```
void q_areaseries_on_point_labels_clipping_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_areaseries_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_areaseries_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointsVisible)
///
/// ``` QAreaSeries* self, bool visible ```
void q_areaseries_set_points_visible1(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointLabelsVisible)
///
/// ``` QAreaSeries* self, bool visible ```
void q_areaseries_set_point_labels_visible1(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointLabelsClipping)
///
/// ``` QAreaSeries* self, bool enabled ```
void q_areaseries_set_point_labels_clipping1(void* self, bool enabled);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// ``` QAreaSeries* self, const char* name ```
void q_areaseries_set_name(void* self, const char* name);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// ``` QAreaSeries* self ```
const char* q_areaseries_name(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QAreaSeries* self ```
void q_areaseries_set_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// ``` QAreaSeries* self ```
bool q_areaseries_is_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// ``` QAreaSeries* self ```
double q_areaseries_opacity(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// ``` QAreaSeries* self, double opacity ```
void q_areaseries_set_opacity(void* self, double opacity);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QAreaSeries* self ```
void q_areaseries_set_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// ``` QAreaSeries* self ```
bool q_areaseries_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// ``` QAreaSeries* self ```
QChart* q_areaseries_chart(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// ``` QAreaSeries* self, QAbstractAxis* axis ```
bool q_areaseries_attach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// ``` QAreaSeries* self, QAbstractAxis* axis ```
bool q_areaseries_detach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// ``` QAreaSeries* self ```
libqt_list /* of QAbstractAxis* */ q_areaseries_attached_axes(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// ``` QAreaSeries* self ```
void q_areaseries_show(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// ``` QAreaSeries* self ```
void q_areaseries_hide(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QAreaSeries* self ```
void q_areaseries_name_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*) ```
void q_areaseries_on_name_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QAreaSeries* self ```
void q_areaseries_visible_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*) ```
void q_areaseries_on_visible_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QAreaSeries* self ```
void q_areaseries_opacity_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*) ```
void q_areaseries_on_opacity_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QAreaSeries* self ```
void q_areaseries_use_open_g_l_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*) ```
void q_areaseries_on_use_open_g_l_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QAreaSeries* self, bool visible ```
void q_areaseries_set_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QAreaSeries* self, bool enable ```
void q_areaseries_set_use_open_g_l1(void* self, bool enable);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAreaSeries* self ```
const char* q_areaseries_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAreaSeries* self, char* name ```
void q_areaseries_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAreaSeries* self ```
bool q_areaseries_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAreaSeries* self ```
bool q_areaseries_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAreaSeries* self ```
bool q_areaseries_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAreaSeries* self ```
bool q_areaseries_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAreaSeries* self, bool b ```
bool q_areaseries_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAreaSeries* self ```
QThread* q_areaseries_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAreaSeries* self, QThread* thread ```
bool q_areaseries_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAreaSeries* self, int interval ```
int32_t q_areaseries_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAreaSeries* self, int id ```
void q_areaseries_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAreaSeries* self, enum Qt__TimerId id ```
void q_areaseries_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAreaSeries* self ```
libqt_list /* of QObject* */ q_areaseries_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAreaSeries* self, QObject* parent ```
void q_areaseries_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAreaSeries* self, QObject* filterObj ```
void q_areaseries_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAreaSeries* self, QObject* obj ```
void q_areaseries_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_areaseries_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAreaSeries* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_areaseries_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_areaseries_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_areaseries_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAreaSeries* self ```
void q_areaseries_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAreaSeries* self ```
void q_areaseries_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAreaSeries* self, const char* name, QVariant* value ```
bool q_areaseries_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAreaSeries* self, const char* name ```
QVariant* q_areaseries_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAreaSeries* self ```
const char** q_areaseries_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAreaSeries* self ```
QBindingStorage* q_areaseries_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAreaSeries* self ```
const QBindingStorage* q_areaseries_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAreaSeries* self ```
void q_areaseries_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*) ```
void q_areaseries_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAreaSeries* self ```
QObject* q_areaseries_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAreaSeries* self, const char* classname ```
bool q_areaseries_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAreaSeries* self ```
void q_areaseries_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAreaSeries* self, QThread* thread, Disambiguated_t* param2 ```
bool q_areaseries_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAreaSeries* self, int interval, enum Qt__TimerType timerType ```
int32_t q_areaseries_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_areaseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAreaSeries* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_areaseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAreaSeries* self, QObject* param1 ```
void q_areaseries_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, QObject*) ```
void q_areaseries_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaSeries* self, QEvent* event ```
bool q_areaseries_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaSeries* self, QEvent* event ```
bool q_areaseries_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaSeries* self, bool (*slot)(QAreaSeries*, QEvent*) ```
void q_areaseries_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaSeries* self, QObject* watched, QEvent* event ```
bool q_areaseries_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaSeries* self, QObject* watched, QEvent* event ```
bool q_areaseries_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaSeries* self, bool (*slot)(QAreaSeries*, QObject*, QEvent*) ```
void q_areaseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaSeries* self, QTimerEvent* event ```
void q_areaseries_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaSeries* self, QTimerEvent* event ```
void q_areaseries_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, QTimerEvent*) ```
void q_areaseries_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaSeries* self, QChildEvent* event ```
void q_areaseries_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaSeries* self, QChildEvent* event ```
void q_areaseries_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, QChildEvent*) ```
void q_areaseries_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaSeries* self, QEvent* event ```
void q_areaseries_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaSeries* self, QEvent* event ```
void q_areaseries_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, QEvent*) ```
void q_areaseries_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaSeries* self, QMetaMethod* signal ```
void q_areaseries_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaSeries* self, QMetaMethod* signal ```
void q_areaseries_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, QMetaMethod*) ```
void q_areaseries_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaSeries* self, QMetaMethod* signal ```
void q_areaseries_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaSeries* self, QMetaMethod* signal ```
void q_areaseries_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, QMetaMethod*) ```
void q_areaseries_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaSeries* self ```
QObject* q_areaseries_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaSeries* self ```
QObject* q_areaseries_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaSeries* self, QObject* (*slot)() ```
void q_areaseries_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaSeries* self ```
int32_t q_areaseries_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaSeries* self ```
int32_t q_areaseries_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaSeries* self, int32_t (*slot)() ```
void q_areaseries_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaSeries* self, const char* signal ```
int32_t q_areaseries_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaSeries* self, const char* signal ```
int32_t q_areaseries_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaSeries* self, int32_t (*slot)(QAreaSeries*, const char*) ```
void q_areaseries_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAreaSeries* self, QMetaMethod* signal ```
bool q_areaseries_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAreaSeries* self, QMetaMethod* signal ```
bool q_areaseries_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAreaSeries* self, bool (*slot)(QAreaSeries*, QMetaMethod*) ```
void q_areaseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QAreaSeries* self, void (*slot)(QAreaSeries*, const char*) ```
void q_areaseries_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#dtor.QAreaSeries)
///
/// Delete this object from C++ memory.
///
/// ``` QAreaSeries* self ```
void q_areaseries_delete(void* self);

#endif
