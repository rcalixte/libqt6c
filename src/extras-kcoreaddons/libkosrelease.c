#include "libkosrelease.hpp"
#include "libkosrelease.h"

KOSRelease* k_osrelease_new() {
    return KOSRelease_new();
}

KOSRelease* k_osrelease_new2(const char* filePath) {
    return KOSRelease_new2(qstring(filePath));
}

const char* k_osrelease_name(void* self) {
    libqt_string _str = KOSRelease_Name((KOSRelease*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_osrelease_version(void* self) {
    libqt_string _str = KOSRelease_Version((KOSRelease*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_osrelease_id(void* self) {
    libqt_string _str = KOSRelease_Id((KOSRelease*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_osrelease_id_like(void* self) {
    libqt_list _arr = KOSRelease_IdLike((KOSRelease*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_osrelease_id_like");
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

const char* k_osrelease_version_codename(void* self) {
    libqt_string _str = KOSRelease_VersionCodename((KOSRelease*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_osrelease_version_id(void* self) {
    libqt_string _str = KOSRelease_VersionId((KOSRelease*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_osrelease_pretty_name(void* self) {
    libqt_string _str = KOSRelease_PrettyName((KOSRelease*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_osrelease_ansi_color(void* self) {
    libqt_string _str = KOSRelease_AnsiColor((KOSRelease*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_osrelease_cpe_name(void* self) {
    libqt_string _str = KOSRelease_CpeName((KOSRelease*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_osrelease_home_url(void* self) {
    libqt_string _str = KOSRelease_HomeUrl((KOSRelease*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_osrelease_documentation_url(void* self) {
    libqt_string _str = KOSRelease_DocumentationUrl((KOSRelease*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_osrelease_support_url(void* self) {
    libqt_string _str = KOSRelease_SupportUrl((KOSRelease*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_osrelease_bug_report_url(void* self) {
    libqt_string _str = KOSRelease_BugReportUrl((KOSRelease*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_osrelease_privacy_policy_url(void* self) {
    libqt_string _str = KOSRelease_PrivacyPolicyUrl((KOSRelease*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_osrelease_build_id(void* self) {
    libqt_string _str = KOSRelease_BuildId((KOSRelease*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_osrelease_variant(void* self) {
    libqt_string _str = KOSRelease_Variant((KOSRelease*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_osrelease_variant_id(void* self) {
    libqt_string _str = KOSRelease_VariantId((KOSRelease*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_osrelease_logo(void* self) {
    libqt_string _str = KOSRelease_Logo((KOSRelease*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_osrelease_extra_keys(void* self) {
    libqt_list _arr = KOSRelease_ExtraKeys((KOSRelease*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_osrelease_extra_keys");
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

const char* k_osrelease_extra_value(void* self, const char* key) {
    libqt_string _str = KOSRelease_ExtraValue((KOSRelease*)self, qstring(key));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_osrelease_delete(void* self) {
    KOSRelease_Delete((KOSRelease*)(self));
}
