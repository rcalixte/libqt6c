#include "libqsslcertificate.hpp"
#include <string.h>
#include "libqsslerror.hpp"
#include "libqsslerror.h"

/// https://doc.qt.io/qt-6/qsslerror.html

/// q_sslerror_new constructs a new QSslError object.
///
///
QSslError* q_sslerror_new() {
    return QSslError_new();
}

/// q_sslerror_new2 constructs a new QSslError object.
///
/// ``` enum QSslError__SslError errorVal ```
QSslError* q_sslerror_new2(int64_t errorVal) {
    return QSslError_new2(errorVal);
}

/// q_sslerror_new3 constructs a new QSslError object.
///
/// ``` enum QSslError__SslError errorVal, QSslCertificate* certificate ```
QSslError* q_sslerror_new3(int64_t errorVal, void* certificate) {
    return QSslError_new3(errorVal, (QSslCertificate*)certificate);
}

/// q_sslerror_new4 constructs a new QSslError object.
///
/// ``` QSslError* other ```
QSslError* q_sslerror_new4(void* other) {
    return QSslError_new4((QSslError*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslerror.html#swap)
///
/// ``` QSslError* self, QSslError* other ```
void q_sslerror_swap(void* self, void* other) {
    QSslError_Swap((QSslError*)self, (QSslError*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslerror.html#operator=)
///
/// ``` QSslError* self, QSslError* other ```
void q_sslerror_operator_assign(void* self, void* other) {
    QSslError_OperatorAssign((QSslError*)self, (QSslError*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslerror.html#operator==)
///
/// ``` QSslError* self, QSslError* other ```
bool q_sslerror_operator_equal(void* self, void* other) {
    return QSslError_OperatorEqual((QSslError*)self, (QSslError*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslerror.html#operator!=)
///
/// ``` QSslError* self, QSslError* other ```
bool q_sslerror_operator_not_equal(void* self, void* other) {
    return QSslError_OperatorNotEqual((QSslError*)self, (QSslError*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslerror.html#error)
///
/// ``` QSslError* self ```
int64_t q_sslerror_error(void* self) {
    return QSslError_Error((QSslError*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslerror.html#errorString)
///
/// ``` QSslError* self ```
const char* q_sslerror_error_string(void* self) {
    libqt_string _str = QSslError_ErrorString((QSslError*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslerror.html#certificate)
///
/// ``` QSslError* self ```
QSslCertificate* q_sslerror_certificate(void* self) {
    return QSslError_Certificate((QSslError*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QSslError* self ```
void q_sslerror_delete(void* self) {
    QSslError_Delete((QSslError*)(self));
}