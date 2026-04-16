#pragma once
#ifndef SRC_BLUETOOTH_QT6C_LIBQLOWENERGYCHARACTERISTIC_H
#define SRC_BLUETOOTH_QT6C_LIBQLOWENERGYCHARACTERISTIC_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html)

/// q_lowenergycharacteristic_new constructs a new QLowEnergyCharacteristic object.
///
QLowEnergyCharacteristic* q_lowenergycharacteristic_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html)

/// q_lowenergycharacteristic_new2 constructs a new QLowEnergyCharacteristic object.
///
/// @param other QLowEnergyCharacteristic*
///
QLowEnergyCharacteristic* q_lowenergycharacteristic_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#operator-eq)
///
/// @param self QLowEnergyCharacteristic*
/// @param other QLowEnergyCharacteristic*
///
void q_lowenergycharacteristic_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QLowEnergyCharacteristic*
///
const char* q_lowenergycharacteristic_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#uuid)
///
/// @param self QLowEnergyCharacteristic*
///
QBluetoothUuid* q_lowenergycharacteristic_uuid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#value)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QLowEnergyCharacteristic*
///
char* q_lowenergycharacteristic_value(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#properties)
///
/// @param self QLowEnergyCharacteristic*
///
/// @return flag of enum QLowEnergyCharacteristic__PropertyType
///
int32_t q_lowenergycharacteristic_properties(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#descriptor)
///
/// @param self QLowEnergyCharacteristic*
/// @param uuid QBluetoothUuid*
///
QLowEnergyDescriptor* q_lowenergycharacteristic_descriptor(void* self, void* uuid);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#descriptors)
///
/// @param self QLowEnergyCharacteristic*
///
/// @return libqt_list of QLowEnergyDescriptor*
///
libqt_list q_lowenergycharacteristic_descriptors(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#clientCharacteristicConfiguration)
///
/// @param self QLowEnergyCharacteristic*
///
QLowEnergyDescriptor* q_lowenergycharacteristic_client_characteristic_configuration(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#isValid)
///
/// @param self QLowEnergyCharacteristic*
///
bool q_lowenergycharacteristic_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#dtor.QLowEnergyCharacteristic)
///
/// Delete this object from C++ memory.
///
/// @param self QLowEnergyCharacteristic*
///
void q_lowenergycharacteristic_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergycharacteristic.html#public-types)

typedef enum {
    QLOWENERGYCHARACTERISTIC_PROPERTYTYPE_UNKNOWN = 0,
    QLOWENERGYCHARACTERISTIC_PROPERTYTYPE_BROADCASTING = 1,
    QLOWENERGYCHARACTERISTIC_PROPERTYTYPE_READ = 2,
    QLOWENERGYCHARACTERISTIC_PROPERTYTYPE_WRITENORESPONSE = 4,
    QLOWENERGYCHARACTERISTIC_PROPERTYTYPE_WRITE = 8,
    QLOWENERGYCHARACTERISTIC_PROPERTYTYPE_NOTIFY = 16,
    QLOWENERGYCHARACTERISTIC_PROPERTYTYPE_INDICATE = 32,
    QLOWENERGYCHARACTERISTIC_PROPERTYTYPE_WRITESIGNED = 64,
    QLOWENERGYCHARACTERISTIC_PROPERTYTYPE_EXTENDEDPROPERTY = 128
} QLowEnergyCharacteristic__PropertyType;

#endif
