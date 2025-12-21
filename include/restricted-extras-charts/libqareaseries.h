#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQAREASERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQAREASERIES_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html)

/// q_areaseries_new constructs a new QAreaSeries object.
///
QAreaSeries* q_areaseries_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html)

/// q_areaseries_new2 constructs a new QAreaSeries object.
///
/// @param upperSeries QLineSeries*
///
QAreaSeries* q_areaseries_new2(void* upperSeries);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html)

/// q_areaseries_new3 constructs a new QAreaSeries object.
///
/// @param parent QObject*
///
QAreaSeries* q_areaseries_new3(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html)

/// q_areaseries_new4 constructs a new QAreaSeries object.
///
/// @param upperSeries QLineSeries*
/// @param lowerSeries QLineSeries*
///
QAreaSeries* q_areaseries_new4(void* upperSeries, void* lowerSeries);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QAreaSeries*
///
const QMetaObject* q_areaseries_meta_object(void* self);

/// @param self QAreaSeries*
/// @param param1 const char*
///
void* q_areaseries_metacast(void* self, const char* param1);

/// @param self QAreaSeries*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_areaseries_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QAreaSeries*
/// @param callback int32_t func(QAreaSeries* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_areaseries_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QAreaSeries*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_areaseries_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* q_areaseries_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#type)
///
/// @param self QAreaSeries*
///
/// @return enum QAbstractSeries__SeriesType
///
int32_t q_areaseries_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QAreaSeries*
/// @param callback int32_t func()
///
void q_areaseries_on_type(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#type)
///
/// Base class method implementation
///
/// @param self QAreaSeries*
///
/// @return enum QAbstractSeries__SeriesType
///
int32_t q_areaseries_qbase_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setUpperSeries)
///
/// @param self QAreaSeries*
/// @param series QLineSeries*
///
void q_areaseries_set_upper_series(void* self, void* series);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#upperSeries)
///
/// @param self QAreaSeries*
///
QLineSeries* q_areaseries_upper_series(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setLowerSeries)
///
/// @param self QAreaSeries*
/// @param series QLineSeries*
///
void q_areaseries_set_lower_series(void* self, void* series);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#lowerSeries)
///
/// @param self QAreaSeries*
///
QLineSeries* q_areaseries_lower_series(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPen)
///
/// @param self QAreaSeries*
/// @param pen QPen*
///
void q_areaseries_set_pen(void* self, void* pen);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pen)
///
/// @param self QAreaSeries*
///
QPen* q_areaseries_pen(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setBrush)
///
/// @param self QAreaSeries*
/// @param brush QBrush*
///
void q_areaseries_set_brush(void* self, void* brush);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#brush)
///
/// @param self QAreaSeries*
///
QBrush* q_areaseries_brush(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setColor)
///
/// @param self QAreaSeries*
/// @param color QColor*
///
void q_areaseries_set_color(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#color)
///
/// @param self QAreaSeries*
///
QColor* q_areaseries_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setBorderColor)
///
/// @param self QAreaSeries*
/// @param color QColor*
///
void q_areaseries_set_border_color(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#borderColor)
///
/// @param self QAreaSeries*
///
QColor* q_areaseries_border_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointsVisible)
///
/// @param self QAreaSeries*
///
void q_areaseries_set_points_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointsVisible)
///
/// @param self QAreaSeries*
///
bool q_areaseries_points_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointLabelsFormat)
///
/// @param self QAreaSeries*
/// @param format const char*
///
void q_areaseries_set_point_labels_format(void* self, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsFormat)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QAreaSeries*
///
const char* q_areaseries_point_labels_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointLabelsVisible)
///
/// @param self QAreaSeries*
///
void q_areaseries_set_point_labels_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsVisible)
///
/// @param self QAreaSeries*
///
bool q_areaseries_point_labels_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointLabelsFont)
///
/// @param self QAreaSeries*
/// @param font QFont*
///
void q_areaseries_set_point_labels_font(void* self, void* font);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsFont)
///
/// @param self QAreaSeries*
///
QFont* q_areaseries_point_labels_font(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointLabelsColor)
///
/// @param self QAreaSeries*
/// @param color QColor*
///
void q_areaseries_set_point_labels_color(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsColor)
///
/// @param self QAreaSeries*
///
QColor* q_areaseries_point_labels_color(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointLabelsClipping)
///
/// @param self QAreaSeries*
///
void q_areaseries_set_point_labels_clipping(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsClipping)
///
/// @param self QAreaSeries*
///
bool q_areaseries_point_labels_clipping(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#clicked)
///
/// @param self QAreaSeries*
/// @param point QPointF*
///
void q_areaseries_clicked(void* self, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#clicked)
///
/// @param self QAreaSeries*
/// @param callback void func(QAreaSeries* self, QPointF* point)
///
void q_areaseries_on_clicked(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#hovered)
///
/// @param self QAreaSeries*
/// @param point QPointF*
/// @param state bool
///
void q_areaseries_hovered(void* self, void* point, bool state);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#hovered)
///
/// @param self QAreaSeries*
/// @param callback void func(QAreaSeries* self, QPointF* point, bool state)
///
void q_areaseries_on_hovered(void* self, void (*callback)(void*, void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pressed)
///
/// @param self QAreaSeries*
/// @param point QPointF*
///
void q_areaseries_pressed(void* self, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pressed)
///
/// @param self QAreaSeries*
/// @param callback void func(QAreaSeries* self, QPointF* point)
///
void q_areaseries_on_pressed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#released)
///
/// @param self QAreaSeries*
/// @param point QPointF*
///
void q_areaseries_released(void* self, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#released)
///
/// @param self QAreaSeries*
/// @param callback void func(QAreaSeries* self, QPointF* point)
///
void q_areaseries_on_released(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#doubleClicked)
///
/// @param self QAreaSeries*
/// @param point QPointF*
///
void q_areaseries_double_clicked(void* self, void* point);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#doubleClicked)
///
/// @param self QAreaSeries*
/// @param callback void func(QAreaSeries* self, QPointF* point)
///
void q_areaseries_on_double_clicked(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#selected)
///
/// @param self QAreaSeries*
///
void q_areaseries_selected(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#selected)
///
/// @param self QAreaSeries*
/// @param callback void func(QAreaSeries* self)
///
void q_areaseries_on_selected(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#colorChanged)
///
/// @param self QAreaSeries*
/// @param color QColor*
///
void q_areaseries_color_changed(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#colorChanged)
///
/// @param self QAreaSeries*
/// @param callback void func(QAreaSeries* self, QColor* color)
///
void q_areaseries_on_color_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#borderColorChanged)
///
/// @param self QAreaSeries*
/// @param color QColor*
///
void q_areaseries_border_color_changed(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#borderColorChanged)
///
/// @param self QAreaSeries*
/// @param callback void func(QAreaSeries* self, QColor* color)
///
void q_areaseries_on_border_color_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsFormatChanged)
///
/// @param self QAreaSeries*
/// @param format const char*
///
void q_areaseries_point_labels_format_changed(void* self, const char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsFormatChanged)
///
/// @param self QAreaSeries*
/// @param callback void func(QAreaSeries* self, const char* format)
///
void q_areaseries_on_point_labels_format_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsVisibilityChanged)
///
/// @param self QAreaSeries*
/// @param visible bool
///
void q_areaseries_point_labels_visibility_changed(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsVisibilityChanged)
///
/// @param self QAreaSeries*
/// @param callback void func(QAreaSeries* self, bool visible)
///
void q_areaseries_on_point_labels_visibility_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsFontChanged)
///
/// @param self QAreaSeries*
/// @param font QFont*
///
void q_areaseries_point_labels_font_changed(void* self, void* font);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsFontChanged)
///
/// @param self QAreaSeries*
/// @param callback void func(QAreaSeries* self, QFont* font)
///
void q_areaseries_on_point_labels_font_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsColorChanged)
///
/// @param self QAreaSeries*
/// @param color QColor*
///
void q_areaseries_point_labels_color_changed(void* self, void* color);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsColorChanged)
///
/// @param self QAreaSeries*
/// @param callback void func(QAreaSeries* self, QColor* color)
///
void q_areaseries_on_point_labels_color_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsClippingChanged)
///
/// @param self QAreaSeries*
/// @param clipping bool
///
void q_areaseries_point_labels_clipping_changed(void* self, bool clipping);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#pointLabelsClippingChanged)
///
/// @param self QAreaSeries*
/// @param callback void func(QAreaSeries* self, bool clipping)
///
void q_areaseries_on_point_labels_clipping_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* q_areaseries_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_areaseries_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointsVisible)
///
/// @param self QAreaSeries*
/// @param visible bool
///
void q_areaseries_set_points_visible1(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointLabelsVisible)
///
/// @param self QAreaSeries*
/// @param visible bool
///
void q_areaseries_set_point_labels_visible1(void* self, bool visible);

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#setPointLabelsClipping)
///
/// @param self QAreaSeries*
/// @param enabled bool
///
void q_areaseries_set_point_labels_clipping1(void* self, bool enabled);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// @param self QAreaSeries*
/// @param name const char*
///
void q_areaseries_set_name(void* self, const char* name);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QAreaSeries*
///
const char* q_areaseries_name(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// @param self QAreaSeries*
///
void q_areaseries_set_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// @param self QAreaSeries*
///
bool q_areaseries_is_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// @param self QAreaSeries*
///
double q_areaseries_opacity(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// @param self QAreaSeries*
/// @param opacity double
///
void q_areaseries_set_opacity(void* self, double opacity);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// @param self QAreaSeries*
///
void q_areaseries_set_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// @param self QAreaSeries*
///
bool q_areaseries_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// @param self QAreaSeries*
///
QChart* q_areaseries_chart(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// @param self QAreaSeries*
/// @param axis QAbstractAxis*
///
bool q_areaseries_attach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// @param self QAreaSeries*
/// @param axis QAbstractAxis*
///
bool q_areaseries_detach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// @param self QAreaSeries*
///
libqt_list /* of QAbstractAxis* */ q_areaseries_attached_axes(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// @param self QAreaSeries*
///
void q_areaseries_show(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// @param self QAreaSeries*
///
void q_areaseries_hide(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// @param self QAreaSeries*
///
void q_areaseries_name_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// @param self QAreaSeries*
/// @param callback void func(QAreaSeries* self)
///
void q_areaseries_on_name_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// @param self QAreaSeries*
///
void q_areaseries_visible_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// @param self QAreaSeries*
/// @param callback void func(QAreaSeries* self)
///
void q_areaseries_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// @param self QAreaSeries*
///
void q_areaseries_opacity_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// @param self QAreaSeries*
/// @param callback void func(QAreaSeries* self)
///
void q_areaseries_on_opacity_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// @param self QAreaSeries*
///
void q_areaseries_use_open_g_l_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// @param self QAreaSeries*
/// @param callback void func(QAreaSeries* self)
///
void q_areaseries_on_use_open_g_l_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// @param self QAreaSeries*
/// @param visible bool
///
void q_areaseries_set_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// @param self QAreaSeries*
/// @param enable bool
///
void q_areaseries_set_use_open_g_l1(void* self, bool enable);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QAreaSeries*
///
const char* q_areaseries_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAreaSeries*
/// @param name char*
///
void q_areaseries_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QAreaSeries*
///
bool q_areaseries_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QAreaSeries*
///
bool q_areaseries_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QAreaSeries*
///
bool q_areaseries_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QAreaSeries*
///
bool q_areaseries_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAreaSeries*
/// @param b bool
///
bool q_areaseries_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QAreaSeries*
///
QThread* q_areaseries_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAreaSeries*
/// @param thread QThread*
///
bool q_areaseries_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAreaSeries*
/// @param interval int
///
int32_t q_areaseries_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAreaSeries*
/// @param id int
///
void q_areaseries_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAreaSeries*
/// @param id enum Qt__TimerId
///
void q_areaseries_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QAreaSeries*
///
libqt_list /* of QObject* */ q_areaseries_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QAreaSeries*
/// @param parent QObject*
///
void q_areaseries_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAreaSeries*
/// @param filterObj QObject*
///
void q_areaseries_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAreaSeries*
/// @param obj QObject*
///
void q_areaseries_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_areaseries_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAreaSeries*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_areaseries_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_areaseries_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_areaseries_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QAreaSeries*
///
void q_areaseries_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QAreaSeries*
///
void q_areaseries_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAreaSeries*
/// @param name const char*
/// @param value QVariant*
///
bool q_areaseries_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QAreaSeries*
/// @param name const char*
///
QVariant* q_areaseries_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QAreaSeries*
///
const char** q_areaseries_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAreaSeries*
///
QBindingStorage* q_areaseries_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAreaSeries*
///
const QBindingStorage* q_areaseries_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAreaSeries*
///
void q_areaseries_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAreaSeries*
/// @param callback void func(QAreaSeries* self)
///
void q_areaseries_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QAreaSeries*
///
QObject* q_areaseries_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QAreaSeries*
/// @param classname const char*
///
bool q_areaseries_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAreaSeries*
///
void q_areaseries_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAreaSeries*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_areaseries_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAreaSeries*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_areaseries_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_areaseries_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAreaSeries*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_areaseries_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAreaSeries*
/// @param param1 QObject*
///
void q_areaseries_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAreaSeries*
/// @param callback void func(QAreaSeries* self, QObject* param1)
///
void q_areaseries_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAreaSeries*
/// @param event QEvent*
///
bool q_areaseries_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAreaSeries*
/// @param event QEvent*
///
bool q_areaseries_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAreaSeries*
/// @param callback bool func(QAreaSeries* self, QEvent* event)
///
void q_areaseries_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAreaSeries*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_areaseries_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAreaSeries*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_areaseries_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAreaSeries*
/// @param callback bool func(QAreaSeries* self, QObject* watched, QEvent* event)
///
void q_areaseries_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAreaSeries*
/// @param event QTimerEvent*
///
void q_areaseries_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAreaSeries*
/// @param event QTimerEvent*
///
void q_areaseries_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAreaSeries*
/// @param callback void func(QAreaSeries* self, QTimerEvent* event)
///
void q_areaseries_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAreaSeries*
/// @param event QChildEvent*
///
void q_areaseries_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAreaSeries*
/// @param event QChildEvent*
///
void q_areaseries_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAreaSeries*
/// @param callback void func(QAreaSeries* self, QChildEvent* event)
///
void q_areaseries_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAreaSeries*
/// @param event QEvent*
///
void q_areaseries_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAreaSeries*
/// @param event QEvent*
///
void q_areaseries_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAreaSeries*
/// @param callback void func(QAreaSeries* self, QEvent* event)
///
void q_areaseries_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAreaSeries*
/// @param signal QMetaMethod*
///
void q_areaseries_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAreaSeries*
/// @param signal QMetaMethod*
///
void q_areaseries_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAreaSeries*
/// @param callback void func(QAreaSeries* self, QMetaMethod* signal)
///
void q_areaseries_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAreaSeries*
/// @param signal QMetaMethod*
///
void q_areaseries_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAreaSeries*
/// @param signal QMetaMethod*
///
void q_areaseries_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAreaSeries*
/// @param callback void func(QAreaSeries* self, QMetaMethod* signal)
///
void q_areaseries_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAreaSeries*
///
QObject* q_areaseries_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAreaSeries*
///
QObject* q_areaseries_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAreaSeries*
/// @param callback QObject* func()
///
void q_areaseries_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAreaSeries*
///
int32_t q_areaseries_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAreaSeries*
///
int32_t q_areaseries_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAreaSeries*
/// @param callback int32_t func()
///
void q_areaseries_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAreaSeries*
/// @param signal const char*
///
int32_t q_areaseries_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAreaSeries*
/// @param signal const char*
///
int32_t q_areaseries_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAreaSeries*
/// @param callback int32_t func(QAreaSeries* self, const char* signal)
///
void q_areaseries_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAreaSeries*
/// @param signal QMetaMethod*
///
bool q_areaseries_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAreaSeries*
/// @param signal QMetaMethod*
///
bool q_areaseries_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAreaSeries*
/// @param callback bool func(QAreaSeries* self, QMetaMethod* signal)
///
void q_areaseries_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAreaSeries*
/// @param callback void func(QAreaSeries* self, const char* objectName)
///
void q_areaseries_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qareaseries-qtcharts.html#dtor.QAreaSeries)
///
/// Delete this object from C++ memory.
///
/// @param self QAreaSeries*
///
void q_areaseries_delete(void* self);

#endif
