#pragma once
#ifndef SRCQT6C_LIBQPARALLELANIMATIONGROUP_H
#define SRCQT6C_LIBQPARALLELANIMATIONGROUP_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qparallelanimationgroup.html

/// q_parallelanimationgroup_new constructs a new QParallelAnimationGroup object.
///
QParallelAnimationGroup* q_parallelanimationgroup_new();

/// q_parallelanimationgroup_new2 constructs a new QParallelAnimationGroup object.
///
/// @param parent QObject*
QParallelAnimationGroup* q_parallelanimationgroup_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QParallelAnimationGroup*
const QMetaObject* q_parallelanimationgroup_meta_object(void* self);

/// @param self QParallelAnimationGroup*
/// @param param1 const char*
void* q_parallelanimationgroup_metacast(void* self, const char* param1);

/// @param self QParallelAnimationGroup*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_parallelanimationgroup_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QParallelAnimationGroup*
/// @param callback int32_t func(QParallelAnimationGroup* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_parallelanimationgroup_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QParallelAnimationGroup*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_parallelanimationgroup_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_parallelanimationgroup_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#duration)
///
/// @param self QParallelAnimationGroup*
int32_t q_parallelanimationgroup_duration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#duration)
///
/// Allows for overriding the related default method
///
/// @param self QParallelAnimationGroup*
/// @param callback int32_t func()
void q_parallelanimationgroup_on_duration(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#duration)
///
/// Base class method implementation
///
/// @param self QParallelAnimationGroup*
int32_t q_parallelanimationgroup_qbase_duration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#event)
///
/// @param self QParallelAnimationGroup*
/// @param event QEvent*
bool q_parallelanimationgroup_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QParallelAnimationGroup*
/// @param callback bool func(QParallelAnimationGroup* self, QEvent* event)
void q_parallelanimationgroup_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#event)
///
/// Base class method implementation
///
/// @param self QParallelAnimationGroup*
/// @param event QEvent*
bool q_parallelanimationgroup_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#updateCurrentTime)
///
/// @param self QParallelAnimationGroup*
/// @param currentTime int
void q_parallelanimationgroup_update_current_time(void* self, int currentTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#updateCurrentTime)
///
/// Allows for overriding the related default method
///
/// @param self QParallelAnimationGroup*
/// @param callback void func(QParallelAnimationGroup* self, int currentTime)
void q_parallelanimationgroup_on_update_current_time(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#updateCurrentTime)
///
/// Base class method implementation
///
/// @param self QParallelAnimationGroup*
/// @param currentTime int
void q_parallelanimationgroup_qbase_update_current_time(void* self, int currentTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#updateState)
///
/// @param self QParallelAnimationGroup*
/// @param newState enum QAbstractAnimation__State
/// @param oldState enum QAbstractAnimation__State
void q_parallelanimationgroup_update_state(void* self, int32_t newState, int32_t oldState);

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#updateState)
///
/// Allows for overriding the related default method
///
/// @param self QParallelAnimationGroup*
/// @param callback void func(QParallelAnimationGroup* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState)
void q_parallelanimationgroup_on_update_state(void* self, void (*callback)(void*, int32_t, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#updateState)
///
/// Base class method implementation
///
/// @param self QParallelAnimationGroup*
/// @param newState enum QAbstractAnimation__State
/// @param oldState enum QAbstractAnimation__State
void q_parallelanimationgroup_qbase_update_state(void* self, int32_t newState, int32_t oldState);

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#updateDirection)
///
/// @param self QParallelAnimationGroup*
/// @param direction enum QAbstractAnimation__Direction
void q_parallelanimationgroup_update_direction(void* self, int32_t direction);

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#updateDirection)
///
/// Allows for overriding the related default method
///
/// @param self QParallelAnimationGroup*
/// @param callback void func(QParallelAnimationGroup* self, enum QAbstractAnimation__Direction direction)
void q_parallelanimationgroup_on_update_direction(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#updateDirection)
///
/// Base class method implementation
///
/// @param self QParallelAnimationGroup*
/// @param direction enum QAbstractAnimation__Direction
void q_parallelanimationgroup_qbase_update_direction(void* self, int32_t direction);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_parallelanimationgroup_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_parallelanimationgroup_tr3(const char* s, const char* c, int n);

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#animationAt)
///
/// @param self QParallelAnimationGroup*
/// @param index int
QAbstractAnimation* q_parallelanimationgroup_animation_at(void* self, int index);

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#animationCount)
///
/// @param self QParallelAnimationGroup*
int32_t q_parallelanimationgroup_animation_count(void* self);

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#indexOfAnimation)
///
/// @param self QParallelAnimationGroup*
/// @param animation QAbstractAnimation*
int32_t q_parallelanimationgroup_index_of_animation(void* self, void* animation);

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#addAnimation)
///
/// @param self QParallelAnimationGroup*
/// @param animation QAbstractAnimation*
void q_parallelanimationgroup_add_animation(void* self, void* animation);

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#insertAnimation)
///
/// @param self QParallelAnimationGroup*
/// @param index int
/// @param animation QAbstractAnimation*
void q_parallelanimationgroup_insert_animation(void* self, int index, void* animation);

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#removeAnimation)
///
/// @param self QParallelAnimationGroup*
/// @param animation QAbstractAnimation*
void q_parallelanimationgroup_remove_animation(void* self, void* animation);

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#takeAnimation)
///
/// @param self QParallelAnimationGroup*
/// @param index int
QAbstractAnimation* q_parallelanimationgroup_take_animation(void* self, int index);

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#clear)
///
/// @param self QParallelAnimationGroup*
void q_parallelanimationgroup_clear(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#state)
///
/// @param self QParallelAnimationGroup*
///
/// @return enum QAbstractAnimation__State
int32_t q_parallelanimationgroup_state(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#group)
///
/// @param self QParallelAnimationGroup*
QAnimationGroup* q_parallelanimationgroup_group(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#direction)
///
/// @param self QParallelAnimationGroup*
///
/// @return enum QAbstractAnimation__Direction
int32_t q_parallelanimationgroup_direction(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setDirection)
///
/// @param self QParallelAnimationGroup*
/// @param direction enum QAbstractAnimation__Direction
void q_parallelanimationgroup_set_direction(void* self, int32_t direction);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentTime)
///
/// @param self QParallelAnimationGroup*
int32_t q_parallelanimationgroup_current_time(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopTime)
///
/// @param self QParallelAnimationGroup*
int32_t q_parallelanimationgroup_current_loop_time(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#loopCount)
///
/// @param self QParallelAnimationGroup*
int32_t q_parallelanimationgroup_loop_count(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setLoopCount)
///
/// @param self QParallelAnimationGroup*
/// @param loopCount int
void q_parallelanimationgroup_set_loop_count(void* self, int loopCount);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoop)
///
/// @param self QParallelAnimationGroup*
int32_t q_parallelanimationgroup_current_loop(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#totalDuration)
///
/// @param self QParallelAnimationGroup*
int32_t q_parallelanimationgroup_total_duration(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
///
/// @param self QParallelAnimationGroup*
void q_parallelanimationgroup_finished(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
///
/// @param self QParallelAnimationGroup*
/// @param callback void func(QParallelAnimationGroup* self)
void q_parallelanimationgroup_on_finished(void* self, void (*callback)(void*));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
///
/// @param self QParallelAnimationGroup*
/// @param newState enum QAbstractAnimation__State
/// @param oldState enum QAbstractAnimation__State
void q_parallelanimationgroup_state_changed(void* self, int32_t newState, int32_t oldState);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
///
/// @param self QParallelAnimationGroup*
/// @param callback void func(QParallelAnimationGroup* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState)
void q_parallelanimationgroup_on_state_changed(void* self, void (*callback)(void*, int32_t, int32_t));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
///
/// @param self QParallelAnimationGroup*
/// @param currentLoop int
void q_parallelanimationgroup_current_loop_changed(void* self, int currentLoop);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
///
/// @param self QParallelAnimationGroup*
/// @param callback void func(QParallelAnimationGroup* self, int currentLoop)
void q_parallelanimationgroup_on_current_loop_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
///
/// @param self QParallelAnimationGroup*
/// @param param1 enum QAbstractAnimation__Direction
void q_parallelanimationgroup_direction_changed(void* self, int32_t param1);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
///
/// @param self QParallelAnimationGroup*
/// @param callback void func(QParallelAnimationGroup* self, enum QAbstractAnimation__Direction param1)
void q_parallelanimationgroup_on_direction_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// @param self QParallelAnimationGroup*
void q_parallelanimationgroup_start(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#pause)
///
/// @param self QParallelAnimationGroup*
void q_parallelanimationgroup_pause(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#resume)
///
/// @param self QParallelAnimationGroup*
void q_parallelanimationgroup_resume(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setPaused)
///
/// @param self QParallelAnimationGroup*
/// @param paused bool
void q_parallelanimationgroup_set_paused(void* self, bool paused);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stop)
///
/// @param self QParallelAnimationGroup*
void q_parallelanimationgroup_stop(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setCurrentTime)
///
/// @param self QParallelAnimationGroup*
/// @param msecs int
void q_parallelanimationgroup_set_current_time(void* self, int msecs);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// @param self QParallelAnimationGroup*
/// @param policy enum QAbstractAnimation__DeletionPolicy
void q_parallelanimationgroup_start1(void* self, int32_t policy);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QParallelAnimationGroup*
const char* q_parallelanimationgroup_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QParallelAnimationGroup*
/// @param name char*
void q_parallelanimationgroup_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QParallelAnimationGroup*
bool q_parallelanimationgroup_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QParallelAnimationGroup*
bool q_parallelanimationgroup_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QParallelAnimationGroup*
bool q_parallelanimationgroup_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QParallelAnimationGroup*
bool q_parallelanimationgroup_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QParallelAnimationGroup*
/// @param b bool
bool q_parallelanimationgroup_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QParallelAnimationGroup*
QThread* q_parallelanimationgroup_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QParallelAnimationGroup*
/// @param thread QThread*
bool q_parallelanimationgroup_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QParallelAnimationGroup*
/// @param interval int
int32_t q_parallelanimationgroup_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QParallelAnimationGroup*
/// @param id int
void q_parallelanimationgroup_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QParallelAnimationGroup*
/// @param id enum Qt__TimerId
void q_parallelanimationgroup_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QParallelAnimationGroup*
libqt_list /* of QObject* */ q_parallelanimationgroup_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QParallelAnimationGroup*
/// @param parent QObject*
void q_parallelanimationgroup_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QParallelAnimationGroup*
/// @param filterObj QObject*
void q_parallelanimationgroup_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QParallelAnimationGroup*
/// @param obj QObject*
void q_parallelanimationgroup_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_parallelanimationgroup_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QParallelAnimationGroup*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_parallelanimationgroup_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_parallelanimationgroup_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_parallelanimationgroup_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QParallelAnimationGroup*
void q_parallelanimationgroup_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QParallelAnimationGroup*
void q_parallelanimationgroup_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QParallelAnimationGroup*
/// @param name const char*
/// @param value QVariant*
bool q_parallelanimationgroup_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QParallelAnimationGroup*
/// @param name const char*
QVariant* q_parallelanimationgroup_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QParallelAnimationGroup*
const char** q_parallelanimationgroup_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QParallelAnimationGroup*
QBindingStorage* q_parallelanimationgroup_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QParallelAnimationGroup*
const QBindingStorage* q_parallelanimationgroup_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QParallelAnimationGroup*
void q_parallelanimationgroup_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QParallelAnimationGroup*
/// @param callback void func(QParallelAnimationGroup* self)
void q_parallelanimationgroup_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QParallelAnimationGroup*
QObject* q_parallelanimationgroup_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QParallelAnimationGroup*
/// @param classname const char*
bool q_parallelanimationgroup_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QParallelAnimationGroup*
void q_parallelanimationgroup_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QParallelAnimationGroup*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_parallelanimationgroup_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QParallelAnimationGroup*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_parallelanimationgroup_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_parallelanimationgroup_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QParallelAnimationGroup*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_parallelanimationgroup_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QParallelAnimationGroup*
/// @param param1 QObject*
void q_parallelanimationgroup_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QParallelAnimationGroup*
/// @param callback void func(QParallelAnimationGroup* self, QObject* param1)
void q_parallelanimationgroup_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QParallelAnimationGroup*
/// @param watched QObject*
/// @param event QEvent*
bool q_parallelanimationgroup_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QParallelAnimationGroup*
/// @param watched QObject*
/// @param event QEvent*
bool q_parallelanimationgroup_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QParallelAnimationGroup*
/// @param callback bool func(QParallelAnimationGroup* self, QObject* watched, QEvent* event)
void q_parallelanimationgroup_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QParallelAnimationGroup*
/// @param event QTimerEvent*
void q_parallelanimationgroup_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QParallelAnimationGroup*
/// @param event QTimerEvent*
void q_parallelanimationgroup_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QParallelAnimationGroup*
/// @param callback void func(QParallelAnimationGroup* self, QTimerEvent* event)
void q_parallelanimationgroup_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QParallelAnimationGroup*
/// @param event QChildEvent*
void q_parallelanimationgroup_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QParallelAnimationGroup*
/// @param event QChildEvent*
void q_parallelanimationgroup_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QParallelAnimationGroup*
/// @param callback void func(QParallelAnimationGroup* self, QChildEvent* event)
void q_parallelanimationgroup_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QParallelAnimationGroup*
/// @param event QEvent*
void q_parallelanimationgroup_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QParallelAnimationGroup*
/// @param event QEvent*
void q_parallelanimationgroup_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QParallelAnimationGroup*
/// @param callback void func(QParallelAnimationGroup* self, QEvent* event)
void q_parallelanimationgroup_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QParallelAnimationGroup*
/// @param signal QMetaMethod*
void q_parallelanimationgroup_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QParallelAnimationGroup*
/// @param signal QMetaMethod*
void q_parallelanimationgroup_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QParallelAnimationGroup*
/// @param callback void func(QParallelAnimationGroup* self, QMetaMethod* signal)
void q_parallelanimationgroup_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QParallelAnimationGroup*
/// @param signal QMetaMethod*
void q_parallelanimationgroup_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QParallelAnimationGroup*
/// @param signal QMetaMethod*
void q_parallelanimationgroup_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QParallelAnimationGroup*
/// @param callback void func(QParallelAnimationGroup* self, QMetaMethod* signal)
void q_parallelanimationgroup_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QParallelAnimationGroup*
QObject* q_parallelanimationgroup_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QParallelAnimationGroup*
QObject* q_parallelanimationgroup_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QParallelAnimationGroup*
/// @param callback QObject* func()
void q_parallelanimationgroup_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QParallelAnimationGroup*
int32_t q_parallelanimationgroup_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QParallelAnimationGroup*
int32_t q_parallelanimationgroup_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QParallelAnimationGroup*
/// @param callback int32_t func()
void q_parallelanimationgroup_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QParallelAnimationGroup*
/// @param signal const char*
int32_t q_parallelanimationgroup_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QParallelAnimationGroup*
/// @param signal const char*
int32_t q_parallelanimationgroup_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QParallelAnimationGroup*
/// @param callback int32_t func(QParallelAnimationGroup* self, const char* signal)
void q_parallelanimationgroup_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QParallelAnimationGroup*
/// @param signal QMetaMethod*
bool q_parallelanimationgroup_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QParallelAnimationGroup*
/// @param signal QMetaMethod*
bool q_parallelanimationgroup_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QParallelAnimationGroup*
/// @param callback bool func(QParallelAnimationGroup* self, QMetaMethod* signal)
void q_parallelanimationgroup_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QParallelAnimationGroup*
/// @param callback void func(QParallelAnimationGroup* self, const char* objectName)
void q_parallelanimationgroup_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#dtor.QParallelAnimationGroup)
///
/// Delete this object from C++ memory.
///
/// @param self QParallelAnimationGroup*
void q_parallelanimationgroup_delete(void* self);

#endif
