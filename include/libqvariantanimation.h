#pragma once
#ifndef SRCQT6C_LIBQVARIANTANIMATION_H
#define SRCQT6C_LIBQVARIANTANIMATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qvariantanimation.html

/// q_variantanimation_new constructs a new QVariantAnimation object.
///
///
QVariantAnimation* q_variantanimation_new();

/// q_variantanimation_new2 constructs a new QVariantAnimation object.
///
/// ``` QObject* parent ```
QVariantAnimation* q_variantanimation_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QVariantAnimation* self ```
const QMetaObject* q_variantanimation_meta_object(void* self);

/// ``` QVariantAnimation* self, const char* param1 ```
void* q_variantanimation_metacast(void* self, const char* param1);

/// ``` QVariantAnimation* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_variantanimation_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QVariantAnimation* self, int32_t (*slot)(QVariantAnimation*, enum QMetaObject__Call, int, void*) ```
void q_variantanimation_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QVariantAnimation* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_variantanimation_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_variantanimation_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#startValue)
///
/// ``` QVariantAnimation* self ```
QVariant* q_variantanimation_start_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setStartValue)
///
/// ``` QVariantAnimation* self, QVariant* value ```
void q_variantanimation_set_start_value(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#endValue)
///
/// ``` QVariantAnimation* self ```
QVariant* q_variantanimation_end_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setEndValue)
///
/// ``` QVariantAnimation* self, QVariant* value ```
void q_variantanimation_set_end_value(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#keyValueAt)
///
/// ``` QVariantAnimation* self, double step ```
QVariant* q_variantanimation_key_value_at(void* self, double step);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setKeyValueAt)
///
/// ``` QVariantAnimation* self, double step, QVariant* value ```
void q_variantanimation_set_key_value_at(void* self, double step, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#keyValues)
///
/// ``` QVariantAnimation* self ```
libqt_list /* of libqt_pair  tuple of double and QVariant*  */ q_variantanimation_key_values(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setKeyValues)
///
/// ``` QVariantAnimation* self, libqt_list /* of libqt_pair  tuple of double and QVariant*  */ values ```
void q_variantanimation_set_key_values(void* self, libqt_list /* of libqt_pair  tuple of double and QVariant*  */ values);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#currentValue)
///
/// ``` QVariantAnimation* self ```
QVariant* q_variantanimation_current_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#duration)
///
/// ``` QVariantAnimation* self ```
int32_t q_variantanimation_duration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#duration)
///
/// Allows for overriding the related default method
///
/// ``` QVariantAnimation* self, int32_t (*slot)() ```
void q_variantanimation_on_duration(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#duration)
///
/// Base class method implementation
///
/// ``` QVariantAnimation* self ```
int32_t q_variantanimation_qbase_duration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setDuration)
///
/// ``` QVariantAnimation* self, int msecs ```
void q_variantanimation_set_duration(void* self, int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#easingCurve)
///
/// ``` QVariantAnimation* self ```
QEasingCurve* q_variantanimation_easing_curve(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#setEasingCurve)
///
/// ``` QVariantAnimation* self, QEasingCurve* easing ```
void q_variantanimation_set_easing_curve(void* self, void* easing);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#valueChanged)
///
/// ``` QVariantAnimation* self, QVariant* value ```
void q_variantanimation_value_changed(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#valueChanged)
///
/// ``` QVariantAnimation* self, void (*slot)(QVariantAnimation*, QVariant*) ```
void q_variantanimation_on_value_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#event)
///
/// ``` QVariantAnimation* self, QEvent* event ```
bool q_variantanimation_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QVariantAnimation* self, bool (*slot)(QVariantAnimation*, QEvent*) ```
void q_variantanimation_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#event)
///
/// Base class method implementation
///
/// ``` QVariantAnimation* self, QEvent* event ```
bool q_variantanimation_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#updateCurrentTime)
///
/// ``` QVariantAnimation* self, int param1 ```
void q_variantanimation_update_current_time(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#updateCurrentTime)
///
/// Allows for overriding the related default method
///
/// ``` QVariantAnimation* self, void (*slot)(QVariantAnimation*, int) ```
void q_variantanimation_on_update_current_time(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#updateCurrentTime)
///
/// Base class method implementation
///
/// ``` QVariantAnimation* self, int param1 ```
void q_variantanimation_qbase_update_current_time(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#updateState)
///
/// ``` QVariantAnimation* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_variantanimation_update_state(void* self, int64_t newState, int64_t oldState);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#updateState)
///
/// Allows for overriding the related default method
///
/// ``` QVariantAnimation* self, void (*slot)(QVariantAnimation*, enum QAbstractAnimation__State, enum QAbstractAnimation__State) ```
void q_variantanimation_on_update_state(void* self, void (*slot)(void*, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#updateState)
///
/// Base class method implementation
///
/// ``` QVariantAnimation* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_variantanimation_qbase_update_state(void* self, int64_t newState, int64_t oldState);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#updateCurrentValue)
///
/// ``` QVariantAnimation* self, QVariant* value ```
void q_variantanimation_update_current_value(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#updateCurrentValue)
///
/// Allows for overriding the related default method
///
/// ``` QVariantAnimation* self, void (*slot)(QVariantAnimation*, QVariant*) ```
void q_variantanimation_on_update_current_value(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#updateCurrentValue)
///
/// Base class method implementation
///
/// ``` QVariantAnimation* self, QVariant* value ```
void q_variantanimation_qbase_update_current_value(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#interpolated)
///
/// ``` QVariantAnimation* self, QVariant* from, QVariant* to, double progress ```
QVariant* q_variantanimation_interpolated(void* self, void* from, void* to, double progress);

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#interpolated)
///
/// Allows for overriding the related default method
///
/// ``` QVariantAnimation* self, QVariant* (*slot)(QVariantAnimation*, QVariant*, QVariant*, double) ```
void q_variantanimation_on_interpolated(void* self, QVariant* (*slot)(void*, void*, void*, double));

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#interpolated)
///
/// Base class method implementation
///
/// ``` QVariantAnimation* self, QVariant* from, QVariant* to, double progress ```
QVariant* q_variantanimation_qbase_interpolated(void* self, void* from, void* to, double progress);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_variantanimation_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_variantanimation_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#state)
///
/// ``` QVariantAnimation* self ```
int64_t q_variantanimation_state(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#group)
///
/// ``` QVariantAnimation* self ```
QAnimationGroup* q_variantanimation_group(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#direction)
///
/// ``` QVariantAnimation* self ```
int64_t q_variantanimation_direction(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setDirection)
///
/// ``` QVariantAnimation* self, enum QAbstractAnimation__Direction direction ```
void q_variantanimation_set_direction(void* self, int64_t direction);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentTime)
///
/// ``` QVariantAnimation* self ```
int32_t q_variantanimation_current_time(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopTime)
///
/// ``` QVariantAnimation* self ```
int32_t q_variantanimation_current_loop_time(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#loopCount)
///
/// ``` QVariantAnimation* self ```
int32_t q_variantanimation_loop_count(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setLoopCount)
///
/// ``` QVariantAnimation* self, int loopCount ```
void q_variantanimation_set_loop_count(void* self, int loopCount);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoop)
///
/// ``` QVariantAnimation* self ```
int32_t q_variantanimation_current_loop(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#totalDuration)
///
/// ``` QVariantAnimation* self ```
int32_t q_variantanimation_total_duration(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
///
/// ``` QVariantAnimation* self ```
void q_variantanimation_finished(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
///
/// ``` QVariantAnimation* self, void (*slot)(QVariantAnimation*) ```
void q_variantanimation_on_finished(void* self, void (*slot)(void*));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
///
/// ``` QVariantAnimation* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState ```
void q_variantanimation_state_changed(void* self, int64_t newState, int64_t oldState);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
///
/// ``` QVariantAnimation* self, void (*slot)(QVariantAnimation*, enum QAbstractAnimation__State, enum QAbstractAnimation__State) ```
void q_variantanimation_on_state_changed(void* self, void (*slot)(void*, int64_t, int64_t));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
///
/// ``` QVariantAnimation* self, int currentLoop ```
void q_variantanimation_current_loop_changed(void* self, int currentLoop);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
///
/// ``` QVariantAnimation* self, void (*slot)(QVariantAnimation*, int) ```
void q_variantanimation_on_current_loop_changed(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
///
/// ``` QVariantAnimation* self, enum QAbstractAnimation__Direction param1 ```
void q_variantanimation_direction_changed(void* self, int64_t param1);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
///
/// ``` QVariantAnimation* self, void (*slot)(QVariantAnimation*, enum QAbstractAnimation__Direction) ```
void q_variantanimation_on_direction_changed(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// ``` QVariantAnimation* self ```
void q_variantanimation_start(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#pause)
///
/// ``` QVariantAnimation* self ```
void q_variantanimation_pause(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#resume)
///
/// ``` QVariantAnimation* self ```
void q_variantanimation_resume(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setPaused)
///
/// ``` QVariantAnimation* self, bool paused ```
void q_variantanimation_set_paused(void* self, bool paused);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#stop)
///
/// ``` QVariantAnimation* self ```
void q_variantanimation_stop(void* self);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#setCurrentTime)
///
/// ``` QVariantAnimation* self, int msecs ```
void q_variantanimation_set_current_time(void* self, int msecs);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// ``` QVariantAnimation* self, enum QAbstractAnimation__DeletionPolicy policy ```
void q_variantanimation_start1(void* self, int64_t policy);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QVariantAnimation* self ```
const char* q_variantanimation_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QVariantAnimation* self, char* name ```
void q_variantanimation_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QVariantAnimation* self ```
bool q_variantanimation_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QVariantAnimation* self ```
bool q_variantanimation_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QVariantAnimation* self ```
bool q_variantanimation_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QVariantAnimation* self ```
bool q_variantanimation_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QVariantAnimation* self, bool b ```
bool q_variantanimation_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QVariantAnimation* self ```
QThread* q_variantanimation_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QVariantAnimation* self, QThread* thread ```
bool q_variantanimation_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QVariantAnimation* self, int interval ```
int32_t q_variantanimation_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QVariantAnimation* self, int id ```
void q_variantanimation_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QVariantAnimation* self, enum Qt__TimerId id ```
void q_variantanimation_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QVariantAnimation* self ```
libqt_list /* of QObject* */ q_variantanimation_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QVariantAnimation* self, QObject* parent ```
void q_variantanimation_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QVariantAnimation* self, QObject* filterObj ```
void q_variantanimation_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QVariantAnimation* self, QObject* obj ```
void q_variantanimation_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_variantanimation_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QVariantAnimation* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_variantanimation_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_variantanimation_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_variantanimation_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QVariantAnimation* self ```
void q_variantanimation_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QVariantAnimation* self ```
void q_variantanimation_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QVariantAnimation* self, const char* name, QVariant* value ```
bool q_variantanimation_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QVariantAnimation* self, const char* name ```
QVariant* q_variantanimation_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QVariantAnimation* self ```
const char** q_variantanimation_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QVariantAnimation* self ```
QBindingStorage* q_variantanimation_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QVariantAnimation* self ```
const QBindingStorage* q_variantanimation_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVariantAnimation* self ```
void q_variantanimation_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVariantAnimation* self, void (*slot)(QVariantAnimation*) ```
void q_variantanimation_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QVariantAnimation* self ```
QObject* q_variantanimation_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QVariantAnimation* self, const char* classname ```
bool q_variantanimation_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QVariantAnimation* self ```
void q_variantanimation_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QVariantAnimation* self, QThread* thread, Disambiguated_t* param2 ```
bool q_variantanimation_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QVariantAnimation* self, int interval, enum Qt__TimerType timerType ```
int32_t q_variantanimation_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_variantanimation_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QVariantAnimation* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_variantanimation_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVariantAnimation* self, QObject* param1 ```
void q_variantanimation_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QVariantAnimation* self, void (*slot)(QVariantAnimation*, QObject*) ```
void q_variantanimation_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVariantAnimation* self, enum QAbstractAnimation__Direction direction ```
void q_variantanimation_update_direction(void* self, int64_t direction);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVariantAnimation* self, enum QAbstractAnimation__Direction direction ```
void q_variantanimation_qbase_update_direction(void* self, int64_t direction);

/// Inherited from QAbstractAnimation
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVariantAnimation* self, void (*slot)(QVariantAnimation*, enum QAbstractAnimation__Direction) ```
void q_variantanimation_on_update_direction(void* self, void (*slot)(void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVariantAnimation* self, QObject* watched, QEvent* event ```
bool q_variantanimation_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVariantAnimation* self, QObject* watched, QEvent* event ```
bool q_variantanimation_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVariantAnimation* self, bool (*slot)(QVariantAnimation*, QObject*, QEvent*) ```
void q_variantanimation_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVariantAnimation* self, QTimerEvent* event ```
void q_variantanimation_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVariantAnimation* self, QTimerEvent* event ```
void q_variantanimation_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVariantAnimation* self, void (*slot)(QVariantAnimation*, QTimerEvent*) ```
void q_variantanimation_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVariantAnimation* self, QChildEvent* event ```
void q_variantanimation_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVariantAnimation* self, QChildEvent* event ```
void q_variantanimation_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVariantAnimation* self, void (*slot)(QVariantAnimation*, QChildEvent*) ```
void q_variantanimation_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVariantAnimation* self, QEvent* event ```
void q_variantanimation_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVariantAnimation* self, QEvent* event ```
void q_variantanimation_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVariantAnimation* self, void (*slot)(QVariantAnimation*, QEvent*) ```
void q_variantanimation_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVariantAnimation* self, QMetaMethod* signal ```
void q_variantanimation_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVariantAnimation* self, QMetaMethod* signal ```
void q_variantanimation_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVariantAnimation* self, void (*slot)(QVariantAnimation*, QMetaMethod*) ```
void q_variantanimation_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVariantAnimation* self, QMetaMethod* signal ```
void q_variantanimation_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVariantAnimation* self, QMetaMethod* signal ```
void q_variantanimation_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVariantAnimation* self, void (*slot)(QVariantAnimation*, QMetaMethod*) ```
void q_variantanimation_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVariantAnimation* self ```
QObject* q_variantanimation_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVariantAnimation* self ```
QObject* q_variantanimation_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVariantAnimation* self, QObject* (*slot)() ```
void q_variantanimation_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVariantAnimation* self ```
int32_t q_variantanimation_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVariantAnimation* self ```
int32_t q_variantanimation_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVariantAnimation* self, int32_t (*slot)() ```
void q_variantanimation_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVariantAnimation* self, const char* signal ```
int32_t q_variantanimation_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVariantAnimation* self, const char* signal ```
int32_t q_variantanimation_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVariantAnimation* self, int32_t (*slot)(QVariantAnimation*, const char*) ```
void q_variantanimation_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QVariantAnimation* self, QMetaMethod* signal ```
bool q_variantanimation_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QVariantAnimation* self, QMetaMethod* signal ```
bool q_variantanimation_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QVariantAnimation* self, bool (*slot)(QVariantAnimation*, QMetaMethod*) ```
void q_variantanimation_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QVariantAnimation* self, void (*slot)(QVariantAnimation*, const char*) ```
void q_variantanimation_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qvariantanimation.html#dtor.QVariantAnimation)
///
/// Delete this object from C++ memory.
///
/// ``` QVariantAnimation* self ```
void q_variantanimation_delete(void* self);

#endif
