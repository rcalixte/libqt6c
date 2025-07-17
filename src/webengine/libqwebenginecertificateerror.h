#pragma once
#ifndef SRC_WEBENGINEQT6C_LIBQWEBENGINECERTIFICATEERROR_H
#define SRC_WEBENGINEQT6C_LIBQWEBENGINECERTIFICATEERROR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebenginecertificateerror.html

/// q_webenginecertificateerror_new constructs a new QWebEngineCertificateError object.
///
/// ``` QWebEngineCertificateError* other ```
QWebEngineCertificateError* q_webenginecertificateerror_new(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#operator-eq)
///
/// ``` QWebEngineCertificateError* self, QWebEngineCertificateError* other ```
void q_webenginecertificateerror_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#type)
///
/// ``` QWebEngineCertificateError* self ```
int64_t q_webenginecertificateerror_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#url)
///
/// ``` QWebEngineCertificateError* self ```
QUrl* q_webenginecertificateerror_url(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#isOverridable)
///
/// ``` QWebEngineCertificateError* self ```
bool q_webenginecertificateerror_is_overridable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#description)
///
/// ``` QWebEngineCertificateError* self ```
const char* q_webenginecertificateerror_description(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#isMainFrame)
///
/// ``` QWebEngineCertificateError* self ```
bool q_webenginecertificateerror_is_main_frame(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#defer)
///
/// ``` QWebEngineCertificateError* self ```
void q_webenginecertificateerror_defer(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#rejectCertificate)
///
/// ``` QWebEngineCertificateError* self ```
void q_webenginecertificateerror_reject_certificate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#acceptCertificate)
///
/// ``` QWebEngineCertificateError* self ```
void q_webenginecertificateerror_accept_certificate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#certificateChain)
///
/// ``` QWebEngineCertificateError* self ```
libqt_list /* of QSslCertificate* */ q_webenginecertificateerror_certificate_chain(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginecertificateerror.html#dtor.QWebEngineCertificateError)
///
/// Delete this object from C++ memory.
///
/// ``` QWebEngineCertificateError* self ```
void q_webenginecertificateerror_delete(void* self);

/// https://doc.qt.io/qt-6/qwebenginecertificateerror.html#types

typedef enum {
    QWEBENGINECERTIFICATEERROR_TYPE_SSLPINNEDKEYNOTINCERTIFICATECHAIN = -150,
    QWEBENGINECERTIFICATEERROR_TYPE_CERTIFICATECOMMONNAMEINVALID = -200,
    QWEBENGINECERTIFICATEERROR_TYPE_CERTIFICATEDATEINVALID = -201,
    QWEBENGINECERTIFICATEERROR_TYPE_CERTIFICATEAUTHORITYINVALID = -202,
    QWEBENGINECERTIFICATEERROR_TYPE_CERTIFICATECONTAINSERRORS = -203,
    QWEBENGINECERTIFICATEERROR_TYPE_CERTIFICATENOREVOCATIONMECHANISM = -204,
    QWEBENGINECERTIFICATEERROR_TYPE_CERTIFICATEUNABLETOCHECKREVOCATION = -205,
    QWEBENGINECERTIFICATEERROR_TYPE_CERTIFICATEREVOKED = -206,
    QWEBENGINECERTIFICATEERROR_TYPE_CERTIFICATEINVALID = -207,
    QWEBENGINECERTIFICATEERROR_TYPE_CERTIFICATEWEAKSIGNATUREALGORITHM = -208,
    QWEBENGINECERTIFICATEERROR_TYPE_CERTIFICATENONUNIQUENAME = -210,
    QWEBENGINECERTIFICATEERROR_TYPE_CERTIFICATEWEAKKEY = -211,
    QWEBENGINECERTIFICATEERROR_TYPE_CERTIFICATENAMECONSTRAINTVIOLATION = -212,
    QWEBENGINECERTIFICATEERROR_TYPE_CERTIFICATEVALIDITYTOOLONG = -213,
    QWEBENGINECERTIFICATEERROR_TYPE_CERTIFICATETRANSPARENCYREQUIRED = -214,
    QWEBENGINECERTIFICATEERROR_TYPE_CERTIFICATESYMANTECLEGACY = -215,
    QWEBENGINECERTIFICATEERROR_TYPE_CERTIFICATEKNOWNINTERCEPTIONBLOCKED = -217,
    QWEBENGINECERTIFICATEERROR_TYPE_SSLOBSOLETEVERSION = -218
} QWebEngineCertificateError__Type;

#endif
