#include "libdistribution.hpp"
#include "libdistribution.h"

Attica__Distribution* k_attica__distribution_new() {
    return Attica__Distribution_new();
}

Attica__Distribution* k_attica__distribution_new2(void* other) {
    return Attica__Distribution_new2((Attica__Distribution*)other);
}

void k_attica__distribution_operator_assign(void* self, void* other) {
    Attica__Distribution_OperatorAssign((Attica__Distribution*)self, (Attica__Distribution*)other);
}

uint32_t k_attica__distribution_id(void* self) {
    return Attica__Distribution_Id((Attica__Distribution*)self);
}

void k_attica__distribution_set_id(void* self, uint32_t id) {
    Attica__Distribution_SetId((Attica__Distribution*)self, id);
}

const char* k_attica__distribution_name(void* self) {
    libqt_string _str = Attica__Distribution_Name((Attica__Distribution*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__distribution_set_name(void* self, const char* name) {
    Attica__Distribution_SetName((Attica__Distribution*)self, qstring(name));
}

void k_attica__distribution_delete(void* self) {
    Attica__Distribution_Delete((Attica__Distribution*)(self));
}
