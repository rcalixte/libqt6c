#pragma once
#ifndef SRC_FOSS_EXTRAS_KWINDOWSYSTEM_QT6C_LIBKUSERTIMESTAMP_H
#define SRC_FOSS_EXTRAS_KWINDOWSYSTEM_QT6C_LIBKUSERTIMESTAMP_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kusertimestamp.html)

/// [Upstream resources](https://api.kde.org/kusertimestamp.html#userTimestamp)
///
uintptr_t k_usertimestamp_user_timestamp();

/// [Upstream resources](https://api.kde.org/kusertimestamp.html#updateUserTimestamp)
///
/// @param param1 uintptr_t
///
void k_usertimestamp_update_user_timestamp(uintptr_t param1);
#endif
