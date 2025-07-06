#pragma once
#ifndef SRC_NETWORKQT6C_LIBQSSLERROR_H
#define SRC_NETWORKQT6C_LIBQSSLERROR_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qsslerror.html

/// q_sslerror_new constructs a new QSslError object.
///
///
QSslError* q_sslerror_new();

/// q_sslerror_new2 constructs a new QSslError object.
///
/// ``` enum QSslError__SslError errorVal ```
QSslError* q_sslerror_new2(int64_t errorVal);

/// q_sslerror_new3 constructs a new QSslError object.
///
/// ``` enum QSslError__SslError errorVal, QSslCertificate* certificate ```
QSslError* q_sslerror_new3(int64_t errorVal, void* certificate);

/// q_sslerror_new4 constructs a new QSslError object.
///
/// ``` QSslError* other ```
QSslError* q_sslerror_new4(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslerror.html#swap)
///
/// ``` QSslError* self, QSslError* other ```
void q_sslerror_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslerror.html#operator=)
///
/// ``` QSslError* self, QSslError* other ```
void q_sslerror_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslerror.html#operator==)
///
/// ``` QSslError* self, QSslError* other ```
bool q_sslerror_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslerror.html#operator!=)
///
/// ``` QSslError* self, QSslError* other ```
bool q_sslerror_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslerror.html#error)
///
/// ``` QSslError* self ```
int64_t q_sslerror_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslerror.html#errorString)
///
/// ``` QSslError* self ```
const char* q_sslerror_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslerror.html#certificate)
///
/// ``` QSslError* self ```
QSslCertificate* q_sslerror_certificate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslerror.html#dtor.QSslError)
///
/// Delete this object from C++ memory.
///
/// ``` QSslError* self ```
void q_sslerror_delete(void* self);

/// https://doc.qt.io/qt-6/qsslerror.html#types

typedef enum {
    QSSLERROR_SSLERROR_NOERROR = 0,
    QSSLERROR_SSLERROR_UNABLETOGETISSUERCERTIFICATE = 1,
    QSSLERROR_SSLERROR_UNABLETODECRYPTCERTIFICATESIGNATURE = 2,
    QSSLERROR_SSLERROR_UNABLETODECODEISSUERPUBLICKEY = 3,
    QSSLERROR_SSLERROR_CERTIFICATESIGNATUREFAILED = 4,
    QSSLERROR_SSLERROR_CERTIFICATENOTYETVALID = 5,
    QSSLERROR_SSLERROR_CERTIFICATEEXPIRED = 6,
    QSSLERROR_SSLERROR_INVALIDNOTBEFOREFIELD = 7,
    QSSLERROR_SSLERROR_INVALIDNOTAFTERFIELD = 8,
    QSSLERROR_SSLERROR_SELFSIGNEDCERTIFICATE = 9,
    QSSLERROR_SSLERROR_SELFSIGNEDCERTIFICATEINCHAIN = 10,
    QSSLERROR_SSLERROR_UNABLETOGETLOCALISSUERCERTIFICATE = 11,
    QSSLERROR_SSLERROR_UNABLETOVERIFYFIRSTCERTIFICATE = 12,
    QSSLERROR_SSLERROR_CERTIFICATEREVOKED = 13,
    QSSLERROR_SSLERROR_INVALIDCACERTIFICATE = 14,
    QSSLERROR_SSLERROR_PATHLENGTHEXCEEDED = 15,
    QSSLERROR_SSLERROR_INVALIDPURPOSE = 16,
    QSSLERROR_SSLERROR_CERTIFICATEUNTRUSTED = 17,
    QSSLERROR_SSLERROR_CERTIFICATEREJECTED = 18,
    QSSLERROR_SSLERROR_SUBJECTISSUERMISMATCH = 19,
    QSSLERROR_SSLERROR_AUTHORITYISSUERSERIALNUMBERMISMATCH = 20,
    QSSLERROR_SSLERROR_NOPEERCERTIFICATE = 21,
    QSSLERROR_SSLERROR_HOSTNAMEMISMATCH = 22,
    QSSLERROR_SSLERROR_NOSSLSUPPORT = 23,
    QSSLERROR_SSLERROR_CERTIFICATEBLACKLISTED = 24,
    QSSLERROR_SSLERROR_CERTIFICATESTATUSUNKNOWN = 25,
    QSSLERROR_SSLERROR_OCSPNORESPONSEFOUND = 26,
    QSSLERROR_SSLERROR_OCSPMALFORMEDREQUEST = 27,
    QSSLERROR_SSLERROR_OCSPMALFORMEDRESPONSE = 28,
    QSSLERROR_SSLERROR_OCSPINTERNALERROR = 29,
    QSSLERROR_SSLERROR_OCSPTRYLATER = 30,
    QSSLERROR_SSLERROR_OCSPSIGREQURED = 31,
    QSSLERROR_SSLERROR_OCSPUNAUTHORIZED = 32,
    QSSLERROR_SSLERROR_OCSPRESPONSECANNOTBETRUSTED = 33,
    QSSLERROR_SSLERROR_OCSPRESPONSECERTIDUNKNOWN = 34,
    QSSLERROR_SSLERROR_OCSPRESPONSEEXPIRED = 35,
    QSSLERROR_SSLERROR_OCSPSTATUSUNKNOWN = 36,
    QSSLERROR_SSLERROR_UNSPECIFIEDERROR = -1
} QSslError__SslError;

#endif
