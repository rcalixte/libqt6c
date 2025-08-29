#include "libqhostaddress.hpp"
#include "libqhostaddress.h"

QIPv6Address* q_ipv6address_new() {
    return QIPv6Address_new();
}

QIPv6Address* q_ipv6address_new2(void* param1) {
    return QIPv6Address_new2((QIPv6Address*)param1);
}

unsigned char q_ipv6address_operator_subscript(void* self, int index) {
    return QIPv6Address_OperatorSubscript((QIPv6Address*)self, index);
}

void q_ipv6address_delete(void* self) {
    QIPv6Address_Delete((QIPv6Address*)(self));
}

QHostAddress* q_hostaddress_new() {
    return QHostAddress_new();
}

QHostAddress* q_hostaddress_new2(uint32_t ip4Addr) {
    return QHostAddress_new2(ip4Addr);
}

QHostAddress* q_hostaddress_new3(unsigned char* ip6Addr) {
    return QHostAddress_new3(ip6Addr);
}

QHostAddress* q_hostaddress_new4(void* ip6Addr) {
    return QHostAddress_new4((QIPv6Address*)ip6Addr);
}

QHostAddress* q_hostaddress_new5(const char* address) {
    return QHostAddress_new5(qstring(address));
}

QHostAddress* q_hostaddress_new6(void* copyVal) {
    return QHostAddress_new6((QHostAddress*)copyVal);
}

QHostAddress* q_hostaddress_new7(int32_t address) {
    return QHostAddress_new7(address);
}

void q_hostaddress_operator_assign(void* self, void* other) {
    QHostAddress_OperatorAssign((QHostAddress*)self, (QHostAddress*)other);
}

void q_hostaddress_operator_assign2(void* self, int32_t address) {
    QHostAddress_OperatorAssign2((QHostAddress*)self, address);
}

void q_hostaddress_swap(void* self, void* other) {
    QHostAddress_Swap((QHostAddress*)self, (QHostAddress*)other);
}

void q_hostaddress_set_address(void* self, uint32_t ip4Addr) {
    QHostAddress_SetAddress((QHostAddress*)self, ip4Addr);
}

void q_hostaddress_set_address2(void* self, unsigned char* ip6Addr) {
    QHostAddress_SetAddress2((QHostAddress*)self, ip6Addr);
}

void q_hostaddress_set_address3(void* self, void* ip6Addr) {
    QHostAddress_SetAddress3((QHostAddress*)self, (QIPv6Address*)ip6Addr);
}

bool q_hostaddress_set_address5(void* self, const char* address) {
    return QHostAddress_SetAddress5((QHostAddress*)self, qstring(address));
}

void q_hostaddress_set_address6(void* self, int32_t address) {
    QHostAddress_SetAddress6((QHostAddress*)self, address);
}

int32_t q_hostaddress_protocol(void* self) {
    return QHostAddress_Protocol((QHostAddress*)self);
}

uint32_t q_hostaddress_to_i_pv4_address(void* self) {
    return QHostAddress_ToIPv4Address((QHostAddress*)self);
}

QIPv6Address* q_hostaddress_to_i_pv6_address(void* self) {
    return QHostAddress_ToIPv6Address((QHostAddress*)self);
}

const char* q_hostaddress_to_string(void* self) {
    libqt_string _str = QHostAddress_ToString((QHostAddress*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_hostaddress_scope_id(void* self) {
    libqt_string _str = QHostAddress_ScopeId((QHostAddress*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_hostaddress_set_scope_id(void* self, const char* id) {
    QHostAddress_SetScopeId((QHostAddress*)self, qstring(id));
}

bool q_hostaddress_is_equal(void* self, void* address) {
    return QHostAddress_IsEqual((QHostAddress*)self, (QHostAddress*)address);
}

bool q_hostaddress_operator_equal(void* self, void* address) {
    return QHostAddress_OperatorEqual((QHostAddress*)self, (QHostAddress*)address);
}

bool q_hostaddress_operator_equal2(void* self, int32_t address) {
    return QHostAddress_OperatorEqual2((QHostAddress*)self, address);
}

bool q_hostaddress_operator_not_equal(void* self, void* address) {
    return QHostAddress_OperatorNotEqual((QHostAddress*)self, (QHostAddress*)address);
}

bool q_hostaddress_operator_not_equal2(void* self, int32_t address) {
    return QHostAddress_OperatorNotEqual2((QHostAddress*)self, address);
}

bool q_hostaddress_is_null(void* self) {
    return QHostAddress_IsNull((QHostAddress*)self);
}

void q_hostaddress_clear(void* self) {
    QHostAddress_Clear((QHostAddress*)self);
}

bool q_hostaddress_is_in_subnet(void* self, void* subnet, int netmask) {
    return QHostAddress_IsInSubnet((QHostAddress*)self, (QHostAddress*)subnet, netmask);
}

bool q_hostaddress_is_loopback(void* self) {
    return QHostAddress_IsLoopback((QHostAddress*)self);
}

bool q_hostaddress_is_global(void* self) {
    return QHostAddress_IsGlobal((QHostAddress*)self);
}

bool q_hostaddress_is_link_local(void* self) {
    return QHostAddress_IsLinkLocal((QHostAddress*)self);
}

bool q_hostaddress_is_site_local(void* self) {
    return QHostAddress_IsSiteLocal((QHostAddress*)self);
}

bool q_hostaddress_is_unique_local_unicast(void* self) {
    return QHostAddress_IsUniqueLocalUnicast((QHostAddress*)self);
}

bool q_hostaddress_is_multicast(void* self) {
    return QHostAddress_IsMulticast((QHostAddress*)self);
}

bool q_hostaddress_is_broadcast(void* self) {
    return QHostAddress_IsBroadcast((QHostAddress*)self);
}

bool q_hostaddress_is_private_use(void* self) {
    return QHostAddress_IsPrivateUse((QHostAddress*)self);
}

libqt_pair /* tuple of QHostAddress* and int */ q_hostaddress_parse_subnet(const char* subnet) {
    return QHostAddress_ParseSubnet(qstring(subnet));
}

uint32_t q_hostaddress_to_i_pv4_address1(void* self, bool* ok) {
    return QHostAddress_ToIPv4Address1((QHostAddress*)self, (bool*)ok);
}

bool q_hostaddress_is_equal2(void* self, void* address, int32_t mode) {
    return QHostAddress_IsEqual2((QHostAddress*)self, (QHostAddress*)address, mode);
}

void q_hostaddress_delete(void* self) {
    QHostAddress_Delete((QHostAddress*)(self));
}
