#include "libcategory.hpp"
#include "libcategory.h"

Attica__Category* k_attica__category_new() {
    return Attica__Category_new();
}

Attica__Category* k_attica__category_new2(void* other) {
    return Attica__Category_new2((Attica__Category*)other);
}

void k_attica__category_operator_assign(void* self, void* other) {
    Attica__Category_OperatorAssign((Attica__Category*)self, (Attica__Category*)other);
}

void k_attica__category_set_id(void* self, const char* id) {
    Attica__Category_SetId((Attica__Category*)self, qstring(id));
}

const char* k_attica__category_id(void* self) {
    libqt_string _str = Attica__Category_Id((Attica__Category*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__category_set_name(void* self, const char* name) {
    Attica__Category_SetName((Attica__Category*)self, qstring(name));
}

const char* k_attica__category_name(void* self) {
    libqt_string _str = Attica__Category_Name((Attica__Category*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_attica__category_is_valid(void* self) {
    return Attica__Category_IsValid((Attica__Category*)self);
}

void k_attica__category_set_display_name(void* self, const char* name) {
    Attica__Category_SetDisplayName((Attica__Category*)self, qstring(name));
}

const char* k_attica__category_display_name(void* self) {
    libqt_string _str = Attica__Category_DisplayName((Attica__Category*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__category_delete(void* self) {
    Attica__Category_Delete((Attica__Category*)(self));
}
