#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "libqhostaddress.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqdnslookup.hpp"
#include "libqdnslookup.h"

/// https://doc.qt.io/qt-6/qdnsdomainnamerecord.html

/// q_dnsdomainnamerecord_new constructs a new QDnsDomainNameRecord object.
///
///
QDnsDomainNameRecord* q_dnsdomainnamerecord_new() {
    return QDnsDomainNameRecord_new();
}

/// q_dnsdomainnamerecord_new2 constructs a new QDnsDomainNameRecord object.
///
/// ``` QDnsDomainNameRecord* other ```
QDnsDomainNameRecord* q_dnsdomainnamerecord_new2(void* other) {
    return QDnsDomainNameRecord_new2((QDnsDomainNameRecord*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#operator=)
///
/// ``` QDnsDomainNameRecord* self, QDnsDomainNameRecord* other ```
void q_dnsdomainnamerecord_operator_assign(void* self, void* other) {
    QDnsDomainNameRecord_OperatorAssign((QDnsDomainNameRecord*)self, (QDnsDomainNameRecord*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#swap)
///
/// ``` QDnsDomainNameRecord* self, QDnsDomainNameRecord* other ```
void q_dnsdomainnamerecord_swap(void* self, void* other) {
    QDnsDomainNameRecord_Swap((QDnsDomainNameRecord*)self, (QDnsDomainNameRecord*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#name)
///
/// ``` QDnsDomainNameRecord* self ```
const char* q_dnsdomainnamerecord_name(void* self) {
    libqt_string _str = QDnsDomainNameRecord_Name((QDnsDomainNameRecord*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#timeToLive)
///
/// ``` QDnsDomainNameRecord* self ```
uint32_t q_dnsdomainnamerecord_time_to_live(void* self) {
    return QDnsDomainNameRecord_TimeToLive((QDnsDomainNameRecord*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#value)
///
/// ``` QDnsDomainNameRecord* self ```
const char* q_dnsdomainnamerecord_value(void* self) {
    libqt_string _str = QDnsDomainNameRecord_Value((QDnsDomainNameRecord*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QDnsDomainNameRecord* self ```
void q_dnsdomainnamerecord_delete(void* self) {
    QDnsDomainNameRecord_Delete((QDnsDomainNameRecord*)(self));
}

/// https://doc.qt.io/qt-6/qdnshostaddressrecord.html

/// q_dnshostaddressrecord_new constructs a new QDnsHostAddressRecord object.
///
///
QDnsHostAddressRecord* q_dnshostaddressrecord_new() {
    return QDnsHostAddressRecord_new();
}

/// q_dnshostaddressrecord_new2 constructs a new QDnsHostAddressRecord object.
///
/// ``` QDnsHostAddressRecord* other ```
QDnsHostAddressRecord* q_dnshostaddressrecord_new2(void* other) {
    return QDnsHostAddressRecord_new2((QDnsHostAddressRecord*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#operator=)
///
/// ``` QDnsHostAddressRecord* self, QDnsHostAddressRecord* other ```
void q_dnshostaddressrecord_operator_assign(void* self, void* other) {
    QDnsHostAddressRecord_OperatorAssign((QDnsHostAddressRecord*)self, (QDnsHostAddressRecord*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#swap)
///
/// ``` QDnsHostAddressRecord* self, QDnsHostAddressRecord* other ```
void q_dnshostaddressrecord_swap(void* self, void* other) {
    QDnsHostAddressRecord_Swap((QDnsHostAddressRecord*)self, (QDnsHostAddressRecord*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#name)
///
/// ``` QDnsHostAddressRecord* self ```
const char* q_dnshostaddressrecord_name(void* self) {
    libqt_string _str = QDnsHostAddressRecord_Name((QDnsHostAddressRecord*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#timeToLive)
///
/// ``` QDnsHostAddressRecord* self ```
uint32_t q_dnshostaddressrecord_time_to_live(void* self) {
    return QDnsHostAddressRecord_TimeToLive((QDnsHostAddressRecord*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#value)
///
/// ``` QDnsHostAddressRecord* self ```
QHostAddress* q_dnshostaddressrecord_value(void* self) {
    return QDnsHostAddressRecord_Value((QDnsHostAddressRecord*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QDnsHostAddressRecord* self ```
void q_dnshostaddressrecord_delete(void* self) {
    QDnsHostAddressRecord_Delete((QDnsHostAddressRecord*)(self));
}

/// https://doc.qt.io/qt-6/qdnsmailexchangerecord.html

/// q_dnsmailexchangerecord_new constructs a new QDnsMailExchangeRecord object.
///
///
QDnsMailExchangeRecord* q_dnsmailexchangerecord_new() {
    return QDnsMailExchangeRecord_new();
}

/// q_dnsmailexchangerecord_new2 constructs a new QDnsMailExchangeRecord object.
///
/// ``` QDnsMailExchangeRecord* other ```
QDnsMailExchangeRecord* q_dnsmailexchangerecord_new2(void* other) {
    return QDnsMailExchangeRecord_new2((QDnsMailExchangeRecord*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#operator=)
///
/// ``` QDnsMailExchangeRecord* self, QDnsMailExchangeRecord* other ```
void q_dnsmailexchangerecord_operator_assign(void* self, void* other) {
    QDnsMailExchangeRecord_OperatorAssign((QDnsMailExchangeRecord*)self, (QDnsMailExchangeRecord*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#swap)
///
/// ``` QDnsMailExchangeRecord* self, QDnsMailExchangeRecord* other ```
void q_dnsmailexchangerecord_swap(void* self, void* other) {
    QDnsMailExchangeRecord_Swap((QDnsMailExchangeRecord*)self, (QDnsMailExchangeRecord*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#exchange)
///
/// ``` QDnsMailExchangeRecord* self ```
const char* q_dnsmailexchangerecord_exchange(void* self) {
    libqt_string _str = QDnsMailExchangeRecord_Exchange((QDnsMailExchangeRecord*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#name)
///
/// ``` QDnsMailExchangeRecord* self ```
const char* q_dnsmailexchangerecord_name(void* self) {
    libqt_string _str = QDnsMailExchangeRecord_Name((QDnsMailExchangeRecord*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#preference)
///
/// ``` QDnsMailExchangeRecord* self ```
unsigned short q_dnsmailexchangerecord_preference(void* self) {
    return QDnsMailExchangeRecord_Preference((QDnsMailExchangeRecord*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#timeToLive)
///
/// ``` QDnsMailExchangeRecord* self ```
uint32_t q_dnsmailexchangerecord_time_to_live(void* self) {
    return QDnsMailExchangeRecord_TimeToLive((QDnsMailExchangeRecord*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QDnsMailExchangeRecord* self ```
void q_dnsmailexchangerecord_delete(void* self) {
    QDnsMailExchangeRecord_Delete((QDnsMailExchangeRecord*)(self));
}

/// https://doc.qt.io/qt-6/qdnsservicerecord.html

/// q_dnsservicerecord_new constructs a new QDnsServiceRecord object.
///
///
QDnsServiceRecord* q_dnsservicerecord_new() {
    return QDnsServiceRecord_new();
}

/// q_dnsservicerecord_new2 constructs a new QDnsServiceRecord object.
///
/// ``` QDnsServiceRecord* other ```
QDnsServiceRecord* q_dnsservicerecord_new2(void* other) {
    return QDnsServiceRecord_new2((QDnsServiceRecord*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#operator=)
///
/// ``` QDnsServiceRecord* self, QDnsServiceRecord* other ```
void q_dnsservicerecord_operator_assign(void* self, void* other) {
    QDnsServiceRecord_OperatorAssign((QDnsServiceRecord*)self, (QDnsServiceRecord*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#swap)
///
/// ``` QDnsServiceRecord* self, QDnsServiceRecord* other ```
void q_dnsservicerecord_swap(void* self, void* other) {
    QDnsServiceRecord_Swap((QDnsServiceRecord*)self, (QDnsServiceRecord*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#name)
///
/// ``` QDnsServiceRecord* self ```
const char* q_dnsservicerecord_name(void* self) {
    libqt_string _str = QDnsServiceRecord_Name((QDnsServiceRecord*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#port)
///
/// ``` QDnsServiceRecord* self ```
unsigned short q_dnsservicerecord_port(void* self) {
    return QDnsServiceRecord_Port((QDnsServiceRecord*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#priority)
///
/// ``` QDnsServiceRecord* self ```
unsigned short q_dnsservicerecord_priority(void* self) {
    return QDnsServiceRecord_Priority((QDnsServiceRecord*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#target)
///
/// ``` QDnsServiceRecord* self ```
const char* q_dnsservicerecord_target(void* self) {
    libqt_string _str = QDnsServiceRecord_Target((QDnsServiceRecord*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#timeToLive)
///
/// ``` QDnsServiceRecord* self ```
uint32_t q_dnsservicerecord_time_to_live(void* self) {
    return QDnsServiceRecord_TimeToLive((QDnsServiceRecord*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#weight)
///
/// ``` QDnsServiceRecord* self ```
unsigned short q_dnsservicerecord_weight(void* self) {
    return QDnsServiceRecord_Weight((QDnsServiceRecord*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QDnsServiceRecord* self ```
void q_dnsservicerecord_delete(void* self) {
    QDnsServiceRecord_Delete((QDnsServiceRecord*)(self));
}

/// https://doc.qt.io/qt-6/qdnstextrecord.html

/// q_dnstextrecord_new constructs a new QDnsTextRecord object.
///
///
QDnsTextRecord* q_dnstextrecord_new() {
    return QDnsTextRecord_new();
}

/// q_dnstextrecord_new2 constructs a new QDnsTextRecord object.
///
/// ``` QDnsTextRecord* other ```
QDnsTextRecord* q_dnstextrecord_new2(void* other) {
    return QDnsTextRecord_new2((QDnsTextRecord*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnstextrecord.html#operator=)
///
/// ``` QDnsTextRecord* self, QDnsTextRecord* other ```
void q_dnstextrecord_operator_assign(void* self, void* other) {
    QDnsTextRecord_OperatorAssign((QDnsTextRecord*)self, (QDnsTextRecord*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnstextrecord.html#swap)
///
/// ``` QDnsTextRecord* self, QDnsTextRecord* other ```
void q_dnstextrecord_swap(void* self, void* other) {
    QDnsTextRecord_Swap((QDnsTextRecord*)self, (QDnsTextRecord*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnstextrecord.html#name)
///
/// ``` QDnsTextRecord* self ```
const char* q_dnstextrecord_name(void* self) {
    libqt_string _str = QDnsTextRecord_Name((QDnsTextRecord*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnstextrecord.html#timeToLive)
///
/// ``` QDnsTextRecord* self ```
uint32_t q_dnstextrecord_time_to_live(void* self) {
    return QDnsTextRecord_TimeToLive((QDnsTextRecord*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnstextrecord.html#values)
///
/// ``` QDnsTextRecord* self ```
const char** q_dnstextrecord_values(void* self) {
    libqt_list _arr = QDnsTextRecord_Values((QDnsTextRecord*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QDnsTextRecord* self ```
void q_dnstextrecord_delete(void* self) {
    QDnsTextRecord_Delete((QDnsTextRecord*)(self));
}

/// https://doc.qt.io/qt-6/qdnslookup.html

/// q_dnslookup_new constructs a new QDnsLookup object.
///
///
QDnsLookup* q_dnslookup_new() {
    return QDnsLookup_new();
}

/// q_dnslookup_new2 constructs a new QDnsLookup object.
///
/// ``` enum QDnsLookup__Type typeVal, const char* name ```
QDnsLookup* q_dnslookup_new2(int64_t typeVal, const char* name) {
    return QDnsLookup_new2(typeVal, qstring(name));
}

/// q_dnslookup_new3 constructs a new QDnsLookup object.
///
/// ``` enum QDnsLookup__Type typeVal, const char* name, QHostAddress* nameserver ```
QDnsLookup* q_dnslookup_new3(int64_t typeVal, const char* name, void* nameserver) {
    return QDnsLookup_new3(typeVal, qstring(name), (QHostAddress*)nameserver);
}

/// q_dnslookup_new4 constructs a new QDnsLookup object.
///
/// ``` QObject* parent ```
QDnsLookup* q_dnslookup_new4(void* parent) {
    return QDnsLookup_new4((QObject*)parent);
}

/// q_dnslookup_new5 constructs a new QDnsLookup object.
///
/// ``` enum QDnsLookup__Type typeVal, const char* name, QObject* parent ```
QDnsLookup* q_dnslookup_new5(int64_t typeVal, const char* name, void* parent) {
    return QDnsLookup_new5(typeVal, qstring(name), (QObject*)parent);
}

/// q_dnslookup_new6 constructs a new QDnsLookup object.
///
/// ``` enum QDnsLookup__Type typeVal, const char* name, QHostAddress* nameserver, QObject* parent ```
QDnsLookup* q_dnslookup_new6(int64_t typeVal, const char* name, void* nameserver, void* parent) {
    return QDnsLookup_new6(typeVal, qstring(name), (QHostAddress*)nameserver, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QDnsLookup* self ```
QMetaObject* q_dnslookup_meta_object(void* self) {
    return QDnsLookup_MetaObject((QDnsLookup*)self);
}

/// ``` QDnsLookup* self, const char* param1 ```
void* q_dnslookup_metacast(void* self, const char* param1) {
    return QDnsLookup_Metacast((QDnsLookup*)self, param1);
}

/// ``` QDnsLookup* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_dnslookup_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QDnsLookup_Metacall((QDnsLookup*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QDnsLookup* self, int32_t (*slot)(QDnsLookup*, enum QMetaObject__Call, int, void*) ```
void q_dnslookup_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QDnsLookup_OnMetacall((QDnsLookup*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDnsLookup* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_dnslookup_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QDnsLookup_QBaseMetacall((QDnsLookup*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_dnslookup_tr(const char* s) {
    libqt_string _str = QDnsLookup_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#error)
///
/// ``` QDnsLookup* self ```
int64_t q_dnslookup_error(void* self) {
    return QDnsLookup_Error((QDnsLookup*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#errorString)
///
/// ``` QDnsLookup* self ```
const char* q_dnslookup_error_string(void* self) {
    libqt_string _str = QDnsLookup_ErrorString((QDnsLookup*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#isFinished)
///
/// ``` QDnsLookup* self ```
bool q_dnslookup_is_finished(void* self) {
    return QDnsLookup_IsFinished((QDnsLookup*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#name)
///
/// ``` QDnsLookup* self ```
const char* q_dnslookup_name(void* self) {
    libqt_string _str = QDnsLookup_Name((QDnsLookup*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#setName)
///
/// ``` QDnsLookup* self, const char* name ```
void q_dnslookup_set_name(void* self, const char* name) {
    QDnsLookup_SetName((QDnsLookup*)self, qstring(name));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#type)
///
/// ``` QDnsLookup* self ```
int64_t q_dnslookup_type(void* self) {
    return QDnsLookup_Type((QDnsLookup*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#setType)
///
/// ``` QDnsLookup* self, enum QDnsLookup__Type typeVal ```
void q_dnslookup_set_type(void* self, int64_t typeVal) {
    QDnsLookup_SetType((QDnsLookup*)self, typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#nameserver)
///
/// ``` QDnsLookup* self ```
QHostAddress* q_dnslookup_nameserver(void* self) {
    return QDnsLookup_Nameserver((QDnsLookup*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#setNameserver)
///
/// ``` QDnsLookup* self, QHostAddress* nameserver ```
void q_dnslookup_set_nameserver(void* self, void* nameserver) {
    QDnsLookup_SetNameserver((QDnsLookup*)self, (QHostAddress*)nameserver);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#canonicalNameRecords)
///
/// ``` QDnsLookup* self ```
libqt_list /* of QDnsDomainNameRecord* */ q_dnslookup_canonical_name_records(void* self) {
    libqt_list _arr = QDnsLookup_CanonicalNameRecords((QDnsLookup*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#hostAddressRecords)
///
/// ``` QDnsLookup* self ```
libqt_list /* of QDnsHostAddressRecord* */ q_dnslookup_host_address_records(void* self) {
    libqt_list _arr = QDnsLookup_HostAddressRecords((QDnsLookup*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#mailExchangeRecords)
///
/// ``` QDnsLookup* self ```
libqt_list /* of QDnsMailExchangeRecord* */ q_dnslookup_mail_exchange_records(void* self) {
    libqt_list _arr = QDnsLookup_MailExchangeRecords((QDnsLookup*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#nameServerRecords)
///
/// ``` QDnsLookup* self ```
libqt_list /* of QDnsDomainNameRecord* */ q_dnslookup_name_server_records(void* self) {
    libqt_list _arr = QDnsLookup_NameServerRecords((QDnsLookup*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#pointerRecords)
///
/// ``` QDnsLookup* self ```
libqt_list /* of QDnsDomainNameRecord* */ q_dnslookup_pointer_records(void* self) {
    libqt_list _arr = QDnsLookup_PointerRecords((QDnsLookup*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#serviceRecords)
///
/// ``` QDnsLookup* self ```
libqt_list /* of QDnsServiceRecord* */ q_dnslookup_service_records(void* self) {
    libqt_list _arr = QDnsLookup_ServiceRecords((QDnsLookup*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#textRecords)
///
/// ``` QDnsLookup* self ```
libqt_list /* of QDnsTextRecord* */ q_dnslookup_text_records(void* self) {
    libqt_list _arr = QDnsLookup_TextRecords((QDnsLookup*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#abort)
///
/// ``` QDnsLookup* self ```
void q_dnslookup_abort(void* self) {
    QDnsLookup_Abort((QDnsLookup*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#lookup)
///
/// ``` QDnsLookup* self ```
void q_dnslookup_lookup(void* self) {
    QDnsLookup_Lookup((QDnsLookup*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#finished)
///
/// ``` QDnsLookup* self ```
void q_dnslookup_finished(void* self) {
    QDnsLookup_Finished((QDnsLookup*)self);
}

/// ``` QDnsLookup* self, void (*slot)(QDnsLookup*) ```
void q_dnslookup_on_finished(void* self, void (*slot)(void*)) {
    QDnsLookup_Connect_Finished((QDnsLookup*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#nameChanged)
///
/// ``` QDnsLookup* self, const char* name ```
void q_dnslookup_name_changed(void* self, const char* name) {
    QDnsLookup_NameChanged((QDnsLookup*)self, qstring(name));
}

/// ``` QDnsLookup* self, void (*slot)(QDnsLookup*, const char*) ```
void q_dnslookup_on_name_changed(void* self, void (*slot)(void*, const char*)) {
    QDnsLookup_Connect_NameChanged((QDnsLookup*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#typeChanged)
///
/// ``` QDnsLookup* self, enum QDnsLookup__Type typeVal ```
void q_dnslookup_type_changed(void* self, int64_t typeVal) {
    QDnsLookup_TypeChanged((QDnsLookup*)self, typeVal);
}

/// ``` QDnsLookup* self, void (*slot)(QDnsLookup*, enum QDnsLookup__Type) ```
void q_dnslookup_on_type_changed(void* self, void (*slot)(void*, int64_t)) {
    QDnsLookup_Connect_TypeChanged((QDnsLookup*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#nameserverChanged)
///
/// ``` QDnsLookup* self, QHostAddress* nameserver ```
void q_dnslookup_nameserver_changed(void* self, void* nameserver) {
    QDnsLookup_NameserverChanged((QDnsLookup*)self, (QHostAddress*)nameserver);
}

/// ``` QDnsLookup* self, void (*slot)(QDnsLookup*, QHostAddress*) ```
void q_dnslookup_on_nameserver_changed(void* self, void (*slot)(void*, void*)) {
    QDnsLookup_Connect_NameserverChanged((QDnsLookup*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_dnslookup_tr2(const char* s, const char* c) {
    libqt_string _str = QDnsLookup_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_dnslookup_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QDnsLookup_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QDnsLookup* self ```
const char* q_dnslookup_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QDnsLookup* self, const char* name ```
void q_dnslookup_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QDnsLookup* self ```
bool q_dnslookup_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QDnsLookup* self ```
bool q_dnslookup_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QDnsLookup* self ```
bool q_dnslookup_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QDnsLookup* self ```
bool q_dnslookup_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QDnsLookup* self, bool b ```
bool q_dnslookup_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QDnsLookup* self ```
QThread* q_dnslookup_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QDnsLookup* self, QThread* thread ```
void q_dnslookup_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDnsLookup* self, int interval ```
int32_t q_dnslookup_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QDnsLookup* self, int id ```
void q_dnslookup_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QDnsLookup* self ```
libqt_list /* of QObject* */ q_dnslookup_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QDnsLookup* self, QObject* parent ```
void q_dnslookup_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QDnsLookup* self, QObject* filterObj ```
void q_dnslookup_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QDnsLookup* self, QObject* obj ```
void q_dnslookup_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_dnslookup_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDnsLookup* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_dnslookup_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_dnslookup_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_dnslookup_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QDnsLookup* self ```
void q_dnslookup_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QDnsLookup* self ```
void q_dnslookup_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QDnsLookup* self, const char* name, QVariant* value ```
bool q_dnslookup_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QDnsLookup* self, const char* name ```
QVariant* q_dnslookup_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QDnsLookup* self ```
const char** q_dnslookup_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDnsLookup* self ```
QBindingStorage* q_dnslookup_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDnsLookup* self ```
QBindingStorage* q_dnslookup_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDnsLookup* self ```
void q_dnslookup_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QDnsLookup* self, void (*slot)(QObject*) ```
void q_dnslookup_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QDnsLookup* self ```
QObject* q_dnslookup_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QDnsLookup* self, const char* classname ```
bool q_dnslookup_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QDnsLookup* self ```
void q_dnslookup_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDnsLookup* self, int interval, enum Qt__TimerType timerType ```
int32_t q_dnslookup_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_dnslookup_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDnsLookup* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_dnslookup_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDnsLookup* self, QObject* param1 ```
void q_dnslookup_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QDnsLookup* self, void (*slot)(QObject*, QObject*) ```
void q_dnslookup_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDnsLookup* self, QEvent* event ```
bool q_dnslookup_event(void* self, void* event) {
    return QDnsLookup_Event((QDnsLookup*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDnsLookup* self, QEvent* event ```
bool q_dnslookup_qbase_event(void* self, void* event) {
    return QDnsLookup_QBaseEvent((QDnsLookup*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDnsLookup* self, bool (*slot)(QDnsLookup*, QEvent*) ```
void q_dnslookup_on_event(void* self, bool (*slot)(void*, void*)) {
    QDnsLookup_OnEvent((QDnsLookup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDnsLookup* self, QObject* watched, QEvent* event ```
bool q_dnslookup_event_filter(void* self, void* watched, void* event) {
    return QDnsLookup_EventFilter((QDnsLookup*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDnsLookup* self, QObject* watched, QEvent* event ```
bool q_dnslookup_qbase_event_filter(void* self, void* watched, void* event) {
    return QDnsLookup_QBaseEventFilter((QDnsLookup*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDnsLookup* self, bool (*slot)(QDnsLookup*, QObject*, QEvent*) ```
void q_dnslookup_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QDnsLookup_OnEventFilter((QDnsLookup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDnsLookup* self, QTimerEvent* event ```
void q_dnslookup_timer_event(void* self, void* event) {
    QDnsLookup_TimerEvent((QDnsLookup*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDnsLookup* self, QTimerEvent* event ```
void q_dnslookup_qbase_timer_event(void* self, void* event) {
    QDnsLookup_QBaseTimerEvent((QDnsLookup*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDnsLookup* self, void (*slot)(QDnsLookup*, QTimerEvent*) ```
void q_dnslookup_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QDnsLookup_OnTimerEvent((QDnsLookup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDnsLookup* self, QChildEvent* event ```
void q_dnslookup_child_event(void* self, void* event) {
    QDnsLookup_ChildEvent((QDnsLookup*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDnsLookup* self, QChildEvent* event ```
void q_dnslookup_qbase_child_event(void* self, void* event) {
    QDnsLookup_QBaseChildEvent((QDnsLookup*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDnsLookup* self, void (*slot)(QDnsLookup*, QChildEvent*) ```
void q_dnslookup_on_child_event(void* self, void (*slot)(void*, void*)) {
    QDnsLookup_OnChildEvent((QDnsLookup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDnsLookup* self, QEvent* event ```
void q_dnslookup_custom_event(void* self, void* event) {
    QDnsLookup_CustomEvent((QDnsLookup*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDnsLookup* self, QEvent* event ```
void q_dnslookup_qbase_custom_event(void* self, void* event) {
    QDnsLookup_QBaseCustomEvent((QDnsLookup*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDnsLookup* self, void (*slot)(QDnsLookup*, QEvent*) ```
void q_dnslookup_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QDnsLookup_OnCustomEvent((QDnsLookup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDnsLookup* self, QMetaMethod* signal ```
void q_dnslookup_connect_notify(void* self, void* signal) {
    QDnsLookup_ConnectNotify((QDnsLookup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDnsLookup* self, QMetaMethod* signal ```
void q_dnslookup_qbase_connect_notify(void* self, void* signal) {
    QDnsLookup_QBaseConnectNotify((QDnsLookup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDnsLookup* self, void (*slot)(QDnsLookup*, QMetaMethod*) ```
void q_dnslookup_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QDnsLookup_OnConnectNotify((QDnsLookup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDnsLookup* self, QMetaMethod* signal ```
void q_dnslookup_disconnect_notify(void* self, void* signal) {
    QDnsLookup_DisconnectNotify((QDnsLookup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDnsLookup* self, QMetaMethod* signal ```
void q_dnslookup_qbase_disconnect_notify(void* self, void* signal) {
    QDnsLookup_QBaseDisconnectNotify((QDnsLookup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDnsLookup* self, void (*slot)(QDnsLookup*, QMetaMethod*) ```
void q_dnslookup_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QDnsLookup_OnDisconnectNotify((QDnsLookup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDnsLookup* self ```
QObject* q_dnslookup_sender(void* self) {
    return QDnsLookup_Sender((QDnsLookup*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDnsLookup* self ```
QObject* q_dnslookup_qbase_sender(void* self) {
    return QDnsLookup_QBaseSender((QDnsLookup*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDnsLookup* self, QObject* (*slot)() ```
void q_dnslookup_on_sender(void* self, QObject* (*slot)()) {
    QDnsLookup_OnSender((QDnsLookup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDnsLookup* self ```
int32_t q_dnslookup_sender_signal_index(void* self) {
    return QDnsLookup_SenderSignalIndex((QDnsLookup*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDnsLookup* self ```
int32_t q_dnslookup_qbase_sender_signal_index(void* self) {
    return QDnsLookup_QBaseSenderSignalIndex((QDnsLookup*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDnsLookup* self, int32_t (*slot)() ```
void q_dnslookup_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QDnsLookup_OnSenderSignalIndex((QDnsLookup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDnsLookup* self, const char* signal ```
int32_t q_dnslookup_receivers(void* self, const char* signal) {
    return QDnsLookup_Receivers((QDnsLookup*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDnsLookup* self, const char* signal ```
int32_t q_dnslookup_qbase_receivers(void* self, const char* signal) {
    return QDnsLookup_QBaseReceivers((QDnsLookup*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDnsLookup* self, int32_t (*slot)(QDnsLookup*, const char*) ```
void q_dnslookup_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QDnsLookup_OnReceivers((QDnsLookup*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDnsLookup* self, QMetaMethod* signal ```
bool q_dnslookup_is_signal_connected(void* self, void* signal) {
    return QDnsLookup_IsSignalConnected((QDnsLookup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDnsLookup* self, QMetaMethod* signal ```
bool q_dnslookup_qbase_is_signal_connected(void* self, void* signal) {
    return QDnsLookup_QBaseIsSignalConnected((QDnsLookup*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDnsLookup* self, bool (*slot)(QDnsLookup*, QMetaMethod*) ```
void q_dnslookup_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QDnsLookup_OnIsSignalConnected((QDnsLookup*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QDnsLookup* self ```
void q_dnslookup_delete(void* self) {
    QDnsLookup_Delete((QDnsLookup*)(self));
}