#pragma once
#ifndef SRC_NETWORKQT6C_LIBQHOSTINFO_H
#define SRC_NETWORKQT6C_LIBQHOSTINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qhostinfo.html

/// q_hostinfo_new constructs a new QHostInfo object.
///
QHostInfo* q_hostinfo_new();

/// q_hostinfo_new2 constructs a new QHostInfo object.
///
/// @param d QHostInfo*
QHostInfo* q_hostinfo_new2(void* d);

/// q_hostinfo_new3 constructs a new QHostInfo object.
///
/// @param lookupId int
QHostInfo* q_hostinfo_new3(int lookupId);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#operator-eq)
///
/// @param self QHostInfo*
/// @param d QHostInfo*
void q_hostinfo_operator_assign(void* self, void* d);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#swap)
///
/// @param self QHostInfo*
/// @param other QHostInfo*
void q_hostinfo_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#hostName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QHostInfo*
const char* q_hostinfo_host_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#setHostName)
///
/// @param self QHostInfo*
/// @param name const char*
void q_hostinfo_set_host_name(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#addresses)
///
/// @param self QHostInfo*
libqt_list /* of QHostAddress* */ q_hostinfo_addresses(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#setAddresses)
///
/// @param self QHostInfo*
/// @param addresses libqt_list /* of QHostAddress* */
void q_hostinfo_set_addresses(void* self, libqt_list addresses);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#error)
///
/// @param self QHostInfo*
///
/// @return enum QHostInfo__HostInfoError
int32_t q_hostinfo_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#setError)
///
/// @param self QHostInfo*
/// @param errorVal enum QHostInfo__HostInfoError
void q_hostinfo_set_error(void* self, int32_t errorVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QHostInfo*
const char* q_hostinfo_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#setErrorString)
///
/// @param self QHostInfo*
/// @param errorString const char*
void q_hostinfo_set_error_string(void* self, const char* errorString);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#setLookupId)
///
/// @param self QHostInfo*
/// @param id int
void q_hostinfo_set_lookup_id(void* self, int id);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#lookupId)
///
/// @param self QHostInfo*
int32_t q_hostinfo_lookup_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#abortHostLookup)
///
/// @param lookupId int
void q_hostinfo_abort_host_lookup(int lookupId);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#fromName)
///
/// @param name const char*
QHostInfo* q_hostinfo_from_name(const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#localHostName)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_hostinfo_local_host_name();

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#localDomainName)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_hostinfo_local_domain_name();

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#dtor.QHostInfo)
///
/// Delete this object from C++ memory.
///
/// @param self QHostInfo*
void q_hostinfo_delete(void* self);

/// https://doc.qt.io/qt-6/qhostinfo.html#types

typedef enum {
    QHOSTINFO_HOSTINFOERROR_NOERROR = 0,
    QHOSTINFO_HOSTINFOERROR_HOSTNOTFOUND = 1,
    QHOSTINFO_HOSTINFOERROR_UNKNOWNERROR = 2
} QHostInfo__HostInfoError;

#endif
