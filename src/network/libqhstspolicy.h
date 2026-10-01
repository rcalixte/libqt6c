#pragma once
#ifndef NETWORK_LIBQHSTSPOLICY_H
#define NETWORK_LIBQHSTSPOLICY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html)

/// q_hstspolicy_new constructs a new QHstsPolicy object.
///
QHstsPolicy* q_hstspolicy_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html)

/// q_hstspolicy_new2 constructs a new QHstsPolicy object.
///
/// @param expiry QDateTime*
/// @param flags flag of enum QHstsPolicy__PolicyFlag
/// @param host const char*
///
QHstsPolicy* q_hstspolicy_new2(const void* expiry, int32_t flags, const char* host);

/// [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html)

/// q_hstspolicy_new3 constructs a new QHstsPolicy object.
///
/// @param rhs QHstsPolicy*
///
QHstsPolicy* q_hstspolicy_new3(const void* rhs);

/// [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html)

/// q_hstspolicy_new4 constructs a new QHstsPolicy object.
///
/// @param expiry QDateTime*
/// @param flags flag of enum QHstsPolicy__PolicyFlag
/// @param host const char*
/// @param mode enum QUrl__ParsingMode
///
QHstsPolicy* q_hstspolicy_new4(const void* expiry, int32_t flags, const char* host, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#operator-eq)
///
/// @param self QHstsPolicy*
/// @param rhs QHstsPolicy*
///
void q_hstspolicy_operator_assign(void* self, const void* rhs);

/// [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#swap)
///
/// @param self QHstsPolicy*
/// @param other QHstsPolicy*
///
void q_hstspolicy_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#setHost)
///
/// @param self QHstsPolicy*
/// @param host const char*
///
void q_hstspolicy_set_host(void* self, const char* host);

/// [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#host)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QHstsPolicy*
///
const char* q_hstspolicy_host(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#setExpiry)
///
/// @param self QHstsPolicy*
/// @param expiry QDateTime*
///
void q_hstspolicy_set_expiry(void* self, const void* expiry);

/// [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#expiry)
///
/// @param self const QHstsPolicy*
///
QDateTime* q_hstspolicy_expiry(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#setIncludesSubDomains)
///
/// @param self QHstsPolicy*
/// @param include bool
///
void q_hstspolicy_set_includes_sub_domains(void* self, bool include);

/// [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#includesSubDomains)
///
/// @param self const QHstsPolicy*
///
bool q_hstspolicy_includes_sub_domains(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#isExpired)
///
/// @param self const QHstsPolicy*
///
bool q_hstspolicy_is_expired(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#setHost)
///
/// @param self QHstsPolicy*
/// @param host const char*
/// @param mode enum QUrl__ParsingMode
///
void q_hstspolicy_set_host2(void* self, const char* host, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#host)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QHstsPolicy*
/// @param options flag of enum QUrl__ComponentFormattingOption
///
const char* q_hstspolicy_host1(const void* self, uint32_t options);

/// [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#dtor.QHstsPolicy)
///
/// Delete this object from C++ memory.
///
/// @param self QHstsPolicy*
///
void q_hstspolicy_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qhstspolicy.html#public-types)

typedef enum {
    QHSTSPOLICY_POLICYFLAG_INCLUDESUBDOMAINS = 1
} QHstsPolicy__PolicyFlag;

#endif
