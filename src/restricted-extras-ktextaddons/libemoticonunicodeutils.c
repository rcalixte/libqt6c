#include "libemoticonunicodeutils.hpp"
#include "libemoticonunicodeutils.h"

const char* k_textemoticonscore__emoticonunicodeutils_emoji_font_name() {
    libqt_string _str = TextEmoticonsCore__EmoticonUnicodeUtils_EmojiFontName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textemoticonscore__emoticonunicodeutils_recent_identifier() {
    libqt_string _str = TextEmoticonsCore__EmoticonUnicodeUtils_RecentIdentifier();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textemoticonscore__emoticonunicodeutils_custom_identifier() {
    libqt_string _str = TextEmoticonsCore__EmoticonUnicodeUtils_CustomIdentifier();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}
