#include "../libqcoreevent.hpp"
#include "libqhostaddress.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqsslconfiguration.hpp"
#include "libqdnslookup.hpp"
#include "libqdnslookup.h"

QDnsDomainNameRecord* q_dnsdomainnamerecord_new() {
    return QDnsDomainNameRecord_new();
}

QDnsDomainNameRecord* q_dnsdomainnamerecord_new2(void* other) {
    return QDnsDomainNameRecord_new2((QDnsDomainNameRecord*)other);
}

void q_dnsdomainnamerecord_operator_assign(void* self, void* other) {
    QDnsDomainNameRecord_OperatorAssign((QDnsDomainNameRecord*)self, (QDnsDomainNameRecord*)other);
}

void q_dnsdomainnamerecord_swap(void* self, void* other) {
    QDnsDomainNameRecord_Swap((QDnsDomainNameRecord*)self, (QDnsDomainNameRecord*)other);
}

const char* q_dnsdomainnamerecord_name(void* self) {
    libqt_string _str = QDnsDomainNameRecord_Name((QDnsDomainNameRecord*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint32_t q_dnsdomainnamerecord_time_to_live(void* self) {
    return QDnsDomainNameRecord_TimeToLive((QDnsDomainNameRecord*)self);
}

const char* q_dnsdomainnamerecord_value(void* self) {
    libqt_string _str = QDnsDomainNameRecord_Value((QDnsDomainNameRecord*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dnsdomainnamerecord_delete(void* self) {
    QDnsDomainNameRecord_Delete((QDnsDomainNameRecord*)(self));
}

QDnsHostAddressRecord* q_dnshostaddressrecord_new() {
    return QDnsHostAddressRecord_new();
}

QDnsHostAddressRecord* q_dnshostaddressrecord_new2(void* other) {
    return QDnsHostAddressRecord_new2((QDnsHostAddressRecord*)other);
}

void q_dnshostaddressrecord_operator_assign(void* self, void* other) {
    QDnsHostAddressRecord_OperatorAssign((QDnsHostAddressRecord*)self, (QDnsHostAddressRecord*)other);
}

void q_dnshostaddressrecord_swap(void* self, void* other) {
    QDnsHostAddressRecord_Swap((QDnsHostAddressRecord*)self, (QDnsHostAddressRecord*)other);
}

const char* q_dnshostaddressrecord_name(void* self) {
    libqt_string _str = QDnsHostAddressRecord_Name((QDnsHostAddressRecord*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint32_t q_dnshostaddressrecord_time_to_live(void* self) {
    return QDnsHostAddressRecord_TimeToLive((QDnsHostAddressRecord*)self);
}

QHostAddress* q_dnshostaddressrecord_value(void* self) {
    return QDnsHostAddressRecord_Value((QDnsHostAddressRecord*)self);
}

void q_dnshostaddressrecord_delete(void* self) {
    QDnsHostAddressRecord_Delete((QDnsHostAddressRecord*)(self));
}

QDnsMailExchangeRecord* q_dnsmailexchangerecord_new() {
    return QDnsMailExchangeRecord_new();
}

QDnsMailExchangeRecord* q_dnsmailexchangerecord_new2(void* other) {
    return QDnsMailExchangeRecord_new2((QDnsMailExchangeRecord*)other);
}

void q_dnsmailexchangerecord_operator_assign(void* self, void* other) {
    QDnsMailExchangeRecord_OperatorAssign((QDnsMailExchangeRecord*)self, (QDnsMailExchangeRecord*)other);
}

void q_dnsmailexchangerecord_swap(void* self, void* other) {
    QDnsMailExchangeRecord_Swap((QDnsMailExchangeRecord*)self, (QDnsMailExchangeRecord*)other);
}

const char* q_dnsmailexchangerecord_exchange(void* self) {
    libqt_string _str = QDnsMailExchangeRecord_Exchange((QDnsMailExchangeRecord*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dnsmailexchangerecord_name(void* self) {
    libqt_string _str = QDnsMailExchangeRecord_Name((QDnsMailExchangeRecord*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

unsigned short q_dnsmailexchangerecord_preference(void* self) {
    return QDnsMailExchangeRecord_Preference((QDnsMailExchangeRecord*)self);
}

uint32_t q_dnsmailexchangerecord_time_to_live(void* self) {
    return QDnsMailExchangeRecord_TimeToLive((QDnsMailExchangeRecord*)self);
}

void q_dnsmailexchangerecord_delete(void* self) {
    QDnsMailExchangeRecord_Delete((QDnsMailExchangeRecord*)(self));
}

QDnsServiceRecord* q_dnsservicerecord_new() {
    return QDnsServiceRecord_new();
}

QDnsServiceRecord* q_dnsservicerecord_new2(void* other) {
    return QDnsServiceRecord_new2((QDnsServiceRecord*)other);
}

void q_dnsservicerecord_operator_assign(void* self, void* other) {
    QDnsServiceRecord_OperatorAssign((QDnsServiceRecord*)self, (QDnsServiceRecord*)other);
}

void q_dnsservicerecord_swap(void* self, void* other) {
    QDnsServiceRecord_Swap((QDnsServiceRecord*)self, (QDnsServiceRecord*)other);
}

const char* q_dnsservicerecord_name(void* self) {
    libqt_string _str = QDnsServiceRecord_Name((QDnsServiceRecord*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

unsigned short q_dnsservicerecord_port(void* self) {
    return QDnsServiceRecord_Port((QDnsServiceRecord*)self);
}

unsigned short q_dnsservicerecord_priority(void* self) {
    return QDnsServiceRecord_Priority((QDnsServiceRecord*)self);
}

const char* q_dnsservicerecord_target(void* self) {
    libqt_string _str = QDnsServiceRecord_Target((QDnsServiceRecord*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint32_t q_dnsservicerecord_time_to_live(void* self) {
    return QDnsServiceRecord_TimeToLive((QDnsServiceRecord*)self);
}

unsigned short q_dnsservicerecord_weight(void* self) {
    return QDnsServiceRecord_Weight((QDnsServiceRecord*)self);
}

void q_dnsservicerecord_delete(void* self) {
    QDnsServiceRecord_Delete((QDnsServiceRecord*)(self));
}

QDnsTextRecord* q_dnstextrecord_new() {
    return QDnsTextRecord_new();
}

QDnsTextRecord* q_dnstextrecord_new2(void* other) {
    return QDnsTextRecord_new2((QDnsTextRecord*)other);
}

void q_dnstextrecord_operator_assign(void* self, void* other) {
    QDnsTextRecord_OperatorAssign((QDnsTextRecord*)self, (QDnsTextRecord*)other);
}

void q_dnstextrecord_swap(void* self, void* other) {
    QDnsTextRecord_Swap((QDnsTextRecord*)self, (QDnsTextRecord*)other);
}

const char* q_dnstextrecord_name(void* self) {
    libqt_string _str = QDnsTextRecord_Name((QDnsTextRecord*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint32_t q_dnstextrecord_time_to_live(void* self) {
    return QDnsTextRecord_TimeToLive((QDnsTextRecord*)self);
}

const char** q_dnstextrecord_values(void* self) {
    libqt_list _arr = QDnsTextRecord_Values((QDnsTextRecord*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_dnstextrecord_values\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_dnstextrecord_delete(void* self) {
    QDnsTextRecord_Delete((QDnsTextRecord*)(self));
}

QDnsTlsAssociationRecord* q_dnstlsassociationrecord_new() {
    return QDnsTlsAssociationRecord_new();
}

QDnsTlsAssociationRecord* q_dnstlsassociationrecord_new2(void* other) {
    return QDnsTlsAssociationRecord_new2((QDnsTlsAssociationRecord*)other);
}

void q_dnstlsassociationrecord_operator_assign(void* self, void* other) {
    QDnsTlsAssociationRecord_OperatorAssign((QDnsTlsAssociationRecord*)self, (QDnsTlsAssociationRecord*)other);
}

void q_dnstlsassociationrecord_swap(void* self, void* other) {
    QDnsTlsAssociationRecord_Swap((QDnsTlsAssociationRecord*)self, (QDnsTlsAssociationRecord*)other);
}

const char* q_dnstlsassociationrecord_name(void* self) {
    libqt_string _str = QDnsTlsAssociationRecord_Name((QDnsTlsAssociationRecord*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint32_t q_dnstlsassociationrecord_time_to_live(void* self) {
    return QDnsTlsAssociationRecord_TimeToLive((QDnsTlsAssociationRecord*)self);
}

uint8_t q_dnstlsassociationrecord_usage(void* self) {
    return QDnsTlsAssociationRecord_Usage((QDnsTlsAssociationRecord*)self);
}

uint8_t q_dnstlsassociationrecord_selector(void* self) {
    return QDnsTlsAssociationRecord_Selector((QDnsTlsAssociationRecord*)self);
}

uint8_t q_dnstlsassociationrecord_match_type(void* self) {
    return QDnsTlsAssociationRecord_MatchType((QDnsTlsAssociationRecord*)self);
}

char* q_dnstlsassociationrecord_value(void* self) {
    libqt_string _str = QDnsTlsAssociationRecord_Value((QDnsTlsAssociationRecord*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dnstlsassociationrecord_delete(void* self) {
    QDnsTlsAssociationRecord_Delete((QDnsTlsAssociationRecord*)(self));
}

QDnsLookup* q_dnslookup_new() {
    return QDnsLookup_new();
}

QDnsLookup* q_dnslookup_new2(int32_t type, const char* name) {
    return QDnsLookup_new2(type, qstring(name));
}

QDnsLookup* q_dnslookup_new3(int32_t type, const char* name, void* nameserver) {
    return QDnsLookup_new3(type, qstring(name), (QHostAddress*)nameserver);
}

QDnsLookup* q_dnslookup_new4(int32_t type, const char* name, void* nameserver, unsigned short port) {
    return QDnsLookup_new4(type, qstring(name), (QHostAddress*)nameserver, port);
}

QDnsLookup* q_dnslookup_new5(int32_t type, const char* name, uint8_t protocol, void* nameserver) {
    return QDnsLookup_new5(type, qstring(name), protocol, (QHostAddress*)nameserver);
}

QDnsLookup* q_dnslookup_new6(void* parent) {
    return QDnsLookup_new6((QObject*)parent);
}

QDnsLookup* q_dnslookup_new7(int32_t type, const char* name, void* parent) {
    return QDnsLookup_new7(type, qstring(name), (QObject*)parent);
}

QDnsLookup* q_dnslookup_new8(int32_t type, const char* name, void* nameserver, void* parent) {
    return QDnsLookup_new8(type, qstring(name), (QHostAddress*)nameserver, (QObject*)parent);
}

QDnsLookup* q_dnslookup_new9(int32_t type, const char* name, void* nameserver, unsigned short port, void* parent) {
    return QDnsLookup_new9(type, qstring(name), (QHostAddress*)nameserver, port, (QObject*)parent);
}

QDnsLookup* q_dnslookup_new10(int32_t type, const char* name, uint8_t protocol, void* nameserver, unsigned short port) {
    return QDnsLookup_new10(type, qstring(name), protocol, (QHostAddress*)nameserver, port);
}

QDnsLookup* q_dnslookup_new11(int32_t type, const char* name, uint8_t protocol, void* nameserver, unsigned short port, void* parent) {
    return QDnsLookup_new11(type, qstring(name), protocol, (QHostAddress*)nameserver, port, (QObject*)parent);
}

const QMetaObject* q_dnslookup_meta_object(void* self) {
    return QDnsLookup_MetaObject((QDnsLookup*)self);
}

void q_dnslookup_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QDnsLookup_OnMetaObject((QDnsLookup*)self, (intptr_t)callback);
}

const QMetaObject* q_dnslookup_qbase_meta_object(void* self) {
    return QDnsLookup_QBaseMetaObject((QDnsLookup*)self);
}

void* q_dnslookup_metacast(void* self, const char* param1) {
    return QDnsLookup_Metacast((QDnsLookup*)self, param1);
}

void q_dnslookup_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QDnsLookup_OnMetacast((QDnsLookup*)self, (intptr_t)callback);
}

void* q_dnslookup_qbase_metacast(void* self, const char* param1) {
    return QDnsLookup_QBaseMetacast((QDnsLookup*)self, param1);
}

int32_t q_dnslookup_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDnsLookup_Metacall((QDnsLookup*)self, param1, param2, param3);
}

void q_dnslookup_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QDnsLookup_OnMetacall((QDnsLookup*)self, (intptr_t)callback);
}

int32_t q_dnslookup_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDnsLookup_QBaseMetacall((QDnsLookup*)self, param1, param2, param3);
}

const char* q_dnslookup_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_dnslookup_is_authentic_data(void* self) {
    return QDnsLookup_IsAuthenticData((QDnsLookup*)self);
}

int32_t q_dnslookup_error(void* self) {
    return QDnsLookup_Error((QDnsLookup*)self);
}

const char* q_dnslookup_error_string(void* self) {
    libqt_string _str = QDnsLookup_ErrorString((QDnsLookup*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_dnslookup_is_finished(void* self) {
    return QDnsLookup_IsFinished((QDnsLookup*)self);
}

const char* q_dnslookup_name(void* self) {
    libqt_string _str = QDnsLookup_Name((QDnsLookup*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dnslookup_set_name(void* self, const char* name) {
    QDnsLookup_SetName((QDnsLookup*)self, qstring(name));
}

int32_t q_dnslookup_type(void* self) {
    return QDnsLookup_Type((QDnsLookup*)self);
}

void q_dnslookup_set_type(void* self, int32_t type) {
    QDnsLookup_SetType((QDnsLookup*)self, type);
}

QHostAddress* q_dnslookup_nameserver(void* self) {
    return QDnsLookup_Nameserver((QDnsLookup*)self);
}

void q_dnslookup_set_nameserver(void* self, void* nameserver) {
    QDnsLookup_SetNameserver((QDnsLookup*)self, (QHostAddress*)nameserver);
}

unsigned short q_dnslookup_nameserver_port(void* self) {
    return QDnsLookup_NameserverPort((QDnsLookup*)self);
}

void q_dnslookup_set_nameserver_port(void* self, unsigned short port) {
    QDnsLookup_SetNameserverPort((QDnsLookup*)self, port);
}

uint8_t q_dnslookup_nameserver_protocol(void* self) {
    return QDnsLookup_NameserverProtocol((QDnsLookup*)self);
}

void q_dnslookup_set_nameserver_protocol(void* self, uint8_t protocol) {
    QDnsLookup_SetNameserverProtocol((QDnsLookup*)self, protocol);
}

void q_dnslookup_set_nameserver2(void* self, uint8_t protocol, void* nameserver) {
    QDnsLookup_SetNameserver2((QDnsLookup*)self, protocol, (QHostAddress*)nameserver);
}

void q_dnslookup_set_nameserver3(void* self, void* nameserver, unsigned short port) {
    QDnsLookup_SetNameserver3((QDnsLookup*)self, (QHostAddress*)nameserver, port);
}

libqt_list /* of QDnsDomainNameRecord* */ q_dnslookup_canonical_name_records(void* self) {
    libqt_list _arr = QDnsLookup_CanonicalNameRecords((QDnsLookup*)self);
    return _arr;
}

libqt_list /* of QDnsHostAddressRecord* */ q_dnslookup_host_address_records(void* self) {
    libqt_list _arr = QDnsLookup_HostAddressRecords((QDnsLookup*)self);
    return _arr;
}

libqt_list /* of QDnsMailExchangeRecord* */ q_dnslookup_mail_exchange_records(void* self) {
    libqt_list _arr = QDnsLookup_MailExchangeRecords((QDnsLookup*)self);
    return _arr;
}

libqt_list /* of QDnsDomainNameRecord* */ q_dnslookup_name_server_records(void* self) {
    libqt_list _arr = QDnsLookup_NameServerRecords((QDnsLookup*)self);
    return _arr;
}

libqt_list /* of QDnsDomainNameRecord* */ q_dnslookup_pointer_records(void* self) {
    libqt_list _arr = QDnsLookup_PointerRecords((QDnsLookup*)self);
    return _arr;
}

libqt_list /* of QDnsServiceRecord* */ q_dnslookup_service_records(void* self) {
    libqt_list _arr = QDnsLookup_ServiceRecords((QDnsLookup*)self);
    return _arr;
}

libqt_list /* of QDnsTextRecord* */ q_dnslookup_text_records(void* self) {
    libqt_list _arr = QDnsLookup_TextRecords((QDnsLookup*)self);
    return _arr;
}

libqt_list /* of QDnsTlsAssociationRecord* */ q_dnslookup_tls_association_records(void* self) {
    libqt_list _arr = QDnsLookup_TlsAssociationRecords((QDnsLookup*)self);
    return _arr;
}

void q_dnslookup_set_ssl_configuration(void* self, void* sslConfiguration) {
    QDnsLookup_SetSslConfiguration((QDnsLookup*)self, (QSslConfiguration*)sslConfiguration);
}

QSslConfiguration* q_dnslookup_ssl_configuration(void* self) {
    return QDnsLookup_SslConfiguration((QDnsLookup*)self);
}

bool q_dnslookup_is_protocol_supported(uint8_t protocol) {
    return QDnsLookup_IsProtocolSupported(protocol);
}

unsigned short q_dnslookup_default_port_for_protocol(uint8_t protocol) {
    return QDnsLookup_DefaultPortForProtocol(protocol);
}

void q_dnslookup_abort(void* self) {
    QDnsLookup_Abort((QDnsLookup*)self);
}

void q_dnslookup_lookup(void* self) {
    QDnsLookup_Lookup((QDnsLookup*)self);
}

void q_dnslookup_finished(void* self) {
    QDnsLookup_Finished((QDnsLookup*)self);
}

void q_dnslookup_on_finished(void* self, void (*callback)(void*)) {
    QDnsLookup_Connect_Finished((QDnsLookup*)self, (intptr_t)callback);
}

void q_dnslookup_name_changed(void* self, const char* name) {
    QDnsLookup_NameChanged((QDnsLookup*)self, qstring(name));
}

void q_dnslookup_on_name_changed(void* self, void (*callback)(void*, const char*)) {
    QDnsLookup_Connect_NameChanged((QDnsLookup*)self, (intptr_t)callback);
}

void q_dnslookup_type_changed(void* self, int32_t type) {
    QDnsLookup_TypeChanged((QDnsLookup*)self, type);
}

void q_dnslookup_on_type_changed(void* self, void (*callback)(void*, int32_t)) {
    QDnsLookup_Connect_TypeChanged((QDnsLookup*)self, (intptr_t)callback);
}

void q_dnslookup_nameserver_changed(void* self, void* nameserver) {
    QDnsLookup_NameserverChanged((QDnsLookup*)self, (QHostAddress*)nameserver);
}

void q_dnslookup_on_nameserver_changed(void* self, void (*callback)(void*, void*)) {
    QDnsLookup_Connect_NameserverChanged((QDnsLookup*)self, (intptr_t)callback);
}

void q_dnslookup_nameserver_port_changed(void* self, unsigned short port) {
    QDnsLookup_NameserverPortChanged((QDnsLookup*)self, port);
}

void q_dnslookup_on_nameserver_port_changed(void* self, void (*callback)(void*, unsigned short)) {
    QDnsLookup_Connect_NameserverPortChanged((QDnsLookup*)self, (intptr_t)callback);
}

void q_dnslookup_nameserver_protocol_changed(void* self, uint8_t protocol) {
    QDnsLookup_NameserverProtocolChanged((QDnsLookup*)self, protocol);
}

void q_dnslookup_on_nameserver_protocol_changed(void* self, void (*callback)(void*, uint8_t)) {
    QDnsLookup_Connect_NameserverProtocolChanged((QDnsLookup*)self, (intptr_t)callback);
}

const char* q_dnslookup_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dnslookup_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dnslookup_set_nameserver32(void* self, uint8_t protocol, void* nameserver, unsigned short port) {
    QDnsLookup_SetNameserver32((QDnsLookup*)self, protocol, (QHostAddress*)nameserver, port);
}

const char* q_dnslookup_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dnslookup_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_dnslookup_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_dnslookup_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_dnslookup_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_dnslookup_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_dnslookup_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_dnslookup_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_dnslookup_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_dnslookup_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_dnslookup_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_dnslookup_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_dnslookup_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_dnslookup_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_dnslookup_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_dnslookup_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_dnslookup_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_dnslookup_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_dnslookup_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_dnslookup_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_dnslookup_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_dnslookup_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_dnslookup_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_dnslookup_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_dnslookup_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_dnslookup_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_dnslookup_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_dnslookup_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_dnslookup_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_dnslookup_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_dnslookup_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_dnslookup_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_dnslookup_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_dnslookup_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_dnslookup_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_dnslookup_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_dnslookup_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_dnslookup_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_dnslookup_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_dnslookup_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_dnslookup_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_dnslookup_event(void* self, void* event) {
    return QDnsLookup_Event((QDnsLookup*)self, (QEvent*)event);
}

bool q_dnslookup_qbase_event(void* self, void* event) {
    return QDnsLookup_QBaseEvent((QDnsLookup*)self, (QEvent*)event);
}

void q_dnslookup_on_event(void* self, bool (*callback)(void*, void*)) {
    QDnsLookup_OnEvent((QDnsLookup*)self, (intptr_t)callback);
}

bool q_dnslookup_event_filter(void* self, void* watched, void* event) {
    return QDnsLookup_EventFilter((QDnsLookup*)self, (QObject*)watched, (QEvent*)event);
}

bool q_dnslookup_qbase_event_filter(void* self, void* watched, void* event) {
    return QDnsLookup_QBaseEventFilter((QDnsLookup*)self, (QObject*)watched, (QEvent*)event);
}

void q_dnslookup_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QDnsLookup_OnEventFilter((QDnsLookup*)self, (intptr_t)callback);
}

void q_dnslookup_timer_event(void* self, void* event) {
    QDnsLookup_TimerEvent((QDnsLookup*)self, (QTimerEvent*)event);
}

void q_dnslookup_qbase_timer_event(void* self, void* event) {
    QDnsLookup_QBaseTimerEvent((QDnsLookup*)self, (QTimerEvent*)event);
}

void q_dnslookup_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QDnsLookup_OnTimerEvent((QDnsLookup*)self, (intptr_t)callback);
}

void q_dnslookup_child_event(void* self, void* event) {
    QDnsLookup_ChildEvent((QDnsLookup*)self, (QChildEvent*)event);
}

void q_dnslookup_qbase_child_event(void* self, void* event) {
    QDnsLookup_QBaseChildEvent((QDnsLookup*)self, (QChildEvent*)event);
}

void q_dnslookup_on_child_event(void* self, void (*callback)(void*, void*)) {
    QDnsLookup_OnChildEvent((QDnsLookup*)self, (intptr_t)callback);
}

void q_dnslookup_custom_event(void* self, void* event) {
    QDnsLookup_CustomEvent((QDnsLookup*)self, (QEvent*)event);
}

void q_dnslookup_qbase_custom_event(void* self, void* event) {
    QDnsLookup_QBaseCustomEvent((QDnsLookup*)self, (QEvent*)event);
}

void q_dnslookup_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QDnsLookup_OnCustomEvent((QDnsLookup*)self, (intptr_t)callback);
}

void q_dnslookup_connect_notify(void* self, void* signal) {
    QDnsLookup_ConnectNotify((QDnsLookup*)self, (QMetaMethod*)signal);
}

void q_dnslookup_qbase_connect_notify(void* self, void* signal) {
    QDnsLookup_QBaseConnectNotify((QDnsLookup*)self, (QMetaMethod*)signal);
}

void q_dnslookup_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QDnsLookup_OnConnectNotify((QDnsLookup*)self, (intptr_t)callback);
}

void q_dnslookup_disconnect_notify(void* self, void* signal) {
    QDnsLookup_DisconnectNotify((QDnsLookup*)self, (QMetaMethod*)signal);
}

void q_dnslookup_qbase_disconnect_notify(void* self, void* signal) {
    QDnsLookup_QBaseDisconnectNotify((QDnsLookup*)self, (QMetaMethod*)signal);
}

void q_dnslookup_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QDnsLookup_OnDisconnectNotify((QDnsLookup*)self, (intptr_t)callback);
}

QObject* q_dnslookup_sender(void* self) {
    return QDnsLookup_Sender((QDnsLookup*)self);
}

QObject* q_dnslookup_qbase_sender(void* self) {
    return QDnsLookup_QBaseSender((QDnsLookup*)self);
}

void q_dnslookup_on_sender(void* self, QObject* (*callback)()) {
    QDnsLookup_OnSender((QDnsLookup*)self, (intptr_t)callback);
}

int32_t q_dnslookup_sender_signal_index(void* self) {
    return QDnsLookup_SenderSignalIndex((QDnsLookup*)self);
}

int32_t q_dnslookup_qbase_sender_signal_index(void* self) {
    return QDnsLookup_QBaseSenderSignalIndex((QDnsLookup*)self);
}

void q_dnslookup_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QDnsLookup_OnSenderSignalIndex((QDnsLookup*)self, (intptr_t)callback);
}

int32_t q_dnslookup_receivers(void* self, const char* signal) {
    return QDnsLookup_Receivers((QDnsLookup*)self, signal);
}

int32_t q_dnslookup_qbase_receivers(void* self, const char* signal) {
    return QDnsLookup_QBaseReceivers((QDnsLookup*)self, signal);
}

void q_dnslookup_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QDnsLookup_OnReceivers((QDnsLookup*)self, (intptr_t)callback);
}

bool q_dnslookup_is_signal_connected(void* self, void* signal) {
    return QDnsLookup_IsSignalConnected((QDnsLookup*)self, (QMetaMethod*)signal);
}

bool q_dnslookup_qbase_is_signal_connected(void* self, void* signal) {
    return QDnsLookup_QBaseIsSignalConnected((QDnsLookup*)self, (QMetaMethod*)signal);
}

void q_dnslookup_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QDnsLookup_OnIsSignalConnected((QDnsLookup*)self, (intptr_t)callback);
}

void q_dnslookup_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_dnslookup_delete(void* self) {
    QDnsLookup_Delete((QDnsLookup*)(self));
}
