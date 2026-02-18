#pragma once
#ifndef SRC_STATEMACHINE_QT6C_LIBQEVENTTRANSITION_H
#define SRC_STATEMACHINE_QT6C_LIBQEVENTTRANSITION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html)

/// q_eventtransition_new constructs a new QEventTransition object.
///
QEventTransition* q_eventtransition_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html)

/// q_eventtransition_new2 constructs a new QEventTransition object.
///
/// @param object QObject*
/// @param type enum QEvent__Type
///
QEventTransition* q_eventtransition_new2(void* object, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html)

/// q_eventtransition_new3 constructs a new QEventTransition object.
///
/// @param sourceState QState*
///
QEventTransition* q_eventtransition_new3(void* sourceState);

/// [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html)

/// q_eventtransition_new4 constructs a new QEventTransition object.
///
/// @param object QObject*
/// @param type enum QEvent__Type
/// @param sourceState QState*
///
QEventTransition* q_eventtransition_new4(void* object, int32_t type, void* sourceState);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QEventTransition*
///
const QMetaObject* q_eventtransition_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QEventTransition*
/// @param callback const QMetaObject* func()
///
void q_eventtransition_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QEventTransition*
///
const QMetaObject* q_eventtransition_qbase_meta_object(void* self);

/// @param self QEventTransition*
/// @param param1 const char*
///
void* q_eventtransition_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QEventTransition*
/// @param callback void* func(QEventTransition* self, const char* param1)
///
void q_eventtransition_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QEventTransition*
/// @param param1 const char*
///
void* q_eventtransition_qbase_metacast(void* self, const char* param1);

/// @param self QEventTransition*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_eventtransition_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QEventTransition*
/// @param callback int32_t func(QEventTransition* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_eventtransition_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QEventTransition*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_eventtransition_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_eventtransition_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#eventSource)
///
/// @param self QEventTransition*
///
QObject* q_eventtransition_event_source(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#setEventSource)
///
/// @param self QEventTransition*
/// @param object QObject*
///
void q_eventtransition_set_event_source(void* self, void* object);

/// [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#eventType)
///
/// @param self QEventTransition*
///
/// @return enum QEvent__Type
///
int32_t q_eventtransition_event_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#setEventType)
///
/// @param self QEventTransition*
/// @param type enum QEvent__Type
///
void q_eventtransition_set_event_type(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#eventTest)
///
/// @param self QEventTransition*
/// @param event QEvent*
///
bool q_eventtransition_event_test(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#eventTest)
///
/// Allows for overriding the related default method
///
/// @param self QEventTransition*
/// @param callback bool func(QEventTransition* self, QEvent* event)
///
void q_eventtransition_on_event_test(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#eventTest)
///
/// Base class method implementation
///
/// @param self QEventTransition*
/// @param event QEvent*
///
bool q_eventtransition_qbase_event_test(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#onTransition)
///
/// @param self QEventTransition*
/// @param event QEvent*
///
void q_eventtransition_on_transition(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#onTransition)
///
/// Allows for overriding the related default method
///
/// @param self QEventTransition*
/// @param callback void func(QEventTransition* self, QEvent* event)
///
void q_eventtransition_on_on_transition(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#onTransition)
///
/// Base class method implementation
///
/// @param self QEventTransition*
/// @param event QEvent*
///
void q_eventtransition_qbase_on_transition(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#event)
///
/// @param self QEventTransition*
/// @param e QEvent*
///
bool q_eventtransition_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QEventTransition*
/// @param callback bool func(QEventTransition* self, QEvent* e)
///
void q_eventtransition_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#event)
///
/// Base class method implementation
///
/// @param self QEventTransition*
/// @param e QEvent*
///
bool q_eventtransition_qbase_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_eventtransition_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_eventtransition_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#sourceState)
///
/// @param self QEventTransition*
///
QState* q_eventtransition_source_state(void* self);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#targetState)
///
/// @param self QEventTransition*
///
QAbstractState* q_eventtransition_target_state(void* self);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#setTargetState)
///
/// @param self QEventTransition*
/// @param target QAbstractState*
///
void q_eventtransition_set_target_state(void* self, void* target);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#targetStates)
///
/// @param self QEventTransition*
///
/// @return libqt_list of QAbstractState*
///
libqt_list q_eventtransition_target_states(void* self);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#setTargetStates)
///
/// @param self QEventTransition*
/// @param targets libqt_list of QAbstractState*
///
void q_eventtransition_set_target_states(void* self, libqt_list targets);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#transitionType)
///
/// @param self QEventTransition*
///
/// @return enum QAbstractTransition__TransitionType
///
int32_t q_eventtransition_transition_type(void* self);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#setTransitionType)
///
/// @param self QEventTransition*
/// @param type enum QAbstractTransition__TransitionType
///
void q_eventtransition_set_transition_type(void* self, int32_t type);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#machine)
///
/// @param self QEventTransition*
///
QStateMachine* q_eventtransition_machine(void* self);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#addAnimation)
///
/// @param self QEventTransition*
/// @param animation QAbstractAnimation*
///
void q_eventtransition_add_animation(void* self, void* animation);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#removeAnimation)
///
/// @param self QEventTransition*
/// @param animation QAbstractAnimation*
///
void q_eventtransition_remove_animation(void* self, void* animation);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#animations)
///
/// @param self QEventTransition*
///
/// @return libqt_list of QAbstractAnimation*
///
libqt_list q_eventtransition_animations(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QEventTransition*
///
const char* q_eventtransition_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QEventTransition*
/// @param name const char*
///
void q_eventtransition_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QEventTransition*
///
bool q_eventtransition_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QEventTransition*
///
bool q_eventtransition_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QEventTransition*
///
bool q_eventtransition_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QEventTransition*
///
bool q_eventtransition_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QEventTransition*
/// @param b bool
///
bool q_eventtransition_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QEventTransition*
///
QThread* q_eventtransition_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QEventTransition*
/// @param thread QThread*
///
bool q_eventtransition_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QEventTransition*
/// @param interval int
///
int32_t q_eventtransition_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QEventTransition*
/// @param time int64_t of nanoseconds
///
int32_t q_eventtransition_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QEventTransition*
/// @param id int
///
void q_eventtransition_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QEventTransition*
/// @param id enum Qt__TimerId
///
void q_eventtransition_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QEventTransition*
///
/// @return libqt_list of QObject*
///
libqt_list q_eventtransition_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QEventTransition*
/// @param parent QObject*
///
void q_eventtransition_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QEventTransition*
/// @param filterObj QObject*
///
void q_eventtransition_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QEventTransition*
/// @param obj QObject*
///
void q_eventtransition_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_eventtransition_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_eventtransition_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QEventTransition*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_eventtransition_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_eventtransition_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_eventtransition_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QEventTransition*
///
bool q_eventtransition_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QEventTransition*
/// @param receiver QObject*
///
bool q_eventtransition_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_eventtransition_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QEventTransition*
///
void q_eventtransition_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QEventTransition*
///
void q_eventtransition_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QEventTransition*
/// @param name const char*
/// @param value QVariant*
///
bool q_eventtransition_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QEventTransition*
/// @param name const char*
///
QVariant* q_eventtransition_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QEventTransition*
///
const char** q_eventtransition_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QEventTransition*
///
QBindingStorage* q_eventtransition_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QEventTransition*
///
const QBindingStorage* q_eventtransition_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QEventTransition*
///
void q_eventtransition_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QEventTransition*
/// @param callback void func(QEventTransition* self)
///
void q_eventtransition_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QEventTransition*
///
QObject* q_eventtransition_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QEventTransition*
/// @param classname const char*
///
bool q_eventtransition_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QEventTransition*
///
void q_eventtransition_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QEventTransition*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_eventtransition_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QEventTransition*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_eventtransition_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_eventtransition_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_eventtransition_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QEventTransition*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_eventtransition_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QEventTransition*
/// @param signal const char*
///
bool q_eventtransition_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QEventTransition*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_eventtransition_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QEventTransition*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_eventtransition_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QEventTransition*
/// @param receiver QObject*
/// @param member const char*
///
bool q_eventtransition_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QEventTransition*
/// @param param1 QObject*
///
void q_eventtransition_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QEventTransition*
/// @param callback void func(QEventTransition* self, QObject* param1)
///
void q_eventtransition_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QEventTransition*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_eventtransition_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QEventTransition*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_eventtransition_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QEventTransition*
/// @param callback bool func(QEventTransition* self, QObject* watched, QEvent* event)
///
void q_eventtransition_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QEventTransition*
/// @param event QTimerEvent*
///
void q_eventtransition_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QEventTransition*
/// @param event QTimerEvent*
///
void q_eventtransition_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QEventTransition*
/// @param callback void func(QEventTransition* self, QTimerEvent* event)
///
void q_eventtransition_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QEventTransition*
/// @param event QChildEvent*
///
void q_eventtransition_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QEventTransition*
/// @param event QChildEvent*
///
void q_eventtransition_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QEventTransition*
/// @param callback void func(QEventTransition* self, QChildEvent* event)
///
void q_eventtransition_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QEventTransition*
/// @param event QEvent*
///
void q_eventtransition_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QEventTransition*
/// @param event QEvent*
///
void q_eventtransition_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QEventTransition*
/// @param callback void func(QEventTransition* self, QEvent* event)
///
void q_eventtransition_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QEventTransition*
/// @param signal QMetaMethod*
///
void q_eventtransition_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QEventTransition*
/// @param signal QMetaMethod*
///
void q_eventtransition_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QEventTransition*
/// @param callback void func(QEventTransition* self, QMetaMethod* signal)
///
void q_eventtransition_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QEventTransition*
/// @param signal QMetaMethod*
///
void q_eventtransition_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QEventTransition*
/// @param signal QMetaMethod*
///
void q_eventtransition_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QEventTransition*
/// @param callback void func(QEventTransition* self, QMetaMethod* signal)
///
void q_eventtransition_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QEventTransition*
///
QObject* q_eventtransition_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QEventTransition*
///
QObject* q_eventtransition_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QEventTransition*
/// @param callback QObject* func()
///
void q_eventtransition_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QEventTransition*
///
int32_t q_eventtransition_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QEventTransition*
///
int32_t q_eventtransition_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QEventTransition*
/// @param callback int32_t func()
///
void q_eventtransition_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QEventTransition*
/// @param signal const char*
///
int32_t q_eventtransition_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QEventTransition*
/// @param signal const char*
///
int32_t q_eventtransition_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QEventTransition*
/// @param callback int32_t func(QEventTransition* self, const char* signal)
///
void q_eventtransition_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QEventTransition*
/// @param signal QMetaMethod*
///
bool q_eventtransition_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QEventTransition*
/// @param signal QMetaMethod*
///
bool q_eventtransition_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QEventTransition*
/// @param callback bool func(QEventTransition* self, QMetaMethod* signal)
///
void q_eventtransition_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#triggered)
///
/// Wrapper to allow calling private signal
///
/// @param self QEventTransition*
/// @param callback void func(QEventTransition* self)
///
void q_eventtransition_on_triggered(void* self, void (*callback)(void*));

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#targetStateChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QEventTransition*
/// @param callback void func(QEventTransition* self)
///
void q_eventtransition_on_target_state_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#targetStatesChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QEventTransition*
/// @param callback void func(QEventTransition* self)
///
void q_eventtransition_on_target_states_changed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QEventTransition*
/// @param callback void func(QEventTransition* self, const char* objectName)
///
void q_eventtransition_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#dtor.QEventTransition)
///
/// Delete this object from C++ memory.
///
/// @param self QEventTransition*
///
void q_eventtransition_delete(void* self);

#endif
