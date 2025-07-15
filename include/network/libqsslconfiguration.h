#pragma once
#ifndef SRC_NETWORKQT6C_LIBQSSLCONFIGURATION_H
#define SRC_NETWORKQT6C_LIBQSSLCONFIGURATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qsslconfiguration.html

/// q_sslconfiguration_new constructs a new QSslConfiguration object.
///
///
QSslConfiguration* q_sslconfiguration_new();

/// q_sslconfiguration_new2 constructs a new QSslConfiguration object.
///
/// ``` QSslConfiguration* other ```
QSslConfiguration* q_sslconfiguration_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#operator=)
///
/// ``` QSslConfiguration* self, QSslConfiguration* other ```
void q_sslconfiguration_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#swap)
///
/// ``` QSslConfiguration* self, QSslConfiguration* other ```
void q_sslconfiguration_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#operator==)
///
/// ``` QSslConfiguration* self, QSslConfiguration* other ```
bool q_sslconfiguration_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#operator!=)
///
/// ``` QSslConfiguration* self, QSslConfiguration* other ```
bool q_sslconfiguration_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#isNull)
///
/// ``` QSslConfiguration* self ```
bool q_sslconfiguration_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#protocol)
///
/// ``` QSslConfiguration* self ```
int64_t q_sslconfiguration_protocol(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setProtocol)
///
/// ``` QSslConfiguration* self, enum QSsl__SslProtocol protocol ```
void q_sslconfiguration_set_protocol(void* self, int64_t protocol);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#peerVerifyMode)
///
/// ``` QSslConfiguration* self ```
int64_t q_sslconfiguration_peer_verify_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setPeerVerifyMode)
///
/// ``` QSslConfiguration* self, enum QSslSocket__PeerVerifyMode mode ```
void q_sslconfiguration_set_peer_verify_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#peerVerifyDepth)
///
/// ``` QSslConfiguration* self ```
int32_t q_sslconfiguration_peer_verify_depth(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setPeerVerifyDepth)
///
/// ``` QSslConfiguration* self, int depth ```
void q_sslconfiguration_set_peer_verify_depth(void* self, int depth);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#localCertificateChain)
///
/// ``` QSslConfiguration* self ```
libqt_list /* of QSslCertificate* */ q_sslconfiguration_local_certificate_chain(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setLocalCertificateChain)
///
/// ``` QSslConfiguration* self, libqt_list /* of QSslCertificate* */ localChain ```
void q_sslconfiguration_set_local_certificate_chain(void* self, libqt_list localChain);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#localCertificate)
///
/// ``` QSslConfiguration* self ```
QSslCertificate* q_sslconfiguration_local_certificate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setLocalCertificate)
///
/// ``` QSslConfiguration* self, QSslCertificate* certificate ```
void q_sslconfiguration_set_local_certificate(void* self, void* certificate);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#peerCertificate)
///
/// ``` QSslConfiguration* self ```
QSslCertificate* q_sslconfiguration_peer_certificate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#peerCertificateChain)
///
/// ``` QSslConfiguration* self ```
libqt_list /* of QSslCertificate* */ q_sslconfiguration_peer_certificate_chain(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#sessionCipher)
///
/// ``` QSslConfiguration* self ```
QSslCipher* q_sslconfiguration_session_cipher(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#sessionProtocol)
///
/// ``` QSslConfiguration* self ```
int64_t q_sslconfiguration_session_protocol(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#privateKey)
///
/// ``` QSslConfiguration* self ```
QSslKey* q_sslconfiguration_private_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setPrivateKey)
///
/// ``` QSslConfiguration* self, QSslKey* key ```
void q_sslconfiguration_set_private_key(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#ciphers)
///
/// ``` QSslConfiguration* self ```
libqt_list /* of QSslCipher* */ q_sslconfiguration_ciphers(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setCiphers)
///
/// ``` QSslConfiguration* self, libqt_list /* of QSslCipher* */ ciphers ```
void q_sslconfiguration_set_ciphers(void* self, libqt_list ciphers);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setCiphers)
///
/// ``` QSslConfiguration* self, const char* ciphers ```
void q_sslconfiguration_set_ciphers2(void* self, const char* ciphers);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#supportedCiphers)
///
///
libqt_list /* of QSslCipher* */ q_sslconfiguration_supported_ciphers();

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#caCertificates)
///
/// ``` QSslConfiguration* self ```
libqt_list /* of QSslCertificate* */ q_sslconfiguration_ca_certificates(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setCaCertificates)
///
/// ``` QSslConfiguration* self, libqt_list /* of QSslCertificate* */ certificates ```
void q_sslconfiguration_set_ca_certificates(void* self, libqt_list certificates);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#addCaCertificates)
///
/// ``` QSslConfiguration* self, const char* path ```
bool q_sslconfiguration_add_ca_certificates(void* self, const char* path);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#addCaCertificate)
///
/// ``` QSslConfiguration* self, QSslCertificate* certificate ```
void q_sslconfiguration_add_ca_certificate(void* self, void* certificate);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#addCaCertificates)
///
/// ``` QSslConfiguration* self, libqt_list /* of QSslCertificate* */ certificates ```
void q_sslconfiguration_add_ca_certificates2(void* self, libqt_list certificates);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#systemCaCertificates)
///
///
libqt_list /* of QSslCertificate* */ q_sslconfiguration_system_ca_certificates();

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setSslOption)
///
/// ``` QSslConfiguration* self, enum QSsl__SslOption option, bool on ```
void q_sslconfiguration_set_ssl_option(void* self, int64_t option, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#testSslOption)
///
/// ``` QSslConfiguration* self, enum QSsl__SslOption option ```
bool q_sslconfiguration_test_ssl_option(void* self, int64_t option);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#sessionTicket)
///
/// ``` QSslConfiguration* self ```
char* q_sslconfiguration_session_ticket(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setSessionTicket)
///
/// ``` QSslConfiguration* self, const char* sessionTicket ```
void q_sslconfiguration_set_session_ticket(void* self, const char* sessionTicket);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#sessionTicketLifeTimeHint)
///
/// ``` QSslConfiguration* self ```
int32_t q_sslconfiguration_session_ticket_life_time_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#ephemeralServerKey)
///
/// ``` QSslConfiguration* self ```
QSslKey* q_sslconfiguration_ephemeral_server_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#ellipticCurves)
///
/// ``` QSslConfiguration* self ```
libqt_list /* of QSslEllipticCurve* */ q_sslconfiguration_elliptic_curves(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setEllipticCurves)
///
/// ``` QSslConfiguration* self, libqt_list /* of QSslEllipticCurve* */ curves ```
void q_sslconfiguration_set_elliptic_curves(void* self, libqt_list curves);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#supportedEllipticCurves)
///
///
libqt_list /* of QSslEllipticCurve* */ q_sslconfiguration_supported_elliptic_curves();

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#preSharedKeyIdentityHint)
///
/// ``` QSslConfiguration* self ```
char* q_sslconfiguration_pre_shared_key_identity_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setPreSharedKeyIdentityHint)
///
/// ``` QSslConfiguration* self, const char* hint ```
void q_sslconfiguration_set_pre_shared_key_identity_hint(void* self, const char* hint);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#diffieHellmanParameters)
///
/// ``` QSslConfiguration* self ```
QSslDiffieHellmanParameters* q_sslconfiguration_diffie_hellman_parameters(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setDiffieHellmanParameters)
///
/// ``` QSslConfiguration* self, QSslDiffieHellmanParameters* dhparams ```
void q_sslconfiguration_set_diffie_hellman_parameters(void* self, void* dhparams);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setBackendConfigurationOption)
///
/// ``` QSslConfiguration* self, const char* name, QVariant* value ```
void q_sslconfiguration_set_backend_configuration_option(void* self, const char* name, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setBackendConfiguration)
///
/// ``` QSslConfiguration* self ```
void q_sslconfiguration_set_backend_configuration(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#defaultConfiguration)
///
///
QSslConfiguration* q_sslconfiguration_default_configuration();

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setDefaultConfiguration)
///
/// ``` QSslConfiguration* configuration ```
void q_sslconfiguration_set_default_configuration(void* configuration);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#dtlsCookieVerificationEnabled)
///
/// ``` QSslConfiguration* self ```
bool q_sslconfiguration_dtls_cookie_verification_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setDtlsCookieVerificationEnabled)
///
/// ``` QSslConfiguration* self, bool enable ```
void q_sslconfiguration_set_dtls_cookie_verification_enabled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#defaultDtlsConfiguration)
///
///
QSslConfiguration* q_sslconfiguration_default_dtls_configuration();

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setDefaultDtlsConfiguration)
///
/// ``` QSslConfiguration* configuration ```
void q_sslconfiguration_set_default_dtls_configuration(void* configuration);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#handshakeMustInterruptOnError)
///
/// ``` QSslConfiguration* self ```
bool q_sslconfiguration_handshake_must_interrupt_on_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setHandshakeMustInterruptOnError)
///
/// ``` QSslConfiguration* self, bool interrupt ```
void q_sslconfiguration_set_handshake_must_interrupt_on_error(void* self, bool interrupt);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#missingCertificateIsFatal)
///
/// ``` QSslConfiguration* self ```
bool q_sslconfiguration_missing_certificate_is_fatal(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setMissingCertificateIsFatal)
///
/// ``` QSslConfiguration* self, bool cannotRecover ```
void q_sslconfiguration_set_missing_certificate_is_fatal(void* self, bool cannotRecover);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setOcspStaplingEnabled)
///
/// ``` QSslConfiguration* self, bool enable ```
void q_sslconfiguration_set_ocsp_stapling_enabled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#ocspStaplingEnabled)
///
/// ``` QSslConfiguration* self ```
bool q_sslconfiguration_ocsp_stapling_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#setAllowedNextProtocols)
///
/// ``` QSslConfiguration* self, const char* protocols[] ```
void q_sslconfiguration_set_allowed_next_protocols(void* self, const char* protocols[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#allowedNextProtocols)
///
/// ``` QSslConfiguration* self ```
const char** q_sslconfiguration_allowed_next_protocols(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#nextNegotiatedProtocol)
///
/// ``` QSslConfiguration* self ```
char* q_sslconfiguration_next_negotiated_protocol(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#nextProtocolNegotiationStatus)
///
/// ``` QSslConfiguration* self ```
int64_t q_sslconfiguration_next_protocol_negotiation_status(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#addCaCertificates)
///
/// ``` QSslConfiguration* self, const char* path, enum QSsl__EncodingFormat format ```
bool q_sslconfiguration_add_ca_certificates22(void* self, const char* path, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#addCaCertificates)
///
/// ``` QSslConfiguration* self, const char* path, enum QSsl__EncodingFormat format, enum QSslCertificate__PatternSyntax syntax ```
bool q_sslconfiguration_add_ca_certificates3(void* self, const char* path, int64_t format, int64_t syntax);

/// [Qt documentation](https://doc.qt.io/qt-6/qsslconfiguration.html#dtor.QSslConfiguration)
///
/// Delete this object from C++ memory.
///
/// ``` QSslConfiguration* self ```
void q_sslconfiguration_delete(void* self);

/// https://doc.qt.io/qt-6/qsslconfiguration.html#types

typedef enum {
    QSSLCONFIGURATION_NEXTPROTOCOLNEGOTIATIONSTATUS_NEXTPROTOCOLNEGOTIATIONNONE = 0,
    QSSLCONFIGURATION_NEXTPROTOCOLNEGOTIATIONSTATUS_NEXTPROTOCOLNEGOTIATIONNEGOTIATED = 1,
    QSSLCONFIGURATION_NEXTPROTOCOLNEGOTIATIONSTATUS_NEXTPROTOCOLNEGOTIATIONUNSUPPORTED = 2
} QSslConfiguration__NextProtocolNegotiationStatus;

#endif
