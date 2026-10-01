#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKTWOFINGERTAP_H
#define EXTRAS_KWIDGETSADDONS_LIBKTWOFINGERTAP_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ktwofingertap.html)

/// k_twofingertap_new constructs a new KTwoFingerTap object.
///
KTwoFingerTap* k_twofingertap_new();

/// [Upstream resources](https://api.kde.org/ktwofingertap.html)

/// k_twofingertap_new2 constructs a new KTwoFingerTap object.
///
/// @param parent QObject*
///
KTwoFingerTap* k_twofingertap_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KTwoFingerTap*
///
const QMetaObject* k_twofingertap_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const KTwoFingerTap*
/// @param callback const QMetaObject* func(const KTwoFingerTap* self)
///
void k_twofingertap_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KTwoFingerTap*
///
const QMetaObject* k_twofingertap_super_meta_object(const void* self);

/// @param self KTwoFingerTap*
/// @param param1 const char*
///
void* k_twofingertap_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KTwoFingerTap*
/// @param callback void* func(KTwoFingerTap* self, const char* param1)
///
void k_twofingertap_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KTwoFingerTap*
/// @param param1 const char*
///
void* k_twofingertap_super_metacast(void* self, const char* param1);

/// @param self KTwoFingerTap*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_twofingertap_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KTwoFingerTap*
/// @param callback int32_t func(KTwoFingerTap* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_twofingertap_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KTwoFingerTap*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_twofingertap_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_twofingertap_tr(const char* s);

/// [Upstream resources](https://api.kde.org/ktwofingertap.html#pos)
///
/// @param self const KTwoFingerTap*
///
QPointF* k_twofingertap_pos(const void* self);

/// [Upstream resources](https://api.kde.org/ktwofingertap.html#setPos)
///
/// @param self KTwoFingerTap*
/// @param pos QPointF*
///
void k_twofingertap_set_pos(void* self, void* pos);

/// [Upstream resources](https://api.kde.org/ktwofingertap.html#screenPos)
///
/// @param self const KTwoFingerTap*
///
QPointF* k_twofingertap_screen_pos(const void* self);

/// [Upstream resources](https://api.kde.org/ktwofingertap.html#setScreenPos)
///
/// @param self KTwoFingerTap*
/// @param screenPos QPointF*
///
void k_twofingertap_set_screen_pos(void* self, void* screenPos);

/// [Upstream resources](https://api.kde.org/ktwofingertap.html#scenePos)
///
/// @param self const KTwoFingerTap*
///
QPointF* k_twofingertap_scene_pos(const void* self);

/// [Upstream resources](https://api.kde.org/ktwofingertap.html#setScenePos)
///
/// @param self KTwoFingerTap*
/// @param scenePos QPointF*
///
void k_twofingertap_set_scene_pos(void* self, void* scenePos);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_twofingertap_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_twofingertap_tr3(const char* s, const char* c, int n);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#gestureType)
///
/// @param self const KTwoFingerTap*
///
/// @return enum Qt__GestureType
///
int32_t k_twofingertap_gesture_type(const void* self);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#state)
///
/// @param self const KTwoFingerTap*
///
/// @return enum Qt__GestureState
///
int32_t k_twofingertap_state(const void* self);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#hotSpot)
///
/// @param self const KTwoFingerTap*
///
QPointF* k_twofingertap_hot_spot(const void* self);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#setHotSpot)
///
/// @param self KTwoFingerTap*
/// @param value QPointF*
///
void k_twofingertap_set_hot_spot(void* self, const void* value);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#hasHotSpot)
///
/// @param self const KTwoFingerTap*
///
bool k_twofingertap_has_hot_spot(const void* self);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#unsetHotSpot)
///
/// @param self KTwoFingerTap*
///
void k_twofingertap_unset_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#setGestureCancelPolicy)
///
/// @param self KTwoFingerTap*
/// @param policy enum QGesture__GestureCancelPolicy
///
void k_twofingertap_set_gesture_cancel_policy(void* self, int32_t policy);

/// Inherited from QGesture
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesture.html#gestureCancelPolicy)
///
/// @param self const KTwoFingerTap*
///
/// @return enum QGesture__GestureCancelPolicy
///
int32_t k_twofingertap_gesture_cancel_policy(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KTwoFingerTap*
///
const char* k_twofingertap_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KTwoFingerTap*
/// @param name const char*
///
void k_twofingertap_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KTwoFingerTap*
///
bool k_twofingertap_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KTwoFingerTap*
///
bool k_twofingertap_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KTwoFingerTap*
///
bool k_twofingertap_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KTwoFingerTap*
///
bool k_twofingertap_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KTwoFingerTap*
/// @param b bool
///
bool k_twofingertap_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KTwoFingerTap*
///
QThread* k_twofingertap_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTwoFingerTap*
/// @param thread QThread*
///
bool k_twofingertap_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTwoFingerTap*
/// @param interval int
///
int32_t k_twofingertap_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTwoFingerTap*
/// @param time int64_t of nanoseconds
///
int32_t k_twofingertap_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTwoFingerTap*
/// @param id int
///
void k_twofingertap_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTwoFingerTap*
/// @param id enum Qt__TimerId
///
void k_twofingertap_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KTwoFingerTap*
///
/// @return libqt_list of QObject*
///
libqt_list k_twofingertap_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KTwoFingerTap*
/// @param parent QObject*
///
void k_twofingertap_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KTwoFingerTap*
/// @param filterObj QObject*
///
void k_twofingertap_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KTwoFingerTap*
/// @param obj QObject*
///
void k_twofingertap_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_twofingertap_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_twofingertap_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KTwoFingerTap*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_twofingertap_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_twofingertap_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_twofingertap_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KTwoFingerTap*
///
bool k_twofingertap_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KTwoFingerTap*
/// @param receiver QObject*
///
bool k_twofingertap_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_twofingertap_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KTwoFingerTap*
///
void k_twofingertap_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KTwoFingerTap*
///
void k_twofingertap_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KTwoFingerTap*
/// @param name const char*
/// @param value QVariant*
///
bool k_twofingertap_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KTwoFingerTap*
/// @param name const char*
///
QVariant* k_twofingertap_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KTwoFingerTap*
///
const char** k_twofingertap_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTwoFingerTap*
///
QBindingStorage* k_twofingertap_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KTwoFingerTap*
///
const QBindingStorage* k_twofingertap_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTwoFingerTap*
///
void k_twofingertap_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTwoFingerTap*
/// @param callback void func(KTwoFingerTap* self)
///
void k_twofingertap_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KTwoFingerTap*
///
QObject* k_twofingertap_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KTwoFingerTap*
/// @param classname const char*
///
bool k_twofingertap_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KTwoFingerTap*
///
void k_twofingertap_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTwoFingerTap*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_twofingertap_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTwoFingerTap*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_twofingertap_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_twofingertap_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_twofingertap_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KTwoFingerTap*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_twofingertap_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KTwoFingerTap*
/// @param signal const char*
///
bool k_twofingertap_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KTwoFingerTap*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_twofingertap_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KTwoFingerTap*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_twofingertap_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KTwoFingerTap*
/// @param receiver QObject*
/// @param member const char*
///
bool k_twofingertap_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTwoFingerTap*
/// @param param1 QObject*
///
void k_twofingertap_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTwoFingerTap*
/// @param callback void func(KTwoFingerTap* self, QObject* param1)
///
void k_twofingertap_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param event QEvent*
///
bool k_twofingertap_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param event QEvent*
///
bool k_twofingertap_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param callback bool func(KTwoFingerTap* self, QEvent* event)
///
void k_twofingertap_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_twofingertap_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_twofingertap_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param callback bool func(KTwoFingerTap* self, QObject* watched, QEvent* event)
///
void k_twofingertap_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param event QTimerEvent*
///
void k_twofingertap_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param event QTimerEvent*
///
void k_twofingertap_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param callback void func(KTwoFingerTap* self, QTimerEvent* event)
///
void k_twofingertap_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param event QChildEvent*
///
void k_twofingertap_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param event QChildEvent*
///
void k_twofingertap_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param callback void func(KTwoFingerTap* self, QChildEvent* event)
///
void k_twofingertap_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param event QEvent*
///
void k_twofingertap_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param event QEvent*
///
void k_twofingertap_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param callback void func(KTwoFingerTap* self, QEvent* event)
///
void k_twofingertap_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param signal QMetaMethod*
///
void k_twofingertap_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param signal QMetaMethod*
///
void k_twofingertap_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param callback void func(KTwoFingerTap* self, QMetaMethod* signal)
///
void k_twofingertap_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param signal QMetaMethod*
///
void k_twofingertap_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param signal QMetaMethod*
///
void k_twofingertap_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTwoFingerTap*
/// @param callback void func(KTwoFingerTap* self, QMetaMethod* signal)
///
void k_twofingertap_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KTwoFingerTap*
///
QObject* k_twofingertap_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KTwoFingerTap*
///
QObject* k_twofingertap_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KTwoFingerTap*
/// @param callback QObject* func(KTwoFingerTap* self)
///
void k_twofingertap_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KTwoFingerTap*
///
int32_t k_twofingertap_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KTwoFingerTap*
///
int32_t k_twofingertap_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KTwoFingerTap*
/// @param callback int32_t func(KTwoFingerTap* self)
///
void k_twofingertap_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KTwoFingerTap*
/// @param signal const char*
///
int32_t k_twofingertap_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KTwoFingerTap*
/// @param signal const char*
///
int32_t k_twofingertap_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KTwoFingerTap*
/// @param callback int32_t func(KTwoFingerTap* self, const char* signal)
///
void k_twofingertap_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KTwoFingerTap*
/// @param signal QMetaMethod*
///
bool k_twofingertap_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KTwoFingerTap*
/// @param signal QMetaMethod*
///
bool k_twofingertap_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const KTwoFingerTap*
/// @param callback bool func(KTwoFingerTap* self, QMetaMethod* signal)
///
void k_twofingertap_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KTwoFingerTap*
/// @param callback void func(KTwoFingerTap* self, const char* objectName)
///
void k_twofingertap_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/ktwofingertap.html#dtor.KTwoFingerTap)
///
/// Delete this object from C++ memory.
///
/// @param self KTwoFingerTap*
///
void k_twofingertap_delete(void* self);

/// [Upstream resources](https://api.kde.org/ktwofingertaprecognizer.html)

/// k_twofingertaprecognizer_new constructs a new KTwoFingerTapRecognizer object.
///
KTwoFingerTapRecognizer* k_twofingertaprecognizer_new();

/// [Upstream resources](https://api.kde.org/ktwofingertaprecognizer.html#create)
///
/// @param self KTwoFingerTapRecognizer*
/// @param target QObject*
///
QGesture* k_twofingertaprecognizer_create(void* self, void* target);

/// [Upstream resources](https://api.kde.org/ktwofingertaprecognizer.html#create)
///
/// Allows for overriding the related default method
///
/// @param self KTwoFingerTapRecognizer*
/// @param callback QGesture* func(KTwoFingerTapRecognizer* self, QObject* target)
///
void k_twofingertaprecognizer_on_create(void* self, QGesture* (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktwofingertaprecognizer.html#create)
///
/// Base class method implementation
///
/// @param self KTwoFingerTapRecognizer*
/// @param target QObject*
///
QGesture* k_twofingertaprecognizer_super_create(void* self, void* target);

/// [Upstream resources](https://api.kde.org/ktwofingertaprecognizer.html#recognize)
///
/// @param self KTwoFingerTapRecognizer*
/// @param gesture QGesture*
/// @param watched QObject*
/// @param event QEvent*
///
/// @return flag of enum QGestureRecognizer__ResultFlag
///
int32_t k_twofingertaprecognizer_recognize(void* self, void* gesture, void* watched, void* event);

/// [Upstream resources](https://api.kde.org/ktwofingertaprecognizer.html#recognize)
///
/// Allows for overriding the related default method
///
/// @param self KTwoFingerTapRecognizer*
/// @param callback int32_t func(KTwoFingerTapRecognizer* self, QGesture* gesture, QObject* watched, QEvent* event)
///
void k_twofingertaprecognizer_on_recognize(void* self, int32_t (*callback)(void*, void*, void*, void*));

/// [Upstream resources](https://api.kde.org/ktwofingertaprecognizer.html#recognize)
///
/// Base class method implementation
///
/// @param self KTwoFingerTapRecognizer*
/// @param gesture QGesture*
/// @param watched QObject*
/// @param event QEvent*
///
/// @return flag of enum QGestureRecognizer__ResultFlag
///
int32_t k_twofingertaprecognizer_super_recognize(void* self, void* gesture, void* watched, void* event);

/// [Upstream resources](https://api.kde.org/ktwofingertaprecognizer.html#tapRadius)
///
/// @param self const KTwoFingerTapRecognizer*
///
int32_t k_twofingertaprecognizer_tap_radius(const void* self);

/// [Upstream resources](https://api.kde.org/ktwofingertaprecognizer.html#setTapRadius)
///
/// @param self KTwoFingerTapRecognizer*
/// @param i int
///
void k_twofingertaprecognizer_set_tap_radius(void* self, int i);

/// Inherited from QGestureRecognizer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#registerRecognizer)
///
/// @param recognizer QGestureRecognizer*
///
/// @return enum Qt__GestureType
///
int32_t k_twofingertaprecognizer_register_recognizer(void* recognizer);

/// Inherited from QGestureRecognizer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#unregisterRecognizer)
///
/// @param type enum Qt__GestureType
///
void k_twofingertaprecognizer_unregister_recognizer(int32_t type);

/// Inherited from QGestureRecognizer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#operator-eq)
///
/// @param self KTwoFingerTapRecognizer*
/// @param param1 QGestureRecognizer*
///
void k_twofingertaprecognizer_operator_assign(void* self, const void* param1);

/// Inherited from QGestureRecognizer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTwoFingerTapRecognizer*
/// @param state QGesture*
///
void k_twofingertaprecognizer_reset(void* self, void* state);

/// Inherited from QGestureRecognizer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTwoFingerTapRecognizer*
/// @param state QGesture*
///
void k_twofingertaprecognizer_super_reset(void* self, void* state);

/// Inherited from QGestureRecognizer
///
/// [Upstream resources](https://doc.qt.io/qt-6/qgesturerecognizer.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTwoFingerTapRecognizer*
/// @param callback void func(KTwoFingerTapRecognizer* self, QGesture* state)
///
void k_twofingertaprecognizer_on_reset(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ktwofingertaprecognizer.html#dtor.KTwoFingerTapRecognizer)
///
/// Delete this object from C++ memory.
///
/// @param self KTwoFingerTapRecognizer*
///
void k_twofingertaprecognizer_delete(void* self);

#endif
