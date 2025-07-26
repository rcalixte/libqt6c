#pragma once
#ifndef SRCQT6C_LIBQABSTRACTANIMATION_H
#define SRCQT6C_LIBQABSTRACTANIMATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qabstractanimation.html

/// q_abstractanimation_new constructs a new QAbstractAnimation object.
///
///
QAbstractAnimation* q_abstractanimation_new();

/// q_abstractanimation_new2 constructs a new QAbstractAnimation object.
///
/// ``` QObject* parent ```
QAbstractAnimation* q_abstractanimation_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAbstractAnimation* self ```
const QMetaObject* q_abstractanimation_meta_object(void* self);

/// ``` QAbstractAnimation* self, const char* param1 ```
void* q_abstractanimation_metacast(void* self, const char* param1);

/// ``` QAbstractAnimation* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractanimation_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QAbstractAnimation* self, int32_t (*slot)(QAbstractAnimation*, enum QMetaObject__Call, int, void*) ```
void q_abstractanimation_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QAbstractAnimation* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractanimation_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_abstractanimation_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#state)
///
/// ``` QAbstractAnimation* self ```
int64_t q_abstractanimation_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#group)
///
/// ``` QAbstractAnimation* self ```
QAnimationGroup* q_abstractanimation_group(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#direction)
///
/// ``` QAbstractAnimation* self ```
int64_t q_abstractanimation_direction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setDirection)
///
/// ``` QAbstractAnimation* self, enum QAbstractAnimation__Direction direction ```
void q_abstractanimation_set_direction(void* self, int64_t direction);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentTime)
///
/// ``` QAbstractAnimation* self ```
int32_t q_abstractanimation_current_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopTime)
///
/// ``` QAbstractAnimation* self ```
int32_t q_abstractanimation_current_loop_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#loopCount)
///
/// ``` QAbstractAnimation* self ```
int32_t q_abstractanimation_loop_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setLoopCount)
///
/// ``` QAbstractAnimation* self, int loopCount ```
void q_abstractanimation_set_loop_count(void* self, int loopCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoop)
///
/// ``` QAbstractAnimation* self ```
int32_t q_abstractanimation_current_loop(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#duration)
///
/// ``` QAbstractAnimation* self ```
int32_t q_abstractanimation_duration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#duration)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractAnimation* self, int32_t (*slot)() ```
void q_abstractanimation_on_duration(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#duration)
///
/// Base class method implementation
///
/// ``` QAbstractAnimation* self ```
int32_t q_abstractanimation_qbase_duration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#totalDuration)
///
/// ``` QAbstractAnimation* self ```
int32_t q_abstractanimation_total_duration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
///
/// ``` QAbstractAnimation* self ```
void q_abstractanimation_finished(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
///
/// ``` QAbstractAnimation* self, void (*slot)(QAbstractAnimation*) ```
void q_abstractanimation_on_finished(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
///
/// ``` QAbstractAnimation* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_abstractanimation_state_changed(void* self, int64_t newState, int64_t oldState);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
///
/// ``` QAbstractAnimation* self, void (*slot)(QAbstractAnimation*, enum QAbstractAnimation__State, enum QAbstractAnimation__State) ```
void q_abstractanimation_on_state_changed(void* self, void (*slot)(void*, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
///
/// ``` QAbstractAnimation* self, int currentLoop ```
void q_abstractanimation_current_loop_changed(void* self, int currentLoop);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
///
/// ``` QAbstractAnimation* self, void (*slot)(QAbstractAnimation*, int) ```
void q_abstractanimation_on_current_loop_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
///
/// ``` QAbstractAnimation* self, enum QAbstractAnimation__Direction param1 ```
void q_abstractanimation_direction_changed(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
///
/// ``` QAbstractAnimation* self, void (*slot)(QAbstractAnimation*, enum QAbstractAnimation__Direction) ```
void q_abstractanimation_on_direction_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// ``` QAbstractAnimation* self ```
void q_abstractanimation_start(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#pause)
///
/// ``` QAbstractAnimation* self ```
void q_abstractanimation_pause(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#resume)
///
/// ``` QAbstractAnimation* self ```
void q_abstractanimation_resume(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setPaused)
///
/// ``` QAbstractAnimation* self, bool paused ```
void q_abstractanimation_set_paused(void* self, bool paused);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stop)
///
/// ``` QAbstractAnimation* self ```
void q_abstractanimation_stop(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setCurrentTime)
///
/// ``` QAbstractAnimation* self, int msecs ```
void q_abstractanimation_set_current_time(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#event)
///
/// ``` QAbstractAnimation* self, QEvent* event ```
bool q_abstractanimation_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractAnimation* self, bool (*slot)(QAbstractAnimation*, QEvent*) ```
void q_abstractanimation_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#event)
///
/// Base class method implementation
///
/// ``` QAbstractAnimation* self, QEvent* event ```
bool q_abstractanimation_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateCurrentTime)
///
/// ``` QAbstractAnimation* self, int currentTime ```
void q_abstractanimation_update_current_time(void* self, int currentTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateCurrentTime)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractAnimation* self, void (*slot)(QAbstractAnimation*, int) ```
void q_abstractanimation_on_update_current_time(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateCurrentTime)
///
/// Base class method implementation
///
/// ``` QAbstractAnimation* self, int currentTime ```
void q_abstractanimation_qbase_update_current_time(void* self, int currentTime);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateState)
///
/// ``` QAbstractAnimation* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_abstractanimation_update_state(void* self, int64_t newState, int64_t oldState);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateState)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractAnimation* self, void (*slot)(QAbstractAnimation*, enum QAbstractAnimation__State, enum QAbstractAnimation__State) ```
void q_abstractanimation_on_update_state(void* self, void (*slot)(void*, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateState)
///
/// Base class method implementation
///
/// ``` QAbstractAnimation* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_abstractanimation_qbase_update_state(void* self, int64_t newState, int64_t oldState);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
///
/// ``` QAbstractAnimation* self, enum QAbstractAnimation__Direction direction ```
void q_abstractanimation_update_direction(void* self, int64_t direction);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractAnimation* self, void (*slot)(QAbstractAnimation*, enum QAbstractAnimation__Direction) ```
void q_abstractanimation_on_update_direction(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
///
/// Base class method implementation
///
/// ``` QAbstractAnimation* self, enum QAbstractAnimation__Direction direction ```
void q_abstractanimation_qbase_update_direction(void* self, int64_t direction);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_abstractanimation_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_abstractanimation_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// ``` QAbstractAnimation* self, enum QAbstractAnimation__DeletionPolicy policy ```
void q_abstractanimation_start1(void* self, int64_t policy);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAbstractAnimation* self ```
const char* q_abstractanimation_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAbstractAnimation* self, char* name ```
void q_abstractanimation_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAbstractAnimation* self ```
bool q_abstractanimation_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAbstractAnimation* self ```
bool q_abstractanimation_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAbstractAnimation* self ```
bool q_abstractanimation_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAbstractAnimation* self ```
bool q_abstractanimation_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAbstractAnimation* self, bool b ```
bool q_abstractanimation_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAbstractAnimation* self ```
QThread* q_abstractanimation_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractAnimation* self, QThread* thread ```
bool q_abstractanimation_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractAnimation* self, int interval ```
int32_t q_abstractanimation_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractAnimation* self, int id ```
void q_abstractanimation_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractAnimation* self, enum Qt__TimerId id ```
void q_abstractanimation_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAbstractAnimation* self ```
libqt_list /* of QObject* */ q_abstractanimation_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAbstractAnimation* self, QObject* parent ```
void q_abstractanimation_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAbstractAnimation* self, QObject* filterObj ```
void q_abstractanimation_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAbstractAnimation* self, QObject* obj ```
void q_abstractanimation_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_abstractanimation_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractAnimation* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_abstractanimation_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_abstractanimation_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_abstractanimation_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAbstractAnimation* self ```
void q_abstractanimation_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAbstractAnimation* self ```
void q_abstractanimation_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAbstractAnimation* self, const char* name, QVariant* value ```
bool q_abstractanimation_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAbstractAnimation* self, const char* name ```
QVariant* q_abstractanimation_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAbstractAnimation* self ```
const char** q_abstractanimation_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractAnimation* self ```
QBindingStorage* q_abstractanimation_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractAnimation* self ```
const QBindingStorage* q_abstractanimation_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractAnimation* self ```
void q_abstractanimation_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractAnimation* self, void (*slot)(QAbstractAnimation*) ```
void q_abstractanimation_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAbstractAnimation* self ```
QObject* q_abstractanimation_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAbstractAnimation* self, const char* classname ```
bool q_abstractanimation_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAbstractAnimation* self ```
void q_abstractanimation_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractAnimation* self, QThread* thread, Disambiguated_t* param2 ```
bool q_abstractanimation_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractAnimation* self, int interval, enum Qt__TimerType timerType ```
int32_t q_abstractanimation_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractanimation_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractAnimation* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractanimation_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractAnimation* self, QObject* param1 ```
void q_abstractanimation_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractAnimation* self, void (*slot)(QAbstractAnimation*, QObject*) ```
void q_abstractanimation_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractAnimation* self, QObject* watched, QEvent* event ```
bool q_abstractanimation_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractAnimation* self, QObject* watched, QEvent* event ```
bool q_abstractanimation_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractAnimation* self, bool (*slot)(QAbstractAnimation*, QObject*, QEvent*) ```
void q_abstractanimation_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractAnimation* self, QTimerEvent* event ```
void q_abstractanimation_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractAnimation* self, QTimerEvent* event ```
void q_abstractanimation_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractAnimation* self, void (*slot)(QAbstractAnimation*, QTimerEvent*) ```
void q_abstractanimation_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractAnimation* self, QChildEvent* event ```
void q_abstractanimation_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractAnimation* self, QChildEvent* event ```
void q_abstractanimation_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractAnimation* self, void (*slot)(QAbstractAnimation*, QChildEvent*) ```
void q_abstractanimation_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractAnimation* self, QEvent* event ```
void q_abstractanimation_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractAnimation* self, QEvent* event ```
void q_abstractanimation_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractAnimation* self, void (*slot)(QAbstractAnimation*, QEvent*) ```
void q_abstractanimation_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractAnimation* self, QMetaMethod* signal ```
void q_abstractanimation_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractAnimation* self, QMetaMethod* signal ```
void q_abstractanimation_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractAnimation* self, void (*slot)(QAbstractAnimation*, QMetaMethod*) ```
void q_abstractanimation_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractAnimation* self, QMetaMethod* signal ```
void q_abstractanimation_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractAnimation* self, QMetaMethod* signal ```
void q_abstractanimation_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractAnimation* self, void (*slot)(QAbstractAnimation*, QMetaMethod*) ```
void q_abstractanimation_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractAnimation* self ```
QObject* q_abstractanimation_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractAnimation* self ```
QObject* q_abstractanimation_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractAnimation* self, QObject* (*slot)() ```
void q_abstractanimation_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractAnimation* self ```
int32_t q_abstractanimation_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractAnimation* self ```
int32_t q_abstractanimation_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractAnimation* self, int32_t (*slot)() ```
void q_abstractanimation_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractAnimation* self, const char* signal ```
int32_t q_abstractanimation_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractAnimation* self, const char* signal ```
int32_t q_abstractanimation_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractAnimation* self, int32_t (*slot)(QAbstractAnimation*, const char*) ```
void q_abstractanimation_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractAnimation* self, QMetaMethod* signal ```
bool q_abstractanimation_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractAnimation* self, QMetaMethod* signal ```
bool q_abstractanimation_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractAnimation* self, bool (*slot)(QAbstractAnimation*, QMetaMethod*) ```
void q_abstractanimation_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractAnimation* self, void (*slot)(QAbstractAnimation*, const char*) ```
void q_abstractanimation_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#dtor.QAbstractAnimation)
///
/// Delete this object from C++ memory.
///
/// ``` QAbstractAnimation* self ```
void q_abstractanimation_delete(void* self);

/// https://doc.qt.io/qt-6/qanimationdriver.html

/// q_animationdriver_new constructs a new QAnimationDriver object.
///
///
QAnimationDriver* q_animationdriver_new();

/// q_animationdriver_new2 constructs a new QAnimationDriver object.
///
/// ``` QObject* parent ```
QAnimationDriver* q_animationdriver_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAnimationDriver* self ```
const QMetaObject* q_animationdriver_meta_object(void* self);

/// ``` QAnimationDriver* self, const char* param1 ```
void* q_animationdriver_metacast(void* self, const char* param1);

/// ``` QAnimationDriver* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_animationdriver_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QAnimationDriver* self, int32_t (*slot)(QAnimationDriver*, enum QMetaObject__Call, int, void*) ```
void q_animationdriver_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QAnimationDriver* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_animationdriver_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_animationdriver_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationdriver.html#advance)
///
/// ``` QAnimationDriver* self ```
void q_animationdriver_advance(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationdriver.html#advance)
///
/// Allows for overriding the related default method
///
/// ``` QAnimationDriver* self, void (*slot)() ```
void q_animationdriver_on_advance(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationdriver.html#advance)
///
/// Base class method implementation
///
/// ``` QAnimationDriver* self ```
void q_animationdriver_qbase_advance(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationdriver.html#install)
///
/// ``` QAnimationDriver* self ```
void q_animationdriver_install(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationdriver.html#uninstall)
///
/// ``` QAnimationDriver* self ```
void q_animationdriver_uninstall(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationdriver.html#isRunning)
///
/// ``` QAnimationDriver* self ```
bool q_animationdriver_is_running(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationdriver.html#elapsed)
///
/// ``` QAnimationDriver* self ```
long long q_animationdriver_elapsed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationdriver.html#elapsed)
///
/// Allows for overriding the related default method
///
/// ``` QAnimationDriver* self, long long (*slot)() ```
void q_animationdriver_on_elapsed(void* self, long long (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationdriver.html#elapsed)
///
/// Base class method implementation
///
/// ``` QAnimationDriver* self ```
long long q_animationdriver_qbase_elapsed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationdriver.html#started)
///
/// ``` QAnimationDriver* self ```
void q_animationdriver_started(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationdriver.html#started)
///
/// ``` QAnimationDriver* self, void (*slot)(QAnimationDriver*) ```
void q_animationdriver_on_started(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationdriver.html#stopped)
///
/// ``` QAnimationDriver* self ```
void q_animationdriver_stopped(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationdriver.html#stopped)
///
/// ``` QAnimationDriver* self, void (*slot)(QAnimationDriver*) ```
void q_animationdriver_on_stopped(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationdriver.html#advanceAnimation)
///
/// ``` QAnimationDriver* self ```
void q_animationdriver_advance_animation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationdriver.html#advanceAnimation)
///
/// Allows for overriding the related default method
///
/// ``` QAnimationDriver* self, void (*slot)() ```
void q_animationdriver_on_advance_animation(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationdriver.html#advanceAnimation)
///
/// Base class method implementation
///
/// ``` QAnimationDriver* self ```
void q_animationdriver_qbase_advance_animation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationdriver.html#start)
///
/// ``` QAnimationDriver* self ```
void q_animationdriver_start(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationdriver.html#start)
///
/// Allows for overriding the related default method
///
/// ``` QAnimationDriver* self, void (*slot)() ```
void q_animationdriver_on_start(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationdriver.html#start)
///
/// Base class method implementation
///
/// ``` QAnimationDriver* self ```
void q_animationdriver_qbase_start(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationdriver.html#stop)
///
/// ``` QAnimationDriver* self ```
void q_animationdriver_stop(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationdriver.html#stop)
///
/// Allows for overriding the related default method
///
/// ``` QAnimationDriver* self, void (*slot)() ```
void q_animationdriver_on_stop(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationdriver.html#stop)
///
/// Base class method implementation
///
/// ``` QAnimationDriver* self ```
void q_animationdriver_qbase_stop(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_animationdriver_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_animationdriver_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAnimationDriver* self ```
const char* q_animationdriver_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAnimationDriver* self, char* name ```
void q_animationdriver_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAnimationDriver* self ```
bool q_animationdriver_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAnimationDriver* self ```
bool q_animationdriver_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAnimationDriver* self ```
bool q_animationdriver_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAnimationDriver* self ```
bool q_animationdriver_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAnimationDriver* self, bool b ```
bool q_animationdriver_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAnimationDriver* self ```
QThread* q_animationdriver_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAnimationDriver* self, QThread* thread ```
bool q_animationdriver_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAnimationDriver* self, int interval ```
int32_t q_animationdriver_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAnimationDriver* self, int id ```
void q_animationdriver_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAnimationDriver* self, enum Qt__TimerId id ```
void q_animationdriver_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAnimationDriver* self ```
libqt_list /* of QObject* */ q_animationdriver_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QAnimationDriver* self, QObject* parent ```
void q_animationdriver_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAnimationDriver* self, QObject* filterObj ```
void q_animationdriver_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAnimationDriver* self, QObject* obj ```
void q_animationdriver_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_animationdriver_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAnimationDriver* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_animationdriver_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_animationdriver_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_animationdriver_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAnimationDriver* self ```
void q_animationdriver_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAnimationDriver* self ```
void q_animationdriver_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAnimationDriver* self, const char* name, QVariant* value ```
bool q_animationdriver_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAnimationDriver* self, const char* name ```
QVariant* q_animationdriver_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAnimationDriver* self ```
const char** q_animationdriver_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAnimationDriver* self ```
QBindingStorage* q_animationdriver_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAnimationDriver* self ```
const QBindingStorage* q_animationdriver_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAnimationDriver* self ```
void q_animationdriver_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAnimationDriver* self, void (*slot)(QAnimationDriver*) ```
void q_animationdriver_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAnimationDriver* self ```
QObject* q_animationdriver_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAnimationDriver* self, const char* classname ```
bool q_animationdriver_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAnimationDriver* self ```
void q_animationdriver_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAnimationDriver* self, QThread* thread, Disambiguated_t* param2 ```
bool q_animationdriver_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAnimationDriver* self, int interval, enum Qt__TimerType timerType ```
int32_t q_animationdriver_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_animationdriver_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAnimationDriver* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_animationdriver_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAnimationDriver* self, QObject* param1 ```
void q_animationdriver_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAnimationDriver* self, void (*slot)(QAnimationDriver*, QObject*) ```
void q_animationdriver_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationDriver* self, QEvent* event ```
bool q_animationdriver_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationDriver* self, QEvent* event ```
bool q_animationdriver_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationDriver* self, bool (*slot)(QAnimationDriver*, QEvent*) ```
void q_animationdriver_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationDriver* self, QObject* watched, QEvent* event ```
bool q_animationdriver_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationDriver* self, QObject* watched, QEvent* event ```
bool q_animationdriver_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationDriver* self, bool (*slot)(QAnimationDriver*, QObject*, QEvent*) ```
void q_animationdriver_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationDriver* self, QTimerEvent* event ```
void q_animationdriver_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationDriver* self, QTimerEvent* event ```
void q_animationdriver_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationDriver* self, void (*slot)(QAnimationDriver*, QTimerEvent*) ```
void q_animationdriver_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationDriver* self, QChildEvent* event ```
void q_animationdriver_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationDriver* self, QChildEvent* event ```
void q_animationdriver_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationDriver* self, void (*slot)(QAnimationDriver*, QChildEvent*) ```
void q_animationdriver_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationDriver* self, QEvent* event ```
void q_animationdriver_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationDriver* self, QEvent* event ```
void q_animationdriver_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationDriver* self, void (*slot)(QAnimationDriver*, QEvent*) ```
void q_animationdriver_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationDriver* self, QMetaMethod* signal ```
void q_animationdriver_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationDriver* self, QMetaMethod* signal ```
void q_animationdriver_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationDriver* self, void (*slot)(QAnimationDriver*, QMetaMethod*) ```
void q_animationdriver_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationDriver* self, QMetaMethod* signal ```
void q_animationdriver_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationDriver* self, QMetaMethod* signal ```
void q_animationdriver_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationDriver* self, void (*slot)(QAnimationDriver*, QMetaMethod*) ```
void q_animationdriver_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationDriver* self ```
QObject* q_animationdriver_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationDriver* self ```
QObject* q_animationdriver_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationDriver* self, QObject* (*slot)() ```
void q_animationdriver_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationDriver* self ```
int32_t q_animationdriver_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationDriver* self ```
int32_t q_animationdriver_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationDriver* self, int32_t (*slot)() ```
void q_animationdriver_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationDriver* self, const char* signal ```
int32_t q_animationdriver_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationDriver* self, const char* signal ```
int32_t q_animationdriver_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationDriver* self, int32_t (*slot)(QAnimationDriver*, const char*) ```
void q_animationdriver_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAnimationDriver* self, QMetaMethod* signal ```
bool q_animationdriver_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAnimationDriver* self, QMetaMethod* signal ```
bool q_animationdriver_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAnimationDriver* self, bool (*slot)(QAnimationDriver*, QMetaMethod*) ```
void q_animationdriver_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QAnimationDriver* self, void (*slot)(QAnimationDriver*, const char*) ```
void q_animationdriver_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qanimationdriver.html#dtor.QAnimationDriver)
///
/// Delete this object from C++ memory.
///
/// ``` QAnimationDriver* self ```
void q_animationdriver_delete(void* self);

/// https://doc.qt.io/qt-6/qabstractanimation.html#types

typedef enum {
    QABSTRACTANIMATION_DIRECTION_FORWARD = 0,
    QABSTRACTANIMATION_DIRECTION_BACKWARD = 1
} QAbstractAnimation__Direction;

typedef enum {
    QABSTRACTANIMATION_STATE_STOPPED = 0,
    QABSTRACTANIMATION_STATE_PAUSED = 1,
    QABSTRACTANIMATION_STATE_RUNNING = 2
} QAbstractAnimation__State;

typedef enum {
    QABSTRACTANIMATION_DELETIONPOLICY_KEEPWHENSTOPPED = 0,
    QABSTRACTANIMATION_DELETIONPOLICY_DELETEWHENSTOPPED = 1
} QAbstractAnimation__DeletionPolicy;

#endif
