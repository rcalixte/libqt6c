#pragma once
#ifndef SRC_SVGQT6C_LIBQTSVGGLOBAL_H
#define SRC_SVGQT6C_LIBQTSVGGLOBAL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qtsvgglobal.html#types

typedef enum {
    QTSVG_OPTION_NOOPTION = 0,
    QTSVG_OPTION_TINY12FEATURESONLY = 1,
    QTSVG_OPTION_ASSUMETRUSTEDSOURCE = 2
} QtSvg__Option;

#endif
