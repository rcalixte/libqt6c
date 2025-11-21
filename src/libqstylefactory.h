#pragma once
#ifndef SRC_QT6C_LIBQSTYLEFACTORY_H
#define SRC_QT6C_LIBQSTYLEFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qstylefactory.html

/// q_stylefactory_new constructs a new QStyleFactory object.
///
/// @param other QStyleFactory*
QStyleFactory* q_stylefactory_new(void* other);

/// q_stylefactory_new2 constructs a new QStyleFactory object and invalidates the source QStyleFactory object.
///
/// @param other QStyleFactory*
QStyleFactory* q_stylefactory_new2(void* other);

/// q_stylefactory_copy_assign shallow copies `other` into `self`.
///
/// @param self QStyleFactory*
/// @param other QStyleFactory*
void q_stylefactory_copy_assign(void* self, void* other);

/// q_stylefactory_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QStyleFactory*
/// @param other QStyleFactory*
void q_stylefactory_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylefactory.html#keys)
///
/// Caller is responsible for freeing the returned memory
///
const char** q_stylefactory_keys();

/// [Qt documentation](https://doc.qt.io/qt-6/qstylefactory.html#create)
///
/// @param param1 const char*
QStyle* q_stylefactory_create(const char* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qstylefactory.html#dtor.QStyleFactory)
///
/// Delete this object from C++ memory.
///
/// @param self QStyleFactory*
void q_stylefactory_delete(void* self);

#endif
