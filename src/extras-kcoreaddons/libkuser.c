#include "../libqvariant.hpp"
#include "libkuser.hpp"
#include "libkuser.h"

KUser* k_user_new() {
    return KUser_new();
}

KUser* k_user_new2(uid_t uid) {
    return KUser_new2(uid);
}

KUser* k_user_new3(const char* name) {
    return KUser_new3(qstring(name));
}

KUser* k_user_new4(const char* name) {
    return KUser_new4(name);
}

KUser* k_user_new5(void* user) {
    return KUser_new5((KUser*)user);
}

KUser* k_user_new6(int32_t mode) {
    return KUser_new6(mode);
}

void k_user_operator_assign(void* self, void* user) {
    KUser_OperatorAssign((KUser*)self, (KUser*)user);
}

bool k_user_operator_equal(void* self, void* user) {
    return KUser_OperatorEqual((KUser*)self, (KUser*)user);
}

bool k_user_operator_not_equal(void* self, void* user) {
    return KUser_OperatorNotEqual((KUser*)self, (KUser*)user);
}

bool k_user_is_valid(void* self) {
    return KUser_IsValid((KUser*)self);
}

bool k_user_is_super_user(void* self) {
    return KUser_IsSuperUser((KUser*)self);
}

const char* k_user_login_name(void* self) {
    libqt_string _str = KUser_LoginName((KUser*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_user_home_dir(void* self) {
    libqt_string _str = KUser_HomeDir((KUser*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_user_face_icon_path(void* self) {
    libqt_string _str = KUser_FaceIconPath((KUser*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_user_shell(void* self) {
    libqt_string _str = KUser_Shell((KUser*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of KUserGroup* */ k_user_groups(void* self) {
    libqt_list _arr = KUser_Groups((KUser*)self);
    return _arr;
}

const char** k_user_group_names(void* self) {
    libqt_list _arr = KUser_GroupNames((KUser*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_user_group_names");
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

QVariant* k_user_property(void* self, int32_t which) {
    return KUser_Property((KUser*)self, which);
}

libqt_list /* of KUser* */ k_user_all_users() {
    libqt_list _arr = KUser_AllUsers();
    return _arr;
}

const char** k_user_all_user_names() {
    libqt_list _arr = KUser_AllUserNames();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_user_all_user_names");
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

libqt_list /* of KUserGroup* */ k_user_groups1(void* self, uint32_t maxCount) {
    libqt_list _arr = KUser_Groups1((KUser*)self, maxCount);
    return _arr;
}

const char** k_user_group_names1(void* self, uint32_t maxCount) {
    libqt_list _arr = KUser_GroupNames1((KUser*)self, maxCount);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_user_group_names1");
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

libqt_list /* of KUser* */ k_user_all_users1(uint32_t maxCount) {
    libqt_list _arr = KUser_AllUsers1(maxCount);
    return _arr;
}

const char** k_user_all_user_names1(uint32_t maxCount) {
    libqt_list _arr = KUser_AllUserNames1(maxCount);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_user_all_user_names1");
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

void k_user_delete(void* self) {
    KUser_Delete((KUser*)(self));
}

KUserGroup* k_usergroup_new(const char* name) {
    return KUserGroup_new(qstring(name));
}

KUserGroup* k_usergroup_new2(const char* name) {
    return KUserGroup_new2(name);
}

KUserGroup* k_usergroup_new3() {
    return KUserGroup_new3();
}

KUserGroup* k_usergroup_new4(gid_t gid) {
    return KUserGroup_new4(gid);
}

KUserGroup* k_usergroup_new5(void* group) {
    return KUserGroup_new5((KUserGroup*)group);
}

KUserGroup* k_usergroup_new6(int32_t mode) {
    return KUserGroup_new6(mode);
}

void k_usergroup_operator_assign(void* self, void* group) {
    KUserGroup_OperatorAssign((KUserGroup*)self, (KUserGroup*)group);
}

bool k_usergroup_operator_equal(void* self, void* group) {
    return KUserGroup_OperatorEqual((KUserGroup*)self, (KUserGroup*)group);
}

bool k_usergroup_operator_not_equal(void* self, void* group) {
    return KUserGroup_OperatorNotEqual((KUserGroup*)self, (KUserGroup*)group);
}

bool k_usergroup_is_valid(void* self) {
    return KUserGroup_IsValid((KUserGroup*)self);
}

const char* k_usergroup_name(void* self) {
    libqt_string _str = KUserGroup_Name((KUserGroup*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of KUser* */ k_usergroup_users(void* self) {
    libqt_list _arr = KUserGroup_Users((KUserGroup*)self);
    return _arr;
}

const char** k_usergroup_user_names(void* self) {
    libqt_list _arr = KUserGroup_UserNames((KUserGroup*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_usergroup_user_names");
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

libqt_list /* of KUserGroup* */ k_usergroup_all_groups() {
    libqt_list _arr = KUserGroup_AllGroups();
    return _arr;
}

const char** k_usergroup_all_group_names() {
    libqt_list _arr = KUserGroup_AllGroupNames();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_usergroup_all_group_names");
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

libqt_list /* of KUser* */ k_usergroup_users1(void* self, uint32_t maxCount) {
    libqt_list _arr = KUserGroup_Users1((KUserGroup*)self, maxCount);
    return _arr;
}

const char** k_usergroup_user_names1(void* self, uint32_t maxCount) {
    libqt_list _arr = KUserGroup_UserNames1((KUserGroup*)self, maxCount);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_usergroup_user_names1");
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

libqt_list /* of KUserGroup* */ k_usergroup_all_groups1(uint32_t maxCount) {
    libqt_list _arr = KUserGroup_AllGroups1(maxCount);
    return _arr;
}

const char** k_usergroup_all_group_names1(uint32_t maxCount) {
    libqt_list _arr = KUserGroup_AllGroupNames1(maxCount);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_usergroup_all_group_names1");
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

void k_usergroup_delete(void* self) {
    KUserGroup_Delete((KUserGroup*)(self));
}
