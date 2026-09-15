#pragma once
#ifndef QML_LIBQQMLEXTENSIONINTERFACE_H
#define QML_LIBQQMLEXTENSIONINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qqmltypesextensioninterface.html)

/// q_qmltypesextensioninterface_new constructs a new QQmlTypesExtensionInterface object.
///
/// @param param1 QQmlTypesExtensionInterface*
///
QQmlTypesExtensionInterface* q_qmltypesextensioninterface_new(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmltypesextensioninterface.html#registerTypes)
///
/// @param self QQmlTypesExtensionInterface*
/// @param uri const char*
///
void q_qmltypesextensioninterface_register_types(void* self, const char* uri);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmltypesextensioninterface.html#registerTypes)
///
/// Allows for overriding the related default method
///
/// @param self QQmlTypesExtensionInterface*
/// @param callback void func(QQmlTypesExtensionInterface* self, const char* uri)
///
void q_qmltypesextensioninterface_on_register_types(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmltypesextensioninterface.html#registerTypes)
///
/// Base class method implementation
///
/// @param self QQmlTypesExtensionInterface*
/// @param uri const char*
///
void q_qmltypesextensioninterface_super_register_types(void* self, const char* uri);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmltypesextensioninterface.html#operator-eq)
///
/// @param self QQmlTypesExtensionInterface*
/// @param param1 QQmlTypesExtensionInterface*
///
void q_qmltypesextensioninterface_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmltypesextensioninterface.html#dtor.QQmlTypesExtensionInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QQmlTypesExtensionInterface*
///
void q_qmltypesextensioninterface_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlextensioninterface.html)

/// q_qmlextensioninterface_new constructs a new QQmlExtensionInterface object.
///
/// @param param1 QQmlExtensionInterface*
///
QQmlExtensionInterface* q_qmlextensioninterface_new(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlextensioninterface.html#initializeEngine)
///
/// @param self QQmlExtensionInterface*
/// @param engine QQmlEngine*
/// @param uri const char*
///
void q_qmlextensioninterface_initialize_engine(void* self, void* engine, const char* uri);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlextensioninterface.html#initializeEngine)
///
/// Allows for overriding the related default method
///
/// @param self QQmlExtensionInterface*
/// @param callback void func(QQmlExtensionInterface* self, QQmlEngine* engine, const char* uri)
///
void q_qmlextensioninterface_on_initialize_engine(void* self, void (*callback)(void*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlextensioninterface.html#initializeEngine)
///
/// Base class method implementation
///
/// @param self QQmlExtensionInterface*
/// @param engine QQmlEngine*
/// @param uri const char*
///
void q_qmlextensioninterface_super_initialize_engine(void* self, void* engine, const char* uri);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlextensioninterface.html#operator-eq)
///
/// @param self QQmlExtensionInterface*
/// @param param1 QQmlExtensionInterface*
///
void q_qmlextensioninterface_operator_assign(void* self, void* param1);

/// Inherited from QQmlTypesExtensionInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmltypesextensioninterface.html#registerTypes)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QQmlExtensionInterface*
/// @param uri const char*
///
void q_qmlextensioninterface_register_types(void* self, const char* uri);

/// Inherited from QQmlTypesExtensionInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmltypesextensioninterface.html#registerTypes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QQmlExtensionInterface*
/// @param uri const char*
///
void q_qmlextensioninterface_super_register_types(void* self, const char* uri);

/// Inherited from QQmlTypesExtensionInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmltypesextensioninterface.html#registerTypes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QQmlExtensionInterface*
/// @param callback void func(QQmlExtensionInterface* self, const char* uri)
///
void q_qmlextensioninterface_on_register_types(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlextensioninterface.html#dtor.QQmlExtensionInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QQmlExtensionInterface*
///
void q_qmlextensioninterface_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengineextensioninterface.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengineextensioninterface.html#initializeEngine)
///
/// @param self QQmlEngineExtensionInterface*
/// @param engine QQmlEngine*
/// @param uri const char*
///
void q_qmlengineextensioninterface_initialize_engine(void* self, void* engine, const char* uri);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengineextensioninterface.html#operator-eq)
///
/// @param self QQmlEngineExtensionInterface*
/// @param param1 QQmlEngineExtensionInterface*
///
void q_qmlengineextensioninterface_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengineextensioninterface.html#dtor.QQmlEngineExtensionInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QQmlEngineExtensionInterface*
///
void q_qmlengineextensioninterface_delete(void* self);

#endif
