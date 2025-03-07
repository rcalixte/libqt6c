#include "libqfont.hpp"
#include <string.h>
#include "libqfontinfo.hpp"
#include "libqfontinfo.h"

/// https://doc.qt.io/qt-6/qfontinfo.html

/// q_fontinfo_new constructs a new QFontInfo object.
///
/// ``` QFont* param1 ```
QFontInfo* q_fontinfo_new(void* param1) {
    return QFontInfo_new((QFont*)param1);
}

/// q_fontinfo_new2 constructs a new QFontInfo object.
///
/// ``` QFontInfo* param1 ```
QFontInfo* q_fontinfo_new2(void* param1) {
    return QFontInfo_new2((QFontInfo*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#operator=)
///
/// ``` QFontInfo* self, QFontInfo* param1 ```
void q_fontinfo_operator_assign(void* self, void* param1) {
    QFontInfo_OperatorAssign((QFontInfo*)self, (QFontInfo*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#swap)
///
/// ``` QFontInfo* self, QFontInfo* other ```
void q_fontinfo_swap(void* self, void* other) {
    QFontInfo_Swap((QFontInfo*)self, (QFontInfo*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#family)
///
/// ``` QFontInfo* self ```
const char* q_fontinfo_family(void* self) {
    libqt_string _str = QFontInfo_Family((QFontInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#styleName)
///
/// ``` QFontInfo* self ```
const char* q_fontinfo_style_name(void* self) {
    libqt_string _str = QFontInfo_StyleName((QFontInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#pixelSize)
///
/// ``` QFontInfo* self ```
int32_t q_fontinfo_pixel_size(void* self) {
    return QFontInfo_PixelSize((QFontInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#pointSize)
///
/// ``` QFontInfo* self ```
int32_t q_fontinfo_point_size(void* self) {
    return QFontInfo_PointSize((QFontInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#pointSizeF)
///
/// ``` QFontInfo* self ```
double q_fontinfo_point_size_f(void* self) {
    return QFontInfo_PointSizeF((QFontInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#italic)
///
/// ``` QFontInfo* self ```
bool q_fontinfo_italic(void* self) {
    return QFontInfo_Italic((QFontInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#style)
///
/// ``` QFontInfo* self ```
int64_t q_fontinfo_style(void* self) {
    return QFontInfo_Style((QFontInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#weight)
///
/// ``` QFontInfo* self ```
int32_t q_fontinfo_weight(void* self) {
    return QFontInfo_Weight((QFontInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#bold)
///
/// ``` QFontInfo* self ```
bool q_fontinfo_bold(void* self) {
    return QFontInfo_Bold((QFontInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#underline)
///
/// ``` QFontInfo* self ```
bool q_fontinfo_underline(void* self) {
    return QFontInfo_Underline((QFontInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#overline)
///
/// ``` QFontInfo* self ```
bool q_fontinfo_overline(void* self) {
    return QFontInfo_Overline((QFontInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#strikeOut)
///
/// ``` QFontInfo* self ```
bool q_fontinfo_strike_out(void* self) {
    return QFontInfo_StrikeOut((QFontInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#fixedPitch)
///
/// ``` QFontInfo* self ```
bool q_fontinfo_fixed_pitch(void* self) {
    return QFontInfo_FixedPitch((QFontInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#styleHint)
///
/// ``` QFontInfo* self ```
int64_t q_fontinfo_style_hint(void* self) {
    return QFontInfo_StyleHint((QFontInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#legacyWeight)
///
/// ``` QFontInfo* self ```
int32_t q_fontinfo_legacy_weight(void* self) {
    return QFontInfo_LegacyWeight((QFontInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontinfo.html#exactMatch)
///
/// ``` QFontInfo* self ```
bool q_fontinfo_exact_match(void* self) {
    return QFontInfo_ExactMatch((QFontInfo*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QFontInfo* self ```
void q_fontinfo_delete(void* self) {
    QFontInfo_Delete((QFontInfo*)(self));
}