#pragma once
#ifndef SRC_QT6C_LIBQSYSINFO_H
#define SRC_QT6C_LIBQSYSINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html)

/// q_sysinfo_new constructs a new QSysInfo object.
///
/// @param other QSysInfo*
///
QSysInfo* q_sysinfo_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html)

/// q_sysinfo_new2 constructs a new QSysInfo object and invalidates the source QSysInfo object.
///
/// @param other QSysInfo*
///
QSysInfo* q_sysinfo_new2(void* other);

/// q_sysinfo_copy_assign shallow copies `other` into `self`.
///
/// @param self QSysInfo*
/// @param other QSysInfo*
///
void q_sysinfo_copy_assign(void* self, void* other);

/// q_sysinfo_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QSysInfo*
/// @param other QSysInfo*
///
void q_sysinfo_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#buildCpuArchitecture)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_sysinfo_build_cpu_architecture();

/// [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#currentCpuArchitecture)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_sysinfo_current_cpu_architecture();

/// [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#buildAbi)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_sysinfo_build_abi();

/// [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#kernelType)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_sysinfo_kernel_type();

/// [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#kernelVersion)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_sysinfo_kernel_version();

/// [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#productType)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_sysinfo_product_type();

/// [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#productVersion)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_sysinfo_product_version();

/// [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#prettyProductName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_sysinfo_pretty_product_name();

/// [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#machineHostName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_sysinfo_machine_host_name();

/// [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#machineUniqueId)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
char* q_sysinfo_machine_unique_id();

/// [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#bootUniqueId)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
char* q_sysinfo_boot_unique_id();

/// [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#dtor.QSysInfo)
///
/// Delete this object from C++ memory.
///
/// @param self QSysInfo*
///
void q_sysinfo_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#public-types)

typedef enum {
    QSYSINFO_SIZES_WORDSIZE = 64
} QSysInfo__Sizes;

/// [Upstream resources](https://doc.qt.io/qt-6/qsysinfo.html#public-types)

typedef enum {
    QSYSINFO_ENDIAN_BIGENDIAN = 0,
    QSYSINFO_ENDIAN_LITTLEENDIAN = 1,
    QSYSINFO_ENDIAN_BYTEORDER = 1
} QSysInfo__Endian;

#endif
