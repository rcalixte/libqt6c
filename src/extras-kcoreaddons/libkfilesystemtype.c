#include "libkfilesystemtype.hpp"
#include "libkfilesystemtype.h"

int32_t k_filesystemtype_file_system_type(const char* param1) {
    return KFileSystemType_FileSystemType(qstring(param1));
}

const char* k_filesystemtype_file_system_name(int32_t param1) {
    libqt_string _str = KFileSystemType_FileSystemName(param1);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}
