#pragma once
#ifndef SRC_QT6C_LIBQTIPCCOMMON_H
#define SRC_QT6C_LIBQTIPCCOMMON_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html)

/// q_nativeipckey_new constructs a new QNativeIpcKey object.
///
QNativeIpcKey* q_nativeipckey_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html)

/// q_nativeipckey_new2 constructs a new QNativeIpcKey object.
///
/// @param type enum QNativeIpcKey__Type
///
QNativeIpcKey* q_nativeipckey_new2(uint16_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html)

/// q_nativeipckey_new3 constructs a new QNativeIpcKey object.
///
/// @param k const char*
///
QNativeIpcKey* q_nativeipckey_new3(const char* k);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html)

/// q_nativeipckey_new4 constructs a new QNativeIpcKey object.
///
/// @param other QNativeIpcKey*
///
QNativeIpcKey* q_nativeipckey_new4(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html)

/// q_nativeipckey_new5 constructs a new QNativeIpcKey object.
///
/// @param k const char*
/// @param type enum QNativeIpcKey__Type
///
QNativeIpcKey* q_nativeipckey_new5(const char* k, uint16_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#legacyDefaultTypeForOs)
///
/// @return enum QNativeIpcKey__Type
///
uint16_t q_nativeipckey_legacy_default_type_for_os();

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#operator-eq)
///
/// @param self QNativeIpcKey*
/// @param other QNativeIpcKey*
///
void q_nativeipckey_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#swap)
///
/// @param self QNativeIpcKey*
/// @param other QNativeIpcKey*
///
void q_nativeipckey_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#isEmpty)
///
/// @param self QNativeIpcKey*
///
bool q_nativeipckey_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#isValid)
///
/// @param self QNativeIpcKey*
///
bool q_nativeipckey_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#type)
///
/// @param self QNativeIpcKey*
///
/// @return enum QNativeIpcKey__Type
///
uint16_t q_nativeipckey_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#setType)
///
/// @param self QNativeIpcKey*
/// @param type enum QNativeIpcKey__Type
///
void q_nativeipckey_set_type(void* self, uint16_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#nativeKey)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QNativeIpcKey*
///
const char* q_nativeipckey_native_key(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#setNativeKey)
///
/// @param self QNativeIpcKey*
/// @param newKey const char*
///
void q_nativeipckey_set_native_key(void* self, const char* newKey);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#toString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QNativeIpcKey*
///
const char* q_nativeipckey_to_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#fromString)
///
/// @param stringVal const char*
///
QNativeIpcKey* q_nativeipckey_from_string(const char* stringVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qnativeipckey.html#dtor.QNativeIpcKey)
///
/// Delete this object from C++ memory.
///
/// @param self QNativeIpcKey*
///
void q_nativeipckey_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtipccommon.html#public-types)

typedef enum {
    QNATIVEIPCKEY_TYPE_SYSTEMV = 81,
    QNATIVEIPCKEY_TYPE_POSIXREALTIME = 256,
    QNATIVEIPCKEY_TYPE_WINDOWS = 257
} QNativeIpcKey__Type;

#endif
