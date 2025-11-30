#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQNETWORKINTERFACE_H
#define SRC_NETWORK_QT6C_LIBQNETWORKINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qnetworkaddressentry.html

/// q_networkaddressentry_new constructs a new QNetworkAddressEntry object.
///
QNetworkAddressEntry* q_networkaddressentry_new();

/// q_networkaddressentry_new2 constructs a new QNetworkAddressEntry object.
///
/// @param other QNetworkAddressEntry*
QNetworkAddressEntry* q_networkaddressentry_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#operator-eq)
///
/// @param self QNetworkAddressEntry*
/// @param other QNetworkAddressEntry*
void q_networkaddressentry_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#swap)
///
/// @param self QNetworkAddressEntry*
/// @param other QNetworkAddressEntry*
void q_networkaddressentry_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#operator-eq-eq)
///
/// @param self QNetworkAddressEntry*
/// @param other QNetworkAddressEntry*
bool q_networkaddressentry_operator_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#operator-not-eq)
///
/// @param self QNetworkAddressEntry*
/// @param other QNetworkAddressEntry*
bool q_networkaddressentry_operator_not_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#dnsEligibility)
///
/// @param self QNetworkAddressEntry*
///
/// @return enum QNetworkAddressEntry__DnsEligibilityStatus
int8_t q_networkaddressentry_dns_eligibility(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setDnsEligibility)
///
/// @param self QNetworkAddressEntry*
/// @param status enum QNetworkAddressEntry__DnsEligibilityStatus
void q_networkaddressentry_set_dns_eligibility(void* self, int8_t status);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#ip)
///
/// @param self QNetworkAddressEntry*
QHostAddress* q_networkaddressentry_ip(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setIp)
///
/// @param self QNetworkAddressEntry*
/// @param newIp QHostAddress*
void q_networkaddressentry_set_ip(void* self, void* newIp);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#netmask)
///
/// @param self QNetworkAddressEntry*
QHostAddress* q_networkaddressentry_netmask(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setNetmask)
///
/// @param self QNetworkAddressEntry*
/// @param newNetmask QHostAddress*
void q_networkaddressentry_set_netmask(void* self, void* newNetmask);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#prefixLength)
///
/// @param self QNetworkAddressEntry*
int32_t q_networkaddressentry_prefix_length(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setPrefixLength)
///
/// @param self QNetworkAddressEntry*
/// @param length int
void q_networkaddressentry_set_prefix_length(void* self, int length);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#broadcast)
///
/// @param self QNetworkAddressEntry*
QHostAddress* q_networkaddressentry_broadcast(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setBroadcast)
///
/// @param self QNetworkAddressEntry*
/// @param newBroadcast QHostAddress*
void q_networkaddressentry_set_broadcast(void* self, void* newBroadcast);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#isLifetimeKnown)
///
/// @param self QNetworkAddressEntry*
bool q_networkaddressentry_is_lifetime_known(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#preferredLifetime)
///
/// @param self QNetworkAddressEntry*
QDeadlineTimer* q_networkaddressentry_preferred_lifetime(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#validityLifetime)
///
/// @param self QNetworkAddressEntry*
QDeadlineTimer* q_networkaddressentry_validity_lifetime(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setAddressLifetime)
///
/// @param self QNetworkAddressEntry*
/// @param preferred QDeadlineTimer*
/// @param validity QDeadlineTimer*
void q_networkaddressentry_set_address_lifetime(void* self, void* preferred, void* validity);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#clearAddressLifetime)
///
/// @param self QNetworkAddressEntry*
void q_networkaddressentry_clear_address_lifetime(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#isPermanent)
///
/// @param self QNetworkAddressEntry*
bool q_networkaddressentry_is_permanent(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#isTemporary)
///
/// @param self QNetworkAddressEntry*
bool q_networkaddressentry_is_temporary(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkaddressentry.html#dtor.QNetworkAddressEntry)
///
/// Delete this object from C++ memory.
///
/// @param self QNetworkAddressEntry*
void q_networkaddressentry_delete(void* self);

/// https://doc.qt.io/qt-6/qnetworkinterface.html

/// q_networkinterface_new constructs a new QNetworkInterface object.
///
QNetworkInterface* q_networkinterface_new();

/// q_networkinterface_new2 constructs a new QNetworkInterface object.
///
/// @param other QNetworkInterface*
QNetworkInterface* q_networkinterface_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#operator-eq)
///
/// @param self QNetworkInterface*
/// @param other QNetworkInterface*
void q_networkinterface_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#swap)
///
/// @param self QNetworkInterface*
/// @param other QNetworkInterface*
void q_networkinterface_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#isValid)
///
/// @param self QNetworkInterface*
bool q_networkinterface_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#index)
///
/// @param self QNetworkInterface*
int32_t q_networkinterface_index(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#maximumTransmissionUnit)
///
/// @param self QNetworkInterface*
int32_t q_networkinterface_maximum_transmission_unit(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QNetworkInterface*
const char* q_networkinterface_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#humanReadableName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QNetworkInterface*
const char* q_networkinterface_human_readable_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#flags)
///
/// @param self QNetworkInterface*
///
/// @return flag of enum QNetworkInterface__InterfaceFlag
int32_t q_networkinterface_flags(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#type)
///
/// @param self QNetworkInterface*
///
/// @return enum QNetworkInterface__InterfaceType
int32_t q_networkinterface_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#hardwareAddress)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QNetworkInterface*
const char* q_networkinterface_hardware_address(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#addressEntries)
///
/// @param self QNetworkInterface*
libqt_list /* of QNetworkAddressEntry* */ q_networkinterface_address_entries(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#interfaceIndexFromName)
///
/// @param name const char*
int32_t q_networkinterface_interface_index_from_name(const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#interfaceFromName)
///
/// @param name const char*
QNetworkInterface* q_networkinterface_interface_from_name(const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#interfaceFromIndex)
///
/// @param index int
QNetworkInterface* q_networkinterface_interface_from_index(int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#interfaceNameFromIndex)
///
/// Caller is responsible for freeing the returned memory
///
/// @param index int
const char* q_networkinterface_interface_name_from_index(int index);

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#allInterfaces)
///
libqt_list /* of QNetworkInterface* */ q_networkinterface_all_interfaces();

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#allAddresses)
///
libqt_list /* of QHostAddress* */ q_networkinterface_all_addresses();

/// [Upstream resources](https://doc.qt.io/qt-6/qnetworkinterface.html#dtor.QNetworkInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QNetworkInterface*
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
