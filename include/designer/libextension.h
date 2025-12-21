#pragma once
#ifndef SRC_DESIGNER_QT6C_LIBEXTENSION_H
#define SRC_DESIGNER_QT6C_LIBEXTENSION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionfactory.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionfactory.html#extension)
///
/// @param self QAbstractExtensionFactory*
/// @param object QObject*
/// @param iid const char*
///
QObject* q_abstractextensionfactory_extension(void* self, void* object, const char* iid);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionfactory.html#operator-eq)
///
/// @param self QAbstractExtensionFactory*
/// @param param1 QAbstractExtensionFactory*
///
void q_abstractextensionfactory_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionfactory.html#dtor.QAbstractExtensionFactory)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractExtensionFactory*
///
void q_abstractextensionfactory_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionmanager.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionmanager.html#registerExtensions)
///
/// @param self QAbstractExtensionManager*
/// @param factory QAbstractExtensionFactory*
/// @param iid const char*
///
void q_abstractextensionmanager_register_extensions(void* self, void* factory, const char* iid);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionmanager.html#unregisterExtensions)
///
/// @param self QAbstractExtensionManager*
/// @param factory QAbstractExtensionFactory*
/// @param iid const char*
///
void q_abstractextensionmanager_unregister_extensions(void* self, void* factory, const char* iid);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionmanager.html#extension)
///
/// @param self QAbstractExtensionManager*
/// @param object QObject*
/// @param iid const char*
///
QObject* q_abstractextensionmanager_extension(void* self, void* object, const char* iid);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionmanager.html#operator-eq)
///
/// @param self QAbstractExtensionManager*
/// @param param1 QAbstractExtensionManager*
///
void q_abstractextensionmanager_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractextensionmanager.html#dtor.QAbstractExtensionManager)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractExtensionManager*
///
void q_abstractextensionmanager_delete(void* self);

#endif
