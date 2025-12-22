#pragma once
#ifndef SRC_NETWORK_QT6C_LIBQHTTPHEADERS_H
#define SRC_NETWORK_QT6C_LIBQHTTPHEADERS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html)

/// q_httpheaders_new constructs a new QHttpHeaders object.
///
QHttpHeaders* q_httpheaders_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html)

/// q_httpheaders_new2 constructs a new QHttpHeaders object.
///
/// @param other QHttpHeaders*
///
QHttpHeaders* q_httpheaders_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#operator-eq)
///
/// @param self QHttpHeaders*
/// @param other QHttpHeaders*
///
void q_httpheaders_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#swap)
///
/// @param self QHttpHeaders*
/// @param other QHttpHeaders*
///
void q_httpheaders_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#append)
///
/// @param self QHttpHeaders*
/// @param name char*
/// @param value char*
///
bool q_httpheaders_append(void* self, char* name, char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#append)
///
/// @param self QHttpHeaders*
/// @param name enum QHttpHeaders__WellKnownHeader
/// @param value char*
///
bool q_httpheaders_append2(void* self, int32_t name, char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#insert)
///
/// @param self QHttpHeaders*
/// @param i int64_t
/// @param name char*
/// @param value char*
///
bool q_httpheaders_insert(void* self, int64_t i, char* name, char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#insert)
///
/// @param self QHttpHeaders*
/// @param i int64_t
/// @param name enum QHttpHeaders__WellKnownHeader
/// @param value char*
///
bool q_httpheaders_insert2(void* self, int64_t i, int32_t name, char* value);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#replace)
///
/// @param self QHttpHeaders*
/// @param i int64_t
/// @param name char*
/// @param newValue char*
///
bool q_httpheaders_replace(void* self, int64_t i, char* name, char* newValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#replace)
///
/// @param self QHttpHeaders*
/// @param i int64_t
/// @param name enum QHttpHeaders__WellKnownHeader
/// @param newValue char*
///
bool q_httpheaders_replace2(void* self, int64_t i, int32_t name, char* newValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#replaceOrAppend)
///
/// @param self QHttpHeaders*
/// @param name char*
/// @param newValue char*
///
bool q_httpheaders_replace_or_append(void* self, char* name, char* newValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#replaceOrAppend)
///
/// @param self QHttpHeaders*
/// @param name enum QHttpHeaders__WellKnownHeader
/// @param newValue char*
///
bool q_httpheaders_replace_or_append2(void* self, int32_t name, char* newValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#contains)
///
/// @param self QHttpHeaders*
/// @param name char*
///
bool q_httpheaders_contains(void* self, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#contains)
///
/// @param self QHttpHeaders*
/// @param name enum QHttpHeaders__WellKnownHeader
///
bool q_httpheaders_contains2(void* self, int32_t name);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#clear)
///
/// @param self QHttpHeaders*
///
void q_httpheaders_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#removeAll)
///
/// @param self QHttpHeaders*
/// @param name char*
///
void q_httpheaders_remove_all(void* self, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#removeAll)
///
/// @param self QHttpHeaders*
/// @param name enum QHttpHeaders__WellKnownHeader
///
void q_httpheaders_remove_all2(void* self, int32_t name);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#removeAt)
///
/// @param self QHttpHeaders*
/// @param i int64_t
///
void q_httpheaders_remove_at(void* self, int64_t i);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#value)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QHttpHeaders*
/// @param name char*
///
const char* q_httpheaders_value(void* self, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#value)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QHttpHeaders*
/// @param name enum QHttpHeaders__WellKnownHeader
///
const char* q_httpheaders_value2(void* self, int32_t name);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#values)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QHttpHeaders*
/// @param name char*
///
const char** q_httpheaders_values(void* self, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#values)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QHttpHeaders*
/// @param name enum QHttpHeaders__WellKnownHeader
///
const char** q_httpheaders_values2(void* self, int32_t name);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#valueAt)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QHttpHeaders*
/// @param i int64_t
///
const char* q_httpheaders_value_at(void* self, int64_t i);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#combinedValue)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QHttpHeaders*
/// @param name char*
///
char* q_httpheaders_combined_value(void* self, char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#combinedValue)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QHttpHeaders*
/// @param name enum QHttpHeaders__WellKnownHeader
///
char* q_httpheaders_combined_value2(void* self, int32_t name);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#size)
///
/// @param self QHttpHeaders*
///
int64_t q_httpheaders_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#reserve)
///
/// @param self QHttpHeaders*
/// @param size int64_t
///
void q_httpheaders_reserve(void* self, int64_t size);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#isEmpty)
///
/// @param self QHttpHeaders*
///
bool q_httpheaders_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#wellKnownHeaderName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param name enum QHttpHeaders__WellKnownHeader
///
const char* q_httpheaders_well_known_header_name(int32_t name);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#toListOfPairs)
///
/// @param self QHttpHeaders*
///
libqt_list /* of libqt_pair  tuple of char* and char*  */ q_httpheaders_to_list_of_pairs(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#value)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QHttpHeaders*
/// @param name char*
/// @param defaultValue const char*
///
const char* q_httpheaders_value22(void* self, char* name, const char* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#value)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QHttpHeaders*
/// @param name enum QHttpHeaders__WellKnownHeader
/// @param defaultValue const char*
///
const char* q_httpheaders_value23(void* self, int32_t name, const char* defaultValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#dtor.QHttpHeaders)
///
/// Delete this object from C++ memory.
///
/// @param self QHttpHeaders*
///
void q_httpheaders_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhttpheaders.html#public-types)

typedef enum {
    QHTTPHEADERS_WELLKNOWNHEADER_AIM = 0,
    QHTTPHEADERS_WELLKNOWNHEADER_ACCEPT = 1,
    QHTTPHEADERS_WELLKNOWNHEADER_ACCEPTADDITIONS = 2,
    QHTTPHEADERS_WELLKNOWNHEADER_ACCEPTCH = 3,
    QHTTPHEADERS_WELLKNOWNHEADER_ACCEPTDATETIME = 4,
    QHTTPHEADERS_WELLKNOWNHEADER_ACCEPTENCODING = 5,
    QHTTPHEADERS_WELLKNOWNHEADER_ACCEPTFEATURES = 6,
    QHTTPHEADERS_WELLKNOWNHEADER_ACCEPTLANGUAGE = 7,
    QHTTPHEADERS_WELLKNOWNHEADER_ACCEPTPATCH = 8,
    QHTTPHEADERS_WELLKNOWNHEADER_ACCEPTPOST = 9,
    QHTTPHEADERS_WELLKNOWNHEADER_ACCEPTRANGES = 10,
    QHTTPHEADERS_WELLKNOWNHEADER_ACCEPTSIGNATURE = 11,
    QHTTPHEADERS_WELLKNOWNHEADER_ACCESSCONTROLALLOWCREDENTIALS = 12,
    QHTTPHEADERS_WELLKNOWNHEADER_ACCESSCONTROLALLOWHEADERS = 13,
    QHTTPHEADERS_WELLKNOWNHEADER_ACCESSCONTROLALLOWMETHODS = 14,
    QHTTPHEADERS_WELLKNOWNHEADER_ACCESSCONTROLALLOWORIGIN = 15,
    QHTTPHEADERS_WELLKNOWNHEADER_ACCESSCONTROLEXPOSEHEADERS = 16,
    QHTTPHEADERS_WELLKNOWNHEADER_ACCESSCONTROLMAXAGE = 17,
    QHTTPHEADERS_WELLKNOWNHEADER_ACCESSCONTROLREQUESTHEADERS = 18,
    QHTTPHEADERS_WELLKNOWNHEADER_ACCESSCONTROLREQUESTMETHOD = 19,
    QHTTPHEADERS_WELLKNOWNHEADER_AGE = 20,
    QHTTPHEADERS_WELLKNOWNHEADER_ALLOW = 21,
    QHTTPHEADERS_WELLKNOWNHEADER_ALPN = 22,
    QHTTPHEADERS_WELLKNOWNHEADER_ALTSVC = 23,
    QHTTPHEADERS_WELLKNOWNHEADER_ALTUSED = 24,
    QHTTPHEADERS_WELLKNOWNHEADER_ALTERNATES = 25,
    QHTTPHEADERS_WELLKNOWNHEADER_APPLYTOREDIRECTREF = 26,
    QHTTPHEADERS_WELLKNOWNHEADER_AUTHENTICATIONCONTROL = 27,
    QHTTPHEADERS_WELLKNOWNHEADER_AUTHENTICATIONINFO = 28,
    QHTTPHEADERS_WELLKNOWNHEADER_AUTHORIZATION = 29,
    QHTTPHEADERS_WELLKNOWNHEADER_CACHECONTROL = 30,
    QHTTPHEADERS_WELLKNOWNHEADER_CACHESTATUS = 31,
    QHTTPHEADERS_WELLKNOWNHEADER_CALMANAGEDID = 32,
    QHTTPHEADERS_WELLKNOWNHEADER_CALDAVTIMEZONES = 33,
    QHTTPHEADERS_WELLKNOWNHEADER_CAPSULEPROTOCOL = 34,
    QHTTPHEADERS_WELLKNOWNHEADER_CDNCACHECONTROL = 35,
    QHTTPHEADERS_WELLKNOWNHEADER_CDNLOOP = 36,
    QHTTPHEADERS_WELLKNOWNHEADER_CERTNOTAFTER = 37,
    QHTTPHEADERS_WELLKNOWNHEADER_CERTNOTBEFORE = 38,
    QHTTPHEADERS_WELLKNOWNHEADER_CLEARSITEDATA = 39,
    QHTTPHEADERS_WELLKNOWNHEADER_CLIENTCERT = 40,
    QHTTPHEADERS_WELLKNOWNHEADER_CLIENTCERTCHAIN = 41,
    QHTTPHEADERS_WELLKNOWNHEADER_CLOSE = 42,
    QHTTPHEADERS_WELLKNOWNHEADER_CONNECTION = 43,
    QHTTPHEADERS_WELLKNOWNHEADER_CONTENTDIGEST = 44,
    QHTTPHEADERS_WELLKNOWNHEADER_CONTENTDISPOSITION = 45,
    QHTTPHEADERS_WELLKNOWNHEADER_CONTENTENCODING = 46,
    QHTTPHEADERS_WELLKNOWNHEADER_CONTENTID = 47,
    QHTTPHEADERS_WELLKNOWNHEADER_CONTENTLANGUAGE = 48,
    QHTTPHEADERS_WELLKNOWNHEADER_CONTENTLENGTH = 49,
    QHTTPHEADERS_WELLKNOWNHEADER_CONTENTLOCATION = 50,
    QHTTPHEADERS_WELLKNOWNHEADER_CONTENTRANGE = 51,
    QHTTPHEADERS_WELLKNOWNHEADER_CONTENTSECURITYPOLICY = 52,
    QHTTPHEADERS_WELLKNOWNHEADER_CONTENTSECURITYPOLICYREPORTONLY = 53,
    QHTTPHEADERS_WELLKNOWNHEADER_CONTENTTYPE = 54,
    QHTTPHEADERS_WELLKNOWNHEADER_COOKIE = 55,
    QHTTPHEADERS_WELLKNOWNHEADER_CROSSORIGINEMBEDDERPOLICY = 56,
    QHTTPHEADERS_WELLKNOWNHEADER_CROSSORIGINEMBEDDERPOLICYREPORTONLY = 57,
    QHTTPHEADERS_WELLKNOWNHEADER_CROSSORIGINOPENERPOLICY = 58,
    QHTTPHEADERS_WELLKNOWNHEADER_CROSSORIGINOPENERPOLICYREPORTONLY = 59,
    QHTTPHEADERS_WELLKNOWNHEADER_CROSSORIGINRESOURCEPOLICY = 60,
    QHTTPHEADERS_WELLKNOWNHEADER_DASL = 61,
    QHTTPHEADERS_WELLKNOWNHEADER_DATE = 62,
    QHTTPHEADERS_WELLKNOWNHEADER_DAV = 63,
    QHTTPHEADERS_WELLKNOWNHEADER_DELTABASE = 64,
    QHTTPHEADERS_WELLKNOWNHEADER_DEPTH = 65,
    QHTTPHEADERS_WELLKNOWNHEADER_DESTINATION = 66,
    QHTTPHEADERS_WELLKNOWNHEADER_DIFFERENTIALID = 67,
    QHTTPHEADERS_WELLKNOWNHEADER_DPOP = 68,
    QHTTPHEADERS_WELLKNOWNHEADER_DPOPNONCE = 69,
    QHTTPHEADERS_WELLKNOWNHEADER_EARLYDATA = 70,
    QHTTPHEADERS_WELLKNOWNHEADER_ETAG = 71,
    QHTTPHEADERS_WELLKNOWNHEADER_EXPECT = 72,
    QHTTPHEADERS_WELLKNOWNHEADER_EXPECTCT = 73,
    QHTTPHEADERS_WELLKNOWNHEADER_EXPIRES = 74,
    QHTTPHEADERS_WELLKNOWNHEADER_FORWARDED = 75,
    QHTTPHEADERS_WELLKNOWNHEADER_FROM = 76,
    QHTTPHEADERS_WELLKNOWNHEADER_HOBAREG = 77,
    QHTTPHEADERS_WELLKNOWNHEADER_HOST = 78,
    QHTTPHEADERS_WELLKNOWNHEADER_IF = 79,
    QHTTPHEADERS_WELLKNOWNHEADER_IFMATCH = 80,
    QHTTPHEADERS_WELLKNOWNHEADER_IFMODIFIEDSINCE = 81,
    QHTTPHEADERS_WELLKNOWNHEADER_IFNONEMATCH = 82,
    QHTTPHEADERS_WELLKNOWNHEADER_IFRANGE = 83,
    QHTTPHEADERS_WELLKNOWNHEADER_IFSCHEDULETAGMATCH = 84,
    QHTTPHEADERS_WELLKNOWNHEADER_IFUNMODIFIEDSINCE = 85,
    QHTTPHEADERS_WELLKNOWNHEADER_IM = 86,
    QHTTPHEADERS_WELLKNOWNHEADER_INCLUDEREFERREDTOKENBINDINGID = 87,
    QHTTPHEADERS_WELLKNOWNHEADER_KEEPALIVE = 88,
    QHTTPHEADERS_WELLKNOWNHEADER_LABEL = 89,
    QHTTPHEADERS_WELLKNOWNHEADER_LASTEVENTID = 90,
    QHTTPHEADERS_WELLKNOWNHEADER_LASTMODIFIED = 91,
    QHTTPHEADERS_WELLKNOWNHEADER_LINK = 92,
    QHTTPHEADERS_WELLKNOWNHEADER_LOCATION = 93,
    QHTTPHEADERS_WELLKNOWNHEADER_LOCKTOKEN = 94,
    QHTTPHEADERS_WELLKNOWNHEADER_MAXFORWARDS = 95,
    QHTTPHEADERS_WELLKNOWNHEADER_MEMENTODATETIME = 96,
    QHTTPHEADERS_WELLKNOWNHEADER_METER = 97,
    QHTTPHEADERS_WELLKNOWNHEADER_MIMEVERSION = 98,
    QHTTPHEADERS_WELLKNOWNHEADER_NEGOTIATE = 99,
    QHTTPHEADERS_WELLKNOWNHEADER_NEL = 100,
    QHTTPHEADERS_WELLKNOWNHEADER_ODATAENTITYID = 101,
    QHTTPHEADERS_WELLKNOWNHEADER_ODATAISOLATION = 102,
    QHTTPHEADERS_WELLKNOWNHEADER_ODATAMAXVERSION = 103,
    QHTTPHEADERS_WELLKNOWNHEADER_ODATAVERSION = 104,
    QHTTPHEADERS_WELLKNOWNHEADER_OPTIONALWWWAUTHENTICATE = 105,
    QHTTPHEADERS_WELLKNOWNHEADER_ORDERINGTYPE = 106,
    QHTTPHEADERS_WELLKNOWNHEADER_ORIGIN = 107,
    QHTTPHEADERS_WELLKNOWNHEADER_ORIGINAGENTCLUSTER = 108,
    QHTTPHEADERS_WELLKNOWNHEADER_OSCORE = 109,
    QHTTPHEADERS_WELLKNOWNHEADER_OSLCCOREVERSION = 110,
    QHTTPHEADERS_WELLKNOWNHEADER_OVERWRITE = 111,
    QHTTPHEADERS_WELLKNOWNHEADER_PINGFROM = 112,
    QHTTPHEADERS_WELLKNOWNHEADER_PINGTO = 113,
    QHTTPHEADERS_WELLKNOWNHEADER_POSITION = 114,
    QHTTPHEADERS_WELLKNOWNHEADER_PREFER = 115,
    QHTTPHEADERS_WELLKNOWNHEADER_PREFERENCEAPPLIED = 116,
    QHTTPHEADERS_WELLKNOWNHEADER_PRIORITY = 117,
    QHTTPHEADERS_WELLKNOWNHEADER_PROXYAUTHENTICATE = 118,
    QHTTPHEADERS_WELLKNOWNHEADER_PROXYAUTHENTICATIONINFO = 119,
    QHTTPHEADERS_WELLKNOWNHEADER_PROXYAUTHORIZATION = 120,
    QHTTPHEADERS_WELLKNOWNHEADER_PROXYSTATUS = 121,
    QHTTPHEADERS_WELLKNOWNHEADER_PUBLICKEYPINS = 122,
    QHTTPHEADERS_WELLKNOWNHEADER_PUBLICKEYPINSREPORTONLY = 123,
    QHTTPHEADERS_WELLKNOWNHEADER_RANGE = 124,
    QHTTPHEADERS_WELLKNOWNHEADER_REDIRECTREF = 125,
    QHTTPHEADERS_WELLKNOWNHEADER_REFERER = 126,
    QHTTPHEADERS_WELLKNOWNHEADER_REFRESH = 127,
    QHTTPHEADERS_WELLKNOWNHEADER_REPLAYNONCE = 128,
    QHTTPHEADERS_WELLKNOWNHEADER_REPRDIGEST = 129,
    QHTTPHEADERS_WELLKNOWNHEADER_RETRYAFTER = 130,
    QHTTPHEADERS_WELLKNOWNHEADER_SCHEDULEREPLY = 131,
    QHTTPHEADERS_WELLKNOWNHEADER_SCHEDULETAG = 132,
    QHTTPHEADERS_WELLKNOWNHEADER_SECPURPOSE = 133,
    QHTTPHEADERS_WELLKNOWNHEADER_SECTOKENBINDING = 134,
    QHTTPHEADERS_WELLKNOWNHEADER_SECWEBSOCKETACCEPT = 135,
    QHTTPHEADERS_WELLKNOWNHEADER_SECWEBSOCKETEXTENSIONS = 136,
    QHTTPHEADERS_WELLKNOWNHEADER_SECWEBSOCKETKEY = 137,
    QHTTPHEADERS_WELLKNOWNHEADER_SECWEBSOCKETPROTOCOL = 138,
    QHTTPHEADERS_WELLKNOWNHEADER_SECWEBSOCKETVERSION = 139,
    QHTTPHEADERS_WELLKNOWNHEADER_SERVER = 140,
    QHTTPHEADERS_WELLKNOWNHEADER_SERVERTIMING = 141,
    QHTTPHEADERS_WELLKNOWNHEADER_SETCOOKIE = 142,
    QHTTPHEADERS_WELLKNOWNHEADER_SIGNATURE = 143,
    QHTTPHEADERS_WELLKNOWNHEADER_SIGNATUREINPUT = 144,
    QHTTPHEADERS_WELLKNOWNHEADER_SLUG = 145,
    QHTTPHEADERS_WELLKNOWNHEADER_SOAPACTION = 146,
    QHTTPHEADERS_WELLKNOWNHEADER_STATUSURI = 147,
    QHTTPHEADERS_WELLKNOWNHEADER_STRICTTRANSPORTSECURITY = 148,
    QHTTPHEADERS_WELLKNOWNHEADER_SUNSET = 149,
    QHTTPHEADERS_WELLKNOWNHEADER_SURROGATECAPABILITY = 150,
    QHTTPHEADERS_WELLKNOWNHEADER_SURROGATECONTROL = 151,
    QHTTPHEADERS_WELLKNOWNHEADER_TCN = 152,
    QHTTPHEADERS_WELLKNOWNHEADER_TE = 153,
    QHTTPHEADERS_WELLKNOWNHEADER_TIMEOUT = 154,
    QHTTPHEADERS_WELLKNOWNHEADER_TOPIC = 155,
    QHTTPHEADERS_WELLKNOWNHEADER_TRACEPARENT = 156,
    QHTTPHEADERS_WELLKNOWNHEADER_TRACESTATE = 157,
    QHTTPHEADERS_WELLKNOWNHEADER_TRAILER = 158,
    QHTTPHEADERS_WELLKNOWNHEADER_TRANSFERENCODING = 159,
    QHTTPHEADERS_WELLKNOWNHEADER_TTL = 160,
    QHTTPHEADERS_WELLKNOWNHEADER_UPGRADE = 161,
    QHTTPHEADERS_WELLKNOWNHEADER_URGENCY = 162,
    QHTTPHEADERS_WELLKNOWNHEADER_USERAGENT = 163,
    QHTTPHEADERS_WELLKNOWNHEADER_VARIANTVARY = 164,
    QHTTPHEADERS_WELLKNOWNHEADER_VARY = 165,
    QHTTPHEADERS_WELLKNOWNHEADER_VIA = 166,
    QHTTPHEADERS_WELLKNOWNHEADER_WANTCONTENTDIGEST = 167,
    QHTTPHEADERS_WELLKNOWNHEADER_WANTREPRDIGEST = 168,
    QHTTPHEADERS_WELLKNOWNHEADER_WWWAUTHENTICATE = 169,
    QHTTPHEADERS_WELLKNOWNHEADER_XCONTENTTYPEOPTIONS = 170,
    QHTTPHEADERS_WELLKNOWNHEADER_XFRAMEOPTIONS = 171,
    QHTTPHEADERS_WELLKNOWNHEADER_ACCEPTCHARSET = 172,
    QHTTPHEADERS_WELLKNOWNHEADER_CPEPINFO = 173,
    QHTTPHEADERS_WELLKNOWNHEADER_PRAGMA = 174,
    QHTTPHEADERS_WELLKNOWNHEADER_PROTOCOLINFO = 175,
    QHTTPHEADERS_WELLKNOWNHEADER_PROTOCOLQUERY = 176
} QHttpHeaders__WellKnownHeader;

#endif
