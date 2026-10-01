#pragma once
#ifndef STATEMACHINE_LIBQSTATE_H
#define STATEMACHINE_LIBQSTATE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html)

/// q_state_new constructs a new QState object.
///
QState* q_state_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html)

/// q_state_new2 constructs a new QState object.
///
/// @param childMode enum QState__ChildMode
///
QState* q_state_new2(int32_t childMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html)

/// q_state_new3 constructs a new QState object.
///
/// @param parent QState*
///
QState* q_state_new3(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html)

/// q_state_new4 constructs a new QState object.
///
/// @param childMode enum QState__ChildMode
/// @param parent QState*
///
QState* q_state_new4(int32_t childMode, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QState*
///
const QMetaObject* q_state_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QState*
/// @param callback const QMetaObject* func(const QState* self)
///
void q_state_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QState*
///
const QMetaObject* q_state_super_meta_object(const void* self);

/// @param self QState*
/// @param param1 const char*
///
void* q_state_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QState*
/// @param callback void* func(QState* self, const char* param1)
///
void q_state_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QState*
/// @param param1 const char*
///
void* q_state_super_metacast(void* self, const char* param1);

/// @param self QState*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_state_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QState*
/// @param callback int32_t func(QState* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_state_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QState*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_state_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_state_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#errorState)
///
/// @param self const QState*
///
QAbstractState* q_state_error_state(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#setErrorState)
///
/// @param self QState*
/// @param state QAbstractState*
///
void q_state_set_error_state(void* self, void* state);

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#addTransition)
///
/// @param self QState*
/// @param transition QAbstractTransition*
///
void q_state_add_transition(void* self, void* transition);

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#addTransition)
///
/// @param self QState*
/// @param sender QObject*
/// @param signal const char*
/// @param target QAbstractState*
///
QSignalTransition* q_state_add_transition2(void* self, const void* sender, const char* signal, void* target);

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#addTransition)
///
/// @param self QState*
/// @param target QAbstractState*
///
QAbstractTransition* q_state_add_transition3(void* self, void* target);

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#removeTransition)
///
/// @param self QState*
/// @param transition QAbstractTransition*
///
void q_state_remove_transition(void* self, void* transition);

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#transitions)
///
/// @param self const QState*
///
/// @return libqt_list of QAbstractTransition*
///
libqt_list q_state_transitions(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#initialState)
///
/// @param self const QState*
///
QAbstractState* q_state_initial_state(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#setInitialState)
///
/// @param self QState*
/// @param state QAbstractState*
///
void q_state_set_initial_state(void* self, void* state);

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#childMode)
///
/// @param self const QState*
///
/// @return enum QState__ChildMode
///
int32_t q_state_child_mode(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#setChildMode)
///
/// @param self QState*
/// @param mode enum QState__ChildMode
///
void q_state_set_child_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#assignProperty)
///
/// @param self QState*
/// @param object QObject*
/// @param name const char*
/// @param value QVariant*
///
void q_state_assign_property(void* self, void* object, const char* name, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#onEntry)
///
/// @param self QState*
/// @param event QEvent*
///
void q_state_on_entry(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#onEntry)
///
/// Allows for overriding the related default method
///
/// @param self QState*
/// @param callback void func(QState* self, QEvent* event)
///
void q_state_on_on_entry(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#onEntry)
///
/// Base class method implementation
///
/// @param self QState*
/// @param event QEvent*
///
void q_state_super_on_entry(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#onExit)
///
/// @param self QState*
/// @param event QEvent*
///
void q_state_on_exit(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#onExit)
///
/// Allows for overriding the related default method
///
/// @param self QState*
/// @param callback void func(QState* self, QEvent* event)
///
void q_state_on_on_exit(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#onExit)
///
/// Base class method implementation
///
/// @param self QState*
/// @param event QEvent*
///
void q_state_super_on_exit(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#event)
///
/// @param self QState*
/// @param e QEvent*
///
bool q_state_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QState*
/// @param callback bool func(QState* self, QEvent* e)
///
void q_state_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#event)
///
/// Base class method implementation
///
/// @param self QState*
/// @param e QEvent*
///
bool q_state_super_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_state_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_state_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#parentState)
///
/// @param self const QState*
///
QState* q_state_parent_state(const void* self);

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#machine)
///
/// @param self const QState*
///
QStateMachine* q_state_machine(const void* self);

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#active)
///
/// @param self const QState*
///
bool q_state_active(const void* self);

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#activeChanged)
///
/// @param self QState*
/// @param active bool
///
void q_state_active_changed(void* self, bool active);

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#activeChanged)
///
/// @param self QState*
/// @param callback void func(QState* self, bool active)
///
void q_state_on_active_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QState*
///
const char* q_state_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QState*
/// @param name const char*
///
void q_state_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QState*
///
bool q_state_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QState*
///
bool q_state_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QState*
///
bool q_state_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QState*
///
bool q_state_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QState*
/// @param b bool
///
bool q_state_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QState*
///
QThread* q_state_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QState*
/// @param thread QThread*
///
bool q_state_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QState*
/// @param interval int
///
int32_t q_state_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QState*
/// @param time int64_t of nanoseconds
///
int32_t q_state_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QState*
/// @param id int
///
void q_state_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QState*
/// @param id enum Qt__TimerId
///
void q_state_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QState*
///
/// @return libqt_list of QObject*
///
libqt_list q_state_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QState*
/// @param parent QObject*
///
void q_state_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QState*
/// @param filterObj QObject*
///
void q_state_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QState*
/// @param obj QObject*
///
void q_state_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_state_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_state_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QState*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_state_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_state_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_state_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QState*
///
bool q_state_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QState*
/// @param receiver QObject*
///
bool q_state_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_state_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QState*
///
void q_state_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QState*
///
void q_state_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QState*
/// @param name const char*
/// @param value QVariant*
///
bool q_state_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QState*
/// @param name const char*
///
QVariant* q_state_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QState*
///
const char** q_state_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QState*
///
QBindingStorage* q_state_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QState*
///
const QBindingStorage* q_state_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QState*
///
void q_state_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QState*
/// @param callback void func(QState* self)
///
void q_state_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QState*
///
QObject* q_state_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QState*
/// @param classname const char*
///
bool q_state_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QState*
///
void q_state_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QState*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_state_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QState*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_state_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_state_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_state_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QState*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_state_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QState*
/// @param signal const char*
///
bool q_state_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QState*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_state_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QState*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_state_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QState*
/// @param receiver QObject*
/// @param member const char*
///
bool q_state_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QState*
/// @param param1 QObject*
///
void q_state_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QState*
/// @param callback void func(QState* self, QObject* param1)
///
void q_state_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QState*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_state_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QState*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_state_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QState*
/// @param callback bool func(QState* self, QObject* watched, QEvent* event)
///
void q_state_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QState*
/// @param event QTimerEvent*
///
void q_state_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QState*
/// @param event QTimerEvent*
///
void q_state_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QState*
/// @param callback void func(QState* self, QTimerEvent* event)
///
void q_state_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QState*
/// @param event QChildEvent*
///
void q_state_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QState*
/// @param event QChildEvent*
///
void q_state_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QState*
/// @param callback void func(QState* self, QChildEvent* event)
///
void q_state_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QState*
/// @param event QEvent*
///
void q_state_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QState*
/// @param event QEvent*
///
void q_state_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QState*
/// @param callback void func(QState* self, QEvent* event)
///
void q_state_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QState*
/// @param signal QMetaMethod*
///
void q_state_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QState*
/// @param signal QMetaMethod*
///
void q_state_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QState*
/// @param callback void func(QState* self, QMetaMethod* signal)
///
void q_state_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QState*
/// @param signal QMetaMethod*
///
void q_state_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QState*
/// @param signal QMetaMethod*
///
void q_state_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QState*
/// @param callback void func(QState* self, QMetaMethod* signal)
///
void q_state_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QState*
///
QObject* q_state_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QState*
///
QObject* q_state_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QState*
/// @param callback QObject* func(QState* self)
///
void q_state_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QState*
///
int32_t q_state_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QState*
///
int32_t q_state_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QState*
/// @param callback int32_t func(QState* self)
///
void q_state_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QState*
/// @param signal const char*
///
int32_t q_state_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QState*
/// @param signal const char*
///
int32_t q_state_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QState*
/// @param callback int32_t func(QState* self, const char* signal)
///
void q_state_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QState*
/// @param signal QMetaMethod*
///
bool q_state_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QState*
/// @param signal QMetaMethod*
///
bool q_state_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QState*
/// @param callback bool func(QState* self, QMetaMethod* signal)
///
void q_state_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#finished)
///
/// Wrapper to allow calling private signal
///
/// @param self QState*
/// @param callback void func(QState* self)
///
void q_state_on_finished(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#propertiesAssigned)
///
/// Wrapper to allow calling private signal
///
/// @param self QState*
/// @param callback void func(QState* self)
///
void q_state_on_properties_assigned(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#childModeChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QState*
/// @param callback void func(QState* self)
///
void q_state_on_child_mode_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#initialStateChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QState*
/// @param callback void func(QState* self)
///
void q_state_on_initial_state_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#errorStateChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QState*
/// @param callback void func(QState* self)
///
void q_state_on_error_state_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#entered)
///
/// Wrapper to allow calling private signal
///
/// @param self QState*
/// @param callback void func(QState* self)
///
void q_state_on_entered(void* self, void (*callback)(void*));

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#exited)
///
/// Wrapper to allow calling private signal
///
/// @param self QState*
/// @param callback void func(QState* self)
///
void q_state_on_exited(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QState*
/// @param callback void func(QState* self, const char* objectName)
///
void q_state_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#dtor.QState)
///
/// Delete this object from C++ memory.
///
/// @param self QState*
///
void q_state_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#public-types)

typedef enum {
    QSTATE_CHILDMODE_EXCLUSIVESTATES = 0,
    QSTATE_CHILDMODE_PARALLELSTATES = 1
} QState__ChildMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#public-types)

typedef enum {
    QSTATE_RESTOREPOLICY_DONTRESTOREPROPERTIES = 0,
    QSTATE_RESTOREPOLICY_RESTOREPROPERTIES = 1
} QState__RestorePolicy;

#endif
