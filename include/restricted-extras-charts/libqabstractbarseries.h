#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQABSTRACTBARSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQABSTRACTBARSERIES_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QAbstractBarSeries*
const QMetaObject* q_abstractbarseries_meta_object(void* self);

/// @param self QAbstractBarSeries*
/// @param param1 const char*
void* q_abstractbarseries_metacast(void* self, const char* param1);

/// @param self QAbstractBarSeries*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_abstractbarseries_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_abstractbarseries_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setBarWidth)
///
/// @param self QAbstractBarSeries*
/// @param width double
void q_abstractbarseries_set_bar_width(void* self, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#barWidth)
///
/// @param self QAbstractBarSeries*
double q_abstractbarseries_bar_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#append)
///
/// @param self QAbstractBarSeries*
/// @param set QBarSet*
bool q_abstractbarseries_append(void* self, void* set);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#remove)
///
/// @param self QAbstractBarSeries*
/// @param set QBarSet*
bool q_abstractbarseries_remove(void* self, void* set);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#take)
///
/// @param self QAbstractBarSeries*
/// @param set QBarSet*
bool q_abstractbarseries_take(void* self, void* set);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#append)
///
/// @param self QAbstractBarSeries*
/// @param sets libqt_list /* of QBarSet* */
bool q_abstractbarseries_append2(void* self, libqt_list sets);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#insert)
///
/// @param self QAbstractBarSeries*
/// @param index int
/// @param set QBarSet*
bool q_abstractbarseries_insert(void* self, int index, void* set);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#count)
///
/// @param self QAbstractBarSeries*
int32_t q_abstractbarseries_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#barSets)
///
/// @param self QAbstractBarSeries*
libqt_list /* of QBarSet* */ q_abstractbarseries_bar_sets(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#clear)
///
/// @param self QAbstractBarSeries*
void q_abstractbarseries_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setLabelsVisible)
///
/// @param self QAbstractBarSeries*
void q_abstractbarseries_set_labels_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#isLabelsVisible)
///
/// @param self QAbstractBarSeries*
bool q_abstractbarseries_is_labels_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setLabelsFormat)
///
/// @param self QAbstractBarSeries*
/// @param format const char*
void q_abstractbarseries_set_labels_format(void* self, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsFormat)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractBarSeries*
const char* q_abstractbarseries_labels_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setLabelsAngle)
///
/// @param self QAbstractBarSeries*
/// @param angle double
void q_abstractbarseries_set_labels_angle(void* self, double angle);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsAngle)
///
/// @param self QAbstractBarSeries*
double q_abstractbarseries_labels_angle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setLabelsPosition)
///
/// @param self QAbstractBarSeries*
/// @param position enum QAbstractBarSeries__LabelsPosition
void q_abstractbarseries_set_labels_position(void* self, int64_t position);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsPosition)
///
/// @param self QAbstractBarSeries*
///
/// @return enum QAbstractBarSeries__LabelsPosition
int64_t q_abstractbarseries_labels_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setLabelsPrecision)
///
/// @param self QAbstractBarSeries*
/// @param precision int
void q_abstractbarseries_set_labels_precision(void* self, int precision);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsPrecision)
///
/// @param self QAbstractBarSeries*
int32_t q_abstractbarseries_labels_precision(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#clicked)
///
/// @param self QAbstractBarSeries*
/// @param index int
/// @param barset QBarSet*
void q_abstractbarseries_clicked(void* self, int index, void* barset);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#clicked)
///
/// @param self QAbstractBarSeries*
/// @param callback void fn(QAbstractBarSeries*, int, QBarSet*)
void q_abstractbarseries_on_clicked(void* self, void (*callback)(void*, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#hovered)
///
/// @param self QAbstractBarSeries*
/// @param status bool
/// @param index int
/// @param barset QBarSet*
void q_abstractbarseries_hovered(void* self, bool status, int index, void* barset);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#hovered)
///
/// @param self QAbstractBarSeries*
/// @param callback void fn(QAbstractBarSeries*, bool, int, QBarSet*)
void q_abstractbarseries_on_hovered(void* self, void (*callback)(void*, bool, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#pressed)
///
/// @param self QAbstractBarSeries*
/// @param index int
/// @param barset QBarSet*
void q_abstractbarseries_pressed(void* self, int index, void* barset);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#pressed)
///
/// @param self QAbstractBarSeries*
/// @param callback void fn(QAbstractBarSeries*, int, QBarSet*)
void q_abstractbarseries_on_pressed(void* self, void (*callback)(void*, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#released)
///
/// @param self QAbstractBarSeries*
/// @param index int
/// @param barset QBarSet*
void q_abstractbarseries_released(void* self, int index, void* barset);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#released)
///
/// @param self QAbstractBarSeries*
/// @param callback void fn(QAbstractBarSeries*, int, QBarSet*)
void q_abstractbarseries_on_released(void* self, void (*callback)(void*, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#doubleClicked)
///
/// @param self QAbstractBarSeries*
/// @param index int
/// @param barset QBarSet*
void q_abstractbarseries_double_clicked(void* self, int index, void* barset);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#doubleClicked)
///
/// @param self QAbstractBarSeries*
/// @param callback void fn(QAbstractBarSeries*, int, QBarSet*)
void q_abstractbarseries_on_double_clicked(void* self, void (*callback)(void*, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#countChanged)
///
/// @param self QAbstractBarSeries*
void q_abstractbarseries_count_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#countChanged)
///
/// @param self QAbstractBarSeries*
/// @param callback void fn(QAbstractBarSeries*)
void q_abstractbarseries_on_count_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsVisibleChanged)
///
/// @param self QAbstractBarSeries*
void q_abstractbarseries_labels_visible_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsVisibleChanged)
///
/// @param self QAbstractBarSeries*
/// @param callback void fn(QAbstractBarSeries*)
void q_abstractbarseries_on_labels_visible_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsFormatChanged)
///
/// @param self QAbstractBarSeries*
/// @param format const char*
void q_abstractbarseries_labels_format_changed(void* self, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsFormatChanged)
///
/// @param self QAbstractBarSeries*
/// @param callback void fn(QAbstractBarSeries*, const char*)
void q_abstractbarseries_on_labels_format_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsPositionChanged)
///
/// @param self QAbstractBarSeries*
/// @param position enum QAbstractBarSeries__LabelsPosition
void q_abstractbarseries_labels_position_changed(void* self, int64_t position);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsPositionChanged)
///
/// @param self QAbstractBarSeries*
/// @param callback void fn(QAbstractBarSeries*, enum QAbstractBarSeries__LabelsPosition)
void q_abstractbarseries_on_labels_position_changed(void* self, void (*callback)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsAngleChanged)
///
/// @param self QAbstractBarSeries*
/// @param angle double
void q_abstractbarseries_labels_angle_changed(void* self, double angle);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsAngleChanged)
///
/// @param self QAbstractBarSeries*
/// @param callback void fn(QAbstractBarSeries*, double)
void q_abstractbarseries_on_labels_angle_changed(void* self, void (*callback)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsPrecisionChanged)
///
/// @param self QAbstractBarSeries*
/// @param precision int
void q_abstractbarseries_labels_precision_changed(void* self, int precision);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsPrecisionChanged)
///
/// @param self QAbstractBarSeries*
/// @param callback void fn(QAbstractBarSeries*, int)
void q_abstractbarseries_on_labels_precision_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#barsetsAdded)
///
/// @param self QAbstractBarSeries*
/// @param sets libqt_list /* of QBarSet* */
void q_abstractbarseries_barsets_added(void* self, libqt_list sets);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#barsetsAdded)
///
/// @param self QAbstractBarSeries*
/// @param callback void fn(QAbstractBarSeries*, libqt_list /* of QBarSet* */)
void q_abstractbarseries_on_barsets_added(void* self, void (*callback)(void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#barsetsRemoved)
///
/// @param self QAbstractBarSeries*
/// @param sets libqt_list /* of QBarSet* */
void q_abstractbarseries_barsets_removed(void* self, libqt_list sets);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#barsetsRemoved)
///
/// @param self QAbstractBarSeries*
/// @param callback void fn(QAbstractBarSeries*, libqt_list /* of QBarSet* */)
void q_abstractbarseries_on_barsets_removed(void* self, void (*callback)(void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_abstractbarseries_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_abstractbarseries_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setLabelsVisible)
///
/// @param self QAbstractBarSeries*
/// @param visible bool
void q_abstractbarseries_set_labels_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#type)
///
/// @param self QAbstractBarSeries*
///
/// @return enum QAbstractSeries__SeriesType
int64_t q_abstractbarseries_type(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// @param self QAbstractBarSeries*
/// @param name const char*
void q_abstractbarseries_set_name(void* self, const char* name);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractBarSeries*
const char* q_abstractbarseries_name(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// @param self QAbstractBarSeries*
void q_abstractbarseries_set_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// @param self QAbstractBarSeries*
bool q_abstractbarseries_is_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// @param self QAbstractBarSeries*
double q_abstractbarseries_opacity(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// @param self QAbstractBarSeries*
/// @param opacity double
void q_abstractbarseries_set_opacity(void* self, double opacity);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// @param self QAbstractBarSeries*
void q_abstractbarseries_set_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// @param self QAbstractBarSeries*
bool q_abstractbarseries_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// @param self QAbstractBarSeries*
QChart* q_abstractbarseries_chart(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// @param self QAbstractBarSeries*
/// @param axis QAbstractAxis*
bool q_abstractbarseries_attach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// @param self QAbstractBarSeries*
/// @param axis QAbstractAxis*
bool q_abstractbarseries_detach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// @param self QAbstractBarSeries*
libqt_list /* of QAbstractAxis* */ q_abstractbarseries_attached_axes(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// @param self QAbstractBarSeries*
void q_abstractbarseries_show(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// @param self QAbstractBarSeries*
void q_abstractbarseries_hide(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// @param self QAbstractBarSeries*
void q_abstractbarseries_name_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// @param self QAbstractBarSeries*
/// @param callback void fn(QAbstractBarSeries*)
void q_abstractbarseries_on_name_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// @param self QAbstractBarSeries*
void q_abstractbarseries_visible_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// @param self QAbstractBarSeries*
/// @param callback void fn(QAbstractBarSeries*)
void q_abstractbarseries_on_visible_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// @param self QAbstractBarSeries*
void q_abstractbarseries_opacity_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// @param self QAbstractBarSeries*
/// @param callback void fn(QAbstractBarSeries*)
void q_abstractbarseries_on_opacity_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// @param self QAbstractBarSeries*
void q_abstractbarseries_use_open_g_l_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// @param self QAbstractBarSeries*
/// @param callback void fn(QAbstractBarSeries*)
void q_abstractbarseries_on_use_open_g_l_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// @param self QAbstractBarSeries*
/// @param visible bool
void q_abstractbarseries_set_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// @param self QAbstractBarSeries*
/// @param enable bool
void q_abstractbarseries_set_use_open_g_l1(void* self, bool enable);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QAbstractBarSeries*
/// @param event QEvent*
bool q_abstractbarseries_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QAbstractBarSeries*
/// @param watched QObject*
/// @param event QEvent*
bool q_abstractbarseries_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractBarSeries*
const char* q_abstractbarseries_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAbstractBarSeries*
/// @param name char*
void q_abstractbarseries_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QAbstractBarSeries*
bool q_abstractbarseries_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QAbstractBarSeries*
bool q_abstractbarseries_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QAbstractBarSeries*
bool q_abstractbarseries_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QAbstractBarSeries*
bool q_abstractbarseries_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAbstractBarSeries*
/// @param b bool
bool q_abstractbarseries_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QAbstractBarSeries*
QThread* q_abstractbarseries_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstractBarSeries*
/// @param thread QThread*
bool q_abstractbarseries_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractBarSeries*
/// @param interval int
int32_t q_abstractbarseries_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractBarSeries*
/// @param id int
void q_abstractbarseries_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractBarSeries*
/// @param id enum Qt__TimerId
void q_abstractbarseries_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QAbstractBarSeries*
libqt_list /* of QObject* */ q_abstractbarseries_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QAbstractBarSeries*
/// @param parent QObject*
void q_abstractbarseries_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAbstractBarSeries*
/// @param filterObj QObject*
void q_abstractbarseries_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAbstractBarSeries*
/// @param obj QObject*
void q_abstractbarseries_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_abstractbarseries_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAbstractBarSeries*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_abstractbarseries_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_abstractbarseries_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_abstractbarseries_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QAbstractBarSeries*
void q_abstractbarseries_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QAbstractBarSeries*
void q_abstractbarseries_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAbstractBarSeries*
/// @param name const char*
/// @param value QVariant*
bool q_abstractbarseries_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QAbstractBarSeries*
/// @param name const char*
QVariant* q_abstractbarseries_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractBarSeries*
const char** q_abstractbarseries_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractBarSeries*
QBindingStorage* q_abstractbarseries_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractBarSeries*
const QBindingStorage* q_abstractbarseries_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractBarSeries*
void q_abstractbarseries_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractBarSeries*
/// @param callback void fn(QAbstractBarSeries*)
void q_abstractbarseries_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QAbstractBarSeries*
QObject* q_abstractbarseries_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QAbstractBarSeries*
/// @param classname const char*
bool q_abstractbarseries_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAbstractBarSeries*
void q_abstractbarseries_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstractBarSeries*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_abstractbarseries_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractBarSeries*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_abstractbarseries_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_abstractbarseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAbstractBarSeries*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_abstractbarseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractBarSeries*
/// @param param1 QObject*
void q_abstractbarseries_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractBarSeries*
/// @param callback void fn(QAbstractBarSeries*, QObject*)
void q_abstractbarseries_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractBarSeries*
/// @param callback void fn(QAbstractBarSeries*, const char*)
void q_abstractbarseries_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#dtor.QAbstractBarSeries)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractBarSeries*
void q_abstractbarseries_delete(void* self);

/// https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#types

typedef enum {
    QABSTRACTBARSERIES_LABELSPOSITION_LABELSCENTER = 0,
    QABSTRACTBARSERIES_LABELSPOSITION_LABELSINSIDEEND = 1,
    QABSTRACTBARSERIES_LABELSPOSITION_LABELSINSIDEBASE = 2,
    QABSTRACTBARSERIES_LABELSPOSITION_LABELSOUTSIDEEND = 3
} QAbstractBarSeries__LabelsPosition;

#endif
