#pragma once
#ifndef SRCQT6C_LIBQSYSTEMSEMAPHORE_H
#define SRCQT6C_LIBQSYSTEMSEMAPHORE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qsystemsemaphore.html

/// q_systemsemaphore_new constructs a new QSystemSemaphore object.
///
/// ``` QNativeIpcKey* key ```
QSystemSemaphore* q_systemsemaphore_new(void* key);

/// q_systemsemaphore_new2 constructs a new QSystemSemaphore object.
///
/// ``` const char* key ```
QSystemSemaphore* q_systemsemaphore_new2(const char* key);

/// q_systemsemaphore_new3 constructs a new QSystemSemaphore object.
///
/// ``` QNativeIpcKey* key, int initialValue ```
QSystemSemaphore* q_systemsemaphore_new3(void* key, int initialValue);

/// q_systemsemaphore_new4 constructs a new QSystemSemaphore object.
///
/// ``` QNativeIpcKey* key, int initialValue, enum QSystemSemaphore__AccessMode param3 ```
QSystemSemaphore* q_systemsemaphore_new4(void* key, int initialValue, int64_t param3);

/// q_systemsemaphore_new5 constructs a new QSystemSemaphore object.
///
/// ``` const char* key, int initialValue ```
QSystemSemaphore* q_systemsemaphore_new5(const char* key, int initialValue);

/// q_systemsemaphore_new6 constructs a new QSystemSemaphore object.
///
/// ``` const char* key, int initialValue, enum QSystemSemaphore__AccessMode mode ```
QSystemSemaphore* q_systemsemaphore_new6(const char* key, int initialValue, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* sourceText ```
const char* q_systemsemaphore_tr(const char* sourceText);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
///
/// ``` QSystemSemaphore* self, QNativeIpcKey* key ```
void q_systemsemaphore_set_native_key(void* self, void* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
///
/// ``` QSystemSemaphore* self, const char* key ```
void q_systemsemaphore_set_native_key_with_key(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#nativeIpcKey)
///
/// ``` QSystemSemaphore* self ```
QNativeIpcKey* q_systemsemaphore_native_ipc_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#setKey)
///
/// ``` QSystemSemaphore* self, const char* key ```
void q_systemsemaphore_set_key(void* self, const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#key)
///
/// ``` QSystemSemaphore* self ```
const char* q_systemsemaphore_key(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#acquire)
///
/// ``` QSystemSemaphore* self ```
bool q_systemsemaphore_acquire(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#release)
///
/// ``` QSystemSemaphore* self ```
bool q_systemsemaphore_release(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#error)
///
/// ``` QSystemSemaphore* self ```
int64_t q_systemsemaphore_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#errorString)
///
/// ``` QSystemSemaphore* self ```
const char* q_systemsemaphore_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#isKeyTypeSupported)
///
/// ``` enum QNativeIpcKey__Type typeVal ```
bool q_systemsemaphore_is_key_type_supported(int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#platformSafeKey)
///
/// ``` const char* key ```
QNativeIpcKey* q_systemsemaphore_platform_safe_key(const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#legacyNativeKey)
///
/// ``` const char* key ```
QNativeIpcKey* q_systemsemaphore_legacy_native_key(const char* key);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* sourceText, const char* disambiguation ```
const char* q_systemsemaphore_tr2(const char* sourceText, const char* disambiguation);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* sourceText, const char* disambiguation, int n ```
const char* q_systemsemaphore_tr3(const char* sourceText, const char* disambiguation, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
///
/// ``` QSystemSemaphore* self, QNativeIpcKey* key, int initialValue ```
void q_systemsemaphore_set_native_key2(void* self, void* key, int initialValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
///
/// ``` QSystemSemaphore* self, QNativeIpcKey* key, int initialValue, enum QSystemSemaphore__AccessMode param3 ```
void q_systemsemaphore_set_native_key3(void* self, void* key, int initialValue, int64_t param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
///
/// ``` QSystemSemaphore* self, const char* key, int initialValue ```
void q_systemsemaphore_set_native_key22(void* self, const char* key, int initialValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
///
/// ``` QSystemSemaphore* self, const char* key, int initialValue, enum QSystemSemaphore__AccessMode mode ```
void q_systemsemaphore_set_native_key32(void* self, const char* key, int initialValue, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#setNativeKey)
///
/// ``` QSystemSemaphore* self, const char* key, int initialValue, enum QSystemSemaphore__AccessMode mode, enum QNativeIpcKey__Type typeVal ```
void q_systemsemaphore_set_native_key4(void* self, const char* key, int initialValue, int64_t mode, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#setKey)
///
/// ``` QSystemSemaphore* self, const char* key, int initialValue ```
void q_systemsemaphore_set_key2(void* self, const char* key, int initialValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#setKey)
///
/// ``` QSystemSemaphore* self, const char* key, int initialValue, enum QSystemSemaphore__AccessMode mode ```
void q_systemsemaphore_set_key3(void* self, const char* key, int initialValue, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#release)
///
/// ``` QSystemSemaphore* self, int n ```
bool q_systemsemaphore_release1(void* self, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#platformSafeKey)
///
/// ``` const char* key, enum QNativeIpcKey__Type typeVal ```
QNativeIpcKey* q_systemsemaphore_platform_safe_key2(const char* key, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#legacyNativeKey)
///
/// ``` const char* key, enum QNativeIpcKey__Type typeVal ```
QNativeIpcKey* q_systemsemaphore_legacy_native_key2(const char* key, int64_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#dtor.QSystemSemaphore)
///
/// Delete this object from C++ memory.
///
/// ``` QSystemSemaphore* self ```
void q_systemsemaphore_delete(void* self);

/// https://doc.qt.io/qt-6/qsystemsemaphore.html#types

typedef enum {
    QSYSTEMSEMAPHORE_ACCESSMODE_OPEN = 0,
    QSYSTEMSEMAPHORE_ACCESSMODE_CREATE = 1
} QSystemSemaphore__AccessMode;

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
