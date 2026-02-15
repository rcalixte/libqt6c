#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQNETWORKPROXY_H
#define SRC_NETWORK_QT6C_LIBQNETWORKPROXY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html)

/// q_networkproxyquery_new constructs a new QNetworkProxyQuery object.
///
QNetworkProxyQuery* q_networkproxyquery_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html)

/// q_networkproxyquery_new2 constructs a new QNetworkProxyQuery object.
///
/// @param requestUrl QUrl*
///
QNetworkProxyQuery* q_networkproxyquery_new2(void* requestUrl);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html)

/// q_networkproxyquery_new3 constructs a new QNetworkProxyQuery object.
///
/// @param hostname const char*
/// @param port int
///
QNetworkProxyQuery* q_networkproxyquery_new3(const char* hostname, int port);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html)

/// q_networkproxyquery_new4 constructs a new QNetworkProxyQuery object.
///
/// @param bindPort unsigned short
///
QNetworkProxyQuery* q_networkproxyquery_new4(unsigned short bindPort);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html)

/// q_networkproxyquery_new5 constructs a new QNetworkProxyQuery object.
///
/// @param other QNetworkProxyQuery*
///
QNetworkProxyQuery* q_networkproxyquery_new5(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html)

/// q_networkproxyquery_new6 constructs a new QNetworkProxyQuery object.
///
/// @param requestUrl QUrl*
/// @param queryType enum QNetworkProxyQuery__QueryType
///
QNetworkProxyQuery* q_networkproxyquery_new6(void* requestUrl, int32_t queryType);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html)

/// q_networkproxyquery_new7 constructs a new QNetworkProxyQuery object.
///
/// @param hostname const char*
/// @param port int
/// @param protocolTag const char*
///
QNetworkProxyQuery* q_networkproxyquery_new7(const char* hostname, int port, const char* protocolTag);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html)

/// q_networkproxyquery_new8 constructs a new QNetworkProxyQuery object.
///
/// @param hostname const char*
/// @param port int
/// @param protocolTag const char*
/// @param queryType enum QNetworkProxyQuery__QueryType
///
QNetworkProxyQuery* q_networkproxyquery_new8(const char* hostname, int port, const char* protocolTag, int32_t queryType);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html)

/// q_networkproxyquery_new9 constructs a new QNetworkProxyQuery object.
///
/// @param bindPort unsigned short
/// @param protocolTag const char*
///
QNetworkProxyQuery* q_networkproxyquery_new9(unsigned short bindPort, const char* protocolTag);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html)

/// q_networkproxyquery_new10 constructs a new QNetworkProxyQuery object.
///
/// @param bindPort unsigned short
/// @param protocolTag const char*
/// @param queryType enum QNetworkProxyQuery__QueryType
///
QNetworkProxyQuery* q_networkproxyquery_new10(unsigned short bindPort, const char* protocolTag, int32_t queryType);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#operator-eq)
///
/// @param self QNetworkProxyQuery*
/// @param other QNetworkProxyQuery*
///
void q_networkproxyquery_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#swap)
///
/// @param self QNetworkProxyQuery*
/// @param other QNetworkProxyQuery*
///
void q_networkproxyquery_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#operator-eq-eq)
///
/// @param self QNetworkProxyQuery*
/// @param other QNetworkProxyQuery*
///
bool q_networkproxyquery_operator_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#operator-not-eq)
///
/// @param self QNetworkProxyQuery*
/// @param other QNetworkProxyQuery*
///
bool q_networkproxyquery_operator_not_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#queryType)
///
/// @param self QNetworkProxyQuery*
///
/// @return enum QNetworkProxyQuery__QueryType
///
int32_t q_networkproxyquery_query_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setQueryType)
///
/// @param self QNetworkProxyQuery*
/// @param type enum QNetworkProxyQuery__QueryType
///
void q_networkproxyquery_set_query_type(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#peerPort)
///
/// @param self QNetworkProxyQuery*
///
int32_t q_networkproxyquery_peer_port(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setPeerPort)
///
/// @param self QNetworkProxyQuery*
/// @param port int
///
void q_networkproxyquery_set_peer_port(void* self, int port);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#peerHostName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QNetworkProxyQuery*
///
const char* q_networkproxyquery_peer_host_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setPeerHostName)
///
/// @param self QNetworkProxyQuery*
/// @param hostname const char*
///
void q_networkproxyquery_set_peer_host_name(void* self, const char* hostname);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#localPort)
///
/// @param self QNetworkProxyQuery*
///
int32_t q_networkproxyquery_local_port(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setLocalPort)
///
/// @param self QNetworkProxyQuery*
/// @param port int
///
void q_networkproxyquery_set_local_port(void* self, int port);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#protocolTag)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QNetworkProxyQuery*
///
const char* q_networkproxyquery_protocol_tag(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setProtocolTag)
///
/// @param self QNetworkProxyQuery*
/// @param protocolTag const char*
///
void q_networkproxyquery_set_protocol_tag(void* self, const char* protocolTag);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#url)
///
/// @param self QNetworkProxyQuery*
///
QUrl* q_networkproxyquery_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setUrl)
///
/// @param self QNetworkProxyQuery*
/// @param url QUrl*
///
void q_networkproxyquery_set_url(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyquery.html#dtor.QNetworkProxyQuery)
///
/// Delete this object from C++ memory.
///
/// @param self QNetworkProxyQuery*
///
void q_networkproxyquery_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html)

/// q_networkproxy_new constructs a new QNetworkProxy object.
///
QNetworkProxy* q_networkproxy_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html)

/// q_networkproxy_new2 constructs a new QNetworkProxy object.
///
/// @param type enum QNetworkProxy__ProxyType
///
QNetworkProxy* q_networkproxy_new2(int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html)

/// q_networkproxy_new3 constructs a new QNetworkProxy object.
///
/// @param other QNetworkProxy*
///
QNetworkProxy* q_networkproxy_new3(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html)

/// q_networkproxy_new4 constructs a new QNetworkProxy object.
///
/// @param type enum QNetworkProxy__ProxyType
/// @param hostName const char*
///
QNetworkProxy* q_networkproxy_new4(int32_t type, const char* hostName);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html)

/// q_networkproxy_new5 constructs a new QNetworkProxy object.
///
/// @param type enum QNetworkProxy__ProxyType
/// @param hostName const char*
/// @param port unsigned short
///
QNetworkProxy* q_networkproxy_new5(int32_t type, const char* hostName, unsigned short port);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html)

/// q_networkproxy_new6 constructs a new QNetworkProxy object.
///
/// @param type enum QNetworkProxy__ProxyType
/// @param hostName const char*
/// @param port unsigned short
/// @param user const char*
///
QNetworkProxy* q_networkproxy_new6(int32_t type, const char* hostName, unsigned short port, const char* user);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html)

/// q_networkproxy_new7 constructs a new QNetworkProxy object.
///
/// @param type enum QNetworkProxy__ProxyType
/// @param hostName const char*
/// @param port unsigned short
/// @param user const char*
/// @param password const char*
///
QNetworkProxy* q_networkproxy_new7(int32_t type, const char* hostName, unsigned short port, const char* user, const char* password);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#operator-eq)
///
/// @param self QNetworkProxy*
/// @param other QNetworkProxy*
///
void q_networkproxy_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#swap)
///
/// @param self QNetworkProxy*
/// @param other QNetworkProxy*
///
void q_networkproxy_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#operator-eq-eq)
///
/// @param self QNetworkProxy*
/// @param other QNetworkProxy*
///
bool q_networkproxy_operator_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#operator-not-eq)
///
/// @param self QNetworkProxy*
/// @param other QNetworkProxy*
///
bool q_networkproxy_operator_not_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#setType)
///
/// @param self QNetworkProxy*
/// @param type enum QNetworkProxy__ProxyType
///
void q_networkproxy_set_type(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#type)
///
/// @param self QNetworkProxy*
///
/// @return enum QNetworkProxy__ProxyType
///
int32_t q_networkproxy_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#setCapabilities)
///
/// @param self QNetworkProxy*
/// @param capab flag of enum QNetworkProxy__Capability
///
void q_networkproxy_set_capabilities(void* self, int32_t capab);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#capabilities)
///
/// @param self QNetworkProxy*
///
/// @return flag of enum QNetworkProxy__Capability
///
int32_t q_networkproxy_capabilities(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#isCachingProxy)
///
/// @param self QNetworkProxy*
///
bool q_networkproxy_is_caching_proxy(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#isTransparentProxy)
///
/// @param self QNetworkProxy*
///
bool q_networkproxy_is_transparent_proxy(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#setUser)
///
/// @param self QNetworkProxy*
/// @param userName const char*
///
void q_networkproxy_set_user(void* self, const char* userName);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#user)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QNetworkProxy*
///
const char* q_networkproxy_user(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#setPassword)
///
/// @param self QNetworkProxy*
/// @param password const char*
///
void q_networkproxy_set_password(void* self, const char* password);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#password)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QNetworkProxy*
///
const char* q_networkproxy_password(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#setHostName)
///
/// @param self QNetworkProxy*
/// @param hostName const char*
///
void q_networkproxy_set_host_name(void* self, const char* hostName);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#hostName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QNetworkProxy*
///
const char* q_networkproxy_host_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#setPort)
///
/// @param self QNetworkProxy*
/// @param port unsigned short
///
void q_networkproxy_set_port(void* self, unsigned short port);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#port)
///
/// @param self QNetworkProxy*
///
unsigned short q_networkproxy_port(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#setApplicationProxy)
///
/// @param proxy QNetworkProxy*
///
void q_networkproxy_set_application_proxy(void* proxy);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#applicationProxy)
///
QNetworkProxy* q_networkproxy_application_proxy();

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#headers)
///
/// @param self QNetworkProxy*
///
QHttpHeaders* q_networkproxy_headers(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#setHeaders)
///
/// @param self QNetworkProxy*
/// @param newHeaders QHttpHeaders*
///
void q_networkproxy_set_headers(void* self, void* newHeaders);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#header)
///
/// @param self QNetworkProxy*
/// @param header enum QNetworkRequest__KnownHeaders
///
QVariant* q_networkproxy_header(void* self, int32_t header);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#setHeader)
///
/// @param self QNetworkProxy*
/// @param header enum QNetworkRequest__KnownHeaders
/// @param value QVariant*
///
void q_networkproxy_set_header(void* self, int32_t header, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#hasRawHeader)
///
/// @param self QNetworkProxy*
/// @param headerName char*
///
bool q_networkproxy_has_raw_header(void* self, char* headerName);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#rawHeaderList)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QNetworkProxy*
///
const char** q_networkproxy_raw_header_list(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#rawHeader)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QNetworkProxy*
/// @param headerName char*
///
char* q_networkproxy_raw_header(void* self, char* headerName);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#setRawHeader)
///
/// @param self QNetworkProxy*
/// @param headerName char*
/// @param value char*
///
void q_networkproxy_set_raw_header(void* self, char* headerName, char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#dtor.QNetworkProxy)
///
/// Delete this object from C++ memory.
///
/// @param self QNetworkProxy*
///
void q_networkproxy_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html)

/// q_networkproxyfactory_new constructs a new QNetworkProxyFactory object.
///
QNetworkProxyFactory* q_networkproxyfactory_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#queryProxy)
///
/// @param self QNetworkProxyFactory*
/// @param query QNetworkProxyQuery*
///
/// @return libqt_list of QNetworkProxy*
///
libqt_list q_networkproxyfactory_query_proxy(void* self, void* query);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#queryProxy)
///
/// Allows for overriding the related default method
///
/// @param self QNetworkProxyFactory*
/// @param callback libqt_list of QNetworkProxy* func(QNetworkProxyFactory* self, QNetworkProxyQuery* query)
///
void q_networkproxyfactory_on_query_proxy(void* self, libqt_list (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#queryProxy)
///
/// Base class method implementation
///
/// @param self QNetworkProxyFactory*
/// @param query QNetworkProxyQuery*
///
/// @return libqt_list of QNetworkProxy*
///
libqt_list q_networkproxyfactory_qbase_query_proxy(void* self, void* query);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#usesSystemConfiguration)
///
bool q_networkproxyfactory_uses_system_configuration();

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#setUseSystemConfiguration)
///
/// @param enable bool
///
void q_networkproxyfactory_set_use_system_configuration(bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#setApplicationProxyFactory)
///
/// @param factory QNetworkProxyFactory*
///
void q_networkproxyfactory_set_application_proxy_factory(void* factory);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#proxyForQuery)
///
/// @param query QNetworkProxyQuery*
///
/// @return libqt_list of QNetworkProxy*
///
libqt_list q_networkproxyfactory_proxy_for_query(void* query);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#systemProxyForQuery)
///
/// @return libqt_list of QNetworkProxy*
///
libqt_list q_networkproxyfactory_system_proxy_for_query();

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#operator-eq)
///
/// @param self QNetworkProxyFactory*
/// @param param1 QNetworkProxyFactory*
///
void q_networkproxyfactory_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#systemProxyForQuery)
///
/// @param query QNetworkProxyQuery*
///
/// @return libqt_list of QNetworkProxy*
///
libqt_list q_networkproxyfactory_system_proxy_for_query1(void* query);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#dtor.QNetworkProxyFactory)
///
/// Delete this object from C++ memory.
///
/// @param self QNetworkProxyFactory*
///
void q_networkproxyfactory_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#public-types)

typedef enum {
    QNETWORKPROXYQUERY_QUERYTYPE_TCPSOCKET = 0,
    QNETWORKPROXYQUERY_QUERYTYPE_UDPSOCKET = 1,
    QNETWORKPROXYQUERY_QUERYTYPE_SCTPSOCKET = 2,
    QNETWORKPROXYQUERY_QUERYTYPE_TCPSERVER = 100,
    QNETWORKPROXYQUERY_QUERYTYPE_URLREQUEST = 101,
    QNETWORKPROXYQUERY_QUERYTYPE_SCTPSERVER = 102
} QNetworkProxyQuery__QueryType;

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#public-types)

typedef enum {
    QNETWORKPROXY_PROXYTYPE_DEFAULTPROXY = 0,
    QNETWORKPROXY_PROXYTYPE_SOCKS5PROXY = 1,
    QNETWORKPROXY_PROXYTYPE_NOPROXY = 2,
    QNETWORKPROXY_PROXYTYPE_HTTPPROXY = 3,
    QNETWORKPROXY_PROXYTYPE_HTTPCACHINGPROXY = 4,
    QNETWORKPROXY_PROXYTYPE_FTPCACHINGPROXY = 5
} QNetworkProxy__ProxyType;

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkproxy.html#public-types)

typedef enum {
    QNETWORKPROXY_CAPABILITY_TUNNELINGCAPABILITY = 1,
    QNETWORKPROXY_CAPABILITY_LISTENINGCAPABILITY = 2,
    QNETWORKPROXY_CAPABILITY_UDPTUNNELINGCAPABILITY = 4,
    QNETWORKPROXY_CAPABILITY_CACHINGCAPABILITY = 8,
    QNETWORKPROXY_CAPABILITY_HOSTNAMELOOKUPCAPABILITY = 16,
    QNETWORKPROXY_CAPABILITY_SCTPTUNNELINGCAPABILITY = 32,
    QNETWORKPROXY_CAPABILITY_SCTPLISTENINGCAPABILITY = 64
} QNetworkProxy__Capability;

#endif
