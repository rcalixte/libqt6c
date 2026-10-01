#include "libqfont.hpp"
#include "libqfontinfo.hpp"
#include "libqfontinfo.h"

QFontInfo* q_fontinfo_new(const void* param1) {
    return QFontInfo_New((QFont*)param1);
}

QFontInfo* q_fontinfo_new2(const void* param1) {
    return QFontInfo_New2((QFontInfo*)param1);
}

void q_fontinfo_operator_assign(void* self, const void* param1) {
    QFontInfo_OperatorAssign((QFontInfo*)self, (QFontInfo*)param1);
}

void q_fontinfo_swap(void* self, void* other) {
    QFontInfo_Swap((QFontInfo*)self, (QFontInfo*)other);
}

const char* q_fontinfo_family(const void* self) {
    libqt_string _str = QFontInfo_Family((QFontInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_fontinfo_style_name(const void* self) {
    libqt_string _str = QFontInfo_StyleName((QFontInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_fontinfo_pixel_size(const void* self) {
    return QFontInfo_PixelSize((QFontInfo*)self);
}

int32_t q_fontinfo_point_size(const void* self) {
    return QFontInfo_PointSize((QFontInfo*)self);
}

double q_fontinfo_point_size_f(const void* self) {
    return QFontInfo_PointSizeF((QFontInfo*)self);
}

bool q_fontinfo_italic(const void* self) {
    return QFontInfo_Italic((QFontInfo*)self);
}

int32_t q_fontinfo_style(const void* self) {
    return QFontInfo_Style((QFontInfo*)self);
}

int32_t q_fontinfo_weight(const void* self) {
    return QFontInfo_Weight((QFontInfo*)self);
}

bool q_fontinfo_bold(const void* self) {
    return QFontInfo_Bold((QFontInfo*)self);
}

bool q_fontinfo_underline(const void* self) {
    return QFontInfo_Underline((QFontInfo*)self);
}

bool q_fontinfo_overline(const void* self) {
    return QFontInfo_Overline((QFontInfo*)self);
}

bool q_fontinfo_strike_out(const void* self) {
    return QFontInfo_StrikeOut((QFontInfo*)self);
}

bool q_fontinfo_fixed_pitch(const void* self) {
    return QFontInfo_FixedPitch((QFontInfo*)self);
}

int32_t q_fontinfo_style_hint(const void* self) {
    return QFontInfo_StyleHint((QFontInfo*)self);
}

int32_t q_fontinfo_legacy_weight(const void* self) {
    return QFontInfo_LegacyWeight((QFontInfo*)self);
}

bool q_fontinfo_exact_match(const void* self) {
    return QFontInfo_ExactMatch((QFontInfo*)self);
}

void q_fontinfo_delete(void* self) {
    QFontInfo_Delete((QFontInfo*)(self));
}
