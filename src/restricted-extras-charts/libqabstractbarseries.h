#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQABSTRACTBARSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQABSTRACTBARSERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAbstractBarSeries* self ```
const QMetaObject* q_abstractbarseries_meta_object(void* self);

/// ``` QAbstractBarSeries* self, const char* param1 ```
void* q_abstractbarseries_metacast(void* self, const char* param1);

/// ``` QAbstractBarSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractbarseries_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_abstractbarseries_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setBarWidth)
///
/// ``` QAbstractBarSeries* self, double width ```
void q_abstractbarseries_set_bar_width(void* self, double width);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#barWidth)
///
/// ``` QAbstractBarSeries* self ```
double q_abstractbarseries_bar_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#append)
///
/// ``` QAbstractBarSeries* self, QBarSet* set ```
bool q_abstractbarseries_append(void* self, void* set);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#remove)
///
/// ``` QAbstractBarSeries* self, QBarSet* set ```
bool q_abstractbarseries_remove(void* self, void* set);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#take)
///
/// ``` QAbstractBarSeries* self, QBarSet* set ```
bool q_abstractbarseries_take(void* self, void* set);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#append)
///
/// ``` QAbstractBarSeries* self, libqt_list /* of QBarSet* */ sets ```
bool q_abstractbarseries_append2(void* self, libqt_list sets);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#insert)
///
/// ``` QAbstractBarSeries* self, int index, QBarSet* set ```
bool q_abstractbarseries_insert(void* self, int index, void* set);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#count)
///
/// ``` QAbstractBarSeries* self ```
int32_t q_abstractbarseries_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#barSets)
///
/// ``` QAbstractBarSeries* self ```
libqt_list /* of QBarSet* */ q_abstractbarseries_bar_sets(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#clear)
///
/// ``` QAbstractBarSeries* self ```
void q_abstractbarseries_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setLabelsVisible)
///
/// ``` QAbstractBarSeries* self ```
void q_abstractbarseries_set_labels_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#isLabelsVisible)
///
/// ``` QAbstractBarSeries* self ```
bool q_abstractbarseries_is_labels_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setLabelsFormat)
///
/// ``` QAbstractBarSeries* self, const char* format ```
void q_abstractbarseries_set_labels_format(void* self, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsFormat)
///
/// ``` QAbstractBarSeries* self ```
const char* q_abstractbarseries_labels_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setLabelsAngle)
///
/// ``` QAbstractBarSeries* self, double angle ```
void q_abstractbarseries_set_labels_angle(void* self, double angle);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsAngle)
///
/// ``` QAbstractBarSeries* self ```
double q_abstractbarseries_labels_angle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setLabelsPosition)
///
/// ``` QAbstractBarSeries* self, enum QAbstractBarSeries__LabelsPosition position ```
void q_abstractbarseries_set_labels_position(void* self, int64_t position);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsPosition)
///
/// ``` QAbstractBarSeries* self ```
int64_t q_abstractbarseries_labels_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setLabelsPrecision)
///
/// ``` QAbstractBarSeries* self, int precision ```
void q_abstractbarseries_set_labels_precision(void* self, int precision);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsPrecision)
///
/// ``` QAbstractBarSeries* self ```
int32_t q_abstractbarseries_labels_precision(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#clicked)
///
/// ``` QAbstractBarSeries* self, int index, QBarSet* barset ```
void q_abstractbarseries_clicked(void* self, int index, void* barset);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#clicked)
///
/// ``` QAbstractBarSeries* self, void (*slot)(QAbstractBarSeries*, int, QBarSet*) ```
void q_abstractbarseries_on_clicked(void* self, void (*slot)(void*, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#hovered)
///
/// ``` QAbstractBarSeries* self, bool status, int index, QBarSet* barset ```
void q_abstractbarseries_hovered(void* self, bool status, int index, void* barset);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#hovered)
///
/// ``` QAbstractBarSeries* self, void (*slot)(QAbstractBarSeries*, bool, int, QBarSet*) ```
void q_abstractbarseries_on_hovered(void* self, void (*slot)(void*, bool, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#pressed)
///
/// ``` QAbstractBarSeries* self, int index, QBarSet* barset ```
void q_abstractbarseries_pressed(void* self, int index, void* barset);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#pressed)
///
/// ``` QAbstractBarSeries* self, void (*slot)(QAbstractBarSeries*, int, QBarSet*) ```
void q_abstractbarseries_on_pressed(void* self, void (*slot)(void*, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#released)
///
/// ``` QAbstractBarSeries* self, int index, QBarSet* barset ```
void q_abstractbarseries_released(void* self, int index, void* barset);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#released)
///
/// ``` QAbstractBarSeries* self, void (*slot)(QAbstractBarSeries*, int, QBarSet*) ```
void q_abstractbarseries_on_released(void* self, void (*slot)(void*, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#doubleClicked)
///
/// ``` QAbstractBarSeries* self, int index, QBarSet* barset ```
void q_abstractbarseries_double_clicked(void* self, int index, void* barset);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#doubleClicked)
///
/// ``` QAbstractBarSeries* self, void (*slot)(QAbstractBarSeries*, int, QBarSet*) ```
void q_abstractbarseries_on_double_clicked(void* self, void (*slot)(void*, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#countChanged)
///
/// ``` QAbstractBarSeries* self ```
void q_abstractbarseries_count_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#countChanged)
///
/// ``` QAbstractBarSeries* self, void (*slot)(QAbstractBarSeries*) ```
void q_abstractbarseries_on_count_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsVisibleChanged)
///
/// ``` QAbstractBarSeries* self ```
void q_abstractbarseries_labels_visible_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsVisibleChanged)
///
/// ``` QAbstractBarSeries* self, void (*slot)(QAbstractBarSeries*) ```
void q_abstractbarseries_on_labels_visible_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsFormatChanged)
///
/// ``` QAbstractBarSeries* self, const char* format ```
void q_abstractbarseries_labels_format_changed(void* self, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsFormatChanged)
///
/// ``` QAbstractBarSeries* self, void (*slot)(QAbstractBarSeries*, const char*) ```
void q_abstractbarseries_on_labels_format_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsPositionChanged)
///
/// ``` QAbstractBarSeries* self, enum QAbstractBarSeries__LabelsPosition position ```
void q_abstractbarseries_labels_position_changed(void* self, int64_t position);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsPositionChanged)
///
/// ``` QAbstractBarSeries* self, void (*slot)(QAbstractBarSeries*, enum QAbstractBarSeries__LabelsPosition) ```
void q_abstractbarseries_on_labels_position_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsAngleChanged)
///
/// ``` QAbstractBarSeries* self, double angle ```
void q_abstractbarseries_labels_angle_changed(void* self, double angle);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsAngleChanged)
///
/// ``` QAbstractBarSeries* self, void (*slot)(QAbstractBarSeries*, double) ```
void q_abstractbarseries_on_labels_angle_changed(void* self, void (*slot)(void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsPrecisionChanged)
///
/// ``` QAbstractBarSeries* self, int precision ```
void q_abstractbarseries_labels_precision_changed(void* self, int precision);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#labelsPrecisionChanged)
///
/// ``` QAbstractBarSeries* self, void (*slot)(QAbstractBarSeries*, int) ```
void q_abstractbarseries_on_labels_precision_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#barsetsAdded)
///
/// ``` QAbstractBarSeries* self, libqt_list /* of QBarSet* */ sets ```
void q_abstractbarseries_barsets_added(void* self, libqt_list sets);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#barsetsAdded)
///
/// ``` QAbstractBarSeries* self, void (*slot)(QAbstractBarSeries*, libqt_list /* of QBarSet* */ sets ) ```
void q_abstractbarseries_on_barsets_added(void* self, void (*slot)(void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#barsetsRemoved)
///
/// ``` QAbstractBarSeries* self, libqt_list /* of QBarSet* */ sets ```
void q_abstractbarseries_barsets_removed(void* self, libqt_list sets);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#barsetsRemoved)
///
/// ``` QAbstractBarSeries* self, void (*slot)(QAbstractBarSeries*, libqt_list /* of QBarSet* */ sets ) ```
void q_abstractbarseries_on_barsets_removed(void* self, void (*slot)(void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_abstractbarseries_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_abstractbarseries_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#setLabelsVisible)
///
/// ``` QAbstractBarSeries* self, bool visible ```
void q_abstractbarseries_set_labels_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#type)
///
/// ``` QAbstractBarSeries* self ```
int64_t q_abstractbarseries_type(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// ``` QAbstractBarSeries* self, const char* name ```
void q_abstractbarseries_set_name(void* self, const char* name);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// ``` QAbstractBarSeries* self ```
const char* q_abstractbarseries_name(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QAbstractBarSeries* self ```
void q_abstractbarseries_set_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// ``` QAbstractBarSeries* self ```
bool q_abstractbarseries_is_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// ``` QAbstractBarSeries* self ```
double q_abstractbarseries_opacity(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// ``` QAbstractBarSeries* self, double opacity ```
void q_abstractbarseries_set_opacity(void* self, double opacity);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QAbstractBarSeries* self ```
void q_abstractbarseries_set_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// ``` QAbstractBarSeries* self ```
bool q_abstractbarseries_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// ``` QAbstractBarSeries* self ```
QChart* q_abstractbarseries_chart(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// ``` QAbstractBarSeries* self, QAbstractAxis* axis ```
bool q_abstractbarseries_attach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// ``` QAbstractBarSeries* self, QAbstractAxis* axis ```
bool q_abstractbarseries_detach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// ``` QAbstractBarSeries* self ```
libqt_list /* of QAbstractAxis* */ q_abstractbarseries_attached_axes(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// ``` QAbstractBarSeries* self ```
void q_abstractbarseries_show(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// ``` QAbstractBarSeries* self ```
void q_abstractbarseries_hide(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QAbstractBarSeries* self ```
void q_abstractbarseries_name_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QAbstractBarSeries* self, void (*slot)(QAbstractSeries*) ```
void q_abstractbarseries_on_name_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QAbstractBarSeries* self ```
void q_abstractbarseries_visible_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QAbstractBarSeries* self, void (*slot)(QAbstractSeries*) ```
void q_abstractbarseries_on_visible_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QAbstractBarSeries* self ```
void q_abstractbarseries_opacity_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QAbstractBarSeries* self, void (*slot)(QAbstractSeries*) ```
void q_abstractbarseries_on_opacity_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QAbstractBarSeries* self ```
void q_abstractbarseries_use_open_g_l_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QAbstractBarSeries* self, void (*slot)(QAbstractSeries*) ```
void q_abstractbarseries_on_use_open_g_l_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QAbstractBarSeries* self, bool visible ```
void q_abstractbarseries_set_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QAbstractBarSeries* self, bool enable ```
void q_abstractbarseries_set_use_open_g_l1(void* self, bool enable);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QAbstractBarSeries* self, QEvent* event ```
bool q_abstractbarseries_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QAbstractBarSeries* self, QObject* watched, QEvent* event ```
bool q_abstractbarseries_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAbstractBarSeries* self ```
const char* q_abstractbarseries_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAbstractBarSeries* self, char* name ```
void q_abstractbarseries_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAbstractBarSeries* self ```
bool q_abstractbarseries_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAbstractBarSeries* self ```
bool q_abstractbarseries_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAbstractBarSeries* self ```
bool q_abstractbarseries_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAbstractBarSeries* self ```
bool q_abstractbarseries_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAbstractBarSeries* self, bool b ```
bool q_abstractbarseries_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAbstractBarSeries* self ```
QThread* q_abstractbarseries_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractBarSeries* self, QThread* thread ```
bool q_abstractbarseries_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractBarSeries* self, int interval ```
int32_t q_abstractbarseries_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractBarSeries* self, int id ```
void q_abstractbarseries_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractBarSeries* self, enum Qt__TimerId id ```
void q_abstractbarseries_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAbstractBarSeries* self ```
libqt_list /* of QObject* */ q_abstractbarseries_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAbstractBarSeries* self, QObject* parent ```
void q_abstractbarseries_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAbstractBarSeries* self, QObject* filterObj ```
void q_abstractbarseries_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAbstractBarSeries* self, QObject* obj ```
void q_abstractbarseries_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_abstractbarseries_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractBarSeries* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_abstractbarseries_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_abstractbarseries_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_abstractbarseries_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAbstractBarSeries* self ```
void q_abstractbarseries_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAbstractBarSeries* self ```
void q_abstractbarseries_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAbstractBarSeries* self, const char* name, QVariant* value ```
bool q_abstractbarseries_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAbstractBarSeries* self, const char* name ```
QVariant* q_abstractbarseries_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAbstractBarSeries* self ```
const char** q_abstractbarseries_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractBarSeries* self ```
QBindingStorage* q_abstractbarseries_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractBarSeries* self ```
const QBindingStorage* q_abstractbarseries_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractBarSeries* self ```
void q_abstractbarseries_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractBarSeries* self, void (*slot)(QObject*) ```
void q_abstractbarseries_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAbstractBarSeries* self ```
QObject* q_abstractbarseries_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAbstractBarSeries* self, const char* classname ```
bool q_abstractbarseries_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAbstractBarSeries* self ```
void q_abstractbarseries_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractBarSeries* self, QThread* thread, Disambiguated_t* param2 ```
bool q_abstractbarseries_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractBarSeries* self, int interval, enum Qt__TimerType timerType ```
int32_t q_abstractbarseries_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractbarseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractBarSeries* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractbarseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractBarSeries* self, QObject* param1 ```
void q_abstractbarseries_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractBarSeries* self, void (*slot)(QObject*, QObject*) ```
void q_abstractbarseries_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractBarSeries* self, void (*slot)(QObject*, const char*) ```
void q_abstractbarseries_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#dtor.QAbstractBarSeries)
///
/// Delete this object from C++ memory.
///
/// ``` QAbstractBarSeries* self ```
void q_abstractbarseries_delete(void* self);

/// https://doc.qt.io/qt-6/qabstractbarseries-qtcharts.html#types

typedef enum {
    QABSTRACTBARSERIES_LABELSPOSITION_LABELSCENTER = 0,
    QABSTRACTBARSERIES_LABELSPOSITION_LABELSINSIDEEND = 1,
    QABSTRACTBARSERIES_LABELSPOSITION_LABELSINSIDEBASE = 2,
    QABSTRACTBARSERIES_LABELSPOSITION_LABELSOUTSIDEEND = 3
} QAbstractBarSeries__LabelsPosition;

#endif
