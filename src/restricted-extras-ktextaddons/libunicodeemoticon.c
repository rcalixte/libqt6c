#include "libunicodeemoticon.hpp"
#include "libunicodeemoticon.h"

TextEmoticonsCore__UnicodeEmoticon* k_textemoticonscore__unicodeemoticon_new() {
    return TextEmoticonsCore__UnicodeEmoticon_new();
}

TextEmoticonsCore__UnicodeEmoticon* k_textemoticonscore__unicodeemoticon_new2(void* param1) {
    return TextEmoticonsCore__UnicodeEmoticon_new2((TextEmoticonsCore__UnicodeEmoticon*)param1);
}

const char* k_textemoticonscore__unicodeemoticon_identifier(void* self) {
    libqt_string _str = TextEmoticonsCore__UnicodeEmoticon_Identifier((TextEmoticonsCore__UnicodeEmoticon*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textemoticonscore__unicodeemoticon_set_identifier(void* self, const char* identifier) {
    TextEmoticonsCore__UnicodeEmoticon_SetIdentifier((TextEmoticonsCore__UnicodeEmoticon*)self, qstring(identifier));
}

const char* k_textemoticonscore__unicodeemoticon_unicode(void* self) {
    libqt_string _str = TextEmoticonsCore__UnicodeEmoticon_Unicode((TextEmoticonsCore__UnicodeEmoticon*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_textemoticonscore__unicodeemoticon_unicode_display(void* self) {
    libqt_string _str = TextEmoticonsCore__UnicodeEmoticon_UnicodeDisplay((TextEmoticonsCore__UnicodeEmoticon*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textemoticonscore__unicodeemoticon_set_unicode(void* self, const char* unicode) {
    TextEmoticonsCore__UnicodeEmoticon_SetUnicode((TextEmoticonsCore__UnicodeEmoticon*)self, qstring(unicode));
}

const char* k_textemoticonscore__unicodeemoticon_category(void* self) {
    libqt_string _str = TextEmoticonsCore__UnicodeEmoticon_Category((TextEmoticonsCore__UnicodeEmoticon*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textemoticonscore__unicodeemoticon_set_category(void* self, const char* category) {
    TextEmoticonsCore__UnicodeEmoticon_SetCategory((TextEmoticonsCore__UnicodeEmoticon*)self, qstring(category));
}

const char** k_textemoticonscore__unicodeemoticon_aliases(void* self) {
    libqt_list _arr = TextEmoticonsCore__UnicodeEmoticon_Aliases((TextEmoticonsCore__UnicodeEmoticon*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textemoticonscore__unicodeemoticon_aliases\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void k_textemoticonscore__unicodeemoticon_set_aliases(void* self, const char* aliases[static 1]) {
    size_t aliases_len = libqt_strv_length(aliases);
    libqt_string* aliases_qstr = (libqt_string*)malloc(aliases_len * sizeof(libqt_string));
    if (aliases_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_textemoticonscore__unicodeemoticon_set_aliases\n");
        abort();
    }
    for (size_t i = 0; i < aliases_len; ++i) {
        aliases_qstr[i] = qstring(aliases[i]);
    }
    libqt_list aliases_list = qlist(aliases_qstr, aliases_len);
    TextEmoticonsCore__UnicodeEmoticon_SetAliases((TextEmoticonsCore__UnicodeEmoticon*)self, aliases_list);
    free(aliases_qstr);
}

bool k_textemoticonscore__unicodeemoticon_has_emoji(void* self, const char* identifier) {
    return TextEmoticonsCore__UnicodeEmoticon_HasEmoji((TextEmoticonsCore__UnicodeEmoticon*)self, qstring(identifier));
}

bool k_textemoticonscore__unicodeemoticon_is_valid(void* self) {
    return TextEmoticonsCore__UnicodeEmoticon_IsValid((TextEmoticonsCore__UnicodeEmoticon*)self);
}

int32_t k_textemoticonscore__unicodeemoticon_order(void* self) {
    return TextEmoticonsCore__UnicodeEmoticon_Order((TextEmoticonsCore__UnicodeEmoticon*)self);
}

void k_textemoticonscore__unicodeemoticon_set_order(void* self, int order) {
    TextEmoticonsCore__UnicodeEmoticon_SetOrder((TextEmoticonsCore__UnicodeEmoticon*)self, order);
}

const char* k_textemoticonscore__unicodeemoticon_key(void* self) {
    libqt_string _str = TextEmoticonsCore__UnicodeEmoticon_Key((TextEmoticonsCore__UnicodeEmoticon*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textemoticonscore__unicodeemoticon_set_key(void* self, const char* key) {
    TextEmoticonsCore__UnicodeEmoticon_SetKey((TextEmoticonsCore__UnicodeEmoticon*)self, qstring(key));
}

bool k_textemoticonscore__unicodeemoticon_operator_equal(void* self, void* other) {
    return TextEmoticonsCore__UnicodeEmoticon_OperatorEqual((TextEmoticonsCore__UnicodeEmoticon*)self, (TextEmoticonsCore__UnicodeEmoticon*)other);
}

void k_textemoticonscore__unicodeemoticon_delete(void* self) {
    TextEmoticonsCore__UnicodeEmoticon_Delete((TextEmoticonsCore__UnicodeEmoticon*)(self));
}
