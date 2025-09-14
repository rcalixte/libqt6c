#include "libkacl.hpp"
#include "libkacl.h"

KACL* k_acl_new(const char* aclString) {
    return KACL_new(qstring(aclString));
}

KACL* k_acl_new2(void* rhs) {
    return KACL_new2((KACL*)rhs);
}

KACL* k_acl_new3(mode_t basicPermissions) {
    return KACL_new3(basicPermissions);
}

KACL* k_acl_new4() {
    return KACL_new4();
}

void k_acl_operator_assign(void* self, void* rhs) {
    KACL_OperatorAssign((KACL*)self, (KACL*)rhs);
}

bool k_acl_operator_equal(void* self, void* rhs) {
    return KACL_OperatorEqual((KACL*)self, (KACL*)rhs);
}

bool k_acl_operator_not_equal(void* self, void* rhs) {
    return KACL_OperatorNotEqual((KACL*)self, (KACL*)rhs);
}

bool k_acl_is_valid(void* self) {
    return KACL_IsValid((KACL*)self);
}

unsigned short k_acl_owner_permissions(void* self) {
    return KACL_OwnerPermissions((KACL*)self);
}

bool k_acl_set_owner_permissions(void* self, unsigned short ownerPermissions) {
    return KACL_SetOwnerPermissions((KACL*)self, ownerPermissions);
}

unsigned short k_acl_owning_group_permissions(void* self) {
    return KACL_OwningGroupPermissions((KACL*)self);
}

bool k_acl_set_owning_group_permissions(void* self, unsigned short owningGroupPermissions) {
    return KACL_SetOwningGroupPermissions((KACL*)self, owningGroupPermissions);
}

unsigned short k_acl_others_permissions(void* self) {
    return KACL_OthersPermissions((KACL*)self);
}

bool k_acl_set_others_permissions(void* self, unsigned short othersPermissions) {
    return KACL_SetOthersPermissions((KACL*)self, othersPermissions);
}

mode_t k_acl_base_permissions(void* self) {
    return (int)KACL_BasePermissions((KACL*)self);
}

bool k_acl_is_extended(void* self) {
    return KACL_IsExtended((KACL*)self);
}

unsigned short k_acl_mask_permissions(void* self, bool* exists) {
    return KACL_MaskPermissions((KACL*)self, (bool*)exists);
}

bool k_acl_set_mask_permissions(void* self, unsigned short maskPermissions) {
    return KACL_SetMaskPermissions((KACL*)self, maskPermissions);
}

unsigned short k_acl_named_user_permissions(void* self, const char* name, bool* exists) {
    return KACL_NamedUserPermissions((KACL*)self, qstring(name), (bool*)exists);
}

bool k_acl_set_named_user_permissions(void* self, const char* name, unsigned short param2) {
    return KACL_SetNamedUserPermissions((KACL*)self, qstring(name), param2);
}

libqt_list /* of libqt_pair  tuple of const char* and unsigned short  */ k_acl_all_user_permissions(void* self) {
    libqt_list _arr = KACL_AllUserPermissions((KACL*)self);
    return _arr;
}

bool k_acl_set_all_user_permissions(void* self, libqt_list /* of libqt_pair  tuple of const char* and unsigned short  */ list) {
    return KACL_SetAllUserPermissions((KACL*)self, list);
}

unsigned short k_acl_named_group_permissions(void* self, const char* name, bool* exists) {
    return KACL_NamedGroupPermissions((KACL*)self, qstring(name), (bool*)exists);
}

bool k_acl_set_named_group_permissions(void* self, const char* name, unsigned short param2) {
    return KACL_SetNamedGroupPermissions((KACL*)self, qstring(name), param2);
}

libqt_list /* of libqt_pair  tuple of const char* and unsigned short  */ k_acl_all_group_permissions(void* self) {
    libqt_list _arr = KACL_AllGroupPermissions((KACL*)self);
    return _arr;
}

bool k_acl_set_all_group_permissions(void* self, libqt_list /* of libqt_pair  tuple of const char* and unsigned short  */ allGroupPermissions) {
    return KACL_SetAllGroupPermissions((KACL*)self, allGroupPermissions);
}

bool k_acl_set_a_c_l(void* self, const char* aclStr) {
    return KACL_SetACL((KACL*)self, qstring(aclStr));
}

const char* k_acl_as_string(void* self) {
    libqt_string _str = KACL_AsString((KACL*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_acl_virtual_hook(void* self, int id, void* data) {
    KACL_VirtualHook((KACL*)self, id, data);
}

void k_acl_on_virtual_hook(void* self, void (*callback)(void*, int, void*)) {
    KACL_OnVirtualHook((KACL*)self, (intptr_t)callback);
}

void k_acl_qbase_virtual_hook(void* self, int id, void* data) {
    KACL_QBaseVirtualHook((KACL*)self, id, data);
}

void k_acl_delete(void* self) {
    KACL_Delete((KACL*)(self));
}
