#pragma once
#ifndef SRCQT6C_LIBQSCOPEDPOINTER_H
#define SRCQT6C_LIBQSCOPEDPOINTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qscopedpointerpoddeleter.html

/// q_scopedpointerpoddeleter_new constructs a new QScopedPointerPodDeleter object.
///
/// ``` QScopedPointerPodDeleter* other ```
QScopedPointerPodDeleter* q_scopedpointerpoddeleter_new(void* other);

/// q_scopedpointerpoddeleter_new2 constructs a new QScopedPointerPodDeleter object and invalidates the source QScopedPointerPodDeleter object.
///
/// ``` QScopedPointerPodDeleter* other ```
QScopedPointerPodDeleter* q_scopedpointerpoddeleter_new2(void* other);

/// q_scopedpointerpoddeleter_copy_assign shallow copies `other` into `self`.
///
/// ``` QScopedPointerPodDeleter* self, QScopedPointerPodDeleter* other ```
void q_scopedpointerpoddeleter_copy_assign(void* self, void* other);

/// q_scopedpointerpoddeleter_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QScopedPointerPodDeleter* self, QScopedPointerPodDeleter* other ```
void q_scopedpointerpoddeleter_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qscopedpointerpoddeleter.html#cleanup)
///
/// ``` void* pointer ```
void q_scopedpointerpoddeleter_cleanup(void* pointer);

/// [Qt documentation](https://doc.qt.io/qt-6/qscopedpointerpoddeleter.html#operator())
///
/// ``` QScopedPointerPodDeleter* self, void* pointer ```
void q_scopedpointerpoddeleter_operator_call(void* self, void* pointer);

/// Delete this object from C++ memory.
///
/// ``` QScopedPointerPodDeleter* self ```
void q_scopedpointerpoddeleter_delete(void* self);

#endif
