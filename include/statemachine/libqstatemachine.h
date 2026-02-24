#pragma once
#ifndef SRC_STATEMACHINE_QT6C_LIBQSTATEMACHINE_H
#define SRC_STATEMACHINE_QT6C_LIBQSTATEMACHINE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html)

/// q_statemachine_new constructs a new QStateMachine object.
///
QStateMachine* q_statemachine_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html)

/// q_statemachine_new2 constructs a new QStateMachine object.
///
/// @param childMode enum QState__ChildMode
///
QStateMachine* q_statemachine_new2(int32_t childMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html)

/// q_statemachine_new3 constructs a new QStateMachine object.
///
/// @param parent QObject*
///
QStateMachine* q_statemachine_new3(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html)

/// q_statemachine_new4 constructs a new QStateMachine object.
///
/// @param childMode enum QState__ChildMode
/// @param parent QObject*
///
QStateMachine* q_statemachine_new4(int32_t childMode, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QStateMachine*
///
const QMetaObject* q_statemachine_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QStateMachine*
/// @param callback const QMetaObject* func()
///
void q_statemachine_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_statemachine_super_meta_object` instead
///
#define q_statemachine_qbase_meta_object q_statemachine_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QStateMachine*
///
const QMetaObject* q_statemachine_super_meta_object(void* self);

/// @param self QStateMachine*
/// @param param1 const char*
///
void* q_statemachine_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QStateMachine*
/// @param callback void* func(QStateMachine* self, const char* param1)
///
void q_statemachine_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_statemachine_super_metacast` instead
///
#define q_statemachine_qbase_metacast q_statemachine_super_metacast

/// Base class method implementation
///
/// @param self QStateMachine*
/// @param param1 const char*
///
void* q_statemachine_super_metacast(void* self, const char* param1);

/// @param self QStateMachine*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_statemachine_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QStateMachine*
/// @param callback int32_t func(QStateMachine* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_statemachine_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `q_statemachine_super_metacall` instead
///
#define q_statemachine_qbase_metacall q_statemachine_super_metacall

/// Base class method implementation
///
/// @param self QStateMachine*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_statemachine_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_statemachine_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#addState)
///
/// @param self QStateMachine*
/// @param state QAbstractState*
///
void q_statemachine_add_state(void* self, void* state);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#removeState)
///
/// @param self QStateMachine*
/// @param state QAbstractState*
///
void q_statemachine_remove_state(void* self, void* state);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#error)
///
/// @param self QStateMachine*
///
/// @return enum QStateMachine__Error
///
int32_t q_statemachine_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QStateMachine*
///
const char* q_statemachine_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#clearError)
///
/// @param self QStateMachine*
///
void q_statemachine_clear_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#isRunning)
///
/// @param self QStateMachine*
///
bool q_statemachine_is_running(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#isAnimated)
///
/// @param self QStateMachine*
///
bool q_statemachine_is_animated(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#setAnimated)
///
/// @param self QStateMachine*
/// @param enabled bool
///
void q_statemachine_set_animated(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#addDefaultAnimation)
///
/// @param self QStateMachine*
/// @param animation QAbstractAnimation*
///
void q_statemachine_add_default_animation(void* self, void* animation);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#defaultAnimations)
///
/// @param self QStateMachine*
///
/// @return libqt_list of QAbstractAnimation*
///
libqt_list q_statemachine_default_animations(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#removeDefaultAnimation)
///
/// @param self QStateMachine*
/// @param animation QAbstractAnimation*
///
void q_statemachine_remove_default_animation(void* self, void* animation);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#globalRestorePolicy)
///
/// @param self QStateMachine*
///
/// @return enum QState__RestorePolicy
///
int32_t q_statemachine_global_restore_policy(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#setGlobalRestorePolicy)
///
/// @param self QStateMachine*
/// @param restorePolicy enum QState__RestorePolicy
///
void q_statemachine_set_global_restore_policy(void* self, int32_t restorePolicy);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#postEvent)
///
/// @param self QStateMachine*
/// @param event QEvent*
///
void q_statemachine_post_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#postDelayedEvent)
///
/// @param self QStateMachine*
/// @param event QEvent*
/// @param delay int
///
int32_t q_statemachine_post_delayed_event(void* self, void* event, int delay);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#cancelDelayedEvent)
///
/// @param self QStateMachine*
/// @param id int
///
bool q_statemachine_cancel_delayed_event(void* self, int id);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#configuration)
///
/// @param self QStateMachine*
///
/// @return libqt_list set of QAbstractState*
///
libqt_list q_statemachine_configuration(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#eventFilter)
///
/// @param self QStateMachine*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_statemachine_event_filter(void* self, void* watched, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self QStateMachine*
/// @param callback bool func(QStateMachine* self, QObject* watched, QEvent* event)
///
void q_statemachine_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// @warning DEPRECATED: Use `q_statemachine_super_event_filter` instead
///
#define q_statemachine_qbase_event_filter q_statemachine_super_event_filter

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#eventFilter)
///
/// Base class method implementation
///
/// @param self QStateMachine*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_statemachine_super_event_filter(void* self, void* watched, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#postDelayedEvent)
///
/// @param self QStateMachine*
/// @param event QEvent*
/// @param delay int64_t of milliseconds
///
int32_t q_statemachine_post_delayed_event2(void* self, void* event, int64_t delay);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#start)
///
/// @param self QStateMachine*
///
void q_statemachine_start(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#stop)
///
/// @param self QStateMachine*
///
void q_statemachine_stop(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#setRunning)
///
/// @param self QStateMachine*
/// @param running bool
///
void q_statemachine_set_running(void* self, bool running);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#runningChanged)
///
/// @param self QStateMachine*
/// @param running bool
///
void q_statemachine_running_changed(void* self, bool running);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#runningChanged)
///
/// @param self QStateMachine*
/// @param callback void func(QStateMachine* self, bool running)
///
void q_statemachine_on_running_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#onEntry)
///
/// @param self QStateMachine*
/// @param event QEvent*
///
void q_statemachine_on_entry(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#onEntry)
///
/// Allows for overriding the related default method
///
/// @param self QStateMachine*
/// @param callback void func(QStateMachine* self, QEvent* event)
///
void q_statemachine_on_on_entry(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_statemachine_super_on_entry` instead
///
#define q_statemachine_qbase_on_entry q_statemachine_super_on_entry

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#onEntry)
///
/// Base class method implementation
///
/// @param self QStateMachine*
/// @param event QEvent*
///
void q_statemachine_super_on_entry(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#onExit)
///
/// @param self QStateMachine*
/// @param event QEvent*
///
void q_statemachine_on_exit(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#onExit)
///
/// Allows for overriding the related default method
///
/// @param self QStateMachine*
/// @param callback void func(QStateMachine* self, QEvent* event)
///
void q_statemachine_on_on_exit(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_statemachine_super_on_exit` instead
///
#define q_statemachine_qbase_on_exit q_statemachine_super_on_exit

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#onExit)
///
/// Base class method implementation
///
/// @param self QStateMachine*
/// @param event QEvent*
///
void q_statemachine_super_on_exit(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#beginSelectTransitions)
///
/// @param self QStateMachine*
/// @param event QEvent*
///
void q_statemachine_begin_select_transitions(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#beginSelectTransitions)
///
/// Allows for overriding the related default method
///
/// @param self QStateMachine*
/// @param callback void func(QStateMachine* self, QEvent* event)
///
void q_statemachine_on_begin_select_transitions(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_statemachine_super_begin_select_transitions` instead
///
#define q_statemachine_qbase_begin_select_transitions q_statemachine_super_begin_select_transitions

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#beginSelectTransitions)
///
/// Base class method implementation
///
/// @param self QStateMachine*
/// @param event QEvent*
///
void q_statemachine_super_begin_select_transitions(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#endSelectTransitions)
///
/// @param self QStateMachine*
/// @param event QEvent*
///
void q_statemachine_end_select_transitions(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#endSelectTransitions)
///
/// Allows for overriding the related default method
///
/// @param self QStateMachine*
/// @param callback void func(QStateMachine* self, QEvent* event)
///
void q_statemachine_on_end_select_transitions(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_statemachine_super_end_select_transitions` instead
///
#define q_statemachine_qbase_end_select_transitions q_statemachine_super_end_select_transitions

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#endSelectTransitions)
///
/// Base class method implementation
///
/// @param self QStateMachine*
/// @param event QEvent*
///
void q_statemachine_super_end_select_transitions(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#beginMicrostep)
///
/// @param self QStateMachine*
/// @param event QEvent*
///
void q_statemachine_begin_microstep(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#beginMicrostep)
///
/// Allows for overriding the related default method
///
/// @param self QStateMachine*
/// @param callback void func(QStateMachine* self, QEvent* event)
///
void q_statemachine_on_begin_microstep(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_statemachine_super_begin_microstep` instead
///
#define q_statemachine_qbase_begin_microstep q_statemachine_super_begin_microstep

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#beginMicrostep)
///
/// Base class method implementation
///
/// @param self QStateMachine*
/// @param event QEvent*
///
void q_statemachine_super_begin_microstep(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#endMicrostep)
///
/// @param self QStateMachine*
/// @param event QEvent*
///
void q_statemachine_end_microstep(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#endMicrostep)
///
/// Allows for overriding the related default method
///
/// @param self QStateMachine*
/// @param callback void func(QStateMachine* self, QEvent* event)
///
void q_statemachine_on_end_microstep(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_statemachine_super_end_microstep` instead
///
#define q_statemachine_qbase_end_microstep q_statemachine_super_end_microstep

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#endMicrostep)
///
/// Base class method implementation
///
/// @param self QStateMachine*
/// @param event QEvent*
///
void q_statemachine_super_end_microstep(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#event)
///
/// @param self QStateMachine*
/// @param e QEvent*
///
bool q_statemachine_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QStateMachine*
/// @param callback bool func(QStateMachine* self, QEvent* e)
///
void q_statemachine_on_event(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_statemachine_super_event` instead
///
#define q_statemachine_qbase_event q_statemachine_super_event

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#event)
///
/// Base class method implementation
///
/// @param self QStateMachine*
/// @param e QEvent*
///
bool q_statemachine_super_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_statemachine_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_statemachine_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#postEvent)
///
/// @param self QStateMachine*
/// @param event QEvent*
/// @param priority enum QStateMachine__EventPriority
///
void q_statemachine_post_event2(void* self, void* event, int32_t priority);

/// Inherited from QState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#errorState)
///
/// @param self QStateMachine*
///
QAbstractState* q_statemachine_error_state(void* self);

/// Inherited from QState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#setErrorState)
///
/// @param self QStateMachine*
/// @param state QAbstractState*
///
void q_statemachine_set_error_state(void* self, void* state);

/// Inherited from QState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#addTransition)
///
/// @param self QStateMachine*
/// @param transition QAbstractTransition*
///
void q_statemachine_add_transition(void* self, void* transition);

/// Inherited from QState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#addTransition)
///
/// @param self QStateMachine*
/// @param sender QObject*
/// @param signal const char*
/// @param target QAbstractState*
///
QSignalTransition* q_statemachine_add_transition2(void* self, void* sender, const char* signal, void* target);

/// Inherited from QState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#addTransition)
///
/// @param self QStateMachine*
/// @param target QAbstractState*
///
QAbstractTransition* q_statemachine_add_transition3(void* self, void* target);

/// Inherited from QState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#removeTransition)
///
/// @param self QStateMachine*
/// @param transition QAbstractTransition*
///
void q_statemachine_remove_transition(void* self, void* transition);

/// Inherited from QState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#transitions)
///
/// @param self QStateMachine*
///
/// @return libqt_list of QAbstractTransition*
///
libqt_list q_statemachine_transitions(void* self);

/// Inherited from QState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#initialState)
///
/// @param self QStateMachine*
///
QAbstractState* q_statemachine_initial_state(void* self);

/// Inherited from QState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#setInitialState)
///
/// @param self QStateMachine*
/// @param state QAbstractState*
///
void q_statemachine_set_initial_state(void* self, void* state);

/// Inherited from QState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#childMode)
///
/// @param self QStateMachine*
///
/// @return enum QState__ChildMode
///
int32_t q_statemachine_child_mode(void* self);

/// Inherited from QState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#setChildMode)
///
/// @param self QStateMachine*
/// @param mode enum QState__ChildMode
///
void q_statemachine_set_child_mode(void* self, int32_t mode);

/// Inherited from QState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#assignProperty)
///
/// @param self QStateMachine*
/// @param object QObject*
/// @param name const char*
/// @param value QVariant*
///
void q_statemachine_assign_property(void* self, void* object, const char* name, void* value);

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#parentState)
///
/// @param self QStateMachine*
///
QState* q_statemachine_parent_state(void* self);

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#machine)
///
/// @param self QStateMachine*
///
QStateMachine* q_statemachine_machine(void* self);

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#active)
///
/// @param self QStateMachine*
///
bool q_statemachine_active(void* self);

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#activeChanged)
///
/// @param self QStateMachine*
/// @param active bool
///
void q_statemachine_active_changed(void* self, bool active);

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#activeChanged)
///
/// @param self QStateMachine*
/// @param callback void func(QStateMachine* self, bool active)
///
void q_statemachine_on_active_changed(void* self, void (*callback)(void*, bool));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QStateMachine*
///
const char* q_statemachine_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QStateMachine*
/// @param name const char*
///
void q_statemachine_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QStateMachine*
///
bool q_statemachine_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QStateMachine*
///
bool q_statemachine_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QStateMachine*
///
bool q_statemachine_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QStateMachine*
///
bool q_statemachine_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QStateMachine*
/// @param b bool
///
bool q_statemachine_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QStateMachine*
///
QThread* q_statemachine_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QStateMachine*
/// @param thread QThread*
///
bool q_statemachine_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QStateMachine*
/// @param interval int
///
int32_t q_statemachine_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QStateMachine*
/// @param time int64_t of nanoseconds
///
int32_t q_statemachine_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QStateMachine*
/// @param id int
///
void q_statemachine_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QStateMachine*
/// @param id enum Qt__TimerId
///
void q_statemachine_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QStateMachine*
///
/// @return libqt_list of QObject*
///
libqt_list q_statemachine_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QStateMachine*
/// @param parent QObject*
///
void q_statemachine_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QStateMachine*
/// @param filterObj QObject*
///
void q_statemachine_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QStateMachine*
/// @param obj QObject*
///
void q_statemachine_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_statemachine_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_statemachine_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QStateMachine*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_statemachine_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_statemachine_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_statemachine_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QStateMachine*
///
bool q_statemachine_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QStateMachine*
/// @param receiver QObject*
///
bool q_statemachine_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_statemachine_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QStateMachine*
///
void q_statemachine_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QStateMachine*
///
void q_statemachine_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QStateMachine*
/// @param name const char*
/// @param value QVariant*
///
bool q_statemachine_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QStateMachine*
/// @param name const char*
///
QVariant* q_statemachine_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QStateMachine*
///
const char** q_statemachine_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QStateMachine*
///
QBindingStorage* q_statemachine_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QStateMachine*
///
const QBindingStorage* q_statemachine_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStateMachine*
///
void q_statemachine_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStateMachine*
/// @param callback void func(QStateMachine* self)
///
void q_statemachine_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QStateMachine*
///
QObject* q_statemachine_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QStateMachine*
/// @param classname const char*
///
bool q_statemachine_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QStateMachine*
///
void q_statemachine_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QStateMachine*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_statemachine_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QStateMachine*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_statemachine_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_statemachine_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_statemachine_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QStateMachine*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_statemachine_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QStateMachine*
/// @param signal const char*
///
bool q_statemachine_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QStateMachine*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_statemachine_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QStateMachine*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_statemachine_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QStateMachine*
/// @param receiver QObject*
/// @param member const char*
///
bool q_statemachine_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStateMachine*
/// @param param1 QObject*
///
void q_statemachine_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStateMachine*
/// @param callback void func(QStateMachine* self, QObject* param1)
///
void q_statemachine_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStateMachine*
/// @param event QTimerEvent*
///
void q_statemachine_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_statemachine_super_timer_event` instead
///
#define q_statemachine_qbase_timer_event q_statemachine_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStateMachine*
/// @param event QTimerEvent*
///
void q_statemachine_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStateMachine*
/// @param callback void func(QStateMachine* self, QTimerEvent* event)
///
void q_statemachine_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStateMachine*
/// @param event QChildEvent*
///
void q_statemachine_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_statemachine_super_child_event` instead
///
#define q_statemachine_qbase_child_event q_statemachine_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStateMachine*
/// @param event QChildEvent*
///
void q_statemachine_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStateMachine*
/// @param callback void func(QStateMachine* self, QChildEvent* event)
///
void q_statemachine_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStateMachine*
/// @param event QEvent*
///
void q_statemachine_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_statemachine_super_custom_event` instead
///
#define q_statemachine_qbase_custom_event q_statemachine_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStateMachine*
/// @param event QEvent*
///
void q_statemachine_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStateMachine*
/// @param callback void func(QStateMachine* self, QEvent* event)
///
void q_statemachine_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStateMachine*
/// @param signal QMetaMethod*
///
void q_statemachine_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_statemachine_super_connect_notify` instead
///
#define q_statemachine_qbase_connect_notify q_statemachine_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStateMachine*
/// @param signal QMetaMethod*
///
void q_statemachine_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStateMachine*
/// @param callback void func(QStateMachine* self, QMetaMethod* signal)
///
void q_statemachine_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStateMachine*
/// @param signal QMetaMethod*
///
void q_statemachine_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_statemachine_super_disconnect_notify` instead
///
#define q_statemachine_qbase_disconnect_notify q_statemachine_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStateMachine*
/// @param signal QMetaMethod*
///
void q_statemachine_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStateMachine*
/// @param callback void func(QStateMachine* self, QMetaMethod* signal)
///
void q_statemachine_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStateMachine*
///
QObject* q_statemachine_sender(void* self);

/// @warning DEPRECATED: Use `q_statemachine_super_sender` instead
///
#define q_statemachine_qbase_sender q_statemachine_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStateMachine*
///
QObject* q_statemachine_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStateMachine*
/// @param callback QObject* func()
///
void q_statemachine_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStateMachine*
///
int32_t q_statemachine_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_statemachine_super_sender_signal_index` instead
///
#define q_statemachine_qbase_sender_signal_index q_statemachine_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStateMachine*
///
int32_t q_statemachine_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStateMachine*
/// @param callback int32_t func()
///
void q_statemachine_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStateMachine*
/// @param signal const char*
///
int32_t q_statemachine_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_statemachine_super_receivers` instead
///
#define q_statemachine_qbase_receivers q_statemachine_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStateMachine*
/// @param signal const char*
///
int32_t q_statemachine_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStateMachine*
/// @param callback int32_t func(QStateMachine* self, const char* signal)
///
void q_statemachine_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStateMachine*
/// @param signal QMetaMethod*
///
bool q_statemachine_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_statemachine_super_is_signal_connected` instead
///
#define q_statemachine_qbase_is_signal_connected q_statemachine_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStateMachine*
/// @param signal QMetaMethod*
///
bool q_statemachine_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStateMachine*
/// @param callback bool func(QStateMachine* self, QMetaMethod* signal)
///
void q_statemachine_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#started)
///
/// Wrapper to allow calling private signal
///
/// @param self QStateMachine*
/// @param callback void func(QStateMachine* self)
///
void q_statemachine_on_started(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#stopped)
///
/// Wrapper to allow calling private signal
///
/// @param self QStateMachine*
/// @param callback void func(QStateMachine* self)
///
void q_statemachine_on_stopped(void* self, void (*callback)(void*));

/// Inherited from QState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#finished)
///
/// Wrapper to allow calling private signal
///
/// @param self QStateMachine*
/// @param callback void func(QStateMachine* self)
///
void q_statemachine_on_finished(void* self, void (*callback)(void*));

/// Inherited from QState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#propertiesAssigned)
///
/// Wrapper to allow calling private signal
///
/// @param self QStateMachine*
/// @param callback void func(QStateMachine* self)
///
void q_statemachine_on_properties_assigned(void* self, void (*callback)(void*));

/// Inherited from QState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#childModeChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QStateMachine*
/// @param callback void func(QStateMachine* self)
///
void q_statemachine_on_child_mode_changed(void* self, void (*callback)(void*));

/// Inherited from QState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#initialStateChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QStateMachine*
/// @param callback void func(QStateMachine* self)
///
void q_statemachine_on_initial_state_changed(void* self, void (*callback)(void*));

/// Inherited from QState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qstate.html#errorStateChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QStateMachine*
/// @param callback void func(QStateMachine* self)
///
void q_statemachine_on_error_state_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#entered)
///
/// Wrapper to allow calling private signal
///
/// @param self QStateMachine*
/// @param callback void func(QStateMachine* self)
///
void q_statemachine_on_entered(void* self, void (*callback)(void*));

/// Inherited from QAbstractState
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractstate.html#exited)
///
/// Wrapper to allow calling private signal
///
/// @param self QStateMachine*
/// @param callback void func(QStateMachine* self)
///
void q_statemachine_on_exited(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QStateMachine*
/// @param callback void func(QStateMachine* self, const char* objectName)
///
void q_statemachine_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#dtor.QStateMachine)
///
/// Delete this object from C++ memory.
///
/// @param self QStateMachine*
///
void q_statemachine_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine-signalevent.html)

/// q_statemachine__signalevent_new constructs a new QStateMachine::SignalEvent object.
///
/// @param sender QObject*
/// @param signalIndex int
/// @param arguments libqt_list of QVariant*
///
QStateMachine__SignalEvent* q_statemachine__signalevent_new(void* sender, int signalIndex, libqt_list arguments);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine-signalevent.html)

/// q_statemachine__signalevent_new2 constructs a new QStateMachine::SignalEvent object.
///
/// @param param1 QStateMachine__SignalEvent*
///
QStateMachine__SignalEvent* q_statemachine__signalevent_new2(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine-signalevent.html#sender)
///
/// @param self QStateMachine__SignalEvent*
///
QObject* q_statemachine__signalevent_sender(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine-signalevent.html#signalIndex)
///
/// @param self QStateMachine__SignalEvent*
///
int32_t q_statemachine__signalevent_signal_index(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine-signalevent.html#arguments)
///
/// @param self QStateMachine__SignalEvent*
///
/// @return libqt_list of QVariant*
///
libqt_list q_statemachine__signalevent_arguments(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QStateMachine__SignalEvent*
///
/// @return enum QEvent__Type
///
int32_t q_statemachine__signalevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QStateMachine__SignalEvent*
///
bool q_statemachine__signalevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QStateMachine__SignalEvent*
///
bool q_statemachine__signalevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QStateMachine__SignalEvent*
///
void q_statemachine__signalevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QStateMachine__SignalEvent*
///
void q_statemachine__signalevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QStateMachine__SignalEvent*
///
bool q_statemachine__signalevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QStateMachine__SignalEvent*
///
bool q_statemachine__signalevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QStateMachine__SignalEvent*
///
bool q_statemachine__signalevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_statemachine__signalevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_statemachine__signalevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStateMachine__SignalEvent*
/// @param accepted bool
///
void q_statemachine__signalevent_set_accepted(void* self, bool accepted);

/// @warning DEPRECATED: Use `q_statemachine__signalevent_super_set_accepted` instead
///
#define q_statemachine__signalevent_qbase_set_accepted q_statemachine__signalevent_super_set_accepted

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStateMachine__SignalEvent*
/// @param accepted bool
///
void q_statemachine__signalevent_super_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStateMachine__SignalEvent*
/// @param callback void func(QStateMachine__SignalEvent* self, bool accepted)
///
void q_statemachine__signalevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStateMachine__SignalEvent*
///
QEvent* q_statemachine__signalevent_clone(void* self);

/// @warning DEPRECATED: Use `q_statemachine__signalevent_super_clone` instead
///
#define q_statemachine__signalevent_qbase_clone q_statemachine__signalevent_super_clone

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStateMachine__SignalEvent*
///
QEvent* q_statemachine__signalevent_super_clone(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStateMachine__SignalEvent*
/// @param callback QEvent* func()
///
void q_statemachine__signalevent_on_clone(void* self, QEvent* (*callback)());

/// Delete this object from C++ memory.
///
/// @param self QStateMachine__SignalEvent*
///
void q_statemachine__signalevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine-wrappedevent.html)

/// q_statemachine__wrappedevent_new constructs a new QStateMachine::WrappedEvent object.
///
/// @param object QObject*
/// @param event QEvent*
///
QStateMachine__WrappedEvent* q_statemachine__wrappedevent_new(void* object, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine-wrappedevent.html)

/// q_statemachine__wrappedevent_new2 constructs a new QStateMachine::WrappedEvent object.
///
/// @param param1 QStateMachine__WrappedEvent*
///
QStateMachine__WrappedEvent* q_statemachine__wrappedevent_new2(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine-wrappedevent.html#object)
///
/// @param self QStateMachine__WrappedEvent*
///
QObject* q_statemachine__wrappedevent_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine-wrappedevent.html#event)
///
/// @param self QStateMachine__WrappedEvent*
///
QEvent* q_statemachine__wrappedevent_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QStateMachine__WrappedEvent*
///
/// @return enum QEvent__Type
///
int32_t q_statemachine__wrappedevent_type(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QStateMachine__WrappedEvent*
///
bool q_statemachine__wrappedevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isAccepted)
///
/// @param self QStateMachine__WrappedEvent*
///
bool q_statemachine__wrappedevent_is_accepted(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#accept)
///
/// @param self QStateMachine__WrappedEvent*
///
void q_statemachine__wrappedevent_accept(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#ignore)
///
/// @param self QStateMachine__WrappedEvent*
///
void q_statemachine__wrappedevent_ignore(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QStateMachine__WrappedEvent*
///
bool q_statemachine__wrappedevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QStateMachine__WrappedEvent*
///
bool q_statemachine__wrappedevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QStateMachine__WrappedEvent*
///
bool q_statemachine__wrappedevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_statemachine__wrappedevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_statemachine__wrappedevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStateMachine__WrappedEvent*
/// @param accepted bool
///
void q_statemachine__wrappedevent_set_accepted(void* self, bool accepted);

/// @warning DEPRECATED: Use `q_statemachine__wrappedevent_super_set_accepted` instead
///
#define q_statemachine__wrappedevent_qbase_set_accepted q_statemachine__wrappedevent_super_set_accepted

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStateMachine__WrappedEvent*
/// @param accepted bool
///
void q_statemachine__wrappedevent_super_set_accepted(void* self, bool accepted);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#setAccepted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStateMachine__WrappedEvent*
/// @param callback void func(QStateMachine__WrappedEvent* self, bool accepted)
///
void q_statemachine__wrappedevent_on_set_accepted(void* self, void (*callback)(void*, bool));

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStateMachine__WrappedEvent*
///
QEvent* q_statemachine__wrappedevent_clone(void* self);

/// @warning DEPRECATED: Use `q_statemachine__wrappedevent_super_clone` instead
///
#define q_statemachine__wrappedevent_qbase_clone q_statemachine__wrappedevent_super_clone

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStateMachine__WrappedEvent*
///
QEvent* q_statemachine__wrappedevent_super_clone(void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStateMachine__WrappedEvent*
/// @param callback QEvent* func()
///
void q_statemachine__wrappedevent_on_clone(void* self, QEvent* (*callback)());

/// Delete this object from C++ memory.
///
/// @param self QStateMachine__WrappedEvent*
///
void q_statemachine__wrappedevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#public-types)

typedef enum {
    QSTATEMACHINE_EVENTPRIORITY_NORMALPRIORITY = 0,
    QSTATEMACHINE_EVENTPRIORITY_HIGHPRIORITY = 1
} QStateMachine__EventPriority;

/// [Upstream resources](https://doc.qt.io/qt-6/qstatemachine.html#public-types)

typedef enum {
    QSTATEMACHINE_ERROR_NOERROR = 0,
    QSTATEMACHINE_ERROR_NOINITIALSTATEERROR = 1,
    QSTATEMACHINE_ERROR_NODEFAULTSTATEINHISTORYSTATEERROR = 2,
    QSTATEMACHINE_ERROR_NOCOMMONANCESTORFORTRANSITIONERROR = 3,
    QSTATEMACHINE_ERROR_STATEMACHINECHILDMODESETTOPARALLELERROR = 4
} QStateMachine__Error;

#endif
