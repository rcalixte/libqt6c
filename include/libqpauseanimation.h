#pragma once
#ifndef LIBQPAUSEANIMATION_H
#define LIBQPAUSEANIMATION_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qpauseanimation.html)

/// q_pauseanimation_new constructs a new QPauseAnimation object.
///
QPauseAnimation* q_pauseanimation_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qpauseanimation.html)

/// q_pauseanimation_new2 constructs a new QPauseAnimation object.
///
/// @param msecs int
///
QPauseAnimation* q_pauseanimation_new2(int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qpauseanimation.html)

/// q_pauseanimation_new3 constructs a new QPauseAnimation object.
///
/// @param parent QObject*
///
QPauseAnimation* q_pauseanimation_new3(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qpauseanimation.html)

/// q_pauseanimation_new4 constructs a new QPauseAnimation object.
///
/// @param msecs int
/// @param parent QObject*
///
QPauseAnimation* q_pauseanimation_new4(int msecs, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QPauseAnimation*
///
const QMetaObject* q_pauseanimation_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QPauseAnimation*
/// @param callback const QMetaObject* func(const QPauseAnimation* self)
///
void q_pauseanimation_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QPauseAnimation*
///
const QMetaObject* q_pauseanimation_super_meta_object(const void* self);

/// @param self QPauseAnimation*
/// @param param1 const char*
///
void* q_pauseanimation_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QPauseAnimation*
/// @param callback void* func(QPauseAnimation* self, const char* param1)
///
void q_pauseanimation_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QPauseAnimation*
/// @param param1 const char*
///
void* q_pauseanimation_super_metacast(void* self, const char* param1);

/// @param self QPauseAnimation*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_pauseanimation_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPauseAnimation*
/// @param callback int32_t func(QPauseAnimation* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_pauseanimation_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QPauseAnimation*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_pauseanimation_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_pauseanimation_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qpauseanimation.html#duration)
///
/// @param self const QPauseAnimation*
///
int32_t q_pauseanimation_duration(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpauseanimation.html#duration)
///
/// Allows for overriding the related default method
///
/// @param self const QPauseAnimation*
/// @param callback int32_t func(const QPauseAnimation* self)
///
void q_pauseanimation_on_duration(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpauseanimation.html#duration)
///
/// Base class method implementation
///
/// @param self const QPauseAnimation*
///
int32_t q_pauseanimation_super_duration(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpauseanimation.html#setDuration)
///
/// @param self QPauseAnimation*
/// @param msecs int
///
void q_pauseanimation_set_duration(void* self, int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qpauseanimation.html#event)
///
/// @param self QPauseAnimation*
/// @param e QEvent*
///
bool q_pauseanimation_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qpauseanimation.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QPauseAnimation*
/// @param callback bool func(QPauseAnimation* self, QEvent* e)
///
void q_pauseanimation_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpauseanimation.html#event)
///
/// Base class method implementation
///
/// @param self QPauseAnimation*
/// @param e QEvent*
///
bool q_pauseanimation_super_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qpauseanimation.html#updateCurrentTime)
///
/// @param self QPauseAnimation*
/// @param param1 int
///
void q_pauseanimation_update_current_time(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qpauseanimation.html#updateCurrentTime)
///
/// Allows for overriding the related default method
///
/// @param self QPauseAnimation*
/// @param callback void func(QPauseAnimation* self, int param1)
///
void q_pauseanimation_on_update_current_time(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qpauseanimation.html#updateCurrentTime)
///
/// Base class method implementation
///
/// @param self QPauseAnimation*
/// @param param1 int
///
void q_pauseanimation_super_update_current_time(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_pauseanimation_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_pauseanimation_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#state)
///
/// @param self const QPauseAnimation*
///
/// @return enum QAbstractAnimation__State
///
int32_t q_pauseanimation_state(const void* self);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#group)
///
/// @param self const QPauseAnimation*
///
QAnimationGroup* q_pauseanimation_group(const void* self);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#direction)
///
/// @param self const QPauseAnimation*
///
/// @return enum QAbstractAnimation__Direction
///
int32_t q_pauseanimation_direction(const void* self);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setDirection)
///
/// @param self QPauseAnimation*
/// @param direction enum QAbstractAnimation__Direction
///
void q_pauseanimation_set_direction(void* self, int32_t direction);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentTime)
///
/// @param self const QPauseAnimation*
///
int32_t q_pauseanimation_current_time(const void* self);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopTime)
///
/// @param self const QPauseAnimation*
///
int32_t q_pauseanimation_current_loop_time(const void* self);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#loopCount)
///
/// @param self const QPauseAnimation*
///
int32_t q_pauseanimation_loop_count(const void* self);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setLoopCount)
///
/// @param self QPauseAnimation*
/// @param loopCount int
///
void q_pauseanimation_set_loop_count(void* self, int loopCount);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoop)
///
/// @param self const QPauseAnimation*
///
int32_t q_pauseanimation_current_loop(const void* self);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#totalDuration)
///
/// @param self const QPauseAnimation*
///
int32_t q_pauseanimation_total_duration(const void* self);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
///
/// @param self QPauseAnimation*
///
void q_pauseanimation_finished(void* self);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
///
/// @param self QPauseAnimation*
/// @param callback void func(QPauseAnimation* self)
///
void q_pauseanimation_on_finished(void* self, void (*callback)(void*));

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
///
/// @param self QPauseAnimation*
/// @param newState enum QAbstractAnimation__State
/// @param oldState enum QAbstractAnimation__State
///
void q_pauseanimation_state_changed(void* self, int32_t newState, int32_t oldState);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
///
/// @param self QPauseAnimation*
/// @param callback void func(QPauseAnimation* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState)
///
void q_pauseanimation_on_state_changed(void* self, void (*callback)(void*, int32_t, int32_t));

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
///
/// @param self QPauseAnimation*
/// @param currentLoop int
///
void q_pauseanimation_current_loop_changed(void* self, int currentLoop);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
///
/// @param self QPauseAnimation*
/// @param callback void func(QPauseAnimation* self, int currentLoop)
///
void q_pauseanimation_on_current_loop_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
///
/// @param self QPauseAnimation*
/// @param param1 enum QAbstractAnimation__Direction
///
void q_pauseanimation_direction_changed(void* self, int32_t param1);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
///
/// @param self QPauseAnimation*
/// @param callback void func(QPauseAnimation* self, enum QAbstractAnimation__Direction param1)
///
void q_pauseanimation_on_direction_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// @param self QPauseAnimation*
///
void q_pauseanimation_start(void* self);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#pause)
///
/// @param self QPauseAnimation*
///
void q_pauseanimation_pause(void* self);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#resume)
///
/// @param self QPauseAnimation*
///
void q_pauseanimation_resume(void* self);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setPaused)
///
/// @param self QPauseAnimation*
/// @param paused bool
///
void q_pauseanimation_set_paused(void* self, bool paused);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#stop)
///
/// @param self QPauseAnimation*
///
void q_pauseanimation_stop(void* self);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setCurrentTime)
///
/// @param self QPauseAnimation*
/// @param msecs int
///
void q_pauseanimation_set_current_time(void* self, int msecs);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// @param self QPauseAnimation*
/// @param policy enum QAbstractAnimation__DeletionPolicy
///
void q_pauseanimation_start1(void* self, int32_t policy);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPauseAnimation*
///
const char* q_pauseanimation_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPauseAnimation*
/// @param name const char*
///
void q_pauseanimation_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QPauseAnimation*
///
bool q_pauseanimation_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QPauseAnimation*
///
bool q_pauseanimation_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QPauseAnimation*
///
bool q_pauseanimation_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QPauseAnimation*
///
bool q_pauseanimation_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPauseAnimation*
/// @param b bool
///
bool q_pauseanimation_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QPauseAnimation*
///
QThread* q_pauseanimation_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPauseAnimation*
/// @param thread QThread*
///
bool q_pauseanimation_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPauseAnimation*
/// @param interval int
///
int32_t q_pauseanimation_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPauseAnimation*
/// @param time int64_t of nanoseconds
///
int32_t q_pauseanimation_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPauseAnimation*
/// @param id int
///
void q_pauseanimation_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPauseAnimation*
/// @param id enum Qt__TimerId
///
void q_pauseanimation_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QPauseAnimation*
///
/// @return libqt_list of QObject*
///
libqt_list q_pauseanimation_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QPauseAnimation*
/// @param parent QObject*
///
void q_pauseanimation_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPauseAnimation*
/// @param filterObj QObject*
///
void q_pauseanimation_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPauseAnimation*
/// @param obj QObject*
///
void q_pauseanimation_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_pauseanimation_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_pauseanimation_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QPauseAnimation*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_pauseanimation_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_pauseanimation_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_pauseanimation_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPauseAnimation*
///
bool q_pauseanimation_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPauseAnimation*
/// @param receiver QObject*
///
bool q_pauseanimation_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_pauseanimation_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QPauseAnimation*
///
void q_pauseanimation_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QPauseAnimation*
///
void q_pauseanimation_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPauseAnimation*
/// @param name const char*
/// @param value QVariant*
///
bool q_pauseanimation_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QPauseAnimation*
/// @param name const char*
///
QVariant* q_pauseanimation_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QPauseAnimation*
///
const char** q_pauseanimation_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPauseAnimation*
///
QBindingStorage* q_pauseanimation_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QPauseAnimation*
///
const QBindingStorage* q_pauseanimation_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPauseAnimation*
///
void q_pauseanimation_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPauseAnimation*
/// @param callback void func(QPauseAnimation* self)
///
void q_pauseanimation_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QPauseAnimation*
///
QObject* q_pauseanimation_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QPauseAnimation*
/// @param classname const char*
///
bool q_pauseanimation_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPauseAnimation*
///
void q_pauseanimation_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPauseAnimation*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_pauseanimation_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPauseAnimation*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_pauseanimation_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_pauseanimation_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_pauseanimation_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QPauseAnimation*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_pauseanimation_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPauseAnimation*
/// @param signal const char*
///
bool q_pauseanimation_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPauseAnimation*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_pauseanimation_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPauseAnimation*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_pauseanimation_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPauseAnimation*
/// @param receiver QObject*
/// @param member const char*
///
bool q_pauseanimation_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPauseAnimation*
/// @param param1 QObject*
///
void q_pauseanimation_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPauseAnimation*
/// @param callback void func(QPauseAnimation* self, QObject* param1)
///
void q_pauseanimation_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPauseAnimation*
/// @param newState enum QAbstractAnimation__State
/// @param oldState enum QAbstractAnimation__State
///
void q_pauseanimation_update_state(void* self, int32_t newState, int32_t oldState);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPauseAnimation*
/// @param newState enum QAbstractAnimation__State
/// @param oldState enum QAbstractAnimation__State
///
void q_pauseanimation_super_update_state(void* self, int32_t newState, int32_t oldState);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPauseAnimation*
/// @param callback void func(QPauseAnimation* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState)
///
void q_pauseanimation_on_update_state(void* self, void (*callback)(void*, int32_t, int32_t));

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPauseAnimation*
/// @param direction enum QAbstractAnimation__Direction
///
void q_pauseanimation_update_direction(void* self, int32_t direction);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPauseAnimation*
/// @param direction enum QAbstractAnimation__Direction
///
void q_pauseanimation_super_update_direction(void* self, int32_t direction);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPauseAnimation*
/// @param callback void func(QPauseAnimation* self, enum QAbstractAnimation__Direction direction)
///
void q_pauseanimation_on_update_direction(void* self, void (*callback)(void*, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPauseAnimation*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_pauseanimation_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPauseAnimation*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_pauseanimation_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPauseAnimation*
/// @param callback bool func(QPauseAnimation* self, QObject* watched, QEvent* event)
///
void q_pauseanimation_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPauseAnimation*
/// @param event QTimerEvent*
///
void q_pauseanimation_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPauseAnimation*
/// @param event QTimerEvent*
///
void q_pauseanimation_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPauseAnimation*
/// @param callback void func(QPauseAnimation* self, QTimerEvent* event)
///
void q_pauseanimation_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPauseAnimation*
/// @param event QChildEvent*
///
void q_pauseanimation_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPauseAnimation*
/// @param event QChildEvent*
///
void q_pauseanimation_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPauseAnimation*
/// @param callback void func(QPauseAnimation* self, QChildEvent* event)
///
void q_pauseanimation_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPauseAnimation*
/// @param event QEvent*
///
void q_pauseanimation_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPauseAnimation*
/// @param event QEvent*
///
void q_pauseanimation_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPauseAnimation*
/// @param callback void func(QPauseAnimation* self, QEvent* event)
///
void q_pauseanimation_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPauseAnimation*
/// @param signal QMetaMethod*
///
void q_pauseanimation_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPauseAnimation*
/// @param signal QMetaMethod*
///
void q_pauseanimation_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPauseAnimation*
/// @param callback void func(QPauseAnimation* self, QMetaMethod* signal)
///
void q_pauseanimation_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPauseAnimation*
/// @param signal QMetaMethod*
///
void q_pauseanimation_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPauseAnimation*
/// @param signal QMetaMethod*
///
void q_pauseanimation_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPauseAnimation*
/// @param callback void func(QPauseAnimation* self, QMetaMethod* signal)
///
void q_pauseanimation_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPauseAnimation*
///
QObject* q_pauseanimation_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPauseAnimation*
///
QObject* q_pauseanimation_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPauseAnimation*
/// @param callback QObject* func(QPauseAnimation* self)
///
void q_pauseanimation_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPauseAnimation*
///
int32_t q_pauseanimation_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPauseAnimation*
///
int32_t q_pauseanimation_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPauseAnimation*
/// @param callback int32_t func(QPauseAnimation* self)
///
void q_pauseanimation_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPauseAnimation*
/// @param signal const char*
///
int32_t q_pauseanimation_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPauseAnimation*
/// @param signal const char*
///
int32_t q_pauseanimation_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPauseAnimation*
/// @param callback int32_t func(QPauseAnimation* self, const char* signal)
///
void q_pauseanimation_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPauseAnimation*
/// @param signal QMetaMethod*
///
bool q_pauseanimation_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPauseAnimation*
/// @param signal QMetaMethod*
///
bool q_pauseanimation_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QPauseAnimation*
/// @param callback bool func(QPauseAnimation* self, QMetaMethod* signal)
///
void q_pauseanimation_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPauseAnimation*
/// @param callback void func(QPauseAnimation* self, const char* objectName)
///
void q_pauseanimation_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpauseanimation.html#dtor.QPauseAnimation)
///
/// Delete this object from C++ memory.
///
/// @param self QPauseAnimation*
///
void q_pauseanimation_delete(void* self);

#endif
