#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQBOXSET_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQBOXSET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qboxset-qtcharts.html

/// q_boxset_new constructs a new QBoxSet object.
///
///
QBoxSet* q_boxset_new();

/// q_boxset_new2 constructs a new QBoxSet object.
///
/// ``` double le, double lq, double m, double uq, double ue ```
QBoxSet* q_boxset_new2(double le, double lq, double m, double uq, double ue);

/// q_boxset_new3 constructs a new QBoxSet object.
///
/// ``` const char* label ```
QBoxSet* q_boxset_new3(const char* label);

/// q_boxset_new4 constructs a new QBoxSet object.
///
/// ``` const char* label, QObject* parent ```
QBoxSet* q_boxset_new4(const char* label, void* parent);

/// q_boxset_new5 constructs a new QBoxSet object.
///
/// ``` double le, double lq, double m, double uq, double ue, const char* label ```
QBoxSet* q_boxset_new5(double le, double lq, double m, double uq, double ue, const char* label);

/// q_boxset_new6 constructs a new QBoxSet object.
///
/// ``` double le, double lq, double m, double uq, double ue, const char* label, QObject* parent ```
QBoxSet* q_boxset_new6(double le, double lq, double m, double uq, double ue, const char* label, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QBoxSet* self ```
const QMetaObject* q_boxset_meta_object(void* self);

/// ``` QBoxSet* self, const char* param1 ```
void* q_boxset_metacast(void* self, const char* param1);

/// ``` QBoxSet* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_boxset_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QBoxSet* self, int32_t (*slot)(QBoxSet*, enum QMetaObject__Call, int, void*) ```
void q_boxset_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QBoxSet* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_boxset_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_boxset_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#append)
///
/// ``` QBoxSet* self, double value ```
void q_boxset_append(void* self, double value);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#append)
///
/// ``` QBoxSet* self, libqt_list /* of double */ values ```
void q_boxset_append_with_values(void* self, libqt_list values);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#clear)
///
/// ``` QBoxSet* self ```
void q_boxset_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#setLabel)
///
/// ``` QBoxSet* self, const char* label ```
void q_boxset_set_label(void* self, const char* label);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#label)
///
/// ``` QBoxSet* self ```
const char* q_boxset_label(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#operator<<)
///
/// ``` QBoxSet* self, double* value ```
QBoxSet* q_boxset_operator_shift_left(void* self, double* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#setValue)
///
/// ``` QBoxSet* self, int index, double value ```
void q_boxset_set_value(void* self, int index, double value);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#at)
///
/// ``` QBoxSet* self, int index ```
double q_boxset_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#operator[])
///
/// ``` QBoxSet* self, int index ```
double q_boxset_operator_subscript(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#count)
///
/// ``` QBoxSet* self ```
int32_t q_boxset_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#setPen)
///
/// ``` QBoxSet* self, QPen* pen ```
void q_boxset_set_pen(void* self, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#pen)
///
/// ``` QBoxSet* self ```
QPen* q_boxset_pen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#setBrush)
///
/// ``` QBoxSet* self, QBrush* brush ```
void q_boxset_set_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#brush)
///
/// ``` QBoxSet* self ```
QBrush* q_boxset_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#clicked)
///
/// ``` QBoxSet* self ```
void q_boxset_clicked(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#clicked)
///
/// ``` QBoxSet* self, void (*slot)(QBoxSet*) ```
void q_boxset_on_clicked(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#hovered)
///
/// ``` QBoxSet* self, bool status ```
void q_boxset_hovered(void* self, bool status);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#hovered)
///
/// ``` QBoxSet* self, void (*slot)(QBoxSet*, bool) ```
void q_boxset_on_hovered(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#pressed)
///
/// ``` QBoxSet* self ```
void q_boxset_pressed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#pressed)
///
/// ``` QBoxSet* self, void (*slot)(QBoxSet*) ```
void q_boxset_on_pressed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#released)
///
/// ``` QBoxSet* self ```
void q_boxset_released(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#released)
///
/// ``` QBoxSet* self, void (*slot)(QBoxSet*) ```
void q_boxset_on_released(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#doubleClicked)
///
/// ``` QBoxSet* self ```
void q_boxset_double_clicked(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#doubleClicked)
///
/// ``` QBoxSet* self, void (*slot)(QBoxSet*) ```
void q_boxset_on_double_clicked(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#penChanged)
///
/// ``` QBoxSet* self ```
void q_boxset_pen_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#penChanged)
///
/// ``` QBoxSet* self, void (*slot)(QBoxSet*) ```
void q_boxset_on_pen_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#brushChanged)
///
/// ``` QBoxSet* self ```
void q_boxset_brush_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#brushChanged)
///
/// ``` QBoxSet* self, void (*slot)(QBoxSet*) ```
void q_boxset_on_brush_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#valuesChanged)
///
/// ``` QBoxSet* self ```
void q_boxset_values_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#valuesChanged)
///
/// ``` QBoxSet* self, void (*slot)(QBoxSet*) ```
void q_boxset_on_values_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#valueChanged)
///
/// ``` QBoxSet* self, int index ```
void q_boxset_value_changed(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#valueChanged)
///
/// ``` QBoxSet* self, void (*slot)(QBoxSet*, int) ```
void q_boxset_on_value_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#cleared)
///
/// ``` QBoxSet* self ```
void q_boxset_cleared(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#cleared)
///
/// ``` QBoxSet* self, void (*slot)(QBoxSet*) ```
void q_boxset_on_cleared(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_boxset_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_boxset_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QBoxSet* self ```
const char* q_boxset_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QBoxSet* self, char* name ```
void q_boxset_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QBoxSet* self ```
bool q_boxset_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QBoxSet* self ```
bool q_boxset_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QBoxSet* self ```
bool q_boxset_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QBoxSet* self ```
bool q_boxset_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QBoxSet* self, bool b ```
bool q_boxset_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QBoxSet* self ```
QThread* q_boxset_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QBoxSet* self, QThread* thread ```
bool q_boxset_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QBoxSet* self, int interval ```
int32_t q_boxset_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QBoxSet* self, int id ```
void q_boxset_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QBoxSet* self, enum Qt__TimerId id ```
void q_boxset_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QBoxSet* self ```
libqt_list /* of QObject* */ q_boxset_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QBoxSet* self, QObject* parent ```
void q_boxset_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QBoxSet* self, QObject* filterObj ```
void q_boxset_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QBoxSet* self, QObject* obj ```
void q_boxset_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_boxset_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QBoxSet* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_boxset_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_boxset_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_boxset_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QBoxSet* self ```
void q_boxset_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QBoxSet* self ```
void q_boxset_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QBoxSet* self, const char* name, QVariant* value ```
bool q_boxset_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QBoxSet* self, const char* name ```
QVariant* q_boxset_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QBoxSet* self ```
const char** q_boxset_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QBoxSet* self ```
QBindingStorage* q_boxset_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QBoxSet* self ```
const QBindingStorage* q_boxset_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBoxSet* self ```
void q_boxset_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBoxSet* self, void (*slot)(QObject*) ```
void q_boxset_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QBoxSet* self ```
QObject* q_boxset_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QBoxSet* self, const char* classname ```
bool q_boxset_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QBoxSet* self ```
void q_boxset_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QBoxSet* self, QThread* thread, Disambiguated_t* param2 ```
bool q_boxset_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QBoxSet* self, int interval, enum Qt__TimerType timerType ```
int32_t q_boxset_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_boxset_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QBoxSet* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_boxset_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBoxSet* self, QObject* param1 ```
void q_boxset_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QBoxSet* self, void (*slot)(QObject*, QObject*) ```
void q_boxset_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxSet* self, QEvent* event ```
bool q_boxset_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxSet* self, QEvent* event ```
bool q_boxset_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxSet* self, bool (*slot)(QBoxSet*, QEvent*) ```
void q_boxset_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxSet* self, QObject* watched, QEvent* event ```
bool q_boxset_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxSet* self, QObject* watched, QEvent* event ```
bool q_boxset_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxSet* self, bool (*slot)(QBoxSet*, QObject*, QEvent*) ```
void q_boxset_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxSet* self, QTimerEvent* event ```
void q_boxset_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxSet* self, QTimerEvent* event ```
void q_boxset_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxSet* self, void (*slot)(QBoxSet*, QTimerEvent*) ```
void q_boxset_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxSet* self, QChildEvent* event ```
void q_boxset_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxSet* self, QChildEvent* event ```
void q_boxset_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxSet* self, void (*slot)(QBoxSet*, QChildEvent*) ```
void q_boxset_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxSet* self, QEvent* event ```
void q_boxset_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxSet* self, QEvent* event ```
void q_boxset_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxSet* self, void (*slot)(QBoxSet*, QEvent*) ```
void q_boxset_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxSet* self, QMetaMethod* signal ```
void q_boxset_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxSet* self, QMetaMethod* signal ```
void q_boxset_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxSet* self, void (*slot)(QBoxSet*, QMetaMethod*) ```
void q_boxset_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxSet* self, QMetaMethod* signal ```
void q_boxset_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxSet* self, QMetaMethod* signal ```
void q_boxset_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxSet* self, void (*slot)(QBoxSet*, QMetaMethod*) ```
void q_boxset_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxSet* self ```
QObject* q_boxset_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxSet* self ```
QObject* q_boxset_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxSet* self, QObject* (*slot)() ```
void q_boxset_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxSet* self ```
int32_t q_boxset_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxSet* self ```
int32_t q_boxset_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxSet* self, int32_t (*slot)() ```
void q_boxset_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxSet* self, const char* signal ```
int32_t q_boxset_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxSet* self, const char* signal ```
int32_t q_boxset_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxSet* self, int32_t (*slot)(QBoxSet*, const char*) ```
void q_boxset_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QBoxSet* self, QMetaMethod* signal ```
bool q_boxset_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QBoxSet* self, QMetaMethod* signal ```
bool q_boxset_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QBoxSet* self, bool (*slot)(QBoxSet*, QMetaMethod*) ```
void q_boxset_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QBoxSet* self, void (*slot)(QObject*, const char*) ```
void q_boxset_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qboxset-qtcharts.html#dtor.QBoxSet)
///
/// Delete this object from C++ memory.
///
/// ``` QBoxSet* self ```
void q_boxset_delete(void* self);

/// https://doc.qt.io/qt-6/qboxset-qtcharts.html#types

typedef enum {
    QBOXSET_VALUEPOSITIONS_LOWEREXTREME = 0,
    QBOXSET_VALUEPOSITIONS_LOWERQUARTILE = 1,
    QBOXSET_VALUEPOSITIONS_MEDIAN = 2,
    QBOXSET_VALUEPOSITIONS_UPPERQUARTILE = 3,
    QBOXSET_VALUEPOSITIONS_UPPEREXTREME = 4
} QBoxSet__ValuePositions;

#endif
