#include "../libqiodevice.hpp"
#include <string.h>
#include "libqssldiffiehellmanparameters.hpp"
#include "libqssldiffiehellmanparameters.h"

/// https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html

/// q_ssldiffiehellmanparameters_new constructs a new QSslDiffieHellmanParameters object.
///
///
QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_new() {
    return QSslDiffieHellmanParameters_new();
}

/// q_ssldiffiehellmanparameters_new2 constructs a new QSslDiffieHellmanParameters object.
///
/// ``` QSslDiffieHellmanParameters* other ```
QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_new2(void* other) {
    return QSslDiffieHellmanParameters_new2((QSslDiffieHellmanParameters*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#defaultParameters)
///
///
QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_default_parameters() {
    return QSslDiffieHellmanParameters_DefaultParameters();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#operator=)
///
/// ``` QSslDiffieHellmanParameters* self, QSslDiffieHellmanParameters* other ```
void q_ssldiffiehellmanparameters_operator_assign(void* self, void* other) {
    QSslDiffieHellmanParameters_OperatorAssign((QSslDiffieHellmanParameters*)self, (QSslDiffieHellmanParameters*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#swap)
///
/// ``` QSslDiffieHellmanParameters* self, QSslDiffieHellmanParameters* other ```
void q_ssldiffiehellmanparameters_swap(void* self, void* other) {
    QSslDiffieHellmanParameters_Swap((QSslDiffieHellmanParameters*)self, (QSslDiffieHellmanParameters*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#fromEncoded)
///
/// ``` const char* encoded ```
QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_from_encoded(const char* encoded) {
    return QSslDiffieHellmanParameters_FromEncoded(qstring(encoded));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#fromEncoded)
///
/// ``` QIODevice* device ```
QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_from_encoded_with_device(void* device) {
    return QSslDiffieHellmanParameters_FromEncodedWithDevice((QIODevice*)device);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#isEmpty)
///
/// ``` QSslDiffieHellmanParameters* self ```
bool q_ssldiffiehellmanparameters_is_empty(void* self) {
    return QSslDiffieHellmanParameters_IsEmpty((QSslDiffieHellmanParameters*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#isValid)
///
/// ``` QSslDiffieHellmanParameters* self ```
bool q_ssldiffiehellmanparameters_is_valid(void* self) {
    return QSslDiffieHellmanParameters_IsValid((QSslDiffieHellmanParameters*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#error)
///
/// ``` QSslDiffieHellmanParameters* self ```
int64_t q_ssldiffiehellmanparameters_error(void* self) {
    return QSslDiffieHellmanParameters_Error((QSslDiffieHellmanParameters*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#errorString)
///
/// ``` QSslDiffieHellmanParameters* self ```
const char* q_ssldiffiehellmanparameters_error_string(void* self) {
    libqt_string _str = QSslDiffieHellmanParameters_ErrorString((QSslDiffieHellmanParameters*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#fromEncoded)
///
/// ``` const char* encoded, enum QSsl__EncodingFormat format ```
QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_from_encoded2(const char* encoded, int64_t format) {
    return QSslDiffieHellmanParameters_FromEncoded2(qstring(encoded), format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qssldiffiehellmanparameters.html#fromEncoded)
///
/// ``` QIODevice* device, enum QSsl__EncodingFormat format ```
QSslDiffieHellmanParameters* q_ssldiffiehellmanparameters_from_encoded22(void* device, int64_t format) {
    return QSslDiffieHellmanParameters_FromEncoded22((QIODevice*)device, format);
}

/// Delete this object from C++ memory.
///
/// ``` QSslDiffieHellmanParameters* self ```
void q_ssldiffiehellmanparameters_delete(void* self) {
    QSslDiffieHellmanParameters_Delete((QSslDiffieHellmanParameters*)(self));
}