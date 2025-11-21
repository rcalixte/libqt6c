#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQNETWORKREQUEST_H
#define SRC_NETWORK_QT6C_LIBQNETWORKREQUEST_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qnetworkrequest.html

/// q_networkrequest_new constructs a new QNetworkRequest object.
///
QNetworkRequest* q_networkrequest_new();

/// q_networkrequest_new2 constructs a new QNetworkRequest object.
///
/// @param url QUrl*
QNetworkRequest* q_networkrequest_new2(void* url);

/// q_networkrequest_new3 constructs a new QNetworkRequest object.
///
/// @param other QNetworkRequest*
QNetworkRequest* q_networkrequest_new3(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#operator-eq)
///
/// @param self QNetworkRequest*
/// @param other QNetworkRequest*
void q_networkrequest_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#swap)
///
/// @param self QNetworkRequest*
/// @param other QNetworkRequest*
void q_networkrequest_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#operator-eq-eq)
///
/// @param self QNetworkRequest*
/// @param other QNetworkRequest*
bool q_networkrequest_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#operator-not-eq)
///
/// @param self QNetworkRequest*
/// @param other QNetworkRequest*
bool q_networkrequest_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#url)
///
/// @param self QNetworkRequest*
QUrl* q_networkrequest_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setUrl)
///
/// @param self QNetworkRequest*
/// @param url QUrl*
void q_networkrequest_set_url(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#headers)
///
/// @param self QNetworkRequest*
QHttpHeaders* q_networkrequest_headers(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setHeaders)
///
/// @param self QNetworkRequest*
/// @param newHeaders QHttpHeaders*
void q_networkrequest_set_headers(void* self, void* newHeaders);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#header)
///
/// @param self QNetworkRequest*
/// @param header enum QNetworkRequest__KnownHeaders
QVariant* q_networkrequest_header(void* self, int32_t header);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setHeader)
///
/// @param self QNetworkRequest*
/// @param header enum QNetworkRequest__KnownHeaders
/// @param value QVariant*
void q_networkrequest_set_header(void* self, int32_t header, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#hasRawHeader)
///
/// @param self QNetworkRequest*
/// @param headerName char*
bool q_networkrequest_has_raw_header(void* self, char* headerName);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#rawHeaderList)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QNetworkRequest*
const char** q_networkrequest_raw_header_list(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#rawHeader)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QNetworkRequest*
/// @param headerName char*
char* q_networkrequest_raw_header(void* self, char* headerName);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setRawHeader)
///
/// @param self QNetworkRequest*
/// @param headerName const char*
/// @param value const char*
void q_networkrequest_set_raw_header(void* self, const char* headerName, const char* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#attribute)
///
/// @param self QNetworkRequest*
/// @param code enum QNetworkRequest__Attribute
QVariant* q_networkrequest_attribute(void* self, int32_t code);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setAttribute)
///
/// @param self QNetworkRequest*
/// @param code enum QNetworkRequest__Attribute
/// @param value QVariant*
void q_networkrequest_set_attribute(void* self, int32_t code, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#sslConfiguration)
///
/// @param self QNetworkRequest*
QSslConfiguration* q_networkrequest_ssl_configuration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setSslConfiguration)
///
/// @param self QNetworkRequest*
/// @param configuration QSslConfiguration*
void q_networkrequest_set_ssl_configuration(void* self, void* configuration);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setOriginatingObject)
///
/// @param self QNetworkRequest*
/// @param object QObject*
void q_networkrequest_set_originating_object(void* self, void* object);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#originatingObject)
///
/// @param self QNetworkRequest*
QObject* q_networkrequest_originating_object(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#priority)
///
/// @param self QNetworkRequest*
///
/// @return enum QNetworkRequest__Priority
int32_t q_networkrequest_priority(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setPriority)
///
/// @param self QNetworkRequest*
/// @param priority enum QNetworkRequest__Priority
void q_networkrequest_set_priority(void* self, int32_t priority);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#maximumRedirectsAllowed)
///
/// @param self QNetworkRequest*
int32_t q_networkrequest_maximum_redirects_allowed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setMaximumRedirectsAllowed)
///
/// @param self QNetworkRequest*
/// @param maximumRedirectsAllowed int
void q_networkrequest_set_maximum_redirects_allowed(void* self, int maximumRedirectsAllowed);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#peerVerifyName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QNetworkRequest*
const char* q_networkrequest_peer_verify_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setPeerVerifyName)
///
/// @param self QNetworkRequest*
/// @param peerName const char*
void q_networkrequest_set_peer_verify_name(void* self, const char* peerName);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#http1Configuration)
///
/// @param self QNetworkRequest*
QHttp1Configuration* q_networkrequest_http1_configuration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setHttp1Configuration)
///
/// @param self QNetworkRequest*
/// @param configuration QHttp1Configuration*
void q_networkrequest_set_http1_configuration(void* self, void* configuration);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#http2Configuration)
///
/// @param self QNetworkRequest*
QHttp2Configuration* q_networkrequest_http2_configuration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setHttp2Configuration)
///
/// @param self QNetworkRequest*
/// @param configuration QHttp2Configuration*
void q_networkrequest_set_http2_configuration(void* self, void* configuration);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#decompressedSafetyCheckThreshold)
///
/// @param self QNetworkRequest*
long long q_networkrequest_decompressed_safety_check_threshold(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setDecompressedSafetyCheckThreshold)
///
/// @param self QNetworkRequest*
/// @param threshold long long
void q_networkrequest_set_decompressed_safety_check_threshold(void* self, long long threshold);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#transferTimeout)
///
/// @param self QNetworkRequest*
int32_t q_networkrequest_transfer_timeout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setTransferTimeout)
///
/// @param self QNetworkRequest*
/// @param timeout int
void q_networkrequest_set_transfer_timeout(void* self, int timeout);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#setTransferTimeout)
///
/// @param self QNetworkRequest*
void q_networkrequest_set_transfer_timeout2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#attribute)
///
/// @param self QNetworkRequest*
/// @param code enum QNetworkRequest__Attribute
/// @param defaultValue QVariant*
QVariant* q_networkrequest_attribute2(void* self, int32_t code, void* defaultValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkrequest.html#dtor.QNetworkRequest)
///
/// Delete this object from C++ memory.
///
/// @param self QNetworkRequest*
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
