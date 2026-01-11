#include "libkconfigbase.hpp"
#include "libkconfiggroup.hpp"
#include "libkconfig.hpp"
#include "libkconfig.h"

KConfig* k_config_new() {
    return KConfig_new();
}

KConfig* k_config_new2(const char* file, const char* backend) {
    return KConfig_new2(qstring(file), qstring(backend));
}

KConfig* k_config_new3(const char* file) {
    return KConfig_new3(qstring(file));
}

KConfig* k_config_new4(const char* file, int32_t mode) {
    return KConfig_new4(qstring(file), mode);
}

KConfig* k_config_new5(const char* file, int32_t mode, int32_t type) {
    return KConfig_new5(qstring(file), mode, type);
}

KConfig* k_config_new6(const char* file, const char* backend, int32_t type) {
    return KConfig_new6(qstring(file), qstring(backend), type);
}

int32_t k_config_location_type(void* self) {
    return KConfig_LocationType((KConfig*)self);
}

const char* k_config_name(void* self) {
    libqt_string _str = KConfig_Name((KConfig*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_config_open_flags(void* self) {
    return KConfig_OpenFlags((KConfig*)self);
}

bool k_config_sync(void* self) {
    return KConfig_Sync((KConfig*)self);
}

void k_config_on_sync(void* self, bool (*callback)()) {
    KConfig_OnSync((KConfig*)self, (intptr_t)callback);
}

bool k_config_qbase_sync(void* self) {
    return KConfig_QBaseSync((KConfig*)self);
}

bool k_config_is_dirty(void* self) {
    return KConfig_IsDirty((KConfig*)self);
}

void k_config_mark_as_clean(void* self) {
    KConfig_MarkAsClean((KConfig*)self);
}

void k_config_on_mark_as_clean(void* self, void (*callback)()) {
    KConfig_OnMarkAsClean((KConfig*)self, (intptr_t)callback);
}

void k_config_qbase_mark_as_clean(void* self) {
    KConfig_QBaseMarkAsClean((KConfig*)self);
}

int32_t k_config_access_mode(void* self) {
    return KConfig_AccessMode((KConfig*)self);
}

void k_config_on_access_mode(void* self, int32_t (*callback)()) {
    KConfig_OnAccessMode((KConfig*)self, (intptr_t)callback);
}

int32_t k_config_qbase_access_mode(void* self) {
    return KConfig_QBaseAccessMode((KConfig*)self);
}

bool k_config_is_config_writable(void* self, bool warnUser) {
    return KConfig_IsConfigWritable((KConfig*)self, warnUser);
}

KConfig* k_config_copy_to(void* self, const char* file) {
    return KConfig_CopyTo((KConfig*)self, qstring(file));
}

void k_config_check_update(void* self, const char* id, const char* updateFile) {
    KConfig_CheckUpdate((KConfig*)self, qstring(id), qstring(updateFile));
}

void k_config_reparse_configuration(void* self) {
    KConfig_ReparseConfiguration((KConfig*)self);
}

void k_config_add_config_sources(void* self, const char* sources[static 1]) {
    size_t sources_len = libqt_strv_length(sources);
    libqt_string* sources_qstr = (libqt_string*)malloc(sources_len * sizeof(libqt_string));
    if (sources_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_config_add_config_sources");
        abort();
    }
    for (size_t i = 0; i < sources_len; ++i) {
        sources_qstr[i] = qstring(sources[i]);
    }
    libqt_list sources_list = qlist(sources_qstr, sources_len);
    KConfig_AddConfigSources((KConfig*)self, sources_list);
    free(sources_qstr);
}

const char** k_config_additional_config_sources(void* self) {
    libqt_list _arr = KConfig_AdditionalConfigSources((KConfig*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_config_additional_config_sources");
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

const char* k_config_locale(void* self) {
    libqt_string _str = KConfig_Locale((KConfig*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_config_set_locale(void* self, const char* aLocale) {
    return KConfig_SetLocale((KConfig*)self, qstring(aLocale));
}

void k_config_set_read_defaults(void* self, bool b) {
    KConfig_SetReadDefaults((KConfig*)self, b);
}

bool k_config_read_defaults(void* self) {
    return KConfig_ReadDefaults((KConfig*)self);
}

bool k_config_is_immutable(void* self) {
    return KConfig_IsImmutable((KConfig*)self);
}

void k_config_on_is_immutable(void* self, bool (*callback)()) {
    KConfig_OnIsImmutable((KConfig*)self, (intptr_t)callback);
}

bool k_config_qbase_is_immutable(void* self) {
    return KConfig_QBaseIsImmutable((KConfig*)self);
}

const char** k_config_group_list(void* self) {
    libqt_list _arr = KConfig_GroupList((KConfig*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_config_group_list");
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

void k_config_on_group_list(void* self, const char** (*callback)()) {
    KConfig_OnGroupList((KConfig*)self, (intptr_t)callback);
}

const char** k_config_qbase_group_list(void* self) {
    libqt_list _arr = KConfig_QBaseGroupList((KConfig*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_config_group_list");
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

libqt_map /* of const char* to const char* */ k_config_entry_map(void* self) {
    // Convert QMap<QString,QString> to libqt_map
    libqt_map _out = KConfig_EntryMap((KConfig*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string keys in k_config_entry_map");
        abort();
    }
    libqt_string* _out_values = (libqt_string*)_out.values;
    const char** _ret_values = (const char**)malloc(_ret.len * sizeof(const char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_config_entry_map");
        free(_out.keys);
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (char*)malloc(_out_keys[i].len + 1);
        if (_ret_keys[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
            }
            free(_ret_keys);
            fprintf(stderr, "Failed to allocate memory for map keys in k_config_entry_map");
            abort();
        }
        memcpy(_ret_keys[i], _out_keys[i].data, _out_keys[i].len);
        _ret_keys[i][_out_keys[i].len] = '\0';
        _ret_values[i] = (const char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
                libqt_free(_ret_values[j]);
            }
            free(_ret_keys);
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_config_entry_map");
            abort();
        }
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_keys[i].data);
        libqt_free(_out_values[i].data);
    }
    free(_out.keys);
    free(_out.values);
    return _ret;
}

void k_config_set_main_config_name(const char* str) {
    KConfig_SetMainConfigName(qstring(str));
}

const char* k_config_main_config_name() {
    libqt_string _str = KConfig_MainConfigName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_config_has_group_impl(void* self, const char* groupName) {
    return KConfig_HasGroupImpl((KConfig*)self, qstring(groupName));
}

void k_config_on_has_group_impl(void* self, bool (*callback)(void*, const char*)) {
    KConfig_OnHasGroupImpl((KConfig*)self, (intptr_t)callback);
}

bool k_config_qbase_has_group_impl(void* self, const char* groupName) {
    return KConfig_QBaseHasGroupImpl((KConfig*)self, qstring(groupName));
}

KConfigGroup* k_config_group_impl(void* self, const char* groupName) {
    return KConfig_GroupImpl((KConfig*)self, qstring(groupName));
}

void k_config_on_group_impl(void* self, KConfigGroup* (*callback)(void*, const char*)) {
    KConfig_OnGroupImpl((KConfig*)self, (intptr_t)callback);
}

KConfigGroup* k_config_qbase_group_impl(void* self, const char* groupName) {
    return KConfig_QBaseGroupImpl((KConfig*)self, qstring(groupName));
}

const KConfigGroup* k_config_group_impl2(void* self, const char* groupName) {
    return KConfig_GroupImpl2((KConfig*)self, qstring(groupName));
}

void k_config_on_group_impl2(void* self, const KConfigGroup* (*callback)(void*, const char*)) {
    KConfig_OnGroupImpl2((KConfig*)self, (intptr_t)callback);
}

const KConfigGroup* k_config_qbase_group_impl2(void* self, const char* groupName) {
    return KConfig_QBaseGroupImpl2((KConfig*)self, qstring(groupName));
}

void k_config_delete_group_impl(void* self, const char* groupName, int32_t flags) {
    KConfig_DeleteGroupImpl((KConfig*)self, qstring(groupName), flags);
}

void k_config_on_delete_group_impl(void* self, void (*callback)(void*, const char*, int32_t)) {
    KConfig_OnDeleteGroupImpl((KConfig*)self, (intptr_t)callback);
}

void k_config_qbase_delete_group_impl(void* self, const char* groupName, int32_t flags) {
    KConfig_QBaseDeleteGroupImpl((KConfig*)self, qstring(groupName), flags);
}

bool k_config_is_group_immutable_impl(void* self, const char* groupName) {
    return KConfig_IsGroupImmutableImpl((KConfig*)self, qstring(groupName));
}

void k_config_on_is_group_immutable_impl(void* self, bool (*callback)(void*, const char*)) {
    KConfig_OnIsGroupImmutableImpl((KConfig*)self, (intptr_t)callback);
}

bool k_config_qbase_is_group_immutable_impl(void* self, const char* groupName) {
    return KConfig_QBaseIsGroupImmutableImpl((KConfig*)self, qstring(groupName));
}

void k_config_virtual_hook(void* self, int id, void* data) {
    KConfig_VirtualHook((KConfig*)self, id, data);
}

void k_config_on_virtual_hook(void* self, void (*callback)(void*, int, void*)) {
    KConfig_OnVirtualHook((KConfig*)self, (intptr_t)callback);
}

void k_config_qbase_virtual_hook(void* self, int id, void* data) {
    KConfig_QBaseVirtualHook((KConfig*)self, id, data);
}

KConfig* k_config_copy_to2(void* self, const char* file, void* config) {
    return KConfig_CopyTo2((KConfig*)self, qstring(file), (KConfig*)config);
}

libqt_map /* of const char* to const char* */ k_config_entry_map1(void* self, const char* aGroup) {
    // Convert QMap<QString,QString> to libqt_map
    libqt_map _out = KConfig_EntryMap1((KConfig*)self, qstring(aGroup));
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string keys in k_config_entry_map1");
        abort();
    }
    libqt_string* _out_values = (libqt_string*)_out.values;
    const char** _ret_values = (const char**)malloc(_ret.len * sizeof(const char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_config_entry_map1");
        free(_out.keys);
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (char*)malloc(_out_keys[i].len + 1);
        if (_ret_keys[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
            }
            free(_ret_keys);
            fprintf(stderr, "Failed to allocate memory for map keys in k_config_entry_map1");
            abort();
        }
        memcpy(_ret_keys[i], _out_keys[i].data, _out_keys[i].len);
        _ret_keys[i][_out_keys[i].len] = '\0';
        _ret_values[i] = (const char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
                libqt_free(_ret_values[j]);
            }
            free(_ret_keys);
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_config_entry_map1");
            abort();
        }
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_keys[i].data);
        libqt_free(_out_values[i].data);
    }
    free(_out.keys);
    free(_out.values);
    return _ret;
}

bool k_config_has_group(void* self, const char* group) {
    return KConfigBase_HasGroup((KConfigBase*)self, qstring(group));
}

KConfigGroup* k_config_group(void* self, const char* group) {
    return KConfigBase_Group((KConfigBase*)self, qstring(group));
}

const KConfigGroup* k_config_group2(void* self, const char* group) {
    return KConfigBase_Group2((KConfigBase*)self, qstring(group));
}

void k_config_delete_group(void* self, const char* group) {
    KConfigBase_DeleteGroup((KConfigBase*)self, qstring(group));
}

bool k_config_is_group_immutable(void* self, const char* group) {
    return KConfigBase_IsGroupImmutable((KConfigBase*)self, qstring(group));
}

void k_config_delete_group2(void* self, const char* group, int32_t flags) {
    KConfigBase_DeleteGroup2((KConfigBase*)self, qstring(group), flags);
}

void k_config_delete(void* self) {
    KConfig_Delete((KConfig*)(self));
}
