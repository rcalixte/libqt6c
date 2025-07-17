#pragma once
#ifndef SRC_NETWORKQT6C_LIBQNETWORKINTERFACE_H
#define SRC_NETWORKQT6C_LIBQNETWORKINTERFACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qnetworkaddressentry.html

/// q_networkaddressentry_new constructs a new QNetworkAddressEntry object.
///
///
QNetworkAddressEntry* q_networkaddressentry_new();

/// q_networkaddressentry_new2 constructs a new QNetworkAddressEntry object.
///
/// ``` QNetworkAddressEntry* other ```
QNetworkAddressEntry* q_networkaddressentry_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#operator-eq)
///
/// ``` QNetworkAddressEntry* self, QNetworkAddressEntry* other ```
void q_networkaddressentry_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#swap)
///
/// ``` QNetworkAddressEntry* self, QNetworkAddressEntry* other ```
void q_networkaddressentry_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#operator-eq-eq)
///
/// ``` QNetworkAddressEntry* self, QNetworkAddressEntry* other ```
bool q_networkaddressentry_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#operator-not-eq)
///
/// ``` QNetworkAddressEntry* self, QNetworkAddressEntry* other ```
bool q_networkaddressentry_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#dnsEligibility)
///
/// ``` QNetworkAddressEntry* self ```
int64_t q_networkaddressentry_dns_eligibility(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setDnsEligibility)
///
/// ``` QNetworkAddressEntry* self, enum QNetworkAddressEntry__DnsEligibilityStatus status ```
void q_networkaddressentry_set_dns_eligibility(void* self, int64_t status);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#ip)
///
/// ``` QNetworkAddressEntry* self ```
QHostAddress* q_networkaddressentry_ip(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setIp)
///
/// ``` QNetworkAddressEntry* self, QHostAddress* newIp ```
void q_networkaddressentry_set_ip(void* self, void* newIp);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#netmask)
///
/// ``` QNetworkAddressEntry* self ```
QHostAddress* q_networkaddressentry_netmask(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setNetmask)
///
/// ``` QNetworkAddressEntry* self, QHostAddress* newNetmask ```
void q_networkaddressentry_set_netmask(void* self, void* newNetmask);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#prefixLength)
///
/// ``` QNetworkAddressEntry* self ```
int32_t q_networkaddressentry_prefix_length(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setPrefixLength)
///
/// ``` QNetworkAddressEntry* self, int length ```
void q_networkaddressentry_set_prefix_length(void* self, int length);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#broadcast)
///
/// ``` QNetworkAddressEntry* self ```
QHostAddress* q_networkaddressentry_broadcast(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setBroadcast)
///
/// ``` QNetworkAddressEntry* self, QHostAddress* newBroadcast ```
void q_networkaddressentry_set_broadcast(void* self, void* newBroadcast);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#isLifetimeKnown)
///
/// ``` QNetworkAddressEntry* self ```
bool q_networkaddressentry_is_lifetime_known(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#preferredLifetime)
///
/// ``` QNetworkAddressEntry* self ```
QDeadlineTimer* q_networkaddressentry_preferred_lifetime(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#validityLifetime)
///
/// ``` QNetworkAddressEntry* self ```
QDeadlineTimer* q_networkaddressentry_validity_lifetime(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setAddressLifetime)
///
/// ``` QNetworkAddressEntry* self, QDeadlineTimer* preferred, QDeadlineTimer* validity ```
void q_networkaddressentry_set_address_lifetime(void* self, void* preferred, void* validity);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#clearAddressLifetime)
///
/// ``` QNetworkAddressEntry* self ```
void q_networkaddressentry_clear_address_lifetime(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#isPermanent)
///
/// ``` QNetworkAddressEntry* self ```
bool q_networkaddressentry_is_permanent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#isTemporary)
///
/// ``` QNetworkAddressEntry* self ```
bool q_networkaddressentry_is_temporary(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#dtor.QNetworkAddressEntry)
///
/// Delete this object from C++ memory.
///
/// ``` QNetworkAddressEntry* self ```
void q_networkaddressentry_delete(void* self);

/// https://doc.qt.io/qt-6/qnetworkinterface.html

/// q_networkinterface_new constructs a new QNetworkInterface object.
///
///
QNetworkInterface* q_networkinterface_new();

/// q_networkinterface_new2 constructs a new QNetworkInterface object.
///
/// ``` QNetworkInterface* other ```
QNetworkInterface* q_networkinterface_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#operator-eq)
///
/// ``` QNetworkInterface* self, QNetworkInterface* other ```
void q_networkinterface_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#swap)
///
/// ``` QNetworkInterface* self, QNetworkInterface* other ```
void q_networkinterface_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#isValid)
///
/// ``` QNetworkInterface* self ```
bool q_networkinterface_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#index)
///
/// ``` QNetworkInterface* self ```
int32_t q_networkinterface_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#maximumTransmissionUnit)
///
/// ``` QNetworkInterface* self ```
int32_t q_networkinterface_maximum_transmission_unit(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#name)
///
/// ``` QNetworkInterface* self ```
const char* q_networkinterface_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#humanReadableName)
///
/// ``` QNetworkInterface* self ```
const char* q_networkinterface_human_readable_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#flags)
///
/// ``` QNetworkInterface* self ```
int64_t q_networkinterface_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#type)
///
/// ``` QNetworkInterface* self ```
int64_t q_networkinterface_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#hardwareAddress)
///
/// ``` QNetworkInterface* self ```
const char* q_networkinterface_hardware_address(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#addressEntries)
///
/// ``` QNetworkInterface* self ```
libqt_list /* of QNetworkAddressEntry* */ q_networkinterface_address_entries(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#interfaceIndexFromName)
///
/// ``` const char* name ```
int32_t q_networkinterface_interface_index_from_name(const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#interfaceFromName)
///
/// ``` const char* name ```
QNetworkInterface* q_networkinterface_interface_from_name(const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#interfaceFromIndex)
///
/// ``` int index ```
QNetworkInterface* q_networkinterface_interface_from_index(int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#interfaceNameFromIndex)
///
/// ``` int index ```
const char* q_networkinterface_interface_name_from_index(int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#allInterfaces)
///
///
libqt_list /* of QNetworkInterface* */ q_networkinterface_all_interfaces();

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#allAddresses)
///
///
libqt_list /* of QHostAddress* */ q_networkinterface_all_addresses();

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#dtor.QNetworkInterface)
///
/// Delete this object from C++ memory.
///
/// ``` QNetworkInterface* self ```
void q_networkinterface_delete(void* self);

/// https://doc.qt.io/qt-6/qnetworkinterface.html#types

typedef enum {
    QNETWORKADDRESSENTRY_DNSELIGIBILITYSTATUS_DNSELIGIBILITYUNKNOWN = -1,
    QNETWORKADDRESSENTRY_DNSELIGIBILITYSTATUS_DNSINELIGIBLE = 0,
    QNETWORKADDRESSENTRY_DNSELIGIBILITYSTATUS_DNSELIGIBLE = 1
} QNetworkAddressEntry__DnsEligibilityStatus;

typedef enum {
    QNETWORKINTERFACE_INTERFACEFLAG_ISUP = 1,
    QNETWORKINTERFACE_INTERFACEFLAG_ISRUNNING = 2,
    QNETWORKINTERFACE_INTERFACEFLAG_CANBROADCAST = 4,
    QNETWORKINTERFACE_INTERFACEFLAG_ISLOOPBACK = 8,
    QNETWORKINTERFACE_INTERFACEFLAG_ISPOINTTOPOINT = 16,
    QNETWORKINTERFACE_INTERFACEFLAG_CANMULTICAST = 32
} QNetworkInterface__InterfaceFlag;

typedef enum {
    QNETWORKINTERFACE_INTERFACETYPE_LOOPBACK = 1,
    QNETWORKINTERFACE_INTERFACETYPE_VIRTUAL = 2,
    QNETWORKINTERFACE_INTERFACETYPE_ETHERNET = 3,
    QNETWORKINTERFACE_INTERFACETYPE_SLIP = 4,
    QNETWORKINTERFACE_INTERFACETYPE_CANBUS = 5,
    QNETWORKINTERFACE_INTERFACETYPE_PPP = 6,
    QNETWORKINTERFACE_INTERFACETYPE_FDDI = 7,
    QNETWORKINTERFACE_INTERFACETYPE_WIFI = 8,
    QNETWORKINTERFACE_INTERFACETYPE_IEEE80211 = 8,
    QNETWORKINTERFACE_INTERFACETYPE_PHONET = 9,
    QNETWORKINTERFACE_INTERFACETYPE_IEEE802154 = 10,
    QNETWORKINTERFACE_INTERFACETYPE_SIXLOWPAN = 11,
    QNETWORKINTERFACE_INTERFACETYPE_IEEE80216 = 12,
    QNETWORKINTERFACE_INTERFACETYPE_IEEE1394 = 13,
    QNETWORKINTERFACE_INTERFACETYPE_UNKNOWN = 0
} QNetworkInterface__InterfaceType;

#endif
