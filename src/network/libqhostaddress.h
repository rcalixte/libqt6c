#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQHOSTADDRESS_H
#define SRC_NETWORK_QT6C_LIBQHOSTADDRESS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qipv6address.html

/// q_ipv6address_new constructs a new QIPv6Address object.
///
QIPv6Address* q_ipv6address_new();

/// q_ipv6address_new2 constructs a new QIPv6Address object.
///
/// @param param1 QIPv6Address*
QIPv6Address* q_ipv6address_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qipv6address.html#operator-5b-5d)
///
/// @param self QIPv6Address*
/// @param index int
unsigned char* q_ipv6address_operator_subscript(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qipv6address.html#operator-5b-5d)
///
/// @param self QIPv6Address*
/// @param index int
unsigned char q_ipv6address_operator_subscript2(void* self, int index);

/// [Qt documentation](https://doc.qt.io/qt-6/qipv6address.html#dtor.QIPv6Address)
///
/// Delete this object from C++ memory.
///
/// @param self QIPv6Address*
void q_ipv6address_delete(void* self);

/// https://doc.qt.io/qt-6/qhostaddress.html

/// q_hostaddress_new constructs a new QHostAddress object.
///
QHostAddress* q_hostaddress_new();

/// q_hostaddress_new2 constructs a new QHostAddress object.
///
/// @param ip4Addr uint32_t
QHostAddress* q_hostaddress_new2(uint32_t ip4Addr);

/// q_hostaddress_new3 constructs a new QHostAddress object.
///
/// @param ip6Addr unsigned char*
QHostAddress* q_hostaddress_new3(unsigned char* ip6Addr);

/// q_hostaddress_new4 constructs a new QHostAddress object.
///
/// @param ip6Addr QIPv6Address*
QHostAddress* q_hostaddress_new4(void* ip6Addr);

/// q_hostaddress_new5 constructs a new QHostAddress object.
///
/// @param address const char*
QHostAddress* q_hostaddress_new5(const char* address);

/// q_hostaddress_new6 constructs a new QHostAddress object.
///
/// @param copyVal QHostAddress*
QHostAddress* q_hostaddress_new6(void* copyVal);

/// q_hostaddress_new7 constructs a new QHostAddress object.
///
/// @param address enum QHostAddress__SpecialAddress
QHostAddress* q_hostaddress_new7(int32_t address);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#operator-eq)
///
/// @param self QHostAddress*
/// @param other QHostAddress*
void q_hostaddress_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#operator-eq)
///
/// @param self QHostAddress*
/// @param address enum QHostAddress__SpecialAddress
void q_hostaddress_operator_assign2(void* self, int32_t address);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#swap)
///
/// @param self QHostAddress*
/// @param other QHostAddress*
void q_hostaddress_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#setAddress)
///
/// @param self QHostAddress*
/// @param ip4Addr uint32_t
void q_hostaddress_set_address(void* self, uint32_t ip4Addr);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#setAddress)
///
/// @param self QHostAddress*
/// @param ip6Addr unsigned char*
void q_hostaddress_set_address2(void* self, unsigned char* ip6Addr);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#setAddress)
///
/// @param self QHostAddress*
/// @param ip6Addr QIPv6Address*
void q_hostaddress_set_address3(void* self, void* ip6Addr);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#setAddress)
///
/// @param self QHostAddress*
/// @param address const char*
bool q_hostaddress_set_address5(void* self, const char* address);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#setAddress)
///
/// @param self QHostAddress*
/// @param address enum QHostAddress__SpecialAddress
void q_hostaddress_set_address6(void* self, int32_t address);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#protocol)
///
/// @param self QHostAddress*
///
/// @return enum QAbstractSocket__NetworkLayerProtocol
int32_t q_hostaddress_protocol(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#toIPv4Address)
///
/// @param self QHostAddress*
uint32_t q_hostaddress_to_i_pv4_address(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#toIPv6Address)
///
/// @param self QHostAddress*
QIPv6Address* q_hostaddress_to_i_pv6_address(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QHostAddress*
const char* q_hostaddress_to_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#scopeId)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QHostAddress*
const char* q_hostaddress_scope_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#setScopeId)
///
/// @param self QHostAddress*
/// @param id const char*
void q_hostaddress_set_scope_id(void* self, const char* id);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isEqual)
///
/// @param self QHostAddress*
/// @param address QHostAddress*
bool q_hostaddress_is_equal(void* self, void* address);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#operator-eq-eq)
///
/// @param self QHostAddress*
/// @param address QHostAddress*
bool q_hostaddress_operator_equal(void* self, void* address);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#operator-eq-eq)
///
/// @param self QHostAddress*
/// @param address enum QHostAddress__SpecialAddress
bool q_hostaddress_operator_equal2(void* self, int32_t address);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#operator-not-eq)
///
/// @param self QHostAddress*
/// @param address QHostAddress*
bool q_hostaddress_operator_not_equal(void* self, void* address);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#operator-not-eq)
///
/// @param self QHostAddress*
/// @param address enum QHostAddress__SpecialAddress
bool q_hostaddress_operator_not_equal2(void* self, int32_t address);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isNull)
///
/// @param self QHostAddress*
bool q_hostaddress_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#clear)
///
/// @param self QHostAddress*
void q_hostaddress_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isInSubnet)
///
/// @param self QHostAddress*
/// @param subnet QHostAddress*
/// @param netmask int
bool q_hostaddress_is_in_subnet(void* self, void* subnet, int netmask);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isLoopback)
///
/// @param self QHostAddress*
bool q_hostaddress_is_loopback(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isGlobal)
///
/// @param self QHostAddress*
bool q_hostaddress_is_global(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isLinkLocal)
///
/// @param self QHostAddress*
bool q_hostaddress_is_link_local(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isSiteLocal)
///
/// @param self QHostAddress*
bool q_hostaddress_is_site_local(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isUniqueLocalUnicast)
///
/// @param self QHostAddress*
bool q_hostaddress_is_unique_local_unicast(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isMulticast)
///
/// @param self QHostAddress*
bool q_hostaddress_is_multicast(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isBroadcast)
///
/// @param self QHostAddress*
bool q_hostaddress_is_broadcast(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isPrivateUse)
///
/// @param self QHostAddress*
bool q_hostaddress_is_private_use(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#parseSubnet)
///
/// @param subnet const char*
libqt_pair /* tuple of QHostAddress* and int */ q_hostaddress_parse_subnet(const char* subnet);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#toIPv4Address)
///
/// @param self QHostAddress*
/// @param ok bool*
uint32_t q_hostaddress_to_i_pv4_address1(void* self, bool* ok);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isEqual)
///
/// @param self QHostAddress*
/// @param address QHostAddress*
/// @param mode flag of enum QHostAddress__ConversionModeFlag
bool q_hostaddress_is_equal2(void* self, void* address, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#dtor.QHostAddress)
///
/// Delete this object from C++ memory.
///
/// @param self QHostAddress*
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
