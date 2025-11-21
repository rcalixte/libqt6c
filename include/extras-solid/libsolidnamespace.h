#pragma once
#ifndef SRC_EXTRAS_SOLID_QT6C_LIBSOLIDNAMESPACE_H
#define SRC_EXTRAS_SOLID_QT6C_LIBSOLIDNAMESPACE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/solid-solidnamespace.html#types

typedef enum {
    SOLID_ERRORTYPE_NOERROR = 0,
    SOLID_ERRORTYPE_UNAUTHORIZEDOPERATION = 1,
    SOLID_ERRORTYPE_DEVICEBUSY = 2,
    SOLID_ERRORTYPE_OPERATIONFAILED = 3,
    SOLID_ERRORTYPE_USERCANCELED = 4,
    SOLID_ERRORTYPE_INVALIDOPTION = 5,
    SOLID_ERRORTYPE_MISSINGDRIVER = 6
} Solid__ErrorType;

#endif
