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
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

void q_dnstextrecord_delete(void* self) {
    QDnsTextRecord_Delete((QDnsTextRecord*)(self));
}

QDnsLookup* q_dnslookup_new() {
    return QDnsLookup_new();
}

QDnsLookup* q_dnslookup_new2(int64_t typeVal, const char* name) {
    return QDnsLookup_new2(typeVal, qstring(name));
}

QDnsLookup* q_dnslookup_new3(int64_t typeVal, const char* name, void* nameserver) {
    return QDnsLookup_new3(typeVal, qstring(name), (QHostAddress*)nameserver);
}

QDnsLookup* q_dnslookup_new4(void* parent) {
    return QDnsLookup_new4((QObject*)parent);
}

QDnsLookup* q_dnslookup_new5(int64_t typeVal, const char* name, void* parent) {
    return QDnsLookup_new5(typeVal, qstring(name), (QObject*)parent);
}

QDnsLookup* q_dnslookup_new6(int64_t typeVal, const char* name, void* nameserver, void* parent) {
    return QDnsLookup_new6(typeVal, qstring(name), (QHostAddress*)nameserver, (QObject*)parent);
}

QMetaObject* q_dnslookup_meta_object(void* self) {
    return QDnsLookup_MetaObject((QDnsLookup*)self);
}

void* q_dnslookup_metacast(void* self, const char* param1) {
    return QDnsLookup_Metacast((QDnsLookup*)self, param1);
}

int32_t q_dnslookup_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QDnsLookup_Metacall((QDnsLookup*)self, param1, param2, param3);
}

void q_dnslookup_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QDnsLookup_OnMetacall((QDnsLookup*)self, (intptr_t)slot);
}

int32_t q_dnslookup_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QDnsLookup_QBaseMetacall((QDnsLookup*)self, param1, param2, param3);
}

const char* q_dnslookup_tr(const char* s) {
    libqt_string _str = QDnsLookup_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_dnslookup_error(void* self) {
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

int64_t q_dnslookup_type(void* self) {
    return QDnsLookup_Type((QDnsLookup*)self);
}

void q_dnslookup_set_type(void* self, int64_t typeVal) {
    QDnsLookup_SetType((QDnsLookup*)self, typeVal);
}

QHostAddress* q_dnslookup_nameserver(void* self) {
    return QDnsLookup_Nameserver((QDnsLookup*)self);
}

void q_dnslookup_set_nameserver(void* self, void* nameserver) {
    QDnsLookup_SetNameserver((QDnsLookup*)self, (QHostAddress*)nameserver);
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

void q_dnslookup_abort(void* self) {
    QDnsLookup_Abort((QDnsLookup*)self);
}

void q_dnslookup_lookup(void* self) {
    QDnsLookup_Lookup((QDnsLookup*)self);
}

void q_dnslookup_finished(void* self) {
    QDnsLookup_Finished((QDnsLookup*)self);
}

void q_dnslookup_on_finished(void* self, void (*slot)(void*)) {
    QDnsLookup_Connect_Finished((QDnsLookup*)self, (intptr_t)slot);
}

void q_dnslookup_name_changed(void* self, const char* name) {
    QDnsLookup_NameChanged((QDnsLookup*)self, qstring(name));
}

void q_dnslookup_on_name_changed(void* self, void (*slot)(void*, const char*)) {
    QDnsLookup_Connect_NameChanged((QDnsLookup*)self, (intptr_t)slot);
}

void q_dnslookup_type_changed(void* self, int64_t typeVal) {
    QDnsLookup_TypeChanged((QDnsLookup*)self, typeVal);
}

void q_dnslookup_on_type_changed(void* self, void (*slot)(void*, int64_t)) {
    QDnsLookup_Connect_TypeChanged((QDnsLookup*)self, (intptr_t)slot);
}

void q_dnslookup_nameserver_changed(void* self, void* nameserver) {
    QDnsLookup_NameserverChanged((QDnsLookup*)self, (QHostAddress*)nameserver);
}

void q_dnslookup_on_nameserver_changed(void* self, void (*slot)(void*, void*)) {
    QDnsLookup_Connect_NameserverChanged((QDnsLookup*)self, (intptr_t)slot);
}

const char* q_dnslookup_tr2(const char* s, const char* c) {
    libqt_string _str = QDnsLookup_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dnslookup_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QDnsLookup_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_dnslookup_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dnslookup_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
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

void q_dnslookup_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_dnslookup_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_dnslookup_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
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

bool q_dnslookup_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
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
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_dnslookup_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_dnslookup_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_dnslookup_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_dnslookup_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
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

int32_t q_dnslookup_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_dnslookup_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_dnslookup_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_dnslookup_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_dnslookup_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_dnslookup_event(void* self, void* event) {
    return QDnsLookup_Event((QDnsLookup*)self, (QEvent*)event);
}

bool q_dnslookup_qbase_event(void* self, void* event) {
    return QDnsLookup_QBaseEvent((QDnsLookup*)self, (QEvent*)event);
}

void q_dnslookup_on_event(void* self, bool (*slot)(void*, void*)) {
    QDnsLookup_OnEvent((QDnsLookup*)self, (intptr_t)slot);
}

bool q_dnslookup_event_filter(void* self, void* watched, void* event) {
    return QDnsLookup_EventFilter((QDnsLookup*)self, (QObject*)watched, (QEvent*)event);
}

bool q_dnslookup_qbase_event_filter(void* self, void* watched, void* event) {
    return QDnsLookup_QBaseEventFilter((QDnsLookup*)self, (QObject*)watched, (QEvent*)event);
}

void q_dnslookup_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QDnsLookup_OnEventFilter((QDnsLookup*)self, (intptr_t)slot);
}

void q_dnslookup_timer_event(void* self, void* event) {
    QDnsLookup_TimerEvent((QDnsLookup*)self, (QTimerEvent*)event);
}

void q_dnslookup_qbase_timer_event(void* self, void* event) {
    QDnsLookup_QBaseTimerEvent((QDnsLookup*)self, (QTimerEvent*)event);
}

void q_dnslookup_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QDnsLookup_OnTimerEvent((QDnsLookup*)self, (intptr_t)slot);
}

void q_dnslookup_child_event(void* self, void* event) {
    QDnsLookup_ChildEvent((QDnsLookup*)self, (QChildEvent*)event);
}

void q_dnslookup_qbase_child_event(void* self, void* event) {
    QDnsLookup_QBaseChildEvent((QDnsLookup*)self, (QChildEvent*)event);
}

void q_dnslookup_on_child_event(void* self, void (*slot)(void*, void*)) {
    QDnsLookup_OnChildEvent((QDnsLookup*)self, (intptr_t)slot);
}

void q_dnslookup_custom_event(void* self, void* event) {
    QDnsLookup_CustomEvent((QDnsLookup*)self, (QEvent*)event);
}

void q_dnslookup_qbase_custom_event(void* self, void* event) {
    QDnsLookup_QBaseCustomEvent((QDnsLookup*)self, (QEvent*)event);
}

void q_dnslookup_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QDnsLookup_OnCustomEvent((QDnsLookup*)self, (intptr_t)slot);
}

void q_dnslookup_connect_notify(void* self, void* signal) {
    QDnsLookup_ConnectNotify((QDnsLookup*)self, (QMetaMethod*)signal);
}

void q_dnslookup_qbase_connect_notify(void* self, void* signal) {
    QDnsLookup_QBaseConnectNotify((QDnsLookup*)self, (QMetaMethod*)signal);
}

void q_dnslookup_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QDnsLookup_OnConnectNotify((QDnsLookup*)self, (intptr_t)slot);
}

void q_dnslookup_disconnect_notify(void* self, void* signal) {
    QDnsLookup_DisconnectNotify((QDnsLookup*)self, (QMetaMethod*)signal);
}

void q_dnslookup_qbase_disconnect_notify(void* self, void* signal) {
    QDnsLookup_QBaseDisconnectNotify((QDnsLookup*)self, (QMetaMethod*)signal);
}

void q_dnslookup_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QDnsLookup_OnDisconnectNotify((QDnsLookup*)self, (intptr_t)slot);
}

QObject* q_dnslookup_sender(void* self) {
    return QDnsLookup_Sender((QDnsLookup*)self);
}

QObject* q_dnslookup_qbase_sender(void* self) {
    return QDnsLookup_QBaseSender((QDnsLookup*)self);
}

void q_dnslookup_on_sender(void* self, QObject* (*slot)()) {
    QDnsLookup_OnSender((QDnsLookup*)self, (intptr_t)slot);
}

int32_t q_dnslookup_sender_signal_index(void* self) {
    return QDnsLookup_SenderSignalIndex((QDnsLookup*)self);
}

int32_t q_dnslookup_qbase_sender_signal_index(void* self) {
    return QDnsLookup_QBaseSenderSignalIndex((QDnsLookup*)self);
}

void q_dnslookup_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QDnsLookup_OnSenderSignalIndex((QDnsLookup*)self, (intptr_t)slot);
}

int32_t q_dnslookup_receivers(void* self, const char* signal) {
    return QDnsLookup_Receivers((QDnsLookup*)self, signal);
}

int32_t q_dnslookup_qbase_receivers(void* self, const char* signal) {
    return QDnsLookup_QBaseReceivers((QDnsLookup*)self, signal);
}

void q_dnslookup_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QDnsLookup_OnReceivers((QDnsLookup*)self, (intptr_t)slot);
}

bool q_dnslookup_is_signal_connected(void* self, void* signal) {
    return QDnsLookup_IsSignalConnected((QDnsLookup*)self, (QMetaMethod*)signal);
}

bool q_dnslookup_qbase_is_signal_connected(void* self, void* signal) {
    return QDnsLookup_QBaseIsSignalConnected((QDnsLookup*)self, (QMetaMethod*)signal);
}

void q_dnslookup_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QDnsLookup_OnIsSignalConnected((QDnsLookup*)self, (intptr_t)slot);
}

void q_dnslookup_delete(void* self) {
    QDnsLookup_Delete((QDnsLookup*)(self));
}
