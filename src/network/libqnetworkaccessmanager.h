#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQNETWORKACCESSMANAGER_H
#define SRC_NETWORK_QT6C_LIBQNETWORKACCESSMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html)

/// q_networkaccessmanager_new constructs a new QNetworkAccessManager object.
///
QNetworkAccessManager* q_networkaccessmanager_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html)

/// q_networkaccessmanager_new2 constructs a new QNetworkAccessManager object.
///
/// @param parent QObject*
///
QNetworkAccessManager* q_networkaccessmanager_new2(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QNetworkAccessManager*
///
const QMetaObject* q_networkaccessmanager_meta_object(void* self);

/// @param self QNetworkAccessManager*
/// @param param1 const char*
///
void* q_networkaccessmanager_metacast(void* self, const char* param1);

/// @param self QNetworkAccessManager*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_networkaccessmanager_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QNetworkAccessManager*
/// @param callback int32_t func(QNetworkAccessManager* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_networkaccessmanager_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QNetworkAccessManager*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_networkaccessmanager_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_networkaccessmanager_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QNetworkAccessManager*
///
const char** q_networkaccessmanager_supported_schemes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemes)
///
/// Allows for overriding the related default method
///
/// @param self QNetworkAccessManager*
/// @param callback const char** func()
///
void q_networkaccessmanager_on_supported_schemes(void* self, const char** (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemes)
///
/// Base class method implementation
///
/// @param self QNetworkAccessManager*
///
const char** q_networkaccessmanager_qbase_supported_schemes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#clearAccessCache)
///
/// @param self QNetworkAccessManager*
///
void q_networkaccessmanager_clear_access_cache(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#clearConnectionCache)
///
/// @param self QNetworkAccessManager*
///
void q_networkaccessmanager_clear_connection_cache(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#proxy)
///
/// @param self QNetworkAccessManager*
///
QNetworkProxy* q_networkaccessmanager_proxy(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setProxy)
///
/// @param self QNetworkAccessManager*
/// @param proxy QNetworkProxy*
///
void q_networkaccessmanager_set_proxy(void* self, void* proxy);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#proxyFactory)
///
/// @param self QNetworkAccessManager*
///
QNetworkProxyFactory* q_networkaccessmanager_proxy_factory(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setProxyFactory)
///
/// @param self QNetworkAccessManager*
/// @param factory QNetworkProxyFactory*
///
void q_networkaccessmanager_set_proxy_factory(void* self, void* factory);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#cache)
///
/// @param self QNetworkAccessManager*
///
QAbstractNetworkCache* q_networkaccessmanager_cache(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setCache)
///
/// @param self QNetworkAccessManager*
/// @param cache QAbstractNetworkCache*
///
void q_networkaccessmanager_set_cache(void* self, void* cache);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#cookieJar)
///
/// @param self QNetworkAccessManager*
///
QNetworkCookieJar* q_networkaccessmanager_cookie_jar(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setCookieJar)
///
/// @param self QNetworkAccessManager*
/// @param cookieJar QNetworkCookieJar*
///
void q_networkaccessmanager_set_cookie_jar(void* self, void* cookieJar);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setStrictTransportSecurityEnabled)
///
/// @param self QNetworkAccessManager*
/// @param enabled bool
///
void q_networkaccessmanager_set_strict_transport_security_enabled(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#isStrictTransportSecurityEnabled)
///
/// @param self QNetworkAccessManager*
///
bool q_networkaccessmanager_is_strict_transport_security_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#enableStrictTransportSecurityStore)
///
/// @param self QNetworkAccessManager*
/// @param enabled bool
///
void q_networkaccessmanager_enable_strict_transport_security_store(void* self, bool enabled);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#isStrictTransportSecurityStoreEnabled)
///
/// @param self QNetworkAccessManager*
///
bool q_networkaccessmanager_is_strict_transport_security_store_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#addStrictTransportSecurityHosts)
///
/// @param self QNetworkAccessManager*
/// @param knownHosts libqt_list /* of QHstsPolicy* */
///
void q_networkaccessmanager_add_strict_transport_security_hosts(void* self, libqt_list knownHosts);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#strictTransportSecurityHosts)
///
/// @param self QNetworkAccessManager*
///
libqt_list /* of QHstsPolicy* */ q_networkaccessmanager_strict_transport_security_hosts(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#head)
///
/// @param self QNetworkAccessManager*
/// @param request QNetworkRequest*
///
QNetworkReply* q_networkaccessmanager_head(void* self, void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#get)
///
/// @param self QNetworkAccessManager*
/// @param request QNetworkRequest*
///
QNetworkReply* q_networkaccessmanager_get(void* self, void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#get)
///
/// @param self QNetworkAccessManager*
/// @param request QNetworkRequest*
/// @param data QIODevice*
///
QNetworkReply* q_networkaccessmanager_get2(void* self, void* request, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#get)
///
/// @param self QNetworkAccessManager*
/// @param request QNetworkRequest*
/// @param data const char*
///
QNetworkReply* q_networkaccessmanager_get3(void* self, void* request, const char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#post)
///
/// @param self QNetworkAccessManager*
/// @param request QNetworkRequest*
/// @param data QIODevice*
///
QNetworkReply* q_networkaccessmanager_post(void* self, void* request, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#post)
///
/// @param self QNetworkAccessManager*
/// @param request QNetworkRequest*
/// @param data const char*
///
QNetworkReply* q_networkaccessmanager_post2(void* self, void* request, const char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#put)
///
/// @param self QNetworkAccessManager*
/// @param request QNetworkRequest*
/// @param data QIODevice*
///
QNetworkReply* q_networkaccessmanager_put(void* self, void* request, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#put)
///
/// @param self QNetworkAccessManager*
/// @param request QNetworkRequest*
/// @param data const char*
///
QNetworkReply* q_networkaccessmanager_put2(void* self, void* request, const char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#deleteResource)
///
/// @param self QNetworkAccessManager*
/// @param request QNetworkRequest*
///
QNetworkReply* q_networkaccessmanager_delete_resource(void* self, void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sendCustomRequest)
///
/// @param self QNetworkAccessManager*
/// @param request QNetworkRequest*
/// @param verb const char*
///
QNetworkReply* q_networkaccessmanager_send_custom_request(void* self, void* request, const char* verb);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sendCustomRequest)
///
/// @param self QNetworkAccessManager*
/// @param request QNetworkRequest*
/// @param verb const char*
/// @param data const char*
///
QNetworkReply* q_networkaccessmanager_send_custom_request2(void* self, void* request, const char* verb, const char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#post)
///
/// @param self QNetworkAccessManager*
/// @param request QNetworkRequest*
/// @param multiPart QHttpMultiPart*
///
QNetworkReply* q_networkaccessmanager_post4(void* self, void* request, void* multiPart);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#put)
///
/// @param self QNetworkAccessManager*
/// @param request QNetworkRequest*
/// @param multiPart QHttpMultiPart*
///
QNetworkReply* q_networkaccessmanager_put4(void* self, void* request, void* multiPart);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sendCustomRequest)
///
/// @param self QNetworkAccessManager*
/// @param request QNetworkRequest*
/// @param verb const char*
/// @param multiPart QHttpMultiPart*
///
QNetworkReply* q_networkaccessmanager_send_custom_request3(void* self, void* request, const char* verb, void* multiPart);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHostEncrypted)
///
/// @param self QNetworkAccessManager*
/// @param hostName const char*
///
void q_networkaccessmanager_connect_to_host_encrypted(void* self, const char* hostName);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHostEncrypted)
///
/// @param self QNetworkAccessManager*
/// @param hostName const char*
/// @param port unsigned short
/// @param sslConfiguration QSslConfiguration*
/// @param peerName const char*
///
void q_networkaccessmanager_connect_to_host_encrypted2(void* self, const char* hostName, unsigned short port, void* sslConfiguration, const char* peerName);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHost)
///
/// @param self QNetworkAccessManager*
/// @param hostName const char*
///
void q_networkaccessmanager_connect_to_host(void* self, const char* hostName);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setRedirectPolicy)
///
/// @param self QNetworkAccessManager*
/// @param policy enum QNetworkRequest__RedirectPolicy
///
void q_networkaccessmanager_set_redirect_policy(void* self, int32_t policy);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#redirectPolicy)
///
/// @param self QNetworkAccessManager*
///
/// @return enum QNetworkRequest__RedirectPolicy
///
int32_t q_networkaccessmanager_redirect_policy(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#autoDeleteReplies)
///
/// @param self QNetworkAccessManager*
///
bool q_networkaccessmanager_auto_delete_replies(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setAutoDeleteReplies)
///
/// @param self QNetworkAccessManager*
/// @param autoDelete bool
///
void q_networkaccessmanager_set_auto_delete_replies(void* self, bool autoDelete);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#transferTimeout)
///
/// @param self QNetworkAccessManager*
///
int32_t q_networkaccessmanager_transfer_timeout(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setTransferTimeout)
///
/// @param self QNetworkAccessManager*
/// @param timeout int
///
void q_networkaccessmanager_set_transfer_timeout(void* self, int timeout);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setTransferTimeout)
///
/// @param self QNetworkAccessManager*
///
void q_networkaccessmanager_set_transfer_timeout2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#proxyAuthenticationRequired)
///
/// @param self QNetworkAccessManager*
/// @param proxy QNetworkProxy*
/// @param authenticator QAuthenticator*
///
void q_networkaccessmanager_proxy_authentication_required(void* self, void* proxy, void* authenticator);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#proxyAuthenticationRequired)
///
/// @param self QNetworkAccessManager*
/// @param callback void func(QNetworkAccessManager* self, QNetworkProxy* proxy, QAuthenticator* authenticator)
///
void q_networkaccessmanager_on_proxy_authentication_required(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#authenticationRequired)
///
/// @param self QNetworkAccessManager*
/// @param reply QNetworkReply*
/// @param authenticator QAuthenticator*
///
void q_networkaccessmanager_authentication_required(void* self, void* reply, void* authenticator);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#authenticationRequired)
///
/// @param self QNetworkAccessManager*
/// @param callback void func(QNetworkAccessManager* self, QNetworkReply* reply, QAuthenticator* authenticator)
///
void q_networkaccessmanager_on_authentication_required(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#finished)
///
/// @param self QNetworkAccessManager*
/// @param reply QNetworkReply*
///
void q_networkaccessmanager_finished(void* self, void* reply);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#finished)
///
/// @param self QNetworkAccessManager*
/// @param callback void func(QNetworkAccessManager* self, QNetworkReply* reply)
///
void q_networkaccessmanager_on_finished(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#encrypted)
///
/// @param self QNetworkAccessManager*
/// @param reply QNetworkReply*
///
void q_networkaccessmanager_encrypted(void* self, void* reply);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#encrypted)
///
/// @param self QNetworkAccessManager*
/// @param callback void func(QNetworkAccessManager* self, QNetworkReply* reply)
///
void q_networkaccessmanager_on_encrypted(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sslErrors)
///
/// @param self QNetworkAccessManager*
/// @param reply QNetworkReply*
/// @param errors libqt_list /* of QSslError* */
///
void q_networkaccessmanager_ssl_errors(void* self, void* reply, libqt_list errors);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sslErrors)
///
/// @param self QNetworkAccessManager*
/// @param callback void func(QNetworkAccessManager* self, QNetworkReply* reply, QSslError** errors)
///
void q_networkaccessmanager_on_ssl_errors(void* self, void (*callback)(void*, void*, QSslError**));

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#preSharedKeyAuthenticationRequired)
///
/// @param self QNetworkAccessManager*
/// @param reply QNetworkReply*
/// @param authenticator QSslPreSharedKeyAuthenticator*
///
void q_networkaccessmanager_pre_shared_key_authentication_required(void* self, void* reply, void* authenticator);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#preSharedKeyAuthenticationRequired)
///
/// @param self QNetworkAccessManager*
/// @param callback void func(QNetworkAccessManager* self, QNetworkReply* reply, QSslPreSharedKeyAuthenticator* authenticator)
///
void q_networkaccessmanager_on_pre_shared_key_authentication_required(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#createRequest)
///
/// @param self QNetworkAccessManager*
/// @param op enum QNetworkAccessManager__Operation
/// @param request QNetworkRequest*
/// @param outgoingData QIODevice*
///
QNetworkReply* q_networkaccessmanager_create_request(void* self, int32_t op, void* request, void* outgoingData);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#createRequest)
///
/// Allows for overriding the related default method
///
/// @param self QNetworkAccessManager*
/// @param callback QNetworkReply* func(QNetworkAccessManager* self, enum QNetworkAccessManager__Operation op, QNetworkRequest* request, QIODevice* outgoingData)
///
void q_networkaccessmanager_on_create_request(void* self, QNetworkReply* (*callback)(void*, int32_t, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#createRequest)
///
/// Base class method implementation
///
/// @param self QNetworkAccessManager*
/// @param op enum QNetworkAccessManager__Operation
/// @param request QNetworkRequest*
/// @param outgoingData QIODevice*
///
QNetworkReply* q_networkaccessmanager_qbase_create_request(void* self, int32_t op, void* request, void* outgoingData);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemesImplementation)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QNetworkAccessManager*
///
const char** q_networkaccessmanager_supported_schemes_implementation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemesImplementation)
///
/// Allows for overriding the related default method
///
/// @param self QNetworkAccessManager*
/// @param callback const char** func()
///
void q_networkaccessmanager_on_supported_schemes_implementation(void* self, const char** (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemesImplementation)
///
/// Base class method implementation
///
/// @param self QNetworkAccessManager*
///
const char** q_networkaccessmanager_qbase_supported_schemes_implementation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_networkaccessmanager_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_networkaccessmanager_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#enableStrictTransportSecurityStore)
///
/// @param self QNetworkAccessManager*
/// @param enabled bool
/// @param storeDir const char*
///
void q_networkaccessmanager_enable_strict_transport_security_store2(void* self, bool enabled, const char* storeDir);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sendCustomRequest)
///
/// @param self QNetworkAccessManager*
/// @param request QNetworkRequest*
/// @param verb const char*
/// @param data QIODevice*
///
QNetworkReply* q_networkaccessmanager_send_custom_request32(void* self, void* request, const char* verb, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHostEncrypted)
///
/// @param self QNetworkAccessManager*
/// @param hostName const char*
/// @param port unsigned short
///
void q_networkaccessmanager_connect_to_host_encrypted22(void* self, const char* hostName, unsigned short port);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHostEncrypted)
///
/// @param self QNetworkAccessManager*
/// @param hostName const char*
/// @param port unsigned short
/// @param sslConfiguration QSslConfiguration*
///
void q_networkaccessmanager_connect_to_host_encrypted3(void* self, const char* hostName, unsigned short port, void* sslConfiguration);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHost)
///
/// @param self QNetworkAccessManager*
/// @param hostName const char*
/// @param port unsigned short
///
void q_networkaccessmanager_connect_to_host2(void* self, const char* hostName, unsigned short port);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QNetworkAccessManager*
///
const char* q_networkaccessmanager_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QNetworkAccessManager*
/// @param name char*
///
void q_networkaccessmanager_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QNetworkAccessManager*
///
bool q_networkaccessmanager_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QNetworkAccessManager*
///
bool q_networkaccessmanager_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QNetworkAccessManager*
///
bool q_networkaccessmanager_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QNetworkAccessManager*
///
bool q_networkaccessmanager_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QNetworkAccessManager*
/// @param b bool
///
bool q_networkaccessmanager_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QNetworkAccessManager*
///
QThread* q_networkaccessmanager_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QNetworkAccessManager*
/// @param thread QThread*
///
bool q_networkaccessmanager_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QNetworkAccessManager*
/// @param interval int
///
int32_t q_networkaccessmanager_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QNetworkAccessManager*
/// @param id int
///
void q_networkaccessmanager_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QNetworkAccessManager*
/// @param id enum Qt__TimerId
///
void q_networkaccessmanager_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QNetworkAccessManager*
///
libqt_list /* of QObject* */ q_networkaccessmanager_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QNetworkAccessManager*
/// @param parent QObject*
///
void q_networkaccessmanager_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QNetworkAccessManager*
/// @param filterObj QObject*
///
void q_networkaccessmanager_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QNetworkAccessManager*
/// @param obj QObject*
///
void q_networkaccessmanager_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_networkaccessmanager_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QNetworkAccessManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_networkaccessmanager_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_networkaccessmanager_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_networkaccessmanager_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QNetworkAccessManager*
///
void q_networkaccessmanager_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QNetworkAccessManager*
///
void q_networkaccessmanager_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QNetworkAccessManager*
/// @param name const char*
/// @param value QVariant*
///
bool q_networkaccessmanager_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QNetworkAccessManager*
/// @param name const char*
///
QVariant* q_networkaccessmanager_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QNetworkAccessManager*
///
const char** q_networkaccessmanager_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QNetworkAccessManager*
///
QBindingStorage* q_networkaccessmanager_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QNetworkAccessManager*
///
const QBindingStorage* q_networkaccessmanager_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QNetworkAccessManager*
///
void q_networkaccessmanager_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QNetworkAccessManager*
/// @param callback void func(QNetworkAccessManager* self)
///
void q_networkaccessmanager_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QNetworkAccessManager*
///
QObject* q_networkaccessmanager_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QNetworkAccessManager*
/// @param classname const char*
///
bool q_networkaccessmanager_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QNetworkAccessManager*
///
void q_networkaccessmanager_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QNetworkAccessManager*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_networkaccessmanager_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QNetworkAccessManager*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_networkaccessmanager_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_networkaccessmanager_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QNetworkAccessManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_networkaccessmanager_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QNetworkAccessManager*
/// @param param1 QObject*
///
void q_networkaccessmanager_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QNetworkAccessManager*
/// @param callback void func(QNetworkAccessManager* self, QObject* param1)
///
void q_networkaccessmanager_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkAccessManager*
/// @param event QEvent*
///
bool q_networkaccessmanager_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkAccessManager*
/// @param event QEvent*
///
bool q_networkaccessmanager_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkAccessManager*
/// @param callback bool func(QNetworkAccessManager* self, QEvent* event)
///
void q_networkaccessmanager_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkAccessManager*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_networkaccessmanager_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkAccessManager*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_networkaccessmanager_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkAccessManager*
/// @param callback bool func(QNetworkAccessManager* self, QObject* watched, QEvent* event)
///
void q_networkaccessmanager_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkAccessManager*
/// @param event QTimerEvent*
///
void q_networkaccessmanager_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkAccessManager*
/// @param event QTimerEvent*
///
void q_networkaccessmanager_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkAccessManager*
/// @param callback void func(QNetworkAccessManager* self, QTimerEvent* event)
///
void q_networkaccessmanager_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkAccessManager*
/// @param event QChildEvent*
///
void q_networkaccessmanager_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkAccessManager*
/// @param event QChildEvent*
///
void q_networkaccessmanager_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkAccessManager*
/// @param callback void func(QNetworkAccessManager* self, QChildEvent* event)
///
void q_networkaccessmanager_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkAccessManager*
/// @param event QEvent*
///
void q_networkaccessmanager_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkAccessManager*
/// @param event QEvent*
///
void q_networkaccessmanager_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkAccessManager*
/// @param callback void func(QNetworkAccessManager* self, QEvent* event)
///
void q_networkaccessmanager_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkAccessManager*
/// @param signal QMetaMethod*
///
void q_networkaccessmanager_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkAccessManager*
/// @param signal QMetaMethod*
///
void q_networkaccessmanager_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkAccessManager*
/// @param callback void func(QNetworkAccessManager* self, QMetaMethod* signal)
///
void q_networkaccessmanager_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkAccessManager*
/// @param signal QMetaMethod*
///
void q_networkaccessmanager_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkAccessManager*
/// @param signal QMetaMethod*
///
void q_networkaccessmanager_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkAccessManager*
/// @param callback void func(QNetworkAccessManager* self, QMetaMethod* signal)
///
void q_networkaccessmanager_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkAccessManager*
///
QObject* q_networkaccessmanager_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkAccessManager*
///
QObject* q_networkaccessmanager_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkAccessManager*
/// @param callback QObject* func()
///
void q_networkaccessmanager_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkAccessManager*
///
int32_t q_networkaccessmanager_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkAccessManager*
///
int32_t q_networkaccessmanager_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkAccessManager*
/// @param callback int32_t func()
///
void q_networkaccessmanager_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkAccessManager*
/// @param signal const char*
///
int32_t q_networkaccessmanager_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkAccessManager*
/// @param signal const char*
///
int32_t q_networkaccessmanager_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkAccessManager*
/// @param callback int32_t func(QNetworkAccessManager* self, const char* signal)
///
void q_networkaccessmanager_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QNetworkAccessManager*
/// @param signal QMetaMethod*
///
bool q_networkaccessmanager_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QNetworkAccessManager*
/// @param signal QMetaMethod*
///
bool q_networkaccessmanager_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QNetworkAccessManager*
/// @param callback bool func(QNetworkAccessManager* self, QMetaMethod* signal)
///
void q_networkaccessmanager_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QNetworkAccessManager*
/// @param callback void func(QNetworkAccessManager* self, const char* objectName)
///
void q_networkaccessmanager_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#dtor.QNetworkAccessManager)
///
/// Delete this object from C++ memory.
///
/// @param self QNetworkAccessManager*
///
void q_networkaccessmanager_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#public-types)

typedef enum {
    QNETWORKACCESSMANAGER_OPERATION_HEADOPERATION = 1,
    QNETWORKACCESSMANAGER_OPERATION_GETOPERATION = 2,
    QNETWORKACCESSMANAGER_OPERATION_PUTOPERATION = 3,
    QNETWORKACCESSMANAGER_OPERATION_POSTOPERATION = 4,
    QNETWORKACCESSMANAGER_OPERATION_DELETEOPERATION = 5,
    QNETWORKACCESSMANAGER_OPERATION_CUSTOMOPERATION = 6,
    QNETWORKACCESSMANAGER_OPERATION_UNKNOWNOPERATION = 0
} QNetworkAccessManager__Operation;

#endif
