#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUS_QT6C_LIBQDBUSPENDINGCALL_H
#define SRC_POSIX_EXTRAS_DBUS_QT6C_LIBQDBUSPENDINGCALL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html)

/// q_dbuspendingcall_new constructs a new QDBusPendingCall object.
///
/// @param other QDBusPendingCall*
///
QDBusPendingCall* q_dbuspendingcall_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#operator-eq)
///
/// @param self QDBusPendingCall*
/// @param other QDBusPendingCall*
///
void q_dbuspendingcall_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#swap)
///
/// @param self QDBusPendingCall*
/// @param other QDBusPendingCall*
///
void q_dbuspendingcall_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#isFinished)
///
/// @param self QDBusPendingCall*
///
bool q_dbuspendingcall_is_finished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#waitForFinished)
///
/// @param self QDBusPendingCall*
///
void q_dbuspendingcall_wait_for_finished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#isError)
///
/// @param self QDBusPendingCall*
///
bool q_dbuspendingcall_is_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#isValid)
///
/// @param self QDBusPendingCall*
///
bool q_dbuspendingcall_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#error)
///
/// @param self QDBusPendingCall*
///
QDBusError* q_dbuspendingcall_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#reply)
///
/// @param self QDBusPendingCall*
///
QDBusMessage* q_dbuspendingcall_reply(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#fromError)
///
/// @param error QDBusError*
///
QDBusPendingCall* q_dbuspendingcall_from_error(void* error);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#fromCompletedCall)
///
/// @param message QDBusMessage*
///
QDBusPendingCall* q_dbuspendingcall_from_completed_call(void* message);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#dtor.QDBusPendingCall)
///
/// Delete this object from C++ memory.
///
/// @param self QDBusPendingCall*
///
void q_dbuspendingcall_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcallwatcher.html)

/// q_dbuspendingcallwatcher_new constructs a new QDBusPendingCallWatcher object.
///
/// @param call QDBusPendingCall*
///
QDBusPendingCallWatcher* q_dbuspendingcallwatcher_new(void* call);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcallwatcher.html)

/// q_dbuspendingcallwatcher_new2 constructs a new QDBusPendingCallWatcher object.
///
/// @param call QDBusPendingCall*
/// @param parent QObject*
///
QDBusPendingCallWatcher* q_dbuspendingcallwatcher_new2(void* call, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QDBusPendingCallWatcher*
///
const QMetaObject* q_dbuspendingcallwatcher_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QDBusPendingCallWatcher*
/// @param callback const QMetaObject* func()
///
void q_dbuspendingcallwatcher_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QDBusPendingCallWatcher*
///
const QMetaObject* q_dbuspendingcallwatcher_qbase_meta_object(void* self);

/// @param self QDBusPendingCallWatcher*
/// @param param1 const char*
///
void* q_dbuspendingcallwatcher_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QDBusPendingCallWatcher*
/// @param callback void* func(QDBusPendingCallWatcher* self, const char* param1)
///
void q_dbuspendingcallwatcher_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QDBusPendingCallWatcher*
/// @param param1 const char*
///
void* q_dbuspendingcallwatcher_qbase_metacast(void* self, const char* param1);

/// @param self QDBusPendingCallWatcher*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_dbuspendingcallwatcher_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QDBusPendingCallWatcher*
/// @param callback int32_t func(QDBusPendingCallWatcher* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_dbuspendingcallwatcher_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QDBusPendingCallWatcher*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_dbuspendingcallwatcher_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_dbuspendingcallwatcher_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcallwatcher.html#waitForFinished)
///
/// @param self QDBusPendingCallWatcher*
///
void q_dbuspendingcallwatcher_wait_for_finished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcallwatcher.html#finished)
///
/// @param self QDBusPendingCallWatcher*
///
void q_dbuspendingcallwatcher_finished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcallwatcher.html#finished)
///
/// @param self QDBusPendingCallWatcher*
/// @param callback void func(QDBusPendingCallWatcher* self)
///
void q_dbuspendingcallwatcher_on_finished(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_dbuspendingcallwatcher_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_dbuspendingcallwatcher_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcallwatcher.html#finished)
///
/// @param self QDBusPendingCallWatcher*
/// @param selfVal QDBusPendingCallWatcher*
///
void q_dbuspendingcallwatcher_finished1(void* self, void* selfVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcallwatcher.html#finished)
///
/// @param self QDBusPendingCallWatcher*
/// @param callback void func(QDBusPendingCallWatcher* self, QDBusPendingCallWatcher* selfVal)
///
void q_dbuspendingcallwatcher_on_finished1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDBusPendingCallWatcher*
///
const char* q_dbuspendingcallwatcher_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDBusPendingCallWatcher*
/// @param name char*
///
void q_dbuspendingcallwatcher_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QDBusPendingCallWatcher*
///
bool q_dbuspendingcallwatcher_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QDBusPendingCallWatcher*
///
bool q_dbuspendingcallwatcher_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QDBusPendingCallWatcher*
///
bool q_dbuspendingcallwatcher_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QDBusPendingCallWatcher*
///
bool q_dbuspendingcallwatcher_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDBusPendingCallWatcher*
/// @param b bool
///
bool q_dbuspendingcallwatcher_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QDBusPendingCallWatcher*
///
QThread* q_dbuspendingcallwatcher_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDBusPendingCallWatcher*
/// @param thread QThread*
///
bool q_dbuspendingcallwatcher_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDBusPendingCallWatcher*
/// @param interval int
///
int32_t q_dbuspendingcallwatcher_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDBusPendingCallWatcher*
/// @param time int64_t of nanoseconds
///
int32_t q_dbuspendingcallwatcher_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDBusPendingCallWatcher*
/// @param id int
///
void q_dbuspendingcallwatcher_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDBusPendingCallWatcher*
/// @param id enum Qt__TimerId
///
void q_dbuspendingcallwatcher_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QDBusPendingCallWatcher*
///
/// @return libqt_list of QObject*
///
libqt_list q_dbuspendingcallwatcher_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QDBusPendingCallWatcher*
/// @param parent QObject*
///
void q_dbuspendingcallwatcher_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDBusPendingCallWatcher*
/// @param filterObj QObject*
///
void q_dbuspendingcallwatcher_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDBusPendingCallWatcher*
/// @param obj QObject*
///
void q_dbuspendingcallwatcher_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_dbuspendingcallwatcher_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDBusPendingCallWatcher*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_dbuspendingcallwatcher_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_dbuspendingcallwatcher_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_dbuspendingcallwatcher_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QDBusPendingCallWatcher*
///
void q_dbuspendingcallwatcher_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QDBusPendingCallWatcher*
///
void q_dbuspendingcallwatcher_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDBusPendingCallWatcher*
/// @param name const char*
/// @param value QVariant*
///
bool q_dbuspendingcallwatcher_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QDBusPendingCallWatcher*
/// @param name const char*
///
QVariant* q_dbuspendingcallwatcher_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDBusPendingCallWatcher*
///
const char** q_dbuspendingcallwatcher_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDBusPendingCallWatcher*
///
QBindingStorage* q_dbuspendingcallwatcher_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDBusPendingCallWatcher*
///
const QBindingStorage* q_dbuspendingcallwatcher_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDBusPendingCallWatcher*
///
void q_dbuspendingcallwatcher_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDBusPendingCallWatcher*
/// @param callback void func(QDBusPendingCallWatcher* self)
///
void q_dbuspendingcallwatcher_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QDBusPendingCallWatcher*
///
QObject* q_dbuspendingcallwatcher_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QDBusPendingCallWatcher*
/// @param classname const char*
///
bool q_dbuspendingcallwatcher_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDBusPendingCallWatcher*
///
void q_dbuspendingcallwatcher_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDBusPendingCallWatcher*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_dbuspendingcallwatcher_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDBusPendingCallWatcher*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_dbuspendingcallwatcher_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDBusPendingCallWatcher*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_dbuspendingcallwatcher_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_dbuspendingcallwatcher_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDBusPendingCallWatcher*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_dbuspendingcallwatcher_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDBusPendingCallWatcher*
/// @param param1 QObject*
///
void q_dbuspendingcallwatcher_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDBusPendingCallWatcher*
/// @param callback void func(QDBusPendingCallWatcher* self, QObject* param1)
///
void q_dbuspendingcallwatcher_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QDBusPendingCall
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#operator-eq)
///
/// @param self QDBusPendingCallWatcher*
/// @param other QDBusPendingCall*
///
void q_dbuspendingcallwatcher_operator_assign(void* self, void* other);

/// Inherited from QDBusPendingCall
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#swap)
///
/// @param self QDBusPendingCallWatcher*
/// @param other QDBusPendingCall*
///
void q_dbuspendingcallwatcher_swap(void* self, void* other);

/// Inherited from QDBusPendingCall
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#isFinished)
///
/// @param self QDBusPendingCallWatcher*
///
bool q_dbuspendingcallwatcher_is_finished(void* self);

/// Inherited from QDBusPendingCall
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#isError)
///
/// @param self QDBusPendingCallWatcher*
///
bool q_dbuspendingcallwatcher_is_error(void* self);

/// Inherited from QDBusPendingCall
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#isValid)
///
/// @param self QDBusPendingCallWatcher*
///
bool q_dbuspendingcallwatcher_is_valid(void* self);

/// Inherited from QDBusPendingCall
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#error)
///
/// @param self QDBusPendingCallWatcher*
///
QDBusError* q_dbuspendingcallwatcher_error(void* self);

/// Inherited from QDBusPendingCall
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#reply)
///
/// @param self QDBusPendingCallWatcher*
///
QDBusMessage* q_dbuspendingcallwatcher_reply(void* self);

/// Inherited from QDBusPendingCall
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#fromError)
///
/// @param error QDBusError*
///
QDBusPendingCall* q_dbuspendingcallwatcher_from_error(void* error);

/// Inherited from QDBusPendingCall
///
/// [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcall.html#fromCompletedCall)
///
/// @param message QDBusMessage*
///
QDBusPendingCall* q_dbuspendingcallwatcher_from_completed_call(void* message);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
/// @param event QEvent*
///
bool q_dbuspendingcallwatcher_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
/// @param event QEvent*
///
bool q_dbuspendingcallwatcher_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
/// @param callback bool func(QDBusPendingCallWatcher* self, QEvent* event)
///
void q_dbuspendingcallwatcher_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_dbuspendingcallwatcher_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_dbuspendingcallwatcher_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
/// @param callback bool func(QDBusPendingCallWatcher* self, QObject* watched, QEvent* event)
///
void q_dbuspendingcallwatcher_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
/// @param event QTimerEvent*
///
void q_dbuspendingcallwatcher_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
/// @param event QTimerEvent*
///
void q_dbuspendingcallwatcher_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
/// @param callback void func(QDBusPendingCallWatcher* self, QTimerEvent* event)
///
void q_dbuspendingcallwatcher_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
/// @param event QChildEvent*
///
void q_dbuspendingcallwatcher_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
/// @param event QChildEvent*
///
void q_dbuspendingcallwatcher_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
/// @param callback void func(QDBusPendingCallWatcher* self, QChildEvent* event)
///
void q_dbuspendingcallwatcher_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
/// @param event QEvent*
///
void q_dbuspendingcallwatcher_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
/// @param event QEvent*
///
void q_dbuspendingcallwatcher_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
/// @param callback void func(QDBusPendingCallWatcher* self, QEvent* event)
///
void q_dbuspendingcallwatcher_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
/// @param signal QMetaMethod*
///
void q_dbuspendingcallwatcher_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
/// @param signal QMetaMethod*
///
void q_dbuspendingcallwatcher_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
/// @param callback void func(QDBusPendingCallWatcher* self, QMetaMethod* signal)
///
void q_dbuspendingcallwatcher_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
/// @param signal QMetaMethod*
///
void q_dbuspendingcallwatcher_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
/// @param signal QMetaMethod*
///
void q_dbuspendingcallwatcher_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
/// @param callback void func(QDBusPendingCallWatcher* self, QMetaMethod* signal)
///
void q_dbuspendingcallwatcher_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
///
QObject* q_dbuspendingcallwatcher_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
///
QObject* q_dbuspendingcallwatcher_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
/// @param callback QObject* func()
///
void q_dbuspendingcallwatcher_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
///
int32_t q_dbuspendingcallwatcher_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
///
int32_t q_dbuspendingcallwatcher_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
/// @param callback int32_t func()
///
void q_dbuspendingcallwatcher_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
/// @param signal const char*
///
int32_t q_dbuspendingcallwatcher_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
/// @param signal const char*
///
int32_t q_dbuspendingcallwatcher_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
/// @param callback int32_t func(QDBusPendingCallWatcher* self, const char* signal)
///
void q_dbuspendingcallwatcher_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
/// @param signal QMetaMethod*
///
bool q_dbuspendingcallwatcher_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
/// @param signal QMetaMethod*
///
bool q_dbuspendingcallwatcher_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusPendingCallWatcher*
/// @param callback bool func(QDBusPendingCallWatcher* self, QMetaMethod* signal)
///
void q_dbuspendingcallwatcher_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QDBusPendingCallWatcher*
/// @param callback void func(QDBusPendingCallWatcher* self, const char* objectName)
///
void q_dbuspendingcallwatcher_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdbuspendingcallwatcher.html#dtor.QDBusPendingCallWatcher)
///
/// Delete this object from C++ memory.
///
/// @param self QDBusPendingCallWatcher*
///
void q_dbuspendingcallwatcher_delete(void* self);

#endif
