#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQNETWORKREQUESTFACTORY_H
#define SRC_NETWORK_QT6C_LIBQNETWORKREQUESTFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qnetworkrequestfactory.html

/// q_networkrequestfactory_new constructs a new QNetworkRequestFactory object.
///
QNetworkRequestFactory* q_networkrequestfactory_new();

/// q_networkrequestfactory_new2 constructs a new QNetworkRequestFactory object.
///
/// @param baseUrl QUrl*
QNetworkRequestFactory* q_networkrequestfactory_new2(void* baseUrl);

/// q_networkrequestfactory_new3 constructs a new QNetworkRequestFactory object.
///
/// @param other QNetworkRequestFactory*
QNetworkRequestFactory* q_networkrequestfactory_new3(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#operator-eq)
///
/// @param self QNetworkRequestFactory*
/// @param other QNetworkRequestFactory*
void q_networkrequestfactory_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#swap)
///
/// @param self QNetworkRequestFactory*
/// @param other QNetworkRequestFactory*
void q_networkrequestfactory_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#baseUrl)
///
/// @param self QNetworkRequestFactory*
QUrl* q_networkrequestfactory_base_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setBaseUrl)
///
/// @param self QNetworkRequestFactory*
/// @param url QUrl*
void q_networkrequestfactory_set_base_url(void* self, void* url);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#sslConfiguration)
///
/// @param self QNetworkRequestFactory*
QSslConfiguration* q_networkrequestfactory_ssl_configuration(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setSslConfiguration)
///
/// @param self QNetworkRequestFactory*
/// @param configuration QSslConfiguration*
void q_networkrequestfactory_set_ssl_configuration(void* self, void* configuration);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#createRequest)
///
/// @param self QNetworkRequestFactory*
QNetworkRequest* q_networkrequestfactory_create_request(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#createRequest)
///
/// @param self QNetworkRequestFactory*
/// @param query QUrlQuery*
QNetworkRequest* q_networkrequestfactory_create_request2(void* self, void* query);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#createRequest)
///
/// @param self QNetworkRequestFactory*
/// @param path const char*
QNetworkRequest* q_networkrequestfactory_create_request3(void* self, const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#createRequest)
///
/// @param self QNetworkRequestFactory*
/// @param path const char*
/// @param query QUrlQuery*
QNetworkRequest* q_networkrequestfactory_create_request4(void* self, const char* path, void* query);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setCommonHeaders)
///
/// @param self QNetworkRequestFactory*
/// @param headers QHttpHeaders*
void q_networkrequestfactory_set_common_headers(void* self, void* headers);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#commonHeaders)
///
/// @param self QNetworkRequestFactory*
QHttpHeaders* q_networkrequestfactory_common_headers(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearCommonHeaders)
///
/// @param self QNetworkRequestFactory*
void q_networkrequestfactory_clear_common_headers(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#bearerToken)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QNetworkRequestFactory*
char* q_networkrequestfactory_bearer_token(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setBearerToken)
///
/// @param self QNetworkRequestFactory*
/// @param token const char*
void q_networkrequestfactory_set_bearer_token(void* self, const char* token);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearBearerToken)
///
/// @param self QNetworkRequestFactory*
void q_networkrequestfactory_clear_bearer_token(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#userName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QNetworkRequestFactory*
const char* q_networkrequestfactory_user_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setUserName)
///
/// @param self QNetworkRequestFactory*
/// @param userName const char*
void q_networkrequestfactory_set_user_name(void* self, const char* userName);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearUserName)
///
/// @param self QNetworkRequestFactory*
void q_networkrequestfactory_clear_user_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#password)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QNetworkRequestFactory*
const char* q_networkrequestfactory_password(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setPassword)
///
/// @param self QNetworkRequestFactory*
/// @param password const char*
void q_networkrequestfactory_set_password(void* self, const char* password);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearPassword)
///
/// @param self QNetworkRequestFactory*
void q_networkrequestfactory_clear_password(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#queryParameters)
///
/// @param self QNetworkRequestFactory*
QUrlQuery* q_networkrequestfactory_query_parameters(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setQueryParameters)
///
/// @param self QNetworkRequestFactory*
/// @param query QUrlQuery*
void q_networkrequestfactory_set_query_parameters(void* self, void* query);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearQueryParameters)
///
/// @param self QNetworkRequestFactory*
void q_networkrequestfactory_clear_query_parameters(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setPriority)
///
/// @param self QNetworkRequestFactory*
/// @param priority enum QNetworkRequest__Priority
void q_networkrequestfactory_set_priority(void* self, int32_t priority);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#priority)
///
/// @param self QNetworkRequestFactory*
///
/// @return enum QNetworkRequest__Priority
int32_t q_networkrequestfactory_priority(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#attribute)
///
/// @param self QNetworkRequestFactory*
/// @param attribute enum QNetworkRequest__Attribute
QVariant* q_networkrequestfactory_attribute(void* self, int32_t attribute);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#attribute)
///
/// @param self QNetworkRequestFactory*
/// @param attribute enum QNetworkRequest__Attribute
/// @param defaultValue QVariant*
QVariant* q_networkrequestfactory_attribute2(void* self, int32_t attribute, void* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setAttribute)
///
/// @param self QNetworkRequestFactory*
/// @param attribute enum QNetworkRequest__Attribute
/// @param value QVariant*
void q_networkrequestfactory_set_attribute(void* self, int32_t attribute, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearAttribute)
///
/// @param self QNetworkRequestFactory*
/// @param attribute enum QNetworkRequest__Attribute
void q_networkrequestfactory_clear_attribute(void* self, int32_t attribute);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearAttributes)
///
/// @param self QNetworkRequestFactory*
void q_networkrequestfactory_clear_attributes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#dtor.QNetworkRequestFactory)
///
/// Delete this object from C++ memory.
///
/// @param self QNetworkRequestFactory*
void q_networkrequestfactory_delete(void* self);

#endif
