#pragma once
#ifndef SRC_EXTRAS_KNOTIFICATIONS_QT6C_LIBKNOTIFICATIONPERMISSION_H
#define SRC_EXTRAS_KNOTIFICATIONS_QT6C_LIBKNOTIFICATIONPERMISSION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/knotificationpermission.html)

/// [Upstream resources](https://api.kde.org/knotificationpermission.html#checkPermission)
///
/// @return enum Qt__PermissionStatus
///
int32_t k_notificationpermission_check_permission();

/// [Upstream resources](https://api.kde.org/knotificationpermission.html#requestPermission)
///
/// @param param1 QObject*
/// @param param2 void func(enum Qt__PermissionStatus param1)
///
void k_notificationpermission_request_permission(void* param1, void (*param2)(int32_t funcparam1));
#endif
