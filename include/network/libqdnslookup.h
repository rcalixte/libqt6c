#pragma once
#ifndef NETWORK_LIBQDNSLOOKUP_H
#define NETWORK_LIBQDNSLOOKUP_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html)

/// q_dnsdomainnamerecord_new constructs a new QDnsDomainNameRecord object.
///
QDnsDomainNameRecord* q_dnsdomainnamerecord_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html)

/// q_dnsdomainnamerecord_new2 constructs a new QDnsDomainNameRecord object.
///
/// @param other QDnsDomainNameRecord*
///
QDnsDomainNameRecord* q_dnsdomainnamerecord_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#operator-eq)
///
/// @param self QDnsDomainNameRecord*
/// @param other QDnsDomainNameRecord*
///
void q_dnsdomainnamerecord_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#swap)
///
/// @param self QDnsDomainNameRecord*
/// @param other QDnsDomainNameRecord*
///
void q_dnsdomainnamerecord_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDnsDomainNameRecord*
///
const char* q_dnsdomainnamerecord_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#timeToLive)
///
/// @param self const QDnsDomainNameRecord*
///
uint32_t q_dnsdomainnamerecord_time_to_live(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#value)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDnsDomainNameRecord*
///
const char* q_dnsdomainnamerecord_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnsdomainnamerecord.html#dtor.QDnsDomainNameRecord)
///
/// Delete this object from C++ memory.
///
/// @param self QDnsDomainNameRecord*
///
void q_dnsdomainnamerecord_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnshostaddressrecord.html)

/// q_dnshostaddressrecord_new constructs a new QDnsHostAddressRecord object.
///
QDnsHostAddressRecord* q_dnshostaddressrecord_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdnshostaddressrecord.html)

/// q_dnshostaddressrecord_new2 constructs a new QDnsHostAddressRecord object.
///
/// @param other QDnsHostAddressRecord*
///
QDnsHostAddressRecord* q_dnshostaddressrecord_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#operator-eq)
///
/// @param self QDnsHostAddressRecord*
/// @param other QDnsHostAddressRecord*
///
void q_dnshostaddressrecord_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#swap)
///
/// @param self QDnsHostAddressRecord*
/// @param other QDnsHostAddressRecord*
///
void q_dnshostaddressrecord_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDnsHostAddressRecord*
///
const char* q_dnshostaddressrecord_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#timeToLive)
///
/// @param self const QDnsHostAddressRecord*
///
uint32_t q_dnshostaddressrecord_time_to_live(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#value)
///
/// @param self const QDnsHostAddressRecord*
///
QHostAddress* q_dnshostaddressrecord_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnshostaddressrecord.html#dtor.QDnsHostAddressRecord)
///
/// Delete this object from C++ memory.
///
/// @param self QDnsHostAddressRecord*
///
void q_dnshostaddressrecord_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html)

/// q_dnsmailexchangerecord_new constructs a new QDnsMailExchangeRecord object.
///
QDnsMailExchangeRecord* q_dnsmailexchangerecord_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html)

/// q_dnsmailexchangerecord_new2 constructs a new QDnsMailExchangeRecord object.
///
/// @param other QDnsMailExchangeRecord*
///
QDnsMailExchangeRecord* q_dnsmailexchangerecord_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#operator-eq)
///
/// @param self QDnsMailExchangeRecord*
/// @param other QDnsMailExchangeRecord*
///
void q_dnsmailexchangerecord_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#swap)
///
/// @param self QDnsMailExchangeRecord*
/// @param other QDnsMailExchangeRecord*
///
void q_dnsmailexchangerecord_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#exchange)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDnsMailExchangeRecord*
///
const char* q_dnsmailexchangerecord_exchange(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDnsMailExchangeRecord*
///
const char* q_dnsmailexchangerecord_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#preference)
///
/// @param self const QDnsMailExchangeRecord*
///
uint16_t q_dnsmailexchangerecord_preference(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#timeToLive)
///
/// @param self const QDnsMailExchangeRecord*
///
uint32_t q_dnsmailexchangerecord_time_to_live(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnsmailexchangerecord.html#dtor.QDnsMailExchangeRecord)
///
/// Delete this object from C++ memory.
///
/// @param self QDnsMailExchangeRecord*
///
void q_dnsmailexchangerecord_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnsservicerecord.html)

/// q_dnsservicerecord_new constructs a new QDnsServiceRecord object.
///
QDnsServiceRecord* q_dnsservicerecord_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdnsservicerecord.html)

/// q_dnsservicerecord_new2 constructs a new QDnsServiceRecord object.
///
/// @param other QDnsServiceRecord*
///
QDnsServiceRecord* q_dnsservicerecord_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnsservicerecord.html#operator-eq)
///
/// @param self QDnsServiceRecord*
/// @param other QDnsServiceRecord*
///
void q_dnsservicerecord_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnsservicerecord.html#swap)
///
/// @param self QDnsServiceRecord*
/// @param other QDnsServiceRecord*
///
void q_dnsservicerecord_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnsservicerecord.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDnsServiceRecord*
///
const char* q_dnsservicerecord_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnsservicerecord.html#port)
///
/// @param self const QDnsServiceRecord*
///
uint16_t q_dnsservicerecord_port(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnsservicerecord.html#priority)
///
/// @param self const QDnsServiceRecord*
///
uint16_t q_dnsservicerecord_priority(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnsservicerecord.html#target)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDnsServiceRecord*
///
const char* q_dnsservicerecord_target(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnsservicerecord.html#timeToLive)
///
/// @param self const QDnsServiceRecord*
///
uint32_t q_dnsservicerecord_time_to_live(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnsservicerecord.html#weight)
///
/// @param self const QDnsServiceRecord*
///
uint16_t q_dnsservicerecord_weight(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnsservicerecord.html#dtor.QDnsServiceRecord)
///
/// Delete this object from C++ memory.
///
/// @param self QDnsServiceRecord*
///
void q_dnsservicerecord_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnstextrecord.html)

/// q_dnstextrecord_new constructs a new QDnsTextRecord object.
///
QDnsTextRecord* q_dnstextrecord_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdnstextrecord.html)

/// q_dnstextrecord_new2 constructs a new QDnsTextRecord object.
///
/// @param other QDnsTextRecord*
///
QDnsTextRecord* q_dnstextrecord_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnstextrecord.html#operator-eq)
///
/// @param self QDnsTextRecord*
/// @param other QDnsTextRecord*
///
void q_dnstextrecord_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnstextrecord.html#swap)
///
/// @param self QDnsTextRecord*
/// @param other QDnsTextRecord*
///
void q_dnstextrecord_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnstextrecord.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDnsTextRecord*
///
const char* q_dnstextrecord_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnstextrecord.html#timeToLive)
///
/// @param self const QDnsTextRecord*
///
uint32_t q_dnstextrecord_time_to_live(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnstextrecord.html#values)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QDnsTextRecord*
///
const char** q_dnstextrecord_values(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnstextrecord.html#dtor.QDnsTextRecord)
///
/// Delete this object from C++ memory.
///
/// @param self QDnsTextRecord*
///
void q_dnstextrecord_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnstlsassociationrecord.html)

/// q_dnstlsassociationrecord_new constructs a new QDnsTlsAssociationRecord object.
///
QDnsTlsAssociationRecord* q_dnstlsassociationrecord_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdnstlsassociationrecord.html)

/// q_dnstlsassociationrecord_new2 constructs a new QDnsTlsAssociationRecord object.
///
/// @param other QDnsTlsAssociationRecord*
///
QDnsTlsAssociationRecord* q_dnstlsassociationrecord_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnstlsassociationrecord.html#operator-eq)
///
/// @param self QDnsTlsAssociationRecord*
/// @param other QDnsTlsAssociationRecord*
///
void q_dnstlsassociationrecord_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnstlsassociationrecord.html#swap)
///
/// @param self QDnsTlsAssociationRecord*
/// @param other QDnsTlsAssociationRecord*
///
void q_dnstlsassociationrecord_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnstlsassociationrecord.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDnsTlsAssociationRecord*
///
const char* q_dnstlsassociationrecord_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnstlsassociationrecord.html#timeToLive)
///
/// @param self const QDnsTlsAssociationRecord*
///
uint32_t q_dnstlsassociationrecord_time_to_live(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnstlsassociationrecord.html#usage)
///
/// @param self const QDnsTlsAssociationRecord*
///
/// @return enum QDnsTlsAssociationRecord__CertificateUsage
///
uint8_t q_dnstlsassociationrecord_usage(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnstlsassociationrecord.html#selector)
///
/// @param self const QDnsTlsAssociationRecord*
///
/// @return enum QDnsTlsAssociationRecord__Selector
///
uint8_t q_dnstlsassociationrecord_selector(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnstlsassociationrecord.html#matchType)
///
/// @param self const QDnsTlsAssociationRecord*
///
/// @return enum QDnsTlsAssociationRecord__MatchingType
///
uint8_t q_dnstlsassociationrecord_match_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnstlsassociationrecord.html#value)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QDnsTlsAssociationRecord*
///
char* q_dnstlsassociationrecord_value(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnstlsassociationrecord.html#dtor.QDnsTlsAssociationRecord)
///
/// Delete this object from C++ memory.
///
/// @param self QDnsTlsAssociationRecord*
///
void q_dnstlsassociationrecord_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html)

/// q_dnslookup_new constructs a new QDnsLookup object.
///
QDnsLookup* q_dnslookup_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html)

/// q_dnslookup_new2 constructs a new QDnsLookup object.
///
/// @param type enum QDnsLookup__Type
/// @param name const char*
///
QDnsLookup* q_dnslookup_new2(int32_t type, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html)

/// q_dnslookup_new3 constructs a new QDnsLookup object.
///
/// @param type enum QDnsLookup__Type
/// @param name const char*
/// @param nameserver QHostAddress*
///
QDnsLookup* q_dnslookup_new3(int32_t type, const char* name, const void* nameserver);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html)

/// q_dnslookup_new4 constructs a new QDnsLookup object.
///
/// @param type enum QDnsLookup__Type
/// @param name const char*
/// @param nameserver QHostAddress*
/// @param port uint16_t
///
QDnsLookup* q_dnslookup_new4(int32_t type, const char* name, const void* nameserver, uint16_t port);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html)

/// q_dnslookup_new5 constructs a new QDnsLookup object.
///
/// @param type enum QDnsLookup__Type
/// @param name const char*
/// @param protocol enum QDnsLookup__Protocol
/// @param nameserver QHostAddress*
///
QDnsLookup* q_dnslookup_new5(int32_t type, const char* name, uint8_t protocol, const void* nameserver);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html)

/// q_dnslookup_new6 constructs a new QDnsLookup object.
///
/// @param parent QObject*
///
QDnsLookup* q_dnslookup_new6(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html)

/// q_dnslookup_new7 constructs a new QDnsLookup object.
///
/// @param type enum QDnsLookup__Type
/// @param name const char*
/// @param parent QObject*
///
QDnsLookup* q_dnslookup_new7(int32_t type, const char* name, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html)

/// q_dnslookup_new8 constructs a new QDnsLookup object.
///
/// @param type enum QDnsLookup__Type
/// @param name const char*
/// @param nameserver QHostAddress*
/// @param parent QObject*
///
QDnsLookup* q_dnslookup_new8(int32_t type, const char* name, const void* nameserver, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html)

/// q_dnslookup_new9 constructs a new QDnsLookup object.
///
/// @param type enum QDnsLookup__Type
/// @param name const char*
/// @param nameserver QHostAddress*
/// @param port uint16_t
/// @param parent QObject*
///
QDnsLookup* q_dnslookup_new9(int32_t type, const char* name, const void* nameserver, uint16_t port, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html)

/// q_dnslookup_new10 constructs a new QDnsLookup object.
///
/// @param type enum QDnsLookup__Type
/// @param name const char*
/// @param protocol enum QDnsLookup__Protocol
/// @param nameserver QHostAddress*
/// @param port uint16_t
///
QDnsLookup* q_dnslookup_new10(int32_t type, const char* name, uint8_t protocol, const void* nameserver, uint16_t port);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html)

/// q_dnslookup_new11 constructs a new QDnsLookup object.
///
/// @param type enum QDnsLookup__Type
/// @param name const char*
/// @param protocol enum QDnsLookup__Protocol
/// @param nameserver QHostAddress*
/// @param port uint16_t
/// @param parent QObject*
///
QDnsLookup* q_dnslookup_new11(int32_t type, const char* name, uint8_t protocol, const void* nameserver, uint16_t port, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QDnsLookup*
///
const QMetaObject* q_dnslookup_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QDnsLookup*
/// @param callback const QMetaObject* func(const QDnsLookup* self)
///
void q_dnslookup_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QDnsLookup*
///
const QMetaObject* q_dnslookup_super_meta_object(const void* self);

/// @param self QDnsLookup*
/// @param param1 const char*
///
void* q_dnslookup_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QDnsLookup*
/// @param callback void* func(QDnsLookup* self, const char* param1)
///
void q_dnslookup_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QDnsLookup*
/// @param param1 const char*
///
void* q_dnslookup_super_metacast(void* self, const char* param1);

/// @param self QDnsLookup*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_dnslookup_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QDnsLookup*
/// @param callback int32_t func(QDnsLookup* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_dnslookup_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QDnsLookup*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_dnslookup_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_dnslookup_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#isAuthenticData)
///
/// @param self const QDnsLookup*
///
bool q_dnslookup_is_authentic_data(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#error)
///
/// @param self const QDnsLookup*
///
/// @return enum QDnsLookup__Error
///
int32_t q_dnslookup_error(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDnsLookup*
///
const char* q_dnslookup_error_string(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#isFinished)
///
/// @param self const QDnsLookup*
///
bool q_dnslookup_is_finished(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDnsLookup*
///
const char* q_dnslookup_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#setName)
///
/// @param self QDnsLookup*
/// @param name const char*
///
void q_dnslookup_set_name(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#type)
///
/// @param self const QDnsLookup*
///
/// @return enum QDnsLookup__Type
///
int32_t q_dnslookup_type(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#setType)
///
/// @param self QDnsLookup*
/// @param type enum QDnsLookup__Type
///
void q_dnslookup_set_type(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#nameserver)
///
/// @param self const QDnsLookup*
///
QHostAddress* q_dnslookup_nameserver(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#setNameserver)
///
/// @param self QDnsLookup*
/// @param nameserver QHostAddress*
///
void q_dnslookup_set_nameserver(void* self, const void* nameserver);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#nameserverPort)
///
/// @param self const QDnsLookup*
///
uint16_t q_dnslookup_nameserver_port(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#setNameserverPort)
///
/// @param self QDnsLookup*
/// @param port uint16_t
///
void q_dnslookup_set_nameserver_port(void* self, uint16_t port);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#nameserverProtocol)
///
/// @param self const QDnsLookup*
///
/// @return enum QDnsLookup__Protocol
///
uint8_t q_dnslookup_nameserver_protocol(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#setNameserverProtocol)
///
/// @param self QDnsLookup*
/// @param protocol enum QDnsLookup__Protocol
///
void q_dnslookup_set_nameserver_protocol(void* self, uint8_t protocol);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#setNameserver)
///
/// @param self QDnsLookup*
/// @param protocol enum QDnsLookup__Protocol
/// @param nameserver QHostAddress*
///
void q_dnslookup_set_nameserver2(void* self, uint8_t protocol, const void* nameserver);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#setNameserver)
///
/// @param self QDnsLookup*
/// @param nameserver QHostAddress*
/// @param port uint16_t
///
void q_dnslookup_set_nameserver3(void* self, const void* nameserver, uint16_t port);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#canonicalNameRecords)
///
/// @param self const QDnsLookup*
///
/// @return libqt_list of QDnsDomainNameRecord*
///
libqt_list q_dnslookup_canonical_name_records(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#hostAddressRecords)
///
/// @param self const QDnsLookup*
///
/// @return libqt_list of QDnsHostAddressRecord*
///
libqt_list q_dnslookup_host_address_records(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#mailExchangeRecords)
///
/// @param self const QDnsLookup*
///
/// @return libqt_list of QDnsMailExchangeRecord*
///
libqt_list q_dnslookup_mail_exchange_records(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#nameServerRecords)
///
/// @param self const QDnsLookup*
///
/// @return libqt_list of QDnsDomainNameRecord*
///
libqt_list q_dnslookup_name_server_records(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#pointerRecords)
///
/// @param self const QDnsLookup*
///
/// @return libqt_list of QDnsDomainNameRecord*
///
libqt_list q_dnslookup_pointer_records(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#serviceRecords)
///
/// @param self const QDnsLookup*
///
/// @return libqt_list of QDnsServiceRecord*
///
libqt_list q_dnslookup_service_records(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#textRecords)
///
/// @param self const QDnsLookup*
///
/// @return libqt_list of QDnsTextRecord*
///
libqt_list q_dnslookup_text_records(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#tlsAssociationRecords)
///
/// @param self const QDnsLookup*
///
/// @return libqt_list of QDnsTlsAssociationRecord*
///
libqt_list q_dnslookup_tls_association_records(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#setSslConfiguration)
///
/// @param self QDnsLookup*
/// @param sslConfiguration QSslConfiguration*
///
void q_dnslookup_set_ssl_configuration(void* self, const void* sslConfiguration);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#sslConfiguration)
///
/// @param self const QDnsLookup*
///
QSslConfiguration* q_dnslookup_ssl_configuration(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#isProtocolSupported)
///
/// @param protocol enum QDnsLookup__Protocol
///
bool q_dnslookup_is_protocol_supported(uint8_t protocol);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#defaultPortForProtocol)
///
/// @param protocol enum QDnsLookup__Protocol
///
uint16_t q_dnslookup_default_port_for_protocol(uint8_t protocol);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#abort)
///
/// @param self QDnsLookup*
///
void q_dnslookup_abort(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#lookup)
///
/// @param self QDnsLookup*
///
void q_dnslookup_lookup(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#finished)
///
/// @param self QDnsLookup*
///
void q_dnslookup_finished(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#finished)
///
/// @param self QDnsLookup*
/// @param callback void func(QDnsLookup* self)
///
void q_dnslookup_on_finished(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#nameChanged)
///
/// @param self QDnsLookup*
/// @param name const char*
///
void q_dnslookup_name_changed(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#nameChanged)
///
/// @param self QDnsLookup*
/// @param callback void func(QDnsLookup* self, const char* name)
///
void q_dnslookup_on_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#typeChanged)
///
/// @param self QDnsLookup*
/// @param type enum QDnsLookup__Type
///
void q_dnslookup_type_changed(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#typeChanged)
///
/// @param self QDnsLookup*
/// @param callback void func(QDnsLookup* self, enum QDnsLookup__Type type)
///
void q_dnslookup_on_type_changed(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#nameserverChanged)
///
/// @param self QDnsLookup*
/// @param nameserver QHostAddress*
///
void q_dnslookup_nameserver_changed(void* self, const void* nameserver);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#nameserverChanged)
///
/// @param self QDnsLookup*
/// @param callback void func(QDnsLookup* self, QHostAddress* nameserver)
///
void q_dnslookup_on_nameserver_changed(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#nameserverPortChanged)
///
/// @param self QDnsLookup*
/// @param port uint16_t
///
void q_dnslookup_nameserver_port_changed(void* self, uint16_t port);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#nameserverPortChanged)
///
/// @param self QDnsLookup*
/// @param callback void func(QDnsLookup* self, uint16_t port)
///
void q_dnslookup_on_nameserver_port_changed(void* self, void (*callback)(void*, uint16_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#nameserverProtocolChanged)
///
/// @param self QDnsLookup*
/// @param protocol enum QDnsLookup__Protocol
///
void q_dnslookup_nameserver_protocol_changed(void* self, uint8_t protocol);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#nameserverProtocolChanged)
///
/// @param self QDnsLookup*
/// @param callback void func(QDnsLookup* self, enum QDnsLookup__Protocol protocol)
///
void q_dnslookup_on_nameserver_protocol_changed(void* self, void (*callback)(void*, uint8_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_dnslookup_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_dnslookup_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#setNameserver)
///
/// @param self QDnsLookup*
/// @param protocol enum QDnsLookup__Protocol
/// @param nameserver QHostAddress*
/// @param port uint16_t
///
void q_dnslookup_set_nameserver32(void* self, uint8_t protocol, const void* nameserver, uint16_t port);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QDnsLookup*
///
const char* q_dnslookup_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QDnsLookup*
/// @param name const char*
///
void q_dnslookup_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QDnsLookup*
///
bool q_dnslookup_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QDnsLookup*
///
bool q_dnslookup_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QDnsLookup*
///
bool q_dnslookup_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QDnsLookup*
///
bool q_dnslookup_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QDnsLookup*
/// @param b bool
///
bool q_dnslookup_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QDnsLookup*
///
QThread* q_dnslookup_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QDnsLookup*
/// @param thread QThread*
///
bool q_dnslookup_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDnsLookup*
/// @param interval int
///
int32_t q_dnslookup_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDnsLookup*
/// @param time int64_t of nanoseconds
///
int32_t q_dnslookup_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDnsLookup*
/// @param id int
///
void q_dnslookup_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QDnsLookup*
/// @param id enum Qt__TimerId
///
void q_dnslookup_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QDnsLookup*
///
/// @return libqt_list of QObject*
///
libqt_list q_dnslookup_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QDnsLookup*
/// @param parent QObject*
///
void q_dnslookup_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QDnsLookup*
/// @param filterObj QObject*
///
void q_dnslookup_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QDnsLookup*
/// @param obj QObject*
///
void q_dnslookup_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_dnslookup_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_dnslookup_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QDnsLookup*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_dnslookup_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_dnslookup_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_dnslookup_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDnsLookup*
///
bool q_dnslookup_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDnsLookup*
/// @param receiver QObject*
///
bool q_dnslookup_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_dnslookup_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QDnsLookup*
///
void q_dnslookup_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QDnsLookup*
///
void q_dnslookup_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QDnsLookup*
/// @param name const char*
/// @param value QVariant*
///
bool q_dnslookup_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QDnsLookup*
/// @param name const char*
///
QVariant* q_dnslookup_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QDnsLookup*
///
const char** q_dnslookup_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QDnsLookup*
///
QBindingStorage* q_dnslookup_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QDnsLookup*
///
const QBindingStorage* q_dnslookup_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDnsLookup*
///
void q_dnslookup_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDnsLookup*
/// @param callback void func(QDnsLookup* self)
///
void q_dnslookup_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QDnsLookup*
///
QObject* q_dnslookup_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QDnsLookup*
/// @param classname const char*
///
bool q_dnslookup_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QDnsLookup*
///
void q_dnslookup_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDnsLookup*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_dnslookup_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QDnsLookup*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_dnslookup_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_dnslookup_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_dnslookup_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QDnsLookup*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_dnslookup_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDnsLookup*
/// @param signal const char*
///
bool q_dnslookup_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDnsLookup*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_dnslookup_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDnsLookup*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_dnslookup_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QDnsLookup*
/// @param receiver QObject*
/// @param member const char*
///
bool q_dnslookup_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDnsLookup*
/// @param param1 QObject*
///
void q_dnslookup_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QDnsLookup*
/// @param callback void func(QDnsLookup* self, QObject* param1)
///
void q_dnslookup_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDnsLookup*
/// @param event QEvent*
///
bool q_dnslookup_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDnsLookup*
/// @param event QEvent*
///
bool q_dnslookup_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDnsLookup*
/// @param callback bool func(QDnsLookup* self, QEvent* event)
///
void q_dnslookup_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDnsLookup*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_dnslookup_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDnsLookup*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_dnslookup_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDnsLookup*
/// @param callback bool func(QDnsLookup* self, QObject* watched, QEvent* event)
///
void q_dnslookup_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDnsLookup*
/// @param event QTimerEvent*
///
void q_dnslookup_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDnsLookup*
/// @param event QTimerEvent*
///
void q_dnslookup_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDnsLookup*
/// @param callback void func(QDnsLookup* self, QTimerEvent* event)
///
void q_dnslookup_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDnsLookup*
/// @param event QChildEvent*
///
void q_dnslookup_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDnsLookup*
/// @param event QChildEvent*
///
void q_dnslookup_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDnsLookup*
/// @param callback void func(QDnsLookup* self, QChildEvent* event)
///
void q_dnslookup_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDnsLookup*
/// @param event QEvent*
///
void q_dnslookup_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDnsLookup*
/// @param event QEvent*
///
void q_dnslookup_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDnsLookup*
/// @param callback void func(QDnsLookup* self, QEvent* event)
///
void q_dnslookup_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDnsLookup*
/// @param signal QMetaMethod*
///
void q_dnslookup_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDnsLookup*
/// @param signal QMetaMethod*
///
void q_dnslookup_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDnsLookup*
/// @param callback void func(QDnsLookup* self, QMetaMethod* signal)
///
void q_dnslookup_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QDnsLookup*
/// @param signal QMetaMethod*
///
void q_dnslookup_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QDnsLookup*
/// @param signal QMetaMethod*
///
void q_dnslookup_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QDnsLookup*
/// @param callback void func(QDnsLookup* self, QMetaMethod* signal)
///
void q_dnslookup_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QDnsLookup*
///
QObject* q_dnslookup_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QDnsLookup*
///
QObject* q_dnslookup_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QDnsLookup*
/// @param callback QObject* func(QDnsLookup* self)
///
void q_dnslookup_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QDnsLookup*
///
int32_t q_dnslookup_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QDnsLookup*
///
int32_t q_dnslookup_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QDnsLookup*
/// @param callback int32_t func(QDnsLookup* self)
///
void q_dnslookup_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QDnsLookup*
/// @param signal const char*
///
int32_t q_dnslookup_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QDnsLookup*
/// @param signal const char*
///
int32_t q_dnslookup_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QDnsLookup*
/// @param callback int32_t func(QDnsLookup* self, const char* signal)
///
void q_dnslookup_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QDnsLookup*
/// @param signal QMetaMethod*
///
bool q_dnslookup_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QDnsLookup*
/// @param signal QMetaMethod*
///
bool q_dnslookup_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QDnsLookup*
/// @param callback bool func(QDnsLookup* self, QMetaMethod* signal)
///
void q_dnslookup_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QDnsLookup*
/// @param callback void func(QDnsLookup* self, const char* objectName)
///
void q_dnslookup_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#dtor.QDnsLookup)
///
/// Delete this object from C++ memory.
///
/// @param self QDnsLookup*
///
void q_dnslookup_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#public-types)

typedef enum {
    QDNSTLSASSOCIATIONRECORD_CERTIFICATEUSAGE_CERTIFICATEAUTHORITYCONSTRAIT = 0,
    QDNSTLSASSOCIATIONRECORD_CERTIFICATEUSAGE_SERVICECERTIFICATECONSTRAINT = 1,
    QDNSTLSASSOCIATIONRECORD_CERTIFICATEUSAGE_TRUSTANCHORASSERTION = 2,
    QDNSTLSASSOCIATIONRECORD_CERTIFICATEUSAGE_DOMAINISSUEDCERTIFICATE = 3,
    QDNSTLSASSOCIATIONRECORD_CERTIFICATEUSAGE_PRIVATEUSE = 255,
    QDNSTLSASSOCIATIONRECORD_CERTIFICATEUSAGE_PKIX_TA = 0,
    QDNSTLSASSOCIATIONRECORD_CERTIFICATEUSAGE_PKIX_EE = 1,
    QDNSTLSASSOCIATIONRECORD_CERTIFICATEUSAGE_DANE_TA = 2,
    QDNSTLSASSOCIATIONRECORD_CERTIFICATEUSAGE_DANE_EE = 3,
    QDNSTLSASSOCIATIONRECORD_CERTIFICATEUSAGE_PRIVCERT = 255
} QDnsTlsAssociationRecord__CertificateUsage;

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#public-types)

typedef enum {
    QDNSTLSASSOCIATIONRECORD_SELECTOR_FULLCERTIFICATE = 0,
    QDNSTLSASSOCIATIONRECORD_SELECTOR_SUBJECTPUBLICKEYINFO = 1,
    QDNSTLSASSOCIATIONRECORD_SELECTOR_PRIVATEUSE = 255,
    QDNSTLSASSOCIATIONRECORD_SELECTOR_CERT = 0,
    QDNSTLSASSOCIATIONRECORD_SELECTOR_SPKI = 1,
    QDNSTLSASSOCIATIONRECORD_SELECTOR_PRIVSEL = 255
} QDnsTlsAssociationRecord__Selector;

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#public-types)

typedef enum {
    QDNSTLSASSOCIATIONRECORD_MATCHINGTYPE_EXACT = 0,
    QDNSTLSASSOCIATIONRECORD_MATCHINGTYPE_SHA256 = 1,
    QDNSTLSASSOCIATIONRECORD_MATCHINGTYPE_SHA512 = 2,
    QDNSTLSASSOCIATIONRECORD_MATCHINGTYPE_PRIVATEUSE = 255,
    QDNSTLSASSOCIATIONRECORD_MATCHINGTYPE_PRIVMATCH = 255
} QDnsTlsAssociationRecord__MatchingType;

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#public-types)

typedef enum {
    QDNSLOOKUP_ERROR_NOERROR = 0,
    QDNSLOOKUP_ERROR_RESOLVERERROR = 1,
    QDNSLOOKUP_ERROR_OPERATIONCANCELLEDERROR = 2,
    QDNSLOOKUP_ERROR_INVALIDREQUESTERROR = 3,
    QDNSLOOKUP_ERROR_INVALIDREPLYERROR = 4,
    QDNSLOOKUP_ERROR_SERVERFAILUREERROR = 5,
    QDNSLOOKUP_ERROR_SERVERREFUSEDERROR = 6,
    QDNSLOOKUP_ERROR_NOTFOUNDERROR = 7,
    QDNSLOOKUP_ERROR_TIMEOUTERROR = 8
} QDnsLookup__Error;

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#public-types)

typedef enum {
    QDNSLOOKUP_TYPE_A = 1,
    QDNSLOOKUP_TYPE_AAAA = 28,
    QDNSLOOKUP_TYPE_ANY = 255,
    QDNSLOOKUP_TYPE_CNAME = 5,
    QDNSLOOKUP_TYPE_MX = 15,
    QDNSLOOKUP_TYPE_NS = 2,
    QDNSLOOKUP_TYPE_PTR = 12,
    QDNSLOOKUP_TYPE_SRV = 33,
    QDNSLOOKUP_TYPE_TLSA = 52,
    QDNSLOOKUP_TYPE_TXT = 16
} QDnsLookup__Type;

/// [Upstream resources](https://doc.qt.io/qt-6/qdnslookup.html#public-types)

typedef enum {
    QDNSLOOKUP_PROTOCOL_STANDARD = 0,
    QDNSLOOKUP_PROTOCOL_DNSOVERTLS = 1
} QDnsLookup__Protocol;

#endif
