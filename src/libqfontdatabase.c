#include "libqfont.hpp"
#include "libqfontinfo.hpp"
#include <string.h>
#include "libqfontdatabase.hpp"
#include "libqfontdatabase.h"

/// https://doc.qt.io/qt-6/qfontdatabase.html

/// q_fontdatabase_new constructs a new QFontDatabase object.
///
/// ``` QFontDatabase* other ```
QFontDatabase* q_fontdatabase_new(void* other) {
    return QFontDatabase_new((QFontDatabase*)other);
}

/// q_fontdatabase_new2 constructs a new QFontDatabase object and invalidates the source QFontDatabase object.
///
/// ``` QFontDatabase* other ```
QFontDatabase* q_fontdatabase_new2(void* other) {
    return QFontDatabase_new2((QFontDatabase*)other);
}

/// q_fontdatabase_new3 constructs a new QFontDatabase object.
///
///
QFontDatabase* q_fontdatabase_new3() {
    return QFontDatabase_new3();
}

/// q_fontdatabase_copy_assign shallow copies `other` into `self`.
///
/// ``` QFontDatabase* self, QFontDatabase* other ```
void q_fontdatabase_copy_assign(void* self, void* other) {
    QFontDatabase_CopyAssign((QFontDatabase*)self, (QFontDatabase*)other);
}

/// q_fontdatabase_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QFontDatabase* self, QFontDatabase* other ```
void q_fontdatabase_move_assign(void* self, void* other) {
    QFontDatabase_MoveAssign((QFontDatabase*)self, (QFontDatabase*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#standardSizes)
///
///
libqt_list /* of int */ q_fontdatabase_standard_sizes() {
    libqt_list _arr = QFontDatabase_StandardSizes();
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#writingSystems)
///
///
libqt_list /* of int64_t */ q_fontdatabase_writing_systems() {
    libqt_list _arr = QFontDatabase_WritingSystems();
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#writingSystems)
///
/// ``` const char* family ```
libqt_list /* of int64_t */ q_fontdatabase_writing_systems_with_family(const char* family) {
    libqt_list _arr = QFontDatabase_WritingSystemsWithFamily(qstring(family));
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#families)
///
///
const char** q_fontdatabase_families() {
    libqt_list _arr = QFontDatabase_Families();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#styles)
///
/// ``` const char* family ```
const char** q_fontdatabase_styles(const char* family) {
    libqt_list _arr = QFontDatabase_Styles(qstring(family));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#pointSizes)
///
/// ``` const char* family ```
libqt_list /* of int */ q_fontdatabase_point_sizes(const char* family) {
    libqt_list _arr = QFontDatabase_PointSizes(qstring(family));
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#smoothSizes)
///
/// ``` const char* family, const char* style ```
libqt_list /* of int */ q_fontdatabase_smooth_sizes(const char* family, const char* style) {
    libqt_list _arr = QFontDatabase_SmoothSizes(qstring(family), qstring(style));
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#styleString)
///
/// ``` QFont* font ```
const char* q_fontdatabase_style_string(void* font) {
    libqt_string _str = QFontDatabase_StyleString((QFont*)font);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#styleString)
///
/// ``` QFontInfo* fontInfo ```
const char* q_fontdatabase_style_string_with_font_info(void* fontInfo) {
    libqt_string _str = QFontDatabase_StyleStringWithFontInfo((QFontInfo*)fontInfo);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#font)
///
/// ``` const char* family, const char* style, int pointSize ```
QFont* q_fontdatabase_font(const char* family, const char* style, int pointSize) {
    return QFontDatabase_Font(qstring(family), qstring(style), pointSize);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#isBitmapScalable)
///
/// ``` const char* family ```
bool q_fontdatabase_is_bitmap_scalable(const char* family) {
    return QFontDatabase_IsBitmapScalable(qstring(family));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#isSmoothlyScalable)
///
/// ``` const char* family ```
bool q_fontdatabase_is_smoothly_scalable(const char* family) {
    return QFontDatabase_IsSmoothlyScalable(qstring(family));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#isScalable)
///
/// ``` const char* family ```
bool q_fontdatabase_is_scalable(const char* family) {
    return QFontDatabase_IsScalable(qstring(family));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#isFixedPitch)
///
/// ``` const char* family ```
bool q_fontdatabase_is_fixed_pitch(const char* family) {
    return QFontDatabase_IsFixedPitch(qstring(family));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#italic)
///
/// ``` const char* family, const char* style ```
bool q_fontdatabase_italic(const char* family, const char* style) {
    return QFontDatabase_Italic(qstring(family), qstring(style));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#bold)
///
/// ``` const char* family, const char* style ```
bool q_fontdatabase_bold(const char* family, const char* style) {
    return QFontDatabase_Bold(qstring(family), qstring(style));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#weight)
///
/// ``` const char* family, const char* style ```
int32_t q_fontdatabase_weight(const char* family, const char* style) {
    return QFontDatabase_Weight(qstring(family), qstring(style));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#hasFamily)
///
/// ``` const char* family ```
bool q_fontdatabase_has_family(const char* family) {
    return QFontDatabase_HasFamily(qstring(family));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#isPrivateFamily)
///
/// ``` const char* family ```
bool q_fontdatabase_is_private_family(const char* family) {
    return QFontDatabase_IsPrivateFamily(qstring(family));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#writingSystemName)
///
/// ``` enum QFontDatabase__WritingSystem writingSystem ```
const char* q_fontdatabase_writing_system_name(int64_t writingSystem) {
    libqt_string _str = QFontDatabase_WritingSystemName(writingSystem);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#writingSystemSample)
///
/// ``` enum QFontDatabase__WritingSystem writingSystem ```
const char* q_fontdatabase_writing_system_sample(int64_t writingSystem) {
    libqt_string _str = QFontDatabase_WritingSystemSample(writingSystem);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#addApplicationFont)
///
/// ``` const char* fileName ```
int32_t q_fontdatabase_add_application_font(const char* fileName) {
    return QFontDatabase_AddApplicationFont(qstring(fileName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#addApplicationFontFromData)
///
/// ``` const char* fontData ```
int32_t q_fontdatabase_add_application_font_from_data(const char* fontData) {
    return QFontDatabase_AddApplicationFontFromData(qstring(fontData));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#applicationFontFamilies)
///
/// ``` int id ```
const char** q_fontdatabase_application_font_families(int id) {
    libqt_list _arr = QFontDatabase_ApplicationFontFamilies(id);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#removeApplicationFont)
///
/// ``` int id ```
bool q_fontdatabase_remove_application_font(int id) {
    return QFontDatabase_RemoveApplicationFont(id);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#removeAllApplicationFonts)
///
///
bool q_fontdatabase_remove_all_application_fonts() {
    return QFontDatabase_RemoveAllApplicationFonts();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#systemFont)
///
/// ``` enum QFontDatabase__SystemFont typeVal ```
QFont* q_fontdatabase_system_font(int64_t typeVal) {
    return QFontDatabase_SystemFont(typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#families)
///
/// ``` enum QFontDatabase__WritingSystem writingSystem ```
const char** q_fontdatabase_families1(int64_t writingSystem) {
    libqt_list _arr = QFontDatabase_Families1(writingSystem);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#pointSizes)
///
/// ``` const char* family, const char* style ```
libqt_list /* of int */ q_fontdatabase_point_sizes2(const char* family, const char* style) {
    libqt_list _arr = QFontDatabase_PointSizes2(qstring(family), qstring(style));
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#isBitmapScalable)
///
/// ``` const char* family, const char* style ```
bool q_fontdatabase_is_bitmap_scalable2(const char* family, const char* style) {
    return QFontDatabase_IsBitmapScalable2(qstring(family), qstring(style));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#isSmoothlyScalable)
///
/// ``` const char* family, const char* style ```
bool q_fontdatabase_is_smoothly_scalable2(const char* family, const char* style) {
    return QFontDatabase_IsSmoothlyScalable2(qstring(family), qstring(style));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#isScalable)
///
/// ``` const char* family, const char* style ```
bool q_fontdatabase_is_scalable2(const char* family, const char* style) {
    return QFontDatabase_IsScalable2(qstring(family), qstring(style));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfontdatabase.html#isFixedPitch)
///
/// ``` const char* family, const char* style ```
bool q_fontdatabase_is_fixed_pitch2(const char* family, const char* style) {
    return QFontDatabase_IsFixedPitch2(qstring(family), qstring(style));
}

/// Delete this object from C++ memory.
///
/// ``` QFontDatabase* self ```
void q_fontdatabase_delete(void* self) {
    QFontDatabase_Delete((QFontDatabase*)(self));
}