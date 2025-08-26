#include "libkcoreaddons.hpp"
#include "libkcoreaddons.h"

const char* k_coreaddons_version_string() {
    libqt_string _str = KCoreAddons_VersionString();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint32_t k_coreaddons_version() {
    return KCoreAddons_Version();
}
