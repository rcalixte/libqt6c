#pragma once
#ifndef SRC_NETWORKQT6C_LIBQNETWORKCOOKIE_H
#define SRC_NETWORKQT6C_LIBQNETWORKCOOKIE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqdatetime.h"
#include <string.h>
#include "../libqurl.h"

QNetworkCookie* q_networkcookie_new();
QNetworkCookie* q_networkcookie_new2(void* other);
QNetworkCookie* q_networkcookie_new3(const char* name);
QNetworkCookie* q_networkcookie_new4(const char* name, const char* value);
void q_networkcookie_operator_assign(void* self, void* other);
void q_networkcookie_swap(void* self, void* other);
bool q_networkcookie_operator_equal(void* self, void* other);
bool q_networkcookie_operator_not_equal(void* self, void* other);
bool q_networkcookie_is_secure(void* self);
void q_networkcookie_set_secure(void* self, bool enable);
bool q_networkcookie_is_http_only(void* self);
void q_networkcookie_set_http_only(void* self, bool enable);
int64_t q_networkcookie_same_site_policy(void* self);
void q_networkcookie_set_same_site_policy(void* self, int64_t sameSite);
bool q_networkcookie_is_session_cookie(void* self);
QDateTime* q_networkcookie_expiration_date(void* self);
void q_networkcookie_set_expiration_date(void* self, void* date);
const char* q_networkcookie_domain(void* self);
void q_networkcookie_set_domain(void* self, const char* domain);
const char* q_networkcookie_path(void* self);
void q_networkcookie_set_path(void* self, const char* path);
char* q_networkcookie_name(void* self);
void q_networkcookie_set_name(void* self, const char* cookieName);
char* q_networkcookie_value(void* self);
void q_networkcookie_set_value(void* self, const char* value);
char* q_networkcookie_to_raw_form(void* self);
bool q_networkcookie_has_same_identifier(void* self, void* other);
void q_networkcookie_normalize(void* self, void* url);
libqt_list /* of QNetworkCookie* */ q_networkcookie_parse_cookies(const char* cookieString);
char* q_networkcookie_to_raw_form1(void* self, int64_t form);
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
