#include "libcursor.hpp"
#include "libinlinenoteprovider.hpp"
#include "libview.hpp"
#include "../libqfont.hpp"
#include "libinlinenote.hpp"
#include "libinlinenote.h"

KTextEditor__InlineNote* k_texteditor__inlinenote_new(void* other) {
    return KTextEditor__InlineNote_new((KTextEditor__InlineNote*)other);
}

KTextEditor__InlineNote* k_texteditor__inlinenote_new2(void* other) {
    return KTextEditor__InlineNote_new2((KTextEditor__InlineNote*)other);
}

double k_texteditor__inlinenote_width(void* self) {
    return KTextEditor__InlineNote_Width((KTextEditor__InlineNote*)self);
}

KTextEditor__InlineNoteProvider* k_texteditor__inlinenote_provider(void* self) {
    return KTextEditor__InlineNote_Provider((KTextEditor__InlineNote*)self);
}

const KTextEditor__View* k_texteditor__inlinenote_view(void* self) {
    return KTextEditor__InlineNote_View((KTextEditor__InlineNote*)self);
}

KTextEditor__Cursor* k_texteditor__inlinenote_position(void* self) {
    return KTextEditor__InlineNote_Position((KTextEditor__InlineNote*)self);
}

int32_t k_texteditor__inlinenote_index(void* self) {
    return KTextEditor__InlineNote_Index((KTextEditor__InlineNote*)self);
}

bool k_texteditor__inlinenote_under_mouse(void* self) {
    return KTextEditor__InlineNote_UnderMouse((KTextEditor__InlineNote*)self);
}

QFont* k_texteditor__inlinenote_font(void* self) {
    return KTextEditor__InlineNote_Font((KTextEditor__InlineNote*)self);
}

int32_t k_texteditor__inlinenote_line_height(void* self) {
    return KTextEditor__InlineNote_LineHeight((KTextEditor__InlineNote*)self);
}

void k_texteditor__inlinenote_delete(void* self) {
    KTextEditor__InlineNote_Delete((KTextEditor__InlineNote*)(self));
}
