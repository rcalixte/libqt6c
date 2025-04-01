#include "../network/libqsslcertificate.hpp"
#include "../libqurl.hpp"
#include "libqwebengineclientcertificateselection.hpp"
#include "libqwebengineclientcertificateselection.h"

QWebEngineClientCertificateSelection* q_webengineclientcertificateselection_new(void* param1) {
    return QWebEngineClientCertificateSelection_new((QWebEngineClientCertificateSelection*)param1);
}

void q_webengineclientcertificateselection_operator_assign(void* self, void* param1) {
    QWebEngineClientCertificateSelection_OperatorAssign((QWebEngineClientCertificateSelection*)self, (QWebEngineClientCertificateSelection*)param1);
}

QUrl* q_webengineclientcertificateselection_host(void* self) {
    return QWebEngineClientCertificateSelection_Host((QWebEngineClientCertificateSelection*)self);
}

void q_webengineclientcertificateselection_select(void* self, void* certificate) {
    QWebEngineClientCertificateSelection_Select((QWebEngineClientCertificateSelection*)self, (QSslCertificate*)certificate);
}

void q_webengineclientcertificateselection_select_none(void* self) {
    QWebEngineClientCertificateSelection_SelectNone((QWebEngineClientCertificateSelection*)self);
}

libqt_list /* of QSslCertificate* */ q_webengineclientcertificateselection_certificates(void* self) {
    libqt_list _arr = QWebEngineClientCertificateSelection_Certificates((QWebEngineClientCertificateSelection*)self);
    return _arr;
}

void q_webengineclientcertificateselection_delete(void* self) {
    QWebEngineClientCertificateSelection_Delete((QWebEngineClientCertificateSelection*)(self));
}
