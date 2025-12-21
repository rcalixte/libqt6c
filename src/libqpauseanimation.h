#pragma once
#ifndef SRC_QT6C_LIBQPAUSEANIMATION_H
#define SRC_QT6C_LIBQPAUSEANIMATION_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
/// @param self QPauseAnimation*
///
const QMetaObject* q_pauseanimation_meta_object(void* self);

/// @param self QPauseAnimation*
/// @param param1 const char*
///
void* q_pauseanimation_metacast(void* self, const char* param1);

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
int32_t q_pauseanimation_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* q_pauseanimation_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qpauseanimation.html#duration)
///
/// @param self QPauseAnimation*
///
int32_t q_pauseanimation_duration(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpauseanimation.html#duration)
///
/// Allows for overriding the related default method
///
/// @param self QPauseAnimation*
/// @param callback int32_t func()
///
void q_pauseanimation_on_duration(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qpauseanimation.html#duration)
///
/// Base class method implementation
///
/// @param self QPauseAnimation*
///
int32_t q_pauseanimation_qbase_duration(void* self);

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
bool q_pauseanimation_qbase_event(void* self, void* e);

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
void q_pauseanimation_qbase_update_current_time(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* q_pauseanimation_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
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
/// @param self QPauseAnimation*
///
/// @return enum QAbstractAnimation__State
///
int32_t q_pauseanimation_state(void* self);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#group)
///
/// @param self QPauseAnimation*
///
QAnimationGroup* q_pauseanimation_group(void* self);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#direction)
///
/// @param self QPauseAnimation*
///
/// @return enum QAbstractAnimation__Direction
///
int32_t q_pauseanimation_direction(void* self);

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
/// @param self QPauseAnimation*
///
int32_t q_pauseanimation_current_time(void* self);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopTime)
///
/// @param self QPauseAnimation*
///
int32_t q_pauseanimation_current_loop_time(void* self);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#loopCount)
///
/// @param self QPauseAnimation*
///
int32_t q_pauseanimation_loop_count(void* self);

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
/// @param self QPauseAnimation*
///
int32_t q_pauseanimation_current_loop(void* self);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#totalDuration)
///
/// @param self QPauseAnimation*
///
int32_t q_pauseanimation_total_duration(void* self);

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
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QPauseAnimation*
///
const char* q_pauseanimation_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPauseAnimation*
/// @param name char*
///
void q_pauseanimation_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QPauseAnimation*
///
bool q_pauseanimation_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QPauseAnimation*
///
bool q_pauseanimation_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QPauseAnimation*
///
bool q_pauseanimation_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QPauseAnimation*
///
bool q_pauseanimation_signals_blocked(void* self);

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
/// @param self QPauseAnimation*
///
QThread* q_pauseanimation_thread(void* self);

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
/// @param self QPauseAnimation*
///
libqt_list /* of QObject* */ q_pauseanimation_children(void* self);

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
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_pauseanimation_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPauseAnimation*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_pauseanimation_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_pauseanimation_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_pauseanimation_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QPauseAnimation*
///
void q_pauseanimation_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QPauseAnimation*
///
void q_pauseanimation_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPauseAnimation*
/// @param name const char*
/// @param value QVariant*
///
bool q_pauseanimation_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QPauseAnimation*
/// @param name const char*
///
QVariant* q_pauseanimation_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self QPauseAnimation*
///
const char** q_pauseanimation_dynamic_property_names(void* self);

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
/// @param self QPauseAnimation*
///
const QBindingStorage* q_pauseanimation_binding_storage2(void* self);

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
/// @param self QPauseAnimation*
///
QObject* q_pauseanimation_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QPauseAnimation*
/// @param classname const char*
///
bool q_pauseanimation_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPauseAnimation*
///
void q_pauseanimation_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPauseAnimation*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_pauseanimation_move_to_thread2(void* self, void* thread, void* param2);

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
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_pauseanimation_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPauseAnimation*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_pauseanimation_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

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
void q_pauseanimation_qbase_update_state(void* self, int32_t newState, int32_t oldState);

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
void q_pauseanimation_qbase_update_direction(void* self, int32_t direction);

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
bool q_pauseanimation_qbase_event_filter(void* self, void* watched, void* event);

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
void q_pauseanimation_qbase_timer_event(void* self, void* event);

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
void q_pauseanimation_qbase_child_event(void* self, void* event);

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
void q_pauseanimation_qbase_custom_event(void* self, void* event);

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
void q_pauseanimation_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPauseAnimation*
/// @param signal QMetaMethod*
///
void q_pauseanimation_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPauseAnimation*
/// @param callback void func(QPauseAnimation* self, QMetaMethod* signal)
///
void q_pauseanimation_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPauseAnimation*
/// @param signal QMetaMethod*
///
void q_pauseanimation_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPauseAnimation*
/// @param signal QMetaMethod*
///
void q_pauseanimation_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPauseAnimation*
/// @param callback void func(QPauseAnimation* self, QMetaMethod* signal)
///
void q_pauseanimation_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPauseAnimation*
///
QObject* q_pauseanimation_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPauseAnimation*
///
QObject* q_pauseanimation_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPauseAnimation*
/// @param callback QObject* func()
///
void q_pauseanimation_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPauseAnimation*
///
int32_t q_pauseanimation_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPauseAnimation*
///
int32_t q_pauseanimation_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPauseAnimation*
/// @param callback int32_t func()
///
void q_pauseanimation_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPauseAnimation*
/// @param signal const char*
///
int32_t q_pauseanimation_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPauseAnimation*
/// @param signal const char*
///
int32_t q_pauseanimation_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPauseAnimation*
/// @param callback int32_t func(QPauseAnimation* self, const char* signal)
///
void q_pauseanimation_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPauseAnimation*
/// @param signal QMetaMethod*
///
bool q_pauseanimation_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPauseAnimation*
/// @param signal QMetaMethod*
///
bool q_pauseanimation_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPauseAnimation*
/// @param callback bool func(QPauseAnimation* self, QMetaMethod* signal)
///
void q_pauseanimation_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

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
