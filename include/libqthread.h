#pragma once
#ifndef SRCQT6C_LIBQTHREAD_H
#define SRCQT6C_LIBQTHREAD_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qthread.html

/// q_thread_new constructs a new QThread object.
///
///
QThread* q_thread_new();

/// q_thread_new2 constructs a new QThread object.
///
/// ``` QObject* parent ```
QThread* q_thread_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QThread* self ```
const QMetaObject* q_thread_meta_object(void* self);

/// ``` QThread* self, const char* param1 ```
void* q_thread_metacast(void* self, const char* param1);

/// ``` QThread* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_thread_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QThread* self, int32_t (*slot)(QThread*, enum QMetaObject__Call, int, void*) ```
void q_thread_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QThread* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_thread_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_thread_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#currentThreadId)
///
///
void* q_thread_current_thread_id();

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#currentThread)
///
///
QThread* q_thread_current_thread();

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#isMainThread)
///
///
bool q_thread_is_main_thread();

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#idealThreadCount)
///
///
int32_t q_thread_ideal_thread_count();

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#yieldCurrentThread)
///
///
void q_thread_yield_current_thread();

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#setPriority)
///
/// ``` QThread* self, enum QThread__Priority priority ```
void q_thread_set_priority(void* self, int64_t priority);

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#priority)
///
/// ``` QThread* self ```
int64_t q_thread_priority(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#isFinished)
///
/// ``` QThread* self ```
bool q_thread_is_finished(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#isRunning)
///
/// ``` QThread* self ```
bool q_thread_is_running(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#requestInterruption)
///
/// ``` QThread* self ```
void q_thread_request_interruption(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#isInterruptionRequested)
///
/// ``` QThread* self ```
bool q_thread_is_interruption_requested(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#setStackSize)
///
/// ``` QThread* self, uint32_t stackSize ```
void q_thread_set_stack_size(void* self, uint32_t stackSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#stackSize)
///
/// ``` QThread* self ```
uint32_t q_thread_stack_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#eventDispatcher)
///
/// ``` QThread* self ```
QAbstractEventDispatcher* q_thread_event_dispatcher(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#setEventDispatcher)
///
/// ``` QThread* self, QAbstractEventDispatcher* eventDispatcher ```
void q_thread_set_event_dispatcher(void* self, void* eventDispatcher);

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#event)
///
/// ``` QThread* self, QEvent* event ```
bool q_thread_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QThread* self, bool (*slot)(QThread*, QEvent*) ```
void q_thread_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#event)
///
/// Base class method implementation
///
/// ``` QThread* self, QEvent* event ```
bool q_thread_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#loopLevel)
///
/// ``` QThread* self ```
int32_t q_thread_loop_level(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#isCurrentThread)
///
/// ``` QThread* self ```
bool q_thread_is_current_thread(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#start)
///
/// ``` QThread* self ```
void q_thread_start(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#terminate)
///
/// ``` QThread* self ```
void q_thread_terminate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#exit)
///
/// ``` QThread* self ```
void q_thread_exit(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#quit)
///
/// ``` QThread* self ```
void q_thread_quit(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#wait)
///
/// ``` QThread* self ```
bool q_thread_wait(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#wait)
///
/// ``` QThread* self, uint64_t time ```
bool q_thread_wait2(void* self, uint64_t time);

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#sleep)
///
/// ``` uint64_t param1 ```
void q_thread_sleep(uint64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#msleep)
///
/// ``` uint64_t param1 ```
void q_thread_msleep(uint64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#usleep)
///
/// ``` uint64_t param1 ```
void q_thread_usleep(uint64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#run)
///
/// ``` QThread* self ```
void q_thread_run(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#run)
///
/// Allows for overriding the related default method
///
/// ``` QThread* self, void (*slot)() ```
void q_thread_on_run(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#run)
///
/// Base class method implementation
///
/// ``` QThread* self ```
void q_thread_qbase_run(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#exec)
///
/// ``` QThread* self ```
int32_t q_thread_exec(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#exec)
///
/// Allows for overriding the related default method
///
/// ``` QThread* self, int32_t (*slot)() ```
void q_thread_on_exec(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#exec)
///
/// Base class method implementation
///
/// ``` QThread* self ```
int32_t q_thread_qbase_exec(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_thread_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_thread_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#start)
///
/// ``` QThread* self, enum QThread__Priority param1 ```
void q_thread_start1(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#exit)
///
/// ``` QThread* self, int retcode ```
void q_thread_exit1(void* self, int retcode);

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#wait)
///
/// ``` QThread* self, QDeadlineTimer* deadline ```
bool q_thread_wait1(void* self, void* deadline);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QThread* self ```
const char* q_thread_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QThread* self, char* name ```
void q_thread_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QThread* self ```
bool q_thread_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QThread* self ```
bool q_thread_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QThread* self ```
bool q_thread_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QThread* self ```
bool q_thread_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QThread* self, bool b ```
bool q_thread_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QThread* self ```
QThread* q_thread_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QThread* self, QThread* thread ```
bool q_thread_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QThread* self, int interval ```
int32_t q_thread_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QThread* self, int id ```
void q_thread_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QThread* self, enum Qt__TimerId id ```
void q_thread_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QThread* self ```
libqt_list /* of QObject* */ q_thread_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QThread* self, QObject* parent ```
void q_thread_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QThread* self, QObject* filterObj ```
void q_thread_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QThread* self, QObject* obj ```
void q_thread_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_thread_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QThread* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_thread_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_thread_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_thread_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QThread* self ```
void q_thread_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QThread* self ```
void q_thread_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QThread* self, const char* name, QVariant* value ```
bool q_thread_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QThread* self, const char* name ```
QVariant* q_thread_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QThread* self ```
const char** q_thread_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QThread* self ```
QBindingStorage* q_thread_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QThread* self ```
const QBindingStorage* q_thread_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QThread* self ```
void q_thread_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QThread* self, void (*slot)(QObject*) ```
void q_thread_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QThread* self ```
QObject* q_thread_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QThread* self, const char* classname ```
bool q_thread_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QThread* self ```
void q_thread_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QThread* self, QThread* thread, Disambiguated_t* param2 ```
bool q_thread_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QThread* self, int interval, enum Qt__TimerType timerType ```
int32_t q_thread_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_thread_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QThread* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_thread_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QThread* self, QObject* param1 ```
void q_thread_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QThread* self, void (*slot)(QObject*, QObject*) ```
void q_thread_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThread* self, QObject* watched, QEvent* event ```
bool q_thread_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThread* self, QObject* watched, QEvent* event ```
bool q_thread_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThread* self, bool (*slot)(QThread*, QObject*, QEvent*) ```
void q_thread_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThread* self, QTimerEvent* event ```
void q_thread_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThread* self, QTimerEvent* event ```
void q_thread_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThread* self, void (*slot)(QThread*, QTimerEvent*) ```
void q_thread_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThread* self, QChildEvent* event ```
void q_thread_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThread* self, QChildEvent* event ```
void q_thread_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThread* self, void (*slot)(QThread*, QChildEvent*) ```
void q_thread_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThread* self, QEvent* event ```
void q_thread_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThread* self, QEvent* event ```
void q_thread_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThread* self, void (*slot)(QThread*, QEvent*) ```
void q_thread_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThread* self, QMetaMethod* signal ```
void q_thread_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThread* self, QMetaMethod* signal ```
void q_thread_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThread* self, void (*slot)(QThread*, QMetaMethod*) ```
void q_thread_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThread* self, QMetaMethod* signal ```
void q_thread_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThread* self, QMetaMethod* signal ```
void q_thread_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThread* self, void (*slot)(QThread*, QMetaMethod*) ```
void q_thread_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThread* self ```
QObject* q_thread_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThread* self ```
QObject* q_thread_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThread* self, QObject* (*slot)() ```
void q_thread_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThread* self ```
int32_t q_thread_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThread* self ```
int32_t q_thread_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThread* self, int32_t (*slot)() ```
void q_thread_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThread* self, const char* signal ```
int32_t q_thread_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThread* self, const char* signal ```
int32_t q_thread_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThread* self, int32_t (*slot)(QThread*, const char*) ```
void q_thread_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThread* self, QMetaMethod* signal ```
bool q_thread_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThread* self, QMetaMethod* signal ```
bool q_thread_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThread* self, bool (*slot)(QThread*, QMetaMethod*) ```
void q_thread_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#started)
///
/// Wrapper to allow calling private signal
///
/// ``` QThread* self, void (*slot)(QThread*) ```
void q_thread_on_started(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#finished)
///
/// Wrapper to allow calling private signal
///
/// ``` QThread* self, void (*slot)(QThread*) ```
void q_thread_on_finished(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QThread* self, void (*slot)(QObject*, const char*) ```
void q_thread_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qthread.html#dtor.QThread)
///
/// Delete this object from C++ memory.
///
/// ``` QThread* self ```
void q_thread_delete(void* self);

/// https://doc.qt.io/qt-6/qthread.html#types

typedef enum {
    QTHREAD_PRIORITY_IDLEPRIORITY = 0,
    QTHREAD_PRIORITY_LOWESTPRIORITY = 1,
    QTHREAD_PRIORITY_LOWPRIORITY = 2,
    QTHREAD_PRIORITY_NORMALPRIORITY = 3,
    QTHREAD_PRIORITY_HIGHPRIORITY = 4,
    QTHREAD_PRIORITY_HIGHESTPRIORITY = 5,
    QTHREAD_PRIORITY_TIMECRITICALPRIORITY = 6,
    QTHREAD_PRIORITY_INHERITPRIORITY = 7
} QThread__Priority;

#endif
