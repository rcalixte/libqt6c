#include "libqabstractsocket.hpp"
#include "../libqanystringview.hpp"
#include "libqauthenticator.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "libqhostaddress.hpp"
#include "../libqiodevice.hpp"
#include "../libqiodevicebase.hpp"
#include "../libqmetaobject.hpp"
#include "libqnetworkdatagram.hpp"
#include "libqnetworkinterface.hpp"
#include "libqnetworkproxy.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqudpsocket.hpp"
#include "libqudpsocket.h"

/// https://doc.qt.io/qt-6/qudpsocket.html

/// q_udpsocket_new constructs a new QUdpSocket object.
///
///
QUdpSocket* q_udpsocket_new() {
    return QUdpSocket_new();
}

/// q_udpsocket_new2 constructs a new QUdpSocket object.
///
/// ``` QObject* parent ```
QUdpSocket* q_udpsocket_new2(void* parent) {
    return QUdpSocket_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QUdpSocket* self ```
QMetaObject* q_udpsocket_meta_object(void* self) {
    return QUdpSocket_MetaObject((QUdpSocket*)self);
}

/// ``` QUdpSocket* self, const char* param1 ```
void* q_udpsocket_metacast(void* self, const char* param1) {
    return QUdpSocket_Metacast((QUdpSocket*)self, param1);
}

/// ``` QUdpSocket* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_udpsocket_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QUdpSocket_Metacall((QUdpSocket*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QUdpSocket* self, int32_t (*slot)(QUdpSocket*, enum QMetaObject__Call, int, void*) ```
void q_udpsocket_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QUdpSocket_OnMetacall((QUdpSocket*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QUdpSocket* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_udpsocket_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QUdpSocket_QBaseMetacall((QUdpSocket*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_udpsocket_tr(const char* s) {
    libqt_string _str = QUdpSocket_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#bind)
///
/// ``` QUdpSocket* self, enum QHostAddress__SpecialAddress addr ```
bool q_udpsocket_bind(void* self, int64_t addr) {
    return QUdpSocket_Bind((QUdpSocket*)self, addr);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#joinMulticastGroup)
///
/// ``` QUdpSocket* self, QHostAddress* groupAddress ```
bool q_udpsocket_join_multicast_group(void* self, void* groupAddress) {
    return QUdpSocket_JoinMulticastGroup((QUdpSocket*)self, (QHostAddress*)groupAddress);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#joinMulticastGroup)
///
/// ``` QUdpSocket* self, QHostAddress* groupAddress, QNetworkInterface* iface ```
bool q_udpsocket_join_multicast_group2(void* self, void* groupAddress, void* iface) {
    return QUdpSocket_JoinMulticastGroup2((QUdpSocket*)self, (QHostAddress*)groupAddress, (QNetworkInterface*)iface);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#leaveMulticastGroup)
///
/// ``` QUdpSocket* self, QHostAddress* groupAddress ```
bool q_udpsocket_leave_multicast_group(void* self, void* groupAddress) {
    return QUdpSocket_LeaveMulticastGroup((QUdpSocket*)self, (QHostAddress*)groupAddress);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#leaveMulticastGroup)
///
/// ``` QUdpSocket* self, QHostAddress* groupAddress, QNetworkInterface* iface ```
bool q_udpsocket_leave_multicast_group2(void* self, void* groupAddress, void* iface) {
    return QUdpSocket_LeaveMulticastGroup2((QUdpSocket*)self, (QHostAddress*)groupAddress, (QNetworkInterface*)iface);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#multicastInterface)
///
/// ``` QUdpSocket* self ```
QNetworkInterface* q_udpsocket_multicast_interface(void* self) {
    return QUdpSocket_MulticastInterface((QUdpSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#setMulticastInterface)
///
/// ``` QUdpSocket* self, QNetworkInterface* iface ```
void q_udpsocket_set_multicast_interface(void* self, void* iface) {
    QUdpSocket_SetMulticastInterface((QUdpSocket*)self, (QNetworkInterface*)iface);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#hasPendingDatagrams)
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_has_pending_datagrams(void* self) {
    return QUdpSocket_HasPendingDatagrams((QUdpSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#pendingDatagramSize)
///
/// ``` QUdpSocket* self ```
long long q_udpsocket_pending_datagram_size(void* self) {
    return QUdpSocket_PendingDatagramSize((QUdpSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#receiveDatagram)
///
/// ``` QUdpSocket* self ```
QNetworkDatagram* q_udpsocket_receive_datagram(void* self) {
    return QUdpSocket_ReceiveDatagram((QUdpSocket*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#readDatagram)
///
/// ``` QUdpSocket* self, char* data, long long maxlen ```
long long q_udpsocket_read_datagram(void* self, char* data, long long maxlen) {
    return QUdpSocket_ReadDatagram((QUdpSocket*)self, data, maxlen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#writeDatagram)
///
/// ``` QUdpSocket* self, QNetworkDatagram* datagram ```
long long q_udpsocket_write_datagram(void* self, void* datagram) {
    return QUdpSocket_WriteDatagram((QUdpSocket*)self, (QNetworkDatagram*)datagram);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#writeDatagram)
///
/// ``` QUdpSocket* self, const char* data, long long lenVal, QHostAddress* host, unsigned short port ```
long long q_udpsocket_write_datagram2(void* self, const char* data, long long lenVal, void* host, unsigned short port) {
    return QUdpSocket_WriteDatagram2((QUdpSocket*)self, data, lenVal, (QHostAddress*)host, port);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#writeDatagram)
///
/// ``` QUdpSocket* self, const char* datagram, QHostAddress* host, unsigned short port ```
long long q_udpsocket_write_datagram3(void* self, const char* datagram, void* host, unsigned short port) {
    return QUdpSocket_WriteDatagram3((QUdpSocket*)self, qstring(datagram), (QHostAddress*)host, port);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_udpsocket_tr2(const char* s, const char* c) {
    libqt_string _str = QUdpSocket_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_udpsocket_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QUdpSocket_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#bind)
///
/// ``` QUdpSocket* self, enum QHostAddress__SpecialAddress addr, unsigned short port ```
bool q_udpsocket_bind2(void* self, int64_t addr, unsigned short port) {
    return QUdpSocket_Bind2((QUdpSocket*)self, addr, port);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#bind)
///
/// ``` QUdpSocket* self, enum QHostAddress__SpecialAddress addr, unsigned short port, int mode ```
bool q_udpsocket_bind3(void* self, int64_t addr, unsigned short port, int64_t mode) {
    return QUdpSocket_Bind3((QUdpSocket*)self, addr, port, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#receiveDatagram)
///
/// ``` QUdpSocket* self, long long maxSize ```
QNetworkDatagram* q_udpsocket_receive_datagram1(void* self, long long maxSize) {
    return QUdpSocket_ReceiveDatagram1((QUdpSocket*)self, maxSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#readDatagram)
///
/// ``` QUdpSocket* self, char* data, long long maxlen, QHostAddress* host ```
long long q_udpsocket_read_datagram3(void* self, char* data, long long maxlen, void* host) {
    return QUdpSocket_ReadDatagram3((QUdpSocket*)self, data, maxlen, (QHostAddress*)host);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qudpsocket.html#readDatagram)
///
/// ``` QUdpSocket* self, char* data, long long maxlen, QHostAddress* host, unsigned short* port ```
long long q_udpsocket_read_datagram4(void* self, char* data, long long maxlen, void* host, unsigned short* port) {
    return QUdpSocket_ReadDatagram4((QUdpSocket*)self, data, maxlen, (QHostAddress*)host, port);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#pauseMode)
///
/// ``` QUdpSocket* self ```
int64_t q_udpsocket_pause_mode(void* self) {
    return QAbstractSocket_PauseMode((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPauseMode)
///
/// ``` QUdpSocket* self, int pauseMode ```
void q_udpsocket_set_pause_mode(void* self, int64_t pauseMode) {
    QAbstractSocket_SetPauseMode((QAbstractSocket*)self, pauseMode);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// ``` QUdpSocket* self, QHostAddress* address, unsigned short port ```
void q_udpsocket_connect_to_host2(void* self, void* address, unsigned short port) {
    QAbstractSocket_ConnectToHost2((QAbstractSocket*)self, (QHostAddress*)address, port);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isValid)
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_is_valid(void* self) {
    return QAbstractSocket_IsValid((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#localPort)
///
/// ``` QUdpSocket* self ```
unsigned short q_udpsocket_local_port(void* self) {
    return QAbstractSocket_LocalPort((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#localAddress)
///
/// ``` QUdpSocket* self ```
QHostAddress* q_udpsocket_local_address(void* self) {
    return QAbstractSocket_LocalAddress((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerPort)
///
/// ``` QUdpSocket* self ```
unsigned short q_udpsocket_peer_port(void* self) {
    return QAbstractSocket_PeerPort((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerAddress)
///
/// ``` QUdpSocket* self ```
QHostAddress* q_udpsocket_peer_address(void* self) {
    return QAbstractSocket_PeerAddress((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#peerName)
///
/// ``` QUdpSocket* self ```
const char* q_udpsocket_peer_name(void* self) {
    libqt_string _str = QAbstractSocket_PeerName((QAbstractSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readBufferSize)
///
/// ``` QUdpSocket* self ```
long long q_udpsocket_read_buffer_size(void* self) {
    return QAbstractSocket_ReadBufferSize((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#abort)
///
/// ``` QUdpSocket* self ```
void q_udpsocket_abort(void* self) {
    QAbstractSocket_Abort((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketType)
///
/// ``` QUdpSocket* self ```
int64_t q_udpsocket_socket_type(void* self) {
    return QAbstractSocket_SocketType((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#state)
///
/// ``` QUdpSocket* self ```
int64_t q_udpsocket_state(void* self) {
    return QAbstractSocket_State((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#error)
///
/// ``` QUdpSocket* self ```
int64_t q_udpsocket_error(void* self) {
    return QAbstractSocket_Error((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#flush)
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_flush(void* self) {
    return QAbstractSocket_Flush((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setProxy)
///
/// ``` QUdpSocket* self, QNetworkProxy* networkProxy ```
void q_udpsocket_set_proxy(void* self, void* networkProxy) {
    QAbstractSocket_SetProxy((QAbstractSocket*)self, (QNetworkProxy*)networkProxy);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxy)
///
/// ``` QUdpSocket* self ```
QNetworkProxy* q_udpsocket_proxy(void* self) {
    return QAbstractSocket_Proxy((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#protocolTag)
///
/// ``` QUdpSocket* self ```
const char* q_udpsocket_protocol_tag(void* self) {
    libqt_string _str = QAbstractSocket_ProtocolTag((QAbstractSocket*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setProtocolTag)
///
/// ``` QUdpSocket* self, const char* tag ```
void q_udpsocket_set_protocol_tag(void* self, const char* tag) {
    QAbstractSocket_SetProtocolTag((QAbstractSocket*)self, qstring(tag));
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#hostFound)
///
/// ``` QUdpSocket* self ```
void q_udpsocket_host_found(void* self) {
    QAbstractSocket_HostFound((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// ``` QUdpSocket* self, void (*slot)(QAbstractSocket*) ```
void q_udpsocket_on_host_found(void* self, void (*slot)(void*)) {
    QAbstractSocket_Connect_HostFound((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connected)
///
/// ``` QUdpSocket* self ```
void q_udpsocket_connected(void* self) {
    QAbstractSocket_Connected((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// ``` QUdpSocket* self, void (*slot)(QAbstractSocket*) ```
void q_udpsocket_on_connected(void* self, void (*slot)(void*)) {
    QAbstractSocket_Connect_Connected((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnected)
///
/// ``` QUdpSocket* self ```
void q_udpsocket_disconnected(void* self) {
    QAbstractSocket_Disconnected((QAbstractSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// ``` QUdpSocket* self, void (*slot)(QAbstractSocket*) ```
void q_udpsocket_on_disconnected(void* self, void (*slot)(void*)) {
    QAbstractSocket_Connect_Disconnected((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#stateChanged)
///
/// ``` QUdpSocket* self, enum QAbstractSocket__SocketState param1 ```
void q_udpsocket_state_changed(void* self, int64_t param1) {
    QAbstractSocket_StateChanged((QAbstractSocket*)self, param1);
}

/// Inherited from QAbstractSocket
///
/// ``` QUdpSocket* self, void (*slot)(QAbstractSocket*, enum QAbstractSocket__SocketState) ```
void q_udpsocket_on_state_changed(void* self, void (*slot)(void*, int64_t)) {
    QAbstractSocket_Connect_StateChanged((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#errorOccurred)
///
/// ``` QUdpSocket* self, enum QAbstractSocket__SocketError param1 ```
void q_udpsocket_error_occurred(void* self, int64_t param1) {
    QAbstractSocket_ErrorOccurred((QAbstractSocket*)self, param1);
}

/// Inherited from QAbstractSocket
///
/// ``` QUdpSocket* self, void (*slot)(QAbstractSocket*, enum QAbstractSocket__SocketError) ```
void q_udpsocket_on_error_occurred(void* self, void (*slot)(void*, int64_t)) {
    QAbstractSocket_Connect_ErrorOccurred((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#proxyAuthenticationRequired)
///
/// ``` QUdpSocket* self, QNetworkProxy* proxy, QAuthenticator* authenticator ```
void q_udpsocket_proxy_authentication_required(void* self, void* proxy, void* authenticator) {
    QAbstractSocket_ProxyAuthenticationRequired((QAbstractSocket*)self, (QNetworkProxy*)proxy, (QAuthenticator*)authenticator);
}

/// Inherited from QAbstractSocket
///
/// ``` QUdpSocket* self, void (*slot)(QAbstractSocket*, QNetworkProxy*, QAuthenticator*) ```
void q_udpsocket_on_proxy_authentication_required(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractSocket_Connect_ProxyAuthenticationRequired((QAbstractSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// ``` QUdpSocket* self, unsigned short port ```
bool q_udpsocket_bind1(void* self, unsigned short port) {
    return QAbstractSocket_Bind1((QAbstractSocket*)self, port);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bind)
///
/// ``` QUdpSocket* self, unsigned short port, int mode ```
bool q_udpsocket_bind22(void* self, unsigned short port, int64_t mode) {
    return QAbstractSocket_Bind22((QAbstractSocket*)self, port, mode);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// ``` QUdpSocket* self, QHostAddress* address, unsigned short port, int mode ```
void q_udpsocket_connect_to_host3(void* self, void* address, unsigned short port, int64_t mode) {
    QAbstractSocket_ConnectToHost3((QAbstractSocket*)self, (QHostAddress*)address, port, mode);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#openMode)
///
/// ``` QUdpSocket* self ```
int64_t q_udpsocket_open_mode(void* self) {
    return QIODevice_OpenMode((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setTextModeEnabled)
///
/// ``` QUdpSocket* self, bool enabled ```
void q_udpsocket_set_text_mode_enabled(void* self, bool enabled) {
    QIODevice_SetTextModeEnabled((QIODevice*)self, enabled);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTextModeEnabled)
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_is_text_mode_enabled(void* self) {
    return QIODevice_IsTextModeEnabled((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isOpen)
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_is_open(void* self) {
    return QIODevice_IsOpen((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isReadable)
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_is_readable(void* self) {
    return QIODevice_IsReadable((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isWritable)
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_is_writable(void* self) {
    return QIODevice_IsWritable((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelCount)
///
/// ``` QUdpSocket* self ```
int32_t q_udpsocket_read_channel_count(void* self) {
    return QIODevice_ReadChannelCount((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#writeChannelCount)
///
/// ``` QUdpSocket* self ```
int32_t q_udpsocket_write_channel_count(void* self) {
    return QIODevice_WriteChannelCount((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentReadChannel)
///
/// ``` QUdpSocket* self ```
int32_t q_udpsocket_current_read_channel(void* self) {
    return QIODevice_CurrentReadChannel((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentReadChannel)
///
/// ``` QUdpSocket* self, int channel ```
void q_udpsocket_set_current_read_channel(void* self, int channel) {
    QIODevice_SetCurrentReadChannel((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#currentWriteChannel)
///
/// ``` QUdpSocket* self ```
int32_t q_udpsocket_current_write_channel(void* self) {
    return QIODevice_CurrentWriteChannel((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setCurrentWriteChannel)
///
/// ``` QUdpSocket* self, int channel ```
void q_udpsocket_set_current_write_channel(void* self, int channel) {
    QIODevice_SetCurrentWriteChannel((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QUdpSocket* self, char* data, long long maxlen ```
long long q_udpsocket_read(void* self, char* data, long long maxlen) {
    return QIODevice_Read((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#read)
///
/// ``` QUdpSocket* self, long long maxlen ```
char* q_udpsocket_read_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readAll)
///
/// ``` QUdpSocket* self ```
char* q_udpsocket_read_all(void* self) {
    libqt_string _str = QIODevice_ReadAll((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QUdpSocket* self, char* data, long long maxlen ```
long long q_udpsocket_read_line(void* self, char* data, long long maxlen) {
    return QIODevice_ReadLine((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QUdpSocket* self ```
char* q_udpsocket_read_line2(void* self) {
    libqt_string _str = QIODevice_ReadLine2((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#startTransaction)
///
/// ``` QUdpSocket* self ```
void q_udpsocket_start_transaction(void* self) {
    QIODevice_StartTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#commitTransaction)
///
/// ``` QUdpSocket* self ```
void q_udpsocket_commit_transaction(void* self) {
    QIODevice_CommitTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#rollbackTransaction)
///
/// ``` QUdpSocket* self ```
void q_udpsocket_rollback_transaction(void* self) {
    QIODevice_RollbackTransaction((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#isTransactionStarted)
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_is_transaction_started(void* self) {
    return QIODevice_IsTransactionStarted((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QUdpSocket* self, const char* data, long long lenVal ```
long long q_udpsocket_write(void* self, const char* data, long long lenVal) {
    return QIODevice_Write((QIODevice*)self, data, lenVal);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QUdpSocket* self, const char* data ```
long long q_udpsocket_write_with_data(void* self, const char* data) {
    return QIODevice_WriteWithData((QIODevice*)self, data);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#write)
///
/// ``` QUdpSocket* self, const char* data ```
long long q_udpsocket_write2(void* self, const char* data) {
    return QIODevice_Write2((QIODevice*)self, qstring(data));
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QUdpSocket* self, char* data, long long maxlen ```
long long q_udpsocket_peek(void* self, char* data, long long maxlen) {
    return QIODevice_Peek((QIODevice*)self, data, maxlen);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#peek)
///
/// ``` QUdpSocket* self, long long maxlen ```
char* q_udpsocket_peek_with_maxlen(void* self, long long maxlen) {
    libqt_string _str = QIODevice_PeekWithMaxlen((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#skip)
///
/// ``` QUdpSocket* self, long long maxSize ```
long long q_udpsocket_skip(void* self, long long maxSize) {
    return QIODevice_Skip((QIODevice*)self, maxSize);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#ungetChar)
///
/// ``` QUdpSocket* self, char c ```
void q_udpsocket_unget_char(void* self, char c) {
    QIODevice_UngetChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#putChar)
///
/// ``` QUdpSocket* self, char c ```
bool q_udpsocket_put_char(void* self, char c) {
    return QIODevice_PutChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#getChar)
///
/// ``` QUdpSocket* self, char* c ```
bool q_udpsocket_get_char(void* self, char* c) {
    return QIODevice_GetChar((QIODevice*)self, c);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#errorString)
///
/// ``` QUdpSocket* self ```
const char* q_udpsocket_error_string(void* self) {
    libqt_string _str = QIODevice_ErrorString((QIODevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readyRead)
///
/// ``` QUdpSocket* self ```
void q_udpsocket_ready_read(void* self) {
    QIODevice_ReadyRead((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QUdpSocket* self, void (*slot)(QIODevice*) ```
void q_udpsocket_on_ready_read(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadyRead((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelReadyRead)
///
/// ``` QUdpSocket* self, int channel ```
void q_udpsocket_channel_ready_read(void* self, int channel) {
    QIODevice_ChannelReadyRead((QIODevice*)self, channel);
}

/// Inherited from QIODevice
///
/// ``` QUdpSocket* self, void (*slot)(QIODevice*, int) ```
void q_udpsocket_on_channel_ready_read(void* self, void (*slot)(void*, int)) {
    QIODevice_Connect_ChannelReadyRead((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#bytesWritten)
///
/// ``` QUdpSocket* self, long long bytes ```
void q_udpsocket_bytes_written(void* self, long long bytes) {
    QIODevice_BytesWritten((QIODevice*)self, bytes);
}

/// Inherited from QIODevice
///
/// ``` QUdpSocket* self, void (*slot)(QIODevice*, long long) ```
void q_udpsocket_on_bytes_written(void* self, void (*slot)(void*, long long)) {
    QIODevice_Connect_BytesWritten((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#channelBytesWritten)
///
/// ``` QUdpSocket* self, int channel, long long bytes ```
void q_udpsocket_channel_bytes_written(void* self, int channel, long long bytes) {
    QIODevice_ChannelBytesWritten((QIODevice*)self, channel, bytes);
}

/// Inherited from QIODevice
///
/// ``` QUdpSocket* self, void (*slot)(QIODevice*, int, long long) ```
void q_udpsocket_on_channel_bytes_written(void* self, void (*slot)(void*, int, long long)) {
    QIODevice_Connect_ChannelBytesWritten((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#aboutToClose)
///
/// ``` QUdpSocket* self ```
void q_udpsocket_about_to_close(void* self) {
    QIODevice_AboutToClose((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QUdpSocket* self, void (*slot)(QIODevice*) ```
void q_udpsocket_on_about_to_close(void* self, void (*slot)(void*)) {
    QIODevice_Connect_AboutToClose((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readChannelFinished)
///
/// ``` QUdpSocket* self ```
void q_udpsocket_read_channel_finished(void* self) {
    QIODevice_ReadChannelFinished((QIODevice*)self);
}

/// Inherited from QIODevice
///
/// ``` QUdpSocket* self, void (*slot)(QIODevice*) ```
void q_udpsocket_on_read_channel_finished(void* self, void (*slot)(void*)) {
    QIODevice_Connect_ReadChannelFinished((QIODevice*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#readLine)
///
/// ``` QUdpSocket* self, long long maxlen ```
char* q_udpsocket_read_line1(void* self, long long maxlen) {
    libqt_string _str = QIODevice_ReadLine1((QIODevice*)self, maxlen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QUdpSocket* self ```
const char* q_udpsocket_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QUdpSocket* self, const char* name ```
void q_udpsocket_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QUdpSocket* self, bool b ```
bool q_udpsocket_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QUdpSocket* self ```
QThread* q_udpsocket_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QUdpSocket* self, QThread* thread ```
void q_udpsocket_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QUdpSocket* self, int interval ```
int32_t q_udpsocket_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QUdpSocket* self, int id ```
void q_udpsocket_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QUdpSocket* self ```
libqt_list /* of QObject* */ q_udpsocket_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QUdpSocket* self, QObject* parent ```
void q_udpsocket_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QUdpSocket* self, QObject* filterObj ```
void q_udpsocket_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QUdpSocket* self, QObject* obj ```
void q_udpsocket_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_udpsocket_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QUdpSocket* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_udpsocket_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_udpsocket_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_udpsocket_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QUdpSocket* self ```
void q_udpsocket_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QUdpSocket* self ```
void q_udpsocket_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QUdpSocket* self, const char* name, QVariant* value ```
bool q_udpsocket_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QUdpSocket* self, const char* name ```
QVariant* q_udpsocket_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QUdpSocket* self ```
const char** q_udpsocket_dynamic_property_names(void* self) {
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
/// ``` QUdpSocket* self ```
QBindingStorage* q_udpsocket_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QUdpSocket* self ```
QBindingStorage* q_udpsocket_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QUdpSocket* self ```
void q_udpsocket_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QUdpSocket* self, void (*slot)(QObject*) ```
void q_udpsocket_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QUdpSocket* self ```
QObject* q_udpsocket_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QUdpSocket* self, const char* classname ```
bool q_udpsocket_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QUdpSocket* self ```
void q_udpsocket_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QUdpSocket* self, int interval, enum Qt__TimerType timerType ```
int32_t q_udpsocket_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_udpsocket_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QUdpSocket* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_udpsocket_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QUdpSocket* self, QObject* param1 ```
void q_udpsocket_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QUdpSocket* self, void (*slot)(QObject*, QObject*) ```
void q_udpsocket_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#resume)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self ```
void q_udpsocket_resume(void* self) {
    QUdpSocket_Resume((QUdpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self ```
void q_udpsocket_qbase_resume(void* self) {
    QUdpSocket_QBaseResume((QUdpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)() ```
void q_udpsocket_on_resume(void* self, void (*slot)()) {
    QUdpSocket_OnResume((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#connectToHost)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, const char* hostName, unsigned short port, int mode, enum QAbstractSocket__NetworkLayerProtocol protocol ```
void q_udpsocket_connect_to_host(void* self, const char* hostName, unsigned short port, int64_t mode, int64_t protocol) {
    QUdpSocket_ConnectToHost((QUdpSocket*)self, qstring(hostName), port, mode, protocol);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, const char* hostName, unsigned short port, int mode, enum QAbstractSocket__NetworkLayerProtocol protocol ```
void q_udpsocket_qbase_connect_to_host(void* self, const char* hostName, unsigned short port, int64_t mode, int64_t protocol) {
    QUdpSocket_QBaseConnectToHost((QUdpSocket*)self, qstring(hostName), port, mode, protocol);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, const char*, unsigned short, int, enum QAbstractSocket__NetworkLayerProtocol) ```
void q_udpsocket_on_connect_to_host(void* self, void (*slot)(void*, const char*, unsigned short, int64_t, int64_t)) {
    QUdpSocket_OnConnectToHost((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#disconnectFromHost)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self ```
void q_udpsocket_disconnect_from_host(void* self) {
    QUdpSocket_DisconnectFromHost((QUdpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self ```
void q_udpsocket_qbase_disconnect_from_host(void* self) {
    QUdpSocket_QBaseDisconnectFromHost((QUdpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)() ```
void q_udpsocket_on_disconnect_from_host(void* self, void (*slot)()) {
    QUdpSocket_OnDisconnectFromHost((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesAvailable)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self ```
long long q_udpsocket_bytes_available(void* self) {
    return QUdpSocket_BytesAvailable((QUdpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self ```
long long q_udpsocket_qbase_bytes_available(void* self) {
    return QUdpSocket_QBaseBytesAvailable((QUdpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, long long (*slot)() ```
void q_udpsocket_on_bytes_available(void* self, long long (*slot)()) {
    QUdpSocket_OnBytesAvailable((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#bytesToWrite)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self ```
long long q_udpsocket_bytes_to_write(void* self) {
    return QUdpSocket_BytesToWrite((QUdpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self ```
long long q_udpsocket_qbase_bytes_to_write(void* self) {
    return QUdpSocket_QBaseBytesToWrite((QUdpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, long long (*slot)() ```
void q_udpsocket_on_bytes_to_write(void* self, long long (*slot)()) {
    QUdpSocket_OnBytesToWrite((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setReadBufferSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, long long size ```
void q_udpsocket_set_read_buffer_size(void* self, long long size) {
    QUdpSocket_SetReadBufferSize((QUdpSocket*)self, size);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, long long size ```
void q_udpsocket_qbase_set_read_buffer_size(void* self, long long size) {
    QUdpSocket_QBaseSetReadBufferSize((QUdpSocket*)self, size);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, long long) ```
void q_udpsocket_on_set_read_buffer_size(void* self, void (*slot)(void*, long long)) {
    QUdpSocket_OnSetReadBufferSize((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketDescriptor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self ```
intptr_t q_udpsocket_socket_descriptor(void* self) {
    return QUdpSocket_SocketDescriptor((QUdpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self ```
intptr_t q_udpsocket_qbase_socket_descriptor(void* self) {
    return QUdpSocket_QBaseSocketDescriptor((QUdpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, intptr_t (*slot)() ```
void q_udpsocket_on_socket_descriptor(void* self, intptr_t (*slot)()) {
    QUdpSocket_OnSocketDescriptor((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketDescriptor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, intptr_t socketDescriptor, enum QAbstractSocket__SocketState state, int openMode ```
bool q_udpsocket_set_socket_descriptor(void* self, intptr_t socketDescriptor, int64_t state, int64_t openMode) {
    return QUdpSocket_SetSocketDescriptor((QUdpSocket*)self, socketDescriptor, state, openMode);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, intptr_t socketDescriptor, enum QAbstractSocket__SocketState state, int openMode ```
bool q_udpsocket_qbase_set_socket_descriptor(void* self, intptr_t socketDescriptor, int64_t state, int64_t openMode) {
    return QUdpSocket_QBaseSetSocketDescriptor((QUdpSocket*)self, socketDescriptor, state, openMode);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, bool (*slot)(QUdpSocket*, intptr_t, enum QAbstractSocket__SocketState, int) ```
void q_udpsocket_on_set_socket_descriptor(void* self, bool (*slot)(void*, intptr_t, int64_t, int64_t)) {
    QUdpSocket_OnSetSocketDescriptor((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, enum QAbstractSocket__SocketOption option, QVariant* value ```
void q_udpsocket_set_socket_option(void* self, int64_t option, void* value) {
    QUdpSocket_SetSocketOption((QUdpSocket*)self, option, (QVariant*)value);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, enum QAbstractSocket__SocketOption option, QVariant* value ```
void q_udpsocket_qbase_set_socket_option(void* self, int64_t option, void* value) {
    QUdpSocket_QBaseSetSocketOption((QUdpSocket*)self, option, (QVariant*)value);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, enum QAbstractSocket__SocketOption, QVariant*) ```
void q_udpsocket_on_set_socket_option(void* self, void (*slot)(void*, int64_t, void*)) {
    QUdpSocket_OnSetSocketOption((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#socketOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, enum QAbstractSocket__SocketOption option ```
QVariant* q_udpsocket_socket_option(void* self, int64_t option) {
    return QUdpSocket_SocketOption((QUdpSocket*)self, option);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, enum QAbstractSocket__SocketOption option ```
QVariant* q_udpsocket_qbase_socket_option(void* self, int64_t option) {
    return QUdpSocket_QBaseSocketOption((QUdpSocket*)self, option);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, QVariant* (*slot)(QUdpSocket*, enum QAbstractSocket__SocketOption) ```
void q_udpsocket_on_socket_option(void* self, QVariant* (*slot)(void*, int64_t)) {
    QUdpSocket_OnSocketOption((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#close)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self ```
void q_udpsocket_close(void* self) {
    QUdpSocket_Close((QUdpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self ```
void q_udpsocket_qbase_close(void* self) {
    QUdpSocket_QBaseClose((QUdpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)() ```
void q_udpsocket_on_close(void* self, void (*slot)()) {
    QUdpSocket_OnClose((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#isSequential)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_is_sequential(void* self) {
    return QUdpSocket_IsSequential((QUdpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_qbase_is_sequential(void* self) {
    return QUdpSocket_QBaseIsSequential((QUdpSocket*)self);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, bool (*slot)() ```
void q_udpsocket_on_is_sequential(void* self, bool (*slot)()) {
    QUdpSocket_OnIsSequential((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, int msecs ```
bool q_udpsocket_wait_for_connected(void* self, int msecs) {
    return QUdpSocket_WaitForConnected((QUdpSocket*)self, msecs);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, int msecs ```
bool q_udpsocket_qbase_wait_for_connected(void* self, int msecs) {
    return QUdpSocket_QBaseWaitForConnected((QUdpSocket*)self, msecs);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, bool (*slot)(QUdpSocket*, int) ```
void q_udpsocket_on_wait_for_connected(void* self, bool (*slot)(void*, int)) {
    QUdpSocket_OnWaitForConnected((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForReadyRead)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, int msecs ```
bool q_udpsocket_wait_for_ready_read(void* self, int msecs) {
    return QUdpSocket_WaitForReadyRead((QUdpSocket*)self, msecs);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, int msecs ```
bool q_udpsocket_qbase_wait_for_ready_read(void* self, int msecs) {
    return QUdpSocket_QBaseWaitForReadyRead((QUdpSocket*)self, msecs);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, bool (*slot)(QUdpSocket*, int) ```
void q_udpsocket_on_wait_for_ready_read(void* self, bool (*slot)(void*, int)) {
    QUdpSocket_OnWaitForReadyRead((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForBytesWritten)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, int msecs ```
bool q_udpsocket_wait_for_bytes_written(void* self, int msecs) {
    return QUdpSocket_WaitForBytesWritten((QUdpSocket*)self, msecs);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, int msecs ```
bool q_udpsocket_qbase_wait_for_bytes_written(void* self, int msecs) {
    return QUdpSocket_QBaseWaitForBytesWritten((QUdpSocket*)self, msecs);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, bool (*slot)(QUdpSocket*, int) ```
void q_udpsocket_on_wait_for_bytes_written(void* self, bool (*slot)(void*, int)) {
    QUdpSocket_OnWaitForBytesWritten((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#waitForDisconnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, int msecs ```
bool q_udpsocket_wait_for_disconnected(void* self, int msecs) {
    return QUdpSocket_WaitForDisconnected((QUdpSocket*)self, msecs);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, int msecs ```
bool q_udpsocket_qbase_wait_for_disconnected(void* self, int msecs) {
    return QUdpSocket_QBaseWaitForDisconnected((QUdpSocket*)self, msecs);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, bool (*slot)(QUdpSocket*, int) ```
void q_udpsocket_on_wait_for_disconnected(void* self, bool (*slot)(void*, int)) {
    QUdpSocket_OnWaitForDisconnected((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, char* data, long long maxlen ```
long long q_udpsocket_read_data(void* self, char* data, long long maxlen) {
    return QUdpSocket_ReadData((QUdpSocket*)self, data, maxlen);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, char* data, long long maxlen ```
long long q_udpsocket_qbase_read_data(void* self, char* data, long long maxlen) {
    return QUdpSocket_QBaseReadData((QUdpSocket*)self, data, maxlen);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, long long (*slot)(QUdpSocket*, char*, long long) ```
void q_udpsocket_on_read_data(void* self, long long (*slot)(void*, char*, long long)) {
    QUdpSocket_OnReadData((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#readLineData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, char* data, long long maxlen ```
long long q_udpsocket_read_line_data(void* self, char* data, long long maxlen) {
    return QUdpSocket_ReadLineData((QUdpSocket*)self, data, maxlen);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, char* data, long long maxlen ```
long long q_udpsocket_qbase_read_line_data(void* self, char* data, long long maxlen) {
    return QUdpSocket_QBaseReadLineData((QUdpSocket*)self, data, maxlen);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, long long (*slot)(QUdpSocket*, char*, long long) ```
void q_udpsocket_on_read_line_data(void* self, long long (*slot)(void*, char*, long long)) {
    QUdpSocket_OnReadLineData((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#skipData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, long long maxSize ```
long long q_udpsocket_skip_data(void* self, long long maxSize) {
    return QUdpSocket_SkipData((QUdpSocket*)self, maxSize);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, long long maxSize ```
long long q_udpsocket_qbase_skip_data(void* self, long long maxSize) {
    return QUdpSocket_QBaseSkipData((QUdpSocket*)self, maxSize);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, long long (*slot)(QUdpSocket*, long long) ```
void q_udpsocket_on_skip_data(void* self, long long (*slot)(void*, long long)) {
    QUdpSocket_OnSkipData((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#writeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, const char* data, long long lenVal ```
long long q_udpsocket_write_data(void* self, const char* data, long long lenVal) {
    return QUdpSocket_WriteData((QUdpSocket*)self, data, lenVal);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, const char* data, long long lenVal ```
long long q_udpsocket_qbase_write_data(void* self, const char* data, long long lenVal) {
    return QUdpSocket_QBaseWriteData((QUdpSocket*)self, data, lenVal);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, long long (*slot)(QUdpSocket*, const char*, long long) ```
void q_udpsocket_on_write_data(void* self, long long (*slot)(void*, const char*, long long)) {
    QUdpSocket_OnWriteData((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#open)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, int mode ```
bool q_udpsocket_open(void* self, int64_t mode) {
    return QUdpSocket_Open((QUdpSocket*)self, mode);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, int mode ```
bool q_udpsocket_qbase_open(void* self, int64_t mode) {
    return QUdpSocket_QBaseOpen((QUdpSocket*)self, mode);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, bool (*slot)(QUdpSocket*, int) ```
void q_udpsocket_on_open(void* self, bool (*slot)(void*, int64_t)) {
    QUdpSocket_OnOpen((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#pos)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self ```
long long q_udpsocket_pos(void* self) {
    return QUdpSocket_Pos((QUdpSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self ```
long long q_udpsocket_qbase_pos(void* self) {
    return QUdpSocket_QBasePos((QUdpSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, long long (*slot)() ```
void q_udpsocket_on_pos(void* self, long long (*slot)()) {
    QUdpSocket_OnPos((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#size)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self ```
long long q_udpsocket_size(void* self) {
    return QUdpSocket_Size((QUdpSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self ```
long long q_udpsocket_qbase_size(void* self) {
    return QUdpSocket_QBaseSize((QUdpSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, long long (*slot)() ```
void q_udpsocket_on_size(void* self, long long (*slot)()) {
    QUdpSocket_OnSize((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#seek)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, long long pos ```
bool q_udpsocket_seek(void* self, long long pos) {
    return QUdpSocket_Seek((QUdpSocket*)self, pos);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, long long pos ```
bool q_udpsocket_qbase_seek(void* self, long long pos) {
    return QUdpSocket_QBaseSeek((QUdpSocket*)self, pos);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, bool (*slot)(QUdpSocket*, long long) ```
void q_udpsocket_on_seek(void* self, bool (*slot)(void*, long long)) {
    QUdpSocket_OnSeek((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#atEnd)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_at_end(void* self) {
    return QUdpSocket_AtEnd((QUdpSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_qbase_at_end(void* self) {
    return QUdpSocket_QBaseAtEnd((QUdpSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, bool (*slot)() ```
void q_udpsocket_on_at_end(void* self, bool (*slot)()) {
    QUdpSocket_OnAtEnd((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_reset(void* self) {
    return QUdpSocket_Reset((QUdpSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_qbase_reset(void* self) {
    return QUdpSocket_QBaseReset((QUdpSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, bool (*slot)() ```
void q_udpsocket_on_reset(void* self, bool (*slot)()) {
    QUdpSocket_OnReset((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#canReadLine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_can_read_line(void* self) {
    return QUdpSocket_CanReadLine((QUdpSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self ```
bool q_udpsocket_qbase_can_read_line(void* self) {
    return QUdpSocket_QBaseCanReadLine((QUdpSocket*)self);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, bool (*slot)() ```
void q_udpsocket_on_can_read_line(void* self, bool (*slot)()) {
    QUdpSocket_OnCanReadLine((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, QEvent* event ```
bool q_udpsocket_event(void* self, void* event) {
    return QUdpSocket_Event((QUdpSocket*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, QEvent* event ```
bool q_udpsocket_qbase_event(void* self, void* event) {
    return QUdpSocket_QBaseEvent((QUdpSocket*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, bool (*slot)(QUdpSocket*, QEvent*) ```
void q_udpsocket_on_event(void* self, bool (*slot)(void*, void*)) {
    QUdpSocket_OnEvent((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, QObject* watched, QEvent* event ```
bool q_udpsocket_event_filter(void* self, void* watched, void* event) {
    return QUdpSocket_EventFilter((QUdpSocket*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, QObject* watched, QEvent* event ```
bool q_udpsocket_qbase_event_filter(void* self, void* watched, void* event) {
    return QUdpSocket_QBaseEventFilter((QUdpSocket*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, bool (*slot)(QUdpSocket*, QObject*, QEvent*) ```
void q_udpsocket_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QUdpSocket_OnEventFilter((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, QTimerEvent* event ```
void q_udpsocket_timer_event(void* self, void* event) {
    QUdpSocket_TimerEvent((QUdpSocket*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, QTimerEvent* event ```
void q_udpsocket_qbase_timer_event(void* self, void* event) {
    QUdpSocket_QBaseTimerEvent((QUdpSocket*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, QTimerEvent*) ```
void q_udpsocket_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QUdpSocket_OnTimerEvent((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, QChildEvent* event ```
void q_udpsocket_child_event(void* self, void* event) {
    QUdpSocket_ChildEvent((QUdpSocket*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, QChildEvent* event ```
void q_udpsocket_qbase_child_event(void* self, void* event) {
    QUdpSocket_QBaseChildEvent((QUdpSocket*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, QChildEvent*) ```
void q_udpsocket_on_child_event(void* self, void (*slot)(void*, void*)) {
    QUdpSocket_OnChildEvent((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, QEvent* event ```
void q_udpsocket_custom_event(void* self, void* event) {
    QUdpSocket_CustomEvent((QUdpSocket*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, QEvent* event ```
void q_udpsocket_qbase_custom_event(void* self, void* event) {
    QUdpSocket_QBaseCustomEvent((QUdpSocket*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, QEvent*) ```
void q_udpsocket_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QUdpSocket_OnCustomEvent((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, QMetaMethod* signal ```
void q_udpsocket_connect_notify(void* self, void* signal) {
    QUdpSocket_ConnectNotify((QUdpSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, QMetaMethod* signal ```
void q_udpsocket_qbase_connect_notify(void* self, void* signal) {
    QUdpSocket_QBaseConnectNotify((QUdpSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, QMetaMethod*) ```
void q_udpsocket_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QUdpSocket_OnConnectNotify((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, QMetaMethod* signal ```
void q_udpsocket_disconnect_notify(void* self, void* signal) {
    QUdpSocket_DisconnectNotify((QUdpSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, QMetaMethod* signal ```
void q_udpsocket_qbase_disconnect_notify(void* self, void* signal) {
    QUdpSocket_QBaseDisconnectNotify((QUdpSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, QMetaMethod*) ```
void q_udpsocket_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QUdpSocket_OnDisconnectNotify((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketState)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, enum QAbstractSocket__SocketState state ```
void q_udpsocket_set_socket_state(void* self, int64_t state) {
    QUdpSocket_SetSocketState((QUdpSocket*)self, state);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, enum QAbstractSocket__SocketState state ```
void q_udpsocket_qbase_set_socket_state(void* self, int64_t state) {
    QUdpSocket_QBaseSetSocketState((QUdpSocket*)self, state);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, enum QAbstractSocket__SocketState) ```
void q_udpsocket_on_set_socket_state(void* self, void (*slot)(void*, int64_t)) {
    QUdpSocket_OnSetSocketState((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setSocketError)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, enum QAbstractSocket__SocketError socketError ```
void q_udpsocket_set_socket_error(void* self, int64_t socketError) {
    QUdpSocket_SetSocketError((QUdpSocket*)self, socketError);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, enum QAbstractSocket__SocketError socketError ```
void q_udpsocket_qbase_set_socket_error(void* self, int64_t socketError) {
    QUdpSocket_QBaseSetSocketError((QUdpSocket*)self, socketError);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, enum QAbstractSocket__SocketError) ```
void q_udpsocket_on_set_socket_error(void* self, void (*slot)(void*, int64_t)) {
    QUdpSocket_OnSetSocketError((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalPort)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, unsigned short port ```
void q_udpsocket_set_local_port(void* self, unsigned short port) {
    QUdpSocket_SetLocalPort((QUdpSocket*)self, port);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, unsigned short port ```
void q_udpsocket_qbase_set_local_port(void* self, unsigned short port) {
    QUdpSocket_QBaseSetLocalPort((QUdpSocket*)self, port);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, unsigned short) ```
void q_udpsocket_on_set_local_port(void* self, void (*slot)(void*, unsigned short)) {
    QUdpSocket_OnSetLocalPort((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setLocalAddress)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, QHostAddress* address ```
void q_udpsocket_set_local_address(void* self, void* address) {
    QUdpSocket_SetLocalAddress((QUdpSocket*)self, (QHostAddress*)address);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, QHostAddress* address ```
void q_udpsocket_qbase_set_local_address(void* self, void* address) {
    QUdpSocket_QBaseSetLocalAddress((QUdpSocket*)self, (QHostAddress*)address);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, QHostAddress*) ```
void q_udpsocket_on_set_local_address(void* self, void (*slot)(void*, void*)) {
    QUdpSocket_OnSetLocalAddress((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerPort)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, unsigned short port ```
void q_udpsocket_set_peer_port(void* self, unsigned short port) {
    QUdpSocket_SetPeerPort((QUdpSocket*)self, port);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, unsigned short port ```
void q_udpsocket_qbase_set_peer_port(void* self, unsigned short port) {
    QUdpSocket_QBaseSetPeerPort((QUdpSocket*)self, port);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, unsigned short) ```
void q_udpsocket_on_set_peer_port(void* self, void (*slot)(void*, unsigned short)) {
    QUdpSocket_OnSetPeerPort((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerAddress)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, QHostAddress* address ```
void q_udpsocket_set_peer_address(void* self, void* address) {
    QUdpSocket_SetPeerAddress((QUdpSocket*)self, (QHostAddress*)address);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, QHostAddress* address ```
void q_udpsocket_qbase_set_peer_address(void* self, void* address) {
    QUdpSocket_QBaseSetPeerAddress((QUdpSocket*)self, (QHostAddress*)address);
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, QHostAddress*) ```
void q_udpsocket_on_set_peer_address(void* self, void (*slot)(void*, void*)) {
    QUdpSocket_OnSetPeerAddress((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSocket
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractsocket.html#setPeerName)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, const char* name ```
void q_udpsocket_set_peer_name(void* self, const char* name) {
    QUdpSocket_SetPeerName((QUdpSocket*)self, qstring(name));
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, const char* name ```
void q_udpsocket_qbase_set_peer_name(void* self, const char* name) {
    QUdpSocket_QBaseSetPeerName((QUdpSocket*)self, qstring(name));
}

/// Inherited from QAbstractSocket
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, const char*) ```
void q_udpsocket_on_set_peer_name(void* self, void (*slot)(void*, const char*)) {
    QUdpSocket_OnSetPeerName((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setOpenMode)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, int openMode ```
void q_udpsocket_set_open_mode(void* self, int64_t openMode) {
    QUdpSocket_SetOpenMode((QUdpSocket*)self, openMode);
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, int openMode ```
void q_udpsocket_qbase_set_open_mode(void* self, int64_t openMode) {
    QUdpSocket_QBaseSetOpenMode((QUdpSocket*)self, openMode);
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, int) ```
void q_udpsocket_on_set_open_mode(void* self, void (*slot)(void*, int64_t)) {
    QUdpSocket_OnSetOpenMode((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QIODevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qiodevice.html#setErrorString)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, const char* errorString ```
void q_udpsocket_set_error_string(void* self, const char* errorString) {
    QUdpSocket_SetErrorString((QUdpSocket*)self, qstring(errorString));
}

/// Inherited from QIODevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, const char* errorString ```
void q_udpsocket_qbase_set_error_string(void* self, const char* errorString) {
    QUdpSocket_QBaseSetErrorString((QUdpSocket*)self, qstring(errorString));
}

/// Inherited from QIODevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, void (*slot)(QUdpSocket*, const char*) ```
void q_udpsocket_on_set_error_string(void* self, void (*slot)(void*, const char*)) {
    QUdpSocket_OnSetErrorString((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self ```
QObject* q_udpsocket_sender(void* self) {
    return QUdpSocket_Sender((QUdpSocket*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self ```
QObject* q_udpsocket_qbase_sender(void* self) {
    return QUdpSocket_QBaseSender((QUdpSocket*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, QObject* (*slot)() ```
void q_udpsocket_on_sender(void* self, QObject* (*slot)()) {
    QUdpSocket_OnSender((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self ```
int32_t q_udpsocket_sender_signal_index(void* self) {
    return QUdpSocket_SenderSignalIndex((QUdpSocket*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self ```
int32_t q_udpsocket_qbase_sender_signal_index(void* self) {
    return QUdpSocket_QBaseSenderSignalIndex((QUdpSocket*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, int32_t (*slot)() ```
void q_udpsocket_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QUdpSocket_OnSenderSignalIndex((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, const char* signal ```
int32_t q_udpsocket_receivers(void* self, const char* signal) {
    return QUdpSocket_Receivers((QUdpSocket*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, const char* signal ```
int32_t q_udpsocket_qbase_receivers(void* self, const char* signal) {
    return QUdpSocket_QBaseReceivers((QUdpSocket*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, int32_t (*slot)(QUdpSocket*, const char*) ```
void q_udpsocket_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QUdpSocket_OnReceivers((QUdpSocket*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUdpSocket* self, QMetaMethod* signal ```
bool q_udpsocket_is_signal_connected(void* self, void* signal) {
    return QUdpSocket_IsSignalConnected((QUdpSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUdpSocket* self, QMetaMethod* signal ```
bool q_udpsocket_qbase_is_signal_connected(void* self, void* signal) {
    return QUdpSocket_QBaseIsSignalConnected((QUdpSocket*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUdpSocket* self, bool (*slot)(QUdpSocket*, QMetaMethod*) ```
void q_udpsocket_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QUdpSocket_OnIsSignalConnected((QUdpSocket*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QUdpSocket* self ```
void q_udpsocket_delete(void* self) {
    QUdpSocket_Delete((QUdpSocket*)(self));
}