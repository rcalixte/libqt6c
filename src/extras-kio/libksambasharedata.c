#include "libksambasharedata.hpp"
#include "libksambasharedata.h"

KSambaShareData* k_sambasharedata_new() {
    return KSambaShareData_new();
}

KSambaShareData* k_sambasharedata_new2(void* other) {
    return KSambaShareData_new2((KSambaShareData*)other);
}

const char* k_sambasharedata_name(void* self) {
    libqt_string _str = KSambaShareData_Name((KSambaShareData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_sambasharedata_path(void* self) {
    libqt_string _str = KSambaShareData_Path((KSambaShareData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_sambasharedata_comment(void* self) {
    libqt_string _str = KSambaShareData_Comment((KSambaShareData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_sambasharedata_acl(void* self) {
    libqt_string _str = KSambaShareData_Acl((KSambaShareData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_sambasharedata_guest_permission(void* self) {
    return KSambaShareData_GuestPermission((KSambaShareData*)self);
}

int32_t k_sambasharedata_set_name(void* self, const char* name) {
    return KSambaShareData_SetName((KSambaShareData*)self, qstring(name));
}

int32_t k_sambasharedata_set_path(void* self, const char* path) {
    return KSambaShareData_SetPath((KSambaShareData*)self, qstring(path));
}

int32_t k_sambasharedata_set_comment(void* self, const char* comment) {
    return KSambaShareData_SetComment((KSambaShareData*)self, qstring(comment));
}

int32_t k_sambasharedata_set_acl(void* self, const char* acl) {
    return KSambaShareData_SetAcl((KSambaShareData*)self, qstring(acl));
}

int32_t k_sambasharedata_set_guest_permission(void* self) {
    return KSambaShareData_SetGuestPermission((KSambaShareData*)self);
}

int32_t k_sambasharedata_save(void* self) {
    return KSambaShareData_Save((KSambaShareData*)self);
}

int32_t k_sambasharedata_remove(void* self) {
    return KSambaShareData_Remove((KSambaShareData*)self);
}

void k_sambasharedata_operator_assign(void* self, void* other) {
    KSambaShareData_OperatorAssign((KSambaShareData*)self, (KSambaShareData*)other);
}

bool k_sambasharedata_operator_equal(void* self, void* other) {
    return KSambaShareData_OperatorEqual((KSambaShareData*)self, (KSambaShareData*)other);
}

bool k_sambasharedata_operator_not_equal(void* self, void* other) {
    return KSambaShareData_OperatorNotEqual((KSambaShareData*)self, (KSambaShareData*)other);
}

int32_t k_sambasharedata_set_guest_permission1(void* self, int32_t* permission) {
    return KSambaShareData_SetGuestPermission1((KSambaShareData*)self, permission);
}

void k_sambasharedata_delete(void* self) {
    KSambaShareData_Delete((KSambaShareData*)(self));
}
