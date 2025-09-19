#include "../libqurl.hpp"
#include "liblicense.hpp"
#include "liblicense.h"

Attica__License* k_attica__license_new() {
    return Attica__License_new();
}

Attica__License* k_attica__license_new2(void* other) {
    return Attica__License_new2((Attica__License*)other);
}

void k_attica__license_operator_assign(void* self, void* other) {
    Attica__License_OperatorAssign((Attica__License*)self, (Attica__License*)other);
}

uint32_t k_attica__license_id(void* self) {
    return Attica__License_Id((Attica__License*)self);
}

void k_attica__license_set_id(void* self, uint32_t id) {
    Attica__License_SetId((Attica__License*)self, id);
}

const char* k_attica__license_name(void* self) {
    libqt_string _str = Attica__License_Name((Attica__License*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__license_set_name(void* self, const char* name) {
    Attica__License_SetName((Attica__License*)self, qstring(name));
}

QUrl* k_attica__license_url(void* self) {
    return Attica__License_Url((Attica__License*)self);
}

void k_attica__license_set_url(void* self, void* url) {
    Attica__License_SetUrl((Attica__License*)self, (QUrl*)url);
}

void k_attica__license_delete(void* self) {
    Attica__License_Delete((Attica__License*)(self));
}
