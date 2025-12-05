#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQSSL_H
#define SRC_NETWORK_QT6C_LIBQSSL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qssl.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qssl.html#qt_getEnumMetaObject)
///
/// @param param1 enum QSsl__KeyType
///
const QMetaObject* q_ssl_get_enum_meta_object(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qssl.html#qt_getEnumName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 enum QSsl__KeyType
///
const char* q_ssl_get_enum_name(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qssl.html#qt_getEnumMetaObject)
///
/// @param param1 enum QSsl__EncodingFormat
///
const QMetaObject* q_ssl_get_enum_meta_object2(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qssl.html#qt_getEnumName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 enum QSsl__EncodingFormat
///
const char* q_ssl_get_enum_name2(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qssl.html#qt_getEnumMetaObject)
///
/// @param param1 enum QSsl__KeyAlgorithm
///
const QMetaObject* q_ssl_get_enum_meta_object3(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qssl.html#qt_getEnumName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 enum QSsl__KeyAlgorithm
///
const char* q_ssl_get_enum_name3(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qssl.html#qt_getEnumMetaObject)
///
/// @param param1 enum QSsl__AlternativeNameEntryType
///
const QMetaObject* q_ssl_get_enum_meta_object4(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qssl.html#qt_getEnumName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 enum QSsl__AlternativeNameEntryType
///
const char* q_ssl_get_enum_name4(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qssl.html#qt_getEnumMetaObject)
///
/// @param param1 enum QSsl__SslProtocol
///
const QMetaObject* q_ssl_get_enum_meta_object5(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qssl.html#qt_getEnumName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 enum QSsl__SslProtocol
///
const char* q_ssl_get_enum_name5(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qssl.html#qt_getEnumMetaObject)
///
/// @param param1 enum QSsl__SslOption
///
const QMetaObject* q_ssl_get_enum_meta_object6(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qssl.html#qt_getEnumName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 enum QSsl__SslOption
///
const char* q_ssl_get_enum_name6(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qssl.html#qt_getEnumMetaObject)
///
/// @param param1 enum QSsl__AlertLevel
///
const QMetaObject* q_ssl_get_enum_meta_object7(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qssl.html#qt_getEnumName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 enum QSsl__AlertLevel
///
const char* q_ssl_get_enum_name7(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qssl.html#qt_getEnumMetaObject)
///
/// @param param1 enum QSsl__AlertType
///
const QMetaObject* q_ssl_get_enum_meta_object8(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qssl.html#qt_getEnumName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 enum QSsl__AlertType
///
const char* q_ssl_get_enum_name8(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qssl.html#qt_getEnumMetaObject)
///
/// @param param1 enum QSsl__ImplementedClass
///
const QMetaObject* q_ssl_get_enum_meta_object9(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qssl.html#qt_getEnumName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 enum QSsl__ImplementedClass
///
const char* q_ssl_get_enum_name9(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qssl.html#qt_getEnumMetaObject)
///
/// @param param1 enum QSsl__SupportedFeature
///
const QMetaObject* q_ssl_get_enum_meta_object10(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qssl.html#qt_getEnumName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 enum QSsl__SupportedFeature
///
const char* q_ssl_get_enum_name10(int32_t param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qssl.html#public-types)

typedef enum {
    QSSL_KEYTYPE_PRIVATEKEY = 0,
    QSSL_KEYTYPE_PUBLICKEY = 1
} QSsl__KeyType;

/// [Upstream resources](https://doc.qt.io/qt-6/qssl.html#public-types)

typedef enum {
    QSSL_ENCODINGFORMAT_PEM = 0,
    QSSL_ENCODINGFORMAT_DER = 1
} QSsl__EncodingFormat;

/// [Upstream resources](https://doc.qt.io/qt-6/qssl.html#public-types)

typedef enum {
    QSSL_KEYALGORITHM_OPAQUE = 0,
    QSSL_KEYALGORITHM_RSA = 1,
    QSSL_KEYALGORITHM_DSA = 2,
    QSSL_KEYALGORITHM_EC = 3,
    QSSL_KEYALGORITHM_DH = 4
} QSsl__KeyAlgorithm;

/// [Upstream resources](https://doc.qt.io/qt-6/qssl.html#public-types)

typedef enum {
    QSSL_ALTERNATIVENAMEENTRYTYPE_EMAILENTRY = 0,
    QSSL_ALTERNATIVENAMEENTRYTYPE_DNSENTRY = 1,
    QSSL_ALTERNATIVENAMEENTRYTYPE_IPADDRESSENTRY = 2
} QSsl__AlternativeNameEntryType;

/// [Upstream resources](https://doc.qt.io/qt-6/qssl.html#public-types)

typedef enum {
    QSSL_SSLPROTOCOL_TLSV1_2 = 0,
    QSSL_SSLPROTOCOL_ANYPROTOCOL = 1,
    QSSL_SSLPROTOCOL_SECUREPROTOCOLS = 2,
    QSSL_SSLPROTOCOL_TLSV1_2ORLATER = 3,
    QSSL_SSLPROTOCOL_DTLSV1_2 = 4,
    QSSL_SSLPROTOCOL_DTLSV1_2ORLATER = 5,
    QSSL_SSLPROTOCOL_TLSV1_3 = 6,
    QSSL_SSLPROTOCOL_TLSV1_3ORLATER = 7,
    QSSL_SSLPROTOCOL_UNKNOWNPROTOCOL = -1
} QSsl__SslProtocol;

/// [Upstream resources](https://doc.qt.io/qt-6/qssl.html#public-types)

typedef enum {
    QSSL_SSLOPTION_SSLOPTIONDISABLEEMPTYFRAGMENTS = 1,
    QSSL_SSLOPTION_SSLOPTIONDISABLESESSIONTICKETS = 2,
    QSSL_SSLOPTION_SSLOPTIONDISABLECOMPRESSION = 4,
    QSSL_SSLOPTION_SSLOPTIONDISABLESERVERNAMEINDICATION = 8,
    QSSL_SSLOPTION_SSLOPTIONDISABLELEGACYRENEGOTIATION = 16,
    QSSL_SSLOPTION_SSLOPTIONDISABLESESSIONSHARING = 32,
    QSSL_SSLOPTION_SSLOPTIONDISABLESESSIONPERSISTENCE = 64,
    QSSL_SSLOPTION_SSLOPTIONDISABLESERVERCIPHERPREFERENCE = 128
} QSsl__SslOption;

/// [Upstream resources](https://doc.qt.io/qt-6/qssl.html#public-types)

typedef enum {
    QSSL_ALERTLEVEL_WARNING = 0,
    QSSL_ALERTLEVEL_FATAL = 1,
    QSSL_ALERTLEVEL_UNKNOWN = 2
} QSsl__AlertLevel;

/// [Upstream resources](https://doc.qt.io/qt-6/qssl.html#public-types)

typedef enum {
    QSSL_ALERTTYPE_CLOSENOTIFY = 0,
    QSSL_ALERTTYPE_UNEXPECTEDMESSAGE = 10,
    QSSL_ALERTTYPE_BADRECORDMAC = 20,
    QSSL_ALERTTYPE_RECORDOVERFLOW = 22,
    QSSL_ALERTTYPE_DECOMPRESSIONFAILURE = 30,
    QSSL_ALERTTYPE_HANDSHAKEFAILURE = 40,
    QSSL_ALERTTYPE_NOCERTIFICATE = 41,
    QSSL_ALERTTYPE_BADCERTIFICATE = 42,
    QSSL_ALERTTYPE_UNSUPPORTEDCERTIFICATE = 43,
    QSSL_ALERTTYPE_CERTIFICATEREVOKED = 44,
    QSSL_ALERTTYPE_CERTIFICATEEXPIRED = 45,
    QSSL_ALERTTYPE_CERTIFICATEUNKNOWN = 46,
    QSSL_ALERTTYPE_ILLEGALPARAMETER = 47,
    QSSL_ALERTTYPE_UNKNOWNCA = 48,
    QSSL_ALERTTYPE_ACCESSDENIED = 49,
    QSSL_ALERTTYPE_DECODEERROR = 50,
    QSSL_ALERTTYPE_DECRYPTERROR = 51,
    QSSL_ALERTTYPE_EXPORTRESTRICTION = 60,
    QSSL_ALERTTYPE_PROTOCOLVERSION = 70,
    QSSL_ALERTTYPE_INSUFFICIENTSECURITY = 71,
    QSSL_ALERTTYPE_INTERNALERROR = 80,
    QSSL_ALERTTYPE_INAPPROPRIATEFALLBACK = 86,
    QSSL_ALERTTYPE_USERCANCELLED = 90,
    QSSL_ALERTTYPE_NORENEGOTIATION = 100,
    QSSL_ALERTTYPE_MISSINGEXTENSION = 109,
    QSSL_ALERTTYPE_UNSUPPORTEDEXTENSION = 110,
    QSSL_ALERTTYPE_CERTIFICATEUNOBTAINABLE = 111,
    QSSL_ALERTTYPE_UNRECOGNIZEDNAME = 112,
    QSSL_ALERTTYPE_BADCERTIFICATESTATUSRESPONSE = 113,
    QSSL_ALERTTYPE_BADCERTIFICATEHASHVALUE = 114,
    QSSL_ALERTTYPE_UNKNOWNPSKIDENTITY = 115,
    QSSL_ALERTTYPE_CERTIFICATEREQUIRED = 116,
    QSSL_ALERTTYPE_NOAPPLICATIONPROTOCOL = 120,
    QSSL_ALERTTYPE_UNKNOWNALERTMESSAGE = 255
} QSsl__AlertType;

/// [Upstream resources](https://doc.qt.io/qt-6/qssl.html#public-types)

typedef enum {
    QSSL_IMPLEMENTEDCLASS_KEY = 0,
    QSSL_IMPLEMENTEDCLASS_CERTIFICATE = 1,
    QSSL_IMPLEMENTEDCLASS_SOCKET = 2,
    QSSL_IMPLEMENTEDCLASS_DIFFIEHELLMAN = 3,
    QSSL_IMPLEMENTEDCLASS_ELLIPTICCURVE = 4,
    QSSL_IMPLEMENTEDCLASS_DTLS = 5,
    QSSL_IMPLEMENTEDCLASS_DTLSCOOKIE = 6
} QSsl__ImplementedClass;

/// [Upstream resources](https://doc.qt.io/qt-6/qssl.html#public-types)

typedef enum {
    QSSL_SUPPORTEDFEATURE_CERTIFICATEVERIFICATION = 0,
    QSSL_SUPPORTEDFEATURE_CLIENTSIDEALPN = 1,
    QSSL_SUPPORTEDFEATURE_SERVERSIDEALPN = 2,
    QSSL_SUPPORTEDFEATURE_OCSP = 3,
    QSSL_SUPPORTEDFEATURE_PSK = 4,
    QSSL_SUPPORTEDFEATURE_SESSIONTICKET = 5,
    QSSL_SUPPORTEDFEATURE_ALERTS = 6
} QSsl__SupportedFeature;

#endif
