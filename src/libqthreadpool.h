#pragma once
#ifndef SRCQT6C_LIBQTHREADPOOL_H
#define SRCQT6C_LIBQTHREADPOOL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqrunnable.h"
#include <string.h>
#include "libqthread.h"

/// https://doc.qt.io/qt-6/qthreadpool.html

/// q_threadpool_new constructs a new QThreadPool object.
///
///
QThreadPool* q_threadpool_new();

/// q_threadpool_new2 constructs a new QThreadPool object.
///
/// ``` QObject* parent ```
QThreadPool* q_threadpool_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QThreadPool* self ```
const QMetaObject* q_threadpool_meta_object(void* self);

/// ``` QThreadPool* self, const char* param1 ```
void* q_threadpool_metacast(void* self, const char* param1);

/// ``` QThreadPool* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_threadpool_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QThreadPool* self, int32_t (*slot)(QThreadPool*, enum QMetaObject__Call, int, void*) ```
void q_threadpool_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QThreadPool* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_threadpool_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_threadpool_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#globalInstance)
///
///
QThreadPool* q_threadpool_global_instance();

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#start)
///
/// ``` QThreadPool* self, QRunnable* runnable ```
void q_threadpool_start(void* self, void* runnable);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#tryStart)
///
/// ``` QThreadPool* self, QRunnable* runnable ```
bool q_threadpool_try_start(void* self, void* runnable);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#startOnReservedThread)
///
/// ``` QThreadPool* self, QRunnable* runnable ```
void q_threadpool_start_on_reserved_thread(void* self, void* runnable);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#expiryTimeout)
///
/// ``` QThreadPool* self ```
int32_t q_threadpool_expiry_timeout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#setExpiryTimeout)
///
/// ``` QThreadPool* self, int expiryTimeout ```
void q_threadpool_set_expiry_timeout(void* self, int expiryTimeout);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#maxThreadCount)
///
/// ``` QThreadPool* self ```
int32_t q_threadpool_max_thread_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#setMaxThreadCount)
///
/// ``` QThreadPool* self, int maxThreadCount ```
void q_threadpool_set_max_thread_count(void* self, int maxThreadCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#activeThreadCount)
///
/// ``` QThreadPool* self ```
int32_t q_threadpool_active_thread_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#setStackSize)
///
/// ``` QThreadPool* self, uint32_t stackSize ```
void q_threadpool_set_stack_size(void* self, uint32_t stackSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#stackSize)
///
/// ``` QThreadPool* self ```
uint32_t q_threadpool_stack_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#setThreadPriority)
///
/// ``` QThreadPool* self, enum QThread__Priority priority ```
void q_threadpool_set_thread_priority(void* self, int64_t priority);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#threadPriority)
///
/// ``` QThreadPool* self ```
int64_t q_threadpool_thread_priority(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#reserveThread)
///
/// ``` QThreadPool* self ```
void q_threadpool_reserve_thread(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#releaseThread)
///
/// ``` QThreadPool* self ```
void q_threadpool_release_thread(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#waitForDone)
///
/// ``` QThreadPool* self ```
bool q_threadpool_wait_for_done(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#clear)
///
/// ``` QThreadPool* self ```
void q_threadpool_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#contains)
///
/// ``` QThreadPool* self, QThread* thread ```
bool q_threadpool_contains(void* self, void* thread);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#tryTake)
///
/// ``` QThreadPool* self, QRunnable* runnable ```
bool q_threadpool_try_take(void* self, void* runnable);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_threadpool_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_threadpool_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#start)
///
/// ``` QThreadPool* self, QRunnable* runnable, int priority ```
void q_threadpool_start2(void* self, void* runnable, int priority);

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#waitForDone)
///
/// ``` QThreadPool* self, int msecs ```
bool q_threadpool_wait_for_done1(void* self, int msecs);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QThreadPool* self ```
const char* q_threadpool_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QThreadPool* self, char* name ```
void q_threadpool_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QThreadPool* self ```
bool q_threadpool_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QThreadPool* self ```
bool q_threadpool_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QThreadPool* self ```
bool q_threadpool_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QThreadPool* self ```
bool q_threadpool_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QThreadPool* self, bool b ```
bool q_threadpool_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QThreadPool* self ```
QThread* q_threadpool_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QThreadPool* self, QThread* thread ```
void q_threadpool_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QThreadPool* self, int interval ```
int32_t q_threadpool_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QThreadPool* self, int id ```
void q_threadpool_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QThreadPool* self ```
libqt_list /* of QObject* */ q_threadpool_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QThreadPool* self, QObject* parent ```
void q_threadpool_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QThreadPool* self, QObject* filterObj ```
void q_threadpool_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QThreadPool* self, QObject* obj ```
void q_threadpool_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_threadpool_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QThreadPool* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_threadpool_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_threadpool_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_threadpool_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QThreadPool* self ```
void q_threadpool_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QThreadPool* self ```
void q_threadpool_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QThreadPool* self, const char* name, QVariant* value ```
bool q_threadpool_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QThreadPool* self, const char* name ```
QVariant* q_threadpool_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QThreadPool* self ```
const char** q_threadpool_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QThreadPool* self ```
QBindingStorage* q_threadpool_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QThreadPool* self ```
const QBindingStorage* q_threadpool_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QThreadPool* self ```
void q_threadpool_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QThreadPool* self, void (*slot)(QObject*) ```
void q_threadpool_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QThreadPool* self ```
QObject* q_threadpool_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QThreadPool* self, const char* classname ```
bool q_threadpool_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QThreadPool* self ```
void q_threadpool_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QThreadPool* self, int interval, enum Qt__TimerType timerType ```
int32_t q_threadpool_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_threadpool_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QThreadPool* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_threadpool_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QThreadPool* self, QObject* param1 ```
void q_threadpool_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QThreadPool* self, void (*slot)(QObject*, QObject*) ```
void q_threadpool_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThreadPool* self, QEvent* event ```
bool q_threadpool_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThreadPool* self, QEvent* event ```
bool q_threadpool_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThreadPool* self, bool (*slot)(QThreadPool*, QEvent*) ```
void q_threadpool_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThreadPool* self, QObject* watched, QEvent* event ```
bool q_threadpool_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThreadPool* self, QObject* watched, QEvent* event ```
bool q_threadpool_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThreadPool* self, bool (*slot)(QThreadPool*, QObject*, QEvent*) ```
void q_threadpool_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThreadPool* self, QTimerEvent* event ```
void q_threadpool_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThreadPool* self, QTimerEvent* event ```
void q_threadpool_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThreadPool* self, void (*slot)(QThreadPool*, QTimerEvent*) ```
void q_threadpool_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThreadPool* self, QChildEvent* event ```
void q_threadpool_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThreadPool* self, QChildEvent* event ```
void q_threadpool_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThreadPool* self, void (*slot)(QThreadPool*, QChildEvent*) ```
void q_threadpool_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThreadPool* self, QEvent* event ```
void q_threadpool_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThreadPool* self, QEvent* event ```
void q_threadpool_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThreadPool* self, void (*slot)(QThreadPool*, QEvent*) ```
void q_threadpool_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThreadPool* self, QMetaMethod* signal ```
void q_threadpool_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThreadPool* self, QMetaMethod* signal ```
void q_threadpool_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThreadPool* self, void (*slot)(QThreadPool*, QMetaMethod*) ```
void q_threadpool_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThreadPool* self, QMetaMethod* signal ```
void q_threadpool_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThreadPool* self, QMetaMethod* signal ```
void q_threadpool_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThreadPool* self, void (*slot)(QThreadPool*, QMetaMethod*) ```
void q_threadpool_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThreadPool* self ```
QObject* q_threadpool_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThreadPool* self ```
QObject* q_threadpool_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThreadPool* self, QObject* (*slot)() ```
void q_threadpool_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThreadPool* self ```
int32_t q_threadpool_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThreadPool* self ```
int32_t q_threadpool_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThreadPool* self, int32_t (*slot)() ```
void q_threadpool_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThreadPool* self, const char* signal ```
int32_t q_threadpool_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThreadPool* self, const char* signal ```
int32_t q_threadpool_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThreadPool* self, int32_t (*slot)(QThreadPool*, const char*) ```
void q_threadpool_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QThreadPool* self, QMetaMethod* signal ```
bool q_threadpool_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QThreadPool* self, QMetaMethod* signal ```
bool q_threadpool_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QThreadPool* self, bool (*slot)(QThreadPool*, QMetaMethod*) ```
void q_threadpool_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QThreadPool* self, void (*slot)(QObject*, const char*) ```
void q_threadpool_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qthreadpool.html#dtor.QThreadPool)
///
/// Delete this object from C++ memory.
///
/// ``` QThreadPool* self ```
void q_threadpool_delete(void* self);

#endif
