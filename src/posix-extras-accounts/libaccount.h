#pragma once
#ifndef SRC_POSIX_EXTRAS_ACCOUNTSQT6C_LIBACCOUNT_H
#define SRC_POSIX_EXTRAS_ACCOUNTSQT6C_LIBACCOUNT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Watch.html

/// q_accounts__watch_new constructs a new Accounts::Watch object.
///
Accounts__Watch* q_accounts__watch_new();

/// q_accounts__watch_new2 constructs a new Accounts::Watch object.
///
/// @param parent QObject*
Accounts__Watch* q_accounts__watch_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self Accounts__Watch*
const QMetaObject* q_accounts__watch_meta_object(void* self);

/// @param self Accounts__Watch*
/// @param param1 const char*
void* q_accounts__watch_metacast(void* self, const char* param1);

/// @param self Accounts__Watch*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_accounts__watch_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self Accounts__Watch*
/// @param callback int32_t func(Accounts__Watch* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_accounts__watch_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self Accounts__Watch*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_accounts__watch_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_accounts__watch_tr(const char* s);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Watch.html)
///
/// @param self Accounts__Watch*
/// @param key const char*
void q_accounts__watch_notify(void* self, const char* key);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Watch.html)
///
/// @param self Accounts__Watch*
/// @param callback void func(Accounts__Watch* self, const char* key)
void q_accounts__watch_on_notify(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_accounts__watch_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_accounts__watch_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Watch*
const char* q_accounts__watch_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Accounts__Watch*
/// @param name char*
void q_accounts__watch_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Accounts__Watch*
bool q_accounts__watch_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Accounts__Watch*
bool q_accounts__watch_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Accounts__Watch*
bool q_accounts__watch_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Accounts__Watch*
bool q_accounts__watch_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Accounts__Watch*
/// @param b bool
bool q_accounts__watch_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Accounts__Watch*
QThread* q_accounts__watch_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Accounts__Watch*
/// @param thread QThread*
bool q_accounts__watch_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Accounts__Watch*
/// @param interval int
int32_t q_accounts__watch_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Accounts__Watch*
/// @param id int
void q_accounts__watch_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Accounts__Watch*
/// @param id enum Qt__TimerId
void q_accounts__watch_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Accounts__Watch*
libqt_list /* of QObject* */ q_accounts__watch_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Accounts__Watch*
/// @param parent QObject*
void q_accounts__watch_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Accounts__Watch*
/// @param filterObj QObject*
void q_accounts__watch_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Accounts__Watch*
/// @param obj QObject*
void q_accounts__watch_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_accounts__watch_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Accounts__Watch*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_accounts__watch_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_accounts__watch_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_accounts__watch_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Accounts__Watch*
void q_accounts__watch_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Accounts__Watch*
void q_accounts__watch_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Accounts__Watch*
/// @param name const char*
/// @param value QVariant*
bool q_accounts__watch_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Accounts__Watch*
/// @param name const char*
QVariant* q_accounts__watch_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Watch*
const char** q_accounts__watch_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Accounts__Watch*
QBindingStorage* q_accounts__watch_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Accounts__Watch*
const QBindingStorage* q_accounts__watch_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Accounts__Watch*
void q_accounts__watch_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Accounts__Watch*
/// @param callback void func(Accounts__Watch* self)
void q_accounts__watch_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self Accounts__Watch*
QObject* q_accounts__watch_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Accounts__Watch*
/// @param classname const char*
bool q_accounts__watch_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Accounts__Watch*
void q_accounts__watch_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Accounts__Watch*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_accounts__watch_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Accounts__Watch*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_accounts__watch_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_accounts__watch_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Accounts__Watch*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_accounts__watch_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Accounts__Watch*
/// @param param1 QObject*
void q_accounts__watch_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Accounts__Watch*
/// @param callback void func(Accounts__Watch* self, QObject* param1)
void q_accounts__watch_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__Watch*
/// @param event QEvent*
bool q_accounts__watch_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__Watch*
/// @param event QEvent*
bool q_accounts__watch_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__Watch*
/// @param callback bool func(Accounts__Watch* self, QEvent* event)
void q_accounts__watch_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__Watch*
/// @param watched QObject*
/// @param event QEvent*
bool q_accounts__watch_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__Watch*
/// @param watched QObject*
/// @param event QEvent*
bool q_accounts__watch_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__Watch*
/// @param callback bool func(Accounts__Watch* self, QObject* watched, QEvent* event)
void q_accounts__watch_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__Watch*
/// @param event QTimerEvent*
void q_accounts__watch_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__Watch*
/// @param event QTimerEvent*
void q_accounts__watch_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__Watch*
/// @param callback void func(Accounts__Watch* self, QTimerEvent* event)
void q_accounts__watch_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__Watch*
/// @param event QChildEvent*
void q_accounts__watch_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__Watch*
/// @param event QChildEvent*
void q_accounts__watch_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__Watch*
/// @param callback void func(Accounts__Watch* self, QChildEvent* event)
void q_accounts__watch_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__Watch*
/// @param event QEvent*
void q_accounts__watch_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__Watch*
/// @param event QEvent*
void q_accounts__watch_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__Watch*
/// @param callback void func(Accounts__Watch* self, QEvent* event)
void q_accounts__watch_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__Watch*
/// @param signal QMetaMethod*
void q_accounts__watch_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__Watch*
/// @param signal QMetaMethod*
void q_accounts__watch_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__Watch*
/// @param callback void func(Accounts__Watch* self, QMetaMethod* signal)
void q_accounts__watch_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__Watch*
/// @param signal QMetaMethod*
void q_accounts__watch_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__Watch*
/// @param signal QMetaMethod*
void q_accounts__watch_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__Watch*
/// @param callback void func(Accounts__Watch* self, QMetaMethod* signal)
void q_accounts__watch_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__Watch*
QObject* q_accounts__watch_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__Watch*
QObject* q_accounts__watch_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__Watch*
/// @param callback QObject* func()
void q_accounts__watch_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__Watch*
int32_t q_accounts__watch_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__Watch*
int32_t q_accounts__watch_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__Watch*
/// @param callback int32_t func()
void q_accounts__watch_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__Watch*
/// @param signal const char*
int32_t q_accounts__watch_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__Watch*
/// @param signal const char*
int32_t q_accounts__watch_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__Watch*
/// @param callback int32_t func(Accounts__Watch* self, const char* signal)
void q_accounts__watch_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__Watch*
/// @param signal QMetaMethod*
bool q_accounts__watch_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__Watch*
/// @param signal QMetaMethod*
bool q_accounts__watch_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__Watch*
/// @param callback bool func(Accounts__Watch* self, QMetaMethod* signal)
void q_accounts__watch_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Accounts__Watch*
/// @param callback void func(Accounts__Watch* self, const char* objectName)
void q_accounts__watch_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Watch.html)
///
/// Delete this object from C++ memory.
///
/// @param self Accounts__Watch*
void q_accounts__watch_delete(void* self);

/// https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html

/// q_accounts__account_new constructs a new Accounts::Account object.
///
/// @param manager Accounts__Manager*
/// @param provider const char*
Accounts__Account* q_accounts__account_new(void* manager, const char* provider);

/// q_accounts__account_new2 constructs a new Accounts::Account object.
///
/// @param manager Accounts__Manager*
/// @param provider const char*
/// @param parent QObject*
Accounts__Account* q_accounts__account_new2(void* manager, const char* provider, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self Accounts__Account*
const QMetaObject* q_accounts__account_meta_object(void* self);

/// @param self Accounts__Account*
/// @param param1 const char*
void* q_accounts__account_metacast(void* self, const char* param1);

/// @param self Accounts__Account*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_accounts__account_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self Accounts__Account*
/// @param callback int32_t func(Accounts__Account* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_accounts__account_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self Accounts__Account*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_accounts__account_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_accounts__account_tr(const char* s);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param manager Accounts__Manager*
/// @param id uint32_t
Accounts__Account* q_accounts__account_from_id(void* manager, uint32_t id);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
uint32_t q_accounts__account_id(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
Accounts__Manager* q_accounts__account_manager(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param serviceType const char*
bool q_accounts__account_supports_service(void* self, const char* serviceType);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
libqt_list /* of Accounts__Service* */ q_accounts__account_services(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
libqt_list /* of Accounts__Service* */ q_accounts__account_enabled_services(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
bool q_accounts__account_enabled(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
bool q_accounts__account_is_enabled(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param enabled bool
void q_accounts__account_set_enabled(void* self, bool enabled);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
uint32_t q_accounts__account_credentials_id(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param id uint32_t
void q_accounts__account_set_credentials_id(void* self, uint32_t id);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Account*
const char* q_accounts__account_display_name(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param displayName const char*
void q_accounts__account_set_display_name(void* self, const char* displayName);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Account*
const char* q_accounts__account_provider_name(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
Accounts__Provider* q_accounts__account_provider(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
void q_accounts__account_select_service(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
Accounts__Service* q_accounts__account_selected_service(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Account*
const char** q_accounts__account_all_keys(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param prefix const char*
void q_accounts__account_begin_group(void* self, const char* prefix);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Account*
const char** q_accounts__account_child_groups(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Account*
const char** q_accounts__account_child_keys(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
void q_accounts__account_clear(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param key const char*
bool q_accounts__account_contains(void* self, const char* key);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
void q_accounts__account_end_group(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Account*
const char* q_accounts__account_group(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
bool q_accounts__account_is_writable(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param key const char*
void q_accounts__account_remove(void* self, const char* key);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param key const char*
/// @param value QVariant*
void q_accounts__account_set_value(void* self, const char* key, void* value);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param key const char*
QVariant* q_accounts__account_value(void* self, const char* key);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param key const char*
/// @param value QVariant*
///
/// @return enum Accounts__SettingSource
int32_t q_accounts__account_value2(void* self, const char* key, void* value);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Account*
/// @param key const char*
const char* q_accounts__account_value_as_string(void* self, const char* key);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param key const char*
int32_t q_accounts__account_value_as_int(void* self, const char* key);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param key const char*
uint64_t q_accounts__account_value_as_u_int64(void* self, const char* key);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param key const char*
bool q_accounts__account_value_as_bool(void* self, const char* key);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
Accounts__Watch* q_accounts__account_watch_key(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
void q_accounts__account_sync(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
bool q_accounts__account_sync_and_block(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
void q_accounts__account_remove2(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param key const char*
/// @param token const char*
void q_accounts__account_sign(void* self, const char* key, const char* token);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param key const char*
/// @param token const char**
bool q_accounts__account_verify(void* self, const char* key, const char** token);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param key const char*
/// @param tokens libqt_list /* of const char* */
bool q_accounts__account_verify_with_tokens(void* self, const char* key, libqt_list /* of const char* */ tokens);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param displayName const char*
void q_accounts__account_display_name_changed(void* self, const char* displayName);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param callback void func(Accounts__Account* self, const char* displayName)
void q_accounts__account_on_display_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param serviceName const char*
/// @param enabled bool
void q_accounts__account_enabled_changed(void* self, const char* serviceName, bool enabled);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param callback void func(Accounts__Account* self, const char* serviceName, bool enabled)
void q_accounts__account_on_enabled_changed(void* self, void (*callback)(void*, const char*, bool));

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param error Accounts__Error*
void q_accounts__account_error(void* self, void* error);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param callback void func(Accounts__Account* self, Accounts__Error* error)
void q_accounts__account_on_error(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
void q_accounts__account_synced(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param callback void func(Accounts__Account* self)
void q_accounts__account_on_synced(void* self, void (*callback)(void*));

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
void q_accounts__account_removed(void* self);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param callback void func(Accounts__Account* self)
void q_accounts__account_on_removed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_accounts__account_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_accounts__account_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param manager Accounts__Manager*
/// @param id uint32_t
/// @param parent QObject*
Accounts__Account* q_accounts__account_from_id3(void* manager, uint32_t id, void* parent);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param serviceType const char*
libqt_list /* of Accounts__Service* */ q_accounts__account_services1(void* self, const char* serviceType);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param service Accounts__Service*
void q_accounts__account_select_service1(void* self, void* service);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param key const char*
/// @param defaultValue QVariant*
QVariant* q_accounts__account_value22(void* self, const char* key, void* defaultValue);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param key const char*
/// @param defaultValue QVariant*
/// @param source enum Accounts__SettingSource*
QVariant* q_accounts__account_value3(void* self, const char* key, void* defaultValue, int32_t* source);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Account*
/// @param key const char*
/// @param default_value const char*
const char* q_accounts__account_value_as_string2(void* self, const char* key, const char* default_value);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Account*
/// @param key const char*
/// @param default_value const char*
/// @param source enum Accounts__SettingSource*
const char* q_accounts__account_value_as_string3(void* self, const char* key, const char* default_value, int32_t* source);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param key const char*
/// @param default_value int
int32_t q_accounts__account_value_as_int2(void* self, const char* key, int default_value);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param key const char*
/// @param default_value int
/// @param source enum Accounts__SettingSource*
int32_t q_accounts__account_value_as_int3(void* self, const char* key, int default_value, int32_t* source);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param key const char*
/// @param default_value uint64_t
uint64_t q_accounts__account_value_as_u_int642(void* self, const char* key, uint64_t default_value);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param key const char*
/// @param default_value uint64_t
/// @param source enum Accounts__SettingSource*
uint64_t q_accounts__account_value_as_u_int643(void* self, const char* key, uint64_t default_value, int32_t* source);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param key const char*
/// @param default_value bool
bool q_accounts__account_value_as_bool2(void* self, const char* key, bool default_value);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param key const char*
/// @param default_value bool
/// @param source enum Accounts__SettingSource*
bool q_accounts__account_value_as_bool3(void* self, const char* key, bool default_value, int32_t* source);

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// @param self Accounts__Account*
/// @param key const char*
Accounts__Watch* q_accounts__account_watch_key1(void* self, const char* key);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Account*
const char* q_accounts__account_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Accounts__Account*
/// @param name char*
void q_accounts__account_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Accounts__Account*
bool q_accounts__account_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Accounts__Account*
bool q_accounts__account_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Accounts__Account*
bool q_accounts__account_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Accounts__Account*
bool q_accounts__account_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Accounts__Account*
/// @param b bool
bool q_accounts__account_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Accounts__Account*
QThread* q_accounts__account_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Accounts__Account*
/// @param thread QThread*
bool q_accounts__account_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Accounts__Account*
/// @param interval int
int32_t q_accounts__account_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Accounts__Account*
/// @param id int
void q_accounts__account_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Accounts__Account*
/// @param id enum Qt__TimerId
void q_accounts__account_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Accounts__Account*
libqt_list /* of QObject* */ q_accounts__account_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Accounts__Account*
/// @param parent QObject*
void q_accounts__account_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Accounts__Account*
/// @param filterObj QObject*
void q_accounts__account_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Accounts__Account*
/// @param obj QObject*
void q_accounts__account_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_accounts__account_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Accounts__Account*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_accounts__account_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_accounts__account_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_accounts__account_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Accounts__Account*
void q_accounts__account_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Accounts__Account*
void q_accounts__account_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Accounts__Account*
/// @param name const char*
/// @param value QVariant*
bool q_accounts__account_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Accounts__Account*
/// @param name const char*
QVariant* q_accounts__account_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Accounts__Account*
const char** q_accounts__account_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Accounts__Account*
QBindingStorage* q_accounts__account_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Accounts__Account*
const QBindingStorage* q_accounts__account_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Accounts__Account*
void q_accounts__account_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Accounts__Account*
/// @param callback void func(Accounts__Account* self)
void q_accounts__account_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self Accounts__Account*
QObject* q_accounts__account_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Accounts__Account*
/// @param classname const char*
bool q_accounts__account_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Accounts__Account*
void q_accounts__account_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Accounts__Account*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_accounts__account_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Accounts__Account*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_accounts__account_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_accounts__account_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Accounts__Account*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_accounts__account_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Accounts__Account*
/// @param param1 QObject*
void q_accounts__account_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Accounts__Account*
/// @param callback void func(Accounts__Account* self, QObject* param1)
void q_accounts__account_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__Account*
/// @param event QEvent*
bool q_accounts__account_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__Account*
/// @param event QEvent*
bool q_accounts__account_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__Account*
/// @param callback bool func(Accounts__Account* self, QEvent* event)
void q_accounts__account_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__Account*
/// @param watched QObject*
/// @param event QEvent*
bool q_accounts__account_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__Account*
/// @param watched QObject*
/// @param event QEvent*
bool q_accounts__account_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__Account*
/// @param callback bool func(Accounts__Account* self, QObject* watched, QEvent* event)
void q_accounts__account_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__Account*
/// @param event QTimerEvent*
void q_accounts__account_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__Account*
/// @param event QTimerEvent*
void q_accounts__account_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__Account*
/// @param callback void func(Accounts__Account* self, QTimerEvent* event)
void q_accounts__account_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__Account*
/// @param event QChildEvent*
void q_accounts__account_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__Account*
/// @param event QChildEvent*
void q_accounts__account_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__Account*
/// @param callback void func(Accounts__Account* self, QChildEvent* event)
void q_accounts__account_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__Account*
/// @param event QEvent*
void q_accounts__account_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__Account*
/// @param event QEvent*
void q_accounts__account_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__Account*
/// @param callback void func(Accounts__Account* self, QEvent* event)
void q_accounts__account_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__Account*
/// @param signal QMetaMethod*
void q_accounts__account_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__Account*
/// @param signal QMetaMethod*
void q_accounts__account_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__Account*
/// @param callback void func(Accounts__Account* self, QMetaMethod* signal)
void q_accounts__account_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__Account*
/// @param signal QMetaMethod*
void q_accounts__account_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__Account*
/// @param signal QMetaMethod*
void q_accounts__account_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__Account*
/// @param callback void func(Accounts__Account* self, QMetaMethod* signal)
void q_accounts__account_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__Account*
QObject* q_accounts__account_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__Account*
QObject* q_accounts__account_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__Account*
/// @param callback QObject* func()
void q_accounts__account_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__Account*
int32_t q_accounts__account_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__Account*
int32_t q_accounts__account_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__Account*
/// @param callback int32_t func()
void q_accounts__account_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__Account*
/// @param signal const char*
int32_t q_accounts__account_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__Account*
/// @param signal const char*
int32_t q_accounts__account_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__Account*
/// @param callback int32_t func(Accounts__Account* self, const char* signal)
void q_accounts__account_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Accounts__Account*
/// @param signal QMetaMethod*
bool q_accounts__account_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Accounts__Account*
/// @param signal QMetaMethod*
bool q_accounts__account_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Accounts__Account*
/// @param callback bool func(Accounts__Account* self, QMetaMethod* signal)
void q_accounts__account_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Accounts__Account*
/// @param callback void func(Accounts__Account* self, const char* objectName)
void q_accounts__account_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html)
///
/// Delete this object from C++ memory.
///
/// @param self Accounts__Account*
void q_accounts__account_delete(void* self);

/// https://accounts-sso.gitlab.io/libaccounts-qt/classAccounts_1_1Account.html

typedef enum {
    ACCOUNTS_SETTINGSOURCE_NONE = 0,
    ACCOUNTS_SETTINGSOURCE_ACCOUNT = 1,
    ACCOUNTS_SETTINGSOURCE_TEMPLATE = 2
} Accounts__SettingSource;

#endif
