#pragma once
#ifndef SRC_NETWORKQT6C_LIBQNETWORKPROXY_H
#define SRC_NETWORKQT6C_LIBQNETWORKPROXY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qnetworkproxyquery.html

/// q_networkproxyquery_new constructs a new QNetworkProxyQuery object.
///
///
QNetworkProxyQuery* q_networkproxyquery_new();

/// q_networkproxyquery_new2 constructs a new QNetworkProxyQuery object.
///
/// ``` QUrl* requestUrl ```
QNetworkProxyQuery* q_networkproxyquery_new2(void* requestUrl);

/// q_networkproxyquery_new3 constructs a new QNetworkProxyQuery object.
///
/// ``` const char* hostname, int port ```
QNetworkProxyQuery* q_networkproxyquery_new3(const char* hostname, int port);

/// q_networkproxyquery_new4 constructs a new QNetworkProxyQuery object.
///
/// ``` unsigned short bindPort ```
QNetworkProxyQuery* q_networkproxyquery_new4(unsigned short bindPort);

/// q_networkproxyquery_new5 constructs a new QNetworkProxyQuery object.
///
/// ``` QNetworkProxyQuery* other ```
QNetworkProxyQuery* q_networkproxyquery_new5(void* other);

/// q_networkproxyquery_new6 constructs a new QNetworkProxyQuery object.
///
/// ``` QUrl* requestUrl, enum QNetworkProxyQuery__QueryType queryType ```
QNetworkProxyQuery* q_networkproxyquery_new6(void* requestUrl, int64_t queryType);

/// q_networkproxyquery_new7 constructs a new QNetworkProxyQuery object.
///
/// ``` const char* hostname, int port, const char* protocolTag ```
QNetworkProxyQuery* q_networkproxyquery_new7(const char* hostname, int port, const char* protocolTag);

/// q_networkproxyquery_new8 constructs a new QNetworkProxyQuery object.
///
/// ``` const char* hostname, int port, const char* protocolTag, enum QNetworkProxyQuery__QueryType queryType ```
QNetworkProxyQuery* q_networkproxyquery_new8(const char* hostname, int port, const char* protocolTag, int64_t queryType);

/// q_networkproxyquery_new9 constructs a new QNetworkProxyQuery object.
///
/// ``` unsigned short bindPort, const char* protocolTag ```
QNetworkProxyQuery* q_networkproxyquery_new9(unsigned short bindPort, const char* protocolTag);

/// q_networkproxyquery_new10 constructs a new QNetworkProxyQuery object.
///
/// ``` unsigned short bindPort, const char* protocolTag, enum QNetworkProxyQuery__QueryType queryType ```
QNetworkProxyQuery* q_networkproxyquery_new10(unsigned short bindPort, const char* protocolTag, int64_t queryType);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#operator-eq)
///
/// ``` QNetworkProxyQuery* self, QNetworkProxyQuery* other ```
void q_networkproxyquery_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#swap)
///
/// ``` QNetworkProxyQuery* self, QNetworkProxyQuery* other ```
void q_networkproxyquery_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#operator-eq-eq)
///
/// ``` QNetworkProxyQuery* self, QNetworkProxyQuery* other ```
bool q_networkproxyquery_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#operator-not-eq)
///
/// ``` QNetworkProxyQuery* self, QNetworkProxyQuery* other ```
bool q_networkproxyquery_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#queryType)
///
/// ``` QNetworkProxyQuery* self ```
int64_t q_networkproxyquery_query_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setQueryType)
///
/// ``` QNetworkProxyQuery* self, enum QNetworkProxyQuery__QueryType typeVal ```
void q_networkproxyquery_set_query_type(void* self, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#peerPort)
///
/// ``` QNetworkProxyQuery* self ```
int32_t q_networkproxyquery_peer_port(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setPeerPort)
///
/// ``` QNetworkProxyQuery* self, int port ```
void q_networkproxyquery_set_peer_port(void* self, int port);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#peerHostName)
///
/// ``` QNetworkProxyQuery* self ```
const char* q_networkproxyquery_peer_host_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setPeerHostName)
///
/// ``` QNetworkProxyQuery* self, const char* hostname ```
void q_networkproxyquery_set_peer_host_name(void* self, const char* hostname);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#localPort)
///
/// ``` QNetworkProxyQuery* self ```
int32_t q_networkproxyquery_local_port(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setLocalPort)
///
/// ``` QNetworkProxyQuery* self, int port ```
void q_networkproxyquery_set_local_port(void* self, int port);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#protocolTag)
///
/// ``` QNetworkProxyQuery* self ```
const char* q_networkproxyquery_protocol_tag(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setProtocolTag)
///
/// ``` QNetworkProxyQuery* self, const char* protocolTag ```
void q_networkproxyquery_set_protocol_tag(void* self, const char* protocolTag);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#url)
///
/// ``` QNetworkProxyQuery* self ```
QUrl* q_networkproxyquery_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#setUrl)
///
/// ``` QNetworkProxyQuery* self, QUrl* url ```
void q_networkproxyquery_set_url(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyquery.html#dtor.QNetworkProxyQuery)
///
/// Delete this object from C++ memory.
///
/// ``` QNetworkProxyQuery* self ```
void q_networkproxyquery_delete(void* self);

/// https://doc.qt.io/qt-6/qnetworkproxy.html

/// q_networkproxy_new constructs a new QNetworkProxy object.
///
///
QNetworkProxy* q_networkproxy_new();

/// q_networkproxy_new2 constructs a new QNetworkProxy object.
///
/// ``` enum QNetworkProxy__ProxyType typeVal ```
QNetworkProxy* q_networkproxy_new2(int64_t typeVal);

/// q_networkproxy_new3 constructs a new QNetworkProxy object.
///
/// ``` QNetworkProxy* other ```
QNetworkProxy* q_networkproxy_new3(void* other);

/// q_networkproxy_new4 constructs a new QNetworkProxy object.
///
/// ``` enum QNetworkProxy__ProxyType typeVal, const char* hostName ```
QNetworkProxy* q_networkproxy_new4(int64_t typeVal, const char* hostName);

/// q_networkproxy_new5 constructs a new QNetworkProxy object.
///
/// ``` enum QNetworkProxy__ProxyType typeVal, const char* hostName, unsigned short port ```
QNetworkProxy* q_networkproxy_new5(int64_t typeVal, const char* hostName, unsigned short port);

/// q_networkproxy_new6 constructs a new QNetworkProxy object.
///
/// ``` enum QNetworkProxy__ProxyType typeVal, const char* hostName, unsigned short port, const char* user ```
QNetworkProxy* q_networkproxy_new6(int64_t typeVal, const char* hostName, unsigned short port, const char* user);

/// q_networkproxy_new7 constructs a new QNetworkProxy object.
///
/// ``` enum QNetworkProxy__ProxyType typeVal, const char* hostName, unsigned short port, const char* user, const char* password ```
QNetworkProxy* q_networkproxy_new7(int64_t typeVal, const char* hostName, unsigned short port, const char* user, const char* password);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#operator-eq)
///
/// ``` QNetworkProxy* self, QNetworkProxy* other ```
void q_networkproxy_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#swap)
///
/// ``` QNetworkProxy* self, QNetworkProxy* other ```
void q_networkproxy_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#operator-eq-eq)
///
/// ``` QNetworkProxy* self, QNetworkProxy* other ```
bool q_networkproxy_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#operator-not-eq)
///
/// ``` QNetworkProxy* self, QNetworkProxy* other ```
bool q_networkproxy_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#setType)
///
/// ``` QNetworkProxy* self, enum QNetworkProxy__ProxyType typeVal ```
void q_networkproxy_set_type(void* self, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#type)
///
/// ``` QNetworkProxy* self ```
int64_t q_networkproxy_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#setCapabilities)
///
/// ``` QNetworkProxy* self, int capab ```
void q_networkproxy_set_capabilities(void* self, int64_t capab);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#capabilities)
///
/// ``` QNetworkProxy* self ```
int64_t q_networkproxy_capabilities(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#isCachingProxy)
///
/// ``` QNetworkProxy* self ```
bool q_networkproxy_is_caching_proxy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#isTransparentProxy)
///
/// ``` QNetworkProxy* self ```
bool q_networkproxy_is_transparent_proxy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#setUser)
///
/// ``` QNetworkProxy* self, const char* userName ```
void q_networkproxy_set_user(void* self, const char* userName);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#user)
///
/// ``` QNetworkProxy* self ```
const char* q_networkproxy_user(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#setPassword)
///
/// ``` QNetworkProxy* self, const char* password ```
void q_networkproxy_set_password(void* self, const char* password);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#password)
///
/// ``` QNetworkProxy* self ```
const char* q_networkproxy_password(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#setHostName)
///
/// ``` QNetworkProxy* self, const char* hostName ```
void q_networkproxy_set_host_name(void* self, const char* hostName);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#hostName)
///
/// ``` QNetworkProxy* self ```
const char* q_networkproxy_host_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#setPort)
///
/// ``` QNetworkProxy* self, unsigned short port ```
void q_networkproxy_set_port(void* self, unsigned short port);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#port)
///
/// ``` QNetworkProxy* self ```
unsigned short q_networkproxy_port(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#setApplicationProxy)
///
/// ``` QNetworkProxy* proxy ```
void q_networkproxy_set_application_proxy(void* proxy);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#applicationProxy)
///
///
QNetworkProxy* q_networkproxy_application_proxy();

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#headers)
///
/// ``` QNetworkProxy* self ```
QHttpHeaders* q_networkproxy_headers(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#setHeaders)
///
/// ``` QNetworkProxy* self, QHttpHeaders* newHeaders ```
void q_networkproxy_set_headers(void* self, void* newHeaders);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#header)
///
/// ``` QNetworkProxy* self, enum QNetworkRequest__KnownHeaders header ```
QVariant* q_networkproxy_header(void* self, int64_t header);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#setHeader)
///
/// ``` QNetworkProxy* self, enum QNetworkRequest__KnownHeaders header, QVariant* value ```
void q_networkproxy_set_header(void* self, int64_t header, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#hasRawHeader)
///
/// ``` QNetworkProxy* self, const char* headerName ```
bool q_networkproxy_has_raw_header(void* self, const char* headerName);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#rawHeaderList)
///
/// ``` QNetworkProxy* self ```
const char** q_networkproxy_raw_header_list(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#rawHeader)
///
/// ``` QNetworkProxy* self, const char* headerName ```
char* q_networkproxy_raw_header(void* self, const char* headerName);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#setRawHeader)
///
/// ``` QNetworkProxy* self, const char* headerName, const char* value ```
void q_networkproxy_set_raw_header(void* self, const char* headerName, const char* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxy.html#dtor.QNetworkProxy)
///
/// Delete this object from C++ memory.
///
/// ``` QNetworkProxy* self ```
void q_networkproxy_delete(void* self);

/// https://doc.qt.io/qt-6/qnetworkproxyfactory.html

/// q_networkproxyfactory_new constructs a new QNetworkProxyFactory object.
///
///
QNetworkProxyFactory* q_networkproxyfactory_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#queryProxy)
///
/// ``` QNetworkProxyFactory* self, QNetworkProxyQuery* query ```
libqt_list /* of QNetworkProxy* */ q_networkproxyfactory_query_proxy(void* self, void* query);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#queryProxy)
///
/// Allows for overriding the related default method
///
/// ``` QNetworkProxyFactory* self, libqt_list /* of QNetworkProxy* */ (*slot)(QNetworkProxyFactory*, QNetworkProxyQuery*) ```
void q_networkproxyfactory_on_query_proxy(void* self, libqt_list /* of QNetworkProxy* */ (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#queryProxy)
///
/// Base class method implementation
///
/// ``` QNetworkProxyFactory* self, QNetworkProxyQuery* query ```
libqt_list /* of QNetworkProxy* */ q_networkproxyfactory_qbase_query_proxy(void* self, void* query);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#usesSystemConfiguration)
///
///
bool q_networkproxyfactory_uses_system_configuration();

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#setUseSystemConfiguration)
///
/// ``` bool enable ```
void q_networkproxyfactory_set_use_system_configuration(bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#setApplicationProxyFactory)
///
/// ``` QNetworkProxyFactory* factory ```
void q_networkproxyfactory_set_application_proxy_factory(void* factory);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#proxyForQuery)
///
/// ``` QNetworkProxyQuery* query ```
libqt_list /* of QNetworkProxy* */ q_networkproxyfactory_proxy_for_query(void* query);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#systemProxyForQuery)
///
///
libqt_list /* of QNetworkProxy* */ q_networkproxyfactory_system_proxy_for_query();

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#operator-eq)
///
/// ``` QNetworkProxyFactory* self, QNetworkProxyFactory* param1 ```
void q_networkproxyfactory_operator_assign(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#systemProxyForQuery)
///
/// ``` QNetworkProxyQuery* query ```
libqt_list /* of QNetworkProxy* */ q_networkproxyfactory_system_proxy_for_query1(void* query);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkproxyfactory.html#dtor.QNetworkProxyFactory)
///
/// Delete this object from C++ memory.
///
/// ``` QNetworkProxyFactory* self ```
void q_networkproxyfactory_delete(void* self);

/// https://doc.qt.io/qt-6/qnetworkproxy.html#types

typedef enum {
    QNETWORKPROXYQUERY_QUERYTYPE_TCPSOCKET = 0,
    QNETWORKPROXYQUERY_QUERYTYPE_UDPSOCKET = 1,
    QNETWORKPROXYQUERY_QUERYTYPE_SCTPSOCKET = 2,
    QNETWORKPROXYQUERY_QUERYTYPE_TCPSERVER = 100,
    QNETWORKPROXYQUERY_QUERYTYPE_URLREQUEST = 101,
    QNETWORKPROXYQUERY_QUERYTYPE_SCTPSERVER = 102
} QNetworkProxyQuery__QueryType;

typedef enum {
    QNETWORKPROXY_PROXYTYPE_DEFAULTPROXY = 0,
    QNETWORKPROXY_PROXYTYPE_SOCKS5PROXY = 1,
    QNETWORKPROXY_PROXYTYPE_NOPROXY = 2,
    QNETWORKPROXY_PROXYTYPE_HTTPPROXY = 3,
    QNETWORKPROXY_PROXYTYPE_HTTPCACHINGPROXY = 4,
    QNETWORKPROXY_PROXYTYPE_FTPCACHINGPROXY = 5
} QNetworkProxy__ProxyType;

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
