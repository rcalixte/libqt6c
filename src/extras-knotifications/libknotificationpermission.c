#include "../libqobject.hpp"
#include "libknotificationpermission.hpp"
#include "libknotificationpermission.h"

int32_t k_notificationpermission_check_permission() {
    return KNotificationPermission_CheckPermission();
}

void k_notificationpermission_request_permission(void* context, void (*callback)(int32_t funcparam1)) {
    KNotificationPermission_RequestPermission((QObject*)context, (intptr_t)callback);
}
