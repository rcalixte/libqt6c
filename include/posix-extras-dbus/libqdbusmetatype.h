#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUS_QT6C_LIBQDBUSMETATYPE_H
#define SRC_POSIX_EXTRAS_DBUS_QT6C_LIBQDBUSMETATYPE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qdbusmetatype.html

/// q_dbusmetatype_new constructs a new QDBusMetaType object.
///
/// @param other QDBusMetaType*
QDBusMetaType* q_dbusmetatype_new(void* other);

/// q_dbusmetatype_new2 constructs a new QDBusMetaType object and invalidates the source QDBusMetaType object.
///
/// @param other QDBusMetaType*
QDBusMetaType* q_dbusmetatype_new2(void* other);

/// q_dbusmetatype_copy_assign shallow copies `other` into `self`.
///
/// @param self QDBusMetaType*
/// @param other QDBusMetaType*
void q_dbusmetatype_copy_assign(void* self, void* other);

/// q_dbusmetatype_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QDBusMetaType*
/// @param other QDBusMetaType*
void q_dbusmetatype_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusmetatype.html#marshall)
///
/// @param param1 QDBusArgument*
/// @param id QMetaType*
/// @param data void*
bool q_dbusmetatype_marshall(void* param1, void* id, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusmetatype.html#demarshall)
///
/// @param param1 QDBusArgument*
/// @param id QMetaType*
/// @param data void*
bool q_dbusmetatype_demarshall(void* param1, void* id, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusmetatype.html#registerCustomType)
///
/// @param type QMetaType*
/// @param signature const char*
void q_dbusmetatype_register_custom_type(void* type, const char* signature);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusmetatype.html#signatureToMetaType)
///
/// @param signature const char*
QMetaType* q_dbusmetatype_signature_to_meta_type(const char* signature);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusmetatype.html#typeToSignature)
///
/// Caller is responsible for freeing the returned memory
///
/// @param type QMetaType*
const char* q_dbusmetatype_type_to_signature(void* type);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusmetatype.html#dtor.QDBusMetaType)
///
/// Delete this object from C++ memory.
///
/// @param self QDBusMetaType*
void q_dbusmetatype_delete(void* self);

#endif
