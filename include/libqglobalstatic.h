#pragma once
#ifndef LIBQGLOBALSTATIC_H
#define LIBQGLOBALSTATIC_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qglobalstatic.html#public-types)

typedef enum {
    QTGLOBALSTATIC_GUARDVALUES_DESTROYED = -2,
    QTGLOBALSTATIC_GUARDVALUES_INITIALIZED = -1,
    QTGLOBALSTATIC_GUARDVALUES_UNINITIALIZED = 0,
    QTGLOBALSTATIC_GUARDVALUES_INITIALIZING = 1
} QtGlobalStatic__GuardValues;

#endif
