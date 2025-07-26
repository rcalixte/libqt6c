#pragma once
#ifndef SRC_NETWORKQT6C_LIBQNETWORKACCESSMANAGER_H
#define SRC_NETWORKQT6C_LIBQNETWORKACCESSMANAGER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qnetworkaccessmanager.html

/// q_networkaccessmanager_new constructs a new QNetworkAccessManager object.
///
///
QNetworkAccessManager* q_networkaccessmanager_new();

/// q_networkaccessmanager_new2 constructs a new QNetworkAccessManager object.
///
/// ``` QObject* parent ```
QNetworkAccessManager* q_networkaccessmanager_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QNetworkAccessManager* self ```
const QMetaObject* q_networkaccessmanager_meta_object(void* self);

/// ``` QNetworkAccessManager* self, const char* param1 ```
void* q_networkaccessmanager_metacast(void* self, const char* param1);

/// ``` QNetworkAccessManager* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_networkaccessmanager_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QNetworkAccessManager* self, int32_t (*slot)(QNetworkAccessManager*, enum QMetaObject__Call, int, void*) ```
void q_networkaccessmanager_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QNetworkAccessManager* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_networkaccessmanager_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_networkaccessmanager_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemes)
///
/// ``` QNetworkAccessManager* self ```
const char** q_networkaccessmanager_supported_schemes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemes)
///
/// Allows for overriding the related default method
///
/// ``` QNetworkAccessManager* self, const char** (*slot)() ```
void q_networkaccessmanager_on_supported_schemes(void* self, const char** (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemes)
///
/// Base class method implementation
///
/// ``` QNetworkAccessManager* self ```
const char** q_networkaccessmanager_qbase_supported_schemes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#clearAccessCache)
///
/// ``` QNetworkAccessManager* self ```
void q_networkaccessmanager_clear_access_cache(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#clearConnectionCache)
///
/// ``` QNetworkAccessManager* self ```
void q_networkaccessmanager_clear_connection_cache(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#proxy)
///
/// ``` QNetworkAccessManager* self ```
QNetworkProxy* q_networkaccessmanager_proxy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setProxy)
///
/// ``` QNetworkAccessManager* self, QNetworkProxy* proxy ```
void q_networkaccessmanager_set_proxy(void* self, void* proxy);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#proxyFactory)
///
/// ``` QNetworkAccessManager* self ```
QNetworkProxyFactory* q_networkaccessmanager_proxy_factory(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setProxyFactory)
///
/// ``` QNetworkAccessManager* self, QNetworkProxyFactory* factory ```
void q_networkaccessmanager_set_proxy_factory(void* self, void* factory);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#cache)
///
/// ``` QNetworkAccessManager* self ```
QAbstractNetworkCache* q_networkaccessmanager_cache(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setCache)
///
/// ``` QNetworkAccessManager* self, QAbstractNetworkCache* cache ```
void q_networkaccessmanager_set_cache(void* self, void* cache);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#cookieJar)
///
/// ``` QNetworkAccessManager* self ```
QNetworkCookieJar* q_networkaccessmanager_cookie_jar(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setCookieJar)
///
/// ``` QNetworkAccessManager* self, QNetworkCookieJar* cookieJar ```
void q_networkaccessmanager_set_cookie_jar(void* self, void* cookieJar);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setStrictTransportSecurityEnabled)
///
/// ``` QNetworkAccessManager* self, bool enabled ```
void q_networkaccessmanager_set_strict_transport_security_enabled(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#isStrictTransportSecurityEnabled)
///
/// ``` QNetworkAccessManager* self ```
bool q_networkaccessmanager_is_strict_transport_security_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#enableStrictTransportSecurityStore)
///
/// ``` QNetworkAccessManager* self, bool enabled ```
void q_networkaccessmanager_enable_strict_transport_security_store(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#isStrictTransportSecurityStoreEnabled)
///
/// ``` QNetworkAccessManager* self ```
bool q_networkaccessmanager_is_strict_transport_security_store_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#addStrictTransportSecurityHosts)
///
/// ``` QNetworkAccessManager* self, libqt_list /* of QHstsPolicy* */ knownHosts ```
void q_networkaccessmanager_add_strict_transport_security_hosts(void* self, libqt_list knownHosts);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#strictTransportSecurityHosts)
///
/// ``` QNetworkAccessManager* self ```
libqt_list /* of QHstsPolicy* */ q_networkaccessmanager_strict_transport_security_hosts(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#head)
///
/// ``` QNetworkAccessManager* self, QNetworkRequest* request ```
QNetworkReply* q_networkaccessmanager_head(void* self, void* request);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#get)
///
/// ``` QNetworkAccessManager* self, QNetworkRequest* request ```
QNetworkReply* q_networkaccessmanager_get(void* self, void* request);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#get)
///
/// ``` QNetworkAccessManager* self, QNetworkRequest* request, QIODevice* data ```
QNetworkReply* q_networkaccessmanager_get2(void* self, void* request, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#get)
///
/// ``` QNetworkAccessManager* self, QNetworkRequest* request, const char* data ```
QNetworkReply* q_networkaccessmanager_get3(void* self, void* request, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#post)
///
/// ``` QNetworkAccessManager* self, QNetworkRequest* request, QIODevice* data ```
QNetworkReply* q_networkaccessmanager_post(void* self, void* request, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#post)
///
/// ``` QNetworkAccessManager* self, QNetworkRequest* request, const char* data ```
QNetworkReply* q_networkaccessmanager_post2(void* self, void* request, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#put)
///
/// ``` QNetworkAccessManager* self, QNetworkRequest* request, QIODevice* data ```
QNetworkReply* q_networkaccessmanager_put(void* self, void* request, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#put)
///
/// ``` QNetworkAccessManager* self, QNetworkRequest* request, const char* data ```
QNetworkReply* q_networkaccessmanager_put2(void* self, void* request, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#deleteResource)
///
/// ``` QNetworkAccessManager* self, QNetworkRequest* request ```
QNetworkReply* q_networkaccessmanager_delete_resource(void* self, void* request);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sendCustomRequest)
///
/// ``` QNetworkAccessManager* self, QNetworkRequest* request, const char* verb ```
QNetworkReply* q_networkaccessmanager_send_custom_request(void* self, void* request, const char* verb);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sendCustomRequest)
///
/// ``` QNetworkAccessManager* self, QNetworkRequest* request, const char* verb, const char* data ```
QNetworkReply* q_networkaccessmanager_send_custom_request2(void* self, void* request, const char* verb, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#post)
///
/// ``` QNetworkAccessManager* self, QNetworkRequest* request, QHttpMultiPart* multiPart ```
QNetworkReply* q_networkaccessmanager_post4(void* self, void* request, void* multiPart);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#put)
///
/// ``` QNetworkAccessManager* self, QNetworkRequest* request, QHttpMultiPart* multiPart ```
QNetworkReply* q_networkaccessmanager_put4(void* self, void* request, void* multiPart);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sendCustomRequest)
///
/// ``` QNetworkAccessManager* self, QNetworkRequest* request, const char* verb, QHttpMultiPart* multiPart ```
QNetworkReply* q_networkaccessmanager_send_custom_request3(void* self, void* request, const char* verb, void* multiPart);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHostEncrypted)
///
/// ``` QNetworkAccessManager* self, const char* hostName ```
void q_networkaccessmanager_connect_to_host_encrypted(void* self, const char* hostName);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHostEncrypted)
///
/// ``` QNetworkAccessManager* self, const char* hostName, unsigned short port, QSslConfiguration* sslConfiguration, const char* peerName ```
void q_networkaccessmanager_connect_to_host_encrypted2(void* self, const char* hostName, unsigned short port, void* sslConfiguration, const char* peerName);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHost)
///
/// ``` QNetworkAccessManager* self, const char* hostName ```
void q_networkaccessmanager_connect_to_host(void* self, const char* hostName);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setRedirectPolicy)
///
/// ``` QNetworkAccessManager* self, enum QNetworkRequest__RedirectPolicy policy ```
void q_networkaccessmanager_set_redirect_policy(void* self, int64_t policy);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#redirectPolicy)
///
/// ``` QNetworkAccessManager* self ```
int64_t q_networkaccessmanager_redirect_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#autoDeleteReplies)
///
/// ``` QNetworkAccessManager* self ```
bool q_networkaccessmanager_auto_delete_replies(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setAutoDeleteReplies)
///
/// ``` QNetworkAccessManager* self, bool autoDelete ```
void q_networkaccessmanager_set_auto_delete_replies(void* self, bool autoDelete);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#transferTimeout)
///
/// ``` QNetworkAccessManager* self ```
int32_t q_networkaccessmanager_transfer_timeout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setTransferTimeout)
///
/// ``` QNetworkAccessManager* self, int timeout ```
void q_networkaccessmanager_set_transfer_timeout(void* self, int timeout);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setTransferTimeout)
///
/// ``` QNetworkAccessManager* self ```
void q_networkaccessmanager_set_transfer_timeout2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#proxyAuthenticationRequired)
///
/// ``` QNetworkAccessManager* self, QNetworkProxy* proxy, QAuthenticator* authenticator ```
void q_networkaccessmanager_proxy_authentication_required(void* self, void* proxy, void* authenticator);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#proxyAuthenticationRequired)
///
/// ``` QNetworkAccessManager* self, void (*slot)(QNetworkAccessManager*, QNetworkProxy*, QAuthenticator*) ```
void q_networkaccessmanager_on_proxy_authentication_required(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#authenticationRequired)
///
/// ``` QNetworkAccessManager* self, QNetworkReply* reply, QAuthenticator* authenticator ```
void q_networkaccessmanager_authentication_required(void* self, void* reply, void* authenticator);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#authenticationRequired)
///
/// ``` QNetworkAccessManager* self, void (*slot)(QNetworkAccessManager*, QNetworkReply*, QAuthenticator*) ```
void q_networkaccessmanager_on_authentication_required(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#finished)
///
/// ``` QNetworkAccessManager* self, QNetworkReply* reply ```
void q_networkaccessmanager_finished(void* self, void* reply);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#finished)
///
/// ``` QNetworkAccessManager* self, void (*slot)(QNetworkAccessManager*, QNetworkReply*) ```
void q_networkaccessmanager_on_finished(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#encrypted)
///
/// ``` QNetworkAccessManager* self, QNetworkReply* reply ```
void q_networkaccessmanager_encrypted(void* self, void* reply);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#encrypted)
///
/// ``` QNetworkAccessManager* self, void (*slot)(QNetworkAccessManager*, QNetworkReply*) ```
void q_networkaccessmanager_on_encrypted(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sslErrors)
///
/// ``` QNetworkAccessManager* self, QNetworkReply* reply, libqt_list /* of QSslError* */ errors ```
void q_networkaccessmanager_ssl_errors(void* self, void* reply, libqt_list errors);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sslErrors)
///
/// ``` QNetworkAccessManager* self, void (*slot)(QNetworkAccessManager*, QNetworkReply*, libqt_list /* of QSslError* */ errors ) ```
void q_networkaccessmanager_on_ssl_errors(void* self, void (*slot)(void*, void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#preSharedKeyAuthenticationRequired)
///
/// ``` QNetworkAccessManager* self, QNetworkReply* reply, QSslPreSharedKeyAuthenticator* authenticator ```
void q_networkaccessmanager_pre_shared_key_authentication_required(void* self, void* reply, void* authenticator);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#preSharedKeyAuthenticationRequired)
///
/// ``` QNetworkAccessManager* self, void (*slot)(QNetworkAccessManager*, QNetworkReply*, QSslPreSharedKeyAuthenticator*) ```
void q_networkaccessmanager_on_pre_shared_key_authentication_required(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#createRequest)
///
/// ``` QNetworkAccessManager* self, enum QNetworkAccessManager__Operation op, QNetworkRequest* request, QIODevice* outgoingData ```
QNetworkReply* q_networkaccessmanager_create_request(void* self, int64_t op, void* request, void* outgoingData);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#createRequest)
///
/// Allows for overriding the related default method
///
/// ``` QNetworkAccessManager* self, QNetworkReply* (*slot)(QNetworkAccessManager*, enum QNetworkAccessManager__Operation, QNetworkRequest*, QIODevice*) ```
void q_networkaccessmanager_on_create_request(void* self, QNetworkReply* (*slot)(void*, int64_t, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#createRequest)
///
/// Base class method implementation
///
/// ``` QNetworkAccessManager* self, enum QNetworkAccessManager__Operation op, QNetworkRequest* request, QIODevice* outgoingData ```
QNetworkReply* q_networkaccessmanager_qbase_create_request(void* self, int64_t op, void* request, void* outgoingData);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemesImplementation)
///
/// ``` QNetworkAccessManager* self ```
const char** q_networkaccessmanager_supported_schemes_implementation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemesImplementation)
///
/// Allows for overriding the related default method
///
/// ``` QNetworkAccessManager* self, const char** (*slot)() ```
void q_networkaccessmanager_on_supported_schemes_implementation(void* self, const char** (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemesImplementation)
///
/// Base class method implementation
///
/// ``` QNetworkAccessManager* self ```
const char** q_networkaccessmanager_qbase_supported_schemes_implementation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_networkaccessmanager_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_networkaccessmanager_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#enableStrictTransportSecurityStore)
///
/// ``` QNetworkAccessManager* self, bool enabled, const char* storeDir ```
void q_networkaccessmanager_enable_strict_transport_security_store2(void* self, bool enabled, const char* storeDir);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sendCustomRequest)
///
/// ``` QNetworkAccessManager* self, QNetworkRequest* request, const char* verb, QIODevice* data ```
QNetworkReply* q_networkaccessmanager_send_custom_request32(void* self, void* request, const char* verb, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHostEncrypted)
///
/// ``` QNetworkAccessManager* self, const char* hostName, unsigned short port ```
void q_networkaccessmanager_connect_to_host_encrypted22(void* self, const char* hostName, unsigned short port);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHostEncrypted)
///
/// ``` QNetworkAccessManager* self, const char* hostName, unsigned short port, QSslConfiguration* sslConfiguration ```
void q_networkaccessmanager_connect_to_host_encrypted3(void* self, const char* hostName, unsigned short port, void* sslConfiguration);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHost)
///
/// ``` QNetworkAccessManager* self, const char* hostName, unsigned short port ```
void q_networkaccessmanager_connect_to_host2(void* self, const char* hostName, unsigned short port);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QNetworkAccessManager* self ```
const char* q_networkaccessmanager_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QNetworkAccessManager* self, char* name ```
void q_networkaccessmanager_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QNetworkAccessManager* self ```
bool q_networkaccessmanager_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QNetworkAccessManager* self ```
bool q_networkaccessmanager_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QNetworkAccessManager* self ```
bool q_networkaccessmanager_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QNetworkAccessManager* self ```
bool q_networkaccessmanager_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QNetworkAccessManager* self, bool b ```
bool q_networkaccessmanager_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QNetworkAccessManager* self ```
QThread* q_networkaccessmanager_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QNetworkAccessManager* self, QThread* thread ```
bool q_networkaccessmanager_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QNetworkAccessManager* self, int interval ```
int32_t q_networkaccessmanager_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QNetworkAccessManager* self, int id ```
void q_networkaccessmanager_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QNetworkAccessManager* self, enum Qt__TimerId id ```
void q_networkaccessmanager_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QNetworkAccessManager* self ```
libqt_list /* of QObject* */ q_networkaccessmanager_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QNetworkAccessManager* self, QObject* parent ```
void q_networkaccessmanager_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QNetworkAccessManager* self, QObject* filterObj ```
void q_networkaccessmanager_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QNetworkAccessManager* self, QObject* obj ```
void q_networkaccessmanager_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_networkaccessmanager_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QNetworkAccessManager* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_networkaccessmanager_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_networkaccessmanager_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_networkaccessmanager_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QNetworkAccessManager* self ```
void q_networkaccessmanager_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QNetworkAccessManager* self ```
void q_networkaccessmanager_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QNetworkAccessManager* self, const char* name, QVariant* value ```
bool q_networkaccessmanager_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QNetworkAccessManager* self, const char* name ```
QVariant* q_networkaccessmanager_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QNetworkAccessManager* self ```
const char** q_networkaccessmanager_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QNetworkAccessManager* self ```
QBindingStorage* q_networkaccessmanager_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QNetworkAccessManager* self ```
const QBindingStorage* q_networkaccessmanager_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QNetworkAccessManager* self ```
void q_networkaccessmanager_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QNetworkAccessManager* self, void (*slot)(QNetworkAccessManager*) ```
void q_networkaccessmanager_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QNetworkAccessManager* self ```
QObject* q_networkaccessmanager_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QNetworkAccessManager* self, const char* classname ```
bool q_networkaccessmanager_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QNetworkAccessManager* self ```
void q_networkaccessmanager_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QNetworkAccessManager* self, QThread* thread, Disambiguated_t* param2 ```
bool q_networkaccessmanager_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QNetworkAccessManager* self, int interval, enum Qt__TimerType timerType ```
int32_t q_networkaccessmanager_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_networkaccessmanager_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QNetworkAccessManager* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_networkaccessmanager_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QNetworkAccessManager* self, QObject* param1 ```
void q_networkaccessmanager_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QNetworkAccessManager* self, void (*slot)(QNetworkAccessManager*, QObject*) ```
void q_networkaccessmanager_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkAccessManager* self, QEvent* event ```
bool q_networkaccessmanager_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, QEvent* event ```
bool q_networkaccessmanager_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, bool (*slot)(QNetworkAccessManager*, QEvent*) ```
void q_networkaccessmanager_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkAccessManager* self, QObject* watched, QEvent* event ```
bool q_networkaccessmanager_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, QObject* watched, QEvent* event ```
bool q_networkaccessmanager_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, bool (*slot)(QNetworkAccessManager*, QObject*, QEvent*) ```
void q_networkaccessmanager_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkAccessManager* self, QTimerEvent* event ```
void q_networkaccessmanager_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, QTimerEvent* event ```
void q_networkaccessmanager_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, void (*slot)(QNetworkAccessManager*, QTimerEvent*) ```
void q_networkaccessmanager_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkAccessManager* self, QChildEvent* event ```
void q_networkaccessmanager_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, QChildEvent* event ```
void q_networkaccessmanager_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, void (*slot)(QNetworkAccessManager*, QChildEvent*) ```
void q_networkaccessmanager_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkAccessManager* self, QEvent* event ```
void q_networkaccessmanager_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, QEvent* event ```
void q_networkaccessmanager_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, void (*slot)(QNetworkAccessManager*, QEvent*) ```
void q_networkaccessmanager_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkAccessManager* self, QMetaMethod* signal ```
void q_networkaccessmanager_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, QMetaMethod* signal ```
void q_networkaccessmanager_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, void (*slot)(QNetworkAccessManager*, QMetaMethod*) ```
void q_networkaccessmanager_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkAccessManager* self, QMetaMethod* signal ```
void q_networkaccessmanager_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, QMetaMethod* signal ```
void q_networkaccessmanager_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, void (*slot)(QNetworkAccessManager*, QMetaMethod*) ```
void q_networkaccessmanager_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkAccessManager* self ```
QObject* q_networkaccessmanager_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkAccessManager* self ```
QObject* q_networkaccessmanager_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, QObject* (*slot)() ```
void q_networkaccessmanager_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkAccessManager* self ```
int32_t q_networkaccessmanager_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkAccessManager* self ```
int32_t q_networkaccessmanager_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, int32_t (*slot)() ```
void q_networkaccessmanager_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkAccessManager* self, const char* signal ```
int32_t q_networkaccessmanager_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, const char* signal ```
int32_t q_networkaccessmanager_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, int32_t (*slot)(QNetworkAccessManager*, const char*) ```
void q_networkaccessmanager_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkAccessManager* self, QMetaMethod* signal ```
bool q_networkaccessmanager_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, QMetaMethod* signal ```
bool q_networkaccessmanager_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, bool (*slot)(QNetworkAccessManager*, QMetaMethod*) ```
void q_networkaccessmanager_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QNetworkAccessManager* self, void (*slot)(QNetworkAccessManager*, const char*) ```
void q_networkaccessmanager_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#dtor.QNetworkAccessManager)
///
/// Delete this object from C++ memory.
///
/// ``` QNetworkAccessManager* self ```
void q_networkaccessmanager_delete(void* self);

/// https://doc.qt.io/qt-6/qnetworkaccessmanager.html#types

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
