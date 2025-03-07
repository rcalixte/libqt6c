#pragma once
#ifndef SRCQT6C_LIBQSYSTEMSEMAPHORE_H
#define SRCQT6C_LIBQSYSTEMSEMAPHORE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include <string.h>

QSystemSemaphore* q_systemsemaphore_new(const char* key);
QSystemSemaphore* q_systemsemaphore_new2(const char* key, int initialValue);
QSystemSemaphore* q_systemsemaphore_new3(const char* key, int initialValue, int64_t mode);
const char* q_systemsemaphore_tr(const char* sourceText);
void q_systemsemaphore_set_key(void* self, const char* key);
const char* q_systemsemaphore_key(void* self);
bool q_systemsemaphore_acquire(void* self);
bool q_systemsemaphore_release(void* self);
int64_t q_systemsemaphore_error(void* self);
const char* q_systemsemaphore_error_string(void* self);
const char* q_systemsemaphore_tr2(const char* sourceText, const char* disambiguation);
const char* q_systemsemaphore_tr3(const char* sourceText, const char* disambiguation, int n);
void q_systemsemaphore_set_key2(void* self, const char* key, int initialValue);
void q_systemsemaphore_set_key3(void* self, const char* key, int initialValue, int64_t mode);
bool q_systemsemaphore_release1(void* self, int n);
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
