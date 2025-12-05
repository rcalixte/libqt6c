#pragma once
#ifndef SRC_QT6C_LIBQBINDINGSTORAGE_H
#define SRC_QT6C_LIBQBINDINGSTORAGE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qbindingstatus.html)

/// q_bindingstatus_new constructs a new QBindingStatus object.
///
/// @param other QBindingStatus*
///
QBindingStatus* q_bindingstatus_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qbindingstatus.html)

/// q_bindingstatus_new2 constructs a new QBindingStatus object and invalidates the source QBindingStatus object.
///
/// @param other QBindingStatus*
///
QBindingStatus* q_bindingstatus_new2(void* other);

/// q_bindingstatus_copy_assign shallow copies `other` into `self`.
///
/// @param self QBindingStatus*
/// @param other QBindingStatus*
///
void q_bindingstatus_copy_assign(void* self, void* other);

/// q_bindingstatus_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QBindingStatus*
/// @param other QBindingStatus*
///
void q_bindingstatus_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qbindingstatus.html#dtor.QBindingStatus)
///
/// Delete this object from C++ memory.
///
/// @param self QBindingStatus*
///
void q_bindingstatus_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbindingstorage.html)

/// q_bindingstorage_new constructs a new QBindingStorage object.
///
QBindingStorage* q_bindingstorage_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qbindingstorage.html#isEmpty)
///
/// @param self QBindingStorage*
///
bool q_bindingstorage_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbindingstorage.html#isValid)
///
/// @param self QBindingStorage*
///
bool q_bindingstorage_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qbindingstorage.html#registerDependency)
///
/// @param self QBindingStorage*
/// @param data QUntypedPropertyData*
///
void q_bindingstorage_register_dependency(void* self, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qbindingstorage.html#dtor.QBindingStorage)
///
/// Delete this object from C++ memory.
///
/// @param self QBindingStorage*
///
void q_bindingstorage_delete(void* self);

#endif
