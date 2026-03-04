#include "libpoppler_version.hpp"
#include "libpoppler_version.h"

const char* q_poppler__version_string() {
    libqt_string _str = Poppler__Version_String();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint32_t q_poppler__version_major() {
    return Poppler__Version_Major();
}

uint32_t q_poppler__version_minor() {
    return Poppler__Version_Minor();
}

uint32_t q_poppler__version_micro() {
    return Poppler__Version_Micro();
}
