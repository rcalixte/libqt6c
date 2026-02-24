#pragma once
#ifndef SRC_QT6C_LIBQABSTRACTANIMATION_H
#define SRC_QT6C_LIBQABSTRACTANIMATION_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html)

/// q_abstractanimation_new constructs a new QAbstractAnimation object.
///
QAbstractAnimation* q_abstractanimation_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html)

/// q_abstractanimation_new2 constructs a new QAbstractAnimation object.
///
/// @param parent QObject*
///
QAbstractAnimation* q_abstractanimation_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QAbstractAnimation*
///
const QMetaObject* q_abstractanimation_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractAnimation*
/// @param callback const QMetaObject* func()
///
void q_abstractanimation_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_abstractanimation_super_meta_object` instead
///
#define q_abstractanimation_qbase_meta_object q_abstractanimation_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QAbstractAnimation*
///
const QMetaObject* q_abstractanimation_super_meta_object(void* self);

/// @param self QAbstractAnimation*
/// @param param1 const char*
///
void* q_abstractanimation_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QAbstractAnimation*
/// @param callback void* func(QAbstractAnimation* self, const char* param1)
///
void q_abstractanimation_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_abstractanimation_super_metacast` instead
///
#define q_abstractanimation_qbase_metacast q_abstractanimation_super_metacast

/// Base class method implementation
///
/// @param self QAbstractAnimation*
/// @param param1 const char*
///
void* q_abstractanimation_super_metacast(void* self, const char* param1);

/// @param self QAbstractAnimation*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_abstractanimation_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QAbstractAnimation*
/// @param callback int32_t func(QAbstractAnimation* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_abstractanimation_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `q_abstractanimation_super_metacall` instead
///
#define q_abstractanimation_qbase_metacall q_abstractanimation_super_metacall

/// Base class method implementation
///
/// @param self QAbstractAnimation*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_abstractanimation_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_abstractanimation_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#state)
///
/// @param self QAbstractAnimation*
///
/// @return enum QAbstractAnimation__State
///
int32_t q_abstractanimation_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#group)
///
/// @param self QAbstractAnimation*
///
QAnimationGroup* q_abstractanimation_group(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#direction)
///
/// @param self QAbstractAnimation*
///
/// @return enum QAbstractAnimation__Direction
///
int32_t q_abstractanimation_direction(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setDirection)
///
/// @param self QAbstractAnimation*
/// @param direction enum QAbstractAnimation__Direction
///
void q_abstractanimation_set_direction(void* self, int32_t direction);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentTime)
///
/// @param self QAbstractAnimation*
///
int32_t q_abstractanimation_current_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopTime)
///
/// @param self QAbstractAnimation*
///
int32_t q_abstractanimation_current_loop_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#loopCount)
///
/// @param self QAbstractAnimation*
///
int32_t q_abstractanimation_loop_count(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setLoopCount)
///
/// @param self QAbstractAnimation*
/// @param loopCount int
///
void q_abstractanimation_set_loop_count(void* self, int loopCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoop)
///
/// @param self QAbstractAnimation*
///
int32_t q_abstractanimation_current_loop(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#duration)
///
/// @param self QAbstractAnimation*
///
int32_t q_abstractanimation_duration(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#duration)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractAnimation*
/// @param callback int32_t func()
///
void q_abstractanimation_on_duration(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `q_abstractanimation_super_duration` instead
///
#define q_abstractanimation_qbase_duration q_abstractanimation_super_duration

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#duration)
///
/// Base class method implementation
///
/// @param self QAbstractAnimation*
///
int32_t q_abstractanimation_super_duration(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#totalDuration)
///
/// @param self QAbstractAnimation*
///
int32_t q_abstractanimation_total_duration(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
///
/// @param self QAbstractAnimation*
///
void q_abstractanimation_finished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
///
/// @param self QAbstractAnimation*
/// @param callback void func(QAbstractAnimation* self)
///
void q_abstractanimation_on_finished(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
///
/// @param self QAbstractAnimation*
/// @param newState enum QAbstractAnimation__State
/// @param oldState enum QAbstractAnimation__State
///
void q_abstractanimation_state_changed(void* self, int32_t newState, int32_t oldState);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
///
/// @param self QAbstractAnimation*
/// @param callback void func(QAbstractAnimation* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState)
///
void q_abstractanimation_on_state_changed(void* self, void (*callback)(void*, int32_t, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
///
/// @param self QAbstractAnimation*
/// @param currentLoop int
///
void q_abstractanimation_current_loop_changed(void* self, int currentLoop);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
///
/// @param self QAbstractAnimation*
/// @param callback void func(QAbstractAnimation* self, int currentLoop)
///
void q_abstractanimation_on_current_loop_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
///
/// @param self QAbstractAnimation*
/// @param param1 enum QAbstractAnimation__Direction
///
void q_abstractanimation_direction_changed(void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
///
/// @param self QAbstractAnimation*
/// @param callback void func(QAbstractAnimation* self, enum QAbstractAnimation__Direction param1)
///
void q_abstractanimation_on_direction_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// @param self QAbstractAnimation*
///
void q_abstractanimation_start(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#pause)
///
/// @param self QAbstractAnimation*
///
void q_abstractanimation_pause(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#resume)
///
/// @param self QAbstractAnimation*
///
void q_abstractanimation_resume(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setPaused)
///
/// @param self QAbstractAnimation*
/// @param paused bool
///
void q_abstractanimation_set_paused(void* self, bool paused);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#stop)
///
/// @param self QAbstractAnimation*
///
void q_abstractanimation_stop(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setCurrentTime)
///
/// @param self QAbstractAnimation*
/// @param msecs int
///
void q_abstractanimation_set_current_time(void* self, int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#event)
///
/// @param self QAbstractAnimation*
/// @param event QEvent*
///
bool q_abstractanimation_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractAnimation*
/// @param callback bool func(QAbstractAnimation* self, QEvent* event)
///
void q_abstractanimation_on_event(void* self, bool (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_abstractanimation_super_event` instead
///
#define q_abstractanimation_qbase_event q_abstractanimation_super_event

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#event)
///
/// Base class method implementation
///
/// @param self QAbstractAnimation*
/// @param event QEvent*
///
bool q_abstractanimation_super_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateCurrentTime)
///
/// @param self QAbstractAnimation*
/// @param currentTime int
///
void q_abstractanimation_update_current_time(void* self, int currentTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateCurrentTime)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractAnimation*
/// @param callback void func(QAbstractAnimation* self, int currentTime)
///
void q_abstractanimation_on_update_current_time(void* self, void (*callback)(void*, int));

/// @warning DEPRECATED: Use `q_abstractanimation_super_update_current_time` instead
///
#define q_abstractanimation_qbase_update_current_time q_abstractanimation_super_update_current_time

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateCurrentTime)
///
/// Base class method implementation
///
/// @param self QAbstractAnimation*
/// @param currentTime int
///
void q_abstractanimation_super_update_current_time(void* self, int currentTime);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateState)
///
/// @param self QAbstractAnimation*
/// @param newState enum QAbstractAnimation__State
/// @param oldState enum QAbstractAnimation__State
///
void q_abstractanimation_update_state(void* self, int32_t newState, int32_t oldState);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateState)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractAnimation*
/// @param callback void func(QAbstractAnimation* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState)
///
void q_abstractanimation_on_update_state(void* self, void (*callback)(void*, int32_t, int32_t));

/// @warning DEPRECATED: Use `q_abstractanimation_super_update_state` instead
///
#define q_abstractanimation_qbase_update_state q_abstractanimation_super_update_state

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateState)
///
/// Base class method implementation
///
/// @param self QAbstractAnimation*
/// @param newState enum QAbstractAnimation__State
/// @param oldState enum QAbstractAnimation__State
///
void q_abstractanimation_super_update_state(void* self, int32_t newState, int32_t oldState);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
///
/// @param self QAbstractAnimation*
/// @param direction enum QAbstractAnimation__Direction
///
void q_abstractanimation_update_direction(void* self, int32_t direction);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractAnimation*
/// @param callback void func(QAbstractAnimation* self, enum QAbstractAnimation__Direction direction)
///
void q_abstractanimation_on_update_direction(void* self, void (*callback)(void*, int32_t));

/// @warning DEPRECATED: Use `q_abstractanimation_super_update_direction` instead
///
#define q_abstractanimation_qbase_update_direction q_abstractanimation_super_update_direction

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
///
/// Base class method implementation
///
/// @param self QAbstractAnimation*
/// @param direction enum QAbstractAnimation__Direction
///
void q_abstractanimation_super_update_direction(void* self, int32_t direction);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_abstractanimation_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_abstractanimation_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// @param self QAbstractAnimation*
/// @param policy enum QAbstractAnimation__DeletionPolicy
///
void q_abstractanimation_start1(void* self, int32_t policy);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAbstractAnimation*
///
const char* q_abstractanimation_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAbstractAnimation*
/// @param name const char*
///
void q_abstractanimation_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QAbstractAnimation*
///
bool q_abstractanimation_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QAbstractAnimation*
///
bool q_abstractanimation_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QAbstractAnimation*
///
bool q_abstractanimation_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QAbstractAnimation*
///
bool q_abstractanimation_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAbstractAnimation*
/// @param b bool
///
bool q_abstractanimation_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QAbstractAnimation*
///
QThread* q_abstractanimation_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstractAnimation*
/// @param thread QThread*
///
bool q_abstractanimation_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractAnimation*
/// @param interval int
///
int32_t q_abstractanimation_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractAnimation*
/// @param time int64_t of nanoseconds
///
int32_t q_abstractanimation_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractAnimation*
/// @param id int
///
void q_abstractanimation_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractAnimation*
/// @param id enum Qt__TimerId
///
void q_abstractanimation_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QAbstractAnimation*
///
/// @return libqt_list of QObject*
///
libqt_list q_abstractanimation_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QAbstractAnimation*
/// @param parent QObject*
///
void q_abstractanimation_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAbstractAnimation*
/// @param filterObj QObject*
///
void q_abstractanimation_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAbstractAnimation*
/// @param obj QObject*
///
void q_abstractanimation_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_abstractanimation_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_abstractanimation_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAbstractAnimation*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_abstractanimation_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstractanimation_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_abstractanimation_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractAnimation*
///
bool q_abstractanimation_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractAnimation*
/// @param receiver QObject*
///
bool q_abstractanimation_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_abstractanimation_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QAbstractAnimation*
///
void q_abstractanimation_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QAbstractAnimation*
///
void q_abstractanimation_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAbstractAnimation*
/// @param name const char*
/// @param value QVariant*
///
bool q_abstractanimation_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QAbstractAnimation*
/// @param name const char*
///
QVariant* q_abstractanimation_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QAbstractAnimation*
///
const char** q_abstractanimation_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractAnimation*
///
QBindingStorage* q_abstractanimation_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractAnimation*
///
const QBindingStorage* q_abstractanimation_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractAnimation*
///
void q_abstractanimation_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractAnimation*
/// @param callback void func(QAbstractAnimation* self)
///
void q_abstractanimation_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QAbstractAnimation*
///
QObject* q_abstractanimation_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QAbstractAnimation*
/// @param classname const char*
///
bool q_abstractanimation_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAbstractAnimation*
///
void q_abstractanimation_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractAnimation*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_abstractanimation_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractAnimation*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_abstractanimation_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_abstractanimation_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_abstractanimation_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAbstractAnimation*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_abstractanimation_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractAnimation*
/// @param signal const char*
///
bool q_abstractanimation_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractAnimation*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_abstractanimation_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractAnimation*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstractanimation_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAbstractAnimation*
/// @param receiver QObject*
/// @param member const char*
///
bool q_abstractanimation_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractAnimation*
/// @param param1 QObject*
///
void q_abstractanimation_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractAnimation*
/// @param callback void func(QAbstractAnimation* self, QObject* param1)
///
void q_abstractanimation_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractAnimation*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_abstractanimation_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `q_abstractanimation_super_event_filter` instead
///
#define q_abstractanimation_qbase_event_filter q_abstractanimation_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractAnimation*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_abstractanimation_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractAnimation*
/// @param callback bool func(QAbstractAnimation* self, QObject* watched, QEvent* event)
///
void q_abstractanimation_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractAnimation*
/// @param event QTimerEvent*
///
void q_abstractanimation_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_abstractanimation_super_timer_event` instead
///
#define q_abstractanimation_qbase_timer_event q_abstractanimation_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractAnimation*
/// @param event QTimerEvent*
///
void q_abstractanimation_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractAnimation*
/// @param callback void func(QAbstractAnimation* self, QTimerEvent* event)
///
void q_abstractanimation_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractAnimation*
/// @param event QChildEvent*
///
void q_abstractanimation_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_abstractanimation_super_child_event` instead
///
#define q_abstractanimation_qbase_child_event q_abstractanimation_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractAnimation*
/// @param event QChildEvent*
///
void q_abstractanimation_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractAnimation*
/// @param callback void func(QAbstractAnimation* self, QChildEvent* event)
///
void q_abstractanimation_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractAnimation*
/// @param event QEvent*
///
void q_abstractanimation_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_abstractanimation_super_custom_event` instead
///
#define q_abstractanimation_qbase_custom_event q_abstractanimation_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractAnimation*
/// @param event QEvent*
///
void q_abstractanimation_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractAnimation*
/// @param callback void func(QAbstractAnimation* self, QEvent* event)
///
void q_abstractanimation_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractAnimation*
/// @param signal QMetaMethod*
///
void q_abstractanimation_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_abstractanimation_super_connect_notify` instead
///
#define q_abstractanimation_qbase_connect_notify q_abstractanimation_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractAnimation*
/// @param signal QMetaMethod*
///
void q_abstractanimation_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractAnimation*
/// @param callback void func(QAbstractAnimation* self, QMetaMethod* signal)
///
void q_abstractanimation_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractAnimation*
/// @param signal QMetaMethod*
///
void q_abstractanimation_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_abstractanimation_super_disconnect_notify` instead
///
#define q_abstractanimation_qbase_disconnect_notify q_abstractanimation_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractAnimation*
/// @param signal QMetaMethod*
///
void q_abstractanimation_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractAnimation*
/// @param callback void func(QAbstractAnimation* self, QMetaMethod* signal)
///
void q_abstractanimation_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractAnimation*
///
QObject* q_abstractanimation_sender(void* self);

/// @warning DEPRECATED: Use `q_abstractanimation_super_sender` instead
///
#define q_abstractanimation_qbase_sender q_abstractanimation_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractAnimation*
///
QObject* q_abstractanimation_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractAnimation*
/// @param callback QObject* func()
///
void q_abstractanimation_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractAnimation*
///
int32_t q_abstractanimation_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_abstractanimation_super_sender_signal_index` instead
///
#define q_abstractanimation_qbase_sender_signal_index q_abstractanimation_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractAnimation*
///
int32_t q_abstractanimation_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractAnimation*
/// @param callback int32_t func()
///
void q_abstractanimation_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractAnimation*
/// @param signal const char*
///
int32_t q_abstractanimation_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_abstractanimation_super_receivers` instead
///
#define q_abstractanimation_qbase_receivers q_abstractanimation_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractAnimation*
/// @param signal const char*
///
int32_t q_abstractanimation_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractAnimation*
/// @param callback int32_t func(QAbstractAnimation* self, const char* signal)
///
void q_abstractanimation_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractAnimation*
/// @param signal QMetaMethod*
///
bool q_abstractanimation_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_abstractanimation_super_is_signal_connected` instead
///
#define q_abstractanimation_qbase_is_signal_connected q_abstractanimation_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractAnimation*
/// @param signal QMetaMethod*
///
bool q_abstractanimation_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractAnimation*
/// @param callback bool func(QAbstractAnimation* self, QMetaMethod* signal)
///
void q_abstractanimation_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractAnimation*
/// @param callback void func(QAbstractAnimation* self, const char* objectName)
///
void q_abstractanimation_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#dtor.QAbstractAnimation)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractAnimation*
///
void q_abstractanimation_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qanimationdriver.html)

/// q_animationdriver_new constructs a new QAnimationDriver object.
///
QAnimationDriver* q_animationdriver_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qanimationdriver.html)

/// q_animationdriver_new2 constructs a new QAnimationDriver object.
///
/// @param parent QObject*
///
QAnimationDriver* q_animationdriver_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QAnimationDriver*
///
const QMetaObject* q_animationdriver_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QAnimationDriver*
/// @param callback const QMetaObject* func()
///
void q_animationdriver_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_animationdriver_super_meta_object` instead
///
#define q_animationdriver_qbase_meta_object q_animationdriver_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QAnimationDriver*
///
const QMetaObject* q_animationdriver_super_meta_object(void* self);

/// @param self QAnimationDriver*
/// @param param1 const char*
///
void* q_animationdriver_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QAnimationDriver*
/// @param callback void* func(QAnimationDriver* self, const char* param1)
///
void q_animationdriver_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_animationdriver_super_metacast` instead
///
#define q_animationdriver_qbase_metacast q_animationdriver_super_metacast

/// Base class method implementation
///
/// @param self QAnimationDriver*
/// @param param1 const char*
///
void* q_animationdriver_super_metacast(void* self, const char* param1);

/// @param self QAnimationDriver*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_animationdriver_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QAnimationDriver*
/// @param callback int32_t func(QAnimationDriver* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_animationdriver_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `q_animationdriver_super_metacall` instead
///
#define q_animationdriver_qbase_metacall q_animationdriver_super_metacall

/// Base class method implementation
///
/// @param self QAnimationDriver*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_animationdriver_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_animationdriver_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qanimationdriver.html#advance)
///
/// @param self QAnimationDriver*
///
void q_animationdriver_advance(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qanimationdriver.html#advance)
///
/// Allows for overriding the related default method
///
/// @param self QAnimationDriver*
/// @param callback void func()
///
void q_animationdriver_on_advance(void* self, void (*callback)());

/// @warning DEPRECATED: Use `q_animationdriver_super_advance` instead
///
#define q_animationdriver_qbase_advance q_animationdriver_super_advance

/// [Upstream resources](https://doc.qt.io/qt-6/qanimationdriver.html#advance)
///
/// Base class method implementation
///
/// @param self QAnimationDriver*
///
void q_animationdriver_super_advance(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qanimationdriver.html#install)
///
/// @param self QAnimationDriver*
///
void q_animationdriver_install(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qanimationdriver.html#uninstall)
///
/// @param self QAnimationDriver*
///
void q_animationdriver_uninstall(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qanimationdriver.html#isRunning)
///
/// @param self QAnimationDriver*
///
bool q_animationdriver_is_running(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qanimationdriver.html#elapsed)
///
/// @param self QAnimationDriver*
///
long long q_animationdriver_elapsed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qanimationdriver.html#elapsed)
///
/// Allows for overriding the related default method
///
/// @param self QAnimationDriver*
/// @param callback long long func()
///
void q_animationdriver_on_elapsed(void* self, long long (*callback)());

/// @warning DEPRECATED: Use `q_animationdriver_super_elapsed` instead
///
#define q_animationdriver_qbase_elapsed q_animationdriver_super_elapsed

/// [Upstream resources](https://doc.qt.io/qt-6/qanimationdriver.html#elapsed)
///
/// Base class method implementation
///
/// @param self QAnimationDriver*
///
long long q_animationdriver_super_elapsed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qanimationdriver.html#started)
///
/// @param self QAnimationDriver*
///
void q_animationdriver_started(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qanimationdriver.html#started)
///
/// @param self QAnimationDriver*
/// @param callback void func(QAnimationDriver* self)
///
void q_animationdriver_on_started(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qanimationdriver.html#stopped)
///
/// @param self QAnimationDriver*
///
void q_animationdriver_stopped(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qanimationdriver.html#stopped)
///
/// @param self QAnimationDriver*
/// @param callback void func(QAnimationDriver* self)
///
void q_animationdriver_on_stopped(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qanimationdriver.html#advanceAnimation)
///
/// @param self QAnimationDriver*
///
void q_animationdriver_advance_animation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qanimationdriver.html#advanceAnimation)
///
/// Allows for overriding the related default method
///
/// @param self QAnimationDriver*
/// @param callback void func()
///
void q_animationdriver_on_advance_animation(void* self, void (*callback)());

/// @warning DEPRECATED: Use `q_animationdriver_super_advance_animation` instead
///
#define q_animationdriver_qbase_advance_animation q_animationdriver_super_advance_animation

/// [Upstream resources](https://doc.qt.io/qt-6/qanimationdriver.html#advanceAnimation)
///
/// Base class method implementation
///
/// @param self QAnimationDriver*
///
void q_animationdriver_super_advance_animation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qanimationdriver.html#start)
///
/// @param self QAnimationDriver*
///
void q_animationdriver_start(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qanimationdriver.html#start)
///
/// Allows for overriding the related default method
///
/// @param self QAnimationDriver*
/// @param callback void func()
///
void q_animationdriver_on_start(void* self, void (*callback)());

/// @warning DEPRECATED: Use `q_animationdriver_super_start` instead
///
#define q_animationdriver_qbase_start q_animationdriver_super_start

/// [Upstream resources](https://doc.qt.io/qt-6/qanimationdriver.html#start)
///
/// Base class method implementation
///
/// @param self QAnimationDriver*
///
void q_animationdriver_super_start(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qanimationdriver.html#stop)
///
/// @param self QAnimationDriver*
///
void q_animationdriver_stop(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qanimationdriver.html#stop)
///
/// Allows for overriding the related default method
///
/// @param self QAnimationDriver*
/// @param callback void func()
///
void q_animationdriver_on_stop(void* self, void (*callback)());

/// @warning DEPRECATED: Use `q_animationdriver_super_stop` instead
///
#define q_animationdriver_qbase_stop q_animationdriver_super_stop

/// [Upstream resources](https://doc.qt.io/qt-6/qanimationdriver.html#stop)
///
/// Base class method implementation
///
/// @param self QAnimationDriver*
///
void q_animationdriver_super_stop(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_animationdriver_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_animationdriver_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAnimationDriver*
///
const char* q_animationdriver_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAnimationDriver*
/// @param name const char*
///
void q_animationdriver_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QAnimationDriver*
///
bool q_animationdriver_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QAnimationDriver*
///
bool q_animationdriver_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QAnimationDriver*
///
bool q_animationdriver_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QAnimationDriver*
///
bool q_animationdriver_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAnimationDriver*
/// @param b bool
///
bool q_animationdriver_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QAnimationDriver*
///
QThread* q_animationdriver_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAnimationDriver*
/// @param thread QThread*
///
bool q_animationdriver_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAnimationDriver*
/// @param interval int
///
int32_t q_animationdriver_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAnimationDriver*
/// @param time int64_t of nanoseconds
///
int32_t q_animationdriver_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAnimationDriver*
/// @param id int
///
void q_animationdriver_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAnimationDriver*
/// @param id enum Qt__TimerId
///
void q_animationdriver_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QAnimationDriver*
///
/// @return libqt_list of QObject*
///
libqt_list q_animationdriver_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QAnimationDriver*
/// @param parent QObject*
///
void q_animationdriver_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAnimationDriver*
/// @param filterObj QObject*
///
void q_animationdriver_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAnimationDriver*
/// @param obj QObject*
///
void q_animationdriver_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_animationdriver_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_animationdriver_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAnimationDriver*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_animationdriver_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_animationdriver_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_animationdriver_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAnimationDriver*
///
bool q_animationdriver_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAnimationDriver*
/// @param receiver QObject*
///
bool q_animationdriver_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_animationdriver_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QAnimationDriver*
///
void q_animationdriver_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QAnimationDriver*
///
void q_animationdriver_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAnimationDriver*
/// @param name const char*
/// @param value QVariant*
///
bool q_animationdriver_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QAnimationDriver*
/// @param name const char*
///
QVariant* q_animationdriver_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QAnimationDriver*
///
const char** q_animationdriver_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAnimationDriver*
///
QBindingStorage* q_animationdriver_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAnimationDriver*
///
const QBindingStorage* q_animationdriver_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAnimationDriver*
///
void q_animationdriver_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAnimationDriver*
/// @param callback void func(QAnimationDriver* self)
///
void q_animationdriver_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QAnimationDriver*
///
QObject* q_animationdriver_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QAnimationDriver*
/// @param classname const char*
///
bool q_animationdriver_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAnimationDriver*
///
void q_animationdriver_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAnimationDriver*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_animationdriver_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAnimationDriver*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_animationdriver_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_animationdriver_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_animationdriver_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAnimationDriver*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_animationdriver_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAnimationDriver*
/// @param signal const char*
///
bool q_animationdriver_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAnimationDriver*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_animationdriver_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAnimationDriver*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_animationdriver_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QAnimationDriver*
/// @param receiver QObject*
/// @param member const char*
///
bool q_animationdriver_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAnimationDriver*
/// @param param1 QObject*
///
void q_animationdriver_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAnimationDriver*
/// @param callback void func(QAnimationDriver* self, QObject* param1)
///
void q_animationdriver_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAnimationDriver*
/// @param event QEvent*
///
bool q_animationdriver_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_animationdriver_super_event` instead
///
#define q_animationdriver_qbase_event q_animationdriver_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAnimationDriver*
/// @param event QEvent*
///
bool q_animationdriver_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAnimationDriver*
/// @param callback bool func(QAnimationDriver* self, QEvent* event)
///
void q_animationdriver_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAnimationDriver*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_animationdriver_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `q_animationdriver_super_event_filter` instead
///
#define q_animationdriver_qbase_event_filter q_animationdriver_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAnimationDriver*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_animationdriver_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAnimationDriver*
/// @param callback bool func(QAnimationDriver* self, QObject* watched, QEvent* event)
///
void q_animationdriver_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAnimationDriver*
/// @param event QTimerEvent*
///
void q_animationdriver_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_animationdriver_super_timer_event` instead
///
#define q_animationdriver_qbase_timer_event q_animationdriver_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAnimationDriver*
/// @param event QTimerEvent*
///
void q_animationdriver_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAnimationDriver*
/// @param callback void func(QAnimationDriver* self, QTimerEvent* event)
///
void q_animationdriver_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAnimationDriver*
/// @param event QChildEvent*
///
void q_animationdriver_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_animationdriver_super_child_event` instead
///
#define q_animationdriver_qbase_child_event q_animationdriver_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAnimationDriver*
/// @param event QChildEvent*
///
void q_animationdriver_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAnimationDriver*
/// @param callback void func(QAnimationDriver* self, QChildEvent* event)
///
void q_animationdriver_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAnimationDriver*
/// @param event QEvent*
///
void q_animationdriver_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_animationdriver_super_custom_event` instead
///
#define q_animationdriver_qbase_custom_event q_animationdriver_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAnimationDriver*
/// @param event QEvent*
///
void q_animationdriver_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAnimationDriver*
/// @param callback void func(QAnimationDriver* self, QEvent* event)
///
void q_animationdriver_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAnimationDriver*
/// @param signal QMetaMethod*
///
void q_animationdriver_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_animationdriver_super_connect_notify` instead
///
#define q_animationdriver_qbase_connect_notify q_animationdriver_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAnimationDriver*
/// @param signal QMetaMethod*
///
void q_animationdriver_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAnimationDriver*
/// @param callback void func(QAnimationDriver* self, QMetaMethod* signal)
///
void q_animationdriver_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAnimationDriver*
/// @param signal QMetaMethod*
///
void q_animationdriver_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_animationdriver_super_disconnect_notify` instead
///
#define q_animationdriver_qbase_disconnect_notify q_animationdriver_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAnimationDriver*
/// @param signal QMetaMethod*
///
void q_animationdriver_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAnimationDriver*
/// @param callback void func(QAnimationDriver* self, QMetaMethod* signal)
///
void q_animationdriver_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAnimationDriver*
///
QObject* q_animationdriver_sender(void* self);

/// @warning DEPRECATED: Use `q_animationdriver_super_sender` instead
///
#define q_animationdriver_qbase_sender q_animationdriver_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAnimationDriver*
///
QObject* q_animationdriver_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAnimationDriver*
/// @param callback QObject* func()
///
void q_animationdriver_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAnimationDriver*
///
int32_t q_animationdriver_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_animationdriver_super_sender_signal_index` instead
///
#define q_animationdriver_qbase_sender_signal_index q_animationdriver_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAnimationDriver*
///
int32_t q_animationdriver_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAnimationDriver*
/// @param callback int32_t func()
///
void q_animationdriver_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAnimationDriver*
/// @param signal const char*
///
int32_t q_animationdriver_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_animationdriver_super_receivers` instead
///
#define q_animationdriver_qbase_receivers q_animationdriver_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAnimationDriver*
/// @param signal const char*
///
int32_t q_animationdriver_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAnimationDriver*
/// @param callback int32_t func(QAnimationDriver* self, const char* signal)
///
void q_animationdriver_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAnimationDriver*
/// @param signal QMetaMethod*
///
bool q_animationdriver_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_animationdriver_super_is_signal_connected` instead
///
#define q_animationdriver_qbase_is_signal_connected q_animationdriver_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAnimationDriver*
/// @param signal QMetaMethod*
///
bool q_animationdriver_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAnimationDriver*
/// @param callback bool func(QAnimationDriver* self, QMetaMethod* signal)
///
void q_animationdriver_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAnimationDriver*
/// @param callback void func(QAnimationDriver* self, const char* objectName)
///
void q_animationdriver_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qanimationdriver.html#dtor.QAnimationDriver)
///
/// Delete this object from C++ memory.
///
/// @param self QAnimationDriver*
///
void q_animationdriver_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#public-types)

typedef enum {
    QABSTRACTANIMATION_DIRECTION_FORWARD = 0,
    QABSTRACTANIMATION_DIRECTION_BACKWARD = 1
} QAbstractAnimation__Direction;

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#public-types)

typedef enum {
    QABSTRACTANIMATION_STATE_STOPPED = 0,
    QABSTRACTANIMATION_STATE_PAUSED = 1,
    QABSTRACTANIMATION_STATE_RUNNING = 2
} QAbstractAnimation__State;

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#public-types)

typedef enum {
    QABSTRACTANIMATION_DELETIONPOLICY_KEEPWHENSTOPPED = 0,
    QABSTRACTANIMATION_DELETIONPOLICY_DELETEWHENSTOPPED = 1
} QAbstractAnimation__DeletionPolicy;

#endif
