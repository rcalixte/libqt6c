#include "../network/libqsslcertificate.hpp"
#include <string.h>
#include "../libqurl.hpp"
#include "libqwebenginecertificateerror.hpp"
#include "libqwebenginecertificateerror.h"

/// https://doc.qt.io/qt-6/qwebenginecertificateerror.html

/// q_webenginecertificateerror_new constructs a new QWebEngineCertificateError object.
///
/// ``` QWebEngineCertificateError* other ```
QWebEngineCertificateError* q_webenginecertificateerror_new(void* other) {
    return QWebEngineCertificateError_new((QWebEngineCertificateError*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#operator=)
///
/// ``` QWebEngineCertificateError* self, QWebEngineCertificateError* other ```
void q_webenginecertificateerror_operator_assign(void* self, void* other) {
    QWebEngineCertificateError_OperatorAssign((QWebEngineCertificateError*)self, (QWebEngineCertificateError*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#type)
///
/// ``` QWebEngineCertificateError* self ```
int64_t q_webenginecertificateerror_type(void* self) {
    return QWebEngineCertificateError_Type((QWebEngineCertificateError*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#url)
///
/// ``` QWebEngineCertificateError* self ```
QUrl* q_webenginecertificateerror_url(void* self) {
    return QWebEngineCertificateError_Url((QWebEngineCertificateError*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#isOverridable)
///
/// ``` QWebEngineCertificateError* self ```
bool q_webenginecertificateerror_is_overridable(void* self) {
    return QWebEngineCertificateError_IsOverridable((QWebEngineCertificateError*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#description)
///
/// ``` QWebEngineCertificateError* self ```
const char* q_webenginecertificateerror_description(void* self) {
    libqt_string _str = QWebEngineCertificateError_Description((QWebEngineCertificateError*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#defer)
///
/// ``` QWebEngineCertificateError* self ```
void q_webenginecertificateerror_defer(void* self) {
    QWebEngineCertificateError_Defer((QWebEngineCertificateError*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#rejectCertificate)
///
/// ``` QWebEngineCertificateError* self ```
void q_webenginecertificateerror_reject_certificate(void* self) {
    QWebEngineCertificateError_RejectCertificate((QWebEngineCertificateError*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#acceptCertificate)
///
/// ``` QWebEngineCertificateError* self ```
void q_webenginecertificateerror_accept_certificate(void* self) {
    QWebEngineCertificateError_AcceptCertificate((QWebEngineCertificateError*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#certificateChain)
///
/// ``` QWebEngineCertificateError* self ```
libqt_list /* of QSslCertificate* */ q_webenginecertificateerror_certificate_chain(void* self) {
    libqt_list _arr = QWebEngineCertificateError_CertificateChain((QWebEngineCertificateError*)self);
    return _arr;
}

/// Delete this object from C++ memory.
///
/// ``` QWebEngineCertificateError* self ```
void q_webenginecertificateerror_delete(void* self) {
    QWebEngineCertificateError_Delete((QWebEngineCertificateError*)(self));
}