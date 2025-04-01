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

/// https://doc.qt.io/qt-6/qdnsdomainnamerecord.html

/// q_dnsdomainnamerecord_new constructs a new QDnsDomainNameRecord object.
///
///
QDnsDomainNameRecord* q_dnsdomainnamerecord_new();

/// q_dnsdomainnamerecord_new2 constructs a new QDnsDomainNameRecord object.
///
/// ``` QDnsDomainNameRecord* other ```
QDnsDomainNameRecord* q_dnsdomainnamerecord_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#operator=)
///
/// ``` QDnsDomainNameRecord* self, QDnsDomainNameRecord* other ```
void q_dnsdomainnamerecord_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#swap)
///
/// ``` QDnsDomainNameRecord* self, QDnsDomainNameRecord* other ```
void q_dnsdomainnamerecord_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#name)
///
/// ``` QDnsDomainNameRecord* self ```
const char* q_dnsdomainnamerecord_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#timeToLive)
///
/// ``` QDnsDomainNameRecord* self ```
uint32_t q_dnsdomainnamerecord_time_to_live(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#value)
///
/// ``` QDnsDomainNameRecord* self ```
const char* q_dnsdomainnamerecord_value(void* self);

/// Delete this object from C++ memory.
///
/// ``` QDnsDomainNameRecord* self ```
void q_dnsdomainnamerecord_delete(void* self);

/// https://doc.qt.io/qt-6/qdnshostaddressrecord.html

/// q_dnshostaddressrecord_new constructs a new QDnsHostAddressRecord object.
///
///
QDnsHostAddressRecord* q_dnshostaddressrecord_new();

/// q_dnshostaddressrecord_new2 constructs a new QDnsHostAddressRecord object.
///
/// ``` QDnsHostAddressRecord* other ```
QDnsHostAddressRecord* q_dnshostaddressrecord_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#operator=)
///
/// ``` QDnsHostAddressRecord* self, QDnsHostAddressRecord* other ```
void q_dnshostaddressrecord_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#swap)
///
/// ``` QDnsHostAddressRecord* self, QDnsHostAddressRecord* other ```
void q_dnshostaddressrecord_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#name)
///
/// ``` QDnsHostAddressRecord* self ```
const char* q_dnshostaddressrecord_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#timeToLive)
///
/// ``` QDnsHostAddressRecord* self ```
uint32_t q_dnshostaddressrecord_time_to_live(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#value)
///
/// ``` QDnsHostAddressRecord* self ```
QHostAddress* q_dnshostaddressrecord_value(void* self);

/// Delete this object from C++ memory.
///
/// ``` QDnsHostAddressRecord* self ```
void q_dnshostaddressrecord_delete(void* self);

/// https://doc.qt.io/qt-6/qdnsmailexchangerecord.html

/// q_dnsmailexchangerecord_new constructs a new QDnsMailExchangeRecord object.
///
///
QDnsMailExchangeRecord* q_dnsmailexchangerecord_new();

/// q_dnsmailexchangerecord_new2 constructs a new QDnsMailExchangeRecord object.
///
/// ``` QDnsMailExchangeRecord* other ```
QDnsMailExchangeRecord* q_dnsmailexchangerecord_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#operator=)
///
/// ``` QDnsMailExchangeRecord* self, QDnsMailExchangeRecord* other ```
void q_dnsmailexchangerecord_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#swap)
///
/// ``` QDnsMailExchangeRecord* self, QDnsMailExchangeRecord* other ```
void q_dnsmailexchangerecord_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#exchange)
///
/// ``` QDnsMailExchangeRecord* self ```
const char* q_dnsmailexchangerecord_exchange(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#name)
///
/// ``` QDnsMailExchangeRecord* self ```
const char* q_dnsmailexchangerecord_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#preference)
///
/// ``` QDnsMailExchangeRecord* self ```
unsigned short q_dnsmailexchangerecord_preference(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#timeToLive)
///
/// ``` QDnsMailExchangeRecord* self ```
uint32_t q_dnsmailexchangerecord_time_to_live(void* self);

/// Delete this object from C++ memory.
///
/// ``` QDnsMailExchangeRecord* self ```
void q_dnsmailexchangerecord_delete(void* self);

/// https://doc.qt.io/qt-6/qdnsservicerecord.html

/// q_dnsservicerecord_new constructs a new QDnsServiceRecord object.
///
///
QDnsServiceRecord* q_dnsservicerecord_new();

/// q_dnsservicerecord_new2 constructs a new QDnsServiceRecord object.
///
/// ``` QDnsServiceRecord* other ```
QDnsServiceRecord* q_dnsservicerecord_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#operator=)
///
/// ``` QDnsServiceRecord* self, QDnsServiceRecord* other ```
void q_dnsservicerecord_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#swap)
///
/// ``` QDnsServiceRecord* self, QDnsServiceRecord* other ```
void q_dnsservicerecord_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#name)
///
/// ``` QDnsServiceRecord* self ```
const char* q_dnsservicerecord_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#port)
///
/// ``` QDnsServiceRecord* self ```
unsigned short q_dnsservicerecord_port(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#priority)
///
/// ``` QDnsServiceRecord* self ```
unsigned short q_dnsservicerecord_priority(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#target)
///
/// ``` QDnsServiceRecord* self ```
const char* q_dnsservicerecord_target(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#timeToLive)
///
/// ``` QDnsServiceRecord* self ```
uint32_t q_dnsservicerecord_time_to_live(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnsservicerecord.html#weight)
///
/// ``` QDnsServiceRecord* self ```
unsigned short q_dnsservicerecord_weight(void* self);

/// Delete this object from C++ memory.
///
/// ``` QDnsServiceRecord* self ```
void q_dnsservicerecord_delete(void* self);

/// https://doc.qt.io/qt-6/qdnstextrecord.html

/// q_dnstextrecord_new constructs a new QDnsTextRecord object.
///
///
QDnsTextRecord* q_dnstextrecord_new();

/// q_dnstextrecord_new2 constructs a new QDnsTextRecord object.
///
/// ``` QDnsTextRecord* other ```
QDnsTextRecord* q_dnstextrecord_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnstextrecord.html#operator=)
///
/// ``` QDnsTextRecord* self, QDnsTextRecord* other ```
void q_dnstextrecord_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnstextrecord.html#swap)
///
/// ``` QDnsTextRecord* self, QDnsTextRecord* other ```
void q_dnstextrecord_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnstextrecord.html#name)
///
/// ``` QDnsTextRecord* self ```
const char* q_dnstextrecord_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnstextrecord.html#timeToLive)
///
/// ``` QDnsTextRecord* self ```
uint32_t q_dnstextrecord_time_to_live(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnstextrecord.html#values)
///
/// ``` QDnsTextRecord* self ```
const char** q_dnstextrecord_values(void* self);

/// Delete this object from C++ memory.
///
/// ``` QDnsTextRecord* self ```
void q_dnstextrecord_delete(void* self);

/// https://doc.qt.io/qt-6/qdnslookup.html

/// q_dnslookup_new constructs a new QDnsLookup object.
///
///
QDnsLookup* q_dnslookup_new();

/// q_dnslookup_new2 constructs a new QDnsLookup object.
///
/// ``` enum QDnsLookup__Type typeVal, const char* name ```
QDnsLookup* q_dnslookup_new2(int64_t typeVal, const char* name);

/// q_dnslookup_new3 constructs a new QDnsLookup object.
///
/// ``` enum QDnsLookup__Type typeVal, const char* name, QHostAddress* nameserver ```
QDnsLookup* q_dnslookup_new3(int64_t typeVal, const char* name, void* nameserver);

/// q_dnslookup_new4 constructs a new QDnsLookup object.
///
/// ``` QObject* parent ```
QDnsLookup* q_dnslookup_new4(void* parent);

/// q_dnslookup_new5 constructs a new QDnsLookup object.
///
/// ``` enum QDnsLookup__Type typeVal, const char* name, QObject* parent ```
QDnsLookup* q_dnslookup_new5(int64_t typeVal, const char* name, void* parent);

/// q_dnslookup_new6 constructs a new QDnsLookup object.
///
/// ``` enum QDnsLookup__Type typeVal, const char* name, QHostAddress* nameserver, QObject* parent ```
QDnsLookup* q_dnslookup_new6(int64_t typeVal, const char* name, void* nameserver, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QDnsLookup* self ```
QMetaObject* q_dnslookup_meta_object(void* self);

/// ``` QDnsLookup* self, const char* param1 ```
void* q_dnslookup_metacast(void* self, const char* param1);

/// ``` QDnsLookup* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_dnslookup_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QDnsLookup* self, int32_t (*slot)(QDnsLookup*, enum QMetaObject__Call, int, void*) ```
void q_dnslookup_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QDnsLookup* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_dnslookup_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_dnslookup_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#error)
///
/// ``` QDnsLookup* self ```
int64_t q_dnslookup_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#errorString)
///
/// ``` QDnsLookup* self ```
const char* q_dnslookup_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#isFinished)
///
/// ``` QDnsLookup* self ```
bool q_dnslookup_is_finished(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#name)
///
/// ``` QDnsLookup* self ```
const char* q_dnslookup_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#setName)
///
/// ``` QDnsLookup* self, const char* name ```
void q_dnslookup_set_name(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#type)
///
/// ``` QDnsLookup* self ```
int64_t q_dnslookup_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#setType)
///
/// ``` QDnsLookup* self, enum QDnsLookup__Type typeVal ```
void q_dnslookup_set_type(void* self, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#nameserver)
///
/// ``` QDnsLookup* self ```
QHostAddress* q_dnslookup_nameserver(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#setNameserver)
///
/// ``` QDnsLookup* self, QHostAddress* nameserver ```
void q_dnslookup_set_nameserver(void* self, void* nameserver);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#canonicalNameRecords)
///
/// ``` QDnsLookup* self ```
libqt_list /* of QDnsDomainNameRecord* */ q_dnslookup_canonical_name_records(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#hostAddressRecords)
///
/// ``` QDnsLookup* self ```
libqt_list /* of QDnsHostAddressRecord* */ q_dnslookup_host_address_records(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#mailExchangeRecords)
///
/// ``` QDnsLookup* self ```
libqt_list /* of QDnsMailExchangeRecord* */ q_dnslookup_mail_exchange_records(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#nameServerRecords)
///
/// ``` QDnsLookup* self ```
libqt_list /* of QDnsDomainNameRecord* */ q_dnslookup_name_server_records(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#pointerRecords)
///
/// ``` QDnsLookup* self ```
libqt_list /* of QDnsDomainNameRecord* */ q_dnslookup_pointer_records(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#serviceRecords)
///
/// ``` QDnsLookup* self ```
libqt_list /* of QDnsServiceRecord* */ q_dnslookup_service_records(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#textRecords)
///
/// ``` QDnsLookup* self ```
libqt_list /* of QDnsTextRecord* */ q_dnslookup_text_records(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#abort)
///
/// ``` QDnsLookup* self ```
void q_dnslookup_abort(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#lookup)
///
/// ``` QDnsLookup* self ```
void q_dnslookup_lookup(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#finished)
///
/// ``` QDnsLookup* self ```
void q_dnslookup_finished(void* self);

/// ``` QDnsLookup* self, void (*slot)(QDnsLookup*) ```
void q_dnslookup_on_finished(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#nameChanged)
///
/// ``` QDnsLookup* self, const char* name ```
void q_dnslookup_name_changed(void* self, const char* name);

/// ``` QDnsLookup* self, void (*slot)(QDnsLookup*, const char*) ```
void q_dnslookup_on_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#typeChanged)
///
/// ``` QDnsLookup* self, enum QDnsLookup__Type typeVal ```
void q_dnslookup_type_changed(void* self, int64_t typeVal);

/// ``` QDnsLookup* self, void (*slot)(QDnsLookup*, enum QDnsLookup__Type) ```
void q_dnslookup_on_type_changed(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qdnslookup.html#nameserverChanged)
///
/// ``` QDnsLookup* self, QHostAddress* nameserver ```
void q_dnslookup_nameserver_changed(void* self, void* nameserver);

/// ``` QDnsLookup* self, void (*slot)(QDnsLookup*, QHostAddress*) ```
void q_dnslookup_on_nameserver_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_dnslookup_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_dnslookup_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QDnsLookup* self ```
const char* q_dnslookup_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QDnsLookup* self, const char* name ```
void q_dnslookup_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QDnsLookup* self ```
bool q_dnslookup_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QDnsLookup* self ```
bool q_dnslookup_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QDnsLookup* self ```
bool q_dnslookup_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QDnsLookup* self ```
bool q_dnslookup_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QDnsLookup* self, bool b ```
bool q_dnslookup_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QDnsLookup* self ```
QThread* q_dnslookup_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QDnsLookup* self, QThread* thread ```
void q_dnslookup_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDnsLookup* self, int interval ```
int32_t q_dnslookup_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QDnsLookup* self, int id ```
void q_dnslookup_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QDnsLookup* self ```
libqt_list /* of QObject* */ q_dnslookup_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QDnsLookup* self, QObject* parent ```
void q_dnslookup_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QDnsLookup* self, QObject* filterObj ```
void q_dnslookup_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QDnsLookup* self, QObject* obj ```
void q_dnslookup_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_dnslookup_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDnsLookup* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_dnslookup_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_dnslookup_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_dnslookup_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QDnsLookup* self ```
void q_dnslookup_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QDnsLookup* self ```
void q_dnslookup_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QDnsLookup* self, const char* name, QVariant* value ```
bool q_dnslookup_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QDnsLookup* self, const char* name ```
QVariant* q_dnslookup_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QDnsLookup* self ```
const char** q_dnslookup_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDnsLookup* self ```
QBindingStorage* q_dnslookup_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDnsLookup* self ```
QBindingStorage* q_dnslookup_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDnsLookup* self ```
void q_dnslookup_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QDnsLookup* self, void (*slot)(QObject*) ```
void q_dnslookup_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QDnsLookup* self ```
QObject* q_dnslookup_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QDnsLookup* self, const char* classname ```
bool q_dnslookup_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QDnsLookup* self ```
void q_dnslookup_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDnsLookup* self, int interval, enum Qt__TimerType timerType ```
int32_t q_dnslookup_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_dnslookup_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDnsLookup* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_dnslookup_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDnsLookup* self, QObject* param1 ```
void q_dnslookup_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QDnsLookup* self, void (*slot)(QObject*, QObject*) ```
void q_dnslookup_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDnsLookup* self, QEvent* event ```
bool q_dnslookup_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDnsLookup* self, QEvent* event ```
bool q_dnslookup_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDnsLookup* self, bool (*slot)(QDnsLookup*, QEvent*) ```
void q_dnslookup_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDnsLookup* self, QObject* watched, QEvent* event ```
bool q_dnslookup_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDnsLookup* self, QObject* watched, QEvent* event ```
bool q_dnslookup_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDnsLookup* self, bool (*slot)(QDnsLookup*, QObject*, QEvent*) ```
void q_dnslookup_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDnsLookup* self, QTimerEvent* event ```
void q_dnslookup_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDnsLookup* self, QTimerEvent* event ```
void q_dnslookup_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDnsLookup* self, void (*slot)(QDnsLookup*, QTimerEvent*) ```
void q_dnslookup_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDnsLookup* self, QChildEvent* event ```
void q_dnslookup_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDnsLookup* self, QChildEvent* event ```
void q_dnslookup_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDnsLookup* self, void (*slot)(QDnsLookup*, QChildEvent*) ```
void q_dnslookup_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDnsLookup* self, QEvent* event ```
void q_dnslookup_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDnsLookup* self, QEvent* event ```
void q_dnslookup_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDnsLookup* self, void (*slot)(QDnsLookup*, QEvent*) ```
void q_dnslookup_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDnsLookup* self, QMetaMethod* signal ```
void q_dnslookup_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDnsLookup* self, QMetaMethod* signal ```
void q_dnslookup_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDnsLookup* self, void (*slot)(QDnsLookup*, QMetaMethod*) ```
void q_dnslookup_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDnsLookup* self, QMetaMethod* signal ```
void q_dnslookup_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDnsLookup* self, QMetaMethod* signal ```
void q_dnslookup_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDnsLookup* self, void (*slot)(QDnsLookup*, QMetaMethod*) ```
void q_dnslookup_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDnsLookup* self ```
QObject* q_dnslookup_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDnsLookup* self ```
QObject* q_dnslookup_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDnsLookup* self, QObject* (*slot)() ```
void q_dnslookup_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDnsLookup* self ```
int32_t q_dnslookup_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDnsLookup* self ```
int32_t q_dnslookup_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDnsLookup* self, int32_t (*slot)() ```
void q_dnslookup_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDnsLookup* self, const char* signal ```
int32_t q_dnslookup_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDnsLookup* self, const char* signal ```
int32_t q_dnslookup_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDnsLookup* self, int32_t (*slot)(QDnsLookup*, const char*) ```
void q_dnslookup_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDnsLookup* self, QMetaMethod* signal ```
bool q_dnslookup_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDnsLookup* self, QMetaMethod* signal ```
bool q_dnslookup_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDnsLookup* self, bool (*slot)(QDnsLookup*, QMetaMethod*) ```
void q_dnslookup_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QDnsLookup* self ```
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
