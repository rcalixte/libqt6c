#pragma once
#ifndef SRCQT6C_LIBQPARALLELANIMATIONGROUP_H
#define SRCQT6C_LIBQPARALLELANIMATIONGROUP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractanimation.h"
#include "libqanimationgroup.h"
#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>

/// https://doc.qt.io/qt-6/qparallelanimationgroup.html

/// q_parallelanimationgroup_new constructs a new QParallelAnimationGroup object.
///
///
QParallelAnimationGroup* q_parallelanimationgroup_new();

/// q_parallelanimationgroup_new2 constructs a new QParallelAnimationGroup object.
///
/// ``` QObject* parent ```
QParallelAnimationGroup* q_parallelanimationgroup_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QParallelAnimationGroup* self ```
const QMetaObject* q_parallelanimationgroup_meta_object(void* self);

/// ``` QParallelAnimationGroup* self, const char* param1 ```
void* q_parallelanimationgroup_metacast(void* self, const char* param1);

/// ``` QParallelAnimationGroup* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_parallelanimationgroup_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QParallelAnimationGroup* self, int32_t (*slot)(QParallelAnimationGroup*, enum QMetaObject__Call, int, void*) ```
void q_parallelanimationgroup_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QParallelAnimationGroup* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_parallelanimationgroup_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_parallelanimationgroup_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#duration)
///
/// ``` QParallelAnimationGroup* self ```
int32_t q_parallelanimationgroup_duration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#duration)
///
/// Allows for overriding the related default method
///
/// ``` QParallelAnimationGroup* self, int32_t (*slot)() ```
void q_parallelanimationgroup_on_duration(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#duration)
///
/// Base class method implementation
///
/// ``` QParallelAnimationGroup* self ```
int32_t q_parallelanimationgroup_qbase_duration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#event)
///
/// ``` QParallelAnimationGroup* self, QEvent* event ```
bool q_parallelanimationgroup_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QParallelAnimationGroup* self, bool (*slot)(QParallelAnimationGroup*, QEvent*) ```
void q_parallelanimationgroup_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#event)
///
/// Base class method implementation
///
/// ``` QParallelAnimationGroup* self, QEvent* event ```
bool q_parallelanimationgroup_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#updateCurrentTime)
///
/// ``` QParallelAnimationGroup* self, int currentTime ```
void q_parallelanimationgroup_update_current_time(void* self, int currentTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#updateCurrentTime)
///
/// Allows for overriding the related default method
///
/// ``` QParallelAnimationGroup* self, void (*slot)(QParallelAnimationGroup*, int) ```
void q_parallelanimationgroup_on_update_current_time(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#updateCurrentTime)
///
/// Base class method implementation
///
/// ``` QParallelAnimationGroup* self, int currentTime ```
void q_parallelanimationgroup_qbase_update_current_time(void* self, int currentTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#updateState)
///
/// ``` QParallelAnimationGroup* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_parallelanimationgroup_update_state(void* self, int64_t newState, int64_t oldState);

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#updateState)
///
/// Allows for overriding the related default method
///
/// ``` QParallelAnimationGroup* self, void (*slot)(QParallelAnimationGroup*, enum QAbstractAnimation__State, enum QAbstractAnimation__State) ```
void q_parallelanimationgroup_on_update_state(void* self, void (*slot)(void*, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#updateState)
///
/// Base class method implementation
///
/// ``` QParallelAnimationGroup* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_parallelanimationgroup_qbase_update_state(void* self, int64_t newState, int64_t oldState);

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#updateDirection)
///
/// ``` QParallelAnimationGroup* self, enum QAbstractAnimation__Direction direction ```
void q_parallelanimationgroup_update_direction(void* self, int64_t direction);

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#updateDirection)
///
/// Allows for overriding the related default method
///
/// ``` QParallelAnimationGroup* self, void (*slot)(QParallelAnimationGroup*, enum QAbstractAnimation__Direction) ```
void q_parallelanimationgroup_on_update_direction(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#updateDirection)
///
/// Base class method implementation
///
/// ``` QParallelAnimationGroup* self, enum QAbstractAnimation__Direction direction ```
void q_parallelanimationgroup_qbase_update_direction(void* self, int64_t direction);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_parallelanimationgroup_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_parallelanimationgroup_tr3(const char* s, const char* c, int n);

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#animationAt)
///
/// ``` QParallelAnimationGroup* self, int index ```
QAbstractAnimation* q_parallelanimationgroup_animation_at(void* self, int index);

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#animationCount)
///
/// ``` QParallelAnimationGroup* self ```
int32_t q_parallelanimationgroup_animation_count(void* self);

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#indexOfAnimation)
///
/// ``` QParallelAnimationGroup* self, QAbstractAnimation* animation ```
int32_t q_parallelanimationgroup_index_of_animation(void* self, void* animation);

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#addAnimation)
///
/// ``` QParallelAnimationGroup* self, QAbstractAnimation* animation ```
void q_parallelanimationgroup_add_animation(void* self, void* animation);

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#insertAnimation)
///
/// ``` QParallelAnimationGroup* self, int index, QAbstractAnimation* animation ```
void q_parallelanimationgroup_insert_animation(void* self, int index, void* animation);

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#removeAnimation)
///
/// ``` QParallelAnimationGroup* self, QAbstractAnimation* animation ```
void q_parallelanimationgroup_remove_animation(void* self, void* animation);

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#takeAnimation)
///
/// ``` QParallelAnimationGroup* self, int index ```
QAbstractAnimation* q_parallelanimationgroup_take_animation(void* self, int index);

/// Inherited from QAnimationGroup
///
/// [Qt documentation](https://doc.qt.io/qt-6/qanimationgroup.html#clear)
///
/// ``` QParallelAnimationGroup* self ```
void q_parallelanimationgroup_clear(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#state)
///
/// ``` QParallelAnimationGroup* self ```
int64_t q_parallelanimationgroup_state(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#group)
///
/// ``` QParallelAnimationGroup* self ```
QAnimationGroup* q_parallelanimationgroup_group(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#direction)
///
/// ``` QParallelAnimationGroup* self ```
int64_t q_parallelanimationgroup_direction(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setDirection)
///
/// ``` QParallelAnimationGroup* self, enum QAbstractAnimation__Direction direction ```
void q_parallelanimationgroup_set_direction(void* self, int64_t direction);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentTime)
///
/// ``` QParallelAnimationGroup* self ```
int32_t q_parallelanimationgroup_current_time(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopTime)
///
/// ``` QParallelAnimationGroup* self ```
int32_t q_parallelanimationgroup_current_loop_time(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#loopCount)
///
/// ``` QParallelAnimationGroup* self ```
int32_t q_parallelanimationgroup_loop_count(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setLoopCount)
///
/// ``` QParallelAnimationGroup* self, int loopCount ```
void q_parallelanimationgroup_set_loop_count(void* self, int loopCount);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoop)
///
/// ``` QParallelAnimationGroup* self ```
int32_t q_parallelanimationgroup_current_loop(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#totalDuration)
///
/// ``` QParallelAnimationGroup* self ```
int32_t q_parallelanimationgroup_total_duration(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
///
/// ``` QParallelAnimationGroup* self ```
void q_parallelanimationgroup_finished(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
///
/// ``` QParallelAnimationGroup* self, void (*slot)(QAbstractAnimation*) ```
void q_parallelanimationgroup_on_finished(void* self, void (*slot)(void*));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
///
/// ``` QParallelAnimationGroup* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_parallelanimationgroup_state_changed(void* self, int64_t newState, int64_t oldState);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
///
/// ``` QParallelAnimationGroup* self, void (*slot)(QAbstractAnimation*, enum QAbstractAnimation__State, enum QAbstractAnimation__State) ```
void q_parallelanimationgroup_on_state_changed(void* self, void (*slot)(void*, int64_t, int64_t));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
///
/// ``` QParallelAnimationGroup* self, int currentLoop ```
void q_parallelanimationgroup_current_loop_changed(void* self, int currentLoop);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
///
/// ``` QParallelAnimationGroup* self, void (*slot)(QAbstractAnimation*, int) ```
void q_parallelanimationgroup_on_current_loop_changed(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
///
/// ``` QParallelAnimationGroup* self, enum QAbstractAnimation__Direction param1 ```
void q_parallelanimationgroup_direction_changed(void* self, int64_t param1);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
///
/// ``` QParallelAnimationGroup* self, void (*slot)(QAbstractAnimation*, enum QAbstractAnimation__Direction) ```
void q_parallelanimationgroup_on_direction_changed(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// ``` QParallelAnimationGroup* self ```
void q_parallelanimationgroup_start(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#pause)
///
/// ``` QParallelAnimationGroup* self ```
void q_parallelanimationgroup_pause(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#resume)
///
/// ``` QParallelAnimationGroup* self ```
void q_parallelanimationgroup_resume(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setPaused)
///
/// ``` QParallelAnimationGroup* self, bool paused ```
void q_parallelanimationgroup_set_paused(void* self, bool paused);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stop)
///
/// ``` QParallelAnimationGroup* self ```
void q_parallelanimationgroup_stop(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setCurrentTime)
///
/// ``` QParallelAnimationGroup* self, int msecs ```
void q_parallelanimationgroup_set_current_time(void* self, int msecs);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// ``` QParallelAnimationGroup* self, enum QAbstractAnimation__DeletionPolicy policy ```
void q_parallelanimationgroup_start1(void* self, int64_t policy);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QParallelAnimationGroup* self ```
const char* q_parallelanimationgroup_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QParallelAnimationGroup* self, char* name ```
void q_parallelanimationgroup_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QParallelAnimationGroup* self ```
bool q_parallelanimationgroup_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QParallelAnimationGroup* self ```
bool q_parallelanimationgroup_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QParallelAnimationGroup* self ```
bool q_parallelanimationgroup_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QParallelAnimationGroup* self ```
bool q_parallelanimationgroup_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QParallelAnimationGroup* self, bool b ```
bool q_parallelanimationgroup_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QParallelAnimationGroup* self ```
QThread* q_parallelanimationgroup_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QParallelAnimationGroup* self, QThread* thread ```
void q_parallelanimationgroup_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QParallelAnimationGroup* self, int interval ```
int32_t q_parallelanimationgroup_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QParallelAnimationGroup* self, int id ```
void q_parallelanimationgroup_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QParallelAnimationGroup* self ```
libqt_list /* of QObject* */ q_parallelanimationgroup_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QParallelAnimationGroup* self, QObject* parent ```
void q_parallelanimationgroup_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QParallelAnimationGroup* self, QObject* filterObj ```
void q_parallelanimationgroup_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QParallelAnimationGroup* self, QObject* obj ```
void q_parallelanimationgroup_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_parallelanimationgroup_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QParallelAnimationGroup* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_parallelanimationgroup_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_parallelanimationgroup_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_parallelanimationgroup_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QParallelAnimationGroup* self ```
void q_parallelanimationgroup_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QParallelAnimationGroup* self ```
void q_parallelanimationgroup_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QParallelAnimationGroup* self, const char* name, QVariant* value ```
bool q_parallelanimationgroup_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QParallelAnimationGroup* self, const char* name ```
QVariant* q_parallelanimationgroup_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QParallelAnimationGroup* self ```
const char** q_parallelanimationgroup_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QParallelAnimationGroup* self ```
QBindingStorage* q_parallelanimationgroup_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QParallelAnimationGroup* self ```
const QBindingStorage* q_parallelanimationgroup_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QParallelAnimationGroup* self ```
void q_parallelanimationgroup_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QParallelAnimationGroup* self, void (*slot)(QObject*) ```
void q_parallelanimationgroup_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QParallelAnimationGroup* self ```
QObject* q_parallelanimationgroup_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QParallelAnimationGroup* self, const char* classname ```
bool q_parallelanimationgroup_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QParallelAnimationGroup* self ```
void q_parallelanimationgroup_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QParallelAnimationGroup* self, int interval, enum Qt__TimerType timerType ```
int32_t q_parallelanimationgroup_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_parallelanimationgroup_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QParallelAnimationGroup* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_parallelanimationgroup_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QParallelAnimationGroup* self, QObject* param1 ```
void q_parallelanimationgroup_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QParallelAnimationGroup* self, void (*slot)(QObject*, QObject*) ```
void q_parallelanimationgroup_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QParallelAnimationGroup* self, QObject* watched, QEvent* event ```
bool q_parallelanimationgroup_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, QObject* watched, QEvent* event ```
bool q_parallelanimationgroup_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, bool (*slot)(QParallelAnimationGroup*, QObject*, QEvent*) ```
void q_parallelanimationgroup_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QParallelAnimationGroup* self, QTimerEvent* event ```
void q_parallelanimationgroup_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, QTimerEvent* event ```
void q_parallelanimationgroup_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, void (*slot)(QParallelAnimationGroup*, QTimerEvent*) ```
void q_parallelanimationgroup_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QParallelAnimationGroup* self, QChildEvent* event ```
void q_parallelanimationgroup_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, QChildEvent* event ```
void q_parallelanimationgroup_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, void (*slot)(QParallelAnimationGroup*, QChildEvent*) ```
void q_parallelanimationgroup_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QParallelAnimationGroup* self, QEvent* event ```
void q_parallelanimationgroup_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, QEvent* event ```
void q_parallelanimationgroup_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, void (*slot)(QParallelAnimationGroup*, QEvent*) ```
void q_parallelanimationgroup_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QParallelAnimationGroup* self, QMetaMethod* signal ```
void q_parallelanimationgroup_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, QMetaMethod* signal ```
void q_parallelanimationgroup_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, void (*slot)(QParallelAnimationGroup*, QMetaMethod*) ```
void q_parallelanimationgroup_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QParallelAnimationGroup* self, QMetaMethod* signal ```
void q_parallelanimationgroup_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, QMetaMethod* signal ```
void q_parallelanimationgroup_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, void (*slot)(QParallelAnimationGroup*, QMetaMethod*) ```
void q_parallelanimationgroup_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QParallelAnimationGroup* self ```
QObject* q_parallelanimationgroup_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self ```
QObject* q_parallelanimationgroup_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, QObject* (*slot)() ```
void q_parallelanimationgroup_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QParallelAnimationGroup* self ```
int32_t q_parallelanimationgroup_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self ```
int32_t q_parallelanimationgroup_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, int32_t (*slot)() ```
void q_parallelanimationgroup_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QParallelAnimationGroup* self, const char* signal ```
int32_t q_parallelanimationgroup_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, const char* signal ```
int32_t q_parallelanimationgroup_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, int32_t (*slot)(QParallelAnimationGroup*, const char*) ```
void q_parallelanimationgroup_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QParallelAnimationGroup* self, QMetaMethod* signal ```
bool q_parallelanimationgroup_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, QMetaMethod* signal ```
bool q_parallelanimationgroup_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QParallelAnimationGroup* self, bool (*slot)(QParallelAnimationGroup*, QMetaMethod*) ```
void q_parallelanimationgroup_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QParallelAnimationGroup* self, void (*slot)(QObject*, const char*) ```
void q_parallelanimationgroup_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qparallelanimationgroup.html#dtor.QParallelAnimationGroup)
///
/// Delete this object from C++ memory.
///
/// ``` QParallelAnimationGroup* self ```
void q_parallelanimationgroup_delete(void* self);

#endif
