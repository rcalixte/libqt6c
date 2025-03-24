#pragma once
#ifndef SRC_NETWORKQT6C_LIBQHOSTADDRESS_H
#define SRC_NETWORKQT6C_LIBQHOSTADDRESS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include <string.h>

unsigned char q_ipv6address_operator_subscript(void* self, int index);
void q_ipv6address_delete(void* self);

QHostAddress* q_hostaddress_new();
QHostAddress* q_hostaddress_new2(uint32_t ip4Addr);
QHostAddress* q_hostaddress_new3(unsigned char* ip6Addr);
QHostAddress* q_hostaddress_new4(void* ip6Addr);
QHostAddress* q_hostaddress_new5(const char* address);
QHostAddress* q_hostaddress_new6(void* copyVal);
QHostAddress* q_hostaddress_new7(int64_t address);
void q_hostaddress_operator_assign(void* self, void* other);
void q_hostaddress_operator_assign_with_address(void* self, int64_t address);
void q_hostaddress_swap(void* self, void* other);
void q_hostaddress_set_address(void* self, uint32_t ip4Addr);
void q_hostaddress_set_address_with_ip6_addr(void* self, unsigned char* ip6Addr);
void q_hostaddress_set_address2(void* self, void* ip6Addr);
bool q_hostaddress_set_address3(void* self, const char* address);
void q_hostaddress_set_address4(void* self, int64_t address);
int64_t q_hostaddress_protocol(void* self);
uint32_t q_hostaddress_to_i_pv4_address(void* self);
QIPv6Address* q_hostaddress_to_i_pv6_address(void* self);
const char* q_hostaddress_to_string(void* self);
const char* q_hostaddress_scope_id(void* self);
void q_hostaddress_set_scope_id(void* self, const char* id);
bool q_hostaddress_is_equal(void* self, void* address);
bool q_hostaddress_operator_equal(void* self, void* address);
bool q_hostaddress_operator_equal_with_address(void* self, int64_t address);
bool q_hostaddress_operator_not_equal(void* self, void* address);
bool q_hostaddress_operator_not_equal_with_address(void* self, int64_t address);
bool q_hostaddress_is_null(void* self);
void q_hostaddress_clear(void* self);
bool q_hostaddress_is_in_subnet(void* self, void* subnet, int netmask);
bool q_hostaddress_is_loopback(void* self);
bool q_hostaddress_is_global(void* self);
bool q_hostaddress_is_link_local(void* self);
bool q_hostaddress_is_site_local(void* self);
bool q_hostaddress_is_unique_local_unicast(void* self);
bool q_hostaddress_is_multicast(void* self);
bool q_hostaddress_is_broadcast(void* self);
libqt_pair /* tuple of QHostAddress* and int */ q_hostaddress_parse_subnet(const char* subnet);
uint32_t q_hostaddress_to_i_pv4_address1(void* self, bool* ok);
bool q_hostaddress_is_equal2(void* self, void* address, int64_t mode);
void q_hostaddress_delete(void* self);

/// https://doc.qt.io/qt-6/qhostaddress.html#types

typedef enum {
    QHOSTADDRESS_SPECIALADDRESS_NULL = 0,
    QHOSTADDRESS_SPECIALADDRESS_BROADCAST = 1,
    QHOSTADDRESS_SPECIALADDRESS_LOCALHOST = 2,
    QHOSTADDRESS_SPECIALADDRESS_LOCALHOSTIPV6 = 3,
    QHOSTADDRESS_SPECIALADDRESS_ANY = 4,
    QHOSTADDRESS_SPECIALADDRESS_ANYIPV6 = 5,
    QHOSTADDRESS_SPECIALADDRESS_ANYIPV4 = 6
} QHostAddress__SpecialAddress;

typedef enum {
    QHOSTADDRESS_CONVERSIONMODEFLAG_CONVERTV4MAPPEDTOIPV4 = 1,
    QHOSTADDRESS_CONVERSIONMODEFLAG_CONVERTV4COMPATTOIPV4 = 2,
    QHOSTADDRESS_CONVERSIONMODEFLAG_CONVERTUNSPECIFIEDADDRESS = 4,
    QHOSTADDRESS_CONVERSIONMODEFLAG_CONVERTLOCALHOST = 8,
    QHOSTADDRESS_CONVERSIONMODEFLAG_TOLERANTCONVERSION = 255,
    QHOSTADDRESS_CONVERSIONMODEFLAG_STRICTCONVERSION = 0
} QHostAddress__ConversionModeFlag;

#endif
