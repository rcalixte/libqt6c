#pragma once
#ifndef QML_LIBQQMLMODULEREGISTRATION_H
#define QML_LIBQQMLMODULEREGISTRATION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlmoduleregistration.html)

/// q_qmlmoduleregistration_new constructs a new QQmlModuleRegistration object.
///
/// @param uri const char*
/// @param registerFunction void func()
///
QQmlModuleRegistration* q_qmlmoduleregistration_new(const char* uri, void (*registerFunction)());

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlmoduleregistration.html)

/// q_qmlmoduleregistration_new2 constructs a new QQmlModuleRegistration object.
///
/// @param uri const char*
/// @param majorVersion int
/// @param registerFunction void func()
///
QQmlModuleRegistration* q_qmlmoduleregistration_new2(const char* uri, int majorVersion, void (*registerFunction)());

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlmoduleregistration.html#dtor.QQmlModuleRegistration)
///
/// Delete this object from C++ memory.
///
/// @param self QQmlModuleRegistration*
///
void q_qmlmoduleregistration_delete(void* self);

#endif
