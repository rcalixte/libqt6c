#include "libsearchrequest.hpp"
#include "libsearchpreset.hpp"
#include "libsearchpreset.h"

KNSCore__SearchPreset* k_nscore__searchpreset_new(void* param1) {
    return KNSCore__SearchPreset_new((KNSCore__SearchPreset*)param1);
}

KNSCore__SearchRequest* k_nscore__searchpreset_request(void* self) {
    return KNSCore__SearchPreset_Request((KNSCore__SearchPreset*)self);
}

const char* k_nscore__searchpreset_display_name(void* self) {
    libqt_string _str = KNSCore__SearchPreset_DisplayName((KNSCore__SearchPreset*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_nscore__searchpreset_icon_name(void* self) {
    libqt_string _str = KNSCore__SearchPreset_IconName((KNSCore__SearchPreset*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_nscore__searchpreset_type(void* self) {
    return KNSCore__SearchPreset_Type((KNSCore__SearchPreset*)self);
}

const char* k_nscore__searchpreset_provider_id(void* self) {
    libqt_string _str = KNSCore__SearchPreset_ProviderId((KNSCore__SearchPreset*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__searchpreset_delete(void* self) {
    KNSCore__SearchPreset_Delete((KNSCore__SearchPreset*)(self));
}
