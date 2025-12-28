#include "libproject.hpp"
#include "libproject.h"

Attica__Project* k_attica__project_new() {
    return Attica__Project_new();
}

Attica__Project* k_attica__project_new2(void* other) {
    return Attica__Project_new2((Attica__Project*)other);
}

void k_attica__project_operator_assign(void* self, void* other) {
    Attica__Project_OperatorAssign((Attica__Project*)self, (Attica__Project*)other);
}

void k_attica__project_set_id(void* self, const char* id) {
    Attica__Project_SetId((Attica__Project*)self, qstring(id));
}

const char* k_attica__project_id(void* self) {
    libqt_string _str = Attica__Project_Id((Attica__Project*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__project_set_name(void* self, const char* name) {
    Attica__Project_SetName((Attica__Project*)self, qstring(name));
}

const char* k_attica__project_name(void* self) {
    libqt_string _str = Attica__Project_Name((Attica__Project*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__project_set_version(void* self, const char* version) {
    Attica__Project_SetVersion((Attica__Project*)self, qstring(version));
}

const char* k_attica__project_version(void* self) {
    libqt_string _str = Attica__Project_Version((Attica__Project*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__project_set_url(void* self, const char* url) {
    Attica__Project_SetUrl((Attica__Project*)self, qstring(url));
}

const char* k_attica__project_url(void* self) {
    libqt_string _str = Attica__Project_Url((Attica__Project*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__project_set_license(void* self, const char* license) {
    Attica__Project_SetLicense((Attica__Project*)self, qstring(license));
}

const char* k_attica__project_license(void* self) {
    libqt_string _str = Attica__Project_License((Attica__Project*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__project_set_summary(void* self, const char* summary) {
    Attica__Project_SetSummary((Attica__Project*)self, qstring(summary));
}

const char* k_attica__project_summary(void* self) {
    libqt_string _str = Attica__Project_Summary((Attica__Project*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__project_set_description(void* self, const char* description) {
    Attica__Project_SetDescription((Attica__Project*)self, qstring(description));
}

const char* k_attica__project_description(void* self) {
    libqt_string _str = Attica__Project_Description((Attica__Project*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__project_set_developers(void* self, const char* developers[static 1]) {
    size_t developers_len = libqt_strv_length(developers);
    libqt_string* developers_qstr = (libqt_string*)malloc(developers_len * sizeof(libqt_string));
    if (developers_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_attica__project_set_developers");
        abort();
    }
    for (size_t i = 0; i < developers_len; ++i) {
        developers_qstr[i] = qstring(developers[i]);
    }
    libqt_list developers_list = qlist(developers_qstr, developers_len);
    Attica__Project_SetDevelopers((Attica__Project*)self, developers_list);
    free(developers_qstr);
}

const char** k_attica__project_developers(void* self) {
    libqt_list _arr = Attica__Project_Developers((Attica__Project*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_attica__project_developers");
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

void k_attica__project_set_requirements(void* self, const char* requirements) {
    Attica__Project_SetRequirements((Attica__Project*)self, qstring(requirements));
}

const char* k_attica__project_requirements(void* self) {
    libqt_string _str = Attica__Project_Requirements((Attica__Project*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__project_set_spec_file(void* self, const char* specFile) {
    Attica__Project_SetSpecFile((Attica__Project*)self, qstring(specFile));
}

const char* k_attica__project_spec_file(void* self) {
    libqt_string _str = Attica__Project_SpecFile((Attica__Project*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_attica__project_add_extended_attribute(void* self, const char* key, const char* value) {
    Attica__Project_AddExtendedAttribute((Attica__Project*)self, qstring(key), qstring(value));
}

const char* k_attica__project_extended_attribute(void* self, const char* key) {
    libqt_string _str = Attica__Project_ExtendedAttribute((Attica__Project*)self, qstring(key));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_map /* of const char* to const char* */ k_attica__project_extended_attributes(void* self) {
    // Convert QMap<QString,QString> to libqt_map
    libqt_map _out = Attica__Project_ExtendedAttributes((Attica__Project*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    const char** _ret_keys = (const char**)malloc(_ret.len * sizeof(const char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Memory allocation failed in k_attica__project_extended_attributes");
        abort();
    }
    libqt_string* _out_values = (libqt_string*)_out.values;
    const char** _ret_values = (const char**)malloc(_ret.len * sizeof(const char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Memory allocation failed in k_attica__project_extended_attributes");
        free(_out_keys);
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = _out_keys[i].data;
        _ret_values[i] = _out_values[i].data;
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = (void*)_ret_values;
    free(_out_keys);
    free(_out_values);
    return _ret;
}

bool k_attica__project_is_valid(void* self) {
    return Attica__Project_IsValid((Attica__Project*)self);
}

void k_attica__project_delete(void* self) {
    Attica__Project_Delete((Attica__Project*)(self));
}
