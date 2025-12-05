#pragma once
#ifndef SRC_FOSS_EXTRAS_KWINDOWSYSTEM_QT6C_LIBNETWM_H
#define SRC_FOSS_EXTRAS_KWINDOWSYSTEM_QT6C_LIBNETWM_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/netwm.html#public-types)

typedef enum {
    NETROOTINFO__PROTOCOLS = 0,
    NETROOTINFO__WINDOW_TYPES = 1,
    NETROOTINFO__STATES = 2,
    NETROOTINFO__PROTOCOLS2 = 3,
    NETROOTINFO__ACTIONS = 4,
    NETROOTINFO__PROPERTIES_SIZE = 5
} NETRootInfo__;

/// [Upstream resources](https://api.kde.org/netwm.html#public-types)

typedef enum {
    NETWININFO__PROTOCOLS = 0,
    NETWININFO__PROTOCOLS2 = 1,
    NETWININFO__PROPERTIES_SIZE = 2
} NETWinInfo__;

#endif
