#pragma once
#ifndef SRCQT6C_LIBQSCOPEDPOINTER_H
#define SRCQT6C_LIBQSCOPEDPOINTER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qscopedpointerpoddeleter.html

/// q_scopedpointerpoddeleter_new constructs a new QScopedPointerPodDeleter object.
///
/// @param other QScopedPointerPodDeleter*
QScopedPointerPodDeleter* q_scopedpointerpoddeleter_new(void* other);

/// q_scopedpointerpoddeleter_new2 constructs a new QScopedPointerPodDeleter object and invalidates the source QScopedPointerPodDeleter object.
///
/// @param other QScopedPointerPodDeleter*
QScopedPointerPodDeleter* q_scopedpointerpoddeleter_new2(void* other);

/// q_scopedpointerpoddeleter_copy_assign shallow copies `other` into `self`.
///
/// @param self QScopedPointerPodDeleter*
/// @param other QScopedPointerPodDeleter*
void q_scopedpointerpoddeleter_copy_assign(void* self, void* other);

/// q_scopedpointerpoddeleter_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QScopedPointerPodDeleter*
/// @param other QScopedPointerPodDeleter*
void q_scopedpointerpoddeleter_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qscopedpointerpoddeleter.html#cleanup)
///
/// @param pointer void*
void q_scopedpointerpoddeleter_cleanup(void* pointer);

/// [Qt documentation](https://doc.qt.io/qt-6/qscopedpointerpoddeleter.html#operator-28-29)
///
/// @param self QScopedPointerPodDeleter*
/// @param pointer void*
void q_scopedpointerpoddeleter_operator_call(void* self, void* pointer);

/// [Qt documentation](https://doc.qt.io/qt-6/qscopedpointerpoddeleter.html#dtor.QScopedPointerPodDeleter)
///
/// Delete this object from C++ memory.
///
/// @param self QScopedPointerPodDeleter*
void q_scopedpointerpoddeleter_delete(void* self);

#endif
