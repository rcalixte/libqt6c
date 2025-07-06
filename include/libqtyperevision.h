#pragma once
#ifndef SRCQT6C_LIBQTYPEREVISION_H
#define SRCQT6C_LIBQTYPEREVISION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtyperevision.html

/// q_typerevision_new constructs a new QTypeRevision object.
///
/// ``` QTypeRevision* other ```
QTypeRevision* q_typerevision_new(void* other);

/// q_typerevision_new2 constructs a new QTypeRevision object and invalidates the source QTypeRevision object.
///
/// ``` QTypeRevision* other ```
QTypeRevision* q_typerevision_new2(void* other);

/// q_typerevision_new3 constructs a new QTypeRevision object.
///
///
QTypeRevision* q_typerevision_new3();

/// q_typerevision_new4 constructs a new QTypeRevision object.
///
/// ``` QTypeRevision* param1 ```
QTypeRevision* q_typerevision_new4(void* param1);

/// q_typerevision_copy_assign shallow copies `other` into `self`.
///
/// ``` QTypeRevision* self, QTypeRevision* other ```
void q_typerevision_copy_assign(void* self, void* other);

/// q_typerevision_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QTypeRevision* self, QTypeRevision* other ```
void q_typerevision_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtyperevision.html#zero)
///
///
QTypeRevision* q_typerevision_zero();

/// [Qt documentation](https://doc.qt.io/qt-6/qtyperevision.html#hasMajorVersion)
///
/// ``` QTypeRevision* self ```
bool q_typerevision_has_major_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtyperevision.html#majorVersion)
///
/// ``` QTypeRevision* self ```
unsigned char q_typerevision_major_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtyperevision.html#hasMinorVersion)
///
/// ``` QTypeRevision* self ```
bool q_typerevision_has_minor_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtyperevision.html#minorVersion)
///
/// ``` QTypeRevision* self ```
unsigned char q_typerevision_minor_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtyperevision.html#isValid)
///
/// ``` QTypeRevision* self ```
bool q_typerevision_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtyperevision.html#dtor.QTypeRevision)
///
/// Delete this object from C++ memory.
///
/// ``` QTypeRevision* self ```
void q_typerevision_delete(void* self);

#endif
