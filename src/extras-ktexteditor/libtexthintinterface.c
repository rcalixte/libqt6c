#include "libcursor.hpp"
#include "libview.hpp"
#include "libtexthintinterface.hpp"
#include "libtexthintinterface.h"

KTextEditor__TextHintProvider* k_texteditor__texthintprovider_new() {
    return KTextEditor__TextHintProvider_new();
}

const char* k_texteditor__texthintprovider_text_hint(void* self, void* view, void* position) {
    libqt_string _str = KTextEditor__TextHintProvider_TextHint((KTextEditor__TextHintProvider*)self, (KTextEditor__View*)view, (KTextEditor__Cursor*)position);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__texthintprovider_on_text_hint(void* self, const char* (*callback)(void*, void*, void*)) {
    KTextEditor__TextHintProvider_OnTextHint((KTextEditor__TextHintProvider*)self, (intptr_t)callback);
}

const char* k_texteditor__texthintprovider_super_text_hint(void* self, void* view, void* position) {
    libqt_string _str = KTextEditor__TextHintProvider_SuperTextHint((KTextEditor__TextHintProvider*)self, (KTextEditor__View*)view, (KTextEditor__Cursor*)position);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_texteditor__texthintprovider_delete(void* self) {
    KTextEditor__TextHintProvider_Delete((KTextEditor__TextHintProvider*)(self));
}
