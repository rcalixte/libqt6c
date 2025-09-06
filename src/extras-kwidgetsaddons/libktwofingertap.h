#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKTWOFINGERTAP_H
#define SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKTWOFINGERTAP_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/ktwofingertap.html

/// k_twofingertap_new constructs a new KTwoFingerTap object.
///
KTwoFingerTap* k_twofingertap_new();

/// k_twofingertap_new2 constructs a new KTwoFingerTap object.
///
/// @param parent QObject*
KTwoFingerTap* k_twofingertap_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KTwoFingerTap*
const QMetaObject* k_twofingertap_meta_object(void* self);

/// @param self KTwoFingerTap*
/// @param param1 const char*
void* k_twofingertap_metacast(void* self, const char* param1);

/// @param self KTwoFingerTap*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_twofingertap_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KTwoFingerTap*
/// @param callback int32_t func(KTwoFingerTap* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_twofingertap_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KTwoFingerTap*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_twofingertap_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_twofingertap_tr(const char* s);

/// [Qt documentation](https://api-staging.kde.org/ktwofingertap.html#pos)
///
/// @param self KTwoFingerTap*
QPointF* k_twofingertap_pos(void* self);

/// [Qt documentation](https://api-staging.kde.org/ktwofingertap.html#setPos)
///
/// @param self KTwoFingerTap*
/// @param pos QPointF*
void k_twofingertap_set_pos(void* self, void* pos);

/// [Qt documentation](https://api-staging.kde.org/ktwofingertap.html#screenPos)
///
/// @param self KTwoFingerTap*
QPointF* k_twofingertap_screen_pos(void* self);

/// [Qt documentation](https://api-staging.kde.org/ktwofingertap.html#setScreenPos)
///
/// @param self KTwoFingerTap*
/// @param screenPos QPointF*
void k_twofingertap_set_screen_pos(void* self, void* screenPos);

/// [Qt documentation](https://api-staging.kde.org/ktwofingertap.html#scenePos)
///
/// @param self KTwoFingerTap*
QPointF* k_twofingertap_scene_pos(void* self);

/// [Qt documentation](https://api-staging.kde.org/ktwofingertap.html#setScenePos)
///
/// @param self KTwoFingerTap*
/// @param scenePos QPointF*
void k_twofingertap_set_scene_pos(void* self, void* scenePos);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_twofingertap_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_twofingertap_tr3(const char* s, const char* c, int n);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#gestureType)
///
/// @param self KTwoFingerTap*
///
/// @return enum Qt__GestureType
int64_t k_twofingertap_gesture_type(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#state)
///
/// @param self KTwoFingerTap*
///
/// @return enum Qt__GestureState
int32_t k_twofingertap_state(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#hotSpot)
///
/// @param self KTwoFingerTap*
QPointF* k_twofingertap_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#setHotSpot)
///
/// @param self KTwoFingerTap*
/// @param value QPointF*
void k_twofingertap_set_hot_spot(void* self, void* value);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#hasHotSpot)
///
/// @param self KTwoFingerTap*
bool k_twofingertap_has_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#unsetHotSpot)
///
/// @param self KTwoFingerTap*
void k_twofingertap_unset_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#setGestureCancelPolicy)
///
/// @param self KTwoFingerTap*
/// @param policy enum QGesture__GestureCancelPolicy
void k_twofingertap_set_gesture_cancel_policy(void* self, int32_t policy);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#gestureCancelPolicy)
///
/// @param self KTwoFingerTap*
///
/// @return enum QGesture__GestureCancelPolicy
int32_t k_twofingertap_gesture_cancel_policy(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTwoFingerTap*
const char* k_twofingertap_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KTwoFingerTap*
/// @param name char*
void k_twofingertap_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KTwoFingerTap*
bool k_twofingertap_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KTwoFingerTap*
bool k_twofingertap_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KTwoFingerTap*
bool k_twofingertap_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KTwoFingerTap*
bool k_twofingertap_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KTwoFingerTap*
/// @param b bool
bool k_twofingertap_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KTwoFingerTap*
QThread* k_twofingertap_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTwoFingerTap*
/// @param thread QThread*
bool k_twofingertap_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTwoFingerTap*
/// @param interval int
int32_t k_twofingertap_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTwoFingerTap*
/// @param id int
void k_twofingertap_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTwoFingerTap*
/// @param id enum Qt__TimerId
void k_twofingertap_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KTwoFingerTap*
libqt_list /* of QObject* */ k_twofingertap_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KTwoFingerTap*
/// @param parent QObject*
void k_twofingertap_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KTwoFingerTap*
/// @param filterObj QObject*
void k_twofingertap_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KTwoFingerTap*
/// @param obj QObject*
void k_twofingertap_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_twofingertap_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTwoFingerTap*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_twofingertap_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_twofingertap_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_twofingertap_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KTwoFingerTap*
void k_twofingertap_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KTwoFingerTap*
void k_twofingertap_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KTwoFingerTap*
/// @param name const char*
/// @param value QVariant*
bool k_twofingertap_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KTwoFingerTap*
/// @param name const char*
QVariant* k_twofingertap_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTwoFingerTap*
const char** k_twofingertap_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTwoFingerTap*
QBindingStorage* k_twofingertap_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTwoFingerTap*
const QBindingStorage* k_twofingertap_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTwoFingerTap*
void k_twofingertap_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTwoFingerTap*
/// @param callback void func(KTwoFingerTap* self)
void k_twofingertap_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KTwoFingerTap*
QObject* k_twofingertap_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KTwoFingerTap*
/// @param classname const char*
bool k_twofingertap_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KTwoFingerTap*
void k_twofingertap_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTwoFingerTap*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_twofingertap_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTwoFingerTap*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_twofingertap_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_twofingertap_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTwoFingerTap*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_twofingertap_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTwoFingerTap*
/// @param param1 QObject*
void k_twofingertap_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTwoFingerTap*
/// @param callback void func(KTwoFingerTap* self, QObject* param1)
void k_twofingertap_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param event QEvent*
bool k_twofingertap_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param event QEvent*
bool k_twofingertap_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param callback bool func(KTwoFingerTap* self, QEvent* event)
void k_twofingertap_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param watched QObject*
/// @param event QEvent*
bool k_twofingertap_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param watched QObject*
/// @param event QEvent*
bool k_twofingertap_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param callback bool func(KTwoFingerTap* self, QObject* watched, QEvent* event)
void k_twofingertap_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param event QTimerEvent*
void k_twofingertap_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param event QTimerEvent*
void k_twofingertap_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param callback void func(KTwoFingerTap* self, QTimerEvent* event)
void k_twofingertap_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param event QChildEvent*
void k_twofingertap_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param event QChildEvent*
void k_twofingertap_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param callback void func(KTwoFingerTap* self, QChildEvent* event)
void k_twofingertap_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param event QEvent*
void k_twofingertap_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param event QEvent*
void k_twofingertap_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param callback void func(KTwoFingerTap* self, QEvent* event)
void k_twofingertap_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param signal QMetaMethod*
void k_twofingertap_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param signal QMetaMethod*
void k_twofingertap_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param callback void func(KTwoFingerTap* self, QMetaMethod* signal)
void k_twofingertap_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param signal QMetaMethod*
void k_twofingertap_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param signal QMetaMethod*
void k_twofingertap_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param callback void func(KTwoFingerTap* self, QMetaMethod* signal)
void k_twofingertap_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTwoFingerTap*
QObject* k_twofingertap_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTwoFingerTap*
QObject* k_twofingertap_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param callback QObject* func()
void k_twofingertap_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTwoFingerTap*
int32_t k_twofingertap_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTwoFingerTap*
int32_t k_twofingertap_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param callback int32_t func()
void k_twofingertap_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param signal const char*
int32_t k_twofingertap_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param signal const char*
int32_t k_twofingertap_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param callback int32_t func(KTwoFingerTap* self, const char* signal)
void k_twofingertap_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param signal QMetaMethod*
bool k_twofingertap_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param signal QMetaMethod*
bool k_twofingertap_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param callback bool func(KTwoFingerTap* self, QMetaMethod* signal)
void k_twofingertap_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KTwoFingerTap*
/// @param callback void func(KTwoFingerTap* self, const char* objectName)
void k_twofingertap_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api-staging.kde.org/ktwofingertap.html#dtor.KTwoFingerTap)
///
/// Delete this object from C++ memory.
///
/// @param self KTwoFingerTap*
void k_twofingertap_delete(void* self);

/// https://api-staging.kde.org/ktwofingertaprecognizer.html

/// k_twofingertaprecognizer_new constructs a new KTwoFingerTapRecognizer object.
///
KTwoFingerTapRecognizer* k_twofingertaprecognizer_new();

/// [Qt documentation](https://api-staging.kde.org/ktwofingertaprecognizer.html#create)
///
/// @param self KTwoFingerTapRecognizer*
/// @param target QObject*
QGesture* k_twofingertaprecognizer_create(void* self, void* target);

/// [Qt documentation](https://api-staging.kde.org/ktwofingertaprecognizer.html#create)
///
/// Allows for overriding the related default method
///
/// @param self KTwoFingerTapRecognizer*
/// @param callback QGesture* func(KTwoFingerTapRecognizer* self, QObject* target)
void k_twofingertaprecognizer_on_create(void* self, QGesture* (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/ktwofingertaprecognizer.html#create)
///
/// Base class method implementation
///
/// @param self KTwoFingerTapRecognizer*
/// @param target QObject*
QGesture* k_twofingertaprecognizer_qbase_create(void* self, void* target);

/// [Qt documentation](https://api-staging.kde.org/ktwofingertaprecognizer.html#recognize)
///
/// @param self KTwoFingerTapRecognizer*
/// @param gesture QGesture*
/// @param watched QObject*
/// @param event QEvent*
///
/// @return flag of enum QGestureRecognizer__ResultFlag
int32_t k_twofingertaprecognizer_recognize(void* self, void* gesture, void* watched, void* event);

/// [Qt documentation](https://api-staging.kde.org/ktwofingertaprecognizer.html#recognize)
///
/// Allows for overriding the related default method
///
/// @param self KTwoFingerTapRecognizer*
/// @param callback int32_t func(KTwoFingerTapRecognizer* self, QGesture* gesture, QObject* watched, QEvent* event)
void k_twofingertaprecognizer_on_recognize(void* self, int32_t (*callback)(void*, void*, void*, void*));

/// [Qt documentation](https://api-staging.kde.org/ktwofingertaprecognizer.html#recognize)
///
/// Base class method implementation
///
/// @param self KTwoFingerTapRecognizer*
/// @param gesture QGesture*
/// @param watched QObject*
/// @param event QEvent*
///
/// @return flag of enum QGestureRecognizer__ResultFlag
int32_t k_twofingertaprecognizer_qbase_recognize(void* self, void* gesture, void* watched, void* event);

/// [Qt documentation](https://api-staging.kde.org/ktwofingertaprecognizer.html#tapRadius)
///
/// @param self KTwoFingerTapRecognizer*
int32_t k_twofingertaprecognizer_tap_radius(void* self);

/// [Qt documentation](https://api-staging.kde.org/ktwofingertaprecognizer.html#setTapRadius)
///
/// @param self KTwoFingerTapRecognizer*
/// @param i int
void k_twofingertaprecognizer_set_tap_radius(void* self, int i);

/// Inherited from QGestureRecognizer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#registerRecognizer)
///
/// @param recognizer QGestureRecognizer*
///
/// @return enum Qt__GestureType
int64_t k_twofingertaprecognizer_register_recognizer(void* recognizer);

/// Inherited from QGestureRecognizer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#unregisterRecognizer)
///
/// @param typeVal enum Qt__GestureType
void k_twofingertaprecognizer_unregister_recognizer(int64_t typeVal);

/// Inherited from QGestureRecognizer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#operator-eq)
///
/// @param self KTwoFingerTapRecognizer*
/// @param param1 QGestureRecognizer*
void k_twofingertaprecognizer_operator_assign(void* self, void* param1);

/// Inherited from QGestureRecognizer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTwoFingerTapRecognizer*
/// @param state QGesture*
void k_twofingertaprecognizer_reset(void* self, void* state);

/// Inherited from QGestureRecognizer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTwoFingerTapRecognizer*
/// @param state QGesture*
void k_twofingertaprecognizer_qbase_reset(void* self, void* state);

/// Inherited from QGestureRecognizer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTwoFingerTapRecognizer*
/// @param callback void func(KTwoFingerTapRecognizer* self, QGesture* state)
void k_twofingertaprecognizer_on_reset(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/ktwofingertaprecognizer.html#dtor.KTwoFingerTapRecognizer)
///
/// Delete this object from C++ memory.
///
/// @param self KTwoFingerTapRecognizer*
void k_twofingertaprecognizer_delete(void* self);

#endif
