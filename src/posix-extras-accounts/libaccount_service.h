#pragma once
#ifndef SRC_POSIX_EXTRAS_ACCOUNTS_QT6C_LIBACCOUNT_SERVICE_H
#define SRC_POSIX_EXTRAS_ACCOUNTS_QT6C_LIBACCOUNT_SERVICE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AccountService.html)

/// q_accounts__accountservice_new constructs a new Accounts::AccountService object.
///
/// @param account Accounts__Account*
/// @param service Accounts__Service*
///
Accounts__AccountService* q_accounts__accountservice_new(void* account, void* service);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AccountService.html)

/// q_accounts__accountservice_new2 constructs a new Accounts::AccountService object.
///
/// @param account Accounts__Account*
/// @param service Accounts__Service*
/// @param parent QObject*
///
Accounts__AccountService* q_accounts__accountservice_new2(void* account, void* service, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self Accounts__AccountService*
///
const QMetaObject* q_accounts__accountservice_meta_object(void* self);

/// @param self Accounts__AccountService*
/// @param param1 const char*
///
void* q_accounts__accountservice_metacast(void* self, const char* param1);

/// @param self Accounts__AccountService*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_accounts__accountservice_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self Accounts__AccountService*
/// @param callback int32_t func(Accounts__AccountService* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_accounts__accountservice_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self Accounts__AccountService*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_accounts__accountservice_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* q_accounts__accountservice_tr(const char* s);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AccountService.html)
///
/// @param self Accounts__AccountService*
///
Accounts__Account* q_accounts__accountservice_account(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AccountService.html)
///
/// @param self Accounts__AccountService*
///
Accounts__Service* q_accounts__accountservice_service(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AccountService.html)
///
/// @param self Accounts__AccountService*
///
bool q_accounts__accountservice_enabled(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AccountService.html)
///
/// @param self Accounts__AccountService*
///
bool q_accounts__accountservice_is_enabled(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AccountService.html)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Accounts__AccountService*
///
const char** q_accounts__accountservice_all_keys(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AccountService.html)
///
/// @param self Accounts__AccountService*
/// @param prefix const char*
///
void q_accounts__accountservice_begin_group(void* self, const char* prefix);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AccountService.html)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Accounts__AccountService*
///
const char** q_accounts__accountservice_child_groups(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AccountService.html)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Accounts__AccountService*
///
const char** q_accounts__accountservice_child_keys(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AccountService.html)
///
/// @param self Accounts__AccountService*
///
void q_accounts__accountservice_clear(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AccountService.html)
///
/// @param self Accounts__AccountService*
/// @param key const char*
///
bool q_accounts__accountservice_contains(void* self, const char* key);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AccountService.html)
///
/// @param self Accounts__AccountService*
///
void q_accounts__accountservice_end_group(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AccountService.html)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Accounts__AccountService*
///
const char* q_accounts__accountservice_group(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AccountService.html)
///
/// @param self Accounts__AccountService*
/// @param key const char*
///
void q_accounts__accountservice_remove(void* self, const char* key);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AccountService.html)
///
/// @param self Accounts__AccountService*
/// @param key const char*
/// @param value QVariant*
///
void q_accounts__accountservice_set_value(void* self, const char* key, void* value);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AccountService.html)
///
/// @param self Accounts__AccountService*
/// @param key const char*
/// @param value QVariant*
///
void q_accounts__accountservice_set_value2(void* self, const char* key, void* value);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AccountService.html)
///
/// @param self Accounts__AccountService*
/// @param key const char*
/// @param defaultValue QVariant*
///
QVariant* q_accounts__accountservice_value(void* self, const char* key, void* defaultValue);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AccountService.html)
///
/// @param self Accounts__AccountService*
/// @param key const char*
///
QVariant* q_accounts__accountservice_value2(void* self, const char* key);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AccountService.html)
///
/// @param self Accounts__AccountService*
/// @param key const char*
///
QVariant* q_accounts__accountservice_value3(void* self, const char* key);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AccountService.html)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Accounts__AccountService*
///
const char** q_accounts__accountservice_changed_fields(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AccountService.html)
///
/// @param self Accounts__AccountService*
///
Accounts__AuthData* q_accounts__accountservice_auth_data(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AccountService.html)
///
/// @param self Accounts__AccountService*
/// @param isEnabled bool
///
void q_accounts__accountservice_enabled2(void* self, bool isEnabled);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AccountService.html)
///
/// @param self Accounts__AccountService*
///
void q_accounts__accountservice_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* q_accounts__accountservice_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_accounts__accountservice_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AccountService.html)
///
/// @param self Accounts__AccountService*
/// @param key const char*
/// @param defaultValue QVariant*
/// @param source enum Accounts__SettingSource*
///
QVariant* q_accounts__accountservice_value32(void* self, const char* key, void* defaultValue, int32_t* source);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AccountService.html)
///
/// @param self Accounts__AccountService*
/// @param key const char*
/// @param source enum Accounts__SettingSource*
///
QVariant* q_accounts__accountservice_value22(void* self, const char* key, int32_t* source);

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AccountService.html)
///
/// @param self Accounts__AccountService*
/// @param key const char*
/// @param source enum Accounts__SettingSource*
///
QVariant* q_accounts__accountservice_value23(void* self, const char* key, int32_t* source);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Accounts__AccountService*
///
const char* q_accounts__accountservice_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Accounts__AccountService*
/// @param name char*
///
void q_accounts__accountservice_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Accounts__AccountService*
///
bool q_accounts__accountservice_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Accounts__AccountService*
///
bool q_accounts__accountservice_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Accounts__AccountService*
///
bool q_accounts__accountservice_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Accounts__AccountService*
///
bool q_accounts__accountservice_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Accounts__AccountService*
/// @param b bool
///
bool q_accounts__accountservice_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Accounts__AccountService*
///
QThread* q_accounts__accountservice_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Accounts__AccountService*
/// @param thread QThread*
///
bool q_accounts__accountservice_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Accounts__AccountService*
/// @param interval int
///
int32_t q_accounts__accountservice_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Accounts__AccountService*
/// @param id int
///
void q_accounts__accountservice_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Accounts__AccountService*
/// @param id enum Qt__TimerId
///
void q_accounts__accountservice_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Accounts__AccountService*
///
libqt_list /* of QObject* */ q_accounts__accountservice_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Accounts__AccountService*
/// @param parent QObject*
///
void q_accounts__accountservice_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Accounts__AccountService*
/// @param filterObj QObject*
///
void q_accounts__accountservice_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Accounts__AccountService*
/// @param obj QObject*
///
void q_accounts__accountservice_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_accounts__accountservice_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Accounts__AccountService*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_accounts__accountservice_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_accounts__accountservice_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_accounts__accountservice_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Accounts__AccountService*
///
void q_accounts__accountservice_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Accounts__AccountService*
///
void q_accounts__accountservice_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Accounts__AccountService*
/// @param name const char*
/// @param value QVariant*
///
bool q_accounts__accountservice_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Accounts__AccountService*
/// @param name const char*
///
QVariant* q_accounts__accountservice_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self Accounts__AccountService*
///
const char** q_accounts__accountservice_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Accounts__AccountService*
///
QBindingStorage* q_accounts__accountservice_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Accounts__AccountService*
///
const QBindingStorage* q_accounts__accountservice_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Accounts__AccountService*
///
void q_accounts__accountservice_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Accounts__AccountService*
/// @param callback void func(Accounts__AccountService* self)
///
void q_accounts__accountservice_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self Accounts__AccountService*
///
QObject* q_accounts__accountservice_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Accounts__AccountService*
/// @param classname const char*
///
bool q_accounts__accountservice_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Accounts__AccountService*
///
void q_accounts__accountservice_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Accounts__AccountService*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_accounts__accountservice_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Accounts__AccountService*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_accounts__accountservice_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_accounts__accountservice_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Accounts__AccountService*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_accounts__accountservice_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Accounts__AccountService*
/// @param param1 QObject*
///
void q_accounts__accountservice_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Accounts__AccountService*
/// @param callback void func(Accounts__AccountService* self, QObject* param1)
///
void q_accounts__accountservice_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__AccountService*
/// @param event QEvent*
///
bool q_accounts__accountservice_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__AccountService*
/// @param event QEvent*
///
bool q_accounts__accountservice_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__AccountService*
/// @param callback bool func(Accounts__AccountService* self, QEvent* event)
///
void q_accounts__accountservice_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__AccountService*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_accounts__accountservice_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__AccountService*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_accounts__accountservice_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__AccountService*
/// @param callback bool func(Accounts__AccountService* self, QObject* watched, QEvent* event)
///
void q_accounts__accountservice_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__AccountService*
/// @param event QTimerEvent*
///
void q_accounts__accountservice_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__AccountService*
/// @param event QTimerEvent*
///
void q_accounts__accountservice_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__AccountService*
/// @param callback void func(Accounts__AccountService* self, QTimerEvent* event)
///
void q_accounts__accountservice_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__AccountService*
/// @param event QChildEvent*
///
void q_accounts__accountservice_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__AccountService*
/// @param event QChildEvent*
///
void q_accounts__accountservice_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__AccountService*
/// @param callback void func(Accounts__AccountService* self, QChildEvent* event)
///
void q_accounts__accountservice_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__AccountService*
/// @param event QEvent*
///
void q_accounts__accountservice_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__AccountService*
/// @param event QEvent*
///
void q_accounts__accountservice_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__AccountService*
/// @param callback void func(Accounts__AccountService* self, QEvent* event)
///
void q_accounts__accountservice_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__AccountService*
/// @param signal QMetaMethod*
///
void q_accounts__accountservice_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__AccountService*
/// @param signal QMetaMethod*
///
void q_accounts__accountservice_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__AccountService*
/// @param callback void func(Accounts__AccountService* self, QMetaMethod* signal)
///
void q_accounts__accountservice_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__AccountService*
/// @param signal QMetaMethod*
///
void q_accounts__accountservice_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__AccountService*
/// @param signal QMetaMethod*
///
void q_accounts__accountservice_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__AccountService*
/// @param callback void func(Accounts__AccountService* self, QMetaMethod* signal)
///
void q_accounts__accountservice_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__AccountService*
///
QObject* q_accounts__accountservice_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__AccountService*
///
QObject* q_accounts__accountservice_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__AccountService*
/// @param callback QObject* func()
///
void q_accounts__accountservice_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__AccountService*
///
int32_t q_accounts__accountservice_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__AccountService*
///
int32_t q_accounts__accountservice_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__AccountService*
/// @param callback int32_t func()
///
void q_accounts__accountservice_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__AccountService*
/// @param signal const char*
///
int32_t q_accounts__accountservice_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__AccountService*
/// @param signal const char*
///
int32_t q_accounts__accountservice_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__AccountService*
/// @param callback int32_t func(Accounts__AccountService* self, const char* signal)
///
void q_accounts__accountservice_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__AccountService*
/// @param signal QMetaMethod*
///
bool q_accounts__accountservice_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__AccountService*
/// @param signal QMetaMethod*
///
bool q_accounts__accountservice_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__AccountService*
/// @param callback bool func(Accounts__AccountService* self, QMetaMethod* signal)
///
void q_accounts__accountservice_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Accounts__AccountService*
/// @param callback void func(Accounts__AccountService* self, const char* objectName)
///
void q_accounts__accountservice_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1AccountService.html)
///
/// Delete this object from C++ memory.
///
/// @param self Accounts__AccountService*
///
void q_accounts__accountservice_delete(void* self);

#endif
