#include <KNotificationPermission>
#include <knotificationpermission.h>
#include "libknotificationpermission.hpp"
#include "libknotificationpermission.hxx"

int KNotificationPermission_CheckPermission() {
    return static_cast<int>(KNotificationPermission::checkPermission());
}
