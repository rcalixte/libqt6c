#pragma once
#ifndef SRC_NETWORKQT6C_LIBQDNSLOOKUP_H
#define SRC_NETWORKQT6C_LIBQDNSLOOKUP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "libqhostaddress.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QDnsDomainNameRecord* q_dnsdomainnamerecord_new();
QDnsDomainNameRecord* q_dnsdomainnamerecord_new2(void* other);
void q_dnsdomainnamerecord_operator_assign(void* self, void* other);
void q_dnsdomainnamerecord_swap(void* self, void* other);
const char* q_dnsdomainnamerecord_name(void* self);
uint32_t q_dnsdomainnamerecord_time_to_live(void* self);
const char* q_dnsdomainnamerecord_value(void* self);
void q_dnsdomainnamerecord_delete(void* self);

QDnsHostAddressRecord* q_dnshostaddressrecord_new();
QDnsHostAddressRecord* q_dnshostaddressrecord_new2(void* other);
void q_dnshostaddressrecord_operator_assign(void* self, void* other);
void q_dnshostaddressrecord_swap(void* self, void* other);
const char* q_dnshostaddressrecord_name(void* self);
uint32_t q_dnshostaddressrecord_time_to_live(void* self);
QHostAddress* q_dnshostaddressrecord_value(void* self);
void q_dnshostaddressrecord_delete(void* self);

QDnsMailExchangeRecord* q_dnsmailexchangerecord_new();
QDnsMailExchangeRecord* q_dnsmailexchangerecord_new2(void* other);
void q_dnsmailexchangerecord_operator_assign(void* self, void* other);
void q_dnsmailexchangerecord_swap(void* self, void* other);
const char* q_dnsmailexchangerecord_exchange(void* self);
const char* q_dnsmailexchangerecord_name(void* self);
unsigned short q_dnsmailexchangerecord_preference(void* self);
uint32_t q_dnsmailexchangerecord_time_to_live(void* self);
void q_dnsmailexchangerecord_delete(void* self);

QDnsServiceRecord* q_dnsservicerecord_new();
QDnsServiceRecord* q_dnsservicerecord_new2(void* other);
void q_dnsservicerecord_operator_assign(void* self, void* other);
void q_dnsservicerecord_swap(void* self, void* other);
const char* q_dnsservicerecord_name(void* self);
unsigned short q_dnsservicerecord_port(void* self);
unsigned short q_dnsservicerecord_priority(void* self);
const char* q_dnsservicerecord_target(void* self);
uint32_t q_dnsservicerecord_time_to_live(void* self);
unsigned short q_dnsservicerecord_weight(void* self);
void q_dnsservicerecord_delete(void* self);

QDnsTextRecord* q_dnstextrecord_new();
QDnsTextRecord* q_dnstextrecord_new2(void* other);
void q_dnstextrecord_operator_assign(void* self, void* other);
void q_dnstextrecord_swap(void* self, void* other);
const char* q_dnstextrecord_name(void* self);
uint32_t q_dnstextrecord_time_to_live(void* self);
const char** q_dnstextrecord_values(void* self);
void q_dnstextrecord_delete(void* self);

QDnsLookup* q_dnslookup_new();
QDnsLookup* q_dnslookup_new2(int64_t typeVal, const char* name);
QDnsLookup* q_dnslookup_new3(int64_t typeVal, const char* name, void* nameserver);
QDnsLookup* q_dnslookup_new4(void* parent);
QDnsLookup* q_dnslookup_new5(int64_t typeVal, const char* name, void* parent);
QDnsLookup* q_dnslookup_new6(int64_t typeVal, const char* name, void* nameserver, void* parent);
QMetaObject* q_dnslookup_meta_object(void* self);
void* q_dnslookup_metacast(void* self, const char* param1);
int32_t q_dnslookup_metacall(void* self, int64_t param1, int param2, void* param3);
void q_dnslookup_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_dnslookup_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_dnslookup_tr(const char* s);
int64_t q_dnslookup_error(void* self);
const char* q_dnslookup_error_string(void* self);
bool q_dnslookup_is_finished(void* self);
const char* q_dnslookup_name(void* self);
void q_dnslookup_set_name(void* self, const char* name);
int64_t q_dnslookup_type(void* self);
void q_dnslookup_set_type(void* self, int64_t typeVal);
QHostAddress* q_dnslookup_nameserver(void* self);
void q_dnslookup_set_nameserver(void* self, void* nameserver);
libqt_list /* of QDnsDomainNameRecord* */ q_dnslookup_canonical_name_records(void* self);
libqt_list /* of QDnsHostAddressRecord* */ q_dnslookup_host_address_records(void* self);
libqt_list /* of QDnsMailExchangeRecord* */ q_dnslookup_mail_exchange_records(void* self);
libqt_list /* of QDnsDomainNameRecord* */ q_dnslookup_name_server_records(void* self);
libqt_list /* of QDnsDomainNameRecord* */ q_dnslookup_pointer_records(void* self);
libqt_list /* of QDnsServiceRecord* */ q_dnslookup_service_records(void* self);
libqt_list /* of QDnsTextRecord* */ q_dnslookup_text_records(void* self);
void q_dnslookup_abort(void* self);
void q_dnslookup_lookup(void* self);
void q_dnslookup_finished(void* self);
void q_dnslookup_on_finished(void* self, void (*slot)(void*));
void q_dnslookup_name_changed(void* self, const char* name);
void q_dnslookup_on_name_changed(void* self, void (*slot)(void*, const char*));
void q_dnslookup_type_changed(void* self, int64_t typeVal);
void q_dnslookup_on_type_changed(void* self, void (*slot)(void*, int64_t));
void q_dnslookup_nameserver_changed(void* self, void* nameserver);
void q_dnslookup_on_nameserver_changed(void* self, void (*slot)(void*, void*));
const char* q_dnslookup_tr2(const char* s, const char* c);
const char* q_dnslookup_tr3(const char* s, const char* c, int n);
const char* q_dnslookup_object_name(void* self);
void q_dnslookup_set_object_name(void* self, const char* name);
bool q_dnslookup_is_widget_type(void* self);
bool q_dnslookup_is_window_type(void* self);
bool q_dnslookup_is_quick_item_type(void* self);
bool q_dnslookup_signals_blocked(void* self);
bool q_dnslookup_block_signals(void* self, bool b);
QThread* q_dnslookup_thread(void* self);
void q_dnslookup_move_to_thread(void* self, void* thread);
int32_t q_dnslookup_start_timer(void* self, int interval);
void q_dnslookup_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_dnslookup_children(void* self);
void q_dnslookup_set_parent(void* self, void* parent);
void q_dnslookup_install_event_filter(void* self, void* filterObj);
void q_dnslookup_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_dnslookup_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_dnslookup_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_dnslookup_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_dnslookup_disconnect_with_q_meta_object_connection(void* param1);
void q_dnslookup_dump_object_tree(void* self);
void q_dnslookup_dump_object_info(void* self);
bool q_dnslookup_set_property(void* self, const char* name, void* value);
QVariant* q_dnslookup_property(void* self, const char* name);
const char** q_dnslookup_dynamic_property_names(void* self);
QBindingStorage* q_dnslookup_binding_storage(void* self);
QBindingStorage* q_dnslookup_binding_storage2(void* self);
void q_dnslookup_destroyed(void* self);
void q_dnslookup_on_destroyed(void* self, void (*slot)(void*));
QObject* q_dnslookup_parent(void* self);
bool q_dnslookup_inherits(void* self, const char* classname);
void q_dnslookup_delete_later(void* self);
int32_t q_dnslookup_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_dnslookup_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_dnslookup_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_dnslookup_destroyed1(void* self, void* param1);
void q_dnslookup_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_dnslookup_event(void* self, void* event);
bool q_dnslookup_qbase_event(void* self, void* event);
void q_dnslookup_on_event(void* self, bool (*slot)(void*, void*));
bool q_dnslookup_event_filter(void* self, void* watched, void* event);
bool q_dnslookup_qbase_event_filter(void* self, void* watched, void* event);
void q_dnslookup_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_dnslookup_timer_event(void* self, void* event);
void q_dnslookup_qbase_timer_event(void* self, void* event);
void q_dnslookup_on_timer_event(void* self, void (*slot)(void*, void*));
void q_dnslookup_child_event(void* self, void* event);
void q_dnslookup_qbase_child_event(void* self, void* event);
void q_dnslookup_on_child_event(void* self, void (*slot)(void*, void*));
void q_dnslookup_custom_event(void* self, void* event);
void q_dnslookup_qbase_custom_event(void* self, void* event);
void q_dnslookup_on_custom_event(void* self, void (*slot)(void*, void*));
void q_dnslookup_connect_notify(void* self, void* signal);
void q_dnslookup_qbase_connect_notify(void* self, void* signal);
void q_dnslookup_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_dnslookup_disconnect_notify(void* self, void* signal);
void q_dnslookup_qbase_disconnect_notify(void* self, void* signal);
void q_dnslookup_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_dnslookup_sender(void* self);
QObject* q_dnslookup_qbase_sender(void* self);
void q_dnslookup_on_sender(void* self, QObject* (*slot)());
int32_t q_dnslookup_sender_signal_index(void* self);
int32_t q_dnslookup_qbase_sender_signal_index(void* self);
void q_dnslookup_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_dnslookup_receivers(void* self, const char* signal);
int32_t q_dnslookup_qbase_receivers(void* self, const char* signal);
void q_dnslookup_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_dnslookup_is_signal_connected(void* self, void* signal);
bool q_dnslookup_qbase_is_signal_connected(void* self, void* signal);
void q_dnslookup_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_dnslookup_delete(void* self);

/// https://doc.qt.io/qt-6/qdnslookup.html#types

typedef enum {
    QDNSLOOKUP_ERROR_NOERROR = 0,
    QDNSLOOKUP_ERROR_RESOLVERERROR = 1,
    QDNSLOOKUP_ERROR_OPERATIONCANCELLEDERROR = 2,
    QDNSLOOKUP_ERROR_INVALIDREQUESTERROR = 3,
    QDNSLOOKUP_ERROR_INVALIDREPLYERROR = 4,
    QDNSLOOKUP_ERROR_SERVERFAILUREERROR = 5,
    QDNSLOOKUP_ERROR_SERVERREFUSEDERROR = 6,
    QDNSLOOKUP_ERROR_NOTFOUNDERROR = 7
} QDnsLookup__Error;

typedef enum {
    QDNSLOOKUP_TYPE_A = 1,
    QDNSLOOKUP_TYPE_AAAA = 28,
    QDNSLOOKUP_TYPE_ANY = 255,
    QDNSLOOKUP_TYPE_CNAME = 5,
    QDNSLOOKUP_TYPE_MX = 15,
    QDNSLOOKUP_TYPE_NS = 2,
    QDNSLOOKUP_TYPE_PTR = 12,
    QDNSLOOKUP_TYPE_SRV = 33,
    QDNSLOOKUP_TYPE_TXT = 16
} QDnsLookup__Type;

#endif
