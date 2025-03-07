#include "libqsslpresharedkeyauthenticator.hpp"
#include "libqsslpresharedkeyauthenticator.h"

/// https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html

/// q_sslpresharedkeyauthenticator_new constructs a new QSslPreSharedKeyAuthenticator object.
///
///
QSslPreSharedKeyAuthenticator* q_sslpresharedkeyauthenticator_new() {
    return QSslPreSharedKeyAuthenticator_new();
}

/// q_sslpresharedkeyauthenticator_new2 constructs a new QSslPreSharedKeyAuthenticator object.
///
/// ``` QSslPreSharedKeyAuthenticator* authenticator ```
QSslPreSharedKeyAuthenticator* q_sslpresharedkeyauthenticator_new2(void* authenticator) {
    return QSslPreSharedKeyAuthenticator_new2((QSslPreSharedKeyAuthenticator*)authenticator);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#operator=)
///
/// ``` QSslPreSharedKeyAuthenticator* self, QSslPreSharedKeyAuthenticator* authenticator ```
void q_sslpresharedkeyauthenticator_operator_assign(void* self, void* authenticator) {
    QSslPreSharedKeyAuthenticator_OperatorAssign((QSslPreSharedKeyAuthenticator*)self, (QSslPreSharedKeyAuthenticator*)authenticator);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#swap)
///
/// ``` QSslPreSharedKeyAuthenticator* self, QSslPreSharedKeyAuthenticator* other ```
void q_sslpresharedkeyauthenticator_swap(void* self, void* other) {
    QSslPreSharedKeyAuthenticator_Swap((QSslPreSharedKeyAuthenticator*)self, (QSslPreSharedKeyAuthenticator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#identityHint)
///
/// ``` QSslPreSharedKeyAuthenticator* self ```
char* q_sslpresharedkeyauthenticator_identity_hint(void* self) {
    libqt_string _str = QSslPreSharedKeyAuthenticator_IdentityHint((QSslPreSharedKeyAuthenticator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#setIdentity)
///
/// ``` QSslPreSharedKeyAuthenticator* self, const char* identity ```
void q_sslpresharedkeyauthenticator_set_identity(void* self, const char* identity) {
    QSslPreSharedKeyAuthenticator_SetIdentity((QSslPreSharedKeyAuthenticator*)self, qstring(identity));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#identity)
///
/// ``` QSslPreSharedKeyAuthenticator* self ```
char* q_sslpresharedkeyauthenticator_identity(void* self) {
    libqt_string _str = QSslPreSharedKeyAuthenticator_Identity((QSslPreSharedKeyAuthenticator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#maximumIdentityLength)
///
/// ``` QSslPreSharedKeyAuthenticator* self ```
int32_t q_sslpresharedkeyauthenticator_maximum_identity_length(void* self) {
    return QSslPreSharedKeyAuthenticator_MaximumIdentityLength((QSslPreSharedKeyAuthenticator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#setPreSharedKey)
///
/// ``` QSslPreSharedKeyAuthenticator* self, const char* preSharedKey ```
void q_sslpresharedkeyauthenticator_set_pre_shared_key(void* self, const char* preSharedKey) {
    QSslPreSharedKeyAuthenticator_SetPreSharedKey((QSslPreSharedKeyAuthenticator*)self, qstring(preSharedKey));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#preSharedKey)
///
/// ``` QSslPreSharedKeyAuthenticator* self ```
char* q_sslpresharedkeyauthenticator_pre_shared_key(void* self) {
    libqt_string _str = QSslPreSharedKeyAuthenticator_PreSharedKey((QSslPreSharedKeyAuthenticator*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslpresharedkeyauthenticator.html#maximumPreSharedKeyLength)
///
/// ``` QSslPreSharedKeyAuthenticator* self ```
int32_t q_sslpresharedkeyauthenticator_maximum_pre_shared_key_length(void* self) {
    return QSslPreSharedKeyAuthenticator_MaximumPreSharedKeyLength((QSslPreSharedKeyAuthenticator*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QSslPreSharedKeyAuthenticator* self ```
void q_sslpresharedkeyauthenticator_delete(void* self) {
    QSslPreSharedKeyAuthenticator_Delete((QSslPreSharedKeyAuthenticator*)(self));
}