#pragma once
#ifndef SRC_EXTRAS_KNOTIFICATIONSQT6C_LIBKNOTIFICATIONPERMISSION_H
#define SRC_EXTRAS_KNOTIFICATIONSQT6C_LIBKNOTIFICATIONPERMISSION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/knotificationpermission.html

/// [Qt documentation](https://api.kde.org/knotificationpermission.html#checkPermission)
///
///
/// @return enum Qt__PermissionStatus
int32_t k_notificationpermission_check_permission();
#endif
