#pragma once
#ifndef SRCQT6C_LIBQANIMATIONGROUP_H
#define SRCQT6C_LIBQANIMATIONGROUP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractanimation.h"
#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qanimationgroup.html

/// q_animationgroup_new constructs a new QAnimationGroup object.
///
///
QAnimationGroup* q_animationgroup_new();

/// q_animationgroup_new2 constructs a new QAnimationGroup object.
///
/// ``` QObject* parent ```
QAnimationGroup* q_animationgroup_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAnimationGroup* self ```
const QMetaObject* q_animationgroup_meta_object(void* self);

/// ``` QAnimationGroup* self, const char* param1 ```
void* q_animationgroup_metacast(void* self, const char* param1);

/// ``` QAnimationGroup* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_animationgroup_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QAnimationGroup* self, int32_t (*slot)(QAnimationGroup*, enum QMetaObject__Call, int, void*) ```
void q_animationgroup_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QAnimationGroup* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_animationgroup_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_animationgroup_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#animationAt)
///
/// ``` QAnimationGroup* self, int index ```
QAbstractAnimation* q_animationgroup_animation_at(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#animationCount)
///
/// ``` QAnimationGroup* self ```
int32_t q_animationgroup_animation_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#indexOfAnimation)
///
/// ``` QAnimationGroup* self, QAbstractAnimation* animation ```
int32_t q_animationgroup_index_of_animation(void* self, void* animation);

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#addAnimation)
///
/// ``` QAnimationGroup* self, QAbstractAnimation* animation ```
void q_animationgroup_add_animation(void* self, void* animation);

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#insertAnimation)
///
/// ``` QAnimationGroup* self, int index, QAbstractAnimation* animation ```
void q_animationgroup_insert_animation(void* self, int index, void* animation);

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#removeAnimation)
///
/// ``` QAnimationGroup* self, QAbstractAnimation* animation ```
void q_animationgroup_remove_animation(void* self, void* animation);

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#takeAnimation)
///
/// ``` QAnimationGroup* self, int index ```
QAbstractAnimation* q_animationgroup_take_animation(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#clear)
///
/// ``` QAnimationGroup* self ```
void q_animationgroup_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#event)
///
/// ``` QAnimationGroup* self, QEvent* event ```
bool q_animationgroup_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QAnimationGroup* self, bool (*slot)(QAnimationGroup*, QEvent*) ```
void q_animationgroup_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#event)
///
/// Base class method implementation
///
/// ``` QAnimationGroup* self, QEvent* event ```
bool q_animationgroup_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_animationgroup_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_animationgroup_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#state)
///
/// ``` QAnimationGroup* self ```
int64_t q_animationgroup_state(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#group)
///
/// ``` QAnimationGroup* self ```
QAnimationGroup* q_animationgroup_group(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#direction)
///
/// ``` QAnimationGroup* self ```
int64_t q_animationgroup_direction(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setDirection)
///
/// ``` QAnimationGroup* self, enum QAbstractAnimation__Direction direction ```
void q_animationgroup_set_direction(void* self, int64_t direction);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentTime)
///
/// ``` QAnimationGroup* self ```
int32_t q_animationgroup_current_time(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopTime)
///
/// ``` QAnimationGroup* self ```
int32_t q_animationgroup_current_loop_time(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#loopCount)
///
/// ``` QAnimationGroup* self ```
int32_t q_animationgroup_loop_count(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setLoopCount)
///
/// ``` QAnimationGroup* self, int loopCount ```
void q_animationgroup_set_loop_count(void* self, int loopCount);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoop)
///
/// ``` QAnimationGroup* self ```
int32_t q_animationgroup_current_loop(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#totalDuration)
///
/// ``` QAnimationGroup* self ```
int32_t q_animationgroup_total_duration(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
///
/// ``` QAnimationGroup* self ```
void q_animationgroup_finished(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
///
/// ``` QAnimationGroup* self, void (*slot)(QAbstractAnimation*) ```
void q_animationgroup_on_finished(void* self, void (*slot)(void*));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
///
/// ``` QAnimationGroup* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_animationgroup_state_changed(void* self, int64_t newState, int64_t oldState);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
///
/// ``` QAnimationGroup* self, void (*slot)(QAbstractAnimation*, enum QAbstractAnimation__State, enum QAbstractAnimation__State) ```
void q_animationgroup_on_state_changed(void* self, void (*slot)(void*, int64_t, int64_t));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
///
/// ``` QAnimationGroup* self, int currentLoop ```
void q_animationgroup_current_loop_changed(void* self, int currentLoop);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
///
/// ``` QAnimationGroup* self, void (*slot)(QAbstractAnimation*, int) ```
void q_animationgroup_on_current_loop_changed(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
///
/// ``` QAnimationGroup* self, enum QAbstractAnimation__Direction param1 ```
void q_animationgroup_direction_changed(void* self, int64_t param1);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
///
/// ``` QAnimationGroup* self, void (*slot)(QAbstractAnimation*, enum QAbstractAnimation__Direction) ```
void q_animationgroup_on_direction_changed(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// ``` QAnimationGroup* self ```
void q_animationgroup_start(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#pause)
///
/// ``` QAnimationGroup* self ```
void q_animationgroup_pause(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#resume)
///
/// ``` QAnimationGroup* self ```
void q_animationgroup_resume(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setPaused)
///
/// ``` QAnimationGroup* self, bool paused ```
void q_animationgroup_set_paused(void* self, bool paused);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stop)
///
/// ``` QAnimationGroup* self ```
void q_animationgroup_stop(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setCurrentTime)
///
/// ``` QAnimationGroup* self, int msecs ```
void q_animationgroup_set_current_time(void* self, int msecs);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// ``` QAnimationGroup* self, enum QAbstractAnimation__DeletionPolicy policy ```
void q_animationgroup_start1(void* self, int64_t policy);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAnimationGroup* self ```
const char* q_animationgroup_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAnimationGroup* self, char* name ```
void q_animationgroup_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAnimationGroup* self ```
bool q_animationgroup_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAnimationGroup* self ```
bool q_animationgroup_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAnimationGroup* self ```
bool q_animationgroup_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAnimationGroup* self ```
bool q_animationgroup_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAnimationGroup* self, bool b ```
bool q_animationgroup_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAnimationGroup* self ```
QThread* q_animationgroup_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAnimationGroup* self, QThread* thread ```
void q_animationgroup_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAnimationGroup* self, int interval ```
int32_t q_animationgroup_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAnimationGroup* self, int id ```
void q_animationgroup_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAnimationGroup* self ```
const libqt_list /* of QObject* */ q_animationgroup_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAnimationGroup* self, QObject* parent ```
void q_animationgroup_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAnimationGroup* self, QObject* filterObj ```
void q_animationgroup_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAnimationGroup* self, QObject* obj ```
void q_animationgroup_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_animationgroup_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAnimationGroup* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_animationgroup_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_animationgroup_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_animationgroup_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAnimationGroup* self ```
void q_animationgroup_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAnimationGroup* self ```
void q_animationgroup_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAnimationGroup* self, const char* name, QVariant* value ```
bool q_animationgroup_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAnimationGroup* self, const char* name ```
QVariant* q_animationgroup_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAnimationGroup* self ```
const char** q_animationgroup_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAnimationGroup* self ```
QBindingStorage* q_animationgroup_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAnimationGroup* self ```
const QBindingStorage* q_animationgroup_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAnimationGroup* self ```
void q_animationgroup_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAnimationGroup* self, void (*slot)(QObject*) ```
void q_animationgroup_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAnimationGroup* self ```
QObject* q_animationgroup_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAnimationGroup* self, const char* classname ```
bool q_animationgroup_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAnimationGroup* self ```
void q_animationgroup_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAnimationGroup* self, int interval, enum Qt__TimerType timerType ```
int32_t q_animationgroup_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_animationgroup_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAnimationGroup* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_animationgroup_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAnimationGroup* self, QObject* param1 ```
void q_animationgroup_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAnimationGroup* self, void (*slot)(QObject*, QObject*) ```
void q_animationgroup_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#duration)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationGroup* self ```
int32_t q_animationgroup_duration(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#duration)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationGroup* self ```
int32_t q_animationgroup_qbase_duration(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#duration)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationGroup* self, int32_t (*slot)() ```
void q_animationgroup_on_duration(void* self, int32_t (*slot)());

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateCurrentTime)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationGroup* self, int currentTime ```
void q_animationgroup_update_current_time(void* self, int currentTime);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateCurrentTime)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationGroup* self, int currentTime ```
void q_animationgroup_qbase_update_current_time(void* self, int currentTime);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateCurrentTime)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationGroup* self, void (*slot)(QAnimationGroup*, int) ```
void q_animationgroup_on_update_current_time(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateState)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationGroup* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_animationgroup_update_state(void* self, int64_t newState, int64_t oldState);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationGroup* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_animationgroup_qbase_update_state(void* self, int64_t newState, int64_t oldState);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationGroup* self, void (*slot)(QAnimationGroup*, enum QAbstractAnimation__State, enum QAbstractAnimation__State) ```
void q_animationgroup_on_update_state(void* self, void (*slot)(void*, int64_t, int64_t));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationGroup* self, enum QAbstractAnimation__Direction direction ```
void q_animationgroup_update_direction(void* self, int64_t direction);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationGroup* self, enum QAbstractAnimation__Direction direction ```
void q_animationgroup_qbase_update_direction(void* self, int64_t direction);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationGroup* self, void (*slot)(QAnimationGroup*, enum QAbstractAnimation__Direction) ```
void q_animationgroup_on_update_direction(void* self, void (*slot)(void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationGroup* self, QObject* watched, QEvent* event ```
bool q_animationgroup_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationGroup* self, QObject* watched, QEvent* event ```
bool q_animationgroup_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationGroup* self, bool (*slot)(QAnimationGroup*, QObject*, QEvent*) ```
void q_animationgroup_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationGroup* self, QTimerEvent* event ```
void q_animationgroup_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationGroup* self, QTimerEvent* event ```
void q_animationgroup_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationGroup* self, void (*slot)(QAnimationGroup*, QTimerEvent*) ```
void q_animationgroup_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationGroup* self, QChildEvent* event ```
void q_animationgroup_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationGroup* self, QChildEvent* event ```
void q_animationgroup_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationGroup* self, void (*slot)(QAnimationGroup*, QChildEvent*) ```
void q_animationgroup_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationGroup* self, QEvent* event ```
void q_animationgroup_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationGroup* self, QEvent* event ```
void q_animationgroup_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationGroup* self, void (*slot)(QAnimationGroup*, QEvent*) ```
void q_animationgroup_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationGroup* self, QMetaMethod* signal ```
void q_animationgroup_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationGroup* self, QMetaMethod* signal ```
void q_animationgroup_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationGroup* self, void (*slot)(QAnimationGroup*, QMetaMethod*) ```
void q_animationgroup_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationGroup* self, QMetaMethod* signal ```
void q_animationgroup_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationGroup* self, QMetaMethod* signal ```
void q_animationgroup_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationGroup* self, void (*slot)(QAnimationGroup*, QMetaMethod*) ```
void q_animationgroup_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationGroup* self ```
QObject* q_animationgroup_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationGroup* self ```
QObject* q_animationgroup_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationGroup* self, QObject* (*slot)() ```
void q_animationgroup_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationGroup* self ```
int32_t q_animationgroup_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationGroup* self ```
int32_t q_animationgroup_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationGroup* self, int32_t (*slot)() ```
void q_animationgroup_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationGroup* self, const char* signal ```
int32_t q_animationgroup_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationGroup* self, const char* signal ```
int32_t q_animationgroup_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationGroup* self, int32_t (*slot)(QAnimationGroup*, const char*) ```
void q_animationgroup_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationGroup* self, QMetaMethod* signal ```
bool q_animationgroup_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationGroup* self, QMetaMethod* signal ```
bool q_animationgroup_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationGroup* self, bool (*slot)(QAnimationGroup*, QMetaMethod*) ```
void q_animationgroup_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QAnimationGroup* self, void (*slot)(QObject*, const char*) ```
void q_animationgroup_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#dtor.QAnimationGroup)
///
/// Delete this object from C++ memory.
///
/// ``` QAnimationGroup* self ```
void q_animationgroup_delete(void* self);

#endif
