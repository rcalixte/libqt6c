#pragma once
#ifndef SRC_FOSS_EXTRAS_KWINDOWSYSTEMQT6C_LIBNETWM_H
#define SRC_FOSS_EXTRAS_KWINDOWSYSTEMQT6C_LIBNETWM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/netwm.html#types

typedef enum {
    NETROOTINFO__PROTOCOLS = 0,
    NETROOTINFO__WINDOW_TYPES = 1,
    NETROOTINFO__STATES = 2,
    NETROOTINFO__PROTOCOLS2 = 3,
    NETROOTINFO__ACTIONS = 4,
    NETROOTINFO__PROPERTIES_SIZE = 5
} NETRootInfo__;

typedef enum {
    NETWININFO__PROTOCOLS = 0,
    NETWININFO__PROTOCOLS2 = 1,
    NETWININFO__PROPERTIES_SIZE = 2
} NETWinInfo__;

#endif
