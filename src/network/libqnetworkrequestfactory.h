#pragma once
#ifndef NETWORK_LIBQNETWORKREQUESTFACTORY_H
#define NETWORK_LIBQNETWORKREQUESTFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html)

/// q_networkrequestfactory_new constructs a new QNetworkRequestFactory object.
///
QNetworkRequestFactory* q_networkrequestfactory_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html)

/// q_networkrequestfactory_new2 constructs a new QNetworkRequestFactory object.
///
/// @param baseUrl QUrl*
///
QNetworkRequestFactory* q_networkrequestfactory_new2(const void* baseUrl);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html)

/// q_networkrequestfactory_new3 constructs a new QNetworkRequestFactory object.
///
/// @param other QNetworkRequestFactory*
///
QNetworkRequestFactory* q_networkrequestfactory_new3(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#operator-eq)
///
/// @param self QNetworkRequestFactory*
/// @param other QNetworkRequestFactory*
///
void q_networkrequestfactory_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#swap)
///
/// @param self QNetworkRequestFactory*
/// @param other QNetworkRequestFactory*
///
void q_networkrequestfactory_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#baseUrl)
///
/// @param self const QNetworkRequestFactory*
///
QUrl* q_networkrequestfactory_base_url(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setBaseUrl)
///
/// @param self QNetworkRequestFactory*
/// @param url QUrl*
///
void q_networkrequestfactory_set_base_url(void* self, const void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#sslConfiguration)
///
/// @param self const QNetworkRequestFactory*
///
QSslConfiguration* q_networkrequestfactory_ssl_configuration(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setSslConfiguration)
///
/// @param self QNetworkRequestFactory*
/// @param configuration QSslConfiguration*
///
void q_networkrequestfactory_set_ssl_configuration(void* self, const void* configuration);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#createRequest)
///
/// @param self const QNetworkRequestFactory*
///
QNetworkRequest* q_networkrequestfactory_create_request(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#createRequest)
///
/// @param self const QNetworkRequestFactory*
/// @param query QUrlQuery*
///
QNetworkRequest* q_networkrequestfactory_create_request2(const void* self, const void* query);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#createRequest)
///
/// @param self const QNetworkRequestFactory*
/// @param path const char*
///
QNetworkRequest* q_networkrequestfactory_create_request3(const void* self, const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#createRequest)
///
/// @param self const QNetworkRequestFactory*
/// @param path const char*
/// @param query QUrlQuery*
///
QNetworkRequest* q_networkrequestfactory_create_request4(const void* self, const char* path, const void* query);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setCommonHeaders)
///
/// @param self QNetworkRequestFactory*
/// @param headers QHttpHeaders*
///
void q_networkrequestfactory_set_common_headers(void* self, const void* headers);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#commonHeaders)
///
/// @param self const QNetworkRequestFactory*
///
QHttpHeaders* q_networkrequestfactory_common_headers(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearCommonHeaders)
///
/// @param self QNetworkRequestFactory*
///
void q_networkrequestfactory_clear_common_headers(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#bearerToken)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QNetworkRequestFactory*
///
char* q_networkrequestfactory_bearer_token(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setBearerToken)
///
/// @param self QNetworkRequestFactory*
/// @param token char*
///
void q_networkrequestfactory_set_bearer_token(void* self, char* token);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearBearerToken)
///
/// @param self QNetworkRequestFactory*
///
void q_networkrequestfactory_clear_bearer_token(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#userName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QNetworkRequestFactory*
///
const char* q_networkrequestfactory_user_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setUserName)
///
/// @param self QNetworkRequestFactory*
/// @param userName const char*
///
void q_networkrequestfactory_set_user_name(void* self, const char* userName);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearUserName)
///
/// @param self QNetworkRequestFactory*
///
void q_networkrequestfactory_clear_user_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#password)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QNetworkRequestFactory*
///
const char* q_networkrequestfactory_password(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setPassword)
///
/// @param self QNetworkRequestFactory*
/// @param password const char*
///
void q_networkrequestfactory_set_password(void* self, const char* password);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearPassword)
///
/// @param self QNetworkRequestFactory*
///
void q_networkrequestfactory_clear_password(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setTransferTimeout)
///
/// @param self QNetworkRequestFactory*
/// @param timeout int64_t of milliseconds
///
void q_networkrequestfactory_set_transfer_timeout(void* self, int64_t timeout);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#transferTimeout)
///
/// @param self const QNetworkRequestFactory*
///
/// @return int64_t of milliseconds
///
int64_t q_networkrequestfactory_transfer_timeout(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#queryParameters)
///
/// @param self const QNetworkRequestFactory*
///
QUrlQuery* q_networkrequestfactory_query_parameters(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setQueryParameters)
///
/// @param self QNetworkRequestFactory*
/// @param query QUrlQuery*
///
void q_networkrequestfactory_set_query_parameters(void* self, const void* query);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearQueryParameters)
///
/// @param self QNetworkRequestFactory*
///
void q_networkrequestfactory_clear_query_parameters(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setPriority)
///
/// @param self QNetworkRequestFactory*
/// @param priority enum QNetworkRequest__Priority
///
void q_networkrequestfactory_set_priority(void* self, int32_t priority);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#priority)
///
/// @param self const QNetworkRequestFactory*
///
/// @return enum QNetworkRequest__Priority
///
int32_t q_networkrequestfactory_priority(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#attribute)
///
/// @param self const QNetworkRequestFactory*
/// @param attribute enum QNetworkRequest__Attribute
///
QVariant* q_networkrequestfactory_attribute(const void* self, int32_t attribute);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#attribute)
///
/// @param self const QNetworkRequestFactory*
/// @param attribute enum QNetworkRequest__Attribute
/// @param defaultValue QVariant*
///
QVariant* q_networkrequestfactory_attribute2(const void* self, int32_t attribute, const void* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setAttribute)
///
/// @param self QNetworkRequestFactory*
/// @param attribute enum QNetworkRequest__Attribute
/// @param value QVariant*
///
void q_networkrequestfactory_set_attribute(void* self, int32_t attribute, const void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearAttribute)
///
/// @param self QNetworkRequestFactory*
/// @param attribute enum QNetworkRequest__Attribute
///
void q_networkrequestfactory_clear_attribute(void* self, int32_t attribute);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearAttributes)
///
/// @param self QNetworkRequestFactory*
///
void q_networkrequestfactory_clear_attributes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#dtor.QNetworkRequestFactory)
///
/// Delete this object from C++ memory.
///
/// @param self QNetworkRequestFactory*
///
void q_networkrequestfactory_delete(void* self);

#endif
