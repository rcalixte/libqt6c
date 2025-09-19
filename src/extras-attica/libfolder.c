#include "libfolder.hpp"
#include "libfolder.h"

Attica__Folder* k_attica__folder_new() {
    return Attica__Folder_new();
}

Attica__Folder* k_attica__folder_new2(void* other) {
    return Attica__Folder_new2((Attica__Folder*)other);
}

void k_attica__folder_operator_assign(void* self, void* other) {
    Attica__Folder_OperatorAssign((Attica__Folder*)self, (Attica__Folder*)other);
}

void k_attica__folder_set_id(void* self, const char* id) {
    Attica__Folder_SetId((Attica__Folder*)self, qstring(id));
}

const char* k_attica__folder_id(void* self) {
    libqt_string _str = Attica__Folder_Id((Attica__Folder*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__folder_set_name(void* self, const char* name) {
    Attica__Folder_SetName((Attica__Folder*)self, qstring(name));
}

const char* k_attica__folder_name(void* self) {
    libqt_string _str = Attica__Folder_Name((Attica__Folder*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__folder_set_message_count(void* self, int messageCount) {
    Attica__Folder_SetMessageCount((Attica__Folder*)self, messageCount);
}

int32_t k_attica__folder_message_count(void* self) {
    return Attica__Folder_MessageCount((Attica__Folder*)self);
}

void k_attica__folder_set_type(void* self, const char* type) {
    Attica__Folder_SetType((Attica__Folder*)self, qstring(type));
}

const char* k_attica__folder_type(void* self) {
    libqt_string _str = Attica__Folder_Type((Attica__Folder*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_attica__folder_is_valid(void* self) {
    return Attica__Folder_IsValid((Attica__Folder*)self);
}

void k_attica__folder_delete(void* self) {
    Attica__Folder_Delete((Attica__Folder*)(self));
}
