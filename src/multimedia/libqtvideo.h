#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQTVIDEO_H
#define SRC_MULTIMEDIAQT6C_LIBQTVIDEO_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qtvideo.html

/// [Qt documentation](https://doc.qt.io/qt-6/qtvideo.html#qt_getEnumMetaObject)
///
/// @param param1 enum QtVideo__Rotation
const QMetaObject* q_tvideo_get_enum_meta_object(int32_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qtvideo.html#qt_getEnumName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 enum QtVideo__Rotation
const char* q_tvideo_get_enum_name(int32_t param1);

/// https://doc.qt.io/qt-6/qtvideo.html#types

typedef enum {
    QTVIDEO_ROTATION_NONE = 0,
    QTVIDEO_ROTATION_CLOCKWISE90 = 90,
    QTVIDEO_ROTATION_CLOCKWISE180 = 180,
    QTVIDEO_ROTATION_CLOCKWISE270 = 270
} QtVideo__Rotation;

#endif
