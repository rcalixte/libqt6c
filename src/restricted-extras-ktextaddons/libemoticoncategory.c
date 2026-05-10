#include "libemoticoncategory.hpp"
#include "libemoticoncategory.h"

TextEmoticonsCore__EmoticonCategory* k_textemoticonscore__emoticoncategory_new() {
    return TextEmoticonsCore__EmoticonCategory_new();
}

TextEmoticonsCore__EmoticonCategory* k_textemoticonscore__emoticoncategory_new2(void* param1) {
    return TextEmoticonsCore__EmoticonCategory_new2((TextEmoticonsCore__EmoticonCategory*)param1);
}

const char* k_textemoticonscore__emoticoncategory_name(void* self) {
    libqt_string _str = TextEmoticonsCore__EmoticonCategory_Name((TextEmoticonsCore__EmoticonCategory*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textemoticonscore__emoticoncategory_set_name(void* self, const char* name) {
    TextEmoticonsCore__EmoticonCategory_SetName((TextEmoticonsCore__EmoticonCategory*)self, qstring(name));
}

const char* k_textemoticonscore__emoticoncategory_category(void* self) {
    libqt_string _str = TextEmoticonsCore__EmoticonCategory_Category((TextEmoticonsCore__EmoticonCategory*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textemoticonscore__emoticoncategory_set_category(void* self, const char* category) {
    TextEmoticonsCore__EmoticonCategory_SetCategory((TextEmoticonsCore__EmoticonCategory*)self, qstring(category));
}

const char* k_textemoticonscore__emoticoncategory_i18n_name(void* self) {
    libqt_string _str = TextEmoticonsCore__EmoticonCategory_I18nName((TextEmoticonsCore__EmoticonCategory*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textemoticonscore__emoticoncategory_set_i18n_name(void* self, const char* newI18nName) {
    TextEmoticonsCore__EmoticonCategory_SetI18nName((TextEmoticonsCore__EmoticonCategory*)self, qstring(newI18nName));
}

bool k_textemoticonscore__emoticoncategory_operator_lesser(void* self, void* other) {
    return TextEmoticonsCore__EmoticonCategory_OperatorLesser((TextEmoticonsCore__EmoticonCategory*)self, (TextEmoticonsCore__EmoticonCategory*)other);
}

int32_t k_textemoticonscore__emoticoncategory_order(void* self) {
    return TextEmoticonsCore__EmoticonCategory_Order((TextEmoticonsCore__EmoticonCategory*)self);
}

void k_textemoticonscore__emoticoncategory_set_order(void* self, int newOrder) {
    TextEmoticonsCore__EmoticonCategory_SetOrder((TextEmoticonsCore__EmoticonCategory*)self, newOrder);
}

void k_textemoticonscore__emoticoncategory_delete(void* self) {
    TextEmoticonsCore__EmoticonCategory_Delete((TextEmoticonsCore__EmoticonCategory*)(self));
}
