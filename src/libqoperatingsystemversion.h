#pragma once
#ifndef SRCQT6C_LIBQOPERATINGSYSTEMVERSION_H
#define SRCQT6C_LIBQOPERATINGSYSTEMVERSION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include <string.h>
#include "libqversionnumber.h"

QOperatingSystemVersionBase* q_operatingsystemversionbase_new(int64_t osType, int vmajor);
QOperatingSystemVersionBase* q_operatingsystemversionbase_new2(void* param1);
QOperatingSystemVersionBase* q_operatingsystemversionbase_new3(int64_t osType, int vmajor, int vminor);
QOperatingSystemVersionBase* q_operatingsystemversionbase_new4(int64_t osType, int vmajor, int vminor, int vmicro);
QOperatingSystemVersionBase* q_operatingsystemversionbase_current();
const char* q_operatingsystemversionbase_name(void* osversion);
int64_t q_operatingsystemversionbase_current_type();
QVersionNumber* q_operatingsystemversionbase_version(void* self);
int32_t q_operatingsystemversionbase_major_version(void* self);
int32_t q_operatingsystemversionbase_minor_version(void* self);
int32_t q_operatingsystemversionbase_micro_version(void* self);
int32_t q_operatingsystemversionbase_segment_count(void* self);
int64_t q_operatingsystemversionbase_type(void* self);
const char* q_operatingsystemversionbase_name2(void* self);
void q_operatingsystemversionbase_delete(void* self);

QOperatingSystemVersion* q_operatingsystemversion_new(void* osversion);
QOperatingSystemVersion* q_operatingsystemversion_new2(int64_t osType, int vmajor);
QOperatingSystemVersion* q_operatingsystemversion_new3(void* param1);
QOperatingSystemVersion* q_operatingsystemversion_new4(int64_t osType, int vmajor, int vminor);
QOperatingSystemVersion* q_operatingsystemversion_new5(int64_t osType, int vmajor, int vminor, int vmicro);
QOperatingSystemVersion* q_operatingsystemversion_current();
int64_t q_operatingsystemversion_current_type();
QVersionNumber* q_operatingsystemversion_version(void* self);
int32_t q_operatingsystemversion_major_version(void* self);
int32_t q_operatingsystemversion_minor_version(void* self);
int32_t q_operatingsystemversion_micro_version(void* self);
int32_t q_operatingsystemversion_segment_count(void* self);
int64_t q_operatingsystemversion_type(void* self);
const char* q_operatingsystemversion_name(void* self);
const char* q_operatingsystemversion_name2(void* self);
void q_operatingsystemversion_delete(void* self);

/// https://doc.qt.io/qt-6/qoperatingsystemversion.html#types

typedef enum {
    QOPERATINGSYSTEMVERSIONBASE_OSTYPE_UNKNOWN = 0,
    QOPERATINGSYSTEMVERSIONBASE_OSTYPE_WINDOWS = 1,
    QOPERATINGSYSTEMVERSIONBASE_OSTYPE_MACOS = 2,
    QOPERATINGSYSTEMVERSIONBASE_OSTYPE_IOS = 3,
    QOPERATINGSYSTEMVERSIONBASE_OSTYPE_TVOS = 4,
    QOPERATINGSYSTEMVERSIONBASE_OSTYPE_WATCHOS = 5,
    QOPERATINGSYSTEMVERSIONBASE_OSTYPE_ANDROID = 6
} QOperatingSystemVersionBase__OSType;

typedef enum {
    QOPERATINGSYSTEMVERSION_OSTYPE_UNKNOWN = 0,
    QOPERATINGSYSTEMVERSION_OSTYPE_WINDOWS = 1,
    QOPERATINGSYSTEMVERSION_OSTYPE_MACOS = 2,
    QOPERATINGSYSTEMVERSION_OSTYPE_IOS = 3,
    QOPERATINGSYSTEMVERSION_OSTYPE_TVOS = 4,
    QOPERATINGSYSTEMVERSION_OSTYPE_WATCHOS = 5,
    QOPERATINGSYSTEMVERSION_OSTYPE_ANDROID = 6
} QOperatingSystemVersion__OSType;

#endif
