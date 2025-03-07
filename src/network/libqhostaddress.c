#include <string.h>
#include "libqhostaddress.hpp"
#include "libqhostaddress.h"

/// https://doc.qt.io/qt-6/qipv6address.html

/// [Qt documentation](https://doc.qt.io/qt-6/qipv6address.html#operator[])
///
/// ``` QIPv6Address* self, int index ```
unsigned char q_ipv6address_operator_subscript(void* self, int index) {
    return QIPv6Address_OperatorSubscript((QIPv6Address*)self, index);
}

/// Delete this object from C++ memory.
///
/// ``` QIPv6Address* self ```
void q_ipv6address_delete(void* self) {
    QIPv6Address_Delete((QIPv6Address*)(self));
}

/// https://doc.qt.io/qt-6/qhostaddress.html

/// q_hostaddress_new constructs a new QHostAddress object.
///
///
QHostAddress* q_hostaddress_new() {
    return QHostAddress_new();
}

/// q_hostaddress_new2 constructs a new QHostAddress object.
///
/// ``` uint32_t ip4Addr ```
QHostAddress* q_hostaddress_new2(uint32_t ip4Addr) {
    return QHostAddress_new2(ip4Addr);
}

/// q_hostaddress_new3 constructs a new QHostAddress object.
///
/// ``` unsigned char* ip6Addr ```
QHostAddress* q_hostaddress_new3(unsigned char* ip6Addr) {
    return QHostAddress_new3(ip6Addr);
}

/// q_hostaddress_new4 constructs a new QHostAddress object.
///
/// ``` QIPv6Address* ip6Addr ```
QHostAddress* q_hostaddress_new4(void* ip6Addr) {
    return QHostAddress_new4((QIPv6Address*)ip6Addr);
}

/// q_hostaddress_new5 constructs a new QHostAddress object.
///
/// ``` const char* address ```
QHostAddress* q_hostaddress_new5(const char* address) {
    return QHostAddress_new5(qstring(address));
}

/// q_hostaddress_new6 constructs a new QHostAddress object.
///
/// ``` QHostAddress* copyVal ```
QHostAddress* q_hostaddress_new6(void* copyVal) {
    return QHostAddress_new6((QHostAddress*)copyVal);
}

/// q_hostaddress_new7 constructs a new QHostAddress object.
///
/// ``` enum QHostAddress__SpecialAddress address ```
QHostAddress* q_hostaddress_new7(int64_t address) {
    return QHostAddress_new7(address);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#operator=)
///
/// ``` QHostAddress* self, QHostAddress* other ```
void q_hostaddress_operator_assign(void* self, void* other) {
    QHostAddress_OperatorAssign((QHostAddress*)self, (QHostAddress*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#operator=)
///
/// ``` QHostAddress* self, enum QHostAddress__SpecialAddress address ```
void q_hostaddress_operator_assign_with_address(void* self, int64_t address) {
    QHostAddress_OperatorAssignWithAddress((QHostAddress*)self, address);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#swap)
///
/// ``` QHostAddress* self, QHostAddress* other ```
void q_hostaddress_swap(void* self, void* other) {
    QHostAddress_Swap((QHostAddress*)self, (QHostAddress*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#setAddress)
///
/// ``` QHostAddress* self, uint32_t ip4Addr ```
void q_hostaddress_set_address(void* self, uint32_t ip4Addr) {
    QHostAddress_SetAddress((QHostAddress*)self, ip4Addr);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#setAddress)
///
/// ``` QHostAddress* self, unsigned char* ip6Addr ```
void q_hostaddress_set_address_with_ip6_addr(void* self, unsigned char* ip6Addr) {
    QHostAddress_SetAddressWithIp6Addr((QHostAddress*)self, ip6Addr);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#setAddress)
///
/// ``` QHostAddress* self, QIPv6Address* ip6Addr ```
void q_hostaddress_set_address2(void* self, void* ip6Addr) {
    QHostAddress_SetAddress2((QHostAddress*)self, (QIPv6Address*)ip6Addr);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#setAddress)
///
/// ``` QHostAddress* self, const char* address ```
bool q_hostaddress_set_address3(void* self, const char* address) {
    return QHostAddress_SetAddress3((QHostAddress*)self, qstring(address));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#setAddress)
///
/// ``` QHostAddress* self, enum QHostAddress__SpecialAddress address ```
void q_hostaddress_set_address4(void* self, int64_t address) {
    QHostAddress_SetAddress4((QHostAddress*)self, address);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#protocol)
///
/// ``` QHostAddress* self ```
int64_t q_hostaddress_protocol(void* self) {
    return QHostAddress_Protocol((QHostAddress*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#toIPv4Address)
///
/// ``` QHostAddress* self ```
uint32_t q_hostaddress_to_i_pv4_address(void* self) {
    return QHostAddress_ToIPv4Address((QHostAddress*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#toIPv6Address)
///
/// ``` QHostAddress* self ```
QIPv6Address* q_hostaddress_to_i_pv6_address(void* self) {
    return QHostAddress_ToIPv6Address((QHostAddress*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#toString)
///
/// ``` QHostAddress* self ```
const char* q_hostaddress_to_string(void* self) {
    libqt_string _str = QHostAddress_ToString((QHostAddress*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#scopeId)
///
/// ``` QHostAddress* self ```
const char* q_hostaddress_scope_id(void* self) {
    libqt_string _str = QHostAddress_ScopeId((QHostAddress*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#setScopeId)
///
/// ``` QHostAddress* self, const char* id ```
void q_hostaddress_set_scope_id(void* self, const char* id) {
    QHostAddress_SetScopeId((QHostAddress*)self, qstring(id));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isEqual)
///
/// ``` QHostAddress* self, QHostAddress* address ```
bool q_hostaddress_is_equal(void* self, void* address) {
    return QHostAddress_IsEqual((QHostAddress*)self, (QHostAddress*)address);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#operator==)
///
/// ``` QHostAddress* self, QHostAddress* address ```
bool q_hostaddress_operator_equal(void* self, void* address) {
    return QHostAddress_OperatorEqual((QHostAddress*)self, (QHostAddress*)address);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#operator==)
///
/// ``` QHostAddress* self, enum QHostAddress__SpecialAddress address ```
bool q_hostaddress_operator_equal_with_address(void* self, int64_t address) {
    return QHostAddress_OperatorEqualWithAddress((QHostAddress*)self, address);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#operator!=)
///
/// ``` QHostAddress* self, QHostAddress* address ```
bool q_hostaddress_operator_not_equal(void* self, void* address) {
    return QHostAddress_OperatorNotEqual((QHostAddress*)self, (QHostAddress*)address);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#operator!=)
///
/// ``` QHostAddress* self, enum QHostAddress__SpecialAddress address ```
bool q_hostaddress_operator_not_equal_with_address(void* self, int64_t address) {
    return QHostAddress_OperatorNotEqualWithAddress((QHostAddress*)self, address);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isNull)
///
/// ``` QHostAddress* self ```
bool q_hostaddress_is_null(void* self) {
    return QHostAddress_IsNull((QHostAddress*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#clear)
///
/// ``` QHostAddress* self ```
void q_hostaddress_clear(void* self) {
    QHostAddress_Clear((QHostAddress*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isInSubnet)
///
/// ``` QHostAddress* self, QHostAddress* subnet, int netmask ```
bool q_hostaddress_is_in_subnet(void* self, void* subnet, int netmask) {
    return QHostAddress_IsInSubnet((QHostAddress*)self, (QHostAddress*)subnet, netmask);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isInSubnet)
///
/// ``` QHostAddress* self, libqt_pair /* tuple of QHostAddress* and int */ subnet ```
bool q_hostaddress_is_in_subnet_with_subnet(void* self, libqt_pair /* tuple of QHostAddress* and int */ subnet) {
    return QHostAddress_IsInSubnetWithSubnet((QHostAddress*)self, subnet);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isLoopback)
///
/// ``` QHostAddress* self ```
bool q_hostaddress_is_loopback(void* self) {
    return QHostAddress_IsLoopback((QHostAddress*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isGlobal)
///
/// ``` QHostAddress* self ```
bool q_hostaddress_is_global(void* self) {
    return QHostAddress_IsGlobal((QHostAddress*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isLinkLocal)
///
/// ``` QHostAddress* self ```
bool q_hostaddress_is_link_local(void* self) {
    return QHostAddress_IsLinkLocal((QHostAddress*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isSiteLocal)
///
/// ``` QHostAddress* self ```
bool q_hostaddress_is_site_local(void* self) {
    return QHostAddress_IsSiteLocal((QHostAddress*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isUniqueLocalUnicast)
///
/// ``` QHostAddress* self ```
bool q_hostaddress_is_unique_local_unicast(void* self) {
    return QHostAddress_IsUniqueLocalUnicast((QHostAddress*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isMulticast)
///
/// ``` QHostAddress* self ```
bool q_hostaddress_is_multicast(void* self) {
    return QHostAddress_IsMulticast((QHostAddress*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isBroadcast)
///
/// ``` QHostAddress* self ```
bool q_hostaddress_is_broadcast(void* self) {
    return QHostAddress_IsBroadcast((QHostAddress*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#parseSubnet)
///
/// ``` const char* subnet ```
libqt_pair /* tuple of QHostAddress* and int */ q_hostaddress_parse_subnet(const char* subnet) {
    return QHostAddress_ParseSubnet(qstring(subnet));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#toIPv4Address)
///
/// ``` QHostAddress* self, bool* ok ```
uint32_t q_hostaddress_to_i_pv4_address1(void* self, bool* ok) {
    return QHostAddress_ToIPv4Address1((QHostAddress*)self, (bool*)ok);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhostaddress.html#isEqual)
///
/// ``` QHostAddress* self, QHostAddress* address, int mode ```
bool q_hostaddress_is_equal2(void* self, void* address, int64_t mode) {
    return QHostAddress_IsEqual2((QHostAddress*)self, (QHostAddress*)address, mode);
}

/// Delete this object from C++ memory.
///
/// ``` QHostAddress* self ```
void q_hostaddress_delete(void* self) {
    QHostAddress_Delete((QHostAddress*)(self));
}