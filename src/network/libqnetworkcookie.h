#pragma once
#ifndef SRC_NETWORKQT6C_LIBQNETWORKCOOKIE_H
#define SRC_NETWORKQT6C_LIBQNETWORKCOOKIE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qnetworkcookie.html

/// q_networkcookie_new constructs a new QNetworkCookie object.
///
///
QNetworkCookie* q_networkcookie_new();

/// q_networkcookie_new2 constructs a new QNetworkCookie object.
///
/// ``` QNetworkCookie* other ```
QNetworkCookie* q_networkcookie_new2(void* other);

/// q_networkcookie_new3 constructs a new QNetworkCookie object.
///
/// ``` const char* name ```
QNetworkCookie* q_networkcookie_new3(const char* name);

/// q_networkcookie_new4 constructs a new QNetworkCookie object.
///
/// ``` const char* name, const char* value ```
QNetworkCookie* q_networkcookie_new4(const char* name, const char* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#operator-eq)
///
/// ``` QNetworkCookie* self, QNetworkCookie* other ```
void q_networkcookie_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#swap)
///
/// ``` QNetworkCookie* self, QNetworkCookie* other ```
void q_networkcookie_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#operator-eq-eq)
///
/// ``` QNetworkCookie* self, QNetworkCookie* other ```
bool q_networkcookie_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#operator-not-eq)
///
/// ``` QNetworkCookie* self, QNetworkCookie* other ```
bool q_networkcookie_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#isSecure)
///
/// ``` QNetworkCookie* self ```
bool q_networkcookie_is_secure(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#setSecure)
///
/// ``` QNetworkCookie* self, bool enable ```
void q_networkcookie_set_secure(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#isHttpOnly)
///
/// ``` QNetworkCookie* self ```
bool q_networkcookie_is_http_only(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#setHttpOnly)
///
/// ``` QNetworkCookie* self, bool enable ```
void q_networkcookie_set_http_only(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#sameSitePolicy)
///
/// ``` QNetworkCookie* self ```
int64_t q_networkcookie_same_site_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#setSameSitePolicy)
///
/// ``` QNetworkCookie* self, enum QNetworkCookie__SameSite sameSite ```
void q_networkcookie_set_same_site_policy(void* self, int64_t sameSite);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#isSessionCookie)
///
/// ``` QNetworkCookie* self ```
bool q_networkcookie_is_session_cookie(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#expirationDate)
///
/// ``` QNetworkCookie* self ```
QDateTime* q_networkcookie_expiration_date(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#setExpirationDate)
///
/// ``` QNetworkCookie* self, QDateTime* date ```
void q_networkcookie_set_expiration_date(void* self, void* date);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#domain)
///
/// ``` QNetworkCookie* self ```
const char* q_networkcookie_domain(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#setDomain)
///
/// ``` QNetworkCookie* self, const char* domain ```
void q_networkcookie_set_domain(void* self, const char* domain);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#path)
///
/// ``` QNetworkCookie* self ```
const char* q_networkcookie_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#setPath)
///
/// ``` QNetworkCookie* self, const char* path ```
void q_networkcookie_set_path(void* self, const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#name)
///
/// ``` QNetworkCookie* self ```
char* q_networkcookie_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#setName)
///
/// ``` QNetworkCookie* self, const char* cookieName ```
void q_networkcookie_set_name(void* self, const char* cookieName);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#value)
///
/// ``` QNetworkCookie* self ```
char* q_networkcookie_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#setValue)
///
/// ``` QNetworkCookie* self, const char* value ```
void q_networkcookie_set_value(void* self, const char* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#toRawForm)
///
/// ``` QNetworkCookie* self ```
char* q_networkcookie_to_raw_form(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#hasSameIdentifier)
///
/// ``` QNetworkCookie* self, QNetworkCookie* other ```
bool q_networkcookie_has_same_identifier(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#normalize)
///
/// ``` QNetworkCookie* self, QUrl* url ```
void q_networkcookie_normalize(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#parseCookies)
///
/// ``` const char* cookieString ```
libqt_list /* of QNetworkCookie* */ q_networkcookie_parse_cookies(const char* cookieString);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#toRawForm)
///
/// ``` QNetworkCookie* self, enum QNetworkCookie__RawForm form ```
char* q_networkcookie_to_raw_form1(void* self, int64_t form);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#dtor.QNetworkCookie)
///
/// Delete this object from C++ memory.
///
/// ``` QNetworkCookie* self ```
void q_networkcookie_delete(void* self);

/// https://doc.qt.io/qt-6/qnetworkcookie.html#types

typedef enum {
    QNETWORKCOOKIE_RAWFORM_NAMEANDVALUEONLY = 0,
    QNETWORKCOOKIE_RAWFORM_FULL = 1
} QNetworkCookie__RawForm;

typedef enum {
    QNETWORKCOOKIE_SAMESITE_DEFAULT = 0,
    QNETWORKCOOKIE_SAMESITE_NONE = 1,
    QNETWORKCOOKIE_SAMESITE_LAX = 2,
    QNETWORKCOOKIE_SAMESITE_STRICT = 3
} QNetworkCookie__SameSite;

#endif
