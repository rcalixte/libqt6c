#pragma once
#ifndef QML_LIBQQMLPARSERSTATUS_H
#define QML_LIBQQMLPARSERSTATUS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlparserstatus.html)

/// q_qmlparserstatus_new constructs a new QQmlParserStatus object.
///
QQmlParserStatus* q_qmlparserstatus_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlparserstatus.html#classBegin)
///
/// @param self QQmlParserStatus*
///
void q_qmlparserstatus_class_begin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlparserstatus.html#classBegin)
///
/// Allows for overriding the related default method
///
/// @param self QQmlParserStatus*
/// @param callback void func()
///
void q_qmlparserstatus_on_class_begin(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlparserstatus.html#classBegin)
///
/// Base class method implementation
///
/// @param self QQmlParserStatus*
///
void q_qmlparserstatus_super_class_begin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlparserstatus.html#componentComplete)
///
/// @param self QQmlParserStatus*
///
void q_qmlparserstatus_component_complete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlparserstatus.html#componentComplete)
///
/// Allows for overriding the related default method
///
/// @param self QQmlParserStatus*
/// @param callback void func()
///
void q_qmlparserstatus_on_component_complete(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlparserstatus.html#componentComplete)
///
/// Base class method implementation
///
/// @param self QQmlParserStatus*
///
void q_qmlparserstatus_super_component_complete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlparserstatus.html#dtor.QQmlParserStatus)
///
/// Delete this object from C++ memory.
///
/// @param self QQmlParserStatus*
///
void q_qmlparserstatus_delete(void* self);

#endif
