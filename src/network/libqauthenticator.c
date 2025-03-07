#include <string.h>
#include "../libqvariant.hpp"
#include "libqauthenticator.hpp"
#include "libqauthenticator.h"

/// https://doc.qt.io/qt-6/qauthenticator.html

/// q_authenticator_new constructs a new QAuthenticator object.
///
///
QAuthenticator* q_authenticator_new() {
    return QAuthenticator_new();
}

/// q_authenticator_new2 constructs a new QAuthenticator object.
///
/// ``` QAuthenticator* other ```
QAuthenticator* q_authenticator_new2(void* other) {
    return QAuthenticator_new2((QAuthenticator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#operator=)
///
/// ``` QAuthenticator* self, QAuthenticator* other ```
void q_authenticator_operator_assign(void* self, void* other) {
    QAuthenticator_OperatorAssign((QAuthenticator*)self, (QAuthenticator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#operator==)
///
/// ``` QAuthenticator* self, QAuthenticator* other ```
bool q_authenticator_operator_equal(void* self, void* other) {
    return QAuthenticator_OperatorEqual((QAuthenticator*)self, (QAuthenticator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#operator!=)
///
/// ``` QAuthenticator* self, QAuthenticator* other ```
bool q_authenticator_operator_not_equal(void* self, void* other) {
    return QAuthenticator_OperatorNotEqual((QAuthenticator*)self, (QAuthenticator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#user)
///
/// ``` QAuthenticator* self ```
const char* q_authenticator_user(void* self) {
    libqt_string _str = QAuthenticator_User((QAuthenticator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#setUser)
///
/// ``` QAuthenticator* self, const char* user ```
void q_authenticator_set_user(void* self, const char* user) {
    QAuthenticator_SetUser((QAuthenticator*)self, qstring(user));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#password)
///
/// ``` QAuthenticator* self ```
const char* q_authenticator_password(void* self) {
    libqt_string _str = QAuthenticator_Password((QAuthenticator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#setPassword)
///
/// ``` QAuthenticator* self, const char* password ```
void q_authenticator_set_password(void* self, const char* password) {
    QAuthenticator_SetPassword((QAuthenticator*)self, qstring(password));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#realm)
///
/// ``` QAuthenticator* self ```
const char* q_authenticator_realm(void* self) {
    libqt_string _str = QAuthenticator_Realm((QAuthenticator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#setRealm)
///
/// ``` QAuthenticator* self, const char* realm ```
void q_authenticator_set_realm(void* self, const char* realm) {
    QAuthenticator_SetRealm((QAuthenticator*)self, qstring(realm));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#option)
///
/// ``` QAuthenticator* self, const char* opt ```
QVariant* q_authenticator_option(void* self, const char* opt) {
    return QAuthenticator_Option((QAuthenticator*)self, qstring(opt));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#options)
///
/// ``` QAuthenticator* self ```
libqt_map /* of const char* to QVariant* */ q_authenticator_options(void* self) {
    return QAuthenticator_Options((QAuthenticator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#setOption)
///
/// ``` QAuthenticator* self, const char* opt, QVariant* value ```
void q_authenticator_set_option(void* self, const char* opt, void* value) {
    QAuthenticator_SetOption((QAuthenticator*)self, qstring(opt), (QVariant*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#isNull)
///
/// ``` QAuthenticator* self ```
bool q_authenticator_is_null(void* self) {
    return QAuthenticator_IsNull((QAuthenticator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qauthenticator.html#detach)
///
/// ``` QAuthenticator* self ```
void q_authenticator_detach(void* self) {
    QAuthenticator_Detach((QAuthenticator*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QAuthenticator* self ```
void q_authenticator_delete(void* self) {
    QAuthenticator_Delete((QAuthenticator*)(self));
}