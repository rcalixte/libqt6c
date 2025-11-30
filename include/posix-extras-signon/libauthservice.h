#pragma once
#ifndef SRC_POSIX_EXTRAS_SIGNON_QT6C_LIBAUTHSERVICE_H
#define SRC_POSIX_EXTRAS_SIGNON_QT6C_LIBAUTHSERVICE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html

/// q_signon__authservice_new constructs a new SignOn::AuthService object.
///
SignOn__AuthService* q_signon__authservice_new();

/// q_signon__authservice_new2 constructs a new SignOn::AuthService object.
///
/// @param parent QObject*
SignOn__AuthService* q_signon__authservice_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self SignOn__AuthService*
const QMetaObject* q_signon__authservice_meta_object(void* self);

/// @param self SignOn__AuthService*
/// @param param1 const char*
void* q_signon__authservice_metacast(void* self, const char* param1);

/// @param self SignOn__AuthService*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_signon__authservice_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self SignOn__AuthService*
/// @param callback int32_t func(SignOn__AuthService* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_signon__authservice_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self SignOn__AuthService*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_signon__authservice_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_signon__authservice_tr(const char* s);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html)
///
/// @param self SignOn__AuthService*
void q_signon__authservice_query_methods(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html)
///
/// @param self SignOn__AuthService*
/// @param method const char*
void q_signon__authservice_query_mechanisms(void* self, const char* method);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html)
///
/// @param self SignOn__AuthService*
void q_signon__authservice_query_identities(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html)
///
/// @param self SignOn__AuthService*
void q_signon__authservice_clear(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html)
///
/// @param self SignOn__AuthService*
/// @param err SignOn__Error*
void q_signon__authservice_error(void* self, void* err);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html)
///
/// @param self SignOn__AuthService*
/// @param callback void func(SignOn__AuthService* self, SignOn__Error* err)
void q_signon__authservice_on_error(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html)
///
/// @param self SignOn__AuthService*
/// @param methods const char**
void q_signon__authservice_methods_available(void* self, const char* methods[static 1]);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html)
///
/// @param self SignOn__AuthService*
/// @param callback void func(SignOn__AuthService* self, const char** methods)
void q_signon__authservice_on_methods_available(void* self, void (*callback)(void*, const char**));

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html)
///
/// @param self SignOn__AuthService*
/// @param method const char*
/// @param mechanisms const char**
void q_signon__authservice_mechanisms_available(void* self, const char* method, const char* mechanisms[static 1]);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html)
///
/// @param self SignOn__AuthService*
/// @param callback void func(SignOn__AuthService* self, const char* method, const char** mechanisms)
void q_signon__authservice_on_mechanisms_available(void* self, void (*callback)(void*, const char*, const char**));

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html)
///
/// @param self SignOn__AuthService*
/// @param identityList libqt_list /* of SignOn__IdentityInfo* */
void q_signon__authservice_identities(void* self, libqt_list identityList);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html)
///
/// @param self SignOn__AuthService*
/// @param callback void func(SignOn__AuthService* self, SignOn__IdentityInfo** identityList)
void q_signon__authservice_on_identities(void* self, void (*callback)(void*, SignOn__IdentityInfo**));

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html)
///
/// @param self SignOn__AuthService*
void q_signon__authservice_cleared(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html)
///
/// @param self SignOn__AuthService*
/// @param callback void func(SignOn__AuthService* self)
void q_signon__authservice_on_cleared(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_signon__authservice_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_signon__authservice_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self SignOn__AuthService*
const char* q_signon__authservice_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self SignOn__AuthService*
/// @param name char*
void q_signon__authservice_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self SignOn__AuthService*
bool q_signon__authservice_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self SignOn__AuthService*
bool q_signon__authservice_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self SignOn__AuthService*
bool q_signon__authservice_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self SignOn__AuthService*
bool q_signon__authservice_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self SignOn__AuthService*
/// @param b bool
bool q_signon__authservice_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self SignOn__AuthService*
QThread* q_signon__authservice_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self SignOn__AuthService*
/// @param thread QThread*
bool q_signon__authservice_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self SignOn__AuthService*
/// @param interval int
int32_t q_signon__authservice_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self SignOn__AuthService*
/// @param id int
void q_signon__authservice_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self SignOn__AuthService*
/// @param id enum Qt__TimerId
void q_signon__authservice_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self SignOn__AuthService*
libqt_list /* of QObject* */ q_signon__authservice_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self SignOn__AuthService*
/// @param parent QObject*
void q_signon__authservice_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self SignOn__AuthService*
/// @param filterObj QObject*
void q_signon__authservice_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self SignOn__AuthService*
/// @param obj QObject*
void q_signon__authservice_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_signon__authservice_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self SignOn__AuthService*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_signon__authservice_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_signon__authservice_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_signon__authservice_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self SignOn__AuthService*
void q_signon__authservice_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self SignOn__AuthService*
void q_signon__authservice_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self SignOn__AuthService*
/// @param name const char*
/// @param value QVariant*
bool q_signon__authservice_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self SignOn__AuthService*
/// @param name const char*
QVariant* q_signon__authservice_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self SignOn__AuthService*
const char** q_signon__authservice_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self SignOn__AuthService*
QBindingStorage* q_signon__authservice_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self SignOn__AuthService*
const QBindingStorage* q_signon__authservice_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self SignOn__AuthService*
void q_signon__authservice_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self SignOn__AuthService*
/// @param callback void func(SignOn__AuthService* self)
void q_signon__authservice_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self SignOn__AuthService*
QObject* q_signon__authservice_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self SignOn__AuthService*
/// @param classname const char*
bool q_signon__authservice_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self SignOn__AuthService*
void q_signon__authservice_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self SignOn__AuthService*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_signon__authservice_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self SignOn__AuthService*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_signon__authservice_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_signon__authservice_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self SignOn__AuthService*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_signon__authservice_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self SignOn__AuthService*
/// @param param1 QObject*
void q_signon__authservice_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self SignOn__AuthService*
/// @param callback void func(SignOn__AuthService* self, QObject* param1)
void q_signon__authservice_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self SignOn__AuthService*
/// @param event QEvent*
bool q_signon__authservice_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self SignOn__AuthService*
/// @param event QEvent*
bool q_signon__authservice_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self SignOn__AuthService*
/// @param callback bool func(SignOn__AuthService* self, QEvent* event)
void q_signon__authservice_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self SignOn__AuthService*
/// @param watched QObject*
/// @param event QEvent*
bool q_signon__authservice_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self SignOn__AuthService*
/// @param watched QObject*
/// @param event QEvent*
bool q_signon__authservice_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self SignOn__AuthService*
/// @param callback bool func(SignOn__AuthService* self, QObject* watched, QEvent* event)
void q_signon__authservice_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self SignOn__AuthService*
/// @param event QTimerEvent*
void q_signon__authservice_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self SignOn__AuthService*
/// @param event QTimerEvent*
void q_signon__authservice_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self SignOn__AuthService*
/// @param callback void func(SignOn__AuthService* self, QTimerEvent* event)
void q_signon__authservice_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self SignOn__AuthService*
/// @param event QChildEvent*
void q_signon__authservice_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self SignOn__AuthService*
/// @param event QChildEvent*
void q_signon__authservice_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self SignOn__AuthService*
/// @param callback void func(SignOn__AuthService* self, QChildEvent* event)
void q_signon__authservice_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self SignOn__AuthService*
/// @param event QEvent*
void q_signon__authservice_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self SignOn__AuthService*
/// @param event QEvent*
void q_signon__authservice_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self SignOn__AuthService*
/// @param callback void func(SignOn__AuthService* self, QEvent* event)
void q_signon__authservice_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self SignOn__AuthService*
/// @param signal QMetaMethod*
void q_signon__authservice_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self SignOn__AuthService*
/// @param signal QMetaMethod*
void q_signon__authservice_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self SignOn__AuthService*
/// @param callback void func(SignOn__AuthService* self, QMetaMethod* signal)
void q_signon__authservice_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self SignOn__AuthService*
/// @param signal QMetaMethod*
void q_signon__authservice_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self SignOn__AuthService*
/// @param signal QMetaMethod*
void q_signon__authservice_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self SignOn__AuthService*
/// @param callback void func(SignOn__AuthService* self, QMetaMethod* signal)
void q_signon__authservice_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self SignOn__AuthService*
QObject* q_signon__authservice_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self SignOn__AuthService*
QObject* q_signon__authservice_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self SignOn__AuthService*
/// @param callback QObject* func()
void q_signon__authservice_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self SignOn__AuthService*
int32_t q_signon__authservice_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self SignOn__AuthService*
int32_t q_signon__authservice_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self SignOn__AuthService*
/// @param callback int32_t func()
void q_signon__authservice_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self SignOn__AuthService*
/// @param signal const char*
int32_t q_signon__authservice_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self SignOn__AuthService*
/// @param signal const char*
int32_t q_signon__authservice_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self SignOn__AuthService*
/// @param callback int32_t func(SignOn__AuthService* self, const char* signal)
void q_signon__authservice_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self SignOn__AuthService*
/// @param signal QMetaMethod*
bool q_signon__authservice_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self SignOn__AuthService*
/// @param signal QMetaMethod*
bool q_signon__authservice_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self SignOn__AuthService*
/// @param callback bool func(SignOn__AuthService* self, QMetaMethod* signal)
void q_signon__authservice_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self SignOn__AuthService*
/// @param callback void func(SignOn__AuthService* self, const char* objectName)
void q_signon__authservice_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService.html)
///
/// Delete this object from C++ memory.
///
/// @param self SignOn__AuthService*
void q_signon__authservice_delete(void* self);

/// https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService__IdentityRegExp.html

/// q_signon__authservice__identityregexp_new constructs a new SignOn::AuthService::IdentityRegExp object.
///
/// @param pattern const char*
SignOn__AuthService__IdentityRegExp* q_signon__authservice__identityregexp_new(const char* pattern);

/// q_signon__authservice__identityregexp_new2 constructs a new SignOn::AuthService::IdentityRegExp object.
///
/// @param src SignOn__AuthService__IdentityRegExp*
SignOn__AuthService__IdentityRegExp* q_signon__authservice__identityregexp_new2(void* src);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService__IdentityRegExp.html)
///
/// @param self SignOn__AuthService__IdentityRegExp*
bool q_signon__authservice__identityregexp_is_valid(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService__IdentityRegExp.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self SignOn__AuthService__IdentityRegExp*
const char* q_signon__authservice__identityregexp_pattern(void* self);

/// [Upstream resources](https://accounts-sso.gitlab.io/signond/classSignOn_1_1AuthService__IdentityRegExp.html)
///
/// Delete this object from C++ memory.
///
/// @param self SignOn__AuthService__IdentityRegExp*
void q_signon__authservice__identityregexp_delete(void* self);

/// https://accounts-sso.gitlab.io/signond/classSignOn_1_1Authservice.html

typedef enum {
    SIGNON_AUTHSERVICE_SERVICEERROR_UNKNOWNERROR = 1,
    SIGNON_AUTHSERVICE_SERVICEERROR_INTERNALSERVERERROR = 2,
    SIGNON_AUTHSERVICE_SERVICEERROR_INTERNALCOMMUNICATIONERROR = 3,
    SIGNON_AUTHSERVICE_SERVICEERROR_PERMISSIONDENIEDERROR = 4,
    SIGNON_AUTHSERVICE_SERVICEERROR_AUTHSERVICEERR = 100,
    SIGNON_AUTHSERVICE_SERVICEERROR_METHODNOTKNOWNERROR = 101,
    SIGNON_AUTHSERVICE_SERVICEERROR_NOTAVAILABLEERROR = 102,
    SIGNON_AUTHSERVICE_SERVICEERROR_INVALIDQUERYERROR = 103
} SignOn__AuthService__ServiceError;

typedef enum {
    SIGNON_AUTHSERVICE__AUTHMETHOD = 0,
    SIGNON_AUTHSERVICE__USERNAME = 1,
    SIGNON_AUTHSERVICE__REALM = 2,
    SIGNON_AUTHSERVICE__CAPTION = 3
} SignOn__AuthService__;

#endif
