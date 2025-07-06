#pragma once
#ifndef SRCQT6C_LIBQPAUSEANIMATION_H
#define SRCQT6C_LIBQPAUSEANIMATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qpauseanimation.html

/// q_pauseanimation_new constructs a new QPauseAnimation object.
///
///
QPauseAnimation* q_pauseanimation_new();

/// q_pauseanimation_new2 constructs a new QPauseAnimation object.
///
/// ``` int msecs ```
QPauseAnimation* q_pauseanimation_new2(int msecs);

/// q_pauseanimation_new3 constructs a new QPauseAnimation object.
///
/// ``` QObject* parent ```
QPauseAnimation* q_pauseanimation_new3(void* parent);

/// q_pauseanimation_new4 constructs a new QPauseAnimation object.
///
/// ``` int msecs, QObject* parent ```
QPauseAnimation* q_pauseanimation_new4(int msecs, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPauseAnimation* self ```
const QMetaObject* q_pauseanimation_meta_object(void* self);

/// ``` QPauseAnimation* self, const char* param1 ```
void* q_pauseanimation_metacast(void* self, const char* param1);

/// ``` QPauseAnimation* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pauseanimation_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QPauseAnimation* self, int32_t (*slot)(QPauseAnimation*, enum QMetaObject__Call, int, void*) ```
void q_pauseanimation_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QPauseAnimation* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pauseanimation_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_pauseanimation_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpauseanimation.html#duration)
///
/// ``` QPauseAnimation* self ```
int32_t q_pauseanimation_duration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpauseanimation.html#duration)
///
/// Allows for overriding the related default method
///
/// ``` QPauseAnimation* self, int32_t (*slot)() ```
void q_pauseanimation_on_duration(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qpauseanimation.html#duration)
///
/// Base class method implementation
///
/// ``` QPauseAnimation* self ```
int32_t q_pauseanimation_qbase_duration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpauseanimation.html#setDuration)
///
/// ``` QPauseAnimation* self, int msecs ```
void q_pauseanimation_set_duration(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qpauseanimation.html#event)
///
/// ``` QPauseAnimation* self, QEvent* e ```
bool q_pauseanimation_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qpauseanimation.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QPauseAnimation* self, bool (*slot)(QPauseAnimation*, QEvent*) ```
void q_pauseanimation_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpauseanimation.html#event)
///
/// Base class method implementation
///
/// ``` QPauseAnimation* self, QEvent* e ```
bool q_pauseanimation_qbase_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qpauseanimation.html#updateCurrentTime)
///
/// ``` QPauseAnimation* self, int param1 ```
void q_pauseanimation_update_current_time(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qpauseanimation.html#updateCurrentTime)
///
/// Allows for overriding the related default method
///
/// ``` QPauseAnimation* self, void (*slot)(QPauseAnimation*, int) ```
void q_pauseanimation_on_update_current_time(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qpauseanimation.html#updateCurrentTime)
///
/// Base class method implementation
///
/// ``` QPauseAnimation* self, int param1 ```
void q_pauseanimation_qbase_update_current_time(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_pauseanimation_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_pauseanimation_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#state)
///
/// ``` QPauseAnimation* self ```
int64_t q_pauseanimation_state(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#group)
///
/// ``` QPauseAnimation* self ```
QAnimationGroup* q_pauseanimation_group(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#direction)
///
/// ``` QPauseAnimation* self ```
int64_t q_pauseanimation_direction(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setDirection)
///
/// ``` QPauseAnimation* self, enum QAbstractAnimation__Direction direction ```
void q_pauseanimation_set_direction(void* self, int64_t direction);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentTime)
///
/// ``` QPauseAnimation* self ```
int32_t q_pauseanimation_current_time(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopTime)
///
/// ``` QPauseAnimation* self ```
int32_t q_pauseanimation_current_loop_time(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#loopCount)
///
/// ``` QPauseAnimation* self ```
int32_t q_pauseanimation_loop_count(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setLoopCount)
///
/// ``` QPauseAnimation* self, int loopCount ```
void q_pauseanimation_set_loop_count(void* self, int loopCount);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoop)
///
/// ``` QPauseAnimation* self ```
int32_t q_pauseanimation_current_loop(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#totalDuration)
///
/// ``` QPauseAnimation* self ```
int32_t q_pauseanimation_total_duration(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
///
/// ``` QPauseAnimation* self ```
void q_pauseanimation_finished(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
///
/// ``` QPauseAnimation* self, void (*slot)(QAbstractAnimation*) ```
void q_pauseanimation_on_finished(void* self, void (*slot)(void*));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
///
/// ``` QPauseAnimation* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_pauseanimation_state_changed(void* self, int64_t newState, int64_t oldState);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
///
/// ``` QPauseAnimation* self, void (*slot)(QAbstractAnimation*, enum QAbstractAnimation__State, enum QAbstractAnimation__State) ```
void q_pauseanimation_on_state_changed(void* self, void (*slot)(void*, int64_t, int64_t));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
///
/// ``` QPauseAnimation* self, int currentLoop ```
void q_pauseanimation_current_loop_changed(void* self, int currentLoop);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
///
/// ``` QPauseAnimation* self, void (*slot)(QAbstractAnimation*, int) ```
void q_pauseanimation_on_current_loop_changed(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
///
/// ``` QPauseAnimation* self, enum QAbstractAnimation__Direction param1 ```
void q_pauseanimation_direction_changed(void* self, int64_t param1);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
///
/// ``` QPauseAnimation* self, void (*slot)(QAbstractAnimation*, enum QAbstractAnimation__Direction) ```
void q_pauseanimation_on_direction_changed(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// ``` QPauseAnimation* self ```
void q_pauseanimation_start(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#pause)
///
/// ``` QPauseAnimation* self ```
void q_pauseanimation_pause(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#resume)
///
/// ``` QPauseAnimation* self ```
void q_pauseanimation_resume(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setPaused)
///
/// ``` QPauseAnimation* self, bool paused ```
void q_pauseanimation_set_paused(void* self, bool paused);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stop)
///
/// ``` QPauseAnimation* self ```
void q_pauseanimation_stop(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setCurrentTime)
///
/// ``` QPauseAnimation* self, int msecs ```
void q_pauseanimation_set_current_time(void* self, int msecs);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// ``` QPauseAnimation* self, enum QAbstractAnimation__DeletionPolicy policy ```
void q_pauseanimation_start1(void* self, int64_t policy);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPauseAnimation* self ```
const char* q_pauseanimation_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPauseAnimation* self, char* name ```
void q_pauseanimation_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPauseAnimation* self ```
bool q_pauseanimation_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPauseAnimation* self ```
bool q_pauseanimation_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPauseAnimation* self ```
bool q_pauseanimation_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPauseAnimation* self ```
bool q_pauseanimation_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPauseAnimation* self, bool b ```
bool q_pauseanimation_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPauseAnimation* self ```
QThread* q_pauseanimation_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPauseAnimation* self, QThread* thread ```
bool q_pauseanimation_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPauseAnimation* self, int interval ```
int32_t q_pauseanimation_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPauseAnimation* self, int id ```
void q_pauseanimation_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPauseAnimation* self, enum Qt__TimerId id ```
void q_pauseanimation_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPauseAnimation* self ```
libqt_list /* of QObject* */ q_pauseanimation_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QPauseAnimation* self, QObject* parent ```
void q_pauseanimation_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPauseAnimation* self, QObject* filterObj ```
void q_pauseanimation_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPauseAnimation* self, QObject* obj ```
void q_pauseanimation_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_pauseanimation_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPauseAnimation* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_pauseanimation_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_pauseanimation_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_pauseanimation_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPauseAnimation* self ```
void q_pauseanimation_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPauseAnimation* self ```
void q_pauseanimation_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPauseAnimation* self, const char* name, QVariant* value ```
bool q_pauseanimation_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPauseAnimation* self, const char* name ```
QVariant* q_pauseanimation_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPauseAnimation* self ```
const char** q_pauseanimation_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPauseAnimation* self ```
QBindingStorage* q_pauseanimation_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPauseAnimation* self ```
const QBindingStorage* q_pauseanimation_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPauseAnimation* self ```
void q_pauseanimation_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPauseAnimation* self, void (*slot)(QObject*) ```
void q_pauseanimation_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPauseAnimation* self ```
QObject* q_pauseanimation_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPauseAnimation* self, const char* classname ```
bool q_pauseanimation_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPauseAnimation* self ```
void q_pauseanimation_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPauseAnimation* self, QThread* thread, Disambiguated_t* param2 ```
bool q_pauseanimation_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPauseAnimation* self, int interval, enum Qt__TimerType timerType ```
int32_t q_pauseanimation_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pauseanimation_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPauseAnimation* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pauseanimation_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPauseAnimation* self, QObject* param1 ```
void q_pauseanimation_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPauseAnimation* self, void (*slot)(QObject*, QObject*) ```
void q_pauseanimation_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateState)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPauseAnimation* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_pauseanimation_update_state(void* self, int64_t newState, int64_t oldState);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPauseAnimation* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_pauseanimation_qbase_update_state(void* self, int64_t newState, int64_t oldState);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPauseAnimation* self, void (*slot)(QPauseAnimation*, enum QAbstractAnimation__State, enum QAbstractAnimation__State) ```
void q_pauseanimation_on_update_state(void* self, void (*slot)(void*, int64_t, int64_t));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPauseAnimation* self, enum QAbstractAnimation__Direction direction ```
void q_pauseanimation_update_direction(void* self, int64_t direction);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPauseAnimation* self, enum QAbstractAnimation__Direction direction ```
void q_pauseanimation_qbase_update_direction(void* self, int64_t direction);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPauseAnimation* self, void (*slot)(QPauseAnimation*, enum QAbstractAnimation__Direction) ```
void q_pauseanimation_on_update_direction(void* self, void (*slot)(void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPauseAnimation* self, QObject* watched, QEvent* event ```
bool q_pauseanimation_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPauseAnimation* self, QObject* watched, QEvent* event ```
bool q_pauseanimation_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPauseAnimation* self, bool (*slot)(QPauseAnimation*, QObject*, QEvent*) ```
void q_pauseanimation_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPauseAnimation* self, QTimerEvent* event ```
void q_pauseanimation_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPauseAnimation* self, QTimerEvent* event ```
void q_pauseanimation_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPauseAnimation* self, void (*slot)(QPauseAnimation*, QTimerEvent*) ```
void q_pauseanimation_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPauseAnimation* self, QChildEvent* event ```
void q_pauseanimation_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPauseAnimation* self, QChildEvent* event ```
void q_pauseanimation_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPauseAnimation* self, void (*slot)(QPauseAnimation*, QChildEvent*) ```
void q_pauseanimation_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPauseAnimation* self, QEvent* event ```
void q_pauseanimation_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPauseAnimation* self, QEvent* event ```
void q_pauseanimation_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPauseAnimation* self, void (*slot)(QPauseAnimation*, QEvent*) ```
void q_pauseanimation_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPauseAnimation* self, QMetaMethod* signal ```
void q_pauseanimation_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPauseAnimation* self, QMetaMethod* signal ```
void q_pauseanimation_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPauseAnimation* self, void (*slot)(QPauseAnimation*, QMetaMethod*) ```
void q_pauseanimation_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPauseAnimation* self, QMetaMethod* signal ```
void q_pauseanimation_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPauseAnimation* self, QMetaMethod* signal ```
void q_pauseanimation_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPauseAnimation* self, void (*slot)(QPauseAnimation*, QMetaMethod*) ```
void q_pauseanimation_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPauseAnimation* self ```
QObject* q_pauseanimation_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPauseAnimation* self ```
QObject* q_pauseanimation_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPauseAnimation* self, QObject* (*slot)() ```
void q_pauseanimation_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPauseAnimation* self ```
int32_t q_pauseanimation_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPauseAnimation* self ```
int32_t q_pauseanimation_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPauseAnimation* self, int32_t (*slot)() ```
void q_pauseanimation_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPauseAnimation* self, const char* signal ```
int32_t q_pauseanimation_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPauseAnimation* self, const char* signal ```
int32_t q_pauseanimation_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPauseAnimation* self, int32_t (*slot)(QPauseAnimation*, const char*) ```
void q_pauseanimation_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPauseAnimation* self, QMetaMethod* signal ```
bool q_pauseanimation_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPauseAnimation* self, QMetaMethod* signal ```
bool q_pauseanimation_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPauseAnimation* self, bool (*slot)(QPauseAnimation*, QMetaMethod*) ```
void q_pauseanimation_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QPauseAnimation* self, void (*slot)(QObject*, const char*) ```
void q_pauseanimation_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpauseanimation.html#dtor.QPauseAnimation)
///
/// Delete this object from C++ memory.
///
/// ``` QPauseAnimation* self ```
void q_pauseanimation_delete(void* self);

#endif
