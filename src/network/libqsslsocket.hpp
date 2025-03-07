#pragma once
#ifndef SRC_NETWORKC_LIBQSSLSOCKET_HPP
#define SRC_NETWORKC_LIBQSSLSOCKET_HPP

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection)
typedef QMetaObject::Connection QMetaObject__Connection;
#endif
#else
typedef struct QAbstractSocket QAbstractSocket;
typedef struct QAnyStringView QAnyStringView;
typedef struct QAuthenticator QAuthenticator;
typedef struct QBindingStorage QBindingStorage;
typedef struct QChildEvent QChildEvent;
typedef struct QEvent QEvent;
typedef struct QHostAddress QHostAddress;
typedef struct QIODevice QIODevice;
typedef struct QIODeviceBase QIODeviceBase;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMetaObject__Connection QMetaObject__Connection;
typedef struct QNetworkProxy QNetworkProxy;
typedef struct QObject QObject;
typedef struct QOcspResponse QOcspResponse;
typedef struct QSslCertificate QSslCertificate;
typedef struct QSslCipher QSslCipher;
typedef struct QSslConfiguration QSslConfiguration;
typedef struct QSslError QSslError;
typedef struct QSslKey QSslKey;
typedef struct QSslPreSharedKeyAuthenticator QSslPreSharedKeyAuthenticator;
typedef struct QSslSocket QSslSocket;
typedef struct QTcpSocket QTcpSocket;
typedef struct QThread QThread;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

#ifdef __cplusplus
typedef QSslSocket::PeerVerifyMode PeerVerifyMode; // C++ enum
typedef QSslSocket::SslMode SslMode;               // C++ enum
#else
typedef int PeerVerifyMode; // C ABI enum
typedef int SslMode;        // C ABI enum
#endif

QSslSocket* QSslSocket_new();
QSslSocket* QSslSocket_new2(QObject* parent);
QMetaObject* QSslSocket_MetaObject(const QSslSocket* self);
void* QSslSocket_Metacast(QSslSocket* self, const char* param1);
int QSslSocket_Metacall(QSslSocket* self, int param1, int param2, void** param3);
void QSslSocket_OnMetacall(QSslSocket* self, intptr_t slot);
int QSslSocket_QBaseMetacall(QSslSocket* self, int param1, int param2, void** param3);
libqt_string QSslSocket_Tr(const char* s);
void QSslSocket_Resume(QSslSocket* self);
void QSslSocket_OnResume(QSslSocket* self, intptr_t slot);
void QSslSocket_QBaseResume(QSslSocket* self);
void QSslSocket_ConnectToHostEncrypted(QSslSocket* self, libqt_string hostName, uint16_t port);
void QSslSocket_ConnectToHostEncrypted2(QSslSocket* self, libqt_string hostName, uint16_t port, libqt_string sslPeerName);
bool QSslSocket_SetSocketDescriptor(QSslSocket* self, intptr_t socketDescriptor, int state, int openMode);
void QSslSocket_OnSetSocketDescriptor(QSslSocket* self, intptr_t slot);
bool QSslSocket_QBaseSetSocketDescriptor(QSslSocket* self, intptr_t socketDescriptor, int state, int openMode);
void QSslSocket_ConnectToHost(QSslSocket* self, libqt_string hostName, uint16_t port, int openMode, int protocol);
void QSslSocket_OnConnectToHost(QSslSocket* self, intptr_t slot);
void QSslSocket_QBaseConnectToHost(QSslSocket* self, libqt_string hostName, uint16_t port, int openMode, int protocol);
void QSslSocket_DisconnectFromHost(QSslSocket* self);
void QSslSocket_OnDisconnectFromHost(QSslSocket* self, intptr_t slot);
void QSslSocket_QBaseDisconnectFromHost(QSslSocket* self);
void QSslSocket_SetSocketOption(QSslSocket* self, int option, QVariant* value);
void QSslSocket_OnSetSocketOption(QSslSocket* self, intptr_t slot);
void QSslSocket_QBaseSetSocketOption(QSslSocket* self, int option, QVariant* value);
QVariant* QSslSocket_SocketOption(QSslSocket* self, int option);
void QSslSocket_OnSocketOption(QSslSocket* self, intptr_t slot);
QVariant* QSslSocket_QBaseSocketOption(QSslSocket* self, int option);
int QSslSocket_Mode(const QSslSocket* self);
bool QSslSocket_IsEncrypted(const QSslSocket* self);
int QSslSocket_Protocol(const QSslSocket* self);
void QSslSocket_SetProtocol(QSslSocket* self, int protocol);
int QSslSocket_PeerVerifyMode(const QSslSocket* self);
void QSslSocket_SetPeerVerifyMode(QSslSocket* self, int mode);
int QSslSocket_PeerVerifyDepth(const QSslSocket* self);
void QSslSocket_SetPeerVerifyDepth(QSslSocket* self, int depth);
libqt_string QSslSocket_PeerVerifyName(const QSslSocket* self);
void QSslSocket_SetPeerVerifyName(QSslSocket* self, libqt_string hostName);
long long QSslSocket_BytesAvailable(const QSslSocket* self);
void QSslSocket_OnBytesAvailable(const QSslSocket* self, intptr_t slot);
long long QSslSocket_QBaseBytesAvailable(const QSslSocket* self);
long long QSslSocket_BytesToWrite(const QSslSocket* self);
void QSslSocket_OnBytesToWrite(const QSslSocket* self, intptr_t slot);
long long QSslSocket_QBaseBytesToWrite(const QSslSocket* self);
bool QSslSocket_CanReadLine(const QSslSocket* self);
void QSslSocket_OnCanReadLine(const QSslSocket* self, intptr_t slot);
bool QSslSocket_QBaseCanReadLine(const QSslSocket* self);
void QSslSocket_Close(QSslSocket* self);
void QSslSocket_OnClose(QSslSocket* self, intptr_t slot);
void QSslSocket_QBaseClose(QSslSocket* self);
bool QSslSocket_AtEnd(const QSslSocket* self);
void QSslSocket_OnAtEnd(const QSslSocket* self, intptr_t slot);
bool QSslSocket_QBaseAtEnd(const QSslSocket* self);
void QSslSocket_SetReadBufferSize(QSslSocket* self, long long size);
void QSslSocket_OnSetReadBufferSize(QSslSocket* self, intptr_t slot);
void QSslSocket_QBaseSetReadBufferSize(QSslSocket* self, long long size);
long long QSslSocket_EncryptedBytesAvailable(const QSslSocket* self);
long long QSslSocket_EncryptedBytesToWrite(const QSslSocket* self);
QSslConfiguration* QSslSocket_SslConfiguration(const QSslSocket* self);
void QSslSocket_SetSslConfiguration(QSslSocket* self, QSslConfiguration* config);
void QSslSocket_SetLocalCertificateChain(QSslSocket* self, libqt_list /* of QSslCertificate* */ localChain);
libqt_list /* of QSslCertificate* */ QSslSocket_LocalCertificateChain(const QSslSocket* self);
void QSslSocket_SetLocalCertificate(QSslSocket* self, QSslCertificate* certificate);
void QSslSocket_SetLocalCertificateWithFileName(QSslSocket* self, libqt_string fileName);
QSslCertificate* QSslSocket_LocalCertificate(const QSslSocket* self);
QSslCertificate* QSslSocket_PeerCertificate(const QSslSocket* self);
libqt_list /* of QSslCertificate* */ QSslSocket_PeerCertificateChain(const QSslSocket* self);
QSslCipher* QSslSocket_SessionCipher(const QSslSocket* self);
int QSslSocket_SessionProtocol(const QSslSocket* self);
libqt_list /* of QOcspResponse* */ QSslSocket_OcspResponses(const QSslSocket* self);
void QSslSocket_SetPrivateKey(QSslSocket* self, QSslKey* key);
void QSslSocket_SetPrivateKeyWithFileName(QSslSocket* self, libqt_string fileName);
QSslKey* QSslSocket_PrivateKey(const QSslSocket* self);
bool QSslSocket_WaitForConnected(QSslSocket* self, int msecs);
void QSslSocket_OnWaitForConnected(QSslSocket* self, intptr_t slot);
bool QSslSocket_QBaseWaitForConnected(QSslSocket* self, int msecs);
bool QSslSocket_WaitForEncrypted(QSslSocket* self);
bool QSslSocket_WaitForReadyRead(QSslSocket* self, int msecs);
void QSslSocket_OnWaitForReadyRead(QSslSocket* self, intptr_t slot);
bool QSslSocket_QBaseWaitForReadyRead(QSslSocket* self, int msecs);
bool QSslSocket_WaitForBytesWritten(QSslSocket* self, int msecs);
void QSslSocket_OnWaitForBytesWritten(QSslSocket* self, intptr_t slot);
bool QSslSocket_QBaseWaitForBytesWritten(QSslSocket* self, int msecs);
bool QSslSocket_WaitForDisconnected(QSslSocket* self, int msecs);
void QSslSocket_OnWaitForDisconnected(QSslSocket* self, intptr_t slot);
bool QSslSocket_QBaseWaitForDisconnected(QSslSocket* self, int msecs);
libqt_list /* of QSslError* */ QSslSocket_SslHandshakeErrors(const QSslSocket* self);
bool QSslSocket_SupportsSsl();
long QSslSocket_SslLibraryVersionNumber();
libqt_string QSslSocket_SslLibraryVersionString();
long QSslSocket_SslLibraryBuildVersionNumber();
libqt_string QSslSocket_SslLibraryBuildVersionString();
libqt_list /* of libqt_string */ QSslSocket_AvailableBackends();
libqt_string QSslSocket_ActiveBackend();
bool QSslSocket_SetActiveBackend(libqt_string backendName);
libqt_list /* of int */ QSslSocket_SupportedProtocols();
bool QSslSocket_IsProtocolSupported(int protocol);
libqt_list /* of int */ QSslSocket_ImplementedClasses();
bool QSslSocket_IsClassImplemented(int cl);
libqt_list /* of int */ QSslSocket_SupportedFeatures();
bool QSslSocket_IsFeatureSupported(int feat);
void QSslSocket_IgnoreSslErrors(QSslSocket* self, libqt_list /* of QSslError* */ errors);
void QSslSocket_ContinueInterruptedHandshake(QSslSocket* self);
void QSslSocket_StartClientEncryption(QSslSocket* self);
void QSslSocket_StartServerEncryption(QSslSocket* self);
void QSslSocket_IgnoreSslErrors2(QSslSocket* self);
void QSslSocket_Encrypted(QSslSocket* self);
void QSslSocket_Connect_Encrypted(QSslSocket* self, intptr_t slot);
void QSslSocket_PeerVerifyError(QSslSocket* self, QSslError* errorVal);
void QSslSocket_Connect_PeerVerifyError(QSslSocket* self, intptr_t slot);
void QSslSocket_SslErrors(QSslSocket* self, libqt_list /* of QSslError* */ errors);
void QSslSocket_Connect_SslErrors(QSslSocket* self, intptr_t slot);
void QSslSocket_ModeChanged(QSslSocket* self, int newMode);
void QSslSocket_Connect_ModeChanged(QSslSocket* self, intptr_t slot);
void QSslSocket_EncryptedBytesWritten(QSslSocket* self, long long totalBytes);
void QSslSocket_Connect_EncryptedBytesWritten(QSslSocket* self, intptr_t slot);
void QSslSocket_PreSharedKeyAuthenticationRequired(QSslSocket* self, QSslPreSharedKeyAuthenticator* authenticator);
void QSslSocket_Connect_PreSharedKeyAuthenticationRequired(QSslSocket* self, intptr_t slot);
void QSslSocket_NewSessionTicketReceived(QSslSocket* self);
void QSslSocket_Connect_NewSessionTicketReceived(QSslSocket* self, intptr_t slot);
void QSslSocket_AlertSent(QSslSocket* self, int level, int typeVal, libqt_string description);
void QSslSocket_Connect_AlertSent(QSslSocket* self, intptr_t slot);
void QSslSocket_AlertReceived(QSslSocket* self, int level, int typeVal, libqt_string description);
void QSslSocket_Connect_AlertReceived(QSslSocket* self, intptr_t slot);
void QSslSocket_HandshakeInterruptedOnError(QSslSocket* self, QSslError* errorVal);
void QSslSocket_Connect_HandshakeInterruptedOnError(QSslSocket* self, intptr_t slot);
long long QSslSocket_ReadData(QSslSocket* self, char* data, long long maxlen);
void QSslSocket_OnReadData(QSslSocket* self, intptr_t slot);
long long QSslSocket_QBaseReadData(QSslSocket* self, char* data, long long maxlen);
long long QSslSocket_SkipData(QSslSocket* self, long long maxSize);
void QSslSocket_OnSkipData(QSslSocket* self, intptr_t slot);
long long QSslSocket_QBaseSkipData(QSslSocket* self, long long maxSize);
long long QSslSocket_WriteData(QSslSocket* self, const char* data, long long lenVal);
void QSslSocket_OnWriteData(QSslSocket* self, intptr_t slot);
long long QSslSocket_QBaseWriteData(QSslSocket* self, const char* data, long long lenVal);
libqt_string QSslSocket_Tr2(const char* s, const char* c);
libqt_string QSslSocket_Tr3(const char* s, const char* c, int n);
void QSslSocket_ConnectToHostEncrypted3(QSslSocket* self, libqt_string hostName, uint16_t port, int mode);
void QSslSocket_ConnectToHostEncrypted4(QSslSocket* self, libqt_string hostName, uint16_t port, int mode, int protocol);
void QSslSocket_ConnectToHostEncrypted42(QSslSocket* self, libqt_string hostName, uint16_t port, libqt_string sslPeerName, int mode);
void QSslSocket_ConnectToHostEncrypted5(QSslSocket* self, libqt_string hostName, uint16_t port, libqt_string sslPeerName, int mode, int protocol);
void QSslSocket_SetLocalCertificate2(QSslSocket* self, libqt_string fileName, int format);
void QSslSocket_SetPrivateKey2(QSslSocket* self, libqt_string fileName, int algorithm);
void QSslSocket_SetPrivateKey3(QSslSocket* self, libqt_string fileName, int algorithm, int format);
void QSslSocket_SetPrivateKey4(QSslSocket* self, libqt_string fileName, int algorithm, int format, libqt_string passPhrase);
bool QSslSocket_WaitForEncrypted1(QSslSocket* self, int msecs);
libqt_list /* of int */ QSslSocket_SupportedProtocols1(libqt_string backendName);
bool QSslSocket_IsProtocolSupported2(int protocol, libqt_string backendName);
libqt_list /* of int */ QSslSocket_ImplementedClasses1(libqt_string backendName);
bool QSslSocket_IsClassImplemented2(int cl, libqt_string backendName);
libqt_list /* of int */ QSslSocket_SupportedFeatures1(libqt_string backendName);
bool QSslSocket_IsFeatureSupported2(int feat, libqt_string backendName);
intptr_t QSslSocket_SocketDescriptor(const QSslSocket* self);
void QSslSocket_OnSocketDescriptor(const QSslSocket* self, intptr_t slot);
intptr_t QSslSocket_QBaseSocketDescriptor(const QSslSocket* self);
bool QSslSocket_IsSequential(const QSslSocket* self);
void QSslSocket_OnIsSequential(const QSslSocket* self, intptr_t slot);
bool QSslSocket_QBaseIsSequential(const QSslSocket* self);
long long QSslSocket_ReadLineData(QSslSocket* self, char* data, long long maxlen);
void QSslSocket_OnReadLineData(QSslSocket* self, intptr_t slot);
long long QSslSocket_QBaseReadLineData(QSslSocket* self, char* data, long long maxlen);
bool QSslSocket_Open(QSslSocket* self, int mode);
void QSslSocket_OnOpen(QSslSocket* self, intptr_t slot);
bool QSslSocket_QBaseOpen(QSslSocket* self, int mode);
long long QSslSocket_Pos(const QSslSocket* self);
void QSslSocket_OnPos(const QSslSocket* self, intptr_t slot);
long long QSslSocket_QBasePos(const QSslSocket* self);
long long QSslSocket_Size(const QSslSocket* self);
void QSslSocket_OnSize(const QSslSocket* self, intptr_t slot);
long long QSslSocket_QBaseSize(const QSslSocket* self);
bool QSslSocket_Seek(QSslSocket* self, long long pos);
void QSslSocket_OnSeek(QSslSocket* self, intptr_t slot);
bool QSslSocket_QBaseSeek(QSslSocket* self, long long pos);
bool QSslSocket_Reset(QSslSocket* self);
void QSslSocket_OnReset(QSslSocket* self, intptr_t slot);
bool QSslSocket_QBaseReset(QSslSocket* self);
bool QSslSocket_Event(QSslSocket* self, QEvent* event);
void QSslSocket_OnEvent(QSslSocket* self, intptr_t slot);
bool QSslSocket_QBaseEvent(QSslSocket* self, QEvent* event);
bool QSslSocket_EventFilter(QSslSocket* self, QObject* watched, QEvent* event);
void QSslSocket_OnEventFilter(QSslSocket* self, intptr_t slot);
bool QSslSocket_QBaseEventFilter(QSslSocket* self, QObject* watched, QEvent* event);
void QSslSocket_TimerEvent(QSslSocket* self, QTimerEvent* event);
void QSslSocket_OnTimerEvent(QSslSocket* self, intptr_t slot);
void QSslSocket_QBaseTimerEvent(QSslSocket* self, QTimerEvent* event);
void QSslSocket_ChildEvent(QSslSocket* self, QChildEvent* event);
void QSslSocket_OnChildEvent(QSslSocket* self, intptr_t slot);
void QSslSocket_QBaseChildEvent(QSslSocket* self, QChildEvent* event);
void QSslSocket_CustomEvent(QSslSocket* self, QEvent* event);
void QSslSocket_OnCustomEvent(QSslSocket* self, intptr_t slot);
void QSslSocket_QBaseCustomEvent(QSslSocket* self, QEvent* event);
void QSslSocket_ConnectNotify(QSslSocket* self, QMetaMethod* signal);
void QSslSocket_OnConnectNotify(QSslSocket* self, intptr_t slot);
void QSslSocket_QBaseConnectNotify(QSslSocket* self, QMetaMethod* signal);
void QSslSocket_DisconnectNotify(QSslSocket* self, QMetaMethod* signal);
void QSslSocket_OnDisconnectNotify(QSslSocket* self, intptr_t slot);
void QSslSocket_QBaseDisconnectNotify(QSslSocket* self, QMetaMethod* signal);
bool QSslSocket_Bind(QSslSocket* self, QHostAddress* address, uint16_t port, int mode);
void QSslSocket_OnBind(QSslSocket* self, intptr_t slot);
bool QSslSocket_QBaseBind(QSslSocket* self, QHostAddress* address, uint16_t port, int mode);
void QSslSocket_SetSocketState(QSslSocket* self, int state);
void QSslSocket_OnSetSocketState(QSslSocket* self, intptr_t slot);
void QSslSocket_QBaseSetSocketState(QSslSocket* self, int state);
void QSslSocket_SetSocketError(QSslSocket* self, int socketError);
void QSslSocket_OnSetSocketError(QSslSocket* self, intptr_t slot);
void QSslSocket_QBaseSetSocketError(QSslSocket* self, int socketError);
void QSslSocket_SetLocalPort(QSslSocket* self, uint16_t port);
void QSslSocket_OnSetLocalPort(QSslSocket* self, intptr_t slot);
void QSslSocket_QBaseSetLocalPort(QSslSocket* self, uint16_t port);
void QSslSocket_SetLocalAddress(QSslSocket* self, QHostAddress* address);
void QSslSocket_OnSetLocalAddress(QSslSocket* self, intptr_t slot);
void QSslSocket_QBaseSetLocalAddress(QSslSocket* self, QHostAddress* address);
void QSslSocket_SetPeerPort(QSslSocket* self, uint16_t port);
void QSslSocket_OnSetPeerPort(QSslSocket* self, intptr_t slot);
void QSslSocket_QBaseSetPeerPort(QSslSocket* self, uint16_t port);
void QSslSocket_SetPeerAddress(QSslSocket* self, QHostAddress* address);
void QSslSocket_OnSetPeerAddress(QSslSocket* self, intptr_t slot);
void QSslSocket_QBaseSetPeerAddress(QSslSocket* self, QHostAddress* address);
void QSslSocket_SetPeerName(QSslSocket* self, libqt_string name);
void QSslSocket_OnSetPeerName(QSslSocket* self, intptr_t slot);
void QSslSocket_QBaseSetPeerName(QSslSocket* self, libqt_string name);
void QSslSocket_SetOpenMode(QSslSocket* self, int openMode);
void QSslSocket_OnSetOpenMode(QSslSocket* self, intptr_t slot);
void QSslSocket_QBaseSetOpenMode(QSslSocket* self, int openMode);
void QSslSocket_SetErrorString(QSslSocket* self, libqt_string errorString);
void QSslSocket_OnSetErrorString(QSslSocket* self, intptr_t slot);
void QSslSocket_QBaseSetErrorString(QSslSocket* self, libqt_string errorString);
QObject* QSslSocket_Sender(const QSslSocket* self);
void QSslSocket_OnSender(const QSslSocket* self, intptr_t slot);
QObject* QSslSocket_QBaseSender(const QSslSocket* self);
int QSslSocket_SenderSignalIndex(const QSslSocket* self);
void QSslSocket_OnSenderSignalIndex(const QSslSocket* self, intptr_t slot);
int QSslSocket_QBaseSenderSignalIndex(const QSslSocket* self);
int QSslSocket_Receivers(const QSslSocket* self, const char* signal);
void QSslSocket_OnReceivers(const QSslSocket* self, intptr_t slot);
int QSslSocket_QBaseReceivers(const QSslSocket* self, const char* signal);
bool QSslSocket_IsSignalConnected(const QSslSocket* self, QMetaMethod* signal);
void QSslSocket_OnIsSignalConnected(const QSslSocket* self, intptr_t slot);
bool QSslSocket_QBaseIsSignalConnected(const QSslSocket* self, QMetaMethod* signal);
void QSslSocket_Delete(QSslSocket* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
