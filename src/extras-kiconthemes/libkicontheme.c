#include "libkicontheme.hpp"
#include "libkicontheme.h"

KIconTheme* k_icontheme_new(const char* name) {
    return KIconTheme_new(qstring(name));
}

KIconTheme* k_icontheme_new2(const char* name, const char* appName) {
    return KIconTheme_new2(qstring(name), qstring(appName));
}

KIconTheme* k_icontheme_new3(const char* name, const char* appName, const char* basePathHint) {
    return KIconTheme_new3(qstring(name), qstring(appName), qstring(basePathHint));
}

const char* k_icontheme_name(void* self) {
    libqt_string _str = KIconTheme_Name((KIconTheme*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_icontheme_internal_name(void* self) {
    libqt_string _str = KIconTheme_InternalName((KIconTheme*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_icontheme_description(void* self) {
    libqt_string _str = KIconTheme_Description((KIconTheme*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_icontheme_example(void* self) {
    libqt_string _str = KIconTheme_Example((KIconTheme*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_icontheme_screenshot(void* self) {
    libqt_string _str = KIconTheme_Screenshot((KIconTheme*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_icontheme_dir(void* self) {
    libqt_string _str = KIconTheme_Dir((KIconTheme*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_icontheme_inherits(void* self) {
    libqt_list _arr = KIconTheme_Inherits((KIconTheme*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_icontheme_inherits\n");
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

bool k_icontheme_is_valid(void* self) {
    return KIconTheme_IsValid((KIconTheme*)self);
}

bool k_icontheme_is_hidden(void* self) {
    return KIconTheme_IsHidden((KIconTheme*)self);
}

int32_t k_icontheme_depth(void* self) {
    return KIconTheme_Depth((KIconTheme*)self);
}

int32_t k_icontheme_default_size(void* self, int32_t group) {
    return KIconTheme_DefaultSize((KIconTheme*)self, group);
}

libqt_list /* of int */ k_icontheme_query_sizes(void* self, int32_t group) {
    libqt_list _arr = KIconTheme_QuerySizes((KIconTheme*)self, group);
    return _arr;
}

const char** k_icontheme_query_icons(void* self) {
    libqt_list _arr = KIconTheme_QueryIcons((KIconTheme*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_icontheme_query_icons\n");
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

const char** k_icontheme_query_icons2(void* self, int size) {
    libqt_list _arr = KIconTheme_QueryIcons2((KIconTheme*)self, size);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_icontheme_query_icons2\n");
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

const char** k_icontheme_query_icons_by_context(void* self, int size) {
    libqt_list _arr = KIconTheme_QueryIconsByContext((KIconTheme*)self, size);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_icontheme_query_icons_by_context\n");
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

const char* k_icontheme_icon_path(void* self, const char* name, int size, int32_t match) {
    libqt_string _str = KIconTheme_IconPath((KIconTheme*)self, qstring(name), size, match);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_icontheme_icon_path2(void* self, const char* name, int size, int32_t match, double scale) {
    libqt_string _str = KIconTheme_IconPath2((KIconTheme*)self, qstring(name), size, match, scale);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_icontheme_icon_path_by_name(void* self, const char* name, int size, int32_t match) {
    libqt_string _str = KIconTheme_IconPathByName((KIconTheme*)self, qstring(name), size, match);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_icontheme_icon_path_by_name2(void* self, const char* name, int size, int32_t match, double scale) {
    libqt_string _str = KIconTheme_IconPathByName2((KIconTheme*)self, qstring(name), size, match, scale);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_icontheme_has_context(void* self, int32_t context) {
    return KIconTheme_HasContext((KIconTheme*)self, context);
}

bool k_icontheme_follows_color_scheme(void* self) {
    return KIconTheme_FollowsColorScheme((KIconTheme*)self);
}

const char** k_icontheme_list() {
    libqt_list _arr = KIconTheme_List();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_icontheme_list\n");
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

const char* k_icontheme_current() {
    libqt_string _str = KIconTheme_Current();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_icontheme_force_theme_for_tests(const char* themeName) {
    KIconTheme_ForceThemeForTests(qstring(themeName));
}

void k_icontheme_reconfigure() {
    KIconTheme_Reconfigure();
}

const char* k_icontheme_default_theme_name() {
    libqt_string _str = KIconTheme_DefaultThemeName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_icontheme_init_theme() {
    KIconTheme_InitTheme();
}

const char** k_icontheme_query_icons22(void* self, int size, int32_t context) {
    libqt_list _arr = KIconTheme_QueryIcons22((KIconTheme*)self, size, context);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_icontheme_query_icons22\n");
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

const char** k_icontheme_query_icons_by_context2(void* self, int size, int32_t context) {
    libqt_list _arr = KIconTheme_QueryIconsByContext2((KIconTheme*)self, size, context);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_icontheme_query_icons_by_context2\n");
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

void k_icontheme_delete(void* self) {
    KIconTheme_Delete((KIconTheme*)(self));
}
