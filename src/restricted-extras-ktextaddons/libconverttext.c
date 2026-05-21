#include "../libqtextcursor.hpp"
#include "libconverttext.hpp"
#include "libconverttext.h"

const char* k_textutils__converttext_normalize(const char* param1) {
    libqt_string _str = TextUtils__ConvertText_Normalize(qstring(param1));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textutils__converttext_upper_case(void* param1) {
    TextUtils__ConvertText_UpperCase((QTextCursor*)param1);
}

void k_textutils__converttext_lower_case(void* param1) {
    TextUtils__ConvertText_LowerCase((QTextCursor*)param1);
}

void k_textutils__converttext_sentence_case(void* param1) {
    TextUtils__ConvertText_SentenceCase((QTextCursor*)param1);
}

void k_textutils__converttext_reverse_case(void* param1) {
    TextUtils__ConvertText_ReverseCase((QTextCursor*)param1);
}
