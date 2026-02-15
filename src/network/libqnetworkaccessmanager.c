#include "libqabstractnetworkcache.hpp"
#include "libqauthenticator.hpp"
#include "../libqcoreevent.hpp"
#include "libqhstspolicy.hpp"
#include "libqhttpmultipart.hpp"
#include "../libqiodevice.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "libqnetworkcookiejar.hpp"
#include "libqnetworkproxy.hpp"
#include "libqnetworkreply.hpp"
#include "libqnetworkrequest.hpp"
#include "../libqobject.hpp"
#include "libqsslconfiguration.hpp"
#include "libqsslerror.hpp"
#include "libqsslpresharedkeyauthenticator.hpp"
#include "libqnetworkaccessmanager.hpp"
#include "libqnetworkaccessmanager.h"

QNetworkAccessManager* q_networkaccessmanager_new() {
    return QNetworkAccessManager_new();
}

QNetworkAccessManager* q_networkaccessmanager_new2(void* parent) {
    return QNetworkAccessManager_new2((QObject*)parent);
}

const QMetaObject* q_networkaccessmanager_meta_object(void* self) {
    return QNetworkAccessManager_MetaObject((QNetworkAccessManager*)self);
}

void q_networkaccessmanager_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QNetworkAccessManager_OnMetaObject((QNetworkAccessManager*)self, (intptr_t)callback);
}

const QMetaObject* q_networkaccessmanager_qbase_meta_object(void* self) {
    return QNetworkAccessManager_QBaseMetaObject((QNetworkAccessManager*)self);
}

void* q_networkaccessmanager_metacast(void* self, const char* param1) {
    return QNetworkAccessManager_Metacast((QNetworkAccessManager*)self, param1);
}

void q_networkaccessmanager_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QNetworkAccessManager_OnMetacast((QNetworkAccessManager*)self, (intptr_t)callback);
}

void* q_networkaccessmanager_qbase_metacast(void* self, const char* param1) {
    return QNetworkAccessManager_QBaseMetacast((QNetworkAccessManager*)self, param1);
}

int32_t q_networkaccessmanager_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QNetworkAccessManager_Metacall((QNetworkAccessManager*)self, param1, param2, param3);
}

void q_networkaccessmanager_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QNetworkAccessManager_OnMetacall((QNetworkAccessManager*)self, (intptr_t)callback);
}

int32_t q_networkaccessmanager_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QNetworkAccessManager_QBaseMetacall((QNetworkAccessManager*)self, param1, param2, param3);
}

const char* q_networkaccessmanager_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** q_networkaccessmanager_supported_schemes(void* self) {
    libqt_list _arr = QNetworkAccessManager_SupportedSchemes((QNetworkAccessManager*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_networkaccessmanager_supported_schemes\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_networkaccessmanager_on_supported_schemes(void* self, const char** (*callback)()) {
    QNetworkAccessManager_OnSupportedSchemes((QNetworkAccessManager*)self, (intptr_t)callback);
}

const char** q_networkaccessmanager_qbase_supported_schemes(void* self) {
    libqt_list _arr = QNetworkAccessManager_QBaseSupportedSchemes((QNetworkAccessManager*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_networkaccessmanager_supported_schemes\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_networkaccessmanager_clear_access_cache(void* self) {
    QNetworkAccessManager_ClearAccessCache((QNetworkAccessManager*)self);
}

void q_networkaccessmanager_clear_connection_cache(void* self) {
    QNetworkAccessManager_ClearConnectionCache((QNetworkAccessManager*)self);
}

QNetworkProxy* q_networkaccessmanager_proxy(void* self) {
    return QNetworkAccessManager_Proxy((QNetworkAccessManager*)self);
}

void q_networkaccessmanager_set_proxy(void* self, void* proxy) {
    QNetworkAccessManager_SetProxy((QNetworkAccessManager*)self, (QNetworkProxy*)proxy);
}

QNetworkProxyFactory* q_networkaccessmanager_proxy_factory(void* self) {
    return QNetworkAccessManager_ProxyFactory((QNetworkAccessManager*)self);
}

void q_networkaccessmanager_set_proxy_factory(void* self, void* factory) {
    QNetworkAccessManager_SetProxyFactory((QNetworkAccessManager*)self, (QNetworkProxyFactory*)factory);
}

QAbstractNetworkCache* q_networkaccessmanager_cache(void* self) {
    return QNetworkAccessManager_Cache((QNetworkAccessManager*)self);
}

void q_networkaccessmanager_set_cache(void* self, void* cache) {
    QNetworkAccessManager_SetCache((QNetworkAccessManager*)self, (QAbstractNetworkCache*)cache);
}

QNetworkCookieJar* q_networkaccessmanager_cookie_jar(void* self) {
    return QNetworkAccessManager_CookieJar((QNetworkAccessManager*)self);
}

void q_networkaccessmanager_set_cookie_jar(void* self, void* cookieJar) {
    QNetworkAccessManager_SetCookieJar((QNetworkAccessManager*)self, (QNetworkCookieJar*)cookieJar);
}

void q_networkaccessmanager_set_strict_transport_security_enabled(void* self, bool enabled) {
    QNetworkAccessManager_SetStrictTransportSecurityEnabled((QNetworkAccessManager*)self, enabled);
}

bool q_networkaccessmanager_is_strict_transport_security_enabled(void* self) {
    return QNetworkAccessManager_IsStrictTransportSecurityEnabled((QNetworkAccessManager*)self);
}

void q_networkaccessmanager_enable_strict_transport_security_store(void* self, bool enabled) {
    QNetworkAccessManager_EnableStrictTransportSecurityStore((QNetworkAccessManager*)self, enabled);
}

bool q_networkaccessmanager_is_strict_transport_security_store_enabled(void* self) {
    return QNetworkAccessManager_IsStrictTransportSecurityStoreEnabled((QNetworkAccessManager*)self);
}

void q_networkaccessmanager_add_strict_transport_security_hosts(void* self, libqt_list /* of QHstsPolicy* */ knownHosts) {
    QNetworkAccessManager_AddStrictTransportSecurityHosts((QNetworkAccessManager*)self, knownHosts);
}

libqt_list /* of QHstsPolicy* */ q_networkaccessmanager_strict_transport_security_hosts(void* self) {
    libqt_list _arr = QNetworkAccessManager_StrictTransportSecurityHosts((QNetworkAccessManager*)self);
    return _arr;
}

QNetworkReply* q_networkaccessmanager_head(void* self, void* request) {
    return QNetworkAccessManager_Head((QNetworkAccessManager*)self, (QNetworkRequest*)request);
}

QNetworkReply* q_networkaccessmanager_get(void* self, void* request) {
    return QNetworkAccessManager_Get((QNetworkAccessManager*)self, (QNetworkRequest*)request);
}

QNetworkReply* q_networkaccessmanager_get2(void* self, void* request, void* data) {
    return QNetworkAccessManager_Get2((QNetworkAccessManager*)self, (QNetworkRequest*)request, (QIODevice*)data);
}

QNetworkReply* q_networkaccessmanager_get3(void* self, void* request, char* data) {
    return QNetworkAccessManager_Get3((QNetworkAccessManager*)self, (QNetworkRequest*)request, qstring(data));
}

QNetworkReply* q_networkaccessmanager_post(void* self, void* request, void* data) {
    return QNetworkAccessManager_Post((QNetworkAccessManager*)self, (QNetworkRequest*)request, (QIODevice*)data);
}

QNetworkReply* q_networkaccessmanager_post2(void* self, void* request, char* data) {
    return QNetworkAccessManager_Post2((QNetworkAccessManager*)self, (QNetworkRequest*)request, qstring(data));
}

QNetworkReply* q_networkaccessmanager_put(void* self, void* request, void* data) {
    return QNetworkAccessManager_Put((QNetworkAccessManager*)self, (QNetworkRequest*)request, (QIODevice*)data);
}

QNetworkReply* q_networkaccessmanager_put2(void* self, void* request, char* data) {
    return QNetworkAccessManager_Put2((QNetworkAccessManager*)self, (QNetworkRequest*)request, qstring(data));
}

QNetworkReply* q_networkaccessmanager_delete_resource(void* self, void* request) {
    return QNetworkAccessManager_DeleteResource((QNetworkAccessManager*)self, (QNetworkRequest*)request);
}

QNetworkReply* q_networkaccessmanager_send_custom_request(void* self, void* request, char* verb) {
    return QNetworkAccessManager_SendCustomRequest((QNetworkAccessManager*)self, (QNetworkRequest*)request, qstring(verb));
}

QNetworkReply* q_networkaccessmanager_send_custom_request2(void* self, void* request, char* verb, char* data) {
    return QNetworkAccessManager_SendCustomRequest2((QNetworkAccessManager*)self, (QNetworkRequest*)request, qstring(verb), qstring(data));
}

QNetworkReply* q_networkaccessmanager_post4(void* self, void* request, void* multiPart) {
    return QNetworkAccessManager_Post4((QNetworkAccessManager*)self, (QNetworkRequest*)request, (QHttpMultiPart*)multiPart);
}

QNetworkReply* q_networkaccessmanager_put4(void* self, void* request, void* multiPart) {
    return QNetworkAccessManager_Put4((QNetworkAccessManager*)self, (QNetworkRequest*)request, (QHttpMultiPart*)multiPart);
}

QNetworkReply* q_networkaccessmanager_send_custom_request3(void* self, void* request, char* verb, void* multiPart) {
    return QNetworkAccessManager_SendCustomRequest3((QNetworkAccessManager*)self, (QNetworkRequest*)request, qstring(verb), (QHttpMultiPart*)multiPart);
}

void q_networkaccessmanager_connect_to_host_encrypted(void* self, const char* hostName) {
    QNetworkAccessManager_ConnectToHostEncrypted((QNetworkAccessManager*)self, qstring(hostName));
}

void q_networkaccessmanager_connect_to_host_encrypted2(void* self, const char* hostName, unsigned short port, void* sslConfiguration, const char* peerName) {
    QNetworkAccessManager_ConnectToHostEncrypted2((QNetworkAccessManager*)self, qstring(hostName), port, (QSslConfiguration*)sslConfiguration, qstring(peerName));
}

void q_networkaccessmanager_connect_to_host(void* self, const char* hostName) {
    QNetworkAccessManager_ConnectToHost((QNetworkAccessManager*)self, qstring(hostName));
}

void q_networkaccessmanager_set_redirect_policy(void* self, int32_t policy) {
    QNetworkAccessManager_SetRedirectPolicy((QNetworkAccessManager*)self, policy);
}

int32_t q_networkaccessmanager_redirect_policy(void* self) {
    return QNetworkAccessManager_RedirectPolicy((QNetworkAccessManager*)self);
}

bool q_networkaccessmanager_auto_delete_replies(void* self) {
    return QNetworkAccessManager_AutoDeleteReplies((QNetworkAccessManager*)self);
}

void q_networkaccessmanager_set_auto_delete_replies(void* self, bool autoDelete) {
    QNetworkAccessManager_SetAutoDeleteReplies((QNetworkAccessManager*)self, autoDelete);
}

int32_t q_networkaccessmanager_transfer_timeout(void* self) {
    return QNetworkAccessManager_TransferTimeout((QNetworkAccessManager*)self);
}

void q_networkaccessmanager_set_transfer_timeout(void* self, int timeout) {
    QNetworkAccessManager_SetTransferTimeout((QNetworkAccessManager*)self, timeout);
}

int64_t q_networkaccessmanager_transfer_timeout_as_duration(void* self) {
    return QNetworkAccessManager_TransferTimeoutAsDuration((QNetworkAccessManager*)self);
}

void q_networkaccessmanager_set_transfer_timeout2(void* self) {
    QNetworkAccessManager_SetTransferTimeout2((QNetworkAccessManager*)self);
}

void q_networkaccessmanager_proxy_authentication_required(void* self, void* proxy, void* authenticator) {
    QNetworkAccessManager_ProxyAuthenticationRequired((QNetworkAccessManager*)self, (QNetworkProxy*)proxy, (QAuthenticator*)authenticator);
}

void q_networkaccessmanager_on_proxy_authentication_required(void* self, void (*callback)(void*, void*, void*)) {
    QNetworkAccessManager_Connect_ProxyAuthenticationRequired((QNetworkAccessManager*)self, (intptr_t)callback);
}

void q_networkaccessmanager_authentication_required(void* self, void* reply, void* authenticator) {
    QNetworkAccessManager_AuthenticationRequired((QNetworkAccessManager*)self, (QNetworkReply*)reply, (QAuthenticator*)authenticator);
}

void q_networkaccessmanager_on_authentication_required(void* self, void (*callback)(void*, void*, void*)) {
    QNetworkAccessManager_Connect_AuthenticationRequired((QNetworkAccessManager*)self, (intptr_t)callback);
}

void q_networkaccessmanager_finished(void* self, void* reply) {
    QNetworkAccessManager_Finished((QNetworkAccessManager*)self, (QNetworkReply*)reply);
}

void q_networkaccessmanager_on_finished(void* self, void (*callback)(void*, void*)) {
    QNetworkAccessManager_Connect_Finished((QNetworkAccessManager*)self, (intptr_t)callback);
}

void q_networkaccessmanager_encrypted(void* self, void* reply) {
    QNetworkAccessManager_Encrypted((QNetworkAccessManager*)self, (QNetworkReply*)reply);
}

void q_networkaccessmanager_on_encrypted(void* self, void (*callback)(void*, void*)) {
    QNetworkAccessManager_Connect_Encrypted((QNetworkAccessManager*)self, (intptr_t)callback);
}

void q_networkaccessmanager_ssl_errors(void* self, void* reply, libqt_list /* of QSslError* */ errors) {
    QNetworkAccessManager_SslErrors((QNetworkAccessManager*)self, (QNetworkReply*)reply, errors);
}

void q_networkaccessmanager_on_ssl_errors(void* self, void (*callback)(void*, void*, libqt_list /* of QSslError* */)) {
    QNetworkAccessManager_Connect_SslErrors((QNetworkAccessManager*)self, (intptr_t)callback);
}

void q_networkaccessmanager_pre_shared_key_authentication_required(void* self, void* reply, void* authenticator) {
    QNetworkAccessManager_PreSharedKeyAuthenticationRequired((QNetworkAccessManager*)self, (QNetworkReply*)reply, (QSslPreSharedKeyAuthenticator*)authenticator);
}

void q_networkaccessmanager_on_pre_shared_key_authentication_required(void* self, void (*callback)(void*, void*, void*)) {
    QNetworkAccessManager_Connect_PreSharedKeyAuthenticationRequired((QNetworkAccessManager*)self, (intptr_t)callback);
}

QNetworkReply* q_networkaccessmanager_create_request(void* self, int32_t op, void* request, void* outgoingData) {
    return QNetworkAccessManager_CreateRequest((QNetworkAccessManager*)self, op, (QNetworkRequest*)request, (QIODevice*)outgoingData);
}

void q_networkaccessmanager_on_create_request(void* self, QNetworkReply* (*callback)(void*, int32_t, void*, void*)) {
    QNetworkAccessManager_OnCreateRequest((QNetworkAccessManager*)self, (intptr_t)callback);
}

QNetworkReply* q_networkaccessmanager_qbase_create_request(void* self, int32_t op, void* request, void* outgoingData) {
    return QNetworkAccessManager_QBaseCreateRequest((QNetworkAccessManager*)self, op, (QNetworkRequest*)request, (QIODevice*)outgoingData);
}

const char** q_networkaccessmanager_supported_schemes_implementation(void* self) {
    libqt_list _arr = QNetworkAccessManager_SupportedSchemesImplementation((QNetworkAccessManager*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_networkaccessmanager_supported_schemes_implementation\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_networkaccessmanager_on_supported_schemes_implementation(void* self, const char** (*callback)()) {
    QNetworkAccessManager_OnSupportedSchemesImplementation((QNetworkAccessManager*)self, (intptr_t)callback);
}

const char** q_networkaccessmanager_qbase_supported_schemes_implementation(void* self) {
    libqt_list _arr = QNetworkAccessManager_QBaseSupportedSchemesImplementation((QNetworkAccessManager*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_networkaccessmanager_supported_schemes_implementation\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char* q_networkaccessmanager_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_networkaccessmanager_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_networkaccessmanager_enable_strict_transport_security_store2(void* self, bool enabled, const char* storeDir) {
    QNetworkAccessManager_EnableStrictTransportSecurityStore2((QNetworkAccessManager*)self, enabled, qstring(storeDir));
}

QNetworkReply* q_networkaccessmanager_send_custom_request32(void* self, void* request, char* verb, void* data) {
    return QNetworkAccessManager_SendCustomRequest32((QNetworkAccessManager*)self, (QNetworkRequest*)request, qstring(verb), (QIODevice*)data);
}

void q_networkaccessmanager_connect_to_host_encrypted22(void* self, const char* hostName, unsigned short port) {
    QNetworkAccessManager_ConnectToHostEncrypted22((QNetworkAccessManager*)self, qstring(hostName), port);
}

void q_networkaccessmanager_connect_to_host_encrypted3(void* self, const char* hostName, unsigned short port, void* sslConfiguration) {
    QNetworkAccessManager_ConnectToHostEncrypted3((QNetworkAccessManager*)self, qstring(hostName), port, (QSslConfiguration*)sslConfiguration);
}

void q_networkaccessmanager_connect_to_host2(void* self, const char* hostName, unsigned short port) {
    QNetworkAccessManager_ConnectToHost2((QNetworkAccessManager*)self, qstring(hostName), port);
}

void q_networkaccessmanager_set_transfer_timeout1(void* self, int64_t duration) {
    QNetworkAccessManager_SetTransferTimeout1((QNetworkAccessManager*)self, duration);
}

const char* q_networkaccessmanager_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_networkaccessmanager_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_networkaccessmanager_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_networkaccessmanager_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_networkaccessmanager_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_networkaccessmanager_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_networkaccessmanager_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_networkaccessmanager_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_networkaccessmanager_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_networkaccessmanager_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_networkaccessmanager_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_networkaccessmanager_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_networkaccessmanager_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_networkaccessmanager_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_networkaccessmanager_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_networkaccessmanager_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_networkaccessmanager_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_networkaccessmanager_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_networkaccessmanager_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_networkaccessmanager_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_networkaccessmanager_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_networkaccessmanager_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_networkaccessmanager_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_networkaccessmanager_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_networkaccessmanager_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_networkaccessmanager_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_networkaccessmanager_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_networkaccessmanager_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_networkaccessmanager_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_networkaccessmanager_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_networkaccessmanager_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_networkaccessmanager_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_networkaccessmanager_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_networkaccessmanager_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_networkaccessmanager_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_networkaccessmanager_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_networkaccessmanager_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_networkaccessmanager_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_networkaccessmanager_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_networkaccessmanager_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_networkaccessmanager_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_networkaccessmanager_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_networkaccessmanager_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_networkaccessmanager_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_networkaccessmanager_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_networkaccessmanager_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_networkaccessmanager_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_networkaccessmanager_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_networkaccessmanager_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_networkaccessmanager_event(void* self, void* event) {
    return QNetworkAccessManager_Event((QNetworkAccessManager*)self, (QEvent*)event);
}

bool q_networkaccessmanager_qbase_event(void* self, void* event) {
    return QNetworkAccessManager_QBaseEvent((QNetworkAccessManager*)self, (QEvent*)event);
}

void q_networkaccessmanager_on_event(void* self, bool (*callback)(void*, void*)) {
    QNetworkAccessManager_OnEvent((QNetworkAccessManager*)self, (intptr_t)callback);
}

bool q_networkaccessmanager_event_filter(void* self, void* watched, void* event) {
    return QNetworkAccessManager_EventFilter((QNetworkAccessManager*)self, (QObject*)watched, (QEvent*)event);
}

bool q_networkaccessmanager_qbase_event_filter(void* self, void* watched, void* event) {
    return QNetworkAccessManager_QBaseEventFilter((QNetworkAccessManager*)self, (QObject*)watched, (QEvent*)event);
}

void q_networkaccessmanager_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QNetworkAccessManager_OnEventFilter((QNetworkAccessManager*)self, (intptr_t)callback);
}

void q_networkaccessmanager_timer_event(void* self, void* event) {
    QNetworkAccessManager_TimerEvent((QNetworkAccessManager*)self, (QTimerEvent*)event);
}

void q_networkaccessmanager_qbase_timer_event(void* self, void* event) {
    QNetworkAccessManager_QBaseTimerEvent((QNetworkAccessManager*)self, (QTimerEvent*)event);
}

void q_networkaccessmanager_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QNetworkAccessManager_OnTimerEvent((QNetworkAccessManager*)self, (intptr_t)callback);
}

void q_networkaccessmanager_child_event(void* self, void* event) {
    QNetworkAccessManager_ChildEvent((QNetworkAccessManager*)self, (QChildEvent*)event);
}

void q_networkaccessmanager_qbase_child_event(void* self, void* event) {
    QNetworkAccessManager_QBaseChildEvent((QNetworkAccessManager*)self, (QChildEvent*)event);
}

void q_networkaccessmanager_on_child_event(void* self, void (*callback)(void*, void*)) {
    QNetworkAccessManager_OnChildEvent((QNetworkAccessManager*)self, (intptr_t)callback);
}

void q_networkaccessmanager_custom_event(void* self, void* event) {
    QNetworkAccessManager_CustomEvent((QNetworkAccessManager*)self, (QEvent*)event);
}

void q_networkaccessmanager_qbase_custom_event(void* self, void* event) {
    QNetworkAccessManager_QBaseCustomEvent((QNetworkAccessManager*)self, (QEvent*)event);
}

void q_networkaccessmanager_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QNetworkAccessManager_OnCustomEvent((QNetworkAccessManager*)self, (intptr_t)callback);
}

void q_networkaccessmanager_connect_notify(void* self, void* signal) {
    QNetworkAccessManager_ConnectNotify((QNetworkAccessManager*)self, (QMetaMethod*)signal);
}

void q_networkaccessmanager_qbase_connect_notify(void* self, void* signal) {
    QNetworkAccessManager_QBaseConnectNotify((QNetworkAccessManager*)self, (QMetaMethod*)signal);
}

void q_networkaccessmanager_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QNetworkAccessManager_OnConnectNotify((QNetworkAccessManager*)self, (intptr_t)callback);
}

void q_networkaccessmanager_disconnect_notify(void* self, void* signal) {
    QNetworkAccessManager_DisconnectNotify((QNetworkAccessManager*)self, (QMetaMethod*)signal);
}

void q_networkaccessmanager_qbase_disconnect_notify(void* self, void* signal) {
    QNetworkAccessManager_QBaseDisconnectNotify((QNetworkAccessManager*)self, (QMetaMethod*)signal);
}

void q_networkaccessmanager_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QNetworkAccessManager_OnDisconnectNotify((QNetworkAccessManager*)self, (intptr_t)callback);
}

QObject* q_networkaccessmanager_sender(void* self) {
    return QNetworkAccessManager_Sender((QNetworkAccessManager*)self);
}

QObject* q_networkaccessmanager_qbase_sender(void* self) {
    return QNetworkAccessManager_QBaseSender((QNetworkAccessManager*)self);
}

void q_networkaccessmanager_on_sender(void* self, QObject* (*callback)()) {
    QNetworkAccessManager_OnSender((QNetworkAccessManager*)self, (intptr_t)callback);
}

int32_t q_networkaccessmanager_sender_signal_index(void* self) {
    return QNetworkAccessManager_SenderSignalIndex((QNetworkAccessManager*)self);
}

int32_t q_networkaccessmanager_qbase_sender_signal_index(void* self) {
    return QNetworkAccessManager_QBaseSenderSignalIndex((QNetworkAccessManager*)self);
}

void q_networkaccessmanager_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QNetworkAccessManager_OnSenderSignalIndex((QNetworkAccessManager*)self, (intptr_t)callback);
}

int32_t q_networkaccessmanager_receivers(void* self, const char* signal) {
    return QNetworkAccessManager_Receivers((QNetworkAccessManager*)self, signal);
}

int32_t q_networkaccessmanager_qbase_receivers(void* self, const char* signal) {
    return QNetworkAccessManager_QBaseReceivers((QNetworkAccessManager*)self, signal);
}

void q_networkaccessmanager_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QNetworkAccessManager_OnReceivers((QNetworkAccessManager*)self, (intptr_t)callback);
}

bool q_networkaccessmanager_is_signal_connected(void* self, void* signal) {
    return QNetworkAccessManager_IsSignalConnected((QNetworkAccessManager*)self, (QMetaMethod*)signal);
}

bool q_networkaccessmanager_qbase_is_signal_connected(void* self, void* signal) {
    return QNetworkAccessManager_QBaseIsSignalConnected((QNetworkAccessManager*)self, (QMetaMethod*)signal);
}

void q_networkaccessmanager_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QNetworkAccessManager_OnIsSignalConnected((QNetworkAccessManager*)self, (intptr_t)callback);
}

void q_networkaccessmanager_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_networkaccessmanager_delete(void* self) {
    QNetworkAccessManager_Delete((QNetworkAccessManager*)(self));
}
