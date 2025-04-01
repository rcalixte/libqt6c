#pragma once
#ifndef SRCQT6C_LIBQIODEVICEBASE_H
#define SRCQT6C_LIBQIODEVICEBASE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qiodevicebase.html

/// q_iodevicebase_new constructs a new QIODeviceBase object.
///
/// ``` QIODeviceBase* other ```
QIODeviceBase* q_iodevicebase_new(void* other);

/// q_iodevicebase_copy_assign shallow copies `other` into `self`.
///
/// ``` QIODeviceBase* self, QIODeviceBase* other ```
void q_iodevicebase_copy_assign(void* self, void* other);

/// https://doc.qt.io/qt-6/qiodevicebase.html#types

typedef enum {
    QIODEVICEBASE_OPENMODEFLAG_NOTOPEN = 0,
    QIODEVICEBASE_OPENMODEFLAG_READONLY = 1,
    QIODEVICEBASE_OPENMODEFLAG_WRITEONLY = 2,
    QIODEVICEBASE_OPENMODEFLAG_READWRITE = 3,
    QIODEVICEBASE_OPENMODEFLAG_APPEND = 4,
    QIODEVICEBASE_OPENMODEFLAG_TRUNCATE = 8,
    QIODEVICEBASE_OPENMODEFLAG_TEXT = 16,
    QIODEVICEBASE_OPENMODEFLAG_UNBUFFERED = 32,
    QIODEVICEBASE_OPENMODEFLAG_NEWONLY = 64,
    QIODEVICEBASE_OPENMODEFLAG_EXISTINGONLY = 128
} QIODeviceBase__OpenModeFlag;

#endif
