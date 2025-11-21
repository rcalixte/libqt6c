#pragma once
#ifndef SRC_QT6C_LIBQCOMPARE_H
#define SRC_QT6C_LIBQCOMPARE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/partial-ordering.html

/// q_partial_ordering_new constructs a new Qt::partial_ordering object.
///
/// @param other partial_ordering*
partial_ordering* q_partial_ordering_new(void* other);

/// q_partial_ordering_new2 constructs a new Qt::partial_ordering object and invalidates the source Qt::partial_ordering object.
///
/// @param other partial_ordering*
partial_ordering* q_partial_ordering_new2(void* other);

/// q_partial_ordering_new3 constructs a new Qt::partial_ordering object.
///
/// @param param1 partial_ordering*
partial_ordering* q_partial_ordering_new3(void* param1);

/// q_partial_ordering_copy_assign shallow copies `other` into `self`.
///
/// @param self partial_ordering*
/// @param other partial_ordering*
void q_partial_ordering_copy_assign(void* self, void* other);

/// q_partial_ordering_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self partial_ordering*
/// @param other partial_ordering*
void q_partial_ordering_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/partial-ordering.html#dtor.partial_ordering)
///
/// Delete this object from C++ memory.
///
/// @param self partial_ordering*
void q_partial_ordering_delete(void* self);

/// https://doc.qt.io/qt-6/weak-ordering.html

/// q_weak_ordering_new constructs a new Qt::weak_ordering object.
///
/// @param other weak_ordering*
weak_ordering* q_weak_ordering_new(void* other);

/// q_weak_ordering_new2 constructs a new Qt::weak_ordering object and invalidates the source Qt::weak_ordering object.
///
/// @param other weak_ordering*
weak_ordering* q_weak_ordering_new2(void* other);

/// q_weak_ordering_new3 constructs a new Qt::weak_ordering object.
///
/// @param param1 weak_ordering*
weak_ordering* q_weak_ordering_new3(void* param1);

/// q_weak_ordering_copy_assign shallow copies `other` into `self`.
///
/// @param self weak_ordering*
/// @param other weak_ordering*
void q_weak_ordering_copy_assign(void* self, void* other);

/// q_weak_ordering_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self weak_ordering*
/// @param other weak_ordering*
void q_weak_ordering_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/weak-ordering.html#operator)
///
/// @param self weak_ordering*
partial_ordering* q_weak_ordering_to_partial_ordering(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/weak-ordering.html#dtor.weak_ordering)
///
/// Delete this object from C++ memory.
///
/// @param self weak_ordering*
void q_weak_ordering_delete(void* self);

/// https://doc.qt.io/qt-6/strong-ordering.html

/// q_strong_ordering_new constructs a new Qt::strong_ordering object.
///
/// @param other strong_ordering*
strong_ordering* q_strong_ordering_new(void* other);

/// q_strong_ordering_new2 constructs a new Qt::strong_ordering object and invalidates the source Qt::strong_ordering object.
///
/// @param other strong_ordering*
strong_ordering* q_strong_ordering_new2(void* other);

/// q_strong_ordering_new3 constructs a new Qt::strong_ordering object.
///
/// @param param1 strong_ordering*
strong_ordering* q_strong_ordering_new3(void* param1);

/// q_strong_ordering_copy_assign shallow copies `other` into `self`.
///
/// @param self strong_ordering*
/// @param other strong_ordering*
void q_strong_ordering_copy_assign(void* self, void* other);

/// q_strong_ordering_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self strong_ordering*
/// @param other strong_ordering*
void q_strong_ordering_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/strong-ordering.html#operator)
///
/// @param self strong_ordering*
partial_ordering* q_strong_ordering_to_partial_ordering(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/strong-ordering.html#operator)
///
/// @param self strong_ordering*
weak_ordering* q_strong_ordering_to_weak_ordering(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/strong-ordering.html#dtor.strong_ordering)
///
/// Delete this object from C++ memory.
///
/// @param self strong_ordering*
void q_strong_ordering_delete(void* self);

/// https://doc.qt.io/qt-6/qpartialordering.html

/// q_partialordering_new constructs a new QPartialOrdering object.
///
/// @param other QPartialOrdering*
QPartialOrdering* q_partialordering_new(void* other);

/// q_partialordering_new2 constructs a new QPartialOrdering object and invalidates the source QPartialOrdering object.
///
/// @param other QPartialOrdering*
QPartialOrdering* q_partialordering_new2(void* other);

/// q_partialordering_new3 constructs a new QPartialOrdering object.
///
/// @param order partial_ordering*
QPartialOrdering* q_partialordering_new3(void* order);

/// q_partialordering_new4 constructs a new QPartialOrdering object.
///
/// @param stdorder weak_ordering*
QPartialOrdering* q_partialordering_new4(void* stdorder);

/// q_partialordering_new5 constructs a new QPartialOrdering object.
///
/// @param stdorder strong_ordering*
QPartialOrdering* q_partialordering_new5(void* stdorder);

/// q_partialordering_new6 constructs a new QPartialOrdering object.
///
/// @param param1 QPartialOrdering*
QPartialOrdering* q_partialordering_new6(void* param1);

/// q_partialordering_copy_assign shallow copies `other` into `self`.
///
/// @param self QPartialOrdering*
/// @param other QPartialOrdering*
void q_partialordering_copy_assign(void* self, void* other);

/// q_partialordering_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QPartialOrdering*
/// @param other QPartialOrdering*
void q_partialordering_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qpartialordering.html#operator)
///
/// @param self QPartialOrdering*
partial_ordering* q_partialordering_to_partial_ordering(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpartialordering.html#dtor.QPartialOrdering)
///
/// Delete this object from C++ memory.
///
/// @param self QPartialOrdering*
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
