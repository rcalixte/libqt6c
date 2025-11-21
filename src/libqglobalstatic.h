#pragma once
#ifndef SRC_QT6C_LIBQGLOBALSTATIC_H
#define SRC_QT6C_LIBQGLOBALSTATIC_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qglobalstatic.html#types

typedef enum {
    QTGLOBALSTATIC_GUARDVALUES_DESTROYED = -2,
    QTGLOBALSTATIC_GUARDVALUES_INITIALIZED = -1,
    QTGLOBALSTATIC_GUARDVALUES_UNINITIALIZED = 0,
    QTGLOBALSTATIC_GUARDVALUES_INITIALIZING = 1
} QtGlobalStatic__GuardValues;

#endif
