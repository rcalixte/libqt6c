#pragma once
#ifndef SRC_BLUETOOTH_QT6C_LIBQLOWENERGYDESCRIPTORDATA_H
#define SRC_BLUETOOTH_QT6C_LIBQLOWENERGYDESCRIPTORDATA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html)

/// q_lowenergydescriptordata_new constructs a new QLowEnergyDescriptorData object.
///
QLowEnergyDescriptorData* q_lowenergydescriptordata_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html)

/// q_lowenergydescriptordata_new2 constructs a new QLowEnergyDescriptorData object.
///
/// @param uuid QBluetoothUuid*
/// @param value char*
///
QLowEnergyDescriptorData* q_lowenergydescriptordata_new2(void* uuid, char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html)

/// q_lowenergydescriptordata_new3 constructs a new QLowEnergyDescriptorData object.
///
/// @param other QLowEnergyDescriptorData*
///
QLowEnergyDescriptorData* q_lowenergydescriptordata_new3(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#operator-eq)
///
/// @param self QLowEnergyDescriptorData*
/// @param other QLowEnergyDescriptorData*
///
void q_lowenergydescriptordata_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#value)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QLowEnergyDescriptorData*
///
char* q_lowenergydescriptordata_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#setValue)
///
/// @param self QLowEnergyDescriptorData*
/// @param value char*
///
void q_lowenergydescriptordata_set_value(void* self, char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#uuid)
///
/// @param self QLowEnergyDescriptorData*
///
QBluetoothUuid* q_lowenergydescriptordata_uuid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#setUuid)
///
/// @param self QLowEnergyDescriptorData*
/// @param uuid QBluetoothUuid*
///
void q_lowenergydescriptordata_set_uuid(void* self, void* uuid);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#isValid)
///
/// @param self QLowEnergyDescriptorData*
///
bool q_lowenergydescriptordata_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#setReadPermissions)
///
/// @param self QLowEnergyDescriptorData*
/// @param readable bool
///
void q_lowenergydescriptordata_set_read_permissions(void* self, bool readable);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#isReadable)
///
/// @param self QLowEnergyDescriptorData*
///
bool q_lowenergydescriptordata_is_readable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#readConstraints)
///
/// @param self QLowEnergyDescriptorData*
///
/// @return flag of enum QBluetooth__AttAccessConstraint
///
int32_t q_lowenergydescriptordata_read_constraints(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#setWritePermissions)
///
/// @param self QLowEnergyDescriptorData*
/// @param writable bool
///
void q_lowenergydescriptordata_set_write_permissions(void* self, bool writable);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#isWritable)
///
/// @param self QLowEnergyDescriptorData*
///
bool q_lowenergydescriptordata_is_writable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#writeConstraints)
///
/// @param self QLowEnergyDescriptorData*
///
/// @return flag of enum QBluetooth__AttAccessConstraint
///
int32_t q_lowenergydescriptordata_write_constraints(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#swap)
///
/// @param self QLowEnergyDescriptorData*
/// @param other QLowEnergyDescriptorData*
///
void q_lowenergydescriptordata_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#setReadPermissions)
///
/// @param self QLowEnergyDescriptorData*
/// @param readable bool
/// @param constraints flag of enum QBluetooth__AttAccessConstraint
///
void q_lowenergydescriptordata_set_read_permissions2(void* self, bool readable, int32_t constraints);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#setWritePermissions)
///
/// @param self QLowEnergyDescriptorData*
/// @param writable bool
/// @param constraints flag of enum QBluetooth__AttAccessConstraint
///
void q_lowenergydescriptordata_set_write_permissions2(void* self, bool writable, int32_t constraints);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergydescriptordata.html#dtor.QLowEnergyDescriptorData)
///
/// Delete this object from C++ memory.
///
/// @param self QLowEnergyDescriptorData*
///
void q_lowenergydescriptordata_delete(void* self);

#endif
