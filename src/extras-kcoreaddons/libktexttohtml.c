#include "libktexttohtml.hpp"
#include "libktexttohtml.h"

const char* k_texttohtml_convert_to_html(const char* plainText, const int32_t* options, int maxUrlLen, int maxAddressLen) {
    libqt_string _str = KTextToHTML_ConvertToHtml(qstring(plainText), options, maxUrlLen, maxAddressLen);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}
