#pragma once
#ifndef SRC_NETWORKQT6C_LIBQNETWORKREQUEST_H
#define SRC_NETWORKQT6C_LIBQNETWORKREQUEST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qnetworkrequest.html

/// q_networkrequest_new constructs a new QNetworkRequest object.
///
///
QNetworkRequest* q_networkrequest_new();

/// q_networkrequest_new2 constructs a new QNetworkRequest object.
///
/// ``` QUrl* url ```
QNetworkRequest* q_networkrequest_new2(void* url);

/// q_networkrequest_new3 constructs a new QNetworkRequest object.
///
/// ``` QNetworkRequest* other ```
QNetworkRequest* q_networkrequest_new3(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#operator=)
///
/// ``` QNetworkRequest* self, QNetworkRequest* other ```
void q_networkrequest_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#swap)
///
/// ``` QNetworkRequest* self, QNetworkRequest* other ```
void q_networkrequest_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#operator==)
///
/// ``` QNetworkRequest* self, QNetworkRequest* other ```
bool q_networkrequest_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#operator!=)
///
/// ``` QNetworkRequest* self, QNetworkRequest* other ```
bool q_networkrequest_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#url)
///
/// ``` QNetworkRequest* self ```
QUrl* q_networkrequest_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setUrl)
///
/// ``` QNetworkRequest* self, QUrl* url ```
void q_networkrequest_set_url(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#headers)
///
/// ``` QNetworkRequest* self ```
QHttpHeaders* q_networkrequest_headers(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setHeaders)
///
/// ``` QNetworkRequest* self, QHttpHeaders* newHeaders ```
void q_networkrequest_set_headers(void* self, void* newHeaders);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#header)
///
/// ``` QNetworkRequest* self, enum QNetworkRequest__KnownHeaders header ```
QVariant* q_networkrequest_header(void* self, int64_t header);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setHeader)
///
/// ``` QNetworkRequest* self, enum QNetworkRequest__KnownHeaders header, QVariant* value ```
void q_networkrequest_set_header(void* self, int64_t header, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#hasRawHeader)
///
/// ``` QNetworkRequest* self, char* headerName ```
bool q_networkrequest_has_raw_header(void* self, char* headerName);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#rawHeaderList)
///
/// ``` QNetworkRequest* self ```
const char** q_networkrequest_raw_header_list(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#rawHeader)
///
/// ``` QNetworkRequest* self, char* headerName ```
char* q_networkrequest_raw_header(void* self, char* headerName);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setRawHeader)
///
/// ``` QNetworkRequest* self, const char* headerName, const char* value ```
void q_networkrequest_set_raw_header(void* self, const char* headerName, const char* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#attribute)
///
/// ``` QNetworkRequest* self, enum QNetworkRequest__Attribute code ```
QVariant* q_networkrequest_attribute(void* self, int64_t code);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setAttribute)
///
/// ``` QNetworkRequest* self, enum QNetworkRequest__Attribute code, QVariant* value ```
void q_networkrequest_set_attribute(void* self, int64_t code, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#sslConfiguration)
///
/// ``` QNetworkRequest* self ```
QSslConfiguration* q_networkrequest_ssl_configuration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setSslConfiguration)
///
/// ``` QNetworkRequest* self, QSslConfiguration* configuration ```
void q_networkrequest_set_ssl_configuration(void* self, void* configuration);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setOriginatingObject)
///
/// ``` QNetworkRequest* self, QObject* object ```
void q_networkrequest_set_originating_object(void* self, void* object);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#originatingObject)
///
/// ``` QNetworkRequest* self ```
QObject* q_networkrequest_originating_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#priority)
///
/// ``` QNetworkRequest* self ```
int64_t q_networkrequest_priority(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setPriority)
///
/// ``` QNetworkRequest* self, enum QNetworkRequest__Priority priority ```
void q_networkrequest_set_priority(void* self, int64_t priority);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#maximumRedirectsAllowed)
///
/// ``` QNetworkRequest* self ```
int32_t q_networkrequest_maximum_redirects_allowed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setMaximumRedirectsAllowed)
///
/// ``` QNetworkRequest* self, int maximumRedirectsAllowed ```
void q_networkrequest_set_maximum_redirects_allowed(void* self, int maximumRedirectsAllowed);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#peerVerifyName)
///
/// ``` QNetworkRequest* self ```
const char* q_networkrequest_peer_verify_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setPeerVerifyName)
///
/// ``` QNetworkRequest* self, const char* peerName ```
void q_networkrequest_set_peer_verify_name(void* self, const char* peerName);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#http1Configuration)
///
/// ``` QNetworkRequest* self ```
QHttp1Configuration* q_networkrequest_http1_configuration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setHttp1Configuration)
///
/// ``` QNetworkRequest* self, QHttp1Configuration* configuration ```
void q_networkrequest_set_http1_configuration(void* self, void* configuration);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#http2Configuration)
///
/// ``` QNetworkRequest* self ```
QHttp2Configuration* q_networkrequest_http2_configuration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setHttp2Configuration)
///
/// ``` QNetworkRequest* self, QHttp2Configuration* configuration ```
void q_networkrequest_set_http2_configuration(void* self, void* configuration);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#decompressedSafetyCheckThreshold)
///
/// ``` QNetworkRequest* self ```
long long q_networkrequest_decompressed_safety_check_threshold(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setDecompressedSafetyCheckThreshold)
///
/// ``` QNetworkRequest* self, long long threshold ```
void q_networkrequest_set_decompressed_safety_check_threshold(void* self, long long threshold);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#transferTimeout)
///
/// ``` QNetworkRequest* self ```
int32_t q_networkrequest_transfer_timeout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setTransferTimeout)
///
/// ``` QNetworkRequest* self, int timeout ```
void q_networkrequest_set_transfer_timeout(void* self, int timeout);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setTransferTimeout)
///
/// ``` QNetworkRequest* self ```
void q_networkrequest_set_transfer_timeout2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#attribute)
///
/// ``` QNetworkRequest* self, enum QNetworkRequest__Attribute code, QVariant* defaultValue ```
QVariant* q_networkrequest_attribute2(void* self, int64_t code, void* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#dtor.QNetworkRequest)
///
/// Delete this object from C++ memory.
///
/// ``` QNetworkRequest* self ```
void q_networkrequest_delete(void* self);

/// https://doc.qt.io/qt-6/qnetworkrequest.html#types

typedef enum {
    QNETWORKREQUEST_KNOWNHEADERS_CONTENTTYPEHEADER = 0,
    QNETWORKREQUEST_KNOWNHEADERS_CONTENTLENGTHHEADER = 1,
    QNETWORKREQUEST_KNOWNHEADERS_LOCATIONHEADER = 2,
    QNETWORKREQUEST_KNOWNHEADERS_LASTMODIFIEDHEADER = 3,
    QNETWORKREQUEST_KNOWNHEADERS_COOKIEHEADER = 4,
    QNETWORKREQUEST_KNOWNHEADERS_SETCOOKIEHEADER = 5,
    QNETWORKREQUEST_KNOWNHEADERS_CONTENTDISPOSITIONHEADER = 6,
    QNETWORKREQUEST_KNOWNHEADERS_USERAGENTHEADER = 7,
    QNETWORKREQUEST_KNOWNHEADERS_SERVERHEADER = 8,
    QNETWORKREQUEST_KNOWNHEADERS_IFMODIFIEDSINCEHEADER = 9,
    QNETWORKREQUEST_KNOWNHEADERS_ETAGHEADER = 10,
    QNETWORKREQUEST_KNOWNHEADERS_IFMATCHHEADER = 11,
    QNETWORKREQUEST_KNOWNHEADERS_IFNONEMATCHHEADER = 12,
    QNETWORKREQUEST_KNOWNHEADERS_NUMKNOWNHEADERS = 13
} QNetworkRequest__KnownHeaders;

typedef enum {
    QNETWORKREQUEST_ATTRIBUTE_HTTPSTATUSCODEATTRIBUTE = 0,
    QNETWORKREQUEST_ATTRIBUTE_HTTPREASONPHRASEATTRIBUTE = 1,
    QNETWORKREQUEST_ATTRIBUTE_REDIRECTIONTARGETATTRIBUTE = 2,
    QNETWORKREQUEST_ATTRIBUTE_CONNECTIONENCRYPTEDATTRIBUTE = 3,
    QNETWORKREQUEST_ATTRIBUTE_CACHELOADCONTROLATTRIBUTE = 4,
    QNETWORKREQUEST_ATTRIBUTE_CACHESAVECONTROLATTRIBUTE = 5,
    QNETWORKREQUEST_ATTRIBUTE_SOURCEISFROMCACHEATTRIBUTE = 6,
    QNETWORKREQUEST_ATTRIBUTE_DONOTBUFFERUPLOADDATAATTRIBUTE = 7,
    QNETWORKREQUEST_ATTRIBUTE_HTTPPIPELININGALLOWEDATTRIBUTE = 8,
    QNETWORKREQUEST_ATTRIBUTE_HTTPPIPELININGWASUSEDATTRIBUTE = 9,
    QNETWORKREQUEST_ATTRIBUTE_CUSTOMVERBATTRIBUTE = 10,
    QNETWORKREQUEST_ATTRIBUTE_COOKIELOADCONTROLATTRIBUTE = 11,
    QNETWORKREQUEST_ATTRIBUTE_AUTHENTICATIONREUSEATTRIBUTE = 12,
    QNETWORKREQUEST_ATTRIBUTE_COOKIESAVECONTROLATTRIBUTE = 13,
    QNETWORKREQUEST_ATTRIBUTE_MAXIMUMDOWNLOADBUFFERSIZEATTRIBUTE = 14,
    QNETWORKREQUEST_ATTRIBUTE_DOWNLOADBUFFERATTRIBUTE = 15,
    QNETWORKREQUEST_ATTRIBUTE_SYNCHRONOUSREQUESTATTRIBUTE = 16,
    QNETWORKREQUEST_ATTRIBUTE_BACKGROUNDREQUESTATTRIBUTE = 17,
    QNETWORKREQUEST_ATTRIBUTE_EMITALLUPLOADPROGRESSSIGNALSATTRIBUTE = 18,
    QNETWORKREQUEST_ATTRIBUTE_HTTP2ALLOWEDATTRIBUTE = 19,
    QNETWORKREQUEST_ATTRIBUTE_HTTP2WASUSEDATTRIBUTE = 20,
    QNETWORKREQUEST_ATTRIBUTE_ORIGINALCONTENTLENGTHATTRIBUTE = 21,
    QNETWORKREQUEST_ATTRIBUTE_REDIRECTPOLICYATTRIBUTE = 22,
    QNETWORKREQUEST_ATTRIBUTE_HTTP2DIRECTATTRIBUTE = 23,
    QNETWORKREQUEST_ATTRIBUTE_RESOURCETYPEATTRIBUTE = 24,
    QNETWORKREQUEST_ATTRIBUTE_AUTODELETEREPLYONFINISHATTRIBUTE = 25,
    QNETWORKREQUEST_ATTRIBUTE_CONNECTIONCACHEEXPIRYTIMEOUTSECONDSATTRIBUTE = 26,
    QNETWORKREQUEST_ATTRIBUTE_HTTP2CLEARTEXTALLOWEDATTRIBUTE = 27,
    QNETWORKREQUEST_ATTRIBUTE_USECREDENTIALSATTRIBUTE = 28,
    QNETWORKREQUEST_ATTRIBUTE_FULLLOCALSERVERNAMEATTRIBUTE = 29,
    QNETWORKREQUEST_ATTRIBUTE_USER = 1000,
    QNETWORKREQUEST_ATTRIBUTE_USERMAX = 32767
} QNetworkRequest__Attribute;

typedef enum {
    QNETWORKREQUEST_CACHELOADCONTROL_ALWAYSNETWORK = 0,
    QNETWORKREQUEST_CACHELOADCONTROL_PREFERNETWORK = 1,
    QNETWORKREQUEST_CACHELOADCONTROL_PREFERCACHE = 2,
    QNETWORKREQUEST_CACHELOADCONTROL_ALWAYSCACHE = 3
} QNetworkRequest__CacheLoadControl;

typedef enum {
    QNETWORKREQUEST_LOADCONTROL_AUTOMATIC = 0,
    QNETWORKREQUEST_LOADCONTROL_MANUAL = 1
} QNetworkRequest__LoadControl;

typedef enum {
    QNETWORKREQUEST_PRIORITY_HIGHPRIORITY = 1,
    QNETWORKREQUEST_PRIORITY_NORMALPRIORITY = 3,
    QNETWORKREQUEST_PRIORITY_LOWPRIORITY = 5
} QNetworkRequest__Priority;

typedef enum {
    QNETWORKREQUEST_REDIRECTPOLICY_MANUALREDIRECTPOLICY = 0,
    QNETWORKREQUEST_REDIRECTPOLICY_NOLESSSAFEREDIRECTPOLICY = 1,
    QNETWORKREQUEST_REDIRECTPOLICY_SAMEORIGINREDIRECTPOLICY = 2,
    QNETWORKREQUEST_REDIRECTPOLICY_USERVERIFIEDREDIRECTPOLICY = 3
} QNetworkRequest__RedirectPolicy;

typedef enum {
    QNETWORKREQUEST_TRANSFERTIMEOUTCONSTANT_DEFAULTTRANSFERTIMEOUTCONSTANT = 30000
} QNetworkRequest__TransferTimeoutConstant;

#endif
