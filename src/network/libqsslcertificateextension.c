#include <string.h>
#include "../libqvariant.hpp"
#include "libqsslcertificateextension.hpp"
#include "libqsslcertificateextension.h"

/// https://doc.qt.io/qt-6/qsslcertificateextension.html

/// q_sslcertificateextension_new constructs a new QSslCertificateExtension object.
///
///
QSslCertificateExtension* q_sslcertificateextension_new() {
    return QSslCertificateExtension_new();
}

/// q_sslcertificateextension_new2 constructs a new QSslCertificateExtension object.
///
/// ``` QSslCertificateExtension* other ```
QSslCertificateExtension* q_sslcertificateextension_new2(void* other) {
    return QSslCertificateExtension_new2((QSslCertificateExtension*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificateextension.html#operator=)
///
/// ``` QSslCertificateExtension* self, QSslCertificateExtension* other ```
void q_sslcertificateextension_operator_assign(void* self, void* other) {
    QSslCertificateExtension_OperatorAssign((QSslCertificateExtension*)self, (QSslCertificateExtension*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificateextension.html#swap)
///
/// ``` QSslCertificateExtension* self, QSslCertificateExtension* other ```
void q_sslcertificateextension_swap(void* self, void* other) {
    QSslCertificateExtension_Swap((QSslCertificateExtension*)self, (QSslCertificateExtension*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificateextension.html#oid)
///
/// ``` QSslCertificateExtension* self ```
const char* q_sslcertificateextension_oid(void* self) {
    libqt_string _str = QSslCertificateExtension_Oid((QSslCertificateExtension*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificateextension.html#name)
///
/// ``` QSslCertificateExtension* self ```
const char* q_sslcertificateextension_name(void* self) {
    libqt_string _str = QSslCertificateExtension_Name((QSslCertificateExtension*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificateextension.html#value)
///
/// ``` QSslCertificateExtension* self ```
QVariant* q_sslcertificateextension_value(void* self) {
    return QSslCertificateExtension_Value((QSslCertificateExtension*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificateextension.html#isCritical)
///
/// ``` QSslCertificateExtension* self ```
bool q_sslcertificateextension_is_critical(void* self) {
    return QSslCertificateExtension_IsCritical((QSslCertificateExtension*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificateextension.html#isSupported)
///
/// ``` QSslCertificateExtension* self ```
bool q_sslcertificateextension_is_supported(void* self) {
    return QSslCertificateExtension_IsSupported((QSslCertificateExtension*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QSslCertificateExtension* self ```
void q_sslcertificateextension_delete(void* self) {
    QSslCertificateExtension_Delete((QSslCertificateExtension*)(self));
}