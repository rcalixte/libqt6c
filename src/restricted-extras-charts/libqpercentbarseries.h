#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQPERCENTBARSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQPERCENTBARSERIES_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qpercentbarseries-qtcharts.html)

/// q_percentbarseries_new constructs a new QPercentBarSeries object.
///
QPercentBarSeries* q_percentbarseries_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qpercentbarseries-qtcharts.html)

/// q_percentbarseries_new2 constructs a new QPercentBarSeries object.
///
/// @param parent QObject*
///
QPercentBarSeries* q_percentbarseries_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QPercentBarSeries*
///
const QMetaObject* q_percentbarseries_meta_object(void* self);

/// @param self QPercentBarSeries*
/// @param param1 const char*
///
void* q_percentbarseries_metacast(void* self, const char* param1);

/// @param self QPercentBarSeries*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_percentbarseries_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPercentBarSeries*
/// @param callback int32_t func(QPercentBarSeries* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_percentbarseries_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QPercentBarSeries*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_percentbarseries_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_percentbarseries_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qpercentbarseries-qtcharts.html#type)
///
/// @param self QPercentBarSeries*
///
/// @return enum QAbstractSeries__SeriesType
///
int32_t q_percentbarseries_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpercentbarseries-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QPercentBarSeries*
/// @param callback int32_t func()
///
void q_percentbarseries_on_type(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qpercentbarseries-qtcharts.html#type)
///
/// Base class method implementation
///
/// @param self QPercentBarSeries*
///
/// @return enum QAbstractSeries__SeriesType
///
int32_t q_percentbarseries_qbase_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_percentbarseries_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_percentbarseries_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setBarWidth)
///
/// @param self QPercentBarSeries*
/// @param width double
///
void q_percentbarseries_set_bar_width(void* self, double width);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barWidth)
///
/// @param self QPercentBarSeries*
///
double q_percentbarseries_bar_width(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
///
/// @param self QPercentBarSeries*
/// @param set QBarSet*
///
bool q_percentbarseries_append(void* self, void* set);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#remove)
///
/// @param self QPercentBarSeries*
/// @param set QBarSet*
///
bool q_percentbarseries_remove(void* self, void* set);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#take)
///
/// @param self QPercentBarSeries*
/// @param set QBarSet*
///
bool q_percentbarseries_take(void* self, void* set);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
///
/// @param self QPercentBarSeries*
/// @param sets libqt_list /* of QBarSet* */
///
bool q_percentbarseries_append2(void* self, libqt_list sets);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#insert)
///
/// @param self QPercentBarSeries*
/// @param index int
/// @param set QBarSet*
///
bool q_percentbarseries_insert(void* self, int index, void* set);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#count)
///
/// @param self QPercentBarSeries*
///
int32_t q_percentbarseries_count(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barSets)
///
/// @param self QPercentBarSeries*
///
libqt_list /* of QBarSet* */ q_percentbarseries_bar_sets(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#clear)
///
/// @param self QPercentBarSeries*
///
void q_percentbarseries_clear(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
///
/// @param self QPercentBarSeries*
///
void q_percentbarseries_set_labels_visible(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#isLabelsVisible)
///
/// @param self QPercentBarSeries*
///
bool q_percentbarseries_is_labels_visible(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsFormat)
///
/// @param self QPercentBarSeries*
/// @param format const char*
///
void q_percentbarseries_set_labels_format(void* self, const char* format);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormat)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPercentBarSeries*
///
const char* q_percentbarseries_labels_format(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsAngle)
///
/// @param self QPercentBarSeries*
/// @param angle double
///
void q_percentbarseries_set_labels_angle(void* self, double angle);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngle)
///
/// @param self QPercentBarSeries*
///
double q_percentbarseries_labels_angle(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPosition)
///
/// @param self QPercentBarSeries*
/// @param position enum QAbstractBarSeries__LabelsPosition
///
void q_percentbarseries_set_labels_position(void* self, int32_t position);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPosition)
///
/// @param self QPercentBarSeries*
///
/// @return enum QAbstractBarSeries__LabelsPosition
///
int32_t q_percentbarseries_labels_position(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPrecision)
///
/// @param self QPercentBarSeries*
/// @param precision int
///
void q_percentbarseries_set_labels_precision(void* self, int precision);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecision)
///
/// @param self QPercentBarSeries*
///
int32_t q_percentbarseries_labels_precision(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#clicked)
///
/// @param self QPercentBarSeries*
/// @param index int
/// @param barset QBarSet*
///
void q_percentbarseries_clicked(void* self, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#clicked)
///
/// @param self QPercentBarSeries*
/// @param callback void func(QPercentBarSeries* self, int index, QBarSet* barset)
///
void q_percentbarseries_on_clicked(void* self, void (*callback)(void*, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#hovered)
///
/// @param self QPercentBarSeries*
/// @param status bool
/// @param index int
/// @param barset QBarSet*
///
void q_percentbarseries_hovered(void* self, bool status, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#hovered)
///
/// @param self QPercentBarSeries*
/// @param callback void func(QPercentBarSeries* self, bool status, int index, QBarSet* barset)
///
void q_percentbarseries_on_hovered(void* self, void (*callback)(void*, bool, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#pressed)
///
/// @param self QPercentBarSeries*
/// @param index int
/// @param barset QBarSet*
///
void q_percentbarseries_pressed(void* self, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#pressed)
///
/// @param self QPercentBarSeries*
/// @param callback void func(QPercentBarSeries* self, int index, QBarSet* barset)
///
void q_percentbarseries_on_pressed(void* self, void (*callback)(void*, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#released)
///
/// @param self QPercentBarSeries*
/// @param index int
/// @param barset QBarSet*
///
void q_percentbarseries_released(void* self, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#released)
///
/// @param self QPercentBarSeries*
/// @param callback void func(QPercentBarSeries* self, int index, QBarSet* barset)
///
void q_percentbarseries_on_released(void* self, void (*callback)(void*, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#doubleClicked)
///
/// @param self QPercentBarSeries*
/// @param index int
/// @param barset QBarSet*
///
void q_percentbarseries_double_clicked(void* self, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#doubleClicked)
///
/// @param self QPercentBarSeries*
/// @param callback void func(QPercentBarSeries* self, int index, QBarSet* barset)
///
void q_percentbarseries_on_double_clicked(void* self, void (*callback)(void*, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#countChanged)
///
/// @param self QPercentBarSeries*
///
void q_percentbarseries_count_changed(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#countChanged)
///
/// @param self QPercentBarSeries*
/// @param callback void func(QPercentBarSeries* self)
///
void q_percentbarseries_on_count_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsVisibleChanged)
///
/// @param self QPercentBarSeries*
///
void q_percentbarseries_labels_visible_changed(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsVisibleChanged)
///
/// @param self QPercentBarSeries*
/// @param callback void func(QPercentBarSeries* self)
///
void q_percentbarseries_on_labels_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormatChanged)
///
/// @param self QPercentBarSeries*
/// @param format const char*
///
void q_percentbarseries_labels_format_changed(void* self, const char* format);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormatChanged)
///
/// @param self QPercentBarSeries*
/// @param callback void func(QPercentBarSeries* self, const char* format)
///
void q_percentbarseries_on_labels_format_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPositionChanged)
///
/// @param self QPercentBarSeries*
/// @param position enum QAbstractBarSeries__LabelsPosition
///
void q_percentbarseries_labels_position_changed(void* self, int32_t position);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPositionChanged)
///
/// @param self QPercentBarSeries*
/// @param callback void func(QPercentBarSeries* self, enum QAbstractBarSeries__LabelsPosition position)
///
void q_percentbarseries_on_labels_position_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngleChanged)
///
/// @param self QPercentBarSeries*
/// @param angle double
///
void q_percentbarseries_labels_angle_changed(void* self, double angle);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngleChanged)
///
/// @param self QPercentBarSeries*
/// @param callback void func(QPercentBarSeries* self, double angle)
///
void q_percentbarseries_on_labels_angle_changed(void* self, void (*callback)(void*, double));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecisionChanged)
///
/// @param self QPercentBarSeries*
/// @param precision int
///
void q_percentbarseries_labels_precision_changed(void* self, int precision);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecisionChanged)
///
/// @param self QPercentBarSeries*
/// @param callback void func(QPercentBarSeries* self, int precision)
///
void q_percentbarseries_on_labels_precision_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsAdded)
///
/// @param self QPercentBarSeries*
/// @param sets libqt_list /* of QBarSet* */
///
void q_percentbarseries_barsets_added(void* self, libqt_list sets);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsAdded)
///
/// @param self QPercentBarSeries*
/// @param callback void func(QPercentBarSeries* self, QBarSet** sets)
///
void q_percentbarseries_on_barsets_added(void* self, void (*callback)(void*, QBarSet**));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsRemoved)
///
/// @param self QPercentBarSeries*
/// @param sets libqt_list /* of QBarSet* */
///
void q_percentbarseries_barsets_removed(void* self, libqt_list sets);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsRemoved)
///
/// @param self QPercentBarSeries*
/// @param callback void func(QPercentBarSeries* self, QBarSet** sets)
///
void q_percentbarseries_on_barsets_removed(void* self, void (*callback)(void*, QBarSet**));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
///
/// @param self QPercentBarSeries*
/// @param visible bool
///
void q_percentbarseries_set_labels_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// @param self QPercentBarSeries*
/// @param name const char*
///
void q_percentbarseries_set_name(void* self, const char* name);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPercentBarSeries*
///
const char* q_percentbarseries_name(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// @param self QPercentBarSeries*
///
void q_percentbarseries_set_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// @param self QPercentBarSeries*
///
bool q_percentbarseries_is_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// @param self QPercentBarSeries*
///
double q_percentbarseries_opacity(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// @param self QPercentBarSeries*
/// @param opacity double
///
void q_percentbarseries_set_opacity(void* self, double opacity);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// @param self QPercentBarSeries*
///
void q_percentbarseries_set_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// @param self QPercentBarSeries*
///
bool q_percentbarseries_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// @param self QPercentBarSeries*
///
QChart* q_percentbarseries_chart(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// @param self QPercentBarSeries*
/// @param axis QAbstractAxis*
///
bool q_percentbarseries_attach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// @param self QPercentBarSeries*
/// @param axis QAbstractAxis*
///
bool q_percentbarseries_detach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// @param self QPercentBarSeries*
///
libqt_list /* of QAbstractAxis* */ q_percentbarseries_attached_axes(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// @param self QPercentBarSeries*
///
void q_percentbarseries_show(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// @param self QPercentBarSeries*
///
void q_percentbarseries_hide(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// @param self QPercentBarSeries*
///
void q_percentbarseries_name_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// @param self QPercentBarSeries*
/// @param callback void func(QPercentBarSeries* self)
///
void q_percentbarseries_on_name_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// @param self QPercentBarSeries*
///
void q_percentbarseries_visible_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// @param self QPercentBarSeries*
/// @param callback void func(QPercentBarSeries* self)
///
void q_percentbarseries_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// @param self QPercentBarSeries*
///
void q_percentbarseries_opacity_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// @param self QPercentBarSeries*
/// @param callback void func(QPercentBarSeries* self)
///
void q_percentbarseries_on_opacity_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// @param self QPercentBarSeries*
///
void q_percentbarseries_use_open_g_l_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// @param self QPercentBarSeries*
/// @param callback void func(QPercentBarSeries* self)
///
void q_percentbarseries_on_use_open_g_l_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// @param self QPercentBarSeries*
/// @param visible bool
///
void q_percentbarseries_set_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// @param self QPercentBarSeries*
/// @param enable bool
///
void q_percentbarseries_set_use_open_g_l1(void* self, bool enable);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPercentBarSeries*
///
const char* q_percentbarseries_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPercentBarSeries*
/// @param name char*
///
void q_percentbarseries_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QPercentBarSeries*
///
bool q_percentbarseries_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QPercentBarSeries*
///
bool q_percentbarseries_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QPercentBarSeries*
///
bool q_percentbarseries_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QPercentBarSeries*
///
bool q_percentbarseries_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPercentBarSeries*
/// @param b bool
///
bool q_percentbarseries_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QPercentBarSeries*
///
QThread* q_percentbarseries_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPercentBarSeries*
/// @param thread QThread*
///
bool q_percentbarseries_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPercentBarSeries*
/// @param interval int
///
int32_t q_percentbarseries_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPercentBarSeries*
/// @param id int
///
void q_percentbarseries_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPercentBarSeries*
/// @param id enum Qt__TimerId
///
void q_percentbarseries_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QPercentBarSeries*
///
libqt_list /* of QObject* */ q_percentbarseries_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QPercentBarSeries*
/// @param parent QObject*
///
void q_percentbarseries_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPercentBarSeries*
/// @param filterObj QObject*
///
void q_percentbarseries_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPercentBarSeries*
/// @param obj QObject*
///
void q_percentbarseries_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_percentbarseries_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPercentBarSeries*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_percentbarseries_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_percentbarseries_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_percentbarseries_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QPercentBarSeries*
///
void q_percentbarseries_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QPercentBarSeries*
///
void q_percentbarseries_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPercentBarSeries*
/// @param name const char*
/// @param value QVariant*
///
bool q_percentbarseries_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QPercentBarSeries*
/// @param name const char*
///
QVariant* q_percentbarseries_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QPercentBarSeries*
///
const char** q_percentbarseries_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPercentBarSeries*
///
QBindingStorage* q_percentbarseries_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPercentBarSeries*
///
const QBindingStorage* q_percentbarseries_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPercentBarSeries*
///
void q_percentbarseries_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPercentBarSeries*
/// @param callback void func(QPercentBarSeries* self)
///
void q_percentbarseries_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QPercentBarSeries*
///
QObject* q_percentbarseries_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QPercentBarSeries*
/// @param classname const char*
///
bool q_percentbarseries_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPercentBarSeries*
///
void q_percentbarseries_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPercentBarSeries*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_percentbarseries_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPercentBarSeries*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_percentbarseries_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_percentbarseries_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPercentBarSeries*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_percentbarseries_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPercentBarSeries*
/// @param param1 QObject*
///
void q_percentbarseries_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPercentBarSeries*
/// @param callback void func(QPercentBarSeries* self, QObject* param1)
///
void q_percentbarseries_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPercentBarSeries*
/// @param event QEvent*
///
bool q_percentbarseries_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPercentBarSeries*
/// @param event QEvent*
///
bool q_percentbarseries_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPercentBarSeries*
/// @param callback bool func(QPercentBarSeries* self, QEvent* event)
///
void q_percentbarseries_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPercentBarSeries*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_percentbarseries_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPercentBarSeries*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_percentbarseries_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPercentBarSeries*
/// @param callback bool func(QPercentBarSeries* self, QObject* watched, QEvent* event)
///
void q_percentbarseries_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPercentBarSeries*
/// @param event QTimerEvent*
///
void q_percentbarseries_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPercentBarSeries*
/// @param event QTimerEvent*
///
void q_percentbarseries_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPercentBarSeries*
/// @param callback void func(QPercentBarSeries* self, QTimerEvent* event)
///
void q_percentbarseries_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPercentBarSeries*
/// @param event QChildEvent*
///
void q_percentbarseries_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPercentBarSeries*
/// @param event QChildEvent*
///
void q_percentbarseries_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPercentBarSeries*
/// @param callback void func(QPercentBarSeries* self, QChildEvent* event)
///
void q_percentbarseries_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPercentBarSeries*
/// @param event QEvent*
///
void q_percentbarseries_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPercentBarSeries*
/// @param event QEvent*
///
void q_percentbarseries_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPercentBarSeries*
/// @param callback void func(QPercentBarSeries* self, QEvent* event)
///
void q_percentbarseries_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPercentBarSeries*
/// @param signal QMetaMethod*
///
void q_percentbarseries_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPercentBarSeries*
/// @param signal QMetaMethod*
///
void q_percentbarseries_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPercentBarSeries*
/// @param callback void func(QPercentBarSeries* self, QMetaMethod* signal)
///
void q_percentbarseries_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPercentBarSeries*
/// @param signal QMetaMethod*
///
void q_percentbarseries_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPercentBarSeries*
/// @param signal QMetaMethod*
///
void q_percentbarseries_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPercentBarSeries*
/// @param callback void func(QPercentBarSeries* self, QMetaMethod* signal)
///
void q_percentbarseries_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPercentBarSeries*
///
QObject* q_percentbarseries_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPercentBarSeries*
///
QObject* q_percentbarseries_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPercentBarSeries*
/// @param callback QObject* func()
///
void q_percentbarseries_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPercentBarSeries*
///
int32_t q_percentbarseries_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPercentBarSeries*
///
int32_t q_percentbarseries_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPercentBarSeries*
/// @param callback int32_t func()
///
void q_percentbarseries_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPercentBarSeries*
/// @param signal const char*
///
int32_t q_percentbarseries_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPercentBarSeries*
/// @param signal const char*
///
int32_t q_percentbarseries_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPercentBarSeries*
/// @param callback int32_t func(QPercentBarSeries* self, const char* signal)
///
void q_percentbarseries_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPercentBarSeries*
/// @param signal QMetaMethod*
///
bool q_percentbarseries_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPercentBarSeries*
/// @param signal QMetaMethod*
///
bool q_percentbarseries_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPercentBarSeries*
/// @param callback bool func(QPercentBarSeries* self, QMetaMethod* signal)
///
void q_percentbarseries_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPercentBarSeries*
/// @param callback void func(QPercentBarSeries* self, const char* objectName)
///
void q_percentbarseries_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpercentbarseries-qtcharts.html#dtor.QPercentBarSeries)
///
/// Delete this object from C++ memory.
///
/// @param self QPercentBarSeries*
///
void q_percentbarseries_delete(void* self);

#endif
