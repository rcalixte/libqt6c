#pragma once
#ifndef SRCQT6C_LIBQEVENTLOOP_H
#define SRCQT6C_LIBQEVENTLOOP_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qeventloop.html

/// q_eventloop_new constructs a new QEventLoop object.
///
QEventLoop* q_eventloop_new();

/// q_eventloop_new2 constructs a new QEventLoop object.
///
/// @param parent QObject*
QEventLoop* q_eventloop_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QEventLoop*
const QMetaObject* q_eventloop_meta_object(void* self);

/// @param self QEventLoop*
/// @param param1 const char*
void* q_eventloop_metacast(void* self, const char* param1);

/// @param self QEventLoop*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_eventloop_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QEventLoop*
/// @param callback int32_t func(QEventLoop* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_eventloop_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QEventLoop*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_eventloop_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_eventloop_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#processEvents)
///
/// @param self QEventLoop*
bool q_eventloop_process_events(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#processEvents)
///
/// @param self QEventLoop*
/// @param flags flag of enum QEventLoop__ProcessEventsFlag
/// @param maximumTime int
void q_eventloop_process_events2(void* self, int64_t flags, int maximumTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#processEvents)
///
/// @param self QEventLoop*
/// @param flags flag of enum QEventLoop__ProcessEventsFlag
/// @param deadline QDeadlineTimer*
void q_eventloop_process_events3(void* self, int64_t flags, void* deadline);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#exec)
///
/// @param self QEventLoop*
int32_t q_eventloop_exec(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#isRunning)
///
/// @param self QEventLoop*
bool q_eventloop_is_running(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#wakeUp)
///
/// @param self QEventLoop*
void q_eventloop_wake_up(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#event)
///
/// @param self QEventLoop*
/// @param event QEvent*
bool q_eventloop_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QEventLoop*
/// @param callback bool func(QEventLoop* self, QEvent* event)
void q_eventloop_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#event)
///
/// Base class method implementation
///
/// @param self QEventLoop*
/// @param event QEvent*
bool q_eventloop_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#exit)
///
/// @param self QEventLoop*
void q_eventloop_exit(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#quit)
///
/// @param self QEventLoop*
void q_eventloop_quit(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_eventloop_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_eventloop_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#processEvents)
///
/// @param self QEventLoop*
/// @param flags flag of enum QEventLoop__ProcessEventsFlag
bool q_eventloop_process_events1(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#exec)
///
/// @param self QEventLoop*
/// @param flags flag of enum QEventLoop__ProcessEventsFlag
int32_t q_eventloop_exec1(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#exit)
///
/// @param self QEventLoop*
/// @param returnCode int
void q_eventloop_exit1(void* self, int returnCode);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QEventLoop*
const char* q_eventloop_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QEventLoop*
/// @param name char*
void q_eventloop_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QEventLoop*
bool q_eventloop_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QEventLoop*
bool q_eventloop_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QEventLoop*
bool q_eventloop_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QEventLoop*
bool q_eventloop_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QEventLoop*
/// @param b bool
bool q_eventloop_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QEventLoop*
QThread* q_eventloop_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QEventLoop*
/// @param thread QThread*
bool q_eventloop_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QEventLoop*
/// @param interval int
int32_t q_eventloop_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QEventLoop*
/// @param id int
void q_eventloop_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QEventLoop*
/// @param id enum Qt__TimerId
void q_eventloop_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QEventLoop*
libqt_list /* of QObject* */ q_eventloop_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QEventLoop*
/// @param parent QObject*
void q_eventloop_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QEventLoop*
/// @param filterObj QObject*
void q_eventloop_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QEventLoop*
/// @param obj QObject*
void q_eventloop_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_eventloop_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QEventLoop*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_eventloop_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_eventloop_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_eventloop_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QEventLoop*
void q_eventloop_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QEventLoop*
void q_eventloop_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QEventLoop*
/// @param name const char*
/// @param value QVariant*
bool q_eventloop_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QEventLoop*
/// @param name const char*
QVariant* q_eventloop_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QEventLoop*
const char** q_eventloop_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QEventLoop*
QBindingStorage* q_eventloop_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QEventLoop*
const QBindingStorage* q_eventloop_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QEventLoop*
void q_eventloop_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QEventLoop*
/// @param callback void func(QEventLoop* self)
void q_eventloop_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QEventLoop*
QObject* q_eventloop_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QEventLoop*
/// @param classname const char*
bool q_eventloop_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QEventLoop*
void q_eventloop_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QEventLoop*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_eventloop_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QEventLoop*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_eventloop_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_eventloop_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QEventLoop*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_eventloop_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QEventLoop*
/// @param param1 QObject*
void q_eventloop_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QEventLoop*
/// @param callback void func(QEventLoop* self, QObject* param1)
void q_eventloop_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QEventLoop*
/// @param watched QObject*
/// @param event QEvent*
bool q_eventloop_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QEventLoop*
/// @param watched QObject*
/// @param event QEvent*
bool q_eventloop_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QEventLoop*
/// @param callback bool func(QEventLoop* self, QObject* watched, QEvent* event)
void q_eventloop_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QEventLoop*
/// @param event QTimerEvent*
void q_eventloop_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QEventLoop*
/// @param event QTimerEvent*
void q_eventloop_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QEventLoop*
/// @param callback void func(QEventLoop* self, QTimerEvent* event)
void q_eventloop_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QEventLoop*
/// @param event QChildEvent*
void q_eventloop_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QEventLoop*
/// @param event QChildEvent*
void q_eventloop_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QEventLoop*
/// @param callback void func(QEventLoop* self, QChildEvent* event)
void q_eventloop_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QEventLoop*
/// @param event QEvent*
void q_eventloop_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QEventLoop*
/// @param event QEvent*
void q_eventloop_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QEventLoop*
/// @param callback void func(QEventLoop* self, QEvent* event)
void q_eventloop_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QEventLoop*
/// @param signal QMetaMethod*
void q_eventloop_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QEventLoop*
/// @param signal QMetaMethod*
void q_eventloop_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QEventLoop*
/// @param callback void func(QEventLoop* self, QMetaMethod* signal)
void q_eventloop_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QEventLoop*
/// @param signal QMetaMethod*
void q_eventloop_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QEventLoop*
/// @param signal QMetaMethod*
void q_eventloop_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QEventLoop*
/// @param callback void func(QEventLoop* self, QMetaMethod* signal)
void q_eventloop_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QEventLoop*
QObject* q_eventloop_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QEventLoop*
QObject* q_eventloop_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QEventLoop*
/// @param callback QObject* func()
void q_eventloop_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QEventLoop*
int32_t q_eventloop_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QEventLoop*
int32_t q_eventloop_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QEventLoop*
/// @param callback int32_t func()
void q_eventloop_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QEventLoop*
/// @param signal const char*
int32_t q_eventloop_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QEventLoop*
/// @param signal const char*
int32_t q_eventloop_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QEventLoop*
/// @param callback int32_t func(QEventLoop* self, const char* signal)
void q_eventloop_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QEventLoop*
/// @param signal QMetaMethod*
bool q_eventloop_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QEventLoop*
/// @param signal QMetaMethod*
bool q_eventloop_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QEventLoop*
/// @param callback bool func(QEventLoop* self, QMetaMethod* signal)
void q_eventloop_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QEventLoop*
/// @param callback void func(QEventLoop* self, const char* objectName)
void q_eventloop_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qeventloop.html#dtor.QEventLoop)
///
/// Delete this object from C++ memory.
///
/// @param self QEventLoop*
void q_eventloop_delete(void* self);

/// https://doc.qt.io/qt-6/qeventlooplocker.html

/// q_eventlooplocker_new constructs a new QEventLoopLocker object.
///
QEventLoopLocker* q_eventlooplocker_new();

/// q_eventlooplocker_new2 constructs a new QEventLoopLocker object.
///
/// @param loop QEventLoop*
QEventLoopLocker* q_eventlooplocker_new2(void* loop);

/// q_eventlooplocker_new3 constructs a new QEventLoopLocker object.
///
/// @param thread QThread*
QEventLoopLocker* q_eventlooplocker_new3(void* thread);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventlooplocker.html#swap)
///
/// @param self QEventLoopLocker*
/// @param other QEventLoopLocker*
void q_eventlooplocker_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qeventlooplocker.html#dtor.QEventLoopLocker)
///
/// Delete this object from C++ memory.
///
/// @param self QEventLoopLocker*
void q_eventlooplocker_delete(void* self);

/// https://doc.qt.io/qt-6/qeventloop.html#types

typedef enum {
    QEVENTLOOP_PROCESSEVENTSFLAG_ALLEVENTS = 0,
    QEVENTLOOP_PROCESSEVENTSFLAG_EXCLUDEUSERINPUTEVENTS = 1,
    QEVENTLOOP_PROCESSEVENTSFLAG_EXCLUDESOCKETNOTIFIERS = 2,
    QEVENTLOOP_PROCESSEVENTSFLAG_WAITFORMOREEVENTS = 4,
    QEVENTLOOP_PROCESSEVENTSFLAG_X11EXCLUDETIMERS = 8,
    QEVENTLOOP_PROCESSEVENTSFLAG_EVENTLOOPEXEC = 32,
    QEVENTLOOP_PROCESSEVENTSFLAG_DIALOGEXEC = 64,
    QEVENTLOOP_PROCESSEVENTSFLAG_APPLICATIONEXEC = 128
} QEventLoop__ProcessEventsFlag;

#endif
