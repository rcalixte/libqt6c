#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQPIESERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTS_QT6C_LIBQPIESERIES_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qpieseries-qtcharts.html

/// q_pieseries_new constructs a new QPieSeries object.
///
QPieSeries* q_pieseries_new();

/// q_pieseries_new2 constructs a new QPieSeries object.
///
/// @param parent QObject*
QPieSeries* q_pieseries_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QPieSeries*
const QMetaObject* q_pieseries_meta_object(void* self);

/// @param self QPieSeries*
/// @param param1 const char*
void* q_pieseries_metacast(void* self, const char* param1);

/// @param self QPieSeries*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_pieseries_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPieSeries*
/// @param callback int32_t func(QPieSeries* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_pieseries_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QPieSeries*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_pieseries_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_pieseries_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#type)
///
/// @param self QPieSeries*
///
/// @return enum QAbstractSeries__SeriesType
int32_t q_pieseries_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QPieSeries*
/// @param callback int32_t func()
void q_pieseries_on_type(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#type)
///
/// Base class method implementation
///
/// @param self QPieSeries*
///
/// @return enum QAbstractSeries__SeriesType
int32_t q_pieseries_qbase_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#append)
///
/// @param self QPieSeries*
/// @param slice QPieSlice*
bool q_pieseries_append(void* self, void* slice);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#append)
///
/// @param self QPieSeries*
/// @param slices libqt_list /* of QPieSlice* */
bool q_pieseries_append2(void* self, libqt_list slices);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#operator-lt-lt)
///
/// @param self QPieSeries*
/// @param slice QPieSlice*
QPieSeries* q_pieseries_operator_shift_left(void* self, void* slice);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#append)
///
/// @param self QPieSeries*
/// @param label const char*
/// @param value double
QPieSlice* q_pieseries_append3(void* self, const char* label, double value);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#insert)
///
/// @param self QPieSeries*
/// @param index int
/// @param slice QPieSlice*
bool q_pieseries_insert(void* self, int index, void* slice);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#remove)
///
/// @param self QPieSeries*
/// @param slice QPieSlice*
bool q_pieseries_remove(void* self, void* slice);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#take)
///
/// @param self QPieSeries*
/// @param slice QPieSlice*
bool q_pieseries_take(void* self, void* slice);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#clear)
///
/// @param self QPieSeries*
void q_pieseries_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#slices)
///
/// @param self QPieSeries*
libqt_list /* of QPieSlice* */ q_pieseries_slices(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#count)
///
/// @param self QPieSeries*
int32_t q_pieseries_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#isEmpty)
///
/// @param self QPieSeries*
bool q_pieseries_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#sum)
///
/// @param self QPieSeries*
double q_pieseries_sum(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#setHoleSize)
///
/// @param self QPieSeries*
/// @param holeSize double
void q_pieseries_set_hole_size(void* self, double holeSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#holeSize)
///
/// @param self QPieSeries*
double q_pieseries_hole_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#setHorizontalPosition)
///
/// @param self QPieSeries*
/// @param relativePosition double
void q_pieseries_set_horizontal_position(void* self, double relativePosition);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#horizontalPosition)
///
/// @param self QPieSeries*
double q_pieseries_horizontal_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#setVerticalPosition)
///
/// @param self QPieSeries*
/// @param relativePosition double
void q_pieseries_set_vertical_position(void* self, double relativePosition);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#verticalPosition)
///
/// @param self QPieSeries*
double q_pieseries_vertical_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#setPieSize)
///
/// @param self QPieSeries*
/// @param relativeSize double
void q_pieseries_set_pie_size(void* self, double relativeSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#pieSize)
///
/// @param self QPieSeries*
double q_pieseries_pie_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#setPieStartAngle)
///
/// @param self QPieSeries*
/// @param startAngle double
void q_pieseries_set_pie_start_angle(void* self, double startAngle);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#pieStartAngle)
///
/// @param self QPieSeries*
double q_pieseries_pie_start_angle(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#setPieEndAngle)
///
/// @param self QPieSeries*
/// @param endAngle double
void q_pieseries_set_pie_end_angle(void* self, double endAngle);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#pieEndAngle)
///
/// @param self QPieSeries*
double q_pieseries_pie_end_angle(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#setLabelsVisible)
///
/// @param self QPieSeries*
void q_pieseries_set_labels_visible(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#setLabelsPosition)
///
/// @param self QPieSeries*
/// @param position enum QPieSlice__LabelPosition
void q_pieseries_set_labels_position(void* self, int32_t position);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#added)
///
/// @param self QPieSeries*
/// @param slices libqt_list /* of QPieSlice* */
void q_pieseries_added(void* self, libqt_list slices);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#added)
///
/// @param self QPieSeries*
/// @param callback void func(QPieSeries* self, QPieSlice** slices)
void q_pieseries_on_added(void* self, void (*callback)(void*, QPieSlice**));

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#removed)
///
/// @param self QPieSeries*
/// @param slices libqt_list /* of QPieSlice* */
void q_pieseries_removed(void* self, libqt_list slices);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#removed)
///
/// @param self QPieSeries*
/// @param callback void func(QPieSeries* self, QPieSlice** slices)
void q_pieseries_on_removed(void* self, void (*callback)(void*, QPieSlice**));

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#clicked)
///
/// @param self QPieSeries*
/// @param slice QPieSlice*
void q_pieseries_clicked(void* self, void* slice);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#clicked)
///
/// @param self QPieSeries*
/// @param callback void func(QPieSeries* self, QPieSlice* slice)
void q_pieseries_on_clicked(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#hovered)
///
/// @param self QPieSeries*
/// @param slice QPieSlice*
/// @param state bool
void q_pieseries_hovered(void* self, void* slice, bool state);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#hovered)
///
/// @param self QPieSeries*
/// @param callback void func(QPieSeries* self, QPieSlice* slice, bool state)
void q_pieseries_on_hovered(void* self, void (*callback)(void*, void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#pressed)
///
/// @param self QPieSeries*
/// @param slice QPieSlice*
void q_pieseries_pressed(void* self, void* slice);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#pressed)
///
/// @param self QPieSeries*
/// @param callback void func(QPieSeries* self, QPieSlice* slice)
void q_pieseries_on_pressed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#released)
///
/// @param self QPieSeries*
/// @param slice QPieSlice*
void q_pieseries_released(void* self, void* slice);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#released)
///
/// @param self QPieSeries*
/// @param callback void func(QPieSeries* self, QPieSlice* slice)
void q_pieseries_on_released(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#doubleClicked)
///
/// @param self QPieSeries*
/// @param slice QPieSlice*
void q_pieseries_double_clicked(void* self, void* slice);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#doubleClicked)
///
/// @param self QPieSeries*
/// @param callback void func(QPieSeries* self, QPieSlice* slice)
void q_pieseries_on_double_clicked(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#countChanged)
///
/// @param self QPieSeries*
void q_pieseries_count_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#countChanged)
///
/// @param self QPieSeries*
/// @param callback void func(QPieSeries* self)
void q_pieseries_on_count_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#sumChanged)
///
/// @param self QPieSeries*
void q_pieseries_sum_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#sumChanged)
///
/// @param self QPieSeries*
/// @param callback void func(QPieSeries* self)
void q_pieseries_on_sum_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_pieseries_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_pieseries_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#setLabelsVisible)
///
/// @param self QPieSeries*
/// @param visible bool
void q_pieseries_set_labels_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// @param self QPieSeries*
/// @param name const char*
void q_pieseries_set_name(void* self, const char* name);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPieSeries*
const char* q_pieseries_name(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// @param self QPieSeries*
void q_pieseries_set_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// @param self QPieSeries*
bool q_pieseries_is_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// @param self QPieSeries*
double q_pieseries_opacity(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// @param self QPieSeries*
/// @param opacity double
void q_pieseries_set_opacity(void* self, double opacity);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// @param self QPieSeries*
void q_pieseries_set_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// @param self QPieSeries*
bool q_pieseries_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// @param self QPieSeries*
QChart* q_pieseries_chart(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// @param self QPieSeries*
/// @param axis QAbstractAxis*
bool q_pieseries_attach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// @param self QPieSeries*
/// @param axis QAbstractAxis*
bool q_pieseries_detach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// @param self QPieSeries*
libqt_list /* of QAbstractAxis* */ q_pieseries_attached_axes(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// @param self QPieSeries*
void q_pieseries_show(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// @param self QPieSeries*
void q_pieseries_hide(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// @param self QPieSeries*
void q_pieseries_name_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// @param self QPieSeries*
/// @param callback void func(QPieSeries* self)
void q_pieseries_on_name_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// @param self QPieSeries*
void q_pieseries_visible_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// @param self QPieSeries*
/// @param callback void func(QPieSeries* self)
void q_pieseries_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// @param self QPieSeries*
void q_pieseries_opacity_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// @param self QPieSeries*
/// @param callback void func(QPieSeries* self)
void q_pieseries_on_opacity_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// @param self QPieSeries*
void q_pieseries_use_open_g_l_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// @param self QPieSeries*
/// @param callback void func(QPieSeries* self)
void q_pieseries_on_use_open_g_l_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// @param self QPieSeries*
/// @param visible bool
void q_pieseries_set_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// @param self QPieSeries*
/// @param enable bool
void q_pieseries_set_use_open_g_l1(void* self, bool enable);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPieSeries*
const char* q_pieseries_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPieSeries*
/// @param name char*
void q_pieseries_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QPieSeries*
bool q_pieseries_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QPieSeries*
bool q_pieseries_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QPieSeries*
bool q_pieseries_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QPieSeries*
bool q_pieseries_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPieSeries*
/// @param b bool
bool q_pieseries_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QPieSeries*
QThread* q_pieseries_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPieSeries*
/// @param thread QThread*
bool q_pieseries_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPieSeries*
/// @param interval int
int32_t q_pieseries_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPieSeries*
/// @param id int
void q_pieseries_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPieSeries*
/// @param id enum Qt__TimerId
void q_pieseries_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QPieSeries*
libqt_list /* of QObject* */ q_pieseries_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QPieSeries*
/// @param parent QObject*
void q_pieseries_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPieSeries*
/// @param filterObj QObject*
void q_pieseries_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPieSeries*
/// @param obj QObject*
void q_pieseries_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_pieseries_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPieSeries*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_pieseries_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_pieseries_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_pieseries_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QPieSeries*
void q_pieseries_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QPieSeries*
void q_pieseries_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPieSeries*
/// @param name const char*
/// @param value QVariant*
bool q_pieseries_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QPieSeries*
/// @param name const char*
QVariant* q_pieseries_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPieSeries*
const char** q_pieseries_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPieSeries*
QBindingStorage* q_pieseries_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPieSeries*
const QBindingStorage* q_pieseries_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPieSeries*
void q_pieseries_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPieSeries*
/// @param callback void func(QPieSeries* self)
void q_pieseries_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QPieSeries*
QObject* q_pieseries_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QPieSeries*
/// @param classname const char*
bool q_pieseries_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPieSeries*
void q_pieseries_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPieSeries*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_pieseries_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPieSeries*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_pieseries_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_pieseries_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPieSeries*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_pieseries_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPieSeries*
/// @param param1 QObject*
void q_pieseries_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPieSeries*
/// @param callback void func(QPieSeries* self, QObject* param1)
void q_pieseries_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieSeries*
/// @param event QEvent*
bool q_pieseries_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieSeries*
/// @param event QEvent*
bool q_pieseries_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieSeries*
/// @param callback bool func(QPieSeries* self, QEvent* event)
void q_pieseries_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieSeries*
/// @param watched QObject*
/// @param event QEvent*
bool q_pieseries_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieSeries*
/// @param watched QObject*
/// @param event QEvent*
bool q_pieseries_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieSeries*
/// @param callback bool func(QPieSeries* self, QObject* watched, QEvent* event)
void q_pieseries_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieSeries*
/// @param event QTimerEvent*
void q_pieseries_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieSeries*
/// @param event QTimerEvent*
void q_pieseries_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieSeries*
/// @param callback void func(QPieSeries* self, QTimerEvent* event)
void q_pieseries_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieSeries*
/// @param event QChildEvent*
void q_pieseries_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieSeries*
/// @param event QChildEvent*
void q_pieseries_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieSeries*
/// @param callback void func(QPieSeries* self, QChildEvent* event)
void q_pieseries_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieSeries*
/// @param event QEvent*
void q_pieseries_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieSeries*
/// @param event QEvent*
void q_pieseries_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieSeries*
/// @param callback void func(QPieSeries* self, QEvent* event)
void q_pieseries_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieSeries*
/// @param signal QMetaMethod*
void q_pieseries_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieSeries*
/// @param signal QMetaMethod*
void q_pieseries_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieSeries*
/// @param callback void func(QPieSeries* self, QMetaMethod* signal)
void q_pieseries_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieSeries*
/// @param signal QMetaMethod*
void q_pieseries_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieSeries*
/// @param signal QMetaMethod*
void q_pieseries_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieSeries*
/// @param callback void func(QPieSeries* self, QMetaMethod* signal)
void q_pieseries_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieSeries*
QObject* q_pieseries_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieSeries*
QObject* q_pieseries_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieSeries*
/// @param callback QObject* func()
void q_pieseries_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieSeries*
int32_t q_pieseries_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieSeries*
int32_t q_pieseries_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieSeries*
/// @param callback int32_t func()
void q_pieseries_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieSeries*
/// @param signal const char*
int32_t q_pieseries_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieSeries*
/// @param signal const char*
int32_t q_pieseries_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieSeries*
/// @param callback int32_t func(QPieSeries* self, const char* signal)
void q_pieseries_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPieSeries*
/// @param signal QMetaMethod*
bool q_pieseries_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPieSeries*
/// @param signal QMetaMethod*
bool q_pieseries_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPieSeries*
/// @param callback bool func(QPieSeries* self, QMetaMethod* signal)
void q_pieseries_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPieSeries*
/// @param callback void func(QPieSeries* self, const char* objectName)
void q_pieseries_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#dtor.QPieSeries)
///
/// Delete this object from C++ memory.
///
/// @param self QPieSeries*
void q_pieseries_delete(void* self);

#endif
