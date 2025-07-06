#pragma once
#ifndef SRCQT6C_LIBQBINDINGSTORAGE_H
#define SRCQT6C_LIBQBINDINGSTORAGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qbindingstatus.html

/// q_bindingstatus_new constructs a new QBindingStatus object.
///
/// ``` QBindingStatus* other ```
QBindingStatus* q_bindingstatus_new(void* other);

/// q_bindingstatus_new2 constructs a new QBindingStatus object and invalidates the source QBindingStatus object.
///
/// ``` QBindingStatus* other ```
QBindingStatus* q_bindingstatus_new2(void* other);

/// q_bindingstatus_copy_assign shallow copies `other` into `self`.
///
/// ``` QBindingStatus* self, QBindingStatus* other ```
void q_bindingstatus_copy_assign(void* self, void* other);

/// q_bindingstatus_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QBindingStatus* self, QBindingStatus* other ```
void q_bindingstatus_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qbindingstatus.html#dtor.QBindingStatus)
///
/// Delete this object from C++ memory.
///
/// ``` QBindingStatus* self ```
void q_bindingstatus_delete(void* self);

/// https://doc.qt.io/qt-6/qbindingstorage.html

/// q_bindingstorage_new constructs a new QBindingStorage object.
///
///
QBindingStorage* q_bindingstorage_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qbindingstorage.html#isEmpty)
///
/// ``` QBindingStorage* self ```
bool q_bindingstorage_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbindingstorage.html#isValid)
///
/// ``` QBindingStorage* self ```
bool q_bindingstorage_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qbindingstorage.html#registerDependency)
///
/// ``` QBindingStorage* self, QUntypedPropertyData* data ```
void q_bindingstorage_register_dependency(void* self, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qbindingstorage.html#dtor.QBindingStorage)
///
/// Delete this object from C++ memory.
///
/// ``` QBindingStorage* self ```
void q_bindingstorage_delete(void* self);

#endif
