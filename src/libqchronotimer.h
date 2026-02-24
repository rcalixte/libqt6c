#pragma once
#ifndef SRC_QT6C_LIBQCHRONOTIMER_H
#define SRC_QT6C_LIBQCHRONOTIMER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qchronotimer.html)

/// q_chronotimer_new constructs a new QChronoTimer object.
///
/// @param nsec int64_t of nanoseconds
///
QChronoTimer* q_chronotimer_new(int64_t nsec);

/// [Upstream resources](https://doc.qt.io/qt-6/qchronotimer.html)

/// q_chronotimer_new2 constructs a new QChronoTimer object.
///
QChronoTimer* q_chronotimer_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qchronotimer.html)

/// q_chronotimer_new3 constructs a new QChronoTimer object.
///
/// @param nsec int64_t of nanoseconds
/// @param parent QObject*
///
QChronoTimer* q_chronotimer_new3(int64_t nsec, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qchronotimer.html)

/// q_chronotimer_new4 constructs a new QChronoTimer object.
///
/// @param parent QObject*
///
QChronoTimer* q_chronotimer_new4(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QChronoTimer*
///
const QMetaObject* q_chronotimer_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QChronoTimer*
/// @param callback const QMetaObject* func()
///
void q_chronotimer_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_chronotimer_super_meta_object` instead
///
#define q_chronotimer_qbase_meta_object q_chronotimer_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QChronoTimer*
///
const QMetaObject* q_chronotimer_super_meta_object(void* self);

/// @param self QChronoTimer*
/// @param param1 const char*
///
void* q_chronotimer_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QChronoTimer*
/// @param callback void* func(QChronoTimer* self, const char* param1)
///
void q_chronotimer_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_chronotimer_super_metacast` instead
///
#define q_chronotimer_qbase_metacast q_chronotimer_super_metacast

/// Base class method implementation
///
/// @param self QChronoTimer*
/// @param param1 const char*
///
void* q_chronotimer_super_metacast(void* self, const char* param1);

/// @param self QChronoTimer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_chronotimer_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QChronoTimer*
/// @param callback int32_t func(QChronoTimer* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_chronotimer_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `q_chronotimer_super_metacall` instead
///
#define q_chronotimer_qbase_metacall q_chronotimer_super_metacall

/// Base class method implementation
///
/// @param self QChronoTimer*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_chronotimer_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_chronotimer_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qchronotimer.html#isActive)
///
/// @param self QChronoTimer*
///
bool q_chronotimer_is_active(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchronotimer.html#id)
///
/// @param self QChronoTimer*
///
/// @return enum Qt__TimerId
///
int32_t q_chronotimer_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchronotimer.html#setInterval)
///
/// @param self QChronoTimer*
/// @param nsec int64_t of nanoseconds
///
void q_chronotimer_set_interval(void* self, int64_t nsec);

/// [Upstream resources](https://doc.qt.io/qt-6/qchronotimer.html#interval)
///
/// @param self QChronoTimer*
///
/// @return int64_t of nanoseconds
///
int64_t q_chronotimer_interval(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchronotimer.html#remainingTime)
///
/// @param self QChronoTimer*
///
/// @return int64_t of nanoseconds
///
int64_t q_chronotimer_remaining_time(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchronotimer.html#setTimerType)
///
/// @param self QChronoTimer*
/// @param atype enum Qt__TimerType
///
void q_chronotimer_set_timer_type(void* self, int32_t atype);

/// [Upstream resources](https://doc.qt.io/qt-6/qchronotimer.html#timerType)
///
/// @param self QChronoTimer*
///
/// @return enum Qt__TimerType
///
int32_t q_chronotimer_timer_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchronotimer.html#setSingleShot)
///
/// @param self QChronoTimer*
/// @param singleShot bool
///
void q_chronotimer_set_single_shot(void* self, bool singleShot);

/// [Upstream resources](https://doc.qt.io/qt-6/qchronotimer.html#isSingleShot)
///
/// @param self QChronoTimer*
///
bool q_chronotimer_is_single_shot(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchronotimer.html#start)
///
/// @param self QChronoTimer*
///
void q_chronotimer_start(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchronotimer.html#stop)
///
/// @param self QChronoTimer*
///
void q_chronotimer_stop(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qchronotimer.html#timerEvent)
///
/// @param self QChronoTimer*
/// @param param1 QTimerEvent*
///
void q_chronotimer_timer_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qchronotimer.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// @param self QChronoTimer*
/// @param callback void func(QChronoTimer* self, QTimerEvent* param1)
///
void q_chronotimer_on_timer_event(void* self, void (*callback)(void*, void*));

/// @warning DEPRECATED: Use `q_chronotimer_super_timer_event` instead
///
#define q_chronotimer_qbase_timer_event q_chronotimer_super_timer_event

/// [Upstream resources](https://doc.qt.io/qt-6/qchronotimer.html#timerEvent)
///
/// Base class method implementation
///
/// @param self QChronoTimer*
/// @param param1 QTimerEvent*
///
void q_chronotimer_super_timer_event(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_chronotimer_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_chronotimer_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QChronoTimer*
///
const char* q_chronotimer_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QChronoTimer*
/// @param name const char*
///
void q_chronotimer_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QChronoTimer*
///
bool q_chronotimer_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QChronoTimer*
///
bool q_chronotimer_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QChronoTimer*
///
bool q_chronotimer_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QChronoTimer*
///
bool q_chronotimer_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QChronoTimer*
/// @param b bool
///
bool q_chronotimer_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QChronoTimer*
///
QThread* q_chronotimer_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QChronoTimer*
/// @param thread QThread*
///
bool q_chronotimer_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QChronoTimer*
/// @param interval int
///
int32_t q_chronotimer_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QChronoTimer*
/// @param time int64_t of nanoseconds
///
int32_t q_chronotimer_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QChronoTimer*
/// @param id int
///
void q_chronotimer_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QChronoTimer*
/// @param id enum Qt__TimerId
///
void q_chronotimer_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QChronoTimer*
///
/// @return libqt_list of QObject*
///
libqt_list q_chronotimer_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QChronoTimer*
/// @param parent QObject*
///
void q_chronotimer_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QChronoTimer*
/// @param filterObj QObject*
///
void q_chronotimer_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QChronoTimer*
/// @param obj QObject*
///
void q_chronotimer_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_chronotimer_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_chronotimer_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QChronoTimer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_chronotimer_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_chronotimer_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_chronotimer_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QChronoTimer*
///
bool q_chronotimer_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QChronoTimer*
/// @param receiver QObject*
///
bool q_chronotimer_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_chronotimer_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QChronoTimer*
///
void q_chronotimer_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QChronoTimer*
///
void q_chronotimer_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QChronoTimer*
/// @param name const char*
/// @param value QVariant*
///
bool q_chronotimer_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QChronoTimer*
/// @param name const char*
///
QVariant* q_chronotimer_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QChronoTimer*
///
const char** q_chronotimer_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QChronoTimer*
///
QBindingStorage* q_chronotimer_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QChronoTimer*
///
const QBindingStorage* q_chronotimer_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QChronoTimer*
///
void q_chronotimer_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QChronoTimer*
/// @param callback void func(QChronoTimer* self)
///
void q_chronotimer_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QChronoTimer*
///
QObject* q_chronotimer_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QChronoTimer*
/// @param classname const char*
///
bool q_chronotimer_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QChronoTimer*
///
void q_chronotimer_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QChronoTimer*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_chronotimer_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QChronoTimer*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_chronotimer_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_chronotimer_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_chronotimer_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QChronoTimer*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_chronotimer_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QChronoTimer*
/// @param signal const char*
///
bool q_chronotimer_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QChronoTimer*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_chronotimer_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QChronoTimer*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_chronotimer_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QChronoTimer*
/// @param receiver QObject*
/// @param member const char*
///
bool q_chronotimer_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QChronoTimer*
/// @param param1 QObject*
///
void q_chronotimer_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QChronoTimer*
/// @param callback void func(QChronoTimer* self, QObject* param1)
///
void q_chronotimer_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChronoTimer*
/// @param event QEvent*
///
bool q_chronotimer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_chronotimer_super_event` instead
///
#define q_chronotimer_qbase_event q_chronotimer_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param event QEvent*
///
bool q_chronotimer_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param callback bool func(QChronoTimer* self, QEvent* event)
///
void q_chronotimer_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChronoTimer*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_chronotimer_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `q_chronotimer_super_event_filter` instead
///
#define q_chronotimer_qbase_event_filter q_chronotimer_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_chronotimer_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param callback bool func(QChronoTimer* self, QObject* watched, QEvent* event)
///
void q_chronotimer_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChronoTimer*
/// @param event QChildEvent*
///
void q_chronotimer_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_chronotimer_super_child_event` instead
///
#define q_chronotimer_qbase_child_event q_chronotimer_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param event QChildEvent*
///
void q_chronotimer_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param callback void func(QChronoTimer* self, QChildEvent* event)
///
void q_chronotimer_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChronoTimer*
/// @param event QEvent*
///
void q_chronotimer_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_chronotimer_super_custom_event` instead
///
#define q_chronotimer_qbase_custom_event q_chronotimer_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param event QEvent*
///
void q_chronotimer_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param callback void func(QChronoTimer* self, QEvent* event)
///
void q_chronotimer_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChronoTimer*
/// @param signal QMetaMethod*
///
void q_chronotimer_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_chronotimer_super_connect_notify` instead
///
#define q_chronotimer_qbase_connect_notify q_chronotimer_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param signal QMetaMethod*
///
void q_chronotimer_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param callback void func(QChronoTimer* self, QMetaMethod* signal)
///
void q_chronotimer_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChronoTimer*
/// @param signal QMetaMethod*
///
void q_chronotimer_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_chronotimer_super_disconnect_notify` instead
///
#define q_chronotimer_qbase_disconnect_notify q_chronotimer_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param signal QMetaMethod*
///
void q_chronotimer_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param callback void func(QChronoTimer* self, QMetaMethod* signal)
///
void q_chronotimer_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChronoTimer*
///
QObject* q_chronotimer_sender(void* self);

/// @warning DEPRECATED: Use `q_chronotimer_super_sender` instead
///
#define q_chronotimer_qbase_sender q_chronotimer_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChronoTimer*
///
QObject* q_chronotimer_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param callback QObject* func()
///
void q_chronotimer_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChronoTimer*
///
int32_t q_chronotimer_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_chronotimer_super_sender_signal_index` instead
///
#define q_chronotimer_qbase_sender_signal_index q_chronotimer_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChronoTimer*
///
int32_t q_chronotimer_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param callback int32_t func()
///
void q_chronotimer_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChronoTimer*
/// @param signal const char*
///
int32_t q_chronotimer_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_chronotimer_super_receivers` instead
///
#define q_chronotimer_qbase_receivers q_chronotimer_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param signal const char*
///
int32_t q_chronotimer_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param callback int32_t func(QChronoTimer* self, const char* signal)
///
void q_chronotimer_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QChronoTimer*
/// @param signal QMetaMethod*
///
bool q_chronotimer_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_chronotimer_super_is_signal_connected` instead
///
#define q_chronotimer_qbase_is_signal_connected q_chronotimer_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param signal QMetaMethod*
///
bool q_chronotimer_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QChronoTimer*
/// @param callback bool func(QChronoTimer* self, QMetaMethod* signal)
///
void q_chronotimer_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qchronotimer.html#timeout)
///
/// Wrapper to allow calling private signal
///
/// @param self QChronoTimer*
/// @param callback void func(QChronoTimer* self)
///
void q_chronotimer_on_timeout(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QChronoTimer*
/// @param callback void func(QChronoTimer* self, const char* objectName)
///
void q_chronotimer_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qchronotimer.html#dtor.QChronoTimer)
///
/// Delete this object from C++ memory.
///
/// @param self QChronoTimer*
///
void q_chronotimer_delete(void* self);

#endif
