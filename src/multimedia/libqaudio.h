#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQAUDIO_H
#define SRC_MULTIMEDIAQT6C_LIBQAUDIO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qaudio.html#types

typedef enum {
    QAUDIO_ERROR_NOERROR = 0,
    QAUDIO_ERROR_OPENERROR = 1,
    QAUDIO_ERROR_IOERROR = 2,
    QAUDIO_ERROR_UNDERRUNERROR = 3,
    QAUDIO_ERROR_FATALERROR = 4
} QAudio__Error;

typedef enum {
    QAUDIO_STATE_ACTIVESTATE = 0,
    QAUDIO_STATE_SUSPENDEDSTATE = 1,
    QAUDIO_STATE_STOPPEDSTATE = 2,
    QAUDIO_STATE_IDLESTATE = 3
} QAudio__State;

typedef enum {
    QAUDIO_VOLUMESCALE_LINEARVOLUMESCALE = 0,
    QAUDIO_VOLUMESCALE_CUBICVOLUMESCALE = 1,
    QAUDIO_VOLUMESCALE_LOGARITHMICVOLUMESCALE = 2,
    QAUDIO_VOLUMESCALE_DECIBELVOLUMESCALE = 3
} QAudio__VolumeScale;

#endif
