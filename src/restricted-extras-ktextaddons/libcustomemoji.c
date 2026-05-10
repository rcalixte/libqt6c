#include "libcustomemoji.hpp"
#include "libcustomemoji.h"

TextEmoticonsCore__CustomEmoji* k_textemoticonscore__customemoji_new() {
    return TextEmoticonsCore__CustomEmoji_new();
}

TextEmoticonsCore__CustomEmoji* k_textemoticonscore__customemoji_new2(void* param1) {
    return TextEmoticonsCore__CustomEmoji_new2((TextEmoticonsCore__CustomEmoji*)param1);
}

const char* k_textemoticonscore__customemoji_identifier(void* self) {
    libqt_string _str = TextEmoticonsCore__CustomEmoji_Identifier((TextEmoticonsCore__CustomEmoji*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_textemoticonscore__customemoji_set_identifier(void* self, const char* newIdentifier) {
    TextEmoticonsCore__CustomEmoji_SetIdentifier((TextEmoticonsCore__CustomEmoji*)self, qstring(newIdentifier));
}

const char* k_textemoticonscore__customemoji_category(void* self) {
    libqt_string _str = TextEmoticonsCore__CustomEmoji_Category((TextEmoticonsCore__CustomEmoji*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_textemoticonscore__customemoji_is_animated_emoji(void* self) {
    return TextEmoticonsCore__CustomEmoji_IsAnimatedEmoji((TextEmoticonsCore__CustomEmoji*)self);
}

void k_textemoticonscore__customemoji_set_is_animated_emoji(void* self, bool newIsAnimatedEmoji) {
    TextEmoticonsCore__CustomEmoji_SetIsAnimatedEmoji((TextEmoticonsCore__CustomEmoji*)self, newIsAnimatedEmoji);
}

void k_textemoticonscore__customemoji_delete(void* self) {
    TextEmoticonsCore__CustomEmoji_Delete((TextEmoticonsCore__CustomEmoji*)(self));
}
