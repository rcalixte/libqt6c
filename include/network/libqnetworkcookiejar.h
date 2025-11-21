#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQNETWORKCOOKIEJAR_H
#define SRC_NETWORK_QT6C_LIBQNETWORKCOOKIEJAR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qnetworkcookiejar.html

/// q_networkcookiejar_new constructs a new QNetworkCookieJar object.
///
QNetworkCookieJar* q_networkcookiejar_new();

/// q_networkcookiejar_new2 constructs a new QNetworkCookieJar object.
///
/// @param parent QObject*
QNetworkCookieJar* q_networkcookiejar_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QNetworkCookieJar*
const QMetaObject* q_networkcookiejar_meta_object(void* self);

/// @param self QNetworkCookieJar*
/// @param param1 const char*
void* q_networkcookiejar_metacast(void* self, const char* param1);

/// @param self QNetworkCookieJar*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_networkcookiejar_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QNetworkCookieJar*
/// @param callback int32_t func(QNetworkCookieJar* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_networkcookiejar_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QNetworkCookieJar*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_networkcookiejar_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_networkcookiejar_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#cookiesForUrl)
///
/// @param self QNetworkCookieJar*
/// @param url QUrl*
libqt_list /* of QNetworkCookie* */ q_networkcookiejar_cookies_for_url(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#cookiesForUrl)
///
/// Allows for overriding the related default method
///
/// @param self QNetworkCookieJar*
/// @param callback QNetworkCookie** func(QNetworkCookieJar* self, QUrl* url)
void q_networkcookiejar_on_cookies_for_url(void* self, QNetworkCookie** (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#cookiesForUrl)
///
/// Base class method implementation
///
/// @param self QNetworkCookieJar*
/// @param url QUrl*
libqt_list /* of QNetworkCookie* */ q_networkcookiejar_qbase_cookies_for_url(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#setCookiesFromUrl)
///
/// @param self QNetworkCookieJar*
/// @param cookieList libqt_list /* of QNetworkCookie* */
/// @param url QUrl*
bool q_networkcookiejar_set_cookies_from_url(void* self, libqt_list cookieList, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#setCookiesFromUrl)
///
/// Allows for overriding the related default method
///
/// @param self QNetworkCookieJar*
/// @param callback bool func(QNetworkCookieJar* self, QNetworkCookie** cookieList, QUrl* url)
void q_networkcookiejar_on_set_cookies_from_url(void* self, bool (*callback)(void*, QNetworkCookie**, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#setCookiesFromUrl)
///
/// Base class method implementation
///
/// @param self QNetworkCookieJar*
/// @param cookieList libqt_list /* of QNetworkCookie* */
/// @param url QUrl*
bool q_networkcookiejar_qbase_set_cookies_from_url(void* self, libqt_list cookieList, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#insertCookie)
///
/// @param self QNetworkCookieJar*
/// @param cookie QNetworkCookie*
bool q_networkcookiejar_insert_cookie(void* self, void* cookie);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#insertCookie)
///
/// Allows for overriding the related default method
///
/// @param self QNetworkCookieJar*
/// @param callback bool func(QNetworkCookieJar* self, QNetworkCookie* cookie)
void q_networkcookiejar_on_insert_cookie(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#insertCookie)
///
/// Base class method implementation
///
/// @param self QNetworkCookieJar*
/// @param cookie QNetworkCookie*
bool q_networkcookiejar_qbase_insert_cookie(void* self, void* cookie);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#updateCookie)
///
/// @param self QNetworkCookieJar*
/// @param cookie QNetworkCookie*
bool q_networkcookiejar_update_cookie(void* self, void* cookie);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#updateCookie)
///
/// Allows for overriding the related default method
///
/// @param self QNetworkCookieJar*
/// @param callback bool func(QNetworkCookieJar* self, QNetworkCookie* cookie)
void q_networkcookiejar_on_update_cookie(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#updateCookie)
///
/// Base class method implementation
///
/// @param self QNetworkCookieJar*
/// @param cookie QNetworkCookie*
bool q_networkcookiejar_qbase_update_cookie(void* self, void* cookie);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#deleteCookie)
///
/// @param self QNetworkCookieJar*
/// @param cookie QNetworkCookie*
bool q_networkcookiejar_delete_cookie(void* self, void* cookie);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#deleteCookie)
///
/// Allows for overriding the related default method
///
/// @param self QNetworkCookieJar*
/// @param callback bool func(QNetworkCookieJar* self, QNetworkCookie* cookie)
void q_networkcookiejar_on_delete_cookie(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#deleteCookie)
///
/// Base class method implementation
///
/// @param self QNetworkCookieJar*
/// @param cookie QNetworkCookie*
bool q_networkcookiejar_qbase_delete_cookie(void* self, void* cookie);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#allCookies)
///
/// @param self QNetworkCookieJar*
libqt_list /* of QNetworkCookie* */ q_networkcookiejar_all_cookies(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#allCookies)
///
/// Allows for overriding the related default method
///
/// @param self QNetworkCookieJar*
/// @param callback QNetworkCookie** func()
void q_networkcookiejar_on_all_cookies(void* self, QNetworkCookie** (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#allCookies)
///
/// Base class method implementation
///
/// @param self QNetworkCookieJar*
libqt_list /* of QNetworkCookie* */ q_networkcookiejar_qbase_all_cookies(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#setAllCookies)
///
/// @param self QNetworkCookieJar*
/// @param cookieList libqt_list /* of QNetworkCookie* */
void q_networkcookiejar_set_all_cookies(void* self, libqt_list cookieList);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#setAllCookies)
///
/// Allows for overriding the related default method
///
/// @param self QNetworkCookieJar*
/// @param callback void func(QNetworkCookieJar* self, QNetworkCookie** cookieList)
void q_networkcookiejar_on_set_all_cookies(void* self, void (*callback)(void*, QNetworkCookie**));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#setAllCookies)
///
/// Base class method implementation
///
/// @param self QNetworkCookieJar*
/// @param cookieList libqt_list /* of QNetworkCookie* */
void q_networkcookiejar_qbase_set_all_cookies(void* self, libqt_list cookieList);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#validateCookie)
///
/// @param self QNetworkCookieJar*
/// @param cookie QNetworkCookie*
/// @param url QUrl*
bool q_networkcookiejar_validate_cookie(void* self, void* cookie, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#validateCookie)
///
/// Allows for overriding the related default method
///
/// @param self QNetworkCookieJar*
/// @param callback bool func(QNetworkCookieJar* self, QNetworkCookie* cookie, QUrl* url)
void q_networkcookiejar_on_validate_cookie(void* self, bool (*callback)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#validateCookie)
///
/// Base class method implementation
///
/// @param self QNetworkCookieJar*
/// @param cookie QNetworkCookie*
/// @param url QUrl*
bool q_networkcookiejar_qbase_validate_cookie(void* self, void* cookie, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_networkcookiejar_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_networkcookiejar_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QNetworkCookieJar*
const char* q_networkcookiejar_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QNetworkCookieJar*
/// @param name char*
void q_networkcookiejar_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QNetworkCookieJar*
bool q_networkcookiejar_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QNetworkCookieJar*
bool q_networkcookiejar_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QNetworkCookieJar*
bool q_networkcookiejar_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QNetworkCookieJar*
bool q_networkcookiejar_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QNetworkCookieJar*
/// @param b bool
bool q_networkcookiejar_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QNetworkCookieJar*
QThread* q_networkcookiejar_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QNetworkCookieJar*
/// @param thread QThread*
bool q_networkcookiejar_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QNetworkCookieJar*
/// @param interval int
int32_t q_networkcookiejar_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QNetworkCookieJar*
/// @param id int
void q_networkcookiejar_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QNetworkCookieJar*
/// @param id enum Qt__TimerId
void q_networkcookiejar_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QNetworkCookieJar*
libqt_list /* of QObject* */ q_networkcookiejar_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QNetworkCookieJar*
/// @param parent QObject*
void q_networkcookiejar_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QNetworkCookieJar*
/// @param filterObj QObject*
void q_networkcookiejar_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QNetworkCookieJar*
/// @param obj QObject*
void q_networkcookiejar_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_networkcookiejar_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QNetworkCookieJar*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_networkcookiejar_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_networkcookiejar_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_networkcookiejar_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QNetworkCookieJar*
void q_networkcookiejar_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QNetworkCookieJar*
void q_networkcookiejar_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QNetworkCookieJar*
/// @param name const char*
/// @param value QVariant*
bool q_networkcookiejar_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QNetworkCookieJar*
/// @param name const char*
QVariant* q_networkcookiejar_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QNetworkCookieJar*
const char** q_networkcookiejar_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QNetworkCookieJar*
QBindingStorage* q_networkcookiejar_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QNetworkCookieJar*
const QBindingStorage* q_networkcookiejar_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QNetworkCookieJar*
void q_networkcookiejar_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QNetworkCookieJar*
/// @param callback void func(QNetworkCookieJar* self)
void q_networkcookiejar_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QNetworkCookieJar*
QObject* q_networkcookiejar_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QNetworkCookieJar*
/// @param classname const char*
bool q_networkcookiejar_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QNetworkCookieJar*
void q_networkcookiejar_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QNetworkCookieJar*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_networkcookiejar_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QNetworkCookieJar*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_networkcookiejar_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_networkcookiejar_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QNetworkCookieJar*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_networkcookiejar_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QNetworkCookieJar*
/// @param param1 QObject*
void q_networkcookiejar_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QNetworkCookieJar*
/// @param callback void func(QNetworkCookieJar* self, QObject* param1)
void q_networkcookiejar_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkCookieJar*
/// @param event QEvent*
bool q_networkcookiejar_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkCookieJar*
/// @param event QEvent*
bool q_networkcookiejar_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkCookieJar*
/// @param callback bool func(QNetworkCookieJar* self, QEvent* event)
void q_networkcookiejar_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkCookieJar*
/// @param watched QObject*
/// @param event QEvent*
bool q_networkcookiejar_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkCookieJar*
/// @param watched QObject*
/// @param event QEvent*
bool q_networkcookiejar_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkCookieJar*
/// @param callback bool func(QNetworkCookieJar* self, QObject* watched, QEvent* event)
void q_networkcookiejar_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkCookieJar*
/// @param event QTimerEvent*
void q_networkcookiejar_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkCookieJar*
/// @param event QTimerEvent*
void q_networkcookiejar_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkCookieJar*
/// @param callback void func(QNetworkCookieJar* self, QTimerEvent* event)
void q_networkcookiejar_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkCookieJar*
/// @param event QChildEvent*
void q_networkcookiejar_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkCookieJar*
/// @param event QChildEvent*
void q_networkcookiejar_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkCookieJar*
/// @param callback void func(QNetworkCookieJar* self, QChildEvent* event)
void q_networkcookiejar_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkCookieJar*
/// @param event QEvent*
void q_networkcookiejar_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkCookieJar*
/// @param event QEvent*
void q_networkcookiejar_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkCookieJar*
/// @param callback void func(QNetworkCookieJar* self, QEvent* event)
void q_networkcookiejar_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkCookieJar*
/// @param signal QMetaMethod*
void q_networkcookiejar_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkCookieJar*
/// @param signal QMetaMethod*
void q_networkcookiejar_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkCookieJar*
/// @param callback void func(QNetworkCookieJar* self, QMetaMethod* signal)
void q_networkcookiejar_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkCookieJar*
/// @param signal QMetaMethod*
void q_networkcookiejar_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkCookieJar*
/// @param signal QMetaMethod*
void q_networkcookiejar_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkCookieJar*
/// @param callback void func(QNetworkCookieJar* self, QMetaMethod* signal)
void q_networkcookiejar_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkCookieJar*
QObject* q_networkcookiejar_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkCookieJar*
QObject* q_networkcookiejar_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkCookieJar*
/// @param callback QObject* func()
void q_networkcookiejar_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkCookieJar*
int32_t q_networkcookiejar_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkCookieJar*
int32_t q_networkcookiejar_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkCookieJar*
/// @param callback int32_t func()
void q_networkcookiejar_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkCookieJar*
/// @param signal const char*
int32_t q_networkcookiejar_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkCookieJar*
/// @param signal const char*
int32_t q_networkcookiejar_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkCookieJar*
/// @param callback int32_t func(QNetworkCookieJar* self, const char* signal)
void q_networkcookiejar_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkCookieJar*
/// @param signal QMetaMethod*
bool q_networkcookiejar_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkCookieJar*
/// @param signal QMetaMethod*
bool q_networkcookiejar_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkCookieJar*
/// @param callback bool func(QNetworkCookieJar* self, QMetaMethod* signal)
void q_networkcookiejar_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QNetworkCookieJar*
/// @param callback void func(QNetworkCookieJar* self, const char* objectName)
void q_networkcookiejar_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#dtor.QNetworkCookieJar)
///
/// Delete this object from C++ memory.
///
/// @param self QNetworkCookieJar*
void q_networkcookiejar_delete(void* self);

#endif
