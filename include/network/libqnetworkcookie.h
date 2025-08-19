#pragma once
#ifndef SRC_NETWORKQT6C_LIBQNETWORKCOOKIE_H
#define SRC_NETWORKQT6C_LIBQNETWORKCOOKIE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qnetworkcookie.html

/// q_networkcookie_new constructs a new QNetworkCookie object.
///
QNetworkCookie* q_networkcookie_new();

/// q_networkcookie_new2 constructs a new QNetworkCookie object.
///
/// @param other QNetworkCookie*
QNetworkCookie* q_networkcookie_new2(void* other);

/// q_networkcookie_new3 constructs a new QNetworkCookie object.
///
/// @param name const char*
QNetworkCookie* q_networkcookie_new3(const char* name);

/// q_networkcookie_new4 constructs a new QNetworkCookie object.
///
/// @param name const char*
/// @param value const char*
QNetworkCookie* q_networkcookie_new4(const char* name, const char* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#operator-eq)
///
/// @param self QNetworkCookie*
/// @param other QNetworkCookie*
void q_networkcookie_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#swap)
///
/// @param self QNetworkCookie*
/// @param other QNetworkCookie*
void q_networkcookie_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#operator-eq-eq)
///
/// @param self QNetworkCookie*
/// @param other QNetworkCookie*
bool q_networkcookie_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#operator-not-eq)
///
/// @param self QNetworkCookie*
/// @param other QNetworkCookie*
bool q_networkcookie_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#isSecure)
///
/// @param self QNetworkCookie*
bool q_networkcookie_is_secure(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#setSecure)
///
/// @param self QNetworkCookie*
/// @param enable bool
void q_networkcookie_set_secure(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#isHttpOnly)
///
/// @param self QNetworkCookie*
bool q_networkcookie_is_http_only(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#setHttpOnly)
///
/// @param self QNetworkCookie*
/// @param enable bool
void q_networkcookie_set_http_only(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#sameSitePolicy)
///
/// @param self QNetworkCookie*
///
/// @return enum QNetworkCookie__SameSite
int32_t q_networkcookie_same_site_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#setSameSitePolicy)
///
/// @param self QNetworkCookie*
/// @param sameSite enum QNetworkCookie__SameSite
void q_networkcookie_set_same_site_policy(void* self, int32_t sameSite);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#isSessionCookie)
///
/// @param self QNetworkCookie*
bool q_networkcookie_is_session_cookie(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#expirationDate)
///
/// @param self QNetworkCookie*
QDateTime* q_networkcookie_expiration_date(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#setExpirationDate)
///
/// @param self QNetworkCookie*
/// @param date QDateTime*
void q_networkcookie_set_expiration_date(void* self, void* date);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#domain)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QNetworkCookie*
const char* q_networkcookie_domain(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#setDomain)
///
/// @param self QNetworkCookie*
/// @param domain const char*
void q_networkcookie_set_domain(void* self, const char* domain);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#path)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QNetworkCookie*
const char* q_networkcookie_path(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#setPath)
///
/// @param self QNetworkCookie*
/// @param path const char*
void q_networkcookie_set_path(void* self, const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QNetworkCookie*
char* q_networkcookie_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#setName)
///
/// @param self QNetworkCookie*
/// @param cookieName const char*
void q_networkcookie_set_name(void* self, const char* cookieName);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#value)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QNetworkCookie*
char* q_networkcookie_value(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#setValue)
///
/// @param self QNetworkCookie*
/// @param value const char*
void q_networkcookie_set_value(void* self, const char* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#toRawForm)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QNetworkCookie*
char* q_networkcookie_to_raw_form(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#hasSameIdentifier)
///
/// @param self QNetworkCookie*
/// @param other QNetworkCookie*
bool q_networkcookie_has_same_identifier(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#normalize)
///
/// @param self QNetworkCookie*
/// @param url QUrl*
void q_networkcookie_normalize(void* self, void* url);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#parseCookies)
///
/// @param cookieString const char*
libqt_list /* of QNetworkCookie* */ q_networkcookie_parse_cookies(const char* cookieString);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#toRawForm)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QNetworkCookie*
/// @param form enum QNetworkCookie__RawForm
char* q_networkcookie_to_raw_form1(void* self, int32_t form);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#dtor.QNetworkCookie)
///
/// Delete this object from C++ memory.
///
/// @param self QNetworkCookie*
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
