#include "../libqanystringview.hpp"
#include "libqhttp1configuration.hpp"
#include "libqhttp2configuration.hpp"
#include "libqhttpheaders.hpp"
#include "../libqobject.hpp"
#include "libqsslconfiguration.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "libqnetworkrequest.hpp"
#include "libqnetworkrequest.h"

QNetworkRequest* q_networkrequest_new() {
    return QNetworkRequest_new();
}

QNetworkRequest* q_networkrequest_new2(void* url) {
    return QNetworkRequest_new2((QUrl*)url);
}

QNetworkRequest* q_networkrequest_new3(void* other) {
    return QNetworkRequest_new3((QNetworkRequest*)other);
}

void q_networkrequest_operator_assign(void* self, void* other) {
    QNetworkRequest_OperatorAssign((QNetworkRequest*)self, (QNetworkRequest*)other);
}

void q_networkrequest_swap(void* self, void* other) {
    QNetworkRequest_Swap((QNetworkRequest*)self, (QNetworkRequest*)other);
}

bool q_networkrequest_operator_equal(void* self, void* other) {
    return QNetworkRequest_OperatorEqual((QNetworkRequest*)self, (QNetworkRequest*)other);
}

bool q_networkrequest_operator_not_equal(void* self, void* other) {
    return QNetworkRequest_OperatorNotEqual((QNetworkRequest*)self, (QNetworkRequest*)other);
}

QUrl* q_networkrequest_url(void* self) {
    return QNetworkRequest_Url((QNetworkRequest*)self);
}

void q_networkrequest_set_url(void* self, void* url) {
    QNetworkRequest_SetUrl((QNetworkRequest*)self, (QUrl*)url);
}

QHttpHeaders* q_networkrequest_headers(void* self) {
    return QNetworkRequest_Headers((QNetworkRequest*)self);
}

void q_networkrequest_set_headers(void* self, void* newHeaders) {
    QNetworkRequest_SetHeaders((QNetworkRequest*)self, (QHttpHeaders*)newHeaders);
}

QVariant* q_networkrequest_header(void* self, int64_t header) {
    return QNetworkRequest_Header((QNetworkRequest*)self, header);
}

void q_networkrequest_set_header(void* self, int64_t header, void* value) {
    QNetworkRequest_SetHeader((QNetworkRequest*)self, header, (QVariant*)value);
}

bool q_networkrequest_has_raw_header(void* self, char* headerName) {
    return QNetworkRequest_HasRawHeader((QNetworkRequest*)self, headerName);
}

const char** q_networkrequest_raw_header_list(void* self) {
    libqt_list _arr = QNetworkRequest_RawHeaderList((QNetworkRequest*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_networkrequest_raw_header_list");
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

char* q_networkrequest_raw_header(void* self, char* headerName) {
    libqt_string _str = QNetworkRequest_RawHeader((QNetworkRequest*)self, headerName);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_networkrequest_set_raw_header(void* self, const char* headerName, const char* value) {
    QNetworkRequest_SetRawHeader((QNetworkRequest*)self, qstring(headerName), qstring(value));
}

QVariant* q_networkrequest_attribute(void* self, int64_t code) {
    return QNetworkRequest_Attribute((QNetworkRequest*)self, code);
}

void q_networkrequest_set_attribute(void* self, int64_t code, void* value) {
    QNetworkRequest_SetAttribute((QNetworkRequest*)self, code, (QVariant*)value);
}

QSslConfiguration* q_networkrequest_ssl_configuration(void* self) {
    return QNetworkRequest_SslConfiguration((QNetworkRequest*)self);
}

void q_networkrequest_set_ssl_configuration(void* self, void* configuration) {
    QNetworkRequest_SetSslConfiguration((QNetworkRequest*)self, (QSslConfiguration*)configuration);
}

void q_networkrequest_set_originating_object(void* self, void* object) {
    QNetworkRequest_SetOriginatingObject((QNetworkRequest*)self, (QObject*)object);
}

QObject* q_networkrequest_originating_object(void* self) {
    return QNetworkRequest_OriginatingObject((QNetworkRequest*)self);
}

int64_t q_networkrequest_priority(void* self) {
    return QNetworkRequest_Priority((QNetworkRequest*)self);
}

void q_networkrequest_set_priority(void* self, int64_t priority) {
    QNetworkRequest_SetPriority((QNetworkRequest*)self, priority);
}

int32_t q_networkrequest_maximum_redirects_allowed(void* self) {
    return QNetworkRequest_MaximumRedirectsAllowed((QNetworkRequest*)self);
}

void q_networkrequest_set_maximum_redirects_allowed(void* self, int maximumRedirectsAllowed) {
    QNetworkRequest_SetMaximumRedirectsAllowed((QNetworkRequest*)self, maximumRedirectsAllowed);
}

const char* q_networkrequest_peer_verify_name(void* self) {
    libqt_string _str = QNetworkRequest_PeerVerifyName((QNetworkRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_networkrequest_set_peer_verify_name(void* self, const char* peerName) {
    QNetworkRequest_SetPeerVerifyName((QNetworkRequest*)self, qstring(peerName));
}

QHttp1Configuration* q_networkrequest_http1_configuration(void* self) {
    return QNetworkRequest_Http1Configuration((QNetworkRequest*)self);
}

void q_networkrequest_set_http1_configuration(void* self, void* configuration) {
    QNetworkRequest_SetHttp1Configuration((QNetworkRequest*)self, (QHttp1Configuration*)configuration);
}

QHttp2Configuration* q_networkrequest_http2_configuration(void* self) {
    return QNetworkRequest_Http2Configuration((QNetworkRequest*)self);
}

void q_networkrequest_set_http2_configuration(void* self, void* configuration) {
    QNetworkRequest_SetHttp2Configuration((QNetworkRequest*)self, (QHttp2Configuration*)configuration);
}

long long q_networkrequest_decompressed_safety_check_threshold(void* self) {
    return QNetworkRequest_DecompressedSafetyCheckThreshold((QNetworkRequest*)self);
}

void q_networkrequest_set_decompressed_safety_check_threshold(void* self, long long threshold) {
    QNetworkRequest_SetDecompressedSafetyCheckThreshold((QNetworkRequest*)self, threshold);
}

int32_t q_networkrequest_transfer_timeout(void* self) {
    return QNetworkRequest_TransferTimeout((QNetworkRequest*)self);
}

void q_networkrequest_set_transfer_timeout(void* self, int timeout) {
    QNetworkRequest_SetTransferTimeout((QNetworkRequest*)self, timeout);
}

void q_networkrequest_set_transfer_timeout2(void* self) {
    QNetworkRequest_SetTransferTimeout2((QNetworkRequest*)self);
}

QVariant* q_networkrequest_attribute2(void* self, int64_t code, void* defaultValue) {
    return QNetworkRequest_Attribute2((QNetworkRequest*)self, code, (QVariant*)defaultValue);
}

void q_networkrequest_delete(void* self) {
    QNetworkRequest_Delete((QNetworkRequest*)(self));
}
