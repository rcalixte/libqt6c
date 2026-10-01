#pragma once
#ifndef LIBQVARLENGTHARRAY_H
#define LIBQVARLENGTHARRAY_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qvlabasebase.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qvlabasebase.html#capacity)
///
/// @param self const QVLABaseBase*
///
intptr_t q_vlabasebase_capacity(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvlabasebase.html#size)
///
/// @param self const QVLABaseBase*
///
intptr_t q_vlabasebase_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qvlabasebase.html#empty)
///
/// @param self const QVLABaseBase*
///
bool q_vlabasebase_empty(const void* self);
#endif
