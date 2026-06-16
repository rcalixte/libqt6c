#include "libkbackup.hpp"
#include "libkbackup.h"

bool k_backup_simple_backup_file(const char* filename, const char* backupDir, const char* backupExtension) {
    return KBackup_SimpleBackupFile(qstring(filename), qstring(backupDir), qstring(backupExtension));
}

bool k_backup_numbered_backup_file(const char* filename, const char* backupDir, const char* backupExtension, uint32_t maxBackups) {
    return KBackup_NumberedBackupFile(qstring(filename), qstring(backupDir), qstring(backupExtension), maxBackups);
}
