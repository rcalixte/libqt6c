#pragma once
#ifndef SRC_QT6C_LIBQSEQUENTIALITERABLE_H
#define SRC_QT6C_LIBQSEQUENTIALITERABLE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsequentialiterable.html#public-types)

typedef enum {
    QSEQUENTIALITERABLE_POSITION_UNSPECIFIED = 0,
    QSEQUENTIALITERABLE_POSITION_ATBEGIN = 1,
    QSEQUENTIALITERABLE_POSITION_ATEND = 2
} QSequentialIterable__Position;

#endif
