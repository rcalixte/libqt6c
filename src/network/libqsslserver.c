#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "libqhostaddress.hpp"
#include "../libqmetaobject.hpp"
#include "libqnetworkproxy.hpp"
#include "../libqobject.hpp"
#include "libqsslconfiguration.hpp"
#include "libqsslerror.hpp"
#include "libqsslpresharedkeyauthenticator.hpp"
#include "libqsslsocket.hpp"
#include <string.h>
#include "libqtcpserver.hpp"
#include "libqtcpsocket.hpp"
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqsslserver.hpp"
#include "libqsslserver.h"

/// https://doc.qt.io/qt-6/qsslserver.html

/// q_sslserver_new constructs a new QSslServer object.
///
///
QSslServer* q_sslserver_new() {
    return QSslServer_new();
}

/// q_sslserver_new2 constructs a new QSslServer object.
///
/// ``` QObject* parent ```
QSslServer* q_sslserver_new2(void* parent) {
    return QSslServer_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QSslServer* self ```
QMetaObject* q_sslserver_meta_object(void* self) {
    return QSslServer_MetaObject((QSslServer*)self);
}

/// ``` QSslServer* self, const char* param1 ```
void* q_sslserver_metacast(void* self, const char* param1) {
    return QSslServer_Metacast((QSslServer*)self, param1);
}

/// ``` QSslServer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sslserver_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSslServer_Metacall((QSslServer*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QSslServer* self, int32_t (*slot)(QSslServer*, enum QMetaObject__Call, int, void*) ```
void q_sslserver_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QSslServer_OnMetacall((QSslServer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSslServer* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_sslserver_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSslServer_QBaseMetacall((QSslServer*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_sslserver_tr(const char* s) {
    libqt_string _str = QSslServer_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#setSslConfiguration)
///
/// ``` QSslServer* self, QSslConfiguration* sslConfiguration ```
void q_sslserver_set_ssl_configuration(void* self, void* sslConfiguration) {
    QSslServer_SetSslConfiguration((QSslServer*)self, (QSslConfiguration*)sslConfiguration);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#sslConfiguration)
///
/// ``` QSslServer* self ```
QSslConfiguration* q_sslserver_ssl_configuration(void* self) {
    return QSslServer_SslConfiguration((QSslServer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#setHandshakeTimeout)
///
/// ``` QSslServer* self, int timeout ```
void q_sslserver_set_handshake_timeout(void* self, int timeout) {
    QSslServer_SetHandshakeTimeout((QSslServer*)self, timeout);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#handshakeTimeout)
///
/// ``` QSslServer* self ```
int32_t q_sslserver_handshake_timeout(void* self) {
    return QSslServer_HandshakeTimeout((QSslServer*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#sslErrors)
///
/// ``` QSslServer* self, QSslSocket* socket, QSslError* errors[] ```
void q_sslserver_ssl_errors(void* self, void* socket, void* errors[]) {
    QSslError** errors_arr = (QSslError**)errors;
    size_t errors_len = 0;
    while (errors_arr[errors_len] != NULL) {
        errors_len++;
    }
    libqt_list errors_list = {
        .len = errors_len,
        .data = {(QSslError*)errors},
    };
    QSslServer_SslErrors((QSslServer*)self, (QSslSocket*)socket, errors_list);
}

/// ``` QSslServer* self, void (*slot)(QSslServer*, QSslSocket*, QSslError*[]) ```
void q_sslserver_on_ssl_errors(void* self, void (*slot)(void*, void*, void*)) {
    QSslServer_Connect_SslErrors((QSslServer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#peerVerifyError)
///
/// ``` QSslServer* self, QSslSocket* socket, QSslError* errorVal ```
void q_sslserver_peer_verify_error(void* self, void* socket, void* errorVal) {
    QSslServer_PeerVerifyError((QSslServer*)self, (QSslSocket*)socket, (QSslError*)errorVal);
}

/// ``` QSslServer* self, void (*slot)(QSslServer*, QSslSocket*, QSslError*) ```
void q_sslserver_on_peer_verify_error(void* self, void (*slot)(void*, void*, void*)) {
    QSslServer_Connect_PeerVerifyError((QSslServer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#errorOccurred)
///
/// ``` QSslServer* self, QSslSocket* socket, enum QAbstractSocket__SocketError errorVal ```
void q_sslserver_error_occurred(void* self, void* socket, int64_t errorVal) {
    QSslServer_ErrorOccurred((QSslServer*)self, (QSslSocket*)socket, errorVal);
}

/// ``` QSslServer* self, void (*slot)(QSslServer*, QSslSocket*, enum QAbstractSocket__SocketError) ```
void q_sslserver_on_error_occurred(void* self, void (*slot)(void*, void*, int64_t)) {
    QSslServer_Connect_ErrorOccurred((QSslServer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#preSharedKeyAuthenticationRequired)
///
/// ``` QSslServer* self, QSslSocket* socket, QSslPreSharedKeyAuthenticator* authenticator ```
void q_sslserver_pre_shared_key_authentication_required(void* self, void* socket, void* authenticator) {
    QSslServer_PreSharedKeyAuthenticationRequired((QSslServer*)self, (QSslSocket*)socket, (QSslPreSharedKeyAuthenticator*)authenticator);
}

/// ``` QSslServer* self, void (*slot)(QSslServer*, QSslSocket*, QSslPreSharedKeyAuthenticator*) ```
void q_sslserver_on_pre_shared_key_authentication_required(void* self, void (*slot)(void*, void*, void*)) {
    QSslServer_Connect_PreSharedKeyAuthenticationRequired((QSslServer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#alertSent)
///
/// ``` QSslServer* self, QSslSocket* socket, enum QSsl__AlertLevel level, enum QSsl__AlertType typeVal, const char* description ```
void q_sslserver_alert_sent(void* self, void* socket, int64_t level, int64_t typeVal, const char* description) {
    QSslServer_AlertSent((QSslServer*)self, (QSslSocket*)socket, level, typeVal, qstring(description));
}

/// ``` QSslServer* self, void (*slot)(QSslServer*, QSslSocket*, enum QSsl__AlertLevel, enum QSsl__AlertType, const char*) ```
void q_sslserver_on_alert_sent(void* self, void (*slot)(void*, void*, int64_t, int64_t, const char*)) {
    QSslServer_Connect_AlertSent((QSslServer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#alertReceived)
///
/// ``` QSslServer* self, QSslSocket* socket, enum QSsl__AlertLevel level, enum QSsl__AlertType typeVal, const char* description ```
void q_sslserver_alert_received(void* self, void* socket, int64_t level, int64_t typeVal, const char* description) {
    QSslServer_AlertReceived((QSslServer*)self, (QSslSocket*)socket, level, typeVal, qstring(description));
}

/// ``` QSslServer* self, void (*slot)(QSslServer*, QSslSocket*, enum QSsl__AlertLevel, enum QSsl__AlertType, const char*) ```
void q_sslserver_on_alert_received(void* self, void (*slot)(void*, void*, int64_t, int64_t, const char*)) {
    QSslServer_Connect_AlertReceived((QSslServer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#handshakeInterruptedOnError)
///
/// ``` QSslServer* self, QSslSocket* socket, QSslError* errorVal ```
void q_sslserver_handshake_interrupted_on_error(void* self, void* socket, void* errorVal) {
    QSslServer_HandshakeInterruptedOnError((QSslServer*)self, (QSslSocket*)socket, (QSslError*)errorVal);
}

/// ``` QSslServer* self, void (*slot)(QSslServer*, QSslSocket*, QSslError*) ```
void q_sslserver_on_handshake_interrupted_on_error(void* self, void (*slot)(void*, void*, void*)) {
    QSslServer_Connect_HandshakeInterruptedOnError((QSslServer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#startedEncryptionHandshake)
///
/// ``` QSslServer* self, QSslSocket* socket ```
void q_sslserver_started_encryption_handshake(void* self, void* socket) {
    QSslServer_StartedEncryptionHandshake((QSslServer*)self, (QSslSocket*)socket);
}

/// ``` QSslServer* self, void (*slot)(QSslServer*, QSslSocket*) ```
void q_sslserver_on_started_encryption_handshake(void* self, void (*slot)(void*, void*)) {
    QSslServer_Connect_StartedEncryptionHandshake((QSslServer*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsslserver.html#incomingConnection)
///
/// ``` QSslServer* self, intptr_t socket ```
void q_sslserver_incoming_connection(void* self, intptr_t socket) {
    QSslServer_IncomingConnection((QSslServer*)self, socket);
}

/// Allows for overriding the related default method
///
/// ``` QSslServer* self, void (*slot)(QSslServer*, intptr_t) ```
void q_sslserver_on_incoming_connection(void* self, void (*slot)(void*, intptr_t)) {
    QSslServer_OnIncomingConnection((QSslServer*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QSslServer* self, intptr_t socket ```
void q_sslserver_qbase_incoming_connection(void* self, intptr_t socket) {
    QSslServer_QBaseIncomingConnection((QSslServer*)self, socket);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_sslserver_tr2(const char* s, const char* c) {
    libqt_string _str = QSslServer_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_sslserver_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSslServer_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
///
/// ``` QSslServer* self ```
bool q_sslserver_listen(void* self) {
    return QTcpServer_Listen((QTcpServer*)self);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#close)
///
/// ``` QSslServer* self ```
void q_sslserver_close(void* self) {
    QTcpServer_Close((QTcpServer*)self);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#isListening)
///
/// ``` QSslServer* self ```
bool q_sslserver_is_listening(void* self) {
    return QTcpServer_IsListening((QTcpServer*)self);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setMaxPendingConnections)
///
/// ``` QSslServer* self, int numConnections ```
void q_sslserver_set_max_pending_connections(void* self, int numConnections) {
    QTcpServer_SetMaxPendingConnections((QTcpServer*)self, numConnections);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#maxPendingConnections)
///
/// ``` QSslServer* self ```
int32_t q_sslserver_max_pending_connections(void* self) {
    return QTcpServer_MaxPendingConnections((QTcpServer*)self);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setListenBacklogSize)
///
/// ``` QSslServer* self, int size ```
void q_sslserver_set_listen_backlog_size(void* self, int size) {
    QTcpServer_SetListenBacklogSize((QTcpServer*)self, size);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listenBacklogSize)
///
/// ``` QSslServer* self ```
int32_t q_sslserver_listen_backlog_size(void* self) {
    return QTcpServer_ListenBacklogSize((QTcpServer*)self);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverPort)
///
/// ``` QSslServer* self ```
unsigned short q_sslserver_server_port(void* self) {
    return QTcpServer_ServerPort((QTcpServer*)self);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverAddress)
///
/// ``` QSslServer* self ```
QHostAddress* q_sslserver_server_address(void* self) {
    return QTcpServer_ServerAddress((QTcpServer*)self);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#socketDescriptor)
///
/// ``` QSslServer* self ```
intptr_t q_sslserver_socket_descriptor(void* self) {
    return QTcpServer_SocketDescriptor((QTcpServer*)self);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setSocketDescriptor)
///
/// ``` QSslServer* self, intptr_t socketDescriptor ```
bool q_sslserver_set_socket_descriptor(void* self, intptr_t socketDescriptor) {
    return QTcpServer_SetSocketDescriptor((QTcpServer*)self, socketDescriptor);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
///
/// ``` QSslServer* self ```
bool q_sslserver_wait_for_new_connection(void* self) {
    return QTcpServer_WaitForNewConnection((QTcpServer*)self);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#serverError)
///
/// ``` QSslServer* self ```
int64_t q_sslserver_server_error(void* self) {
    return QTcpServer_ServerError((QTcpServer*)self);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#errorString)
///
/// ``` QSslServer* self ```
const char* q_sslserver_error_string(void* self) {
    libqt_string _str = QTcpServer_ErrorString((QTcpServer*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#pauseAccepting)
///
/// ``` QSslServer* self ```
void q_sslserver_pause_accepting(void* self) {
    QTcpServer_PauseAccepting((QTcpServer*)self);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#resumeAccepting)
///
/// ``` QSslServer* self ```
void q_sslserver_resume_accepting(void* self) {
    QTcpServer_ResumeAccepting((QTcpServer*)self);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#setProxy)
///
/// ``` QSslServer* self, QNetworkProxy* networkProxy ```
void q_sslserver_set_proxy(void* self, void* networkProxy) {
    QTcpServer_SetProxy((QTcpServer*)self, (QNetworkProxy*)networkProxy);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#proxy)
///
/// ``` QSslServer* self ```
QNetworkProxy* q_sslserver_proxy(void* self) {
    return QTcpServer_Proxy((QTcpServer*)self);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#newConnection)
///
/// ``` QSslServer* self ```
void q_sslserver_new_connection(void* self) {
    QTcpServer_NewConnection((QTcpServer*)self);
}

/// Inherited from QTcpServer
///
/// ``` QSslServer* self, void (*slot)(QTcpServer*) ```
void q_sslserver_on_new_connection(void* self, void (*slot)(void*)) {
    QTcpServer_Connect_NewConnection((QTcpServer*)self, (intptr_t)slot);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#acceptError)
///
/// ``` QSslServer* self, enum QAbstractSocket__SocketError socketError ```
void q_sslserver_accept_error(void* self, int64_t socketError) {
    QTcpServer_AcceptError((QTcpServer*)self, socketError);
}

/// Inherited from QTcpServer
///
/// ``` QSslServer* self, void (*slot)(QTcpServer*, enum QAbstractSocket__SocketError) ```
void q_sslserver_on_accept_error(void* self, void (*slot)(void*, int64_t)) {
    QTcpServer_Connect_AcceptError((QTcpServer*)self, (intptr_t)slot);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
///
/// ``` QSslServer* self, QHostAddress* address ```
bool q_sslserver_listen1(void* self, void* address) {
    return QTcpServer_Listen1((QTcpServer*)self, (QHostAddress*)address);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#listen)
///
/// ``` QSslServer* self, QHostAddress* address, unsigned short port ```
bool q_sslserver_listen2(void* self, void* address, unsigned short port) {
    return QTcpServer_Listen2((QTcpServer*)self, (QHostAddress*)address, port);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
///
/// ``` QSslServer* self, int msec ```
bool q_sslserver_wait_for_new_connection1(void* self, int msec) {
    return QTcpServer_WaitForNewConnection1((QTcpServer*)self, msec);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#waitForNewConnection)
///
/// ``` QSslServer* self, int msec, bool* timedOut ```
bool q_sslserver_wait_for_new_connection2(void* self, int msec, bool* timedOut) {
    return QTcpServer_WaitForNewConnection2((QTcpServer*)self, msec, (bool*)timedOut);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QSslServer* self ```
const char* q_sslserver_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QSslServer* self, const char* name ```
void q_sslserver_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QSslServer* self ```
bool q_sslserver_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QSslServer* self ```
bool q_sslserver_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QSslServer* self ```
bool q_sslserver_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QSslServer* self ```
bool q_sslserver_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QSslServer* self, bool b ```
bool q_sslserver_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QSslServer* self ```
QThread* q_sslserver_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QSslServer* self, QThread* thread ```
void q_sslserver_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSslServer* self, int interval ```
int32_t q_sslserver_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QSslServer* self, int id ```
void q_sslserver_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QSslServer* self ```
libqt_list /* of QObject* */ q_sslserver_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QSslServer* self, QObject* parent ```
void q_sslserver_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QSslServer* self, QObject* filterObj ```
void q_sslserver_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QSslServer* self, QObject* obj ```
void q_sslserver_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_sslserver_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSslServer* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_sslserver_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_sslserver_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_sslserver_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QSslServer* self ```
void q_sslserver_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QSslServer* self ```
void q_sslserver_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QSslServer* self, const char* name, QVariant* value ```
bool q_sslserver_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QSslServer* self, const char* name ```
QVariant* q_sslserver_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QSslServer* self ```
const char** q_sslserver_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
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

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSslServer* self ```
QBindingStorage* q_sslserver_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QSslServer* self ```
QBindingStorage* q_sslserver_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSslServer* self ```
void q_sslserver_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QSslServer* self, void (*slot)(QObject*) ```
void q_sslserver_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QSslServer* self ```
QObject* q_sslserver_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QSslServer* self, const char* classname ```
bool q_sslserver_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QSslServer* self ```
void q_sslserver_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QSslServer* self, int interval, enum Qt__TimerType timerType ```
int32_t q_sslserver_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sslserver_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QSslServer* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_sslserver_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QSslServer* self, QObject* param1 ```
void q_sslserver_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QSslServer* self, void (*slot)(QObject*, QObject*) ```
void q_sslserver_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#hasPendingConnections)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslServer* self ```
bool q_sslserver_has_pending_connections(void* self) {
    return QSslServer_HasPendingConnections((QSslServer*)self);
}

/// Inherited from QTcpServer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslServer* self ```
bool q_sslserver_qbase_has_pending_connections(void* self) {
    return QSslServer_QBaseHasPendingConnections((QSslServer*)self);
}

/// Inherited from QTcpServer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslServer* self, bool (*slot)() ```
void q_sslserver_on_has_pending_connections(void* self, bool (*slot)()) {
    QSslServer_OnHasPendingConnections((QSslServer*)self, (intptr_t)slot);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#nextPendingConnection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslServer* self ```
QTcpSocket* q_sslserver_next_pending_connection(void* self) {
    return QSslServer_NextPendingConnection((QSslServer*)self);
}

/// Inherited from QTcpServer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslServer* self ```
QTcpSocket* q_sslserver_qbase_next_pending_connection(void* self) {
    return QSslServer_QBaseNextPendingConnection((QSslServer*)self);
}

/// Inherited from QTcpServer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslServer* self, QTcpSocket* (*slot)() ```
void q_sslserver_on_next_pending_connection(void* self, QTcpSocket* (*slot)()) {
    QSslServer_OnNextPendingConnection((QSslServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslServer* self, QEvent* event ```
bool q_sslserver_event(void* self, void* event) {
    return QSslServer_Event((QSslServer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslServer* self, QEvent* event ```
bool q_sslserver_qbase_event(void* self, void* event) {
    return QSslServer_QBaseEvent((QSslServer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslServer* self, bool (*slot)(QSslServer*, QEvent*) ```
void q_sslserver_on_event(void* self, bool (*slot)(void*, void*)) {
    QSslServer_OnEvent((QSslServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslServer* self, QObject* watched, QEvent* event ```
bool q_sslserver_event_filter(void* self, void* watched, void* event) {
    return QSslServer_EventFilter((QSslServer*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslServer* self, QObject* watched, QEvent* event ```
bool q_sslserver_qbase_event_filter(void* self, void* watched, void* event) {
    return QSslServer_QBaseEventFilter((QSslServer*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslServer* self, bool (*slot)(QSslServer*, QObject*, QEvent*) ```
void q_sslserver_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QSslServer_OnEventFilter((QSslServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslServer* self, QTimerEvent* event ```
void q_sslserver_timer_event(void* self, void* event) {
    QSslServer_TimerEvent((QSslServer*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslServer* self, QTimerEvent* event ```
void q_sslserver_qbase_timer_event(void* self, void* event) {
    QSslServer_QBaseTimerEvent((QSslServer*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslServer* self, void (*slot)(QSslServer*, QTimerEvent*) ```
void q_sslserver_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QSslServer_OnTimerEvent((QSslServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslServer* self, QChildEvent* event ```
void q_sslserver_child_event(void* self, void* event) {
    QSslServer_ChildEvent((QSslServer*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslServer* self, QChildEvent* event ```
void q_sslserver_qbase_child_event(void* self, void* event) {
    QSslServer_QBaseChildEvent((QSslServer*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslServer* self, void (*slot)(QSslServer*, QChildEvent*) ```
void q_sslserver_on_child_event(void* self, void (*slot)(void*, void*)) {
    QSslServer_OnChildEvent((QSslServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslServer* self, QEvent* event ```
void q_sslserver_custom_event(void* self, void* event) {
    QSslServer_CustomEvent((QSslServer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslServer* self, QEvent* event ```
void q_sslserver_qbase_custom_event(void* self, void* event) {
    QSslServer_QBaseCustomEvent((QSslServer*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslServer* self, void (*slot)(QSslServer*, QEvent*) ```
void q_sslserver_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QSslServer_OnCustomEvent((QSslServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslServer* self, QMetaMethod* signal ```
void q_sslserver_connect_notify(void* self, void* signal) {
    QSslServer_ConnectNotify((QSslServer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslServer* self, QMetaMethod* signal ```
void q_sslserver_qbase_connect_notify(void* self, void* signal) {
    QSslServer_QBaseConnectNotify((QSslServer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslServer* self, void (*slot)(QSslServer*, QMetaMethod*) ```
void q_sslserver_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QSslServer_OnConnectNotify((QSslServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslServer* self, QMetaMethod* signal ```
void q_sslserver_disconnect_notify(void* self, void* signal) {
    QSslServer_DisconnectNotify((QSslServer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslServer* self, QMetaMethod* signal ```
void q_sslserver_qbase_disconnect_notify(void* self, void* signal) {
    QSslServer_QBaseDisconnectNotify((QSslServer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslServer* self, void (*slot)(QSslServer*, QMetaMethod*) ```
void q_sslserver_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QSslServer_OnDisconnectNotify((QSslServer*)self, (intptr_t)slot);
}

/// Inherited from QTcpServer
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtcpserver.html#addPendingConnection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslServer* self, QTcpSocket* socket ```
void q_sslserver_add_pending_connection(void* self, void* socket) {
    QSslServer_AddPendingConnection((QSslServer*)self, (QTcpSocket*)socket);
}

/// Inherited from QTcpServer
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslServer* self, QTcpSocket* socket ```
void q_sslserver_qbase_add_pending_connection(void* self, void* socket) {
    QSslServer_QBaseAddPendingConnection((QSslServer*)self, (QTcpSocket*)socket);
}

/// Inherited from QTcpServer
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslServer* self, void (*slot)(QSslServer*, QTcpSocket*) ```
void q_sslserver_on_add_pending_connection(void* self, void (*slot)(void*, void*)) {
    QSslServer_OnAddPendingConnection((QSslServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslServer* self ```
QObject* q_sslserver_sender(void* self) {
    return QSslServer_Sender((QSslServer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslServer* self ```
QObject* q_sslserver_qbase_sender(void* self) {
    return QSslServer_QBaseSender((QSslServer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslServer* self, QObject* (*slot)() ```
void q_sslserver_on_sender(void* self, QObject* (*slot)()) {
    QSslServer_OnSender((QSslServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslServer* self ```
int32_t q_sslserver_sender_signal_index(void* self) {
    return QSslServer_SenderSignalIndex((QSslServer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslServer* self ```
int32_t q_sslserver_qbase_sender_signal_index(void* self) {
    return QSslServer_QBaseSenderSignalIndex((QSslServer*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslServer* self, int32_t (*slot)() ```
void q_sslserver_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QSslServer_OnSenderSignalIndex((QSslServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslServer* self, const char* signal ```
int32_t q_sslserver_receivers(void* self, const char* signal) {
    return QSslServer_Receivers((QSslServer*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslServer* self, const char* signal ```
int32_t q_sslserver_qbase_receivers(void* self, const char* signal) {
    return QSslServer_QBaseReceivers((QSslServer*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslServer* self, int32_t (*slot)(QSslServer*, const char*) ```
void q_sslserver_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QSslServer_OnReceivers((QSslServer*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QSslServer* self, QMetaMethod* signal ```
bool q_sslserver_is_signal_connected(void* self, void* signal) {
    return QSslServer_IsSignalConnected((QSslServer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QSslServer* self, QMetaMethod* signal ```
bool q_sslserver_qbase_is_signal_connected(void* self, void* signal) {
    return QSslServer_QBaseIsSignalConnected((QSslServer*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QSslServer* self, bool (*slot)(QSslServer*, QMetaMethod*) ```
void q_sslserver_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QSslServer_OnIsSignalConnected((QSslServer*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QSslServer* self ```
void q_sslserver_delete(void* self) {
    QSslServer_Delete((QSslServer*)(self));
}