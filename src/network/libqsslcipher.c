#include "libqsslcipher.hpp"
#include "libqsslcipher.h"

QSslCipher* q_sslcipher_new() {
    return QSslCipher_new();
}

QSslCipher* q_sslcipher_new2(const char* name) {
    return QSslCipher_new2(qstring(name));
}

QSslCipher* q_sslcipher_new3(const char* name, int64_t protocol) {
    return QSslCipher_new3(qstring(name), protocol);
}

QSslCipher* q_sslcipher_new4(void* other) {
    return QSslCipher_new4((QSslCipher*)other);
}

void q_sslcipher_operator_assign(void* self, void* other) {
    QSslCipher_OperatorAssign((QSslCipher*)self, (QSslCipher*)other);
}

void q_sslcipher_swap(void* self, void* other) {
    QSslCipher_Swap((QSslCipher*)self, (QSslCipher*)other);
}

bool q_sslcipher_operator_equal(void* self, void* other) {
    return QSslCipher_OperatorEqual((QSslCipher*)self, (QSslCipher*)other);
}

bool q_sslcipher_operator_not_equal(void* self, void* other) {
    return QSslCipher_OperatorNotEqual((QSslCipher*)self, (QSslCipher*)other);
}

bool q_sslcipher_is_null(void* self) {
    return QSslCipher_IsNull((QSslCipher*)self);
}

const char* q_sslcipher_name(void* self) {
    libqt_string _str = QSslCipher_Name((QSslCipher*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_sslcipher_supported_bits(void* self) {
    return QSslCipher_SupportedBits((QSslCipher*)self);
}

int32_t q_sslcipher_used_bits(void* self) {
    return QSslCipher_UsedBits((QSslCipher*)self);
}

const char* q_sslcipher_key_exchange_method(void* self) {
    libqt_string _str = QSslCipher_KeyExchangeMethod((QSslCipher*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sslcipher_authentication_method(void* self) {
    libqt_string _str = QSslCipher_AuthenticationMethod((QSslCipher*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sslcipher_encryption_method(void* self) {
    libqt_string _str = QSslCipher_EncryptionMethod((QSslCipher*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sslcipher_protocol_string(void* self) {
    libqt_string _str = QSslCipher_ProtocolString((QSslCipher*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_sslcipher_protocol(void* self) {
    return QSslCipher_Protocol((QSslCipher*)self);
}

void q_sslcipher_delete(void* self) {
    QSslCipher_Delete((QSslCipher*)(self));
}
