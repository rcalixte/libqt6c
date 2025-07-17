#pragma once
#ifndef SRC_NETWORKQT6C_LIBQHOSTINFO_H
#define SRC_NETWORKQT6C_LIBQHOSTINFO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qhostinfo.html

/// q_hostinfo_new constructs a new QHostInfo object.
///
///
QHostInfo* q_hostinfo_new();

/// q_hostinfo_new2 constructs a new QHostInfo object.
///
/// ``` QHostInfo* d ```
QHostInfo* q_hostinfo_new2(void* d);

/// q_hostinfo_new3 constructs a new QHostInfo object.
///
/// ``` int lookupId ```
QHostInfo* q_hostinfo_new3(int lookupId);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#operator-eq)
///
/// ``` QHostInfo* self, QHostInfo* d ```
void q_hostinfo_operator_assign(void* self, void* d);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#swap)
///
/// ``` QHostInfo* self, QHostInfo* other ```
void q_hostinfo_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#hostName)
///
/// ``` QHostInfo* self ```
const char* q_hostinfo_host_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#setHostName)
///
/// ``` QHostInfo* self, const char* name ```
void q_hostinfo_set_host_name(void* self, const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#addresses)
///
/// ``` QHostInfo* self ```
libqt_list /* of QHostAddress* */ q_hostinfo_addresses(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#setAddresses)
///
/// ``` QHostInfo* self, libqt_list /* of QHostAddress* */ addresses ```
void q_hostinfo_set_addresses(void* self, libqt_list addresses);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#error)
///
/// ``` QHostInfo* self ```
int64_t q_hostinfo_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#setError)
///
/// ``` QHostInfo* self, enum QHostInfo__HostInfoError errorVal ```
void q_hostinfo_set_error(void* self, int64_t errorVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#errorString)
///
/// ``` QHostInfo* self ```
const char* q_hostinfo_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#setErrorString)
///
/// ``` QHostInfo* self, const char* errorString ```
void q_hostinfo_set_error_string(void* self, const char* errorString);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#setLookupId)
///
/// ``` QHostInfo* self, int id ```
void q_hostinfo_set_lookup_id(void* self, int id);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#lookupId)
///
/// ``` QHostInfo* self ```
int32_t q_hostinfo_lookup_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#abortHostLookup)
///
/// ``` int lookupId ```
void q_hostinfo_abort_host_lookup(int lookupId);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#fromName)
///
/// ``` const char* name ```
QHostInfo* q_hostinfo_from_name(const char* name);

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#localHostName)
///
///
const char* q_hostinfo_local_host_name();

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#localDomainName)
///
///
const char* q_hostinfo_local_domain_name();

/// [Qt documentation](https://doc.qt.io/qt-6/qhostinfo.html#dtor.QHostInfo)
///
/// Delete this object from C++ memory.
///
/// ``` QHostInfo* self ```
void q_hostinfo_delete(void* self);

/// https://doc.qt.io/qt-6/qhostinfo.html#types

typedef enum {
    QHOSTINFO_HOSTINFOERROR_NOERROR = 0,
    QHOSTINFO_HOSTINFOERROR_HOSTNOTFOUND = 1,
    QHOSTINFO_HOSTINFOERROR_UNKNOWNERROR = 2
} QHostInfo__HostInfoError;

#endif
