#include "libkbackup.hpp"
#include "libkbackup.h"

bool k_backup_simple_backup_file(const char* param1, const char* param2, const char* param3) {
    return KBackup_SimpleBackupFile(qstring(param1), qstring(param2), qstring(param3));
}

bool k_backup_numbered_backup_file(const char* param1, const char* param2, const char* param3, uint32_t param4) {
    return KBackup_NumberedBackupFile(qstring(param1), qstring(param2), qstring(param3), param4);
}
