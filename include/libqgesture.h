#pragma once
#ifndef LIBQGESTURE_H
#define LIBQGESTURE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html)

/// q_gesture_new constructs a new QGesture object.
///
QGesture* q_gesture_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html)

/// q_gesture_new2 constructs a new QGesture object.
///
/// @param parent QObject*
///
QGesture* q_gesture_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QGesture*
///
const QMetaObject* q_gesture_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QGesture*
/// @param callback const QMetaObject* func(const QGesture* self)
///
void q_gesture_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QGesture*
///
const QMetaObject* q_gesture_super_meta_object(const void* self);

/// @param self QGesture*
/// @param param1 const char*
///
void* q_gesture_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QGesture*
/// @param callback void* func(QGesture* self, const char* param1)
///
void q_gesture_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QGesture*
/// @param param1 const char*
///
void* q_gesture_super_metacast(void* self, const char* param1);

/// @param self QGesture*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_gesture_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QGesture*
/// @param callback int32_t func(QGesture* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_gesture_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QGesture*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_gesture_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_gesture_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#gestureType)
///
/// @param self const QGesture*
///
/// @return enum Qt__GestureType
///
int32_t q_gesture_gesture_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#state)
///
/// @param self const QGesture*
///
/// @return enum Qt__GestureState
///
int32_t q_gesture_state(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#hotSpot)
///
/// @param self const QGesture*
///
QPointF* q_gesture_hot_spot(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#setHotSpot)
///
/// @param self QGesture*
/// @param value QPointF*
///
void q_gesture_set_hot_spot(void* self, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#hasHotSpot)
///
/// @param self const QGesture*
///
bool q_gesture_has_hot_spot(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#unsetHotSpot)
///
/// @param self QGesture*
///
void q_gesture_unset_hot_spot(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#setGestureCancelPolicy)
///
/// @param self QGesture*
/// @param policy enum QGesture__GestureCancelPolicy
///
void q_gesture_set_gesture_cancel_policy(void* self, int32_t policy);

/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#gestureCancelPolicy)
///
/// @param self const QGesture*
///
/// @return enum QGesture__GestureCancelPolicy
///
int32_t q_gesture_gesture_cancel_policy(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_gesture_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_gesture_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QGesture*
///
const char* q_gesture_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGesture*
/// @param name const char*
///
void q_gesture_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QGesture*
///
bool q_gesture_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QGesture*
///
bool q_gesture_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QGesture*
///
bool q_gesture_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QGesture*
///
bool q_gesture_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGesture*
/// @param b bool
///
bool q_gesture_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QGesture*
///
QThread* q_gesture_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGesture*
/// @param thread QThread*
///
bool q_gesture_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGesture*
/// @param interval int
///
int32_t q_gesture_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGesture*
/// @param time int64_t of nanoseconds
///
int32_t q_gesture_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGesture*
/// @param id int
///
void q_gesture_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGesture*
/// @param id enum Qt__TimerId
///
void q_gesture_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QGesture*
///
/// @return libqt_list of QObject*
///
libqt_list q_gesture_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QGesture*
/// @param parent QObject*
///
void q_gesture_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGesture*
/// @param filterObj QObject*
///
void q_gesture_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGesture*
/// @param obj QObject*
///
void q_gesture_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_gesture_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_gesture_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QGesture*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_gesture_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_gesture_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_gesture_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGesture*
///
bool q_gesture_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGesture*
/// @param receiver QObject*
///
bool q_gesture_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_gesture_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QGesture*
///
void q_gesture_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QGesture*
///
void q_gesture_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGesture*
/// @param name const char*
/// @param value QVariant*
///
bool q_gesture_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QGesture*
/// @param name const char*
///
QVariant* q_gesture_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QGesture*
///
const char** q_gesture_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGesture*
///
QBindingStorage* q_gesture_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QGesture*
///
const QBindingStorage* q_gesture_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGesture*
///
void q_gesture_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGesture*
/// @param callback void func(QGesture* self)
///
void q_gesture_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QGesture*
///
QObject* q_gesture_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QGesture*
/// @param classname const char*
///
bool q_gesture_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGesture*
///
void q_gesture_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGesture*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_gesture_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGesture*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_gesture_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_gesture_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_gesture_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QGesture*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_gesture_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGesture*
/// @param signal const char*
///
bool q_gesture_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGesture*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_gesture_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGesture*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_gesture_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QGesture*
/// @param receiver QObject*
/// @param member const char*
///
bool q_gesture_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGesture*
/// @param param1 QObject*
///
void q_gesture_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGesture*
/// @param callback void func(QGesture* self, QObject* param1)
///
void q_gesture_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGesture*
/// @param event QEvent*
///
bool q_gesture_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGesture*
/// @param event QEvent*
///
bool q_gesture_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGesture*
/// @param callback bool func(QGesture* self, QEvent* event)
///
void q_gesture_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGesture*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_gesture_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGesture*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_gesture_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGesture*
/// @param callback bool func(QGesture* self, QObject* watched, QEvent* event)
///
void q_gesture_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGesture*
/// @param event QTimerEvent*
///
void q_gesture_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGesture*
/// @param event QTimerEvent*
///
void q_gesture_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGesture*
/// @param callback void func(QGesture* self, QTimerEvent* event)
///
void q_gesture_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGesture*
/// @param event QChildEvent*
///
void q_gesture_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGesture*
/// @param event QChildEvent*
///
void q_gesture_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGesture*
/// @param callback void func(QGesture* self, QChildEvent* event)
///
void q_gesture_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGesture*
/// @param event QEvent*
///
void q_gesture_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGesture*
/// @param event QEvent*
///
void q_gesture_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGesture*
/// @param callback void func(QGesture* self, QEvent* event)
///
void q_gesture_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGesture*
/// @param signal QMetaMethod*
///
void q_gesture_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGesture*
/// @param signal QMetaMethod*
///
void q_gesture_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGesture*
/// @param callback void func(QGesture* self, QMetaMethod* signal)
///
void q_gesture_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGesture*
/// @param signal QMetaMethod*
///
void q_gesture_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGesture*
/// @param signal QMetaMethod*
///
void q_gesture_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGesture*
/// @param callback void func(QGesture* self, QMetaMethod* signal)
///
void q_gesture_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGesture*
///
QObject* q_gesture_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGesture*
///
QObject* q_gesture_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGesture*
/// @param callback QObject* func(QGesture* self)
///
void q_gesture_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGesture*
///
int32_t q_gesture_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGesture*
///
int32_t q_gesture_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGesture*
/// @param callback int32_t func(QGesture* self)
///
void q_gesture_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGesture*
/// @param signal const char*
///
int32_t q_gesture_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGesture*
/// @param signal const char*
///
int32_t q_gesture_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGesture*
/// @param callback int32_t func(QGesture* self, const char* signal)
///
void q_gesture_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGesture*
/// @param signal QMetaMethod*
///
bool q_gesture_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGesture*
/// @param signal QMetaMethod*
///
bool q_gesture_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGesture*
/// @param callback bool func(QGesture* self, QMetaMethod* signal)
///
void q_gesture_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGesture*
/// @param callback void func(QGesture* self, const char* objectName)
///
void q_gesture_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#dtor.QGesture)
///
/// Delete this object from C++ memory.
///
/// @param self QGesture*
///
void q_gesture_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpangesture.html)

/// q_pangesture_new constructs a new QPanGesture object.
///
QPanGesture* q_pangesture_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qpangesture.html)

/// q_pangesture_new2 constructs a new QPanGesture object.
///
/// @param parent QObject*
///
QPanGesture* q_pangesture_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QPanGesture*
///
const QMetaObject* q_pangesture_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QPanGesture*
/// @param callback const QMetaObject* func(const QPanGesture* self)
///
void q_pangesture_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QPanGesture*
///
const QMetaObject* q_pangesture_super_meta_object(const void* self);

/// @param self QPanGesture*
/// @param param1 const char*
///
void* q_pangesture_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QPanGesture*
/// @param callback void* func(QPanGesture* self, const char* param1)
///
void q_pangesture_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QPanGesture*
/// @param param1 const char*
///
void* q_pangesture_super_metacast(void* self, const char* param1);

/// @param self QPanGesture*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_pangesture_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPanGesture*
/// @param callback int32_t func(QPanGesture* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_pangesture_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QPanGesture*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_pangesture_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_pangesture_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qpangesture.html#lastOffset)
///
/// @param self const QPanGesture*
///
QPointF* q_pangesture_last_offset(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpangesture.html#offset)
///
/// @param self const QPanGesture*
///
QPointF* q_pangesture_offset(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpangesture.html#delta)
///
/// @param self const QPanGesture*
///
QPointF* q_pangesture_delta(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpangesture.html#acceleration)
///
/// @param self const QPanGesture*
///
double q_pangesture_acceleration(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpangesture.html#setLastOffset)
///
/// @param self QPanGesture*
/// @param value QPointF*
///
void q_pangesture_set_last_offset(void* self, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qpangesture.html#setOffset)
///
/// @param self QPanGesture*
/// @param value QPointF*
///
void q_pangesture_set_offset(void* self, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qpangesture.html#setAcceleration)
///
/// @param self QPanGesture*
/// @param value double
///
void q_pangesture_set_acceleration(void* self, double value);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_pangesture_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_pangesture_tr3(const char* s, const char* c, int n);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#gestureType)
///
/// @param self const QPanGesture*
///
/// @return enum Qt__GestureType
///
int32_t q_pangesture_gesture_type(const void* self);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#state)
///
/// @param self const QPanGesture*
///
/// @return enum Qt__GestureState
///
int32_t q_pangesture_state(const void* self);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#hotSpot)
///
/// @param self const QPanGesture*
///
QPointF* q_pangesture_hot_spot(const void* self);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#setHotSpot)
///
/// @param self QPanGesture*
/// @param value QPointF*
///
void q_pangesture_set_hot_spot(void* self, const void* value);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#hasHotSpot)
///
/// @param self const QPanGesture*
///
bool q_pangesture_has_hot_spot(const void* self);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#unsetHotSpot)
///
/// @param self QPanGesture*
///
void q_pangesture_unset_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#setGestureCancelPolicy)
///
/// @param self QPanGesture*
/// @param policy enum QGesture__GestureCancelPolicy
///
void q_pangesture_set_gesture_cancel_policy(void* self, int32_t policy);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#gestureCancelPolicy)
///
/// @param self const QPanGesture*
///
/// @return enum QGesture__GestureCancelPolicy
///
int32_t q_pangesture_gesture_cancel_policy(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPanGesture*
///
const char* q_pangesture_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPanGesture*
/// @param name const char*
///
void q_pangesture_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QPanGesture*
///
bool q_pangesture_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QPanGesture*
///
bool q_pangesture_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QPanGesture*
///
bool q_pangesture_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QPanGesture*
///
bool q_pangesture_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPanGesture*
/// @param b bool
///
bool q_pangesture_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QPanGesture*
///
QThread* q_pangesture_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPanGesture*
/// @param thread QThread*
///
bool q_pangesture_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPanGesture*
/// @param interval int
///
int32_t q_pangesture_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPanGesture*
/// @param time int64_t of nanoseconds
///
int32_t q_pangesture_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPanGesture*
/// @param id int
///
void q_pangesture_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPanGesture*
/// @param id enum Qt__TimerId
///
void q_pangesture_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QPanGesture*
///
/// @return libqt_list of QObject*
///
libqt_list q_pangesture_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QPanGesture*
/// @param parent QObject*
///
void q_pangesture_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPanGesture*
/// @param filterObj QObject*
///
void q_pangesture_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPanGesture*
/// @param obj QObject*
///
void q_pangesture_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_pangesture_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_pangesture_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QPanGesture*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_pangesture_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_pangesture_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_pangesture_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPanGesture*
///
bool q_pangesture_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPanGesture*
/// @param receiver QObject*
///
bool q_pangesture_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_pangesture_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QPanGesture*
///
void q_pangesture_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QPanGesture*
///
void q_pangesture_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPanGesture*
/// @param name const char*
/// @param value QVariant*
///
bool q_pangesture_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QPanGesture*
/// @param name const char*
///
QVariant* q_pangesture_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QPanGesture*
///
const char** q_pangesture_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPanGesture*
///
QBindingStorage* q_pangesture_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QPanGesture*
///
const QBindingStorage* q_pangesture_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPanGesture*
///
void q_pangesture_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPanGesture*
/// @param callback void func(QPanGesture* self)
///
void q_pangesture_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QPanGesture*
///
QObject* q_pangesture_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QPanGesture*
/// @param classname const char*
///
bool q_pangesture_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPanGesture*
///
void q_pangesture_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPanGesture*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_pangesture_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPanGesture*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_pangesture_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_pangesture_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_pangesture_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QPanGesture*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_pangesture_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPanGesture*
/// @param signal const char*
///
bool q_pangesture_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPanGesture*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_pangesture_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPanGesture*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_pangesture_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPanGesture*
/// @param receiver QObject*
/// @param member const char*
///
bool q_pangesture_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPanGesture*
/// @param param1 QObject*
///
void q_pangesture_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPanGesture*
/// @param callback void func(QPanGesture* self, QObject* param1)
///
void q_pangesture_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPanGesture*
/// @param event QEvent*
///
bool q_pangesture_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPanGesture*
/// @param event QEvent*
///
bool q_pangesture_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPanGesture*
/// @param callback bool func(QPanGesture* self, QEvent* event)
///
void q_pangesture_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPanGesture*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_pangesture_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPanGesture*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_pangesture_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPanGesture*
/// @param callback bool func(QPanGesture* self, QObject* watched, QEvent* event)
///
void q_pangesture_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPanGesture*
/// @param event QTimerEvent*
///
void q_pangesture_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPanGesture*
/// @param event QTimerEvent*
///
void q_pangesture_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPanGesture*
/// @param callback void func(QPanGesture* self, QTimerEvent* event)
///
void q_pangesture_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPanGesture*
/// @param event QChildEvent*
///
void q_pangesture_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPanGesture*
/// @param event QChildEvent*
///
void q_pangesture_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPanGesture*
/// @param callback void func(QPanGesture* self, QChildEvent* event)
///
void q_pangesture_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPanGesture*
/// @param event QEvent*
///
void q_pangesture_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPanGesture*
/// @param event QEvent*
///
void q_pangesture_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPanGesture*
/// @param callback void func(QPanGesture* self, QEvent* event)
///
void q_pangesture_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPanGesture*
/// @param signal QMetaMethod*
///
void q_pangesture_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPanGesture*
/// @param signal QMetaMethod*
///
void q_pangesture_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPanGesture*
/// @param callback void func(QPanGesture* self, QMetaMethod* signal)
///
void q_pangesture_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPanGesture*
/// @param signal QMetaMethod*
///
void q_pangesture_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPanGesture*
/// @param signal QMetaMethod*
///
void q_pangesture_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPanGesture*
/// @param callback void func(QPanGesture* self, QMetaMethod* signal)
///
void q_pangesture_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPanGesture*
///
QObject* q_pangesture_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPanGesture*
///
QObject* q_pangesture_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPanGesture*
/// @param callback QObject* func(QPanGesture* self)
///
void q_pangesture_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPanGesture*
///
int32_t q_pangesture_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPanGesture*
///
int32_t q_pangesture_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPanGesture*
/// @param callback int32_t func(QPanGesture* self)
///
void q_pangesture_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPanGesture*
/// @param signal const char*
///
int32_t q_pangesture_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPanGesture*
/// @param signal const char*
///
int32_t q_pangesture_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPanGesture*
/// @param callback int32_t func(QPanGesture* self, const char* signal)
///
void q_pangesture_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPanGesture*
/// @param signal QMetaMethod*
///
bool q_pangesture_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPanGesture*
/// @param signal QMetaMethod*
///
bool q_pangesture_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPanGesture*
/// @param callback bool func(QPanGesture* self, QMetaMethod* signal)
///
void q_pangesture_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPanGesture*
/// @param callback void func(QPanGesture* self, const char* objectName)
///
void q_pangesture_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpangesture.html#dtor.QPanGesture)
///
/// Delete this object from C++ memory.
///
/// @param self QPanGesture*
///
void q_pangesture_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpinchgesture.html)

/// q_pinchgesture_new constructs a new QPinchGesture object.
///
QPinchGesture* q_pinchgesture_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qpinchgesture.html)

/// q_pinchgesture_new2 constructs a new QPinchGesture object.
///
/// @param parent QObject*
///
QPinchGesture* q_pinchgesture_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QPinchGesture*
///
const QMetaObject* q_pinchgesture_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QPinchGesture*
/// @param callback const QMetaObject* func(const QPinchGesture* self)
///
void q_pinchgesture_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QPinchGesture*
///
const QMetaObject* q_pinchgesture_super_meta_object(const void* self);

/// @param self QPinchGesture*
/// @param param1 const char*
///
void* q_pinchgesture_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QPinchGesture*
/// @param callback void* func(QPinchGesture* self, const char* param1)
///
void q_pinchgesture_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QPinchGesture*
/// @param param1 const char*
///
void* q_pinchgesture_super_metacast(void* self, const char* param1);

/// @param self QPinchGesture*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_pinchgesture_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPinchGesture*
/// @param callback int32_t func(QPinchGesture* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_pinchgesture_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QPinchGesture*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_pinchgesture_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_pinchgesture_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qpinchgesture.html#totalChangeFlags)
///
/// @param self const QPinchGesture*
///
/// @return flag of enum QPinchGesture__ChangeFlag
///
int32_t q_pinchgesture_total_change_flags(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpinchgesture.html#setTotalChangeFlags)
///
/// @param self QPinchGesture*
/// @param value flag of enum QPinchGesture__ChangeFlag
///
void q_pinchgesture_set_total_change_flags(void* self, int32_t value);

/// [Upstream resources](https://doc.qt.io/qt-6/qpinchgesture.html#changeFlags)
///
/// @param self const QPinchGesture*
///
/// @return flag of enum QPinchGesture__ChangeFlag
///
int32_t q_pinchgesture_change_flags(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpinchgesture.html#setChangeFlags)
///
/// @param self QPinchGesture*
/// @param value flag of enum QPinchGesture__ChangeFlag
///
void q_pinchgesture_set_change_flags(void* self, int32_t value);

/// [Upstream resources](https://doc.qt.io/qt-6/qpinchgesture.html#startCenterPoint)
///
/// @param self const QPinchGesture*
///
QPointF* q_pinchgesture_start_center_point(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpinchgesture.html#lastCenterPoint)
///
/// @param self const QPinchGesture*
///
QPointF* q_pinchgesture_last_center_point(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpinchgesture.html#centerPoint)
///
/// @param self const QPinchGesture*
///
QPointF* q_pinchgesture_center_point(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpinchgesture.html#setStartCenterPoint)
///
/// @param self QPinchGesture*
/// @param value QPointF*
///
void q_pinchgesture_set_start_center_point(void* self, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qpinchgesture.html#setLastCenterPoint)
///
/// @param self QPinchGesture*
/// @param value QPointF*
///
void q_pinchgesture_set_last_center_point(void* self, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qpinchgesture.html#setCenterPoint)
///
/// @param self QPinchGesture*
/// @param value QPointF*
///
void q_pinchgesture_set_center_point(void* self, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qpinchgesture.html#totalScaleFactor)
///
/// @param self const QPinchGesture*
///
double q_pinchgesture_total_scale_factor(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpinchgesture.html#lastScaleFactor)
///
/// @param self const QPinchGesture*
///
double q_pinchgesture_last_scale_factor(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpinchgesture.html#scaleFactor)
///
/// @param self const QPinchGesture*
///
double q_pinchgesture_scale_factor(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpinchgesture.html#setTotalScaleFactor)
///
/// @param self QPinchGesture*
/// @param value double
///
void q_pinchgesture_set_total_scale_factor(void* self, double value);

/// [Upstream resources](https://doc.qt.io/qt-6/qpinchgesture.html#setLastScaleFactor)
///
/// @param self QPinchGesture*
/// @param value double
///
void q_pinchgesture_set_last_scale_factor(void* self, double value);

/// [Upstream resources](https://doc.qt.io/qt-6/qpinchgesture.html#setScaleFactor)
///
/// @param self QPinchGesture*
/// @param value double
///
void q_pinchgesture_set_scale_factor(void* self, double value);

/// [Upstream resources](https://doc.qt.io/qt-6/qpinchgesture.html#totalRotationAngle)
///
/// @param self const QPinchGesture*
///
double q_pinchgesture_total_rotation_angle(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpinchgesture.html#lastRotationAngle)
///
/// @param self const QPinchGesture*
///
double q_pinchgesture_last_rotation_angle(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpinchgesture.html#rotationAngle)
///
/// @param self const QPinchGesture*
///
double q_pinchgesture_rotation_angle(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpinchgesture.html#setTotalRotationAngle)
///
/// @param self QPinchGesture*
/// @param value double
///
void q_pinchgesture_set_total_rotation_angle(void* self, double value);

/// [Upstream resources](https://doc.qt.io/qt-6/qpinchgesture.html#setLastRotationAngle)
///
/// @param self QPinchGesture*
/// @param value double
///
void q_pinchgesture_set_last_rotation_angle(void* self, double value);

/// [Upstream resources](https://doc.qt.io/qt-6/qpinchgesture.html#setRotationAngle)
///
/// @param self QPinchGesture*
/// @param value double
///
void q_pinchgesture_set_rotation_angle(void* self, double value);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_pinchgesture_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_pinchgesture_tr3(const char* s, const char* c, int n);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#gestureType)
///
/// @param self const QPinchGesture*
///
/// @return enum Qt__GestureType
///
int32_t q_pinchgesture_gesture_type(const void* self);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#state)
///
/// @param self const QPinchGesture*
///
/// @return enum Qt__GestureState
///
int32_t q_pinchgesture_state(const void* self);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#hotSpot)
///
/// @param self const QPinchGesture*
///
QPointF* q_pinchgesture_hot_spot(const void* self);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#setHotSpot)
///
/// @param self QPinchGesture*
/// @param value QPointF*
///
void q_pinchgesture_set_hot_spot(void* self, const void* value);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#hasHotSpot)
///
/// @param self const QPinchGesture*
///
bool q_pinchgesture_has_hot_spot(const void* self);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#unsetHotSpot)
///
/// @param self QPinchGesture*
///
void q_pinchgesture_unset_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#setGestureCancelPolicy)
///
/// @param self QPinchGesture*
/// @param policy enum QGesture__GestureCancelPolicy
///
void q_pinchgesture_set_gesture_cancel_policy(void* self, int32_t policy);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#gestureCancelPolicy)
///
/// @param self const QPinchGesture*
///
/// @return enum QGesture__GestureCancelPolicy
///
int32_t q_pinchgesture_gesture_cancel_policy(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPinchGesture*
///
const char* q_pinchgesture_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPinchGesture*
/// @param name const char*
///
void q_pinchgesture_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QPinchGesture*
///
bool q_pinchgesture_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QPinchGesture*
///
bool q_pinchgesture_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QPinchGesture*
///
bool q_pinchgesture_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QPinchGesture*
///
bool q_pinchgesture_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPinchGesture*
/// @param b bool
///
bool q_pinchgesture_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QPinchGesture*
///
QThread* q_pinchgesture_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPinchGesture*
/// @param thread QThread*
///
bool q_pinchgesture_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPinchGesture*
/// @param interval int
///
int32_t q_pinchgesture_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPinchGesture*
/// @param time int64_t of nanoseconds
///
int32_t q_pinchgesture_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPinchGesture*
/// @param id int
///
void q_pinchgesture_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPinchGesture*
/// @param id enum Qt__TimerId
///
void q_pinchgesture_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QPinchGesture*
///
/// @return libqt_list of QObject*
///
libqt_list q_pinchgesture_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QPinchGesture*
/// @param parent QObject*
///
void q_pinchgesture_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPinchGesture*
/// @param filterObj QObject*
///
void q_pinchgesture_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPinchGesture*
/// @param obj QObject*
///
void q_pinchgesture_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_pinchgesture_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_pinchgesture_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QPinchGesture*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_pinchgesture_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_pinchgesture_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_pinchgesture_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPinchGesture*
///
bool q_pinchgesture_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPinchGesture*
/// @param receiver QObject*
///
bool q_pinchgesture_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_pinchgesture_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QPinchGesture*
///
void q_pinchgesture_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QPinchGesture*
///
void q_pinchgesture_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPinchGesture*
/// @param name const char*
/// @param value QVariant*
///
bool q_pinchgesture_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QPinchGesture*
/// @param name const char*
///
QVariant* q_pinchgesture_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QPinchGesture*
///
const char** q_pinchgesture_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPinchGesture*
///
QBindingStorage* q_pinchgesture_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QPinchGesture*
///
const QBindingStorage* q_pinchgesture_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPinchGesture*
///
void q_pinchgesture_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPinchGesture*
/// @param callback void func(QPinchGesture* self)
///
void q_pinchgesture_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QPinchGesture*
///
QObject* q_pinchgesture_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QPinchGesture*
/// @param classname const char*
///
bool q_pinchgesture_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPinchGesture*
///
void q_pinchgesture_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPinchGesture*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_pinchgesture_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPinchGesture*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_pinchgesture_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_pinchgesture_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_pinchgesture_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QPinchGesture*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_pinchgesture_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPinchGesture*
/// @param signal const char*
///
bool q_pinchgesture_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPinchGesture*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_pinchgesture_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPinchGesture*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_pinchgesture_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPinchGesture*
/// @param receiver QObject*
/// @param member const char*
///
bool q_pinchgesture_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPinchGesture*
/// @param param1 QObject*
///
void q_pinchgesture_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPinchGesture*
/// @param callback void func(QPinchGesture* self, QObject* param1)
///
void q_pinchgesture_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPinchGesture*
/// @param event QEvent*
///
bool q_pinchgesture_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param event QEvent*
///
bool q_pinchgesture_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param callback bool func(QPinchGesture* self, QEvent* event)
///
void q_pinchgesture_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPinchGesture*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_pinchgesture_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_pinchgesture_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param callback bool func(QPinchGesture* self, QObject* watched, QEvent* event)
///
void q_pinchgesture_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPinchGesture*
/// @param event QTimerEvent*
///
void q_pinchgesture_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param event QTimerEvent*
///
void q_pinchgesture_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param callback void func(QPinchGesture* self, QTimerEvent* event)
///
void q_pinchgesture_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPinchGesture*
/// @param event QChildEvent*
///
void q_pinchgesture_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param event QChildEvent*
///
void q_pinchgesture_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param callback void func(QPinchGesture* self, QChildEvent* event)
///
void q_pinchgesture_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPinchGesture*
/// @param event QEvent*
///
void q_pinchgesture_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param event QEvent*
///
void q_pinchgesture_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param callback void func(QPinchGesture* self, QEvent* event)
///
void q_pinchgesture_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPinchGesture*
/// @param signal QMetaMethod*
///
void q_pinchgesture_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param signal QMetaMethod*
///
void q_pinchgesture_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param callback void func(QPinchGesture* self, QMetaMethod* signal)
///
void q_pinchgesture_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPinchGesture*
/// @param signal QMetaMethod*
///
void q_pinchgesture_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param signal QMetaMethod*
///
void q_pinchgesture_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param callback void func(QPinchGesture* self, QMetaMethod* signal)
///
void q_pinchgesture_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPinchGesture*
///
QObject* q_pinchgesture_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPinchGesture*
///
QObject* q_pinchgesture_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param callback QObject* func(QPinchGesture* self)
///
void q_pinchgesture_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPinchGesture*
///
int32_t q_pinchgesture_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPinchGesture*
///
int32_t q_pinchgesture_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param callback int32_t func(QPinchGesture* self)
///
void q_pinchgesture_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPinchGesture*
/// @param signal const char*
///
int32_t q_pinchgesture_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPinchGesture*
/// @param signal const char*
///
int32_t q_pinchgesture_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param callback int32_t func(QPinchGesture* self, const char* signal)
///
void q_pinchgesture_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QPinchGesture*
/// @param signal QMetaMethod*
///
bool q_pinchgesture_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QPinchGesture*
/// @param signal QMetaMethod*
///
bool q_pinchgesture_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param callback bool func(QPinchGesture* self, QMetaMethod* signal)
///
void q_pinchgesture_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPinchGesture*
/// @param callback void func(QPinchGesture* self, const char* objectName)
///
void q_pinchgesture_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpinchgesture.html#dtor.QPinchGesture)
///
/// Delete this object from C++ memory.
///
/// @param self QPinchGesture*
///
void q_pinchgesture_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qswipegesture.html)

/// q_swipegesture_new constructs a new QSwipeGesture object.
///
QSwipeGesture* q_swipegesture_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qswipegesture.html)

/// q_swipegesture_new2 constructs a new QSwipeGesture object.
///
/// @param parent QObject*
///
QSwipeGesture* q_swipegesture_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QSwipeGesture*
///
const QMetaObject* q_swipegesture_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QSwipeGesture*
/// @param callback const QMetaObject* func(const QSwipeGesture* self)
///
void q_swipegesture_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QSwipeGesture*
///
const QMetaObject* q_swipegesture_super_meta_object(const void* self);

/// @param self QSwipeGesture*
/// @param param1 const char*
///
void* q_swipegesture_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QSwipeGesture*
/// @param callback void* func(QSwipeGesture* self, const char* param1)
///
void q_swipegesture_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QSwipeGesture*
/// @param param1 const char*
///
void* q_swipegesture_super_metacast(void* self, const char* param1);

/// @param self QSwipeGesture*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_swipegesture_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSwipeGesture*
/// @param callback int32_t func(QSwipeGesture* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_swipegesture_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QSwipeGesture*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_swipegesture_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_swipegesture_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qswipegesture.html#horizontalDirection)
///
/// @param self const QSwipeGesture*
///
/// @return enum QSwipeGesture__SwipeDirection
///
int32_t q_swipegesture_horizontal_direction(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qswipegesture.html#verticalDirection)
///
/// @param self const QSwipeGesture*
///
/// @return enum QSwipeGesture__SwipeDirection
///
int32_t q_swipegesture_vertical_direction(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qswipegesture.html#swipeAngle)
///
/// @param self const QSwipeGesture*
///
double q_swipegesture_swipe_angle(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qswipegesture.html#setSwipeAngle)
///
/// @param self QSwipeGesture*
/// @param value double
///
void q_swipegesture_set_swipe_angle(void* self, double value);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_swipegesture_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_swipegesture_tr3(const char* s, const char* c, int n);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#gestureType)
///
/// @param self const QSwipeGesture*
///
/// @return enum Qt__GestureType
///
int32_t q_swipegesture_gesture_type(const void* self);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#state)
///
/// @param self const QSwipeGesture*
///
/// @return enum Qt__GestureState
///
int32_t q_swipegesture_state(const void* self);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#hotSpot)
///
/// @param self const QSwipeGesture*
///
QPointF* q_swipegesture_hot_spot(const void* self);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#setHotSpot)
///
/// @param self QSwipeGesture*
/// @param value QPointF*
///
void q_swipegesture_set_hot_spot(void* self, const void* value);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#hasHotSpot)
///
/// @param self const QSwipeGesture*
///
bool q_swipegesture_has_hot_spot(const void* self);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#unsetHotSpot)
///
/// @param self QSwipeGesture*
///
void q_swipegesture_unset_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#setGestureCancelPolicy)
///
/// @param self QSwipeGesture*
/// @param policy enum QGesture__GestureCancelPolicy
///
void q_swipegesture_set_gesture_cancel_policy(void* self, int32_t policy);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#gestureCancelPolicy)
///
/// @param self const QSwipeGesture*
///
/// @return enum QGesture__GestureCancelPolicy
///
int32_t q_swipegesture_gesture_cancel_policy(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QSwipeGesture*
///
const char* q_swipegesture_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSwipeGesture*
/// @param name const char*
///
void q_swipegesture_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QSwipeGesture*
///
bool q_swipegesture_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QSwipeGesture*
///
bool q_swipegesture_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QSwipeGesture*
///
bool q_swipegesture_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QSwipeGesture*
///
bool q_swipegesture_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSwipeGesture*
/// @param b bool
///
bool q_swipegesture_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QSwipeGesture*
///
QThread* q_swipegesture_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSwipeGesture*
/// @param thread QThread*
///
bool q_swipegesture_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSwipeGesture*
/// @param interval int
///
int32_t q_swipegesture_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSwipeGesture*
/// @param time int64_t of nanoseconds
///
int32_t q_swipegesture_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSwipeGesture*
/// @param id int
///
void q_swipegesture_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSwipeGesture*
/// @param id enum Qt__TimerId
///
void q_swipegesture_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QSwipeGesture*
///
/// @return libqt_list of QObject*
///
libqt_list q_swipegesture_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QSwipeGesture*
/// @param parent QObject*
///
void q_swipegesture_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSwipeGesture*
/// @param filterObj QObject*
///
void q_swipegesture_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSwipeGesture*
/// @param obj QObject*
///
void q_swipegesture_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_swipegesture_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_swipegesture_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QSwipeGesture*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_swipegesture_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_swipegesture_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_swipegesture_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSwipeGesture*
///
bool q_swipegesture_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSwipeGesture*
/// @param receiver QObject*
///
bool q_swipegesture_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_swipegesture_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QSwipeGesture*
///
void q_swipegesture_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QSwipeGesture*
///
void q_swipegesture_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSwipeGesture*
/// @param name const char*
/// @param value QVariant*
///
bool q_swipegesture_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QSwipeGesture*
/// @param name const char*
///
QVariant* q_swipegesture_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QSwipeGesture*
///
const char** q_swipegesture_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSwipeGesture*
///
QBindingStorage* q_swipegesture_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QSwipeGesture*
///
const QBindingStorage* q_swipegesture_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSwipeGesture*
///
void q_swipegesture_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSwipeGesture*
/// @param callback void func(QSwipeGesture* self)
///
void q_swipegesture_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QSwipeGesture*
///
QObject* q_swipegesture_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QSwipeGesture*
/// @param classname const char*
///
bool q_swipegesture_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSwipeGesture*
///
void q_swipegesture_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSwipeGesture*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_swipegesture_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSwipeGesture*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_swipegesture_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_swipegesture_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_swipegesture_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QSwipeGesture*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_swipegesture_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSwipeGesture*
/// @param signal const char*
///
bool q_swipegesture_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSwipeGesture*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_swipegesture_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSwipeGesture*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_swipegesture_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QSwipeGesture*
/// @param receiver QObject*
/// @param member const char*
///
bool q_swipegesture_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSwipeGesture*
/// @param param1 QObject*
///
void q_swipegesture_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSwipeGesture*
/// @param callback void func(QSwipeGesture* self, QObject* param1)
///
void q_swipegesture_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSwipeGesture*
/// @param event QEvent*
///
bool q_swipegesture_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param event QEvent*
///
bool q_swipegesture_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param callback bool func(QSwipeGesture* self, QEvent* event)
///
void q_swipegesture_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSwipeGesture*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_swipegesture_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_swipegesture_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param callback bool func(QSwipeGesture* self, QObject* watched, QEvent* event)
///
void q_swipegesture_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSwipeGesture*
/// @param event QTimerEvent*
///
void q_swipegesture_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param event QTimerEvent*
///
void q_swipegesture_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param callback void func(QSwipeGesture* self, QTimerEvent* event)
///
void q_swipegesture_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSwipeGesture*
/// @param event QChildEvent*
///
void q_swipegesture_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param event QChildEvent*
///
void q_swipegesture_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param callback void func(QSwipeGesture* self, QChildEvent* event)
///
void q_swipegesture_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSwipeGesture*
/// @param event QEvent*
///
void q_swipegesture_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param event QEvent*
///
void q_swipegesture_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param callback void func(QSwipeGesture* self, QEvent* event)
///
void q_swipegesture_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSwipeGesture*
/// @param signal QMetaMethod*
///
void q_swipegesture_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param signal QMetaMethod*
///
void q_swipegesture_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param callback void func(QSwipeGesture* self, QMetaMethod* signal)
///
void q_swipegesture_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSwipeGesture*
/// @param signal QMetaMethod*
///
void q_swipegesture_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param signal QMetaMethod*
///
void q_swipegesture_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param callback void func(QSwipeGesture* self, QMetaMethod* signal)
///
void q_swipegesture_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSwipeGesture*
///
QObject* q_swipegesture_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSwipeGesture*
///
QObject* q_swipegesture_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param callback QObject* func(QSwipeGesture* self)
///
void q_swipegesture_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSwipeGesture*
///
int32_t q_swipegesture_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSwipeGesture*
///
int32_t q_swipegesture_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param callback int32_t func(QSwipeGesture* self)
///
void q_swipegesture_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSwipeGesture*
/// @param signal const char*
///
int32_t q_swipegesture_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSwipeGesture*
/// @param signal const char*
///
int32_t q_swipegesture_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param callback int32_t func(QSwipeGesture* self, const char* signal)
///
void q_swipegesture_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QSwipeGesture*
/// @param signal QMetaMethod*
///
bool q_swipegesture_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QSwipeGesture*
/// @param signal QMetaMethod*
///
bool q_swipegesture_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param callback bool func(QSwipeGesture* self, QMetaMethod* signal)
///
void q_swipegesture_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSwipeGesture*
/// @param callback void func(QSwipeGesture* self, const char* objectName)
///
void q_swipegesture_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qswipegesture.html#dtor.QSwipeGesture)
///
/// Delete this object from C++ memory.
///
/// @param self QSwipeGesture*
///
void q_swipegesture_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtapgesture.html)

/// q_tapgesture_new constructs a new QTapGesture object.
///
QTapGesture* q_tapgesture_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qtapgesture.html)

/// q_tapgesture_new2 constructs a new QTapGesture object.
///
/// @param parent QObject*
///
QTapGesture* q_tapgesture_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QTapGesture*
///
const QMetaObject* q_tapgesture_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QTapGesture*
/// @param callback const QMetaObject* func(const QTapGesture* self)
///
void q_tapgesture_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QTapGesture*
///
const QMetaObject* q_tapgesture_super_meta_object(const void* self);

/// @param self QTapGesture*
/// @param param1 const char*
///
void* q_tapgesture_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QTapGesture*
/// @param callback void* func(QTapGesture* self, const char* param1)
///
void q_tapgesture_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QTapGesture*
/// @param param1 const char*
///
void* q_tapgesture_super_metacast(void* self, const char* param1);

/// @param self QTapGesture*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_tapgesture_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QTapGesture*
/// @param callback int32_t func(QTapGesture* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_tapgesture_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QTapGesture*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_tapgesture_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_tapgesture_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qtapgesture.html#position)
///
/// @param self const QTapGesture*
///
QPointF* q_tapgesture_position(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtapgesture.html#setPosition)
///
/// @param self QTapGesture*
/// @param pos QPointF*
///
void q_tapgesture_set_position(void* self, const void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_tapgesture_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_tapgesture_tr3(const char* s, const char* c, int n);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#gestureType)
///
/// @param self const QTapGesture*
///
/// @return enum Qt__GestureType
///
int32_t q_tapgesture_gesture_type(const void* self);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#state)
///
/// @param self const QTapGesture*
///
/// @return enum Qt__GestureState
///
int32_t q_tapgesture_state(const void* self);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#hotSpot)
///
/// @param self const QTapGesture*
///
QPointF* q_tapgesture_hot_spot(const void* self);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#setHotSpot)
///
/// @param self QTapGesture*
/// @param value QPointF*
///
void q_tapgesture_set_hot_spot(void* self, const void* value);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#hasHotSpot)
///
/// @param self const QTapGesture*
///
bool q_tapgesture_has_hot_spot(const void* self);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#unsetHotSpot)
///
/// @param self QTapGesture*
///
void q_tapgesture_unset_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#setGestureCancelPolicy)
///
/// @param self QTapGesture*
/// @param policy enum QGesture__GestureCancelPolicy
///
void q_tapgesture_set_gesture_cancel_policy(void* self, int32_t policy);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#gestureCancelPolicy)
///
/// @param self const QTapGesture*
///
/// @return enum QGesture__GestureCancelPolicy
///
int32_t q_tapgesture_gesture_cancel_policy(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTapGesture*
///
const char* q_tapgesture_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QTapGesture*
/// @param name const char*
///
void q_tapgesture_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QTapGesture*
///
bool q_tapgesture_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QTapGesture*
///
bool q_tapgesture_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QTapGesture*
///
bool q_tapgesture_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QTapGesture*
///
bool q_tapgesture_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QTapGesture*
/// @param b bool
///
bool q_tapgesture_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QTapGesture*
///
QThread* q_tapgesture_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTapGesture*
/// @param thread QThread*
///
bool q_tapgesture_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTapGesture*
/// @param interval int
///
int32_t q_tapgesture_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTapGesture*
/// @param time int64_t of nanoseconds
///
int32_t q_tapgesture_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTapGesture*
/// @param id int
///
void q_tapgesture_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTapGesture*
/// @param id enum Qt__TimerId
///
void q_tapgesture_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QTapGesture*
///
/// @return libqt_list of QObject*
///
libqt_list q_tapgesture_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QTapGesture*
/// @param parent QObject*
///
void q_tapgesture_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QTapGesture*
/// @param filterObj QObject*
///
void q_tapgesture_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QTapGesture*
/// @param obj QObject*
///
void q_tapgesture_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_tapgesture_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_tapgesture_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QTapGesture*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_tapgesture_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_tapgesture_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_tapgesture_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTapGesture*
///
bool q_tapgesture_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTapGesture*
/// @param receiver QObject*
///
bool q_tapgesture_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_tapgesture_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QTapGesture*
///
void q_tapgesture_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QTapGesture*
///
void q_tapgesture_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTapGesture*
/// @param name const char*
/// @param value QVariant*
///
bool q_tapgesture_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QTapGesture*
/// @param name const char*
///
QVariant* q_tapgesture_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QTapGesture*
///
const char** q_tapgesture_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTapGesture*
///
QBindingStorage* q_tapgesture_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QTapGesture*
///
const QBindingStorage* q_tapgesture_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTapGesture*
///
void q_tapgesture_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTapGesture*
/// @param callback void func(QTapGesture* self)
///
void q_tapgesture_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QTapGesture*
///
QObject* q_tapgesture_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QTapGesture*
/// @param classname const char*
///
bool q_tapgesture_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QTapGesture*
///
void q_tapgesture_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTapGesture*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_tapgesture_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTapGesture*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_tapgesture_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_tapgesture_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_tapgesture_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QTapGesture*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_tapgesture_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTapGesture*
/// @param signal const char*
///
bool q_tapgesture_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTapGesture*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_tapgesture_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTapGesture*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_tapgesture_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTapGesture*
/// @param receiver QObject*
/// @param member const char*
///
bool q_tapgesture_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTapGesture*
/// @param param1 QObject*
///
void q_tapgesture_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTapGesture*
/// @param callback void func(QTapGesture* self, QObject* param1)
///
void q_tapgesture_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapGesture*
/// @param event QEvent*
///
bool q_tapgesture_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapGesture*
/// @param event QEvent*
///
bool q_tapgesture_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapGesture*
/// @param callback bool func(QTapGesture* self, QEvent* event)
///
void q_tapgesture_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapGesture*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_tapgesture_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapGesture*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_tapgesture_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapGesture*
/// @param callback bool func(QTapGesture* self, QObject* watched, QEvent* event)
///
void q_tapgesture_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapGesture*
/// @param event QTimerEvent*
///
void q_tapgesture_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapGesture*
/// @param event QTimerEvent*
///
void q_tapgesture_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapGesture*
/// @param callback void func(QTapGesture* self, QTimerEvent* event)
///
void q_tapgesture_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapGesture*
/// @param event QChildEvent*
///
void q_tapgesture_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapGesture*
/// @param event QChildEvent*
///
void q_tapgesture_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapGesture*
/// @param callback void func(QTapGesture* self, QChildEvent* event)
///
void q_tapgesture_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapGesture*
/// @param event QEvent*
///
void q_tapgesture_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapGesture*
/// @param event QEvent*
///
void q_tapgesture_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapGesture*
/// @param callback void func(QTapGesture* self, QEvent* event)
///
void q_tapgesture_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapGesture*
/// @param signal QMetaMethod*
///
void q_tapgesture_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapGesture*
/// @param signal QMetaMethod*
///
void q_tapgesture_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapGesture*
/// @param callback void func(QTapGesture* self, QMetaMethod* signal)
///
void q_tapgesture_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapGesture*
/// @param signal QMetaMethod*
///
void q_tapgesture_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapGesture*
/// @param signal QMetaMethod*
///
void q_tapgesture_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapGesture*
/// @param callback void func(QTapGesture* self, QMetaMethod* signal)
///
void q_tapgesture_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTapGesture*
///
QObject* q_tapgesture_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTapGesture*
///
QObject* q_tapgesture_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapGesture*
/// @param callback QObject* func(QTapGesture* self)
///
void q_tapgesture_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTapGesture*
///
int32_t q_tapgesture_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTapGesture*
///
int32_t q_tapgesture_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapGesture*
/// @param callback int32_t func(QTapGesture* self)
///
void q_tapgesture_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTapGesture*
/// @param signal const char*
///
int32_t q_tapgesture_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTapGesture*
/// @param signal const char*
///
int32_t q_tapgesture_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapGesture*
/// @param callback int32_t func(QTapGesture* self, const char* signal)
///
void q_tapgesture_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTapGesture*
/// @param signal QMetaMethod*
///
bool q_tapgesture_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTapGesture*
/// @param signal QMetaMethod*
///
bool q_tapgesture_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapGesture*
/// @param callback bool func(QTapGesture* self, QMetaMethod* signal)
///
void q_tapgesture_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTapGesture*
/// @param callback void func(QTapGesture* self, const char* objectName)
///
void q_tapgesture_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtapgesture.html#dtor.QTapGesture)
///
/// Delete this object from C++ memory.
///
/// @param self QTapGesture*
///
void q_tapgesture_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtapandholdgesture.html)

/// q_tapandholdgesture_new constructs a new QTapAndHoldGesture object.
///
QTapAndHoldGesture* q_tapandholdgesture_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qtapandholdgesture.html)

/// q_tapandholdgesture_new2 constructs a new QTapAndHoldGesture object.
///
/// @param parent QObject*
///
QTapAndHoldGesture* q_tapandholdgesture_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QTapAndHoldGesture*
///
const QMetaObject* q_tapandholdgesture_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QTapAndHoldGesture*
/// @param callback const QMetaObject* func(const QTapAndHoldGesture* self)
///
void q_tapandholdgesture_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QTapAndHoldGesture*
///
const QMetaObject* q_tapandholdgesture_super_meta_object(const void* self);

/// @param self QTapAndHoldGesture*
/// @param param1 const char*
///
void* q_tapandholdgesture_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QTapAndHoldGesture*
/// @param callback void* func(QTapAndHoldGesture* self, const char* param1)
///
void q_tapandholdgesture_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QTapAndHoldGesture*
/// @param param1 const char*
///
void* q_tapandholdgesture_super_metacast(void* self, const char* param1);

/// @param self QTapAndHoldGesture*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_tapandholdgesture_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QTapAndHoldGesture*
/// @param callback int32_t func(QTapAndHoldGesture* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_tapandholdgesture_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QTapAndHoldGesture*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_tapandholdgesture_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_tapandholdgesture_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qtapandholdgesture.html#position)
///
/// @param self const QTapAndHoldGesture*
///
QPointF* q_tapandholdgesture_position(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtapandholdgesture.html#setPosition)
///
/// @param self QTapAndHoldGesture*
/// @param pos QPointF*
///
void q_tapandholdgesture_set_position(void* self, const void* pos);

/// [Upstream resources](https://doc.qt.io/qt-6/qtapandholdgesture.html#setTimeout)
///
/// @param msecs int
///
void q_tapandholdgesture_set_timeout(int msecs);

/// [Upstream resources](https://doc.qt.io/qt-6/qtapandholdgesture.html#timeout)
///
int32_t q_tapandholdgesture_timeout();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_tapandholdgesture_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_tapandholdgesture_tr3(const char* s, const char* c, int n);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#gestureType)
///
/// @param self const QTapAndHoldGesture*
///
/// @return enum Qt__GestureType
///
int32_t q_tapandholdgesture_gesture_type(const void* self);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#state)
///
/// @param self const QTapAndHoldGesture*
///
/// @return enum Qt__GestureState
///
int32_t q_tapandholdgesture_state(const void* self);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#hotSpot)
///
/// @param self const QTapAndHoldGesture*
///
QPointF* q_tapandholdgesture_hot_spot(const void* self);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#setHotSpot)
///
/// @param self QTapAndHoldGesture*
/// @param value QPointF*
///
void q_tapandholdgesture_set_hot_spot(void* self, const void* value);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#hasHotSpot)
///
/// @param self const QTapAndHoldGesture*
///
bool q_tapandholdgesture_has_hot_spot(const void* self);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#unsetHotSpot)
///
/// @param self QTapAndHoldGesture*
///
void q_tapandholdgesture_unset_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#setGestureCancelPolicy)
///
/// @param self QTapAndHoldGesture*
/// @param policy enum QGesture__GestureCancelPolicy
///
void q_tapandholdgesture_set_gesture_cancel_policy(void* self, int32_t policy);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#gestureCancelPolicy)
///
/// @param self const QTapAndHoldGesture*
///
/// @return enum QGesture__GestureCancelPolicy
///
int32_t q_tapandholdgesture_gesture_cancel_policy(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTapAndHoldGesture*
///
const char* q_tapandholdgesture_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QTapAndHoldGesture*
/// @param name const char*
///
void q_tapandholdgesture_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QTapAndHoldGesture*
///
bool q_tapandholdgesture_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QTapAndHoldGesture*
///
bool q_tapandholdgesture_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QTapAndHoldGesture*
///
bool q_tapandholdgesture_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QTapAndHoldGesture*
///
bool q_tapandholdgesture_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QTapAndHoldGesture*
/// @param b bool
///
bool q_tapandholdgesture_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QTapAndHoldGesture*
///
QThread* q_tapandholdgesture_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTapAndHoldGesture*
/// @param thread QThread*
///
bool q_tapandholdgesture_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTapAndHoldGesture*
/// @param interval int
///
int32_t q_tapandholdgesture_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTapAndHoldGesture*
/// @param time int64_t of nanoseconds
///
int32_t q_tapandholdgesture_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTapAndHoldGesture*
/// @param id int
///
void q_tapandholdgesture_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTapAndHoldGesture*
/// @param id enum Qt__TimerId
///
void q_tapandholdgesture_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QTapAndHoldGesture*
///
/// @return libqt_list of QObject*
///
libqt_list q_tapandholdgesture_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QTapAndHoldGesture*
/// @param parent QObject*
///
void q_tapandholdgesture_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QTapAndHoldGesture*
/// @param filterObj QObject*
///
void q_tapandholdgesture_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QTapAndHoldGesture*
/// @param obj QObject*
///
void q_tapandholdgesture_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_tapandholdgesture_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_tapandholdgesture_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QTapAndHoldGesture*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_tapandholdgesture_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_tapandholdgesture_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_tapandholdgesture_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTapAndHoldGesture*
///
bool q_tapandholdgesture_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTapAndHoldGesture*
/// @param receiver QObject*
///
bool q_tapandholdgesture_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_tapandholdgesture_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QTapAndHoldGesture*
///
void q_tapandholdgesture_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QTapAndHoldGesture*
///
void q_tapandholdgesture_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTapAndHoldGesture*
/// @param name const char*
/// @param value QVariant*
///
bool q_tapandholdgesture_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QTapAndHoldGesture*
/// @param name const char*
///
QVariant* q_tapandholdgesture_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QTapAndHoldGesture*
///
const char** q_tapandholdgesture_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTapAndHoldGesture*
///
QBindingStorage* q_tapandholdgesture_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QTapAndHoldGesture*
///
const QBindingStorage* q_tapandholdgesture_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTapAndHoldGesture*
///
void q_tapandholdgesture_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTapAndHoldGesture*
/// @param callback void func(QTapAndHoldGesture* self)
///
void q_tapandholdgesture_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QTapAndHoldGesture*
///
QObject* q_tapandholdgesture_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QTapAndHoldGesture*
/// @param classname const char*
///
bool q_tapandholdgesture_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QTapAndHoldGesture*
///
void q_tapandholdgesture_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTapAndHoldGesture*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_tapandholdgesture_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTapAndHoldGesture*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_tapandholdgesture_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_tapandholdgesture_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_tapandholdgesture_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QTapAndHoldGesture*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_tapandholdgesture_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTapAndHoldGesture*
/// @param signal const char*
///
bool q_tapandholdgesture_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTapAndHoldGesture*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_tapandholdgesture_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTapAndHoldGesture*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_tapandholdgesture_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QTapAndHoldGesture*
/// @param receiver QObject*
/// @param member const char*
///
bool q_tapandholdgesture_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTapAndHoldGesture*
/// @param param1 QObject*
///
void q_tapandholdgesture_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTapAndHoldGesture*
/// @param callback void func(QTapAndHoldGesture* self, QObject* param1)
///
void q_tapandholdgesture_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param event QEvent*
///
bool q_tapandholdgesture_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param event QEvent*
///
bool q_tapandholdgesture_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param callback bool func(QTapAndHoldGesture* self, QEvent* event)
///
void q_tapandholdgesture_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_tapandholdgesture_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_tapandholdgesture_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param callback bool func(QTapAndHoldGesture* self, QObject* watched, QEvent* event)
///
void q_tapandholdgesture_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param event QTimerEvent*
///
void q_tapandholdgesture_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param event QTimerEvent*
///
void q_tapandholdgesture_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param callback void func(QTapAndHoldGesture* self, QTimerEvent* event)
///
void q_tapandholdgesture_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param event QChildEvent*
///
void q_tapandholdgesture_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param event QChildEvent*
///
void q_tapandholdgesture_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param callback void func(QTapAndHoldGesture* self, QChildEvent* event)
///
void q_tapandholdgesture_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param event QEvent*
///
void q_tapandholdgesture_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param event QEvent*
///
void q_tapandholdgesture_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param callback void func(QTapAndHoldGesture* self, QEvent* event)
///
void q_tapandholdgesture_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param signal QMetaMethod*
///
void q_tapandholdgesture_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param signal QMetaMethod*
///
void q_tapandholdgesture_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param callback void func(QTapAndHoldGesture* self, QMetaMethod* signal)
///
void q_tapandholdgesture_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param signal QMetaMethod*
///
void q_tapandholdgesture_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param signal QMetaMethod*
///
void q_tapandholdgesture_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param callback void func(QTapAndHoldGesture* self, QMetaMethod* signal)
///
void q_tapandholdgesture_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTapAndHoldGesture*
///
QObject* q_tapandholdgesture_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTapAndHoldGesture*
///
QObject* q_tapandholdgesture_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param callback QObject* func(QTapAndHoldGesture* self)
///
void q_tapandholdgesture_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTapAndHoldGesture*
///
int32_t q_tapandholdgesture_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTapAndHoldGesture*
///
int32_t q_tapandholdgesture_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param callback int32_t func(QTapAndHoldGesture* self)
///
void q_tapandholdgesture_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTapAndHoldGesture*
/// @param signal const char*
///
int32_t q_tapandholdgesture_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTapAndHoldGesture*
/// @param signal const char*
///
int32_t q_tapandholdgesture_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param callback int32_t func(QTapAndHoldGesture* self, const char* signal)
///
void q_tapandholdgesture_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QTapAndHoldGesture*
/// @param signal QMetaMethod*
///
bool q_tapandholdgesture_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QTapAndHoldGesture*
/// @param signal QMetaMethod*
///
bool q_tapandholdgesture_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param callback bool func(QTapAndHoldGesture* self, QMetaMethod* signal)
///
void q_tapandholdgesture_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTapAndHoldGesture*
/// @param callback void func(QTapAndHoldGesture* self, const char* objectName)
///
void q_tapandholdgesture_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtapandholdgesture.html#dtor.QTapAndHoldGesture)
///
/// Delete this object from C++ memory.
///
/// @param self QTapAndHoldGesture*
///
void q_tapandholdgesture_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgestureevent.html)

/// q_gestureevent_new constructs a new QGestureEvent object.
///
/// @param gestures libqt_list of QGesture*
///
QGestureEvent* q_gestureevent_new(libqt_list gestures);

/// [Upstream resources](https://doc.qt.io/qt-6/qgestureevent.html)

/// q_gestureevent_new2 constructs a new QGestureEvent object.
///
/// @param param1 QGestureEvent*
///
QGestureEvent* q_gestureevent_new2(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qgestureevent.html#gestures)
///
/// @param self const QGestureEvent*
///
/// @return libqt_list of QGesture*
///
libqt_list q_gestureevent_gestures(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgestureevent.html#gesture)
///
/// @param self const QGestureEvent*
/// @param type enum Qt__GestureType
///
QGesture* q_gestureevent_gesture(const void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qgestureevent.html#activeGestures)
///
/// @param self const QGestureEvent*
///
/// @return libqt_list of QGesture*
///
libqt_list q_gestureevent_active_gestures(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgestureevent.html#canceledGestures)
///
/// @param self const QGestureEvent*
///
/// @return libqt_list of QGesture*
///
libqt_list q_gestureevent_canceled_gestures(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgestureevent.html#setAccepted)
///
/// @param self QGestureEvent*
/// @param param1 QGesture*
/// @param param2 bool
///
void q_gestureevent_set_accepted(void* self, void* param1, bool param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qgestureevent.html#accept)
///
/// @param self QGestureEvent*
/// @param param1 QGesture*
///
void q_gestureevent_accept(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qgestureevent.html#ignore)
///
/// @param self QGestureEvent*
/// @param param1 QGesture*
///
void q_gestureevent_ignore(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qgestureevent.html#isAccepted)
///
/// @param self const QGestureEvent*
/// @param param1 QGesture*
///
bool q_gestureevent_is_accepted(const void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qgestureevent.html#setAccepted)
///
/// @param self QGestureEvent*
/// @param param1 enum Qt__GestureType
/// @param param2 bool
///
void q_gestureevent_set_accepted2(void* self, int32_t param1, bool param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qgestureevent.html#accept)
///
/// @param self QGestureEvent*
/// @param param1 enum Qt__GestureType
///
void q_gestureevent_accept2(void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qgestureevent.html#ignore)
///
/// @param self QGestureEvent*
/// @param param1 enum Qt__GestureType
///
void q_gestureevent_ignore2(void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qgestureevent.html#isAccepted)
///
/// @param self const QGestureEvent*
/// @param param1 enum Qt__GestureType
///
bool q_gestureevent_is_accepted2(const void* self, int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qgestureevent.html#setWidget)
///
/// @param self QGestureEvent*
/// @param widget QWidget*
///
void q_gestureevent_set_widget(void* self, void* widget);

/// [Upstream resources](https://doc.qt.io/qt-6/qgestureevent.html#widget)
///
/// @param self const QGestureEvent*
///
QWidget* q_gestureevent_widget(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgestureevent.html#mapToGraphicsScene)
///
/// @param self const QGestureEvent*
/// @param gesturePoint QPointF*
///
QPointF* q_gestureevent_map_to_graphics_scene(const void* self, const void* gesturePoint);

/// [Upstream resources](https://doc.qt.io/qt-6/qgestureevent.html#operator-eq)
///
/// @param self QGestureEvent*
/// @param param1 QGestureEvent*
///
void q_gestureevent_operator_assign(void* self, const void* param1);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self const QGestureEvent*
///
/// @return enum QEvent__Type
///
int32_t q_gestureevent_type(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self const QGestureEvent*
///
bool q_gestureevent_spontaneous(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self const QGestureEvent*
///
bool q_gestureevent_is_input_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self const QGestureEvent*
///
bool q_gestureevent_is_pointer_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self const QGestureEvent*
///
bool q_gestureevent_is_single_point_event(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_gestureevent_register_event_type();

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
///
int32_t q_gestureevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QGestureEvent*
///
QEvent* q_gestureevent_clone(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QGestureEvent*
///
QEvent* q_gestureevent_super_clone(const void* self);

/// Inherited from QEvent
///
/// [Upstream resources](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGestureEvent*
/// @param callback QEvent* func(QGestureEvent* self)
///
void q_gestureevent_on_clone(void* self, QEvent* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qgestureevent.html#dtor.QGestureEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QGestureEvent*
///
void q_gestureevent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#public-types)

typedef enum {
    QGESTURE_GESTURECANCELPOLICY_CANCELNONE = 0,
    QGESTURE_GESTURECANCELPOLICY_CANCELALLINCONTEXT = 1
} QGesture__GestureCancelPolicy;

/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#public-types)

typedef enum {
    QPINCHGESTURE_CHANGEFLAG_SCALEFACTORCHANGED = 1,
    QPINCHGESTURE_CHANGEFLAG_ROTATIONANGLECHANGED = 2,
    QPINCHGESTURE_CHANGEFLAG_CENTERPOINTCHANGED = 4
} QPinchGesture__ChangeFlag;

/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#public-types)

typedef enum {
    QSWIPEGESTURE_SWIPEDIRECTION_NODIRECTION = 0,
    QSWIPEGESTURE_SWIPEDIRECTION_LEFT = 1,
    QSWIPEGESTURE_SWIPEDIRECTION_RIGHT = 2,
    QSWIPEGESTURE_SWIPEDIRECTION_UP = 3,
    QSWIPEGESTURE_SWIPEDIRECTION_DOWN = 4
} QSwipeGesture__SwipeDirection;

#endif
