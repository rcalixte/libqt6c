#include "libqhttpheaders.hpp"
#include "libqnetworkrequest.hpp"
#include "libqsslconfiguration.hpp"
#include "../libqurl.hpp"
#include "../libqurlquery.hpp"
#include "../libqvariant.hpp"
#include "libqnetworkrequestfactory.hpp"
#include "libqnetworkrequestfactory.h"

QNetworkRequestFactory* q_networkrequestfactory_new() {
    return QNetworkRequestFactory_new();
}

QNetworkRequestFactory* q_networkrequestfactory_new2(void* baseUrl) {
    return QNetworkRequestFactory_new2((QUrl*)baseUrl);
}

QNetworkRequestFactory* q_networkrequestfactory_new3(void* other) {
    return QNetworkRequestFactory_new3((QNetworkRequestFactory*)other);
}

void q_networkrequestfactory_operator_assign(void* self, void* other) {
    QNetworkRequestFactory_OperatorAssign((QNetworkRequestFactory*)self, (QNetworkRequestFactory*)other);
}

void q_networkrequestfactory_swap(void* self, void* other) {
    QNetworkRequestFactory_Swap((QNetworkRequestFactory*)self, (QNetworkRequestFactory*)other);
}

QUrl* q_networkrequestfactory_base_url(void* self) {
    return QNetworkRequestFactory_BaseUrl((QNetworkRequestFactory*)self);
}

void q_networkrequestfactory_set_base_url(void* self, void* url) {
    QNetworkRequestFactory_SetBaseUrl((QNetworkRequestFactory*)self, (QUrl*)url);
}

QSslConfiguration* q_networkrequestfactory_ssl_configuration(void* self) {
    return QNetworkRequestFactory_SslConfiguration((QNetworkRequestFactory*)self);
}

void q_networkrequestfactory_set_ssl_configuration(void* self, void* configuration) {
    QNetworkRequestFactory_SetSslConfiguration((QNetworkRequestFactory*)self, (QSslConfiguration*)configuration);
}

QNetworkRequest* q_networkrequestfactory_create_request(void* self) {
    return QNetworkRequestFactory_CreateRequest((QNetworkRequestFactory*)self);
}

QNetworkRequest* q_networkrequestfactory_create_request2(void* self, void* query) {
    return QNetworkRequestFactory_CreateRequest2((QNetworkRequestFactory*)self, (QUrlQuery*)query);
}

QNetworkRequest* q_networkrequestfactory_create_request3(void* self, const char* path) {
    return QNetworkRequestFactory_CreateRequest3((QNetworkRequestFactory*)self, qstring(path));
}

QNetworkRequest* q_networkrequestfactory_create_request4(void* self, const char* path, void* query) {
    return QNetworkRequestFactory_CreateRequest4((QNetworkRequestFactory*)self, qstring(path), (QUrlQuery*)query);
}

void q_networkrequestfactory_set_common_headers(void* self, void* headers) {
    QNetworkRequestFactory_SetCommonHeaders((QNetworkRequestFactory*)self, (QHttpHeaders*)headers);
}

QHttpHeaders* q_networkrequestfactory_common_headers(void* self) {
    return QNetworkRequestFactory_CommonHeaders((QNetworkRequestFactory*)self);
}

void q_networkrequestfactory_clear_common_headers(void* self) {
    QNetworkRequestFactory_ClearCommonHeaders((QNetworkRequestFactory*)self);
}

char* q_networkrequestfactory_bearer_token(void* self) {
    libqt_string _str = QNetworkRequestFactory_BearerToken((QNetworkRequestFactory*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_networkrequestfactory_set_bearer_token(void* self, const char* token) {
    QNetworkRequestFactory_SetBearerToken((QNetworkRequestFactory*)self, qstring(token));
}

void q_networkrequestfactory_clear_bearer_token(void* self) {
    QNetworkRequestFactory_ClearBearerToken((QNetworkRequestFactory*)self);
}

const char* q_networkrequestfactory_user_name(void* self) {
    libqt_string _str = QNetworkRequestFactory_UserName((QNetworkRequestFactory*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_networkrequestfactory_set_user_name(void* self, const char* userName) {
    QNetworkRequestFactory_SetUserName((QNetworkRequestFactory*)self, qstring(userName));
}

void q_networkrequestfactory_clear_user_name(void* self) {
    QNetworkRequestFactory_ClearUserName((QNetworkRequestFactory*)self);
}

const char* q_networkrequestfactory_password(void* self) {
    libqt_string _str = QNetworkRequestFactory_Password((QNetworkRequestFactory*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_networkrequestfactory_set_password(void* self, const char* password) {
    QNetworkRequestFactory_SetPassword((QNetworkRequestFactory*)self, qstring(password));
}

void q_networkrequestfactory_clear_password(void* self) {
    QNetworkRequestFactory_ClearPassword((QNetworkRequestFactory*)self);
}

QUrlQuery* q_networkrequestfactory_query_parameters(void* self) {
    return QNetworkRequestFactory_QueryParameters((QNetworkRequestFactory*)self);
}

void q_networkrequestfactory_set_query_parameters(void* self, void* query) {
    QNetworkRequestFactory_SetQueryParameters((QNetworkRequestFactory*)self, (QUrlQuery*)query);
}

void q_networkrequestfactory_clear_query_parameters(void* self) {
    QNetworkRequestFactory_ClearQueryParameters((QNetworkRequestFactory*)self);
}

void q_networkrequestfactory_set_priority(void* self, int64_t priority) {
    QNetworkRequestFactory_SetPriority((QNetworkRequestFactory*)self, priority);
}

int64_t q_networkrequestfactory_priority(void* self) {
    return QNetworkRequestFactory_Priority((QNetworkRequestFactory*)self);
}

QVariant* q_networkrequestfactory_attribute(void* self, int64_t attribute) {
    return QNetworkRequestFactory_Attribute((QNetworkRequestFactory*)self, attribute);
}

QVariant* q_networkrequestfactory_attribute2(void* self, int64_t attribute, void* defaultValue) {
    return QNetworkRequestFactory_Attribute2((QNetworkRequestFactory*)self, attribute, (QVariant*)defaultValue);
}

void q_networkrequestfactory_set_attribute(void* self, int64_t attribute, void* value) {
    QNetworkRequestFactory_SetAttribute((QNetworkRequestFactory*)self, attribute, (QVariant*)value);
}

void q_networkrequestfactory_clear_attribute(void* self, int64_t attribute) {
    QNetworkRequestFactory_ClearAttribute((QNetworkRequestFactory*)self, attribute);
}

void q_networkrequestfactory_clear_attributes(void* self) {
    QNetworkRequestFactory_ClearAttributes((QNetworkRequestFactory*)self);
}

void q_networkrequestfactory_delete(void* self) {
    QNetworkRequestFactory_Delete((QNetworkRequestFactory*)(self));
}
