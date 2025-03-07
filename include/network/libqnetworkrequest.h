#pragma once
#ifndef SRC_NETWORKQT6C_LIBQNETWORKREQUEST_H
#define SRC_NETWORKQT6C_LIBQNETWORKREQUEST_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqhttp2configuration.h"
#include "../libqobject.h"
#include "libqsslconfiguration.h"
#include <string.h>
#include "../libqurl.h"
#include "../libqvariant.h"

QNetworkRequest* q_networkrequest_new();
QNetworkRequest* q_networkrequest_new2(void* url);
QNetworkRequest* q_networkrequest_new3(void* other);
void q_networkrequest_operator_assign(void* self, void* other);
void q_networkrequest_swap(void* self, void* other);
bool q_networkrequest_operator_equal(void* self, void* other);
bool q_networkrequest_operator_not_equal(void* self, void* other);
QUrl* q_networkrequest_url(void* self);
void q_networkrequest_set_url(void* self, void* url);
QVariant* q_networkrequest_header(void* self, int64_t header);
void q_networkrequest_set_header(void* self, int64_t header, void* value);
bool q_networkrequest_has_raw_header(void* self, const char* headerName);
const char** q_networkrequest_raw_header_list(void* self);
char* q_networkrequest_raw_header(void* self, const char* headerName);
void q_networkrequest_set_raw_header(void* self, const char* headerName, const char* value);
QVariant* q_networkrequest_attribute(void* self, int64_t code);
void q_networkrequest_set_attribute(void* self, int64_t code, void* value);
QSslConfiguration* q_networkrequest_ssl_configuration(void* self);
void q_networkrequest_set_ssl_configuration(void* self, void* configuration);
void q_networkrequest_set_originating_object(void* self, void* object);
QObject* q_networkrequest_originating_object(void* self);
int64_t q_networkrequest_priority(void* self);
void q_networkrequest_set_priority(void* self, int64_t priority);
int32_t q_networkrequest_maximum_redirects_allowed(void* self);
void q_networkrequest_set_maximum_redirects_allowed(void* self, int maximumRedirectsAllowed);
const char* q_networkrequest_peer_verify_name(void* self);
void q_networkrequest_set_peer_verify_name(void* self, const char* peerName);
QHttp2Configuration* q_networkrequest_http2_configuration(void* self);
void q_networkrequest_set_http2_configuration(void* self, void* configuration);
long long q_networkrequest_decompressed_safety_check_threshold(void* self);
void q_networkrequest_set_decompressed_safety_check_threshold(void* self, long long threshold);
int32_t q_networkrequest_transfer_timeout(void* self);
void q_networkrequest_set_transfer_timeout(void* self);
QVariant* q_networkrequest_attribute2(void* self, int64_t code, void* defaultValue);
void q_networkrequest_set_transfer_timeout1(void* self, int timeout);
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
    QNETWORKREQUEST_KNOWNHEADERS_IFNONEMATCHHEADER = 12
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
