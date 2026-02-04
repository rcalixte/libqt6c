#pragma once
#ifndef SRC_EXTRAS_KNOTIFICATIONS_QT6C_LIBKNOTIFICATION_H
#define SRC_EXTRAS_KNOTIFICATIONS_QT6C_LIBKNOTIFICATION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/knotificationaction.html)

/// k_notificationaction_new constructs a new KNotificationAction object.
///
KNotificationAction* k_notificationaction_new();

/// [Upstream resources](https://api.kde.org/knotificationaction.html)

/// k_notificationaction_new2 constructs a new KNotificationAction object.
///
/// @param label const char*
///
KNotificationAction* k_notificationaction_new2(const char* label);

/// [Upstream resources](https://api.kde.org/knotificationaction.html)

/// k_notificationaction_new3 constructs a new KNotificationAction object.
///
/// @param parent QObject*
///
KNotificationAction* k_notificationaction_new3(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KNotificationAction*
///
const QMetaObject* k_notificationaction_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KNotificationAction*
/// @param callback const QMetaObject* func()
///
void k_notificationaction_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KNotificationAction*
///
const QMetaObject* k_notificationaction_qbase_meta_object(void* self);

/// @param self KNotificationAction*
/// @param param1 const char*
///
void* k_notificationaction_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KNotificationAction*
/// @param callback void* func(KNotificationAction* self, const char* param1)
///
void k_notificationaction_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KNotificationAction*
/// @param param1 const char*
///
void* k_notificationaction_qbase_metacast(void* self, const char* param1);

/// @param self KNotificationAction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_notificationaction_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KNotificationAction*
/// @param callback int32_t func(KNotificationAction* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_notificationaction_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KNotificationAction*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_notificationaction_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_notificationaction_tr(const char* s);

/// [Upstream resources](https://api.kde.org/knotificationaction.html#label)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KNotificationAction*
///
const char* k_notificationaction_label(void* self);

/// [Upstream resources](https://api.kde.org/knotificationaction.html#setLabel)
///
/// @param self KNotificationAction*
/// @param label const char*
///
void k_notificationaction_set_label(void* self, const char* label);

/// [Upstream resources](https://api.kde.org/knotificationaction.html#activated)
///
/// @param self KNotificationAction*
///
void k_notificationaction_activated(void* self);

/// [Upstream resources](https://api.kde.org/knotificationaction.html#activated)
///
/// @param self KNotificationAction*
/// @param callback void func(KNotificationAction* self)
///
void k_notificationaction_on_activated(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/knotificationaction.html#labelChanged)
///
/// @param self KNotificationAction*
/// @param label const char*
///
void k_notificationaction_label_changed(void* self, const char* label);

/// [Upstream resources](https://api.kde.org/knotificationaction.html#labelChanged)
///
/// @param self KNotificationAction*
/// @param callback void func(KNotificationAction* self, const char* label)
///
void k_notificationaction_on_label_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_notificationaction_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_notificationaction_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KNotificationAction*
///
const char* k_notificationaction_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KNotificationAction*
/// @param name char*
///
void k_notificationaction_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KNotificationAction*
///
bool k_notificationaction_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KNotificationAction*
///
bool k_notificationaction_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KNotificationAction*
///
bool k_notificationaction_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KNotificationAction*
///
bool k_notificationaction_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KNotificationAction*
/// @param b bool
///
bool k_notificationaction_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KNotificationAction*
///
QThread* k_notificationaction_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KNotificationAction*
/// @param thread QThread*
///
bool k_notificationaction_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNotificationAction*
/// @param interval int
///
int32_t k_notificationaction_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNotificationAction*
/// @param time int64_t of nanoseconds
///
int32_t k_notificationaction_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNotificationAction*
/// @param id int
///
void k_notificationaction_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNotificationAction*
/// @param id enum Qt__TimerId
///
void k_notificationaction_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KNotificationAction*
///
/// @return libqt_list of QObject*
///
libqt_list k_notificationaction_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KNotificationAction*
/// @param parent QObject*
///
void k_notificationaction_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KNotificationAction*
/// @param filterObj QObject*
///
void k_notificationaction_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KNotificationAction*
/// @param obj QObject*
///
void k_notificationaction_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_notificationaction_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_notificationaction_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KNotificationAction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_notificationaction_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_notificationaction_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_notificationaction_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KNotificationAction*
///
bool k_notificationaction_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KNotificationAction*
/// @param receiver QObject*
///
bool k_notificationaction_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_notificationaction_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KNotificationAction*
///
void k_notificationaction_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KNotificationAction*
///
void k_notificationaction_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KNotificationAction*
/// @param name const char*
/// @param value QVariant*
///
bool k_notificationaction_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KNotificationAction*
/// @param name const char*
///
QVariant* k_notificationaction_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KNotificationAction*
///
const char** k_notificationaction_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KNotificationAction*
///
QBindingStorage* k_notificationaction_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KNotificationAction*
///
const QBindingStorage* k_notificationaction_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNotificationAction*
///
void k_notificationaction_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNotificationAction*
/// @param callback void func(KNotificationAction* self)
///
void k_notificationaction_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KNotificationAction*
///
QObject* k_notificationaction_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KNotificationAction*
/// @param classname const char*
///
bool k_notificationaction_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KNotificationAction*
///
void k_notificationaction_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNotificationAction*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_notificationaction_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNotificationAction*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_notificationaction_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_notificationaction_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_notificationaction_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KNotificationAction*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_notificationaction_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KNotificationAction*
/// @param signal const char*
///
bool k_notificationaction_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KNotificationAction*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_notificationaction_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KNotificationAction*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_notificationaction_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KNotificationAction*
/// @param receiver QObject*
/// @param member const char*
///
bool k_notificationaction_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNotificationAction*
/// @param param1 QObject*
///
void k_notificationaction_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNotificationAction*
/// @param callback void func(KNotificationAction* self, QObject* param1)
///
void k_notificationaction_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationAction*
/// @param event QEvent*
///
bool k_notificationaction_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationAction*
/// @param event QEvent*
///
bool k_notificationaction_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationAction*
/// @param callback bool func(KNotificationAction* self, QEvent* event)
///
void k_notificationaction_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationAction*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_notificationaction_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationAction*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_notificationaction_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationAction*
/// @param callback bool func(KNotificationAction* self, QObject* watched, QEvent* event)
///
void k_notificationaction_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationAction*
/// @param event QTimerEvent*
///
void k_notificationaction_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationAction*
/// @param event QTimerEvent*
///
void k_notificationaction_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationAction*
/// @param callback void func(KNotificationAction* self, QTimerEvent* event)
///
void k_notificationaction_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationAction*
/// @param event QChildEvent*
///
void k_notificationaction_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationAction*
/// @param event QChildEvent*
///
void k_notificationaction_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationAction*
/// @param callback void func(KNotificationAction* self, QChildEvent* event)
///
void k_notificationaction_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationAction*
/// @param event QEvent*
///
void k_notificationaction_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationAction*
/// @param event QEvent*
///
void k_notificationaction_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationAction*
/// @param callback void func(KNotificationAction* self, QEvent* event)
///
void k_notificationaction_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationAction*
/// @param signal QMetaMethod*
///
void k_notificationaction_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationAction*
/// @param signal QMetaMethod*
///
void k_notificationaction_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationAction*
/// @param callback void func(KNotificationAction* self, QMetaMethod* signal)
///
void k_notificationaction_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationAction*
/// @param signal QMetaMethod*
///
void k_notificationaction_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationAction*
/// @param signal QMetaMethod*
///
void k_notificationaction_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationAction*
/// @param callback void func(KNotificationAction* self, QMetaMethod* signal)
///
void k_notificationaction_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationAction*
///
QObject* k_notificationaction_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationAction*
///
QObject* k_notificationaction_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationAction*
/// @param callback QObject* func()
///
void k_notificationaction_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationAction*
///
int32_t k_notificationaction_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationAction*
///
int32_t k_notificationaction_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationAction*
/// @param callback int32_t func()
///
void k_notificationaction_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationAction*
/// @param signal const char*
///
int32_t k_notificationaction_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationAction*
/// @param signal const char*
///
int32_t k_notificationaction_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationAction*
/// @param callback int32_t func(KNotificationAction* self, const char* signal)
///
void k_notificationaction_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotificationAction*
/// @param signal QMetaMethod*
///
bool k_notificationaction_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotificationAction*
/// @param signal QMetaMethod*
///
bool k_notificationaction_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotificationAction*
/// @param callback bool func(KNotificationAction* self, QMetaMethod* signal)
///
void k_notificationaction_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KNotificationAction*
/// @param callback void func(KNotificationAction* self, const char* objectName)
///
void k_notificationaction_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/knotificationaction.html#dtor.KNotificationAction)
///
/// Delete this object from C++ memory.
///
/// @param self KNotificationAction*
///
void k_notificationaction_delete(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html)

/// k_notification_new constructs a new KNotification object.
///
/// @param eventId const char*
///
KNotification* k_notification_new(const char* eventId);

/// [Upstream resources](https://api.kde.org/knotification.html)

/// k_notification_new2 constructs a new KNotification object.
///
/// @param eventId const char*
/// @param flags flag of enum KNotification__NotificationFlag
///
KNotification* k_notification_new2(const char* eventId, int32_t flags);

/// [Upstream resources](https://api.kde.org/knotification.html)

/// k_notification_new3 constructs a new KNotification object.
///
/// @param eventId const char*
/// @param flags flag of enum KNotification__NotificationFlag
/// @param parent QObject*
///
KNotification* k_notification_new3(const char* eventId, int32_t flags, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KNotification*
///
const QMetaObject* k_notification_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KNotification*
/// @param callback const QMetaObject* func()
///
void k_notification_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KNotification*
///
const QMetaObject* k_notification_qbase_meta_object(void* self);

/// @param self KNotification*
/// @param param1 const char*
///
void* k_notification_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KNotification*
/// @param callback void* func(KNotification* self, const char* param1)
///
void k_notification_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KNotification*
/// @param param1 const char*
///
void* k_notification_qbase_metacast(void* self, const char* param1);

/// @param self KNotification*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_notification_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KNotification*
/// @param callback int32_t func(KNotification* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_notification_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KNotification*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_notification_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_notification_tr(const char* s);

/// [Upstream resources](https://api.kde.org/knotification.html#eventId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KNotification*
///
const char* k_notification_event_id(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#setEventId)
///
/// @param self KNotification*
/// @param eventId const char*
///
void k_notification_set_event_id(void* self, const char* eventId);

/// [Upstream resources](https://api.kde.org/knotification.html#title)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KNotification*
///
const char* k_notification_title(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#setTitle)
///
/// @param self KNotification*
/// @param title const char*
///
void k_notification_set_title(void* self, const char* title);

/// [Upstream resources](https://api.kde.org/knotification.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KNotification*
///
const char* k_notification_text(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#setText)
///
/// @param self KNotification*
/// @param text const char*
///
void k_notification_set_text(void* self, const char* text);

/// [Upstream resources](https://api.kde.org/knotification.html#iconName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KNotification*
///
const char* k_notification_icon_name(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#setIconName)
///
/// @param self KNotification*
/// @param icon const char*
///
void k_notification_set_icon_name(void* self, const char* icon);

/// [Upstream resources](https://api.kde.org/knotification.html#pixmap)
///
/// @param self KNotification*
///
QPixmap* k_notification_pixmap(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#setPixmap)
///
/// @param self KNotification*
/// @param pix QPixmap*
///
void k_notification_set_pixmap(void* self, void* pix);

/// [Upstream resources](https://api.kde.org/knotification.html#defaultAction)
///
/// @param self KNotification*
///
KNotificationAction* k_notification_default_action(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#addDefaultAction)
///
/// @param self KNotification*
/// @param label const char*
///
KNotificationAction* k_notification_add_default_action(void* self, const char* label);

/// [Upstream resources](https://api.kde.org/knotification.html#addAction)
///
/// @param self KNotification*
/// @param label const char*
///
KNotificationAction* k_notification_add_action(void* self, const char* label);

/// [Upstream resources](https://api.kde.org/knotification.html#clearActions)
///
/// @param self KNotification*
///
void k_notification_clear_actions(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#replyAction)
///
/// @param self KNotification*
///
KNotificationReplyAction* k_notification_reply_action(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#flags)
///
/// @param self KNotification*
///
/// @return flag of enum KNotification__NotificationFlag
///
int32_t k_notification_flags(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#setFlags)
///
/// @param self KNotification*
/// @param flags flag of enum KNotification__NotificationFlag
///
void k_notification_set_flags(void* self, const int32_t* flags);

/// [Upstream resources](https://api.kde.org/knotification.html#componentName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KNotification*
///
const char* k_notification_component_name(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#setComponentName)
///
/// @param self KNotification*
/// @param componentName const char*
///
void k_notification_set_component_name(void* self, const char* componentName);

/// [Upstream resources](https://api.kde.org/knotification.html#urls)
///
/// @param self KNotification*
///
/// @return libqt_list of QUrl*
///
libqt_list k_notification_urls(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#setUrls)
///
/// @param self KNotification*
/// @param urls libqt_list of QUrl*
///
void k_notification_set_urls(void* self, libqt_list urls);

/// [Upstream resources](https://api.kde.org/knotification.html#urgency)
///
/// @param self KNotification*
///
/// @return enum KNotification__Urgency
///
int32_t k_notification_urgency(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#setUrgency)
///
/// @param self KNotification*
/// @param urgency enum KNotification__Urgency
///
void k_notification_set_urgency(void* self, int32_t urgency);

/// [Upstream resources](https://api.kde.org/knotification.html#setWindow)
///
/// @param self KNotification*
/// @param window QWindow*
///
void k_notification_set_window(void* self, void* window);

/// [Upstream resources](https://api.kde.org/knotification.html#window)
///
/// @param self KNotification*
///
QWindow* k_notification_window(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#appName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KNotification*
///
const char* k_notification_app_name(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#isAutoDelete)
///
/// @param self KNotification*
///
bool k_notification_is_auto_delete(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#setAutoDelete)
///
/// @param self KNotification*
/// @param autoDelete bool
///
void k_notification_set_auto_delete(void* self, bool autoDelete);

/// [Upstream resources](https://api.kde.org/knotification.html#xdgActivationToken)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KNotification*
///
const char* k_notification_xdg_activation_token(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#closed)
///
/// @param self KNotification*
///
void k_notification_closed(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#closed)
///
/// @param self KNotification*
/// @param callback void func(KNotification* self)
///
void k_notification_on_closed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/knotification.html#ignored)
///
/// @param self KNotification*
///
void k_notification_ignored(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#ignored)
///
/// @param self KNotification*
/// @param callback void func(KNotification* self)
///
void k_notification_on_ignored(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/knotification.html#eventIdChanged)
///
/// @param self KNotification*
///
void k_notification_event_id_changed(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#eventIdChanged)
///
/// @param self KNotification*
/// @param callback void func(KNotification* self)
///
void k_notification_on_event_id_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/knotification.html#titleChanged)
///
/// @param self KNotification*
///
void k_notification_title_changed(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#titleChanged)
///
/// @param self KNotification*
/// @param callback void func(KNotification* self)
///
void k_notification_on_title_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/knotification.html#textChanged)
///
/// @param self KNotification*
///
void k_notification_text_changed(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#textChanged)
///
/// @param self KNotification*
/// @param callback void func(KNotification* self)
///
void k_notification_on_text_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/knotification.html#iconNameChanged)
///
/// @param self KNotification*
///
void k_notification_icon_name_changed(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#iconNameChanged)
///
/// @param self KNotification*
/// @param callback void func(KNotification* self)
///
void k_notification_on_icon_name_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/knotification.html#defaultActionChanged)
///
/// @param self KNotification*
///
void k_notification_default_action_changed(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#defaultActionChanged)
///
/// @param self KNotification*
/// @param callback void func(KNotification* self)
///
void k_notification_on_default_action_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/knotification.html#actionsChanged)
///
/// @param self KNotification*
///
void k_notification_actions_changed(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#actionsChanged)
///
/// @param self KNotification*
/// @param callback void func(KNotification* self)
///
void k_notification_on_actions_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/knotification.html#flagsChanged)
///
/// @param self KNotification*
///
void k_notification_flags_changed(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#flagsChanged)
///
/// @param self KNotification*
/// @param callback void func(KNotification* self)
///
void k_notification_on_flags_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/knotification.html#componentNameChanged)
///
/// @param self KNotification*
///
void k_notification_component_name_changed(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#componentNameChanged)
///
/// @param self KNotification*
/// @param callback void func(KNotification* self)
///
void k_notification_on_component_name_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/knotification.html#urlsChanged)
///
/// @param self KNotification*
///
void k_notification_urls_changed(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#urlsChanged)
///
/// @param self KNotification*
/// @param callback void func(KNotification* self)
///
void k_notification_on_urls_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/knotification.html#urgencyChanged)
///
/// @param self KNotification*
///
void k_notification_urgency_changed(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#urgencyChanged)
///
/// @param self KNotification*
/// @param callback void func(KNotification* self)
///
void k_notification_on_urgency_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/knotification.html#autoDeleteChanged)
///
/// @param self KNotification*
///
void k_notification_auto_delete_changed(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#autoDeleteChanged)
///
/// @param self KNotification*
/// @param callback void func(KNotification* self)
///
void k_notification_on_auto_delete_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/knotification.html#xdgActivationTokenChanged)
///
/// @param self KNotification*
///
void k_notification_xdg_activation_token_changed(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#xdgActivationTokenChanged)
///
/// @param self KNotification*
/// @param callback void func(KNotification* self)
///
void k_notification_on_xdg_activation_token_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/knotification.html#hintsChanged)
///
/// @param self KNotification*
///
void k_notification_hints_changed(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#hintsChanged)
///
/// @param self KNotification*
/// @param callback void func(KNotification* self)
///
void k_notification_on_hints_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/knotification.html#close)
///
/// @param self KNotification*
///
void k_notification_close(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#sendEvent)
///
/// @param self KNotification*
///
void k_notification_send_event(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#setHint)
///
/// @param self KNotification*
/// @param hint const char*
/// @param value QVariant*
///
void k_notification_set_hint(void* self, const char* hint, void* value);

/// [Upstream resources](https://api.kde.org/knotification.html#hints)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of const char* to QVariant*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.keys[i]);
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self KNotification*
///
/// @return libqt_map of const char* to QVariant*
///
libqt_map k_notification_hints(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#setHints)
///
/// @param self KNotification*
/// @param hints libqt_map of const char* to QVariant*
///
void k_notification_set_hints(void* self, libqt_map hints);

/// [Upstream resources](https://api.kde.org/knotification.html#event)
///
/// @param eventId const char*
/// @param title const char*
/// @param text const char*
///
KNotification* k_notification_event(const char* eventId, const char* title, const char* text);

/// [Upstream resources](https://api.kde.org/knotification.html#event)
///
/// @param eventId const char*
///
KNotification* k_notification_event2(const char* eventId);

/// [Upstream resources](https://api.kde.org/knotification.html#event)
///
/// @param eventId enum KNotification__StandardEvent
///
KNotification* k_notification_event3(int32_t eventId);

/// [Upstream resources](https://api.kde.org/knotification.html#event)
///
/// @param eventId enum KNotification__StandardEvent
/// @param title const char*
/// @param text const char*
/// @param pixmap QPixmap*
///
KNotification* k_notification_event4(int32_t eventId, const char* title, const char* text, void* pixmap);

/// [Upstream resources](https://api.kde.org/knotification.html#event)
///
/// @param eventId const char*
/// @param title const char*
/// @param text const char*
/// @param iconName const char*
///
KNotification* k_notification_event5(const char* eventId, const char* title, const char* text, const char* iconName);

/// [Upstream resources](https://api.kde.org/knotification.html#event)
///
/// @param eventId enum KNotification__StandardEvent
/// @param title const char*
/// @param text const char*
/// @param iconName const char*
///
KNotification* k_notification_event6(int32_t eventId, const char* title, const char* text, const char* iconName);

/// [Upstream resources](https://api.kde.org/knotification.html#event)
///
/// @param eventId enum KNotification__StandardEvent
/// @param title const char*
/// @param text const char*
///
KNotification* k_notification_event7(int32_t eventId, const char* title, const char* text);

/// [Upstream resources](https://api.kde.org/knotification.html#beep)
///
void k_notification_beep();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_notification_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_notification_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/knotification.html#event)
///
/// @param eventId const char*
/// @param title const char*
/// @param text const char*
/// @param pixmap QPixmap*
///
KNotification* k_notification_event42(const char* eventId, const char* title, const char* text, void* pixmap);

/// [Upstream resources](https://api.kde.org/knotification.html#event)
///
/// @param eventId const char*
/// @param title const char*
/// @param text const char*
/// @param pixmap QPixmap*
/// @param flags flag of enum KNotification__NotificationFlag
///
KNotification* k_notification_event52(const char* eventId, const char* title, const char* text, void* pixmap, const int32_t* flags);

/// [Upstream resources](https://api.kde.org/knotification.html#event)
///
/// @param eventId const char*
/// @param title const char*
/// @param text const char*
/// @param pixmap QPixmap*
/// @param flags flag of enum KNotification__NotificationFlag
/// @param componentName const char*
///
KNotification* k_notification_event62(const char* eventId, const char* title, const char* text, void* pixmap, const int32_t* flags, const char* componentName);

/// [Upstream resources](https://api.kde.org/knotification.html#event)
///
/// @param eventId const char*
/// @param text const char*
///
KNotification* k_notification_event22(const char* eventId, const char* text);

/// [Upstream resources](https://api.kde.org/knotification.html#event)
///
/// @param eventId const char*
/// @param text const char*
/// @param pixmap QPixmap*
///
KNotification* k_notification_event32(const char* eventId, const char* text, void* pixmap);

/// [Upstream resources](https://api.kde.org/knotification.html#event)
///
/// @param eventId const char*
/// @param text const char*
/// @param pixmap QPixmap*
/// @param flags flag of enum KNotification__NotificationFlag
///
KNotification* k_notification_event43(const char* eventId, const char* text, void* pixmap, const int32_t* flags);

/// [Upstream resources](https://api.kde.org/knotification.html#event)
///
/// @param eventId const char*
/// @param text const char*
/// @param pixmap QPixmap*
/// @param flags flag of enum KNotification__NotificationFlag
/// @param componentName const char*
///
KNotification* k_notification_event53(const char* eventId, const char* text, void* pixmap, const int32_t* flags, const char* componentName);

/// [Upstream resources](https://api.kde.org/knotification.html#event)
///
/// @param eventId enum KNotification__StandardEvent
/// @param text const char*
///
KNotification* k_notification_event23(int32_t eventId, const char* text);

/// [Upstream resources](https://api.kde.org/knotification.html#event)
///
/// @param eventId enum KNotification__StandardEvent
/// @param text const char*
/// @param pixmap QPixmap*
///
KNotification* k_notification_event33(int32_t eventId, const char* text, void* pixmap);

/// [Upstream resources](https://api.kde.org/knotification.html#event)
///
/// @param eventId enum KNotification__StandardEvent
/// @param text const char*
/// @param pixmap QPixmap*
/// @param flags flag of enum KNotification__NotificationFlag
///
KNotification* k_notification_event44(int32_t eventId, const char* text, void* pixmap, const int32_t* flags);

/// [Upstream resources](https://api.kde.org/knotification.html#event)
///
/// @param eventId enum KNotification__StandardEvent
/// @param title const char*
/// @param text const char*
/// @param pixmap QPixmap*
/// @param flags flag of enum KNotification__NotificationFlag
///
KNotification* k_notification_event54(int32_t eventId, const char* title, const char* text, void* pixmap, const int32_t* flags);

/// [Upstream resources](https://api.kde.org/knotification.html#event)
///
/// @param eventId const char*
/// @param title const char*
/// @param text const char*
/// @param iconName const char*
/// @param flags flag of enum KNotification__NotificationFlag
///
KNotification* k_notification_event55(const char* eventId, const char* title, const char* text, const char* iconName, const int32_t* flags);

/// [Upstream resources](https://api.kde.org/knotification.html#event)
///
/// @param eventId const char*
/// @param title const char*
/// @param text const char*
/// @param iconName const char*
/// @param flags flag of enum KNotification__NotificationFlag
/// @param componentName const char*
///
KNotification* k_notification_event63(const char* eventId, const char* title, const char* text, const char* iconName, const int32_t* flags, const char* componentName);

/// [Upstream resources](https://api.kde.org/knotification.html#event)
///
/// @param eventId enum KNotification__StandardEvent
/// @param title const char*
/// @param text const char*
/// @param iconName const char*
/// @param flags flag of enum KNotification__NotificationFlag
///
KNotification* k_notification_event56(int32_t eventId, const char* title, const char* text, const char* iconName, const int32_t* flags);

/// [Upstream resources](https://api.kde.org/knotification.html#event)
///
/// @param eventId enum KNotification__StandardEvent
/// @param title const char*
/// @param text const char*
/// @param flags flag of enum KNotification__NotificationFlag
///
KNotification* k_notification_event45(int32_t eventId, const char* title, const char* text, const int32_t* flags);

/// [Upstream resources](https://api.kde.org/knotification.html#beep)
///
/// @param reason const char*
///
void k_notification_beep1(const char* reason);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KNotification*
///
const char* k_notification_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KNotification*
/// @param name char*
///
void k_notification_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KNotification*
///
bool k_notification_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KNotification*
///
bool k_notification_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KNotification*
///
bool k_notification_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KNotification*
///
bool k_notification_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KNotification*
/// @param b bool
///
bool k_notification_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KNotification*
///
QThread* k_notification_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KNotification*
/// @param thread QThread*
///
bool k_notification_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNotification*
/// @param interval int
///
int32_t k_notification_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNotification*
/// @param time int64_t of nanoseconds
///
int32_t k_notification_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNotification*
/// @param id int
///
void k_notification_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNotification*
/// @param id enum Qt__TimerId
///
void k_notification_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KNotification*
///
/// @return libqt_list of QObject*
///
libqt_list k_notification_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KNotification*
/// @param parent QObject*
///
void k_notification_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KNotification*
/// @param filterObj QObject*
///
void k_notification_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KNotification*
/// @param obj QObject*
///
void k_notification_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_notification_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_notification_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KNotification*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_notification_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_notification_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_notification_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KNotification*
///
bool k_notification_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KNotification*
/// @param receiver QObject*
///
bool k_notification_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_notification_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KNotification*
///
void k_notification_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KNotification*
///
void k_notification_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KNotification*
/// @param name const char*
/// @param value QVariant*
///
bool k_notification_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KNotification*
/// @param name const char*
///
QVariant* k_notification_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KNotification*
///
const char** k_notification_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KNotification*
///
QBindingStorage* k_notification_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KNotification*
///
const QBindingStorage* k_notification_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNotification*
///
void k_notification_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNotification*
/// @param callback void func(KNotification* self)
///
void k_notification_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KNotification*
///
QObject* k_notification_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KNotification*
/// @param classname const char*
///
bool k_notification_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KNotification*
///
void k_notification_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNotification*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_notification_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNotification*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_notification_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_notification_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_notification_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KNotification*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_notification_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KNotification*
/// @param signal const char*
///
bool k_notification_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KNotification*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_notification_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KNotification*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_notification_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KNotification*
/// @param receiver QObject*
/// @param member const char*
///
bool k_notification_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNotification*
/// @param param1 QObject*
///
void k_notification_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNotification*
/// @param callback void func(KNotification* self, QObject* param1)
///
void k_notification_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotification*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_notification_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotification*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_notification_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotification*
/// @param callback bool func(KNotification* self, QObject* watched, QEvent* event)
///
void k_notification_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotification*
/// @param event QTimerEvent*
///
void k_notification_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotification*
/// @param event QTimerEvent*
///
void k_notification_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotification*
/// @param callback void func(KNotification* self, QTimerEvent* event)
///
void k_notification_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotification*
/// @param event QChildEvent*
///
void k_notification_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotification*
/// @param event QChildEvent*
///
void k_notification_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotification*
/// @param callback void func(KNotification* self, QChildEvent* event)
///
void k_notification_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotification*
/// @param event QEvent*
///
void k_notification_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotification*
/// @param event QEvent*
///
void k_notification_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotification*
/// @param callback void func(KNotification* self, QEvent* event)
///
void k_notification_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotification*
/// @param signal QMetaMethod*
///
void k_notification_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotification*
/// @param signal QMetaMethod*
///
void k_notification_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotification*
/// @param callback void func(KNotification* self, QMetaMethod* signal)
///
void k_notification_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotification*
/// @param signal QMetaMethod*
///
void k_notification_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotification*
/// @param signal QMetaMethod*
///
void k_notification_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotification*
/// @param callback void func(KNotification* self, QMetaMethod* signal)
///
void k_notification_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotification*
///
QObject* k_notification_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotification*
///
QObject* k_notification_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotification*
/// @param callback QObject* func()
///
void k_notification_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotification*
///
int32_t k_notification_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotification*
///
int32_t k_notification_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotification*
/// @param callback int32_t func()
///
void k_notification_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotification*
/// @param signal const char*
///
int32_t k_notification_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotification*
/// @param signal const char*
///
int32_t k_notification_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotification*
/// @param callback int32_t func(KNotification* self, const char* signal)
///
void k_notification_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNotification*
/// @param signal QMetaMethod*
///
bool k_notification_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNotification*
/// @param signal QMetaMethod*
///
bool k_notification_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNotification*
/// @param callback bool func(KNotification* self, QMetaMethod* signal)
///
void k_notification_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KNotification*
/// @param callback void func(KNotification* self, const char* objectName)
///
void k_notification_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/knotification.html#dtor.KNotification)
///
/// Delete this object from C++ memory.
///
/// @param self KNotification*
///
void k_notification_delete(void* self);

/// [Upstream resources](https://api.kde.org/knotification.html#public-types)

typedef enum {
    KNOTIFICATION_NOTIFICATIONFLAG_CLOSEONTIMEOUT = 0,
    KNOTIFICATION_NOTIFICATIONFLAG_PERSISTENT = 2,
    KNOTIFICATION_NOTIFICATIONFLAG_LOOPSOUND = 8,
    KNOTIFICATION_NOTIFICATIONFLAG_SKIPGROUPING = 16,
    KNOTIFICATION_NOTIFICATIONFLAG_CLOSEWHENWINDOWACTIVATED = 32,
    KNOTIFICATION_NOTIFICATIONFLAG_DEFAULTEVENT = 61440
} KNotification__NotificationFlag;

/// [Upstream resources](https://api.kde.org/knotification.html#public-types)

typedef enum {
    KNOTIFICATION_STANDARDEVENT_NOTIFICATION = 0,
    KNOTIFICATION_STANDARDEVENT_WARNING = 1,
    KNOTIFICATION_STANDARDEVENT_ERROR = 2,
    KNOTIFICATION_STANDARDEVENT_CATASTROPHE = 3
} KNotification__StandardEvent;

/// [Upstream resources](https://api.kde.org/knotification.html#public-types)

typedef enum {
    KNOTIFICATION_URGENCY_DEFAULTURGENCY = -1,
    KNOTIFICATION_URGENCY_LOWURGENCY = 10,
    KNOTIFICATION_URGENCY_NORMALURGENCY = 50,
    KNOTIFICATION_URGENCY_HIGHURGENCY = 70,
    KNOTIFICATION_URGENCY_CRITICALURGENCY = 90
} KNotification__Urgency;

#endif
