#include "../network/libqsslcertificate.hpp"
#include "../libqurl.hpp"
#include "libqwebenginecertificateerror.hpp"
#include "libqwebenginecertificateerror.h"

QWebEngineCertificateError* q_webenginecertificateerror_new(void* other) {
    return QWebEngineCertificateError_new((QWebEngineCertificateError*)other);
}

void q_webenginecertificateerror_operator_assign(void* self, void* other) {
    QWebEngineCertificateError_OperatorAssign((QWebEngineCertificateError*)self, (QWebEngineCertificateError*)other);
}

int32_t q_webenginecertificateerror_type(void* self) {
    return QWebEngineCertificateError_Type((QWebEngineCertificateError*)self);
}

QUrl* q_webenginecertificateerror_url(void* self) {
    return QWebEngineCertificateError_Url((QWebEngineCertificateError*)self);
}

bool q_webenginecertificateerror_is_overridable(void* self) {
    return QWebEngineCertificateError_IsOverridable((QWebEngineCertificateError*)self);
}

const char* q_webenginecertificateerror_description(void* self) {
    libqt_string _str = QWebEngineCertificateError_Description((QWebEngineCertificateError*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_webenginecertificateerror_is_main_frame(void* self) {
    return QWebEngineCertificateError_IsMainFrame((QWebEngineCertificateError*)self);
}

void q_webenginecertificateerror_defer(void* self) {
    QWebEngineCertificateError_Defer((QWebEngineCertificateError*)self);
}

void q_webenginecertificateerror_reject_certificate(void* self) {
    QWebEngineCertificateError_RejectCertificate((QWebEngineCertificateError*)self);
}

void q_webenginecertificateerror_accept_certificate(void* self) {
    QWebEngineCertificateError_AcceptCertificate((QWebEngineCertificateError*)self);
}

libqt_list /* of QSslCertificate* */ q_webenginecertificateerror_certificate_chain(void* self) {
    libqt_list _arr = QWebEngineCertificateError_CertificateChain((QWebEngineCertificateError*)self);
    return _arr;
}

void q_webenginecertificateerror_delete(void* self) {
    QWebEngineCertificateError_Delete((QWebEngineCertificateError*)(self));
}
