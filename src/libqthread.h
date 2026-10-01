#pragma once
#ifndef LIBQTHREAD_H
#define LIBQTHREAD_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html)

/// q_thread_new constructs a new QThread object.
///
QThread* q_thread_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html)

/// q_thread_new2 constructs a new QThread object.
///
/// @param parent QObject*
///
QThread* q_thread_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QThread*
///
const QMetaObject* q_thread_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QThread*
/// @param callback const QMetaObject* func(const QThread* self)
///
void q_thread_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QThread*
///
const QMetaObject* q_thread_super_meta_object(const void* self);

/// @param self QThread*
/// @param param1 const char*
///
void* q_thread_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QThread*
/// @param callback void* func(QThread* self, const char* param1)
///
void q_thread_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QThread*
/// @param param1 const char*
///
void* q_thread_super_metacast(void* self, const char* param1);

/// @param self QThread*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_thread_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QThread*
/// @param callback int32_t func(QThread* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_thread_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QThread*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_thread_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_thread_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#currentThreadId)
///
void* q_thread_current_thread_id();

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#currentThread)
///
QThread* q_thread_current_thread();

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#isMainThread)
///
bool q_thread_is_main_thread();

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#idealThreadCount)
///
int32_t q_thread_ideal_thread_count();

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#yieldCurrentThread)
///
void q_thread_yield_current_thread();

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#setPriority)
///
/// @param self QThread*
/// @param priority enum QThread__Priority
///
void q_thread_set_priority(void* self, int32_t priority);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#priority)
///
/// @param self const QThread*
///
/// @return enum QThread__Priority
///
int32_t q_thread_priority(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#isFinished)
///
/// @param self const QThread*
///
bool q_thread_is_finished(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#isRunning)
///
/// @param self const QThread*
///
bool q_thread_is_running(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#requestInterruption)
///
/// @param self QThread*
///
void q_thread_request_interruption(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#isInterruptionRequested)
///
/// @param self const QThread*
///
bool q_thread_is_interruption_requested(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#setStackSize)
///
/// @param self QThread*
/// @param stackSize uint32_t
///
void q_thread_set_stack_size(void* self, uint32_t stackSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#stackSize)
///
/// @param self const QThread*
///
uint32_t q_thread_stack_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#eventDispatcher)
///
/// @param self const QThread*
///
QAbstractEventDispatcher* q_thread_event_dispatcher(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#setEventDispatcher)
///
/// @param self QThread*
/// @param eventDispatcher QAbstractEventDispatcher*
///
void q_thread_set_event_dispatcher(void* self, void* eventDispatcher);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#event)
///
/// @param self QThread*
/// @param event QEvent*
///
bool q_thread_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QThread*
/// @param callback bool func(QThread* self, QEvent* event)
///
void q_thread_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#event)
///
/// Base class method implementation
///
/// @param self QThread*
/// @param event QEvent*
///
bool q_thread_super_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#loopLevel)
///
/// @param self const QThread*
///
int32_t q_thread_loop_level(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#isCurrentThread)
///
/// @param self const QThread*
///
bool q_thread_is_current_thread(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#start)
///
/// @param self QThread*
///
void q_thread_start(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#terminate)
///
/// @param self QThread*
///
void q_thread_terminate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#exit)
///
/// @param self QThread*
///
void q_thread_exit(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#quit)
///
/// @param self QThread*
///
void q_thread_quit(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#wait)
///
/// @param self QThread*
///
bool q_thread_wait(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#wait)
///
/// @param self QThread*
/// @param time uintptr_t
///
bool q_thread_wait2(void* self, uintptr_t time);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#sleep)
///
/// @param param1 uintptr_t
///
void q_thread_sleep(uintptr_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#msleep)
///
/// @param param1 uintptr_t
///
void q_thread_msleep(uintptr_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#usleep)
///
/// @param param1 uintptr_t
///
void q_thread_usleep(uintptr_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#sleep)
///
/// @param nsec int64_t of nanoseconds
///
void q_thread_sleep2(int64_t nsec);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#run)
///
/// @param self QThread*
///
void q_thread_run(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#run)
///
/// Allows for overriding the related default method
///
/// @param self QThread*
/// @param callback void func(QThread* self)
///
void q_thread_on_run(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#run)
///
/// Base class method implementation
///
/// @param self QThread*
///
void q_thread_super_run(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#exec)
///
/// @param self QThread*
///
int32_t q_thread_exec(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#setTerminationEnabled)
///
/// @param self QThread*
///
void q_thread_set_termination_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_thread_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_thread_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#start)
///
/// @param self QThread*
/// @param param1 enum QThread__Priority
///
void q_thread_start1(void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#exit)
///
/// @param self QThread*
/// @param retcode int
///
void q_thread_exit1(void* self, int retcode);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#wait)
///
/// @param self QThread*
/// @param deadline QDeadlineTimer*
///
bool q_thread_wait1(void* self, void* deadline);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#setTerminationEnabled)
///
/// @param self QThread*
/// @param enabled bool
///
void q_thread_set_termination_enabled1(void* self, bool enabled);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QThread*
///
const char* q_thread_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QThread*
/// @param name const char*
///
void q_thread_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QThread*
///
bool q_thread_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QThread*
///
bool q_thread_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QThread*
///
bool q_thread_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QThread*
///
bool q_thread_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QThread*
/// @param b bool
///
bool q_thread_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QThread*
///
QThread* q_thread_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QThread*
/// @param thread QThread*
///
bool q_thread_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QThread*
/// @param interval int
///
int32_t q_thread_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QThread*
/// @param time int64_t of nanoseconds
///
int32_t q_thread_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QThread*
/// @param id int
///
void q_thread_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QThread*
/// @param id enum Qt__TimerId
///
void q_thread_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QThread*
///
/// @return libqt_list of QObject*
///
libqt_list q_thread_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QThread*
/// @param parent QObject*
///
void q_thread_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QThread*
/// @param filterObj QObject*
///
void q_thread_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QThread*
/// @param obj QObject*
///
void q_thread_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_thread_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_thread_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QThread*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_thread_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_thread_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_thread_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QThread*
///
bool q_thread_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QThread*
/// @param receiver QObject*
///
bool q_thread_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_thread_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QThread*
///
void q_thread_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QThread*
///
void q_thread_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QThread*
/// @param name const char*
/// @param value QVariant*
///
bool q_thread_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QThread*
/// @param name const char*
///
QVariant* q_thread_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QThread*
///
const char** q_thread_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QThread*
///
QBindingStorage* q_thread_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QThread*
///
const QBindingStorage* q_thread_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QThread*
///
void q_thread_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QThread*
/// @param callback void func(QThread* self)
///
void q_thread_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QThread*
///
QObject* q_thread_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QThread*
/// @param classname const char*
///
bool q_thread_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QThread*
///
void q_thread_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QThread*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_thread_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QThread*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_thread_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_thread_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_thread_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QThread*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_thread_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QThread*
/// @param signal const char*
///
bool q_thread_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QThread*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_thread_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QThread*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_thread_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QThread*
/// @param receiver QObject*
/// @param member const char*
///
bool q_thread_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QThread*
/// @param param1 QObject*
///
void q_thread_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QThread*
/// @param callback void func(QThread* self, QObject* param1)
///
void q_thread_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QThread*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_thread_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QThread*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_thread_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QThread*
/// @param callback bool func(QThread* self, QObject* watched, QEvent* event)
///
void q_thread_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QThread*
/// @param event QTimerEvent*
///
void q_thread_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QThread*
/// @param event QTimerEvent*
///
void q_thread_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QThread*
/// @param callback void func(QThread* self, QTimerEvent* event)
///
void q_thread_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QThread*
/// @param event QChildEvent*
///
void q_thread_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QThread*
/// @param event QChildEvent*
///
void q_thread_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QThread*
/// @param callback void func(QThread* self, QChildEvent* event)
///
void q_thread_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QThread*
/// @param event QEvent*
///
void q_thread_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QThread*
/// @param event QEvent*
///
void q_thread_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QThread*
/// @param callback void func(QThread* self, QEvent* event)
///
void q_thread_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QThread*
/// @param signal QMetaMethod*
///
void q_thread_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QThread*
/// @param signal QMetaMethod*
///
void q_thread_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QThread*
/// @param callback void func(QThread* self, QMetaMethod* signal)
///
void q_thread_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QThread*
/// @param signal QMetaMethod*
///
void q_thread_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QThread*
/// @param signal QMetaMethod*
///
void q_thread_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QThread*
/// @param callback void func(QThread* self, QMetaMethod* signal)
///
void q_thread_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QThread*
///
QObject* q_thread_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QThread*
///
QObject* q_thread_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QThread*
/// @param callback QObject* func(QThread* self)
///
void q_thread_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QThread*
///
int32_t q_thread_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QThread*
///
int32_t q_thread_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QThread*
/// @param callback int32_t func(QThread* self)
///
void q_thread_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QThread*
/// @param signal const char*
///
int32_t q_thread_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QThread*
/// @param signal const char*
///
int32_t q_thread_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QThread*
/// @param callback int32_t func(QThread* self, const char* signal)
///
void q_thread_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QThread*
/// @param signal QMetaMethod*
///
bool q_thread_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QThread*
/// @param signal QMetaMethod*
///
bool q_thread_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QThread*
/// @param callback bool func(QThread* self, QMetaMethod* signal)
///
void q_thread_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#started)
///
/// Wrapper to allow calling private signal
///
/// @param self QThread*
/// @param callback void func(QThread* self)
///
void q_thread_on_started(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#finished)
///
/// Wrapper to allow calling private signal
///
/// @param self QThread*
/// @param callback void func(QThread* self)
///
void q_thread_on_finished(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QThread*
/// @param callback void func(QThread* self, const char* objectName)
///
void q_thread_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#dtor.QThread)
///
/// Delete this object from C++ memory.
///
/// @param self QThread*
///
void q_thread_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qthread.html#public-types)

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
