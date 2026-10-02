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
QQmlTypesExtensionInterface* q_qmltypesextensioninterface_new(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmltypesextensioninterface.html#registerTypes)
///
/// @warning This method must be implemented with `q_qmltypesextensioninterface_on_register_types` before it can be called.
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
QQmlExtensionInterface* q_qmlextensioninterface_new(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlextensioninterface.html#initializeEngine)
///
/// @warning This method must be implemented with `q_qmlextensioninterface_on_initialize_engine` before it can be called.
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

/// Inherited from QQmlTypesExtensionInterface
///
/// [Upstream resources](https://doc.qt.io/qt-6/qqmltypesextensioninterface.html#registerTypes)
///
/// Wrapper to allow calling virtual or protected method
///

/// @warning This method must be implemented with `q_qmlextensioninterface_on_register_types` before it can be called.
////// @param self QQmlExtensionInterface*
/// @param uri const char*
///
void q_qmlextensioninterface_register_types(void* self, const char* uri);

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

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlengineextensioninterface.html#dtor.QQmlEngineExtensionInterface)
///
/// Delete this object from C++ memory.
///
/// @param self QQmlEngineExtensionInterface*
///
void q_qmlengineextensioninterface_delete(void* self);

#endif
