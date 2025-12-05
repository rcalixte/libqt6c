#pragma once
#ifndef SRC_WEBENGINE_QT6C_LIBQWEBENGINECOOKIESTORE_H
#define SRC_WEBENGINE_QT6C_LIBQWEBENGINECOOKIESTORE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QWebEngineCookieStore*
///
const QMetaObject* q_webenginecookiestore_meta_object(void* self);

/// @param self QWebEngineCookieStore*
/// @param param1 const char*
///
void* q_webenginecookiestore_metacast(void* self, const char* param1);

/// @param self QWebEngineCookieStore*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_webenginecookiestore_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
///
const char* q_webenginecookiestore_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#setCookie)
///
/// @param self QWebEngineCookieStore*
/// @param cookie QNetworkCookie*
///
void q_webenginecookiestore_set_cookie(void* self, void* cookie);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#deleteCookie)
///
/// @param self QWebEngineCookieStore*
/// @param cookie QNetworkCookie*
///
void q_webenginecookiestore_delete_cookie(void* self, void* cookie);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#deleteSessionCookies)
///
/// @param self QWebEngineCookieStore*
///
void q_webenginecookiestore_delete_session_cookies(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#deleteAllCookies)
///
/// @param self QWebEngineCookieStore*
///
void q_webenginecookiestore_delete_all_cookies(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#loadAllCookies)
///
/// @param self QWebEngineCookieStore*
///
void q_webenginecookiestore_load_all_cookies(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#cookieAdded)
///
/// @param self QWebEngineCookieStore*
/// @param cookie QNetworkCookie*
///
void q_webenginecookiestore_cookie_added(void* self, void* cookie);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#cookieAdded)
///
/// @param self QWebEngineCookieStore*
/// @param callback void func(QWebEngineCookieStore* self, QNetworkCookie* cookie)
///
void q_webenginecookiestore_on_cookie_added(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#cookieRemoved)
///
/// @param self QWebEngineCookieStore*
/// @param cookie QNetworkCookie*
///
void q_webenginecookiestore_cookie_removed(void* self, void* cookie);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#cookieRemoved)
///
/// @param self QWebEngineCookieStore*
/// @param callback void func(QWebEngineCookieStore* self, QNetworkCookie* cookie)
///
void q_webenginecookiestore_on_cookie_removed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
///
const char* q_webenginecookiestore_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_webenginecookiestore_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#setCookie)
///
/// @param self QWebEngineCookieStore*
/// @param cookie QNetworkCookie*
/// @param origin QUrl*
///
void q_webenginecookiestore_set_cookie2(void* self, void* cookie, void* origin);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#deleteCookie)
///
/// @param self QWebEngineCookieStore*
/// @param cookie QNetworkCookie*
/// @param origin QUrl*
///
void q_webenginecookiestore_delete_cookie2(void* self, void* cookie, void* origin);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QWebEngineCookieStore*
/// @param event QEvent*
///
bool q_webenginecookiestore_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QWebEngineCookieStore*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_webenginecookiestore_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineCookieStore*
///
const char* q_webenginecookiestore_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QWebEngineCookieStore*
/// @param name char*
///
void q_webenginecookiestore_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QWebEngineCookieStore*
///
bool q_webenginecookiestore_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QWebEngineCookieStore*
///
bool q_webenginecookiestore_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QWebEngineCookieStore*
///
bool q_webenginecookiestore_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QWebEngineCookieStore*
///
bool q_webenginecookiestore_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QWebEngineCookieStore*
/// @param b bool
///
bool q_webenginecookiestore_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QWebEngineCookieStore*
///
QThread* q_webenginecookiestore_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebEngineCookieStore*
/// @param thread QThread*
///
bool q_webenginecookiestore_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineCookieStore*
/// @param interval int
///
int32_t q_webenginecookiestore_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEngineCookieStore*
/// @param id int
///
void q_webenginecookiestore_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QWebEngineCookieStore*
/// @param id enum Qt__TimerId
///
void q_webenginecookiestore_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QWebEngineCookieStore*
///
libqt_list /* of QObject* */ q_webenginecookiestore_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QWebEngineCookieStore*
/// @param parent QObject*
///
void q_webenginecookiestore_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QWebEngineCookieStore*
/// @param filterObj QObject*
///
void q_webenginecookiestore_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QWebEngineCookieStore*
/// @param obj QObject*
///
void q_webenginecookiestore_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_webenginecookiestore_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebEngineCookieStore*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_webenginecookiestore_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_webenginecookiestore_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_webenginecookiestore_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QWebEngineCookieStore*
///
void q_webenginecookiestore_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QWebEngineCookieStore*
///
void q_webenginecookiestore_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QWebEngineCookieStore*
/// @param name const char*
/// @param value QVariant*
///
bool q_webenginecookiestore_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QWebEngineCookieStore*
/// @param name const char*
///
QVariant* q_webenginecookiestore_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QWebEngineCookieStore*
///
const char** q_webenginecookiestore_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebEngineCookieStore*
///
QBindingStorage* q_webenginecookiestore_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QWebEngineCookieStore*
///
const QBindingStorage* q_webenginecookiestore_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineCookieStore*
///
void q_webenginecookiestore_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineCookieStore*
/// @param callback void func(QWebEngineCookieStore* self)
///
void q_webenginecookiestore_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QWebEngineCookieStore*
///
QObject* q_webenginecookiestore_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QWebEngineCookieStore*
/// @param classname const char*
///
bool q_webenginecookiestore_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QWebEngineCookieStore*
///
void q_webenginecookiestore_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QWebEngineCookieStore*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_webenginecookiestore_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QWebEngineCookieStore*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_webenginecookiestore_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_webenginecookiestore_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QWebEngineCookieStore*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_webenginecookiestore_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineCookieStore*
/// @param param1 QObject*
///
void q_webenginecookiestore_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QWebEngineCookieStore*
/// @param callback void func(QWebEngineCookieStore* self, QObject* param1)
///
void q_webenginecookiestore_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QWebEngineCookieStore*
/// @param callback void func(QWebEngineCookieStore* self, const char* objectName)
///
void q_webenginecookiestore_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore.html#dtor.QWebEngineCookieStore)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineCookieStore*
///
void q_webenginecookiestore_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html)

/// q_webenginecookiestore__filterrequest_new constructs a new QWebEngineCookieStore::FilterRequest object.
///
/// @param param1 QWebEngineCookieStore__FilterRequest*
///
QWebEngineCookieStore__FilterRequest* q_webenginecookiestore__filterrequest_new(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#firstPartyUrl-var)
///
/// @param self QWebEngineCookieStore__FilterRequest*
///
QUrl* q_webenginecookiestore__filterrequest_first_party_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#firstPartyUrl-var)
///
/// @param self QWebEngineCookieStore__FilterRequest*
/// @param firstPartyUrl QUrl*
///
void q_webenginecookiestore__filterrequest_set_first_party_url(void* self, void* firstPartyUrl);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#origin-var)
///
/// @param self QWebEngineCookieStore__FilterRequest*
///
QUrl* q_webenginecookiestore__filterrequest_origin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#origin-var)
///
/// @param self QWebEngineCookieStore__FilterRequest*
/// @param origin QUrl*
///
void q_webenginecookiestore__filterrequest_set_origin(void* self, void* origin);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#thirdParty-var)
///
/// @param self QWebEngineCookieStore__FilterRequest*
///
bool q_webenginecookiestore__filterrequest_third_party(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#thirdParty-var)
///
/// @param self QWebEngineCookieStore__FilterRequest*
/// @param thirdParty bool
///
void q_webenginecookiestore__filterrequest_set_third_party(void* self, bool thirdParty);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#_reservedFlag-var)
///
/// @param self QWebEngineCookieStore__FilterRequest*
///
bool q_webenginecookiestore__filterrequest_reserved_flag(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#_reservedFlag-var)
///
/// @param self QWebEngineCookieStore__FilterRequest*
/// @param _reservedFlag bool
///
void q_webenginecookiestore__filterrequest_set_reserved_flag(void* self, bool _reservedFlag);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#_reservedType-var)
///
/// @param self QWebEngineCookieStore__FilterRequest*
///
unsigned short q_webenginecookiestore__filterrequest_reserved_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#_reservedType-var)
///
/// @param self QWebEngineCookieStore__FilterRequest*
/// @param _reservedType unsigned short
///
void q_webenginecookiestore__filterrequest_set_reserved_type(void* self, unsigned short _reservedType);

/// [Upstream resources](https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html#operator-eq)
///
/// @param self QWebEngineCookieStore__FilterRequest*
/// @param param1 QWebEngineCookieStore__FilterRequest*
///
void q_webenginecookiestore__filterrequest_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self QWebEngineCookieStore__FilterRequest*
///
void q_webenginecookiestore__filterrequest_delete(void* self);

#endif
