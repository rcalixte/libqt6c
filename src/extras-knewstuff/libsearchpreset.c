#include "libsearchrequest.hpp"
#include "libsearchpreset.hpp"
#include "libsearchpreset.h"

KNSCore__SearchPreset* k_nscore__searchpreset_new(const void* param1) {
    return KNSCore__SearchPreset_New((KNSCore__SearchPreset*)param1);
}

KNSCore__SearchRequest* k_nscore__searchpreset_request(const void* self) {
    return KNSCore__SearchPreset_Request((KNSCore__SearchPreset*)self);
}

const char* k_nscore__searchpreset_display_name(const void* self) {
    libqt_string _str = KNSCore__SearchPreset_DisplayName((KNSCore__SearchPreset*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_nscore__searchpreset_icon_name(const void* self) {
    libqt_string _str = KNSCore__SearchPreset_IconName((KNSCore__SearchPreset*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_nscore__searchpreset_type(const void* self) {
    return KNSCore__SearchPreset_Type((KNSCore__SearchPreset*)self);
}

const char* k_nscore__searchpreset_provider_id(const void* self) {
    libqt_string _str = KNSCore__SearchPreset_ProviderId((KNSCore__SearchPreset*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__searchpreset_operator_assign(void* self, const void* param1) {
    KNSCore__SearchPreset_OperatorAssign((KNSCore__SearchPreset*)self, (KNSCore__SearchPreset*)param1);
}

void k_nscore__searchpreset_delete(void* self) {
    KNSCore__SearchPreset_Delete((KNSCore__SearchPreset*)(self));
}
