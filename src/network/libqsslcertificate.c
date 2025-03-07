#include "../libqdatetime.hpp"
#include "../libqiodevice.hpp"
#include "libqsslcertificateextension.hpp"
#include "libqsslerror.hpp"
#include "libqsslkey.hpp"
#include <string.h>
#include "libqsslcertificate.hpp"
#include "libqsslcertificate.h"

/// https://doc.qt.io/qt-6/qsslcertificate.html

/// q_sslcertificate_new constructs a new QSslCertificate object.
///
/// ``` QIODevice* device ```
QSslCertificate* q_sslcertificate_new(void* device) {
    return QSslCertificate_new((QIODevice*)device);
}

/// q_sslcertificate_new2 constructs a new QSslCertificate object.
///
///
QSslCertificate* q_sslcertificate_new2() {
    return QSslCertificate_new2();
}

/// q_sslcertificate_new3 constructs a new QSslCertificate object.
///
/// ``` QSslCertificate* other ```
QSslCertificate* q_sslcertificate_new3(void* other) {
    return QSslCertificate_new3((QSslCertificate*)other);
}

/// q_sslcertificate_new4 constructs a new QSslCertificate object.
///
/// ``` QIODevice* device, enum QSsl__EncodingFormat format ```
QSslCertificate* q_sslcertificate_new4(void* device, int64_t format) {
    return QSslCertificate_new4((QIODevice*)device, format);
}

/// q_sslcertificate_new5 constructs a new QSslCertificate object.
///
/// ``` const char* data ```
QSslCertificate* q_sslcertificate_new5(const char* data) {
    return QSslCertificate_new5(qstring(data));
}

/// q_sslcertificate_new6 constructs a new QSslCertificate object.
///
/// ``` const char* data, enum QSsl__EncodingFormat format ```
QSslCertificate* q_sslcertificate_new6(const char* data, int64_t format) {
    return QSslCertificate_new6(qstring(data), format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#operator=)
///
/// ``` QSslCertificate* self, QSslCertificate* other ```
void q_sslcertificate_operator_assign(void* self, void* other) {
    QSslCertificate_OperatorAssign((QSslCertificate*)self, (QSslCertificate*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#swap)
///
/// ``` QSslCertificate* self, QSslCertificate* other ```
void q_sslcertificate_swap(void* self, void* other) {
    QSslCertificate_Swap((QSslCertificate*)self, (QSslCertificate*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#operator==)
///
/// ``` QSslCertificate* self, QSslCertificate* other ```
bool q_sslcertificate_operator_equal(void* self, void* other) {
    return QSslCertificate_OperatorEqual((QSslCertificate*)self, (QSslCertificate*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#operator!=)
///
/// ``` QSslCertificate* self, QSslCertificate* other ```
bool q_sslcertificate_operator_not_equal(void* self, void* other) {
    return QSslCertificate_OperatorNotEqual((QSslCertificate*)self, (QSslCertificate*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#isNull)
///
/// ``` QSslCertificate* self ```
bool q_sslcertificate_is_null(void* self) {
    return QSslCertificate_IsNull((QSslCertificate*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#isBlacklisted)
///
/// ``` QSslCertificate* self ```
bool q_sslcertificate_is_blacklisted(void* self) {
    return QSslCertificate_IsBlacklisted((QSslCertificate*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#isSelfSigned)
///
/// ``` QSslCertificate* self ```
bool q_sslcertificate_is_self_signed(void* self) {
    return QSslCertificate_IsSelfSigned((QSslCertificate*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#clear)
///
/// ``` QSslCertificate* self ```
void q_sslcertificate_clear(void* self) {
    QSslCertificate_Clear((QSslCertificate*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#version)
///
/// ``` QSslCertificate* self ```
char* q_sslcertificate_version(void* self) {
    libqt_string _str = QSslCertificate_Version((QSslCertificate*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#serialNumber)
///
/// ``` QSslCertificate* self ```
char* q_sslcertificate_serial_number(void* self) {
    libqt_string _str = QSslCertificate_SerialNumber((QSslCertificate*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#digest)
///
/// ``` QSslCertificate* self ```
char* q_sslcertificate_digest(void* self) {
    libqt_string _str = QSslCertificate_Digest((QSslCertificate*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#issuerInfo)
///
/// ``` QSslCertificate* self, enum QSslCertificate__SubjectInfo info ```
const char** q_sslcertificate_issuer_info(void* self, int64_t info) {
    libqt_list _arr = QSslCertificate_IssuerInfo((QSslCertificate*)self, info);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#issuerInfo)
///
/// ``` QSslCertificate* self, const char* attribute ```
const char** q_sslcertificate_issuer_info_with_attribute(void* self, const char* attribute) {
    libqt_list _arr = QSslCertificate_IssuerInfoWithAttribute((QSslCertificate*)self, qstring(attribute));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#subjectInfo)
///
/// ``` QSslCertificate* self, enum QSslCertificate__SubjectInfo info ```
const char** q_sslcertificate_subject_info(void* self, int64_t info) {
    libqt_list _arr = QSslCertificate_SubjectInfo((QSslCertificate*)self, info);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#subjectInfo)
///
/// ``` QSslCertificate* self, const char* attribute ```
const char** q_sslcertificate_subject_info_with_attribute(void* self, const char* attribute) {
    libqt_list _arr = QSslCertificate_SubjectInfoWithAttribute((QSslCertificate*)self, qstring(attribute));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#issuerDisplayName)
///
/// ``` QSslCertificate* self ```
const char* q_sslcertificate_issuer_display_name(void* self) {
    libqt_string _str = QSslCertificate_IssuerDisplayName((QSslCertificate*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#subjectDisplayName)
///
/// ``` QSslCertificate* self ```
const char* q_sslcertificate_subject_display_name(void* self) {
    libqt_string _str = QSslCertificate_SubjectDisplayName((QSslCertificate*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#subjectInfoAttributes)
///
/// ``` QSslCertificate* self ```
const char** q_sslcertificate_subject_info_attributes(void* self) {
    libqt_list _arr = QSslCertificate_SubjectInfoAttributes((QSslCertificate*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#issuerInfoAttributes)
///
/// ``` QSslCertificate* self ```
const char** q_sslcertificate_issuer_info_attributes(void* self) {
    libqt_list _arr = QSslCertificate_IssuerInfoAttributes((QSslCertificate*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#effectiveDate)
///
/// ``` QSslCertificate* self ```
QDateTime* q_sslcertificate_effective_date(void* self) {
    return QSslCertificate_EffectiveDate((QSslCertificate*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#expiryDate)
///
/// ``` QSslCertificate* self ```
QDateTime* q_sslcertificate_expiry_date(void* self) {
    return QSslCertificate_ExpiryDate((QSslCertificate*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#publicKey)
///
/// ``` QSslCertificate* self ```
QSslKey* q_sslcertificate_public_key(void* self) {
    return QSslCertificate_PublicKey((QSslCertificate*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#extensions)
///
/// ``` QSslCertificate* self ```
libqt_list /* of QSslCertificateExtension* */ q_sslcertificate_extensions(void* self) {
    libqt_list _arr = QSslCertificate_Extensions((QSslCertificate*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#toPem)
///
/// ``` QSslCertificate* self ```
char* q_sslcertificate_to_pem(void* self) {
    libqt_string _str = QSslCertificate_ToPem((QSslCertificate*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#toDer)
///
/// ``` QSslCertificate* self ```
char* q_sslcertificate_to_der(void* self) {
    libqt_string _str = QSslCertificate_ToDer((QSslCertificate*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#toText)
///
/// ``` QSslCertificate* self ```
const char* q_sslcertificate_to_text(void* self) {
    libqt_string _str = QSslCertificate_ToText((QSslCertificate*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#fromPath)
///
/// ``` const char* path ```
libqt_list /* of QSslCertificate* */ q_sslcertificate_from_path(const char* path) {
    libqt_list _arr = QSslCertificate_FromPath(qstring(path));
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#fromDevice)
///
/// ``` QIODevice* device ```
libqt_list /* of QSslCertificate* */ q_sslcertificate_from_device(void* device) {
    libqt_list _arr = QSslCertificate_FromDevice((QIODevice*)device);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#fromData)
///
/// ``` const char* data ```
libqt_list /* of QSslCertificate* */ q_sslcertificate_from_data(const char* data) {
    libqt_list _arr = QSslCertificate_FromData(qstring(data));
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#verify)
///
/// ``` QSslCertificate* certificateChain[] ```
libqt_list /* of QSslError* */ q_sslcertificate_verify(void* certificateChain[]) {
    QSslCertificate** certificateChain_arr = (QSslCertificate**)certificateChain;
    size_t certificateChain_len = 0;
    while (certificateChain_arr[certificateChain_len] != NULL) {
        certificateChain_len++;
    }
    libqt_list certificateChain_list = {
        .len = certificateChain_len,
        .data = {(QSslCertificate*)certificateChain},
    };
    libqt_list _arr = QSslCertificate_Verify(certificateChain_list);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#importPkcs12)
///
/// ``` QIODevice* device, QSslKey* key, QSslCertificate* cert ```
bool q_sslcertificate_import_pkcs12(void* device, void* key, void* cert) {
    return QSslCertificate_ImportPkcs12((QIODevice*)device, (QSslKey*)key, (QSslCertificate*)cert);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#handle)
///
/// ``` QSslCertificate* self ```
void* q_sslcertificate_handle(void* self) {
    return QSslCertificate_Handle((QSslCertificate*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#digest)
///
/// ``` QSslCertificate* self, enum QCryptographicHash__Algorithm algorithm ```
char* q_sslcertificate_digest1(void* self, int64_t algorithm) {
    libqt_string _str = QSslCertificate_Digest1((QSslCertificate*)self, algorithm);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#fromPath)
///
/// ``` const char* path, enum QSsl__EncodingFormat format ```
libqt_list /* of QSslCertificate* */ q_sslcertificate_from_path2(const char* path, int64_t format) {
    libqt_list _arr = QSslCertificate_FromPath2(qstring(path), format);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#fromPath)
///
/// ``` const char* path, enum QSsl__EncodingFormat format, enum QSslCertificate__PatternSyntax syntax ```
libqt_list /* of QSslCertificate* */ q_sslcertificate_from_path3(const char* path, int64_t format, int64_t syntax) {
    libqt_list _arr = QSslCertificate_FromPath3(qstring(path), format, syntax);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#fromDevice)
///
/// ``` QIODevice* device, enum QSsl__EncodingFormat format ```
libqt_list /* of QSslCertificate* */ q_sslcertificate_from_device2(void* device, int64_t format) {
    libqt_list _arr = QSslCertificate_FromDevice2((QIODevice*)device, format);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#fromData)
///
/// ``` const char* data, enum QSsl__EncodingFormat format ```
libqt_list /* of QSslCertificate* */ q_sslcertificate_from_data2(const char* data, int64_t format) {
    libqt_list _arr = QSslCertificate_FromData2(qstring(data), format);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#verify)
///
/// ``` QSslCertificate* certificateChain[], const char* hostName ```
libqt_list /* of QSslError* */ q_sslcertificate_verify2(void* certificateChain[], const char* hostName) {
    QSslCertificate** certificateChain_arr = (QSslCertificate**)certificateChain;
    size_t certificateChain_len = 0;
    while (certificateChain_arr[certificateChain_len] != NULL) {
        certificateChain_len++;
    }
    libqt_list certificateChain_list = {
        .len = certificateChain_len,
        .data = {(QSslCertificate*)certificateChain},
    };
    libqt_list _arr = QSslCertificate_Verify2(certificateChain_list, qstring(hostName));
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#importPkcs12)
///
/// ``` QIODevice* device, QSslKey* key, QSslCertificate* cert, QSslCertificate* caCertificates[] ```
bool q_sslcertificate_import_pkcs124(void* device, void* key, void* cert, void* caCertificates[]) {
    QSslCertificate** caCertificates_arr = (QSslCertificate**)caCertificates;
    size_t caCertificates_len = 0;
    while (caCertificates_arr[caCertificates_len] != NULL) {
        caCertificates_len++;
    }
    libqt_list caCertificates_list = {
        .len = caCertificates_len,
        .data = {(QSslCertificate*)caCertificates},
    };
    return QSslCertificate_ImportPkcs124((QIODevice*)device, (QSslKey*)key, (QSslCertificate*)cert, caCertificates_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslcertificate.html#importPkcs12)
///
/// ``` QIODevice* device, QSslKey* key, QSslCertificate* cert, QSslCertificate* caCertificates[], const char* passPhrase ```
bool q_sslcertificate_import_pkcs125(void* device, void* key, void* cert, void* caCertificates[], const char* passPhrase) {
    QSslCertificate** caCertificates_arr = (QSslCertificate**)caCertificates;
    size_t caCertificates_len = 0;
    while (caCertificates_arr[caCertificates_len] != NULL) {
        caCertificates_len++;
    }
    libqt_list caCertificates_list = {
        .len = caCertificates_len,
        .data = {(QSslCertificate*)caCertificates},
    };
    return QSslCertificate_ImportPkcs125((QIODevice*)device, (QSslKey*)key, (QSslCertificate*)cert, caCertificates_list, qstring(passPhrase));
}

/// Delete this object from C++ memory.
///
/// ``` QSslCertificate* self ```
void q_sslcertificate_delete(void* self) {
    QSslCertificate_Delete((QSslCertificate*)(self));
}