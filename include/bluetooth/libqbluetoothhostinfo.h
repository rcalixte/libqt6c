#pragma once
#ifndef SRC_BLUETOOTH_QT6C_LIBQBLUETOOTHHOSTINFO_H
#define SRC_BLUETOOTH_QT6C_LIBQBLUETOOTHHOSTINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothhostinfo.html)

/// q_bluetoothhostinfo_new constructs a new QBluetoothHostInfo object.
///
QBluetoothHostInfo* q_bluetoothhostinfo_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothhostinfo.html)

/// q_bluetoothhostinfo_new2 constructs a new QBluetoothHostInfo object.
///
/// @param other QBluetoothHostInfo*
///
QBluetoothHostInfo* q_bluetoothhostinfo_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothhostinfo.html#operator-eq)
///
/// @param self QBluetoothHostInfo*
/// @param other QBluetoothHostInfo*
///
void q_bluetoothhostinfo_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothhostinfo.html#address)
///
/// @param self QBluetoothHostInfo*
///
QBluetoothAddress* q_bluetoothhostinfo_address(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothhostinfo.html#setAddress)
///
/// @param self QBluetoothHostInfo*
/// @param address QBluetoothAddress*
///
void q_bluetoothhostinfo_set_address(void* self, void* address);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothhostinfo.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QBluetoothHostInfo*
///
const char* q_bluetoothhostinfo_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothhostinfo.html#setName)
///
/// @param self QBluetoothHostInfo*
/// @param name const char*
///
void q_bluetoothhostinfo_set_name(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothhostinfo.html#dtor.QBluetoothHostInfo)
///
/// Delete this object from C++ memory.
///
/// @param self QBluetoothHostInfo*
///
void q_bluetoothhostinfo_delete(void* self);

#endif
