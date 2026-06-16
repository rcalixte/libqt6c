#pragma once
#ifndef SRC_EXTRAS_KCOREADDONS_QT6C_LIBKBACKUP_H
#define SRC_EXTRAS_KCOREADDONS_QT6C_LIBKBACKUP_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kbackup.html)

/// [Upstream resources](https://api.kde.org/kbackup.html#simpleBackupFile)
///
/// @param filename const char*
/// @param backupDir const char*
/// @param backupExtension const char*
///
bool k_backup_simple_backup_file(const char* filename, const char* backupDir, const char* backupExtension);

/// [Upstream resources](https://api.kde.org/kbackup.html#numberedBackupFile)
///
/// @param filename const char*
/// @param backupDir const char*
/// @param backupExtension const char*
/// @param maxBackups uint32_t
///
bool k_backup_numbered_backup_file(const char* filename, const char* backupDir, const char* backupExtension, uint32_t maxBackups);
#endif
