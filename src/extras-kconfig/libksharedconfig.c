#include "libkconfig.hpp"
#include "libkconfigbase.hpp"
#include "../libqshareddata.hpp"
#include "libksharedconfig.hpp"
#include "libksharedconfig.h"

int32_t k_sharedconfig_location_type(void* self) {
    return KConfig_LocationType((KConfig*)self);
}

const char* k_sharedconfig_name(void* self) {
    libqt_string _str = KConfig_Name((KConfig*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_sharedconfig_open_flags(void* self) {
    return KConfig_OpenFlags((KConfig*)self);
}

bool k_sharedconfig_sync(void* self) {
    return KConfig_Sync((KConfig*)self);
}

bool k_sharedconfig_is_dirty(void* self) {
    return KConfig_IsDirty((KConfig*)self);
}

void k_sharedconfig_mark_as_clean(void* self) {
    KConfig_MarkAsClean((KConfig*)self);
}

int32_t k_sharedconfig_access_mode(void* self) {
    return KConfig_AccessMode((KConfig*)self);
}

bool k_sharedconfig_is_config_writable(void* self, bool warnUser) {
    return KConfig_IsConfigWritable((KConfig*)self, warnUser);
}

KConfig* k_sharedconfig_copy_to(void* self, const char* file) {
    return KConfig_CopyTo((KConfig*)self, qstring(file));
}

void k_sharedconfig_check_update(void* self, const char* id, const char* updateFile) {
    KConfig_CheckUpdate((KConfig*)self, qstring(id), qstring(updateFile));
}

void k_sharedconfig_reparse_configuration(void* self) {
    KConfig_ReparseConfiguration((KConfig*)self);
}

void k_sharedconfig_add_config_sources(void* self, const char* sources[]) {
    size_t sources_len = libqt_strv_length(sources);
    libqt_string* sources_qstr = (libqt_string*)malloc(sources_len * sizeof(libqt_string));
    if (sources_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_sharedconfig_add_config_sources");
        abort();
    }
    for (size_t i = 0; i < sources_len; ++i) {
        sources_qstr[i] = qstring(sources[i]);
    }
    libqt_list sources_list = qlist(sources_qstr, sources_len);
    KConfig_AddConfigSources((KConfig*)self, sources_list);
    free(sources_qstr);
}

const char** k_sharedconfig_additional_config_sources(void* self) {
    libqt_list _arr = KConfig_AdditionalConfigSources((KConfig*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_sharedconfig_additional_config_sources");
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

const char* k_sharedconfig_locale(void* self) {
    libqt_string _str = KConfig_Locale((KConfig*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_sharedconfig_set_locale(void* self, const char* aLocale) {
    return KConfig_SetLocale((KConfig*)self, qstring(aLocale));
}

void k_sharedconfig_set_read_defaults(void* self, bool b) {
    KConfig_SetReadDefaults((KConfig*)self, b);
}

bool k_sharedconfig_read_defaults(void* self) {
    return KConfig_ReadDefaults((KConfig*)self);
}

bool k_sharedconfig_is_immutable(void* self) {
    return KConfig_IsImmutable((KConfig*)self);
}

const char** k_sharedconfig_group_list(void* self) {
    libqt_list _arr = KConfig_GroupList((KConfig*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_sharedconfig_group_list");
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

libqt_map /* of const char* to const char* */ k_sharedconfig_entry_map(void* self) {
    return KConfig_EntryMap((KConfig*)self);
}

void k_sharedconfig_set_main_config_name(const char* str) {
    KConfig_SetMainConfigName(qstring(str));
}

const char* k_sharedconfig_main_config_name() {
    libqt_string _str = KConfig_MainConfigName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KConfig* k_sharedconfig_copy_to2(void* self, const char* file, void* config) {
    return KConfig_CopyTo2((KConfig*)self, qstring(file), (KConfig*)config);
}

libqt_map /* of const char* to const char* */ k_sharedconfig_entry_map1(void* self, const char* aGroup) {
    return KConfig_EntryMap1((KConfig*)self, qstring(aGroup));
}

bool k_sharedconfig_has_group(void* self, const char* group) {
    return KConfigBase_HasGroup((KConfigBase*)self, qstring(group));
}

KConfigGroup* k_sharedconfig_group(void* self, const char* group) {
    return KConfigBase_Group((KConfigBase*)self, qstring(group));
}

const KConfigGroup* k_sharedconfig_group2(void* self, const char* group) {
    return KConfigBase_Group2((KConfigBase*)self, qstring(group));
}

void k_sharedconfig_delete_group(void* self, const char* group) {
    KConfigBase_DeleteGroup((KConfigBase*)self, qstring(group));
}

bool k_sharedconfig_is_group_immutable(void* self, const char* group) {
    return KConfigBase_IsGroupImmutable((KConfigBase*)self, qstring(group));
}

void k_sharedconfig_delete_group2(void* self, const char* group, int32_t flags) {
    KConfigBase_DeleteGroup2((KConfigBase*)self, qstring(group), flags);
}
