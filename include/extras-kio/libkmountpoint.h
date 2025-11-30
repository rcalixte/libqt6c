#pragma once
#ifndef SRC_EXTRAS_KIO_QT6C_LIBKMOUNTPOINT_H
#define SRC_EXTRAS_KIO_QT6C_LIBKMOUNTPOINT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kmountpoint.html

/// [Upstream resources](https://api.kde.org/kmountpoint.html#possibleMountPoints)
///
KMountPoint__List* k_mountpoint_possible_mount_points();

/// [Upstream resources](https://api.kde.org/kmountpoint.html#currentMountPoints)
///
KMountPoint__List* k_mountpoint_current_mount_points();

/// [Upstream resources](https://api.kde.org/kmountpoint.html#mountedFrom)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMountPoint*
const char* k_mountpoint_mounted_from(void* self);

/// [Upstream resources](https://api.kde.org/kmountpoint.html#isOnNetwork)
///
/// @param self KMountPoint*
bool k_mountpoint_is_on_network(void* self);

/// [Upstream resources](https://api.kde.org/kmountpoint.html#deviceId)
///
/// @param self KMountPoint*
dev_t k_mountpoint_device_id(void* self);

/// [Upstream resources](https://api.kde.org/kmountpoint.html#realDeviceName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMountPoint*
const char* k_mountpoint_real_device_name(void* self);

/// [Upstream resources](https://api.kde.org/kmountpoint.html#mountPoint)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMountPoint*
const char* k_mountpoint_mount_point(void* self);

/// [Upstream resources](https://api.kde.org/kmountpoint.html#mountType)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMountPoint*
const char* k_mountpoint_mount_type(void* self);

/// [Upstream resources](https://api.kde.org/kmountpoint.html#mountOptions)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KMountPoint*
const char** k_mountpoint_mount_options(void* self);

/// [Upstream resources](https://api.kde.org/kmountpoint.html#probablySlow)
///
/// @param self KMountPoint*
bool k_mountpoint_probably_slow(void* self);

/// [Upstream resources](https://api.kde.org/kmountpoint.html#testFileSystemFlag)
///
/// @param self KMountPoint*
/// @param flag enum KMountPoint__FileSystemFlag
bool k_mountpoint_test_file_system_flag(void* self, int32_t flag);

/// [Upstream resources](https://api.kde.org/kmountpoint.html#possibleMountPoints)
///
/// @param infoNeeded flag of enum KMountPoint__DetailsNeededFlag
KMountPoint__List* k_mountpoint_possible_mount_points1(int32_t infoNeeded);

/// [Upstream resources](https://api.kde.org/kmountpoint.html#currentMountPoints)
///
/// @param infoNeeded flag of enum KMountPoint__DetailsNeededFlag
KMountPoint__List* k_mountpoint_current_mount_points1(int32_t infoNeeded);

/// [Upstream resources](https://api.kde.org/kmountpoint.html#dtor.KMountPoint)
///
/// Delete this object from C++ memory.
///
/// @param self KMountPoint*
void k_mountpoint_delete(void* self);

/// https://api.kde.org/kmountpoint-list.html

/// k_mountpoint__list_new constructs a new KMountPoint::List object.
///
KMountPoint__List* k_mountpoint__list_new();

/// Delete this object from C++ memory.
///
/// @param self KMountPoint__List*
void k_mountpoint__list_delete(void* self);

/// https://api.kde.org/kmountpoint.html#types

typedef enum {
    KMOUNTPOINT_DETAILSNEEDEDFLAG_BASICINFONEEDED = 0,
    KMOUNTPOINT_DETAILSNEEDEDFLAG_NEEDMOUNTOPTIONS = 1,
    KMOUNTPOINT_DETAILSNEEDEDFLAG_NEEDREALDEVICENAME = 2
} KMountPoint__DetailsNeededFlag;

typedef enum {
    KMOUNTPOINT_FILESYSTEMFLAG_SUPPORTSCHMOD = 0,
    KMOUNTPOINT_FILESYSTEMFLAG_SUPPORTSCHOWN = 1,
    KMOUNTPOINT_FILESYSTEMFLAG_SUPPORTSUTIME = 2,
    KMOUNTPOINT_FILESYSTEMFLAG_SUPPORTSSYMLINKS = 3,
    KMOUNTPOINT_FILESYSTEMFLAG_CASEINSENSITIVE = 4
} KMountPoint__FileSystemFlag;

#endif
