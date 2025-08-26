#pragma once
#ifndef SRC_EXTRAS_KCOREADDONSQT6C_LIBKBACKUP_H
#define SRC_EXTRAS_KCOREADDONSQT6C_LIBKBACKUP_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kbackup.html

/// [Qt documentation](https://api-staging.kde.org/kbackup.html#simpleBackupFile)
///
/// @param param1 const char*
/// @param param2 const char*
/// @param param3 const char*
bool k_backup_simple_backup_file(const char* param1, const char* param2, const char* param3);

/// [Qt documentation](https://api-staging.kde.org/kbackup.html#numberedBackupFile)
///
/// @param param1 const char*
/// @param param2 const char*
/// @param param3 const char*
/// @param param4 uint32_t
bool k_backup_numbered_backup_file(const char* param1, const char* param2, const char* param3, uint32_t param4);
#endif
