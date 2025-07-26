#pragma once
#ifndef SRC_NETWORKQT6C_LIBQNETWORKCOOKIEJAR_H
#define SRC_NETWORKQT6C_LIBQNETWORKCOOKIEJAR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qnetworkcookiejar.html

/// q_networkcookiejar_new constructs a new QNetworkCookieJar object.
///
///
QNetworkCookieJar* q_networkcookiejar_new();

/// q_networkcookiejar_new2 constructs a new QNetworkCookieJar object.
///
/// ``` QObject* parent ```
QNetworkCookieJar* q_networkcookiejar_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QNetworkCookieJar* self ```
const QMetaObject* q_networkcookiejar_meta_object(void* self);

/// ``` QNetworkCookieJar* self, const char* param1 ```
void* q_networkcookiejar_metacast(void* self, const char* param1);

/// ``` QNetworkCookieJar* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_networkcookiejar_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QNetworkCookieJar* self, int32_t (*slot)(QNetworkCookieJar*, enum QMetaObject__Call, int, void*) ```
void q_networkcookiejar_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QNetworkCookieJar* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_networkcookiejar_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_networkcookiejar_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#cookiesForUrl)
///
/// ``` QNetworkCookieJar* self, QUrl* url ```
libqt_list /* of QNetworkCookie* */ q_networkcookiejar_cookies_for_url(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#cookiesForUrl)
///
/// Allows for overriding the related default method
///
/// ``` QNetworkCookieJar* self, libqt_list /* of QNetworkCookie* */ (*slot)(QNetworkCookieJar*, QUrl*) ```
void q_networkcookiejar_on_cookies_for_url(void* self, libqt_list /* of QNetworkCookie* */ (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#cookiesForUrl)
///
/// Base class method implementation
///
/// ``` QNetworkCookieJar* self, QUrl* url ```
libqt_list /* of QNetworkCookie* */ q_networkcookiejar_qbase_cookies_for_url(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#setCookiesFromUrl)
///
/// ``` QNetworkCookieJar* self, libqt_list /* of QNetworkCookie* */ cookieList, QUrl* url ```
bool q_networkcookiejar_set_cookies_from_url(void* self, libqt_list cookieList, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#setCookiesFromUrl)
///
/// Allows for overriding the related default method
///
/// ``` QNetworkCookieJar* self, bool (*slot)(QNetworkCookieJar*, libqt_list /* of QNetworkCookie* */ cookieList , QUrl*) ```
void q_networkcookiejar_on_set_cookies_from_url(void* self, bool (*slot)(void*, libqt_list, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#setCookiesFromUrl)
///
/// Base class method implementation
///
/// ``` QNetworkCookieJar* self, libqt_list /* of QNetworkCookie* */ cookieList, QUrl* url ```
bool q_networkcookiejar_qbase_set_cookies_from_url(void* self, libqt_list cookieList, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#insertCookie)
///
/// ``` QNetworkCookieJar* self, QNetworkCookie* cookie ```
bool q_networkcookiejar_insert_cookie(void* self, void* cookie);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#insertCookie)
///
/// Allows for overriding the related default method
///
/// ``` QNetworkCookieJar* self, bool (*slot)(QNetworkCookieJar*, QNetworkCookie*) ```
void q_networkcookiejar_on_insert_cookie(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#insertCookie)
///
/// Base class method implementation
///
/// ``` QNetworkCookieJar* self, QNetworkCookie* cookie ```
bool q_networkcookiejar_qbase_insert_cookie(void* self, void* cookie);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#updateCookie)
///
/// ``` QNetworkCookieJar* self, QNetworkCookie* cookie ```
bool q_networkcookiejar_update_cookie(void* self, void* cookie);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#updateCookie)
///
/// Allows for overriding the related default method
///
/// ``` QNetworkCookieJar* self, bool (*slot)(QNetworkCookieJar*, QNetworkCookie*) ```
void q_networkcookiejar_on_update_cookie(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#updateCookie)
///
/// Base class method implementation
///
/// ``` QNetworkCookieJar* self, QNetworkCookie* cookie ```
bool q_networkcookiejar_qbase_update_cookie(void* self, void* cookie);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#deleteCookie)
///
/// ``` QNetworkCookieJar* self, QNetworkCookie* cookie ```
bool q_networkcookiejar_delete_cookie(void* self, void* cookie);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#deleteCookie)
///
/// Allows for overriding the related default method
///
/// ``` QNetworkCookieJar* self, bool (*slot)(QNetworkCookieJar*, QNetworkCookie*) ```
void q_networkcookiejar_on_delete_cookie(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#deleteCookie)
///
/// Base class method implementation
///
/// ``` QNetworkCookieJar* self, QNetworkCookie* cookie ```
bool q_networkcookiejar_qbase_delete_cookie(void* self, void* cookie);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#allCookies)
///
/// ``` QNetworkCookieJar* self ```
libqt_list /* of QNetworkCookie* */ q_networkcookiejar_all_cookies(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#allCookies)
///
/// Allows for overriding the related default method
///
/// ``` QNetworkCookieJar* self, libqt_list /* of QNetworkCookie* */ (*slot)() ```
void q_networkcookiejar_on_all_cookies(void* self, libqt_list /* of QNetworkCookie* */ (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#allCookies)
///
/// Base class method implementation
///
/// ``` QNetworkCookieJar* self ```
libqt_list /* of QNetworkCookie* */ q_networkcookiejar_qbase_all_cookies(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#setAllCookies)
///
/// ``` QNetworkCookieJar* self, libqt_list /* of QNetworkCookie* */ cookieList ```
void q_networkcookiejar_set_all_cookies(void* self, libqt_list cookieList);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#setAllCookies)
///
/// Allows for overriding the related default method
///
/// ``` QNetworkCookieJar* self, void (*slot)(QNetworkCookieJar*, libqt_list /* of QNetworkCookie* */ cookieList ) ```
void q_networkcookiejar_on_set_all_cookies(void* self, void (*slot)(void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#setAllCookies)
///
/// Base class method implementation
///
/// ``` QNetworkCookieJar* self, libqt_list /* of QNetworkCookie* */ cookieList ```
void q_networkcookiejar_qbase_set_all_cookies(void* self, libqt_list cookieList);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#validateCookie)
///
/// ``` QNetworkCookieJar* self, QNetworkCookie* cookie, QUrl* url ```
bool q_networkcookiejar_validate_cookie(void* self, void* cookie, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#validateCookie)
///
/// Allows for overriding the related default method
///
/// ``` QNetworkCookieJar* self, bool (*slot)(QNetworkCookieJar*, QNetworkCookie*, QUrl*) ```
void q_networkcookiejar_on_validate_cookie(void* self, bool (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#validateCookie)
///
/// Base class method implementation
///
/// ``` QNetworkCookieJar* self, QNetworkCookie* cookie, QUrl* url ```
bool q_networkcookiejar_qbase_validate_cookie(void* self, void* cookie, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_networkcookiejar_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_networkcookiejar_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QNetworkCookieJar* self ```
const char* q_networkcookiejar_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QNetworkCookieJar* self, char* name ```
void q_networkcookiejar_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QNetworkCookieJar* self ```
bool q_networkcookiejar_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QNetworkCookieJar* self ```
bool q_networkcookiejar_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QNetworkCookieJar* self ```
bool q_networkcookiejar_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QNetworkCookieJar* self ```
bool q_networkcookiejar_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QNetworkCookieJar* self, bool b ```
bool q_networkcookiejar_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QNetworkCookieJar* self ```
QThread* q_networkcookiejar_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QNetworkCookieJar* self, QThread* thread ```
bool q_networkcookiejar_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QNetworkCookieJar* self, int interval ```
int32_t q_networkcookiejar_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QNetworkCookieJar* self, int id ```
void q_networkcookiejar_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QNetworkCookieJar* self, enum Qt__TimerId id ```
void q_networkcookiejar_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QNetworkCookieJar* self ```
libqt_list /* of QObject* */ q_networkcookiejar_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QNetworkCookieJar* self, QObject* parent ```
void q_networkcookiejar_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QNetworkCookieJar* self, QObject* filterObj ```
void q_networkcookiejar_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QNetworkCookieJar* self, QObject* obj ```
void q_networkcookiejar_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_networkcookiejar_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QNetworkCookieJar* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_networkcookiejar_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_networkcookiejar_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_networkcookiejar_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QNetworkCookieJar* self ```
void q_networkcookiejar_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QNetworkCookieJar* self ```
void q_networkcookiejar_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QNetworkCookieJar* self, const char* name, QVariant* value ```
bool q_networkcookiejar_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QNetworkCookieJar* self, const char* name ```
QVariant* q_networkcookiejar_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QNetworkCookieJar* self ```
const char** q_networkcookiejar_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QNetworkCookieJar* self ```
QBindingStorage* q_networkcookiejar_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QNetworkCookieJar* self ```
const QBindingStorage* q_networkcookiejar_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QNetworkCookieJar* self ```
void q_networkcookiejar_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QNetworkCookieJar* self, void (*slot)(QNetworkCookieJar*) ```
void q_networkcookiejar_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QNetworkCookieJar* self ```
QObject* q_networkcookiejar_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QNetworkCookieJar* self, const char* classname ```
bool q_networkcookiejar_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QNetworkCookieJar* self ```
void q_networkcookiejar_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QNetworkCookieJar* self, QThread* thread, Disambiguated_t* param2 ```
bool q_networkcookiejar_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QNetworkCookieJar* self, int interval, enum Qt__TimerType timerType ```
int32_t q_networkcookiejar_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_networkcookiejar_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QNetworkCookieJar* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_networkcookiejar_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QNetworkCookieJar* self, QObject* param1 ```
void q_networkcookiejar_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QNetworkCookieJar* self, void (*slot)(QNetworkCookieJar*, QObject*) ```
void q_networkcookiejar_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkCookieJar* self, QEvent* event ```
bool q_networkcookiejar_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkCookieJar* self, QEvent* event ```
bool q_networkcookiejar_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkCookieJar* self, bool (*slot)(QNetworkCookieJar*, QEvent*) ```
void q_networkcookiejar_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkCookieJar* self, QObject* watched, QEvent* event ```
bool q_networkcookiejar_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkCookieJar* self, QObject* watched, QEvent* event ```
bool q_networkcookiejar_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkCookieJar* self, bool (*slot)(QNetworkCookieJar*, QObject*, QEvent*) ```
void q_networkcookiejar_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkCookieJar* self, QTimerEvent* event ```
void q_networkcookiejar_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkCookieJar* self, QTimerEvent* event ```
void q_networkcookiejar_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkCookieJar* self, void (*slot)(QNetworkCookieJar*, QTimerEvent*) ```
void q_networkcookiejar_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkCookieJar* self, QChildEvent* event ```
void q_networkcookiejar_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkCookieJar* self, QChildEvent* event ```
void q_networkcookiejar_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkCookieJar* self, void (*slot)(QNetworkCookieJar*, QChildEvent*) ```
void q_networkcookiejar_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkCookieJar* self, QEvent* event ```
void q_networkcookiejar_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkCookieJar* self, QEvent* event ```
void q_networkcookiejar_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkCookieJar* self, void (*slot)(QNetworkCookieJar*, QEvent*) ```
void q_networkcookiejar_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkCookieJar* self, QMetaMethod* signal ```
void q_networkcookiejar_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkCookieJar* self, QMetaMethod* signal ```
void q_networkcookiejar_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkCookieJar* self, void (*slot)(QNetworkCookieJar*, QMetaMethod*) ```
void q_networkcookiejar_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkCookieJar* self, QMetaMethod* signal ```
void q_networkcookiejar_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkCookieJar* self, QMetaMethod* signal ```
void q_networkcookiejar_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkCookieJar* self, void (*slot)(QNetworkCookieJar*, QMetaMethod*) ```
void q_networkcookiejar_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkCookieJar* self ```
QObject* q_networkcookiejar_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkCookieJar* self ```
QObject* q_networkcookiejar_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkCookieJar* self, QObject* (*slot)() ```
void q_networkcookiejar_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkCookieJar* self ```
int32_t q_networkcookiejar_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkCookieJar* self ```
int32_t q_networkcookiejar_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkCookieJar* self, int32_t (*slot)() ```
void q_networkcookiejar_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkCookieJar* self, const char* signal ```
int32_t q_networkcookiejar_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkCookieJar* self, const char* signal ```
int32_t q_networkcookiejar_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkCookieJar* self, int32_t (*slot)(QNetworkCookieJar*, const char*) ```
void q_networkcookiejar_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkCookieJar* self, QMetaMethod* signal ```
bool q_networkcookiejar_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkCookieJar* self, QMetaMethod* signal ```
bool q_networkcookiejar_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkCookieJar* self, bool (*slot)(QNetworkCookieJar*, QMetaMethod*) ```
void q_networkcookiejar_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QNetworkCookieJar* self, void (*slot)(QNetworkCookieJar*, const char*) ```
void q_networkcookiejar_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookiejar.html#dtor.QNetworkCookieJar)
///
/// Delete this object from C++ memory.
///
/// ``` QNetworkCookieJar* self ```
void q_networkcookiejar_delete(void* self);

#endif
