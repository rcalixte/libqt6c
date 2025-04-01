#pragma once
#ifndef SRCQT6C_LIBQVARLENGTHARRAY_H
#define SRCQT6C_LIBQVARLENGTHARRAY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qvlabasebase.html

/// [Qt documentation](https://doc.qt.io/qt-6/qvlabasebase.html#capacity)
///
/// ``` QVLABaseBase* self ```
int64_t q_vlabasebase_capacity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvlabasebase.html#size)
///
/// ``` QVLABaseBase* self ```
int64_t q_vlabasebase_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qvlabasebase.html#empty)
///
/// ``` QVLABaseBase* self ```
bool q_vlabasebase_empty(void* self);
#endif
