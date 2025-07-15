#pragma once
#ifndef SRC_NETWORKQT6C_LIBQSSLCERTIFICATE_H
#define SRC_NETWORKQT6C_LIBQSSLCERTIFICATE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qsslcertificate.html

/// q_sslcertificate_new constructs a new QSslCertificate object.
///
/// ``` QIODevice* device ```
QSslCertificate* q_sslcertificate_new(void* device);

/// q_sslcertificate_new2 constructs a new QSslCertificate object.
///
///
QSslCertificate* q_sslcertificate_new2();

/// q_sslcertificate_new3 constructs a new QSslCertificate object.
///
/// ``` QSslCertificate* other ```
QSslCertificate* q_sslcertificate_new3(void* other);

/// q_sslcertificate_new4 constructs a new QSslCertificate object.
///
/// ``` QIODevice* device, enum QSsl__EncodingFormat format ```
QSslCertificate* q_sslcertificate_new4(void* device, int64_t format);

/// q_sslcertificate_new5 constructs a new QSslCertificate object.
///
/// ``` const char* data ```
QSslCertificate* q_sslcertificate_new5(const char* data);

/// q_sslcertificate_new6 constructs a new QSslCertificate object.
///
/// ``` const char* data, enum QSsl__EncodingFormat format ```
QSslCertificate* q_sslcertificate_new6(const char* data, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#operator=)
///
/// ``` QSslCertificate* self, QSslCertificate* other ```
void q_sslcertificate_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#swap)
///
/// ``` QSslCertificate* self, QSslCertificate* other ```
void q_sslcertificate_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#operator==)
///
/// ``` QSslCertificate* self, QSslCertificate* other ```
bool q_sslcertificate_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#operator!=)
///
/// ``` QSslCertificate* self, QSslCertificate* other ```
bool q_sslcertificate_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#isNull)
///
/// ``` QSslCertificate* self ```
bool q_sslcertificate_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#isBlacklisted)
///
/// ``` QSslCertificate* self ```
bool q_sslcertificate_is_blacklisted(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#isSelfSigned)
///
/// ``` QSslCertificate* self ```
bool q_sslcertificate_is_self_signed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#clear)
///
/// ``` QSslCertificate* self ```
void q_sslcertificate_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#version)
///
/// ``` QSslCertificate* self ```
char* q_sslcertificate_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#serialNumber)
///
/// ``` QSslCertificate* self ```
char* q_sslcertificate_serial_number(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#digest)
///
/// ``` QSslCertificate* self ```
char* q_sslcertificate_digest(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#issuerInfo)
///
/// ``` QSslCertificate* self, enum QSslCertificate__SubjectInfo info ```
const char** q_sslcertificate_issuer_info(void* self, int64_t info);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#issuerInfo)
///
/// ``` QSslCertificate* self, const char* attribute ```
const char** q_sslcertificate_issuer_info2(void* self, const char* attribute);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#subjectInfo)
///
/// ``` QSslCertificate* self, enum QSslCertificate__SubjectInfo info ```
const char** q_sslcertificate_subject_info(void* self, int64_t info);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#subjectInfo)
///
/// ``` QSslCertificate* self, const char* attribute ```
const char** q_sslcertificate_subject_info2(void* self, const char* attribute);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#issuerDisplayName)
///
/// ``` QSslCertificate* self ```
const char* q_sslcertificate_issuer_display_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#subjectDisplayName)
///
/// ``` QSslCertificate* self ```
const char* q_sslcertificate_subject_display_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#subjectInfoAttributes)
///
/// ``` QSslCertificate* self ```
const char** q_sslcertificate_subject_info_attributes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#issuerInfoAttributes)
///
/// ``` QSslCertificate* self ```
const char** q_sslcertificate_issuer_info_attributes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#effectiveDate)
///
/// ``` QSslCertificate* self ```
QDateTime* q_sslcertificate_effective_date(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#expiryDate)
///
/// ``` QSslCertificate* self ```
QDateTime* q_sslcertificate_expiry_date(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#publicKey)
///
/// ``` QSslCertificate* self ```
QSslKey* q_sslcertificate_public_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#extensions)
///
/// ``` QSslCertificate* self ```
libqt_list /* of QSslCertificateExtension* */ q_sslcertificate_extensions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#toPem)
///
/// ``` QSslCertificate* self ```
char* q_sslcertificate_to_pem(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#toDer)
///
/// ``` QSslCertificate* self ```
char* q_sslcertificate_to_der(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#toText)
///
/// ``` QSslCertificate* self ```
const char* q_sslcertificate_to_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#fromPath)
///
/// ``` const char* path ```
libqt_list /* of QSslCertificate* */ q_sslcertificate_from_path(const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#fromDevice)
///
/// ``` QIODevice* device ```
libqt_list /* of QSslCertificate* */ q_sslcertificate_from_device(void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#fromData)
///
/// ``` const char* data ```
libqt_list /* of QSslCertificate* */ q_sslcertificate_from_data(const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#verify)
///
/// ``` libqt_list /* of QSslCertificate* */ certificateChain ```
libqt_list /* of QSslError* */ q_sslcertificate_verify(libqt_list certificateChain);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#importPkcs12)
///
/// ``` QIODevice* device, QSslKey* key, QSslCertificate* cert ```
bool q_sslcertificate_import_pkcs12(void* device, void* key, void* cert);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#handle)
///
/// ``` QSslCertificate* self ```
void* q_sslcertificate_handle(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#digest)
///
/// ``` QSslCertificate* self, enum QCryptographicHash__Algorithm algorithm ```
char* q_sslcertificate_digest1(void* self, int64_t algorithm);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#fromPath)
///
/// ``` const char* path, enum QSsl__EncodingFormat format ```
libqt_list /* of QSslCertificate* */ q_sslcertificate_from_path2(const char* path, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#fromPath)
///
/// ``` const char* path, enum QSsl__EncodingFormat format, enum QSslCertificate__PatternSyntax syntax ```
libqt_list /* of QSslCertificate* */ q_sslcertificate_from_path3(const char* path, int64_t format, int64_t syntax);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#fromDevice)
///
/// ``` QIODevice* device, enum QSsl__EncodingFormat format ```
libqt_list /* of QSslCertificate* */ q_sslcertificate_from_device2(void* device, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#fromData)
///
/// ``` const char* data, enum QSsl__EncodingFormat format ```
libqt_list /* of QSslCertificate* */ q_sslcertificate_from_data2(const char* data, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#verify)
///
/// ``` libqt_list /* of QSslCertificate* */ certificateChain, const char* hostName ```
libqt_list /* of QSslError* */ q_sslcertificate_verify2(libqt_list certificateChain, const char* hostName);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#importPkcs12)
///
/// ``` QIODevice* device, QSslKey* key, QSslCertificate* cert, libqt_list /* of QSslCertificate* */ caCertificates ```
bool q_sslcertificate_import_pkcs124(void* device, void* key, void* cert, libqt_list caCertificates);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#importPkcs12)
///
/// ``` QIODevice* device, QSslKey* key, QSslCertificate* cert, libqt_list /* of QSslCertificate* */ caCertificates, const char* passPhrase ```
bool q_sslcertificate_import_pkcs125(void* device, void* key, void* cert, libqt_list caCertificates, const char* passPhrase);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#dtor.QSslCertificate)
///
/// Delete this object from C++ memory.
///
/// ``` QSslCertificate* self ```
void q_sslcertificate_delete(void* self);

/// https://doc.qt.io/qt-6/qsslcertificate.html#types

typedef enum {
    QSSLCERTIFICATE_SUBJECTINFO_ORGANIZATION = 0,
    QSSLCERTIFICATE_SUBJECTINFO_COMMONNAME = 1,
    QSSLCERTIFICATE_SUBJECTINFO_LOCALITYNAME = 2,
    QSSLCERTIFICATE_SUBJECTINFO_ORGANIZATIONALUNITNAME = 3,
    QSSLCERTIFICATE_SUBJECTINFO_COUNTRYNAME = 4,
    QSSLCERTIFICATE_SUBJECTINFO_STATEORPROVINCENAME = 5,
    QSSLCERTIFICATE_SUBJECTINFO_DISTINGUISHEDNAMEQUALIFIER = 6,
    QSSLCERTIFICATE_SUBJECTINFO_SERIALNUMBER = 7,
    QSSLCERTIFICATE_SUBJECTINFO_EMAILADDRESS = 8
} QSslCertificate__SubjectInfo;

typedef enum {
    QSSLCERTIFICATE_PATTERNSYNTAX_REGULAREXPRESSION = 0,
    QSSLCERTIFICATE_PATTERNSYNTAX_WILDCARD = 1,
    QSSLCERTIFICATE_PATTERNSYNTAX_FIXEDSTRING = 2
} QSslCertificate__PatternSyntax;

#endif
