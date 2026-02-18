#pragma once
#ifndef SRC_STATEMACHINE_QT6C_LIBQABSTRACTTRANSITION_H
#define SRC_STATEMACHINE_QT6C_LIBQABSTRACTTRANSITION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html)

/// q_abstracttransition_new constructs a new QAbstractTransition object.
///
QAbstractTransition* q_abstracttransition_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html)

/// q_abstracttransition_new2 constructs a new QAbstractTransition object.
///
/// @param sourceState QState*
///
QAbstractTransition* q_abstracttransition_new2(void* sourceState);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QAbstractTransition*
///
const QMetaObject* q_abstracttransition_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTransition*
/// @param callback const QMetaObject* func()
///
void q_abstracttransition_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QAbstractTransition*
///
const QMetaObject* q_abstracttransition_qbase_meta_object(void* self);

/// @param self QAbstractTransition*
/// @param param1 const char*
///
void* q_abstracttransition_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QAbstractTransition*
/// @param callback void* func(QAbstractTransition* self, const char* param1)
///
void q_abstracttransition_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QAbstractTransition*
/// @param param1 const char*
///
void* q_abstracttransition_qbase_metacast(void* self, const char* param1);

/// @param self QAbstractTransition*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_abstracttransition_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QAbstractTransition*
/// @param callback int32_t func(QAbstractTransition* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_abstracttransition_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QAbstractTransition*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_abstracttransition_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_abstracttransition_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#sourceState)
///
/// @param self QAbstractTransition*
///
QState* q_abstracttransition_source_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#targetState)
///
/// @param self QAbstractTransition*
///
QAbstractState* q_abstracttransition_target_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#setTargetState)
///
/// @param self QAbstractTransition*
/// @param target QAbstractState*
///
void q_abstracttransition_set_target_state(void* self, void* target);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#targetStates)
///
/// @param self QAbstractTransition*
///
/// @return libqt_list of QAbstractState*
///
libqt_list q_abstracttransition_target_states(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#setTargetStates)
///
/// @param self QAbstractTransition*
/// @param targets libqt_list of QAbstractState*
///
void q_abstracttransition_set_target_states(void* self, libqt_list targets);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#transitionType)
///
/// @param self QAbstractTransition*
///
/// @return enum QAbstractTransition__TransitionType
///
int32_t q_abstracttransition_transition_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#setTransitionType)
///
/// @param self QAbstractTransition*
/// @param type enum QAbstractTransition__TransitionType
///
void q_abstracttransition_set_transition_type(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#machine)
///
/// @param self QAbstractTransition*
///
QStateMachine* q_abstracttransition_machine(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#addAnimation)
///
/// @param self QAbstractTransition*
/// @param animation QAbstractAnimation*
///
void q_abstracttransition_add_animation(void* self, void* animation);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#removeAnimation)
///
/// @param self QAbstractTransition*
/// @param animation QAbstractAnimation*
///
void q_abstracttransition_remove_animation(void* self, void* animation);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#animations)
///
/// @param self QAbstractTransition*
///
/// @return libqt_list of QAbstractAnimation*
///
libqt_list q_abstracttransition_animations(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#eventTest)
///
/// @param self QAbstractTransition*
/// @param event QEvent*
///
bool q_abstracttransition_event_test(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#eventTest)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTransition*
/// @param callback bool func(QAbstractTransition* self, QEvent* event)
///
void q_abstracttransition_on_event_test(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#eventTest)
///
/// Base class method implementation
///
/// @param self QAbstractTransition*
/// @param event QEvent*
///
bool q_abstracttransition_qbase_event_test(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#onTransition)
///
/// @param self QAbstractTransition*
/// @param event QEvent*
///
void q_abstracttransition_on_transition(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#onTransition)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTransition*
/// @param callback void func(QAbstractTransition* self, QEvent* event)
///
void q_abstracttransition_on_on_transition(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#onTransition)
///
/// Base class method implementation
///
/// @param self QAbstractTransition*
/// @param event QEvent*
///
void q_abstracttransition_qbase_on_transition(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#event)
///
/// @param self QAbstractTransition*
/// @param e QEvent*
///
bool q_abstracttransition_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractTransition*
/// @param callback bool func(QAbstractTransition* self, QEvent* e)
///
void q_abstracttransition_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#event)
///
/// Base class method implementation
///
/// @param self QAbstractTransition*
/// @param e QEvent*
///
bool q_abstracttransition_qbase_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_abstracttransition_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_abstracttransition_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAbstractTransition*
///
const char* q_abstracttransition_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAbstractTransition*
/// @param name const char*
///
void q_abstracttransition_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QAbstractTransition*
///
bool q_abstracttransition_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QAbstractTransition*
///
bool q_abstracttransition_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QAbstractTransition*
///
bool q_abstracttransition_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QAbstractTransition*
///
bool q_abstracttransition_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAbstractTransition*
/// @param b bool
///
bool q_abstracttransition_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QAbstractTransition*
///
QThread* q_abstracttransition_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstractTransition*
/// @param thread QThread*
///
bool q_abstracttransition_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractTransition*
/// @param interval int
///
int32_t q_abstracttransition_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractTransition*
/// @param time int64_t of nanoseconds
///
int32_t q_abstracttransition_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractTransition*
/// @param id int
///
void q_abstracttransition_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractTransition*
/// @param id enum Qt__TimerId
///
void q_abstracttransition_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QAbstractTransition*
///
/// @return libqt_list of QObject*
///
libqt_list q_abstracttransition_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QAbstractTransition*
/// @param parent QObject*
///
void q_abstracttransition_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAbstractTransition*
/// @param filterObj QObject*
///
void q_abstracttransition_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAbstractTransition*
/// @param obj QObject*
///
void q_abstracttransition_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_abstracttransition_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_abstracttransition_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAbstractTransition*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_abstracttransition_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstracttransition_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_abstracttransition_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractTransition*
///
bool q_abstracttransition_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractTransition*
/// @param receiver QObject*
///
bool q_abstracttransition_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_abstracttransition_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QAbstractTransition*
///
void q_abstracttransition_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QAbstractTransition*
///
void q_abstracttransition_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAbstractTransition*
/// @param name const char*
/// @param value QVariant*
///
bool q_abstracttransition_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QAbstractTransition*
/// @param name const char*
///
QVariant* q_abstracttransition_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QAbstractTransition*
///
const char** q_abstracttransition_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractTransition*
///
QBindingStorage* q_abstracttransition_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractTransition*
///
const QBindingStorage* q_abstracttransition_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractTransition*
///
void q_abstracttransition_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractTransition*
/// @param callback void func(QAbstractTransition* self)
///
void q_abstracttransition_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QAbstractTransition*
///
QObject* q_abstracttransition_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QAbstractTransition*
/// @param classname const char*
///
bool q_abstracttransition_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAbstractTransition*
///
void q_abstracttransition_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractTransition*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_abstracttransition_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractTransition*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_abstracttransition_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_abstracttransition_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_abstracttransition_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAbstractTransition*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstracttransition_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractTransition*
/// @param signal const char*
///
bool q_abstracttransition_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractTransition*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_abstracttransition_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractTransition*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstracttransition_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractTransition*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstracttransition_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractTransition*
/// @param param1 QObject*
///
void q_abstracttransition_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractTransition*
/// @param callback void func(QAbstractTransition* self, QObject* param1)
///
void q_abstracttransition_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTransition*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_abstracttransition_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTransition*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_abstracttransition_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTransition*
/// @param callback bool func(QAbstractTransition* self, QObject* watched, QEvent* event)
///
void q_abstracttransition_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTransition*
/// @param event QTimerEvent*
///
void q_abstracttransition_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTransition*
/// @param event QTimerEvent*
///
void q_abstracttransition_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTransition*
/// @param callback void func(QAbstractTransition* self, QTimerEvent* event)
///
void q_abstracttransition_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTransition*
/// @param event QChildEvent*
///
void q_abstracttransition_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTransition*
/// @param event QChildEvent*
///
void q_abstracttransition_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTransition*
/// @param callback void func(QAbstractTransition* self, QChildEvent* event)
///
void q_abstracttransition_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTransition*
/// @param event QEvent*
///
void q_abstracttransition_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTransition*
/// @param event QEvent*
///
void q_abstracttransition_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTransition*
/// @param callback void func(QAbstractTransition* self, QEvent* event)
///
void q_abstracttransition_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTransition*
/// @param signal QMetaMethod*
///
void q_abstracttransition_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTransition*
/// @param signal QMetaMethod*
///
void q_abstracttransition_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTransition*
/// @param callback void func(QAbstractTransition* self, QMetaMethod* signal)
///
void q_abstracttransition_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTransition*
/// @param signal QMetaMethod*
///
void q_abstracttransition_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTransition*
/// @param signal QMetaMethod*
///
void q_abstracttransition_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTransition*
/// @param callback void func(QAbstractTransition* self, QMetaMethod* signal)
///
void q_abstracttransition_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTransition*
///
QObject* q_abstracttransition_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTransition*
///
QObject* q_abstracttransition_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTransition*
/// @param callback QObject* func()
///
void q_abstracttransition_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTransition*
///
int32_t q_abstracttransition_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTransition*
///
int32_t q_abstracttransition_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTransition*
/// @param callback int32_t func()
///
void q_abstracttransition_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTransition*
/// @param signal const char*
///
int32_t q_abstracttransition_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTransition*
/// @param signal const char*
///
int32_t q_abstracttransition_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTransition*
/// @param callback int32_t func(QAbstractTransition* self, const char* signal)
///
void q_abstracttransition_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractTransition*
/// @param signal QMetaMethod*
///
bool q_abstracttransition_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractTransition*
/// @param signal QMetaMethod*
///
bool q_abstracttransition_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractTransition*
/// @param callback bool func(QAbstractTransition* self, QMetaMethod* signal)
///
void q_abstracttransition_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#triggered)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractTransition*
/// @param callback void func(QAbstractTransition* self)
///
void q_abstracttransition_on_triggered(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#targetStateChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractTransition*
/// @param callback void func(QAbstractTransition* self)
///
void q_abstracttransition_on_target_state_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#targetStatesChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractTransition*
/// @param callback void func(QAbstractTransition* self)
///
void q_abstracttransition_on_target_states_changed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractTransition*
/// @param callback void func(QAbstractTransition* self, const char* objectName)
///
void q_abstracttransition_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#dtor.QAbstractTransition)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractTransition*
///
void q_abstracttransition_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#public-types)

typedef enum {
    QABSTRACTTRANSITION_TRANSITIONTYPE_EXTERNALTRANSITION = 0,
    QABSTRACTTRANSITION_TRANSITIONTYPE_INTERNALTRANSITION = 1
} QAbstractTransition__TransitionType;

#endif
