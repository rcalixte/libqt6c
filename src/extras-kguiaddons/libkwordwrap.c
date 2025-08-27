#include "../libqfontmetrics.hpp"
#include "../libqpainter.hpp"
#include "../libqrect.hpp"
#include "libkwordwrap.hpp"
#include "libkwordwrap.h"

KWordWrap* k_wordwrap_new(void* other) {
    return KWordWrap_new((KWordWrap*)other);
}

KWordWrap* k_wordwrap_format_text(void* fm, void* r, int flags, const char* str) {
    return KWordWrap_FormatText((QFontMetrics*)fm, (QRect*)r, flags, qstring(str));
}

QRect* k_wordwrap_bounding_rect(void* self) {
    return KWordWrap_BoundingRect((KWordWrap*)self);
}

const char* k_wordwrap_wrapped_string(void* self) {
    libqt_string _str = KWordWrap_WrappedString((KWordWrap*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_wordwrap_truncated_string(void* self) {
    libqt_string _str = KWordWrap_TruncatedString((KWordWrap*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_wordwrap_draw_text(void* self, void* painter, int x, int y) {
    KWordWrap_DrawText((KWordWrap*)self, (QPainter*)painter, x, y);
}

void k_wordwrap_operator_assign(void* self, void* other) {
    KWordWrap_OperatorAssign((KWordWrap*)self, (KWordWrap*)other);
}

void k_wordwrap_draw_fadeout_text(void* p, int x, int y, int maxW, const char* t) {
    KWordWrap_DrawFadeoutText((QPainter*)p, x, y, maxW, qstring(t));
}

void k_wordwrap_draw_truncate_text(void* p, int x, int y, int maxW, const char* t) {
    KWordWrap_DrawTruncateText((QPainter*)p, x, y, maxW, qstring(t));
}

KWordWrap* k_wordwrap_format_text5(void* fm, void* r, int flags, const char* str, int lenVal) {
    return KWordWrap_FormatText5((QFontMetrics*)fm, (QRect*)r, flags, qstring(str), lenVal);
}

const char* k_wordwrap_truncated_string1(void* self, bool dots) {
    libqt_string _str = KWordWrap_TruncatedString1((KWordWrap*)self, dots);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_wordwrap_draw_text4(void* self, void* painter, int x, int y, int flags) {
    KWordWrap_DrawText4((KWordWrap*)self, (QPainter*)painter, x, y, flags);
}

void k_wordwrap_delete(void* self) {
    KWordWrap_Delete((KWordWrap*)(self));
}
