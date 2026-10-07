#pragma once
#ifndef NETWORK_LIBQNETWORKDATAGRAM_H
#define NETWORK_LIBQNETWORKDATAGRAM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html)

/// q_networkdatagram_new constructs a new QNetworkDatagram object.
///
QNetworkDatagram* q_networkdatagram_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html)

/// q_networkdatagram_new2 constructs a new QNetworkDatagram object.
///
/// @param data const char*
///
QNetworkDatagram* q_networkdatagram_new2(const char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html)

/// q_networkdatagram_new3 constructs a new QNetworkDatagram object.
///
/// @param other QNetworkDatagram*
///
QNetworkDatagram* q_networkdatagram_new3(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html)

/// q_networkdatagram_new4 constructs a new QNetworkDatagram object.
///
/// @param data const char*
/// @param destinationAddress QHostAddress*
///
QNetworkDatagram* q_networkdatagram_new4(const char* data, const void* destinationAddress);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html)

/// q_networkdatagram_new5 constructs a new QNetworkDatagram object.
///
/// @param data const char*
/// @param destinationAddress QHostAddress*
/// @param port uint16_t
///
QNetworkDatagram* q_networkdatagram_new5(const char* data, const void* destinationAddress, uint16_t port);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#operator-eq)
///
/// @param self QNetworkDatagram*
/// @param other QNetworkDatagram*
///
void q_networkdatagram_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#swap)
///
/// @param self QNetworkDatagram*
/// @param other QNetworkDatagram*
///
void q_networkdatagram_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#clear)
///
/// @param self QNetworkDatagram*
///
void q_networkdatagram_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#isValid)
///
/// @param self const QNetworkDatagram*
///
bool q_networkdatagram_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#isNull)
///
/// @param self const QNetworkDatagram*
///
bool q_networkdatagram_is_null(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#interfaceIndex)
///
/// @param self const QNetworkDatagram*
///
uint32_t q_networkdatagram_interface_index(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#setInterfaceIndex)
///
/// @param self QNetworkDatagram*
/// @param index uint32_t
///
void q_networkdatagram_set_interface_index(void* self, uint32_t index);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#senderAddress)
///
/// @param self const QNetworkDatagram*
///
QHostAddress* q_networkdatagram_sender_address(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#destinationAddress)
///
/// @param self const QNetworkDatagram*
///
QHostAddress* q_networkdatagram_destination_address(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#senderPort)
///
/// @param self const QNetworkDatagram*
///
int32_t q_networkdatagram_sender_port(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#destinationPort)
///
/// @param self const QNetworkDatagram*
///
int32_t q_networkdatagram_destination_port(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#setSender)
///
/// @param self QNetworkDatagram*
/// @param address QHostAddress*
///
void q_networkdatagram_set_sender(void* self, const void* address);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#setDestination)
///
/// @param self QNetworkDatagram*
/// @param address QHostAddress*
/// @param port uint16_t
///
void q_networkdatagram_set_destination(void* self, const void* address, uint16_t port);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#hopLimit)
///
/// @param self const QNetworkDatagram*
///
int32_t q_networkdatagram_hop_limit(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#setHopLimit)
///
/// @param self QNetworkDatagram*
/// @param count int
///
void q_networkdatagram_set_hop_limit(void* self, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#data)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QNetworkDatagram*
///
const char* q_networkdatagram_data(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#setData)
///
/// @param self QNetworkDatagram*
/// @param data const char*
///
void q_networkdatagram_set_data(void* self, const char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#makeReply)
///
/// @param self const QNetworkDatagram*
/// @param payload const char*
///
QNetworkDatagram* q_networkdatagram_make_reply(const void* self, const char* payload);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#setSender)
///
/// @param self QNetworkDatagram*
/// @param address QHostAddress*
/// @param port uint16_t
///
void q_networkdatagram_set_sender2(void* self, const void* address, uint16_t port);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkdatagram.html#dtor.QNetworkDatagram)
///
/// Delete this object from C++ memory.
///
/// @param self QNetworkDatagram*
///
void q_networkdatagram_delete(void* self);

#endif
