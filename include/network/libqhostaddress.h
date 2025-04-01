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

/// https://doc.qt.io/qt-6/qipv6address.html

/// [Qt documentation](https://doc.qt.io/qt-6/qipv6address.html#operator[])
///
/// ``` QIPv6Address* self, int index ```
unsigned char q_ipv6address_operator_subscript(void* self, int index);

/// Delete this object from C++ memory.
///
/// ``` QIPv6Address* self ```
void q_ipv6address_delete(void* self);

/// https://doc.qt.io/qt-6/qhostaddress.html

/// q_hostaddress_new constructs a new QHostAddress object.
///
///
QHostAddress* q_hostaddress_new();

/// q_hostaddress_new2 constructs a new QHostAddress object.
///
/// ``` uint32_t ip4Addr ```
QHostAddress* q_hostaddress_new2(uint32_t ip4Addr);

/// q_hostaddress_new3 constructs a new QHostAddress object.
///
/// ``` unsigned char* ip6Addr ```
QHostAddress* q_hostaddress_new3(unsigned char* ip6Addr);

/// q_hostaddress_new4 constructs a new QHostAddress object.
///
/// ``` QIPv6Address* ip6Addr ```
QHostAddress* q_hostaddress_new4(void* ip6Addr);

/// q_hostaddress_new5 constructs a new QHostAddress object.
///
/// ``` const char* address ```
QHostAddress* q_hostaddress_new5(const char* address);

/// q_hostaddress_new6 constructs a new QHostAddress object.
///
/// ``` QHostAddress* copyVal ```
QHostAddress* q_hostaddress_new6(void* copyVal);

/// q_hostaddress_new7 constructs a new QHostAddress object.
///
/// ``` enum QHostAddress__SpecialAddress address ```
QHostAddress* q_hostaddress_new7(int64_t address);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#operator=)
///
/// ``` QHostAddress* self, QHostAddress* other ```
void q_hostaddress_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#operator=)
///
/// ``` QHostAddress* self, enum QHostAddress__SpecialAddress address ```
void q_hostaddress_operator_assign_with_address(void* self, int64_t address);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#swap)
///
/// ``` QHostAddress* self, QHostAddress* other ```
void q_hostaddress_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#setAddress)
///
/// ``` QHostAddress* self, uint32_t ip4Addr ```
void q_hostaddress_set_address(void* self, uint32_t ip4Addr);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#setAddress)
///
/// ``` QHostAddress* self, unsigned char* ip6Addr ```
void q_hostaddress_set_address_with_ip6_addr(void* self, unsigned char* ip6Addr);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#setAddress)
///
/// ``` QHostAddress* self, QIPv6Address* ip6Addr ```
void q_hostaddress_set_address2(void* self, void* ip6Addr);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#setAddress)
///
/// ``` QHostAddress* self, const char* address ```
bool q_hostaddress_set_address3(void* self, const char* address);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#setAddress)
///
/// ``` QHostAddress* self, enum QHostAddress__SpecialAddress address ```
void q_hostaddress_set_address4(void* self, int64_t address);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#protocol)
///
/// ``` QHostAddress* self ```
int64_t q_hostaddress_protocol(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#toIPv4Address)
///
/// ``` QHostAddress* self ```
uint32_t q_hostaddress_to_i_pv4_address(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#toIPv6Address)
///
/// ``` QHostAddress* self ```
QIPv6Address* q_hostaddress_to_i_pv6_address(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#toString)
///
/// ``` QHostAddress* self ```
const char* q_hostaddress_to_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#scopeId)
///
/// ``` QHostAddress* self ```
const char* q_hostaddress_scope_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#setScopeId)
///
/// ``` QHostAddress* self, const char* id ```
void q_hostaddress_set_scope_id(void* self, const char* id);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isEqual)
///
/// ``` QHostAddress* self, QHostAddress* address ```
bool q_hostaddress_is_equal(void* self, void* address);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#operator==)
///
/// ``` QHostAddress* self, QHostAddress* address ```
bool q_hostaddress_operator_equal(void* self, void* address);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#operator==)
///
/// ``` QHostAddress* self, enum QHostAddress__SpecialAddress address ```
bool q_hostaddress_operator_equal_with_address(void* self, int64_t address);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#operator!=)
///
/// ``` QHostAddress* self, QHostAddress* address ```
bool q_hostaddress_operator_not_equal(void* self, void* address);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#operator!=)
///
/// ``` QHostAddress* self, enum QHostAddress__SpecialAddress address ```
bool q_hostaddress_operator_not_equal_with_address(void* self, int64_t address);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isNull)
///
/// ``` QHostAddress* self ```
bool q_hostaddress_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#clear)
///
/// ``` QHostAddress* self ```
void q_hostaddress_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isInSubnet)
///
/// ``` QHostAddress* self, QHostAddress* subnet, int netmask ```
bool q_hostaddress_is_in_subnet(void* self, void* subnet, int netmask);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isLoopback)
///
/// ``` QHostAddress* self ```
bool q_hostaddress_is_loopback(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isGlobal)
///
/// ``` QHostAddress* self ```
bool q_hostaddress_is_global(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isLinkLocal)
///
/// ``` QHostAddress* self ```
bool q_hostaddress_is_link_local(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isSiteLocal)
///
/// ``` QHostAddress* self ```
bool q_hostaddress_is_site_local(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isUniqueLocalUnicast)
///
/// ``` QHostAddress* self ```
bool q_hostaddress_is_unique_local_unicast(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isMulticast)
///
/// ``` QHostAddress* self ```
bool q_hostaddress_is_multicast(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isBroadcast)
///
/// ``` QHostAddress* self ```
bool q_hostaddress_is_broadcast(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#parseSubnet)
///
/// ``` const char* subnet ```
libqt_pair /* tuple of QHostAddress* and int */ q_hostaddress_parse_subnet(const char* subnet);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#toIPv4Address)
///
/// ``` QHostAddress* self, bool* ok ```
uint32_t q_hostaddress_to_i_pv4_address1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isEqual)
///
/// ``` QHostAddress* self, QHostAddress* address, int mode ```
bool q_hostaddress_is_equal2(void* self, void* address, int64_t mode);

/// Delete this object from C++ memory.
///
/// ``` QHostAddress* self ```
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
