#include "../libqtextcursor.hpp"
#include "libconverttext.hpp"
#include "libconverttext.h"

const char* k_textutils__converttext_normalize(const char* str) {
    libqt_string _str = TextUtils__ConvertText_Normalize(qstring(str));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textutils__converttext_upper_case(void* cursor) {
    TextUtils__ConvertText_UpperCase((QTextCursor*)cursor);
}

void k_textutils__converttext_lower_case(void* cursor) {
    TextUtils__ConvertText_LowerCase((QTextCursor*)cursor);
}

void k_textutils__converttext_sentence_case(void* cursor) {
    TextUtils__ConvertText_SentenceCase((QTextCursor*)cursor);
}

void k_textutils__converttext_reverse_case(void* cursor) {
    TextUtils__ConvertText_ReverseCase((QTextCursor*)cursor);
}
