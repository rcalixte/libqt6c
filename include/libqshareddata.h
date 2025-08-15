#pragma once
#ifndef SRCQT6C_LIBQSHAREDDATA_H
#define SRCQT6C_LIBQSHAREDDATA_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qshareddata.html

/// q_shareddata_new constructs a new QSharedData object.
///
QSharedData* q_shareddata_new();

/// q_shareddata_new2 constructs a new QSharedData object.
///
/// @param param1 QSharedData*
QSharedData* q_shareddata_new2(void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qshareddata.html#dtor.QSharedData)
///
/// Delete this object from C++ memory.
///
/// @param self QSharedData*
void q_shareddata_delete(void* self);

/// https://doc.qt.io/qt-6/qadoptshareddatatag.html

/// q_adoptshareddatatag_new constructs a new QAdoptSharedDataTag object.
///
/// @param other QAdoptSharedDataTag*
QAdoptSharedDataTag* q_adoptshareddatatag_new(void* other);

/// q_adoptshareddatatag_new2 constructs a new QAdoptSharedDataTag object and invalidates the source QAdoptSharedDataTag object.
///
/// @param other QAdoptSharedDataTag*
QAdoptSharedDataTag* q_adoptshareddatatag_new2(void* other);

/// q_adoptshareddatatag_new3 constructs a new QAdoptSharedDataTag object.
///
QAdoptSharedDataTag* q_adoptshareddatatag_new3();

/// q_adoptshareddatatag_copy_assign shallow copies `other` into `self`.
///
/// @param self QAdoptSharedDataTag*
/// @param other QAdoptSharedDataTag*
void q_adoptshareddatatag_copy_assign(void* self, void* other);

/// q_adoptshareddatatag_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QAdoptSharedDataTag*
/// @param other QAdoptSharedDataTag*
void q_adoptshareddatatag_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qadoptshareddatatag.html#dtor.QAdoptSharedDataTag)
///
/// Delete this object from C++ memory.
///
/// @param self QAdoptSharedDataTag*
void q_adoptshareddatatag_delete(void* self);

#endif
