#pragma once
#ifndef SRC_BLUETOOTH_QT6C_LIBQLOWENERGYSERVICEDATA_H
#define SRC_BLUETOOTH_QT6C_LIBQLOWENERGYSERVICEDATA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html)

/// q_lowenergyservicedata_new constructs a new QLowEnergyServiceData object.
///
QLowEnergyServiceData* q_lowenergyservicedata_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html)

/// q_lowenergyservicedata_new2 constructs a new QLowEnergyServiceData object.
///
/// @param other QLowEnergyServiceData*
///
QLowEnergyServiceData* q_lowenergyservicedata_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#operator-eq)
///
/// @param self QLowEnergyServiceData*
/// @param other QLowEnergyServiceData*
///
void q_lowenergyservicedata_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#type)
///
/// @param self QLowEnergyServiceData*
///
/// @return enum QLowEnergyServiceData__ServiceType
///
int32_t q_lowenergyservicedata_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#setType)
///
/// @param self QLowEnergyServiceData*
/// @param type enum QLowEnergyServiceData__ServiceType
///
void q_lowenergyservicedata_set_type(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#uuid)
///
/// @param self QLowEnergyServiceData*
///
QBluetoothUuid* q_lowenergyservicedata_uuid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#setUuid)
///
/// @param self QLowEnergyServiceData*
/// @param uuid QBluetoothUuid*
///
void q_lowenergyservicedata_set_uuid(void* self, void* uuid);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#includedServices)
///
/// @param self QLowEnergyServiceData*
///
/// @return libqt_list of QLowEnergyService*
///
libqt_list q_lowenergyservicedata_included_services(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#setIncludedServices)
///
/// @param self QLowEnergyServiceData*
/// @param services libqt_list of QLowEnergyService*
///
void q_lowenergyservicedata_set_included_services(void* self, libqt_list services);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#addIncludedService)
///
/// @param self QLowEnergyServiceData*
/// @param service QLowEnergyService*
///
void q_lowenergyservicedata_add_included_service(void* self, void* service);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#characteristics)
///
/// @param self QLowEnergyServiceData*
///
/// @return libqt_list of QLowEnergyCharacteristicData*
///
libqt_list q_lowenergyservicedata_characteristics(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#setCharacteristics)
///
/// @param self QLowEnergyServiceData*
/// @param characteristics libqt_list of QLowEnergyCharacteristicData*
///
void q_lowenergyservicedata_set_characteristics(void* self, libqt_list characteristics);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#addCharacteristic)
///
/// @param self QLowEnergyServiceData*
/// @param characteristic QLowEnergyCharacteristicData*
///
void q_lowenergyservicedata_add_characteristic(void* self, void* characteristic);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#isValid)
///
/// @param self QLowEnergyServiceData*
///
bool q_lowenergyservicedata_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#swap)
///
/// @param self QLowEnergyServiceData*
/// @param other QLowEnergyServiceData*
///
void q_lowenergyservicedata_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#dtor.QLowEnergyServiceData)
///
/// Delete this object from C++ memory.
///
/// @param self QLowEnergyServiceData*
///
void q_lowenergyservicedata_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyservicedata.html#public-types)

typedef enum {
    QLOWENERGYSERVICEDATA_SERVICETYPE_SERVICETYPEPRIMARY = 10240,
    QLOWENERGYSERVICEDATA_SERVICETYPE_SERVICETYPESECONDARY = 10241
} QLowEnergyServiceData__ServiceType;

#endif
