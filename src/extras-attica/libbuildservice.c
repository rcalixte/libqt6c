#include "libbuildservice.hpp"
#include "libbuildservice.h"

Attica__Target* k_attica__target_new(void* param1) {
    return Attica__Target_new((Attica__Target*)param1);
}

const char* k_attica__target_id(void* self) {
    libqt_string id_str = Attica__Target_Id((Attica__Target*)self);
    char* id_ret = qstring_to_char(id_str);
    libqt_string_free(&id_str);
    return id_ret;
}

void k_attica__target_set_id(void* self, const char* id) {
    Attica__Target_SetId((Attica__Target*)self, qstring(id));
}

const char* k_attica__target_name(void* self) {
    libqt_string name_str = Attica__Target_Name((Attica__Target*)self);
    char* name_ret = qstring_to_char(name_str);
    libqt_string_free(&name_str);
    return name_ret;
}

void k_attica__target_set_name(void* self, const char* name) {
    Attica__Target_SetName((Attica__Target*)self, qstring(name));
}

void k_attica__target_operator_assign(void* self, void* param1) {
    Attica__Target_OperatorAssign((Attica__Target*)self, (Attica__Target*)param1);
}

void k_attica__target_delete(void* self) {
    Attica__Target_Delete((Attica__Target*)(self));
}

Attica__BuildService* k_attica__buildservice_new() {
    return Attica__BuildService_new();
}

Attica__BuildService* k_attica__buildservice_new2(void* other) {
    return Attica__BuildService_new2((Attica__BuildService*)other);
}

void k_attica__buildservice_operator_assign(void* self, void* other) {
    Attica__BuildService_OperatorAssign((Attica__BuildService*)self, (Attica__BuildService*)other);
}

void k_attica__buildservice_set_id(void* self, const char* id) {
    Attica__BuildService_SetId((Attica__BuildService*)self, qstring(id));
}

const char* k_attica__buildservice_id(void* self) {
    libqt_string _str = Attica__BuildService_Id((Attica__BuildService*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__buildservice_set_name(void* self, const char* name) {
    Attica__BuildService_SetName((Attica__BuildService*)self, qstring(name));
}

const char* k_attica__buildservice_name(void* self) {
    libqt_string _str = Attica__BuildService_Name((Attica__BuildService*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__buildservice_set_url(void* self, const char* url) {
    Attica__BuildService_SetUrl((Attica__BuildService*)self, qstring(url));
}

const char* k_attica__buildservice_url(void* self) {
    libqt_string _str = Attica__BuildService_Url((Attica__BuildService*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__buildservice_add_target(void* self, void* param1) {
    Attica__BuildService_AddTarget((Attica__BuildService*)self, (Attica__Target*)param1);
}

libqt_list /* of Attica__Target* */ k_attica__buildservice_targets(void* self) {
    libqt_list _arr = Attica__BuildService_Targets((Attica__BuildService*)self);
    return _arr;
}

bool k_attica__buildservice_is_valid(void* self) {
    return Attica__BuildService_IsValid((Attica__BuildService*)self);
}

void k_attica__buildservice_delete(void* self) {
    Attica__BuildService_Delete((Attica__BuildService*)(self));
}
