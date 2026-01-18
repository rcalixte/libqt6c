#include "libkconfiggroup.hpp"
#include "libkconfigbase.hpp"
#include "libkconfigbase.h"

const char** k_configbase_group_list(void* self) {
    libqt_list _arr = KConfigBase_GroupList((KConfigBase*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_configbase_group_list\n");
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

bool k_configbase_has_group(void* self, const char* group) {
    return KConfigBase_HasGroup((KConfigBase*)self, qstring(group));
}

KConfigGroup* k_configbase_group(void* self, const char* group) {
    return KConfigBase_Group((KConfigBase*)self, qstring(group));
}

const KConfigGroup* k_configbase_group2(void* self, const char* group) {
    return KConfigBase_Group2((KConfigBase*)self, qstring(group));
}

void k_configbase_delete_group(void* self, const char* group) {
    KConfigBase_DeleteGroup((KConfigBase*)self, qstring(group));
}

bool k_configbase_sync(void* self) {
    return KConfigBase_Sync((KConfigBase*)self);
}

void k_configbase_mark_as_clean(void* self) {
    KConfigBase_MarkAsClean((KConfigBase*)self);
}

int32_t k_configbase_access_mode(void* self) {
    return KConfigBase_AccessMode((KConfigBase*)self);
}

bool k_configbase_is_immutable(void* self) {
    return KConfigBase_IsImmutable((KConfigBase*)self);
}

bool k_configbase_is_group_immutable(void* self, const char* group) {
    return KConfigBase_IsGroupImmutable((KConfigBase*)self, qstring(group));
}

void k_configbase_delete_group2(void* self, const char* group, int32_t flags) {
    KConfigBase_DeleteGroup2((KConfigBase*)self, qstring(group), flags);
}

void k_configbase_delete(void* self) {
    KConfigBase_Delete((KConfigBase*)(self));
}
