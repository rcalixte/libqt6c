#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQSSLCERTIFICATE_H
#define SRC_NETWORK_QT6C_LIBQSSLCERTIFICATE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html)

/// q_sslcertificate_new constructs a new QSslCertificate object.
///
/// @param device QIODevice*
///
QSslCertificate* q_sslcertificate_new(void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html)

/// q_sslcertificate_new2 constructs a new QSslCertificate object.
///
QSslCertificate* q_sslcertificate_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html)

/// q_sslcertificate_new3 constructs a new QSslCertificate object.
///
/// @param other QSslCertificate*
///
QSslCertificate* q_sslcertificate_new3(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html)

/// q_sslcertificate_new4 constructs a new QSslCertificate object.
///
/// @param device QIODevice*
/// @param format enum QSsl__EncodingFormat
///
QSslCertificate* q_sslcertificate_new4(void* device, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html)

/// q_sslcertificate_new5 constructs a new QSslCertificate object.
///
/// @param data const char*
///
QSslCertificate* q_sslcertificate_new5(const char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html)

/// q_sslcertificate_new6 constructs a new QSslCertificate object.
///
/// @param data const char*
/// @param format enum QSsl__EncodingFormat
///
QSslCertificate* q_sslcertificate_new6(const char* data, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#operator-eq)
///
/// @param self QSslCertificate*
/// @param other QSslCertificate*
///
void q_sslcertificate_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#swap)
///
/// @param self QSslCertificate*
/// @param other QSslCertificate*
///
void q_sslcertificate_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#operator-eq-eq)
///
/// @param self QSslCertificate*
/// @param other QSslCertificate*
///
bool q_sslcertificate_operator_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#operator-not-eq)
///
/// @param self QSslCertificate*
/// @param other QSslCertificate*
///
bool q_sslcertificate_operator_not_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#isNull)
///
/// @param self QSslCertificate*
///
bool q_sslcertificate_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#isBlacklisted)
///
/// @param self QSslCertificate*
///
bool q_sslcertificate_is_blacklisted(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#isSelfSigned)
///
/// @param self QSslCertificate*
///
bool q_sslcertificate_is_self_signed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#clear)
///
/// @param self QSslCertificate*
///
void q_sslcertificate_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#version)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSslCertificate*
///
char* q_sslcertificate_version(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#serialNumber)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSslCertificate*
///
char* q_sslcertificate_serial_number(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#digest)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSslCertificate*
///
char* q_sslcertificate_digest(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#issuerInfo)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSslCertificate*
/// @param info enum QSslCertificate__SubjectInfo
///
const char** q_sslcertificate_issuer_info(void* self, int32_t info);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#issuerInfo)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSslCertificate*
/// @param attribute const char*
///
const char** q_sslcertificate_issuer_info2(void* self, const char* attribute);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#subjectInfo)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSslCertificate*
/// @param info enum QSslCertificate__SubjectInfo
///
const char** q_sslcertificate_subject_info(void* self, int32_t info);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#subjectInfo)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSslCertificate*
/// @param attribute const char*
///
const char** q_sslcertificate_subject_info2(void* self, const char* attribute);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#issuerDisplayName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSslCertificate*
///
const char* q_sslcertificate_issuer_display_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#subjectDisplayName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSslCertificate*
///
const char* q_sslcertificate_subject_display_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#subjectInfoAttributes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSslCertificate*
///
const char** q_sslcertificate_subject_info_attributes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#issuerInfoAttributes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSslCertificate*
///
const char** q_sslcertificate_issuer_info_attributes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#effectiveDate)
///
/// @param self QSslCertificate*
///
QDateTime* q_sslcertificate_effective_date(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#expiryDate)
///
/// @param self QSslCertificate*
///
QDateTime* q_sslcertificate_expiry_date(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#publicKey)
///
/// @param self QSslCertificate*
///
QSslKey* q_sslcertificate_public_key(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#extensions)
///
/// @param self QSslCertificate*
///
libqt_list /* of QSslCertificateExtension* */ q_sslcertificate_extensions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#toPem)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSslCertificate*
///
char* q_sslcertificate_to_pem(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#toDer)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSslCertificate*
///
char* q_sslcertificate_to_der(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#toText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSslCertificate*
///
const char* q_sslcertificate_to_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#fromPath)
///
/// @param path const char*
///
libqt_list /* of QSslCertificate* */ q_sslcertificate_from_path(const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#fromDevice)
///
/// @param device QIODevice*
///
libqt_list /* of QSslCertificate* */ q_sslcertificate_from_device(void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#fromData)
///
/// @param data const char*
///
libqt_list /* of QSslCertificate* */ q_sslcertificate_from_data(const char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#verify)
///
/// @param certificateChain libqt_list /* of QSslCertificate* */
///
libqt_list /* of QSslError* */ q_sslcertificate_verify(libqt_list certificateChain);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#importPkcs12)
///
/// @param device QIODevice*
/// @param key QSslKey*
/// @param cert QSslCertificate*
///
bool q_sslcertificate_import_pkcs12(void* device, void* key, void* cert);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#handle)
///
/// @param self QSslCertificate*
///
void* q_sslcertificate_handle(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#digest)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSslCertificate*
/// @param algorithm enum QCryptographicHash__Algorithm
///
char* q_sslcertificate_digest1(void* self, int32_t algorithm);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#fromPath)
///
/// @param path const char*
/// @param format enum QSsl__EncodingFormat
///
libqt_list /* of QSslCertificate* */ q_sslcertificate_from_path2(const char* path, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#fromPath)
///
/// @param path const char*
/// @param format enum QSsl__EncodingFormat
/// @param syntax enum QSslCertificate__PatternSyntax
///
libqt_list /* of QSslCertificate* */ q_sslcertificate_from_path3(const char* path, int32_t format, int32_t syntax);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#fromDevice)
///
/// @param device QIODevice*
/// @param format enum QSsl__EncodingFormat
///
libqt_list /* of QSslCertificate* */ q_sslcertificate_from_device2(void* device, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#fromData)
///
/// @param data const char*
/// @param format enum QSsl__EncodingFormat
///
libqt_list /* of QSslCertificate* */ q_sslcertificate_from_data2(const char* data, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#verify)
///
/// @param certificateChain libqt_list /* of QSslCertificate* */
/// @param hostName const char*
///
libqt_list /* of QSslError* */ q_sslcertificate_verify2(libqt_list certificateChain, const char* hostName);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#importPkcs12)
///
/// @param device QIODevice*
/// @param key QSslKey*
/// @param cert QSslCertificate*
/// @param caCertificates libqt_list /* of QSslCertificate* */
///
bool q_sslcertificate_import_pkcs124(void* device, void* key, void* cert, libqt_list caCertificates);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#importPkcs12)
///
/// @param device QIODevice*
/// @param key QSslKey*
/// @param cert QSslCertificate*
/// @param caCertificates libqt_list /* of QSslCertificate* */
/// @param passPhrase const char*
///
bool q_sslcertificate_import_pkcs125(void* device, void* key, void* cert, libqt_list caCertificates, const char* passPhrase);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#dtor.QSslCertificate)
///
/// Delete this object from C++ memory.
///
/// @param self QSslCertificate*
///
void q_sslcertificate_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#public-types)

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

/// [Upstream resources](https://doc.qt.io/qt-6/qsslcertificate.html#public-types)

typedef enum {
    QSSLCERTIFICATE_PATTERNSYNTAX_REGULAREXPRESSION = 0,
    QSSLCERTIFICATE_PATTERNSYNTAX_WILDCARD = 1,
    QSSLCERTIFICATE_PATTERNSYNTAX_FIXEDSTRING = 2
} QSslCertificate__PatternSyntax;

#endif
