#include <string.h>
#include "libqsslcipher.hpp"
#include "libqsslcipher.h"

/// https://doc.qt.io/qt-6/qsslcipher.html

/// q_sslcipher_new constructs a new QSslCipher object.
///
///
QSslCipher* q_sslcipher_new() {
    return QSslCipher_new();
}

/// q_sslcipher_new2 constructs a new QSslCipher object.
///
/// ``` const char* name ```
QSslCipher* q_sslcipher_new2(const char* name) {
    return QSslCipher_new2(qstring(name));
}

/// q_sslcipher_new3 constructs a new QSslCipher object.
///
/// ``` const char* name, enum QSsl__SslProtocol protocol ```
QSslCipher* q_sslcipher_new3(const char* name, int64_t protocol) {
    return QSslCipher_new3(qstring(name), protocol);
}

/// q_sslcipher_new4 constructs a new QSslCipher object.
///
/// ``` QSslCipher* other ```
QSslCipher* q_sslcipher_new4(void* other) {
    return QSslCipher_new4((QSslCipher*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#operator=)
///
/// ``` QSslCipher* self, QSslCipher* other ```
void q_sslcipher_operator_assign(void* self, void* other) {
    QSslCipher_OperatorAssign((QSslCipher*)self, (QSslCipher*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#swap)
///
/// ``` QSslCipher* self, QSslCipher* other ```
void q_sslcipher_swap(void* self, void* other) {
    QSslCipher_Swap((QSslCipher*)self, (QSslCipher*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#operator==)
///
/// ``` QSslCipher* self, QSslCipher* other ```
bool q_sslcipher_operator_equal(void* self, void* other) {
    return QSslCipher_OperatorEqual((QSslCipher*)self, (QSslCipher*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#operator!=)
///
/// ``` QSslCipher* self, QSslCipher* other ```
bool q_sslcipher_operator_not_equal(void* self, void* other) {
    return QSslCipher_OperatorNotEqual((QSslCipher*)self, (QSslCipher*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#isNull)
///
/// ``` QSslCipher* self ```
bool q_sslcipher_is_null(void* self) {
    return QSslCipher_IsNull((QSslCipher*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#name)
///
/// ``` QSslCipher* self ```
const char* q_sslcipher_name(void* self) {
    libqt_string _str = QSslCipher_Name((QSslCipher*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#supportedBits)
///
/// ``` QSslCipher* self ```
int32_t q_sslcipher_supported_bits(void* self) {
    return QSslCipher_SupportedBits((QSslCipher*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#usedBits)
///
/// ``` QSslCipher* self ```
int32_t q_sslcipher_used_bits(void* self) {
    return QSslCipher_UsedBits((QSslCipher*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#keyExchangeMethod)
///
/// ``` QSslCipher* self ```
const char* q_sslcipher_key_exchange_method(void* self) {
    libqt_string _str = QSslCipher_KeyExchangeMethod((QSslCipher*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#authenticationMethod)
///
/// ``` QSslCipher* self ```
const char* q_sslcipher_authentication_method(void* self) {
    libqt_string _str = QSslCipher_AuthenticationMethod((QSslCipher*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#encryptionMethod)
///
/// ``` QSslCipher* self ```
const char* q_sslcipher_encryption_method(void* self) {
    libqt_string _str = QSslCipher_EncryptionMethod((QSslCipher*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#protocolString)
///
/// ``` QSslCipher* self ```
const char* q_sslcipher_protocol_string(void* self) {
    libqt_string _str = QSslCipher_ProtocolString((QSslCipher*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcipher.html#protocol)
///
/// ``` QSslCipher* self ```
int64_t q_sslcipher_protocol(void* self) {
    return QSslCipher_Protocol((QSslCipher*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QSslCipher* self ```
void q_sslcipher_delete(void* self) {
    QSslCipher_Delete((QSslCipher*)(self));
}