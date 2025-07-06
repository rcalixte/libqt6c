#pragma once
#ifndef SRCQT6C_LIBQCHRONOTIMER_H
#define SRCQT6C_LIBQCHRONOTIMER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qchronotimer.html

/// q_chronotimer_new constructs a new QChronoTimer object.
///
///
QChronoTimer* q_chronotimer_new();

/// q_chronotimer_new2 constructs a new QChronoTimer object.
///
/// ``` QObject* parent ```
QChronoTimer* q_chronotimer_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QChronoTimer* self ```
const QMetaObject* q_chronotimer_meta_object(void* self);

/// ``` QChronoTimer* self, const char* param1 ```
void* q_chronotimer_metacast(void* self, const char* param1);

/// ``` QChronoTimer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_chronotimer_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QChronoTimer* self, int32_t (*slot)(QChronoTimer*, enum QMetaObject__Call, int, void*) ```
void q_chronotimer_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QChronoTimer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_chronotimer_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_chronotimer_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qchronotimer.html#isActive)
///
/// ``` QChronoTimer* self ```
bool q_chronotimer_is_active(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchronotimer.html#setTimerType)
///
/// ``` QChronoTimer* self, enum Qt__TimerType atype ```
void q_chronotimer_set_timer_type(void* self, int64_t atype);

/// [Qt documentation](https://doc.qt.io/qt-6/qchronotimer.html#timerType)
///
/// ``` QChronoTimer* self ```
int64_t q_chronotimer_timer_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchronotimer.html#setSingleShot)
///
/// ``` QChronoTimer* self, bool singleShot ```
void q_chronotimer_set_single_shot(void* self, bool singleShot);

/// [Qt documentation](https://doc.qt.io/qt-6/qchronotimer.html#isSingleShot)
///
/// ``` QChronoTimer* self ```
bool q_chronotimer_is_single_shot(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchronotimer.html#start)
///
/// ``` QChronoTimer* self ```
void q_chronotimer_start(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchronotimer.html#stop)
///
/// ``` QChronoTimer* self ```
void q_chronotimer_stop(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qchronotimer.html#timerEvent)
///
/// ``` QChronoTimer* self, QTimerEvent* param1 ```
void q_chronotimer_timer_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qchronotimer.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// ``` QChronoTimer* self, void (*slot)(QChronoTimer*, QTimerEvent*) ```
void q_chronotimer_on_timer_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qchronotimer.html#timerEvent)
///
/// Base class method implementation
///
/// ``` QChronoTimer* self, QTimerEvent* param1 ```
void q_chronotimer_qbase_timer_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_chronotimer_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_chronotimer_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QChronoTimer* self ```
const char* q_chronotimer_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QChronoTimer* self, char* name ```
void q_chronotimer_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QChronoTimer* self ```
bool q_chronotimer_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QChronoTimer* self ```
bool q_chronotimer_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QChronoTimer* self ```
bool q_chronotimer_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QChronoTimer* self ```
bool q_chronotimer_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QChronoTimer* self, bool b ```
bool q_chronotimer_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QChronoTimer* self ```
QThread* q_chronotimer_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QChronoTimer* self, QThread* thread ```
bool q_chronotimer_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QChronoTimer* self, int interval ```
int32_t q_chronotimer_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QChronoTimer* self, int id ```
void q_chronotimer_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QChronoTimer* self, enum Qt__TimerId id ```
void q_chronotimer_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QChronoTimer* self ```
libqt_list /* of QObject* */ q_chronotimer_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QChronoTimer* self, QObject* parent ```
void q_chronotimer_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QChronoTimer* self, QObject* filterObj ```
void q_chronotimer_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QChronoTimer* self, QObject* obj ```
void q_chronotimer_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_chronotimer_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QChronoTimer* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_chronotimer_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_chronotimer_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_chronotimer_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QChronoTimer* self ```
void q_chronotimer_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QChronoTimer* self ```
void q_chronotimer_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QChronoTimer* self, const char* name, QVariant* value ```
bool q_chronotimer_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QChronoTimer* self, const char* name ```
QVariant* q_chronotimer_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QChronoTimer* self ```
const char** q_chronotimer_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QChronoTimer* self ```
QBindingStorage* q_chronotimer_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QChronoTimer* self ```
const QBindingStorage* q_chronotimer_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QChronoTimer* self ```
void q_chronotimer_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QChronoTimer* self, void (*slot)(QObject*) ```
void q_chronotimer_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QChronoTimer* self ```
QObject* q_chronotimer_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QChronoTimer* self, const char* classname ```
bool q_chronotimer_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QChronoTimer* self ```
void q_chronotimer_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QChronoTimer* self, QThread* thread, Disambiguated_t* param2 ```
bool q_chronotimer_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QChronoTimer* self, int interval, enum Qt__TimerType timerType ```
int32_t q_chronotimer_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_chronotimer_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QChronoTimer* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_chronotimer_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QChronoTimer* self, QObject* param1 ```
void q_chronotimer_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QChronoTimer* self, void (*slot)(QObject*, QObject*) ```
void q_chronotimer_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChronoTimer* self, QEvent* event ```
bool q_chronotimer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChronoTimer* self, QEvent* event ```
bool q_chronotimer_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChronoTimer* self, bool (*slot)(QChronoTimer*, QEvent*) ```
void q_chronotimer_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChronoTimer* self, QObject* watched, QEvent* event ```
bool q_chronotimer_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChronoTimer* self, QObject* watched, QEvent* event ```
bool q_chronotimer_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChronoTimer* self, bool (*slot)(QChronoTimer*, QObject*, QEvent*) ```
void q_chronotimer_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChronoTimer* self, QChildEvent* event ```
void q_chronotimer_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChronoTimer* self, QChildEvent* event ```
void q_chronotimer_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChronoTimer* self, void (*slot)(QChronoTimer*, QChildEvent*) ```
void q_chronotimer_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChronoTimer* self, QEvent* event ```
void q_chronotimer_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChronoTimer* self, QEvent* event ```
void q_chronotimer_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChronoTimer* self, void (*slot)(QChronoTimer*, QEvent*) ```
void q_chronotimer_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChronoTimer* self, QMetaMethod* signal ```
void q_chronotimer_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChronoTimer* self, QMetaMethod* signal ```
void q_chronotimer_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChronoTimer* self, void (*slot)(QChronoTimer*, QMetaMethod*) ```
void q_chronotimer_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChronoTimer* self, QMetaMethod* signal ```
void q_chronotimer_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChronoTimer* self, QMetaMethod* signal ```
void q_chronotimer_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChronoTimer* self, void (*slot)(QChronoTimer*, QMetaMethod*) ```
void q_chronotimer_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChronoTimer* self ```
QObject* q_chronotimer_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChronoTimer* self ```
QObject* q_chronotimer_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChronoTimer* self, QObject* (*slot)() ```
void q_chronotimer_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChronoTimer* self ```
int32_t q_chronotimer_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChronoTimer* self ```
int32_t q_chronotimer_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChronoTimer* self, int32_t (*slot)() ```
void q_chronotimer_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChronoTimer* self, const char* signal ```
int32_t q_chronotimer_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChronoTimer* self, const char* signal ```
int32_t q_chronotimer_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChronoTimer* self, int32_t (*slot)(QChronoTimer*, const char*) ```
void q_chronotimer_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QChronoTimer* self, QMetaMethod* signal ```
bool q_chronotimer_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QChronoTimer* self, QMetaMethod* signal ```
bool q_chronotimer_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QChronoTimer* self, bool (*slot)(QChronoTimer*, QMetaMethod*) ```
void q_chronotimer_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qchronotimer.html#timeout)
///
/// Wrapper to allow calling private signal
///
/// ``` QChronoTimer* self, void (*slot)(QChronoTimer*) ```
void q_chronotimer_on_timeout(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QChronoTimer* self, void (*slot)(QObject*, const char*) ```
void q_chronotimer_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qchronotimer.html#dtor.QChronoTimer)
///
/// Delete this object from C++ memory.
///
/// ``` QChronoTimer* self ```
void q_chronotimer_delete(void* self);

#endif
