#pragma once
#ifndef SRCQT6C_LIBQPROPERTYANIMATION_H
#define SRCQT6C_LIBQPROPERTYANIMATION_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qpropertyanimation.html

/// q_propertyanimation_new constructs a new QPropertyAnimation object.
///
QPropertyAnimation* q_propertyanimation_new();

/// q_propertyanimation_new2 constructs a new QPropertyAnimation object.
///
/// @param target QObject*
/// @param propertyName const char*
QPropertyAnimation* q_propertyanimation_new2(void* target, const char* propertyName);

/// q_propertyanimation_new3 constructs a new QPropertyAnimation object.
///
/// @param parent QObject*
QPropertyAnimation* q_propertyanimation_new3(void* parent);

/// q_propertyanimation_new4 constructs a new QPropertyAnimation object.
///
/// @param target QObject*
/// @param propertyName const char*
/// @param parent QObject*
QPropertyAnimation* q_propertyanimation_new4(void* target, const char* propertyName, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QPropertyAnimation*
const QMetaObject* q_propertyanimation_meta_object(void* self);

/// @param self QPropertyAnimation*
/// @param param1 const char*
void* q_propertyanimation_metacast(void* self, const char* param1);

/// @param self QPropertyAnimation*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_propertyanimation_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPropertyAnimation*
/// @param callback int32_t fn(QPropertyAnimation*, enum QMetaObject__Call, int, void*)
void q_propertyanimation_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// @param self QPropertyAnimation*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_propertyanimation_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_propertyanimation_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertyanimation.html#targetObject)
///
/// @param self QPropertyAnimation*
QObject* q_propertyanimation_target_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertyanimation.html#setTargetObject)
///
/// @param self QPropertyAnimation*
/// @param target QObject*
void q_propertyanimation_set_target_object(void* self, void* target);

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertyanimation.html#propertyName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPropertyAnimation*
char* q_propertyanimation_property_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertyanimation.html#setPropertyName)
///
/// @param self QPropertyAnimation*
/// @param propertyName const char*
void q_propertyanimation_set_property_name(void* self, const char* propertyName);

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertyanimation.html#event)
///
/// @param self QPropertyAnimation*
/// @param event QEvent*
bool q_propertyanimation_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertyanimation.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QPropertyAnimation*
/// @param callback bool fn(QPropertyAnimation*, QEvent*)
void q_propertyanimation_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertyanimation.html#event)
///
/// Base class method implementation
///
/// @param self QPropertyAnimation*
/// @param event QEvent*
bool q_propertyanimation_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertyanimation.html#updateCurrentValue)
///
/// @param self QPropertyAnimation*
/// @param value QVariant*
void q_propertyanimation_update_current_value(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertyanimation.html#updateCurrentValue)
///
/// Allows for overriding the related default method
///
/// @param self QPropertyAnimation*
/// @param callback void fn(QPropertyAnimation*, QVariant*)
void q_propertyanimation_on_update_current_value(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertyanimation.html#updateCurrentValue)
///
/// Base class method implementation
///
/// @param self QPropertyAnimation*
/// @param value QVariant*
void q_propertyanimation_qbase_update_current_value(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertyanimation.html#updateState)
///
/// @param self QPropertyAnimation*
/// @param newState enum QAbstractAnimation__State
/// @param oldState enum QAbstractAnimation__State
void q_propertyanimation_update_state(void* self, int64_t newState, int64_t oldState);

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertyanimation.html#updateState)
///
/// Allows for overriding the related default method
///
/// @param self QPropertyAnimation*
/// @param callback void fn(QPropertyAnimation*, enum QAbstractAnimation__State, enum QAbstractAnimation__State)
void q_propertyanimation_on_update_state(void* self, void (*callback)(void*, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertyanimation.html#updateState)
///
/// Base class method implementation
///
/// @param self QPropertyAnimation*
/// @param newState enum QAbstractAnimation__State
/// @param oldState enum QAbstractAnimation__State
void q_propertyanimation_qbase_update_state(void* self, int64_t newState, int64_t oldState);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_propertyanimation_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_propertyanimation_tr3(const char* s, const char* c, int n);

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#startValue)
///
/// @param self QPropertyAnimation*
QVariant* q_propertyanimation_start_value(void* self);

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setStartValue)
///
/// @param self QPropertyAnimation*
/// @param value QVariant*
void q_propertyanimation_set_start_value(void* self, void* value);

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#endValue)
///
/// @param self QPropertyAnimation*
QVariant* q_propertyanimation_end_value(void* self);

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setEndValue)
///
/// @param self QPropertyAnimation*
/// @param value QVariant*
void q_propertyanimation_set_end_value(void* self, void* value);

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#keyValueAt)
///
/// @param self QPropertyAnimation*
/// @param step double
QVariant* q_propertyanimation_key_value_at(void* self, double step);

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setKeyValueAt)
///
/// @param self QPropertyAnimation*
/// @param step double
/// @param value QVariant*
void q_propertyanimation_set_key_value_at(void* self, double step, void* value);

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#keyValues)
///
/// @param self QPropertyAnimation*
libqt_list /* of libqt_pair  tuple of double and QVariant*  */ q_propertyanimation_key_values(void* self);

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setKeyValues)
///
/// @param self QPropertyAnimation*
/// @param values libqt_list /* of libqt_pair  tuple of double and QVariant*  */
void q_propertyanimation_set_key_values(void* self, libqt_list /* of libqt_pair  tuple of double and QVariant*  */ values);

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#currentValue)
///
/// @param self QPropertyAnimation*
QVariant* q_propertyanimation_current_value(void* self);

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setDuration)
///
/// @param self QPropertyAnimation*
/// @param msecs int
void q_propertyanimation_set_duration(void* self, int msecs);

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#easingCurve)
///
/// @param self QPropertyAnimation*
QEasingCurve* q_propertyanimation_easing_curve(void* self);

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setEasingCurve)
///
/// @param self QPropertyAnimation*
/// @param easing QEasingCurve*
void q_propertyanimation_set_easing_curve(void* self, void* easing);

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#valueChanged)
///
/// @param self QPropertyAnimation*
/// @param value QVariant*
void q_propertyanimation_value_changed(void* self, void* value);

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#valueChanged)
///
/// @param self QPropertyAnimation*
/// @param callback void fn(QPropertyAnimation*, QVariant*)
void q_propertyanimation_on_value_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#state)
///
/// @param self QPropertyAnimation*
///
/// @return enum QAbstractAnimation__State
int64_t q_propertyanimation_state(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#group)
///
/// @param self QPropertyAnimation*
QAnimationGroup* q_propertyanimation_group(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#direction)
///
/// @param self QPropertyAnimation*
///
/// @return enum QAbstractAnimation__Direction
int64_t q_propertyanimation_direction(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setDirection)
///
/// @param self QPropertyAnimation*
/// @param direction enum QAbstractAnimation__Direction
void q_propertyanimation_set_direction(void* self, int64_t direction);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentTime)
///
/// @param self QPropertyAnimation*
int32_t q_propertyanimation_current_time(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopTime)
///
/// @param self QPropertyAnimation*
int32_t q_propertyanimation_current_loop_time(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#loopCount)
///
/// @param self QPropertyAnimation*
int32_t q_propertyanimation_loop_count(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setLoopCount)
///
/// @param self QPropertyAnimation*
/// @param loopCount int
void q_propertyanimation_set_loop_count(void* self, int loopCount);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoop)
///
/// @param self QPropertyAnimation*
int32_t q_propertyanimation_current_loop(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#totalDuration)
///
/// @param self QPropertyAnimation*
int32_t q_propertyanimation_total_duration(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
///
/// @param self QPropertyAnimation*
void q_propertyanimation_finished(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
///
/// @param self QPropertyAnimation*
/// @param callback void fn(QPropertyAnimation*)
void q_propertyanimation_on_finished(void* self, void (*callback)(void*));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
///
/// @param self QPropertyAnimation*
/// @param newState enum QAbstractAnimation__State
/// @param oldState enum QAbstractAnimation__State
void q_propertyanimation_state_changed(void* self, int64_t newState, int64_t oldState);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
///
/// @param self QPropertyAnimation*
/// @param callback void fn(QPropertyAnimation*, enum QAbstractAnimation__State, enum QAbstractAnimation__State)
void q_propertyanimation_on_state_changed(void* self, void (*callback)(void*, int64_t, int64_t));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
///
/// @param self QPropertyAnimation*
/// @param currentLoop int
void q_propertyanimation_current_loop_changed(void* self, int currentLoop);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
///
/// @param self QPropertyAnimation*
/// @param callback void fn(QPropertyAnimation*, int)
void q_propertyanimation_on_current_loop_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
///
/// @param self QPropertyAnimation*
/// @param param1 enum QAbstractAnimation__Direction
void q_propertyanimation_direction_changed(void* self, int64_t param1);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
///
/// @param self QPropertyAnimation*
/// @param callback void fn(QPropertyAnimation*, enum QAbstractAnimation__Direction)
void q_propertyanimation_on_direction_changed(void* self, void (*callback)(void*, int64_t));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// @param self QPropertyAnimation*
void q_propertyanimation_start(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#pause)
///
/// @param self QPropertyAnimation*
void q_propertyanimation_pause(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#resume)
///
/// @param self QPropertyAnimation*
void q_propertyanimation_resume(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setPaused)
///
/// @param self QPropertyAnimation*
/// @param paused bool
void q_propertyanimation_set_paused(void* self, bool paused);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stop)
///
/// @param self QPropertyAnimation*
void q_propertyanimation_stop(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setCurrentTime)
///
/// @param self QPropertyAnimation*
/// @param msecs int
void q_propertyanimation_set_current_time(void* self, int msecs);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// @param self QPropertyAnimation*
/// @param policy enum QAbstractAnimation__DeletionPolicy
void q_propertyanimation_start1(void* self, int64_t policy);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPropertyAnimation*
const char* q_propertyanimation_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPropertyAnimation*
/// @param name char*
void q_propertyanimation_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QPropertyAnimation*
bool q_propertyanimation_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QPropertyAnimation*
bool q_propertyanimation_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QPropertyAnimation*
bool q_propertyanimation_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QPropertyAnimation*
bool q_propertyanimation_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPropertyAnimation*
/// @param b bool
bool q_propertyanimation_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QPropertyAnimation*
QThread* q_propertyanimation_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPropertyAnimation*
/// @param thread QThread*
bool q_propertyanimation_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPropertyAnimation*
/// @param interval int
int32_t q_propertyanimation_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPropertyAnimation*
/// @param id int
void q_propertyanimation_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPropertyAnimation*
/// @param id enum Qt__TimerId
void q_propertyanimation_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QPropertyAnimation*
libqt_list /* of QObject* */ q_propertyanimation_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QPropertyAnimation*
/// @param parent QObject*
void q_propertyanimation_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPropertyAnimation*
/// @param filterObj QObject*
void q_propertyanimation_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPropertyAnimation*
/// @param obj QObject*
void q_propertyanimation_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_propertyanimation_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPropertyAnimation*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_propertyanimation_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_propertyanimation_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_propertyanimation_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QPropertyAnimation*
void q_propertyanimation_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QPropertyAnimation*
void q_propertyanimation_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPropertyAnimation*
/// @param name const char*
/// @param value QVariant*
bool q_propertyanimation_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QPropertyAnimation*
/// @param name const char*
QVariant* q_propertyanimation_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPropertyAnimation*
const char** q_propertyanimation_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPropertyAnimation*
QBindingStorage* q_propertyanimation_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPropertyAnimation*
const QBindingStorage* q_propertyanimation_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPropertyAnimation*
void q_propertyanimation_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPropertyAnimation*
/// @param callback void fn(QPropertyAnimation*)
void q_propertyanimation_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QPropertyAnimation*
QObject* q_propertyanimation_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QPropertyAnimation*
/// @param classname const char*
bool q_propertyanimation_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPropertyAnimation*
void q_propertyanimation_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPropertyAnimation*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_propertyanimation_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPropertyAnimation*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_propertyanimation_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_propertyanimation_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPropertyAnimation*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_propertyanimation_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPropertyAnimation*
/// @param param1 QObject*
void q_propertyanimation_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPropertyAnimation*
/// @param callback void fn(QPropertyAnimation*, QObject*)
void q_propertyanimation_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#duration)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPropertyAnimation*
int32_t q_propertyanimation_duration(void* self);

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#duration)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPropertyAnimation*
int32_t q_propertyanimation_qbase_duration(void* self);

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#duration)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param callback int32_t fn()
void q_propertyanimation_on_duration(void* self, int32_t (*callback)());

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#updateCurrentTime)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param param1 int
void q_propertyanimation_update_current_time(void* self, int param1);

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#updateCurrentTime)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param param1 int
void q_propertyanimation_qbase_update_current_time(void* self, int param1);

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#updateCurrentTime)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param callback void fn(QPropertyAnimation*, int)
void q_propertyanimation_on_update_current_time(void* self, void (*callback)(void*, int));

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#interpolated)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param from QVariant*
/// @param to QVariant*
/// @param progress double
QVariant* q_propertyanimation_interpolated(void* self, void* from, void* to, double progress);

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#interpolated)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param from QVariant*
/// @param to QVariant*
/// @param progress double
QVariant* q_propertyanimation_qbase_interpolated(void* self, void* from, void* to, double progress);

/// Inherited from QVariantAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#interpolated)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param callback QVariant* fn(QPropertyAnimation*, QVariant*, QVariant*, double)
void q_propertyanimation_on_interpolated(void* self, QVariant* (*callback)(void*, void*, void*, double));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param direction enum QAbstractAnimation__Direction
void q_propertyanimation_update_direction(void* self, int64_t direction);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param direction enum QAbstractAnimation__Direction
void q_propertyanimation_qbase_update_direction(void* self, int64_t direction);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param callback void fn(QPropertyAnimation*, enum QAbstractAnimation__Direction)
void q_propertyanimation_on_update_direction(void* self, void (*callback)(void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param watched QObject*
/// @param event QEvent*
bool q_propertyanimation_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param watched QObject*
/// @param event QEvent*
bool q_propertyanimation_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param callback bool fn(QPropertyAnimation*, QObject*, QEvent*)
void q_propertyanimation_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param event QTimerEvent*
void q_propertyanimation_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param event QTimerEvent*
void q_propertyanimation_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param callback void fn(QPropertyAnimation*, QTimerEvent*)
void q_propertyanimation_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param event QChildEvent*
void q_propertyanimation_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param event QChildEvent*
void q_propertyanimation_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param callback void fn(QPropertyAnimation*, QChildEvent*)
void q_propertyanimation_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param event QEvent*
void q_propertyanimation_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param event QEvent*
void q_propertyanimation_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param callback void fn(QPropertyAnimation*, QEvent*)
void q_propertyanimation_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param signal QMetaMethod*
void q_propertyanimation_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param signal QMetaMethod*
void q_propertyanimation_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param callback void fn(QPropertyAnimation*, QMetaMethod*)
void q_propertyanimation_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param signal QMetaMethod*
void q_propertyanimation_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param signal QMetaMethod*
void q_propertyanimation_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param callback void fn(QPropertyAnimation*, QMetaMethod*)
void q_propertyanimation_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPropertyAnimation*
QObject* q_propertyanimation_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPropertyAnimation*
QObject* q_propertyanimation_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param callback QObject* fn()
void q_propertyanimation_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPropertyAnimation*
int32_t q_propertyanimation_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPropertyAnimation*
int32_t q_propertyanimation_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param callback int32_t fn()
void q_propertyanimation_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param signal const char*
int32_t q_propertyanimation_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param signal const char*
int32_t q_propertyanimation_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param callback int32_t fn(QPropertyAnimation*, const char*)
void q_propertyanimation_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param signal QMetaMethod*
bool q_propertyanimation_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param signal QMetaMethod*
bool q_propertyanimation_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPropertyAnimation*
/// @param callback bool fn(QPropertyAnimation*, QMetaMethod*)
void q_propertyanimation_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPropertyAnimation*
/// @param callback void fn(QPropertyAnimation*, const char*)
void q_propertyanimation_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpropertyanimation.html#dtor.QPropertyAnimation)
///
/// Delete this object from C++ memory.
///
/// @param self QPropertyAnimation*
void q_propertyanimation_delete(void* self);

#endif
