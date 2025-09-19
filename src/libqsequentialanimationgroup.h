#pragma once
#ifndef SRCQT6C_LIBQSEQUENTIALANIMATIONGROUP_H
#define SRCQT6C_LIBQSEQUENTIALANIMATIONGROUP_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qsequentialanimationgroup.html

/// q_sequentialanimationgroup_new constructs a new QSequentialAnimationGroup object.
///
QSequentialAnimationGroup* q_sequentialanimationgroup_new();

/// q_sequentialanimationgroup_new2 constructs a new QSequentialAnimationGroup object.
///
/// @param parent QObject*
QSequentialAnimationGroup* q_sequentialanimationgroup_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QSequentialAnimationGroup*
const QMetaObject* q_sequentialanimationgroup_meta_object(void* self);

/// @param self QSequentialAnimationGroup*
/// @param param1 const char*
void* q_sequentialanimationgroup_metacast(void* self, const char* param1);

/// @param self QSequentialAnimationGroup*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_sequentialanimationgroup_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSequentialAnimationGroup*
/// @param callback int32_t func(QSequentialAnimationGroup* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_sequentialanimationgroup_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QSequentialAnimationGroup*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_sequentialanimationgroup_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_sequentialanimationgroup_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#addPause)
///
/// @param self QSequentialAnimationGroup*
/// @param msecs int
QPauseAnimation* q_sequentialanimationgroup_add_pause(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#insertPause)
///
/// @param self QSequentialAnimationGroup*
/// @param index int
/// @param msecs int
QPauseAnimation* q_sequentialanimationgroup_insert_pause(void* self, int index, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#currentAnimation)
///
/// @param self QSequentialAnimationGroup*
QAbstractAnimation* q_sequentialanimationgroup_current_animation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#duration)
///
/// @param self QSequentialAnimationGroup*
int32_t q_sequentialanimationgroup_duration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#duration)
///
/// Allows for overriding the related default method
///
/// @param self QSequentialAnimationGroup*
/// @param callback int32_t func()
void q_sequentialanimationgroup_on_duration(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#duration)
///
/// Base class method implementation
///
/// @param self QSequentialAnimationGroup*
int32_t q_sequentialanimationgroup_qbase_duration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#currentAnimationChanged)
///
/// @param self QSequentialAnimationGroup*
/// @param current QAbstractAnimation*
void q_sequentialanimationgroup_current_animation_changed(void* self, void* current);

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#currentAnimationChanged)
///
/// @param self QSequentialAnimationGroup*
/// @param callback void func(QSequentialAnimationGroup* self, QAbstractAnimation* current)
void q_sequentialanimationgroup_on_current_animation_changed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#event)
///
/// @param self QSequentialAnimationGroup*
/// @param event QEvent*
bool q_sequentialanimationgroup_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QSequentialAnimationGroup*
/// @param callback bool func(QSequentialAnimationGroup* self, QEvent* event)
void q_sequentialanimationgroup_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#event)
///
/// Base class method implementation
///
/// @param self QSequentialAnimationGroup*
/// @param event QEvent*
bool q_sequentialanimationgroup_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateCurrentTime)
///
/// @param self QSequentialAnimationGroup*
/// @param param1 int
void q_sequentialanimationgroup_update_current_time(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateCurrentTime)
///
/// Allows for overriding the related default method
///
/// @param self QSequentialAnimationGroup*
/// @param callback void func(QSequentialAnimationGroup* self, int param1)
void q_sequentialanimationgroup_on_update_current_time(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateCurrentTime)
///
/// Base class method implementation
///
/// @param self QSequentialAnimationGroup*
/// @param param1 int
void q_sequentialanimationgroup_qbase_update_current_time(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateState)
///
/// @param self QSequentialAnimationGroup*
/// @param newState enum QAbstractAnimation__State
/// @param oldState enum QAbstractAnimation__State
void q_sequentialanimationgroup_update_state(void* self, int32_t newState, int32_t oldState);

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateState)
///
/// Allows for overriding the related default method
///
/// @param self QSequentialAnimationGroup*
/// @param callback void func(QSequentialAnimationGroup* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState)
void q_sequentialanimationgroup_on_update_state(void* self, void (*callback)(void*, int32_t, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateState)
///
/// Base class method implementation
///
/// @param self QSequentialAnimationGroup*
/// @param newState enum QAbstractAnimation__State
/// @param oldState enum QAbstractAnimation__State
void q_sequentialanimationgroup_qbase_update_state(void* self, int32_t newState, int32_t oldState);

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateDirection)
///
/// @param self QSequentialAnimationGroup*
/// @param direction enum QAbstractAnimation__Direction
void q_sequentialanimationgroup_update_direction(void* self, int32_t direction);

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateDirection)
///
/// Allows for overriding the related default method
///
/// @param self QSequentialAnimationGroup*
/// @param callback void func(QSequentialAnimationGroup* self, enum QAbstractAnimation__Direction direction)
void q_sequentialanimationgroup_on_update_direction(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateDirection)
///
/// Base class method implementation
///
/// @param self QSequentialAnimationGroup*
/// @param direction enum QAbstractAnimation__Direction
void q_sequentialanimationgroup_qbase_update_direction(void* self, int32_t direction);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_sequentialanimationgroup_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_sequentialanimationgroup_tr3(const char* s, const char* c, int n);

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#animationAt)
///
/// @param self QSequentialAnimationGroup*
/// @param index int
QAbstractAnimation* q_sequentialanimationgroup_animation_at(void* self, int index);

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#animationCount)
///
/// @param self QSequentialAnimationGroup*
int32_t q_sequentialanimationgroup_animation_count(void* self);

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#indexOfAnimation)
///
/// @param self QSequentialAnimationGroup*
/// @param animation QAbstractAnimation*
int32_t q_sequentialanimationgroup_index_of_animation(void* self, void* animation);

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#addAnimation)
///
/// @param self QSequentialAnimationGroup*
/// @param animation QAbstractAnimation*
void q_sequentialanimationgroup_add_animation(void* self, void* animation);

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#insertAnimation)
///
/// @param self QSequentialAnimationGroup*
/// @param index int
/// @param animation QAbstractAnimation*
void q_sequentialanimationgroup_insert_animation(void* self, int index, void* animation);

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#removeAnimation)
///
/// @param self QSequentialAnimationGroup*
/// @param animation QAbstractAnimation*
void q_sequentialanimationgroup_remove_animation(void* self, void* animation);

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#takeAnimation)
///
/// @param self QSequentialAnimationGroup*
/// @param index int
QAbstractAnimation* q_sequentialanimationgroup_take_animation(void* self, int index);

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#clear)
///
/// @param self QSequentialAnimationGroup*
void q_sequentialanimationgroup_clear(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#state)
///
/// @param self QSequentialAnimationGroup*
///
/// @return enum QAbstractAnimation__State
int32_t q_sequentialanimationgroup_state(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#group)
///
/// @param self QSequentialAnimationGroup*
QAnimationGroup* q_sequentialanimationgroup_group(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#direction)
///
/// @param self QSequentialAnimationGroup*
///
/// @return enum QAbstractAnimation__Direction
int32_t q_sequentialanimationgroup_direction(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setDirection)
///
/// @param self QSequentialAnimationGroup*
/// @param direction enum QAbstractAnimation__Direction
void q_sequentialanimationgroup_set_direction(void* self, int32_t direction);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentTime)
///
/// @param self QSequentialAnimationGroup*
int32_t q_sequentialanimationgroup_current_time(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopTime)
///
/// @param self QSequentialAnimationGroup*
int32_t q_sequentialanimationgroup_current_loop_time(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#loopCount)
///
/// @param self QSequentialAnimationGroup*
int32_t q_sequentialanimationgroup_loop_count(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setLoopCount)
///
/// @param self QSequentialAnimationGroup*
/// @param loopCount int
void q_sequentialanimationgroup_set_loop_count(void* self, int loopCount);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoop)
///
/// @param self QSequentialAnimationGroup*
int32_t q_sequentialanimationgroup_current_loop(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#totalDuration)
///
/// @param self QSequentialAnimationGroup*
int32_t q_sequentialanimationgroup_total_duration(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
///
/// @param self QSequentialAnimationGroup*
void q_sequentialanimationgroup_finished(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
///
/// @param self QSequentialAnimationGroup*
/// @param callback void func(QSequentialAnimationGroup* self)
void q_sequentialanimationgroup_on_finished(void* self, void (*callback)(void*));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
///
/// @param self QSequentialAnimationGroup*
/// @param newState enum QAbstractAnimation__State
/// @param oldState enum QAbstractAnimation__State
void q_sequentialanimationgroup_state_changed(void* self, int32_t newState, int32_t oldState);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
///
/// @param self QSequentialAnimationGroup*
/// @param callback void func(QSequentialAnimationGroup* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState)
void q_sequentialanimationgroup_on_state_changed(void* self, void (*callback)(void*, int32_t, int32_t));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
///
/// @param self QSequentialAnimationGroup*
/// @param currentLoop int
void q_sequentialanimationgroup_current_loop_changed(void* self, int currentLoop);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
///
/// @param self QSequentialAnimationGroup*
/// @param callback void func(QSequentialAnimationGroup* self, int currentLoop)
void q_sequentialanimationgroup_on_current_loop_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
///
/// @param self QSequentialAnimationGroup*
/// @param param1 enum QAbstractAnimation__Direction
void q_sequentialanimationgroup_direction_changed(void* self, int32_t param1);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
///
/// @param self QSequentialAnimationGroup*
/// @param callback void func(QSequentialAnimationGroup* self, enum QAbstractAnimation__Direction param1)
void q_sequentialanimationgroup_on_direction_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// @param self QSequentialAnimationGroup*
void q_sequentialanimationgroup_start(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#pause)
///
/// @param self QSequentialAnimationGroup*
void q_sequentialanimationgroup_pause(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#resume)
///
/// @param self QSequentialAnimationGroup*
void q_sequentialanimationgroup_resume(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setPaused)
///
/// @param self QSequentialAnimationGroup*
/// @param paused bool
void q_sequentialanimationgroup_set_paused(void* self, bool paused);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stop)
///
/// @param self QSequentialAnimationGroup*
void q_sequentialanimationgroup_stop(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setCurrentTime)
///
/// @param self QSequentialAnimationGroup*
/// @param msecs int
void q_sequentialanimationgroup_set_current_time(void* self, int msecs);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// @param self QSequentialAnimationGroup*
/// @param policy enum QAbstractAnimation__DeletionPolicy
void q_sequentialanimationgroup_start1(void* self, int32_t policy);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSequentialAnimationGroup*
const char* q_sequentialanimationgroup_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSequentialAnimationGroup*
/// @param name char*
void q_sequentialanimationgroup_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QSequentialAnimationGroup*
bool q_sequentialanimationgroup_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QSequentialAnimationGroup*
bool q_sequentialanimationgroup_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QSequentialAnimationGroup*
bool q_sequentialanimationgroup_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QSequentialAnimationGroup*
bool q_sequentialanimationgroup_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSequentialAnimationGroup*
/// @param b bool
bool q_sequentialanimationgroup_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QSequentialAnimationGroup*
QThread* q_sequentialanimationgroup_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSequentialAnimationGroup*
/// @param thread QThread*
bool q_sequentialanimationgroup_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSequentialAnimationGroup*
/// @param interval int
int32_t q_sequentialanimationgroup_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSequentialAnimationGroup*
/// @param id int
void q_sequentialanimationgroup_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSequentialAnimationGroup*
/// @param id enum Qt__TimerId
void q_sequentialanimationgroup_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QSequentialAnimationGroup*
libqt_list /* of QObject* */ q_sequentialanimationgroup_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QSequentialAnimationGroup*
/// @param parent QObject*
void q_sequentialanimationgroup_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSequentialAnimationGroup*
/// @param filterObj QObject*
void q_sequentialanimationgroup_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSequentialAnimationGroup*
/// @param obj QObject*
void q_sequentialanimationgroup_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_sequentialanimationgroup_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSequentialAnimationGroup*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_sequentialanimationgroup_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_sequentialanimationgroup_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_sequentialanimationgroup_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QSequentialAnimationGroup*
void q_sequentialanimationgroup_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QSequentialAnimationGroup*
void q_sequentialanimationgroup_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSequentialAnimationGroup*
/// @param name const char*
/// @param value QVariant*
bool q_sequentialanimationgroup_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QSequentialAnimationGroup*
/// @param name const char*
QVariant* q_sequentialanimationgroup_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSequentialAnimationGroup*
const char** q_sequentialanimationgroup_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSequentialAnimationGroup*
QBindingStorage* q_sequentialanimationgroup_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSequentialAnimationGroup*
const QBindingStorage* q_sequentialanimationgroup_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSequentialAnimationGroup*
void q_sequentialanimationgroup_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSequentialAnimationGroup*
/// @param callback void func(QSequentialAnimationGroup* self)
void q_sequentialanimationgroup_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QSequentialAnimationGroup*
QObject* q_sequentialanimationgroup_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QSequentialAnimationGroup*
/// @param classname const char*
bool q_sequentialanimationgroup_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSequentialAnimationGroup*
void q_sequentialanimationgroup_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSequentialAnimationGroup*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_sequentialanimationgroup_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSequentialAnimationGroup*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_sequentialanimationgroup_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_sequentialanimationgroup_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSequentialAnimationGroup*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_sequentialanimationgroup_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSequentialAnimationGroup*
/// @param param1 QObject*
void q_sequentialanimationgroup_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSequentialAnimationGroup*
/// @param callback void func(QSequentialAnimationGroup* self, QObject* param1)
void q_sequentialanimationgroup_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSequentialAnimationGroup*
/// @param watched QObject*
/// @param event QEvent*
bool q_sequentialanimationgroup_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSequentialAnimationGroup*
/// @param watched QObject*
/// @param event QEvent*
bool q_sequentialanimationgroup_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSequentialAnimationGroup*
/// @param callback bool func(QSequentialAnimationGroup* self, QObject* watched, QEvent* event)
void q_sequentialanimationgroup_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSequentialAnimationGroup*
/// @param event QTimerEvent*
void q_sequentialanimationgroup_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSequentialAnimationGroup*
/// @param event QTimerEvent*
void q_sequentialanimationgroup_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSequentialAnimationGroup*
/// @param callback void func(QSequentialAnimationGroup* self, QTimerEvent* event)
void q_sequentialanimationgroup_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSequentialAnimationGroup*
/// @param event QChildEvent*
void q_sequentialanimationgroup_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSequentialAnimationGroup*
/// @param event QChildEvent*
void q_sequentialanimationgroup_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSequentialAnimationGroup*
/// @param callback void func(QSequentialAnimationGroup* self, QChildEvent* event)
void q_sequentialanimationgroup_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSequentialAnimationGroup*
/// @param event QEvent*
void q_sequentialanimationgroup_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSequentialAnimationGroup*
/// @param event QEvent*
void q_sequentialanimationgroup_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSequentialAnimationGroup*
/// @param callback void func(QSequentialAnimationGroup* self, QEvent* event)
void q_sequentialanimationgroup_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSequentialAnimationGroup*
/// @param signal QMetaMethod*
void q_sequentialanimationgroup_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSequentialAnimationGroup*
/// @param signal QMetaMethod*
void q_sequentialanimationgroup_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSequentialAnimationGroup*
/// @param callback void func(QSequentialAnimationGroup* self, QMetaMethod* signal)
void q_sequentialanimationgroup_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSequentialAnimationGroup*
/// @param signal QMetaMethod*
void q_sequentialanimationgroup_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSequentialAnimationGroup*
/// @param signal QMetaMethod*
void q_sequentialanimationgroup_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSequentialAnimationGroup*
/// @param callback void func(QSequentialAnimationGroup* self, QMetaMethod* signal)
void q_sequentialanimationgroup_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSequentialAnimationGroup*
QObject* q_sequentialanimationgroup_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSequentialAnimationGroup*
QObject* q_sequentialanimationgroup_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSequentialAnimationGroup*
/// @param callback QObject* func()
void q_sequentialanimationgroup_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSequentialAnimationGroup*
int32_t q_sequentialanimationgroup_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSequentialAnimationGroup*
int32_t q_sequentialanimationgroup_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSequentialAnimationGroup*
/// @param callback int32_t func()
void q_sequentialanimationgroup_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSequentialAnimationGroup*
/// @param signal const char*
int32_t q_sequentialanimationgroup_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSequentialAnimationGroup*
/// @param signal const char*
int32_t q_sequentialanimationgroup_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSequentialAnimationGroup*
/// @param callback int32_t func(QSequentialAnimationGroup* self, const char* signal)
void q_sequentialanimationgroup_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSequentialAnimationGroup*
/// @param signal QMetaMethod*
bool q_sequentialanimationgroup_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSequentialAnimationGroup*
/// @param signal QMetaMethod*
bool q_sequentialanimationgroup_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSequentialAnimationGroup*
/// @param callback bool func(QSequentialAnimationGroup* self, QMetaMethod* signal)
void q_sequentialanimationgroup_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSequentialAnimationGroup*
/// @param callback void func(QSequentialAnimationGroup* self, const char* objectName)
void q_sequentialanimationgroup_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#dtor.QSequentialAnimationGroup)
///
/// Delete this object from C++ memory.
///
/// @param self QSequentialAnimationGroup*
void q_sequentialanimationgroup_delete(void* self);

#endif
