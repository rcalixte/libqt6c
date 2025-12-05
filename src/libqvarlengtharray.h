#pragma once
#ifndef SRC_QT6C_LIBQVARLENGTHARRAY_H
#define SRC_QT6C_LIBQVARLENGTHARRAY_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qvlabasebase.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qvlabasebase.html#capacity)
///
/// @param self QVLABaseBase*
///
int64_t q_vlabasebase_capacity(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvlabasebase.html#size)
///
/// @param self QVLABaseBase*
///
int64_t q_vlabasebase_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvlabasebase.html#empty)
///
/// @param self QVLABaseBase*
///
bool q_vlabasebase_empty(void* self);
#endif
