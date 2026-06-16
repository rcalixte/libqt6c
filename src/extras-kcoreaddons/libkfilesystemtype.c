#include "libkfilesystemtype.hpp"
#include "libkfilesystemtype.h"

int32_t k_filesystemtype_file_system_type(const char* path) {
    return KFileSystemType_FileSystemType(qstring(path));
}

const char* k_filesystemtype_file_system_name(int32_t type) {
    libqt_string _str = KFileSystemType_FileSystemName(type);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}
