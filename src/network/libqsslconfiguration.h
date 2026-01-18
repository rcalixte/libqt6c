#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQSSLCONFIGURATION_H
#define SRC_NETWORK_QT6C_LIBQSSLCONFIGURATION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html)

/// q_sslconfiguration_new constructs a new QSslConfiguration object.
///
QSslConfiguration* q_sslconfiguration_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html)

/// q_sslconfiguration_new2 constructs a new QSslConfiguration object.
///
/// @param other QSslConfiguration*
///
QSslConfiguration* q_sslconfiguration_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#operator-eq)
///
/// @param self QSslConfiguration*
/// @param other QSslConfiguration*
///
void q_sslconfiguration_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#swap)
///
/// @param self QSslConfiguration*
/// @param other QSslConfiguration*
///
void q_sslconfiguration_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#operator-eq-eq)
///
/// @param self QSslConfiguration*
/// @param other QSslConfiguration*
///
bool q_sslconfiguration_operator_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#operator-not-eq)
///
/// @param self QSslConfiguration*
/// @param other QSslConfiguration*
///
bool q_sslconfiguration_operator_not_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#isNull)
///
/// @param self QSslConfiguration*
///
bool q_sslconfiguration_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#protocol)
///
/// @param self QSslConfiguration*
///
/// @return enum QSsl__SslProtocol
///
int32_t q_sslconfiguration_protocol(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setProtocol)
///
/// @param self QSslConfiguration*
/// @param protocol enum QSsl__SslProtocol
///
void q_sslconfiguration_set_protocol(void* self, int32_t protocol);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#peerVerifyMode)
///
/// @param self QSslConfiguration*
///
/// @return enum QSslSocket__PeerVerifyMode
///
int32_t q_sslconfiguration_peer_verify_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setPeerVerifyMode)
///
/// @param self QSslConfiguration*
/// @param mode enum QSslSocket__PeerVerifyMode
///
void q_sslconfiguration_set_peer_verify_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#peerVerifyDepth)
///
/// @param self QSslConfiguration*
///
int32_t q_sslconfiguration_peer_verify_depth(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setPeerVerifyDepth)
///
/// @param self QSslConfiguration*
/// @param depth int
///
void q_sslconfiguration_set_peer_verify_depth(void* self, int depth);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#localCertificateChain)
///
/// @param self QSslConfiguration*
///
/// @return libqt_list of QSslCertificate*
///
libqt_list q_sslconfiguration_local_certificate_chain(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setLocalCertificateChain)
///
/// @param self QSslConfiguration*
/// @param localChain libqt_list of QSslCertificate*
///
void q_sslconfiguration_set_local_certificate_chain(void* self, libqt_list /* of QSslCertificate* */ localChain);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#localCertificate)
///
/// @param self QSslConfiguration*
///
QSslCertificate* q_sslconfiguration_local_certificate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setLocalCertificate)
///
/// @param self QSslConfiguration*
/// @param certificate QSslCertificate*
///
void q_sslconfiguration_set_local_certificate(void* self, void* certificate);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#peerCertificate)
///
/// @param self QSslConfiguration*
///
QSslCertificate* q_sslconfiguration_peer_certificate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#peerCertificateChain)
///
/// @param self QSslConfiguration*
///
/// @return libqt_list of QSslCertificate*
///
libqt_list q_sslconfiguration_peer_certificate_chain(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#sessionCipher)
///
/// @param self QSslConfiguration*
///
QSslCipher* q_sslconfiguration_session_cipher(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#sessionProtocol)
///
/// @param self QSslConfiguration*
///
/// @return enum QSsl__SslProtocol
///
int32_t q_sslconfiguration_session_protocol(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#privateKey)
///
/// @param self QSslConfiguration*
///
QSslKey* q_sslconfiguration_private_key(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setPrivateKey)
///
/// @param self QSslConfiguration*
/// @param key QSslKey*
///
void q_sslconfiguration_set_private_key(void* self, void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#ciphers)
///
/// @param self QSslConfiguration*
///
/// @return libqt_list of QSslCipher*
///
libqt_list q_sslconfiguration_ciphers(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setCiphers)
///
/// @param self QSslConfiguration*
/// @param ciphers libqt_list of QSslCipher*
///
void q_sslconfiguration_set_ciphers(void* self, libqt_list /* of QSslCipher* */ ciphers);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setCiphers)
///
/// @param self QSslConfiguration*
/// @param ciphers const char*
///
void q_sslconfiguration_set_ciphers2(void* self, const char* ciphers);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#supportedCiphers)
///
/// @return libqt_list of QSslCipher*
///
libqt_list q_sslconfiguration_supported_ciphers();

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#caCertificates)
///
/// @param self QSslConfiguration*
///
/// @return libqt_list of QSslCertificate*
///
libqt_list q_sslconfiguration_ca_certificates(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setCaCertificates)
///
/// @param self QSslConfiguration*
/// @param certificates libqt_list of QSslCertificate*
///
void q_sslconfiguration_set_ca_certificates(void* self, libqt_list /* of QSslCertificate* */ certificates);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#addCaCertificates)
///
/// @param self QSslConfiguration*
/// @param path const char*
///
bool q_sslconfiguration_add_ca_certificates(void* self, const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#addCaCertificate)
///
/// @param self QSslConfiguration*
/// @param certificate QSslCertificate*
///
void q_sslconfiguration_add_ca_certificate(void* self, void* certificate);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#addCaCertificates)
///
/// @param self QSslConfiguration*
/// @param certificates libqt_list of QSslCertificate*
///
void q_sslconfiguration_add_ca_certificates2(void* self, libqt_list /* of QSslCertificate* */ certificates);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#systemCaCertificates)
///
/// @return libqt_list of QSslCertificate*
///
libqt_list q_sslconfiguration_system_ca_certificates();

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setSslOption)
///
/// @param self QSslConfiguration*
/// @param option enum QSsl__SslOption
/// @param on bool
///
void q_sslconfiguration_set_ssl_option(void* self, int32_t option, bool on);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#testSslOption)
///
/// @param self QSslConfiguration*
/// @param option enum QSsl__SslOption
///
bool q_sslconfiguration_test_ssl_option(void* self, int32_t option);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#sessionTicket)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSslConfiguration*
///
char* q_sslconfiguration_session_ticket(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setSessionTicket)
///
/// @param self QSslConfiguration*
/// @param sessionTicket const char*
///
void q_sslconfiguration_set_session_ticket(void* self, const char* sessionTicket);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#sessionTicketLifeTimeHint)
///
/// @param self QSslConfiguration*
///
int32_t q_sslconfiguration_session_ticket_life_time_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#ephemeralServerKey)
///
/// @param self QSslConfiguration*
///
QSslKey* q_sslconfiguration_ephemeral_server_key(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#ellipticCurves)
///
/// @param self QSslConfiguration*
///
/// @return libqt_list of QSslEllipticCurve*
///
libqt_list q_sslconfiguration_elliptic_curves(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setEllipticCurves)
///
/// @param self QSslConfiguration*
/// @param curves libqt_list of QSslEllipticCurve*
///
void q_sslconfiguration_set_elliptic_curves(void* self, libqt_list /* of QSslEllipticCurve* */ curves);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#supportedEllipticCurves)
///
/// @return libqt_list of QSslEllipticCurve*
///
libqt_list q_sslconfiguration_supported_elliptic_curves();

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#preSharedKeyIdentityHint)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSslConfiguration*
///
char* q_sslconfiguration_pre_shared_key_identity_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setPreSharedKeyIdentityHint)
///
/// @param self QSslConfiguration*
/// @param hint const char*
///
void q_sslconfiguration_set_pre_shared_key_identity_hint(void* self, const char* hint);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#diffieHellmanParameters)
///
/// @param self QSslConfiguration*
///
QSslDiffieHellmanParameters* q_sslconfiguration_diffie_hellman_parameters(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setDiffieHellmanParameters)
///
/// @param self QSslConfiguration*
/// @param dhparams QSslDiffieHellmanParameters*
///
void q_sslconfiguration_set_diffie_hellman_parameters(void* self, void* dhparams);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#backendConfiguration)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of char* to QVariant*
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.keys[i]);
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self QSslConfiguration*
///
/// @return libqt_map of char* to QVariant*
///
libqt_map q_sslconfiguration_backend_configuration(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setBackendConfigurationOption)
///
/// @param self QSslConfiguration*
/// @param name const char*
/// @param value QVariant*
///
void q_sslconfiguration_set_backend_configuration_option(void* self, const char* name, void* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setBackendConfiguration)
///
/// @param self QSslConfiguration*
///
void q_sslconfiguration_set_backend_configuration(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#defaultConfiguration)
///
QSslConfiguration* q_sslconfiguration_default_configuration();

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setDefaultConfiguration)
///
/// @param configuration QSslConfiguration*
///
void q_sslconfiguration_set_default_configuration(void* configuration);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#dtlsCookieVerificationEnabled)
///
/// @param self QSslConfiguration*
///
bool q_sslconfiguration_dtls_cookie_verification_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setDtlsCookieVerificationEnabled)
///
/// @param self QSslConfiguration*
/// @param enable bool
///
void q_sslconfiguration_set_dtls_cookie_verification_enabled(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#defaultDtlsConfiguration)
///
QSslConfiguration* q_sslconfiguration_default_dtls_configuration();

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setDefaultDtlsConfiguration)
///
/// @param configuration QSslConfiguration*
///
void q_sslconfiguration_set_default_dtls_configuration(void* configuration);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#handshakeMustInterruptOnError)
///
/// @param self QSslConfiguration*
///
bool q_sslconfiguration_handshake_must_interrupt_on_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setHandshakeMustInterruptOnError)
///
/// @param self QSslConfiguration*
/// @param interrupt bool
///
void q_sslconfiguration_set_handshake_must_interrupt_on_error(void* self, bool interrupt);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#missingCertificateIsFatal)
///
/// @param self QSslConfiguration*
///
bool q_sslconfiguration_missing_certificate_is_fatal(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setMissingCertificateIsFatal)
///
/// @param self QSslConfiguration*
/// @param cannotRecover bool
///
void q_sslconfiguration_set_missing_certificate_is_fatal(void* self, bool cannotRecover);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setOcspStaplingEnabled)
///
/// @param self QSslConfiguration*
/// @param enable bool
///
void q_sslconfiguration_set_ocsp_stapling_enabled(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#ocspStaplingEnabled)
///
/// @param self QSslConfiguration*
///
bool q_sslconfiguration_ocsp_stapling_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setAllowedNextProtocols)
///
/// @param self QSslConfiguration*
/// @param protocols const char**
///
void q_sslconfiguration_set_allowed_next_protocols(void* self, const char* protocols[static 1]);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#allowedNextProtocols)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSslConfiguration*
///
const char** q_sslconfiguration_allowed_next_protocols(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#nextNegotiatedProtocol)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QSslConfiguration*
///
char* q_sslconfiguration_next_negotiated_protocol(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#nextProtocolNegotiationStatus)
///
/// @param self QSslConfiguration*
///
/// @return enum QSslConfiguration__NextProtocolNegotiationStatus
///
int32_t q_sslconfiguration_next_protocol_negotiation_status(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#addCaCertificates)
///
/// @param self QSslConfiguration*
/// @param path const char*
/// @param format enum QSsl__EncodingFormat
///
bool q_sslconfiguration_add_ca_certificates22(void* self, const char* path, int32_t format);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#addCaCertificates)
///
/// @param self QSslConfiguration*
/// @param path const char*
/// @param format enum QSsl__EncodingFormat
/// @param syntax enum QSslCertificate__PatternSyntax
///
bool q_sslconfiguration_add_ca_certificates3(void* self, const char* path, int32_t format, int32_t syntax);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#setBackendConfiguration)
///
/// @param self QSslConfiguration*
/// @param backendConfiguration libqt_map of char* to QVariant*
///
void q_sslconfiguration_set_backend_configuration1(void* self, libqt_map backendConfiguration);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#dtor.QSslConfiguration)
///
/// Delete this object from C++ memory.
///
/// @param self QSslConfiguration*
///
void q_sslconfiguration_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsslconfiguration.html#public-types)

typedef enum {
    QSSLCONFIGURATION_NEXTPROTOCOLNEGOTIATIONSTATUS_NEXTPROTOCOLNEGOTIATIONNONE = 0,
    QSSLCONFIGURATION_NEXTPROTOCOLNEGOTIATIONSTATUS_NEXTPROTOCOLNEGOTIATIONNEGOTIATED = 1,
    QSSLCONFIGURATION_NEXTPROTOCOLNEGOTIATIONSTATUS_NEXTPROTOCOLNEGOTIATIONUNSUPPORTED = 2
} QSslConfiguration__NextProtocolNegotiationStatus;

#endif
