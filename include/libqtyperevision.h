#pragma once
#ifndef SRC_QT6C_LIBQTYPEREVISION_H
#define SRC_QT6C_LIBQTYPEREVISION_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html)

/// q_typerevision_new constructs a new QTypeRevision object.
///
/// @param other QTypeRevision*
///
QTypeRevision* q_typerevision_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html)

/// q_typerevision_new2 constructs a new QTypeRevision object and invalidates the source QTypeRevision object.
///
/// @param other QTypeRevision*
///
QTypeRevision* q_typerevision_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html)

/// q_typerevision_new3 constructs a new QTypeRevision object.
///
QTypeRevision* q_typerevision_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html)

/// q_typerevision_new4 constructs a new QTypeRevision object.
///
/// @param param1 QTypeRevision*
///
QTypeRevision* q_typerevision_new4(void* param1);

/// q_typerevision_copy_assign shallow copies `other` into `self`.
///
/// @param self QTypeRevision*
/// @param other QTypeRevision*
///
void q_typerevision_copy_assign(void* self, void* other);

/// q_typerevision_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QTypeRevision*
/// @param other QTypeRevision*
///
void q_typerevision_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html#zero)
///
QTypeRevision* q_typerevision_zero();

/// [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html#hasMajorVersion)
///
/// @param self QTypeRevision*
///
bool q_typerevision_has_major_version(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html#majorVersion)
///
/// @param self QTypeRevision*
///
unsigned char q_typerevision_major_version(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html#hasMinorVersion)
///
/// @param self QTypeRevision*
///
bool q_typerevision_has_minor_version(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html#minorVersion)
///
/// @param self QTypeRevision*
///
unsigned char q_typerevision_minor_version(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html#isValid)
///
/// @param self QTypeRevision*
///
bool q_typerevision_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtyperevision.html#dtor.QTypeRevision)
///
/// Delete this object from C++ memory.
///
/// @param self QTypeRevision*
///
void q_typerevision_delete(void* self);

#endif
