#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQBARSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQBARSERIES_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qbarseries-qtcharts.html)

/// q_barseries_new constructs a new QBarSeries object.
///
QBarSeries* q_barseries_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qbarseries-qtcharts.html)

/// q_barseries_new2 constructs a new QBarSeries object.
///
/// @param parent QObject*
///
QBarSeries* q_barseries_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QBarSeries*
///
const QMetaObject* q_barseries_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QBarSeries*
/// @param callback const QMetaObject* func()
///
void q_barseries_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_barseries_super_meta_object` instead
///
#define q_barseries_qbase_meta_object q_barseries_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QBarSeries*
///
const QMetaObject* q_barseries_super_meta_object(void* self);

/// @param self QBarSeries*
/// @param param1 const char*
///
void* q_barseries_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QBarSeries*
/// @param callback void* func(QBarSeries* self, const char* param1)
///
void q_barseries_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_barseries_super_metacast` instead
///
#define q_barseries_qbase_metacast q_barseries_super_metacast

/// Base class method implementation
///
/// @param self QBarSeries*
/// @param param1 const char*
///
void* q_barseries_super_metacast(void* self, const char* param1);

/// @param self QBarSeries*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_barseries_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QBarSeries*
/// @param callback int32_t func(QBarSeries* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_barseries_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `q_barseries_super_metacall` instead
///
#define q_barseries_qbase_metacall q_barseries_super_metacall

/// Base class method implementation
///
/// @param self QBarSeries*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_barseries_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_barseries_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarseries-qtcharts.html#type)
///
/// @param self QBarSeries*
///
/// @return enum QAbstractSeries__SeriesType
///
int32_t q_barseries_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbarseries-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QBarSeries*
/// @param callback int32_t func()
///
void q_barseries_on_type(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `q_barseries_super_type` instead
///
#define q_barseries_qbase_type q_barseries_super_type

/// [Upstream resources](https://doc.qt.io/qt-6/qbarseries-qtcharts.html#type)
///
/// Base class method implementation
///
/// @param self QBarSeries*
///
/// @return enum QAbstractSeries__SeriesType
///
int32_t q_barseries_super_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_barseries_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_barseries_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setBarWidth)
///
/// @param self QBarSeries*
/// @param width double
///
void q_barseries_set_bar_width(void* self, double width);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barWidth)
///
/// @param self QBarSeries*
///
double q_barseries_bar_width(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
///
/// @param self QBarSeries*
/// @param set QBarSet*
///
bool q_barseries_append(void* self, void* set);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#remove)
///
/// @param self QBarSeries*
/// @param set QBarSet*
///
bool q_barseries_remove(void* self, void* set);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#take)
///
/// @param self QBarSeries*
/// @param set QBarSet*
///
bool q_barseries_take(void* self, void* set);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
///
/// @param self QBarSeries*
/// @param sets libqt_list of QBarSet*
///
bool q_barseries_append2(void* self, libqt_list sets);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#insert)
///
/// @param self QBarSeries*
/// @param index int
/// @param set QBarSet*
///
bool q_barseries_insert(void* self, int index, void* set);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#count)
///
/// @param self QBarSeries*
///
int32_t q_barseries_count(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barSets)
///
/// @param self QBarSeries*
///
/// @return libqt_list of QBarSet*
///
libqt_list q_barseries_bar_sets(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#clear)
///
/// @param self QBarSeries*
///
void q_barseries_clear(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
///
/// @param self QBarSeries*
///
void q_barseries_set_labels_visible(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#isLabelsVisible)
///
/// @param self QBarSeries*
///
bool q_barseries_is_labels_visible(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsFormat)
///
/// @param self QBarSeries*
/// @param format const char*
///
void q_barseries_set_labels_format(void* self, const char* format);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormat)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QBarSeries*
///
const char* q_barseries_labels_format(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsAngle)
///
/// @param self QBarSeries*
/// @param angle double
///
void q_barseries_set_labels_angle(void* self, double angle);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngle)
///
/// @param self QBarSeries*
///
double q_barseries_labels_angle(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPosition)
///
/// @param self QBarSeries*
/// @param position enum QAbstractBarSeries__LabelsPosition
///
void q_barseries_set_labels_position(void* self, int32_t position);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPosition)
///
/// @param self QBarSeries*
///
/// @return enum QAbstractBarSeries__LabelsPosition
///
int32_t q_barseries_labels_position(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPrecision)
///
/// @param self QBarSeries*
/// @param precision int
///
void q_barseries_set_labels_precision(void* self, int precision);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecision)
///
/// @param self QBarSeries*
///
int32_t q_barseries_labels_precision(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#clicked)
///
/// @param self QBarSeries*
/// @param index int
/// @param barset QBarSet*
///
void q_barseries_clicked(void* self, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#clicked)
///
/// @param self QBarSeries*
/// @param callback void func(QBarSeries* self, int index, QBarSet* barset)
///
void q_barseries_on_clicked(void* self, void (*callback)(void*, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#hovered)
///
/// @param self QBarSeries*
/// @param status bool
/// @param index int
/// @param barset QBarSet*
///
void q_barseries_hovered(void* self, bool status, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#hovered)
///
/// @param self QBarSeries*
/// @param callback void func(QBarSeries* self, bool status, int index, QBarSet* barset)
///
void q_barseries_on_hovered(void* self, void (*callback)(void*, bool, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#pressed)
///
/// @param self QBarSeries*
/// @param index int
/// @param barset QBarSet*
///
void q_barseries_pressed(void* self, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#pressed)
///
/// @param self QBarSeries*
/// @param callback void func(QBarSeries* self, int index, QBarSet* barset)
///
void q_barseries_on_pressed(void* self, void (*callback)(void*, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#released)
///
/// @param self QBarSeries*
/// @param index int
/// @param barset QBarSet*
///
void q_barseries_released(void* self, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#released)
///
/// @param self QBarSeries*
/// @param callback void func(QBarSeries* self, int index, QBarSet* barset)
///
void q_barseries_on_released(void* self, void (*callback)(void*, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#doubleClicked)
///
/// @param self QBarSeries*
/// @param index int
/// @param barset QBarSet*
///
void q_barseries_double_clicked(void* self, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#doubleClicked)
///
/// @param self QBarSeries*
/// @param callback void func(QBarSeries* self, int index, QBarSet* barset)
///
void q_barseries_on_double_clicked(void* self, void (*callback)(void*, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#countChanged)
///
/// @param self QBarSeries*
///
void q_barseries_count_changed(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#countChanged)
///
/// @param self QBarSeries*
/// @param callback void func(QBarSeries* self)
///
void q_barseries_on_count_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsVisibleChanged)
///
/// @param self QBarSeries*
///
void q_barseries_labels_visible_changed(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsVisibleChanged)
///
/// @param self QBarSeries*
/// @param callback void func(QBarSeries* self)
///
void q_barseries_on_labels_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormatChanged)
///
/// @param self QBarSeries*
/// @param format const char*
///
void q_barseries_labels_format_changed(void* self, const char* format);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormatChanged)
///
/// @param self QBarSeries*
/// @param callback void func(QBarSeries* self, const char* format)
///
void q_barseries_on_labels_format_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPositionChanged)
///
/// @param self QBarSeries*
/// @param position enum QAbstractBarSeries__LabelsPosition
///
void q_barseries_labels_position_changed(void* self, int32_t position);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPositionChanged)
///
/// @param self QBarSeries*
/// @param callback void func(QBarSeries* self, enum QAbstractBarSeries__LabelsPosition position)
///
void q_barseries_on_labels_position_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngleChanged)
///
/// @param self QBarSeries*
/// @param angle double
///
void q_barseries_labels_angle_changed(void* self, double angle);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngleChanged)
///
/// @param self QBarSeries*
/// @param callback void func(QBarSeries* self, double angle)
///
void q_barseries_on_labels_angle_changed(void* self, void (*callback)(void*, double));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecisionChanged)
///
/// @param self QBarSeries*
/// @param precision int
///
void q_barseries_labels_precision_changed(void* self, int precision);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecisionChanged)
///
/// @param self QBarSeries*
/// @param callback void func(QBarSeries* self, int precision)
///
void q_barseries_on_labels_precision_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsAdded)
///
/// @param self QBarSeries*
/// @param sets libqt_list of QBarSet*
///
void q_barseries_barsets_added(void* self, libqt_list sets);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsAdded)
///
/// @param self QBarSeries*
/// @param callback void func(QBarSeries* self, libqt_list of QBarSet* sets)
///
void q_barseries_on_barsets_added(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsRemoved)
///
/// @param self QBarSeries*
/// @param sets libqt_list of QBarSet*
///
void q_barseries_barsets_removed(void* self, libqt_list sets);

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsRemoved)
///
/// @param self QBarSeries*
/// @param callback void func(QBarSeries* self, libqt_list of QBarSet* sets)
///
void q_barseries_on_barsets_removed(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractBarSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
///
/// @param self QBarSeries*
/// @param visible bool
///
void q_barseries_set_labels_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// @param self QBarSeries*
/// @param name const char*
///
void q_barseries_set_name(void* self, const char* name);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QBarSeries*
///
const char* q_barseries_name(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// @param self QBarSeries*
///
void q_barseries_set_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// @param self QBarSeries*
///
bool q_barseries_is_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// @param self QBarSeries*
///
double q_barseries_opacity(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// @param self QBarSeries*
/// @param opacity double
///
void q_barseries_set_opacity(void* self, double opacity);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// @param self QBarSeries*
///
void q_barseries_set_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// @param self QBarSeries*
///
bool q_barseries_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// @param self QBarSeries*
///
QChart* q_barseries_chart(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// @param self QBarSeries*
/// @param axis QAbstractAxis*
///
bool q_barseries_attach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// @param self QBarSeries*
/// @param axis QAbstractAxis*
///
bool q_barseries_detach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// @param self QBarSeries*
///
/// @return libqt_list of QAbstractAxis*
///
libqt_list q_barseries_attached_axes(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// @param self QBarSeries*
///
void q_barseries_show(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// @param self QBarSeries*
///
void q_barseries_hide(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// @param self QBarSeries*
///
void q_barseries_name_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// @param self QBarSeries*
/// @param callback void func(QBarSeries* self)
///
void q_barseries_on_name_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// @param self QBarSeries*
///
void q_barseries_visible_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// @param self QBarSeries*
/// @param callback void func(QBarSeries* self)
///
void q_barseries_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// @param self QBarSeries*
///
void q_barseries_opacity_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// @param self QBarSeries*
/// @param callback void func(QBarSeries* self)
///
void q_barseries_on_opacity_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// @param self QBarSeries*
///
void q_barseries_use_open_g_l_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// @param self QBarSeries*
/// @param callback void func(QBarSeries* self)
///
void q_barseries_on_use_open_g_l_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// @param self QBarSeries*
/// @param visible bool
///
void q_barseries_set_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// @param self QBarSeries*
/// @param enable bool
///
void q_barseries_set_use_open_g_l1(void* self, bool enable);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QBarSeries*
///
const char* q_barseries_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QBarSeries*
/// @param name const char*
///
void q_barseries_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QBarSeries*
///
bool q_barseries_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QBarSeries*
///
bool q_barseries_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QBarSeries*
///
bool q_barseries_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QBarSeries*
///
bool q_barseries_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QBarSeries*
/// @param b bool
///
bool q_barseries_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QBarSeries*
///
QThread* q_barseries_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QBarSeries*
/// @param thread QThread*
///
bool q_barseries_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBarSeries*
/// @param interval int
///
int32_t q_barseries_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBarSeries*
/// @param time int64_t of nanoseconds
///
int32_t q_barseries_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QBarSeries*
/// @param id int
///
void q_barseries_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QBarSeries*
/// @param id enum Qt__TimerId
///
void q_barseries_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QBarSeries*
///
/// @return libqt_list of QObject*
///
libqt_list q_barseries_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QBarSeries*
/// @param parent QObject*
///
void q_barseries_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QBarSeries*
/// @param filterObj QObject*
///
void q_barseries_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QBarSeries*
/// @param obj QObject*
///
void q_barseries_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_barseries_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_barseries_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QBarSeries*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_barseries_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_barseries_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_barseries_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QBarSeries*
///
bool q_barseries_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QBarSeries*
/// @param receiver QObject*
///
bool q_barseries_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_barseries_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QBarSeries*
///
void q_barseries_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QBarSeries*
///
void q_barseries_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QBarSeries*
/// @param name const char*
/// @param value QVariant*
///
bool q_barseries_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QBarSeries*
/// @param name const char*
///
QVariant* q_barseries_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QBarSeries*
///
const char** q_barseries_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QBarSeries*
///
QBindingStorage* q_barseries_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QBarSeries*
///
const QBindingStorage* q_barseries_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBarSeries*
///
void q_barseries_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBarSeries*
/// @param callback void func(QBarSeries* self)
///
void q_barseries_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QBarSeries*
///
QObject* q_barseries_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QBarSeries*
/// @param classname const char*
///
bool q_barseries_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QBarSeries*
///
void q_barseries_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBarSeries*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_barseries_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QBarSeries*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_barseries_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_barseries_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_barseries_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QBarSeries*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_barseries_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QBarSeries*
/// @param signal const char*
///
bool q_barseries_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QBarSeries*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_barseries_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QBarSeries*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_barseries_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QBarSeries*
/// @param receiver QObject*
/// @param member const char*
///
bool q_barseries_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBarSeries*
/// @param param1 QObject*
///
void q_barseries_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QBarSeries*
/// @param callback void func(QBarSeries* self, QObject* param1)
///
void q_barseries_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarSeries*
/// @param event QEvent*
///
bool q_barseries_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_barseries_super_event` instead
///
#define q_barseries_qbase_event q_barseries_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarSeries*
/// @param event QEvent*
///
bool q_barseries_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarSeries*
/// @param callback bool func(QBarSeries* self, QEvent* event)
///
void q_barseries_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarSeries*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_barseries_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `q_barseries_super_event_filter` instead
///
#define q_barseries_qbase_event_filter q_barseries_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarSeries*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_barseries_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarSeries*
/// @param callback bool func(QBarSeries* self, QObject* watched, QEvent* event)
///
void q_barseries_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarSeries*
/// @param event QTimerEvent*
///
void q_barseries_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_barseries_super_timer_event` instead
///
#define q_barseries_qbase_timer_event q_barseries_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarSeries*
/// @param event QTimerEvent*
///
void q_barseries_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarSeries*
/// @param callback void func(QBarSeries* self, QTimerEvent* event)
///
void q_barseries_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarSeries*
/// @param event QChildEvent*
///
void q_barseries_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_barseries_super_child_event` instead
///
#define q_barseries_qbase_child_event q_barseries_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarSeries*
/// @param event QChildEvent*
///
void q_barseries_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarSeries*
/// @param callback void func(QBarSeries* self, QChildEvent* event)
///
void q_barseries_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarSeries*
/// @param event QEvent*
///
void q_barseries_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_barseries_super_custom_event` instead
///
#define q_barseries_qbase_custom_event q_barseries_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarSeries*
/// @param event QEvent*
///
void q_barseries_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarSeries*
/// @param callback void func(QBarSeries* self, QEvent* event)
///
void q_barseries_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarSeries*
/// @param signal QMetaMethod*
///
void q_barseries_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_barseries_super_connect_notify` instead
///
#define q_barseries_qbase_connect_notify q_barseries_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarSeries*
/// @param signal QMetaMethod*
///
void q_barseries_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarSeries*
/// @param callback void func(QBarSeries* self, QMetaMethod* signal)
///
void q_barseries_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarSeries*
/// @param signal QMetaMethod*
///
void q_barseries_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_barseries_super_disconnect_notify` instead
///
#define q_barseries_qbase_disconnect_notify q_barseries_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarSeries*
/// @param signal QMetaMethod*
///
void q_barseries_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarSeries*
/// @param callback void func(QBarSeries* self, QMetaMethod* signal)
///
void q_barseries_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarSeries*
///
QObject* q_barseries_sender(void* self);

/// @warning DEPRECATED: Use `q_barseries_super_sender` instead
///
#define q_barseries_qbase_sender q_barseries_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarSeries*
///
QObject* q_barseries_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarSeries*
/// @param callback QObject* func()
///
void q_barseries_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarSeries*
///
int32_t q_barseries_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_barseries_super_sender_signal_index` instead
///
#define q_barseries_qbase_sender_signal_index q_barseries_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarSeries*
///
int32_t q_barseries_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarSeries*
/// @param callback int32_t func()
///
void q_barseries_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarSeries*
/// @param signal const char*
///
int32_t q_barseries_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_barseries_super_receivers` instead
///
#define q_barseries_qbase_receivers q_barseries_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarSeries*
/// @param signal const char*
///
int32_t q_barseries_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarSeries*
/// @param callback int32_t func(QBarSeries* self, const char* signal)
///
void q_barseries_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QBarSeries*
/// @param signal QMetaMethod*
///
bool q_barseries_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_barseries_super_is_signal_connected` instead
///
#define q_barseries_qbase_is_signal_connected q_barseries_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QBarSeries*
/// @param signal QMetaMethod*
///
bool q_barseries_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QBarSeries*
/// @param callback bool func(QBarSeries* self, QMetaMethod* signal)
///
void q_barseries_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QBarSeries*
/// @param callback void func(QBarSeries* self, const char* objectName)
///
void q_barseries_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qbarseries-qtcharts.html#dtor.QBarSeries)
///
/// Delete this object from C++ memory.
///
/// @param self QBarSeries*
///
void q_barseries_delete(void* self);

#endif
