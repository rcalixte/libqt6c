#include <string.h>
#include "libqsslellipticcurve.hpp"
#include "libqsslellipticcurve.h"

/// https://doc.qt.io/qt-6/qsslellipticcurve.html

/// q_sslellipticcurve_new constructs a new QSslEllipticCurve object.
///
/// ``` QSslEllipticCurve* other ```
QSslEllipticCurve* q_sslellipticcurve_new(void* other) {
    return QSslEllipticCurve_new((QSslEllipticCurve*)other);
}

/// q_sslellipticcurve_new2 constructs a new QSslEllipticCurve object and invalidates the source QSslEllipticCurve object.
///
/// ``` QSslEllipticCurve* other ```
QSslEllipticCurve* q_sslellipticcurve_new2(void* other) {
    return QSslEllipticCurve_new2((QSslEllipticCurve*)other);
}

/// q_sslellipticcurve_new3 constructs a new QSslEllipticCurve object.
///
///
QSslEllipticCurve* q_sslellipticcurve_new3() {
    return QSslEllipticCurve_new3();
}

/// q_sslellipticcurve_new4 constructs a new QSslEllipticCurve object.
///
/// ``` QSslEllipticCurve* param1 ```
QSslEllipticCurve* q_sslellipticcurve_new4(void* param1) {
    return QSslEllipticCurve_new4((QSslEllipticCurve*)param1);
}

/// q_sslellipticcurve_copy_assign shallow copies `other` into `self`.
///
/// ``` QSslEllipticCurve* self, QSslEllipticCurve* other ```
void q_sslellipticcurve_copy_assign(void* self, void* other) {
    QSslEllipticCurve_CopyAssign((QSslEllipticCurve*)self, (QSslEllipticCurve*)other);
}

/// q_sslellipticcurve_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QSslEllipticCurve* self, QSslEllipticCurve* other ```
void q_sslellipticcurve_move_assign(void* self, void* other) {
    QSslEllipticCurve_MoveAssign((QSslEllipticCurve*)self, (QSslEllipticCurve*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslellipticcurve.html#fromShortName)
///
/// ``` const char* name ```
QSslEllipticCurve* q_sslellipticcurve_from_short_name(const char* name) {
    return QSslEllipticCurve_FromShortName(qstring(name));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslellipticcurve.html#fromLongName)
///
/// ``` const char* name ```
QSslEllipticCurve* q_sslellipticcurve_from_long_name(const char* name) {
    return QSslEllipticCurve_FromLongName(qstring(name));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslellipticcurve.html#shortName)
///
/// ``` QSslEllipticCurve* self ```
const char* q_sslellipticcurve_short_name(void* self) {
    libqt_string _str = QSslEllipticCurve_ShortName((QSslEllipticCurve*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslellipticcurve.html#longName)
///
/// ``` QSslEllipticCurve* self ```
const char* q_sslellipticcurve_long_name(void* self) {
    libqt_string _str = QSslEllipticCurve_LongName((QSslEllipticCurve*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslellipticcurve.html#isValid)
///
/// ``` QSslEllipticCurve* self ```
bool q_sslellipticcurve_is_valid(void* self) {
    return QSslEllipticCurve_IsValid((QSslEllipticCurve*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslellipticcurve.html#isTlsNamedCurve)
///
/// ``` QSslEllipticCurve* self ```
bool q_sslellipticcurve_is_tls_named_curve(void* self) {
    return QSslEllipticCurve_IsTlsNamedCurve((QSslEllipticCurve*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QSslEllipticCurve* self ```
void q_sslellipticcurve_delete(void* self) {
    QSslEllipticCurve_Delete((QSslEllipticCurve*)(self));
}