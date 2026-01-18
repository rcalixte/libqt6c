#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUS_QT6C_LIBQDBUSSERVICEWATCHER_H
#define SRC_POSIX_EXTRAS_DBUS_QT6C_LIBQDBUSSERVICEWATCHER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html)

/// q_dbusservicewatcher_new constructs a new QDBusServiceWatcher object.
///
QDBusServiceWatcher* q_dbusservicewatcher_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html)

/// q_dbusservicewatcher_new2 constructs a new QDBusServiceWatcher object.
///
/// @param service const char*
/// @param connection QDBusConnection*
///
QDBusServiceWatcher* q_dbusservicewatcher_new2(const char* service, void* connection);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html)

/// q_dbusservicewatcher_new3 constructs a new QDBusServiceWatcher object.
///
/// @param parent QObject*
///
QDBusServiceWatcher* q_dbusservicewatcher_new3(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html)

/// q_dbusservicewatcher_new4 constructs a new QDBusServiceWatcher object.
///
/// @param service const char*
/// @param connection QDBusConnection*
/// @param watchMode flag of enum QDBusServiceWatcher__WatchModeFlag
///
QDBusServiceWatcher* q_dbusservicewatcher_new4(const char* service, void* connection, int32_t watchMode);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html)

/// q_dbusservicewatcher_new5 constructs a new QDBusServiceWatcher object.
///
/// @param service const char*
/// @param connection QDBusConnection*
/// @param watchMode flag of enum QDBusServiceWatcher__WatchModeFlag
/// @param parent QObject*
///
QDBusServiceWatcher* q_dbusservicewatcher_new5(const char* service, void* connection, int32_t watchMode, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QDBusServiceWatcher*
///
const QMetaObject* q_dbusservicewatcher_meta_object(void* self);

/// @param self QDBusServiceWatcher*
/// @param param1 const char*
///
void* q_dbusservicewatcher_metacast(void* self, const char* param1);

/// @param self QDBusServiceWatcher*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_dbusservicewatcher_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QDBusServiceWatcher*
/// @param callback int32_t func(QDBusServiceWatcher* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_dbusservicewatcher_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QDBusServiceWatcher*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_dbusservicewatcher_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_dbusservicewatcher_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#watchedServices)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDBusServiceWatcher*
///
const char** q_dbusservicewatcher_watched_services(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#setWatchedServices)
///
/// @param self QDBusServiceWatcher*
/// @param services const char**
///
void q_dbusservicewatcher_set_watched_services(void* self, const char* services[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#addWatchedService)
///
/// @param self QDBusServiceWatcher*
/// @param newService const char*
///
void q_dbusservicewatcher_add_watched_service(void* self, const char* newService);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#removeWatchedService)
///
/// @param self QDBusServiceWatcher*
/// @param service const char*
///
bool q_dbusservicewatcher_remove_watched_service(void* self, const char* service);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#watchMode)
///
/// @param self QDBusServiceWatcher*
///
/// @return flag of enum QDBusServiceWatcher__WatchModeFlag
///
int32_t q_dbusservicewatcher_watch_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#setWatchMode)
///
/// @param self QDBusServiceWatcher*
/// @param mode flag of enum QDBusServiceWatcher__WatchModeFlag
///
void q_dbusservicewatcher_set_watch_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#connection)
///
/// @param self QDBusServiceWatcher*
///
QDBusConnection* q_dbusservicewatcher_connection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#setConnection)
///
/// @param self QDBusServiceWatcher*
/// @param connection QDBusConnection*
///
void q_dbusservicewatcher_set_connection(void* self, void* connection);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#serviceRegistered)
///
/// @param self QDBusServiceWatcher*
/// @param service const char*
///
void q_dbusservicewatcher_service_registered(void* self, const char* service);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#serviceRegistered)
///
/// @param self QDBusServiceWatcher*
/// @param callback void func(QDBusServiceWatcher* self, const char* service)
///
void q_dbusservicewatcher_on_service_registered(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#serviceUnregistered)
///
/// @param self QDBusServiceWatcher*
/// @param service const char*
///
void q_dbusservicewatcher_service_unregistered(void* self, const char* service);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#serviceUnregistered)
///
/// @param self QDBusServiceWatcher*
/// @param callback void func(QDBusServiceWatcher* self, const char* service)
///
void q_dbusservicewatcher_on_service_unregistered(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#serviceOwnerChanged)
///
/// @param self QDBusServiceWatcher*
/// @param service const char*
/// @param oldOwner const char*
/// @param newOwner const char*
///
void q_dbusservicewatcher_service_owner_changed(void* self, const char* service, const char* oldOwner, const char* newOwner);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#serviceOwnerChanged)
///
/// @param self QDBusServiceWatcher*
/// @param callback void func(QDBusServiceWatcher* self, const char* service, const char* oldOwner, const char* newOwner)
///
void q_dbusservicewatcher_on_service_owner_changed(void* self, void (*callback)(void*, const char*, const char*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_dbusservicewatcher_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_dbusservicewatcher_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QDBusServiceWatcher*
///
const char* q_dbusservicewatcher_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDBusServiceWatcher*
/// @param name char*
///
void q_dbusservicewatcher_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QDBusServiceWatcher*
///
bool q_dbusservicewatcher_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QDBusServiceWatcher*
///
bool q_dbusservicewatcher_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QDBusServiceWatcher*
///
bool q_dbusservicewatcher_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QDBusServiceWatcher*
///
bool q_dbusservicewatcher_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDBusServiceWatcher*
/// @param b bool
///
bool q_dbusservicewatcher_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QDBusServiceWatcher*
///
QThread* q_dbusservicewatcher_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDBusServiceWatcher*
/// @param thread QThread*
///
bool q_dbusservicewatcher_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDBusServiceWatcher*
/// @param interval int
///
int32_t q_dbusservicewatcher_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDBusServiceWatcher*
/// @param id int
///
void q_dbusservicewatcher_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDBusServiceWatcher*
/// @param id enum Qt__TimerId
///
void q_dbusservicewatcher_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QDBusServiceWatcher*
///
/// @return libqt_list of QObject*
///
libqt_list q_dbusservicewatcher_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QDBusServiceWatcher*
/// @param parent QObject*
///
void q_dbusservicewatcher_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDBusServiceWatcher*
/// @param filterObj QObject*
///
void q_dbusservicewatcher_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDBusServiceWatcher*
/// @param obj QObject*
///
void q_dbusservicewatcher_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_dbusservicewatcher_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDBusServiceWatcher*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_dbusservicewatcher_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_dbusservicewatcher_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_dbusservicewatcher_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QDBusServiceWatcher*
///
void q_dbusservicewatcher_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QDBusServiceWatcher*
///
void q_dbusservicewatcher_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDBusServiceWatcher*
/// @param name const char*
/// @param value QVariant*
///
bool q_dbusservicewatcher_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QDBusServiceWatcher*
/// @param name const char*
///
QVariant* q_dbusservicewatcher_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QDBusServiceWatcher*
///
const char** q_dbusservicewatcher_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDBusServiceWatcher*
///
QBindingStorage* q_dbusservicewatcher_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDBusServiceWatcher*
///
const QBindingStorage* q_dbusservicewatcher_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDBusServiceWatcher*
///
void q_dbusservicewatcher_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDBusServiceWatcher*
/// @param callback void func(QDBusServiceWatcher* self)
///
void q_dbusservicewatcher_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QDBusServiceWatcher*
///
QObject* q_dbusservicewatcher_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QDBusServiceWatcher*
/// @param classname const char*
///
bool q_dbusservicewatcher_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDBusServiceWatcher*
///
void q_dbusservicewatcher_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDBusServiceWatcher*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_dbusservicewatcher_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDBusServiceWatcher*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_dbusservicewatcher_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_dbusservicewatcher_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDBusServiceWatcher*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_dbusservicewatcher_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDBusServiceWatcher*
/// @param param1 QObject*
///
void q_dbusservicewatcher_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDBusServiceWatcher*
/// @param callback void func(QDBusServiceWatcher* self, QObject* param1)
///
void q_dbusservicewatcher_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusServiceWatcher*
/// @param event QEvent*
///
bool q_dbusservicewatcher_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusServiceWatcher*
/// @param event QEvent*
///
bool q_dbusservicewatcher_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusServiceWatcher*
/// @param callback bool func(QDBusServiceWatcher* self, QEvent* event)
///
void q_dbusservicewatcher_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusServiceWatcher*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_dbusservicewatcher_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusServiceWatcher*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_dbusservicewatcher_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusServiceWatcher*
/// @param callback bool func(QDBusServiceWatcher* self, QObject* watched, QEvent* event)
///
void q_dbusservicewatcher_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusServiceWatcher*
/// @param event QTimerEvent*
///
void q_dbusservicewatcher_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusServiceWatcher*
/// @param event QTimerEvent*
///
void q_dbusservicewatcher_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusServiceWatcher*
/// @param callback void func(QDBusServiceWatcher* self, QTimerEvent* event)
///
void q_dbusservicewatcher_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusServiceWatcher*
/// @param event QChildEvent*
///
void q_dbusservicewatcher_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusServiceWatcher*
/// @param event QChildEvent*
///
void q_dbusservicewatcher_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusServiceWatcher*
/// @param callback void func(QDBusServiceWatcher* self, QChildEvent* event)
///
void q_dbusservicewatcher_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusServiceWatcher*
/// @param event QEvent*
///
void q_dbusservicewatcher_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusServiceWatcher*
/// @param event QEvent*
///
void q_dbusservicewatcher_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusServiceWatcher*
/// @param callback void func(QDBusServiceWatcher* self, QEvent* event)
///
void q_dbusservicewatcher_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusServiceWatcher*
/// @param signal QMetaMethod*
///
void q_dbusservicewatcher_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusServiceWatcher*
/// @param signal QMetaMethod*
///
void q_dbusservicewatcher_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusServiceWatcher*
/// @param callback void func(QDBusServiceWatcher* self, QMetaMethod* signal)
///
void q_dbusservicewatcher_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusServiceWatcher*
/// @param signal QMetaMethod*
///
void q_dbusservicewatcher_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusServiceWatcher*
/// @param signal QMetaMethod*
///
void q_dbusservicewatcher_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusServiceWatcher*
/// @param callback void func(QDBusServiceWatcher* self, QMetaMethod* signal)
///
void q_dbusservicewatcher_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusServiceWatcher*
///
QObject* q_dbusservicewatcher_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusServiceWatcher*
///
QObject* q_dbusservicewatcher_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusServiceWatcher*
/// @param callback QObject* func()
///
void q_dbusservicewatcher_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusServiceWatcher*
///
int32_t q_dbusservicewatcher_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusServiceWatcher*
///
int32_t q_dbusservicewatcher_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusServiceWatcher*
/// @param callback int32_t func()
///
void q_dbusservicewatcher_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusServiceWatcher*
/// @param signal const char*
///
int32_t q_dbusservicewatcher_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusServiceWatcher*
/// @param signal const char*
///
int32_t q_dbusservicewatcher_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusServiceWatcher*
/// @param callback int32_t func(QDBusServiceWatcher* self, const char* signal)
///
void q_dbusservicewatcher_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDBusServiceWatcher*
/// @param signal QMetaMethod*
///
bool q_dbusservicewatcher_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDBusServiceWatcher*
/// @param signal QMetaMethod*
///
bool q_dbusservicewatcher_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDBusServiceWatcher*
/// @param callback bool func(QDBusServiceWatcher* self, QMetaMethod* signal)
///
void q_dbusservicewatcher_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QDBusServiceWatcher*
/// @param callback void func(QDBusServiceWatcher* self, const char* objectName)
///
void q_dbusservicewatcher_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#dtor.QDBusServiceWatcher)
///
/// Delete this object from C++ memory.
///
/// @param self QDBusServiceWatcher*
///
void q_dbusservicewatcher_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusservicewatcher.html#public-types)

typedef enum {
    QDBUSSERVICEWATCHER_WATCHMODEFLAG_WATCHFORREGISTRATION = 1,
    QDBUSSERVICEWATCHER_WATCHMODEFLAG_WATCHFORUNREGISTRATION = 2,
    QDBUSSERVICEWATCHER_WATCHMODEFLAG_WATCHFOROWNERCHANGE = 3
} QDBusServiceWatcher__WatchModeFlag;

#endif
