#pragma once
#ifndef SRC_QT6C_LIBQSYSTEMSEMAPHORE_H
#define SRC_QT6C_LIBQSYSTEMSEMAPHORE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html)

/// q_systemsemaphore_new constructs a new QSystemSemaphore object.
///
/// @param key QNativeIpcKey*
///
QSystemSemaphore* q_systemsemaphore_new(void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html)

/// q_systemsemaphore_new2 constructs a new QSystemSemaphore object.
///
/// @param key const char*
///
QSystemSemaphore* q_systemsemaphore_new2(const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html)

/// q_systemsemaphore_new3 constructs a new QSystemSemaphore object.
///
/// @param key QNativeIpcKey*
/// @param initialValue int
///
QSystemSemaphore* q_systemsemaphore_new3(void* key, int initialValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html)

/// q_systemsemaphore_new4 constructs a new QSystemSemaphore object.
///
/// @param key QNativeIpcKey*
/// @param initialValue int
/// @param param3 enum QSystemSemaphore__AccessMode
///
QSystemSemaphore* q_systemsemaphore_new4(void* key, int initialValue, int32_t param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html)

/// q_systemsemaphore_new5 constructs a new QSystemSemaphore object.
///
/// @param key const char*
/// @param initialValue int
///
QSystemSemaphore* q_systemsemaphore_new5(const char* key, int initialValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html)

/// q_systemsemaphore_new6 constructs a new QSystemSemaphore object.
///
/// @param key const char*
/// @param initialValue int
/// @param mode enum QSystemSemaphore__AccessMode
///
QSystemSemaphore* q_systemsemaphore_new6(const char* key, int initialValue, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param sourceText const char*
///
const char* q_systemsemaphore_tr(const char* sourceText);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
///
/// @param self QSystemSemaphore*
/// @param key QNativeIpcKey*
///
void q_systemsemaphore_set_native_key(void* self, void* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
///
/// @param self QSystemSemaphore*
/// @param key const char*
///
void q_systemsemaphore_set_native_key2(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#nativeIpcKey)
///
/// @param self QSystemSemaphore*
///
QNativeIpcKey* q_systemsemaphore_native_ipc_key(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setKey)
///
/// @param self QSystemSemaphore*
/// @param key const char*
///
void q_systemsemaphore_set_key(void* self, const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#key)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSystemSemaphore*
///
const char* q_systemsemaphore_key(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#acquire)
///
/// @param self QSystemSemaphore*
///
bool q_systemsemaphore_acquire(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#release)
///
/// @param self QSystemSemaphore*
///
bool q_systemsemaphore_release(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#error)
///
/// @param self QSystemSemaphore*
///
/// @return enum QSystemSemaphore__SystemSemaphoreError
///
int32_t q_systemsemaphore_error(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#errorString)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QSystemSemaphore*
///
const char* q_systemsemaphore_error_string(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#isKeyTypeSupported)
///
/// @param type enum QNativeIpcKey__Type
///
bool q_systemsemaphore_is_key_type_supported(uint16_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#platformSafeKey)
///
/// @param key const char*
///
QNativeIpcKey* q_systemsemaphore_platform_safe_key(const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#legacyNativeKey)
///
/// @param key const char*
///
QNativeIpcKey* q_systemsemaphore_legacy_native_key(const char* key);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param sourceText const char*
/// @param disambiguation const char*
///
const char* q_systemsemaphore_tr2(const char* sourceText, const char* disambiguation);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param sourceText const char*
/// @param disambiguation const char*
/// @param n int
///
const char* q_systemsemaphore_tr3(const char* sourceText, const char* disambiguation, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
///
/// @param self QSystemSemaphore*
/// @param key QNativeIpcKey*
/// @param initialValue int
///
void q_systemsemaphore_set_native_key22(void* self, void* key, int initialValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
///
/// @param self QSystemSemaphore*
/// @param key QNativeIpcKey*
/// @param initialValue int
/// @param param3 enum QSystemSemaphore__AccessMode
///
void q_systemsemaphore_set_native_key3(void* self, void* key, int initialValue, int32_t param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
///
/// @param self QSystemSemaphore*
/// @param key const char*
/// @param initialValue int
///
void q_systemsemaphore_set_native_key23(void* self, const char* key, int initialValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
///
/// @param self QSystemSemaphore*
/// @param key const char*
/// @param initialValue int
/// @param mode enum QSystemSemaphore__AccessMode
///
void q_systemsemaphore_set_native_key32(void* self, const char* key, int initialValue, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
///
/// @param self QSystemSemaphore*
/// @param key const char*
/// @param initialValue int
/// @param mode enum QSystemSemaphore__AccessMode
/// @param type enum QNativeIpcKey__Type
///
void q_systemsemaphore_set_native_key4(void* self, const char* key, int initialValue, int32_t mode, uint16_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setKey)
///
/// @param self QSystemSemaphore*
/// @param key const char*
/// @param initialValue int
///
void q_systemsemaphore_set_key2(void* self, const char* key, int initialValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#setKey)
///
/// @param self QSystemSemaphore*
/// @param key const char*
/// @param initialValue int
/// @param mode enum QSystemSemaphore__AccessMode
///
void q_systemsemaphore_set_key3(void* self, const char* key, int initialValue, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#release)
///
/// @param self QSystemSemaphore*
/// @param n int
///
bool q_systemsemaphore_release1(void* self, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#platformSafeKey)
///
/// @param key const char*
/// @param type enum QNativeIpcKey__Type
///
QNativeIpcKey* q_systemsemaphore_platform_safe_key2(const char* key, uint16_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#legacyNativeKey)
///
/// @param key const char*
/// @param type enum QNativeIpcKey__Type
///
QNativeIpcKey* q_systemsemaphore_legacy_native_key2(const char* key, uint16_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#dtor.QSystemSemaphore)
///
/// Delete this object from C++ memory.
///
/// @param self QSystemSemaphore*
///
void q_systemsemaphore_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#public-types)

typedef enum {
    QSYSTEMSEMAPHORE_ACCESSMODE_OPEN = 0,
    QSYSTEMSEMAPHORE_ACCESSMODE_CREATE = 1
} QSystemSemaphore__AccessMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qsystemsemaphore.html#public-types)

typedef enum {
    QSYSTEMSEMAPHORE_SYSTEMSEMAPHOREERROR_NOERROR = 0,
    QSYSTEMSEMAPHORE_SYSTEMSEMAPHOREERROR_PERMISSIONDENIED = 1,
    QSYSTEMSEMAPHORE_SYSTEMSEMAPHOREERROR_KEYERROR = 2,
    QSYSTEMSEMAPHORE_SYSTEMSEMAPHOREERROR_ALREADYEXISTS = 3,
    QSYSTEMSEMAPHORE_SYSTEMSEMAPHOREERROR_NOTFOUND = 4,
    QSYSTEMSEMAPHORE_SYSTEMSEMAPHOREERROR_OUTOFRESOURCES = 5,
    QSYSTEMSEMAPHORE_SYSTEMSEMAPHOREERROR_UNKNOWNERROR = 6
} QSystemSemaphore__SystemSemaphoreError;

#endif
