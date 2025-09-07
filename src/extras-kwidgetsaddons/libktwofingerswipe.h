#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKTWOFINGERSWIPE_H
#define SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKTWOFINGERSWIPE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/ktwofingerswipe.html

/// k_twofingerswipe_new constructs a new KTwoFingerSwipe object.
///
KTwoFingerSwipe* k_twofingerswipe_new();

/// k_twofingerswipe_new2 constructs a new KTwoFingerSwipe object.
///
/// @param parent QObject*
KTwoFingerSwipe* k_twofingerswipe_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KTwoFingerSwipe*
const QMetaObject* k_twofingerswipe_meta_object(void* self);

/// @param self KTwoFingerSwipe*
/// @param param1 const char*
void* k_twofingerswipe_metacast(void* self, const char* param1);

/// @param self KTwoFingerSwipe*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_twofingerswipe_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KTwoFingerSwipe*
/// @param callback int32_t func(KTwoFingerSwipe* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_twofingerswipe_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KTwoFingerSwipe*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_twofingerswipe_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_twofingerswipe_tr(const char* s);

/// [Qt documentation](https://api.kde.org/ktwofingerswipe.html#pos)
///
/// @param self KTwoFingerSwipe*
QPointF* k_twofingerswipe_pos(void* self);

/// [Qt documentation](https://api.kde.org/ktwofingerswipe.html#setPos)
///
/// @param self KTwoFingerSwipe*
/// @param pos QPointF*
void k_twofingerswipe_set_pos(void* self, void* pos);

/// [Qt documentation](https://api.kde.org/ktwofingerswipe.html#screenPos)
///
/// @param self KTwoFingerSwipe*
QPointF* k_twofingerswipe_screen_pos(void* self);

/// [Qt documentation](https://api.kde.org/ktwofingerswipe.html#setScreenPos)
///
/// @param self KTwoFingerSwipe*
/// @param screenPos QPointF*
void k_twofingerswipe_set_screen_pos(void* self, void* screenPos);

/// [Qt documentation](https://api.kde.org/ktwofingerswipe.html#scenePos)
///
/// @param self KTwoFingerSwipe*
QPointF* k_twofingerswipe_scene_pos(void* self);

/// [Qt documentation](https://api.kde.org/ktwofingerswipe.html#setScenePos)
///
/// @param self KTwoFingerSwipe*
/// @param scenePos QPointF*
void k_twofingerswipe_set_scene_pos(void* self, void* scenePos);

/// [Qt documentation](https://api.kde.org/ktwofingerswipe.html#swipeAngle)
///
/// @param self KTwoFingerSwipe*
double k_twofingerswipe_swipe_angle(void* self);

/// [Qt documentation](https://api.kde.org/ktwofingerswipe.html#setSwipeAngle)
///
/// @param self KTwoFingerSwipe*
/// @param swipeAngle double
void k_twofingerswipe_set_swipe_angle(void* self, double swipeAngle);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_twofingerswipe_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_twofingerswipe_tr3(const char* s, const char* c, int n);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#gestureType)
///
/// @param self KTwoFingerSwipe*
///
/// @return enum Qt__GestureType
int64_t k_twofingerswipe_gesture_type(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#state)
///
/// @param self KTwoFingerSwipe*
///
/// @return enum Qt__GestureState
int32_t k_twofingerswipe_state(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#hotSpot)
///
/// @param self KTwoFingerSwipe*
QPointF* k_twofingerswipe_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#setHotSpot)
///
/// @param self KTwoFingerSwipe*
/// @param value QPointF*
void k_twofingerswipe_set_hot_spot(void* self, void* value);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#hasHotSpot)
///
/// @param self KTwoFingerSwipe*
bool k_twofingerswipe_has_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#unsetHotSpot)
///
/// @param self KTwoFingerSwipe*
void k_twofingerswipe_unset_hot_spot(void* self);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#setGestureCancelPolicy)
///
/// @param self KTwoFingerSwipe*
/// @param policy enum QGesture__GestureCancelPolicy
void k_twofingerswipe_set_gesture_cancel_policy(void* self, int32_t policy);

/// Inherited from QGesture
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesture.html#gestureCancelPolicy)
///
/// @param self KTwoFingerSwipe*
///
/// @return enum QGesture__GestureCancelPolicy
int32_t k_twofingerswipe_gesture_cancel_policy(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTwoFingerSwipe*
const char* k_twofingerswipe_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KTwoFingerSwipe*
/// @param name char*
void k_twofingerswipe_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KTwoFingerSwipe*
bool k_twofingerswipe_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KTwoFingerSwipe*
bool k_twofingerswipe_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KTwoFingerSwipe*
bool k_twofingerswipe_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KTwoFingerSwipe*
bool k_twofingerswipe_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KTwoFingerSwipe*
/// @param b bool
bool k_twofingerswipe_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KTwoFingerSwipe*
QThread* k_twofingerswipe_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTwoFingerSwipe*
/// @param thread QThread*
bool k_twofingerswipe_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTwoFingerSwipe*
/// @param interval int
int32_t k_twofingerswipe_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTwoFingerSwipe*
/// @param id int
void k_twofingerswipe_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KTwoFingerSwipe*
/// @param id enum Qt__TimerId
void k_twofingerswipe_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KTwoFingerSwipe*
libqt_list /* of QObject* */ k_twofingerswipe_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KTwoFingerSwipe*
/// @param parent QObject*
void k_twofingerswipe_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KTwoFingerSwipe*
/// @param filterObj QObject*
void k_twofingerswipe_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KTwoFingerSwipe*
/// @param obj QObject*
void k_twofingerswipe_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_twofingerswipe_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTwoFingerSwipe*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_twofingerswipe_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_twofingerswipe_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_twofingerswipe_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KTwoFingerSwipe*
void k_twofingerswipe_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KTwoFingerSwipe*
void k_twofingerswipe_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KTwoFingerSwipe*
/// @param name const char*
/// @param value QVariant*
bool k_twofingerswipe_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KTwoFingerSwipe*
/// @param name const char*
QVariant* k_twofingerswipe_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KTwoFingerSwipe*
const char** k_twofingerswipe_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTwoFingerSwipe*
QBindingStorage* k_twofingerswipe_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KTwoFingerSwipe*
const QBindingStorage* k_twofingerswipe_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTwoFingerSwipe*
void k_twofingerswipe_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTwoFingerSwipe*
/// @param callback void func(KTwoFingerSwipe* self)
void k_twofingerswipe_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KTwoFingerSwipe*
QObject* k_twofingerswipe_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KTwoFingerSwipe*
/// @param classname const char*
bool k_twofingerswipe_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KTwoFingerSwipe*
void k_twofingerswipe_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KTwoFingerSwipe*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_twofingerswipe_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KTwoFingerSwipe*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_twofingerswipe_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_twofingerswipe_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KTwoFingerSwipe*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_twofingerswipe_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTwoFingerSwipe*
/// @param param1 QObject*
void k_twofingerswipe_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KTwoFingerSwipe*
/// @param callback void func(KTwoFingerSwipe* self, QObject* param1)
void k_twofingerswipe_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTwoFingerSwipe*
/// @param event QEvent*
bool k_twofingerswipe_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTwoFingerSwipe*
/// @param event QEvent*
bool k_twofingerswipe_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTwoFingerSwipe*
/// @param callback bool func(KTwoFingerSwipe* self, QEvent* event)
void k_twofingerswipe_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTwoFingerSwipe*
/// @param watched QObject*
/// @param event QEvent*
bool k_twofingerswipe_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTwoFingerSwipe*
/// @param watched QObject*
/// @param event QEvent*
bool k_twofingerswipe_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTwoFingerSwipe*
/// @param callback bool func(KTwoFingerSwipe* self, QObject* watched, QEvent* event)
void k_twofingerswipe_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTwoFingerSwipe*
/// @param event QTimerEvent*
void k_twofingerswipe_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTwoFingerSwipe*
/// @param event QTimerEvent*
void k_twofingerswipe_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTwoFingerSwipe*
/// @param callback void func(KTwoFingerSwipe* self, QTimerEvent* event)
void k_twofingerswipe_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTwoFingerSwipe*
/// @param event QChildEvent*
void k_twofingerswipe_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTwoFingerSwipe*
/// @param event QChildEvent*
void k_twofingerswipe_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTwoFingerSwipe*
/// @param callback void func(KTwoFingerSwipe* self, QChildEvent* event)
void k_twofingerswipe_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTwoFingerSwipe*
/// @param event QEvent*
void k_twofingerswipe_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTwoFingerSwipe*
/// @param event QEvent*
void k_twofingerswipe_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTwoFingerSwipe*
/// @param callback void func(KTwoFingerSwipe* self, QEvent* event)
void k_twofingerswipe_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTwoFingerSwipe*
/// @param signal QMetaMethod*
void k_twofingerswipe_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTwoFingerSwipe*
/// @param signal QMetaMethod*
void k_twofingerswipe_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTwoFingerSwipe*
/// @param callback void func(KTwoFingerSwipe* self, QMetaMethod* signal)
void k_twofingerswipe_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTwoFingerSwipe*
/// @param signal QMetaMethod*
void k_twofingerswipe_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTwoFingerSwipe*
/// @param signal QMetaMethod*
void k_twofingerswipe_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTwoFingerSwipe*
/// @param callback void func(KTwoFingerSwipe* self, QMetaMethod* signal)
void k_twofingerswipe_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTwoFingerSwipe*
QObject* k_twofingerswipe_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTwoFingerSwipe*
QObject* k_twofingerswipe_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTwoFingerSwipe*
/// @param callback QObject* func()
void k_twofingerswipe_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTwoFingerSwipe*
int32_t k_twofingerswipe_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTwoFingerSwipe*
int32_t k_twofingerswipe_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTwoFingerSwipe*
/// @param callback int32_t func()
void k_twofingerswipe_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTwoFingerSwipe*
/// @param signal const char*
int32_t k_twofingerswipe_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTwoFingerSwipe*
/// @param signal const char*
int32_t k_twofingerswipe_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTwoFingerSwipe*
/// @param callback int32_t func(KTwoFingerSwipe* self, const char* signal)
void k_twofingerswipe_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTwoFingerSwipe*
/// @param signal QMetaMethod*
bool k_twofingerswipe_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTwoFingerSwipe*
/// @param signal QMetaMethod*
bool k_twofingerswipe_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTwoFingerSwipe*
/// @param callback bool func(KTwoFingerSwipe* self, QMetaMethod* signal)
void k_twofingerswipe_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KTwoFingerSwipe*
/// @param callback void func(KTwoFingerSwipe* self, const char* objectName)
void k_twofingerswipe_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/ktwofingerswipe.html#dtor.KTwoFingerSwipe)
///
/// Delete this object from C++ memory.
///
/// @param self KTwoFingerSwipe*
void k_twofingerswipe_delete(void* self);

/// https://api.kde.org/ktwofingerswiperecognizer.html

/// k_twofingerswiperecognizer_new constructs a new KTwoFingerSwipeRecognizer object.
///
KTwoFingerSwipeRecognizer* k_twofingerswiperecognizer_new();

/// [Qt documentation](https://api.kde.org/ktwofingerswiperecognizer.html#create)
///
/// @param self KTwoFingerSwipeRecognizer*
/// @param target QObject*
QGesture* k_twofingerswiperecognizer_create(void* self, void* target);

/// [Qt documentation](https://api.kde.org/ktwofingerswiperecognizer.html#create)
///
/// Allows for overriding the related default method
///
/// @param self KTwoFingerSwipeRecognizer*
/// @param callback QGesture* func(KTwoFingerSwipeRecognizer* self, QObject* target)
void k_twofingerswiperecognizer_on_create(void* self, QGesture* (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/ktwofingerswiperecognizer.html#create)
///
/// Base class method implementation
///
/// @param self KTwoFingerSwipeRecognizer*
/// @param target QObject*
QGesture* k_twofingerswiperecognizer_qbase_create(void* self, void* target);

/// [Qt documentation](https://api.kde.org/ktwofingerswiperecognizer.html#recognize)
///
/// @param self KTwoFingerSwipeRecognizer*
/// @param gesture QGesture*
/// @param watched QObject*
/// @param event QEvent*
///
/// @return flag of enum QGestureRecognizer__ResultFlag
int32_t k_twofingerswiperecognizer_recognize(void* self, void* gesture, void* watched, void* event);

/// [Qt documentation](https://api.kde.org/ktwofingerswiperecognizer.html#recognize)
///
/// Allows for overriding the related default method
///
/// @param self KTwoFingerSwipeRecognizer*
/// @param callback int32_t func(KTwoFingerSwipeRecognizer* self, QGesture* gesture, QObject* watched, QEvent* event)
void k_twofingerswiperecognizer_on_recognize(void* self, int32_t (*callback)(void*, void*, void*, void*));

/// [Qt documentation](https://api.kde.org/ktwofingerswiperecognizer.html#recognize)
///
/// Base class method implementation
///
/// @param self KTwoFingerSwipeRecognizer*
/// @param gesture QGesture*
/// @param watched QObject*
/// @param event QEvent*
///
/// @return flag of enum QGestureRecognizer__ResultFlag
int32_t k_twofingerswiperecognizer_qbase_recognize(void* self, void* gesture, void* watched, void* event);

/// [Qt documentation](https://api.kde.org/ktwofingerswiperecognizer.html#maxSwipeTime)
///
/// @param self KTwoFingerSwipeRecognizer*
int32_t k_twofingerswiperecognizer_max_swipe_time(void* self);

/// [Qt documentation](https://api.kde.org/ktwofingerswiperecognizer.html#setMaxSwipeTime)
///
/// @param self KTwoFingerSwipeRecognizer*
/// @param i int
void k_twofingerswiperecognizer_set_max_swipe_time(void* self, int i);

/// [Qt documentation](https://api.kde.org/ktwofingerswiperecognizer.html#minSswipeDistance)
///
/// @param self KTwoFingerSwipeRecognizer*
int32_t k_twofingerswiperecognizer_min_sswipe_distance(void* self);

/// [Qt documentation](https://api.kde.org/ktwofingerswiperecognizer.html#setSwipeDistance)
///
/// @param self KTwoFingerSwipeRecognizer*
/// @param i int
void k_twofingerswiperecognizer_set_swipe_distance(void* self, int i);

/// Inherited from QGestureRecognizer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#registerRecognizer)
///
/// @param recognizer QGestureRecognizer*
///
/// @return enum Qt__GestureType
int64_t k_twofingerswiperecognizer_register_recognizer(void* recognizer);

/// Inherited from QGestureRecognizer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#unregisterRecognizer)
///
/// @param typeVal enum Qt__GestureType
void k_twofingerswiperecognizer_unregister_recognizer(int64_t typeVal);

/// Inherited from QGestureRecognizer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#operator-eq)
///
/// @param self KTwoFingerSwipeRecognizer*
/// @param param1 QGestureRecognizer*
void k_twofingerswiperecognizer_operator_assign(void* self, void* param1);

/// Inherited from QGestureRecognizer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KTwoFingerSwipeRecognizer*
/// @param state QGesture*
void k_twofingerswiperecognizer_reset(void* self, void* state);

/// Inherited from QGestureRecognizer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KTwoFingerSwipeRecognizer*
/// @param state QGesture*
void k_twofingerswiperecognizer_qbase_reset(void* self, void* state);

/// Inherited from QGestureRecognizer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qgesturerecognizer.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KTwoFingerSwipeRecognizer*
/// @param callback void func(KTwoFingerSwipeRecognizer* self, QGesture* state)
void k_twofingerswiperecognizer_on_reset(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/ktwofingerswiperecognizer.html#dtor.KTwoFingerSwipeRecognizer)
///
/// Delete this object from C++ memory.
///
/// @param self KTwoFingerSwipeRecognizer*
void k_twofingerswiperecognizer_delete(void* self);

#endif
