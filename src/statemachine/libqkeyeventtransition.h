#pragma once
#ifndef SRC_STATEMACHINE_QT6C_LIBQKEYEVENTTRANSITION_H
#define SRC_STATEMACHINE_QT6C_LIBQKEYEVENTTRANSITION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyeventtransition.html)

/// q_keyeventtransition_new constructs a new QKeyEventTransition object.
///
QKeyEventTransition* q_keyeventtransition_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyeventtransition.html)

/// q_keyeventtransition_new2 constructs a new QKeyEventTransition object.
///
/// @param object QObject*
/// @param type enum QEvent__Type
/// @param key int
///
QKeyEventTransition* q_keyeventtransition_new2(void* object, int32_t type, int key);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyeventtransition.html)

/// q_keyeventtransition_new3 constructs a new QKeyEventTransition object.
///
/// @param sourceState QState*
///
QKeyEventTransition* q_keyeventtransition_new3(void* sourceState);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyeventtransition.html)

/// q_keyeventtransition_new4 constructs a new QKeyEventTransition object.
///
/// @param object QObject*
/// @param type enum QEvent__Type
/// @param key int
/// @param sourceState QState*
///
QKeyEventTransition* q_keyeventtransition_new4(void* object, int32_t type, int key, void* sourceState);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QKeyEventTransition*
///
const QMetaObject* q_keyeventtransition_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QKeyEventTransition*
/// @param callback const QMetaObject* func()
///
void q_keyeventtransition_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_keyeventtransition_super_meta_object` instead
///
#define q_keyeventtransition_qbase_meta_object q_keyeventtransition_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QKeyEventTransition*
///
const QMetaObject* q_keyeventtransition_super_meta_object(void* self);

/// @param self QKeyEventTransition*
/// @param param1 const char*
///
void* q_keyeventtransition_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QKeyEventTransition*
/// @param callback void* func(QKeyEventTransition* self, const char* param1)
///
void q_keyeventtransition_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_keyeventtransition_super_metacast` instead
///
#define q_keyeventtransition_qbase_metacast q_keyeventtransition_super_metacast

/// Base class method implementation
///
/// @param self QKeyEventTransition*
/// @param param1 const char*
///
void* q_keyeventtransition_super_metacast(void* self, const char* param1);

/// @param self QKeyEventTransition*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_keyeventtransition_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QKeyEventTransition*
/// @param callback int32_t func(QKeyEventTransition* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_keyeventtransition_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `q_keyeventtransition_super_metacall` instead
///
#define q_keyeventtransition_qbase_metacall q_keyeventtransition_super_metacall

/// Base class method implementation
///
/// @param self QKeyEventTransition*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_keyeventtransition_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_keyeventtransition_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyeventtransition.html#key)
///
/// @param self QKeyEventTransition*
///
int32_t q_keyeventtransition_key(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyeventtransition.html#setKey)
///
/// @param self QKeyEventTransition*
/// @param key int
///
void q_keyeventtransition_set_key(void* self, int key);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyeventtransition.html#modifierMask)
///
/// @param self QKeyEventTransition*
///
/// @return flag of enum Qt__KeyboardModifier
///
int32_t q_keyeventtransition_modifier_mask(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyeventtransition.html#setModifierMask)
///
/// @param self QKeyEventTransition*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
void q_keyeventtransition_set_modifier_mask(void* self, int32_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyeventtransition.html#onTransition)
///
/// @param self QKeyEventTransition*
/// @param event QEvent*
///
void q_keyeventtransition_on_transition(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyeventtransition.html#onTransition)
///
/// Allows for overriding the related default method
///
/// @param self QKeyEventTransition*
/// @param callback void func(QKeyEventTransition* self, QEvent* event)
///
void q_keyeventtransition_on_on_transition(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_keyeventtransition_super_on_transition` instead
///
#define q_keyeventtransition_qbase_on_transition q_keyeventtransition_super_on_transition

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyeventtransition.html#onTransition)
///
/// Base class method implementation
///
/// @param self QKeyEventTransition*
/// @param event QEvent*
///
void q_keyeventtransition_super_on_transition(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyeventtransition.html#eventTest)
///
/// @param self QKeyEventTransition*
/// @param event QEvent*
///
bool q_keyeventtransition_event_test(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyeventtransition.html#eventTest)
///
/// Allows for overriding the related default method
///
/// @param self QKeyEventTransition*
/// @param callback bool func(QKeyEventTransition* self, QEvent* event)
///
void q_keyeventtransition_on_event_test(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_keyeventtransition_super_event_test` instead
///
#define q_keyeventtransition_qbase_event_test q_keyeventtransition_super_event_test

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyeventtransition.html#eventTest)
///
/// Base class method implementation
///
/// @param self QKeyEventTransition*
/// @param event QEvent*
///
bool q_keyeventtransition_super_event_test(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_keyeventtransition_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_keyeventtransition_tr3(const char* s, const char* c, int n);

/// Inherited from QEventTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#eventSource)
///
/// @param self QKeyEventTransition*
///
QObject* q_keyeventtransition_event_source(void* self);

/// Inherited from QEventTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#setEventSource)
///
/// @param self QKeyEventTransition*
/// @param object QObject*
///
void q_keyeventtransition_set_event_source(void* self, void* object);

/// Inherited from QEventTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#eventType)
///
/// @param self QKeyEventTransition*
///
/// @return enum QEvent__Type
///
int32_t q_keyeventtransition_event_type(void* self);

/// Inherited from QEventTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#setEventType)
///
/// @param self QKeyEventTransition*
/// @param type enum QEvent__Type
///
void q_keyeventtransition_set_event_type(void* self, int32_t type);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#sourceState)
///
/// @param self QKeyEventTransition*
///
QState* q_keyeventtransition_source_state(void* self);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#targetState)
///
/// @param self QKeyEventTransition*
///
QAbstractState* q_keyeventtransition_target_state(void* self);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#setTargetState)
///
/// @param self QKeyEventTransition*
/// @param target QAbstractState*
///
void q_keyeventtransition_set_target_state(void* self, void* target);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#targetStates)
///
/// @param self QKeyEventTransition*
///
/// @return libqt_list of QAbstractState*
///
libqt_list q_keyeventtransition_target_states(void* self);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#setTargetStates)
///
/// @param self QKeyEventTransition*
/// @param targets libqt_list of QAbstractState*
///
void q_keyeventtransition_set_target_states(void* self, libqt_list targets);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#transitionType)
///
/// @param self QKeyEventTransition*
///
/// @return enum QAbstractTransition__TransitionType
///
int32_t q_keyeventtransition_transition_type(void* self);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#setTransitionType)
///
/// @param self QKeyEventTransition*
/// @param type enum QAbstractTransition__TransitionType
///
void q_keyeventtransition_set_transition_type(void* self, int32_t type);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#machine)
///
/// @param self QKeyEventTransition*
///
QStateMachine* q_keyeventtransition_machine(void* self);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#addAnimation)
///
/// @param self QKeyEventTransition*
/// @param animation QAbstractAnimation*
///
void q_keyeventtransition_add_animation(void* self, void* animation);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#removeAnimation)
///
/// @param self QKeyEventTransition*
/// @param animation QAbstractAnimation*
///
void q_keyeventtransition_remove_animation(void* self, void* animation);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#animations)
///
/// @param self QKeyEventTransition*
///
/// @return libqt_list of QAbstractAnimation*
///
libqt_list q_keyeventtransition_animations(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QKeyEventTransition*
///
const char* q_keyeventtransition_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QKeyEventTransition*
/// @param name const char*
///
void q_keyeventtransition_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QKeyEventTransition*
///
bool q_keyeventtransition_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QKeyEventTransition*
///
bool q_keyeventtransition_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QKeyEventTransition*
///
bool q_keyeventtransition_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QKeyEventTransition*
///
bool q_keyeventtransition_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QKeyEventTransition*
/// @param b bool
///
bool q_keyeventtransition_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QKeyEventTransition*
///
QThread* q_keyeventtransition_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QKeyEventTransition*
/// @param thread QThread*
///
bool q_keyeventtransition_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QKeyEventTransition*
/// @param interval int
///
int32_t q_keyeventtransition_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QKeyEventTransition*
/// @param time int64_t of nanoseconds
///
int32_t q_keyeventtransition_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QKeyEventTransition*
/// @param id int
///
void q_keyeventtransition_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QKeyEventTransition*
/// @param id enum Qt__TimerId
///
void q_keyeventtransition_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QKeyEventTransition*
///
/// @return libqt_list of QObject*
///
libqt_list q_keyeventtransition_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QKeyEventTransition*
/// @param parent QObject*
///
void q_keyeventtransition_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QKeyEventTransition*
/// @param filterObj QObject*
///
void q_keyeventtransition_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QKeyEventTransition*
/// @param obj QObject*
///
void q_keyeventtransition_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_keyeventtransition_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_keyeventtransition_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QKeyEventTransition*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_keyeventtransition_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_keyeventtransition_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_keyeventtransition_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeyEventTransition*
///
bool q_keyeventtransition_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeyEventTransition*
/// @param receiver QObject*
///
bool q_keyeventtransition_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_keyeventtransition_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QKeyEventTransition*
///
void q_keyeventtransition_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QKeyEventTransition*
///
void q_keyeventtransition_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QKeyEventTransition*
/// @param name const char*
/// @param value QVariant*
///
bool q_keyeventtransition_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QKeyEventTransition*
/// @param name const char*
///
QVariant* q_keyeventtransition_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QKeyEventTransition*
///
const char** q_keyeventtransition_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QKeyEventTransition*
///
QBindingStorage* q_keyeventtransition_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QKeyEventTransition*
///
const QBindingStorage* q_keyeventtransition_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QKeyEventTransition*
///
void q_keyeventtransition_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QKeyEventTransition*
/// @param callback void func(QKeyEventTransition* self)
///
void q_keyeventtransition_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QKeyEventTransition*
///
QObject* q_keyeventtransition_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QKeyEventTransition*
/// @param classname const char*
///
bool q_keyeventtransition_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QKeyEventTransition*
///
void q_keyeventtransition_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QKeyEventTransition*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_keyeventtransition_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QKeyEventTransition*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_keyeventtransition_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_keyeventtransition_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_keyeventtransition_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QKeyEventTransition*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_keyeventtransition_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeyEventTransition*
/// @param signal const char*
///
bool q_keyeventtransition_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeyEventTransition*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_keyeventtransition_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeyEventTransition*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_keyeventtransition_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QKeyEventTransition*
/// @param receiver QObject*
/// @param member const char*
///
bool q_keyeventtransition_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QKeyEventTransition*
/// @param param1 QObject*
///
void q_keyeventtransition_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QKeyEventTransition*
/// @param callback void func(QKeyEventTransition* self, QObject* param1)
///
void q_keyeventtransition_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QEventTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeyEventTransition*
/// @param e QEvent*
///
bool q_keyeventtransition_event(void* self, void* e);

/// @warning DEPRECATED: Use `q_keyeventtransition_super_event` instead
///
#define q_keyeventtransition_qbase_event q_keyeventtransition_super_event

/// Inherited from QEventTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeyEventTransition*
/// @param e QEvent*
///
bool q_keyeventtransition_super_event(void* self, void* e);

/// Inherited from QEventTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeyEventTransition*
/// @param callback bool func(QKeyEventTransition* self, QEvent* e)
///
void q_keyeventtransition_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeyEventTransition*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_keyeventtransition_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `q_keyeventtransition_super_event_filter` instead
///
#define q_keyeventtransition_qbase_event_filter q_keyeventtransition_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeyEventTransition*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_keyeventtransition_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeyEventTransition*
/// @param callback bool func(QKeyEventTransition* self, QObject* watched, QEvent* event)
///
void q_keyeventtransition_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeyEventTransition*
/// @param event QTimerEvent*
///
void q_keyeventtransition_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_keyeventtransition_super_timer_event` instead
///
#define q_keyeventtransition_qbase_timer_event q_keyeventtransition_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeyEventTransition*
/// @param event QTimerEvent*
///
void q_keyeventtransition_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeyEventTransition*
/// @param callback void func(QKeyEventTransition* self, QTimerEvent* event)
///
void q_keyeventtransition_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeyEventTransition*
/// @param event QChildEvent*
///
void q_keyeventtransition_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_keyeventtransition_super_child_event` instead
///
#define q_keyeventtransition_qbase_child_event q_keyeventtransition_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeyEventTransition*
/// @param event QChildEvent*
///
void q_keyeventtransition_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeyEventTransition*
/// @param callback void func(QKeyEventTransition* self, QChildEvent* event)
///
void q_keyeventtransition_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeyEventTransition*
/// @param event QEvent*
///
void q_keyeventtransition_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_keyeventtransition_super_custom_event` instead
///
#define q_keyeventtransition_qbase_custom_event q_keyeventtransition_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeyEventTransition*
/// @param event QEvent*
///
void q_keyeventtransition_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeyEventTransition*
/// @param callback void func(QKeyEventTransition* self, QEvent* event)
///
void q_keyeventtransition_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeyEventTransition*
/// @param signal QMetaMethod*
///
void q_keyeventtransition_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_keyeventtransition_super_connect_notify` instead
///
#define q_keyeventtransition_qbase_connect_notify q_keyeventtransition_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeyEventTransition*
/// @param signal QMetaMethod*
///
void q_keyeventtransition_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeyEventTransition*
/// @param callback void func(QKeyEventTransition* self, QMetaMethod* signal)
///
void q_keyeventtransition_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeyEventTransition*
/// @param signal QMetaMethod*
///
void q_keyeventtransition_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_keyeventtransition_super_disconnect_notify` instead
///
#define q_keyeventtransition_qbase_disconnect_notify q_keyeventtransition_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeyEventTransition*
/// @param signal QMetaMethod*
///
void q_keyeventtransition_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeyEventTransition*
/// @param callback void func(QKeyEventTransition* self, QMetaMethod* signal)
///
void q_keyeventtransition_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeyEventTransition*
///
QObject* q_keyeventtransition_sender(void* self);

/// @warning DEPRECATED: Use `q_keyeventtransition_super_sender` instead
///
#define q_keyeventtransition_qbase_sender q_keyeventtransition_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeyEventTransition*
///
QObject* q_keyeventtransition_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeyEventTransition*
/// @param callback QObject* func()
///
void q_keyeventtransition_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeyEventTransition*
///
int32_t q_keyeventtransition_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_keyeventtransition_super_sender_signal_index` instead
///
#define q_keyeventtransition_qbase_sender_signal_index q_keyeventtransition_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeyEventTransition*
///
int32_t q_keyeventtransition_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeyEventTransition*
/// @param callback int32_t func()
///
void q_keyeventtransition_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeyEventTransition*
/// @param signal const char*
///
int32_t q_keyeventtransition_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_keyeventtransition_super_receivers` instead
///
#define q_keyeventtransition_qbase_receivers q_keyeventtransition_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeyEventTransition*
/// @param signal const char*
///
int32_t q_keyeventtransition_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeyEventTransition*
/// @param callback int32_t func(QKeyEventTransition* self, const char* signal)
///
void q_keyeventtransition_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QKeyEventTransition*
/// @param signal QMetaMethod*
///
bool q_keyeventtransition_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_keyeventtransition_super_is_signal_connected` instead
///
#define q_keyeventtransition_qbase_is_signal_connected q_keyeventtransition_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QKeyEventTransition*
/// @param signal QMetaMethod*
///
bool q_keyeventtransition_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QKeyEventTransition*
/// @param callback bool func(QKeyEventTransition* self, QMetaMethod* signal)
///
void q_keyeventtransition_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#triggered)
///
/// Wrapper to allow calling private signal
///
/// @param self QKeyEventTransition*
/// @param callback void func(QKeyEventTransition* self)
///
void q_keyeventtransition_on_triggered(void* self, void (*callback)(void*));

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#targetStateChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QKeyEventTransition*
/// @param callback void func(QKeyEventTransition* self)
///
void q_keyeventtransition_on_target_state_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#targetStatesChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QKeyEventTransition*
/// @param callback void func(QKeyEventTransition* self)
///
void q_keyeventtransition_on_target_states_changed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QKeyEventTransition*
/// @param callback void func(QKeyEventTransition* self, const char* objectName)
///
void q_keyeventtransition_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qkeyeventtransition.html#dtor.QKeyEventTransition)
///
/// Delete this object from C++ memory.
///
/// @param self QKeyEventTransition*
///
void q_keyeventtransition_delete(void* self);

#endif
