#pragma once
#ifndef SRC_STATEMACHINE_QT6C_LIBQHISTORYSTATE_H
#define SRC_STATEMACHINE_QT6C_LIBQHISTORYSTATE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qhistorystate.html)

/// q_historystate_new constructs a new QHistoryState object.
///
QHistoryState* q_historystate_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qhistorystate.html)

/// q_historystate_new2 constructs a new QHistoryState object.
///
/// @param type enum QHistoryState__HistoryType
///
QHistoryState* q_historystate_new2(int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qhistorystate.html)

/// q_historystate_new3 constructs a new QHistoryState object.
///
/// @param parent QState*
///
QHistoryState* q_historystate_new3(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qhistorystate.html)

/// q_historystate_new4 constructs a new QHistoryState object.
///
/// @param type enum QHistoryState__HistoryType
/// @param parent QState*
///
QHistoryState* q_historystate_new4(int32_t type, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QHistoryState*
///
const QMetaObject* q_historystate_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QHistoryState*
/// @param callback const QMetaObject* func()
///
void q_historystate_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QHistoryState*
///
const QMetaObject* q_historystate_qbase_meta_object(void* self);

/// @param self QHistoryState*
/// @param param1 const char*
///
void* q_historystate_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QHistoryState*
/// @param callback void* func(QHistoryState* self, const char* param1)
///
void q_historystate_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QHistoryState*
/// @param param1 const char*
///
void* q_historystate_qbase_metacast(void* self, const char* param1);

/// @param self QHistoryState*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_historystate_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QHistoryState*
/// @param callback int32_t func(QHistoryState* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_historystate_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QHistoryState*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_historystate_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_historystate_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qhistorystate.html#defaultTransition)
///
/// @param self QHistoryState*
///
QAbstractTransition* q_historystate_default_transition(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhistorystate.html#setDefaultTransition)
///
/// @param self QHistoryState*
/// @param transition QAbstractTransition*
///
void q_historystate_set_default_transition(void* self, void* transition);

/// [Upstream resources](https://doc.qt.io/qt-6/qhistorystate.html#defaultState)
///
/// @param self QHistoryState*
///
QAbstractState* q_historystate_default_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhistorystate.html#setDefaultState)
///
/// @param self QHistoryState*
/// @param state QAbstractState*
///
void q_historystate_set_default_state(void* self, void* state);

/// [Upstream resources](https://doc.qt.io/qt-6/qhistorystate.html#historyType)
///
/// @param self QHistoryState*
///
/// @return enum QHistoryState__HistoryType
///
int32_t q_historystate_history_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhistorystate.html#setHistoryType)
///
/// @param self QHistoryState*
/// @param type enum QHistoryState__HistoryType
///
void q_historystate_set_history_type(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qhistorystate.html#onEntry)
///
/// @param self QHistoryState*
/// @param event QEvent*
///
void q_historystate_on_entry(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qhistorystate.html#onEntry)
///
/// Allows for overriding the related default method
///
/// @param self QHistoryState*
/// @param callback void func(QHistoryState* self, QEvent* event)
///
void q_historystate_on_on_entry(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhistorystate.html#onEntry)
///
/// Base class method implementation
///
/// @param self QHistoryState*
/// @param event QEvent*
///
void q_historystate_qbase_on_entry(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qhistorystate.html#onExit)
///
/// @param self QHistoryState*
/// @param event QEvent*
///
void q_historystate_on_exit(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qhistorystate.html#onExit)
///
/// Allows for overriding the related default method
///
/// @param self QHistoryState*
/// @param callback void func(QHistoryState* self, QEvent* event)
///
void q_historystate_on_on_exit(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhistorystate.html#onExit)
///
/// Base class method implementation
///
/// @param self QHistoryState*
/// @param event QEvent*
///
void q_historystate_qbase_on_exit(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qhistorystate.html#event)
///
/// @param self QHistoryState*
/// @param e QEvent*
///
bool q_historystate_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qhistorystate.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QHistoryState*
/// @param callback bool func(QHistoryState* self, QEvent* e)
///
void q_historystate_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhistorystate.html#event)
///
/// Base class method implementation
///
/// @param self QHistoryState*
/// @param e QEvent*
///
bool q_historystate_qbase_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_historystate_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_historystate_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#parentState)
///
/// @param self QHistoryState*
///
QState* q_historystate_parent_state(void* self);

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#machine)
///
/// @param self QHistoryState*
///
QStateMachine* q_historystate_machine(void* self);

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#active)
///
/// @param self QHistoryState*
///
bool q_historystate_active(void* self);

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#activeChanged)
///
/// @param self QHistoryState*
/// @param active bool
///
void q_historystate_active_changed(void* self, bool active);

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#activeChanged)
///
/// @param self QHistoryState*
/// @param callback void func(QHistoryState* self, bool active)
///
void q_historystate_on_active_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QHistoryState*
///
const char* q_historystate_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QHistoryState*
/// @param name const char*
///
void q_historystate_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QHistoryState*
///
bool q_historystate_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QHistoryState*
///
bool q_historystate_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QHistoryState*
///
bool q_historystate_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QHistoryState*
///
bool q_historystate_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QHistoryState*
/// @param b bool
///
bool q_historystate_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QHistoryState*
///
QThread* q_historystate_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QHistoryState*
/// @param thread QThread*
///
bool q_historystate_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHistoryState*
/// @param interval int
///
int32_t q_historystate_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHistoryState*
/// @param time int64_t of nanoseconds
///
int32_t q_historystate_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QHistoryState*
/// @param id int
///
void q_historystate_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QHistoryState*
/// @param id enum Qt__TimerId
///
void q_historystate_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QHistoryState*
///
/// @return libqt_list of QObject*
///
libqt_list q_historystate_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QHistoryState*
/// @param parent QObject*
///
void q_historystate_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QHistoryState*
/// @param filterObj QObject*
///
void q_historystate_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QHistoryState*
/// @param obj QObject*
///
void q_historystate_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_historystate_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_historystate_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QHistoryState*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_historystate_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_historystate_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_historystate_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QHistoryState*
///
bool q_historystate_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QHistoryState*
/// @param receiver QObject*
///
bool q_historystate_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_historystate_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QHistoryState*
///
void q_historystate_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QHistoryState*
///
void q_historystate_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QHistoryState*
/// @param name const char*
/// @param value QVariant*
///
bool q_historystate_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QHistoryState*
/// @param name const char*
///
QVariant* q_historystate_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QHistoryState*
///
const char** q_historystate_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QHistoryState*
///
QBindingStorage* q_historystate_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QHistoryState*
///
const QBindingStorage* q_historystate_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHistoryState*
///
void q_historystate_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHistoryState*
/// @param callback void func(QHistoryState* self)
///
void q_historystate_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QHistoryState*
///
QObject* q_historystate_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QHistoryState*
/// @param classname const char*
///
bool q_historystate_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QHistoryState*
///
void q_historystate_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHistoryState*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_historystate_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QHistoryState*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_historystate_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_historystate_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_historystate_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QHistoryState*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_historystate_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QHistoryState*
/// @param signal const char*
///
bool q_historystate_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QHistoryState*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_historystate_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QHistoryState*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_historystate_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QHistoryState*
/// @param receiver QObject*
/// @param member const char*
///
bool q_historystate_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHistoryState*
/// @param param1 QObject*
///
void q_historystate_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QHistoryState*
/// @param callback void func(QHistoryState* self, QObject* param1)
///
void q_historystate_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHistoryState*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_historystate_event_filter(void* self, void* watched, void* event);

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHistoryState*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_historystate_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHistoryState*
/// @param callback bool func(QHistoryState* self, QObject* watched, QEvent* event)
///
void q_historystate_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHistoryState*
/// @param event QTimerEvent*
///
void q_historystate_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHistoryState*
/// @param event QTimerEvent*
///
void q_historystate_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHistoryState*
/// @param callback void func(QHistoryState* self, QTimerEvent* event)
///
void q_historystate_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHistoryState*
/// @param event QChildEvent*
///
void q_historystate_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHistoryState*
/// @param event QChildEvent*
///
void q_historystate_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHistoryState*
/// @param callback void func(QHistoryState* self, QChildEvent* event)
///
void q_historystate_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHistoryState*
/// @param event QEvent*
///
void q_historystate_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHistoryState*
/// @param event QEvent*
///
void q_historystate_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHistoryState*
/// @param callback void func(QHistoryState* self, QEvent* event)
///
void q_historystate_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHistoryState*
/// @param signal QMetaMethod*
///
void q_historystate_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHistoryState*
/// @param signal QMetaMethod*
///
void q_historystate_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHistoryState*
/// @param callback void func(QHistoryState* self, QMetaMethod* signal)
///
void q_historystate_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHistoryState*
/// @param signal QMetaMethod*
///
void q_historystate_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHistoryState*
/// @param signal QMetaMethod*
///
void q_historystate_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHistoryState*
/// @param callback void func(QHistoryState* self, QMetaMethod* signal)
///
void q_historystate_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHistoryState*
///
QObject* q_historystate_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHistoryState*
///
QObject* q_historystate_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHistoryState*
/// @param callback QObject* func()
///
void q_historystate_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHistoryState*
///
int32_t q_historystate_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHistoryState*
///
int32_t q_historystate_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHistoryState*
/// @param callback int32_t func()
///
void q_historystate_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHistoryState*
/// @param signal const char*
///
int32_t q_historystate_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHistoryState*
/// @param signal const char*
///
int32_t q_historystate_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHistoryState*
/// @param callback int32_t func(QHistoryState* self, const char* signal)
///
void q_historystate_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QHistoryState*
/// @param signal QMetaMethod*
///
bool q_historystate_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QHistoryState*
/// @param signal QMetaMethod*
///
bool q_historystate_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QHistoryState*
/// @param callback bool func(QHistoryState* self, QMetaMethod* signal)
///
void q_historystate_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhistorystate.html#defaultTransitionChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QHistoryState*
/// @param callback void func(QHistoryState* self)
///
void q_historystate_on_default_transition_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhistorystate.html#defaultStateChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QHistoryState*
/// @param callback void func(QHistoryState* self)
///
void q_historystate_on_default_state_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhistorystate.html#historyTypeChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QHistoryState*
/// @param callback void func(QHistoryState* self)
///
void q_historystate_on_history_type_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#entered)
///
/// Wrapper to allow calling private signal
///
/// @param self QHistoryState*
/// @param callback void func(QHistoryState* self)
///
void q_historystate_on_entered(void* self, void (*callback)(void*));

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#exited)
///
/// Wrapper to allow calling private signal
///
/// @param self QHistoryState*
/// @param callback void func(QHistoryState* self)
///
void q_historystate_on_exited(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QHistoryState*
/// @param callback void func(QHistoryState* self, const char* objectName)
///
void q_historystate_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qhistorystate.html#dtor.QHistoryState)
///
/// Delete this object from C++ memory.
///
/// @param self QHistoryState*
///
void q_historystate_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhistorystate.html#public-types)

typedef enum {
    QHISTORYSTATE_HISTORYTYPE_SHALLOWHISTORY = 0,
    QHISTORYSTATE_HISTORYTYPE_DEEPHISTORY = 1
} QHistoryState__HistoryType;

#endif
