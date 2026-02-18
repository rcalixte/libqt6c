#pragma once
#ifndef SRC_STATEMACHINE_QT6C_LIBQFINALSTATE_H
#define SRC_STATEMACHINE_QT6C_LIBQFINALSTATE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qfinalstate.html)

/// q_finalstate_new constructs a new QFinalState object.
///
QFinalState* q_finalstate_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qfinalstate.html)

/// q_finalstate_new2 constructs a new QFinalState object.
///
/// @param parent QState*
///
QFinalState* q_finalstate_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QFinalState*
///
const QMetaObject* q_finalstate_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QFinalState*
/// @param callback const QMetaObject* func()
///
void q_finalstate_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QFinalState*
///
const QMetaObject* q_finalstate_qbase_meta_object(void* self);

/// @param self QFinalState*
/// @param param1 const char*
///
void* q_finalstate_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QFinalState*
/// @param callback void* func(QFinalState* self, const char* param1)
///
void q_finalstate_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QFinalState*
/// @param param1 const char*
///
void* q_finalstate_qbase_metacast(void* self, const char* param1);

/// @param self QFinalState*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_finalstate_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QFinalState*
/// @param callback int32_t func(QFinalState* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_finalstate_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QFinalState*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_finalstate_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_finalstate_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qfinalstate.html#onEntry)
///
/// @param self QFinalState*
/// @param event QEvent*
///
void q_finalstate_on_entry(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qfinalstate.html#onEntry)
///
/// Allows for overriding the related default method
///
/// @param self QFinalState*
/// @param callback void func(QFinalState* self, QEvent* event)
///
void q_finalstate_on_on_entry(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfinalstate.html#onEntry)
///
/// Base class method implementation
///
/// @param self QFinalState*
/// @param event QEvent*
///
void q_finalstate_qbase_on_entry(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qfinalstate.html#onExit)
///
/// @param self QFinalState*
/// @param event QEvent*
///
void q_finalstate_on_exit(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qfinalstate.html#onExit)
///
/// Allows for overriding the related default method
///
/// @param self QFinalState*
/// @param callback void func(QFinalState* self, QEvent* event)
///
void q_finalstate_on_on_exit(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfinalstate.html#onExit)
///
/// Base class method implementation
///
/// @param self QFinalState*
/// @param event QEvent*
///
void q_finalstate_qbase_on_exit(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qfinalstate.html#event)
///
/// @param self QFinalState*
/// @param e QEvent*
///
bool q_finalstate_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qfinalstate.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QFinalState*
/// @param callback bool func(QFinalState* self, QEvent* e)
///
void q_finalstate_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfinalstate.html#event)
///
/// Base class method implementation
///
/// @param self QFinalState*
/// @param e QEvent*
///
bool q_finalstate_qbase_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_finalstate_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_finalstate_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#parentState)
///
/// @param self QFinalState*
///
QState* q_finalstate_parent_state(void* self);

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#machine)
///
/// @param self QFinalState*
///
QStateMachine* q_finalstate_machine(void* self);

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#active)
///
/// @param self QFinalState*
///
bool q_finalstate_active(void* self);

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#activeChanged)
///
/// @param self QFinalState*
/// @param active bool
///
void q_finalstate_active_changed(void* self, bool active);

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#activeChanged)
///
/// @param self QFinalState*
/// @param callback void func(QFinalState* self, bool active)
///
void q_finalstate_on_active_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QFinalState*
///
const char* q_finalstate_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QFinalState*
/// @param name const char*
///
void q_finalstate_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QFinalState*
///
bool q_finalstate_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QFinalState*
///
bool q_finalstate_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QFinalState*
///
bool q_finalstate_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QFinalState*
///
bool q_finalstate_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QFinalState*
/// @param b bool
///
bool q_finalstate_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QFinalState*
///
QThread* q_finalstate_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QFinalState*
/// @param thread QThread*
///
bool q_finalstate_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFinalState*
/// @param interval int
///
int32_t q_finalstate_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFinalState*
/// @param time int64_t of nanoseconds
///
int32_t q_finalstate_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QFinalState*
/// @param id int
///
void q_finalstate_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QFinalState*
/// @param id enum Qt__TimerId
///
void q_finalstate_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QFinalState*
///
/// @return libqt_list of QObject*
///
libqt_list q_finalstate_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QFinalState*
/// @param parent QObject*
///
void q_finalstate_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QFinalState*
/// @param filterObj QObject*
///
void q_finalstate_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QFinalState*
/// @param obj QObject*
///
void q_finalstate_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_finalstate_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_finalstate_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QFinalState*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_finalstate_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_finalstate_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_finalstate_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QFinalState*
///
bool q_finalstate_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QFinalState*
/// @param receiver QObject*
///
bool q_finalstate_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_finalstate_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QFinalState*
///
void q_finalstate_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QFinalState*
///
void q_finalstate_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QFinalState*
/// @param name const char*
/// @param value QVariant*
///
bool q_finalstate_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QFinalState*
/// @param name const char*
///
QVariant* q_finalstate_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QFinalState*
///
const char** q_finalstate_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QFinalState*
///
QBindingStorage* q_finalstate_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QFinalState*
///
const QBindingStorage* q_finalstate_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFinalState*
///
void q_finalstate_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFinalState*
/// @param callback void func(QFinalState* self)
///
void q_finalstate_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QFinalState*
///
QObject* q_finalstate_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QFinalState*
/// @param classname const char*
///
bool q_finalstate_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QFinalState*
///
void q_finalstate_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFinalState*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_finalstate_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QFinalState*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_finalstate_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_finalstate_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_finalstate_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QFinalState*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_finalstate_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QFinalState*
/// @param signal const char*
///
bool q_finalstate_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QFinalState*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_finalstate_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QFinalState*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_finalstate_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QFinalState*
/// @param receiver QObject*
/// @param member const char*
///
bool q_finalstate_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFinalState*
/// @param param1 QObject*
///
void q_finalstate_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QFinalState*
/// @param callback void func(QFinalState* self, QObject* param1)
///
void q_finalstate_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFinalState*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_finalstate_event_filter(void* self, void* watched, void* event);

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFinalState*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_finalstate_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFinalState*
/// @param callback bool func(QFinalState* self, QObject* watched, QEvent* event)
///
void q_finalstate_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFinalState*
/// @param event QTimerEvent*
///
void q_finalstate_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFinalState*
/// @param event QTimerEvent*
///
void q_finalstate_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFinalState*
/// @param callback void func(QFinalState* self, QTimerEvent* event)
///
void q_finalstate_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFinalState*
/// @param event QChildEvent*
///
void q_finalstate_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFinalState*
/// @param event QChildEvent*
///
void q_finalstate_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFinalState*
/// @param callback void func(QFinalState* self, QChildEvent* event)
///
void q_finalstate_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFinalState*
/// @param event QEvent*
///
void q_finalstate_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFinalState*
/// @param event QEvent*
///
void q_finalstate_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFinalState*
/// @param callback void func(QFinalState* self, QEvent* event)
///
void q_finalstate_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFinalState*
/// @param signal QMetaMethod*
///
void q_finalstate_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFinalState*
/// @param signal QMetaMethod*
///
void q_finalstate_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFinalState*
/// @param callback void func(QFinalState* self, QMetaMethod* signal)
///
void q_finalstate_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFinalState*
/// @param signal QMetaMethod*
///
void q_finalstate_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFinalState*
/// @param signal QMetaMethod*
///
void q_finalstate_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFinalState*
/// @param callback void func(QFinalState* self, QMetaMethod* signal)
///
void q_finalstate_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFinalState*
///
QObject* q_finalstate_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFinalState*
///
QObject* q_finalstate_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFinalState*
/// @param callback QObject* func()
///
void q_finalstate_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFinalState*
///
int32_t q_finalstate_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFinalState*
///
int32_t q_finalstate_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFinalState*
/// @param callback int32_t func()
///
void q_finalstate_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFinalState*
/// @param signal const char*
///
int32_t q_finalstate_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFinalState*
/// @param signal const char*
///
int32_t q_finalstate_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFinalState*
/// @param callback int32_t func(QFinalState* self, const char* signal)
///
void q_finalstate_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QFinalState*
/// @param signal QMetaMethod*
///
bool q_finalstate_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QFinalState*
/// @param signal QMetaMethod*
///
bool q_finalstate_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QFinalState*
/// @param callback bool func(QFinalState* self, QMetaMethod* signal)
///
void q_finalstate_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#entered)
///
/// Wrapper to allow calling private signal
///
/// @param self QFinalState*
/// @param callback void func(QFinalState* self)
///
void q_finalstate_on_entered(void* self, void (*callback)(void*));

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#exited)
///
/// Wrapper to allow calling private signal
///
/// @param self QFinalState*
/// @param callback void func(QFinalState* self)
///
void q_finalstate_on_exited(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QFinalState*
/// @param callback void func(QFinalState* self, const char* objectName)
///
void q_finalstate_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qfinalstate.html#dtor.QFinalState)
///
/// Delete this object from C++ memory.
///
/// @param self QFinalState*
///
void q_finalstate_delete(void* self);

#endif
