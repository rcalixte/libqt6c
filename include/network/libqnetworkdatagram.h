#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQNETWORKDATAGRAM_H
#define SRC_NETWORK_QT6C_LIBQNETWORKDATAGRAM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qnetworkdatagram.html

/// q_networkdatagram_new constructs a new QNetworkDatagram object.
///
QNetworkDatagram* q_networkdatagram_new();

/// q_networkdatagram_new2 constructs a new QNetworkDatagram object.
///
/// @param data const char*
QNetworkDatagram* q_networkdatagram_new2(const char* data);

/// q_networkdatagram_new3 constructs a new QNetworkDatagram object.
///
/// @param other QNetworkDatagram*
QNetworkDatagram* q_networkdatagram_new3(void* other);

/// q_networkdatagram_new4 constructs a new QNetworkDatagram object.
///
/// @param data const char*
/// @param destinationAddress QHostAddress*
QNetworkDatagram* q_networkdatagram_new4(const char* data, void* destinationAddress);

/// q_networkdatagram_new5 constructs a new QNetworkDatagram object.
///
/// @param data const char*
/// @param destinationAddress QHostAddress*
/// @param port unsigned short
QNetworkDatagram* q_networkdatagram_new5(const char* data, void* destinationAddress, unsigned short port);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#operator-eq)
///
/// @param self QNetworkDatagram*
/// @param other QNetworkDatagram*
void q_networkdatagram_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#swap)
///
/// @param self QNetworkDatagram*
/// @param other QNetworkDatagram*
void q_networkdatagram_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#clear)
///
/// @param self QNetworkDatagram*
void q_networkdatagram_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#isValid)
///
/// @param self QNetworkDatagram*
bool q_networkdatagram_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#isNull)
///
/// @param self QNetworkDatagram*
bool q_networkdatagram_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#interfaceIndex)
///
/// @param self QNetworkDatagram*
uint32_t q_networkdatagram_interface_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#setInterfaceIndex)
///
/// @param self QNetworkDatagram*
/// @param index uint32_t
void q_networkdatagram_set_interface_index(void* self, uint32_t index);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#senderAddress)
///
/// @param self QNetworkDatagram*
QHostAddress* q_networkdatagram_sender_address(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#destinationAddress)
///
/// @param self QNetworkDatagram*
QHostAddress* q_networkdatagram_destination_address(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#senderPort)
///
/// @param self QNetworkDatagram*
int32_t q_networkdatagram_sender_port(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#destinationPort)
///
/// @param self QNetworkDatagram*
int32_t q_networkdatagram_destination_port(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#setSender)
///
/// @param self QNetworkDatagram*
/// @param address QHostAddress*
void q_networkdatagram_set_sender(void* self, void* address);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#setDestination)
///
/// @param self QNetworkDatagram*
/// @param address QHostAddress*
/// @param port unsigned short
void q_networkdatagram_set_destination(void* self, void* address, unsigned short port);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#hopLimit)
///
/// @param self QNetworkDatagram*
int32_t q_networkdatagram_hop_limit(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#setHopLimit)
///
/// @param self QNetworkDatagram*
/// @param count int
void q_networkdatagram_set_hop_limit(void* self, int count);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#data)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QNetworkDatagram*
char* q_networkdatagram_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#setData)
///
/// @param self QNetworkDatagram*
/// @param data const char*
void q_networkdatagram_set_data(void* self, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#makeReply)
///
/// @param self QNetworkDatagram*
/// @param payload const char*
QNetworkDatagram* q_networkdatagram_make_reply(void* self, const char* payload);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#setSender)
///
/// @param self QNetworkDatagram*
/// @param address QHostAddress*
/// @param port unsigned short
void q_networkdatagram_set_sender2(void* self, void* address, unsigned short port);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkdatagram.html#dtor.QNetworkDatagram)
///
/// Delete this object from C++ memory.
///
/// @param self QNetworkDatagram*
void q_networkdatagram_delete(void* self);

#endif
