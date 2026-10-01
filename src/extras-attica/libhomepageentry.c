#include "../libqurl.hpp"
#include "libhomepageentry.hpp"
#include "libhomepageentry.h"

Attica__HomePageEntry* k_attica__homepageentry_new() {
    return Attica__HomePageEntry_New();
}

Attica__HomePageEntry* k_attica__homepageentry_new2(const void* other) {
    return Attica__HomePageEntry_New2((Attica__HomePageEntry*)other);
}

void k_attica__homepageentry_operator_assign(void* self, const void* other) {
    Attica__HomePageEntry_OperatorAssign((Attica__HomePageEntry*)self, (Attica__HomePageEntry*)other);
}

const char* k_attica__homepageentry_type(const void* self) {
    libqt_string _str = Attica__HomePageEntry_Type((Attica__HomePageEntry*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__homepageentry_set_type(void* self, const char* type) {
    Attica__HomePageEntry_SetType((Attica__HomePageEntry*)self, qstring(type));
}

QUrl* k_attica__homepageentry_url(const void* self) {
    return Attica__HomePageEntry_Url((Attica__HomePageEntry*)self);
}

void k_attica__homepageentry_set_url(void* self, const void* url) {
    Attica__HomePageEntry_SetUrl((Attica__HomePageEntry*)self, (QUrl*)url);
}

void k_attica__homepageentry_delete(void* self) {
    Attica__HomePageEntry_Delete((Attica__HomePageEntry*)(self));
}
