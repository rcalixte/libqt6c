#include "libqhostaddress.hpp"
#include "libqnetworkdatagram.hpp"
#include "libqnetworkdatagram.h"

/// https://doc.qt.io/qt-6/qnetworkdatagram.html

/// q_networkdatagram_new constructs a new QNetworkDatagram object.
///
///
QNetworkDatagram* q_networkdatagram_new() {
    return QNetworkDatagram_new();
}

/// q_networkdatagram_new2 constructs a new QNetworkDatagram object.
///
/// ``` const char* data ```
QNetworkDatagram* q_networkdatagram_new2(const char* data) {
    return QNetworkDatagram_new2(qstring(data));
}

/// q_networkdatagram_new3 constructs a new QNetworkDatagram object.
///
/// ``` QNetworkDatagram* other ```
QNetworkDatagram* q_networkdatagram_new3(void* other) {
    return QNetworkDatagram_new3((QNetworkDatagram*)other);
}

/// q_networkdatagram_new4 constructs a new QNetworkDatagram object.
///
/// ``` const char* data, QHostAddress* destinationAddress ```
QNetworkDatagram* q_networkdatagram_new4(const char* data, void* destinationAddress) {
    return QNetworkDatagram_new4(qstring(data), (QHostAddress*)destinationAddress);
}

/// q_networkdatagram_new5 constructs a new QNetworkDatagram object.
///
/// ``` const char* data, QHostAddress* destinationAddress, unsigned short port ```
QNetworkDatagram* q_networkdatagram_new5(const char* data, void* destinationAddress, unsigned short port) {
    return QNetworkDatagram_new5(qstring(data), (QHostAddress*)destinationAddress, port);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#operator=)
///
/// ``` QNetworkDatagram* self, QNetworkDatagram* other ```
void q_networkdatagram_operator_assign(void* self, void* other) {
    QNetworkDatagram_OperatorAssign((QNetworkDatagram*)self, (QNetworkDatagram*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#swap)
///
/// ``` QNetworkDatagram* self, QNetworkDatagram* other ```
void q_networkdatagram_swap(void* self, void* other) {
    QNetworkDatagram_Swap((QNetworkDatagram*)self, (QNetworkDatagram*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#clear)
///
/// ``` QNetworkDatagram* self ```
void q_networkdatagram_clear(void* self) {
    QNetworkDatagram_Clear((QNetworkDatagram*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#isValid)
///
/// ``` QNetworkDatagram* self ```
bool q_networkdatagram_is_valid(void* self) {
    return QNetworkDatagram_IsValid((QNetworkDatagram*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#isNull)
///
/// ``` QNetworkDatagram* self ```
bool q_networkdatagram_is_null(void* self) {
    return QNetworkDatagram_IsNull((QNetworkDatagram*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#interfaceIndex)
///
/// ``` QNetworkDatagram* self ```
uint32_t q_networkdatagram_interface_index(void* self) {
    return QNetworkDatagram_InterfaceIndex((QNetworkDatagram*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#setInterfaceIndex)
///
/// ``` QNetworkDatagram* self, uint32_t index ```
void q_networkdatagram_set_interface_index(void* self, uint32_t index) {
    QNetworkDatagram_SetInterfaceIndex((QNetworkDatagram*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#senderAddress)
///
/// ``` QNetworkDatagram* self ```
QHostAddress* q_networkdatagram_sender_address(void* self) {
    return QNetworkDatagram_SenderAddress((QNetworkDatagram*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#destinationAddress)
///
/// ``` QNetworkDatagram* self ```
QHostAddress* q_networkdatagram_destination_address(void* self) {
    return QNetworkDatagram_DestinationAddress((QNetworkDatagram*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#senderPort)
///
/// ``` QNetworkDatagram* self ```
int32_t q_networkdatagram_sender_port(void* self) {
    return QNetworkDatagram_SenderPort((QNetworkDatagram*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#destinationPort)
///
/// ``` QNetworkDatagram* self ```
int32_t q_networkdatagram_destination_port(void* self) {
    return QNetworkDatagram_DestinationPort((QNetworkDatagram*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#setSender)
///
/// ``` QNetworkDatagram* self, QHostAddress* address ```
void q_networkdatagram_set_sender(void* self, void* address) {
    QNetworkDatagram_SetSender((QNetworkDatagram*)self, (QHostAddress*)address);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#setDestination)
///
/// ``` QNetworkDatagram* self, QHostAddress* address, unsigned short port ```
void q_networkdatagram_set_destination(void* self, void* address, unsigned short port) {
    QNetworkDatagram_SetDestination((QNetworkDatagram*)self, (QHostAddress*)address, port);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#hopLimit)
///
/// ``` QNetworkDatagram* self ```
int32_t q_networkdatagram_hop_limit(void* self) {
    return QNetworkDatagram_HopLimit((QNetworkDatagram*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#setHopLimit)
///
/// ``` QNetworkDatagram* self, int count ```
void q_networkdatagram_set_hop_limit(void* self, int count) {
    QNetworkDatagram_SetHopLimit((QNetworkDatagram*)self, count);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#data)
///
/// ``` QNetworkDatagram* self ```
char* q_networkdatagram_data(void* self) {
    libqt_string _str = QNetworkDatagram_Data((QNetworkDatagram*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#setData)
///
/// ``` QNetworkDatagram* self, const char* data ```
void q_networkdatagram_set_data(void* self, const char* data) {
    QNetworkDatagram_SetData((QNetworkDatagram*)self, qstring(data));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#makeReply)
///
/// ``` QNetworkDatagram* self, const char* payload ```
QNetworkDatagram* q_networkdatagram_make_reply(void* self, const char* payload) {
    return QNetworkDatagram_MakeReply((QNetworkDatagram*)self, qstring(payload));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#setSender)
///
/// ``` QNetworkDatagram* self, QHostAddress* address, unsigned short port ```
void q_networkdatagram_set_sender2(void* self, void* address, unsigned short port) {
    QNetworkDatagram_SetSender2((QNetworkDatagram*)self, (QHostAddress*)address, port);
}

/// Delete this object from C++ memory.
///
/// ``` QNetworkDatagram* self ```
void q_networkdatagram_delete(void* self) {
    QNetworkDatagram_Delete((QNetworkDatagram*)(self));
}