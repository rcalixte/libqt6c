#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQHORIZONTALSTACKEDBARSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQHORIZONTALSTACKEDBARSERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqabstractaxis.h"
#include "libqabstractbarseries.h"
#include "libqabstractseries.h"
#include "../libqanystringview.h"
#include "libqbarset.h"
#include "../libqbindingstorage.h"
#include "libqchart.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

/// https://doc.qt.io/qt-6/qhorizontalstackedbarseries.html

/// q_horizontalstackedbarseries_new constructs a new QHorizontalStackedBarSeries object.
///
///
QHorizontalStackedBarSeries* q_horizontalstackedbarseries_new();

/// q_horizontalstackedbarseries_new2 constructs a new QHorizontalStackedBarSeries object.
///
/// ``` QObject* parent ```
QHorizontalStackedBarSeries* q_horizontalstackedbarseries_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QHorizontalStackedBarSeries* self ```
QMetaObject* q_horizontalstackedbarseries_meta_object(void* self);

/// ``` QHorizontalStackedBarSeries* self, const char* param1 ```
void* q_horizontalstackedbarseries_metacast(void* self, const char* param1);

/// ``` QHorizontalStackedBarSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_horizontalstackedbarseries_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QHorizontalStackedBarSeries* self, int32_t (*slot)(QHorizontalStackedBarSeries*, enum QMetaObject__Call, int, void*) ```
void q_horizontalstackedbarseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QHorizontalStackedBarSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_horizontalstackedbarseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_horizontalstackedbarseries_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qhorizontalstackedbarseries.html#type)
///
/// ``` QHorizontalStackedBarSeries* self ```
int64_t q_horizontalstackedbarseries_type(void* self);

/// Allows for overriding the related default method
///
/// ``` QHorizontalStackedBarSeries* self, int64_t (*slot)() ```
void q_horizontalstackedbarseries_on_type(void* self, int64_t (*slot)());

/// Base class method implementation
///
/// ``` QHorizontalStackedBarSeries* self ```
int64_t q_horizontalstackedbarseries_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_horizontalstackedbarseries_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_horizontalstackedbarseries_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setBarWidth)
///
/// ``` QHorizontalStackedBarSeries* self, double width ```
void q_horizontalstackedbarseries_set_bar_width(void* self, double width);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barWidth)
///
/// ``` QHorizontalStackedBarSeries* self ```
double q_horizontalstackedbarseries_bar_width(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
///
/// ``` QHorizontalStackedBarSeries* self, QBarSet* set ```
bool q_horizontalstackedbarseries_append(void* self, void* set);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#remove)
///
/// ``` QHorizontalStackedBarSeries* self, QBarSet* set ```
bool q_horizontalstackedbarseries_remove(void* self, void* set);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#take)
///
/// ``` QHorizontalStackedBarSeries* self, QBarSet* set ```
bool q_horizontalstackedbarseries_take(void* self, void* set);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
///
/// ``` QHorizontalStackedBarSeries* self, QBarSet* sets[] ```
bool q_horizontalstackedbarseries_append_with_sets(void* self, void* sets[]);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#insert)
///
/// ``` QHorizontalStackedBarSeries* self, int index, QBarSet* set ```
bool q_horizontalstackedbarseries_insert(void* self, int index, void* set);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#count)
///
/// ``` QHorizontalStackedBarSeries* self ```
int32_t q_horizontalstackedbarseries_count(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barSets)
///
/// ``` QHorizontalStackedBarSeries* self ```
libqt_list /* of QBarSet* */ q_horizontalstackedbarseries_bar_sets(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#clear)
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_clear(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_set_labels_visible(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#isLabelsVisible)
///
/// ``` QHorizontalStackedBarSeries* self ```
bool q_horizontalstackedbarseries_is_labels_visible(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsFormat)
///
/// ``` QHorizontalStackedBarSeries* self, const char* format ```
void q_horizontalstackedbarseries_set_labels_format(void* self, const char* format);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormat)
///
/// ``` QHorizontalStackedBarSeries* self ```
const char* q_horizontalstackedbarseries_labels_format(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsAngle)
///
/// ``` QHorizontalStackedBarSeries* self, double angle ```
void q_horizontalstackedbarseries_set_labels_angle(void* self, double angle);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngle)
///
/// ``` QHorizontalStackedBarSeries* self ```
double q_horizontalstackedbarseries_labels_angle(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPosition)
///
/// ``` QHorizontalStackedBarSeries* self, enum QAbstractBarSeries__LabelsPosition position ```
void q_horizontalstackedbarseries_set_labels_position(void* self, int64_t position);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPosition)
///
/// ``` QHorizontalStackedBarSeries* self ```
int64_t q_horizontalstackedbarseries_labels_position(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPrecision)
///
/// ``` QHorizontalStackedBarSeries* self, int precision ```
void q_horizontalstackedbarseries_set_labels_precision(void* self, int precision);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecision)
///
/// ``` QHorizontalStackedBarSeries* self ```
int32_t q_horizontalstackedbarseries_labels_precision(void* self);

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#clicked)
///
/// ``` QHorizontalStackedBarSeries* self, int index, QBarSet* barset ```
void q_horizontalstackedbarseries_clicked(void* self, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, int, QBarSet*) ```
void q_horizontalstackedbarseries_on_clicked(void* self, void (*slot)(void*, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#hovered)
///
/// ``` QHorizontalStackedBarSeries* self, bool status, int index, QBarSet* barset ```
void q_horizontalstackedbarseries_hovered(void* self, bool status, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, bool, int, QBarSet*) ```
void q_horizontalstackedbarseries_on_hovered(void* self, void (*slot)(void*, bool, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#pressed)
///
/// ``` QHorizontalStackedBarSeries* self, int index, QBarSet* barset ```
void q_horizontalstackedbarseries_pressed(void* self, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, int, QBarSet*) ```
void q_horizontalstackedbarseries_on_pressed(void* self, void (*slot)(void*, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#released)
///
/// ``` QHorizontalStackedBarSeries* self, int index, QBarSet* barset ```
void q_horizontalstackedbarseries_released(void* self, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, int, QBarSet*) ```
void q_horizontalstackedbarseries_on_released(void* self, void (*slot)(void*, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#doubleClicked)
///
/// ``` QHorizontalStackedBarSeries* self, int index, QBarSet* barset ```
void q_horizontalstackedbarseries_double_clicked(void* self, int index, void* barset);

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, int, QBarSet*) ```
void q_horizontalstackedbarseries_on_double_clicked(void* self, void (*slot)(void*, int, void*));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#countChanged)
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_count_changed(void* self);

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractBarSeries*) ```
void q_horizontalstackedbarseries_on_count_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsVisibleChanged)
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_labels_visible_changed(void* self);

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractBarSeries*) ```
void q_horizontalstackedbarseries_on_labels_visible_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormatChanged)
///
/// ``` QHorizontalStackedBarSeries* self, const char* format ```
void q_horizontalstackedbarseries_labels_format_changed(void* self, const char* format);

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, const char*) ```
void q_horizontalstackedbarseries_on_labels_format_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPositionChanged)
///
/// ``` QHorizontalStackedBarSeries* self, enum QAbstractBarSeries__LabelsPosition position ```
void q_horizontalstackedbarseries_labels_position_changed(void* self, int64_t position);

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, enum QAbstractBarSeries__LabelsPosition) ```
void q_horizontalstackedbarseries_on_labels_position_changed(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngleChanged)
///
/// ``` QHorizontalStackedBarSeries* self, double angle ```
void q_horizontalstackedbarseries_labels_angle_changed(void* self, double angle);

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, double) ```
void q_horizontalstackedbarseries_on_labels_angle_changed(void* self, void (*slot)(void*, double));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecisionChanged)
///
/// ``` QHorizontalStackedBarSeries* self, int precision ```
void q_horizontalstackedbarseries_labels_precision_changed(void* self, int precision);

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, int) ```
void q_horizontalstackedbarseries_on_labels_precision_changed(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsAdded)
///
/// ``` QHorizontalStackedBarSeries* self, QBarSet* sets[] ```
void q_horizontalstackedbarseries_barsets_added(void* self, void* sets[]);

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, QBarSet*[]) ```
void q_horizontalstackedbarseries_on_barsets_added(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsRemoved)
///
/// ``` QHorizontalStackedBarSeries* self, QBarSet* sets[] ```
void q_horizontalstackedbarseries_barsets_removed(void* self, void* sets[]);

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, QBarSet*[]) ```
void q_horizontalstackedbarseries_on_barsets_removed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
///
/// ``` QHorizontalStackedBarSeries* self, bool visible ```
void q_horizontalstackedbarseries_set_labels_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// ``` QHorizontalStackedBarSeries* self, const char* name ```
void q_horizontalstackedbarseries_set_name(void* self, const char* name);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// ``` QHorizontalStackedBarSeries* self ```
const char* q_horizontalstackedbarseries_name(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_set_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// ``` QHorizontalStackedBarSeries* self ```
bool q_horizontalstackedbarseries_is_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// ``` QHorizontalStackedBarSeries* self ```
double q_horizontalstackedbarseries_opacity(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// ``` QHorizontalStackedBarSeries* self, double opacity ```
void q_horizontalstackedbarseries_set_opacity(void* self, double opacity);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_set_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// ``` QHorizontalStackedBarSeries* self ```
bool q_horizontalstackedbarseries_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// ``` QHorizontalStackedBarSeries* self ```
QChart* q_horizontalstackedbarseries_chart(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// ``` QHorizontalStackedBarSeries* self, QAbstractAxis* axis ```
bool q_horizontalstackedbarseries_attach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// ``` QHorizontalStackedBarSeries* self, QAbstractAxis* axis ```
bool q_horizontalstackedbarseries_detach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// ``` QHorizontalStackedBarSeries* self ```
libqt_list /* of QAbstractAxis* */ q_horizontalstackedbarseries_attached_axes(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_show(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_hide(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_name_changed(void* self);

/// Inherited from QAbstractSeries
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractSeries*) ```
void q_horizontalstackedbarseries_on_name_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_visible_changed(void* self);

/// Inherited from QAbstractSeries
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractSeries*) ```
void q_horizontalstackedbarseries_on_visible_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_opacity_changed(void* self);

/// Inherited from QAbstractSeries
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractSeries*) ```
void q_horizontalstackedbarseries_on_opacity_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_use_open_g_l_changed(void* self);

/// Inherited from QAbstractSeries
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractSeries*) ```
void q_horizontalstackedbarseries_on_use_open_g_l_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QHorizontalStackedBarSeries* self, bool visible ```
void q_horizontalstackedbarseries_set_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QHorizontalStackedBarSeries* self, bool enable ```
void q_horizontalstackedbarseries_set_use_open_g_l1(void* self, bool enable);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QHorizontalStackedBarSeries* self ```
const char* q_horizontalstackedbarseries_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QHorizontalStackedBarSeries* self, char* name ```
void q_horizontalstackedbarseries_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QHorizontalStackedBarSeries* self ```
bool q_horizontalstackedbarseries_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QHorizontalStackedBarSeries* self ```
bool q_horizontalstackedbarseries_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QHorizontalStackedBarSeries* self ```
bool q_horizontalstackedbarseries_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QHorizontalStackedBarSeries* self ```
bool q_horizontalstackedbarseries_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QHorizontalStackedBarSeries* self, bool b ```
bool q_horizontalstackedbarseries_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QHorizontalStackedBarSeries* self ```
QThread* q_horizontalstackedbarseries_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QHorizontalStackedBarSeries* self, QThread* thread ```
void q_horizontalstackedbarseries_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHorizontalStackedBarSeries* self, int interval ```
int32_t q_horizontalstackedbarseries_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QHorizontalStackedBarSeries* self, int id ```
void q_horizontalstackedbarseries_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QHorizontalStackedBarSeries* self ```
libqt_list /* of QObject* */ q_horizontalstackedbarseries_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QHorizontalStackedBarSeries* self, QObject* parent ```
void q_horizontalstackedbarseries_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QHorizontalStackedBarSeries* self, QObject* filterObj ```
void q_horizontalstackedbarseries_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QHorizontalStackedBarSeries* self, QObject* obj ```
void q_horizontalstackedbarseries_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_horizontalstackedbarseries_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHorizontalStackedBarSeries* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_horizontalstackedbarseries_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_horizontalstackedbarseries_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_horizontalstackedbarseries_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QHorizontalStackedBarSeries* self, const char* name, QVariant* value ```
bool q_horizontalstackedbarseries_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QHorizontalStackedBarSeries* self, const char* name ```
QVariant* q_horizontalstackedbarseries_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QHorizontalStackedBarSeries* self ```
const char** q_horizontalstackedbarseries_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QHorizontalStackedBarSeries* self ```
QBindingStorage* q_horizontalstackedbarseries_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QHorizontalStackedBarSeries* self ```
QBindingStorage* q_horizontalstackedbarseries_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QObject*) ```
void q_horizontalstackedbarseries_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QHorizontalStackedBarSeries* self ```
QObject* q_horizontalstackedbarseries_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QHorizontalStackedBarSeries* self, const char* classname ```
bool q_horizontalstackedbarseries_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHorizontalStackedBarSeries* self, int interval, enum Qt__TimerType timerType ```
int32_t q_horizontalstackedbarseries_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_horizontalstackedbarseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHorizontalStackedBarSeries* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_horizontalstackedbarseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHorizontalStackedBarSeries* self, QObject* param1 ```
void q_horizontalstackedbarseries_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QObject*, QObject*) ```
void q_horizontalstackedbarseries_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QEvent* event ```
bool q_horizontalstackedbarseries_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QEvent* event ```
bool q_horizontalstackedbarseries_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, bool (*slot)(QHorizontalStackedBarSeries*, QEvent*) ```
void q_horizontalstackedbarseries_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QObject* watched, QEvent* event ```
bool q_horizontalstackedbarseries_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QObject* watched, QEvent* event ```
bool q_horizontalstackedbarseries_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, bool (*slot)(QHorizontalStackedBarSeries*, QObject*, QEvent*) ```
void q_horizontalstackedbarseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QTimerEvent* event ```
void q_horizontalstackedbarseries_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QTimerEvent* event ```
void q_horizontalstackedbarseries_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QHorizontalStackedBarSeries*, QTimerEvent*) ```
void q_horizontalstackedbarseries_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QChildEvent* event ```
void q_horizontalstackedbarseries_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QChildEvent* event ```
void q_horizontalstackedbarseries_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QHorizontalStackedBarSeries*, QChildEvent*) ```
void q_horizontalstackedbarseries_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QEvent* event ```
void q_horizontalstackedbarseries_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QEvent* event ```
void q_horizontalstackedbarseries_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QHorizontalStackedBarSeries*, QEvent*) ```
void q_horizontalstackedbarseries_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QMetaMethod* signal ```
void q_horizontalstackedbarseries_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QMetaMethod* signal ```
void q_horizontalstackedbarseries_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QHorizontalStackedBarSeries*, QMetaMethod*) ```
void q_horizontalstackedbarseries_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QMetaMethod* signal ```
void q_horizontalstackedbarseries_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QMetaMethod* signal ```
void q_horizontalstackedbarseries_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QHorizontalStackedBarSeries*, QMetaMethod*) ```
void q_horizontalstackedbarseries_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self ```
QObject* q_horizontalstackedbarseries_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self ```
QObject* q_horizontalstackedbarseries_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QObject* (*slot)() ```
void q_horizontalstackedbarseries_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self ```
int32_t q_horizontalstackedbarseries_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self ```
int32_t q_horizontalstackedbarseries_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, int32_t (*slot)() ```
void q_horizontalstackedbarseries_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, const char* signal ```
int32_t q_horizontalstackedbarseries_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, const char* signal ```
int32_t q_horizontalstackedbarseries_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, int32_t (*slot)(QHorizontalStackedBarSeries*, const char*) ```
void q_horizontalstackedbarseries_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QMetaMethod* signal ```
bool q_horizontalstackedbarseries_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QMetaMethod* signal ```
bool q_horizontalstackedbarseries_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, bool (*slot)(QHorizontalStackedBarSeries*, QMetaMethod*) ```
void q_horizontalstackedbarseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_delete(void* self);

#endif
