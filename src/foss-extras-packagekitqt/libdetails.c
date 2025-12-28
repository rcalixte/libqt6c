#include "../libqvariant.hpp"
#include "libdetails.hpp"
#include "libdetails.h"

PackageKit__Details* q_packagekit__details_new() {
    return PackageKit__Details_new();
}

PackageKit__Details* q_packagekit__details_new2(libqt_map /* of const char* to QVariant* */ other) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map other_ret;
    other_ret.len = other.len;
    other_ret.keys = malloc(other_ret.len * sizeof(libqt_string));
    if (other_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys\n");
        abort();
    }
    other_ret.values = malloc(other_ret.len * sizeof(QVariant*));
    if (other_ret.values == NULL) {
        free(other_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values\n");
        abort();
    }
    const char** other_karr = (const char**)other.keys;
    libqt_string* other_kdest = (libqt_string*)other_ret.keys;
    QVariant** other_varr = (QVariant**)other.values;
    QVariant** other_vdest = (QVariant**)other_ret.values;
    for (size_t i = 0; i < other_ret.len; ++i) {
        other_kdest[i] = qstring(other_karr[i]);
        other_vdest[i] = other_varr[i];
    }

    PackageKit__Details* _out = PackageKit__Details_new2(other_ret);
    libqt_free(other_ret.keys);
    libqt_free(other_ret.values);
    return _out;
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
