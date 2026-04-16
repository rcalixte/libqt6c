#pragma once
#ifndef SRC_BLUETOOTH_QT6C_LIBQBLUETOOTHADDRESS_H
#define SRC_BLUETOOTH_QT6C_LIBQBLUETOOTHADDRESS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothaddress.html)

/// q_bluetoothaddress_new constructs a new QBluetoothAddress object.
///
QBluetoothAddress* q_bluetoothaddress_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothaddress.html)

/// q_bluetoothaddress_new2 constructs a new QBluetoothAddress object.
///
/// @param address uint64_t
///
QBluetoothAddress* q_bluetoothaddress_new2(uint64_t address);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothaddress.html)

/// q_bluetoothaddress_new3 constructs a new QBluetoothAddress object.
///
/// @param address const char*
///
QBluetoothAddress* q_bluetoothaddress_new3(const char* address);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothaddress.html)

/// q_bluetoothaddress_new4 constructs a new QBluetoothAddress object.
///
/// @param other QBluetoothAddress*
///
QBluetoothAddress* q_bluetoothaddress_new4(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothaddress.html#operator-eq)
///
/// @param self QBluetoothAddress*
/// @param other QBluetoothAddress*
///
void q_bluetoothaddress_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothaddress.html#isNull)
///
/// @param self QBluetoothAddress*
///
bool q_bluetoothaddress_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothaddress.html#clear)
///
/// @param self QBluetoothAddress*
///
void q_bluetoothaddress_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothaddress.html#toUInt64)
///
/// @param self QBluetoothAddress*
///
uint64_t q_bluetoothaddress_to_u_int64(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothaddress.html#toString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QBluetoothAddress*
///
const char* q_bluetoothaddress_to_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbluetoothaddress.html#dtor.QBluetoothAddress)
///
/// Delete this object from C++ memory.
///
/// @param self QBluetoothAddress*
///
void q_bluetoothaddress_delete(void* self);

#endif
