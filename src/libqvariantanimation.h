#pragma once
#ifndef LIBQVARIANTANIMATION_H
#define LIBQVARIANTANIMATION_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

struct pair_double_qvariant;

typedef struct pair_double_qvariant pair_double_qvariant;

#ifndef PAIR_DOUBLE_QVARIANT
#define PAIR_DOUBLE_QVARIANT
struct pair_double_qvariant {
    double first;
    QVariant* second;
};
#endif

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html)

/// q_variantanimation_new constructs a new QVariantAnimation object.
///
QVariantAnimation* q_variantanimation_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html)

/// q_variantanimation_new2 constructs a new QVariantAnimation object.
///
/// @param parent QObject*
///
QVariantAnimation* q_variantanimation_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QVariantAnimation*
///
const QMetaObject* q_variantanimation_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QVariantAnimation*
/// @param callback const QMetaObject* func(const QVariantAnimation* self)
///
void q_variantanimation_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QVariantAnimation*
///
const QMetaObject* q_variantanimation_super_meta_object(const void* self);

/// @param self QVariantAnimation*
/// @param param1 const char*
///
void* q_variantanimation_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QVariantAnimation*
/// @param callback void* func(QVariantAnimation* self, const char* param1)
///
void q_variantanimation_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QVariantAnimation*
/// @param param1 const char*
///
void* q_variantanimation_super_metacast(void* self, const char* param1);

/// @param self QVariantAnimation*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_variantanimation_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QVariantAnimation*
/// @param callback int32_t func(QVariantAnimation* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_variantanimation_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QVariantAnimation*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_variantanimation_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_variantanimation_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#startValue)
///
/// @param self const QVariantAnimation*
///
QVariant* q_variantanimation_start_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#setStartValue)
///
/// @param self QVariantAnimation*
/// @param value QVariant*
///
void q_variantanimation_set_start_value(void* self, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#endValue)
///
/// @param self const QVariantAnimation*
///
QVariant* q_variantanimation_end_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#setEndValue)
///
/// @param self QVariantAnimation*
/// @param value QVariant*
///
void q_variantanimation_set_end_value(void* self, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#keyValueAt)
///
/// @param self const QVariantAnimation*
/// @param step double
///
QVariant* q_variantanimation_key_value_at(const void* self, double step);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#setKeyValueAt)
///
/// @param self QVariantAnimation*
/// @param step double
/// @param value QVariant*
///
void q_variantanimation_set_key_value_at(void* self, double step, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#keyValues)
///
/// @param self const QVariantAnimation*
///
/// @return libqt_list of pair_double_qvariant tuple of double and QVariant*
///
libqt_list q_variantanimation_key_values(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#setKeyValues)
///
/// @param self QVariantAnimation*
/// @param values libqt_list of pair_double_qvariant tuple of double and QVariant*
///
void q_variantanimation_set_key_values(void* self, libqt_list values);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#currentValue)
///
/// @param self const QVariantAnimation*
///
QVariant* q_variantanimation_current_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#duration)
///
/// @param self const QVariantAnimation*
///
int32_t q_variantanimation_duration(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#duration)
///
/// Allows for overriding the related default method
///
/// @param self QVariantAnimation*
/// @param callback int32_t func(const QVariantAnimation* self)
///
void q_variantanimation_on_duration(void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#duration)
///
/// Base class method implementation
///
/// @param self const QVariantAnimation*
///
int32_t q_variantanimation_super_duration(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#setDuration)
///
/// @param self QVariantAnimation*
/// @param msecs int
///
void q_variantanimation_set_duration(void* self, int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#easingCurve)
///
/// @param self const QVariantAnimation*
///
QEasingCurve* q_variantanimation_easing_curve(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#setEasingCurve)
///
/// @param self QVariantAnimation*
/// @param easing QEasingCurve*
///
void q_variantanimation_set_easing_curve(void* self, const void* easing);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#valueChanged)
///
/// @param self QVariantAnimation*
/// @param value QVariant*
///
void q_variantanimation_value_changed(void* self, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#valueChanged)
///
/// @param self QVariantAnimation*
/// @param callback void func(QVariantAnimation* self, QVariant* value)
///
void q_variantanimation_on_value_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#event)
///
/// @param self QVariantAnimation*
/// @param event QEvent*
///
bool q_variantanimation_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QVariantAnimation*
/// @param callback bool func(QVariantAnimation* self, QEvent* event)
///
void q_variantanimation_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#event)
///
/// Base class method implementation
///
/// @param self QVariantAnimation*
/// @param event QEvent*
///
bool q_variantanimation_super_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#updateCurrentTime)
///
/// @param self QVariantAnimation*
/// @param param1 int
///
void q_variantanimation_update_current_time(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#updateCurrentTime)
///
/// Allows for overriding the related default method
///
/// @param self QVariantAnimation*
/// @param callback void func(QVariantAnimation* self, int param1)
///
void q_variantanimation_on_update_current_time(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#updateCurrentTime)
///
/// Base class method implementation
///
/// @param self QVariantAnimation*
/// @param param1 int
///
void q_variantanimation_super_update_current_time(void* self, int param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#updateState)
///
/// @param self QVariantAnimation*
/// @param newState enum QAbstractAnimation__State
/// @param oldState enum QAbstractAnimation__State
///
void q_variantanimation_update_state(void* self, int32_t newState, int32_t oldState);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#updateState)
///
/// Allows for overriding the related default method
///
/// @param self QVariantAnimation*
/// @param callback void func(QVariantAnimation* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState)
///
void q_variantanimation_on_update_state(void* self, void (*callback)(void*, int32_t, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#updateState)
///
/// Base class method implementation
///
/// @param self QVariantAnimation*
/// @param newState enum QAbstractAnimation__State
/// @param oldState enum QAbstractAnimation__State
///
void q_variantanimation_super_update_state(void* self, int32_t newState, int32_t oldState);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#updateCurrentValue)
///
/// @param self QVariantAnimation*
/// @param value QVariant*
///
void q_variantanimation_update_current_value(void* self, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#updateCurrentValue)
///
/// Allows for overriding the related default method
///
/// @param self QVariantAnimation*
/// @param callback void func(QVariantAnimation* self, QVariant* value)
///
void q_variantanimation_on_update_current_value(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#updateCurrentValue)
///
/// Base class method implementation
///
/// @param self QVariantAnimation*
/// @param value QVariant*
///
void q_variantanimation_super_update_current_value(void* self, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#interpolated)
///
/// @param self const QVariantAnimation*
/// @param from QVariant*
/// @param to QVariant*
/// @param progress double
///
QVariant* q_variantanimation_interpolated(const void* self, const void* from, const void* to, double progress);

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#interpolated)
///
/// Allows for overriding the related default method
///
/// @param self QVariantAnimation*
/// @param callback QVariant* func(const QVariantAnimation* self, QVariant* from, QVariant* to, double progress)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_variantanimation_on_interpolated(void* self, QVariant* (*callback)(const void*, const void*, const void*, double));

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#interpolated)
///
/// Base class method implementation
///
/// @param self const QVariantAnimation*
/// @param from QVariant*
/// @param to QVariant*
/// @param progress double
///
QVariant* q_variantanimation_super_interpolated(const void* self, const void* from, const void* to, double progress);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_variantanimation_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_variantanimation_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#state)
///
/// @param self const QVariantAnimation*
///
/// @return enum QAbstractAnimation__State
///
int32_t q_variantanimation_state(const void* self);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#group)
///
/// @param self const QVariantAnimation*
///
QAnimationGroup* q_variantanimation_group(const void* self);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#direction)
///
/// @param self const QVariantAnimation*
///
/// @return enum QAbstractAnimation__Direction
///
int32_t q_variantanimation_direction(const void* self);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setDirection)
///
/// @param self QVariantAnimation*
/// @param direction enum QAbstractAnimation__Direction
///
void q_variantanimation_set_direction(void* self, int32_t direction);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentTime)
///
/// @param self const QVariantAnimation*
///
int32_t q_variantanimation_current_time(const void* self);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopTime)
///
/// @param self const QVariantAnimation*
///
int32_t q_variantanimation_current_loop_time(const void* self);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#loopCount)
///
/// @param self const QVariantAnimation*
///
int32_t q_variantanimation_loop_count(const void* self);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setLoopCount)
///
/// @param self QVariantAnimation*
/// @param loopCount int
///
void q_variantanimation_set_loop_count(void* self, int loopCount);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoop)
///
/// @param self const QVariantAnimation*
///
int32_t q_variantanimation_current_loop(const void* self);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#totalDuration)
///
/// @param self const QVariantAnimation*
///
int32_t q_variantanimation_total_duration(const void* self);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
///
/// @param self QVariantAnimation*
///
void q_variantanimation_finished(void* self);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#finished)
///
/// @param self QVariantAnimation*
/// @param callback void func(QVariantAnimation* self)
///
void q_variantanimation_on_finished(void* self, void (*callback)(void*));

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
///
/// @param self QVariantAnimation*
/// @param newState enum QAbstractAnimation__State
/// @param oldState enum QAbstractAnimation__State
///
void q_variantanimation_state_changed(void* self, int32_t newState, int32_t oldState);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#stateChanged)
///
/// @param self QVariantAnimation*
/// @param callback void func(QVariantAnimation* self, enum QAbstractAnimation__State newState, enum QAbstractAnimation__State oldState)
///
void q_variantanimation_on_state_changed(void* self, void (*callback)(void*, int32_t, int32_t));

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
///
/// @param self QVariantAnimation*
/// @param currentLoop int
///
void q_variantanimation_current_loop_changed(void* self, int currentLoop);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#currentLoopChanged)
///
/// @param self QVariantAnimation*
/// @param callback void func(QVariantAnimation* self, int currentLoop)
///
void q_variantanimation_on_current_loop_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
///
/// @param self QVariantAnimation*
/// @param param1 enum QAbstractAnimation__Direction
///
void q_variantanimation_direction_changed(void* self, int32_t param1);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#directionChanged)
///
/// @param self QVariantAnimation*
/// @param callback void func(QVariantAnimation* self, enum QAbstractAnimation__Direction param1)
///
void q_variantanimation_on_direction_changed(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// @param self QVariantAnimation*
///
void q_variantanimation_start(void* self);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#pause)
///
/// @param self QVariantAnimation*
///
void q_variantanimation_pause(void* self);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#resume)
///
/// @param self QVariantAnimation*
///
void q_variantanimation_resume(void* self);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setPaused)
///
/// @param self QVariantAnimation*
/// @param paused bool
///
void q_variantanimation_set_paused(void* self, bool paused);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#stop)
///
/// @param self QVariantAnimation*
///
void q_variantanimation_stop(void* self);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#setCurrentTime)
///
/// @param self QVariantAnimation*
/// @param msecs int
///
void q_variantanimation_set_current_time(void* self, int msecs);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#start)
///
/// @param self QVariantAnimation*
/// @param policy enum QAbstractAnimation__DeletionPolicy
///
void q_variantanimation_start1(void* self, int32_t policy);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QVariantAnimation*
///
const char* q_variantanimation_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QVariantAnimation*
/// @param name const char*
///
void q_variantanimation_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QVariantAnimation*
///
bool q_variantanimation_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QVariantAnimation*
///
bool q_variantanimation_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QVariantAnimation*
///
bool q_variantanimation_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QVariantAnimation*
///
bool q_variantanimation_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QVariantAnimation*
/// @param b bool
///
bool q_variantanimation_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QVariantAnimation*
///
QThread* q_variantanimation_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QVariantAnimation*
/// @param thread QThread*
///
bool q_variantanimation_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVariantAnimation*
/// @param interval int
///
int32_t q_variantanimation_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVariantAnimation*
/// @param time int64_t of nanoseconds
///
int32_t q_variantanimation_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QVariantAnimation*
/// @param id int
///
void q_variantanimation_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QVariantAnimation*
/// @param id enum Qt__TimerId
///
void q_variantanimation_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QVariantAnimation*
///
/// @return libqt_list of QObject*
///
libqt_list q_variantanimation_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QVariantAnimation*
/// @param parent QObject*
///
void q_variantanimation_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QVariantAnimation*
/// @param filterObj QObject*
///
void q_variantanimation_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QVariantAnimation*
/// @param obj QObject*
///
void q_variantanimation_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_variantanimation_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_variantanimation_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QVariantAnimation*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_variantanimation_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_variantanimation_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_variantanimation_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVariantAnimation*
///
bool q_variantanimation_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVariantAnimation*
/// @param receiver QObject*
///
bool q_variantanimation_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_variantanimation_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QVariantAnimation*
///
void q_variantanimation_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QVariantAnimation*
///
void q_variantanimation_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QVariantAnimation*
/// @param name const char*
/// @param value QVariant*
///
bool q_variantanimation_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QVariantAnimation*
/// @param name const char*
///
QVariant* q_variantanimation_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QVariantAnimation*
///
const char** q_variantanimation_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QVariantAnimation*
///
QBindingStorage* q_variantanimation_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QVariantAnimation*
///
const QBindingStorage* q_variantanimation_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVariantAnimation*
///
void q_variantanimation_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVariantAnimation*
/// @param callback void func(QVariantAnimation* self)
///
void q_variantanimation_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QVariantAnimation*
///
QObject* q_variantanimation_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QVariantAnimation*
/// @param classname const char*
///
bool q_variantanimation_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QVariantAnimation*
///
void q_variantanimation_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVariantAnimation*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_variantanimation_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QVariantAnimation*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_variantanimation_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_variantanimation_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_variantanimation_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QVariantAnimation*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_variantanimation_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVariantAnimation*
/// @param signal const char*
///
bool q_variantanimation_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVariantAnimation*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_variantanimation_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVariantAnimation*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_variantanimation_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QVariantAnimation*
/// @param receiver QObject*
/// @param member const char*
///
bool q_variantanimation_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVariantAnimation*
/// @param param1 QObject*
///
void q_variantanimation_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QVariantAnimation*
/// @param callback void func(QVariantAnimation* self, QObject* param1)
///
void q_variantanimation_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVariantAnimation*
/// @param direction enum QAbstractAnimation__Direction
///
void q_variantanimation_update_direction(void* self, int32_t direction);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVariantAnimation*
/// @param direction enum QAbstractAnimation__Direction
///
void q_variantanimation_super_update_direction(void* self, int32_t direction);

/// Inherited from QAbstractAnimation
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractanimation.html#updateDirection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVariantAnimation*
/// @param callback void func(QVariantAnimation* self, enum QAbstractAnimation__Direction direction)
///
void q_variantanimation_on_update_direction(void* self, void (*callback)(void*, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVariantAnimation*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_variantanimation_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVariantAnimation*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_variantanimation_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVariantAnimation*
/// @param callback bool func(QVariantAnimation* self, QObject* watched, QEvent* event)
///
void q_variantanimation_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVariantAnimation*
/// @param event QTimerEvent*
///
void q_variantanimation_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVariantAnimation*
/// @param event QTimerEvent*
///
void q_variantanimation_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVariantAnimation*
/// @param callback void func(QVariantAnimation* self, QTimerEvent* event)
///
void q_variantanimation_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVariantAnimation*
/// @param event QChildEvent*
///
void q_variantanimation_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVariantAnimation*
/// @param event QChildEvent*
///
void q_variantanimation_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVariantAnimation*
/// @param callback void func(QVariantAnimation* self, QChildEvent* event)
///
void q_variantanimation_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVariantAnimation*
/// @param event QEvent*
///
void q_variantanimation_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVariantAnimation*
/// @param event QEvent*
///
void q_variantanimation_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVariantAnimation*
/// @param callback void func(QVariantAnimation* self, QEvent* event)
///
void q_variantanimation_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVariantAnimation*
/// @param signal QMetaMethod*
///
void q_variantanimation_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVariantAnimation*
/// @param signal QMetaMethod*
///
void q_variantanimation_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVariantAnimation*
/// @param callback void func(QVariantAnimation* self, QMetaMethod* signal)
///
void q_variantanimation_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QVariantAnimation*
/// @param signal QMetaMethod*
///
void q_variantanimation_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QVariantAnimation*
/// @param signal QMetaMethod*
///
void q_variantanimation_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVariantAnimation*
/// @param callback void func(QVariantAnimation* self, QMetaMethod* signal)
///
void q_variantanimation_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QVariantAnimation*
///
QObject* q_variantanimation_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QVariantAnimation*
///
QObject* q_variantanimation_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVariantAnimation*
/// @param callback QObject* func(QVariantAnimation* self)
///
void q_variantanimation_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QVariantAnimation*
///
int32_t q_variantanimation_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QVariantAnimation*
///
int32_t q_variantanimation_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVariantAnimation*
/// @param callback int32_t func(QVariantAnimation* self)
///
void q_variantanimation_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QVariantAnimation*
/// @param signal const char*
///
int32_t q_variantanimation_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QVariantAnimation*
/// @param signal const char*
///
int32_t q_variantanimation_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVariantAnimation*
/// @param callback int32_t func(QVariantAnimation* self, const char* signal)
///
void q_variantanimation_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QVariantAnimation*
/// @param signal QMetaMethod*
///
bool q_variantanimation_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QVariantAnimation*
/// @param signal QMetaMethod*
///
bool q_variantanimation_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QVariantAnimation*
/// @param callback bool func(QVariantAnimation* self, QMetaMethod* signal)
///
void q_variantanimation_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QVariantAnimation*
/// @param callback void func(QVariantAnimation* self, const char* objectName)
///
void q_variantanimation_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qvariantanimation.html#dtor.QVariantAnimation)
///
/// Delete this object from C++ memory.
///
/// @param self QVariantAnimation*
///
void q_variantanimation_delete(void* self);

#endif
