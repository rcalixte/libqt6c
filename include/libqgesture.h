#pragma once
#ifndef SRCQT6C_LIBQGESTURE_H
#define SRCQT6C_LIBQGESTURE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qgesture.html

/// q_gesture_new constructs a new QGesture object.
///
QGesture* q_gesture_new();

/// q_gesture_new2 constructs a new QGesture object.
///
/// @param parent QObject*
QGesture* q_gesture_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QGesture*
const QMetaObject* q_gesture_meta_object(void* self);

/// @param self QGesture*
/// @param param1 const char*
void* q_gesture_metacast(void* self, const char* param1);

/// @param self QGesture*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_gesture_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QGesture*
/// @param callback int32_t func(QGesture* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_gesture_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QGesture*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_gesture_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_gesture_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#gestureType)
///
/// @param self QGesture*
///
/// @return enum Qt__GestureType
int64_t q_gesture_gesture_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#state)
///
/// @param self QGesture*
///
/// @return enum Qt__GestureState
int32_t q_gesture_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#hotSpot)
///
/// @param self QGesture*
QPointF* q_gesture_hot_spot(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#setHotSpot)
///
/// @param self QGesture*
/// @param value QPointF*
void q_gesture_set_hot_spot(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#hasHotSpot)
///
/// @param self QGesture*
bool q_gesture_has_hot_spot(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#unsetHotSpot)
///
/// @param self QGesture*
void q_gesture_unset_hot_spot(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#setGestureCancelPolicy)
///
/// @param self QGesture*
/// @param policy enum QGesture__GestureCancelPolicy
void q_gesture_set_gesture_cancel_policy(void* self, int32_t policy);

/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#gestureCancelPolicy)
///
/// @param self QGesture*
///
/// @return enum QGesture__GestureCancelPolicy
int32_t q_gesture_gesture_cancel_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_gesture_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_gesture_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QGesture*
const char* q_gesture_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QGesture*
/// @param name char*
void q_gesture_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QGesture*
bool q_gesture_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QGesture*
bool q_gesture_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QGesture*
bool q_gesture_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QGesture*
bool q_gesture_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QGesture*
/// @param b bool
bool q_gesture_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QGesture*
QThread* q_gesture_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGesture*
/// @param thread QThread*
bool q_gesture_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGesture*
/// @param interval int
int32_t q_gesture_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGesture*
/// @param id int
void q_gesture_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QGesture*
/// @param id enum Qt__TimerId
void q_gesture_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QGesture*
libqt_list /* of QObject* */ q_gesture_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QGesture*
/// @param parent QObject*
void q_gesture_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QGesture*
/// @param filterObj QObject*
void q_gesture_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QGesture*
/// @param obj QObject*
void q_gesture_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_gesture_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGesture*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_gesture_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_gesture_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_gesture_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QGesture*
void q_gesture_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QGesture*
void q_gesture_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QGesture*
/// @param name const char*
/// @param value QVariant*
bool q_gesture_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QGesture*
/// @param name const char*
QVariant* q_gesture_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QGesture*
const char** q_gesture_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGesture*
QBindingStorage* q_gesture_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QGesture*
const QBindingStorage* q_gesture_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGesture*
void q_gesture_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGesture*
/// @param callback void func(QGesture* self)
void q_gesture_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QGesture*
QObject* q_gesture_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QGesture*
/// @param classname const char*
bool q_gesture_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QGesture*
void q_gesture_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QGesture*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_gesture_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QGesture*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_gesture_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_gesture_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QGesture*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_gesture_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGesture*
/// @param param1 QObject*
void q_gesture_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QGesture*
/// @param callback void func(QGesture* self, QObject* param1)
void q_gesture_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGesture*
/// @param event QEvent*
bool q_gesture_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGesture*
/// @param event QEvent*
bool q_gesture_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGesture*
/// @param callback bool func(QGesture* self, QEvent* event)
void q_gesture_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGesture*
/// @param watched QObject*
/// @param event QEvent*
bool q_gesture_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGesture*
/// @param watched QObject*
/// @param event QEvent*
bool q_gesture_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGesture*
/// @param callback bool func(QGesture* self, QObject* watched, QEvent* event)
void q_gesture_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGesture*
/// @param event QTimerEvent*
void q_gesture_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGesture*
/// @param event QTimerEvent*
void q_gesture_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGesture*
/// @param callback void func(QGesture* self, QTimerEvent* event)
void q_gesture_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGesture*
/// @param event QChildEvent*
void q_gesture_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGesture*
/// @param event QChildEvent*
void q_gesture_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGesture*
/// @param callback void func(QGesture* self, QChildEvent* event)
void q_gesture_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGesture*
/// @param event QEvent*
void q_gesture_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGesture*
/// @param event QEvent*
void q_gesture_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGesture*
/// @param callback void func(QGesture* self, QEvent* event)
void q_gesture_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGesture*
/// @param signal QMetaMethod*
void q_gesture_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGesture*
/// @param signal QMetaMethod*
void q_gesture_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGesture*
/// @param callback void func(QGesture* self, QMetaMethod* signal)
void q_gesture_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGesture*
/// @param signal QMetaMethod*
void q_gesture_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGesture*
/// @param signal QMetaMethod*
void q_gesture_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGesture*
/// @param callback void func(QGesture* self, QMetaMethod* signal)
void q_gesture_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGesture*
QObject* q_gesture_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGesture*
QObject* q_gesture_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGesture*
/// @param callback QObject* func()
void q_gesture_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGesture*
int32_t q_gesture_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGesture*
int32_t q_gesture_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGesture*
/// @param callback int32_t func()
void q_gesture_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGesture*
/// @param signal const char*
int32_t q_gesture_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGesture*
/// @param signal const char*
int32_t q_gesture_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGesture*
/// @param callback int32_t func(QGesture* self, const char* signal)
void q_gesture_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGesture*
/// @param signal QMetaMethod*
bool q_gesture_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGesture*
/// @param signal QMetaMethod*
bool q_gesture_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGesture*
/// @param callback bool func(QGesture* self, QMetaMethod* signal)
void q_gesture_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QGesture*
/// @param callback void func(QGesture* self, const char* objectName)
void q_gesture_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#dtor.QGesture)
///
/// Delete this object from C++ memory.
///
/// @param self QGesture*
void q_gesture_delete(void* self);

/// https://doc.qt.io/qt-6/qpangesture.html

/// q_pangesture_new constructs a new QPanGesture object.
///
QPanGesture* q_pangesture_new();

/// q_pangesture_new2 constructs a new QPanGesture object.
///
/// @param parent QObject*
QPanGesture* q_pangesture_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QPanGesture*
const QMetaObject* q_pangesture_meta_object(void* self);

/// @param self QPanGesture*
/// @param param1 const char*
void* q_pangesture_metacast(void* self, const char* param1);

/// @param self QPanGesture*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_pangesture_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPanGesture*
/// @param callback int32_t func(QPanGesture* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_pangesture_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QPanGesture*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_pangesture_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_pangesture_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpangesture.html#lastOffset)
///
/// @param self QPanGesture*
QPointF* q_pangesture_last_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpangesture.html#offset)
///
/// @param self QPanGesture*
QPointF* q_pangesture_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpangesture.html#delta)
///
/// @param self QPanGesture*
QPointF* q_pangesture_delta(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpangesture.html#acceleration)
///
/// @param self QPanGesture*
double q_pangesture_acceleration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpangesture.html#setLastOffset)
///
/// @param self QPanGesture*
/// @param value QPointF*
void q_pangesture_set_last_offset(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qpangesture.html#setOffset)
///
/// @param self QPanGesture*
/// @param value QPointF*
void q_pangesture_set_offset(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qpangesture.html#setAcceleration)
///
/// @param self QPanGesture*
/// @param value double
void q_pangesture_set_acceleration(void* self, double value);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_pangesture_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_pangesture_tr3(const char* s, const char* c, int n);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#gestureType)
///
/// @param self QPanGesture*
///
/// @return enum Qt__GestureType
int64_t q_pangesture_gesture_type(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#state)
///
/// @param self QPanGesture*
///
/// @return enum Qt__GestureState
int32_t q_pangesture_state(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#hotSpot)
///
/// @param self QPanGesture*
QPointF* q_pangesture_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#setHotSpot)
///
/// @param self QPanGesture*
/// @param value QPointF*
void q_pangesture_set_hot_spot(void* self, void* value);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#hasHotSpot)
///
/// @param self QPanGesture*
bool q_pangesture_has_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#unsetHotSpot)
///
/// @param self QPanGesture*
void q_pangesture_unset_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#setGestureCancelPolicy)
///
/// @param self QPanGesture*
/// @param policy enum QGesture__GestureCancelPolicy
void q_pangesture_set_gesture_cancel_policy(void* self, int32_t policy);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#gestureCancelPolicy)
///
/// @param self QPanGesture*
///
/// @return enum QGesture__GestureCancelPolicy
int32_t q_pangesture_gesture_cancel_policy(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPanGesture*
const char* q_pangesture_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPanGesture*
/// @param name char*
void q_pangesture_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QPanGesture*
bool q_pangesture_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QPanGesture*
bool q_pangesture_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QPanGesture*
bool q_pangesture_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QPanGesture*
bool q_pangesture_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPanGesture*
/// @param b bool
bool q_pangesture_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QPanGesture*
QThread* q_pangesture_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPanGesture*
/// @param thread QThread*
bool q_pangesture_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPanGesture*
/// @param interval int
int32_t q_pangesture_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPanGesture*
/// @param id int
void q_pangesture_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPanGesture*
/// @param id enum Qt__TimerId
void q_pangesture_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QPanGesture*
libqt_list /* of QObject* */ q_pangesture_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QPanGesture*
/// @param parent QObject*
void q_pangesture_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPanGesture*
/// @param filterObj QObject*
void q_pangesture_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPanGesture*
/// @param obj QObject*
void q_pangesture_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_pangesture_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPanGesture*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_pangesture_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_pangesture_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_pangesture_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QPanGesture*
void q_pangesture_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QPanGesture*
void q_pangesture_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPanGesture*
/// @param name const char*
/// @param value QVariant*
bool q_pangesture_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QPanGesture*
/// @param name const char*
QVariant* q_pangesture_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPanGesture*
const char** q_pangesture_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPanGesture*
QBindingStorage* q_pangesture_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPanGesture*
const QBindingStorage* q_pangesture_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPanGesture*
void q_pangesture_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPanGesture*
/// @param callback void func(QPanGesture* self)
void q_pangesture_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QPanGesture*
QObject* q_pangesture_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QPanGesture*
/// @param classname const char*
bool q_pangesture_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPanGesture*
void q_pangesture_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPanGesture*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_pangesture_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPanGesture*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_pangesture_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_pangesture_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPanGesture*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_pangesture_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPanGesture*
/// @param param1 QObject*
void q_pangesture_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPanGesture*
/// @param callback void func(QPanGesture* self, QObject* param1)
void q_pangesture_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPanGesture*
/// @param event QEvent*
bool q_pangesture_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPanGesture*
/// @param event QEvent*
bool q_pangesture_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPanGesture*
/// @param callback bool func(QPanGesture* self, QEvent* event)
void q_pangesture_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPanGesture*
/// @param watched QObject*
/// @param event QEvent*
bool q_pangesture_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPanGesture*
/// @param watched QObject*
/// @param event QEvent*
bool q_pangesture_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPanGesture*
/// @param callback bool func(QPanGesture* self, QObject* watched, QEvent* event)
void q_pangesture_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPanGesture*
/// @param event QTimerEvent*
void q_pangesture_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPanGesture*
/// @param event QTimerEvent*
void q_pangesture_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPanGesture*
/// @param callback void func(QPanGesture* self, QTimerEvent* event)
void q_pangesture_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPanGesture*
/// @param event QChildEvent*
void q_pangesture_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPanGesture*
/// @param event QChildEvent*
void q_pangesture_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPanGesture*
/// @param callback void func(QPanGesture* self, QChildEvent* event)
void q_pangesture_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPanGesture*
/// @param event QEvent*
void q_pangesture_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPanGesture*
/// @param event QEvent*
void q_pangesture_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPanGesture*
/// @param callback void func(QPanGesture* self, QEvent* event)
void q_pangesture_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPanGesture*
/// @param signal QMetaMethod*
void q_pangesture_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPanGesture*
/// @param signal QMetaMethod*
void q_pangesture_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPanGesture*
/// @param callback void func(QPanGesture* self, QMetaMethod* signal)
void q_pangesture_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPanGesture*
/// @param signal QMetaMethod*
void q_pangesture_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPanGesture*
/// @param signal QMetaMethod*
void q_pangesture_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPanGesture*
/// @param callback void func(QPanGesture* self, QMetaMethod* signal)
void q_pangesture_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPanGesture*
QObject* q_pangesture_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPanGesture*
QObject* q_pangesture_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPanGesture*
/// @param callback QObject* func()
void q_pangesture_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPanGesture*
int32_t q_pangesture_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPanGesture*
int32_t q_pangesture_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPanGesture*
/// @param callback int32_t func()
void q_pangesture_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPanGesture*
/// @param signal const char*
int32_t q_pangesture_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPanGesture*
/// @param signal const char*
int32_t q_pangesture_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPanGesture*
/// @param callback int32_t func(QPanGesture* self, const char* signal)
void q_pangesture_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPanGesture*
/// @param signal QMetaMethod*
bool q_pangesture_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPanGesture*
/// @param signal QMetaMethod*
bool q_pangesture_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPanGesture*
/// @param callback bool func(QPanGesture* self, QMetaMethod* signal)
void q_pangesture_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPanGesture*
/// @param callback void func(QPanGesture* self, const char* objectName)
void q_pangesture_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpangesture.html#dtor.QPanGesture)
///
/// Delete this object from C++ memory.
///
/// @param self QPanGesture*
void q_pangesture_delete(void* self);

/// https://doc.qt.io/qt-6/qpinchgesture.html

/// q_pinchgesture_new constructs a new QPinchGesture object.
///
QPinchGesture* q_pinchgesture_new();

/// q_pinchgesture_new2 constructs a new QPinchGesture object.
///
/// @param parent QObject*
QPinchGesture* q_pinchgesture_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QPinchGesture*
const QMetaObject* q_pinchgesture_meta_object(void* self);

/// @param self QPinchGesture*
/// @param param1 const char*
void* q_pinchgesture_metacast(void* self, const char* param1);

/// @param self QPinchGesture*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_pinchgesture_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPinchGesture*
/// @param callback int32_t func(QPinchGesture* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_pinchgesture_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QPinchGesture*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_pinchgesture_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_pinchgesture_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#totalChangeFlags)
///
/// @param self QPinchGesture*
///
/// @return flag of enum QPinchGesture__ChangeFlag
int64_t q_pinchgesture_total_change_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#setTotalChangeFlags)
///
/// @param self QPinchGesture*
/// @param value flag of enum QPinchGesture__ChangeFlag
void q_pinchgesture_set_total_change_flags(void* self, int64_t value);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#changeFlags)
///
/// @param self QPinchGesture*
///
/// @return flag of enum QPinchGesture__ChangeFlag
int64_t q_pinchgesture_change_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#setChangeFlags)
///
/// @param self QPinchGesture*
/// @param value flag of enum QPinchGesture__ChangeFlag
void q_pinchgesture_set_change_flags(void* self, int64_t value);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#startCenterPoint)
///
/// @param self QPinchGesture*
QPointF* q_pinchgesture_start_center_point(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#lastCenterPoint)
///
/// @param self QPinchGesture*
QPointF* q_pinchgesture_last_center_point(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#centerPoint)
///
/// @param self QPinchGesture*
QPointF* q_pinchgesture_center_point(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#setStartCenterPoint)
///
/// @param self QPinchGesture*
/// @param value QPointF*
void q_pinchgesture_set_start_center_point(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#setLastCenterPoint)
///
/// @param self QPinchGesture*
/// @param value QPointF*
void q_pinchgesture_set_last_center_point(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#setCenterPoint)
///
/// @param self QPinchGesture*
/// @param value QPointF*
void q_pinchgesture_set_center_point(void* self, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#totalScaleFactor)
///
/// @param self QPinchGesture*
double q_pinchgesture_total_scale_factor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#lastScaleFactor)
///
/// @param self QPinchGesture*
double q_pinchgesture_last_scale_factor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#scaleFactor)
///
/// @param self QPinchGesture*
double q_pinchgesture_scale_factor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#setTotalScaleFactor)
///
/// @param self QPinchGesture*
/// @param value double
void q_pinchgesture_set_total_scale_factor(void* self, double value);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#setLastScaleFactor)
///
/// @param self QPinchGesture*
/// @param value double
void q_pinchgesture_set_last_scale_factor(void* self, double value);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#setScaleFactor)
///
/// @param self QPinchGesture*
/// @param value double
void q_pinchgesture_set_scale_factor(void* self, double value);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#totalRotationAngle)
///
/// @param self QPinchGesture*
double q_pinchgesture_total_rotation_angle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#lastRotationAngle)
///
/// @param self QPinchGesture*
double q_pinchgesture_last_rotation_angle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#rotationAngle)
///
/// @param self QPinchGesture*
double q_pinchgesture_rotation_angle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#setTotalRotationAngle)
///
/// @param self QPinchGesture*
/// @param value double
void q_pinchgesture_set_total_rotation_angle(void* self, double value);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#setLastRotationAngle)
///
/// @param self QPinchGesture*
/// @param value double
void q_pinchgesture_set_last_rotation_angle(void* self, double value);

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#setRotationAngle)
///
/// @param self QPinchGesture*
/// @param value double
void q_pinchgesture_set_rotation_angle(void* self, double value);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_pinchgesture_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_pinchgesture_tr3(const char* s, const char* c, int n);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#gestureType)
///
/// @param self QPinchGesture*
///
/// @return enum Qt__GestureType
int64_t q_pinchgesture_gesture_type(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#state)
///
/// @param self QPinchGesture*
///
/// @return enum Qt__GestureState
int32_t q_pinchgesture_state(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#hotSpot)
///
/// @param self QPinchGesture*
QPointF* q_pinchgesture_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#setHotSpot)
///
/// @param self QPinchGesture*
/// @param value QPointF*
void q_pinchgesture_set_hot_spot(void* self, void* value);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#hasHotSpot)
///
/// @param self QPinchGesture*
bool q_pinchgesture_has_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#unsetHotSpot)
///
/// @param self QPinchGesture*
void q_pinchgesture_unset_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#setGestureCancelPolicy)
///
/// @param self QPinchGesture*
/// @param policy enum QGesture__GestureCancelPolicy
void q_pinchgesture_set_gesture_cancel_policy(void* self, int32_t policy);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#gestureCancelPolicy)
///
/// @param self QPinchGesture*
///
/// @return enum QGesture__GestureCancelPolicy
int32_t q_pinchgesture_gesture_cancel_policy(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPinchGesture*
const char* q_pinchgesture_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPinchGesture*
/// @param name char*
void q_pinchgesture_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QPinchGesture*
bool q_pinchgesture_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QPinchGesture*
bool q_pinchgesture_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QPinchGesture*
bool q_pinchgesture_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QPinchGesture*
bool q_pinchgesture_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPinchGesture*
/// @param b bool
bool q_pinchgesture_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QPinchGesture*
QThread* q_pinchgesture_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPinchGesture*
/// @param thread QThread*
bool q_pinchgesture_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPinchGesture*
/// @param interval int
int32_t q_pinchgesture_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPinchGesture*
/// @param id int
void q_pinchgesture_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPinchGesture*
/// @param id enum Qt__TimerId
void q_pinchgesture_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QPinchGesture*
libqt_list /* of QObject* */ q_pinchgesture_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QPinchGesture*
/// @param parent QObject*
void q_pinchgesture_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPinchGesture*
/// @param filterObj QObject*
void q_pinchgesture_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPinchGesture*
/// @param obj QObject*
void q_pinchgesture_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_pinchgesture_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPinchGesture*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_pinchgesture_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_pinchgesture_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_pinchgesture_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QPinchGesture*
void q_pinchgesture_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QPinchGesture*
void q_pinchgesture_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPinchGesture*
/// @param name const char*
/// @param value QVariant*
bool q_pinchgesture_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QPinchGesture*
/// @param name const char*
QVariant* q_pinchgesture_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPinchGesture*
const char** q_pinchgesture_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPinchGesture*
QBindingStorage* q_pinchgesture_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPinchGesture*
const QBindingStorage* q_pinchgesture_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPinchGesture*
void q_pinchgesture_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPinchGesture*
/// @param callback void func(QPinchGesture* self)
void q_pinchgesture_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QPinchGesture*
QObject* q_pinchgesture_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QPinchGesture*
/// @param classname const char*
bool q_pinchgesture_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPinchGesture*
void q_pinchgesture_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPinchGesture*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_pinchgesture_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPinchGesture*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_pinchgesture_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_pinchgesture_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPinchGesture*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_pinchgesture_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPinchGesture*
/// @param param1 QObject*
void q_pinchgesture_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPinchGesture*
/// @param callback void func(QPinchGesture* self, QObject* param1)
void q_pinchgesture_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPinchGesture*
/// @param event QEvent*
bool q_pinchgesture_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param event QEvent*
bool q_pinchgesture_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param callback bool func(QPinchGesture* self, QEvent* event)
void q_pinchgesture_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPinchGesture*
/// @param watched QObject*
/// @param event QEvent*
bool q_pinchgesture_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param watched QObject*
/// @param event QEvent*
bool q_pinchgesture_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param callback bool func(QPinchGesture* self, QObject* watched, QEvent* event)
void q_pinchgesture_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPinchGesture*
/// @param event QTimerEvent*
void q_pinchgesture_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param event QTimerEvent*
void q_pinchgesture_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param callback void func(QPinchGesture* self, QTimerEvent* event)
void q_pinchgesture_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPinchGesture*
/// @param event QChildEvent*
void q_pinchgesture_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param event QChildEvent*
void q_pinchgesture_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param callback void func(QPinchGesture* self, QChildEvent* event)
void q_pinchgesture_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPinchGesture*
/// @param event QEvent*
void q_pinchgesture_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param event QEvent*
void q_pinchgesture_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param callback void func(QPinchGesture* self, QEvent* event)
void q_pinchgesture_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPinchGesture*
/// @param signal QMetaMethod*
void q_pinchgesture_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param signal QMetaMethod*
void q_pinchgesture_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param callback void func(QPinchGesture* self, QMetaMethod* signal)
void q_pinchgesture_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPinchGesture*
/// @param signal QMetaMethod*
void q_pinchgesture_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param signal QMetaMethod*
void q_pinchgesture_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param callback void func(QPinchGesture* self, QMetaMethod* signal)
void q_pinchgesture_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPinchGesture*
QObject* q_pinchgesture_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPinchGesture*
QObject* q_pinchgesture_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param callback QObject* func()
void q_pinchgesture_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPinchGesture*
int32_t q_pinchgesture_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPinchGesture*
int32_t q_pinchgesture_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param callback int32_t func()
void q_pinchgesture_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPinchGesture*
/// @param signal const char*
int32_t q_pinchgesture_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param signal const char*
int32_t q_pinchgesture_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param callback int32_t func(QPinchGesture* self, const char* signal)
void q_pinchgesture_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPinchGesture*
/// @param signal QMetaMethod*
bool q_pinchgesture_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param signal QMetaMethod*
bool q_pinchgesture_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPinchGesture*
/// @param callback bool func(QPinchGesture* self, QMetaMethod* signal)
void q_pinchgesture_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPinchGesture*
/// @param callback void func(QPinchGesture* self, const char* objectName)
void q_pinchgesture_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpinchgesture.html#dtor.QPinchGesture)
///
/// Delete this object from C++ memory.
///
/// @param self QPinchGesture*
void q_pinchgesture_delete(void* self);

/// https://doc.qt.io/qt-6/qswipegesture.html

/// q_swipegesture_new constructs a new QSwipeGesture object.
///
QSwipeGesture* q_swipegesture_new();

/// q_swipegesture_new2 constructs a new QSwipeGesture object.
///
/// @param parent QObject*
QSwipeGesture* q_swipegesture_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QSwipeGesture*
const QMetaObject* q_swipegesture_meta_object(void* self);

/// @param self QSwipeGesture*
/// @param param1 const char*
void* q_swipegesture_metacast(void* self, const char* param1);

/// @param self QSwipeGesture*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_swipegesture_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QSwipeGesture*
/// @param callback int32_t func(QSwipeGesture* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_swipegesture_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QSwipeGesture*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_swipegesture_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_swipegesture_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qswipegesture.html#horizontalDirection)
///
/// @param self QSwipeGesture*
///
/// @return enum QSwipeGesture__SwipeDirection
int32_t q_swipegesture_horizontal_direction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qswipegesture.html#verticalDirection)
///
/// @param self QSwipeGesture*
///
/// @return enum QSwipeGesture__SwipeDirection
int32_t q_swipegesture_vertical_direction(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qswipegesture.html#swipeAngle)
///
/// @param self QSwipeGesture*
double q_swipegesture_swipe_angle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qswipegesture.html#setSwipeAngle)
///
/// @param self QSwipeGesture*
/// @param value double
void q_swipegesture_set_swipe_angle(void* self, double value);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_swipegesture_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_swipegesture_tr3(const char* s, const char* c, int n);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#gestureType)
///
/// @param self QSwipeGesture*
///
/// @return enum Qt__GestureType
int64_t q_swipegesture_gesture_type(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#state)
///
/// @param self QSwipeGesture*
///
/// @return enum Qt__GestureState
int32_t q_swipegesture_state(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#hotSpot)
///
/// @param self QSwipeGesture*
QPointF* q_swipegesture_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#setHotSpot)
///
/// @param self QSwipeGesture*
/// @param value QPointF*
void q_swipegesture_set_hot_spot(void* self, void* value);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#hasHotSpot)
///
/// @param self QSwipeGesture*
bool q_swipegesture_has_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#unsetHotSpot)
///
/// @param self QSwipeGesture*
void q_swipegesture_unset_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#setGestureCancelPolicy)
///
/// @param self QSwipeGesture*
/// @param policy enum QGesture__GestureCancelPolicy
void q_swipegesture_set_gesture_cancel_policy(void* self, int32_t policy);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#gestureCancelPolicy)
///
/// @param self QSwipeGesture*
///
/// @return enum QGesture__GestureCancelPolicy
int32_t q_swipegesture_gesture_cancel_policy(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSwipeGesture*
const char* q_swipegesture_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QSwipeGesture*
/// @param name char*
void q_swipegesture_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QSwipeGesture*
bool q_swipegesture_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QSwipeGesture*
bool q_swipegesture_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QSwipeGesture*
bool q_swipegesture_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QSwipeGesture*
bool q_swipegesture_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QSwipeGesture*
/// @param b bool
bool q_swipegesture_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QSwipeGesture*
QThread* q_swipegesture_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSwipeGesture*
/// @param thread QThread*
bool q_swipegesture_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSwipeGesture*
/// @param interval int
int32_t q_swipegesture_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSwipeGesture*
/// @param id int
void q_swipegesture_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QSwipeGesture*
/// @param id enum Qt__TimerId
void q_swipegesture_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QSwipeGesture*
libqt_list /* of QObject* */ q_swipegesture_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QSwipeGesture*
/// @param parent QObject*
void q_swipegesture_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QSwipeGesture*
/// @param filterObj QObject*
void q_swipegesture_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QSwipeGesture*
/// @param obj QObject*
void q_swipegesture_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_swipegesture_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSwipeGesture*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_swipegesture_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_swipegesture_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_swipegesture_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QSwipeGesture*
void q_swipegesture_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QSwipeGesture*
void q_swipegesture_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QSwipeGesture*
/// @param name const char*
/// @param value QVariant*
bool q_swipegesture_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QSwipeGesture*
/// @param name const char*
QVariant* q_swipegesture_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QSwipeGesture*
const char** q_swipegesture_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSwipeGesture*
QBindingStorage* q_swipegesture_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QSwipeGesture*
const QBindingStorage* q_swipegesture_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSwipeGesture*
void q_swipegesture_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSwipeGesture*
/// @param callback void func(QSwipeGesture* self)
void q_swipegesture_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QSwipeGesture*
QObject* q_swipegesture_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QSwipeGesture*
/// @param classname const char*
bool q_swipegesture_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QSwipeGesture*
void q_swipegesture_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QSwipeGesture*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_swipegesture_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QSwipeGesture*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_swipegesture_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_swipegesture_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QSwipeGesture*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_swipegesture_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSwipeGesture*
/// @param param1 QObject*
void q_swipegesture_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QSwipeGesture*
/// @param callback void func(QSwipeGesture* self, QObject* param1)
void q_swipegesture_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSwipeGesture*
/// @param event QEvent*
bool q_swipegesture_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param event QEvent*
bool q_swipegesture_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param callback bool func(QSwipeGesture* self, QEvent* event)
void q_swipegesture_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSwipeGesture*
/// @param watched QObject*
/// @param event QEvent*
bool q_swipegesture_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param watched QObject*
/// @param event QEvent*
bool q_swipegesture_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param callback bool func(QSwipeGesture* self, QObject* watched, QEvent* event)
void q_swipegesture_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSwipeGesture*
/// @param event QTimerEvent*
void q_swipegesture_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param event QTimerEvent*
void q_swipegesture_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param callback void func(QSwipeGesture* self, QTimerEvent* event)
void q_swipegesture_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSwipeGesture*
/// @param event QChildEvent*
void q_swipegesture_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param event QChildEvent*
void q_swipegesture_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param callback void func(QSwipeGesture* self, QChildEvent* event)
void q_swipegesture_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSwipeGesture*
/// @param event QEvent*
void q_swipegesture_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param event QEvent*
void q_swipegesture_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param callback void func(QSwipeGesture* self, QEvent* event)
void q_swipegesture_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSwipeGesture*
/// @param signal QMetaMethod*
void q_swipegesture_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param signal QMetaMethod*
void q_swipegesture_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param callback void func(QSwipeGesture* self, QMetaMethod* signal)
void q_swipegesture_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSwipeGesture*
/// @param signal QMetaMethod*
void q_swipegesture_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param signal QMetaMethod*
void q_swipegesture_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param callback void func(QSwipeGesture* self, QMetaMethod* signal)
void q_swipegesture_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSwipeGesture*
QObject* q_swipegesture_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSwipeGesture*
QObject* q_swipegesture_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param callback QObject* func()
void q_swipegesture_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSwipeGesture*
int32_t q_swipegesture_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSwipeGesture*
int32_t q_swipegesture_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param callback int32_t func()
void q_swipegesture_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSwipeGesture*
/// @param signal const char*
int32_t q_swipegesture_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param signal const char*
int32_t q_swipegesture_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param callback int32_t func(QSwipeGesture* self, const char* signal)
void q_swipegesture_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QSwipeGesture*
/// @param signal QMetaMethod*
bool q_swipegesture_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param signal QMetaMethod*
bool q_swipegesture_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QSwipeGesture*
/// @param callback bool func(QSwipeGesture* self, QMetaMethod* signal)
void q_swipegesture_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QSwipeGesture*
/// @param callback void func(QSwipeGesture* self, const char* objectName)
void q_swipegesture_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qswipegesture.html#dtor.QSwipeGesture)
///
/// Delete this object from C++ memory.
///
/// @param self QSwipeGesture*
void q_swipegesture_delete(void* self);

/// https://doc.qt.io/qt-6/qtapgesture.html

/// q_tapgesture_new constructs a new QTapGesture object.
///
QTapGesture* q_tapgesture_new();

/// q_tapgesture_new2 constructs a new QTapGesture object.
///
/// @param parent QObject*
QTapGesture* q_tapgesture_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QTapGesture*
const QMetaObject* q_tapgesture_meta_object(void* self);

/// @param self QTapGesture*
/// @param param1 const char*
void* q_tapgesture_metacast(void* self, const char* param1);

/// @param self QTapGesture*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_tapgesture_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QTapGesture*
/// @param callback int32_t func(QTapGesture* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_tapgesture_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QTapGesture*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_tapgesture_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_tapgesture_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtapgesture.html#position)
///
/// @param self QTapGesture*
QPointF* q_tapgesture_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtapgesture.html#setPosition)
///
/// @param self QTapGesture*
/// @param pos QPointF*
void q_tapgesture_set_position(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_tapgesture_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_tapgesture_tr3(const char* s, const char* c, int n);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#gestureType)
///
/// @param self QTapGesture*
///
/// @return enum Qt__GestureType
int64_t q_tapgesture_gesture_type(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#state)
///
/// @param self QTapGesture*
///
/// @return enum Qt__GestureState
int32_t q_tapgesture_state(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#hotSpot)
///
/// @param self QTapGesture*
QPointF* q_tapgesture_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#setHotSpot)
///
/// @param self QTapGesture*
/// @param value QPointF*
void q_tapgesture_set_hot_spot(void* self, void* value);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#hasHotSpot)
///
/// @param self QTapGesture*
bool q_tapgesture_has_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#unsetHotSpot)
///
/// @param self QTapGesture*
void q_tapgesture_unset_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#setGestureCancelPolicy)
///
/// @param self QTapGesture*
/// @param policy enum QGesture__GestureCancelPolicy
void q_tapgesture_set_gesture_cancel_policy(void* self, int32_t policy);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#gestureCancelPolicy)
///
/// @param self QTapGesture*
///
/// @return enum QGesture__GestureCancelPolicy
int32_t q_tapgesture_gesture_cancel_policy(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTapGesture*
const char* q_tapgesture_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QTapGesture*
/// @param name char*
void q_tapgesture_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QTapGesture*
bool q_tapgesture_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QTapGesture*
bool q_tapgesture_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QTapGesture*
bool q_tapgesture_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QTapGesture*
bool q_tapgesture_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QTapGesture*
/// @param b bool
bool q_tapgesture_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QTapGesture*
QThread* q_tapgesture_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTapGesture*
/// @param thread QThread*
bool q_tapgesture_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTapGesture*
/// @param interval int
int32_t q_tapgesture_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTapGesture*
/// @param id int
void q_tapgesture_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTapGesture*
/// @param id enum Qt__TimerId
void q_tapgesture_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QTapGesture*
libqt_list /* of QObject* */ q_tapgesture_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QTapGesture*
/// @param parent QObject*
void q_tapgesture_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QTapGesture*
/// @param filterObj QObject*
void q_tapgesture_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QTapGesture*
/// @param obj QObject*
void q_tapgesture_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_tapgesture_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTapGesture*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_tapgesture_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_tapgesture_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_tapgesture_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QTapGesture*
void q_tapgesture_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QTapGesture*
void q_tapgesture_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTapGesture*
/// @param name const char*
/// @param value QVariant*
bool q_tapgesture_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QTapGesture*
/// @param name const char*
QVariant* q_tapgesture_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTapGesture*
const char** q_tapgesture_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTapGesture*
QBindingStorage* q_tapgesture_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTapGesture*
const QBindingStorage* q_tapgesture_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTapGesture*
void q_tapgesture_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTapGesture*
/// @param callback void func(QTapGesture* self)
void q_tapgesture_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QTapGesture*
QObject* q_tapgesture_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QTapGesture*
/// @param classname const char*
bool q_tapgesture_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QTapGesture*
void q_tapgesture_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTapGesture*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_tapgesture_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTapGesture*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_tapgesture_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_tapgesture_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTapGesture*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_tapgesture_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTapGesture*
/// @param param1 QObject*
void q_tapgesture_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTapGesture*
/// @param callback void func(QTapGesture* self, QObject* param1)
void q_tapgesture_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapGesture*
/// @param event QEvent*
bool q_tapgesture_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapGesture*
/// @param event QEvent*
bool q_tapgesture_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapGesture*
/// @param callback bool func(QTapGesture* self, QEvent* event)
void q_tapgesture_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapGesture*
/// @param watched QObject*
/// @param event QEvent*
bool q_tapgesture_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapGesture*
/// @param watched QObject*
/// @param event QEvent*
bool q_tapgesture_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapGesture*
/// @param callback bool func(QTapGesture* self, QObject* watched, QEvent* event)
void q_tapgesture_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapGesture*
/// @param event QTimerEvent*
void q_tapgesture_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapGesture*
/// @param event QTimerEvent*
void q_tapgesture_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapGesture*
/// @param callback void func(QTapGesture* self, QTimerEvent* event)
void q_tapgesture_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapGesture*
/// @param event QChildEvent*
void q_tapgesture_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapGesture*
/// @param event QChildEvent*
void q_tapgesture_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapGesture*
/// @param callback void func(QTapGesture* self, QChildEvent* event)
void q_tapgesture_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapGesture*
/// @param event QEvent*
void q_tapgesture_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapGesture*
/// @param event QEvent*
void q_tapgesture_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapGesture*
/// @param callback void func(QTapGesture* self, QEvent* event)
void q_tapgesture_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapGesture*
/// @param signal QMetaMethod*
void q_tapgesture_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapGesture*
/// @param signal QMetaMethod*
void q_tapgesture_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapGesture*
/// @param callback void func(QTapGesture* self, QMetaMethod* signal)
void q_tapgesture_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapGesture*
/// @param signal QMetaMethod*
void q_tapgesture_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapGesture*
/// @param signal QMetaMethod*
void q_tapgesture_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapGesture*
/// @param callback void func(QTapGesture* self, QMetaMethod* signal)
void q_tapgesture_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapGesture*
QObject* q_tapgesture_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapGesture*
QObject* q_tapgesture_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapGesture*
/// @param callback QObject* func()
void q_tapgesture_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapGesture*
int32_t q_tapgesture_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapGesture*
int32_t q_tapgesture_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapGesture*
/// @param callback int32_t func()
void q_tapgesture_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapGesture*
/// @param signal const char*
int32_t q_tapgesture_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapGesture*
/// @param signal const char*
int32_t q_tapgesture_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapGesture*
/// @param callback int32_t func(QTapGesture* self, const char* signal)
void q_tapgesture_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapGesture*
/// @param signal QMetaMethod*
bool q_tapgesture_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapGesture*
/// @param signal QMetaMethod*
bool q_tapgesture_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapGesture*
/// @param callback bool func(QTapGesture* self, QMetaMethod* signal)
void q_tapgesture_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTapGesture*
/// @param callback void func(QTapGesture* self, const char* objectName)
void q_tapgesture_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtapgesture.html#dtor.QTapGesture)
///
/// Delete this object from C++ memory.
///
/// @param self QTapGesture*
void q_tapgesture_delete(void* self);

/// https://doc.qt.io/qt-6/qtapandholdgesture.html

/// q_tapandholdgesture_new constructs a new QTapAndHoldGesture object.
///
QTapAndHoldGesture* q_tapandholdgesture_new();

/// q_tapandholdgesture_new2 constructs a new QTapAndHoldGesture object.
///
/// @param parent QObject*
QTapAndHoldGesture* q_tapandholdgesture_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QTapAndHoldGesture*
const QMetaObject* q_tapandholdgesture_meta_object(void* self);

/// @param self QTapAndHoldGesture*
/// @param param1 const char*
void* q_tapandholdgesture_metacast(void* self, const char* param1);

/// @param self QTapAndHoldGesture*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_tapandholdgesture_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QTapAndHoldGesture*
/// @param callback int32_t func(QTapAndHoldGesture* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_tapandholdgesture_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QTapAndHoldGesture*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_tapandholdgesture_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_tapandholdgesture_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtapandholdgesture.html#position)
///
/// @param self QTapAndHoldGesture*
QPointF* q_tapandholdgesture_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtapandholdgesture.html#setPosition)
///
/// @param self QTapAndHoldGesture*
/// @param pos QPointF*
void q_tapandholdgesture_set_position(void* self, void* pos);

/// [Qt documentation](https://doc.qt.io/qt-6/qtapandholdgesture.html#setTimeout)
///
/// @param msecs int
void q_tapandholdgesture_set_timeout(int msecs);

/// [Qt documentation](https://doc.qt.io/qt-6/qtapandholdgesture.html#timeout)
///
int32_t q_tapandholdgesture_timeout();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_tapandholdgesture_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_tapandholdgesture_tr3(const char* s, const char* c, int n);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#gestureType)
///
/// @param self QTapAndHoldGesture*
///
/// @return enum Qt__GestureType
int64_t q_tapandholdgesture_gesture_type(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#state)
///
/// @param self QTapAndHoldGesture*
///
/// @return enum Qt__GestureState
int32_t q_tapandholdgesture_state(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#hotSpot)
///
/// @param self QTapAndHoldGesture*
QPointF* q_tapandholdgesture_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#setHotSpot)
///
/// @param self QTapAndHoldGesture*
/// @param value QPointF*
void q_tapandholdgesture_set_hot_spot(void* self, void* value);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#hasHotSpot)
///
/// @param self QTapAndHoldGesture*
bool q_tapandholdgesture_has_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#unsetHotSpot)
///
/// @param self QTapAndHoldGesture*
void q_tapandholdgesture_unset_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#setGestureCancelPolicy)
///
/// @param self QTapAndHoldGesture*
/// @param policy enum QGesture__GestureCancelPolicy
void q_tapandholdgesture_set_gesture_cancel_policy(void* self, int32_t policy);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#gestureCancelPolicy)
///
/// @param self QTapAndHoldGesture*
///
/// @return enum QGesture__GestureCancelPolicy
int32_t q_tapandholdgesture_gesture_cancel_policy(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTapAndHoldGesture*
const char* q_tapandholdgesture_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QTapAndHoldGesture*
/// @param name char*
void q_tapandholdgesture_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QTapAndHoldGesture*
bool q_tapandholdgesture_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QTapAndHoldGesture*
bool q_tapandholdgesture_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QTapAndHoldGesture*
bool q_tapandholdgesture_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QTapAndHoldGesture*
bool q_tapandholdgesture_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QTapAndHoldGesture*
/// @param b bool
bool q_tapandholdgesture_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QTapAndHoldGesture*
QThread* q_tapandholdgesture_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTapAndHoldGesture*
/// @param thread QThread*
bool q_tapandholdgesture_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTapAndHoldGesture*
/// @param interval int
int32_t q_tapandholdgesture_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTapAndHoldGesture*
/// @param id int
void q_tapandholdgesture_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTapAndHoldGesture*
/// @param id enum Qt__TimerId
void q_tapandholdgesture_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QTapAndHoldGesture*
libqt_list /* of QObject* */ q_tapandholdgesture_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QTapAndHoldGesture*
/// @param parent QObject*
void q_tapandholdgesture_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QTapAndHoldGesture*
/// @param filterObj QObject*
void q_tapandholdgesture_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QTapAndHoldGesture*
/// @param obj QObject*
void q_tapandholdgesture_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_tapandholdgesture_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTapAndHoldGesture*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_tapandholdgesture_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_tapandholdgesture_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_tapandholdgesture_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QTapAndHoldGesture*
void q_tapandholdgesture_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QTapAndHoldGesture*
void q_tapandholdgesture_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTapAndHoldGesture*
/// @param name const char*
/// @param value QVariant*
bool q_tapandholdgesture_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QTapAndHoldGesture*
/// @param name const char*
QVariant* q_tapandholdgesture_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTapAndHoldGesture*
const char** q_tapandholdgesture_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTapAndHoldGesture*
QBindingStorage* q_tapandholdgesture_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTapAndHoldGesture*
const QBindingStorage* q_tapandholdgesture_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTapAndHoldGesture*
void q_tapandholdgesture_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTapAndHoldGesture*
/// @param callback void func(QTapAndHoldGesture* self)
void q_tapandholdgesture_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QTapAndHoldGesture*
QObject* q_tapandholdgesture_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QTapAndHoldGesture*
/// @param classname const char*
bool q_tapandholdgesture_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QTapAndHoldGesture*
void q_tapandholdgesture_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTapAndHoldGesture*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_tapandholdgesture_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTapAndHoldGesture*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_tapandholdgesture_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_tapandholdgesture_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTapAndHoldGesture*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_tapandholdgesture_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTapAndHoldGesture*
/// @param param1 QObject*
void q_tapandholdgesture_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTapAndHoldGesture*
/// @param callback void func(QTapAndHoldGesture* self, QObject* param1)
void q_tapandholdgesture_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param event QEvent*
bool q_tapandholdgesture_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param event QEvent*
bool q_tapandholdgesture_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param callback bool func(QTapAndHoldGesture* self, QEvent* event)
void q_tapandholdgesture_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param watched QObject*
/// @param event QEvent*
bool q_tapandholdgesture_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param watched QObject*
/// @param event QEvent*
bool q_tapandholdgesture_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param callback bool func(QTapAndHoldGesture* self, QObject* watched, QEvent* event)
void q_tapandholdgesture_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param event QTimerEvent*
void q_tapandholdgesture_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param event QTimerEvent*
void q_tapandholdgesture_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param callback void func(QTapAndHoldGesture* self, QTimerEvent* event)
void q_tapandholdgesture_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param event QChildEvent*
void q_tapandholdgesture_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param event QChildEvent*
void q_tapandholdgesture_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param callback void func(QTapAndHoldGesture* self, QChildEvent* event)
void q_tapandholdgesture_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param event QEvent*
void q_tapandholdgesture_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param event QEvent*
void q_tapandholdgesture_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param callback void func(QTapAndHoldGesture* self, QEvent* event)
void q_tapandholdgesture_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param signal QMetaMethod*
void q_tapandholdgesture_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param signal QMetaMethod*
void q_tapandholdgesture_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param callback void func(QTapAndHoldGesture* self, QMetaMethod* signal)
void q_tapandholdgesture_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param signal QMetaMethod*
void q_tapandholdgesture_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param signal QMetaMethod*
void q_tapandholdgesture_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param callback void func(QTapAndHoldGesture* self, QMetaMethod* signal)
void q_tapandholdgesture_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapAndHoldGesture*
QObject* q_tapandholdgesture_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
QObject* q_tapandholdgesture_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param callback QObject* func()
void q_tapandholdgesture_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapAndHoldGesture*
int32_t q_tapandholdgesture_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
int32_t q_tapandholdgesture_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param callback int32_t func()
void q_tapandholdgesture_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param signal const char*
int32_t q_tapandholdgesture_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param signal const char*
int32_t q_tapandholdgesture_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param callback int32_t func(QTapAndHoldGesture* self, const char* signal)
void q_tapandholdgesture_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param signal QMetaMethod*
bool q_tapandholdgesture_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param signal QMetaMethod*
bool q_tapandholdgesture_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTapAndHoldGesture*
/// @param callback bool func(QTapAndHoldGesture* self, QMetaMethod* signal)
void q_tapandholdgesture_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTapAndHoldGesture*
/// @param callback void func(QTapAndHoldGesture* self, const char* objectName)
void q_tapandholdgesture_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtapandholdgesture.html#dtor.QTapAndHoldGesture)
///
/// Delete this object from C++ memory.
///
/// @param self QTapAndHoldGesture*
void q_tapandholdgesture_delete(void* self);

/// https://doc.qt.io/qt-6/qgestureevent.html

/// q_gestureevent_new constructs a new QGestureEvent object.
///
/// @param gestures libqt_list /* of QGesture* */
QGestureEvent* q_gestureevent_new(libqt_list gestures);

/// q_gestureevent_new2 constructs a new QGestureEvent object.
///
/// @param param1 QGestureEvent*
QGestureEvent* q_gestureevent_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qgestureevent.html#gestures)
///
/// @param self QGestureEvent*
libqt_list /* of QGesture* */ q_gestureevent_gestures(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgestureevent.html#gesture)
///
/// @param self QGestureEvent*
/// @param typeVal enum Qt__GestureType
QGesture* q_gestureevent_gesture(void* self, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qgestureevent.html#activeGestures)
///
/// @param self QGestureEvent*
libqt_list /* of QGesture* */ q_gestureevent_active_gestures(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgestureevent.html#canceledGestures)
///
/// @param self QGestureEvent*
libqt_list /* of QGesture* */ q_gestureevent_canceled_gestures(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgestureevent.html#setAccepted)
///
/// @param self QGestureEvent*
/// @param param1 QGesture*
/// @param param2 bool
void q_gestureevent_set_accepted(void* self, void* param1, bool param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qgestureevent.html#accept)
///
/// @param self QGestureEvent*
/// @param param1 QGesture*
void q_gestureevent_accept(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qgestureevent.html#ignore)
///
/// @param self QGestureEvent*
/// @param param1 QGesture*
void q_gestureevent_ignore(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qgestureevent.html#isAccepted)
///
/// @param self QGestureEvent*
/// @param param1 QGesture*
bool q_gestureevent_is_accepted(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qgestureevent.html#setAccepted)
///
/// @param self QGestureEvent*
/// @param param1 enum Qt__GestureType
/// @param param2 bool
void q_gestureevent_set_accepted2(void* self, int64_t param1, bool param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qgestureevent.html#accept)
///
/// @param self QGestureEvent*
/// @param param1 enum Qt__GestureType
void q_gestureevent_accept2(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qgestureevent.html#ignore)
///
/// @param self QGestureEvent*
/// @param param1 enum Qt__GestureType
void q_gestureevent_ignore2(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qgestureevent.html#isAccepted)
///
/// @param self QGestureEvent*
/// @param param1 enum Qt__GestureType
bool q_gestureevent_is_accepted2(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qgestureevent.html#setWidget)
///
/// @param self QGestureEvent*
/// @param widget QWidget*
void q_gestureevent_set_widget(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qgestureevent.html#widget)
///
/// @param self QGestureEvent*
QWidget* q_gestureevent_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qgestureevent.html#mapToGraphicsScene)
///
/// @param self QGestureEvent*
/// @param gesturePoint QPointF*
QPointF* q_gestureevent_map_to_graphics_scene(void* self, void* gesturePoint);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#type)
///
/// @param self QGestureEvent*
///
/// @return enum QEvent__Type
int32_t q_gestureevent_type(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#spontaneous)
///
/// @param self QGestureEvent*
bool q_gestureevent_spontaneous(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isInputEvent)
///
/// @param self QGestureEvent*
bool q_gestureevent_is_input_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isPointerEvent)
///
/// @param self QGestureEvent*
bool q_gestureevent_is_pointer_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#isSinglePointEvent)
///
/// @param self QGestureEvent*
bool q_gestureevent_is_single_point_event(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
int32_t q_gestureevent_register_event_type();

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#registerEventType)
///
/// @param hint int
int32_t q_gestureevent_register_event_type1(int hint);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QGestureEvent*
QEvent* q_gestureevent_clone(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QGestureEvent*
QEvent* q_gestureevent_qbase_clone(void* self);

/// Inherited from QEvent
///
/// [Qt documentation](https://doc.qt.io/qt-6/qevent.html#clone)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QGestureEvent*
/// @param callback QEvent* func()
void q_gestureevent_on_clone(void* self, QEvent* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qgestureevent.html#dtor.QGestureEvent)
///
/// Delete this object from C++ memory.
///
/// @param self QGestureEvent*
void q_gestureevent_delete(void* self);

/// https://doc.qt.io/qt-6/qgesture.html#types

typedef enum {
    QGESTURE_GESTURECANCELPOLICY_CANCELNONE = 0,
    QGESTURE_GESTURECANCELPOLICY_CANCELALLINCONTEXT = 1
} QGesture__GestureCancelPolicy;

typedef enum {
    QPINCHGESTURE_CHANGEFLAG_SCALEFACTORCHANGED = 1,
    QPINCHGESTURE_CHANGEFLAG_ROTATIONANGLECHANGED = 2,
    QPINCHGESTURE_CHANGEFLAG_CENTERPOINTCHANGED = 4
} QPinchGesture__ChangeFlag;

typedef enum {
    QSWIPEGESTURE_SWIPEDIRECTION_NODIRECTION = 0,
    QSWIPEGESTURE_SWIPEDIRECTION_LEFT = 1,
    QSWIPEGESTURE_SWIPEDIRECTION_RIGHT = 2,
    QSWIPEGESTURE_SWIPEDIRECTION_UP = 3,
    QSWIPEGESTURE_SWIPEDIRECTION_DOWN = 4
} QSwipeGesture__SwipeDirection;

#endif
