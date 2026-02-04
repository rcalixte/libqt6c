#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQHORIZONTALSTACKEDBARSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQHORIZONTALSTACKEDBARSERIES_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qhorizontalstackedbarseries-qtcharts.html)

/// q_horizontalstackedbarseries_new constructs a new QHorizontalStackedBarSeries object.
///
QHorizontalStackedBarSeries* q_horizontalstackedbarseries_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qhorizontalstackedbarseries-qtcharts.html)

/// q_horizontalstackedbarseries_new2 constructs a new QHorizontalStackedBarSeries object.
///
/// @param parent QObject*
///
QHorizontalStackedBarSeries* q_horizontalstackedbarseries_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QHorizontalStackedBarSeries*
///
const QMetaObject* q_horizontalstackedbarseries_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback const QMetaObject* func()
///
void q_horizontalstackedbarseries_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QHorizontalStackedBarSeries*
///
const QMetaObject* q_horizontalstackedbarseries_qbase_meta_object(void* self);

/// @param self QHorizontalStackedBarSeries*
/// @param param1 const char*
///
void* q_horizontalstackedbarseries_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback void* func(QHorizontalStackedBarSeries* self, const char* param1)
///
void q_horizontalstackedbarseries_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QHorizontalStackedBarSeries*
/// @param param1 const char*
///
void* q_horizontalstackedbarseries_qbase_metacast(void* self, const char* param1);

/// @param self QHorizontalStackedBarSeries*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_horizontalstackedbarseries_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback int32_t func(QHorizontalStackedBarSeries* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_horizontalstackedbarseries_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QHorizontalStackedBarSeries*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_horizontalstackedbarseries_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_horizontalstackedbarseries_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qhorizontalstackedbarseries-qtcharts.html#type)
///
/// @param self QHorizontalStackedBarSeries*
///
/// @return enum QAbstractSeries__SeriesType
///
int32_t q_horizontalstackedbarseries_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhorizontalstackedbarseries-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback int32_t func()
///
void q_horizontalstackedbarseries_on_type(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qhorizontalstackedbarseries-qtcharts.html#type)
///
/// Base class method implementation
///
/// @param self QHorizontalStackedBarSeries*
///
/// @return enum QAbstractSeries__SeriesType
///
int32_t q_horizontalstackedbarseries_qbase_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_horizontalstackedbarseries_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_horizontalstackedbarseries_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setBarWidth)
///
/// @param self QHorizontalStackedBarSeries*
/// @param width double
///
void q_horizontalstackedbarseries_set_bar_width(void* self, double width);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barWidth)
///
/// @param self QHorizontalStackedBarSeries*
///
double q_horizontalstackedbarseries_bar_width(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
///
/// @param self QHorizontalStackedBarSeries*
/// @param set QBarSet*
///
bool q_horizontalstackedbarseries_append(void* self, void* set);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#remove)
///
/// @param self QHorizontalStackedBarSeries*
/// @param set QBarSet*
///
bool q_horizontalstackedbarseries_remove(void* self, void* set);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#take)
///
/// @param self QHorizontalStackedBarSeries*
/// @param set QBarSet*
///
bool q_horizontalstackedbarseries_take(void* self, void* set);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
///
/// @param self QHorizontalStackedBarSeries*
/// @param sets libqt_list of QBarSet*
///
bool q_horizontalstackedbarseries_append2(void* self, libqt_list sets);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#insert)
///
/// @param self QHorizontalStackedBarSeries*
/// @param index int
/// @param set QBarSet*
///
bool q_horizontalstackedbarseries_insert(void* self, int index, void* set);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#count)
///
/// @param self QHorizontalStackedBarSeries*
///
int32_t q_horizontalstackedbarseries_count(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barSets)
///
/// @param self QHorizontalStackedBarSeries*
///
/// @return libqt_list of QBarSet*
///
libqt_list q_horizontalstackedbarseries_bar_sets(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#clear)
///
/// @param self QHorizontalStackedBarSeries*
///
void q_horizontalstackedbarseries_clear(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
///
/// @param self QHorizontalStackedBarSeries*
///
void q_horizontalstackedbarseries_set_labels_visible(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#isLabelsVisible)
///
/// @param self QHorizontalStackedBarSeries*
///
bool q_horizontalstackedbarseries_is_labels_visible(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsFormat)
///
/// @param self QHorizontalStackedBarSeries*
/// @param format const char*
///
void q_horizontalstackedbarseries_set_labels_format(void* self, const char* format);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormat)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QHorizontalStackedBarSeries*
///
const char* q_horizontalstackedbarseries_labels_format(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsAngle)
///
/// @param self QHorizontalStackedBarSeries*
/// @param angle double
///
void q_horizontalstackedbarseries_set_labels_angle(void* self, double angle);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngle)
///
/// @param self QHorizontalStackedBarSeries*
///
double q_horizontalstackedbarseries_labels_angle(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPosition)
///
/// @param self QHorizontalStackedBarSeries*
/// @param position enum QAbstractBarSeries__LabelsPosition
///
void q_horizontalstackedbarseries_set_labels_position(void* self, int32_t position);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPosition)
///
/// @param self QHorizontalStackedBarSeries*
///
/// @return enum QAbstractBarSeries__LabelsPosition
///
int32_t q_horizontalstackedbarseries_labels_position(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPrecision)
///
/// @param self QHorizontalStackedBarSeries*
/// @param precision int
///
void q_horizontalstackedbarseries_set_labels_precision(void* self, int precision);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecision)
///
/// @param self QHorizontalStackedBarSeries*
///
int32_t q_horizontalstackedbarseries_labels_precision(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#clicked)
///
/// @param self QHorizontalStackedBarSeries*
/// @param index int
/// @param barset QBarSet*
///
void q_horizontalstackedbarseries_clicked(void* self, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#clicked)
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback void func(QHorizontalStackedBarSeries* self, int index, QBarSet* barset)
///
void q_horizontalstackedbarseries_on_clicked(void* self, void (*callback)(void*, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#hovered)
///
/// @param self QHorizontalStackedBarSeries*
/// @param status bool
/// @param index int
/// @param barset QBarSet*
///
void q_horizontalstackedbarseries_hovered(void* self, bool status, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#hovered)
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback void func(QHorizontalStackedBarSeries* self, bool status, int index, QBarSet* barset)
///
void q_horizontalstackedbarseries_on_hovered(void* self, void (*callback)(void*, bool, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#pressed)
///
/// @param self QHorizontalStackedBarSeries*
/// @param index int
/// @param barset QBarSet*
///
void q_horizontalstackedbarseries_pressed(void* self, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#pressed)
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback void func(QHorizontalStackedBarSeries* self, int index, QBarSet* barset)
///
void q_horizontalstackedbarseries_on_pressed(void* self, void (*callback)(void*, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#released)
///
/// @param self QHorizontalStackedBarSeries*
/// @param index int
/// @param barset QBarSet*
///
void q_horizontalstackedbarseries_released(void* self, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#released)
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback void func(QHorizontalStackedBarSeries* self, int index, QBarSet* barset)
///
void q_horizontalstackedbarseries_on_released(void* self, void (*callback)(void*, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#doubleClicked)
///
/// @param self QHorizontalStackedBarSeries*
/// @param index int
/// @param barset QBarSet*
///
void q_horizontalstackedbarseries_double_clicked(void* self, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#doubleClicked)
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback void func(QHorizontalStackedBarSeries* self, int index, QBarSet* barset)
///
void q_horizontalstackedbarseries_on_double_clicked(void* self, void (*callback)(void*, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#countChanged)
///
/// @param self QHorizontalStackedBarSeries*
///
void q_horizontalstackedbarseries_count_changed(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#countChanged)
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback void func(QHorizontalStackedBarSeries* self)
///
void q_horizontalstackedbarseries_on_count_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsVisibleChanged)
///
/// @param self QHorizontalStackedBarSeries*
///
void q_horizontalstackedbarseries_labels_visible_changed(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsVisibleChanged)
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback void func(QHorizontalStackedBarSeries* self)
///
void q_horizontalstackedbarseries_on_labels_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormatChanged)
///
/// @param self QHorizontalStackedBarSeries*
/// @param format const char*
///
void q_horizontalstackedbarseries_labels_format_changed(void* self, const char* format);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormatChanged)
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback void func(QHorizontalStackedBarSeries* self, const char* format)
///
void q_horizontalstackedbarseries_on_labels_format_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPositionChanged)
///
/// @param self QHorizontalStackedBarSeries*
/// @param position enum QAbstractBarSeries__LabelsPosition
///
void q_horizontalstackedbarseries_labels_position_changed(void* self, int32_t position);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPositionChanged)
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback void func(QHorizontalStackedBarSeries* self, enum QAbstractBarSeries__LabelsPosition position)
///
void q_horizontalstackedbarseries_on_labels_position_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngleChanged)
///
/// @param self QHorizontalStackedBarSeries*
/// @param angle double
///
void q_horizontalstackedbarseries_labels_angle_changed(void* self, double angle);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngleChanged)
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback void func(QHorizontalStackedBarSeries* self, double angle)
///
void q_horizontalstackedbarseries_on_labels_angle_changed(void* self, void (*callback)(void*, double));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecisionChanged)
///
/// @param self QHorizontalStackedBarSeries*
/// @param precision int
///
void q_horizontalstackedbarseries_labels_precision_changed(void* self, int precision);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecisionChanged)
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback void func(QHorizontalStackedBarSeries* self, int precision)
///
void q_horizontalstackedbarseries_on_labels_precision_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsAdded)
///
/// @param self QHorizontalStackedBarSeries*
/// @param sets libqt_list of QBarSet*
///
void q_horizontalstackedbarseries_barsets_added(void* self, libqt_list sets);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsAdded)
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback void func(QHorizontalStackedBarSeries* self, libqt_list of QBarSet* sets)
///
void q_horizontalstackedbarseries_on_barsets_added(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsRemoved)
///
/// @param self QHorizontalStackedBarSeries*
/// @param sets libqt_list of QBarSet*
///
void q_horizontalstackedbarseries_barsets_removed(void* self, libqt_list sets);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsRemoved)
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback void func(QHorizontalStackedBarSeries* self, libqt_list of QBarSet* sets)
///
void q_horizontalstackedbarseries_on_barsets_removed(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
///
/// @param self QHorizontalStackedBarSeries*
/// @param visible bool
///
void q_horizontalstackedbarseries_set_labels_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// @param self QHorizontalStackedBarSeries*
/// @param name const char*
///
void q_horizontalstackedbarseries_set_name(void* self, const char* name);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QHorizontalStackedBarSeries*
///
const char* q_horizontalstackedbarseries_name(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// @param self QHorizontalStackedBarSeries*
///
void q_horizontalstackedbarseries_set_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// @param self QHorizontalStackedBarSeries*
///
bool q_horizontalstackedbarseries_is_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// @param self QHorizontalStackedBarSeries*
///
double q_horizontalstackedbarseries_opacity(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// @param self QHorizontalStackedBarSeries*
/// @param opacity double
///
void q_horizontalstackedbarseries_set_opacity(void* self, double opacity);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// @param self QHorizontalStackedBarSeries*
///
void q_horizontalstackedbarseries_set_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// @param self QHorizontalStackedBarSeries*
///
bool q_horizontalstackedbarseries_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// @param self QHorizontalStackedBarSeries*
///
QChart* q_horizontalstackedbarseries_chart(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// @param self QHorizontalStackedBarSeries*
/// @param axis QAbstractAxis*
///
bool q_horizontalstackedbarseries_attach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// @param self QHorizontalStackedBarSeries*
/// @param axis QAbstractAxis*
///
bool q_horizontalstackedbarseries_detach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// @param self QHorizontalStackedBarSeries*
///
/// @return libqt_list of QAbstractAxis*
///
libqt_list q_horizontalstackedbarseries_attached_axes(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// @param self QHorizontalStackedBarSeries*
///
void q_horizontalstackedbarseries_show(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// @param self QHorizontalStackedBarSeries*
///
void q_horizontalstackedbarseries_hide(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// @param self QHorizontalStackedBarSeries*
///
void q_horizontalstackedbarseries_name_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback void func(QHorizontalStackedBarSeries* self)
///
void q_horizontalstackedbarseries_on_name_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// @param self QHorizontalStackedBarSeries*
///
void q_horizontalstackedbarseries_visible_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback void func(QHorizontalStackedBarSeries* self)
///
void q_horizontalstackedbarseries_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// @param self QHorizontalStackedBarSeries*
///
void q_horizontalstackedbarseries_opacity_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback void func(QHorizontalStackedBarSeries* self)
///
void q_horizontalstackedbarseries_on_opacity_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// @param self QHorizontalStackedBarSeries*
///
void q_horizontalstackedbarseries_use_open_g_l_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback void func(QHorizontalStackedBarSeries* self)
///
void q_horizontalstackedbarseries_on_use_open_g_l_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// @param self QHorizontalStackedBarSeries*
/// @param visible bool
///
void q_horizontalstackedbarseries_set_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// @param self QHorizontalStackedBarSeries*
/// @param enable bool
///
void q_horizontalstackedbarseries_set_use_open_g_l1(void* self, bool enable);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QHorizontalStackedBarSeries*
///
const char* q_horizontalstackedbarseries_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QHorizontalStackedBarSeries*
/// @param name char*
///
void q_horizontalstackedbarseries_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QHorizontalStackedBarSeries*
///
bool q_horizontalstackedbarseries_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QHorizontalStackedBarSeries*
///
bool q_horizontalstackedbarseries_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QHorizontalStackedBarSeries*
///
bool q_horizontalstackedbarseries_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QHorizontalStackedBarSeries*
///
bool q_horizontalstackedbarseries_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QHorizontalStackedBarSeries*
/// @param b bool
///
bool q_horizontalstackedbarseries_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QHorizontalStackedBarSeries*
///
QThread* q_horizontalstackedbarseries_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QHorizontalStackedBarSeries*
/// @param thread QThread*
///
bool q_horizontalstackedbarseries_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHorizontalStackedBarSeries*
/// @param interval int
///
int32_t q_horizontalstackedbarseries_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHorizontalStackedBarSeries*
/// @param time int64_t of nanoseconds
///
int32_t q_horizontalstackedbarseries_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QHorizontalStackedBarSeries*
/// @param id int
///
void q_horizontalstackedbarseries_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QHorizontalStackedBarSeries*
/// @param id enum Qt__TimerId
///
void q_horizontalstackedbarseries_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QHorizontalStackedBarSeries*
///
/// @return libqt_list of QObject*
///
libqt_list q_horizontalstackedbarseries_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QHorizontalStackedBarSeries*
/// @param parent QObject*
///
void q_horizontalstackedbarseries_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QHorizontalStackedBarSeries*
/// @param filterObj QObject*
///
void q_horizontalstackedbarseries_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QHorizontalStackedBarSeries*
/// @param obj QObject*
///
void q_horizontalstackedbarseries_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_horizontalstackedbarseries_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_horizontalstackedbarseries_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QHorizontalStackedBarSeries*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_horizontalstackedbarseries_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_horizontalstackedbarseries_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_horizontalstackedbarseries_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QHorizontalStackedBarSeries*
///
bool q_horizontalstackedbarseries_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QHorizontalStackedBarSeries*
/// @param receiver QObject*
///
bool q_horizontalstackedbarseries_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_horizontalstackedbarseries_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QHorizontalStackedBarSeries*
///
void q_horizontalstackedbarseries_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QHorizontalStackedBarSeries*
///
void q_horizontalstackedbarseries_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QHorizontalStackedBarSeries*
/// @param name const char*
/// @param value QVariant*
///
bool q_horizontalstackedbarseries_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QHorizontalStackedBarSeries*
/// @param name const char*
///
QVariant* q_horizontalstackedbarseries_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QHorizontalStackedBarSeries*
///
const char** q_horizontalstackedbarseries_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QHorizontalStackedBarSeries*
///
QBindingStorage* q_horizontalstackedbarseries_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QHorizontalStackedBarSeries*
///
const QBindingStorage* q_horizontalstackedbarseries_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHorizontalStackedBarSeries*
///
void q_horizontalstackedbarseries_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback void func(QHorizontalStackedBarSeries* self)
///
void q_horizontalstackedbarseries_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QHorizontalStackedBarSeries*
///
QObject* q_horizontalstackedbarseries_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QHorizontalStackedBarSeries*
/// @param classname const char*
///
bool q_horizontalstackedbarseries_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QHorizontalStackedBarSeries*
///
void q_horizontalstackedbarseries_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHorizontalStackedBarSeries*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_horizontalstackedbarseries_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHorizontalStackedBarSeries*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_horizontalstackedbarseries_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_horizontalstackedbarseries_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_horizontalstackedbarseries_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QHorizontalStackedBarSeries*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_horizontalstackedbarseries_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QHorizontalStackedBarSeries*
/// @param signal const char*
///
bool q_horizontalstackedbarseries_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QHorizontalStackedBarSeries*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_horizontalstackedbarseries_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QHorizontalStackedBarSeries*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_horizontalstackedbarseries_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QHorizontalStackedBarSeries*
/// @param receiver QObject*
/// @param member const char*
///
bool q_horizontalstackedbarseries_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHorizontalStackedBarSeries*
/// @param param1 QObject*
///
void q_horizontalstackedbarseries_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback void func(QHorizontalStackedBarSeries* self, QObject* param1)
///
void q_horizontalstackedbarseries_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
/// @param event QEvent*
///
bool q_horizontalstackedbarseries_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
/// @param event QEvent*
///
bool q_horizontalstackedbarseries_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback bool func(QHorizontalStackedBarSeries* self, QEvent* event)
///
void q_horizontalstackedbarseries_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_horizontalstackedbarseries_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_horizontalstackedbarseries_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback bool func(QHorizontalStackedBarSeries* self, QObject* watched, QEvent* event)
///
void q_horizontalstackedbarseries_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
/// @param event QTimerEvent*
///
void q_horizontalstackedbarseries_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
/// @param event QTimerEvent*
///
void q_horizontalstackedbarseries_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback void func(QHorizontalStackedBarSeries* self, QTimerEvent* event)
///
void q_horizontalstackedbarseries_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
/// @param event QChildEvent*
///
void q_horizontalstackedbarseries_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
/// @param event QChildEvent*
///
void q_horizontalstackedbarseries_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback void func(QHorizontalStackedBarSeries* self, QChildEvent* event)
///
void q_horizontalstackedbarseries_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
/// @param event QEvent*
///
void q_horizontalstackedbarseries_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
/// @param event QEvent*
///
void q_horizontalstackedbarseries_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback void func(QHorizontalStackedBarSeries* self, QEvent* event)
///
void q_horizontalstackedbarseries_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
/// @param signal QMetaMethod*
///
void q_horizontalstackedbarseries_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
/// @param signal QMetaMethod*
///
void q_horizontalstackedbarseries_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback void func(QHorizontalStackedBarSeries* self, QMetaMethod* signal)
///
void q_horizontalstackedbarseries_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
/// @param signal QMetaMethod*
///
void q_horizontalstackedbarseries_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
/// @param signal QMetaMethod*
///
void q_horizontalstackedbarseries_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback void func(QHorizontalStackedBarSeries* self, QMetaMethod* signal)
///
void q_horizontalstackedbarseries_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
///
QObject* q_horizontalstackedbarseries_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
///
QObject* q_horizontalstackedbarseries_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback QObject* func()
///
void q_horizontalstackedbarseries_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
///
int32_t q_horizontalstackedbarseries_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
///
int32_t q_horizontalstackedbarseries_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback int32_t func()
///
void q_horizontalstackedbarseries_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
/// @param signal const char*
///
int32_t q_horizontalstackedbarseries_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
/// @param signal const char*
///
int32_t q_horizontalstackedbarseries_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback int32_t func(QHorizontalStackedBarSeries* self, const char* signal)
///
void q_horizontalstackedbarseries_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
/// @param signal QMetaMethod*
///
bool q_horizontalstackedbarseries_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
/// @param signal QMetaMethod*
///
bool q_horizontalstackedbarseries_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback bool func(QHorizontalStackedBarSeries* self, QMetaMethod* signal)
///
void q_horizontalstackedbarseries_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QHorizontalStackedBarSeries*
/// @param callback void func(QHorizontalStackedBarSeries* self, const char* objectName)
///
void q_horizontalstackedbarseries_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhorizontalstackedbarseries-qtcharts.html#dtor.QHorizontalStackedBarSeries)
///
/// Delete this object from C++ memory.
///
/// @param self QHorizontalStackedBarSeries*
///
void q_horizontalstackedbarseries_delete(void* self);

#endif
