#include "libqsslcertificate.hpp"
#include "libqocspresponse.hpp"
#include "libqocspresponse.h"

QOcspResponse* q_ocspresponse_new() {
    return QOcspResponse_new();
}

QOcspResponse* q_ocspresponse_new2(void* other) {
    return QOcspResponse_new2((QOcspResponse*)other);
}

void q_ocspresponse_operator_assign(void* self, void* other) {
    QOcspResponse_OperatorAssign((QOcspResponse*)self, (QOcspResponse*)other);
}

int64_t q_ocspresponse_certificate_status(void* self) {
    return QOcspResponse_CertificateStatus((QOcspResponse*)self);
}

int64_t q_ocspresponse_revocation_reason(void* self) {
    return QOcspResponse_RevocationReason((QOcspResponse*)self);
}

QSslCertificate* q_ocspresponse_responder(void* self) {
    return QOcspResponse_Responder((QOcspResponse*)self);
}

QSslCertificate* q_ocspresponse_subject(void* self) {
    return QOcspResponse_Subject((QOcspResponse*)self);
}

void q_ocspresponse_swap(void* self, void* other) {
    QOcspResponse_Swap((QOcspResponse*)self, (QOcspResponse*)other);
}

void q_ocspresponse_delete(void* self) {
    QOcspResponse_Delete((QOcspResponse*)(self));
}
