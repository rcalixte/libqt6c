#pragma once
#ifndef SRC_STATEMACHINE_QT6C_LIBQSIGNALTRANSITION_H
#define SRC_STATEMACHINE_QT6C_LIBQSIGNALTRANSITION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsignaltransition.html)

/// q_signaltransition_new constructs a new QSignalTransition object.
///
QSignalTransition* q_signaltransition_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsignaltransition.html)

/// q_signaltransition_new2 constructs a new QSignalTransition object.
///
/// @param sender QObject*
/// @param signal const char*
///
QSignalTransition* q_signaltransition_new2(void* sender, const char* signal);

/// [Upstream resources](https://doc.qt.io/qt-6/qsignaltransition.html)

/// q_signaltransition_new3 constructs a new QSignalTransition object.
///
/// @param sourceState QState*
///
QSignalTransition* q_signaltransition_new3(void* sourceState);

/// [Upstream resources](https://doc.qt.io/qt-6/qsignaltransition.html)

/// q_signaltransition_new4 constructs a new QSignalTransition object.
///
/// @param sender QObject*
/// @param signal const char*
/// @param sourceState QState*
///
QSignalTransition* q_signaltransition_new4(void* sender, const char* signal, void* sourceState);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QSignalTransition*
///
const QMetaObject* q_signaltransition_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QSignalTransition*
/// @param callback const QMetaObject* func()
///
void q_signaltransition_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QSignalTransition*
///
const QMetaObject* q_signaltransition_qbase_meta_object(void* self);

/// @param self QSignalTransition*
/// @param param1 const char*
///
void* q_signaltransition_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QSignalTransition*
/// @param callback void* func(QSignalTransition* self, const char* param1)
///
void q_signaltransition_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QSignalTransition*
/// @param param1 const char*
///
void* q_signaltransition_qbase_metacast(void* self, const char* param1);

/// @param self QSignalTransition*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_signaltransition_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSignalTransition*
/// @param callback int32_t func(QSignalTransition* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_signaltransition_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QSignalTransition*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_signaltransition_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_signaltransition_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qsignaltransition.html#senderObject)
///
/// @param self QSignalTransition*
///
const QObject* q_signaltransition_sender_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsignaltransition.html#setSenderObject)
///
/// @param self QSignalTransition*
/// @param sender QObject*
///
void q_signaltransition_set_sender_object(void* self, void* sender);

/// [Upstream resources](https://doc.qt.io/qt-6/qsignaltransition.html#signal)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSignalTransition*
///
char* q_signaltransition_signal(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsignaltransition.html#setSignal)
///
/// @param self QSignalTransition*
/// @param signal char*
///
void q_signaltransition_set_signal(void* self, char* signal);

/// [Upstream resources](https://doc.qt.io/qt-6/qsignaltransition.html#eventTest)
///
/// @param self QSignalTransition*
/// @param event QEvent*
///
bool q_signaltransition_event_test(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qsignaltransition.html#eventTest)
///
/// Allows for overriding the related default method
///
/// @param self QSignalTransition*
/// @param callback bool func(QSignalTransition* self, QEvent* event)
///
void q_signaltransition_on_event_test(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsignaltransition.html#eventTest)
///
/// Base class method implementation
///
/// @param self QSignalTransition*
/// @param event QEvent*
///
bool q_signaltransition_qbase_event_test(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qsignaltransition.html#onTransition)
///
/// @param self QSignalTransition*
/// @param event QEvent*
///
void q_signaltransition_on_transition(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qsignaltransition.html#onTransition)
///
/// Allows for overriding the related default method
///
/// @param self QSignalTransition*
/// @param callback void func(QSignalTransition* self, QEvent* event)
///
void q_signaltransition_on_on_transition(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsignaltransition.html#onTransition)
///
/// Base class method implementation
///
/// @param self QSignalTransition*
/// @param event QEvent*
///
void q_signaltransition_qbase_on_transition(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qsignaltransition.html#event)
///
/// @param self QSignalTransition*
/// @param e QEvent*
///
bool q_signaltransition_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qsignaltransition.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QSignalTransition*
/// @param callback bool func(QSignalTransition* self, QEvent* e)
///
void q_signaltransition_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsignaltransition.html#event)
///
/// Base class method implementation
///
/// @param self QSignalTransition*
/// @param e QEvent*
///
bool q_signaltransition_qbase_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_signaltransition_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_signaltransition_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#sourceState)
///
/// @param self QSignalTransition*
///
QState* q_signaltransition_source_state(void* self);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#targetState)
///
/// @param self QSignalTransition*
///
QAbstractState* q_signaltransition_target_state(void* self);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#setTargetState)
///
/// @param self QSignalTransition*
/// @param target QAbstractState*
///
void q_signaltransition_set_target_state(void* self, void* target);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#targetStates)
///
/// @param self QSignalTransition*
///
/// @return libqt_list of QAbstractState*
///
libqt_list q_signaltransition_target_states(void* self);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#setTargetStates)
///
/// @param self QSignalTransition*
/// @param targets libqt_list of QAbstractState*
///
void q_signaltransition_set_target_states(void* self, libqt_list targets);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#transitionType)
///
/// @param self QSignalTransition*
///
/// @return enum QAbstractTransition__TransitionType
///
int32_t q_signaltransition_transition_type(void* self);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#setTransitionType)
///
/// @param self QSignalTransition*
/// @param type enum QAbstractTransition__TransitionType
///
void q_signaltransition_set_transition_type(void* self, int32_t type);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#machine)
///
/// @param self QSignalTransition*
///
QStateMachine* q_signaltransition_machine(void* self);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#addAnimation)
///
/// @param self QSignalTransition*
/// @param animation QAbstractAnimation*
///
void q_signaltransition_add_animation(void* self, void* animation);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#removeAnimation)
///
/// @param self QSignalTransition*
/// @param animation QAbstractAnimation*
///
void q_signaltransition_remove_animation(void* self, void* animation);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#animations)
///
/// @param self QSignalTransition*
///
/// @return libqt_list of QAbstractAnimation*
///
libqt_list q_signaltransition_animations(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSignalTransition*
///
const char* q_signaltransition_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSignalTransition*
/// @param name const char*
///
void q_signaltransition_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QSignalTransition*
///
bool q_signaltransition_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QSignalTransition*
///
bool q_signaltransition_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QSignalTransition*
///
bool q_signaltransition_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QSignalTransition*
///
bool q_signaltransition_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSignalTransition*
/// @param b bool
///
bool q_signaltransition_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QSignalTransition*
///
QThread* q_signaltransition_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSignalTransition*
/// @param thread QThread*
///
bool q_signaltransition_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSignalTransition*
/// @param interval int
///
int32_t q_signaltransition_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSignalTransition*
/// @param time int64_t of nanoseconds
///
int32_t q_signaltransition_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSignalTransition*
/// @param id int
///
void q_signaltransition_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSignalTransition*
/// @param id enum Qt__TimerId
///
void q_signaltransition_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QSignalTransition*
///
/// @return libqt_list of QObject*
///
libqt_list q_signaltransition_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QSignalTransition*
/// @param parent QObject*
///
void q_signaltransition_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSignalTransition*
/// @param filterObj QObject*
///
void q_signaltransition_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSignalTransition*
/// @param obj QObject*
///
void q_signaltransition_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_signaltransition_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_signaltransition_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSignalTransition*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_signaltransition_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_signaltransition_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_signaltransition_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSignalTransition*
///
bool q_signaltransition_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSignalTransition*
/// @param receiver QObject*
///
bool q_signaltransition_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_signaltransition_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QSignalTransition*
///
void q_signaltransition_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QSignalTransition*
///
void q_signaltransition_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSignalTransition*
/// @param name const char*
/// @param value QVariant*
///
bool q_signaltransition_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QSignalTransition*
/// @param name const char*
///
QVariant* q_signaltransition_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSignalTransition*
///
const char** q_signaltransition_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSignalTransition*
///
QBindingStorage* q_signaltransition_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSignalTransition*
///
const QBindingStorage* q_signaltransition_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSignalTransition*
///
void q_signaltransition_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSignalTransition*
/// @param callback void func(QSignalTransition* self)
///
void q_signaltransition_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QSignalTransition*
///
QObject* q_signaltransition_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QSignalTransition*
/// @param classname const char*
///
bool q_signaltransition_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSignalTransition*
///
void q_signaltransition_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSignalTransition*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_signaltransition_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSignalTransition*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_signaltransition_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_signaltransition_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_signaltransition_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSignalTransition*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_signaltransition_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSignalTransition*
/// @param signal const char*
///
bool q_signaltransition_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSignalTransition*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_signaltransition_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSignalTransition*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_signaltransition_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QSignalTransition*
/// @param receiver QObject*
/// @param member const char*
///
bool q_signaltransition_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSignalTransition*
/// @param param1 QObject*
///
void q_signaltransition_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSignalTransition*
/// @param callback void func(QSignalTransition* self, QObject* param1)
///
void q_signaltransition_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSignalTransition*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_signaltransition_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSignalTransition*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_signaltransition_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSignalTransition*
/// @param callback bool func(QSignalTransition* self, QObject* watched, QEvent* event)
///
void q_signaltransition_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSignalTransition*
/// @param event QTimerEvent*
///
void q_signaltransition_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSignalTransition*
/// @param event QTimerEvent*
///
void q_signaltransition_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSignalTransition*
/// @param callback void func(QSignalTransition* self, QTimerEvent* event)
///
void q_signaltransition_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSignalTransition*
/// @param event QChildEvent*
///
void q_signaltransition_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSignalTransition*
/// @param event QChildEvent*
///
void q_signaltransition_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSignalTransition*
/// @param callback void func(QSignalTransition* self, QChildEvent* event)
///
void q_signaltransition_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSignalTransition*
/// @param event QEvent*
///
void q_signaltransition_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSignalTransition*
/// @param event QEvent*
///
void q_signaltransition_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSignalTransition*
/// @param callback void func(QSignalTransition* self, QEvent* event)
///
void q_signaltransition_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSignalTransition*
/// @param signal QMetaMethod*
///
void q_signaltransition_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSignalTransition*
/// @param signal QMetaMethod*
///
void q_signaltransition_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSignalTransition*
/// @param callback void func(QSignalTransition* self, QMetaMethod* signal)
///
void q_signaltransition_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSignalTransition*
/// @param signal QMetaMethod*
///
void q_signaltransition_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSignalTransition*
/// @param signal QMetaMethod*
///
void q_signaltransition_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSignalTransition*
/// @param callback void func(QSignalTransition* self, QMetaMethod* signal)
///
void q_signaltransition_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSignalTransition*
///
QObject* q_signaltransition_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSignalTransition*
///
QObject* q_signaltransition_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSignalTransition*
/// @param callback QObject* func()
///
void q_signaltransition_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSignalTransition*
///
int32_t q_signaltransition_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSignalTransition*
///
int32_t q_signaltransition_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSignalTransition*
/// @param callback int32_t func()
///
void q_signaltransition_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSignalTransition*
/// @param signal const char*
///
int32_t q_signaltransition_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSignalTransition*
/// @param signal const char*
///
int32_t q_signaltransition_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSignalTransition*
/// @param callback int32_t func(QSignalTransition* self, const char* signal)
///
void q_signaltransition_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSignalTransition*
/// @param signal QMetaMethod*
///
bool q_signaltransition_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSignalTransition*
/// @param signal QMetaMethod*
///
bool q_signaltransition_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSignalTransition*
/// @param callback bool func(QSignalTransition* self, QMetaMethod* signal)
///
void q_signaltransition_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsignaltransition.html#senderObjectChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSignalTransition*
/// @param callback void func(QSignalTransition* self)
///
void q_signaltransition_on_sender_object_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsignaltransition.html#signalChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSignalTransition*
/// @param callback void func(QSignalTransition* self)
///
void q_signaltransition_on_signal_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#triggered)
///
/// Wrapper to allow calling private signal
///
/// @param self QSignalTransition*
/// @param callback void func(QSignalTransition* self)
///
void q_signaltransition_on_triggered(void* self, void (*callback)(void*));

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#targetStateChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSignalTransition*
/// @param callback void func(QSignalTransition* self)
///
void q_signaltransition_on_target_state_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#targetStatesChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSignalTransition*
/// @param callback void func(QSignalTransition* self)
///
void q_signaltransition_on_target_states_changed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSignalTransition*
/// @param callback void func(QSignalTransition* self, const char* objectName)
///
void q_signaltransition_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qsignaltransition.html#dtor.QSignalTransition)
///
/// Delete this object from C++ memory.
///
/// @param self QSignalTransition*
///
void q_signaltransition_delete(void* self);

#endif
