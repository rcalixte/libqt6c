#include "../libqurl.hpp"
#include "libjob.hpp"
#include "libjob.h"

const char* k_io_build_error_string(int errorCode, const char* errorText) {
    libqt_string _str = KIO_BuildErrorString(errorCode, qstring(errorText));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* k_io_raw_error_detail(int errorCode, const char* errorText, void* reqUrl, int method) {
    libqt_string _str = KIO_RawErrorDetail(errorCode, qstring(errorText), (QUrl*)reqUrl, method);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}
