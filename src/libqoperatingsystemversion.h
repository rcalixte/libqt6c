#pragma once
#ifndef SRC_QT6C_LIBQOPERATINGSYSTEMVERSION_H
#define SRC_QT6C_LIBQOPERATINGSYSTEMVERSION_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qoperatingsystemversionbase.html

/// q_operatingsystemversionbase_new constructs a new QOperatingSystemVersionBase object.
///
/// @param osType enum QOperatingSystemVersionBase__OSType
/// @param vmajor int
QOperatingSystemVersionBase* q_operatingsystemversionbase_new(int32_t osType, int vmajor);

/// q_operatingsystemversionbase_new2 constructs a new QOperatingSystemVersionBase object.
///
/// @param param1 QOperatingSystemVersionBase*
QOperatingSystemVersionBase* q_operatingsystemversionbase_new2(void* param1);

/// q_operatingsystemversionbase_new3 constructs a new QOperatingSystemVersionBase object.
///
/// @param osType enum QOperatingSystemVersionBase__OSType
/// @param vmajor int
/// @param vminor int
QOperatingSystemVersionBase* q_operatingsystemversionbase_new3(int32_t osType, int vmajor, int vminor);

/// q_operatingsystemversionbase_new4 constructs a new QOperatingSystemVersionBase object.
///
/// @param osType enum QOperatingSystemVersionBase__OSType
/// @param vmajor int
/// @param vminor int
/// @param vmicro int
QOperatingSystemVersionBase* q_operatingsystemversionbase_new4(int32_t osType, int vmajor, int vminor, int vmicro);

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#current)
///
QOperatingSystemVersionBase* q_operatingsystemversionbase_current();

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param osversion QOperatingSystemVersionBase*
const char* q_operatingsystemversionbase_name(void* osversion);

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#currentType)
///
///
/// @return enum QOperatingSystemVersionBase__OSType
int32_t q_operatingsystemversionbase_current_type();

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#version)
///
/// @param self QOperatingSystemVersionBase*
QVersionNumber* q_operatingsystemversionbase_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#majorVersion)
///
/// @param self QOperatingSystemVersionBase*
int32_t q_operatingsystemversionbase_major_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#minorVersion)
///
/// @param self QOperatingSystemVersionBase*
int32_t q_operatingsystemversionbase_minor_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#microVersion)
///
/// @param self QOperatingSystemVersionBase*
int32_t q_operatingsystemversionbase_micro_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#segmentCount)
///
/// @param self QOperatingSystemVersionBase*
int32_t q_operatingsystemversionbase_segment_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#type)
///
/// @param self QOperatingSystemVersionBase*
///
/// @return enum QOperatingSystemVersionBase__OSType
int32_t q_operatingsystemversionbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QOperatingSystemVersionBase*
const char* q_operatingsystemversionbase_name2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#dtor.QOperatingSystemVersionBase)
///
/// Delete this object from C++ memory.
///
/// @param self QOperatingSystemVersionBase*
void q_operatingsystemversionbase_delete(void* self);

/// https://doc.qt.io/qt-6/qoperatingsystemversionunexported.html

/// q_operatingsystemversionunexported_new constructs a new QOperatingSystemVersionUnexported object.
///
/// @param other QOperatingSystemVersionBase*
QOperatingSystemVersionUnexported* q_operatingsystemversionunexported_new(void* other);

/// q_operatingsystemversionunexported_new2 constructs a new QOperatingSystemVersionUnexported object.
///
QOperatingSystemVersionUnexported* q_operatingsystemversionunexported_new2();

/// q_operatingsystemversionunexported_new3 constructs a new QOperatingSystemVersionUnexported object.
///
/// @param param1 QOperatingSystemVersionUnexported*
QOperatingSystemVersionUnexported* q_operatingsystemversionunexported_new3(void* param1);

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#current)
///
QOperatingSystemVersionBase* q_operatingsystemversionunexported_current();

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param osversion QOperatingSystemVersionBase*
const char* q_operatingsystemversionunexported_name(void* osversion);

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#currentType)
///
///
/// @return enum QOperatingSystemVersionBase__OSType
int32_t q_operatingsystemversionunexported_current_type();

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#version)
///
/// @param self QOperatingSystemVersionUnexported*
QVersionNumber* q_operatingsystemversionunexported_version(void* self);

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#majorVersion)
///
/// @param self QOperatingSystemVersionUnexported*
int32_t q_operatingsystemversionunexported_major_version(void* self);

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#minorVersion)
///
/// @param self QOperatingSystemVersionUnexported*
int32_t q_operatingsystemversionunexported_minor_version(void* self);

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#microVersion)
///
/// @param self QOperatingSystemVersionUnexported*
int32_t q_operatingsystemversionunexported_micro_version(void* self);

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#segmentCount)
///
/// @param self QOperatingSystemVersionUnexported*
int32_t q_operatingsystemversionunexported_segment_count(void* self);

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#type)
///
/// @param self QOperatingSystemVersionUnexported*
///
/// @return enum QOperatingSystemVersionBase__OSType
int32_t q_operatingsystemversionunexported_type(void* self);

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QOperatingSystemVersionUnexported*
const char* q_operatingsystemversionunexported_name2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionunexported.html#dtor.QOperatingSystemVersionUnexported)
///
/// Delete this object from C++ memory.
///
/// @param self QOperatingSystemVersionUnexported*
void q_operatingsystemversionunexported_delete(void* self);

/// https://doc.qt.io/qt-6/qoperatingsystemversion.html

/// q_operatingsystemversion_new constructs a new QOperatingSystemVersion object.
///
/// @param osversion QOperatingSystemVersionBase*
QOperatingSystemVersion* q_operatingsystemversion_new(void* osversion);

/// q_operatingsystemversion_new2 constructs a new QOperatingSystemVersion object.
///
/// @param osType enum QOperatingSystemVersion__OSType
/// @param vmajor int
QOperatingSystemVersion* q_operatingsystemversion_new2(int32_t osType, int vmajor);

/// q_operatingsystemversion_new3 constructs a new QOperatingSystemVersion object.
///
/// @param param1 QOperatingSystemVersion*
QOperatingSystemVersion* q_operatingsystemversion_new3(void* param1);

/// q_operatingsystemversion_new4 constructs a new QOperatingSystemVersion object.
///
/// @param osType enum QOperatingSystemVersion__OSType
/// @param vmajor int
/// @param vminor int
QOperatingSystemVersion* q_operatingsystemversion_new4(int32_t osType, int vmajor, int vminor);

/// q_operatingsystemversion_new5 constructs a new QOperatingSystemVersion object.
///
/// @param osType enum QOperatingSystemVersion__OSType
/// @param vmajor int
/// @param vminor int
/// @param vmicro int
QOperatingSystemVersion* q_operatingsystemversion_new5(int32_t osType, int vmajor, int vminor, int vmicro);

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversion.html#currentType)
///
///
/// @return enum QOperatingSystemVersion__OSType
int32_t q_operatingsystemversion_current_type();

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversion.html#type)
///
/// @param self QOperatingSystemVersion*
///
/// @return enum QOperatingSystemVersion__OSType
int32_t q_operatingsystemversion_type(void* self);

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#current)
///
QOperatingSystemVersionBase* q_operatingsystemversion_current();

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param osversion QOperatingSystemVersionBase*
const char* q_operatingsystemversion_name(void* osversion);

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#version)
///
/// @param self QOperatingSystemVersion*
QVersionNumber* q_operatingsystemversion_version(void* self);

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#majorVersion)
///
/// @param self QOperatingSystemVersion*
int32_t q_operatingsystemversion_major_version(void* self);

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#minorVersion)
///
/// @param self QOperatingSystemVersion*
int32_t q_operatingsystemversion_minor_version(void* self);

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#microVersion)
///
/// @param self QOperatingSystemVersion*
int32_t q_operatingsystemversion_micro_version(void* self);

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#segmentCount)
///
/// @param self QOperatingSystemVersion*
int32_t q_operatingsystemversion_segment_count(void* self);

/// Inherited from QOperatingSystemVersionBase
///
/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversionbase.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QOperatingSystemVersion*
const char* q_operatingsystemversion_name2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qoperatingsystemversion.html#dtor.QOperatingSystemVersion)
///
/// Delete this object from C++ memory.
///
/// @param self QOperatingSystemVersion*
void q_operatingsystemversion_delete(void* self);

/// https://doc.qt.io/qt-6/qoperatingsystemversion.html#types

typedef enum {
    QOPERATINGSYSTEMVERSIONBASE_OSTYPE_UNKNOWN = 0,
    QOPERATINGSYSTEMVERSIONBASE_OSTYPE_WINDOWS = 1,
    QOPERATINGSYSTEMVERSIONBASE_OSTYPE_MACOS = 2,
    QOPERATINGSYSTEMVERSIONBASE_OSTYPE_IOS = 3,
    QOPERATINGSYSTEMVERSIONBASE_OSTYPE_TVOS = 4,
    QOPERATINGSYSTEMVERSIONBASE_OSTYPE_WATCHOS = 5,
    QOPERATINGSYSTEMVERSIONBASE_OSTYPE_ANDROID = 6,
    QOPERATINGSYSTEMVERSIONBASE_OSTYPE_VISIONOS = 7
} QOperatingSystemVersionBase__OSType;

typedef enum {
    QOPERATINGSYSTEMVERSION_OSTYPE_UNKNOWN = 0,
    QOPERATINGSYSTEMVERSION_OSTYPE_WINDOWS = 1,
    QOPERATINGSYSTEMVERSION_OSTYPE_MACOS = 2,
    QOPERATINGSYSTEMVERSION_OSTYPE_IOS = 3,
    QOPERATINGSYSTEMVERSION_OSTYPE_TVOS = 4,
    QOPERATINGSYSTEMVERSION_OSTYPE_WATCHOS = 5,
    QOPERATINGSYSTEMVERSION_OSTYPE_ANDROID = 6,
    QOPERATINGSYSTEMVERSION_OSTYPE_VISIONOS = 7
} QOperatingSystemVersion__OSType;

#endif
