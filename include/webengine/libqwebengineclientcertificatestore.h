#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINECLIENTCERTIFICATESTORE_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINECLIENTCERTIFICATESTORE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebengineclientcertificatestore.html

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclientcertificatestore.html#add)
///
/// @param self QWebEngineClientCertificateStore*
/// @param certificate QSslCertificate*
/// @param privateKey QSslKey*
void q_webengineclientcertificatestore_add(void* self, void* certificate, void* privateKey);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclientcertificatestore.html#certificates)
///
/// @param self QWebEngineClientCertificateStore*
libqt_list /* of QSslCertificate* */ q_webengineclientcertificatestore_certificates(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclientcertificatestore.html#remove)
///
/// @param self QWebEngineClientCertificateStore*
/// @param certificate QSslCertificate*
void q_webengineclientcertificatestore_remove(void* self, void* certificate);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebengineclientcertificatestore.html#clear)
///
/// @param self QWebEngineClientCertificateStore*
void q_webengineclientcertificatestore_clear(void* self);
#endif
