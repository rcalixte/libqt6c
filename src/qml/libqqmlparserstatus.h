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
/// @warning This method must be implemented with `q_qmlparserstatus_on_class_begin` before it can be called.
///
/// @param self QQmlParserStatus*
///
void q_qmlparserstatus_class_begin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlparserstatus.html#classBegin)
///
/// Allows for overriding the related default method
///
/// @param self QQmlParserStatus*
/// @param callback void func(QQmlParserStatus* self)
///
void q_qmlparserstatus_on_class_begin(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlparserstatus.html#componentComplete)
///
/// @warning This method must be implemented with `q_qmlparserstatus_on_component_complete` before it can be called.
///
/// @param self QQmlParserStatus*
///
void q_qmlparserstatus_component_complete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlparserstatus.html#componentComplete)
///
/// Allows for overriding the related default method
///
/// @param self QQmlParserStatus*
/// @param callback void func(QQmlParserStatus* self)
///
void q_qmlparserstatus_on_component_complete(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlparserstatus.html#dtor.QQmlParserStatus)
///
/// Delete this object from C++ memory.
///
/// @param self QQmlParserStatus*
///
void q_qmlparserstatus_delete(void* self);

#endif
