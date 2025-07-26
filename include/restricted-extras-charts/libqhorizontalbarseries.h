#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQHORIZONTALBARSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQHORIZONTALBARSERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qhorizontalbarseries-qtcharts.html

/// q_horizontalbarseries_new constructs a new QHorizontalBarSeries object.
///
///
QHorizontalBarSeries* q_horizontalbarseries_new();

/// q_horizontalbarseries_new2 constructs a new QHorizontalBarSeries object.
///
/// ``` QObject* parent ```
QHorizontalBarSeries* q_horizontalbarseries_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QHorizontalBarSeries* self ```
const QMetaObject* q_horizontalbarseries_meta_object(void* self);

/// ``` QHorizontalBarSeries* self, const char* param1 ```
void* q_horizontalbarseries_metacast(void* self, const char* param1);

/// ``` QHorizontalBarSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_horizontalbarseries_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QHorizontalBarSeries* self, int32_t (*slot)(QHorizontalBarSeries*, enum QMetaObject__Call, int, void*) ```
void q_horizontalbarseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QHorizontalBarSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_horizontalbarseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_horizontalbarseries_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qhorizontalbarseries-qtcharts.html#type)
///
/// ``` QHorizontalBarSeries* self ```
int64_t q_horizontalbarseries_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhorizontalbarseries-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// ``` QHorizontalBarSeries* self, int64_t (*slot)() ```
void q_horizontalbarseries_on_type(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qhorizontalbarseries-qtcharts.html#type)
///
/// Base class method implementation
///
/// ``` QHorizontalBarSeries* self ```
int64_t q_horizontalbarseries_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_horizontalbarseries_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_horizontalbarseries_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setBarWidth)
///
/// ``` QHorizontalBarSeries* self, double width ```
void q_horizontalbarseries_set_bar_width(void* self, double width);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barWidth)
///
/// ``` QHorizontalBarSeries* self ```
double q_horizontalbarseries_bar_width(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
///
/// ``` QHorizontalBarSeries* self, QBarSet* set ```
bool q_horizontalbarseries_append(void* self, void* set);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#remove)
///
/// ``` QHorizontalBarSeries* self, QBarSet* set ```
bool q_horizontalbarseries_remove(void* self, void* set);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#take)
///
/// ``` QHorizontalBarSeries* self, QBarSet* set ```
bool q_horizontalbarseries_take(void* self, void* set);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
///
/// ``` QHorizontalBarSeries* self, libqt_list /* of QBarSet* */ sets ```
bool q_horizontalbarseries_append2(void* self, libqt_list sets);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#insert)
///
/// ``` QHorizontalBarSeries* self, int index, QBarSet* set ```
bool q_horizontalbarseries_insert(void* self, int index, void* set);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#count)
///
/// ``` QHorizontalBarSeries* self ```
int32_t q_horizontalbarseries_count(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barSets)
///
/// ``` QHorizontalBarSeries* self ```
libqt_list /* of QBarSet* */ q_horizontalbarseries_bar_sets(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#clear)
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_clear(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_set_labels_visible(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#isLabelsVisible)
///
/// ``` QHorizontalBarSeries* self ```
bool q_horizontalbarseries_is_labels_visible(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsFormat)
///
/// ``` QHorizontalBarSeries* self, const char* format ```
void q_horizontalbarseries_set_labels_format(void* self, const char* format);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormat)
///
/// ``` QHorizontalBarSeries* self ```
const char* q_horizontalbarseries_labels_format(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsAngle)
///
/// ``` QHorizontalBarSeries* self, double angle ```
void q_horizontalbarseries_set_labels_angle(void* self, double angle);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngle)
///
/// ``` QHorizontalBarSeries* self ```
double q_horizontalbarseries_labels_angle(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPosition)
///
/// ``` QHorizontalBarSeries* self, enum QAbstractBarSeries__LabelsPosition position ```
void q_horizontalbarseries_set_labels_position(void* self, int64_t position);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPosition)
///
/// ``` QHorizontalBarSeries* self ```
int64_t q_horizontalbarseries_labels_position(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPrecision)
///
/// ``` QHorizontalBarSeries* self, int precision ```
void q_horizontalbarseries_set_labels_precision(void* self, int precision);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecision)
///
/// ``` QHorizontalBarSeries* self ```
int32_t q_horizontalbarseries_labels_precision(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#clicked)
///
/// ``` QHorizontalBarSeries* self, int index, QBarSet* barset ```
void q_horizontalbarseries_clicked(void* self, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#clicked)
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QHorizontalBarSeries*, int, QBarSet*) ```
void q_horizontalbarseries_on_clicked(void* self, void (*slot)(void*, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#hovered)
///
/// ``` QHorizontalBarSeries* self, bool status, int index, QBarSet* barset ```
void q_horizontalbarseries_hovered(void* self, bool status, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#hovered)
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QHorizontalBarSeries*, bool, int, QBarSet*) ```
void q_horizontalbarseries_on_hovered(void* self, void (*slot)(void*, bool, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#pressed)
///
/// ``` QHorizontalBarSeries* self, int index, QBarSet* barset ```
void q_horizontalbarseries_pressed(void* self, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#pressed)
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QHorizontalBarSeries*, int, QBarSet*) ```
void q_horizontalbarseries_on_pressed(void* self, void (*slot)(void*, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#released)
///
/// ``` QHorizontalBarSeries* self, int index, QBarSet* barset ```
void q_horizontalbarseries_released(void* self, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#released)
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QHorizontalBarSeries*, int, QBarSet*) ```
void q_horizontalbarseries_on_released(void* self, void (*slot)(void*, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#doubleClicked)
///
/// ``` QHorizontalBarSeries* self, int index, QBarSet* barset ```
void q_horizontalbarseries_double_clicked(void* self, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#doubleClicked)
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QHorizontalBarSeries*, int, QBarSet*) ```
void q_horizontalbarseries_on_double_clicked(void* self, void (*slot)(void*, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#countChanged)
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_count_changed(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#countChanged)
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QHorizontalBarSeries*) ```
void q_horizontalbarseries_on_count_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsVisibleChanged)
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_labels_visible_changed(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsVisibleChanged)
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QHorizontalBarSeries*) ```
void q_horizontalbarseries_on_labels_visible_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormatChanged)
///
/// ``` QHorizontalBarSeries* self, const char* format ```
void q_horizontalbarseries_labels_format_changed(void* self, const char* format);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormatChanged)
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QHorizontalBarSeries*, const char*) ```
void q_horizontalbarseries_on_labels_format_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPositionChanged)
///
/// ``` QHorizontalBarSeries* self, enum QAbstractBarSeries__LabelsPosition position ```
void q_horizontalbarseries_labels_position_changed(void* self, int64_t position);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPositionChanged)
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QHorizontalBarSeries*, enum QAbstractBarSeries__LabelsPosition) ```
void q_horizontalbarseries_on_labels_position_changed(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngleChanged)
///
/// ``` QHorizontalBarSeries* self, double angle ```
void q_horizontalbarseries_labels_angle_changed(void* self, double angle);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngleChanged)
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QHorizontalBarSeries*, double) ```
void q_horizontalbarseries_on_labels_angle_changed(void* self, void (*slot)(void*, double));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecisionChanged)
///
/// ``` QHorizontalBarSeries* self, int precision ```
void q_horizontalbarseries_labels_precision_changed(void* self, int precision);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecisionChanged)
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QHorizontalBarSeries*, int) ```
void q_horizontalbarseries_on_labels_precision_changed(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsAdded)
///
/// ``` QHorizontalBarSeries* self, libqt_list /* of QBarSet* */ sets ```
void q_horizontalbarseries_barsets_added(void* self, libqt_list sets);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsAdded)
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QHorizontalBarSeries*, libqt_list /* of QBarSet* */ sets ) ```
void q_horizontalbarseries_on_barsets_added(void* self, void (*slot)(void*, libqt_list));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsRemoved)
///
/// ``` QHorizontalBarSeries* self, libqt_list /* of QBarSet* */ sets ```
void q_horizontalbarseries_barsets_removed(void* self, libqt_list sets);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsRemoved)
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QHorizontalBarSeries*, libqt_list /* of QBarSet* */ sets ) ```
void q_horizontalbarseries_on_barsets_removed(void* self, void (*slot)(void*, libqt_list));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
///
/// ``` QHorizontalBarSeries* self, bool visible ```
void q_horizontalbarseries_set_labels_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// ``` QHorizontalBarSeries* self, const char* name ```
void q_horizontalbarseries_set_name(void* self, const char* name);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// ``` QHorizontalBarSeries* self ```
const char* q_horizontalbarseries_name(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_set_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// ``` QHorizontalBarSeries* self ```
bool q_horizontalbarseries_is_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// ``` QHorizontalBarSeries* self ```
double q_horizontalbarseries_opacity(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// ``` QHorizontalBarSeries* self, double opacity ```
void q_horizontalbarseries_set_opacity(void* self, double opacity);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_set_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// ``` QHorizontalBarSeries* self ```
bool q_horizontalbarseries_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// ``` QHorizontalBarSeries* self ```
QChart* q_horizontalbarseries_chart(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// ``` QHorizontalBarSeries* self, QAbstractAxis* axis ```
bool q_horizontalbarseries_attach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// ``` QHorizontalBarSeries* self, QAbstractAxis* axis ```
bool q_horizontalbarseries_detach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// ``` QHorizontalBarSeries* self ```
libqt_list /* of QAbstractAxis* */ q_horizontalbarseries_attached_axes(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_show(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_hide(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_name_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QHorizontalBarSeries*) ```
void q_horizontalbarseries_on_name_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_visible_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QHorizontalBarSeries*) ```
void q_horizontalbarseries_on_visible_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_opacity_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QHorizontalBarSeries*) ```
void q_horizontalbarseries_on_opacity_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_use_open_g_l_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QHorizontalBarSeries*) ```
void q_horizontalbarseries_on_use_open_g_l_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QHorizontalBarSeries* self, bool visible ```
void q_horizontalbarseries_set_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QHorizontalBarSeries* self, bool enable ```
void q_horizontalbarseries_set_use_open_g_l1(void* self, bool enable);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QHorizontalBarSeries* self ```
const char* q_horizontalbarseries_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QHorizontalBarSeries* self, char* name ```
void q_horizontalbarseries_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QHorizontalBarSeries* self ```
bool q_horizontalbarseries_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QHorizontalBarSeries* self ```
bool q_horizontalbarseries_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QHorizontalBarSeries* self ```
bool q_horizontalbarseries_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QHorizontalBarSeries* self ```
bool q_horizontalbarseries_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QHorizontalBarSeries* self, bool b ```
bool q_horizontalbarseries_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QHorizontalBarSeries* self ```
QThread* q_horizontalbarseries_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QHorizontalBarSeries* self, QThread* thread ```
bool q_horizontalbarseries_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHorizontalBarSeries* self, int interval ```
int32_t q_horizontalbarseries_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QHorizontalBarSeries* self, int id ```
void q_horizontalbarseries_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QHorizontalBarSeries* self, enum Qt__TimerId id ```
void q_horizontalbarseries_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QHorizontalBarSeries* self ```
libqt_list /* of QObject* */ q_horizontalbarseries_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QHorizontalBarSeries* self, QObject* parent ```
void q_horizontalbarseries_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QHorizontalBarSeries* self, QObject* filterObj ```
void q_horizontalbarseries_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QHorizontalBarSeries* self, QObject* obj ```
void q_horizontalbarseries_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_horizontalbarseries_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHorizontalBarSeries* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_horizontalbarseries_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_horizontalbarseries_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_horizontalbarseries_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QHorizontalBarSeries* self, const char* name, QVariant* value ```
bool q_horizontalbarseries_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QHorizontalBarSeries* self, const char* name ```
QVariant* q_horizontalbarseries_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QHorizontalBarSeries* self ```
const char** q_horizontalbarseries_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QHorizontalBarSeries* self ```
QBindingStorage* q_horizontalbarseries_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QHorizontalBarSeries* self ```
const QBindingStorage* q_horizontalbarseries_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QHorizontalBarSeries*) ```
void q_horizontalbarseries_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QHorizontalBarSeries* self ```
QObject* q_horizontalbarseries_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QHorizontalBarSeries* self, const char* classname ```
bool q_horizontalbarseries_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QHorizontalBarSeries* self, QThread* thread, Disambiguated_t* param2 ```
bool q_horizontalbarseries_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHorizontalBarSeries* self, int interval, enum Qt__TimerType timerType ```
int32_t q_horizontalbarseries_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_horizontalbarseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHorizontalBarSeries* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_horizontalbarseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHorizontalBarSeries* self, QObject* param1 ```
void q_horizontalbarseries_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QHorizontalBarSeries*, QObject*) ```
void q_horizontalbarseries_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QEvent* event ```
bool q_horizontalbarseries_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QEvent* event ```
bool q_horizontalbarseries_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, bool (*slot)(QHorizontalBarSeries*, QEvent*) ```
void q_horizontalbarseries_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QObject* watched, QEvent* event ```
bool q_horizontalbarseries_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QObject* watched, QEvent* event ```
bool q_horizontalbarseries_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, bool (*slot)(QHorizontalBarSeries*, QObject*, QEvent*) ```
void q_horizontalbarseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QTimerEvent* event ```
void q_horizontalbarseries_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QTimerEvent* event ```
void q_horizontalbarseries_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QHorizontalBarSeries*, QTimerEvent*) ```
void q_horizontalbarseries_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QChildEvent* event ```
void q_horizontalbarseries_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QChildEvent* event ```
void q_horizontalbarseries_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QHorizontalBarSeries*, QChildEvent*) ```
void q_horizontalbarseries_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QEvent* event ```
void q_horizontalbarseries_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QEvent* event ```
void q_horizontalbarseries_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QHorizontalBarSeries*, QEvent*) ```
void q_horizontalbarseries_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QMetaMethod* signal ```
void q_horizontalbarseries_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QMetaMethod* signal ```
void q_horizontalbarseries_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QHorizontalBarSeries*, QMetaMethod*) ```
void q_horizontalbarseries_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QMetaMethod* signal ```
void q_horizontalbarseries_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QMetaMethod* signal ```
void q_horizontalbarseries_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QHorizontalBarSeries*, QMetaMethod*) ```
void q_horizontalbarseries_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalBarSeries* self ```
QObject* q_horizontalbarseries_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self ```
QObject* q_horizontalbarseries_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QObject* (*slot)() ```
void q_horizontalbarseries_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalBarSeries* self ```
int32_t q_horizontalbarseries_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self ```
int32_t q_horizontalbarseries_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, int32_t (*slot)() ```
void q_horizontalbarseries_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalBarSeries* self, const char* signal ```
int32_t q_horizontalbarseries_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, const char* signal ```
int32_t q_horizontalbarseries_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, int32_t (*slot)(QHorizontalBarSeries*, const char*) ```
void q_horizontalbarseries_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QMetaMethod* signal ```
bool q_horizontalbarseries_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QMetaMethod* signal ```
bool q_horizontalbarseries_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, bool (*slot)(QHorizontalBarSeries*, QMetaMethod*) ```
void q_horizontalbarseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QHorizontalBarSeries*, const char*) ```
void q_horizontalbarseries_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qhorizontalbarseries-qtcharts.html#dtor.QHorizontalBarSeries)
///
/// Delete this object from C++ memory.
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_delete(void* self);

#endif
