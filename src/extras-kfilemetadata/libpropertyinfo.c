#include "../libqvariant.hpp"
#include "libpropertyinfo.hpp"
#include "libpropertyinfo.h"

KFileMetaData__PropertyInfo* k_filemetadata__propertyinfo_new() {
    return KFileMetaData__PropertyInfo_new();
}

KFileMetaData__PropertyInfo* k_filemetadata__propertyinfo_new2(int32_t property) {
    return KFileMetaData__PropertyInfo_new2(property);
}

KFileMetaData__PropertyInfo* k_filemetadata__propertyinfo_new3(void* pi) {
    return KFileMetaData__PropertyInfo_new3((KFileMetaData__PropertyInfo*)pi);
}

void k_filemetadata__propertyinfo_operator_assign(void* self, void* rhs) {
    KFileMetaData__PropertyInfo_OperatorAssign((KFileMetaData__PropertyInfo*)self, (KFileMetaData__PropertyInfo*)rhs);
}

bool k_filemetadata__propertyinfo_operator_equal(void* self, void* rhs) {
    return KFileMetaData__PropertyInfo_OperatorEqual((KFileMetaData__PropertyInfo*)self, (KFileMetaData__PropertyInfo*)rhs);
}

int32_t k_filemetadata__propertyinfo_property(void* self) {
    return KFileMetaData__PropertyInfo_Property((KFileMetaData__PropertyInfo*)self);
}

const char* k_filemetadata__propertyinfo_name(void* self) {
    libqt_string _str = KFileMetaData__PropertyInfo_Name((KFileMetaData__PropertyInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_filemetadata__propertyinfo_display_name(void* self) {
    libqt_string _str = KFileMetaData__PropertyInfo_DisplayName((KFileMetaData__PropertyInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_filemetadata__propertyinfo_value_type(void* self) {
    return KFileMetaData__PropertyInfo_ValueType((KFileMetaData__PropertyInfo*)self);
}

bool k_filemetadata__propertyinfo_should_be_indexed(void* self) {
    return KFileMetaData__PropertyInfo_ShouldBeIndexed((KFileMetaData__PropertyInfo*)self);
}

KFileMetaData__PropertyInfo* k_filemetadata__propertyinfo_from_name(const char* name) {
    return KFileMetaData__PropertyInfo_FromName(qstring(name));
}

const char** k_filemetadata__propertyinfo_all_names() {
    libqt_list _arr = KFileMetaData__PropertyInfo_AllNames();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_filemetadata__propertyinfo_all_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

const char* k_filemetadata__propertyinfo_format_as_display_string(void* self, void* value) {
    libqt_string _str = KFileMetaData__PropertyInfo_FormatAsDisplayString((KFileMetaData__PropertyInfo*)self, (QVariant*)value);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_filemetadata__propertyinfo_delete(void* self) {
    KFileMetaData__PropertyInfo_Delete((KFileMetaData__PropertyInfo*)(self));
}
