#include "../network/libqsslcertificate.hpp"
#include "../network/libqsslkey.hpp"
#include "libqwebengineclientcertificatestore.hpp"
#include "libqwebengineclientcertificatestore.h"

void q_webengineclientcertificatestore_add(void* self, void* certificate, void* privateKey) {
    QWebEngineClientCertificateStore_Add((QWebEngineClientCertificateStore*)self, (QSslCertificate*)certificate, (QSslKey*)privateKey);
}

libqt_list /* of QSslCertificate* */ q_webengineclientcertificatestore_certificates(void* self) {
    libqt_list _arr = QWebEngineClientCertificateStore_Certificates((QWebEngineClientCertificateStore*)self);
    return _arr;
}

void q_webengineclientcertificatestore_remove(void* self, void* certificate) {
    QWebEngineClientCertificateStore_Remove((QWebEngineClientCertificateStore*)self, (QSslCertificate*)certificate);
}

void q_webengineclientcertificatestore_clear(void* self) {
    QWebEngineClientCertificateStore_Clear((QWebEngineClientCertificateStore*)self);
}
