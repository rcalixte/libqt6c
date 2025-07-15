#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQCANDLESTICKSET_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQCANDLESTICKSET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html

/// q_candlestickset_new constructs a new QCandlestickSet object.
///
///
QCandlestickSet* q_candlestickset_new();

/// q_candlestickset_new2 constructs a new QCandlestickSet object.
///
/// ``` double open, double high, double low, double close ```
QCandlestickSet* q_candlestickset_new2(double open, double high, double low, double close);

/// q_candlestickset_new3 constructs a new QCandlestickSet object.
///
/// ``` double timestamp ```
QCandlestickSet* q_candlestickset_new3(double timestamp);

/// q_candlestickset_new4 constructs a new QCandlestickSet object.
///
/// ``` double timestamp, QObject* parent ```
QCandlestickSet* q_candlestickset_new4(double timestamp, void* parent);

/// q_candlestickset_new5 constructs a new QCandlestickSet object.
///
/// ``` double open, double high, double low, double close, double timestamp ```
QCandlestickSet* q_candlestickset_new5(double open, double high, double low, double close, double timestamp);

/// q_candlestickset_new6 constructs a new QCandlestickSet object.
///
/// ``` double open, double high, double low, double close, double timestamp, QObject* parent ```
QCandlestickSet* q_candlestickset_new6(double open, double high, double low, double close, double timestamp, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QCandlestickSet* self ```
const QMetaObject* q_candlestickset_meta_object(void* self);

/// ``` QCandlestickSet* self, const char* param1 ```
void* q_candlestickset_metacast(void* self, const char* param1);

/// ``` QCandlestickSet* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_candlestickset_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QCandlestickSet* self, int32_t (*slot)(QCandlestickSet*, enum QMetaObject__Call, int, void*) ```
void q_candlestickset_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QCandlestickSet* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_candlestickset_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_candlestickset_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setTimestamp)
///
/// ``` QCandlestickSet* self, double timestamp ```
void q_candlestickset_set_timestamp(void* self, double timestamp);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#timestamp)
///
/// ``` QCandlestickSet* self ```
double q_candlestickset_timestamp(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setOpen)
///
/// ``` QCandlestickSet* self, double open ```
void q_candlestickset_set_open(void* self, double open);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#open)
///
/// ``` QCandlestickSet* self ```
double q_candlestickset_open(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setHigh)
///
/// ``` QCandlestickSet* self, double high ```
void q_candlestickset_set_high(void* self, double high);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#high)
///
/// ``` QCandlestickSet* self ```
double q_candlestickset_high(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setLow)
///
/// ``` QCandlestickSet* self, double low ```
void q_candlestickset_set_low(void* self, double low);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#low)
///
/// ``` QCandlestickSet* self ```
double q_candlestickset_low(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setClose)
///
/// ``` QCandlestickSet* self, double close ```
void q_candlestickset_set_close(void* self, double close);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#close)
///
/// ``` QCandlestickSet* self ```
double q_candlestickset_close(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setBrush)
///
/// ``` QCandlestickSet* self, QBrush* brush ```
void q_candlestickset_set_brush(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#brush)
///
/// ``` QCandlestickSet* self ```
QBrush* q_candlestickset_brush(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#setPen)
///
/// ``` QCandlestickSet* self, QPen* pen ```
void q_candlestickset_set_pen(void* self, void* pen);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#pen)
///
/// ``` QCandlestickSet* self ```
QPen* q_candlestickset_pen(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#clicked)
///
/// ``` QCandlestickSet* self ```
void q_candlestickset_clicked(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#clicked)
///
/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*) ```
void q_candlestickset_on_clicked(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#hovered)
///
/// ``` QCandlestickSet* self, bool status ```
void q_candlestickset_hovered(void* self, bool status);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#hovered)
///
/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*, bool) ```
void q_candlestickset_on_hovered(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#pressed)
///
/// ``` QCandlestickSet* self ```
void q_candlestickset_pressed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#pressed)
///
/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*) ```
void q_candlestickset_on_pressed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#released)
///
/// ``` QCandlestickSet* self ```
void q_candlestickset_released(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#released)
///
/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*) ```
void q_candlestickset_on_released(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#doubleClicked)
///
/// ``` QCandlestickSet* self ```
void q_candlestickset_double_clicked(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#doubleClicked)
///
/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*) ```
void q_candlestickset_on_double_clicked(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#timestampChanged)
///
/// ``` QCandlestickSet* self ```
void q_candlestickset_timestamp_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#timestampChanged)
///
/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*) ```
void q_candlestickset_on_timestamp_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#openChanged)
///
/// ``` QCandlestickSet* self ```
void q_candlestickset_open_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#openChanged)
///
/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*) ```
void q_candlestickset_on_open_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#highChanged)
///
/// ``` QCandlestickSet* self ```
void q_candlestickset_high_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#highChanged)
///
/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*) ```
void q_candlestickset_on_high_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#lowChanged)
///
/// ``` QCandlestickSet* self ```
void q_candlestickset_low_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#lowChanged)
///
/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*) ```
void q_candlestickset_on_low_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#closeChanged)
///
/// ``` QCandlestickSet* self ```
void q_candlestickset_close_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#closeChanged)
///
/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*) ```
void q_candlestickset_on_close_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#brushChanged)
///
/// ``` QCandlestickSet* self ```
void q_candlestickset_brush_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#brushChanged)
///
/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*) ```
void q_candlestickset_on_brush_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#penChanged)
///
/// ``` QCandlestickSet* self ```
void q_candlestickset_pen_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#penChanged)
///
/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*) ```
void q_candlestickset_on_pen_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_candlestickset_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_candlestickset_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QCandlestickSet* self ```
const char* q_candlestickset_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QCandlestickSet* self, char* name ```
void q_candlestickset_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QCandlestickSet* self ```
bool q_candlestickset_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QCandlestickSet* self ```
bool q_candlestickset_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QCandlestickSet* self ```
bool q_candlestickset_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QCandlestickSet* self ```
bool q_candlestickset_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QCandlestickSet* self, bool b ```
bool q_candlestickset_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QCandlestickSet* self ```
QThread* q_candlestickset_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QCandlestickSet* self, QThread* thread ```
bool q_candlestickset_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCandlestickSet* self, int interval ```
int32_t q_candlestickset_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QCandlestickSet* self, int id ```
void q_candlestickset_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QCandlestickSet* self, enum Qt__TimerId id ```
void q_candlestickset_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QCandlestickSet* self ```
libqt_list /* of QObject* */ q_candlestickset_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QCandlestickSet* self, QObject* parent ```
void q_candlestickset_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QCandlestickSet* self, QObject* filterObj ```
void q_candlestickset_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QCandlestickSet* self, QObject* obj ```
void q_candlestickset_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_candlestickset_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCandlestickSet* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_candlestickset_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_candlestickset_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_candlestickset_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QCandlestickSet* self ```
void q_candlestickset_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QCandlestickSet* self ```
void q_candlestickset_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QCandlestickSet* self, const char* name, QVariant* value ```
bool q_candlestickset_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QCandlestickSet* self, const char* name ```
QVariant* q_candlestickset_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QCandlestickSet* self ```
const char** q_candlestickset_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QCandlestickSet* self ```
QBindingStorage* q_candlestickset_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QCandlestickSet* self ```
const QBindingStorage* q_candlestickset_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCandlestickSet* self ```
void q_candlestickset_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCandlestickSet* self, void (*slot)(QObject*) ```
void q_candlestickset_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QCandlestickSet* self ```
QObject* q_candlestickset_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QCandlestickSet* self, const char* classname ```
bool q_candlestickset_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QCandlestickSet* self ```
void q_candlestickset_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QCandlestickSet* self, QThread* thread, Disambiguated_t* param2 ```
bool q_candlestickset_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCandlestickSet* self, int interval, enum Qt__TimerType timerType ```
int32_t q_candlestickset_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_candlestickset_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCandlestickSet* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_candlestickset_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCandlestickSet* self, QObject* param1 ```
void q_candlestickset_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCandlestickSet* self, void (*slot)(QObject*, QObject*) ```
void q_candlestickset_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSet* self, QEvent* event ```
bool q_candlestickset_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSet* self, QEvent* event ```
bool q_candlestickset_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSet* self, bool (*slot)(QCandlestickSet*, QEvent*) ```
void q_candlestickset_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSet* self, QObject* watched, QEvent* event ```
bool q_candlestickset_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSet* self, QObject* watched, QEvent* event ```
bool q_candlestickset_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSet* self, bool (*slot)(QCandlestickSet*, QObject*, QEvent*) ```
void q_candlestickset_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSet* self, QTimerEvent* event ```
void q_candlestickset_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSet* self, QTimerEvent* event ```
void q_candlestickset_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*, QTimerEvent*) ```
void q_candlestickset_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSet* self, QChildEvent* event ```
void q_candlestickset_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSet* self, QChildEvent* event ```
void q_candlestickset_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*, QChildEvent*) ```
void q_candlestickset_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSet* self, QEvent* event ```
void q_candlestickset_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSet* self, QEvent* event ```
void q_candlestickset_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*, QEvent*) ```
void q_candlestickset_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSet* self, QMetaMethod* signal ```
void q_candlestickset_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSet* self, QMetaMethod* signal ```
void q_candlestickset_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*, QMetaMethod*) ```
void q_candlestickset_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSet* self, QMetaMethod* signal ```
void q_candlestickset_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSet* self, QMetaMethod* signal ```
void q_candlestickset_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSet* self, void (*slot)(QCandlestickSet*, QMetaMethod*) ```
void q_candlestickset_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSet* self ```
QObject* q_candlestickset_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSet* self ```
QObject* q_candlestickset_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSet* self, QObject* (*slot)() ```
void q_candlestickset_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSet* self ```
int32_t q_candlestickset_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSet* self ```
int32_t q_candlestickset_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSet* self, int32_t (*slot)() ```
void q_candlestickset_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSet* self, const char* signal ```
int32_t q_candlestickset_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSet* self, const char* signal ```
int32_t q_candlestickset_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSet* self, int32_t (*slot)(QCandlestickSet*, const char*) ```
void q_candlestickset_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSet* self, QMetaMethod* signal ```
bool q_candlestickset_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSet* self, QMetaMethod* signal ```
bool q_candlestickset_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSet* self, bool (*slot)(QCandlestickSet*, QMetaMethod*) ```
void q_candlestickset_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QCandlestickSet* self, void (*slot)(QObject*, const char*) ```
void q_candlestickset_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickset-qtcharts.html#dtor.QCandlestickSet)
///
/// Delete this object from C++ memory.
///
/// ``` QCandlestickSet* self ```
void q_candlestickset_delete(void* self);

#endif
