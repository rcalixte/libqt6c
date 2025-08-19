#include "../libqiodevice.hpp"
#include "libqsslkey.hpp"
#include "libqsslkey.h"

QSslKey* q_sslkey_new() {
    return QSslKey_new();
}

QSslKey* q_sslkey_new2(const char* encoded, int32_t algorithm) {
    return QSslKey_new2(qstring(encoded), algorithm);
}

QSslKey* q_sslkey_new3(void* device, int32_t algorithm) {
    return QSslKey_new3((QIODevice*)device, algorithm);
}

QSslKey* q_sslkey_new4(void* handle) {
    return QSslKey_new4(handle);
}

QSslKey* q_sslkey_new5(void* other) {
    return QSslKey_new5((QSslKey*)other);
}

QSslKey* q_sslkey_new6(const char* encoded, int32_t algorithm, int32_t format) {
    return QSslKey_new6(qstring(encoded), algorithm, format);
}

QSslKey* q_sslkey_new7(const char* encoded, int32_t algorithm, int32_t format, int32_t typeVal) {
    return QSslKey_new7(qstring(encoded), algorithm, format, typeVal);
}

QSslKey* q_sslkey_new8(const char* encoded, int32_t algorithm, int32_t format, int32_t typeVal, const char* passPhrase) {
    return QSslKey_new8(qstring(encoded), algorithm, format, typeVal, qstring(passPhrase));
}

QSslKey* q_sslkey_new9(void* device, int32_t algorithm, int32_t format) {
    return QSslKey_new9((QIODevice*)device, algorithm, format);
}

QSslKey* q_sslkey_new10(void* device, int32_t algorithm, int32_t format, int32_t typeVal) {
    return QSslKey_new10((QIODevice*)device, algorithm, format, typeVal);
}

QSslKey* q_sslkey_new11(void* device, int32_t algorithm, int32_t format, int32_t typeVal, const char* passPhrase) {
    return QSslKey_new11((QIODevice*)device, algorithm, format, typeVal, qstring(passPhrase));
}

QSslKey* q_sslkey_new12(void* handle, int32_t typeVal) {
    return QSslKey_new12(handle, typeVal);
}

void q_sslkey_operator_assign(void* self, void* other) {
    QSslKey_OperatorAssign((QSslKey*)self, (QSslKey*)other);
}

void q_sslkey_swap(void* self, void* other) {
    QSslKey_Swap((QSslKey*)self, (QSslKey*)other);
}

bool q_sslkey_is_null(void* self) {
    return QSslKey_IsNull((QSslKey*)self);
}

void q_sslkey_clear(void* self) {
    QSslKey_Clear((QSslKey*)self);
}

int32_t q_sslkey_length(void* self) {
    return QSslKey_Length((QSslKey*)self);
}

int32_t q_sslkey_type(void* self) {
    return QSslKey_Type((QSslKey*)self);
}

int32_t q_sslkey_algorithm(void* self) {
    return QSslKey_Algorithm((QSslKey*)self);
}

char* q_sslkey_to_pem(void* self) {
    libqt_string _str = QSslKey_ToPem((QSslKey*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_sslkey_to_der(void* self) {
    libqt_string _str = QSslKey_ToDer((QSslKey*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void* q_sslkey_handle(void* self) {
    return QSslKey_Handle((QSslKey*)self);
}

bool q_sslkey_operator_equal(void* self, void* key) {
    return QSslKey_OperatorEqual((QSslKey*)self, (QSslKey*)key);
}

bool q_sslkey_operator_not_equal(void* self, void* key) {
    return QSslKey_OperatorNotEqual((QSslKey*)self, (QSslKey*)key);
}

char* q_sslkey_to_pem1(void* self, const char* passPhrase) {
    libqt_string _str = QSslKey_ToPem1((QSslKey*)self, qstring(passPhrase));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_sslkey_to_der1(void* self, const char* passPhrase) {
    libqt_string _str = QSslKey_ToDer1((QSslKey*)self, qstring(passPhrase));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sslkey_delete(void* self) {
    QSslKey_Delete((QSslKey*)(self));
}
