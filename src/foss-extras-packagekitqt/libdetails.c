#include "../libqvariant.hpp"
#include "libdetails.hpp"
#include "libdetails.h"

PackageKit__Details* q_packagekit__details_new() {
    return PackageKit__Details_new();
}

PackageKit__Details* q_packagekit__details_new2(libqt_map /* of const char* to QVariant* */ other) {
    return PackageKit__Details_new2(other);
}

const char* q_packagekit__details_package_id(void* self) {
    libqt_string _str = PackageKit__Details_PackageId((PackageKit__Details*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_packagekit__details_description(void* self) {
    libqt_string _str = PackageKit__Details_Description((PackageKit__Details*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_packagekit__details_group(void* self) {
    return PackageKit__Details_Group((PackageKit__Details*)self);
}

const char* q_packagekit__details_summary(void* self) {
    libqt_string _str = PackageKit__Details_Summary((PackageKit__Details*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_packagekit__details_url(void* self) {
    libqt_string _str = PackageKit__Details_Url((PackageKit__Details*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_packagekit__details_license(void* self) {
    libqt_string _str = PackageKit__Details_License((PackageKit__Details*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint64_t q_packagekit__details_size(void* self) {
    return PackageKit__Details_Size((PackageKit__Details*)self);
}

void q_packagekit__details_delete(void* self) {
    PackageKit__Details_Delete((PackageKit__Details*)(self));
}
