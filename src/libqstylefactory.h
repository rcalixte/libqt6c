#pragma once
#ifndef SRCQT6C_LIBQSTYLEFACTORY_H
#define SRCQT6C_LIBQSTYLEFACTORY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include <string.h>
#include "libqstyle.h"

/// https://doc.qt.io/qt-6/qstylefactory.html

/// q_stylefactory_new constructs a new QStyleFactory object.
///
/// ``` QStyleFactory* other ```
QStyleFactory* q_stylefactory_new(void* other);

/// q_stylefactory_new2 constructs a new QStyleFactory object and invalidates the source QStyleFactory object.
///
/// ``` QStyleFactory* other ```
QStyleFactory* q_stylefactory_new2(void* other);

/// q_stylefactory_copy_assign shallow copies `other` into `self`.
///
/// ``` QStyleFactory* self, QStyleFactory* other ```
void q_stylefactory_copy_assign(void* self, void* other);

/// q_stylefactory_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QStyleFactory* self, QStyleFactory* other ```
void q_stylefactory_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylefactory.html#keys)
///
///
const char** q_stylefactory_keys();

/// [Qt documentation](https://doc.qt.io/qt-6/qstylefactory.html#create)
///
/// ``` const char* param1 ```
QStyle* q_stylefactory_create(const char* param1);

/// Delete this object from C++ memory.
///
/// ``` QStyleFactory* self ```
void q_stylefactory_delete(void* self);

#endif
