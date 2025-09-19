#include "libhomepagetype.hpp"
#include "libhomepagetype.h"

Attica__HomePageType* k_attica__homepagetype_new() {
    return Attica__HomePageType_new();
}

Attica__HomePageType* k_attica__homepagetype_new2(void* other) {
    return Attica__HomePageType_new2((Attica__HomePageType*)other);
}

void k_attica__homepagetype_operator_assign(void* self, void* other) {
    Attica__HomePageType_OperatorAssign((Attica__HomePageType*)self, (Attica__HomePageType*)other);
}

uint32_t k_attica__homepagetype_id(void* self) {
    return Attica__HomePageType_Id((Attica__HomePageType*)self);
}

void k_attica__homepagetype_set_id(void* self, uint32_t id) {
    Attica__HomePageType_SetId((Attica__HomePageType*)self, id);
}

const char* k_attica__homepagetype_name(void* self) {
    libqt_string _str = Attica__HomePageType_Name((Attica__HomePageType*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__homepagetype_set_name(void* self, const char* name) {
    Attica__HomePageType_SetName((Attica__HomePageType*)self, qstring(name));
}

void k_attica__homepagetype_delete(void* self) {
    Attica__HomePageType_Delete((Attica__HomePageType*)(self));
}
