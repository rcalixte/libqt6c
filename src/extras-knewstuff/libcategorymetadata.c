#include "libcategorymetadata.hpp"
#include "libcategorymetadata.h"

KNSCore__CategoryMetadata* k_nscore__categorymetadata_new(void* param1) {
    return KNSCore__CategoryMetadata_new((KNSCore__CategoryMetadata*)param1);
}

const char* k_nscore__categorymetadata_id(void* self) {
    libqt_string _str = KNSCore__CategoryMetadata_Id((KNSCore__CategoryMetadata*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_nscore__categorymetadata_name(void* self) {
    libqt_string _str = KNSCore__CategoryMetadata_Name((KNSCore__CategoryMetadata*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_nscore__categorymetadata_display_name(void* self) {
    libqt_string _str = KNSCore__CategoryMetadata_DisplayName((KNSCore__CategoryMetadata*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_nscore__categorymetadata_delete(void* self) {
    KNSCore__CategoryMetadata_Delete((KNSCore__CategoryMetadata*)(self));
}
