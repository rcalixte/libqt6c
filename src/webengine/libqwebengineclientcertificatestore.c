#include "../network/libqsslcertificate.hpp"
#include "../network/libqsslkey.hpp"
#include "libqwebengineclientcertificatestore.hpp"
#include "libqwebengineclientcertificatestore.h"

/// https://doc.qt.io/qt-6/qwebengineclientcertificatestore.html

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclientcertificatestore.html#add)
///
/// ``` QWebEngineClientCertificateStore* self, QSslCertificate* certificate, QSslKey* privateKey ```
void q_webengineclientcertificatestore_add(void* self, void* certificate, void* privateKey) {
    QWebEngineClientCertificateStore_Add((QWebEngineClientCertificateStore*)self, (QSslCertificate*)certificate, (QSslKey*)privateKey);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclientcertificatestore.html#certificates)
///
/// ``` QWebEngineClientCertificateStore* self ```
libqt_list /* of QSslCertificate* */ q_webengineclientcertificatestore_certificates(void* self) {
    libqt_list _arr = QWebEngineClientCertificateStore_Certificates((QWebEngineClientCertificateStore*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclientcertificatestore.html#remove)
///
/// ``` QWebEngineClientCertificateStore* self, QSslCertificate* certificate ```
void q_webengineclientcertificatestore_remove(void* self, void* certificate) {
    QWebEngineClientCertificateStore_Remove((QWebEngineClientCertificateStore*)self, (QSslCertificate*)certificate);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclientcertificatestore.html#clear)
///
/// ``` QWebEngineClientCertificateStore* self ```
void q_webengineclientcertificatestore_clear(void* self) {
    QWebEngineClientCertificateStore_Clear((QWebEngineClientCertificateStore*)self);
}
