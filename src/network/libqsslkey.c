#include "../libqiodevice.hpp"
#include "libqsslkey.hpp"
#include "libqsslkey.h"

/// https://doc.qt.io/qt-6/qsslkey.html

/// q_sslkey_new constructs a new QSslKey object.
///
///
QSslKey* q_sslkey_new() {
    return QSslKey_new();
}

/// q_sslkey_new2 constructs a new QSslKey object.
///
/// ``` const char* encoded, enum QSsl__KeyAlgorithm algorithm ```
QSslKey* q_sslkey_new2(const char* encoded, int64_t algorithm) {
    return QSslKey_new2(qstring(encoded), algorithm);
}

/// q_sslkey_new3 constructs a new QSslKey object.
///
/// ``` QIODevice* device, enum QSsl__KeyAlgorithm algorithm ```
QSslKey* q_sslkey_new3(void* device, int64_t algorithm) {
    return QSslKey_new3((QIODevice*)device, algorithm);
}

/// q_sslkey_new4 constructs a new QSslKey object.
///
/// ``` void* handle ```
QSslKey* q_sslkey_new4(void* handle) {
    return QSslKey_new4(handle);
}

/// q_sslkey_new5 constructs a new QSslKey object.
///
/// ``` QSslKey* other ```
QSslKey* q_sslkey_new5(void* other) {
    return QSslKey_new5((QSslKey*)other);
}

/// q_sslkey_new6 constructs a new QSslKey object.
///
/// ``` const char* encoded, enum QSsl__KeyAlgorithm algorithm, enum QSsl__EncodingFormat format ```
QSslKey* q_sslkey_new6(const char* encoded, int64_t algorithm, int64_t format) {
    return QSslKey_new6(qstring(encoded), algorithm, format);
}

/// q_sslkey_new7 constructs a new QSslKey object.
///
/// ``` const char* encoded, enum QSsl__KeyAlgorithm algorithm, enum QSsl__EncodingFormat format, enum QSsl__KeyType typeVal ```
QSslKey* q_sslkey_new7(const char* encoded, int64_t algorithm, int64_t format, int64_t typeVal) {
    return QSslKey_new7(qstring(encoded), algorithm, format, typeVal);
}

/// q_sslkey_new8 constructs a new QSslKey object.
///
/// ``` const char* encoded, enum QSsl__KeyAlgorithm algorithm, enum QSsl__EncodingFormat format, enum QSsl__KeyType typeVal, const char* passPhrase ```
QSslKey* q_sslkey_new8(const char* encoded, int64_t algorithm, int64_t format, int64_t typeVal, const char* passPhrase) {
    return QSslKey_new8(qstring(encoded), algorithm, format, typeVal, qstring(passPhrase));
}

/// q_sslkey_new9 constructs a new QSslKey object.
///
/// ``` QIODevice* device, enum QSsl__KeyAlgorithm algorithm, enum QSsl__EncodingFormat format ```
QSslKey* q_sslkey_new9(void* device, int64_t algorithm, int64_t format) {
    return QSslKey_new9((QIODevice*)device, algorithm, format);
}

/// q_sslkey_new10 constructs a new QSslKey object.
///
/// ``` QIODevice* device, enum QSsl__KeyAlgorithm algorithm, enum QSsl__EncodingFormat format, enum QSsl__KeyType typeVal ```
QSslKey* q_sslkey_new10(void* device, int64_t algorithm, int64_t format, int64_t typeVal) {
    return QSslKey_new10((QIODevice*)device, algorithm, format, typeVal);
}

/// q_sslkey_new11 constructs a new QSslKey object.
///
/// ``` QIODevice* device, enum QSsl__KeyAlgorithm algorithm, enum QSsl__EncodingFormat format, enum QSsl__KeyType typeVal, const char* passPhrase ```
QSslKey* q_sslkey_new11(void* device, int64_t algorithm, int64_t format, int64_t typeVal, const char* passPhrase) {
    return QSslKey_new11((QIODevice*)device, algorithm, format, typeVal, qstring(passPhrase));
}

/// q_sslkey_new12 constructs a new QSslKey object.
///
/// ``` void* handle, enum QSsl__KeyType typeVal ```
QSslKey* q_sslkey_new12(void* handle, int64_t typeVal) {
    return QSslKey_new12(handle, typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#operator=)
///
/// ``` QSslKey* self, QSslKey* other ```
void q_sslkey_operator_assign(void* self, void* other) {
    QSslKey_OperatorAssign((QSslKey*)self, (QSslKey*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#swap)
///
/// ``` QSslKey* self, QSslKey* other ```
void q_sslkey_swap(void* self, void* other) {
    QSslKey_Swap((QSslKey*)self, (QSslKey*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#isNull)
///
/// ``` QSslKey* self ```
bool q_sslkey_is_null(void* self) {
    return QSslKey_IsNull((QSslKey*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#clear)
///
/// ``` QSslKey* self ```
void q_sslkey_clear(void* self) {
    QSslKey_Clear((QSslKey*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#length)
///
/// ``` QSslKey* self ```
int32_t q_sslkey_length(void* self) {
    return QSslKey_Length((QSslKey*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#type)
///
/// ``` QSslKey* self ```
int64_t q_sslkey_type(void* self) {
    return QSslKey_Type((QSslKey*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#algorithm)
///
/// ``` QSslKey* self ```
int64_t q_sslkey_algorithm(void* self) {
    return QSslKey_Algorithm((QSslKey*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#toPem)
///
/// ``` QSslKey* self ```
char* q_sslkey_to_pem(void* self) {
    libqt_string _str = QSslKey_ToPem((QSslKey*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#toDer)
///
/// ``` QSslKey* self ```
char* q_sslkey_to_der(void* self) {
    libqt_string _str = QSslKey_ToDer((QSslKey*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#handle)
///
/// ``` QSslKey* self ```
void* q_sslkey_handle(void* self) {
    return QSslKey_Handle((QSslKey*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#operator==)
///
/// ``` QSslKey* self, QSslKey* key ```
bool q_sslkey_operator_equal(void* self, void* key) {
    return QSslKey_OperatorEqual((QSslKey*)self, (QSslKey*)key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#operator!=)
///
/// ``` QSslKey* self, QSslKey* key ```
bool q_sslkey_operator_not_equal(void* self, void* key) {
    return QSslKey_OperatorNotEqual((QSslKey*)self, (QSslKey*)key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#toPem)
///
/// ``` QSslKey* self, const char* passPhrase ```
char* q_sslkey_to_pem1(void* self, const char* passPhrase) {
    libqt_string _str = QSslKey_ToPem1((QSslKey*)self, qstring(passPhrase));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslkey.html#toDer)
///
/// ``` QSslKey* self, const char* passPhrase ```
char* q_sslkey_to_der1(void* self, const char* passPhrase) {
    libqt_string _str = QSslKey_ToDer1((QSslKey*)self, qstring(passPhrase));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QSslKey* self ```
void q_sslkey_delete(void* self) {
    QSslKey_Delete((QSslKey*)(self));
}