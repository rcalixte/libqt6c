#pragma once
#ifndef SRCQT6C_LIBQSTRINGBUILDER_H
#define SRCQT6C_LIBQSTRINGBUILDER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qabstractconcatenable.html

/// q_abstractconcatenable_new constructs a new QAbstractConcatenable object.
///
/// ``` QAbstractConcatenable* other ```
QAbstractConcatenable* q_abstractconcatenable_new(void* other);

/// q_abstractconcatenable_new2 constructs a new QAbstractConcatenable object and invalidates the source QAbstractConcatenable object.
///
/// ``` QAbstractConcatenable* other ```
QAbstractConcatenable* q_abstractconcatenable_new2(void* other);

/// q_abstractconcatenable_copy_assign shallow copies `other` into `self`.
///
/// ``` QAbstractConcatenable* self, QAbstractConcatenable* other ```
void q_abstractconcatenable_copy_assign(void* self, void* other);

/// q_abstractconcatenable_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QAbstractConcatenable* self, QAbstractConcatenable* other ```
void q_abstractconcatenable_move_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// ``` QAbstractConcatenable* self ```
void q_abstractconcatenable_delete(void* self);

#endif
