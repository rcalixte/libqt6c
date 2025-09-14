#include "libknotificationpermission.hpp"
#include "libknotificationpermission.h"

int32_t k_notificationpermission_check_permission() {
    return KNotificationPermission_CheckPermission();
}
