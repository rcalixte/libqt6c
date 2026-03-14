#pragma once
#ifndef SRC_BLUETOOTH_QT6C_LIBQLOWENERGYADVERTISINGPARAMETERS_H
#define SRC_BLUETOOTH_QT6C_LIBQLOWENERGYADVERTISINGPARAMETERS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html)

/// q_lowenergyadvertisingparameters_new constructs a new QLowEnergyAdvertisingParameters object.
///
QLowEnergyAdvertisingParameters* q_lowenergyadvertisingparameters_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html)

/// q_lowenergyadvertisingparameters_new2 constructs a new QLowEnergyAdvertisingParameters object.
///
/// @param other QLowEnergyAdvertisingParameters*
///
QLowEnergyAdvertisingParameters* q_lowenergyadvertisingparameters_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#operator-eq)
///
/// @param self QLowEnergyAdvertisingParameters*
/// @param other QLowEnergyAdvertisingParameters*
///
void q_lowenergyadvertisingparameters_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#setMode)
///
/// @param self QLowEnergyAdvertisingParameters*
/// @param mode enum QLowEnergyAdvertisingParameters__Mode
///
void q_lowenergyadvertisingparameters_set_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#mode)
///
/// @param self QLowEnergyAdvertisingParameters*
///
/// @return enum QLowEnergyAdvertisingParameters__Mode
///
int32_t q_lowenergyadvertisingparameters_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#setWhiteList)
///
/// @param self QLowEnergyAdvertisingParameters*
/// @param whiteList libqt_list of QLowEnergyAdvertisingParameters__AddressInfo*
/// @param policy enum QLowEnergyAdvertisingParameters__FilterPolicy
///
void q_lowenergyadvertisingparameters_set_white_list(void* self, libqt_list whiteList, int32_t policy);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#whiteList)
///
/// @param self QLowEnergyAdvertisingParameters*
///
/// @return libqt_list of QLowEnergyAdvertisingParameters__AddressInfo*
///
libqt_list q_lowenergyadvertisingparameters_white_list(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#filterPolicy)
///
/// @param self QLowEnergyAdvertisingParameters*
///
/// @return enum QLowEnergyAdvertisingParameters__FilterPolicy
///
int32_t q_lowenergyadvertisingparameters_filter_policy(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#setInterval)
///
/// @param self QLowEnergyAdvertisingParameters*
/// @param minimum unsigned short
/// @param maximum unsigned short
///
void q_lowenergyadvertisingparameters_set_interval(void* self, unsigned short minimum, unsigned short maximum);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#minimumInterval)
///
/// @param self QLowEnergyAdvertisingParameters*
///
int32_t q_lowenergyadvertisingparameters_minimum_interval(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#maximumInterval)
///
/// @param self QLowEnergyAdvertisingParameters*
///
int32_t q_lowenergyadvertisingparameters_maximum_interval(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#swap)
///
/// @param self QLowEnergyAdvertisingParameters*
/// @param other QLowEnergyAdvertisingParameters*
///
void q_lowenergyadvertisingparameters_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#dtor.QLowEnergyAdvertisingParameters)
///
/// Delete this object from C++ memory.
///
/// @param self QLowEnergyAdvertisingParameters*
///
void q_lowenergyadvertisingparameters_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters-addressinfo.html)

/// q_lowenergyadvertisingparameters__addressinfo_new constructs a new QLowEnergyAdvertisingParameters::AddressInfo object.
///
/// @param addr QBluetoothAddress*
/// @param t enum QLowEnergyController__RemoteAddressType
///
QLowEnergyAdvertisingParameters__AddressInfo* q_lowenergyadvertisingparameters__addressinfo_new(void* addr, int32_t t);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters-addressinfo.html)

/// q_lowenergyadvertisingparameters__addressinfo_new2 constructs a new QLowEnergyAdvertisingParameters::AddressInfo object.
///
QLowEnergyAdvertisingParameters__AddressInfo* q_lowenergyadvertisingparameters__addressinfo_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters-addressinfo.html)

/// q_lowenergyadvertisingparameters__addressinfo_new3 constructs a new QLowEnergyAdvertisingParameters::AddressInfo object.
///
/// @param param1 QLowEnergyAdvertisingParameters__AddressInfo*
///
QLowEnergyAdvertisingParameters__AddressInfo* q_lowenergyadvertisingparameters__addressinfo_new3(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters-addressinfo.html#address-var)
///
/// @param self QLowEnergyAdvertisingParameters__AddressInfo*
///
QBluetoothAddress* q_lowenergyadvertisingparameters__addressinfo_address(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters-addressinfo.html#address-var)
///
/// @param self QLowEnergyAdvertisingParameters__AddressInfo*
/// @param address QBluetoothAddress*
///
void q_lowenergyadvertisingparameters__addressinfo_set_address(void* self, void* address);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters-addressinfo.html#type-var)
///
/// @param self QLowEnergyAdvertisingParameters__AddressInfo*
///
/// @return enum QLowEnergyController__RemoteAddressType
///
int32_t q_lowenergyadvertisingparameters__addressinfo_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters-addressinfo.html#type-var)
///
/// @param self QLowEnergyAdvertisingParameters__AddressInfo*
/// @param type enum QLowEnergyController__RemoteAddressType
///
void q_lowenergyadvertisingparameters__addressinfo_set_type(void* self, int32_t type);

/// Delete this object from C++ memory.
///
/// @param self QLowEnergyAdvertisingParameters__AddressInfo*
///
void q_lowenergyadvertisingparameters__addressinfo_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#public-types)

typedef enum {
    QLOWENERGYADVERTISINGPARAMETERS_MODE_ADVIND = 0,
    QLOWENERGYADVERTISINGPARAMETERS_MODE_ADVSCANIND = 2,
    QLOWENERGYADVERTISINGPARAMETERS_MODE_ADVNONCONNIND = 3
} QLowEnergyAdvertisingParameters__Mode;

/// [Upstream resources](https://doc.qt.io/qt-6/qlowenergyadvertisingparameters.html#public-types)

typedef enum {
    QLOWENERGYADVERTISINGPARAMETERS_FILTERPOLICY_IGNOREWHITELIST = 0,
    QLOWENERGYADVERTISINGPARAMETERS_FILTERPOLICY_USEWHITELISTFORSCANNING = 1,
    QLOWENERGYADVERTISINGPARAMETERS_FILTERPOLICY_USEWHITELISTFORCONNECTING = 2,
    QLOWENERGYADVERTISINGPARAMETERS_FILTERPOLICY_USEWHITELISTFORSCANNINGANDCONNECTING = 3
} QLowEnergyAdvertisingParameters__FilterPolicy;

#endif
