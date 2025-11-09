#include "libsecuritycontext.hpp"
#include "libidentityinfo.hpp"
#include "libidentityinfo.h"

SignOn__IdentityInfo* q_signon__identityinfo_new() {
    return SignOn__IdentityInfo_new();
}

SignOn__IdentityInfo* q_signon__identityinfo_new2(void* other) {
    return SignOn__IdentityInfo_new2((SignOn__IdentityInfo*)other);
}

SignOn__IdentityInfo* q_signon__identityinfo_new3(const char* caption, const char* userName, libqt_map /* of const char* to SignOn__MechanismsList */ methods) {
    return SignOn__IdentityInfo_new3(qstring(caption), qstring(userName), methods);
}

void q_signon__identityinfo_operator_assign(void* self, void* other) {
    SignOn__IdentityInfo_OperatorAssign((SignOn__IdentityInfo*)self, (SignOn__IdentityInfo*)other);
}

void q_signon__identityinfo_set_id(void* self, uint32_t id) {
    SignOn__IdentityInfo_SetId((SignOn__IdentityInfo*)self, id);
}

uint32_t q_signon__identityinfo_id(void* self) {
    return SignOn__IdentityInfo_Id((SignOn__IdentityInfo*)self);
}

void q_signon__identityinfo_set_secret(void* self, const char* secret) {
    SignOn__IdentityInfo_SetSecret((SignOn__IdentityInfo*)self, qstring(secret));
}

const char* q_signon__identityinfo_secret(void* self) {
    libqt_string _str = SignOn__IdentityInfo_Secret((SignOn__IdentityInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_signon__identityinfo_is_storing_secret(void* self) {
    return SignOn__IdentityInfo_IsStoringSecret((SignOn__IdentityInfo*)self);
}

void q_signon__identityinfo_set_store_secret(void* self, bool storeSecret) {
    SignOn__IdentityInfo_SetStoreSecret((SignOn__IdentityInfo*)self, storeSecret);
}

void q_signon__identityinfo_set_user_name(void* self, const char* userName) {
    SignOn__IdentityInfo_SetUserName((SignOn__IdentityInfo*)self, qstring(userName));
}

const char* q_signon__identityinfo_user_name(void* self) {
    libqt_string _str = SignOn__IdentityInfo_UserName((SignOn__IdentityInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_signon__identityinfo_set_caption(void* self, const char* caption) {
    SignOn__IdentityInfo_SetCaption((SignOn__IdentityInfo*)self, qstring(caption));
}

const char* q_signon__identityinfo_caption(void* self) {
    libqt_string _str = SignOn__IdentityInfo_Caption((SignOn__IdentityInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_signon__identityinfo_set_realms(void* self, const char* realms[static 1]) {
    size_t realms_len = libqt_strv_length(realms);
    libqt_string* realms_qstr = (libqt_string*)malloc(realms_len * sizeof(libqt_string));
    if (realms_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_signon__identityinfo_set_realms");
        abort();
    }
    for (size_t i = 0; i < realms_len; ++i) {
        realms_qstr[i] = qstring(realms[i]);
    }
    libqt_list realms_list = qlist(realms_qstr, realms_len);
    SignOn__IdentityInfo_SetRealms((SignOn__IdentityInfo*)self, realms_list);
    free(realms_qstr);
}

const char** q_signon__identityinfo_realms(void* self) {
    libqt_list _arr = SignOn__IdentityInfo_Realms((SignOn__IdentityInfo*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_signon__identityinfo_realms");
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

void q_signon__identityinfo_set_owner(void* self, const char* ownerToken) {
    SignOn__IdentityInfo_SetOwner((SignOn__IdentityInfo*)self, qstring(ownerToken));
}

const char* q_signon__identityinfo_owner(void* self) {
    libqt_string _str = SignOn__IdentityInfo_Owner((SignOn__IdentityInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_signon__identityinfo_set_access_control_list(void* self, const char* accessControlList[static 1]) {
    size_t accessControlList_len = libqt_strv_length(accessControlList);
    libqt_string* accessControlList_qstr = (libqt_string*)malloc(accessControlList_len * sizeof(libqt_string));
    if (accessControlList_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_signon__identityinfo_set_access_control_list");
        abort();
    }
    for (size_t i = 0; i < accessControlList_len; ++i) {
        accessControlList_qstr[i] = qstring(accessControlList[i]);
    }
    libqt_list accessControlList_list = qlist(accessControlList_qstr, accessControlList_len);
    SignOn__IdentityInfo_SetAccessControlList((SignOn__IdentityInfo*)self, accessControlList_list);
    free(accessControlList_qstr);
}

void q_signon__identityinfo_set_access_control_list2(void* self, libqt_list accessControlList) {
    SignOn__IdentityInfo_SetAccessControlList2((SignOn__IdentityInfo*)self, accessControlList);
}

const char** q_signon__identityinfo_access_control_list(void* self) {
    libqt_list _arr = SignOn__IdentityInfo_AccessControlList((SignOn__IdentityInfo*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_signon__identityinfo_access_control_list");
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

libqt_list /* of SignOn__SecurityContext* */ q_signon__identityinfo_access_control_list_full(void* self) {
    libqt_list _arr = SignOn__IdentityInfo_AccessControlListFull((SignOn__IdentityInfo*)self);
    return _arr;
}

void q_signon__identityinfo_set_method(void* self, const char* method, const char* mechanismsList[static 1]) {
    size_t mechanismsList_len = libqt_strv_length(mechanismsList);
    libqt_string* mechanismsList_qstr = (libqt_string*)malloc(mechanismsList_len * sizeof(libqt_string));
    if (mechanismsList_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in q_signon__identityinfo_set_method");
        abort();
    }
    for (size_t i = 0; i < mechanismsList_len; ++i) {
        mechanismsList_qstr[i] = qstring(mechanismsList[i]);
    }
    libqt_list mechanismsList_list = qlist(mechanismsList_qstr, mechanismsList_len);
    SignOn__IdentityInfo_SetMethod((SignOn__IdentityInfo*)self, qstring(method), mechanismsList_list);
    free(mechanismsList_qstr);
}

void q_signon__identityinfo_remove_method(void* self, const char* method) {
    SignOn__IdentityInfo_RemoveMethod((SignOn__IdentityInfo*)self, qstring(method));
}

void q_signon__identityinfo_set_type(void* self, int32_t type) {
    SignOn__IdentityInfo_SetType((SignOn__IdentityInfo*)self, type);
}

int32_t q_signon__identityinfo_type(void* self) {
    return SignOn__IdentityInfo_Type((SignOn__IdentityInfo*)self);
}

const char** q_signon__identityinfo_methods(void* self) {
    libqt_list _arr = SignOn__IdentityInfo_Methods((SignOn__IdentityInfo*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_signon__identityinfo_methods");
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

const char** q_signon__identityinfo_mechanisms(void* self, const char* method) {
    libqt_list _arr = SignOn__IdentityInfo_Mechanisms((SignOn__IdentityInfo*)self, qstring(method));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_signon__identityinfo_mechanisms");
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

void q_signon__identityinfo_set_ref_count(void* self, int refCount) {
    SignOn__IdentityInfo_SetRefCount((SignOn__IdentityInfo*)self, refCount);
}

int32_t q_signon__identityinfo_ref_count(void* self) {
    return SignOn__IdentityInfo_RefCount((SignOn__IdentityInfo*)self);
}

void q_signon__identityinfo_set_secret2(void* self, const char* secret, bool storeSecret) {
    SignOn__IdentityInfo_SetSecret2((SignOn__IdentityInfo*)self, qstring(secret), storeSecret);
}

void q_signon__identityinfo_delete(void* self) {
    SignOn__IdentityInfo_Delete((SignOn__IdentityInfo*)(self));
}
