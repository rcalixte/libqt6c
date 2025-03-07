#include "libqsslcertificate.hpp"
#include "libqocspresponse.hpp"
#include "libqocspresponse.h"

/// https://doc.qt.io/qt-6/qocspresponse.html

/// q_ocspresponse_new constructs a new QOcspResponse object.
///
///
QOcspResponse* q_ocspresponse_new() {
    return QOcspResponse_new();
}

/// q_ocspresponse_new2 constructs a new QOcspResponse object.
///
/// ``` QOcspResponse* other ```
QOcspResponse* q_ocspresponse_new2(void* other) {
    return QOcspResponse_new2((QOcspResponse*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qocspresponse.html#operator=)
///
/// ``` QOcspResponse* self, QOcspResponse* other ```
void q_ocspresponse_operator_assign(void* self, void* other) {
    QOcspResponse_OperatorAssign((QOcspResponse*)self, (QOcspResponse*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qocspresponse.html#certificateStatus)
///
/// ``` QOcspResponse* self ```
int64_t q_ocspresponse_certificate_status(void* self) {
    return QOcspResponse_CertificateStatus((QOcspResponse*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qocspresponse.html#revocationReason)
///
/// ``` QOcspResponse* self ```
int64_t q_ocspresponse_revocation_reason(void* self) {
    return QOcspResponse_RevocationReason((QOcspResponse*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qocspresponse.html#responder)
///
/// ``` QOcspResponse* self ```
QSslCertificate* q_ocspresponse_responder(void* self) {
    return QOcspResponse_Responder((QOcspResponse*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qocspresponse.html#subject)
///
/// ``` QOcspResponse* self ```
QSslCertificate* q_ocspresponse_subject(void* self) {
    return QOcspResponse_Subject((QOcspResponse*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qocspresponse.html#swap)
///
/// ``` QOcspResponse* self, QOcspResponse* other ```
void q_ocspresponse_swap(void* self, void* other) {
    QOcspResponse_Swap((QOcspResponse*)self, (QOcspResponse*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QOcspResponse* self ```
void q_ocspresponse_delete(void* self) {
    QOcspResponse_Delete((QOcspResponse*)(self));
}