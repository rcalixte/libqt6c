#pragma once
#ifndef SRC_QT6C_LIBQACCESSIBLEBRIDGE_H
#define SRC_QT6C_LIBQACCESSIBLEBRIDGE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblebridge.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblebridge.html#setRootObject)
///
/// @param self QAccessibleBridge*
/// @param rootObject QAccessibleInterface*
///
void q_accessiblebridge_set_root_object(void* self, void* rootObject);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblebridge.html#notifyAccessibilityUpdate)
///
/// @param self QAccessibleBridge*
/// @param event QAccessibleEvent*
///
void q_accessiblebridge_notify_accessibility_update(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblebridge.html#operator-eq)
///
/// @param self QAccessibleBridge*
/// @param param1 QAccessibleBridge*
///
void q_accessiblebridge_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblebridge.html#dtor.QAccessibleBridge)
///
/// Delete this object from C++ memory.
///
/// @param self QAccessibleBridge*
///
void q_accessiblebridge_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblebridgeplugin.html)

/// q_accessiblebridgeplugin_new constructs a new QAccessibleBridgePlugin object.
///
QAccessibleBridgePlugin* q_accessiblebridgeplugin_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblebridgeplugin.html)

/// q_accessiblebridgeplugin_new2 constructs a new QAccessibleBridgePlugin object.
///
/// @param parent QObject*
///
QAccessibleBridgePlugin* q_accessiblebridgeplugin_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QAccessibleBridgePlugin*
///
const QMetaObject* q_accessiblebridgeplugin_meta_object(void* self);

/// @param self QAccessibleBridgePlugin*
/// @param param1 const char*
///
void* q_accessiblebridgeplugin_metacast(void* self, const char* param1);

/// @param self QAccessibleBridgePlugin*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_accessiblebridgeplugin_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QAccessibleBridgePlugin*
/// @param callback int32_t func(QAccessibleBridgePlugin* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_accessiblebridgeplugin_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QAccessibleBridgePlugin*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_accessiblebridgeplugin_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_accessiblebridgeplugin_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblebridgeplugin.html#create)
///
/// @param self QAccessibleBridgePlugin*
/// @param key const char*
///
QAccessibleBridge* q_accessiblebridgeplugin_create(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblebridgeplugin.html#create)
///
/// Allows for overriding the related default method
///
/// @param self QAccessibleBridgePlugin*
/// @param callback QAccessibleBridge* func(QAccessibleBridgePlugin* self, const char* key)
///
void q_accessiblebridgeplugin_on_create(void* self, QAccessibleBridge* (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblebridgeplugin.html#create)
///
/// Base class method implementation
///
/// @param self QAccessibleBridgePlugin*
/// @param key const char*
///
QAccessibleBridge* q_accessiblebridgeplugin_qbase_create(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_accessiblebridgeplugin_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_accessiblebridgeplugin_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QAccessibleBridgePlugin*
///
const char* q_accessiblebridgeplugin_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAccessibleBridgePlugin*
/// @param name char*
///
void q_accessiblebridgeplugin_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QAccessibleBridgePlugin*
///
bool q_accessiblebridgeplugin_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QAccessibleBridgePlugin*
///
bool q_accessiblebridgeplugin_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QAccessibleBridgePlugin*
///
bool q_accessiblebridgeplugin_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QAccessibleBridgePlugin*
///
bool q_accessiblebridgeplugin_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAccessibleBridgePlugin*
/// @param b bool
///
bool q_accessiblebridgeplugin_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QAccessibleBridgePlugin*
///
QThread* q_accessiblebridgeplugin_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAccessibleBridgePlugin*
/// @param thread QThread*
///
bool q_accessiblebridgeplugin_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAccessibleBridgePlugin*
/// @param interval int
///
int32_t q_accessiblebridgeplugin_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAccessibleBridgePlugin*
/// @param time int64_t of nanoseconds
///
int32_t q_accessiblebridgeplugin_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAccessibleBridgePlugin*
/// @param id int
///
void q_accessiblebridgeplugin_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAccessibleBridgePlugin*
/// @param id enum Qt__TimerId
///
void q_accessiblebridgeplugin_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QAccessibleBridgePlugin*
///
/// @return libqt_list of QObject*
///
libqt_list q_accessiblebridgeplugin_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QAccessibleBridgePlugin*
/// @param parent QObject*
///
void q_accessiblebridgeplugin_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAccessibleBridgePlugin*
/// @param filterObj QObject*
///
void q_accessiblebridgeplugin_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAccessibleBridgePlugin*
/// @param obj QObject*
///
void q_accessiblebridgeplugin_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_accessiblebridgeplugin_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAccessibleBridgePlugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_accessiblebridgeplugin_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_accessiblebridgeplugin_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_accessiblebridgeplugin_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QAccessibleBridgePlugin*
///
void q_accessiblebridgeplugin_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QAccessibleBridgePlugin*
///
void q_accessiblebridgeplugin_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAccessibleBridgePlugin*
/// @param name const char*
/// @param value QVariant*
///
bool q_accessiblebridgeplugin_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QAccessibleBridgePlugin*
/// @param name const char*
///
QVariant* q_accessiblebridgeplugin_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QAccessibleBridgePlugin*
///
const char** q_accessiblebridgeplugin_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAccessibleBridgePlugin*
///
QBindingStorage* q_accessiblebridgeplugin_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAccessibleBridgePlugin*
///
const QBindingStorage* q_accessiblebridgeplugin_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAccessibleBridgePlugin*
///
void q_accessiblebridgeplugin_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAccessibleBridgePlugin*
/// @param callback void func(QAccessibleBridgePlugin* self)
///
void q_accessiblebridgeplugin_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QAccessibleBridgePlugin*
///
QObject* q_accessiblebridgeplugin_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QAccessibleBridgePlugin*
/// @param classname const char*
///
bool q_accessiblebridgeplugin_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAccessibleBridgePlugin*
///
void q_accessiblebridgeplugin_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAccessibleBridgePlugin*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_accessiblebridgeplugin_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAccessibleBridgePlugin*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_accessiblebridgeplugin_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAccessibleBridgePlugin*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_accessiblebridgeplugin_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_accessiblebridgeplugin_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAccessibleBridgePlugin*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_accessiblebridgeplugin_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAccessibleBridgePlugin*
/// @param param1 QObject*
///
void q_accessiblebridgeplugin_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAccessibleBridgePlugin*
/// @param callback void func(QAccessibleBridgePlugin* self, QObject* param1)
///
void q_accessiblebridgeplugin_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
/// @param event QEvent*
///
bool q_accessiblebridgeplugin_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
/// @param event QEvent*
///
bool q_accessiblebridgeplugin_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
/// @param callback bool func(QAccessibleBridgePlugin* self, QEvent* event)
///
void q_accessiblebridgeplugin_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_accessiblebridgeplugin_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_accessiblebridgeplugin_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
/// @param callback bool func(QAccessibleBridgePlugin* self, QObject* watched, QEvent* event)
///
void q_accessiblebridgeplugin_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
/// @param event QTimerEvent*
///
void q_accessiblebridgeplugin_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
/// @param event QTimerEvent*
///
void q_accessiblebridgeplugin_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
/// @param callback void func(QAccessibleBridgePlugin* self, QTimerEvent* event)
///
void q_accessiblebridgeplugin_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
/// @param event QChildEvent*
///
void q_accessiblebridgeplugin_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
/// @param event QChildEvent*
///
void q_accessiblebridgeplugin_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
/// @param callback void func(QAccessibleBridgePlugin* self, QChildEvent* event)
///
void q_accessiblebridgeplugin_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
/// @param event QEvent*
///
void q_accessiblebridgeplugin_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
/// @param event QEvent*
///
void q_accessiblebridgeplugin_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
/// @param callback void func(QAccessibleBridgePlugin* self, QEvent* event)
///
void q_accessiblebridgeplugin_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
/// @param signal QMetaMethod*
///
void q_accessiblebridgeplugin_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
/// @param signal QMetaMethod*
///
void q_accessiblebridgeplugin_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
/// @param callback void func(QAccessibleBridgePlugin* self, QMetaMethod* signal)
///
void q_accessiblebridgeplugin_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
/// @param signal QMetaMethod*
///
void q_accessiblebridgeplugin_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
/// @param signal QMetaMethod*
///
void q_accessiblebridgeplugin_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
/// @param callback void func(QAccessibleBridgePlugin* self, QMetaMethod* signal)
///
void q_accessiblebridgeplugin_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
///
QObject* q_accessiblebridgeplugin_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
///
QObject* q_accessiblebridgeplugin_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
/// @param callback QObject* func()
///
void q_accessiblebridgeplugin_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
///
int32_t q_accessiblebridgeplugin_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
///
int32_t q_accessiblebridgeplugin_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
/// @param callback int32_t func()
///
void q_accessiblebridgeplugin_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
/// @param signal const char*
///
int32_t q_accessiblebridgeplugin_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
/// @param signal const char*
///
int32_t q_accessiblebridgeplugin_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
/// @param callback int32_t func(QAccessibleBridgePlugin* self, const char* signal)
///
void q_accessiblebridgeplugin_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
/// @param signal QMetaMethod*
///
bool q_accessiblebridgeplugin_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
/// @param signal QMetaMethod*
///
bool q_accessiblebridgeplugin_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAccessibleBridgePlugin*
/// @param callback bool func(QAccessibleBridgePlugin* self, QMetaMethod* signal)
///
void q_accessiblebridgeplugin_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAccessibleBridgePlugin*
/// @param callback void func(QAccessibleBridgePlugin* self, const char* objectName)
///
void q_accessiblebridgeplugin_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qaccessiblebridgeplugin.html#dtor.QAccessibleBridgePlugin)
///
/// Delete this object from C++ memory.
///
/// @param self QAccessibleBridgePlugin*
///
void q_accessiblebridgeplugin_delete(void* self);

#endif
