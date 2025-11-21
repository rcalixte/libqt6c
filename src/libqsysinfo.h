#pragma once
#ifndef SRC_QT6C_LIBQSYSINFO_H
#define SRC_QT6C_LIBQSYSINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qsysinfo.html

/// q_sysinfo_new constructs a new QSysInfo object.
///
/// @param other QSysInfo*
QSysInfo* q_sysinfo_new(void* other);

/// q_sysinfo_new2 constructs a new QSysInfo object and invalidates the source QSysInfo object.
///
/// @param other QSysInfo*
QSysInfo* q_sysinfo_new2(void* other);

/// q_sysinfo_copy_assign shallow copies `other` into `self`.
///
/// @param self QSysInfo*
/// @param other QSysInfo*
void q_sysinfo_copy_assign(void* self, void* other);

/// q_sysinfo_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QSysInfo*
/// @param other QSysInfo*
void q_sysinfo_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsysinfo.html#buildCpuArchitecture)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_sysinfo_build_cpu_architecture();

/// [Qt documentation](https://doc.qt.io/qt-6/qsysinfo.html#currentCpuArchitecture)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_sysinfo_current_cpu_architecture();

/// [Qt documentation](https://doc.qt.io/qt-6/qsysinfo.html#buildAbi)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_sysinfo_build_abi();

/// [Qt documentation](https://doc.qt.io/qt-6/qsysinfo.html#kernelType)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_sysinfo_kernel_type();

/// [Qt documentation](https://doc.qt.io/qt-6/qsysinfo.html#kernelVersion)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_sysinfo_kernel_version();

/// [Qt documentation](https://doc.qt.io/qt-6/qsysinfo.html#productType)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_sysinfo_product_type();

/// [Qt documentation](https://doc.qt.io/qt-6/qsysinfo.html#productVersion)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_sysinfo_product_version();

/// [Qt documentation](https://doc.qt.io/qt-6/qsysinfo.html#prettyProductName)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_sysinfo_pretty_product_name();

/// [Qt documentation](https://doc.qt.io/qt-6/qsysinfo.html#machineHostName)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_sysinfo_machine_host_name();

/// [Qt documentation](https://doc.qt.io/qt-6/qsysinfo.html#machineUniqueId)
///
/// Caller is responsible for freeing the returned memory
///
char* q_sysinfo_machine_unique_id();

/// [Qt documentation](https://doc.qt.io/qt-6/qsysinfo.html#bootUniqueId)
///
/// Caller is responsible for freeing the returned memory
///
char* q_sysinfo_boot_unique_id();

/// [Qt documentation](https://doc.qt.io/qt-6/qsysinfo.html#dtor.QSysInfo)
///
/// Delete this object from C++ memory.
///
/// @param self QSysInfo*
void q_sysinfo_delete(void* self);

/// https://doc.qt.io/qt-6/qsysinfo.html#types

typedef enum {
    QSYSINFO_SIZES_WORDSIZE = 64
} QSysInfo__Sizes;

typedef enum {
    QSYSINFO_ENDIAN_BIGENDIAN = 0,
    QSYSINFO_ENDIAN_LITTLEENDIAN = 1,
    QSYSINFO_ENDIAN_BYTEORDER = 1
} QSysInfo__Endian;

#endif
