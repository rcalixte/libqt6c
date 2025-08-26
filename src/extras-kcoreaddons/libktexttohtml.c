#include "libktexttohtml.hpp"
#include "libktexttohtml.h"

const char* k_texttohtml_convert_to_html(const char* param1, const int64_t* param2, int param3, int param4) {
    libqt_string _str = KTextToHTML_ConvertToHtml(qstring(param1), param2, param3, param4);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}
