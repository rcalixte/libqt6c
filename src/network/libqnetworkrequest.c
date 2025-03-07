#include "libqhttp2configuration.hpp"
#include "../libqobject.hpp"
#include "libqsslconfiguration.hpp"
#include <string.h>
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "libqnetworkrequest.hpp"
#include "libqnetworkrequest.h"

/// https://doc.qt.io/qt-6/qnetworkrequest.html

/// q_networkrequest_new constructs a new QNetworkRequest object.
///
///
QNetworkRequest* q_networkrequest_new() {
    return QNetworkRequest_new();
}

/// q_networkrequest_new2 constructs a new QNetworkRequest object.
///
/// ``` QUrl* url ```
QNetworkRequest* q_networkrequest_new2(void* url) {
    return QNetworkRequest_new2((QUrl*)url);
}

/// q_networkrequest_new3 constructs a new QNetworkRequest object.
///
/// ``` QNetworkRequest* other ```
QNetworkRequest* q_networkrequest_new3(void* other) {
    return QNetworkRequest_new3((QNetworkRequest*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#operator=)
///
/// ``` QNetworkRequest* self, QNetworkRequest* other ```
void q_networkrequest_operator_assign(void* self, void* other) {
    QNetworkRequest_OperatorAssign((QNetworkRequest*)self, (QNetworkRequest*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#swap)
///
/// ``` QNetworkRequest* self, QNetworkRequest* other ```
void q_networkrequest_swap(void* self, void* other) {
    QNetworkRequest_Swap((QNetworkRequest*)self, (QNetworkRequest*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#operator==)
///
/// ``` QNetworkRequest* self, QNetworkRequest* other ```
bool q_networkrequest_operator_equal(void* self, void* other) {
    return QNetworkRequest_OperatorEqual((QNetworkRequest*)self, (QNetworkRequest*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#operator!=)
///
/// ``` QNetworkRequest* self, QNetworkRequest* other ```
bool q_networkrequest_operator_not_equal(void* self, void* other) {
    return QNetworkRequest_OperatorNotEqual((QNetworkRequest*)self, (QNetworkRequest*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#url)
///
/// ``` QNetworkRequest* self ```
QUrl* q_networkrequest_url(void* self) {
    return QNetworkRequest_Url((QNetworkRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setUrl)
///
/// ``` QNetworkRequest* self, QUrl* url ```
void q_networkrequest_set_url(void* self, void* url) {
    QNetworkRequest_SetUrl((QNetworkRequest*)self, (QUrl*)url);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#header)
///
/// ``` QNetworkRequest* self, enum QNetworkRequest__KnownHeaders header ```
QVariant* q_networkrequest_header(void* self, int64_t header) {
    return QNetworkRequest_Header((QNetworkRequest*)self, header);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setHeader)
///
/// ``` QNetworkRequest* self, enum QNetworkRequest__KnownHeaders header, QVariant* value ```
void q_networkrequest_set_header(void* self, int64_t header, void* value) {
    QNetworkRequest_SetHeader((QNetworkRequest*)self, header, (QVariant*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#hasRawHeader)
///
/// ``` QNetworkRequest* self, const char* headerName ```
bool q_networkrequest_has_raw_header(void* self, const char* headerName) {
    return QNetworkRequest_HasRawHeader((QNetworkRequest*)self, qstring(headerName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#rawHeaderList)
///
/// ``` QNetworkRequest* self ```
const char** q_networkrequest_raw_header_list(void* self) {
    libqt_list _arr = QNetworkRequest_RawHeaderList((QNetworkRequest*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#rawHeader)
///
/// ``` QNetworkRequest* self, const char* headerName ```
char* q_networkrequest_raw_header(void* self, const char* headerName) {
    libqt_string _str = QNetworkRequest_RawHeader((QNetworkRequest*)self, qstring(headerName));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setRawHeader)
///
/// ``` QNetworkRequest* self, const char* headerName, const char* value ```
void q_networkrequest_set_raw_header(void* self, const char* headerName, const char* value) {
    QNetworkRequest_SetRawHeader((QNetworkRequest*)self, qstring(headerName), qstring(value));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#attribute)
///
/// ``` QNetworkRequest* self, enum QNetworkRequest__Attribute code ```
QVariant* q_networkrequest_attribute(void* self, int64_t code) {
    return QNetworkRequest_Attribute((QNetworkRequest*)self, code);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setAttribute)
///
/// ``` QNetworkRequest* self, enum QNetworkRequest__Attribute code, QVariant* value ```
void q_networkrequest_set_attribute(void* self, int64_t code, void* value) {
    QNetworkRequest_SetAttribute((QNetworkRequest*)self, code, (QVariant*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#sslConfiguration)
///
/// ``` QNetworkRequest* self ```
QSslConfiguration* q_networkrequest_ssl_configuration(void* self) {
    return QNetworkRequest_SslConfiguration((QNetworkRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setSslConfiguration)
///
/// ``` QNetworkRequest* self, QSslConfiguration* configuration ```
void q_networkrequest_set_ssl_configuration(void* self, void* configuration) {
    QNetworkRequest_SetSslConfiguration((QNetworkRequest*)self, (QSslConfiguration*)configuration);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setOriginatingObject)
///
/// ``` QNetworkRequest* self, QObject* object ```
void q_networkrequest_set_originating_object(void* self, void* object) {
    QNetworkRequest_SetOriginatingObject((QNetworkRequest*)self, (QObject*)object);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#originatingObject)
///
/// ``` QNetworkRequest* self ```
QObject* q_networkrequest_originating_object(void* self) {
    return QNetworkRequest_OriginatingObject((QNetworkRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#priority)
///
/// ``` QNetworkRequest* self ```
int64_t q_networkrequest_priority(void* self) {
    return QNetworkRequest_Priority((QNetworkRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setPriority)
///
/// ``` QNetworkRequest* self, enum QNetworkRequest__Priority priority ```
void q_networkrequest_set_priority(void* self, int64_t priority) {
    QNetworkRequest_SetPriority((QNetworkRequest*)self, priority);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#maximumRedirectsAllowed)
///
/// ``` QNetworkRequest* self ```
int32_t q_networkrequest_maximum_redirects_allowed(void* self) {
    return QNetworkRequest_MaximumRedirectsAllowed((QNetworkRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setMaximumRedirectsAllowed)
///
/// ``` QNetworkRequest* self, int maximumRedirectsAllowed ```
void q_networkrequest_set_maximum_redirects_allowed(void* self, int maximumRedirectsAllowed) {
    QNetworkRequest_SetMaximumRedirectsAllowed((QNetworkRequest*)self, maximumRedirectsAllowed);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#peerVerifyName)
///
/// ``` QNetworkRequest* self ```
const char* q_networkrequest_peer_verify_name(void* self) {
    libqt_string _str = QNetworkRequest_PeerVerifyName((QNetworkRequest*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setPeerVerifyName)
///
/// ``` QNetworkRequest* self, const char* peerName ```
void q_networkrequest_set_peer_verify_name(void* self, const char* peerName) {
    QNetworkRequest_SetPeerVerifyName((QNetworkRequest*)self, qstring(peerName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#http2Configuration)
///
/// ``` QNetworkRequest* self ```
QHttp2Configuration* q_networkrequest_http2_configuration(void* self) {
    return QNetworkRequest_Http2Configuration((QNetworkRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setHttp2Configuration)
///
/// ``` QNetworkRequest* self, QHttp2Configuration* configuration ```
void q_networkrequest_set_http2_configuration(void* self, void* configuration) {
    QNetworkRequest_SetHttp2Configuration((QNetworkRequest*)self, (QHttp2Configuration*)configuration);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#decompressedSafetyCheckThreshold)
///
/// ``` QNetworkRequest* self ```
long long q_networkrequest_decompressed_safety_check_threshold(void* self) {
    return QNetworkRequest_DecompressedSafetyCheckThreshold((QNetworkRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setDecompressedSafetyCheckThreshold)
///
/// ``` QNetworkRequest* self, long long threshold ```
void q_networkrequest_set_decompressed_safety_check_threshold(void* self, long long threshold) {
    QNetworkRequest_SetDecompressedSafetyCheckThreshold((QNetworkRequest*)self, threshold);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#transferTimeout)
///
/// ``` QNetworkRequest* self ```
int32_t q_networkrequest_transfer_timeout(void* self) {
    return QNetworkRequest_TransferTimeout((QNetworkRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setTransferTimeout)
///
/// ``` QNetworkRequest* self ```
void q_networkrequest_set_transfer_timeout(void* self) {
    QNetworkRequest_SetTransferTimeout((QNetworkRequest*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#attribute)
///
/// ``` QNetworkRequest* self, enum QNetworkRequest__Attribute code, QVariant* defaultValue ```
QVariant* q_networkrequest_attribute2(void* self, int64_t code, void* defaultValue) {
    return QNetworkRequest_Attribute2((QNetworkRequest*)self, code, (QVariant*)defaultValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setTransferTimeout)
///
/// ``` QNetworkRequest* self, int timeout ```
void q_networkrequest_set_transfer_timeout1(void* self, int timeout) {
    QNetworkRequest_SetTransferTimeout1((QNetworkRequest*)self, timeout);
}

/// Delete this object from C++ memory.
///
/// ``` QNetworkRequest* self ```
void q_networkrequest_delete(void* self) {
    QNetworkRequest_Delete((QNetworkRequest*)(self));
}