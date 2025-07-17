#pragma once
#ifndef SRCQT6C_LIBQCOMPARE_H
#define SRCQT6C_LIBQCOMPARE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/partial_ordering.html

/// q_partial_ordering_new constructs a new Qt::partial_ordering object.
///
/// ``` partial_ordering* other ```
partial_ordering* q_partial_ordering_new(void* other);

/// q_partial_ordering_new2 constructs a new Qt::partial_ordering object and invalidates the source Qt::partial_ordering object.
///
/// ``` partial_ordering* other ```
partial_ordering* q_partial_ordering_new2(void* other);

/// q_partial_ordering_new3 constructs a new Qt::partial_ordering object.
///
/// ``` partial_ordering* param1 ```
partial_ordering* q_partial_ordering_new3(void* param1);

/// q_partial_ordering_copy_assign shallow copies `other` into `self`.
///
/// ``` partial_ordering* self, partial_ordering* other ```
void q_partial_ordering_copy_assign(void* self, void* other);

/// q_partial_ordering_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` partial_ordering* self, partial_ordering* other ```
void q_partial_ordering_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qt::partial_ordering.html#dtor.Qt::partial_ordering)
///
/// Delete this object from C++ memory.
///
/// ``` partial_ordering* self ```
void q_partial_ordering_delete(void* self);

/// https://doc.qt.io/qt-6/weak_ordering.html

/// q_weak_ordering_new constructs a new Qt::weak_ordering object.
///
/// ``` weak_ordering* other ```
weak_ordering* q_weak_ordering_new(void* other);

/// q_weak_ordering_new2 constructs a new Qt::weak_ordering object and invalidates the source Qt::weak_ordering object.
///
/// ``` weak_ordering* other ```
weak_ordering* q_weak_ordering_new2(void* other);

/// q_weak_ordering_new3 constructs a new Qt::weak_ordering object.
///
/// ``` weak_ordering* param1 ```
weak_ordering* q_weak_ordering_new3(void* param1);

/// q_weak_ordering_copy_assign shallow copies `other` into `self`.
///
/// ``` weak_ordering* self, weak_ordering* other ```
void q_weak_ordering_copy_assign(void* self, void* other);

/// q_weak_ordering_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` weak_ordering* self, weak_ordering* other ```
void q_weak_ordering_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/weak_ordering.html#operator)
///
/// ``` weak_ordering* self ```
partial_ordering* q_weak_ordering_to_partial_ordering(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qt::weak_ordering.html#dtor.Qt::weak_ordering)
///
/// Delete this object from C++ memory.
///
/// ``` weak_ordering* self ```
void q_weak_ordering_delete(void* self);

/// https://doc.qt.io/qt-6/strong_ordering.html

/// q_strong_ordering_new constructs a new Qt::strong_ordering object.
///
/// ``` strong_ordering* other ```
strong_ordering* q_strong_ordering_new(void* other);

/// q_strong_ordering_new2 constructs a new Qt::strong_ordering object and invalidates the source Qt::strong_ordering object.
///
/// ``` strong_ordering* other ```
strong_ordering* q_strong_ordering_new2(void* other);

/// q_strong_ordering_new3 constructs a new Qt::strong_ordering object.
///
/// ``` strong_ordering* param1 ```
strong_ordering* q_strong_ordering_new3(void* param1);

/// q_strong_ordering_copy_assign shallow copies `other` into `self`.
///
/// ``` strong_ordering* self, strong_ordering* other ```
void q_strong_ordering_copy_assign(void* self, void* other);

/// q_strong_ordering_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` strong_ordering* self, strong_ordering* other ```
void q_strong_ordering_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/strong_ordering.html#operator)
///
/// ``` strong_ordering* self ```
partial_ordering* q_strong_ordering_to_partial_ordering(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/strong_ordering.html#operator)
///
/// ``` strong_ordering* self ```
weak_ordering* q_strong_ordering_to_weak_ordering(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qt::strong_ordering.html#dtor.Qt::strong_ordering)
///
/// Delete this object from C++ memory.
///
/// ``` strong_ordering* self ```
void q_strong_ordering_delete(void* self);

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
/// ``` partial_ordering* order ```
QPartialOrdering* q_partialordering_new3(void* order);

/// q_partialordering_new4 constructs a new QPartialOrdering object.
///
/// ``` weak_ordering* stdorder ```
QPartialOrdering* q_partialordering_new4(void* stdorder);

/// q_partialordering_new5 constructs a new QPartialOrdering object.
///
/// ``` strong_ordering* stdorder ```
QPartialOrdering* q_partialordering_new5(void* stdorder);

/// q_partialordering_new6 constructs a new QPartialOrdering object.
///
/// ``` QPartialOrdering* param1 ```
QPartialOrdering* q_partialordering_new6(void* param1);

/// q_partialordering_copy_assign shallow copies `other` into `self`.
///
/// ``` QPartialOrdering* self, QPartialOrdering* other ```
void q_partialordering_copy_assign(void* self, void* other);

/// q_partialordering_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QPartialOrdering* self, QPartialOrdering* other ```
void q_partialordering_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpartialordering.html#operator)
///
/// ``` QPartialOrdering* self ```
partial_ordering* q_partialordering_to_partial_ordering(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpartialordering.html#dtor.QPartialOrdering)
///
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
    QTPRIVATE_UNCOMPARABLE_UNORDERED = 2
} QtPrivate__Uncomparable;

typedef enum {
    QTPRIVATE_LEGACYUNCOMPARABLE_UNORDERED = -127
} QtPrivate__LegacyUncomparable;

#endif
