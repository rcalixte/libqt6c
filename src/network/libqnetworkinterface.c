#include "../libqdeadlinetimer.hpp"
#include "libqhostaddress.hpp"
#include <string.h>
#include "libqnetworkinterface.hpp"
#include "libqnetworkinterface.h"

/// https://doc.qt.io/qt-6/qnetworkaddressentry.html

/// q_networkaddressentry_new constructs a new QNetworkAddressEntry object.
///
///
QNetworkAddressEntry* q_networkaddressentry_new() {
    return QNetworkAddressEntry_new();
}

/// q_networkaddressentry_new2 constructs a new QNetworkAddressEntry object.
///
/// ``` QNetworkAddressEntry* other ```
QNetworkAddressEntry* q_networkaddressentry_new2(void* other) {
    return QNetworkAddressEntry_new2((QNetworkAddressEntry*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#operator=)
///
/// ``` QNetworkAddressEntry* self, QNetworkAddressEntry* other ```
void q_networkaddressentry_operator_assign(void* self, void* other) {
    QNetworkAddressEntry_OperatorAssign((QNetworkAddressEntry*)self, (QNetworkAddressEntry*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#swap)
///
/// ``` QNetworkAddressEntry* self, QNetworkAddressEntry* other ```
void q_networkaddressentry_swap(void* self, void* other) {
    QNetworkAddressEntry_Swap((QNetworkAddressEntry*)self, (QNetworkAddressEntry*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#operator==)
///
/// ``` QNetworkAddressEntry* self, QNetworkAddressEntry* other ```
bool q_networkaddressentry_operator_equal(void* self, void* other) {
    return QNetworkAddressEntry_OperatorEqual((QNetworkAddressEntry*)self, (QNetworkAddressEntry*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#operator!=)
///
/// ``` QNetworkAddressEntry* self, QNetworkAddressEntry* other ```
bool q_networkaddressentry_operator_not_equal(void* self, void* other) {
    return QNetworkAddressEntry_OperatorNotEqual((QNetworkAddressEntry*)self, (QNetworkAddressEntry*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#dnsEligibility)
///
/// ``` QNetworkAddressEntry* self ```
int64_t q_networkaddressentry_dns_eligibility(void* self) {
    return QNetworkAddressEntry_DnsEligibility((QNetworkAddressEntry*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setDnsEligibility)
///
/// ``` QNetworkAddressEntry* self, enum QNetworkAddressEntry__DnsEligibilityStatus status ```
void q_networkaddressentry_set_dns_eligibility(void* self, int64_t status) {
    QNetworkAddressEntry_SetDnsEligibility((QNetworkAddressEntry*)self, status);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#ip)
///
/// ``` QNetworkAddressEntry* self ```
QHostAddress* q_networkaddressentry_ip(void* self) {
    return QNetworkAddressEntry_Ip((QNetworkAddressEntry*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setIp)
///
/// ``` QNetworkAddressEntry* self, QHostAddress* newIp ```
void q_networkaddressentry_set_ip(void* self, void* newIp) {
    QNetworkAddressEntry_SetIp((QNetworkAddressEntry*)self, (QHostAddress*)newIp);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#netmask)
///
/// ``` QNetworkAddressEntry* self ```
QHostAddress* q_networkaddressentry_netmask(void* self) {
    return QNetworkAddressEntry_Netmask((QNetworkAddressEntry*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setNetmask)
///
/// ``` QNetworkAddressEntry* self, QHostAddress* newNetmask ```
void q_networkaddressentry_set_netmask(void* self, void* newNetmask) {
    QNetworkAddressEntry_SetNetmask((QNetworkAddressEntry*)self, (QHostAddress*)newNetmask);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#prefixLength)
///
/// ``` QNetworkAddressEntry* self ```
int32_t q_networkaddressentry_prefix_length(void* self) {
    return QNetworkAddressEntry_PrefixLength((QNetworkAddressEntry*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setPrefixLength)
///
/// ``` QNetworkAddressEntry* self, int length ```
void q_networkaddressentry_set_prefix_length(void* self, int length) {
    QNetworkAddressEntry_SetPrefixLength((QNetworkAddressEntry*)self, length);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#broadcast)
///
/// ``` QNetworkAddressEntry* self ```
QHostAddress* q_networkaddressentry_broadcast(void* self) {
    return QNetworkAddressEntry_Broadcast((QNetworkAddressEntry*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setBroadcast)
///
/// ``` QNetworkAddressEntry* self, QHostAddress* newBroadcast ```
void q_networkaddressentry_set_broadcast(void* self, void* newBroadcast) {
    QNetworkAddressEntry_SetBroadcast((QNetworkAddressEntry*)self, (QHostAddress*)newBroadcast);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#isLifetimeKnown)
///
/// ``` QNetworkAddressEntry* self ```
bool q_networkaddressentry_is_lifetime_known(void* self) {
    return QNetworkAddressEntry_IsLifetimeKnown((QNetworkAddressEntry*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#preferredLifetime)
///
/// ``` QNetworkAddressEntry* self ```
QDeadlineTimer* q_networkaddressentry_preferred_lifetime(void* self) {
    return QNetworkAddressEntry_PreferredLifetime((QNetworkAddressEntry*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#validityLifetime)
///
/// ``` QNetworkAddressEntry* self ```
QDeadlineTimer* q_networkaddressentry_validity_lifetime(void* self) {
    return QNetworkAddressEntry_ValidityLifetime((QNetworkAddressEntry*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#setAddressLifetime)
///
/// ``` QNetworkAddressEntry* self, QDeadlineTimer* preferred, QDeadlineTimer* validity ```
void q_networkaddressentry_set_address_lifetime(void* self, void* preferred, void* validity) {
    QNetworkAddressEntry_SetAddressLifetime((QNetworkAddressEntry*)self, (QDeadlineTimer*)preferred, (QDeadlineTimer*)validity);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#clearAddressLifetime)
///
/// ``` QNetworkAddressEntry* self ```
void q_networkaddressentry_clear_address_lifetime(void* self) {
    QNetworkAddressEntry_ClearAddressLifetime((QNetworkAddressEntry*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#isPermanent)
///
/// ``` QNetworkAddressEntry* self ```
bool q_networkaddressentry_is_permanent(void* self) {
    return QNetworkAddressEntry_IsPermanent((QNetworkAddressEntry*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkaddressentry.html#isTemporary)
///
/// ``` QNetworkAddressEntry* self ```
bool q_networkaddressentry_is_temporary(void* self) {
    return QNetworkAddressEntry_IsTemporary((QNetworkAddressEntry*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QNetworkAddressEntry* self ```
void q_networkaddressentry_delete(void* self) {
    QNetworkAddressEntry_Delete((QNetworkAddressEntry*)(self));
}

/// https://doc.qt.io/qt-6/qnetworkinterface.html

/// q_networkinterface_new constructs a new QNetworkInterface object.
///
///
QNetworkInterface* q_networkinterface_new() {
    return QNetworkInterface_new();
}

/// q_networkinterface_new2 constructs a new QNetworkInterface object.
///
/// ``` QNetworkInterface* other ```
QNetworkInterface* q_networkinterface_new2(void* other) {
    return QNetworkInterface_new2((QNetworkInterface*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#operator=)
///
/// ``` QNetworkInterface* self, QNetworkInterface* other ```
void q_networkinterface_operator_assign(void* self, void* other) {
    QNetworkInterface_OperatorAssign((QNetworkInterface*)self, (QNetworkInterface*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#swap)
///
/// ``` QNetworkInterface* self, QNetworkInterface* other ```
void q_networkinterface_swap(void* self, void* other) {
    QNetworkInterface_Swap((QNetworkInterface*)self, (QNetworkInterface*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#isValid)
///
/// ``` QNetworkInterface* self ```
bool q_networkinterface_is_valid(void* self) {
    return QNetworkInterface_IsValid((QNetworkInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#index)
///
/// ``` QNetworkInterface* self ```
int32_t q_networkinterface_index(void* self) {
    return QNetworkInterface_Index((QNetworkInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#maximumTransmissionUnit)
///
/// ``` QNetworkInterface* self ```
int32_t q_networkinterface_maximum_transmission_unit(void* self) {
    return QNetworkInterface_MaximumTransmissionUnit((QNetworkInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#name)
///
/// ``` QNetworkInterface* self ```
const char* q_networkinterface_name(void* self) {
    libqt_string _str = QNetworkInterface_Name((QNetworkInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#humanReadableName)
///
/// ``` QNetworkInterface* self ```
const char* q_networkinterface_human_readable_name(void* self) {
    libqt_string _str = QNetworkInterface_HumanReadableName((QNetworkInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#flags)
///
/// ``` QNetworkInterface* self ```
int64_t q_networkinterface_flags(void* self) {
    return QNetworkInterface_Flags((QNetworkInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#type)
///
/// ``` QNetworkInterface* self ```
int64_t q_networkinterface_type(void* self) {
    return QNetworkInterface_Type((QNetworkInterface*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#hardwareAddress)
///
/// ``` QNetworkInterface* self ```
const char* q_networkinterface_hardware_address(void* self) {
    libqt_string _str = QNetworkInterface_HardwareAddress((QNetworkInterface*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#addressEntries)
///
/// ``` QNetworkInterface* self ```
libqt_list /* of QNetworkAddressEntry* */ q_networkinterface_address_entries(void* self) {
    libqt_list _arr = QNetworkInterface_AddressEntries((QNetworkInterface*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#interfaceIndexFromName)
///
/// ``` const char* name ```
int32_t q_networkinterface_interface_index_from_name(const char* name) {
    return QNetworkInterface_InterfaceIndexFromName(qstring(name));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#interfaceFromName)
///
/// ``` const char* name ```
QNetworkInterface* q_networkinterface_interface_from_name(const char* name) {
    return QNetworkInterface_InterfaceFromName(qstring(name));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#interfaceFromIndex)
///
/// ``` int index ```
QNetworkInterface* q_networkinterface_interface_from_index(int index) {
    return QNetworkInterface_InterfaceFromIndex(index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#interfaceNameFromIndex)
///
/// ``` int index ```
const char* q_networkinterface_interface_name_from_index(int index) {
    libqt_string _str = QNetworkInterface_InterfaceNameFromIndex(index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#allInterfaces)
///
///
libqt_list /* of QNetworkInterface* */ q_networkinterface_all_interfaces() {
    libqt_list _arr = QNetworkInterface_AllInterfaces();
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qnetworkinterface.html#allAddresses)
///
///
libqt_list /* of QHostAddress* */ q_networkinterface_all_addresses() {
    libqt_list _arr = QNetworkInterface_AllAddresses();
    return _arr;
}

/// Delete this object from C++ memory.
///
/// ``` QNetworkInterface* self ```
void q_networkinterface_delete(void* self) {
    QNetworkInterface_Delete((QNetworkInterface*)(self));
}