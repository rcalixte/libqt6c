#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQLOCATION_H
#define SRC_LOCATION_QT6C_LIBQLOCATION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qlocation.html#public-types)

typedef enum {
    QLOCATION_VISIBILITY_UNSPECIFIEDVISIBILITY = 0,
    QLOCATION_VISIBILITY_DEVICEVISIBILITY = 1,
    QLOCATION_VISIBILITY_PRIVATEVISIBILITY = 2,
    QLOCATION_VISIBILITY_PUBLICVISIBILITY = 4
} QLocation__Visibility;

#endif
