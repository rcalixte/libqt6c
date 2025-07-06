#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQTVIDEO_H
#define SRC_MULTIMEDIAQT6C_LIBQTVIDEO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qtvideo.html#types

typedef enum {
    QTVIDEO_ROTATION_NONE = 0,
    QTVIDEO_ROTATION_CLOCKWISE90 = 90,
    QTVIDEO_ROTATION_CLOCKWISE180 = 180,
    QTVIDEO_ROTATION_CLOCKWISE270 = 270
} QtVideo__Rotation;

#endif
