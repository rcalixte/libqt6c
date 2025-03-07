#include "../libqdatetime.hpp"
#include <string.h>
#include "../libqurl.hpp"
#include "libqnetworkcookie.hpp"
#include "libqnetworkcookie.h"

/// https://doc.qt.io/qt-6/qnetworkcookie.html

/// q_networkcookie_new constructs a new QNetworkCookie object.
///
///
QNetworkCookie* q_networkcookie_new() {
    return QNetworkCookie_new();
}

/// q_networkcookie_new2 constructs a new QNetworkCookie object.
///
/// ``` QNetworkCookie* other ```
QNetworkCookie* q_networkcookie_new2(void* other) {
    return QNetworkCookie_new2((QNetworkCookie*)other);
}

/// q_networkcookie_new3 constructs a new QNetworkCookie object.
///
/// ``` const char* name ```
QNetworkCookie* q_networkcookie_new3(const char* name) {
    return QNetworkCookie_new3(qstring(name));
}

/// q_networkcookie_new4 constructs a new QNetworkCookie object.
///
/// ``` const char* name, const char* value ```
QNetworkCookie* q_networkcookie_new4(const char* name, const char* value) {
    return QNetworkCookie_new4(qstring(name), qstring(value));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#operator=)
///
/// ``` QNetworkCookie* self, QNetworkCookie* other ```
void q_networkcookie_operator_assign(void* self, void* other) {
    QNetworkCookie_OperatorAssign((QNetworkCookie*)self, (QNetworkCookie*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#swap)
///
/// ``` QNetworkCookie* self, QNetworkCookie* other ```
void q_networkcookie_swap(void* self, void* other) {
    QNetworkCookie_Swap((QNetworkCookie*)self, (QNetworkCookie*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#operator==)
///
/// ``` QNetworkCookie* self, QNetworkCookie* other ```
bool q_networkcookie_operator_equal(void* self, void* other) {
    return QNetworkCookie_OperatorEqual((QNetworkCookie*)self, (QNetworkCookie*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#operator!=)
///
/// ``` QNetworkCookie* self, QNetworkCookie* other ```
bool q_networkcookie_operator_not_equal(void* self, void* other) {
    return QNetworkCookie_OperatorNotEqual((QNetworkCookie*)self, (QNetworkCookie*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#isSecure)
///
/// ``` QNetworkCookie* self ```
bool q_networkcookie_is_secure(void* self) {
    return QNetworkCookie_IsSecure((QNetworkCookie*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#setSecure)
///
/// ``` QNetworkCookie* self, bool enable ```
void q_networkcookie_set_secure(void* self, bool enable) {
    QNetworkCookie_SetSecure((QNetworkCookie*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#isHttpOnly)
///
/// ``` QNetworkCookie* self ```
bool q_networkcookie_is_http_only(void* self) {
    return QNetworkCookie_IsHttpOnly((QNetworkCookie*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#setHttpOnly)
///
/// ``` QNetworkCookie* self, bool enable ```
void q_networkcookie_set_http_only(void* self, bool enable) {
    QNetworkCookie_SetHttpOnly((QNetworkCookie*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#sameSitePolicy)
///
/// ``` QNetworkCookie* self ```
int64_t q_networkcookie_same_site_policy(void* self) {
    return QNetworkCookie_SameSitePolicy((QNetworkCookie*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#setSameSitePolicy)
///
/// ``` QNetworkCookie* self, enum QNetworkCookie__SameSite sameSite ```
void q_networkcookie_set_same_site_policy(void* self, int64_t sameSite) {
    QNetworkCookie_SetSameSitePolicy((QNetworkCookie*)self, sameSite);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#isSessionCookie)
///
/// ``` QNetworkCookie* self ```
bool q_networkcookie_is_session_cookie(void* self) {
    return QNetworkCookie_IsSessionCookie((QNetworkCookie*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#expirationDate)
///
/// ``` QNetworkCookie* self ```
QDateTime* q_networkcookie_expiration_date(void* self) {
    return QNetworkCookie_ExpirationDate((QNetworkCookie*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#setExpirationDate)
///
/// ``` QNetworkCookie* self, QDateTime* date ```
void q_networkcookie_set_expiration_date(void* self, void* date) {
    QNetworkCookie_SetExpirationDate((QNetworkCookie*)self, (QDateTime*)date);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#domain)
///
/// ``` QNetworkCookie* self ```
const char* q_networkcookie_domain(void* self) {
    libqt_string _str = QNetworkCookie_Domain((QNetworkCookie*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#setDomain)
///
/// ``` QNetworkCookie* self, const char* domain ```
void q_networkcookie_set_domain(void* self, const char* domain) {
    QNetworkCookie_SetDomain((QNetworkCookie*)self, qstring(domain));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#path)
///
/// ``` QNetworkCookie* self ```
const char* q_networkcookie_path(void* self) {
    libqt_string _str = QNetworkCookie_Path((QNetworkCookie*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#setPath)
///
/// ``` QNetworkCookie* self, const char* path ```
void q_networkcookie_set_path(void* self, const char* path) {
    QNetworkCookie_SetPath((QNetworkCookie*)self, qstring(path));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#name)
///
/// ``` QNetworkCookie* self ```
char* q_networkcookie_name(void* self) {
    libqt_string _str = QNetworkCookie_Name((QNetworkCookie*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#setName)
///
/// ``` QNetworkCookie* self, const char* cookieName ```
void q_networkcookie_set_name(void* self, const char* cookieName) {
    QNetworkCookie_SetName((QNetworkCookie*)self, qstring(cookieName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#value)
///
/// ``` QNetworkCookie* self ```
char* q_networkcookie_value(void* self) {
    libqt_string _str = QNetworkCookie_Value((QNetworkCookie*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#setValue)
///
/// ``` QNetworkCookie* self, const char* value ```
void q_networkcookie_set_value(void* self, const char* value) {
    QNetworkCookie_SetValue((QNetworkCookie*)self, qstring(value));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#toRawForm)
///
/// ``` QNetworkCookie* self ```
char* q_networkcookie_to_raw_form(void* self) {
    libqt_string _str = QNetworkCookie_ToRawForm((QNetworkCookie*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#hasSameIdentifier)
///
/// ``` QNetworkCookie* self, QNetworkCookie* other ```
bool q_networkcookie_has_same_identifier(void* self, void* other) {
    return QNetworkCookie_HasSameIdentifier((QNetworkCookie*)self, (QNetworkCookie*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#normalize)
///
/// ``` QNetworkCookie* self, QUrl* url ```
void q_networkcookie_normalize(void* self, void* url) {
    QNetworkCookie_Normalize((QNetworkCookie*)self, (QUrl*)url);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#parseCookies)
///
/// ``` const char* cookieString ```
libqt_list /* of QNetworkCookie* */ q_networkcookie_parse_cookies(const char* cookieString) {
    libqt_list _arr = QNetworkCookie_ParseCookies(qstring(cookieString));
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkcookie.html#toRawForm)
///
/// ``` QNetworkCookie* self, enum QNetworkCookie__RawForm form ```
char* q_networkcookie_to_raw_form1(void* self, int64_t form) {
    libqt_string _str = QNetworkCookie_ToRawForm1((QNetworkCookie*)self, form);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QNetworkCookie* self ```
void q_networkcookie_delete(void* self) {
    QNetworkCookie_Delete((QNetworkCookie*)(self));
}