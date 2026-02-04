#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQHORIZONTALPERCENTBARSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQHORIZONTALPERCENTBARSERIES_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qhorizontalpercentbarseries-qtcharts.html)

/// q_horizontalpercentbarseries_new constructs a new QHorizontalPercentBarSeries object.
///
QHorizontalPercentBarSeries* q_horizontalpercentbarseries_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qhorizontalpercentbarseries-qtcharts.html)

/// q_horizontalpercentbarseries_new2 constructs a new QHorizontalPercentBarSeries object.
///
/// @param parent QObject*
///
QHorizontalPercentBarSeries* q_horizontalpercentbarseries_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QHorizontalPercentBarSeries*
///
const QMetaObject* q_horizontalpercentbarseries_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback const QMetaObject* func()
///
void q_horizontalpercentbarseries_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QHorizontalPercentBarSeries*
///
const QMetaObject* q_horizontalpercentbarseries_qbase_meta_object(void* self);

/// @param self QHorizontalPercentBarSeries*
/// @param param1 const char*
///
void* q_horizontalpercentbarseries_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback void* func(QHorizontalPercentBarSeries* self, const char* param1)
///
void q_horizontalpercentbarseries_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QHorizontalPercentBarSeries*
/// @param param1 const char*
///
void* q_horizontalpercentbarseries_qbase_metacast(void* self, const char* param1);

/// @param self QHorizontalPercentBarSeries*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_horizontalpercentbarseries_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback int32_t func(QHorizontalPercentBarSeries* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_horizontalpercentbarseries_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QHorizontalPercentBarSeries*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_horizontalpercentbarseries_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_horizontalpercentbarseries_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qhorizontalpercentbarseries-qtcharts.html#type)
///
/// @param self QHorizontalPercentBarSeries*
///
/// @return enum QAbstractSeries__SeriesType
///
int32_t q_horizontalpercentbarseries_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhorizontalpercentbarseries-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback int32_t func()
///
void q_horizontalpercentbarseries_on_type(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qhorizontalpercentbarseries-qtcharts.html#type)
///
/// Base class method implementation
///
/// @param self QHorizontalPercentBarSeries*
///
/// @return enum QAbstractSeries__SeriesType
///
int32_t q_horizontalpercentbarseries_qbase_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_horizontalpercentbarseries_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_horizontalpercentbarseries_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setBarWidth)
///
/// @param self QHorizontalPercentBarSeries*
/// @param width double
///
void q_horizontalpercentbarseries_set_bar_width(void* self, double width);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barWidth)
///
/// @param self QHorizontalPercentBarSeries*
///
double q_horizontalpercentbarseries_bar_width(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
///
/// @param self QHorizontalPercentBarSeries*
/// @param set QBarSet*
///
bool q_horizontalpercentbarseries_append(void* self, void* set);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#remove)
///
/// @param self QHorizontalPercentBarSeries*
/// @param set QBarSet*
///
bool q_horizontalpercentbarseries_remove(void* self, void* set);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#take)
///
/// @param self QHorizontalPercentBarSeries*
/// @param set QBarSet*
///
bool q_horizontalpercentbarseries_take(void* self, void* set);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
///
/// @param self QHorizontalPercentBarSeries*
/// @param sets libqt_list of QBarSet*
///
bool q_horizontalpercentbarseries_append2(void* self, libqt_list sets);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#insert)
///
/// @param self QHorizontalPercentBarSeries*
/// @param index int
/// @param set QBarSet*
///
bool q_horizontalpercentbarseries_insert(void* self, int index, void* set);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#count)
///
/// @param self QHorizontalPercentBarSeries*
///
int32_t q_horizontalpercentbarseries_count(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barSets)
///
/// @param self QHorizontalPercentBarSeries*
///
/// @return libqt_list of QBarSet*
///
libqt_list q_horizontalpercentbarseries_bar_sets(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#clear)
///
/// @param self QHorizontalPercentBarSeries*
///
void q_horizontalpercentbarseries_clear(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
///
/// @param self QHorizontalPercentBarSeries*
///
void q_horizontalpercentbarseries_set_labels_visible(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#isLabelsVisible)
///
/// @param self QHorizontalPercentBarSeries*
///
bool q_horizontalpercentbarseries_is_labels_visible(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsFormat)
///
/// @param self QHorizontalPercentBarSeries*
/// @param format const char*
///
void q_horizontalpercentbarseries_set_labels_format(void* self, const char* format);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormat)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QHorizontalPercentBarSeries*
///
const char* q_horizontalpercentbarseries_labels_format(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsAngle)
///
/// @param self QHorizontalPercentBarSeries*
/// @param angle double
///
void q_horizontalpercentbarseries_set_labels_angle(void* self, double angle);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngle)
///
/// @param self QHorizontalPercentBarSeries*
///
double q_horizontalpercentbarseries_labels_angle(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPosition)
///
/// @param self QHorizontalPercentBarSeries*
/// @param position enum QAbstractBarSeries__LabelsPosition
///
void q_horizontalpercentbarseries_set_labels_position(void* self, int32_t position);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPosition)
///
/// @param self QHorizontalPercentBarSeries*
///
/// @return enum QAbstractBarSeries__LabelsPosition
///
int32_t q_horizontalpercentbarseries_labels_position(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPrecision)
///
/// @param self QHorizontalPercentBarSeries*
/// @param precision int
///
void q_horizontalpercentbarseries_set_labels_precision(void* self, int precision);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecision)
///
/// @param self QHorizontalPercentBarSeries*
///
int32_t q_horizontalpercentbarseries_labels_precision(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#clicked)
///
/// @param self QHorizontalPercentBarSeries*
/// @param index int
/// @param barset QBarSet*
///
void q_horizontalpercentbarseries_clicked(void* self, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#clicked)
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback void func(QHorizontalPercentBarSeries* self, int index, QBarSet* barset)
///
void q_horizontalpercentbarseries_on_clicked(void* self, void (*callback)(void*, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#hovered)
///
/// @param self QHorizontalPercentBarSeries*
/// @param status bool
/// @param index int
/// @param barset QBarSet*
///
void q_horizontalpercentbarseries_hovered(void* self, bool status, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#hovered)
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback void func(QHorizontalPercentBarSeries* self, bool status, int index, QBarSet* barset)
///
void q_horizontalpercentbarseries_on_hovered(void* self, void (*callback)(void*, bool, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#pressed)
///
/// @param self QHorizontalPercentBarSeries*
/// @param index int
/// @param barset QBarSet*
///
void q_horizontalpercentbarseries_pressed(void* self, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#pressed)
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback void func(QHorizontalPercentBarSeries* self, int index, QBarSet* barset)
///
void q_horizontalpercentbarseries_on_pressed(void* self, void (*callback)(void*, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#released)
///
/// @param self QHorizontalPercentBarSeries*
/// @param index int
/// @param barset QBarSet*
///
void q_horizontalpercentbarseries_released(void* self, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#released)
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback void func(QHorizontalPercentBarSeries* self, int index, QBarSet* barset)
///
void q_horizontalpercentbarseries_on_released(void* self, void (*callback)(void*, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#doubleClicked)
///
/// @param self QHorizontalPercentBarSeries*
/// @param index int
/// @param barset QBarSet*
///
void q_horizontalpercentbarseries_double_clicked(void* self, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#doubleClicked)
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback void func(QHorizontalPercentBarSeries* self, int index, QBarSet* barset)
///
void q_horizontalpercentbarseries_on_double_clicked(void* self, void (*callback)(void*, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#countChanged)
///
/// @param self QHorizontalPercentBarSeries*
///
void q_horizontalpercentbarseries_count_changed(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#countChanged)
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback void func(QHorizontalPercentBarSeries* self)
///
void q_horizontalpercentbarseries_on_count_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsVisibleChanged)
///
/// @param self QHorizontalPercentBarSeries*
///
void q_horizontalpercentbarseries_labels_visible_changed(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsVisibleChanged)
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback void func(QHorizontalPercentBarSeries* self)
///
void q_horizontalpercentbarseries_on_labels_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormatChanged)
///
/// @param self QHorizontalPercentBarSeries*
/// @param format const char*
///
void q_horizontalpercentbarseries_labels_format_changed(void* self, const char* format);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormatChanged)
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback void func(QHorizontalPercentBarSeries* self, const char* format)
///
void q_horizontalpercentbarseries_on_labels_format_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPositionChanged)
///
/// @param self QHorizontalPercentBarSeries*
/// @param position enum QAbstractBarSeries__LabelsPosition
///
void q_horizontalpercentbarseries_labels_position_changed(void* self, int32_t position);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPositionChanged)
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback void func(QHorizontalPercentBarSeries* self, enum QAbstractBarSeries__LabelsPosition position)
///
void q_horizontalpercentbarseries_on_labels_position_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngleChanged)
///
/// @param self QHorizontalPercentBarSeries*
/// @param angle double
///
void q_horizontalpercentbarseries_labels_angle_changed(void* self, double angle);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngleChanged)
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback void func(QHorizontalPercentBarSeries* self, double angle)
///
void q_horizontalpercentbarseries_on_labels_angle_changed(void* self, void (*callback)(void*, double));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecisionChanged)
///
/// @param self QHorizontalPercentBarSeries*
/// @param precision int
///
void q_horizontalpercentbarseries_labels_precision_changed(void* self, int precision);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecisionChanged)
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback void func(QHorizontalPercentBarSeries* self, int precision)
///
void q_horizontalpercentbarseries_on_labels_precision_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsAdded)
///
/// @param self QHorizontalPercentBarSeries*
/// @param sets libqt_list of QBarSet*
///
void q_horizontalpercentbarseries_barsets_added(void* self, libqt_list sets);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsAdded)
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback void func(QHorizontalPercentBarSeries* self, libqt_list of QBarSet* sets)
///
void q_horizontalpercentbarseries_on_barsets_added(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsRemoved)
///
/// @param self QHorizontalPercentBarSeries*
/// @param sets libqt_list of QBarSet*
///
void q_horizontalpercentbarseries_barsets_removed(void* self, libqt_list sets);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsRemoved)
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback void func(QHorizontalPercentBarSeries* self, libqt_list of QBarSet* sets)
///
void q_horizontalpercentbarseries_on_barsets_removed(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
///
/// @param self QHorizontalPercentBarSeries*
/// @param visible bool
///
void q_horizontalpercentbarseries_set_labels_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// @param self QHorizontalPercentBarSeries*
/// @param name const char*
///
void q_horizontalpercentbarseries_set_name(void* self, const char* name);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QHorizontalPercentBarSeries*
///
const char* q_horizontalpercentbarseries_name(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// @param self QHorizontalPercentBarSeries*
///
void q_horizontalpercentbarseries_set_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// @param self QHorizontalPercentBarSeries*
///
bool q_horizontalpercentbarseries_is_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// @param self QHorizontalPercentBarSeries*
///
double q_horizontalpercentbarseries_opacity(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// @param self QHorizontalPercentBarSeries*
/// @param opacity double
///
void q_horizontalpercentbarseries_set_opacity(void* self, double opacity);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// @param self QHorizontalPercentBarSeries*
///
void q_horizontalpercentbarseries_set_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// @param self QHorizontalPercentBarSeries*
///
bool q_horizontalpercentbarseries_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// @param self QHorizontalPercentBarSeries*
///
QChart* q_horizontalpercentbarseries_chart(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// @param self QHorizontalPercentBarSeries*
/// @param axis QAbstractAxis*
///
bool q_horizontalpercentbarseries_attach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// @param self QHorizontalPercentBarSeries*
/// @param axis QAbstractAxis*
///
bool q_horizontalpercentbarseries_detach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// @param self QHorizontalPercentBarSeries*
///
/// @return libqt_list of QAbstractAxis*
///
libqt_list q_horizontalpercentbarseries_attached_axes(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// @param self QHorizontalPercentBarSeries*
///
void q_horizontalpercentbarseries_show(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// @param self QHorizontalPercentBarSeries*
///
void q_horizontalpercentbarseries_hide(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// @param self QHorizontalPercentBarSeries*
///
void q_horizontalpercentbarseries_name_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback void func(QHorizontalPercentBarSeries* self)
///
void q_horizontalpercentbarseries_on_name_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// @param self QHorizontalPercentBarSeries*
///
void q_horizontalpercentbarseries_visible_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback void func(QHorizontalPercentBarSeries* self)
///
void q_horizontalpercentbarseries_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// @param self QHorizontalPercentBarSeries*
///
void q_horizontalpercentbarseries_opacity_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback void func(QHorizontalPercentBarSeries* self)
///
void q_horizontalpercentbarseries_on_opacity_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// @param self QHorizontalPercentBarSeries*
///
void q_horizontalpercentbarseries_use_open_g_l_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback void func(QHorizontalPercentBarSeries* self)
///
void q_horizontalpercentbarseries_on_use_open_g_l_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// @param self QHorizontalPercentBarSeries*
/// @param visible bool
///
void q_horizontalpercentbarseries_set_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// @param self QHorizontalPercentBarSeries*
/// @param enable bool
///
void q_horizontalpercentbarseries_set_use_open_g_l1(void* self, bool enable);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QHorizontalPercentBarSeries*
///
const char* q_horizontalpercentbarseries_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QHorizontalPercentBarSeries*
/// @param name char*
///
void q_horizontalpercentbarseries_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QHorizontalPercentBarSeries*
///
bool q_horizontalpercentbarseries_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QHorizontalPercentBarSeries*
///
bool q_horizontalpercentbarseries_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QHorizontalPercentBarSeries*
///
bool q_horizontalpercentbarseries_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QHorizontalPercentBarSeries*
///
bool q_horizontalpercentbarseries_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QHorizontalPercentBarSeries*
/// @param b bool
///
bool q_horizontalpercentbarseries_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QHorizontalPercentBarSeries*
///
QThread* q_horizontalpercentbarseries_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QHorizontalPercentBarSeries*
/// @param thread QThread*
///
bool q_horizontalpercentbarseries_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHorizontalPercentBarSeries*
/// @param interval int
///
int32_t q_horizontalpercentbarseries_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHorizontalPercentBarSeries*
/// @param time int64_t of nanoseconds
///
int32_t q_horizontalpercentbarseries_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QHorizontalPercentBarSeries*
/// @param id int
///
void q_horizontalpercentbarseries_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QHorizontalPercentBarSeries*
/// @param id enum Qt__TimerId
///
void q_horizontalpercentbarseries_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QHorizontalPercentBarSeries*
///
/// @return libqt_list of QObject*
///
libqt_list q_horizontalpercentbarseries_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QHorizontalPercentBarSeries*
/// @param parent QObject*
///
void q_horizontalpercentbarseries_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QHorizontalPercentBarSeries*
/// @param filterObj QObject*
///
void q_horizontalpercentbarseries_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QHorizontalPercentBarSeries*
/// @param obj QObject*
///
void q_horizontalpercentbarseries_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_horizontalpercentbarseries_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_horizontalpercentbarseries_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QHorizontalPercentBarSeries*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_horizontalpercentbarseries_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_horizontalpercentbarseries_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_horizontalpercentbarseries_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QHorizontalPercentBarSeries*
///
bool q_horizontalpercentbarseries_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QHorizontalPercentBarSeries*
/// @param receiver QObject*
///
bool q_horizontalpercentbarseries_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_horizontalpercentbarseries_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QHorizontalPercentBarSeries*
///
void q_horizontalpercentbarseries_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QHorizontalPercentBarSeries*
///
void q_horizontalpercentbarseries_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QHorizontalPercentBarSeries*
/// @param name const char*
/// @param value QVariant*
///
bool q_horizontalpercentbarseries_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QHorizontalPercentBarSeries*
/// @param name const char*
///
QVariant* q_horizontalpercentbarseries_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QHorizontalPercentBarSeries*
///
const char** q_horizontalpercentbarseries_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QHorizontalPercentBarSeries*
///
QBindingStorage* q_horizontalpercentbarseries_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QHorizontalPercentBarSeries*
///
const QBindingStorage* q_horizontalpercentbarseries_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHorizontalPercentBarSeries*
///
void q_horizontalpercentbarseries_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback void func(QHorizontalPercentBarSeries* self)
///
void q_horizontalpercentbarseries_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QHorizontalPercentBarSeries*
///
QObject* q_horizontalpercentbarseries_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QHorizontalPercentBarSeries*
/// @param classname const char*
///
bool q_horizontalpercentbarseries_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QHorizontalPercentBarSeries*
///
void q_horizontalpercentbarseries_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHorizontalPercentBarSeries*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_horizontalpercentbarseries_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHorizontalPercentBarSeries*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_horizontalpercentbarseries_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_horizontalpercentbarseries_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_horizontalpercentbarseries_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QHorizontalPercentBarSeries*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_horizontalpercentbarseries_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QHorizontalPercentBarSeries*
/// @param signal const char*
///
bool q_horizontalpercentbarseries_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QHorizontalPercentBarSeries*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_horizontalpercentbarseries_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QHorizontalPercentBarSeries*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_horizontalpercentbarseries_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QHorizontalPercentBarSeries*
/// @param receiver QObject*
/// @param member const char*
///
bool q_horizontalpercentbarseries_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHorizontalPercentBarSeries*
/// @param param1 QObject*
///
void q_horizontalpercentbarseries_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback void func(QHorizontalPercentBarSeries* self, QObject* param1)
///
void q_horizontalpercentbarseries_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
/// @param event QEvent*
///
bool q_horizontalpercentbarseries_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
/// @param event QEvent*
///
bool q_horizontalpercentbarseries_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback bool func(QHorizontalPercentBarSeries* self, QEvent* event)
///
void q_horizontalpercentbarseries_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_horizontalpercentbarseries_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_horizontalpercentbarseries_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback bool func(QHorizontalPercentBarSeries* self, QObject* watched, QEvent* event)
///
void q_horizontalpercentbarseries_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
/// @param event QTimerEvent*
///
void q_horizontalpercentbarseries_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
/// @param event QTimerEvent*
///
void q_horizontalpercentbarseries_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback void func(QHorizontalPercentBarSeries* self, QTimerEvent* event)
///
void q_horizontalpercentbarseries_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
/// @param event QChildEvent*
///
void q_horizontalpercentbarseries_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
/// @param event QChildEvent*
///
void q_horizontalpercentbarseries_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback void func(QHorizontalPercentBarSeries* self, QChildEvent* event)
///
void q_horizontalpercentbarseries_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
/// @param event QEvent*
///
void q_horizontalpercentbarseries_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
/// @param event QEvent*
///
void q_horizontalpercentbarseries_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback void func(QHorizontalPercentBarSeries* self, QEvent* event)
///
void q_horizontalpercentbarseries_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
/// @param signal QMetaMethod*
///
void q_horizontalpercentbarseries_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
/// @param signal QMetaMethod*
///
void q_horizontalpercentbarseries_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback void func(QHorizontalPercentBarSeries* self, QMetaMethod* signal)
///
void q_horizontalpercentbarseries_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
/// @param signal QMetaMethod*
///
void q_horizontalpercentbarseries_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
/// @param signal QMetaMethod*
///
void q_horizontalpercentbarseries_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback void func(QHorizontalPercentBarSeries* self, QMetaMethod* signal)
///
void q_horizontalpercentbarseries_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
///
QObject* q_horizontalpercentbarseries_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
///
QObject* q_horizontalpercentbarseries_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback QObject* func()
///
void q_horizontalpercentbarseries_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
///
int32_t q_horizontalpercentbarseries_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
///
int32_t q_horizontalpercentbarseries_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback int32_t func()
///
void q_horizontalpercentbarseries_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
/// @param signal const char*
///
int32_t q_horizontalpercentbarseries_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
/// @param signal const char*
///
int32_t q_horizontalpercentbarseries_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback int32_t func(QHorizontalPercentBarSeries* self, const char* signal)
///
void q_horizontalpercentbarseries_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
/// @param signal QMetaMethod*
///
bool q_horizontalpercentbarseries_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
/// @param signal QMetaMethod*
///
bool q_horizontalpercentbarseries_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback bool func(QHorizontalPercentBarSeries* self, QMetaMethod* signal)
///
void q_horizontalpercentbarseries_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QHorizontalPercentBarSeries*
/// @param callback void func(QHorizontalPercentBarSeries* self, const char* objectName)
///
void q_horizontalpercentbarseries_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhorizontalpercentbarseries-qtcharts.html#dtor.QHorizontalPercentBarSeries)
///
/// Delete this object from C++ memory.
///
/// @param self QHorizontalPercentBarSeries*
///
void q_horizontalpercentbarseries_delete(void* self);

#endif
