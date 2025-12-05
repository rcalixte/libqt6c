#pragma once
#ifndef SRC_POSIX_EXTRAS_DBUS_QT6C_LIBQDBUSEXTRATYPES_H
#define SRC_POSIX_EXTRAS_DBUS_QT6C_LIBQDBUSEXTRATYPES_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusobjectpath.html)

/// q_dbusobjectpath_new constructs a new QDBusObjectPath object.
///
QDBusObjectPath* q_dbusobjectpath_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusobjectpath.html)

/// q_dbusobjectpath_new2 constructs a new QDBusObjectPath object.
///
/// @param path const char*
///
QDBusObjectPath* q_dbusobjectpath_new2(const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusobjectpath.html)

/// q_dbusobjectpath_new3 constructs a new QDBusObjectPath object.
///
/// @param path const char*
///
QDBusObjectPath* q_dbusobjectpath_new3(const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusobjectpath.html)

/// q_dbusobjectpath_new4 constructs a new QDBusObjectPath object.
///
/// @param param1 QDBusObjectPath*
///
QDBusObjectPath* q_dbusobjectpath_new4(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusobjectpath.html#swap)
///
/// @param self QDBusObjectPath*
/// @param other QDBusObjectPath*
///
void q_dbusobjectpath_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusobjectpath.html#setPath)
///
/// @param self QDBusObjectPath*
/// @param path const char*
///
void q_dbusobjectpath_set_path(void* self, const char* path);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusobjectpath.html#path)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDBusObjectPath*
///
const char* q_dbusobjectpath_path(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusobjectpath.html#operator)
///
/// @param self QDBusObjectPath*
///
QVariant* q_dbusobjectpath_to_q_variant(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusobjectpath.html#dtor.QDBusObjectPath)
///
/// Delete this object from C++ memory.
///
/// @param self QDBusObjectPath*
///
void q_dbusobjectpath_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbussignature.html)

/// q_dbussignature_new constructs a new QDBusSignature object.
///
QDBusSignature* q_dbussignature_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdbussignature.html)

/// q_dbussignature_new2 constructs a new QDBusSignature object.
///
/// @param signature const char*
///
QDBusSignature* q_dbussignature_new2(const char* signature);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbussignature.html)

/// q_dbussignature_new3 constructs a new QDBusSignature object.
///
/// @param signature const char*
///
QDBusSignature* q_dbussignature_new3(const char* signature);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbussignature.html)

/// q_dbussignature_new4 constructs a new QDBusSignature object.
///
/// @param param1 QDBusSignature*
///
QDBusSignature* q_dbussignature_new4(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbussignature.html#swap)
///
/// @param self QDBusSignature*
/// @param other QDBusSignature*
///
void q_dbussignature_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbussignature.html#setSignature)
///
/// @param self QDBusSignature*
/// @param signature const char*
///
void q_dbussignature_set_signature(void* self, const char* signature);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbussignature.html#signature)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QDBusSignature*
///
const char* q_dbussignature_signature(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbussignature.html#dtor.QDBusSignature)
///
/// Delete this object from C++ memory.
///
/// @param self QDBusSignature*
///
void q_dbussignature_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusvariant.html)

/// q_dbusvariant_new constructs a new QDBusVariant object.
///
QDBusVariant* q_dbusvariant_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusvariant.html)

/// q_dbusvariant_new2 constructs a new QDBusVariant object.
///
/// @param variant QVariant*
///
QDBusVariant* q_dbusvariant_new2(void* variant);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusvariant.html#swap)
///
/// @param self QDBusVariant*
/// @param other QDBusVariant*
///
void q_dbusvariant_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusvariant.html#setVariant)
///
/// @param self QDBusVariant*
/// @param variant QVariant*
///
void q_dbusvariant_set_variant(void* self, void* variant);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusvariant.html#variant)
///
/// @param self QDBusVariant*
///
QVariant* q_dbusvariant_variant(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusvariant.html#operator-eq)
///
/// @param self QDBusVariant*
/// @param param1 QDBusVariant*
///
void q_dbusvariant_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qdbusvariant.html#dtor.QDBusVariant)
///
/// Delete this object from C++ memory.
///
/// @param self QDBusVariant*
///
void q_dbusvariant_delete(void* self);

#endif
