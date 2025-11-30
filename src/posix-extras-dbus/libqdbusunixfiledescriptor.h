#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUS_QT6C_LIBQDBUSUNIXFILEDESCRIPTOR_H
#define SRC_POSIX_EXTRAS_DBUS_QT6C_LIBQDBUSUNIXFILEDESCRIPTOR_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html

/// q_dbusunixfiledescriptor_new constructs a new QDBusUnixFileDescriptor object.
///
QDBusUnixFileDescriptor* q_dbusunixfiledescriptor_new();

/// q_dbusunixfiledescriptor_new2 constructs a new QDBusUnixFileDescriptor object.
///
/// @param fileDescriptor int
QDBusUnixFileDescriptor* q_dbusunixfiledescriptor_new2(int fileDescriptor);

/// q_dbusunixfiledescriptor_new3 constructs a new QDBusUnixFileDescriptor object.
///
/// @param other QDBusUnixFileDescriptor*
QDBusUnixFileDescriptor* q_dbusunixfiledescriptor_new3(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#operator-eq)
///
/// @param self QDBusUnixFileDescriptor*
/// @param other QDBusUnixFileDescriptor*
void q_dbusunixfiledescriptor_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#swap)
///
/// @param self QDBusUnixFileDescriptor*
/// @param other QDBusUnixFileDescriptor*
void q_dbusunixfiledescriptor_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#isValid)
///
/// @param self QDBusUnixFileDescriptor*
bool q_dbusunixfiledescriptor_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#fileDescriptor)
///
/// @param self QDBusUnixFileDescriptor*
int32_t q_dbusunixfiledescriptor_file_descriptor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#setFileDescriptor)
///
/// @param self QDBusUnixFileDescriptor*
/// @param fileDescriptor int
void q_dbusunixfiledescriptor_set_file_descriptor(void* self, int fileDescriptor);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#giveFileDescriptor)
///
/// @param self QDBusUnixFileDescriptor*
/// @param fileDescriptor int
void q_dbusunixfiledescriptor_give_file_descriptor(void* self, int fileDescriptor);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#takeFileDescriptor)
///
/// @param self QDBusUnixFileDescriptor*
int32_t q_dbusunixfiledescriptor_take_file_descriptor(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#isSupported)
///
bool q_dbusunixfiledescriptor_is_supported();

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusunixfiledescriptor.html#dtor.QDBusUnixFileDescriptor)
///
/// Delete this object from C++ memory.
///
/// @param self QDBusUnixFileDescriptor*
void q_dbusunixfiledescriptor_delete(void* self);

#endif
