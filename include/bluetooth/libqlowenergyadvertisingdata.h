#pragma once
#ifndef SRC_BLUETOOTH_QT6C_LIBQLOWENERGYADVERTISINGDATA_H
#define SRC_BLUETOOTH_QT6C_LIBQLOWENERGYADVERTISINGDATA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html)

/// q_lowenergyadvertisingdata_new constructs a new QLowEnergyAdvertisingData object.
///
QLowEnergyAdvertisingData* q_lowenergyadvertisingdata_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html)

/// q_lowenergyadvertisingdata_new2 constructs a new QLowEnergyAdvertisingData object.
///
/// @param other QLowEnergyAdvertisingData*
///
QLowEnergyAdvertisingData* q_lowenergyadvertisingdata_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#operator-eq)
///
/// @param self QLowEnergyAdvertisingData*
/// @param other QLowEnergyAdvertisingData*
///
void q_lowenergyadvertisingdata_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#setLocalName)
///
/// @param self QLowEnergyAdvertisingData*
/// @param name const char*
///
void q_lowenergyadvertisingdata_set_local_name(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#localName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QLowEnergyAdvertisingData*
///
const char* q_lowenergyadvertisingdata_local_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#invalidManufacturerId)
///
unsigned short q_lowenergyadvertisingdata_invalid_manufacturer_id();

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#setManufacturerData)
///
/// @param self QLowEnergyAdvertisingData*
/// @param id unsigned short
/// @param data char*
///
void q_lowenergyadvertisingdata_set_manufacturer_data(void* self, unsigned short id, char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#manufacturerId)
///
/// @param self QLowEnergyAdvertisingData*
///
unsigned short q_lowenergyadvertisingdata_manufacturer_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#manufacturerData)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QLowEnergyAdvertisingData*
///
char* q_lowenergyadvertisingdata_manufacturer_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#setIncludePowerLevel)
///
/// @param self QLowEnergyAdvertisingData*
/// @param doInclude bool
///
void q_lowenergyadvertisingdata_set_include_power_level(void* self, bool doInclude);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#includePowerLevel)
///
/// @param self QLowEnergyAdvertisingData*
///
bool q_lowenergyadvertisingdata_include_power_level(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#setDiscoverability)
///
/// @param self QLowEnergyAdvertisingData*
/// @param mode enum QLowEnergyAdvertisingData__Discoverability
///
void q_lowenergyadvertisingdata_set_discoverability(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#discoverability)
///
/// @param self QLowEnergyAdvertisingData*
///
/// @return enum QLowEnergyAdvertisingData__Discoverability
///
int32_t q_lowenergyadvertisingdata_discoverability(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#setServices)
///
/// @param self QLowEnergyAdvertisingData*
/// @param services libqt_list of QBluetoothUuid*
///
void q_lowenergyadvertisingdata_set_services(void* self, libqt_list services);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#services)
///
/// @param self QLowEnergyAdvertisingData*
///
/// @return libqt_list of QBluetoothUuid*
///
libqt_list q_lowenergyadvertisingdata_services(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#setRawData)
///
/// @param self QLowEnergyAdvertisingData*
/// @param data char*
///
void q_lowenergyadvertisingdata_set_raw_data(void* self, char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#rawData)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QLowEnergyAdvertisingData*
///
char* q_lowenergyadvertisingdata_raw_data(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#swap)
///
/// @param self QLowEnergyAdvertisingData*
/// @param other QLowEnergyAdvertisingData*
///
void q_lowenergyadvertisingdata_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#dtor.QLowEnergyAdvertisingData)
///
/// Delete this object from C++ memory.
///
/// @param self QLowEnergyAdvertisingData*
///
void q_lowenergyadvertisingdata_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingdata.html#public-types)

typedef enum {
    QLOWENERGYADVERTISINGDATA_DISCOVERABILITY_DISCOVERABILITYNONE = 0,
    QLOWENERGYADVERTISINGDATA_DISCOVERABILITY_DISCOVERABILITYLIMITED = 1,
    QLOWENERGYADVERTISINGDATA_DISCOVERABILITY_DISCOVERABILITYGENERAL = 2
} QLowEnergyAdvertisingData__Discoverability;

#endif
