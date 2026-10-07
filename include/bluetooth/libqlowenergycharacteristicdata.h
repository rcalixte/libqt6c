#pragma once
#ifndef BLUETOOTH_LIBQLOWENERGYCHARACTERISTICDATA_H
#define BLUETOOTH_LIBQLOWENERGYCHARACTERISTICDATA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html)

/// q_lowenergycharacteristicdata_new constructs a new QLowEnergyCharacteristicData object.
///
QLowEnergyCharacteristicData* q_lowenergycharacteristicdata_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html)

/// q_lowenergycharacteristicdata_new2 constructs a new QLowEnergyCharacteristicData object.
///
/// @param other QLowEnergyCharacteristicData*
///
QLowEnergyCharacteristicData* q_lowenergycharacteristicdata_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#operator-eq)
///
/// @param self QLowEnergyCharacteristicData*
/// @param other QLowEnergyCharacteristicData*
///
void q_lowenergycharacteristicdata_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#uuid)
///
/// @param self const QLowEnergyCharacteristicData*
///
QBluetoothUuid* q_lowenergycharacteristicdata_uuid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#setUuid)
///
/// @param self QLowEnergyCharacteristicData*
/// @param uuid QBluetoothUuid*
///
void q_lowenergycharacteristicdata_set_uuid(void* self, const void* uuid);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#value)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QLowEnergyCharacteristicData*
///
const char* q_lowenergycharacteristicdata_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#setValue)
///
/// @param self QLowEnergyCharacteristicData*
/// @param value const char*
///
void q_lowenergycharacteristicdata_set_value(void* self, const char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#properties)
///
/// @param self const QLowEnergyCharacteristicData*
///
/// @return flag of enum QLowEnergyCharacteristic__PropertyType
///
int32_t q_lowenergycharacteristicdata_properties(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#setProperties)
///
/// @param self QLowEnergyCharacteristicData*
/// @param properties flag of enum QLowEnergyCharacteristic__PropertyType
///
void q_lowenergycharacteristicdata_set_properties(void* self, int32_t properties);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#descriptors)
///
/// @param self const QLowEnergyCharacteristicData*
///
/// @return libqt_list of QLowEnergyDescriptorData*
///
libqt_list q_lowenergycharacteristicdata_descriptors(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#setDescriptors)
///
/// @param self QLowEnergyCharacteristicData*
/// @param descriptors libqt_list of QLowEnergyDescriptorData*
///
void q_lowenergycharacteristicdata_set_descriptors(void* self, libqt_list descriptors);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#addDescriptor)
///
/// @param self QLowEnergyCharacteristicData*
/// @param descriptor QLowEnergyDescriptorData*
///
void q_lowenergycharacteristicdata_add_descriptor(void* self, const void* descriptor);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#setReadConstraints)
///
/// @param self QLowEnergyCharacteristicData*
/// @param constraints flag of enum QBluetooth__AttAccessConstraint
///
void q_lowenergycharacteristicdata_set_read_constraints(void* self, int32_t constraints);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#readConstraints)
///
/// @param self const QLowEnergyCharacteristicData*
///
/// @return flag of enum QBluetooth__AttAccessConstraint
///
int32_t q_lowenergycharacteristicdata_read_constraints(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#setWriteConstraints)
///
/// @param self QLowEnergyCharacteristicData*
/// @param constraints flag of enum QBluetooth__AttAccessConstraint
///
void q_lowenergycharacteristicdata_set_write_constraints(void* self, int32_t constraints);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#writeConstraints)
///
/// @param self const QLowEnergyCharacteristicData*
///
/// @return flag of enum QBluetooth__AttAccessConstraint
///
int32_t q_lowenergycharacteristicdata_write_constraints(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#setValueLength)
///
/// @param self QLowEnergyCharacteristicData*
/// @param minimum int
/// @param maximum int
///
void q_lowenergycharacteristicdata_set_value_length(void* self, int minimum, int maximum);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#minimumValueLength)
///
/// @param self const QLowEnergyCharacteristicData*
///
int32_t q_lowenergycharacteristicdata_minimum_value_length(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#maximumValueLength)
///
/// @param self const QLowEnergyCharacteristicData*
///
int32_t q_lowenergycharacteristicdata_maximum_value_length(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#isValid)
///
/// @param self const QLowEnergyCharacteristicData*
///
bool q_lowenergycharacteristicdata_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#swap)
///
/// @param self QLowEnergyCharacteristicData*
/// @param other QLowEnergyCharacteristicData*
///
void q_lowenergycharacteristicdata_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristicdata.html#dtor.QLowEnergyCharacteristicData)
///
/// Delete this object from C++ memory.
///
/// @param self QLowEnergyCharacteristicData*
///
void q_lowenergycharacteristicdata_delete(void* self);

#endif
