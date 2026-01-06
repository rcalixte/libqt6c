#include "libkconfig.hpp"
#include "libkconfigbase.hpp"
#include "libkconfiggroup.hpp"
#include "libkdesktopfileaction.hpp"
#include "libkdesktopfile.hpp"
#include "libkdesktopfile.h"

KDesktopFile* k_desktopfile_new(int32_t resourceType, const char* fileName) {
    return KDesktopFile_new(resourceType, qstring(fileName));
}

KDesktopFile* k_desktopfile_new2(const char* fileName) {
    return KDesktopFile_new2(qstring(fileName));
}

bool k_desktopfile_is_desktop_file(const char* path) {
    return KDesktopFile_IsDesktopFile(qstring(path));
}

bool k_desktopfile_is_authorized_desktop_file(const char* path) {
    return KDesktopFile_IsAuthorizedDesktopFile(qstring(path));
}

const char* k_desktopfile_locate_local(const char* path) {
    libqt_string _str = KDesktopFile_LocateLocal(qstring(path));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KConfigGroup* k_desktopfile_desktop_group(void* self) {
    return KDesktopFile_DesktopGroup((KDesktopFile*)self);
}

const char* k_desktopfile_read_type(void* self) {
    libqt_string _str = KDesktopFile_ReadType((KDesktopFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_desktopfile_read_icon(void* self) {
    libqt_string _str = KDesktopFile_ReadIcon((KDesktopFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_desktopfile_read_name(void* self) {
    libqt_string _str = KDesktopFile_ReadName((KDesktopFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_desktopfile_read_comment(void* self) {
    libqt_string _str = KDesktopFile_ReadComment((KDesktopFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_desktopfile_read_generic_name(void* self) {
    libqt_string _str = KDesktopFile_ReadGenericName((KDesktopFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_desktopfile_read_path(void* self) {
    libqt_string _str = KDesktopFile_ReadPath((KDesktopFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_desktopfile_read_url(void* self) {
    libqt_string _str = KDesktopFile_ReadUrl((KDesktopFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_desktopfile_read_actions(void* self) {
    libqt_list _arr = KDesktopFile_ReadActions((KDesktopFile*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_desktopfile_read_actions");
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

const char** k_desktopfile_read_mime_types(void* self) {
    libqt_list _arr = KDesktopFile_ReadMimeTypes((KDesktopFile*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_desktopfile_read_mime_types");
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

KConfigGroup* k_desktopfile_action_group(void* self, const char* group) {
    return KDesktopFile_ActionGroup((KDesktopFile*)self, qstring(group));
}

KConfigGroup* k_desktopfile_action_group2(void* self, const char* group) {
    return KDesktopFile_ActionGroup2((KDesktopFile*)self, qstring(group));
}

bool k_desktopfile_has_action_group(void* self, const char* group) {
    return KDesktopFile_HasActionGroup((KDesktopFile*)self, qstring(group));
}

bool k_desktopfile_has_link_type(void* self) {
    return KDesktopFile_HasLinkType((KDesktopFile*)self);
}

bool k_desktopfile_has_application_type(void* self) {
    return KDesktopFile_HasApplicationType((KDesktopFile*)self);
}

bool k_desktopfile_has_device_type(void* self) {
    return KDesktopFile_HasDeviceType((KDesktopFile*)self);
}

bool k_desktopfile_try_exec(void* self) {
    return KDesktopFile_TryExec((KDesktopFile*)self);
}

const char* k_desktopfile_read_doc_path(void* self) {
    libqt_string _str = KDesktopFile_ReadDocPath((KDesktopFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_desktopfile_no_display(void* self) {
    return KDesktopFile_NoDisplay((KDesktopFile*)self);
}

KDesktopFile* k_desktopfile_copy_to(void* self, const char* file) {
    return KDesktopFile_CopyTo((KDesktopFile*)self, qstring(file));
}

const char* k_desktopfile_file_name(void* self) {
    libqt_string _str = KDesktopFile_FileName((KDesktopFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of KDesktopFileAction* */ k_desktopfile_actions(void* self) {
    libqt_list _arr = KDesktopFile_Actions((KDesktopFile*)self);
    return _arr;
}

int32_t k_desktopfile_location_type(void* self) {
    return KConfig_LocationType((KConfig*)self);
}

const char* k_desktopfile_name(void* self) {
    libqt_string _str = KConfig_Name((KConfig*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_desktopfile_open_flags(void* self) {
    return KConfig_OpenFlags((KConfig*)self);
}

bool k_desktopfile_is_dirty(void* self) {
    return KConfig_IsDirty((KConfig*)self);
}

bool k_desktopfile_is_config_writable(void* self, bool warnUser) {
    return KConfig_IsConfigWritable((KConfig*)self, warnUser);
}

void k_desktopfile_check_update(void* self, const char* id, const char* updateFile) {
    KConfig_CheckUpdate((KConfig*)self, qstring(id), qstring(updateFile));
}

void k_desktopfile_reparse_configuration(void* self) {
    KConfig_ReparseConfiguration((KConfig*)self);
}

void k_desktopfile_add_config_sources(void* self, const char* sources[static 1]) {
    size_t sources_len = libqt_strv_length(sources);
    libqt_string* sources_qstr = (libqt_string*)malloc(sources_len * sizeof(libqt_string));
    if (sources_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_desktopfile_add_config_sources");
        abort();
    }
    for (size_t i = 0; i < sources_len; ++i) {
        sources_qstr[i] = qstring(sources[i]);
    }
    libqt_list sources_list = qlist(sources_qstr, sources_len);
    KConfig_AddConfigSources((KConfig*)self, sources_list);
    free(sources_qstr);
}

const char** k_desktopfile_additional_config_sources(void* self) {
    libqt_list _arr = KConfig_AdditionalConfigSources((KConfig*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_desktopfile_additional_config_sources");
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

const char* k_desktopfile_locale(void* self) {
    libqt_string _str = KConfig_Locale((KConfig*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_desktopfile_set_locale(void* self, const char* aLocale) {
    return KConfig_SetLocale((KConfig*)self, qstring(aLocale));
}

void k_desktopfile_set_read_defaults(void* self, bool b) {
    KConfig_SetReadDefaults((KConfig*)self, b);
}

bool k_desktopfile_read_defaults(void* self) {
    return KConfig_ReadDefaults((KConfig*)self);
}

libqt_map /* of const char* to const char* */ k_desktopfile_entry_map(void* self) {
    // Convert QMap<QString,QString> to libqt_map
    libqt_map _out = KConfig_EntryMap((KConfig*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    const char** _ret_keys = (const char**)malloc(_ret.len * sizeof(const char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Memory allocation failed in k_desktopfile_entry_map");
        abort();
    }
    libqt_string* _out_values = (libqt_string*)_out.values;
    const char** _ret_values = (const char**)malloc(_ret.len * sizeof(const char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Memory allocation failed in k_desktopfile_entry_map");
        free(_out_keys);
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (const char*)_out_keys[i].data;
        _ret_values[i] = (const char*)_out_values[i].data;
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = (void*)_ret_values;
    free(_out_keys);
    free(_out_values);
    return _ret;
}

void k_desktopfile_set_main_config_name(const char* str) {
    KConfig_SetMainConfigName(qstring(str));
}

const char* k_desktopfile_main_config_name() {
    libqt_string _str = KConfig_MainConfigName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KConfig* k_desktopfile_copy_to2(void* self, const char* file, void* config) {
    return KConfig_CopyTo2((KConfig*)self, qstring(file), (KConfig*)config);
}

libqt_map /* of const char* to const char* */ k_desktopfile_entry_map1(void* self, const char* aGroup) {
    // Convert QMap<QString,QString> to libqt_map
    libqt_map _out = KConfig_EntryMap1((KConfig*)self, qstring(aGroup));
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    const char** _ret_keys = (const char**)malloc(_ret.len * sizeof(const char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Memory allocation failed in k_desktopfile_entry_map1");
        abort();
    }
    libqt_string* _out_values = (libqt_string*)_out.values;
    const char** _ret_values = (const char**)malloc(_ret.len * sizeof(const char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Memory allocation failed in k_desktopfile_entry_map1");
        free(_out_keys);
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (const char*)_out_keys[i].data;
        _ret_values[i] = (const char*)_out_values[i].data;
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = (void*)_ret_values;
    free(_out_keys);
    free(_out_values);
    return _ret;
}

bool k_desktopfile_has_group(void* self, const char* group) {
    return KConfigBase_HasGroup((KConfigBase*)self, qstring(group));
}

KConfigGroup* k_desktopfile_group(void* self, const char* group) {
    return KConfigBase_Group((KConfigBase*)self, qstring(group));
}

const KConfigGroup* k_desktopfile_group2(void* self, const char* group) {
    return KConfigBase_Group2((KConfigBase*)self, qstring(group));
}

void k_desktopfile_delete_group(void* self, const char* group) {
    KConfigBase_DeleteGroup((KConfigBase*)self, qstring(group));
}

bool k_desktopfile_is_group_immutable(void* self, const char* group) {
    return KConfigBase_IsGroupImmutable((KConfigBase*)self, qstring(group));
}

void k_desktopfile_delete_group2(void* self, const char* group, int32_t flags) {
    KConfigBase_DeleteGroup2((KConfigBase*)self, qstring(group), flags);
}

bool k_desktopfile_sync(void* self) {
    return KDesktopFile_Sync((KDesktopFile*)self);
}

bool k_desktopfile_qbase_sync(void* self) {
    return KDesktopFile_QBaseSync((KDesktopFile*)self);
}

void k_desktopfile_on_sync(void* self, bool (*callback)()) {
    KDesktopFile_OnSync((KDesktopFile*)self, (intptr_t)callback);
}

void k_desktopfile_mark_as_clean(void* self) {
    KDesktopFile_MarkAsClean((KDesktopFile*)self);
}

void k_desktopfile_qbase_mark_as_clean(void* self) {
    KDesktopFile_QBaseMarkAsClean((KDesktopFile*)self);
}

void k_desktopfile_on_mark_as_clean(void* self, void (*callback)()) {
    KDesktopFile_OnMarkAsClean((KDesktopFile*)self, (intptr_t)callback);
}

int32_t k_desktopfile_access_mode(void* self) {
    return KDesktopFile_AccessMode((KDesktopFile*)self);
}

int32_t k_desktopfile_qbase_access_mode(void* self) {
    return KDesktopFile_QBaseAccessMode((KDesktopFile*)self);
}

void k_desktopfile_on_access_mode(void* self, int32_t (*callback)()) {
    KDesktopFile_OnAccessMode((KDesktopFile*)self, (intptr_t)callback);
}

bool k_desktopfile_is_immutable(void* self) {
    return KDesktopFile_IsImmutable((KDesktopFile*)self);
}

bool k_desktopfile_qbase_is_immutable(void* self) {
    return KDesktopFile_QBaseIsImmutable((KDesktopFile*)self);
}

void k_desktopfile_on_is_immutable(void* self, bool (*callback)()) {
    KDesktopFile_OnIsImmutable((KDesktopFile*)self, (intptr_t)callback);
}

const char** k_desktopfile_group_list(void* self) {
    libqt_list _arr = KDesktopFile_GroupList((KDesktopFile*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_desktopfile_group_list");
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

const char** k_desktopfile_qbase_group_list(void* self) {
    libqt_list _arr = KDesktopFile_QBaseGroupList((KDesktopFile*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_desktopfile_group_list");
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

void k_desktopfile_on_group_list(void* self, const char** (*callback)()) {
    KDesktopFile_OnGroupList((KDesktopFile*)self, (intptr_t)callback);
}

bool k_desktopfile_has_group_impl(void* self, const char* groupName) {
    return KDesktopFile_HasGroupImpl((KDesktopFile*)self, qstring(groupName));
}

bool k_desktopfile_qbase_has_group_impl(void* self, const char* groupName) {
    return KDesktopFile_QBaseHasGroupImpl((KDesktopFile*)self, qstring(groupName));
}

void k_desktopfile_on_has_group_impl(void* self, bool (*callback)(void*, const char*)) {
    KDesktopFile_OnHasGroupImpl((KDesktopFile*)self, (intptr_t)callback);
}

KConfigGroup* k_desktopfile_group_impl(void* self, const char* groupName) {
    return KDesktopFile_GroupImpl((KDesktopFile*)self, qstring(groupName));
}

KConfigGroup* k_desktopfile_qbase_group_impl(void* self, const char* groupName) {
    return KDesktopFile_QBaseGroupImpl((KDesktopFile*)self, qstring(groupName));
}

void k_desktopfile_on_group_impl(void* self, KConfigGroup* (*callback)(void*, const char*)) {
    KDesktopFile_OnGroupImpl((KDesktopFile*)self, (intptr_t)callback);
}

void k_desktopfile_delete_group_impl(void* self, const char* groupName, int32_t flags) {
    KDesktopFile_DeleteGroupImpl((KDesktopFile*)self, qstring(groupName), flags);
}

void k_desktopfile_qbase_delete_group_impl(void* self, const char* groupName, int32_t flags) {
    KDesktopFile_QBaseDeleteGroupImpl((KDesktopFile*)self, qstring(groupName), flags);
}

void k_desktopfile_on_delete_group_impl(void* self, void (*callback)(void*, const char*, int32_t)) {
    KDesktopFile_OnDeleteGroupImpl((KDesktopFile*)self, (intptr_t)callback);
}

bool k_desktopfile_is_group_immutable_impl(void* self, const char* groupName) {
    return KDesktopFile_IsGroupImmutableImpl((KDesktopFile*)self, qstring(groupName));
}

bool k_desktopfile_qbase_is_group_immutable_impl(void* self, const char* groupName) {
    return KDesktopFile_QBaseIsGroupImmutableImpl((KDesktopFile*)self, qstring(groupName));
}

void k_desktopfile_on_is_group_immutable_impl(void* self, bool (*callback)(void*, const char*)) {
    KDesktopFile_OnIsGroupImmutableImpl((KDesktopFile*)self, (intptr_t)callback);
}

void k_desktopfile_virtual_hook(void* self, int id, void* data) {
    KDesktopFile_VirtualHook((KDesktopFile*)self, id, data);
}

void k_desktopfile_qbase_virtual_hook(void* self, int id, void* data) {
    KDesktopFile_QBaseVirtualHook((KDesktopFile*)self, id, data);
}

void k_desktopfile_on_virtual_hook(void* self, void (*callback)(void*, int, void*)) {
    KDesktopFile_OnVirtualHook((KDesktopFile*)self, (intptr_t)callback);
}

void k_desktopfile_delete(void* self) {
    KDesktopFile_Delete((KDesktopFile*)(self));
}
