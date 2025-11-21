#pragma once
#ifndef SRC_QT6C_LIBQTHREADPOOL_H
#define SRC_QT6C_LIBQTHREADPOOL_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qthreadpool.html

/// q_threadpool_new constructs a new QThreadPool object.
///
QThreadPool* q_threadpool_new();

/// q_threadpool_new2 constructs a new QThreadPool object.
///
/// @param parent QObject*
QThreadPool* q_threadpool_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QThreadPool*
const QMetaObject* q_threadpool_meta_object(void* self);

/// @param self QThreadPool*
/// @param param1 const char*
void* q_threadpool_metacast(void* self, const char* param1);

/// @param self QThreadPool*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_threadpool_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QThreadPool*
/// @param callback int32_t func(QThreadPool* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_threadpool_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QThreadPool*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_threadpool_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_threadpool_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#globalInstance)
///
QThreadPool* q_threadpool_global_instance();

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#start)
///
/// @param self QThreadPool*
/// @param runnable QRunnable*
void q_threadpool_start(void* self, void* runnable);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#tryStart)
///
/// @param self QThreadPool*
/// @param runnable QRunnable*
bool q_threadpool_try_start(void* self, void* runnable);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#startOnReservedThread)
///
/// @param self QThreadPool*
/// @param runnable QRunnable*
void q_threadpool_start_on_reserved_thread(void* self, void* runnable);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#expiryTimeout)
///
/// @param self QThreadPool*
int32_t q_threadpool_expiry_timeout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#setExpiryTimeout)
///
/// @param self QThreadPool*
/// @param expiryTimeout int
void q_threadpool_set_expiry_timeout(void* self, int expiryTimeout);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#maxThreadCount)
///
/// @param self QThreadPool*
int32_t q_threadpool_max_thread_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#setMaxThreadCount)
///
/// @param self QThreadPool*
/// @param maxThreadCount int
void q_threadpool_set_max_thread_count(void* self, int maxThreadCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#activeThreadCount)
///
/// @param self QThreadPool*
int32_t q_threadpool_active_thread_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#setStackSize)
///
/// @param self QThreadPool*
/// @param stackSize uint32_t
void q_threadpool_set_stack_size(void* self, uint32_t stackSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#stackSize)
///
/// @param self QThreadPool*
uint32_t q_threadpool_stack_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#setThreadPriority)
///
/// @param self QThreadPool*
/// @param priority enum QThread__Priority
void q_threadpool_set_thread_priority(void* self, int32_t priority);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#threadPriority)
///
/// @param self QThreadPool*
///
/// @return enum QThread__Priority
int32_t q_threadpool_thread_priority(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#reserveThread)
///
/// @param self QThreadPool*
void q_threadpool_reserve_thread(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#releaseThread)
///
/// @param self QThreadPool*
void q_threadpool_release_thread(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#waitForDone)
///
/// @param self QThreadPool*
/// @param msecs int
bool q_threadpool_wait_for_done(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#waitForDone)
///
/// @param self QThreadPool*
bool q_threadpool_wait_for_done2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#clear)
///
/// @param self QThreadPool*
void q_threadpool_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#contains)
///
/// @param self QThreadPool*
/// @param thread QThread*
bool q_threadpool_contains(void* self, void* thread);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#tryTake)
///
/// @param self QThreadPool*
/// @param runnable QRunnable*
bool q_threadpool_try_take(void* self, void* runnable);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_threadpool_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_threadpool_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#start)
///
/// @param self QThreadPool*
/// @param runnable QRunnable*
/// @param priority int
void q_threadpool_start2(void* self, void* runnable, int priority);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#waitForDone)
///
/// @param self QThreadPool*
/// @param deadline QDeadlineTimer*
bool q_threadpool_wait_for_done1(void* self, void* deadline);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QThreadPool*
const char* q_threadpool_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QThreadPool*
/// @param name char*
void q_threadpool_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QThreadPool*
bool q_threadpool_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QThreadPool*
bool q_threadpool_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QThreadPool*
bool q_threadpool_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QThreadPool*
bool q_threadpool_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QThreadPool*
/// @param b bool
bool q_threadpool_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QThreadPool*
QThread* q_threadpool_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QThreadPool*
/// @param thread QThread*
bool q_threadpool_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QThreadPool*
/// @param interval int
int32_t q_threadpool_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QThreadPool*
/// @param id int
void q_threadpool_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QThreadPool*
/// @param id enum Qt__TimerId
void q_threadpool_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QThreadPool*
libqt_list /* of QObject* */ q_threadpool_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QThreadPool*
/// @param parent QObject*
void q_threadpool_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QThreadPool*
/// @param filterObj QObject*
void q_threadpool_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QThreadPool*
/// @param obj QObject*
void q_threadpool_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_threadpool_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QThreadPool*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_threadpool_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_threadpool_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_threadpool_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QThreadPool*
void q_threadpool_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QThreadPool*
void q_threadpool_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QThreadPool*
/// @param name const char*
/// @param value QVariant*
bool q_threadpool_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QThreadPool*
/// @param name const char*
QVariant* q_threadpool_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QThreadPool*
const char** q_threadpool_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QThreadPool*
QBindingStorage* q_threadpool_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QThreadPool*
const QBindingStorage* q_threadpool_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QThreadPool*
void q_threadpool_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QThreadPool*
/// @param callback void func(QThreadPool* self)
void q_threadpool_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QThreadPool*
QObject* q_threadpool_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QThreadPool*
/// @param classname const char*
bool q_threadpool_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QThreadPool*
void q_threadpool_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QThreadPool*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_threadpool_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QThreadPool*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_threadpool_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_threadpool_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QThreadPool*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_threadpool_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QThreadPool*
/// @param param1 QObject*
void q_threadpool_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QThreadPool*
/// @param callback void func(QThreadPool* self, QObject* param1)
void q_threadpool_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QThreadPool*
/// @param event QEvent*
bool q_threadpool_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QThreadPool*
/// @param event QEvent*
bool q_threadpool_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QThreadPool*
/// @param callback bool func(QThreadPool* self, QEvent* event)
void q_threadpool_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QThreadPool*
/// @param watched QObject*
/// @param event QEvent*
bool q_threadpool_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QThreadPool*
/// @param watched QObject*
/// @param event QEvent*
bool q_threadpool_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QThreadPool*
/// @param callback bool func(QThreadPool* self, QObject* watched, QEvent* event)
void q_threadpool_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QThreadPool*
/// @param event QTimerEvent*
void q_threadpool_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QThreadPool*
/// @param event QTimerEvent*
void q_threadpool_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QThreadPool*
/// @param callback void func(QThreadPool* self, QTimerEvent* event)
void q_threadpool_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QThreadPool*
/// @param event QChildEvent*
void q_threadpool_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QThreadPool*
/// @param event QChildEvent*
void q_threadpool_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QThreadPool*
/// @param callback void func(QThreadPool* self, QChildEvent* event)
void q_threadpool_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QThreadPool*
/// @param event QEvent*
void q_threadpool_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QThreadPool*
/// @param event QEvent*
void q_threadpool_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QThreadPool*
/// @param callback void func(QThreadPool* self, QEvent* event)
void q_threadpool_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QThreadPool*
/// @param signal QMetaMethod*
void q_threadpool_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QThreadPool*
/// @param signal QMetaMethod*
void q_threadpool_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QThreadPool*
/// @param callback void func(QThreadPool* self, QMetaMethod* signal)
void q_threadpool_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QThreadPool*
/// @param signal QMetaMethod*
void q_threadpool_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QThreadPool*
/// @param signal QMetaMethod*
void q_threadpool_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QThreadPool*
/// @param callback void func(QThreadPool* self, QMetaMethod* signal)
void q_threadpool_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QThreadPool*
QObject* q_threadpool_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QThreadPool*
QObject* q_threadpool_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QThreadPool*
/// @param callback QObject* func()
void q_threadpool_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QThreadPool*
int32_t q_threadpool_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QThreadPool*
int32_t q_threadpool_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QThreadPool*
/// @param callback int32_t func()
void q_threadpool_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QThreadPool*
/// @param signal const char*
int32_t q_threadpool_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QThreadPool*
/// @param signal const char*
int32_t q_threadpool_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QThreadPool*
/// @param callback int32_t func(QThreadPool* self, const char* signal)
void q_threadpool_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QThreadPool*
/// @param signal QMetaMethod*
bool q_threadpool_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QThreadPool*
/// @param signal QMetaMethod*
bool q_threadpool_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QThreadPool*
/// @param callback bool func(QThreadPool* self, QMetaMethod* signal)
void q_threadpool_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QThreadPool*
/// @param callback void func(QThreadPool* self, const char* objectName)
void q_threadpool_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#dtor.QThreadPool)
///
/// Delete this object from C++ memory.
///
/// @param self QThreadPool*
void q_threadpool_delete(void* self);

#endif
