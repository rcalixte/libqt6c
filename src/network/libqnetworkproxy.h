#pragma once
#ifndef SRC_NETWORKQT6C_LIBQNETWORKPROXY_H
#define SRC_NETWORKQT6C_LIBQNETWORKPROXY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include <string.h>
#include "../libqurl.h"
#include "../libqvariant.h"

QNetworkProxyQuery* q_networkproxyquery_new();
QNetworkProxyQuery* q_networkproxyquery_new2(void* requestUrl);
QNetworkProxyQuery* q_networkproxyquery_new3(const char* hostname, int port);
QNetworkProxyQuery* q_networkproxyquery_new4(unsigned short bindPort);
QNetworkProxyQuery* q_networkproxyquery_new5(void* other);
QNetworkProxyQuery* q_networkproxyquery_new6(void* requestUrl, int64_t queryType);
QNetworkProxyQuery* q_networkproxyquery_new7(const char* hostname, int port, const char* protocolTag);
QNetworkProxyQuery* q_networkproxyquery_new8(const char* hostname, int port, const char* protocolTag, int64_t queryType);
QNetworkProxyQuery* q_networkproxyquery_new9(unsigned short bindPort, const char* protocolTag);
QNetworkProxyQuery* q_networkproxyquery_new10(unsigned short bindPort, const char* protocolTag, int64_t queryType);
void q_networkproxyquery_operator_assign(void* self, void* other);
void q_networkproxyquery_swap(void* self, void* other);
bool q_networkproxyquery_operator_equal(void* self, void* other);
bool q_networkproxyquery_operator_not_equal(void* self, void* other);
int64_t q_networkproxyquery_query_type(void* self);
void q_networkproxyquery_set_query_type(void* self, int64_t typeVal);
int32_t q_networkproxyquery_peer_port(void* self);
void q_networkproxyquery_set_peer_port(void* self, int port);
const char* q_networkproxyquery_peer_host_name(void* self);
void q_networkproxyquery_set_peer_host_name(void* self, const char* hostname);
int32_t q_networkproxyquery_local_port(void* self);
void q_networkproxyquery_set_local_port(void* self, int port);
const char* q_networkproxyquery_protocol_tag(void* self);
void q_networkproxyquery_set_protocol_tag(void* self, const char* protocolTag);
QUrl* q_networkproxyquery_url(void* self);
void q_networkproxyquery_set_url(void* self, void* url);
void q_networkproxyquery_delete(void* self);

QNetworkProxy* q_networkproxy_new();
QNetworkProxy* q_networkproxy_new2(int64_t typeVal);
QNetworkProxy* q_networkproxy_new3(void* other);
QNetworkProxy* q_networkproxy_new4(int64_t typeVal, const char* hostName);
QNetworkProxy* q_networkproxy_new5(int64_t typeVal, const char* hostName, unsigned short port);
QNetworkProxy* q_networkproxy_new6(int64_t typeVal, const char* hostName, unsigned short port, const char* user);
QNetworkProxy* q_networkproxy_new7(int64_t typeVal, const char* hostName, unsigned short port, const char* user, const char* password);
void q_networkproxy_operator_assign(void* self, void* other);
void q_networkproxy_swap(void* self, void* other);
bool q_networkproxy_operator_equal(void* self, void* other);
bool q_networkproxy_operator_not_equal(void* self, void* other);
void q_networkproxy_set_type(void* self, int64_t typeVal);
int64_t q_networkproxy_type(void* self);
void q_networkproxy_set_capabilities(void* self, int64_t capab);
int64_t q_networkproxy_capabilities(void* self);
bool q_networkproxy_is_caching_proxy(void* self);
bool q_networkproxy_is_transparent_proxy(void* self);
void q_networkproxy_set_user(void* self, const char* userName);
const char* q_networkproxy_user(void* self);
void q_networkproxy_set_password(void* self, const char* password);
const char* q_networkproxy_password(void* self);
void q_networkproxy_set_host_name(void* self, const char* hostName);
const char* q_networkproxy_host_name(void* self);
void q_networkproxy_set_port(void* self, unsigned short port);
unsigned short q_networkproxy_port(void* self);
void q_networkproxy_set_application_proxy(void* proxy);
QNetworkProxy* q_networkproxy_application_proxy();
QVariant* q_networkproxy_header(void* self, int64_t header);
void q_networkproxy_set_header(void* self, int64_t header, void* value);
bool q_networkproxy_has_raw_header(void* self, const char* headerName);
const char** q_networkproxy_raw_header_list(void* self);
char* q_networkproxy_raw_header(void* self, const char* headerName);
void q_networkproxy_set_raw_header(void* self, const char* headerName, const char* value);
void q_networkproxy_delete(void* self);

QNetworkProxyFactory* q_networkproxyfactory_new();
libqt_list /* of QNetworkProxy* */ q_networkproxyfactory_query_proxy(void* self, void* query);
void q_networkproxyfactory_on_query_proxy(void* self, libqt_list /* of QNetworkProxy* */ (*slot)(void*, void*));
libqt_list /* of QNetworkProxy* */ q_networkproxyfactory_qbase_query_proxy(void* self, void* query);
bool q_networkproxyfactory_uses_system_configuration();
void q_networkproxyfactory_set_use_system_configuration(bool enable);
void q_networkproxyfactory_set_application_proxy_factory(void* factory);
libqt_list /* of QNetworkProxy* */ q_networkproxyfactory_proxy_for_query(void* query);
libqt_list /* of QNetworkProxy* */ q_networkproxyfactory_system_proxy_for_query();
void q_networkproxyfactory_operator_assign(void* self, void* param1);
libqt_list /* of QNetworkProxy* */ q_networkproxyfactory_system_proxy_for_query1(void* query);
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
