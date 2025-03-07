#pragma once
#ifndef SRCQT6C_LIBQCOMPARE_H
#define SRCQT6C_LIBQCOMPARE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

QPartialOrdering* q_partialordering_new(void* other);
QPartialOrdering* q_partialordering_new2(void* other);
QPartialOrdering* q_partialordering_new3(void* param1);
void q_partialordering_copy_assign(void* self, void* other);
void q_partialordering_move_assign(void* self, void* other);
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
