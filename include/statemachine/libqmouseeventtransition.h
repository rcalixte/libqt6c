#pragma once
#ifndef SRC_STATEMACHINE_QT6C_LIBQMOUSEEVENTTRANSITION_H
#define SRC_STATEMACHINE_QT6C_LIBQMOUSEEVENTTRANSITION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseeventtransition.html)

/// q_mouseeventtransition_new constructs a new QMouseEventTransition object.
///
QMouseEventTransition* q_mouseeventtransition_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseeventtransition.html)

/// q_mouseeventtransition_new2 constructs a new QMouseEventTransition object.
///
/// @param object QObject*
/// @param type enum QEvent__Type
/// @param button enum Qt__MouseButton
///
QMouseEventTransition* q_mouseeventtransition_new2(void* object, int32_t type, int32_t button);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseeventtransition.html)

/// q_mouseeventtransition_new3 constructs a new QMouseEventTransition object.
///
/// @param sourceState QState*
///
QMouseEventTransition* q_mouseeventtransition_new3(void* sourceState);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseeventtransition.html)

/// q_mouseeventtransition_new4 constructs a new QMouseEventTransition object.
///
/// @param object QObject*
/// @param type enum QEvent__Type
/// @param button enum Qt__MouseButton
/// @param sourceState QState*
///
QMouseEventTransition* q_mouseeventtransition_new4(void* object, int32_t type, int32_t button, void* sourceState);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QMouseEventTransition*
///
const QMetaObject* q_mouseeventtransition_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QMouseEventTransition*
/// @param callback const QMetaObject* func()
///
void q_mouseeventtransition_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_mouseeventtransition_super_meta_object` instead
///
#define q_mouseeventtransition_qbase_meta_object q_mouseeventtransition_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QMouseEventTransition*
///
const QMetaObject* q_mouseeventtransition_super_meta_object(void* self);

/// @param self QMouseEventTransition*
/// @param param1 const char*
///
void* q_mouseeventtransition_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QMouseEventTransition*
/// @param callback void* func(QMouseEventTransition* self, const char* param1)
///
void q_mouseeventtransition_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_mouseeventtransition_super_metacast` instead
///
#define q_mouseeventtransition_qbase_metacast q_mouseeventtransition_super_metacast

/// Base class method implementation
///
/// @param self QMouseEventTransition*
/// @param param1 const char*
///
void* q_mouseeventtransition_super_metacast(void* self, const char* param1);

/// @param self QMouseEventTransition*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_mouseeventtransition_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QMouseEventTransition*
/// @param callback int32_t func(QMouseEventTransition* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_mouseeventtransition_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `q_mouseeventtransition_super_metacall` instead
///
#define q_mouseeventtransition_qbase_metacall q_mouseeventtransition_super_metacall

/// Base class method implementation
///
/// @param self QMouseEventTransition*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_mouseeventtransition_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_mouseeventtransition_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseeventtransition.html#button)
///
/// @param self QMouseEventTransition*
///
/// @return enum Qt__MouseButton
///
int32_t q_mouseeventtransition_button(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseeventtransition.html#setButton)
///
/// @param self QMouseEventTransition*
/// @param button enum Qt__MouseButton
///
void q_mouseeventtransition_set_button(void* self, int32_t button);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseeventtransition.html#modifierMask)
///
/// @param self QMouseEventTransition*
///
/// @return flag of enum Qt__KeyboardModifier
///
int32_t q_mouseeventtransition_modifier_mask(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseeventtransition.html#setModifierMask)
///
/// @param self QMouseEventTransition*
/// @param modifiers flag of enum Qt__KeyboardModifier
///
void q_mouseeventtransition_set_modifier_mask(void* self, int32_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseeventtransition.html#hitTestPath)
///
/// @param self QMouseEventTransition*
///
QPainterPath* q_mouseeventtransition_hit_test_path(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseeventtransition.html#setHitTestPath)
///
/// @param self QMouseEventTransition*
/// @param path QPainterPath*
///
void q_mouseeventtransition_set_hit_test_path(void* self, void* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseeventtransition.html#onTransition)
///
/// @param self QMouseEventTransition*
/// @param event QEvent*
///
void q_mouseeventtransition_on_transition(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseeventtransition.html#onTransition)
///
/// Allows for overriding the related default method
///
/// @param self QMouseEventTransition*
/// @param callback void func(QMouseEventTransition* self, QEvent* event)
///
void q_mouseeventtransition_on_on_transition(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_mouseeventtransition_super_on_transition` instead
///
#define q_mouseeventtransition_qbase_on_transition q_mouseeventtransition_super_on_transition

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseeventtransition.html#onTransition)
///
/// Base class method implementation
///
/// @param self QMouseEventTransition*
/// @param event QEvent*
///
void q_mouseeventtransition_super_on_transition(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseeventtransition.html#eventTest)
///
/// @param self QMouseEventTransition*
/// @param event QEvent*
///
bool q_mouseeventtransition_event_test(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseeventtransition.html#eventTest)
///
/// Allows for overriding the related default method
///
/// @param self QMouseEventTransition*
/// @param callback bool func(QMouseEventTransition* self, QEvent* event)
///
void q_mouseeventtransition_on_event_test(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_mouseeventtransition_super_event_test` instead
///
#define q_mouseeventtransition_qbase_event_test q_mouseeventtransition_super_event_test

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseeventtransition.html#eventTest)
///
/// Base class method implementation
///
/// @param self QMouseEventTransition*
/// @param event QEvent*
///
bool q_mouseeventtransition_super_event_test(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_mouseeventtransition_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_mouseeventtransition_tr3(const char* s, const char* c, int n);

/// Inherited from QEventTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#eventSource)
///
/// @param self QMouseEventTransition*
///
QObject* q_mouseeventtransition_event_source(void* self);

/// Inherited from QEventTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#setEventSource)
///
/// @param self QMouseEventTransition*
/// @param object QObject*
///
void q_mouseeventtransition_set_event_source(void* self, void* object);

/// Inherited from QEventTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#eventType)
///
/// @param self QMouseEventTransition*
///
/// @return enum QEvent__Type
///
int32_t q_mouseeventtransition_event_type(void* self);

/// Inherited from QEventTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#setEventType)
///
/// @param self QMouseEventTransition*
/// @param type enum QEvent__Type
///
void q_mouseeventtransition_set_event_type(void* self, int32_t type);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#sourceState)
///
/// @param self QMouseEventTransition*
///
QState* q_mouseeventtransition_source_state(void* self);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#targetState)
///
/// @param self QMouseEventTransition*
///
QAbstractState* q_mouseeventtransition_target_state(void* self);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#setTargetState)
///
/// @param self QMouseEventTransition*
/// @param target QAbstractState*
///
void q_mouseeventtransition_set_target_state(void* self, void* target);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#targetStates)
///
/// @param self QMouseEventTransition*
///
/// @return libqt_list of QAbstractState*
///
libqt_list q_mouseeventtransition_target_states(void* self);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#setTargetStates)
///
/// @param self QMouseEventTransition*
/// @param targets libqt_list of QAbstractState*
///
void q_mouseeventtransition_set_target_states(void* self, libqt_list targets);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#transitionType)
///
/// @param self QMouseEventTransition*
///
/// @return enum QAbstractTransition__TransitionType
///
int32_t q_mouseeventtransition_transition_type(void* self);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#setTransitionType)
///
/// @param self QMouseEventTransition*
/// @param type enum QAbstractTransition__TransitionType
///
void q_mouseeventtransition_set_transition_type(void* self, int32_t type);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#machine)
///
/// @param self QMouseEventTransition*
///
QStateMachine* q_mouseeventtransition_machine(void* self);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#addAnimation)
///
/// @param self QMouseEventTransition*
/// @param animation QAbstractAnimation*
///
void q_mouseeventtransition_add_animation(void* self, void* animation);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#removeAnimation)
///
/// @param self QMouseEventTransition*
/// @param animation QAbstractAnimation*
///
void q_mouseeventtransition_remove_animation(void* self, void* animation);

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#animations)
///
/// @param self QMouseEventTransition*
///
/// @return libqt_list of QAbstractAnimation*
///
libqt_list q_mouseeventtransition_animations(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QMouseEventTransition*
///
const char* q_mouseeventtransition_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QMouseEventTransition*
/// @param name const char*
///
void q_mouseeventtransition_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QMouseEventTransition*
///
bool q_mouseeventtransition_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QMouseEventTransition*
///
bool q_mouseeventtransition_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QMouseEventTransition*
///
bool q_mouseeventtransition_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QMouseEventTransition*
///
bool q_mouseeventtransition_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QMouseEventTransition*
/// @param b bool
///
bool q_mouseeventtransition_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QMouseEventTransition*
///
QThread* q_mouseeventtransition_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QMouseEventTransition*
/// @param thread QThread*
///
bool q_mouseeventtransition_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMouseEventTransition*
/// @param interval int
///
int32_t q_mouseeventtransition_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMouseEventTransition*
/// @param time int64_t of nanoseconds
///
int32_t q_mouseeventtransition_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QMouseEventTransition*
/// @param id int
///
void q_mouseeventtransition_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QMouseEventTransition*
/// @param id enum Qt__TimerId
///
void q_mouseeventtransition_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QMouseEventTransition*
///
/// @return libqt_list of QObject*
///
libqt_list q_mouseeventtransition_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QMouseEventTransition*
/// @param parent QObject*
///
void q_mouseeventtransition_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QMouseEventTransition*
/// @param filterObj QObject*
///
void q_mouseeventtransition_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QMouseEventTransition*
/// @param obj QObject*
///
void q_mouseeventtransition_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_mouseeventtransition_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_mouseeventtransition_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QMouseEventTransition*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_mouseeventtransition_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_mouseeventtransition_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_mouseeventtransition_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QMouseEventTransition*
///
bool q_mouseeventtransition_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QMouseEventTransition*
/// @param receiver QObject*
///
bool q_mouseeventtransition_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_mouseeventtransition_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QMouseEventTransition*
///
void q_mouseeventtransition_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QMouseEventTransition*
///
void q_mouseeventtransition_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QMouseEventTransition*
/// @param name const char*
/// @param value QVariant*
///
bool q_mouseeventtransition_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QMouseEventTransition*
/// @param name const char*
///
QVariant* q_mouseeventtransition_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QMouseEventTransition*
///
const char** q_mouseeventtransition_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QMouseEventTransition*
///
QBindingStorage* q_mouseeventtransition_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QMouseEventTransition*
///
const QBindingStorage* q_mouseeventtransition_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMouseEventTransition*
///
void q_mouseeventtransition_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMouseEventTransition*
/// @param callback void func(QMouseEventTransition* self)
///
void q_mouseeventtransition_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QMouseEventTransition*
///
QObject* q_mouseeventtransition_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QMouseEventTransition*
/// @param classname const char*
///
bool q_mouseeventtransition_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QMouseEventTransition*
///
void q_mouseeventtransition_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMouseEventTransition*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_mouseeventtransition_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QMouseEventTransition*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_mouseeventtransition_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_mouseeventtransition_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_mouseeventtransition_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QMouseEventTransition*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_mouseeventtransition_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QMouseEventTransition*
/// @param signal const char*
///
bool q_mouseeventtransition_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QMouseEventTransition*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_mouseeventtransition_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QMouseEventTransition*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_mouseeventtransition_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QMouseEventTransition*
/// @param receiver QObject*
/// @param member const char*
///
bool q_mouseeventtransition_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMouseEventTransition*
/// @param param1 QObject*
///
void q_mouseeventtransition_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QMouseEventTransition*
/// @param callback void func(QMouseEventTransition* self, QObject* param1)
///
void q_mouseeventtransition_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QEventTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMouseEventTransition*
/// @param e QEvent*
///
bool q_mouseeventtransition_event(void* self, void* e);

/// @warning DEPRECATED: Use `q_mouseeventtransition_super_event` instead
///
#define q_mouseeventtransition_qbase_event q_mouseeventtransition_super_event

/// Inherited from QEventTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMouseEventTransition*
/// @param e QEvent*
///
bool q_mouseeventtransition_super_event(void* self, void* e);

/// Inherited from QEventTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qeventtransition.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMouseEventTransition*
/// @param callback bool func(QMouseEventTransition* self, QEvent* e)
///
void q_mouseeventtransition_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMouseEventTransition*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_mouseeventtransition_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `q_mouseeventtransition_super_event_filter` instead
///
#define q_mouseeventtransition_qbase_event_filter q_mouseeventtransition_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMouseEventTransition*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_mouseeventtransition_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMouseEventTransition*
/// @param callback bool func(QMouseEventTransition* self, QObject* watched, QEvent* event)
///
void q_mouseeventtransition_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMouseEventTransition*
/// @param event QTimerEvent*
///
void q_mouseeventtransition_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_mouseeventtransition_super_timer_event` instead
///
#define q_mouseeventtransition_qbase_timer_event q_mouseeventtransition_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMouseEventTransition*
/// @param event QTimerEvent*
///
void q_mouseeventtransition_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMouseEventTransition*
/// @param callback void func(QMouseEventTransition* self, QTimerEvent* event)
///
void q_mouseeventtransition_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMouseEventTransition*
/// @param event QChildEvent*
///
void q_mouseeventtransition_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_mouseeventtransition_super_child_event` instead
///
#define q_mouseeventtransition_qbase_child_event q_mouseeventtransition_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMouseEventTransition*
/// @param event QChildEvent*
///
void q_mouseeventtransition_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMouseEventTransition*
/// @param callback void func(QMouseEventTransition* self, QChildEvent* event)
///
void q_mouseeventtransition_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMouseEventTransition*
/// @param event QEvent*
///
void q_mouseeventtransition_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_mouseeventtransition_super_custom_event` instead
///
#define q_mouseeventtransition_qbase_custom_event q_mouseeventtransition_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMouseEventTransition*
/// @param event QEvent*
///
void q_mouseeventtransition_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMouseEventTransition*
/// @param callback void func(QMouseEventTransition* self, QEvent* event)
///
void q_mouseeventtransition_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMouseEventTransition*
/// @param signal QMetaMethod*
///
void q_mouseeventtransition_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_mouseeventtransition_super_connect_notify` instead
///
#define q_mouseeventtransition_qbase_connect_notify q_mouseeventtransition_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMouseEventTransition*
/// @param signal QMetaMethod*
///
void q_mouseeventtransition_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMouseEventTransition*
/// @param callback void func(QMouseEventTransition* self, QMetaMethod* signal)
///
void q_mouseeventtransition_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMouseEventTransition*
/// @param signal QMetaMethod*
///
void q_mouseeventtransition_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_mouseeventtransition_super_disconnect_notify` instead
///
#define q_mouseeventtransition_qbase_disconnect_notify q_mouseeventtransition_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMouseEventTransition*
/// @param signal QMetaMethod*
///
void q_mouseeventtransition_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMouseEventTransition*
/// @param callback void func(QMouseEventTransition* self, QMetaMethod* signal)
///
void q_mouseeventtransition_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMouseEventTransition*
///
QObject* q_mouseeventtransition_sender(void* self);

/// @warning DEPRECATED: Use `q_mouseeventtransition_super_sender` instead
///
#define q_mouseeventtransition_qbase_sender q_mouseeventtransition_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMouseEventTransition*
///
QObject* q_mouseeventtransition_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMouseEventTransition*
/// @param callback QObject* func()
///
void q_mouseeventtransition_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMouseEventTransition*
///
int32_t q_mouseeventtransition_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_mouseeventtransition_super_sender_signal_index` instead
///
#define q_mouseeventtransition_qbase_sender_signal_index q_mouseeventtransition_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMouseEventTransition*
///
int32_t q_mouseeventtransition_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMouseEventTransition*
/// @param callback int32_t func()
///
void q_mouseeventtransition_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMouseEventTransition*
/// @param signal const char*
///
int32_t q_mouseeventtransition_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_mouseeventtransition_super_receivers` instead
///
#define q_mouseeventtransition_qbase_receivers q_mouseeventtransition_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMouseEventTransition*
/// @param signal const char*
///
int32_t q_mouseeventtransition_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMouseEventTransition*
/// @param callback int32_t func(QMouseEventTransition* self, const char* signal)
///
void q_mouseeventtransition_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QMouseEventTransition*
/// @param signal QMetaMethod*
///
bool q_mouseeventtransition_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_mouseeventtransition_super_is_signal_connected` instead
///
#define q_mouseeventtransition_qbase_is_signal_connected q_mouseeventtransition_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QMouseEventTransition*
/// @param signal QMetaMethod*
///
bool q_mouseeventtransition_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QMouseEventTransition*
/// @param callback bool func(QMouseEventTransition* self, QMetaMethod* signal)
///
void q_mouseeventtransition_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#triggered)
///
/// Wrapper to allow calling private signal
///
/// @param self QMouseEventTransition*
/// @param callback void func(QMouseEventTransition* self)
///
void q_mouseeventtransition_on_triggered(void* self, void (*callback)(void*));

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#targetStateChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QMouseEventTransition*
/// @param callback void func(QMouseEventTransition* self)
///
void q_mouseeventtransition_on_target_state_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractTransition
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstracttransition.html#targetStatesChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QMouseEventTransition*
/// @param callback void func(QMouseEventTransition* self)
///
void q_mouseeventtransition_on_target_states_changed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QMouseEventTransition*
/// @param callback void func(QMouseEventTransition* self, const char* objectName)
///
void q_mouseeventtransition_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qmouseeventtransition.html#dtor.QMouseEventTransition)
///
/// Delete this object from C++ memory.
///
/// @param self QMouseEventTransition*
///
void q_mouseeventtransition_delete(void* self);

#endif
