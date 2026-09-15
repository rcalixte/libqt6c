#pragma once
#ifndef QML_LIBQQMLPROPERTYVALUESOURCE_H
#define QML_LIBQQMLPROPERTYVALUESOURCE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertyvaluesource.html)

/// q_qmlpropertyvaluesource_new constructs a new QQmlPropertyValueSource object.
///
QQmlPropertyValueSource* q_qmlpropertyvaluesource_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertyvaluesource.html#setTarget)
///
/// @param self QQmlPropertyValueSource*
/// @param target QQmlProperty*
///
void q_qmlpropertyvaluesource_set_target(void* self, void* target);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertyvaluesource.html#setTarget)
///
/// Allows for overriding the related default method
///
/// @param self QQmlPropertyValueSource*
/// @param callback void func(QQmlPropertyValueSource* self, QQmlProperty* target)
///
void q_qmlpropertyvaluesource_on_set_target(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertyvaluesource.html#setTarget)
///
/// Base class method implementation
///
/// @param self QQmlPropertyValueSource*
/// @param target QQmlProperty*
///
void q_qmlpropertyvaluesource_super_set_target(void* self, void* target);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertyvaluesource.html#operator-eq)
///
/// @param self QQmlPropertyValueSource*
/// @param param1 QQmlPropertyValueSource*
///
void q_qmlpropertyvaluesource_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlpropertyvaluesource.html#dtor.QQmlPropertyValueSource)
///
/// Delete this object from C++ memory.
///
/// @param self QQmlPropertyValueSource*
///
void q_qmlpropertyvaluesource_delete(void* self);

#endif
