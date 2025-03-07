#include <string.h>
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "libqnetworkproxy.hpp"
#include "libqnetworkproxy.h"

/// https://doc.qt.io/qt-6/qnetworkproxyquery.html

/// q_networkproxyquery_new constructs a new QNetworkProxyQuery object.
///
///
QNetworkProxyQuery* q_networkproxyquery_new() {
    return QNetworkProxyQuery_new();
}

/// q_networkproxyquery_new2 constructs a new QNetworkProxyQuery object.
///
/// ``` QUrl* requestUrl ```
QNetworkProxyQuery* q_networkproxyquery_new2(void* requestUrl) {
    return QNetworkProxyQuery_new2((QUrl*)requestUrl);
}

/// q_networkproxyquery_new3 constructs a new QNetworkProxyQuery object.
///
/// ``` const char* hostname, int port ```
QNetworkProxyQuery* q_networkproxyquery_new3(const char* hostname, int port) {
    return QNetworkProxyQuery_new3(qstring(hostname), port);
}

/// q_networkproxyquery_new4 constructs a new QNetworkProxyQuery object.
///
/// ``` unsigned short bindPort ```
QNetworkProxyQuery* q_networkproxyquery_new4(unsigned short bindPort) {
    return QNetworkProxyQuery_new4(bindPort);
}

/// q_networkproxyquery_new5 constructs a new QNetworkProxyQuery object.
///
/// ``` QNetworkProxyQuery* other ```
QNetworkProxyQuery* q_networkproxyquery_new5(void* other) {
    return QNetworkProxyQuery_new5((QNetworkProxyQuery*)other);
}

/// q_networkproxyquery_new6 constructs a new QNetworkProxyQuery object.
///
/// ``` QUrl* requestUrl, enum QNetworkProxyQuery__QueryType queryType ```
QNetworkProxyQuery* q_networkproxyquery_new6(void* requestUrl, int64_t queryType) {
    return QNetworkProxyQuery_new6((QUrl*)requestUrl, queryType);
}

/// q_networkproxyquery_new7 constructs a new QNetworkProxyQuery object.
///
/// ``` const char* hostname, int port, const char* protocolTag ```
QNetworkProxyQuery* q_networkproxyquery_new7(const char* hostname, int port, const char* protocolTag) {
    return QNetworkProxyQuery_new7(qstring(hostname), port, qstring(protocolTag));
}

/// q_networkproxyquery_new8 constructs a new QNetworkProxyQuery object.
///
/// ``` const char* hostname, int port, const char* protocolTag, enum QNetworkProxyQuery__QueryType queryType ```
QNetworkProxyQuery* q_networkproxyquery_new8(const char* hostname, int port, const char* protocolTag, int64_t queryType) {
    return QNetworkProxyQuery_new8(qstring(hostname), port, qstring(protocolTag), queryType);
}

/// q_networkproxyquery_new9 constructs a new QNetworkProxyQuery object.
///
/// ``` unsigned short bindPort, const char* protocolTag ```
QNetworkProxyQuery* q_networkproxyquery_new9(unsigned short bindPort, const char* protocolTag) {
    return QNetworkProxyQuery_new9(bindPort, qstring(protocolTag));
}

/// q_networkproxyquery_new10 constructs a new QNetworkProxyQuery object.
///
/// ``` unsigned short bindPort, const char* protocolTag, enum QNetworkProxyQuery__QueryType queryType ```
QNetworkProxyQuery* q_networkproxyquery_new10(unsigned short bindPort, const char* protocolTag, int64_t queryType) {
    return QNetworkProxyQuery_new10(bindPort, qstring(protocolTag), queryType);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#operator=)
///
/// ``` QNetworkProxyQuery* self, QNetworkProxyQuery* other ```
void q_networkproxyquery_operator_assign(void* self, void* other) {
    QNetworkProxyQuery_OperatorAssign((QNetworkProxyQuery*)self, (QNetworkProxyQuery*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#swap)
///
/// ``` QNetworkProxyQuery* self, QNetworkProxyQuery* other ```
void q_networkproxyquery_swap(void* self, void* other) {
    QNetworkProxyQuery_Swap((QNetworkProxyQuery*)self, (QNetworkProxyQuery*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#operator==)
///
/// ``` QNetworkProxyQuery* self, QNetworkProxyQuery* other ```
bool q_networkproxyquery_operator_equal(void* self, void* other) {
    return QNetworkProxyQuery_OperatorEqual((QNetworkProxyQuery*)self, (QNetworkProxyQuery*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#operator!=)
///
/// ``` QNetworkProxyQuery* self, QNetworkProxyQuery* other ```
bool q_networkproxyquery_operator_not_equal(void* self, void* other) {
    return QNetworkProxyQuery_OperatorNotEqual((QNetworkProxyQuery*)self, (QNetworkProxyQuery*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#queryType)
///
/// ``` QNetworkProxyQuery* self ```
int64_t q_networkproxyquery_query_type(void* self) {
    return QNetworkProxyQuery_QueryType((QNetworkProxyQuery*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setQueryType)
///
/// ``` QNetworkProxyQuery* self, enum QNetworkProxyQuery__QueryType typeVal ```
void q_networkproxyquery_set_query_type(void* self, int64_t typeVal) {
    QNetworkProxyQuery_SetQueryType((QNetworkProxyQuery*)self, typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#peerPort)
///
/// ``` QNetworkProxyQuery* self ```
int32_t q_networkproxyquery_peer_port(void* self) {
    return QNetworkProxyQuery_PeerPort((QNetworkProxyQuery*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setPeerPort)
///
/// ``` QNetworkProxyQuery* self, int port ```
void q_networkproxyquery_set_peer_port(void* self, int port) {
    QNetworkProxyQuery_SetPeerPort((QNetworkProxyQuery*)self, port);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#peerHostName)
///
/// ``` QNetworkProxyQuery* self ```
const char* q_networkproxyquery_peer_host_name(void* self) {
    libqt_string _str = QNetworkProxyQuery_PeerHostName((QNetworkProxyQuery*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setPeerHostName)
///
/// ``` QNetworkProxyQuery* self, const char* hostname ```
void q_networkproxyquery_set_peer_host_name(void* self, const char* hostname) {
    QNetworkProxyQuery_SetPeerHostName((QNetworkProxyQuery*)self, qstring(hostname));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#localPort)
///
/// ``` QNetworkProxyQuery* self ```
int32_t q_networkproxyquery_local_port(void* self) {
    return QNetworkProxyQuery_LocalPort((QNetworkProxyQuery*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setLocalPort)
///
/// ``` QNetworkProxyQuery* self, int port ```
void q_networkproxyquery_set_local_port(void* self, int port) {
    QNetworkProxyQuery_SetLocalPort((QNetworkProxyQuery*)self, port);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#protocolTag)
///
/// ``` QNetworkProxyQuery* self ```
const char* q_networkproxyquery_protocol_tag(void* self) {
    libqt_string _str = QNetworkProxyQuery_ProtocolTag((QNetworkProxyQuery*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setProtocolTag)
///
/// ``` QNetworkProxyQuery* self, const char* protocolTag ```
void q_networkproxyquery_set_protocol_tag(void* self, const char* protocolTag) {
    QNetworkProxyQuery_SetProtocolTag((QNetworkProxyQuery*)self, qstring(protocolTag));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#url)
///
/// ``` QNetworkProxyQuery* self ```
QUrl* q_networkproxyquery_url(void* self) {
    return QNetworkProxyQuery_Url((QNetworkProxyQuery*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setUrl)
///
/// ``` QNetworkProxyQuery* self, QUrl* url ```
void q_networkproxyquery_set_url(void* self, void* url) {
    QNetworkProxyQuery_SetUrl((QNetworkProxyQuery*)self, (QUrl*)url);
}

/// Delete this object from C++ memory.
///
/// ``` QNetworkProxyQuery* self ```
void q_networkproxyquery_delete(void* self) {
    QNetworkProxyQuery_Delete((QNetworkProxyQuery*)(self));
}

/// https://doc.qt.io/qt-6/qnetworkproxy.html

/// q_networkproxy_new constructs a new QNetworkProxy object.
///
///
QNetworkProxy* q_networkproxy_new() {
    return QNetworkProxy_new();
}

/// q_networkproxy_new2 constructs a new QNetworkProxy object.
///
/// ``` enum QNetworkProxy__ProxyType typeVal ```
QNetworkProxy* q_networkproxy_new2(int64_t typeVal) {
    return QNetworkProxy_new2(typeVal);
}

/// q_networkproxy_new3 constructs a new QNetworkProxy object.
///
/// ``` QNetworkProxy* other ```
QNetworkProxy* q_networkproxy_new3(void* other) {
    return QNetworkProxy_new3((QNetworkProxy*)other);
}

/// q_networkproxy_new4 constructs a new QNetworkProxy object.
///
/// ``` enum QNetworkProxy__ProxyType typeVal, const char* hostName ```
QNetworkProxy* q_networkproxy_new4(int64_t typeVal, const char* hostName) {
    return QNetworkProxy_new4(typeVal, qstring(hostName));
}

/// q_networkproxy_new5 constructs a new QNetworkProxy object.
///
/// ``` enum QNetworkProxy__ProxyType typeVal, const char* hostName, unsigned short port ```
QNetworkProxy* q_networkproxy_new5(int64_t typeVal, const char* hostName, unsigned short port) {
    return QNetworkProxy_new5(typeVal, qstring(hostName), port);
}

/// q_networkproxy_new6 constructs a new QNetworkProxy object.
///
/// ``` enum QNetworkProxy__ProxyType typeVal, const char* hostName, unsigned short port, const char* user ```
QNetworkProxy* q_networkproxy_new6(int64_t typeVal, const char* hostName, unsigned short port, const char* user) {
    return QNetworkProxy_new6(typeVal, qstring(hostName), port, qstring(user));
}

/// q_networkproxy_new7 constructs a new QNetworkProxy object.
///
/// ``` enum QNetworkProxy__ProxyType typeVal, const char* hostName, unsigned short port, const char* user, const char* password ```
QNetworkProxy* q_networkproxy_new7(int64_t typeVal, const char* hostName, unsigned short port, const char* user, const char* password) {
    return QNetworkProxy_new7(typeVal, qstring(hostName), port, qstring(user), qstring(password));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#operator=)
///
/// ``` QNetworkProxy* self, QNetworkProxy* other ```
void q_networkproxy_operator_assign(void* self, void* other) {
    QNetworkProxy_OperatorAssign((QNetworkProxy*)self, (QNetworkProxy*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#swap)
///
/// ``` QNetworkProxy* self, QNetworkProxy* other ```
void q_networkproxy_swap(void* self, void* other) {
    QNetworkProxy_Swap((QNetworkProxy*)self, (QNetworkProxy*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#operator==)
///
/// ``` QNetworkProxy* self, QNetworkProxy* other ```
bool q_networkproxy_operator_equal(void* self, void* other) {
    return QNetworkProxy_OperatorEqual((QNetworkProxy*)self, (QNetworkProxy*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#operator!=)
///
/// ``` QNetworkProxy* self, QNetworkProxy* other ```
bool q_networkproxy_operator_not_equal(void* self, void* other) {
    return QNetworkProxy_OperatorNotEqual((QNetworkProxy*)self, (QNetworkProxy*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#setType)
///
/// ``` QNetworkProxy* self, enum QNetworkProxy__ProxyType typeVal ```
void q_networkproxy_set_type(void* self, int64_t typeVal) {
    QNetworkProxy_SetType((QNetworkProxy*)self, typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#type)
///
/// ``` QNetworkProxy* self ```
int64_t q_networkproxy_type(void* self) {
    return QNetworkProxy_Type((QNetworkProxy*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#setCapabilities)
///
/// ``` QNetworkProxy* self, int capab ```
void q_networkproxy_set_capabilities(void* self, int64_t capab) {
    QNetworkProxy_SetCapabilities((QNetworkProxy*)self, capab);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#capabilities)
///
/// ``` QNetworkProxy* self ```
int64_t q_networkproxy_capabilities(void* self) {
    return QNetworkProxy_Capabilities((QNetworkProxy*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#isCachingProxy)
///
/// ``` QNetworkProxy* self ```
bool q_networkproxy_is_caching_proxy(void* self) {
    return QNetworkProxy_IsCachingProxy((QNetworkProxy*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#isTransparentProxy)
///
/// ``` QNetworkProxy* self ```
bool q_networkproxy_is_transparent_proxy(void* self) {
    return QNetworkProxy_IsTransparentProxy((QNetworkProxy*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#setUser)
///
/// ``` QNetworkProxy* self, const char* userName ```
void q_networkproxy_set_user(void* self, const char* userName) {
    QNetworkProxy_SetUser((QNetworkProxy*)self, qstring(userName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#user)
///
/// ``` QNetworkProxy* self ```
const char* q_networkproxy_user(void* self) {
    libqt_string _str = QNetworkProxy_User((QNetworkProxy*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#setPassword)
///
/// ``` QNetworkProxy* self, const char* password ```
void q_networkproxy_set_password(void* self, const char* password) {
    QNetworkProxy_SetPassword((QNetworkProxy*)self, qstring(password));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#password)
///
/// ``` QNetworkProxy* self ```
const char* q_networkproxy_password(void* self) {
    libqt_string _str = QNetworkProxy_Password((QNetworkProxy*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#setHostName)
///
/// ``` QNetworkProxy* self, const char* hostName ```
void q_networkproxy_set_host_name(void* self, const char* hostName) {
    QNetworkProxy_SetHostName((QNetworkProxy*)self, qstring(hostName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#hostName)
///
/// ``` QNetworkProxy* self ```
const char* q_networkproxy_host_name(void* self) {
    libqt_string _str = QNetworkProxy_HostName((QNetworkProxy*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#setPort)
///
/// ``` QNetworkProxy* self, unsigned short port ```
void q_networkproxy_set_port(void* self, unsigned short port) {
    QNetworkProxy_SetPort((QNetworkProxy*)self, port);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#port)
///
/// ``` QNetworkProxy* self ```
unsigned short q_networkproxy_port(void* self) {
    return QNetworkProxy_Port((QNetworkProxy*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#setApplicationProxy)
///
/// ``` QNetworkProxy* proxy ```
void q_networkproxy_set_application_proxy(void* proxy) {
    QNetworkProxy_SetApplicationProxy((QNetworkProxy*)proxy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#applicationProxy)
///
///
QNetworkProxy* q_networkproxy_application_proxy() {
    return QNetworkProxy_ApplicationProxy();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#header)
///
/// ``` QNetworkProxy* self, enum QNetworkRequest__KnownHeaders header ```
QVariant* q_networkproxy_header(void* self, int64_t header) {
    return QNetworkProxy_Header((QNetworkProxy*)self, header);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#setHeader)
///
/// ``` QNetworkProxy* self, enum QNetworkRequest__KnownHeaders header, QVariant* value ```
void q_networkproxy_set_header(void* self, int64_t header, void* value) {
    QNetworkProxy_SetHeader((QNetworkProxy*)self, header, (QVariant*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#hasRawHeader)
///
/// ``` QNetworkProxy* self, const char* headerName ```
bool q_networkproxy_has_raw_header(void* self, const char* headerName) {
    return QNetworkProxy_HasRawHeader((QNetworkProxy*)self, qstring(headerName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#rawHeaderList)
///
/// ``` QNetworkProxy* self ```
const char** q_networkproxy_raw_header_list(void* self) {
    libqt_list _arr = QNetworkProxy_RawHeaderList((QNetworkProxy*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#rawHeader)
///
/// ``` QNetworkProxy* self, const char* headerName ```
char* q_networkproxy_raw_header(void* self, const char* headerName) {
    libqt_string _str = QNetworkProxy_RawHeader((QNetworkProxy*)self, qstring(headerName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#setRawHeader)
///
/// ``` QNetworkProxy* self, const char* headerName, const char* value ```
void q_networkproxy_set_raw_header(void* self, const char* headerName, const char* value) {
    QNetworkProxy_SetRawHeader((QNetworkProxy*)self, qstring(headerName), qstring(value));
}

/// Delete this object from C++ memory.
///
/// ``` QNetworkProxy* self ```
void q_networkproxy_delete(void* self) {
    QNetworkProxy_Delete((QNetworkProxy*)(self));
}

/// https://doc.qt.io/qt-6/qnetworkproxyfactory.html

/// q_networkproxyfactory_new constructs a new QNetworkProxyFactory object.
///
///
QNetworkProxyFactory* q_networkproxyfactory_new() {
    return QNetworkProxyFactory_new();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#queryProxy)
///
/// ``` QNetworkProxyFactory* self, QNetworkProxyQuery* query ```
libqt_list /* of QNetworkProxy* */ q_networkproxyfactory_query_proxy(void* self, void* query) {
    libqt_list _arr = QNetworkProxyFactory_QueryProxy((QNetworkProxyFactory*)self, (QNetworkProxyQuery*)query);
    return _arr;
}

/// Allows for overriding the related default method
///
/// ``` QNetworkProxyFactory* self, libqt_list /* of QNetworkProxy* */ (*slot)(QNetworkProxyFactory*, QNetworkProxyQuery*) ```
void q_networkproxyfactory_on_query_proxy(void* self, libqt_list /* of QNetworkProxy* */ (*slot)(void*, void*)) {
    QNetworkProxyFactory_OnQueryProxy((QNetworkProxyFactory*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QNetworkProxyFactory* self, QNetworkProxyQuery* query ```
libqt_list /* of QNetworkProxy* */ q_networkproxyfactory_qbase_query_proxy(void* self, void* query) {
    libqt_list _arr = QNetworkProxyFactory_QBaseQueryProxy((QNetworkProxyFactory*)self, (QNetworkProxyQuery*)query);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#usesSystemConfiguration)
///
///
bool q_networkproxyfactory_uses_system_configuration() {
    return QNetworkProxyFactory_UsesSystemConfiguration();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#setUseSystemConfiguration)
///
/// ``` bool enable ```
void q_networkproxyfactory_set_use_system_configuration(bool enable) {
    QNetworkProxyFactory_SetUseSystemConfiguration(enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#setApplicationProxyFactory)
///
/// ``` QNetworkProxyFactory* factory ```
void q_networkproxyfactory_set_application_proxy_factory(void* factory) {
    QNetworkProxyFactory_SetApplicationProxyFactory((QNetworkProxyFactory*)factory);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#proxyForQuery)
///
/// ``` QNetworkProxyQuery* query ```
libqt_list /* of QNetworkProxy* */ q_networkproxyfactory_proxy_for_query(void* query) {
    libqt_list _arr = QNetworkProxyFactory_ProxyForQuery((QNetworkProxyQuery*)query);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#systemProxyForQuery)
///
///
libqt_list /* of QNetworkProxy* */ q_networkproxyfactory_system_proxy_for_query() {
    libqt_list _arr = QNetworkProxyFactory_SystemProxyForQuery();
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#operator=)
///
/// ``` QNetworkProxyFactory* self, QNetworkProxyFactory* param1 ```
void q_networkproxyfactory_operator_assign(void* self, void* param1) {
    QNetworkProxyFactory_OperatorAssign((QNetworkProxyFactory*)self, (QNetworkProxyFactory*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#systemProxyForQuery)
///
/// ``` QNetworkProxyQuery* query ```
libqt_list /* of QNetworkProxy* */ q_networkproxyfactory_system_proxy_for_query1(void* query) {
    libqt_list _arr = QNetworkProxyFactory_SystemProxyForQuery1((QNetworkProxyQuery*)query);
    return _arr;
}

/// Delete this object from C++ memory.
///
/// ``` QNetworkProxyFactory* self ```
void q_networkproxyfactory_delete(void* self) {
    QNetworkProxyFactory_Delete((QNetworkProxyFactory*)(self));
}