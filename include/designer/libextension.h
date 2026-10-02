#pragma once
#ifndef DESIGNER_LIBEXTENSION_H
#define DESIGNER_LIBEXTENSION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionfactory.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionfactory.html#extension)
///
/// @warning Use caution when calling this method as it might not be defined.
///
/// @param self const QAbstractExtensionFactory*
/// @param object QObject*
/// @param iid const char*
///
QObject* q_abstractextensionfactory_extension(const void* self, void* object, const char* iid);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionfactory.html#dtor.QAbstractExtensionFactory)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractExtensionFactory*
///
void q_abstractextensionfactory_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionmanager.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionmanager.html#dtor.QAbstractExtensionManager)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractExtensionManager*
///
void q_abstractextensionmanager_delete(void* self);

#endif
