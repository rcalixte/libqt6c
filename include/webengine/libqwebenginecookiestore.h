#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINECOOKIESTORE_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINECOOKIESTORE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebenginecookiestore.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QWebEngineCookieStore* self ```
const QMetaObject* q_webenginecookiestore_meta_object(void* self);

/// ``` QWebEngineCookieStore* self, const char* param1 ```
void* q_webenginecookiestore_metacast(void* self, const char* param1);

/// ``` QWebEngineCookieStore* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_webenginecookiestore_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_webenginecookiestore_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecookiestore.html#setCookie)
///
/// ``` QWebEngineCookieStore* self, QNetworkCookie* cookie ```
void q_webenginecookiestore_set_cookie(void* self, void* cookie);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecookiestore.html#deleteCookie)
///
/// ``` QWebEngineCookieStore* self, QNetworkCookie* cookie ```
void q_webenginecookiestore_delete_cookie(void* self, void* cookie);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecookiestore.html#deleteSessionCookies)
///
/// ``` QWebEngineCookieStore* self ```
void q_webenginecookiestore_delete_session_cookies(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecookiestore.html#deleteAllCookies)
///
/// ``` QWebEngineCookieStore* self ```
void q_webenginecookiestore_delete_all_cookies(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecookiestore.html#loadAllCookies)
///
/// ``` QWebEngineCookieStore* self ```
void q_webenginecookiestore_load_all_cookies(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecookiestore.html#cookieAdded)
///
/// ``` QWebEngineCookieStore* self, QNetworkCookie* cookie ```
void q_webenginecookiestore_cookie_added(void* self, void* cookie);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecookiestore.html#cookieAdded)
///
/// ``` QWebEngineCookieStore* self, void (*slot)(QWebEngineCookieStore*, QNetworkCookie*) ```
void q_webenginecookiestore_on_cookie_added(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecookiestore.html#cookieRemoved)
///
/// ``` QWebEngineCookieStore* self, QNetworkCookie* cookie ```
void q_webenginecookiestore_cookie_removed(void* self, void* cookie);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecookiestore.html#cookieRemoved)
///
/// ``` QWebEngineCookieStore* self, void (*slot)(QWebEngineCookieStore*, QNetworkCookie*) ```
void q_webenginecookiestore_on_cookie_removed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_webenginecookiestore_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_webenginecookiestore_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecookiestore.html#setCookie)
///
/// ``` QWebEngineCookieStore* self, QNetworkCookie* cookie, QUrl* origin ```
void q_webenginecookiestore_set_cookie2(void* self, void* cookie, void* origin);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecookiestore.html#deleteCookie)
///
/// ``` QWebEngineCookieStore* self, QNetworkCookie* cookie, QUrl* origin ```
void q_webenginecookiestore_delete_cookie2(void* self, void* cookie, void* origin);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// ``` QWebEngineCookieStore* self, QEvent* event ```
bool q_webenginecookiestore_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// ``` QWebEngineCookieStore* self, QObject* watched, QEvent* event ```
bool q_webenginecookiestore_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QWebEngineCookieStore* self ```
const char* q_webenginecookiestore_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QWebEngineCookieStore* self, char* name ```
void q_webenginecookiestore_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QWebEngineCookieStore* self ```
bool q_webenginecookiestore_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QWebEngineCookieStore* self ```
bool q_webenginecookiestore_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QWebEngineCookieStore* self ```
bool q_webenginecookiestore_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QWebEngineCookieStore* self ```
bool q_webenginecookiestore_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QWebEngineCookieStore* self, bool b ```
bool q_webenginecookiestore_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QWebEngineCookieStore* self ```
QThread* q_webenginecookiestore_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineCookieStore* self, QThread* thread ```
bool q_webenginecookiestore_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineCookieStore* self, int interval ```
int32_t q_webenginecookiestore_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineCookieStore* self, int id ```
void q_webenginecookiestore_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QWebEngineCookieStore* self, enum Qt__TimerId id ```
void q_webenginecookiestore_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QWebEngineCookieStore* self ```
libqt_list /* of QObject* */ q_webenginecookiestore_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QWebEngineCookieStore* self, QObject* parent ```
void q_webenginecookiestore_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QWebEngineCookieStore* self, QObject* filterObj ```
void q_webenginecookiestore_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QWebEngineCookieStore* self, QObject* obj ```
void q_webenginecookiestore_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_webenginecookiestore_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineCookieStore* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_webenginecookiestore_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_webenginecookiestore_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_webenginecookiestore_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QWebEngineCookieStore* self ```
void q_webenginecookiestore_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QWebEngineCookieStore* self ```
void q_webenginecookiestore_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QWebEngineCookieStore* self, const char* name, QVariant* value ```
bool q_webenginecookiestore_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QWebEngineCookieStore* self, const char* name ```
QVariant* q_webenginecookiestore_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QWebEngineCookieStore* self ```
const char** q_webenginecookiestore_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineCookieStore* self ```
QBindingStorage* q_webenginecookiestore_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QWebEngineCookieStore* self ```
const QBindingStorage* q_webenginecookiestore_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineCookieStore* self ```
void q_webenginecookiestore_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineCookieStore* self, void (*slot)(QObject*) ```
void q_webenginecookiestore_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QWebEngineCookieStore* self ```
QObject* q_webenginecookiestore_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QWebEngineCookieStore* self, const char* classname ```
bool q_webenginecookiestore_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QWebEngineCookieStore* self ```
void q_webenginecookiestore_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QWebEngineCookieStore* self, QThread* thread, Disambiguated_t* param2 ```
bool q_webenginecookiestore_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QWebEngineCookieStore* self, int interval, enum Qt__TimerType timerType ```
int32_t q_webenginecookiestore_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginecookiestore_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QWebEngineCookieStore* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_webenginecookiestore_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineCookieStore* self, QObject* param1 ```
void q_webenginecookiestore_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QWebEngineCookieStore* self, void (*slot)(QObject*, QObject*) ```
void q_webenginecookiestore_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QWebEngineCookieStore* self, void (*slot)(QObject*, const char*) ```
void q_webenginecookiestore_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecookiestore.html#dtor.QWebEngineCookieStore)
///
/// Delete this object from C++ memory.
///
/// ``` QWebEngineCookieStore* self ```
void q_webenginecookiestore_delete(void* self);

/// https://doc.qt.io/qt-6/qwebenginecookiestore-filterrequest.html

/// q_webenginecookiestore__filterrequest_new constructs a new QWebEngineCookieStore::FilterRequest object.
///
/// ``` QWebEngineCookieStore__FilterRequest* param1 ```
QWebEngineCookieStore__FilterRequest* q_webenginecookiestore__filterrequest_new(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecookiestore__filterrequest.html#operator-eq)
///
/// ``` QWebEngineCookieStore__FilterRequest* self, QWebEngineCookieStore__FilterRequest* param1 ```
void q_webenginecookiestore__filterrequest_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecookiestore::filterrequest.html#dtor.QWebEngineCookieStore::FilterRequest)
///
/// Delete this object from C++ memory.
///
/// ``` QWebEngineCookieStore__FilterRequest* self ```
void q_webenginecookiestore__filterrequest_delete(void* self);

#endif
