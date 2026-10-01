#include "libkcountry.hpp"
#include "libkcountrysubdivision.hpp"
#include "libkcountrysubdivision.h"

KCountrySubdivision* k_countrysubdivision_new() {
    return KCountrySubdivision_New();
}

KCountrySubdivision* k_countrysubdivision_new2(const void* param1) {
    return KCountrySubdivision_New2((KCountrySubdivision*)param1);
}

void k_countrysubdivision_operator_assign(void* self, const void* param1) {
    KCountrySubdivision_OperatorAssign((KCountrySubdivision*)self, (KCountrySubdivision*)param1);
}

bool k_countrysubdivision_operator_equal(const void* self, const void* other) {
    return KCountrySubdivision_OperatorEqual((KCountrySubdivision*)self, (KCountrySubdivision*)other);
}

bool k_countrysubdivision_operator_not_equal(const void* self, const void* other) {
    return KCountrySubdivision_OperatorNotEqual((KCountrySubdivision*)self, (KCountrySubdivision*)other);
}

bool k_countrysubdivision_is_valid(const void* self) {
    return KCountrySubdivision_IsValid((KCountrySubdivision*)self);
}

const char* k_countrysubdivision_code(const void* self) {
    libqt_string _str = KCountrySubdivision_Code((KCountrySubdivision*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_countrysubdivision_name(const void* self) {
    libqt_string _str = KCountrySubdivision_Name((KCountrySubdivision*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KCountry* k_countrysubdivision_country(const void* self) {
    return KCountrySubdivision_Country((KCountrySubdivision*)self);
}

KCountrySubdivision* k_countrysubdivision_parent(const void* self) {
    return KCountrySubdivision_Parent((KCountrySubdivision*)self);
}

libqt_list /* of const char* */ k_countrysubdivision_time_zone_ids(const void* self) {
    libqt_list _arr = KCountrySubdivision_TimeZoneIds((KCountrySubdivision*)self);
    return _arr;
}

libqt_list /* of KCountrySubdivision* */ k_countrysubdivision_subdivisions(const void* self) {
    libqt_list _arr = KCountrySubdivision_Subdivisions((KCountrySubdivision*)self);
    return _arr;
}

KCountrySubdivision* k_countrysubdivision_from_code(const char* code) {
    return KCountrySubdivision_FromCode(qstring(code));
}

KCountrySubdivision* k_countrysubdivision_from_code2(const char* code) {
    return KCountrySubdivision_FromCode2(code);
}

KCountrySubdivision* k_countrysubdivision_from_location(float latitude, float longitude) {
    return KCountrySubdivision_FromLocation(latitude, longitude);
}

void k_countrysubdivision_delete(void* self) {
    KCountrySubdivision_Delete((KCountrySubdivision*)(self));
}
