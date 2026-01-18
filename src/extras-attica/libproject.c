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
        fprintf(stderr, "Failed to allocate memory for string list in k_attica__project_set_developers\n");
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
        fprintf(stderr, "Failed to allocate memory for string list in k_attica__project_developers\n");
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
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string keys in k_attica__project_extended_attributes\n");
        abort();
    }
    libqt_string* _out_values = (libqt_string*)_out.values;
    char** _ret_values = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_values == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string values in k_attica__project_extended_attributes\n");
        free(_out.keys);
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (char*)malloc(_out_keys[i].len + 1);
        if (_ret_keys[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
            }
            free(_ret_keys);
            fprintf(stderr, "Failed to allocate memory for map keys in k_attica__project_extended_attributes\n");
            abort();
        }
        memcpy(_ret_keys[i], _out_keys[i].data, _out_keys[i].len);
        _ret_keys[i][_out_keys[i].len] = '\0';
        _ret_values[i] = (char*)malloc(_out_values[i].len + 1);
        if (_ret_values[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
                libqt_free(_ret_values[j]);
            }
            free(_ret_keys);
            free(_ret_values);
            fprintf(stderr, "Failed to allocate memory for map string values in k_attica__project_extended_attributes\n");
            abort();
        }
        memcpy(_ret_values[i], _out_values[i].data, _out_values[i].len);
        _ret_values[i][_out_values[i].len] = '\0';
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = (void*)_ret_values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_keys[i].data);
        libqt_free(_out_values[i].data);
    }
    free(_out.keys);
    free(_out.values);
    return _ret;
}

bool k_attica__project_is_valid(void* self) {
    return Attica__Project_IsValid((Attica__Project*)self);
}

void k_attica__project_delete(void* self) {
    Attica__Project_Delete((Attica__Project*)(self));
}
