#pragma once
#ifndef SRC_NETWORKQT6C_LIBQNETWORKREQUESTFACTORY_H
#define SRC_NETWORKQT6C_LIBQNETWORKREQUESTFACTORY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qnetworkrequestfactory.html

/// q_networkrequestfactory_new constructs a new QNetworkRequestFactory object.
///
///
QNetworkRequestFactory* q_networkrequestfactory_new();

/// q_networkrequestfactory_new2 constructs a new QNetworkRequestFactory object.
///
/// ``` QUrl* baseUrl ```
QNetworkRequestFactory* q_networkrequestfactory_new2(void* baseUrl);

/// q_networkrequestfactory_new3 constructs a new QNetworkRequestFactory object.
///
/// ``` QNetworkRequestFactory* other ```
QNetworkRequestFactory* q_networkrequestfactory_new3(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#operator-eq)
///
/// ``` QNetworkRequestFactory* self, QNetworkRequestFactory* other ```
void q_networkrequestfactory_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#swap)
///
/// ``` QNetworkRequestFactory* self, QNetworkRequestFactory* other ```
void q_networkrequestfactory_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#baseUrl)
///
/// ``` QNetworkRequestFactory* self ```
QUrl* q_networkrequestfactory_base_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setBaseUrl)
///
/// ``` QNetworkRequestFactory* self, QUrl* url ```
void q_networkrequestfactory_set_base_url(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#sslConfiguration)
///
/// ``` QNetworkRequestFactory* self ```
QSslConfiguration* q_networkrequestfactory_ssl_configuration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setSslConfiguration)
///
/// ``` QNetworkRequestFactory* self, QSslConfiguration* configuration ```
void q_networkrequestfactory_set_ssl_configuration(void* self, void* configuration);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#createRequest)
///
/// ``` QNetworkRequestFactory* self ```
QNetworkRequest* q_networkrequestfactory_create_request(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#createRequest)
///
/// ``` QNetworkRequestFactory* self, QUrlQuery* query ```
QNetworkRequest* q_networkrequestfactory_create_request2(void* self, void* query);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#createRequest)
///
/// ``` QNetworkRequestFactory* self, const char* path ```
QNetworkRequest* q_networkrequestfactory_create_request3(void* self, const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#createRequest)
///
/// ``` QNetworkRequestFactory* self, const char* path, QUrlQuery* query ```
QNetworkRequest* q_networkrequestfactory_create_request4(void* self, const char* path, void* query);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setCommonHeaders)
///
/// ``` QNetworkRequestFactory* self, QHttpHeaders* headers ```
void q_networkrequestfactory_set_common_headers(void* self, void* headers);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#commonHeaders)
///
/// ``` QNetworkRequestFactory* self ```
QHttpHeaders* q_networkrequestfactory_common_headers(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearCommonHeaders)
///
/// ``` QNetworkRequestFactory* self ```
void q_networkrequestfactory_clear_common_headers(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#bearerToken)
///
/// ``` QNetworkRequestFactory* self ```
char* q_networkrequestfactory_bearer_token(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setBearerToken)
///
/// ``` QNetworkRequestFactory* self, const char* token ```
void q_networkrequestfactory_set_bearer_token(void* self, const char* token);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearBearerToken)
///
/// ``` QNetworkRequestFactory* self ```
void q_networkrequestfactory_clear_bearer_token(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#userName)
///
/// ``` QNetworkRequestFactory* self ```
const char* q_networkrequestfactory_user_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setUserName)
///
/// ``` QNetworkRequestFactory* self, const char* userName ```
void q_networkrequestfactory_set_user_name(void* self, const char* userName);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearUserName)
///
/// ``` QNetworkRequestFactory* self ```
void q_networkrequestfactory_clear_user_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#password)
///
/// ``` QNetworkRequestFactory* self ```
const char* q_networkrequestfactory_password(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setPassword)
///
/// ``` QNetworkRequestFactory* self, const char* password ```
void q_networkrequestfactory_set_password(void* self, const char* password);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearPassword)
///
/// ``` QNetworkRequestFactory* self ```
void q_networkrequestfactory_clear_password(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#queryParameters)
///
/// ``` QNetworkRequestFactory* self ```
QUrlQuery* q_networkrequestfactory_query_parameters(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setQueryParameters)
///
/// ``` QNetworkRequestFactory* self, QUrlQuery* query ```
void q_networkrequestfactory_set_query_parameters(void* self, void* query);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearQueryParameters)
///
/// ``` QNetworkRequestFactory* self ```
void q_networkrequestfactory_clear_query_parameters(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setPriority)
///
/// ``` QNetworkRequestFactory* self, enum QNetworkRequest__Priority priority ```
void q_networkrequestfactory_set_priority(void* self, int64_t priority);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#priority)
///
/// ``` QNetworkRequestFactory* self ```
int64_t q_networkrequestfactory_priority(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#attribute)
///
/// ``` QNetworkRequestFactory* self, enum QNetworkRequest__Attribute attribute ```
QVariant* q_networkrequestfactory_attribute(void* self, int64_t attribute);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#attribute)
///
/// ``` QNetworkRequestFactory* self, enum QNetworkRequest__Attribute attribute, QVariant* defaultValue ```
QVariant* q_networkrequestfactory_attribute2(void* self, int64_t attribute, void* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#setAttribute)
///
/// ``` QNetworkRequestFactory* self, enum QNetworkRequest__Attribute attribute, QVariant* value ```
void q_networkrequestfactory_set_attribute(void* self, int64_t attribute, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearAttribute)
///
/// ``` QNetworkRequestFactory* self, enum QNetworkRequest__Attribute attribute ```
void q_networkrequestfactory_clear_attribute(void* self, int64_t attribute);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#clearAttributes)
///
/// ``` QNetworkRequestFactory* self ```
void q_networkrequestfactory_clear_attributes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequestfactory.html#dtor.QNetworkRequestFactory)
///
/// Delete this object from C++ memory.
///
/// ``` QNetworkRequestFactory* self ```
void q_networkrequestfactory_delete(void* self);

#endif
