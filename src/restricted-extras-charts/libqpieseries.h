#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQPIESERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQPIESERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qpieseries-qtcharts.html

/// q_pieseries_new constructs a new QPieSeries object.
///
///
QPieSeries* q_pieseries_new();

/// q_pieseries_new2 constructs a new QPieSeries object.
///
/// ``` QObject* parent ```
QPieSeries* q_pieseries_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPieSeries* self ```
const QMetaObject* q_pieseries_meta_object(void* self);

/// ``` QPieSeries* self, const char* param1 ```
void* q_pieseries_metacast(void* self, const char* param1);

/// ``` QPieSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pieseries_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QPieSeries* self, int32_t (*slot)(QPieSeries*, enum QMetaObject__Call, int, void*) ```
void q_pieseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QPieSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pieseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_pieseries_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#type)
///
/// ``` QPieSeries* self ```
int64_t q_pieseries_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#type)
///
/// Allows for overriding the related default method
///
/// ``` QPieSeries* self, int64_t (*slot)() ```
void q_pieseries_on_type(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#type)
///
/// Base class method implementation
///
/// ``` QPieSeries* self ```
int64_t q_pieseries_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#append)
///
/// ``` QPieSeries* self, QPieSlice* slice ```
bool q_pieseries_append(void* self, void* slice);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#append)
///
/// ``` QPieSeries* self, libqt_list /* of QPieSlice* */ slices ```
bool q_pieseries_append2(void* self, libqt_list slices);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#operator-lt-lt)
///
/// ``` QPieSeries* self, QPieSlice* slice ```
QPieSeries* q_pieseries_operator_shift_left(void* self, void* slice);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#append)
///
/// ``` QPieSeries* self, const char* label, double value ```
QPieSlice* q_pieseries_append3(void* self, const char* label, double value);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#insert)
///
/// ``` QPieSeries* self, int index, QPieSlice* slice ```
bool q_pieseries_insert(void* self, int index, void* slice);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#remove)
///
/// ``` QPieSeries* self, QPieSlice* slice ```
bool q_pieseries_remove(void* self, void* slice);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#take)
///
/// ``` QPieSeries* self, QPieSlice* slice ```
bool q_pieseries_take(void* self, void* slice);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#clear)
///
/// ``` QPieSeries* self ```
void q_pieseries_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#slices)
///
/// ``` QPieSeries* self ```
libqt_list /* of QPieSlice* */ q_pieseries_slices(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#count)
///
/// ``` QPieSeries* self ```
int32_t q_pieseries_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#isEmpty)
///
/// ``` QPieSeries* self ```
bool q_pieseries_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#sum)
///
/// ``` QPieSeries* self ```
double q_pieseries_sum(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#setHoleSize)
///
/// ``` QPieSeries* self, double holeSize ```
void q_pieseries_set_hole_size(void* self, double holeSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#holeSize)
///
/// ``` QPieSeries* self ```
double q_pieseries_hole_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#setHorizontalPosition)
///
/// ``` QPieSeries* self, double relativePosition ```
void q_pieseries_set_horizontal_position(void* self, double relativePosition);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#horizontalPosition)
///
/// ``` QPieSeries* self ```
double q_pieseries_horizontal_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#setVerticalPosition)
///
/// ``` QPieSeries* self, double relativePosition ```
void q_pieseries_set_vertical_position(void* self, double relativePosition);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#verticalPosition)
///
/// ``` QPieSeries* self ```
double q_pieseries_vertical_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#setPieSize)
///
/// ``` QPieSeries* self, double relativeSize ```
void q_pieseries_set_pie_size(void* self, double relativeSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#pieSize)
///
/// ``` QPieSeries* self ```
double q_pieseries_pie_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#setPieStartAngle)
///
/// ``` QPieSeries* self, double startAngle ```
void q_pieseries_set_pie_start_angle(void* self, double startAngle);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#pieStartAngle)
///
/// ``` QPieSeries* self ```
double q_pieseries_pie_start_angle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#setPieEndAngle)
///
/// ``` QPieSeries* self, double endAngle ```
void q_pieseries_set_pie_end_angle(void* self, double endAngle);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#pieEndAngle)
///
/// ``` QPieSeries* self ```
double q_pieseries_pie_end_angle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#setLabelsVisible)
///
/// ``` QPieSeries* self ```
void q_pieseries_set_labels_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#setLabelsPosition)
///
/// ``` QPieSeries* self, enum QPieSlice__LabelPosition position ```
void q_pieseries_set_labels_position(void* self, int64_t position);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#added)
///
/// ``` QPieSeries* self, libqt_list /* of QPieSlice* */ slices ```
void q_pieseries_added(void* self, libqt_list slices);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#added)
///
/// ``` QPieSeries* self, void (*slot)(QPieSeries*, libqt_list /* of QPieSlice* */ slices ) ```
void q_pieseries_on_added(void* self, void (*slot)(void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#removed)
///
/// ``` QPieSeries* self, libqt_list /* of QPieSlice* */ slices ```
void q_pieseries_removed(void* self, libqt_list slices);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#removed)
///
/// ``` QPieSeries* self, void (*slot)(QPieSeries*, libqt_list /* of QPieSlice* */ slices ) ```
void q_pieseries_on_removed(void* self, void (*slot)(void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#clicked)
///
/// ``` QPieSeries* self, QPieSlice* slice ```
void q_pieseries_clicked(void* self, void* slice);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#clicked)
///
/// ``` QPieSeries* self, void (*slot)(QPieSeries*, QPieSlice*) ```
void q_pieseries_on_clicked(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#hovered)
///
/// ``` QPieSeries* self, QPieSlice* slice, bool state ```
void q_pieseries_hovered(void* self, void* slice, bool state);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#hovered)
///
/// ``` QPieSeries* self, void (*slot)(QPieSeries*, QPieSlice*, bool) ```
void q_pieseries_on_hovered(void* self, void (*slot)(void*, void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#pressed)
///
/// ``` QPieSeries* self, QPieSlice* slice ```
void q_pieseries_pressed(void* self, void* slice);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#pressed)
///
/// ``` QPieSeries* self, void (*slot)(QPieSeries*, QPieSlice*) ```
void q_pieseries_on_pressed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#released)
///
/// ``` QPieSeries* self, QPieSlice* slice ```
void q_pieseries_released(void* self, void* slice);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#released)
///
/// ``` QPieSeries* self, void (*slot)(QPieSeries*, QPieSlice*) ```
void q_pieseries_on_released(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#doubleClicked)
///
/// ``` QPieSeries* self, QPieSlice* slice ```
void q_pieseries_double_clicked(void* self, void* slice);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#doubleClicked)
///
/// ``` QPieSeries* self, void (*slot)(QPieSeries*, QPieSlice*) ```
void q_pieseries_on_double_clicked(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#countChanged)
///
/// ``` QPieSeries* self ```
void q_pieseries_count_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#countChanged)
///
/// ``` QPieSeries* self, void (*slot)(QPieSeries*) ```
void q_pieseries_on_count_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#sumChanged)
///
/// ``` QPieSeries* self ```
void q_pieseries_sum_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#sumChanged)
///
/// ``` QPieSeries* self, void (*slot)(QPieSeries*) ```
void q_pieseries_on_sum_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_pieseries_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_pieseries_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#setLabelsVisible)
///
/// ``` QPieSeries* self, bool visible ```
void q_pieseries_set_labels_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// ``` QPieSeries* self, const char* name ```
void q_pieseries_set_name(void* self, const char* name);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// ``` QPieSeries* self ```
const char* q_pieseries_name(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QPieSeries* self ```
void q_pieseries_set_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// ``` QPieSeries* self ```
bool q_pieseries_is_visible(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// ``` QPieSeries* self ```
double q_pieseries_opacity(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// ``` QPieSeries* self, double opacity ```
void q_pieseries_set_opacity(void* self, double opacity);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QPieSeries* self ```
void q_pieseries_set_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// ``` QPieSeries* self ```
bool q_pieseries_use_open_g_l(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// ``` QPieSeries* self ```
QChart* q_pieseries_chart(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// ``` QPieSeries* self, QAbstractAxis* axis ```
bool q_pieseries_attach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// ``` QPieSeries* self, QAbstractAxis* axis ```
bool q_pieseries_detach_axis(void* self, void* axis);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// ``` QPieSeries* self ```
libqt_list /* of QAbstractAxis* */ q_pieseries_attached_axes(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// ``` QPieSeries* self ```
void q_pieseries_show(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// ``` QPieSeries* self ```
void q_pieseries_hide(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QPieSeries* self ```
void q_pieseries_name_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QPieSeries* self, void (*slot)(QAbstractSeries*) ```
void q_pieseries_on_name_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QPieSeries* self ```
void q_pieseries_visible_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QPieSeries* self, void (*slot)(QAbstractSeries*) ```
void q_pieseries_on_visible_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QPieSeries* self ```
void q_pieseries_opacity_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QPieSeries* self, void (*slot)(QAbstractSeries*) ```
void q_pieseries_on_opacity_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QPieSeries* self ```
void q_pieseries_use_open_g_l_changed(void* self);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QPieSeries* self, void (*slot)(QAbstractSeries*) ```
void q_pieseries_on_use_open_g_l_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QPieSeries* self, bool visible ```
void q_pieseries_set_visible1(void* self, bool visible);

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QPieSeries* self, bool enable ```
void q_pieseries_set_use_open_g_l1(void* self, bool enable);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPieSeries* self ```
const char* q_pieseries_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPieSeries* self, char* name ```
void q_pieseries_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPieSeries* self ```
bool q_pieseries_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPieSeries* self ```
bool q_pieseries_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPieSeries* self ```
bool q_pieseries_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPieSeries* self ```
bool q_pieseries_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPieSeries* self, bool b ```
bool q_pieseries_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPieSeries* self ```
QThread* q_pieseries_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPieSeries* self, QThread* thread ```
bool q_pieseries_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPieSeries* self, int interval ```
int32_t q_pieseries_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPieSeries* self, int id ```
void q_pieseries_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPieSeries* self, enum Qt__TimerId id ```
void q_pieseries_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPieSeries* self ```
libqt_list /* of QObject* */ q_pieseries_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QPieSeries* self, QObject* parent ```
void q_pieseries_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPieSeries* self, QObject* filterObj ```
void q_pieseries_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPieSeries* self, QObject* obj ```
void q_pieseries_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_pieseries_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPieSeries* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_pieseries_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_pieseries_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_pieseries_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPieSeries* self ```
void q_pieseries_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPieSeries* self ```
void q_pieseries_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPieSeries* self, const char* name, QVariant* value ```
bool q_pieseries_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPieSeries* self, const char* name ```
QVariant* q_pieseries_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPieSeries* self ```
const char** q_pieseries_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPieSeries* self ```
QBindingStorage* q_pieseries_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPieSeries* self ```
const QBindingStorage* q_pieseries_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPieSeries* self ```
void q_pieseries_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPieSeries* self, void (*slot)(QObject*) ```
void q_pieseries_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPieSeries* self ```
QObject* q_pieseries_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPieSeries* self, const char* classname ```
bool q_pieseries_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPieSeries* self ```
void q_pieseries_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPieSeries* self, QThread* thread, Disambiguated_t* param2 ```
bool q_pieseries_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPieSeries* self, int interval, enum Qt__TimerType timerType ```
int32_t q_pieseries_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pieseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPieSeries* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pieseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPieSeries* self, QObject* param1 ```
void q_pieseries_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPieSeries* self, void (*slot)(QObject*, QObject*) ```
void q_pieseries_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSeries* self, QEvent* event ```
bool q_pieseries_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSeries* self, QEvent* event ```
bool q_pieseries_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSeries* self, bool (*slot)(QPieSeries*, QEvent*) ```
void q_pieseries_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSeries* self, QObject* watched, QEvent* event ```
bool q_pieseries_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSeries* self, QObject* watched, QEvent* event ```
bool q_pieseries_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSeries* self, bool (*slot)(QPieSeries*, QObject*, QEvent*) ```
void q_pieseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSeries* self, QTimerEvent* event ```
void q_pieseries_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSeries* self, QTimerEvent* event ```
void q_pieseries_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSeries* self, void (*slot)(QPieSeries*, QTimerEvent*) ```
void q_pieseries_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSeries* self, QChildEvent* event ```
void q_pieseries_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSeries* self, QChildEvent* event ```
void q_pieseries_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSeries* self, void (*slot)(QPieSeries*, QChildEvent*) ```
void q_pieseries_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSeries* self, QEvent* event ```
void q_pieseries_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSeries* self, QEvent* event ```
void q_pieseries_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSeries* self, void (*slot)(QPieSeries*, QEvent*) ```
void q_pieseries_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSeries* self, QMetaMethod* signal ```
void q_pieseries_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSeries* self, QMetaMethod* signal ```
void q_pieseries_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSeries* self, void (*slot)(QPieSeries*, QMetaMethod*) ```
void q_pieseries_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSeries* self, QMetaMethod* signal ```
void q_pieseries_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSeries* self, QMetaMethod* signal ```
void q_pieseries_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSeries* self, void (*slot)(QPieSeries*, QMetaMethod*) ```
void q_pieseries_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSeries* self ```
QObject* q_pieseries_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSeries* self ```
QObject* q_pieseries_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSeries* self, QObject* (*slot)() ```
void q_pieseries_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSeries* self ```
int32_t q_pieseries_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSeries* self ```
int32_t q_pieseries_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSeries* self, int32_t (*slot)() ```
void q_pieseries_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSeries* self, const char* signal ```
int32_t q_pieseries_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSeries* self, const char* signal ```
int32_t q_pieseries_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSeries* self, int32_t (*slot)(QPieSeries*, const char*) ```
void q_pieseries_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPieSeries* self, QMetaMethod* signal ```
bool q_pieseries_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPieSeries* self, QMetaMethod* signal ```
bool q_pieseries_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPieSeries* self, bool (*slot)(QPieSeries*, QMetaMethod*) ```
void q_pieseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QPieSeries* self, void (*slot)(QObject*, const char*) ```
void q_pieseries_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpieseries-qtcharts.html#dtor.QPieSeries)
///
/// Delete this object from C++ memory.
///
/// ``` QPieSeries* self ```
void q_pieseries_delete(void* self);

#endif
