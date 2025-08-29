#pragma once
#ifndef SRC_NETWORKQT6C_LIBQHSTSPOLICY_H
#define SRC_NETWORKQT6C_LIBQHSTSPOLICY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qhstspolicy.html

/// q_hstspolicy_new constructs a new QHstsPolicy object.
///
QHstsPolicy* q_hstspolicy_new();

/// q_hstspolicy_new2 constructs a new QHstsPolicy object.
///
/// @param expiry QDateTime*
/// @param flags flag of enum QHstsPolicy__PolicyFlag
/// @param host const char*
QHstsPolicy* q_hstspolicy_new2(void* expiry, int32_t flags, const char* host);

/// q_hstspolicy_new3 constructs a new QHstsPolicy object.
///
/// @param rhs QHstsPolicy*
QHstsPolicy* q_hstspolicy_new3(void* rhs);

/// q_hstspolicy_new4 constructs a new QHstsPolicy object.
///
/// @param expiry QDateTime*
/// @param flags flag of enum QHstsPolicy__PolicyFlag
/// @param host const char*
/// @param mode enum QUrl__ParsingMode
QHstsPolicy* q_hstspolicy_new4(void* expiry, int32_t flags, const char* host, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#operator-eq)
///
/// @param self QHstsPolicy*
/// @param rhs QHstsPolicy*
void q_hstspolicy_operator_assign(void* self, void* rhs);

/// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#swap)
///
/// @param self QHstsPolicy*
/// @param other QHstsPolicy*
void q_hstspolicy_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#setHost)
///
/// @param self QHstsPolicy*
/// @param host const char*
void q_hstspolicy_set_host(void* self, const char* host);

/// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#host)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QHstsPolicy*
const char* q_hstspolicy_host(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#setExpiry)
///
/// @param self QHstsPolicy*
/// @param expiry QDateTime*
void q_hstspolicy_set_expiry(void* self, void* expiry);

/// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#expiry)
///
/// @param self QHstsPolicy*
QDateTime* q_hstspolicy_expiry(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#setIncludesSubDomains)
///
/// @param self QHstsPolicy*
/// @param include bool
void q_hstspolicy_set_includes_sub_domains(void* self, bool include);

/// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#includesSubDomains)
///
/// @param self QHstsPolicy*
bool q_hstspolicy_includes_sub_domains(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#isExpired)
///
/// @param self QHstsPolicy*
bool q_hstspolicy_is_expired(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#setHost)
///
/// @param self QHstsPolicy*
/// @param host const char*
/// @param mode enum QUrl__ParsingMode
void q_hstspolicy_set_host2(void* self, const char* host, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#host)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QHstsPolicy*
/// @param options flag of enum QUrl__ComponentFormattingOption
const char* q_hstspolicy_host1(void* self, uint32_t options);

/// [Qt documentation](https://doc.qt.io/qt-6/qhstspolicy.html#dtor.QHstsPolicy)
///
/// Delete this object from C++ memory.
///
/// @param self QHstsPolicy*
void q_hstspolicy_delete(void* self);

/// https://doc.qt.io/qt-6/qhstspolicy.html#types

typedef enum {
    QHSTSPOLICY_POLICYFLAG_INCLUDESUBDOMAINS = 1
} QHstsPolicy__PolicyFlag;

#endif
