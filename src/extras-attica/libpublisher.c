#include "libbuildservice.hpp"
#include "libpublisher.hpp"
#include "libpublisher.h"

Attica__Field* k_attica__field_new(void* param1) {
    return Attica__Field_new((Attica__Field*)param1);
}

const char* k_attica__field_type(void* self) {
    libqt_string type_str = Attica__Field_Type((Attica__Field*)self);
    char* type_ret = qstring_to_char(type_str);
    libqt_string_free(&type_str);
    return type_ret;
}

void k_attica__field_set_type(void* self, const char* type) {
    Attica__Field_SetType((Attica__Field*)self, qstring(type));
}

const char* k_attica__field_name(void* self) {
    libqt_string name_str = Attica__Field_Name((Attica__Field*)self);
    char* name_ret = qstring_to_char(name_str);
    libqt_string_free(&name_str);
    return name_ret;
}

void k_attica__field_set_name(void* self, const char* name) {
    Attica__Field_SetName((Attica__Field*)self, qstring(name));
}

int32_t k_attica__field_fieldsize(void* self) {
    return Attica__Field_Fieldsize((Attica__Field*)self);
}

void k_attica__field_set_fieldsize(void* self, int fieldsize) {
    Attica__Field_SetFieldsize((Attica__Field*)self, fieldsize);
}

bool k_attica__field_required(void* self) {
    return Attica__Field_Required((Attica__Field*)self);
}

void k_attica__field_set_required(void* self, bool required) {
    Attica__Field_SetRequired((Attica__Field*)self, required);
}

const char** k_attica__field_options(void* self) {
    libqt_list options_arr = Attica__Field_Options((Attica__Field*)self);
    const libqt_string* options_qstr = (libqt_string*)options_arr.data.ptr;
    const char** options_ret = (const char**)malloc((options_arr.len + 1) * sizeof(const char*));
    if (options_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_attica__field_options\n");
        abort();
    }
    for (size_t i = 0; i < options_arr.len; ++i) {
        options_ret[i] = qstring_to_char(options_qstr[i]);
    }
    options_ret[options_arr.len] = NULL;
    for (size_t i = 0; i < options_arr.len; ++i) {
        libqt_string_free((libqt_string*)&options_qstr[i]);
    }
    libqt_free(options_arr.data.ptr);
    return options_ret;
}

void k_attica__field_set_options(void* self, const char* options[static 1]) {
    size_t options_len = libqt_strv_length(options);
    libqt_string* options_qstr = (libqt_string*)malloc(options_len * sizeof(libqt_string));
    if (options_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_attica__field_set_options\n");
        abort();
    }
    for (size_t i = 0; i < options_len; ++i) {
        options_qstr[i] = qstring(options[i]);
    }
    libqt_list options_list = qlist(options_qstr, options_len);
    Attica__Field_SetOptions((Attica__Field*)self, options_list);
    free(options_qstr);
}

void k_attica__field_operator_assign(void* self, void* param1) {
    Attica__Field_OperatorAssign((Attica__Field*)self, (Attica__Field*)param1);
}

void k_attica__field_delete(void* self) {
    Attica__Field_Delete((Attica__Field*)(self));
}

Attica__Publisher* k_attica__publisher_new() {
    return Attica__Publisher_new();
}

Attica__Publisher* k_attica__publisher_new2(void* other) {
    return Attica__Publisher_new2((Attica__Publisher*)other);
}

void k_attica__publisher_operator_assign(void* self, void* other) {
    Attica__Publisher_OperatorAssign((Attica__Publisher*)self, (Attica__Publisher*)other);
}

void k_attica__publisher_set_id(void* self, const char* id) {
    Attica__Publisher_SetId((Attica__Publisher*)self, qstring(id));
}

const char* k_attica__publisher_id(void* self) {
    libqt_string _str = Attica__Publisher_Id((Attica__Publisher*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__publisher_set_name(void* self, const char* name) {
    Attica__Publisher_SetName((Attica__Publisher*)self, qstring(name));
}

const char* k_attica__publisher_name(void* self) {
    libqt_string _str = Attica__Publisher_Name((Attica__Publisher*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__publisher_set_url(void* self, const char* url) {
    Attica__Publisher_SetUrl((Attica__Publisher*)self, qstring(url));
}

const char* k_attica__publisher_url(void* self) {
    libqt_string _str = Attica__Publisher_Url((Attica__Publisher*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__publisher_add_field(void* self, void* param1) {
    Attica__Publisher_AddField((Attica__Publisher*)self, (Attica__Field*)param1);
}

libqt_list /* of Attica__Field* */ k_attica__publisher_fields(void* self) {
    libqt_list _arr = Attica__Publisher_Fields((Attica__Publisher*)self);
    return _arr;
}

void k_attica__publisher_add_target(void* self, void* param1) {
    Attica__Publisher_AddTarget((Attica__Publisher*)self, (Attica__Target*)param1);
}

libqt_list /* of Attica__Target* */ k_attica__publisher_targets(void* self) {
    libqt_list _arr = Attica__Publisher_Targets((Attica__Publisher*)self);
    return _arr;
}

bool k_attica__publisher_is_valid(void* self) {
    return Attica__Publisher_IsValid((Attica__Publisher*)self);
}

void k_attica__publisher_delete(void* self) {
    Attica__Publisher_Delete((Attica__Publisher*)(self));
}
