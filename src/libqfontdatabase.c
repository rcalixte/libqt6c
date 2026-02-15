#include "libqfont.hpp"
#include "libqfontinfo.hpp"
#include "libqfontdatabase.hpp"
#include "libqfontdatabase.h"

QFontDatabase* q_fontdatabase_new(void* other) {
    return QFontDatabase_new((QFontDatabase*)other);
}

QFontDatabase* q_fontdatabase_new2(void* other) {
    return QFontDatabase_new2((QFontDatabase*)other);
}

QFontDatabase* q_fontdatabase_new3() {
    return QFontDatabase_new3();
}

void q_fontdatabase_copy_assign(void* self, void* other) {
    QFontDatabase_CopyAssign((QFontDatabase*)self, (QFontDatabase*)other);
}

void q_fontdatabase_move_assign(void* self, void* other) {
    QFontDatabase_MoveAssign((QFontDatabase*)self, (QFontDatabase*)other);
}

libqt_list /* of int */ q_fontdatabase_standard_sizes() {
    libqt_list _arr = QFontDatabase_StandardSizes();
    return _arr;
}

libqt_list /* of enum QFontDatabase__WritingSystem */ q_fontdatabase_writing_systems() {
    libqt_list _arr = QFontDatabase_WritingSystems();
    return _arr;
}

libqt_list /* of enum QFontDatabase__WritingSystem */ q_fontdatabase_writing_systems2(const char* family) {
    libqt_list _arr = QFontDatabase_WritingSystems2(qstring(family));
    return _arr;
}

const char** q_fontdatabase_families() {
    libqt_list _arr = QFontDatabase_Families();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_fontdatabase_families\n");
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

const char** q_fontdatabase_styles(const char* family) {
    libqt_list _arr = QFontDatabase_Styles(qstring(family));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_fontdatabase_styles\n");
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

libqt_list /* of int */ q_fontdatabase_point_sizes(const char* family) {
    libqt_list _arr = QFontDatabase_PointSizes(qstring(family));
    return _arr;
}

libqt_list /* of int */ q_fontdatabase_smooth_sizes(const char* family, const char* style) {
    libqt_list _arr = QFontDatabase_SmoothSizes(qstring(family), qstring(style));
    return _arr;
}

const char* q_fontdatabase_style_string(void* font) {
    libqt_string _str = QFontDatabase_StyleString((QFont*)font);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_fontdatabase_style_string2(void* fontInfo) {
    libqt_string _str = QFontDatabase_StyleString2((QFontInfo*)fontInfo);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QFont* q_fontdatabase_font(const char* family, const char* style, int pointSize) {
    return QFontDatabase_Font(qstring(family), qstring(style), pointSize);
}

bool q_fontdatabase_is_bitmap_scalable(const char* family) {
    return QFontDatabase_IsBitmapScalable(qstring(family));
}

bool q_fontdatabase_is_smoothly_scalable(const char* family) {
    return QFontDatabase_IsSmoothlyScalable(qstring(family));
}

bool q_fontdatabase_is_scalable(const char* family) {
    return QFontDatabase_IsScalable(qstring(family));
}

bool q_fontdatabase_is_fixed_pitch(const char* family) {
    return QFontDatabase_IsFixedPitch(qstring(family));
}

bool q_fontdatabase_italic(const char* family, const char* style) {
    return QFontDatabase_Italic(qstring(family), qstring(style));
}

bool q_fontdatabase_bold(const char* family, const char* style) {
    return QFontDatabase_Bold(qstring(family), qstring(style));
}

int32_t q_fontdatabase_weight(const char* family, const char* style) {
    return QFontDatabase_Weight(qstring(family), qstring(style));
}

bool q_fontdatabase_has_family(const char* family) {
    return QFontDatabase_HasFamily(qstring(family));
}

bool q_fontdatabase_is_private_family(const char* family) {
    return QFontDatabase_IsPrivateFamily(qstring(family));
}

const char* q_fontdatabase_writing_system_name(int32_t writingSystem) {
    libqt_string _str = QFontDatabase_WritingSystemName(writingSystem);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_fontdatabase_writing_system_sample(int32_t writingSystem) {
    libqt_string _str = QFontDatabase_WritingSystemSample(writingSystem);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_fontdatabase_add_application_font(const char* fileName) {
    return QFontDatabase_AddApplicationFont(qstring(fileName));
}

int32_t q_fontdatabase_add_application_font_from_data(char* fontData) {
    return QFontDatabase_AddApplicationFontFromData(qstring(fontData));
}

const char** q_fontdatabase_application_font_families(int id) {
    libqt_list _arr = QFontDatabase_ApplicationFontFamilies(id);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_fontdatabase_application_font_families\n");
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

bool q_fontdatabase_remove_application_font(int id) {
    return QFontDatabase_RemoveApplicationFont(id);
}

bool q_fontdatabase_remove_all_application_fonts() {
    return QFontDatabase_RemoveAllApplicationFonts();
}

void q_fontdatabase_add_application_fallback_font_family(int32_t script, const char* familyName) {
    QFontDatabase_AddApplicationFallbackFontFamily(script, qstring(familyName));
}

bool q_fontdatabase_remove_application_fallback_font_family(int32_t script, const char* familyName) {
    return QFontDatabase_RemoveApplicationFallbackFontFamily(script, qstring(familyName));
}

void q_fontdatabase_set_application_fallback_font_families(int32_t param1, const char* familyNames[static 1]) {
    size_t familyNames_len = libqt_strv_length(familyNames);
    libqt_string* familyNames_qstr = (libqt_string*)malloc(familyNames_len * sizeof(libqt_string));
    if (familyNames_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_fontdatabase_set_application_fallback_font_families\n");
        abort();
    }
    for (size_t i = 0; i < familyNames_len; ++i) {
        familyNames_qstr[i] = qstring(familyNames[i]);
    }
    libqt_list familyNames_list = qlist(familyNames_qstr, familyNames_len);
    QFontDatabase_SetApplicationFallbackFontFamilies(param1, familyNames_list);
    free(familyNames_qstr);
}

const char** q_fontdatabase_application_fallback_font_families(int32_t script) {
    libqt_list _arr = QFontDatabase_ApplicationFallbackFontFamilies(script);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_fontdatabase_application_fallback_font_families\n");
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

QFont* q_fontdatabase_system_font(int32_t type) {
    return QFontDatabase_SystemFont(type);
}

const char** q_fontdatabase_families1(int32_t writingSystem) {
    libqt_list _arr = QFontDatabase_Families1(writingSystem);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_fontdatabase_families1\n");
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

libqt_list /* of int */ q_fontdatabase_point_sizes2(const char* family, const char* style) {
    libqt_list _arr = QFontDatabase_PointSizes2(qstring(family), qstring(style));
    return _arr;
}

bool q_fontdatabase_is_bitmap_scalable2(const char* family, const char* style) {
    return QFontDatabase_IsBitmapScalable2(qstring(family), qstring(style));
}

bool q_fontdatabase_is_smoothly_scalable2(const char* family, const char* style) {
    return QFontDatabase_IsSmoothlyScalable2(qstring(family), qstring(style));
}

bool q_fontdatabase_is_scalable2(const char* family, const char* style) {
    return QFontDatabase_IsScalable2(qstring(family), qstring(style));
}

bool q_fontdatabase_is_fixed_pitch2(const char* family, const char* style) {
    return QFontDatabase_IsFixedPitch2(qstring(family), qstring(style));
}

void q_fontdatabase_delete(void* self) {
    QFontDatabase_Delete((QFontDatabase*)(self));
}
