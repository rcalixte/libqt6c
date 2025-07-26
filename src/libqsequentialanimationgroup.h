#pragma once
#ifndef SRCQT6C_LIBQSEQUENTIALANIMATIONGROUP_H
#define SRCQT6C_LIBQSEQUENTIALANIMATIONGROUP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qsequentialanimationgroup.html

/// q_sequentialanimationgroup_new constructs a new QSequentialAnimationGroup object.
///
///
QSequentialAnimationGroup* q_sequentialanimationgroup_new();

/// q_sequentialanimationgroup_new2 constructs a new QSequentialAnimationGroup object.
///
/// ``` QObject* parent ```
QSequentialAnimationGroup* q_sequentialanimationgroup_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSequentialAnimationGroup* self ```
const QMetaObject* q_sequentialanimationgroup_meta_object(void* self);

/// ``` QSequentialAnimationGroup* self, const char* param1 ```
void* q_sequentialanimationgroup_metacast(void* self, const char* param1);

/// ``` QSequentialAnimationGroup* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sequentialanimationgroup_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QSequentialAnimationGroup* self, int32_t (*slot)(QSequentialAnimationGroup*, enum QMetaObject__Call, int, void*) ```
void q_sequentialanimationgroup_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QSequentialAnimationGroup* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sequentialanimationgroup_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_sequentialanimationgroup_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#addPause)
///
/// ``` QSequentialAnimationGroup* self, int msecs ```
QPauseAnimation* q_sequentialanimationgroup_add_pause(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#insertPause)
///
/// ``` QSequentialAnimationGroup* self, int index, int msecs ```
QPauseAnimation* q_sequentialanimationgroup_insert_pause(void* self, int index, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#currentAnimation)
///
/// ``` QSequentialAnimationGroup* self ```
QAbstractAnimation* q_sequentialanimationgroup_current_animation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#duration)
///
/// ``` QSequentialAnimationGroup* self ```
int32_t q_sequentialanimationgroup_duration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#duration)
///
/// Allows for overriding the related default method
///
/// ``` QSequentialAnimationGroup* self, int32_t (*slot)() ```
void q_sequentialanimationgroup_on_duration(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#duration)
///
/// Base class method implementation
///
/// ``` QSequentialAnimationGroup* self ```
int32_t q_sequentialanimationgroup_qbase_duration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#currentAnimationChanged)
///
/// ``` QSequentialAnimationGroup* self, QAbstractAnimation* current ```
void q_sequentialanimationgroup_current_animation_changed(void* self, void* current);

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#currentAnimationChanged)
///
/// ``` QSequentialAnimationGroup* self, void (*slot)(QSequentialAnimationGroup*, QAbstractAnimation*) ```
void q_sequentialanimationgroup_on_current_animation_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#event)
///
/// ``` QSequentialAnimationGroup* self, QEvent* event ```
bool q_sequentialanimationgroup_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QSequentialAnimationGroup* self, bool (*slot)(QSequentialAnimationGroup*, QEvent*) ```
void q_sequentialanimationgroup_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#event)
///
/// Base class method implementation
///
/// ``` QSequentialAnimationGroup* self, QEvent* event ```
bool q_sequentialanimationgroup_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateCurrentTime)
///
/// ``` QSequentialAnimationGroup* self, int param1 ```
void q_sequentialanimationgroup_update_current_time(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateCurrentTime)
///
/// Allows for overriding the related default method
///
/// ``` QSequentialAnimationGroup* self, void (*slot)(QSequentialAnimationGroup*, int) ```
void q_sequentialanimationgroup_on_update_current_time(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateCurrentTime)
///
/// Base class method implementation
///
/// ``` QSequentialAnimationGroup* self, int param1 ```
void q_sequentialanimationgroup_qbase_update_current_time(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateState)
///
/// ``` QSequentialAnimationGroup* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_sequentialanimationgroup_update_state(void* self, int64_t newState, int64_t oldState);

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateState)
///
/// Allows for overriding the related default method
///
/// ``` QSequentialAnimationGroup* self, void (*slot)(QSequentialAnimationGroup*, enum QAbstractAnimation__State, enum QAbstractAnimation__State) ```
void q_sequentialanimationgroup_on_update_state(void* self, void (*slot)(void*, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateState)
///
/// Base class method implementation
///
/// ``` QSequentialAnimationGroup* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_sequentialanimationgroup_qbase_update_state(void* self, int64_t newState, int64_t oldState);

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateDirection)
///
/// ``` QSequentialAnimationGroup* self, enum QAbstractAnimation__Direction direction ```
void q_sequentialanimationgroup_update_direction(void* self, int64_t direction);

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateDirection)
///
/// Allows for overriding the related default method
///
/// ``` QSequentialAnimationGroup* self, void (*slot)(QSequentialAnimationGroup*, enum QAbstractAnimation__Direction) ```
void q_sequentialanimationgroup_on_update_direction(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#updateDirection)
///
/// Base class method implementation
///
/// ``` QSequentialAnimationGroup* self, enum QAbstractAnimation__Direction direction ```
void q_sequentialanimationgroup_qbase_update_direction(void* self, int64_t direction);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_sequentialanimationgroup_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_sequentialanimationgroup_tr3(const char* s, const char* c, int n);

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#animationAt)
///
/// ``` QSequentialAnimationGroup* self, int index ```
QAbstractAnimation* q_sequentialanimationgroup_animation_at(void* self, int index);

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#animationCount)
///
/// ``` QSequentialAnimationGroup* self ```
int32_t q_sequentialanimationgroup_animation_count(void* self);

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#indexOfAnimation)
///
/// ``` QSequentialAnimationGroup* self, QAbstractAnimation* animation ```
int32_t q_sequentialanimationgroup_index_of_animation(void* self, void* animation);

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#addAnimation)
///
/// ``` QSequentialAnimationGroup* self, QAbstractAnimation* animation ```
void q_sequentialanimationgroup_add_animation(void* self, void* animation);

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#insertAnimation)
///
/// ``` QSequentialAnimationGroup* self, int index, QAbstractAnimation* animation ```
void q_sequentialanimationgroup_insert_animation(void* self, int index, void* animation);

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#removeAnimation)
///
/// ``` QSequentialAnimationGroup* self, QAbstractAnimation* animation ```
void q_sequentialanimationgroup_remove_animation(void* self, void* animation);

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#takeAnimation)
///
/// ``` QSequentialAnimationGroup* self, int index ```
QAbstractAnimation* q_sequentialanimationgroup_take_animation(void* self, int index);

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#clear)
///
/// ``` QSequentialAnimationGroup* self ```
void q_sequentialanimationgroup_clear(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#state)
///
/// ``` QSequentialAnimationGroup* self ```
int64_t q_sequentialanimationgroup_state(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#group)
///
/// ``` QSequentialAnimationGroup* self ```
QAnimationGroup* q_sequentialanimationgroup_group(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#direction)
///
/// ``` QSequentialAnimationGroup* self ```
int64_t q_sequentialanimationgroup_direction(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setDirection)
///
/// ``` QSequentialAnimationGroup* self, enum QAbstractAnimation__Direction direction ```
void q_sequentialanimationgroup_set_direction(void* self, int64_t direction);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentTime)
///
/// ``` QSequentialAnimationGroup* self ```
int32_t q_sequentialanimationgroup_current_time(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopTime)
///
/// ``` QSequentialAnimationGroup* self ```
int32_t q_sequentialanimationgroup_current_loop_time(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#loopCount)
///
/// ``` QSequentialAnimationGroup* self ```
int32_t q_sequentialanimationgroup_loop_count(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setLoopCount)
///
/// ``` QSequentialAnimationGroup* self, int loopCount ```
void q_sequentialanimationgroup_set_loop_count(void* self, int loopCount);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoop)
///
/// ``` QSequentialAnimationGroup* self ```
int32_t q_sequentialanimationgroup_current_loop(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#totalDuration)
///
/// ``` QSequentialAnimationGroup* self ```
int32_t q_sequentialanimationgroup_total_duration(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
///
/// ``` QSequentialAnimationGroup* self ```
void q_sequentialanimationgroup_finished(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
///
/// ``` QSequentialAnimationGroup* self, void (*slot)(QSequentialAnimationGroup*) ```
void q_sequentialanimationgroup_on_finished(void* self, void (*slot)(void*));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
///
/// ``` QSequentialAnimationGroup* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_sequentialanimationgroup_state_changed(void* self, int64_t newState, int64_t oldState);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
///
/// ``` QSequentialAnimationGroup* self, void (*slot)(QSequentialAnimationGroup*, enum QAbstractAnimation__State, enum QAbstractAnimation__State) ```
void q_sequentialanimationgroup_on_state_changed(void* self, void (*slot)(void*, int64_t, int64_t));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
///
/// ``` QSequentialAnimationGroup* self, int currentLoop ```
void q_sequentialanimationgroup_current_loop_changed(void* self, int currentLoop);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
///
/// ``` QSequentialAnimationGroup* self, void (*slot)(QSequentialAnimationGroup*, int) ```
void q_sequentialanimationgroup_on_current_loop_changed(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
///
/// ``` QSequentialAnimationGroup* self, enum QAbstractAnimation__Direction param1 ```
void q_sequentialanimationgroup_direction_changed(void* self, int64_t param1);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
///
/// ``` QSequentialAnimationGroup* self, void (*slot)(QSequentialAnimationGroup*, enum QAbstractAnimation__Direction) ```
void q_sequentialanimationgroup_on_direction_changed(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// ``` QSequentialAnimationGroup* self ```
void q_sequentialanimationgroup_start(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#pause)
///
/// ``` QSequentialAnimationGroup* self ```
void q_sequentialanimationgroup_pause(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#resume)
///
/// ``` QSequentialAnimationGroup* self ```
void q_sequentialanimationgroup_resume(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setPaused)
///
/// ``` QSequentialAnimationGroup* self, bool paused ```
void q_sequentialanimationgroup_set_paused(void* self, bool paused);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stop)
///
/// ``` QSequentialAnimationGroup* self ```
void q_sequentialanimationgroup_stop(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setCurrentTime)
///
/// ``` QSequentialAnimationGroup* self, int msecs ```
void q_sequentialanimationgroup_set_current_time(void* self, int msecs);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// ``` QSequentialAnimationGroup* self, enum QAbstractAnimation__DeletionPolicy policy ```
void q_sequentialanimationgroup_start1(void* self, int64_t policy);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSequentialAnimationGroup* self ```
const char* q_sequentialanimationgroup_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSequentialAnimationGroup* self, char* name ```
void q_sequentialanimationgroup_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSequentialAnimationGroup* self ```
bool q_sequentialanimationgroup_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSequentialAnimationGroup* self ```
bool q_sequentialanimationgroup_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSequentialAnimationGroup* self ```
bool q_sequentialanimationgroup_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSequentialAnimationGroup* self ```
bool q_sequentialanimationgroup_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSequentialAnimationGroup* self, bool b ```
bool q_sequentialanimationgroup_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSequentialAnimationGroup* self ```
QThread* q_sequentialanimationgroup_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSequentialAnimationGroup* self, QThread* thread ```
bool q_sequentialanimationgroup_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSequentialAnimationGroup* self, int interval ```
int32_t q_sequentialanimationgroup_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSequentialAnimationGroup* self, int id ```
void q_sequentialanimationgroup_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSequentialAnimationGroup* self, enum Qt__TimerId id ```
void q_sequentialanimationgroup_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSequentialAnimationGroup* self ```
libqt_list /* of QObject* */ q_sequentialanimationgroup_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSequentialAnimationGroup* self, QObject* parent ```
void q_sequentialanimationgroup_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSequentialAnimationGroup* self, QObject* filterObj ```
void q_sequentialanimationgroup_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSequentialAnimationGroup* self, QObject* obj ```
void q_sequentialanimationgroup_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_sequentialanimationgroup_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSequentialAnimationGroup* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_sequentialanimationgroup_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_sequentialanimationgroup_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_sequentialanimationgroup_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSequentialAnimationGroup* self ```
void q_sequentialanimationgroup_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSequentialAnimationGroup* self ```
void q_sequentialanimationgroup_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSequentialAnimationGroup* self, const char* name, QVariant* value ```
bool q_sequentialanimationgroup_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSequentialAnimationGroup* self, const char* name ```
QVariant* q_sequentialanimationgroup_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSequentialAnimationGroup* self ```
const char** q_sequentialanimationgroup_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSequentialAnimationGroup* self ```
QBindingStorage* q_sequentialanimationgroup_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSequentialAnimationGroup* self ```
const QBindingStorage* q_sequentialanimationgroup_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSequentialAnimationGroup* self ```
void q_sequentialanimationgroup_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSequentialAnimationGroup* self, void (*slot)(QSequentialAnimationGroup*) ```
void q_sequentialanimationgroup_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSequentialAnimationGroup* self ```
QObject* q_sequentialanimationgroup_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSequentialAnimationGroup* self, const char* classname ```
bool q_sequentialanimationgroup_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSequentialAnimationGroup* self ```
void q_sequentialanimationgroup_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSequentialAnimationGroup* self, QThread* thread, Disambiguated_t* param2 ```
bool q_sequentialanimationgroup_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSequentialAnimationGroup* self, int interval, enum Qt__TimerType timerType ```
int32_t q_sequentialanimationgroup_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sequentialanimationgroup_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSequentialAnimationGroup* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sequentialanimationgroup_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSequentialAnimationGroup* self, QObject* param1 ```
void q_sequentialanimationgroup_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSequentialAnimationGroup* self, void (*slot)(QSequentialAnimationGroup*, QObject*) ```
void q_sequentialanimationgroup_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, QObject* watched, QEvent* event ```
bool q_sequentialanimationgroup_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, QObject* watched, QEvent* event ```
bool q_sequentialanimationgroup_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, bool (*slot)(QSequentialAnimationGroup*, QObject*, QEvent*) ```
void q_sequentialanimationgroup_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, QTimerEvent* event ```
void q_sequentialanimationgroup_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, QTimerEvent* event ```
void q_sequentialanimationgroup_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, void (*slot)(QSequentialAnimationGroup*, QTimerEvent*) ```
void q_sequentialanimationgroup_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, QChildEvent* event ```
void q_sequentialanimationgroup_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, QChildEvent* event ```
void q_sequentialanimationgroup_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, void (*slot)(QSequentialAnimationGroup*, QChildEvent*) ```
void q_sequentialanimationgroup_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, QEvent* event ```
void q_sequentialanimationgroup_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, QEvent* event ```
void q_sequentialanimationgroup_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, void (*slot)(QSequentialAnimationGroup*, QEvent*) ```
void q_sequentialanimationgroup_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, QMetaMethod* signal ```
void q_sequentialanimationgroup_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, QMetaMethod* signal ```
void q_sequentialanimationgroup_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, void (*slot)(QSequentialAnimationGroup*, QMetaMethod*) ```
void q_sequentialanimationgroup_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, QMetaMethod* signal ```
void q_sequentialanimationgroup_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, QMetaMethod* signal ```
void q_sequentialanimationgroup_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, void (*slot)(QSequentialAnimationGroup*, QMetaMethod*) ```
void q_sequentialanimationgroup_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSequentialAnimationGroup* self ```
QObject* q_sequentialanimationgroup_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self ```
QObject* q_sequentialanimationgroup_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, QObject* (*slot)() ```
void q_sequentialanimationgroup_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSequentialAnimationGroup* self ```
int32_t q_sequentialanimationgroup_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self ```
int32_t q_sequentialanimationgroup_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, int32_t (*slot)() ```
void q_sequentialanimationgroup_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, const char* signal ```
int32_t q_sequentialanimationgroup_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, const char* signal ```
int32_t q_sequentialanimationgroup_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, int32_t (*slot)(QSequentialAnimationGroup*, const char*) ```
void q_sequentialanimationgroup_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, QMetaMethod* signal ```
bool q_sequentialanimationgroup_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, QMetaMethod* signal ```
bool q_sequentialanimationgroup_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSequentialAnimationGroup* self, bool (*slot)(QSequentialAnimationGroup*, QMetaMethod*) ```
void q_sequentialanimationgroup_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QSequentialAnimationGroup* self, void (*slot)(QSequentialAnimationGroup*, const char*) ```
void q_sequentialanimationgroup_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qsequentialanimationgroup.html#dtor.QSequentialAnimationGroup)
///
/// Delete this object from C++ memory.
///
/// ``` QSequentialAnimationGroup* self ```
void q_sequentialanimationgroup_delete(void* self);

#endif
