#include "libqabstractnetworkcache.hpp"
#include "../libqanystringview.hpp"
#include "libqauthenticator.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "libqhstspolicy.hpp"
#include "libqhttpmultipart.hpp"
#include "../libqiodevice.hpp"
#include "../libqmetaobject.hpp"
#include "libqnetworkcookiejar.hpp"
#include "libqnetworkproxy.hpp"
#include "libqnetworkreply.hpp"
#include "libqnetworkrequest.hpp"
#include "../libqobject.hpp"
#include "libqsslconfiguration.hpp"
#include "libqsslerror.hpp"
#include "libqsslpresharedkeyauthenticator.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqnetworkaccessmanager.hpp"
#include "libqnetworkaccessmanager.h"

/// https://doc.qt.io/qt-6/qnetworkaccessmanager.html

/// q_networkaccessmanager_new constructs a new QNetworkAccessManager object.
///
///
QNetworkAccessManager* q_networkaccessmanager_new() {
    return QNetworkAccessManager_new();
}

/// q_networkaccessmanager_new2 constructs a new QNetworkAccessManager object.
///
/// ``` QObject* parent ```
QNetworkAccessManager* q_networkaccessmanager_new2(void* parent) {
    return QNetworkAccessManager_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QNetworkAccessManager* self ```
QMetaObject* q_networkaccessmanager_meta_object(void* self) {
    return QNetworkAccessManager_MetaObject((QNetworkAccessManager*)self);
}

/// ``` QNetworkAccessManager* self, const char* param1 ```
void* q_networkaccessmanager_metacast(void* self, const char* param1) {
    return QNetworkAccessManager_Metacast((QNetworkAccessManager*)self, param1);
}

/// ``` QNetworkAccessManager* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_networkaccessmanager_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QNetworkAccessManager_Metacall((QNetworkAccessManager*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QNetworkAccessManager* self, int32_t (*slot)(QNetworkAccessManager*, enum QMetaObject__Call, int, void*) ```
void q_networkaccessmanager_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QNetworkAccessManager_OnMetacall((QNetworkAccessManager*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QNetworkAccessManager* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_networkaccessmanager_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QNetworkAccessManager_QBaseMetacall((QNetworkAccessManager*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_networkaccessmanager_tr(const char* s) {
    libqt_string _str = QNetworkAccessManager_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemes)
///
/// ``` QNetworkAccessManager* self ```
const char** q_networkaccessmanager_supported_schemes(void* self) {
    libqt_list _arr = QNetworkAccessManager_SupportedSchemes((QNetworkAccessManager*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Allows for overriding the related default method
///
/// ``` QNetworkAccessManager* self, const char** (*slot)() ```
void q_networkaccessmanager_on_supported_schemes(void* self, const char** (*slot)()) {
    QNetworkAccessManager_OnSupportedSchemes((QNetworkAccessManager*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QNetworkAccessManager* self ```
const char** q_networkaccessmanager_qbase_supported_schemes(void* self) {
    libqt_list _arr = QNetworkAccessManager_QBaseSupportedSchemes((QNetworkAccessManager*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#clearAccessCache)
///
/// ``` QNetworkAccessManager* self ```
void q_networkaccessmanager_clear_access_cache(void* self) {
    QNetworkAccessManager_ClearAccessCache((QNetworkAccessManager*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#clearConnectionCache)
///
/// ``` QNetworkAccessManager* self ```
void q_networkaccessmanager_clear_connection_cache(void* self) {
    QNetworkAccessManager_ClearConnectionCache((QNetworkAccessManager*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#proxy)
///
/// ``` QNetworkAccessManager* self ```
QNetworkProxy* q_networkaccessmanager_proxy(void* self) {
    return QNetworkAccessManager_Proxy((QNetworkAccessManager*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setProxy)
///
/// ``` QNetworkAccessManager* self, QNetworkProxy* proxy ```
void q_networkaccessmanager_set_proxy(void* self, void* proxy) {
    QNetworkAccessManager_SetProxy((QNetworkAccessManager*)self, (QNetworkProxy*)proxy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#proxyFactory)
///
/// ``` QNetworkAccessManager* self ```
QNetworkProxyFactory* q_networkaccessmanager_proxy_factory(void* self) {
    return QNetworkAccessManager_ProxyFactory((QNetworkAccessManager*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setProxyFactory)
///
/// ``` QNetworkAccessManager* self, QNetworkProxyFactory* factory ```
void q_networkaccessmanager_set_proxy_factory(void* self, void* factory) {
    QNetworkAccessManager_SetProxyFactory((QNetworkAccessManager*)self, (QNetworkProxyFactory*)factory);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#cache)
///
/// ``` QNetworkAccessManager* self ```
QAbstractNetworkCache* q_networkaccessmanager_cache(void* self) {
    return QNetworkAccessManager_Cache((QNetworkAccessManager*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setCache)
///
/// ``` QNetworkAccessManager* self, QAbstractNetworkCache* cache ```
void q_networkaccessmanager_set_cache(void* self, void* cache) {
    QNetworkAccessManager_SetCache((QNetworkAccessManager*)self, (QAbstractNetworkCache*)cache);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#cookieJar)
///
/// ``` QNetworkAccessManager* self ```
QNetworkCookieJar* q_networkaccessmanager_cookie_jar(void* self) {
    return QNetworkAccessManager_CookieJar((QNetworkAccessManager*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setCookieJar)
///
/// ``` QNetworkAccessManager* self, QNetworkCookieJar* cookieJar ```
void q_networkaccessmanager_set_cookie_jar(void* self, void* cookieJar) {
    QNetworkAccessManager_SetCookieJar((QNetworkAccessManager*)self, (QNetworkCookieJar*)cookieJar);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setStrictTransportSecurityEnabled)
///
/// ``` QNetworkAccessManager* self, bool enabled ```
void q_networkaccessmanager_set_strict_transport_security_enabled(void* self, bool enabled) {
    QNetworkAccessManager_SetStrictTransportSecurityEnabled((QNetworkAccessManager*)self, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#isStrictTransportSecurityEnabled)
///
/// ``` QNetworkAccessManager* self ```
bool q_networkaccessmanager_is_strict_transport_security_enabled(void* self) {
    return QNetworkAccessManager_IsStrictTransportSecurityEnabled((QNetworkAccessManager*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#enableStrictTransportSecurityStore)
///
/// ``` QNetworkAccessManager* self, bool enabled ```
void q_networkaccessmanager_enable_strict_transport_security_store(void* self, bool enabled) {
    QNetworkAccessManager_EnableStrictTransportSecurityStore((QNetworkAccessManager*)self, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#isStrictTransportSecurityStoreEnabled)
///
/// ``` QNetworkAccessManager* self ```
bool q_networkaccessmanager_is_strict_transport_security_store_enabled(void* self) {
    return QNetworkAccessManager_IsStrictTransportSecurityStoreEnabled((QNetworkAccessManager*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#addStrictTransportSecurityHosts)
///
/// ``` QNetworkAccessManager* self, QHstsPolicy* knownHosts[] ```
void q_networkaccessmanager_add_strict_transport_security_hosts(void* self, void* knownHosts[]) {
    QHstsPolicy** knownHosts_arr = (QHstsPolicy**)knownHosts;
    size_t knownHosts_len = 0;
    while (knownHosts_arr[knownHosts_len] != NULL) {
        knownHosts_len++;
    }
    libqt_list knownHosts_list = {
        .len = knownHosts_len,
        .data = {(QHstsPolicy*)knownHosts},
    };
    QNetworkAccessManager_AddStrictTransportSecurityHosts((QNetworkAccessManager*)self, knownHosts_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#strictTransportSecurityHosts)
///
/// ``` QNetworkAccessManager* self ```
libqt_list /* of QHstsPolicy* */ q_networkaccessmanager_strict_transport_security_hosts(void* self) {
    libqt_list _arr = QNetworkAccessManager_StrictTransportSecurityHosts((QNetworkAccessManager*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#head)
///
/// ``` QNetworkAccessManager* self, QNetworkRequest* request ```
QNetworkReply* q_networkaccessmanager_head(void* self, void* request) {
    return QNetworkAccessManager_Head((QNetworkAccessManager*)self, (QNetworkRequest*)request);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#get)
///
/// ``` QNetworkAccessManager* self, QNetworkRequest* request ```
QNetworkReply* q_networkaccessmanager_get(void* self, void* request) {
    return QNetworkAccessManager_Get((QNetworkAccessManager*)self, (QNetworkRequest*)request);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#post)
///
/// ``` QNetworkAccessManager* self, QNetworkRequest* request, QIODevice* data ```
QNetworkReply* q_networkaccessmanager_post(void* self, void* request, void* data) {
    return QNetworkAccessManager_Post((QNetworkAccessManager*)self, (QNetworkRequest*)request, (QIODevice*)data);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#post)
///
/// ``` QNetworkAccessManager* self, QNetworkRequest* request, const char* data ```
QNetworkReply* q_networkaccessmanager_post2(void* self, void* request, const char* data) {
    return QNetworkAccessManager_Post2((QNetworkAccessManager*)self, (QNetworkRequest*)request, qstring(data));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#put)
///
/// ``` QNetworkAccessManager* self, QNetworkRequest* request, QIODevice* data ```
QNetworkReply* q_networkaccessmanager_put(void* self, void* request, void* data) {
    return QNetworkAccessManager_Put((QNetworkAccessManager*)self, (QNetworkRequest*)request, (QIODevice*)data);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#put)
///
/// ``` QNetworkAccessManager* self, QNetworkRequest* request, const char* data ```
QNetworkReply* q_networkaccessmanager_put2(void* self, void* request, const char* data) {
    return QNetworkAccessManager_Put2((QNetworkAccessManager*)self, (QNetworkRequest*)request, qstring(data));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#deleteResource)
///
/// ``` QNetworkAccessManager* self, QNetworkRequest* request ```
QNetworkReply* q_networkaccessmanager_delete_resource(void* self, void* request) {
    return QNetworkAccessManager_DeleteResource((QNetworkAccessManager*)self, (QNetworkRequest*)request);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sendCustomRequest)
///
/// ``` QNetworkAccessManager* self, QNetworkRequest* request, const char* verb ```
QNetworkReply* q_networkaccessmanager_send_custom_request(void* self, void* request, const char* verb) {
    return QNetworkAccessManager_SendCustomRequest((QNetworkAccessManager*)self, (QNetworkRequest*)request, qstring(verb));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sendCustomRequest)
///
/// ``` QNetworkAccessManager* self, QNetworkRequest* request, const char* verb, const char* data ```
QNetworkReply* q_networkaccessmanager_send_custom_request2(void* self, void* request, const char* verb, const char* data) {
    return QNetworkAccessManager_SendCustomRequest2((QNetworkAccessManager*)self, (QNetworkRequest*)request, qstring(verb), qstring(data));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#post)
///
/// ``` QNetworkAccessManager* self, QNetworkRequest* request, QHttpMultiPart* multiPart ```
QNetworkReply* q_networkaccessmanager_post3(void* self, void* request, void* multiPart) {
    return QNetworkAccessManager_Post3((QNetworkAccessManager*)self, (QNetworkRequest*)request, (QHttpMultiPart*)multiPart);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#put)
///
/// ``` QNetworkAccessManager* self, QNetworkRequest* request, QHttpMultiPart* multiPart ```
QNetworkReply* q_networkaccessmanager_put3(void* self, void* request, void* multiPart) {
    return QNetworkAccessManager_Put3((QNetworkAccessManager*)self, (QNetworkRequest*)request, (QHttpMultiPart*)multiPart);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sendCustomRequest)
///
/// ``` QNetworkAccessManager* self, QNetworkRequest* request, const char* verb, QHttpMultiPart* multiPart ```
QNetworkReply* q_networkaccessmanager_send_custom_request3(void* self, void* request, const char* verb, void* multiPart) {
    return QNetworkAccessManager_SendCustomRequest3((QNetworkAccessManager*)self, (QNetworkRequest*)request, qstring(verb), (QHttpMultiPart*)multiPart);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHostEncrypted)
///
/// ``` QNetworkAccessManager* self, const char* hostName ```
void q_networkaccessmanager_connect_to_host_encrypted(void* self, const char* hostName) {
    QNetworkAccessManager_ConnectToHostEncrypted((QNetworkAccessManager*)self, qstring(hostName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHostEncrypted)
///
/// ``` QNetworkAccessManager* self, const char* hostName, unsigned short port, QSslConfiguration* sslConfiguration, const char* peerName ```
void q_networkaccessmanager_connect_to_host_encrypted2(void* self, const char* hostName, unsigned short port, void* sslConfiguration, const char* peerName) {
    QNetworkAccessManager_ConnectToHostEncrypted2((QNetworkAccessManager*)self, qstring(hostName), port, (QSslConfiguration*)sslConfiguration, qstring(peerName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHost)
///
/// ``` QNetworkAccessManager* self, const char* hostName ```
void q_networkaccessmanager_connect_to_host(void* self, const char* hostName) {
    QNetworkAccessManager_ConnectToHost((QNetworkAccessManager*)self, qstring(hostName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setRedirectPolicy)
///
/// ``` QNetworkAccessManager* self, enum QNetworkRequest__RedirectPolicy policy ```
void q_networkaccessmanager_set_redirect_policy(void* self, int64_t policy) {
    QNetworkAccessManager_SetRedirectPolicy((QNetworkAccessManager*)self, policy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#redirectPolicy)
///
/// ``` QNetworkAccessManager* self ```
int64_t q_networkaccessmanager_redirect_policy(void* self) {
    return QNetworkAccessManager_RedirectPolicy((QNetworkAccessManager*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#autoDeleteReplies)
///
/// ``` QNetworkAccessManager* self ```
bool q_networkaccessmanager_auto_delete_replies(void* self) {
    return QNetworkAccessManager_AutoDeleteReplies((QNetworkAccessManager*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setAutoDeleteReplies)
///
/// ``` QNetworkAccessManager* self, bool autoDelete ```
void q_networkaccessmanager_set_auto_delete_replies(void* self, bool autoDelete) {
    QNetworkAccessManager_SetAutoDeleteReplies((QNetworkAccessManager*)self, autoDelete);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#transferTimeout)
///
/// ``` QNetworkAccessManager* self ```
int32_t q_networkaccessmanager_transfer_timeout(void* self) {
    return QNetworkAccessManager_TransferTimeout((QNetworkAccessManager*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setTransferTimeout)
///
/// ``` QNetworkAccessManager* self ```
void q_networkaccessmanager_set_transfer_timeout(void* self) {
    QNetworkAccessManager_SetTransferTimeout((QNetworkAccessManager*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#proxyAuthenticationRequired)
///
/// ``` QNetworkAccessManager* self, QNetworkProxy* proxy, QAuthenticator* authenticator ```
void q_networkaccessmanager_proxy_authentication_required(void* self, void* proxy, void* authenticator) {
    QNetworkAccessManager_ProxyAuthenticationRequired((QNetworkAccessManager*)self, (QNetworkProxy*)proxy, (QAuthenticator*)authenticator);
}

/// ``` QNetworkAccessManager* self, void (*slot)(QNetworkAccessManager*, QNetworkProxy*, QAuthenticator*) ```
void q_networkaccessmanager_on_proxy_authentication_required(void* self, void (*slot)(void*, void*, void*)) {
    QNetworkAccessManager_Connect_ProxyAuthenticationRequired((QNetworkAccessManager*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#authenticationRequired)
///
/// ``` QNetworkAccessManager* self, QNetworkReply* reply, QAuthenticator* authenticator ```
void q_networkaccessmanager_authentication_required(void* self, void* reply, void* authenticator) {
    QNetworkAccessManager_AuthenticationRequired((QNetworkAccessManager*)self, (QNetworkReply*)reply, (QAuthenticator*)authenticator);
}

/// ``` QNetworkAccessManager* self, void (*slot)(QNetworkAccessManager*, QNetworkReply*, QAuthenticator*) ```
void q_networkaccessmanager_on_authentication_required(void* self, void (*slot)(void*, void*, void*)) {
    QNetworkAccessManager_Connect_AuthenticationRequired((QNetworkAccessManager*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#finished)
///
/// ``` QNetworkAccessManager* self, QNetworkReply* reply ```
void q_networkaccessmanager_finished(void* self, void* reply) {
    QNetworkAccessManager_Finished((QNetworkAccessManager*)self, (QNetworkReply*)reply);
}

/// ``` QNetworkAccessManager* self, void (*slot)(QNetworkAccessManager*, QNetworkReply*) ```
void q_networkaccessmanager_on_finished(void* self, void (*slot)(void*, void*)) {
    QNetworkAccessManager_Connect_Finished((QNetworkAccessManager*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#encrypted)
///
/// ``` QNetworkAccessManager* self, QNetworkReply* reply ```
void q_networkaccessmanager_encrypted(void* self, void* reply) {
    QNetworkAccessManager_Encrypted((QNetworkAccessManager*)self, (QNetworkReply*)reply);
}

/// ``` QNetworkAccessManager* self, void (*slot)(QNetworkAccessManager*, QNetworkReply*) ```
void q_networkaccessmanager_on_encrypted(void* self, void (*slot)(void*, void*)) {
    QNetworkAccessManager_Connect_Encrypted((QNetworkAccessManager*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sslErrors)
///
/// ``` QNetworkAccessManager* self, QNetworkReply* reply, QSslError* errors[] ```
void q_networkaccessmanager_ssl_errors(void* self, void* reply, void* errors[]) {
    QSslError** errors_arr = (QSslError**)errors;
    size_t errors_len = 0;
    while (errors_arr[errors_len] != NULL) {
        errors_len++;
    }
    libqt_list errors_list = {
        .len = errors_len,
        .data = {(QSslError*)errors},
    };
    QNetworkAccessManager_SslErrors((QNetworkAccessManager*)self, (QNetworkReply*)reply, errors_list);
}

/// ``` QNetworkAccessManager* self, void (*slot)(QNetworkAccessManager*, QNetworkReply*, QSslError*[]) ```
void q_networkaccessmanager_on_ssl_errors(void* self, void (*slot)(void*, void*, void*)) {
    QNetworkAccessManager_Connect_SslErrors((QNetworkAccessManager*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#preSharedKeyAuthenticationRequired)
///
/// ``` QNetworkAccessManager* self, QNetworkReply* reply, QSslPreSharedKeyAuthenticator* authenticator ```
void q_networkaccessmanager_pre_shared_key_authentication_required(void* self, void* reply, void* authenticator) {
    QNetworkAccessManager_PreSharedKeyAuthenticationRequired((QNetworkAccessManager*)self, (QNetworkReply*)reply, (QSslPreSharedKeyAuthenticator*)authenticator);
}

/// ``` QNetworkAccessManager* self, void (*slot)(QNetworkAccessManager*, QNetworkReply*, QSslPreSharedKeyAuthenticator*) ```
void q_networkaccessmanager_on_pre_shared_key_authentication_required(void* self, void (*slot)(void*, void*, void*)) {
    QNetworkAccessManager_Connect_PreSharedKeyAuthenticationRequired((QNetworkAccessManager*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#createRequest)
///
/// ``` QNetworkAccessManager* self, enum QNetworkAccessManager__Operation op, QNetworkRequest* request, QIODevice* outgoingData ```
QNetworkReply* q_networkaccessmanager_create_request(void* self, int64_t op, void* request, void* outgoingData) {
    return QNetworkAccessManager_CreateRequest((QNetworkAccessManager*)self, op, (QNetworkRequest*)request, (QIODevice*)outgoingData);
}

/// Allows for overriding the related default method
///
/// ``` QNetworkAccessManager* self, QNetworkReply* (*slot)(QNetworkAccessManager*, enum QNetworkAccessManager__Operation, QNetworkRequest*, QIODevice*) ```
void q_networkaccessmanager_on_create_request(void* self, QNetworkReply* (*slot)(void*, int64_t, void*, void*)) {
    QNetworkAccessManager_OnCreateRequest((QNetworkAccessManager*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QNetworkAccessManager* self, enum QNetworkAccessManager__Operation op, QNetworkRequest* request, QIODevice* outgoingData ```
QNetworkReply* q_networkaccessmanager_qbase_create_request(void* self, int64_t op, void* request, void* outgoingData) {
    return QNetworkAccessManager_QBaseCreateRequest((QNetworkAccessManager*)self, op, (QNetworkRequest*)request, (QIODevice*)outgoingData);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#supportedSchemesImplementation)
///
/// ``` QNetworkAccessManager* self ```
const char** q_networkaccessmanager_supported_schemes_implementation(void* self) {
    libqt_list _arr = QNetworkAccessManager_SupportedSchemesImplementation((QNetworkAccessManager*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Allows for overriding the related default method
///
/// ``` QNetworkAccessManager* self, const char** (*slot)() ```
void q_networkaccessmanager_on_supported_schemes_implementation(void* self, const char** (*slot)()) {
    QNetworkAccessManager_OnSupportedSchemesImplementation((QNetworkAccessManager*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QNetworkAccessManager* self ```
const char** q_networkaccessmanager_qbase_supported_schemes_implementation(void* self) {
    libqt_list _arr = QNetworkAccessManager_QBaseSupportedSchemesImplementation((QNetworkAccessManager*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_networkaccessmanager_tr2(const char* s, const char* c) {
    libqt_string _str = QNetworkAccessManager_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_networkaccessmanager_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QNetworkAccessManager_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#enableStrictTransportSecurityStore)
///
/// ``` QNetworkAccessManager* self, bool enabled, const char* storeDir ```
void q_networkaccessmanager_enable_strict_transport_security_store2(void* self, bool enabled, const char* storeDir) {
    QNetworkAccessManager_EnableStrictTransportSecurityStore2((QNetworkAccessManager*)self, enabled, qstring(storeDir));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#sendCustomRequest)
///
/// ``` QNetworkAccessManager* self, QNetworkRequest* request, const char* verb, QIODevice* data ```
QNetworkReply* q_networkaccessmanager_send_custom_request32(void* self, void* request, const char* verb, void* data) {
    return QNetworkAccessManager_SendCustomRequest32((QNetworkAccessManager*)self, (QNetworkRequest*)request, qstring(verb), (QIODevice*)data);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHostEncrypted)
///
/// ``` QNetworkAccessManager* self, const char* hostName, unsigned short port ```
void q_networkaccessmanager_connect_to_host_encrypted22(void* self, const char* hostName, unsigned short port) {
    QNetworkAccessManager_ConnectToHostEncrypted22((QNetworkAccessManager*)self, qstring(hostName), port);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHostEncrypted)
///
/// ``` QNetworkAccessManager* self, const char* hostName, unsigned short port, QSslConfiguration* sslConfiguration ```
void q_networkaccessmanager_connect_to_host_encrypted3(void* self, const char* hostName, unsigned short port, void* sslConfiguration) {
    QNetworkAccessManager_ConnectToHostEncrypted3((QNetworkAccessManager*)self, qstring(hostName), port, (QSslConfiguration*)sslConfiguration);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#connectToHost)
///
/// ``` QNetworkAccessManager* self, const char* hostName, unsigned short port ```
void q_networkaccessmanager_connect_to_host2(void* self, const char* hostName, unsigned short port) {
    QNetworkAccessManager_ConnectToHost2((QNetworkAccessManager*)self, qstring(hostName), port);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaccessmanager.html#setTransferTimeout)
///
/// ``` QNetworkAccessManager* self, int timeout ```
void q_networkaccessmanager_set_transfer_timeout1(void* self, int timeout) {
    QNetworkAccessManager_SetTransferTimeout1((QNetworkAccessManager*)self, timeout);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QNetworkAccessManager* self ```
const char* q_networkaccessmanager_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QNetworkAccessManager* self, const char* name ```
void q_networkaccessmanager_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QNetworkAccessManager* self ```
bool q_networkaccessmanager_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QNetworkAccessManager* self ```
bool q_networkaccessmanager_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QNetworkAccessManager* self ```
bool q_networkaccessmanager_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QNetworkAccessManager* self ```
bool q_networkaccessmanager_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QNetworkAccessManager* self, bool b ```
bool q_networkaccessmanager_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QNetworkAccessManager* self ```
QThread* q_networkaccessmanager_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QNetworkAccessManager* self, QThread* thread ```
void q_networkaccessmanager_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QNetworkAccessManager* self, int interval ```
int32_t q_networkaccessmanager_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QNetworkAccessManager* self, int id ```
void q_networkaccessmanager_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QNetworkAccessManager* self ```
libqt_list /* of QObject* */ q_networkaccessmanager_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QNetworkAccessManager* self, QObject* parent ```
void q_networkaccessmanager_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QNetworkAccessManager* self, QObject* filterObj ```
void q_networkaccessmanager_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QNetworkAccessManager* self, QObject* obj ```
void q_networkaccessmanager_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_networkaccessmanager_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QNetworkAccessManager* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_networkaccessmanager_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_networkaccessmanager_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_networkaccessmanager_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QNetworkAccessManager* self ```
void q_networkaccessmanager_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QNetworkAccessManager* self ```
void q_networkaccessmanager_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QNetworkAccessManager* self, const char* name, QVariant* value ```
bool q_networkaccessmanager_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QNetworkAccessManager* self, const char* name ```
QVariant* q_networkaccessmanager_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QNetworkAccessManager* self ```
const char** q_networkaccessmanager_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QNetworkAccessManager* self ```
QBindingStorage* q_networkaccessmanager_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QNetworkAccessManager* self ```
QBindingStorage* q_networkaccessmanager_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QNetworkAccessManager* self ```
void q_networkaccessmanager_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QNetworkAccessManager* self, void (*slot)(QObject*) ```
void q_networkaccessmanager_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QNetworkAccessManager* self ```
QObject* q_networkaccessmanager_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QNetworkAccessManager* self, const char* classname ```
bool q_networkaccessmanager_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QNetworkAccessManager* self ```
void q_networkaccessmanager_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QNetworkAccessManager* self, int interval, enum Qt__TimerType timerType ```
int32_t q_networkaccessmanager_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_networkaccessmanager_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QNetworkAccessManager* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_networkaccessmanager_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QNetworkAccessManager* self, QObject* param1 ```
void q_networkaccessmanager_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QNetworkAccessManager* self, void (*slot)(QObject*, QObject*) ```
void q_networkaccessmanager_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkAccessManager* self, QEvent* event ```
bool q_networkaccessmanager_event(void* self, void* event) {
    return QNetworkAccessManager_Event((QNetworkAccessManager*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, QEvent* event ```
bool q_networkaccessmanager_qbase_event(void* self, void* event) {
    return QNetworkAccessManager_QBaseEvent((QNetworkAccessManager*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, bool (*slot)(QNetworkAccessManager*, QEvent*) ```
void q_networkaccessmanager_on_event(void* self, bool (*slot)(void*, void*)) {
    QNetworkAccessManager_OnEvent((QNetworkAccessManager*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkAccessManager* self, QObject* watched, QEvent* event ```
bool q_networkaccessmanager_event_filter(void* self, void* watched, void* event) {
    return QNetworkAccessManager_EventFilter((QNetworkAccessManager*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, QObject* watched, QEvent* event ```
bool q_networkaccessmanager_qbase_event_filter(void* self, void* watched, void* event) {
    return QNetworkAccessManager_QBaseEventFilter((QNetworkAccessManager*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, bool (*slot)(QNetworkAccessManager*, QObject*, QEvent*) ```
void q_networkaccessmanager_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QNetworkAccessManager_OnEventFilter((QNetworkAccessManager*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkAccessManager* self, QTimerEvent* event ```
void q_networkaccessmanager_timer_event(void* self, void* event) {
    QNetworkAccessManager_TimerEvent((QNetworkAccessManager*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, QTimerEvent* event ```
void q_networkaccessmanager_qbase_timer_event(void* self, void* event) {
    QNetworkAccessManager_QBaseTimerEvent((QNetworkAccessManager*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, void (*slot)(QNetworkAccessManager*, QTimerEvent*) ```
void q_networkaccessmanager_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QNetworkAccessManager_OnTimerEvent((QNetworkAccessManager*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkAccessManager* self, QChildEvent* event ```
void q_networkaccessmanager_child_event(void* self, void* event) {
    QNetworkAccessManager_ChildEvent((QNetworkAccessManager*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, QChildEvent* event ```
void q_networkaccessmanager_qbase_child_event(void* self, void* event) {
    QNetworkAccessManager_QBaseChildEvent((QNetworkAccessManager*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, void (*slot)(QNetworkAccessManager*, QChildEvent*) ```
void q_networkaccessmanager_on_child_event(void* self, void (*slot)(void*, void*)) {
    QNetworkAccessManager_OnChildEvent((QNetworkAccessManager*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkAccessManager* self, QEvent* event ```
void q_networkaccessmanager_custom_event(void* self, void* event) {
    QNetworkAccessManager_CustomEvent((QNetworkAccessManager*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, QEvent* event ```
void q_networkaccessmanager_qbase_custom_event(void* self, void* event) {
    QNetworkAccessManager_QBaseCustomEvent((QNetworkAccessManager*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, void (*slot)(QNetworkAccessManager*, QEvent*) ```
void q_networkaccessmanager_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QNetworkAccessManager_OnCustomEvent((QNetworkAccessManager*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkAccessManager* self, QMetaMethod* signal ```
void q_networkaccessmanager_connect_notify(void* self, void* signal) {
    QNetworkAccessManager_ConnectNotify((QNetworkAccessManager*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, QMetaMethod* signal ```
void q_networkaccessmanager_qbase_connect_notify(void* self, void* signal) {
    QNetworkAccessManager_QBaseConnectNotify((QNetworkAccessManager*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, void (*slot)(QNetworkAccessManager*, QMetaMethod*) ```
void q_networkaccessmanager_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QNetworkAccessManager_OnConnectNotify((QNetworkAccessManager*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkAccessManager* self, QMetaMethod* signal ```
void q_networkaccessmanager_disconnect_notify(void* self, void* signal) {
    QNetworkAccessManager_DisconnectNotify((QNetworkAccessManager*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, QMetaMethod* signal ```
void q_networkaccessmanager_qbase_disconnect_notify(void* self, void* signal) {
    QNetworkAccessManager_QBaseDisconnectNotify((QNetworkAccessManager*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, void (*slot)(QNetworkAccessManager*, QMetaMethod*) ```
void q_networkaccessmanager_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QNetworkAccessManager_OnDisconnectNotify((QNetworkAccessManager*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkAccessManager* self ```
QObject* q_networkaccessmanager_sender(void* self) {
    return QNetworkAccessManager_Sender((QNetworkAccessManager*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkAccessManager* self ```
QObject* q_networkaccessmanager_qbase_sender(void* self) {
    return QNetworkAccessManager_QBaseSender((QNetworkAccessManager*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, QObject* (*slot)() ```
void q_networkaccessmanager_on_sender(void* self, QObject* (*slot)()) {
    QNetworkAccessManager_OnSender((QNetworkAccessManager*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkAccessManager* self ```
int32_t q_networkaccessmanager_sender_signal_index(void* self) {
    return QNetworkAccessManager_SenderSignalIndex((QNetworkAccessManager*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkAccessManager* self ```
int32_t q_networkaccessmanager_qbase_sender_signal_index(void* self) {
    return QNetworkAccessManager_QBaseSenderSignalIndex((QNetworkAccessManager*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, int32_t (*slot)() ```
void q_networkaccessmanager_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QNetworkAccessManager_OnSenderSignalIndex((QNetworkAccessManager*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkAccessManager* self, const char* signal ```
int32_t q_networkaccessmanager_receivers(void* self, const char* signal) {
    return QNetworkAccessManager_Receivers((QNetworkAccessManager*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, const char* signal ```
int32_t q_networkaccessmanager_qbase_receivers(void* self, const char* signal) {
    return QNetworkAccessManager_QBaseReceivers((QNetworkAccessManager*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, int32_t (*slot)(QNetworkAccessManager*, const char*) ```
void q_networkaccessmanager_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QNetworkAccessManager_OnReceivers((QNetworkAccessManager*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QNetworkAccessManager* self, QMetaMethod* signal ```
bool q_networkaccessmanager_is_signal_connected(void* self, void* signal) {
    return QNetworkAccessManager_IsSignalConnected((QNetworkAccessManager*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, QMetaMethod* signal ```
bool q_networkaccessmanager_qbase_is_signal_connected(void* self, void* signal) {
    return QNetworkAccessManager_QBaseIsSignalConnected((QNetworkAccessManager*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QNetworkAccessManager* self, bool (*slot)(QNetworkAccessManager*, QMetaMethod*) ```
void q_networkaccessmanager_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QNetworkAccessManager_OnIsSignalConnected((QNetworkAccessManager*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QNetworkAccessManager* self ```
void q_networkaccessmanager_delete(void* self) {
    QNetworkAccessManager_Delete((QNetworkAccessManager*)(self));
}