#include "../libqobject.hpp"
#include "libkemailsettings.hpp"
#include "libkemailsettings.h"

KEMailSettings* k_emailsettings_new() {
    return KEMailSettings_new();
}

const char* k_emailsettings_tr(const char* sourceText) {
    libqt_string _str = QObject_Tr(sourceText);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_emailsettings_profiles(void* self) {
    libqt_list _arr = KEMailSettings_Profiles((KEMailSettings*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_emailsettings_profiles");
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

void k_emailsettings_set_profile(void* self, const char* s) {
    KEMailSettings_SetProfile((KEMailSettings*)self, qstring(s));
}

const char* k_emailsettings_default_profile_name(void* self) {
    libqt_string _str = KEMailSettings_DefaultProfileName((KEMailSettings*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_emailsettings_set_default(void* self, const char* def) {
    KEMailSettings_SetDefault((KEMailSettings*)self, qstring(def));
}

const char* k_emailsettings_get_setting(void* self, int32_t s) {
    libqt_string _str = KEMailSettings_GetSetting((KEMailSettings*)self, s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_emailsettings_set_setting(void* self, int32_t s, const char* v) {
    KEMailSettings_SetSetting((KEMailSettings*)self, s, qstring(v));
}

const char* k_emailsettings_tr2(const char* sourceText, const char* disambiguation) {
    libqt_string _str = QObject_Tr2(sourceText, disambiguation);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_emailsettings_tr3(const char* sourceText, const char* disambiguation, int n) {
    libqt_string _str = QObject_Tr3(sourceText, disambiguation, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_emailsettings_delete(void* self) {
    KEMailSettings_Delete((KEMailSettings*)(self));
}
