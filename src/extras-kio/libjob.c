#include "../libqurl.hpp"
#include "libjob.hpp"
#include "libjob.h"

const char* k_io_build_error_string(int param1, const char* param2) {
    libqt_string _str = KIO_BuildErrorString(param1, qstring(param2));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_io_raw_error_detail(int param1, const char* param2, void* param3, int param4) {
    libqt_string _str = KIO_RawErrorDetail(param1, qstring(param2), (QUrl*)param3, param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}
