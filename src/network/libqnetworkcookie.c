#include "../libqdatetime.hpp"
#include <string.h>
#include "../libqurl.hpp"
#include "libqnetworkcookie.hpp"
#include "libqnetworkcookie.h"

QNetworkCookie* q_networkcookie_new() {
    return QNetworkCookie_new();
}

QNetworkCookie* q_networkcookie_new2(void* other) {
    return QNetworkCookie_new2((QNetworkCookie*)other);
}

QNetworkCookie* q_networkcookie_new3(const char* name) {
    return QNetworkCookie_new3(qstring(name));
}

QNetworkCookie* q_networkcookie_new4(const char* name, const char* value) {
    return QNetworkCookie_new4(qstring(name), qstring(value));
}

void q_networkcookie_operator_assign(void* self, void* other) {
    QNetworkCookie_OperatorAssign((QNetworkCookie*)self, (QNetworkCookie*)other);
}

void q_networkcookie_swap(void* self, void* other) {
    QNetworkCookie_Swap((QNetworkCookie*)self, (QNetworkCookie*)other);
}

bool q_networkcookie_operator_equal(void* self, void* other) {
    return QNetworkCookie_OperatorEqual((QNetworkCookie*)self, (QNetworkCookie*)other);
}

bool q_networkcookie_operator_not_equal(void* self, void* other) {
    return QNetworkCookie_OperatorNotEqual((QNetworkCookie*)self, (QNetworkCookie*)other);
}

bool q_networkcookie_is_secure(void* self) {
    return QNetworkCookie_IsSecure((QNetworkCookie*)self);
}

void q_networkcookie_set_secure(void* self, bool enable) {
    QNetworkCookie_SetSecure((QNetworkCookie*)self, enable);
}

bool q_networkcookie_is_http_only(void* self) {
    return QNetworkCookie_IsHttpOnly((QNetworkCookie*)self);
}

void q_networkcookie_set_http_only(void* self, bool enable) {
    QNetworkCookie_SetHttpOnly((QNetworkCookie*)self, enable);
}

int64_t q_networkcookie_same_site_policy(void* self) {
    return QNetworkCookie_SameSitePolicy((QNetworkCookie*)self);
}

void q_networkcookie_set_same_site_policy(void* self, int64_t sameSite) {
    QNetworkCookie_SetSameSitePolicy((QNetworkCookie*)self, sameSite);
}

bool q_networkcookie_is_session_cookie(void* self) {
    return QNetworkCookie_IsSessionCookie((QNetworkCookie*)self);
}

QDateTime* q_networkcookie_expiration_date(void* self) {
    return QNetworkCookie_ExpirationDate((QNetworkCookie*)self);
}

void q_networkcookie_set_expiration_date(void* self, void* date) {
    QNetworkCookie_SetExpirationDate((QNetworkCookie*)self, (QDateTime*)date);
}

const char* q_networkcookie_domain(void* self) {
    libqt_string _str = QNetworkCookie_Domain((QNetworkCookie*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_networkcookie_set_domain(void* self, const char* domain) {
    QNetworkCookie_SetDomain((QNetworkCookie*)self, qstring(domain));
}

const char* q_networkcookie_path(void* self) {
    libqt_string _str = QNetworkCookie_Path((QNetworkCookie*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_networkcookie_set_path(void* self, const char* path) {
    QNetworkCookie_SetPath((QNetworkCookie*)self, qstring(path));
}

char* q_networkcookie_name(void* self) {
    libqt_string _str = QNetworkCookie_Name((QNetworkCookie*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_networkcookie_set_name(void* self, const char* cookieName) {
    QNetworkCookie_SetName((QNetworkCookie*)self, qstring(cookieName));
}

char* q_networkcookie_value(void* self) {
    libqt_string _str = QNetworkCookie_Value((QNetworkCookie*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_networkcookie_set_value(void* self, const char* value) {
    QNetworkCookie_SetValue((QNetworkCookie*)self, qstring(value));
}

char* q_networkcookie_to_raw_form(void* self) {
    libqt_string _str = QNetworkCookie_ToRawForm((QNetworkCookie*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_networkcookie_has_same_identifier(void* self, void* other) {
    return QNetworkCookie_HasSameIdentifier((QNetworkCookie*)self, (QNetworkCookie*)other);
}

void q_networkcookie_normalize(void* self, void* url) {
    QNetworkCookie_Normalize((QNetworkCookie*)self, (QUrl*)url);
}

libqt_list /* of QNetworkCookie* */ q_networkcookie_parse_cookies(const char* cookieString) {
    libqt_list _arr = QNetworkCookie_ParseCookies(qstring(cookieString));
    return _arr;
}

char* q_networkcookie_to_raw_form1(void* self, int64_t form) {
    libqt_string _str = QNetworkCookie_ToRawForm1((QNetworkCookie*)self, form);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_networkcookie_delete(void* self) {
    QNetworkCookie_Delete((QNetworkCookie*)(self));
}
