#pragma once
#ifndef SRC_EXTRAS_KNOTIFICATIONSC_LIBKNOTIFICATIONPERMISSION_HPP
#define SRC_EXTRAS_KNOTIFICATIONSC_LIBKNOTIFICATIONPERMISSION_HPP

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct KNotificationPermission KNotificationPermission;
#endif

int KNotificationPermission_CheckPermission();

#ifdef __cplusplus
} /* extern C */
#endif

#endif
