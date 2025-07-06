#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINECLIENTCERTIFICATESTORE_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINECLIENTCERTIFICATESTORE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebengineclientcertificatestore.html

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclientcertificatestore.html#add)
///
/// ``` QWebEngineClientCertificateStore* self, QSslCertificate* certificate, QSslKey* privateKey ```
void q_webengineclientcertificatestore_add(void* self, void* certificate, void* privateKey);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclientcertificatestore.html#certificates)
///
/// ``` QWebEngineClientCertificateStore* self ```
libqt_list /* of QSslCertificate* */ q_webengineclientcertificatestore_certificates(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclientcertificatestore.html#remove)
///
/// ``` QWebEngineClientCertificateStore* self, QSslCertificate* certificate ```
void q_webengineclientcertificatestore_remove(void* self, void* certificate);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclientcertificatestore.html#clear)
///
/// ``` QWebEngineClientCertificateStore* self ```
void q_webengineclientcertificatestore_clear(void* self);
#endif
