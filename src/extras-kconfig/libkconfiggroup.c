#include "libkconfig.hpp"
#include "libkconfigbase.hpp"
#include "../libqvariant.hpp"
#include "libkconfiggroup.hpp"
#include "libkconfiggroup.h"

KConfigGroup* k_configgroup_new() {
    return KConfigGroup_new();
}

KConfigGroup* k_configgroup_new2(void* master, const char* group) {
    return KConfigGroup_new2((KConfigBase*)master, qstring(group));
}

KConfigGroup* k_configgroup_new3(void* master, const char* group) {
    return KConfigGroup_new3((KConfigBase*)master, qstring(group));
}

KConfigGroup* k_configgroup_new4(void* param1) {
    return KConfigGroup_new4((KConfigGroup*)param1);
}

void k_configgroup_operator_assign(void* self, void* param1) {
    KConfigGroup_OperatorAssign((KConfigGroup*)self, (KConfigGroup*)param1);
}

bool k_configgroup_is_valid(void* self) {
    return KConfigGroup_IsValid((KConfigGroup*)self);
}

const char* k_configgroup_name(void* self) {
    libqt_string _str = KConfigGroup_Name((KConfigGroup*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_configgroup_exists(void* self) {
    return KConfigGroup_Exists((KConfigGroup*)self);
}

bool k_configgroup_sync(void* self) {
    return KConfigGroup_Sync((KConfigGroup*)self);
}

void k_configgroup_on_sync(void* self, bool (*callback)()) {
    KConfigGroup_OnSync((KConfigGroup*)self, (intptr_t)callback);
}

bool k_configgroup_super_sync(void* self) {
    return KConfigGroup_SuperSync((KConfigGroup*)self);
}

void k_configgroup_mark_as_clean(void* self) {
    KConfigGroup_MarkAsClean((KConfigGroup*)self);
}

void k_configgroup_on_mark_as_clean(void* self, void (*callback)()) {
    KConfigGroup_OnMarkAsClean((KConfigGroup*)self, (intptr_t)callback);
}

void k_configgroup_super_mark_as_clean(void* self) {
    KConfigGroup_SuperMarkAsClean((KConfigGroup*)self);
}

int32_t k_configgroup_access_mode(void* self) {
    return KConfigGroup_AccessMode((KConfigGroup*)self);
}

void k_configgroup_on_access_mode(void* self, int32_t (*callback)()) {
    KConfigGroup_OnAccessMode((KConfigGroup*)self, (intptr_t)callback);
}

int32_t k_configgroup_super_access_mode(void* self) {
    return KConfigGroup_SuperAccessMode((KConfigGroup*)self);
}

KConfig* k_configgroup_config(void* self) {
    return KConfigGroup_Config((KConfigGroup*)self);
}

const KConfig* k_configgroup_config2(void* self) {
    return KConfigGroup_Config2((KConfigGroup*)self);
}

void k_configgroup_copy_to(void* self, void* other) {
    KConfigGroup_CopyTo((KConfigGroup*)self, (KConfigBase*)other);
}

void k_configgroup_reparent(void* self, void* parent) {
    KConfigGroup_Reparent((KConfigGroup*)self, (KConfigBase*)parent);
}

void k_configgroup_move_values_to(void* self, libqt_list /* of const char* */ keys, void* other) {
    KConfigGroup_MoveValuesTo((KConfigGroup*)self, keys, (KConfigGroup*)other);
}

void k_configgroup_move_values_to2(void* self, void* other) {
    KConfigGroup_MoveValuesTo2((KConfigGroup*)self, (KConfigGroup*)other);
}

KConfigGroup* k_configgroup_parent(void* self) {
    return KConfigGroup_Parent((KConfigGroup*)self);
}

const char** k_configgroup_group_list(void* self) {
    libqt_list _arr = KConfigGroup_GroupList((KConfigGroup*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configgroup_group_list\n");
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

void k_configgroup_on_group_list(void* self, const char** (*callback)()) {
    KConfigGroup_OnGroupList((KConfigGroup*)self, (intptr_t)callback);
}

const char** k_configgroup_super_group_list(void* self) {
    libqt_list _arr = KConfigGroup_SuperGroupList((KConfigGroup*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configgroup_group_list\n");
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

const char** k_configgroup_key_list(void* self) {
    libqt_list _arr = KConfigGroup_KeyList((KConfigGroup*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configgroup_key_list\n");
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

void k_configgroup_delete_group(void* self) {
    KConfigGroup_DeleteGroup((KConfigGroup*)self);
}

QVariant* k_configgroup_read_entry(void* self, const char* key, void* aDefault) {
    return KConfigGroup_ReadEntry((KConfigGroup*)self, qstring(key), (QVariant*)aDefault);
}

QVariant* k_configgroup_read_entry2(void* self, const char* key, void* aDefault) {
    return KConfigGroup_ReadEntry2((KConfigGroup*)self, key, (QVariant*)aDefault);
}

const char* k_configgroup_read_entry3(void* self, const char* key, const char* aDefault) {
    libqt_string _str = KConfigGroup_ReadEntry3((KConfigGroup*)self, qstring(key), qstring(aDefault));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_configgroup_read_entry4(void* self, const char* key, const char* aDefault) {
    libqt_string _str = KConfigGroup_ReadEntry4((KConfigGroup*)self, key, qstring(aDefault));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_configgroup_read_entry5(void* self, const char* key) {
    libqt_string _str = KConfigGroup_ReadEntry5((KConfigGroup*)self, qstring(key));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_configgroup_read_entry6(void* self, const char* key) {
    libqt_string _str = KConfigGroup_ReadEntry6((KConfigGroup*)self, key);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QVariant* */ k_configgroup_read_entry7(void* self, const char* key, libqt_list /* of QVariant* */ aDefault) {
    libqt_list _arr = KConfigGroup_ReadEntry7((KConfigGroup*)self, qstring(key), aDefault);
    return _arr;
}

libqt_list /* of QVariant* */ k_configgroup_read_entry8(void* self, const char* key, libqt_list /* of QVariant* */ aDefault) {
    libqt_list _arr = KConfigGroup_ReadEntry8((KConfigGroup*)self, key, aDefault);
    return _arr;
}

const char** k_configgroup_read_entry9(void* self, const char* key, const char* aDefault[static 1]) {
    size_t aDefault_len = libqt_strv_length(aDefault);
    libqt_string* aDefault_qstr = (libqt_string*)malloc(aDefault_len * sizeof(libqt_string));
    if (aDefault_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configgroup_read_entry9\n");
        abort();
    }
    for (size_t i = 0; i < aDefault_len; ++i) {
        aDefault_qstr[i] = qstring(aDefault[i]);
    }
    libqt_list aDefault_list = qlist(aDefault_qstr, aDefault_len);
    libqt_list _arr = KConfigGroup_ReadEntry9((KConfigGroup*)self, qstring(key), aDefault_list);
    free(aDefault_qstr);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configgroup_read_entry9\n");
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

const char** k_configgroup_read_entry10(void* self, const char* key, const char* aDefault[static 1]) {
    size_t aDefault_len = libqt_strv_length(aDefault);
    libqt_string* aDefault_qstr = (libqt_string*)malloc(aDefault_len * sizeof(libqt_string));
    if (aDefault_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configgroup_read_entry10\n");
        abort();
    }
    for (size_t i = 0; i < aDefault_len; ++i) {
        aDefault_qstr[i] = qstring(aDefault[i]);
    }
    libqt_list aDefault_list = qlist(aDefault_qstr, aDefault_len);
    libqt_list _arr = KConfigGroup_ReadEntry10((KConfigGroup*)self, key, aDefault_list);
    free(aDefault_qstr);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configgroup_read_entry10\n");
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

const char** k_configgroup_read_xdg_list_entry(void* self, const char* pKey) {
    libqt_list _arr = KConfigGroup_ReadXdgListEntry((KConfigGroup*)self, qstring(pKey));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configgroup_read_xdg_list_entry\n");
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

const char** k_configgroup_read_xdg_list_entry2(void* self, const char* key) {
    libqt_list _arr = KConfigGroup_ReadXdgListEntry2((KConfigGroup*)self, key);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configgroup_read_xdg_list_entry2\n");
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

const char* k_configgroup_read_path_entry(void* self, const char* pKey, const char* aDefault) {
    libqt_string _str = KConfigGroup_ReadPathEntry((KConfigGroup*)self, qstring(pKey), qstring(aDefault));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_configgroup_read_path_entry2(void* self, const char* key, const char* aDefault) {
    libqt_string _str = KConfigGroup_ReadPathEntry2((KConfigGroup*)self, key, qstring(aDefault));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_configgroup_read_path_entry3(void* self, const char* pKey, const char* aDefault[static 1]) {
    size_t aDefault_len = libqt_strv_length(aDefault);
    libqt_string* aDefault_qstr = (libqt_string*)malloc(aDefault_len * sizeof(libqt_string));
    if (aDefault_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configgroup_read_path_entry3\n");
        abort();
    }
    for (size_t i = 0; i < aDefault_len; ++i) {
        aDefault_qstr[i] = qstring(aDefault[i]);
    }
    libqt_list aDefault_list = qlist(aDefault_qstr, aDefault_len);
    libqt_list _arr = KConfigGroup_ReadPathEntry3((KConfigGroup*)self, qstring(pKey), aDefault_list);
    free(aDefault_qstr);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configgroup_read_path_entry3\n");
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

const char** k_configgroup_read_path_entry4(void* self, const char* key, const char* aDefault[static 1]) {
    size_t aDefault_len = libqt_strv_length(aDefault);
    libqt_string* aDefault_qstr = (libqt_string*)malloc(aDefault_len * sizeof(libqt_string));
    if (aDefault_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configgroup_read_path_entry4\n");
        abort();
    }
    for (size_t i = 0; i < aDefault_len; ++i) {
        aDefault_qstr[i] = qstring(aDefault[i]);
    }
    libqt_list aDefault_list = qlist(aDefault_qstr, aDefault_len);
    libqt_list _arr = KConfigGroup_ReadPathEntry4((KConfigGroup*)self, key, aDefault_list);
    free(aDefault_qstr);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configgroup_read_path_entry4\n");
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

const char* k_configgroup_read_entry_untranslated(void* self, const char* pKey) {
    libqt_string _str = KConfigGroup_ReadEntryUntranslated((KConfigGroup*)self, qstring(pKey));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_configgroup_read_entry_untranslated2(void* self, const char* key) {
    libqt_string _str = KConfigGroup_ReadEntryUntranslated2((KConfigGroup*)self, key);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configgroup_write_entry(void* self, const char* key, void* value) {
    KConfigGroup_WriteEntry((KConfigGroup*)self, qstring(key), (QVariant*)value);
}

void k_configgroup_write_entry2(void* self, const char* key, void* value) {
    KConfigGroup_WriteEntry2((KConfigGroup*)self, key, (QVariant*)value);
}

void k_configgroup_write_entry3(void* self, const char* key, const char* value) {
    KConfigGroup_WriteEntry3((KConfigGroup*)self, qstring(key), qstring(value));
}

void k_configgroup_write_entry4(void* self, const char* key, const char* value) {
    KConfigGroup_WriteEntry4((KConfigGroup*)self, key, qstring(value));
}

void k_configgroup_write_entry5(void* self, const char* key, char* value) {
    KConfigGroup_WriteEntry5((KConfigGroup*)self, qstring(key), qstring(value));
}

void k_configgroup_write_entry6(void* self, const char* key, char* value) {
    KConfigGroup_WriteEntry6((KConfigGroup*)self, key, qstring(value));
}

void k_configgroup_write_entry7(void* self, const char* key, const char* value) {
    KConfigGroup_WriteEntry7((KConfigGroup*)self, qstring(key), value);
}

void k_configgroup_write_entry8(void* self, const char* key, const char* value) {
    KConfigGroup_WriteEntry8((KConfigGroup*)self, key, value);
}

void k_configgroup_write_entry9(void* self, const char* key, const char* value[static 1]) {
    size_t value_len = libqt_strv_length(value);
    libqt_string* value_qstr = (libqt_string*)malloc(value_len * sizeof(libqt_string));
    if (value_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configgroup_write_entry9\n");
        abort();
    }
    for (size_t i = 0; i < value_len; ++i) {
        value_qstr[i] = qstring(value[i]);
    }
    libqt_list value_list = qlist(value_qstr, value_len);
    KConfigGroup_WriteEntry9((KConfigGroup*)self, qstring(key), value_list);
    free(value_qstr);
}

void k_configgroup_write_entry10(void* self, const char* key, const char* value[static 1]) {
    size_t value_len = libqt_strv_length(value);
    libqt_string* value_qstr = (libqt_string*)malloc(value_len * sizeof(libqt_string));
    if (value_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configgroup_write_entry10\n");
        abort();
    }
    for (size_t i = 0; i < value_len; ++i) {
        value_qstr[i] = qstring(value[i]);
    }
    libqt_list value_list = qlist(value_qstr, value_len);
    KConfigGroup_WriteEntry10((KConfigGroup*)self, key, value_list);
    free(value_qstr);
}

void k_configgroup_write_entry11(void* self, const char* key, libqt_list /* of QVariant* */ value) {
    KConfigGroup_WriteEntry11((KConfigGroup*)self, qstring(key), value);
}

void k_configgroup_write_entry12(void* self, const char* key, libqt_list /* of QVariant* */ value) {
    KConfigGroup_WriteEntry12((KConfigGroup*)self, key, value);
}

void k_configgroup_write_xdg_list_entry(void* self, const char* pKey, const char* value[static 1]) {
    size_t value_len = libqt_strv_length(value);
    libqt_string* value_qstr = (libqt_string*)malloc(value_len * sizeof(libqt_string));
    if (value_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configgroup_write_xdg_list_entry\n");
        abort();
    }
    for (size_t i = 0; i < value_len; ++i) {
        value_qstr[i] = qstring(value[i]);
    }
    libqt_list value_list = qlist(value_qstr, value_len);
    KConfigGroup_WriteXdgListEntry((KConfigGroup*)self, qstring(pKey), value_list);
    free(value_qstr);
}

void k_configgroup_write_xdg_list_entry2(void* self, const char* key, const char* value[static 1]) {
    size_t value_len = libqt_strv_length(value);
    libqt_string* value_qstr = (libqt_string*)malloc(value_len * sizeof(libqt_string));
    if (value_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configgroup_write_xdg_list_entry2\n");
        abort();
    }
    for (size_t i = 0; i < value_len; ++i) {
        value_qstr[i] = qstring(value[i]);
    }
    libqt_list value_list = qlist(value_qstr, value_len);
    KConfigGroup_WriteXdgListEntry2((KConfigGroup*)self, key, value_list);
    free(value_qstr);
}

void k_configgroup_write_path_entry(void* self, const char* pKey, const char* path) {
    KConfigGroup_WritePathEntry((KConfigGroup*)self, qstring(pKey), qstring(path));
}

void k_configgroup_write_path_entry2(void* self, const char* Key, const char* path) {
    KConfigGroup_WritePathEntry2((KConfigGroup*)self, Key, qstring(path));
}

void k_configgroup_write_path_entry3(void* self, const char* pKey, const char* value[static 1]) {
    size_t value_len = libqt_strv_length(value);
    libqt_string* value_qstr = (libqt_string*)malloc(value_len * sizeof(libqt_string));
    if (value_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configgroup_write_path_entry3\n");
        abort();
    }
    for (size_t i = 0; i < value_len; ++i) {
        value_qstr[i] = qstring(value[i]);
    }
    libqt_list value_list = qlist(value_qstr, value_len);
    KConfigGroup_WritePathEntry3((KConfigGroup*)self, qstring(pKey), value_list);
    free(value_qstr);
}

void k_configgroup_write_path_entry4(void* self, const char* key, const char* value[static 1]) {
    size_t value_len = libqt_strv_length(value);
    libqt_string* value_qstr = (libqt_string*)malloc(value_len * sizeof(libqt_string));
    if (value_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configgroup_write_path_entry4\n");
        abort();
    }
    for (size_t i = 0; i < value_len; ++i) {
        value_qstr[i] = qstring(value[i]);
    }
    libqt_list value_list = qlist(value_qstr, value_len);
    KConfigGroup_WritePathEntry4((KConfigGroup*)self, key, value_list);
    free(value_qstr);
}

void k_configgroup_delete_entry(void* self, const char* pKey) {
    KConfigGroup_DeleteEntry((KConfigGroup*)self, qstring(pKey));
}

void k_configgroup_delete_entry2(void* self, const char* key) {
    KConfigGroup_DeleteEntry2((KConfigGroup*)self, key);
}

bool k_configgroup_has_key(void* self, const char* key) {
    return KConfigGroup_HasKey((KConfigGroup*)self, qstring(key));
}

bool k_configgroup_has_key2(void* self, const char* key) {
    return KConfigGroup_HasKey2((KConfigGroup*)self, key);
}

bool k_configgroup_is_immutable(void* self) {
    return KConfigGroup_IsImmutable((KConfigGroup*)self);
}

void k_configgroup_on_is_immutable(void* self, bool (*callback)()) {
    KConfigGroup_OnIsImmutable((KConfigGroup*)self, (intptr_t)callback);
}

bool k_configgroup_super_is_immutable(void* self) {
    return KConfigGroup_SuperIsImmutable((KConfigGroup*)self);
}

bool k_configgroup_is_entry_immutable(void* self, const char* key) {
    return KConfigGroup_IsEntryImmutable((KConfigGroup*)self, qstring(key));
}

bool k_configgroup_is_entry_immutable2(void* self, const char* key) {
    return KConfigGroup_IsEntryImmutable2((KConfigGroup*)self, key);
}

void k_configgroup_revert_to_default(void* self, const char* key) {
    KConfigGroup_RevertToDefault((KConfigGroup*)self, qstring(key));
}

void k_configgroup_revert_to_default2(void* self, const char* key) {
    KConfigGroup_RevertToDefault2((KConfigGroup*)self, key);
}

bool k_configgroup_has_default(void* self, const char* key) {
    return KConfigGroup_HasDefault((KConfigGroup*)self, qstring(key));
}

bool k_configgroup_has_default2(void* self, const char* key) {
    return KConfigGroup_HasDefault2((KConfigGroup*)self, key);
}

libqt_map /* of const char* to const char* */ k_configgroup_entry_map(void* self) {
    // Convert QMap<QString,QString> to libqt_map
    libqt_map _out = KConfigGroup_EntryMap((KConfigGroup*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string keys in k_configgroup_entry_map\n");
        abort();
    }
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_configgroup_entry_map\n");
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
            fprintf(stderr, "Failed to allocate memory for map keys in k_configgroup_entry_map\n");
            abort();
        }
        memcpy(_ret_keys[i], _out_keys[i].data, _out_keys[i].len);
        _ret_keys[i][_out_keys[i].len] = '\0';
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
                libqt_free(_ret_values[j]);
            }
            free(_ret_keys);
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_configgroup_entry_map\n");
            abort();
        }
        memcpy(_ret_values[i], _out_values[i].data, _out_values[i].len);
        _ret_values[i][_out_values[i].len] = '\0';
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

bool k_configgroup_has_group_impl(void* self, const char* groupName) {
    return KConfigGroup_HasGroupImpl((KConfigGroup*)self, qstring(groupName));
}

void k_configgroup_on_has_group_impl(void* self, bool (*callback)(void*, const char*)) {
    KConfigGroup_OnHasGroupImpl((KConfigGroup*)self, (intptr_t)callback);
}

bool k_configgroup_super_has_group_impl(void* self, const char* groupName) {
    return KConfigGroup_SuperHasGroupImpl((KConfigGroup*)self, qstring(groupName));
}

KConfigGroup* k_configgroup_group_impl(void* self, const char* groupName) {
    return KConfigGroup_GroupImpl((KConfigGroup*)self, qstring(groupName));
}

void k_configgroup_on_group_impl(void* self, KConfigGroup* (*callback)(void*, const char*)) {
    KConfigGroup_OnGroupImpl((KConfigGroup*)self, (intptr_t)callback);
}

KConfigGroup* k_configgroup_super_group_impl(void* self, const char* groupName) {
    return KConfigGroup_SuperGroupImpl((KConfigGroup*)self, qstring(groupName));
}

const KConfigGroup* k_configgroup_group_impl2(void* self, const char* groupName) {
    return KConfigGroup_GroupImpl2((KConfigGroup*)self, qstring(groupName));
}

void k_configgroup_on_group_impl2(void* self, const KConfigGroup* (*callback)(void*, const char*)) {
    KConfigGroup_OnGroupImpl2((KConfigGroup*)self, (intptr_t)callback);
}

const KConfigGroup* k_configgroup_super_group_impl2(void* self, const char* groupName) {
    return KConfigGroup_SuperGroupImpl2((KConfigGroup*)self, qstring(groupName));
}

void k_configgroup_delete_group_impl(void* self, const char* groupName, int32_t flags) {
    KConfigGroup_DeleteGroupImpl((KConfigGroup*)self, qstring(groupName), flags);
}

void k_configgroup_on_delete_group_impl(void* self, void (*callback)(void*, const char*, int32_t)) {
    KConfigGroup_OnDeleteGroupImpl((KConfigGroup*)self, (intptr_t)callback);
}

void k_configgroup_super_delete_group_impl(void* self, const char* groupName, int32_t flags) {
    KConfigGroup_SuperDeleteGroupImpl((KConfigGroup*)self, qstring(groupName), flags);
}

bool k_configgroup_is_group_immutable_impl(void* self, const char* groupName) {
    return KConfigGroup_IsGroupImmutableImpl((KConfigGroup*)self, qstring(groupName));
}

void k_configgroup_on_is_group_immutable_impl(void* self, bool (*callback)(void*, const char*)) {
    KConfigGroup_OnIsGroupImmutableImpl((KConfigGroup*)self, (intptr_t)callback);
}

bool k_configgroup_super_is_group_immutable_impl(void* self, const char* groupName) {
    return KConfigGroup_SuperIsGroupImmutableImpl((KConfigGroup*)self, qstring(groupName));
}

void k_configgroup_copy_to2(void* self, void* other, int32_t pFlags) {
    KConfigGroup_CopyTo2((KConfigGroup*)self, (KConfigBase*)other, pFlags);
}

void k_configgroup_reparent2(void* self, void* parent, int32_t pFlags) {
    KConfigGroup_Reparent2((KConfigGroup*)self, (KConfigBase*)parent, pFlags);
}

void k_configgroup_move_values_to3(void* self, libqt_list /* of const char* */ keys, void* other, int32_t pFlags) {
    KConfigGroup_MoveValuesTo3((KConfigGroup*)self, keys, (KConfigGroup*)other, pFlags);
}

void k_configgroup_move_values_to22(void* self, void* other, int32_t pFlags) {
    KConfigGroup_MoveValuesTo22((KConfigGroup*)self, (KConfigGroup*)other, pFlags);
}

void k_configgroup_delete_group1(void* self, int32_t pFlags) {
    KConfigGroup_DeleteGroup1((KConfigGroup*)self, pFlags);
}

const char* k_configgroup_read_entry22(void* self, const char* key, const char* aDefault) {
    libqt_string _str = KConfigGroup_ReadEntry22((KConfigGroup*)self, qstring(key), aDefault);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_configgroup_read_entry23(void* self, const char* key, const char* aDefault) {
    libqt_string _str = KConfigGroup_ReadEntry23((KConfigGroup*)self, key, aDefault);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_configgroup_read_xdg_list_entry22(void* self, const char* pKey, const char* aDefault[static 1]) {
    size_t aDefault_len = libqt_strv_length(aDefault);
    libqt_string* aDefault_qstr = (libqt_string*)malloc(aDefault_len * sizeof(libqt_string));
    if (aDefault_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configgroup_read_xdg_list_entry22\n");
        abort();
    }
    for (size_t i = 0; i < aDefault_len; ++i) {
        aDefault_qstr[i] = qstring(aDefault[i]);
    }
    libqt_list aDefault_list = qlist(aDefault_qstr, aDefault_len);
    libqt_list _arr = KConfigGroup_ReadXdgListEntry22((KConfigGroup*)self, qstring(pKey), aDefault_list);
    free(aDefault_qstr);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configgroup_read_xdg_list_entry22\n");
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

const char** k_configgroup_read_xdg_list_entry23(void* self, const char* key, const char* aDefault[static 1]) {
    size_t aDefault_len = libqt_strv_length(aDefault);
    libqt_string* aDefault_qstr = (libqt_string*)malloc(aDefault_len * sizeof(libqt_string));
    if (aDefault_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configgroup_read_xdg_list_entry23\n");
        abort();
    }
    for (size_t i = 0; i < aDefault_len; ++i) {
        aDefault_qstr[i] = qstring(aDefault[i]);
    }
    libqt_list aDefault_list = qlist(aDefault_qstr, aDefault_len);
    libqt_list _arr = KConfigGroup_ReadXdgListEntry23((KConfigGroup*)self, key, aDefault_list);
    free(aDefault_qstr);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configgroup_read_xdg_list_entry23\n");
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

const char* k_configgroup_read_entry_untranslated22(void* self, const char* pKey, const char* aDefault) {
    libqt_string _str = KConfigGroup_ReadEntryUntranslated22((KConfigGroup*)self, qstring(pKey), qstring(aDefault));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_configgroup_read_entry_untranslated23(void* self, const char* key, const char* aDefault) {
    libqt_string _str = KConfigGroup_ReadEntryUntranslated23((KConfigGroup*)self, key, qstring(aDefault));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_configgroup_write_entry32(void* self, const char* key, void* value, int32_t pFlags) {
    KConfigGroup_WriteEntry32((KConfigGroup*)self, qstring(key), (QVariant*)value, pFlags);
}

void k_configgroup_write_entry33(void* self, const char* key, void* value, int32_t pFlags) {
    KConfigGroup_WriteEntry33((KConfigGroup*)self, key, (QVariant*)value, pFlags);
}

void k_configgroup_write_entry34(void* self, const char* key, const char* value, int32_t pFlags) {
    KConfigGroup_WriteEntry34((KConfigGroup*)self, qstring(key), qstring(value), pFlags);
}

void k_configgroup_write_entry35(void* self, const char* key, const char* value, int32_t pFlags) {
    KConfigGroup_WriteEntry35((KConfigGroup*)self, key, qstring(value), pFlags);
}

void k_configgroup_write_entry36(void* self, const char* key, char* value, int32_t pFlags) {
    KConfigGroup_WriteEntry36((KConfigGroup*)self, qstring(key), qstring(value), pFlags);
}

void k_configgroup_write_entry37(void* self, const char* key, char* value, int32_t pFlags) {
    KConfigGroup_WriteEntry37((KConfigGroup*)self, key, qstring(value), pFlags);
}

void k_configgroup_write_entry38(void* self, const char* key, const char* value, int32_t pFlags) {
    KConfigGroup_WriteEntry38((KConfigGroup*)self, qstring(key), value, pFlags);
}

void k_configgroup_write_entry39(void* self, const char* key, const char* value, int32_t pFlags) {
    KConfigGroup_WriteEntry39((KConfigGroup*)self, key, value, pFlags);
}

void k_configgroup_write_entry310(void* self, const char* key, const char* value[static 1], int32_t pFlags) {
    size_t value_len = libqt_strv_length(value);
    libqt_string* value_qstr = (libqt_string*)malloc(value_len * sizeof(libqt_string));
    if (value_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configgroup_write_entry310\n");
        abort();
    }
    for (size_t i = 0; i < value_len; ++i) {
        value_qstr[i] = qstring(value[i]);
    }
    libqt_list value_list = qlist(value_qstr, value_len);
    KConfigGroup_WriteEntry310((KConfigGroup*)self, qstring(key), value_list, pFlags);
    free(value_qstr);
}

void k_configgroup_write_entry311(void* self, const char* key, const char* value[static 1], int32_t pFlags) {
    size_t value_len = libqt_strv_length(value);
    libqt_string* value_qstr = (libqt_string*)malloc(value_len * sizeof(libqt_string));
    if (value_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configgroup_write_entry311\n");
        abort();
    }
    for (size_t i = 0; i < value_len; ++i) {
        value_qstr[i] = qstring(value[i]);
    }
    libqt_list value_list = qlist(value_qstr, value_len);
    KConfigGroup_WriteEntry311((KConfigGroup*)self, key, value_list, pFlags);
    free(value_qstr);
}

void k_configgroup_write_entry312(void* self, const char* key, libqt_list /* of QVariant* */ value, int32_t pFlags) {
    KConfigGroup_WriteEntry312((KConfigGroup*)self, qstring(key), value, pFlags);
}

void k_configgroup_write_entry313(void* self, const char* key, libqt_list /* of QVariant* */ value, int32_t pFlags) {
    KConfigGroup_WriteEntry313((KConfigGroup*)self, key, value, pFlags);
}

void k_configgroup_write_xdg_list_entry3(void* self, const char* pKey, const char* value[static 1], int32_t pFlags) {
    size_t value_len = libqt_strv_length(value);
    libqt_string* value_qstr = (libqt_string*)malloc(value_len * sizeof(libqt_string));
    if (value_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configgroup_write_xdg_list_entry3\n");
        abort();
    }
    for (size_t i = 0; i < value_len; ++i) {
        value_qstr[i] = qstring(value[i]);
    }
    libqt_list value_list = qlist(value_qstr, value_len);
    KConfigGroup_WriteXdgListEntry3((KConfigGroup*)self, qstring(pKey), value_list, pFlags);
    free(value_qstr);
}

void k_configgroup_write_xdg_list_entry32(void* self, const char* key, const char* value[static 1], int32_t pFlags) {
    size_t value_len = libqt_strv_length(value);
    libqt_string* value_qstr = (libqt_string*)malloc(value_len * sizeof(libqt_string));
    if (value_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configgroup_write_xdg_list_entry32\n");
        abort();
    }
    for (size_t i = 0; i < value_len; ++i) {
        value_qstr[i] = qstring(value[i]);
    }
    libqt_list value_list = qlist(value_qstr, value_len);
    KConfigGroup_WriteXdgListEntry32((KConfigGroup*)self, key, value_list, pFlags);
    free(value_qstr);
}

void k_configgroup_write_path_entry32(void* self, const char* pKey, const char* path, int32_t pFlags) {
    KConfigGroup_WritePathEntry32((KConfigGroup*)self, qstring(pKey), qstring(path), pFlags);
}

void k_configgroup_write_path_entry33(void* self, const char* Key, const char* path, int32_t pFlags) {
    KConfigGroup_WritePathEntry33((KConfigGroup*)self, Key, qstring(path), pFlags);
}

void k_configgroup_write_path_entry34(void* self, const char* pKey, const char* value[static 1], int32_t pFlags) {
    size_t value_len = libqt_strv_length(value);
    libqt_string* value_qstr = (libqt_string*)malloc(value_len * sizeof(libqt_string));
    if (value_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configgroup_write_path_entry34\n");
        abort();
    }
    for (size_t i = 0; i < value_len; ++i) {
        value_qstr[i] = qstring(value[i]);
    }
    libqt_list value_list = qlist(value_qstr, value_len);
    KConfigGroup_WritePathEntry34((KConfigGroup*)self, qstring(pKey), value_list, pFlags);
    free(value_qstr);
}

void k_configgroup_write_path_entry35(void* self, const char* key, const char* value[static 1], int32_t pFlags) {
    size_t value_len = libqt_strv_length(value);
    libqt_string* value_qstr = (libqt_string*)malloc(value_len * sizeof(libqt_string));
    if (value_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configgroup_write_path_entry35\n");
        abort();
    }
    for (size_t i = 0; i < value_len; ++i) {
        value_qstr[i] = qstring(value[i]);
    }
    libqt_list value_list = qlist(value_qstr, value_len);
    KConfigGroup_WritePathEntry35((KConfigGroup*)self, key, value_list, pFlags);
    free(value_qstr);
}

void k_configgroup_delete_entry22(void* self, const char* pKey, int32_t pFlags) {
    KConfigGroup_DeleteEntry22((KConfigGroup*)self, qstring(pKey), pFlags);
}

void k_configgroup_delete_entry23(void* self, const char* key, int32_t pFlags) {
    KConfigGroup_DeleteEntry23((KConfigGroup*)self, key, pFlags);
}

void k_configgroup_revert_to_default22(void* self, const char* key, int32_t pFlag) {
    KConfigGroup_RevertToDefault22((KConfigGroup*)self, qstring(key), pFlag);
}

void k_configgroup_revert_to_default23(void* self, const char* key, int32_t pFlag) {
    KConfigGroup_RevertToDefault23((KConfigGroup*)self, key, pFlag);
}

bool k_configgroup_has_group(void* self, const char* group) {
    return KConfigBase_HasGroup((KConfigBase*)self, qstring(group));
}

KConfigGroup* k_configgroup_group(void* self, const char* group) {
    return KConfigBase_Group((KConfigBase*)self, qstring(group));
}

const KConfigGroup* k_configgroup_group2(void* self, const char* group) {
    return KConfigBase_Group2((KConfigBase*)self, qstring(group));
}

bool k_configgroup_is_group_immutable(void* self, const char* group) {
    return KConfigBase_IsGroupImmutable((KConfigBase*)self, qstring(group));
}

void k_configgroup_delete_group2(void* self, const char* group, int32_t flags) {
    KConfigBase_DeleteGroup2((KConfigBase*)self, qstring(group), flags);
}

void k_configgroup_virtual_hook(void* self, int id, void* data) {
    KConfigGroup_VirtualHook((KConfigGroup*)self, id, data);
}

void k_configgroup_super_virtual_hook(void* self, int id, void* data) {
    KConfigGroup_SuperVirtualHook((KConfigGroup*)self, id, data);
}

void k_configgroup_on_virtual_hook(void* self, void (*callback)(void*, int, void*)) {
    KConfigGroup_OnVirtualHook((KConfigGroup*)self, (intptr_t)callback);
}

void k_configgroup_delete(void* self) {
    KConfigGroup_Delete((KConfigGroup*)(self));
}
