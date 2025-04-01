#pragma once
#ifndef SRCQT6C_LIBQCOMPARE_H
#define SRCQT6C_LIBQCOMPARE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qpartialordering.html

/// q_partialordering_new constructs a new QPartialOrdering object.
///
/// ``` QPartialOrdering* other ```
QPartialOrdering* q_partialordering_new(void* other);

/// q_partialordering_new2 constructs a new QPartialOrdering object and invalidates the source QPartialOrdering object.
///
/// ``` QPartialOrdering* other ```
QPartialOrdering* q_partialordering_new2(void* other);

/// q_partialordering_new3 constructs a new QPartialOrdering object.
///
/// ``` QPartialOrdering* param1 ```
QPartialOrdering* q_partialordering_new3(void* param1);

/// q_partialordering_copy_assign shallow copies `other` into `self`.
///
/// ``` QPartialOrdering* self, QPartialOrdering* other ```
void q_partialordering_copy_assign(void* self, void* other);

/// q_partialordering_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QPartialOrdering* self, QPartialOrdering* other ```
void q_partialordering_move_assign(void* self, void* other);

/// Delete this object from C++ memory.
///
/// ``` QPartialOrdering* self ```
void q_partialordering_delete(void* self);

/// https://doc.qt.io/qt-6/qcompare.html#types

typedef enum {
    QTPRIVATE_ORDERING_EQUAL = 0,
    QTPRIVATE_ORDERING_EQUIVALENT = 0,
    QTPRIVATE_ORDERING_LESS = -1,
    QTPRIVATE_ORDERING_GREATER = 1
} QtPrivate__Ordering;

typedef enum {
    QTPRIVATE_UNCOMPARABLE_UNORDERED = -127
} QtPrivate__Uncomparable;

#endif
