#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSQT6C_LIBKFILESYSTEMTYPE_H
#define SRC_EXTRAS_KCOREADDONSQT6C_LIBKFILESYSTEMTYPE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kfilesystemtype.html

/// [Qt documentation](https://api-staging.kde.org/kfilesystemtype.html#fileSystemType)
///
/// @param param1 const char*
///
/// @return enum KFileSystemType__Type
int32_t k_filesystemtype_file_system_type(const char* param1);

/// [Qt documentation](https://api-staging.kde.org/kfilesystemtype.html#fileSystemName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param param1 enum KFileSystemType__Type
const char* k_filesystemtype_file_system_name(int32_t param1);

/// https://api-staging.kde.org/kfilesystemtype.html#types

typedef enum {
    KFILESYSTEMTYPE_TYPE_UNKNOWN = 0,
    KFILESYSTEMTYPE_TYPE_NFS = 1,
    KFILESYSTEMTYPE_TYPE_SMB = 2,
    KFILESYSTEMTYPE_TYPE_FAT = 3,
    KFILESYSTEMTYPE_TYPE_RAMFS = 4,
    KFILESYSTEMTYPE_TYPE_OTHER = 5,
    KFILESYSTEMTYPE_TYPE_NTFS = 6,
    KFILESYSTEMTYPE_TYPE_EXFAT = 7,
    KFILESYSTEMTYPE_TYPE_FUSE = 8
} KFileSystemType__Type;

#endif
