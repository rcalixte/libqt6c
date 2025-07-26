#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQPERCENTBARSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQPERCENTBARSERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qpercentbarseries-qtcharts.html

/// q_percentbarseries_new constructs a new QPercentBarSeries object.
///
///
QPercentBarSeries* q_percentbarseries_new();

/// q_percentbarseries_new2 constructs a new QPercentBarSeries object.
///
/// ``` QObject* parent ```
QPercentBarSeries* q_percentbarseries_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPercentBarSeries* self ```
const QMetaObject* q_percentbarseries_meta_object(void* self);

/// ``` QPercentBarSeries* self, const char* param1 ```
void* q_percentbarseries_metacast(void* self, const char* param1);

/// ``` QPercentBarSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_percentbarseries_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QPercentBarSeries* self, int32_t (*slot)(QPercentBarSeries*, enum QMetaObject__Call, int, void*) ```
void q_percentbarseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QPercentBarSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_percentbarseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_percentbarseries_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpercentbarseries-qtcharts.html#type)
///
/// ``` QPercentBarSeries* self ```
int64_t q_percentbarseries_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpercentbarseries-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// ``` QPercentBarSeries* self, int64_t (*slot)() ```
void q_percentbarseries_on_type(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qpercentbarseries-qtcharts.html#type)
///
/// Base class method implementation
///
/// ``` QPercentBarSeries* self ```
int64_t q_percentbarseries_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_percentbarseries_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_percentbarseries_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setBarWidth)
///
/// ``` QPercentBarSeries* self, double width ```
void q_percentbarseries_set_bar_width(void* self, double width);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barWidth)
///
/// ``` QPercentBarSeries* self ```
double q_percentbarseries_bar_width(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
///
/// ``` QPercentBarSeries* self, QBarSet* set ```
bool q_percentbarseries_append(void* self, void* set);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#remove)
///
/// ``` QPercentBarSeries* self, QBarSet* set ```
bool q_percentbarseries_remove(void* self, void* set);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#take)
///
/// ``` QPercentBarSeries* self, QBarSet* set ```
bool q_percentbarseries_take(void* self, void* set);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
///
/// ``` QPercentBarSeries* self, libqt_list /* of QBarSet* */ sets ```
bool q_percentbarseries_append2(void* self, libqt_list sets);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#insert)
///
/// ``` QPercentBarSeries* self, int index, QBarSet* set ```
bool q_percentbarseries_insert(void* self, int index, void* set);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#count)
///
/// ``` QPercentBarSeries* self ```
int32_t q_percentbarseries_count(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barSets)
///
/// ``` QPercentBarSeries* self ```
libqt_list /* of QBarSet* */ q_percentbarseries_bar_sets(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#clear)
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_clear(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_set_labels_visible(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#isLabelsVisible)
///
/// ``` QPercentBarSeries* self ```
bool q_percentbarseries_is_labels_visible(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsFormat)
///
/// ``` QPercentBarSeries* self, const char* format ```
void q_percentbarseries_set_labels_format(void* self, const char* format);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormat)
///
/// ``` QPercentBarSeries* self ```
const char* q_percentbarseries_labels_format(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsAngle)
///
/// ``` QPercentBarSeries* self, double angle ```
void q_percentbarseries_set_labels_angle(void* self, double angle);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngle)
///
/// ``` QPercentBarSeries* self ```
double q_percentbarseries_labels_angle(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPosition)
///
/// ``` QPercentBarSeries* self, enum QAbstractBarSeries__LabelsPosition position ```
void q_percentbarseries_set_labels_position(void* self, int64_t position);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPosition)
///
/// ``` QPercentBarSeries* self ```
int64_t q_percentbarseries_labels_position(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPrecision)
///
/// ``` QPercentBarSeries* self, int precision ```
void q_percentbarseries_set_labels_precision(void* self, int precision);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecision)
///
/// ``` QPercentBarSeries* self ```
int32_t q_percentbarseries_labels_precision(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#clicked)
///
/// ``` QPercentBarSeries* self, int index, QBarSet* barset ```
void q_percentbarseries_clicked(void* self, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#clicked)
///
/// ``` QPercentBarSeries* self, void (*slot)(QPercentBarSeries*, int, QBarSet*) ```
void q_percentbarseries_on_clicked(void* self, void (*slot)(void*, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#hovered)
///
/// ``` QPercentBarSeries* self, bool status, int index, QBarSet* barset ```
void q_percentbarseries_hovered(void* self, bool status, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#hovered)
///
/// ``` QPercentBarSeries* self, void (*slot)(QPercentBarSeries*, bool, int, QBarSet*) ```
void q_percentbarseries_on_hovered(void* self, void (*slot)(void*, bool, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#pressed)
///
/// ``` QPercentBarSeries* self, int index, QBarSet* barset ```
void q_percentbarseries_pressed(void* self, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#pressed)
///
/// ``` QPercentBarSeries* self, void (*slot)(QPercentBarSeries*, int, QBarSet*) ```
void q_percentbarseries_on_pressed(void* self, void (*slot)(void*, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#released)
///
/// ``` QPercentBarSeries* self, int index, QBarSet* barset ```
void q_percentbarseries_released(void* self, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#released)
///
/// ``` QPercentBarSeries* self, void (*slot)(QPercentBarSeries*, int, QBarSet*) ```
void q_percentbarseries_on_released(void* self, void (*slot)(void*, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#doubleClicked)
///
/// ``` QPercentBarSeries* self, int index, QBarSet* barset ```
void q_percentbarseries_double_clicked(void* self, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#doubleClicked)
///
/// ``` QPercentBarSeries* self, void (*slot)(QPercentBarSeries*, int, QBarSet*) ```
void q_percentbarseries_on_double_clicked(void* self, void (*slot)(void*, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#countChanged)
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_count_changed(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#countChanged)
///
/// ``` QPercentBarSeries* self, void (*slot)(QPercentBarSeries*) ```
void q_percentbarseries_on_count_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsVisibleChanged)
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_labels_visible_changed(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsVisibleChanged)
///
/// ``` QPercentBarSeries* self, void (*slot)(QPercentBarSeries*) ```
void q_percentbarseries_on_labels_visible_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormatChanged)
///
/// ``` QPercentBarSeries* self, const char* format ```
void q_percentbarseries_labels_format_changed(void* self, const char* format);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormatChanged)
///
/// ``` QPercentBarSeries* self, void (*slot)(QPercentBarSeries*, const char*) ```
void q_percentbarseries_on_labels_format_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPositionChanged)
///
/// ``` QPercentBarSeries* self, enum QAbstractBarSeries__LabelsPosition position ```
void q_percentbarseries_labels_position_changed(void* self, int64_t position);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPositionChanged)
///
/// ``` QPercentBarSeries* self, void (*slot)(QPercentBarSeries*, enum QAbstractBarSeries__LabelsPosition) ```
void q_percentbarseries_on_labels_position_changed(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngleChanged)
///
/// ``` QPercentBarSeries* self, double angle ```
void q_percentbarseries_labels_angle_changed(void* self, double angle);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngleChanged)
///
/// ``` QPercentBarSeries* self, void (*slot)(QPercentBarSeries*, double) ```
void q_percentbarseries_on_labels_angle_changed(void* self, void (*slot)(void*, double));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecisionChanged)
///
/// ``` QPercentBarSeries* self, int precision ```
void q_percentbarseries_labels_precision_changed(void* self, int precision);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecisionChanged)
///
/// ``` QPercentBarSeries* self, void (*slot)(QPercentBarSeries*, int) ```
void q_percentbarseries_on_labels_precision_changed(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsAdded)
///
/// ``` QPercentBarSeries* self, libqt_list /* of QBarSet* */ sets ```
void q_percentbarseries_barsets_added(void* self, libqt_list sets);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsAdded)
///
/// ``` QPercentBarSeries* self, void (*slot)(QPercentBarSeries*, libqt_list /* of QBarSet* */ sets ) ```
void q_percentbarseries_on_barsets_added(void* self, void (*slot)(void*, libqt_list));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsRemoved)
///
/// ``` QPercentBarSeries* self, libqt_list /* of QBarSet* */ sets ```
void q_percentbarseries_barsets_removed(void* self, libqt_list sets);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsRemoved)
///
/// ``` QPercentBarSeries* self, void (*slot)(QPercentBarSeries*, libqt_list /* of QBarSet* */ sets ) ```
void q_percentbarseries_on_barsets_removed(void* self, void (*slot)(void*, libqt_list));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
///
/// ``` QPercentBarSeries* self, bool visible ```
void q_percentbarseries_set_labels_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// ``` QPercentBarSeries* self, const char* name ```
void q_percentbarseries_set_name(void* self, const char* name);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// ``` QPercentBarSeries* self ```
const char* q_percentbarseries_name(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_set_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// ``` QPercentBarSeries* self ```
bool q_percentbarseries_is_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// ``` QPercentBarSeries* self ```
double q_percentbarseries_opacity(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// ``` QPercentBarSeries* self, double opacity ```
void q_percentbarseries_set_opacity(void* self, double opacity);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_set_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// ``` QPercentBarSeries* self ```
bool q_percentbarseries_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// ``` QPercentBarSeries* self ```
QChart* q_percentbarseries_chart(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// ``` QPercentBarSeries* self, QAbstractAxis* axis ```
bool q_percentbarseries_attach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// ``` QPercentBarSeries* self, QAbstractAxis* axis ```
bool q_percentbarseries_detach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// ``` QPercentBarSeries* self ```
libqt_list /* of QAbstractAxis* */ q_percentbarseries_attached_axes(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_show(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_hide(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_name_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QPercentBarSeries* self, void (*slot)(QPercentBarSeries*) ```
void q_percentbarseries_on_name_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_visible_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QPercentBarSeries* self, void (*slot)(QPercentBarSeries*) ```
void q_percentbarseries_on_visible_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_opacity_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QPercentBarSeries* self, void (*slot)(QPercentBarSeries*) ```
void q_percentbarseries_on_opacity_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_use_open_g_l_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QPercentBarSeries* self, void (*slot)(QPercentBarSeries*) ```
void q_percentbarseries_on_use_open_g_l_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QPercentBarSeries* self, bool visible ```
void q_percentbarseries_set_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QPercentBarSeries* self, bool enable ```
void q_percentbarseries_set_use_open_g_l1(void* self, bool enable);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPercentBarSeries* self ```
const char* q_percentbarseries_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPercentBarSeries* self, char* name ```
void q_percentbarseries_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPercentBarSeries* self ```
bool q_percentbarseries_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPercentBarSeries* self ```
bool q_percentbarseries_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPercentBarSeries* self ```
bool q_percentbarseries_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPercentBarSeries* self ```
bool q_percentbarseries_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPercentBarSeries* self, bool b ```
bool q_percentbarseries_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPercentBarSeries* self ```
QThread* q_percentbarseries_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPercentBarSeries* self, QThread* thread ```
bool q_percentbarseries_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPercentBarSeries* self, int interval ```
int32_t q_percentbarseries_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPercentBarSeries* self, int id ```
void q_percentbarseries_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPercentBarSeries* self, enum Qt__TimerId id ```
void q_percentbarseries_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPercentBarSeries* self ```
libqt_list /* of QObject* */ q_percentbarseries_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QPercentBarSeries* self, QObject* parent ```
void q_percentbarseries_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPercentBarSeries* self, QObject* filterObj ```
void q_percentbarseries_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPercentBarSeries* self, QObject* obj ```
void q_percentbarseries_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_percentbarseries_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPercentBarSeries* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_percentbarseries_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_percentbarseries_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_percentbarseries_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPercentBarSeries* self, const char* name, QVariant* value ```
bool q_percentbarseries_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPercentBarSeries* self, const char* name ```
QVariant* q_percentbarseries_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPercentBarSeries* self ```
const char** q_percentbarseries_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPercentBarSeries* self ```
QBindingStorage* q_percentbarseries_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPercentBarSeries* self ```
const QBindingStorage* q_percentbarseries_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPercentBarSeries* self, void (*slot)(QPercentBarSeries*) ```
void q_percentbarseries_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPercentBarSeries* self ```
QObject* q_percentbarseries_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPercentBarSeries* self, const char* classname ```
bool q_percentbarseries_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPercentBarSeries* self, QThread* thread, Disambiguated_t* param2 ```
bool q_percentbarseries_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPercentBarSeries* self, int interval, enum Qt__TimerType timerType ```
int32_t q_percentbarseries_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_percentbarseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPercentBarSeries* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_percentbarseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPercentBarSeries* self, QObject* param1 ```
void q_percentbarseries_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPercentBarSeries* self, void (*slot)(QPercentBarSeries*, QObject*) ```
void q_percentbarseries_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPercentBarSeries* self, QEvent* event ```
bool q_percentbarseries_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPercentBarSeries* self, QEvent* event ```
bool q_percentbarseries_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPercentBarSeries* self, bool (*slot)(QPercentBarSeries*, QEvent*) ```
void q_percentbarseries_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPercentBarSeries* self, QObject* watched, QEvent* event ```
bool q_percentbarseries_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPercentBarSeries* self, QObject* watched, QEvent* event ```
bool q_percentbarseries_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPercentBarSeries* self, bool (*slot)(QPercentBarSeries*, QObject*, QEvent*) ```
void q_percentbarseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPercentBarSeries* self, QTimerEvent* event ```
void q_percentbarseries_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPercentBarSeries* self, QTimerEvent* event ```
void q_percentbarseries_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPercentBarSeries* self, void (*slot)(QPercentBarSeries*, QTimerEvent*) ```
void q_percentbarseries_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPercentBarSeries* self, QChildEvent* event ```
void q_percentbarseries_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPercentBarSeries* self, QChildEvent* event ```
void q_percentbarseries_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPercentBarSeries* self, void (*slot)(QPercentBarSeries*, QChildEvent*) ```
void q_percentbarseries_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPercentBarSeries* self, QEvent* event ```
void q_percentbarseries_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPercentBarSeries* self, QEvent* event ```
void q_percentbarseries_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPercentBarSeries* self, void (*slot)(QPercentBarSeries*, QEvent*) ```
void q_percentbarseries_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPercentBarSeries* self, QMetaMethod* signal ```
void q_percentbarseries_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPercentBarSeries* self, QMetaMethod* signal ```
void q_percentbarseries_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPercentBarSeries* self, void (*slot)(QPercentBarSeries*, QMetaMethod*) ```
void q_percentbarseries_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPercentBarSeries* self, QMetaMethod* signal ```
void q_percentbarseries_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPercentBarSeries* self, QMetaMethod* signal ```
void q_percentbarseries_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPercentBarSeries* self, void (*slot)(QPercentBarSeries*, QMetaMethod*) ```
void q_percentbarseries_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPercentBarSeries* self ```
QObject* q_percentbarseries_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPercentBarSeries* self ```
QObject* q_percentbarseries_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPercentBarSeries* self, QObject* (*slot)() ```
void q_percentbarseries_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPercentBarSeries* self ```
int32_t q_percentbarseries_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPercentBarSeries* self ```
int32_t q_percentbarseries_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPercentBarSeries* self, int32_t (*slot)() ```
void q_percentbarseries_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPercentBarSeries* self, const char* signal ```
int32_t q_percentbarseries_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPercentBarSeries* self, const char* signal ```
int32_t q_percentbarseries_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPercentBarSeries* self, int32_t (*slot)(QPercentBarSeries*, const char*) ```
void q_percentbarseries_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPercentBarSeries* self, QMetaMethod* signal ```
bool q_percentbarseries_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPercentBarSeries* self, QMetaMethod* signal ```
bool q_percentbarseries_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPercentBarSeries* self, bool (*slot)(QPercentBarSeries*, QMetaMethod*) ```
void q_percentbarseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QPercentBarSeries* self, void (*slot)(QPercentBarSeries*, const char*) ```
void q_percentbarseries_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpercentbarseries-qtcharts.html#dtor.QPercentBarSeries)
///
/// Delete this object from C++ memory.
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_delete(void* self);

#endif
