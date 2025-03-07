#pragma once
#ifndef SRC_NETWORKQT6C_LIBQNETWORKINTERFACE_H
#define SRC_NETWORKQT6C_LIBQNETWORKINTERFACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqdeadlinetimer.h"
#include "libqhostaddress.h"
#include <string.h>

QNetworkAddressEntry* q_networkaddressentry_new();
QNetworkAddressEntry* q_networkaddressentry_new2(void* other);
void q_networkaddressentry_operator_assign(void* self, void* other);
void q_networkaddressentry_swap(void* self, void* other);
bool q_networkaddressentry_operator_equal(void* self, void* other);
bool q_networkaddressentry_operator_not_equal(void* self, void* other);
int64_t q_networkaddressentry_dns_eligibility(void* self);
void q_networkaddressentry_set_dns_eligibility(void* self, int64_t status);
QHostAddress* q_networkaddressentry_ip(void* self);
void q_networkaddressentry_set_ip(void* self, void* newIp);
QHostAddress* q_networkaddressentry_netmask(void* self);
void q_networkaddressentry_set_netmask(void* self, void* newNetmask);
int32_t q_networkaddressentry_prefix_length(void* self);
void q_networkaddressentry_set_prefix_length(void* self, int length);
QHostAddress* q_networkaddressentry_broadcast(void* self);
void q_networkaddressentry_set_broadcast(void* self, void* newBroadcast);
bool q_networkaddressentry_is_lifetime_known(void* self);
QDeadlineTimer* q_networkaddressentry_preferred_lifetime(void* self);
QDeadlineTimer* q_networkaddressentry_validity_lifetime(void* self);
void q_networkaddressentry_set_address_lifetime(void* self, void* preferred, void* validity);
void q_networkaddressentry_clear_address_lifetime(void* self);
bool q_networkaddressentry_is_permanent(void* self);
bool q_networkaddressentry_is_temporary(void* self);
void q_networkaddressentry_delete(void* self);

QNetworkInterface* q_networkinterface_new();
QNetworkInterface* q_networkinterface_new2(void* other);
void q_networkinterface_operator_assign(void* self, void* other);
void q_networkinterface_swap(void* self, void* other);
bool q_networkinterface_is_valid(void* self);
int32_t q_networkinterface_index(void* self);
int32_t q_networkinterface_maximum_transmission_unit(void* self);
const char* q_networkinterface_name(void* self);
const char* q_networkinterface_human_readable_name(void* self);
int64_t q_networkinterface_flags(void* self);
int64_t q_networkinterface_type(void* self);
const char* q_networkinterface_hardware_address(void* self);
libqt_list /* of QNetworkAddressEntry* */ q_networkinterface_address_entries(void* self);
int32_t q_networkinterface_interface_index_from_name(const char* name);
QNetworkInterface* q_networkinterface_interface_from_name(const char* name);
QNetworkInterface* q_networkinterface_interface_from_index(int index);
const char* q_networkinterface_interface_name_from_index(int index);
libqt_list /* of QNetworkInterface* */ q_networkinterface_all_interfaces();
libqt_list /* of QHostAddress* */ q_networkinterface_all_addresses();
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
