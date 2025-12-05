#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUS_QT6C_LIBQDBUSABSTRACTINTERFACE_H
#define SRC_POSIX_EXTRAS_DBUS_QT6C_LIBQDBUSABSTRACTINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterfacebase.html)

/// @param self QDBusAbstractInterfaceBase*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_dbusabstractinterfacebase_metacall(void* self, int32_t param1, int param2, void* param3);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QDBusAbstractInterfaceBase*
///
const QMetaObject* q_dbusabstractinterfacebase_meta_object(void* self);

/// Inherited from QObject
///
/// @param self QDBusAbstractInterfaceBase*
/// @param param1 const char*
///
void* q_dbusabstractinterfacebase_metacast(void* self, const char* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* q_dbusabstractinterfacebase_tr(const char* s);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QDBusAbstractInterfaceBase*
/// @param event QEvent*
///
bool q_dbusabstractinterfacebase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QDBusAbstractInterfaceBase*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_dbusabstractinterfacebase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDBusAbstractInterfaceBase*
///
const char* q_dbusabstractinterfacebase_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDBusAbstractInterfaceBase*
/// @param name char*
///
void q_dbusabstractinterfacebase_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QDBusAbstractInterfaceBase*
///
bool q_dbusabstractinterfacebase_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QDBusAbstractInterfaceBase*
///
bool q_dbusabstractinterfacebase_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QDBusAbstractInterfaceBase*
///
bool q_dbusabstractinterfacebase_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QDBusAbstractInterfaceBase*
///
bool q_dbusabstractinterfacebase_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDBusAbstractInterfaceBase*
/// @param b bool
///
bool q_dbusabstractinterfacebase_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QDBusAbstractInterfaceBase*
///
QThread* q_dbusabstractinterfacebase_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDBusAbstractInterfaceBase*
/// @param thread QThread*
///
bool q_dbusabstractinterfacebase_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDBusAbstractInterfaceBase*
/// @param interval int
///
int32_t q_dbusabstractinterfacebase_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDBusAbstractInterfaceBase*
/// @param id int
///
void q_dbusabstractinterfacebase_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDBusAbstractInterfaceBase*
/// @param id enum Qt__TimerId
///
void q_dbusabstractinterfacebase_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QDBusAbstractInterfaceBase*
///
libqt_list /* of QObject* */ q_dbusabstractinterfacebase_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QDBusAbstractInterfaceBase*
/// @param parent QObject*
///
void q_dbusabstractinterfacebase_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDBusAbstractInterfaceBase*
/// @param filterObj QObject*
///
void q_dbusabstractinterfacebase_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDBusAbstractInterfaceBase*
/// @param obj QObject*
///
void q_dbusabstractinterfacebase_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_dbusabstractinterfacebase_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDBusAbstractInterfaceBase*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_dbusabstractinterfacebase_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_dbusabstractinterfacebase_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_dbusabstractinterfacebase_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QDBusAbstractInterfaceBase*
///
void q_dbusabstractinterfacebase_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QDBusAbstractInterfaceBase*
///
void q_dbusabstractinterfacebase_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDBusAbstractInterfaceBase*
/// @param name const char*
/// @param value QVariant*
///
bool q_dbusabstractinterfacebase_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QDBusAbstractInterfaceBase*
/// @param name const char*
///
QVariant* q_dbusabstractinterfacebase_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDBusAbstractInterfaceBase*
///
const char** q_dbusabstractinterfacebase_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDBusAbstractInterfaceBase*
///
QBindingStorage* q_dbusabstractinterfacebase_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDBusAbstractInterfaceBase*
///
const QBindingStorage* q_dbusabstractinterfacebase_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDBusAbstractInterfaceBase*
///
void q_dbusabstractinterfacebase_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDBusAbstractInterfaceBase*
/// @param callback void func(QDBusAbstractInterfaceBase* self)
///
void q_dbusabstractinterfacebase_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QDBusAbstractInterfaceBase*
///
QObject* q_dbusabstractinterfacebase_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QDBusAbstractInterfaceBase*
/// @param classname const char*
///
bool q_dbusabstractinterfacebase_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDBusAbstractInterfaceBase*
///
void q_dbusabstractinterfacebase_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* q_dbusabstractinterfacebase_tr2(const char* s, const char* c);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_dbusabstractinterfacebase_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDBusAbstractInterfaceBase*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_dbusabstractinterfacebase_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDBusAbstractInterfaceBase*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_dbusabstractinterfacebase_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_dbusabstractinterfacebase_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDBusAbstractInterfaceBase*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_dbusabstractinterfacebase_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDBusAbstractInterfaceBase*
/// @param param1 QObject*
///
void q_dbusabstractinterfacebase_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDBusAbstractInterfaceBase*
/// @param callback void func(QDBusAbstractInterfaceBase* self, QObject* param1)
///
void q_dbusabstractinterfacebase_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QDBusAbstractInterfaceBase*
/// @param callback void func(QDBusAbstractInterfaceBase* self, const char* objectName)
///
void q_dbusabstractinterfacebase_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterfacebase.html#dtor.QDBusAbstractInterfaceBase)
///
/// Delete this object from C++ memory.
///
/// @param self QDBusAbstractInterfaceBase*
///
void q_dbusabstractinterfacebase_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QDBusAbstractInterface*
///
const QMetaObject* q_dbusabstractinterface_meta_object(void* self);

/// @param self QDBusAbstractInterface*
/// @param param1 const char*
///
void* q_dbusabstractinterface_metacast(void* self, const char* param1);

/// @param self QDBusAbstractInterface*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_dbusabstractinterface_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* q_dbusabstractinterface_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#isValid)
///
/// @param self QDBusAbstractInterface*
///
bool q_dbusabstractinterface_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#connection)
///
/// @param self QDBusAbstractInterface*
///
QDBusConnection* q_dbusabstractinterface_connection(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#service)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDBusAbstractInterface*
///
const char* q_dbusabstractinterface_service(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#path)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDBusAbstractInterface*
///
const char* q_dbusabstractinterface_path(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#interface)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDBusAbstractInterface*
///
const char* q_dbusabstractinterface_interface(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#lastError)
///
/// @param self QDBusAbstractInterface*
///
QDBusError* q_dbusabstractinterface_last_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#setTimeout)
///
/// @param self QDBusAbstractInterface*
/// @param timeout int
///
void q_dbusabstractinterface_set_timeout(void* self, int timeout);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#timeout)
///
/// @param self QDBusAbstractInterface*
///
int32_t q_dbusabstractinterface_timeout(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#setInteractiveAuthorizationAllowed)
///
/// @param self QDBusAbstractInterface*
/// @param enable bool
///
void q_dbusabstractinterface_set_interactive_authorization_allowed(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#isInteractiveAuthorizationAllowed)
///
/// @param self QDBusAbstractInterface*
///
bool q_dbusabstractinterface_is_interactive_authorization_allowed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#call)
///
/// @param self QDBusAbstractInterface*
/// @param method const char*
///
QDBusMessage* q_dbusabstractinterface_call(void* self, const char* method);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#call)
///
/// @param self QDBusAbstractInterface*
/// @param mode enum QDBus__CallMode
/// @param method const char*
///
QDBusMessage* q_dbusabstractinterface_call2(void* self, int32_t mode, const char* method);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#callWithArgumentList)
///
/// @param self QDBusAbstractInterface*
/// @param mode enum QDBus__CallMode
/// @param method const char*
/// @param args libqt_list /* of QVariant* */
///
QDBusMessage* q_dbusabstractinterface_call_with_argument_list(void* self, int32_t mode, const char* method, libqt_list args);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#asyncCall)
///
/// @param self QDBusAbstractInterface*
/// @param method const char*
///
QDBusPendingCall* q_dbusabstractinterface_async_call(void* self, const char* method);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#asyncCallWithArgumentList)
///
/// @param self QDBusAbstractInterface*
/// @param method const char*
/// @param args libqt_list /* of QVariant* */
///
QDBusPendingCall* q_dbusabstractinterface_async_call_with_argument_list(void* self, const char* method, libqt_list args);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* q_dbusabstractinterface_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_dbusabstractinterface_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QDBusAbstractInterface*
/// @param event QEvent*
///
bool q_dbusabstractinterface_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QDBusAbstractInterface*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_dbusabstractinterface_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDBusAbstractInterface*
///
const char* q_dbusabstractinterface_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDBusAbstractInterface*
/// @param name char*
///
void q_dbusabstractinterface_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QDBusAbstractInterface*
///
bool q_dbusabstractinterface_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QDBusAbstractInterface*
///
bool q_dbusabstractinterface_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QDBusAbstractInterface*
///
bool q_dbusabstractinterface_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QDBusAbstractInterface*
///
bool q_dbusabstractinterface_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDBusAbstractInterface*
/// @param b bool
///
bool q_dbusabstractinterface_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QDBusAbstractInterface*
///
QThread* q_dbusabstractinterface_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDBusAbstractInterface*
/// @param thread QThread*
///
bool q_dbusabstractinterface_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDBusAbstractInterface*
/// @param interval int
///
int32_t q_dbusabstractinterface_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDBusAbstractInterface*
/// @param id int
///
void q_dbusabstractinterface_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDBusAbstractInterface*
/// @param id enum Qt__TimerId
///
void q_dbusabstractinterface_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QDBusAbstractInterface*
///
libqt_list /* of QObject* */ q_dbusabstractinterface_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QDBusAbstractInterface*
/// @param parent QObject*
///
void q_dbusabstractinterface_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDBusAbstractInterface*
/// @param filterObj QObject*
///
void q_dbusabstractinterface_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDBusAbstractInterface*
/// @param obj QObject*
///
void q_dbusabstractinterface_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_dbusabstractinterface_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDBusAbstractInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_dbusabstractinterface_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_dbusabstractinterface_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_dbusabstractinterface_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QDBusAbstractInterface*
///
void q_dbusabstractinterface_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QDBusAbstractInterface*
///
void q_dbusabstractinterface_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDBusAbstractInterface*
/// @param name const char*
/// @param value QVariant*
///
bool q_dbusabstractinterface_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QDBusAbstractInterface*
/// @param name const char*
///
QVariant* q_dbusabstractinterface_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDBusAbstractInterface*
///
const char** q_dbusabstractinterface_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDBusAbstractInterface*
///
QBindingStorage* q_dbusabstractinterface_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDBusAbstractInterface*
///
const QBindingStorage* q_dbusabstractinterface_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDBusAbstractInterface*
///
void q_dbusabstractinterface_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDBusAbstractInterface*
/// @param callback void func(QDBusAbstractInterface* self)
///
void q_dbusabstractinterface_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QDBusAbstractInterface*
///
QObject* q_dbusabstractinterface_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QDBusAbstractInterface*
/// @param classname const char*
///
bool q_dbusabstractinterface_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDBusAbstractInterface*
///
void q_dbusabstractinterface_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDBusAbstractInterface*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_dbusabstractinterface_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDBusAbstractInterface*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_dbusabstractinterface_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_dbusabstractinterface_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QDBusAbstractInterface*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_dbusabstractinterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDBusAbstractInterface*
/// @param param1 QObject*
///
void q_dbusabstractinterface_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDBusAbstractInterface*
/// @param callback void func(QDBusAbstractInterface* self, QObject* param1)
///
void q_dbusabstractinterface_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QDBusAbstractInterface*
/// @param callback void func(QDBusAbstractInterface* self, const char* objectName)
///
void q_dbusabstractinterface_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusabstractinterface.html#dtor.QDBusAbstractInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QDBusAbstractInterface*
///
void q_dbusabstractinterface_delete(void* self);

#endif
