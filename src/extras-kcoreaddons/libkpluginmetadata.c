#include "libkaboutdata.hpp"
#include "../libqjsonobject.hpp"
#include "../libqpluginloader.hpp"
#include "libkpluginmetadata.hpp"
#include "libkpluginmetadata.h"

KPluginMetaData* k_pluginmetadata_new() {
    return KPluginMetaData_new();
}

KPluginMetaData* k_pluginmetadata_new2(void* loader) {
    return KPluginMetaData_new2((QPluginLoader*)loader);
}

KPluginMetaData* k_pluginmetadata_new3(const char* pluginFile) {
    return KPluginMetaData_new3(qstring(pluginFile));
}

KPluginMetaData* k_pluginmetadata_new4(void* metaData, const char* fileName) {
    return KPluginMetaData_new4((QJsonObject*)metaData, qstring(fileName));
}

KPluginMetaData* k_pluginmetadata_new5(void* param1) {
    return KPluginMetaData_new5((KPluginMetaData*)param1);
}

KPluginMetaData* k_pluginmetadata_new6(void* loader, int32_t options) {
    return KPluginMetaData_new6((QPluginLoader*)loader, options);
}

KPluginMetaData* k_pluginmetadata_new7(const char* pluginFile, int32_t options) {
    return KPluginMetaData_new7(qstring(pluginFile), options);
}

void k_pluginmetadata_operator_assign(void* self, void* param1) {
    KPluginMetaData_OperatorAssign((KPluginMetaData*)self, (KPluginMetaData*)param1);
}

KPluginMetaData* k_pluginmetadata_from_json_file(const char* jsonFile) {
    return KPluginMetaData_FromJsonFile(qstring(jsonFile));
}

KPluginMetaData* k_pluginmetadata_find_plugin_by_id(const char* directory, const char* pluginId) {
    return KPluginMetaData_FindPluginById(qstring(directory), qstring(pluginId));
}

bool k_pluginmetadata_is_valid(void* self) {
    return KPluginMetaData_IsValid((KPluginMetaData*)self);
}

bool k_pluginmetadata_is_hidden(void* self) {
    return KPluginMetaData_IsHidden((KPluginMetaData*)self);
}

const char* k_pluginmetadata_file_name(void* self) {
    libqt_string _str = KPluginMetaData_FileName((KPluginMetaData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QJsonObject* k_pluginmetadata_raw_data(void* self) {
    return KPluginMetaData_RawData((KPluginMetaData*)self);
}

const char* k_pluginmetadata_name(void* self) {
    libqt_string _str = KPluginMetaData_Name((KPluginMetaData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pluginmetadata_description(void* self) {
    libqt_string _str = KPluginMetaData_Description((KPluginMetaData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of KAboutPerson* */ k_pluginmetadata_authors(void* self) {
    libqt_list _arr = KPluginMetaData_Authors((KPluginMetaData*)self);
    return _arr;
}

libqt_list /* of KAboutPerson* */ k_pluginmetadata_translators(void* self) {
    libqt_list _arr = KPluginMetaData_Translators((KPluginMetaData*)self);
    return _arr;
}

libqt_list /* of KAboutPerson* */ k_pluginmetadata_other_contributors(void* self) {
    libqt_list _arr = KPluginMetaData_OtherContributors((KPluginMetaData*)self);
    return _arr;
}

const char* k_pluginmetadata_category(void* self) {
    libqt_string _str = KPluginMetaData_Category((KPluginMetaData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pluginmetadata_icon_name(void* self) {
    libqt_string _str = KPluginMetaData_IconName((KPluginMetaData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pluginmetadata_license(void* self) {
    libqt_string _str = KPluginMetaData_License((KPluginMetaData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pluginmetadata_license_text(void* self) {
    libqt_string _str = KPluginMetaData_LicenseText((KPluginMetaData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pluginmetadata_copyright_text(void* self) {
    libqt_string _str = KPluginMetaData_CopyrightText((KPluginMetaData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pluginmetadata_plugin_id(void* self) {
    libqt_string _str = KPluginMetaData_PluginId((KPluginMetaData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pluginmetadata_version(void* self) {
    libqt_string _str = KPluginMetaData_Version((KPluginMetaData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pluginmetadata_website(void* self) {
    libqt_string _str = KPluginMetaData_Website((KPluginMetaData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pluginmetadata_bug_report_url(void* self) {
    libqt_string _str = KPluginMetaData_BugReportUrl((KPluginMetaData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char** k_pluginmetadata_mime_types(void* self) {
    libqt_list _arr = KPluginMetaData_MimeTypes((KPluginMetaData*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_pluginmetadata_mime_types");
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

bool k_pluginmetadata_supports_mime_type(void* self, const char* mimeType) {
    return KPluginMetaData_SupportsMimeType((KPluginMetaData*)self, qstring(mimeType));
}

const char** k_pluginmetadata_form_factors(void* self) {
    libqt_list _arr = KPluginMetaData_FormFactors((KPluginMetaData*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_pluginmetadata_form_factors");
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

bool k_pluginmetadata_is_enabled_by_default(void* self) {
    return KPluginMetaData_IsEnabledByDefault((KPluginMetaData*)self);
}

const char* k_pluginmetadata_value2(void* self, const char* key) {
    libqt_string _str = KPluginMetaData_Value2((KPluginMetaData*)self, qstring(key));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_pluginmetadata_value4(void* self, const char* key, bool defaultValue) {
    return KPluginMetaData_Value4((KPluginMetaData*)self, qstring(key), defaultValue);
}

int32_t k_pluginmetadata_value6(void* self, const char* key, int defaultValue) {
    return KPluginMetaData_Value6((KPluginMetaData*)self, qstring(key), defaultValue);
}

const char** k_pluginmetadata_value8(void* self, const char* key, const char* defaultValue[static 1]) {
    size_t defaultValue_len = libqt_strv_length(defaultValue);
    libqt_string* defaultValue_qstr = (libqt_string*)malloc(defaultValue_len * sizeof(libqt_string));
    if (defaultValue_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_pluginmetadata_value8");
        abort();
    }
    for (size_t i = 0; i < defaultValue_len; ++i) {
        defaultValue_qstr[i] = qstring(defaultValue[i]);
    }
    libqt_list defaultValue_list = qlist(defaultValue_qstr, defaultValue_len);
    libqt_list _arr = KPluginMetaData_Value8((KPluginMetaData*)self, qstring(key), defaultValue_list);
    free(defaultValue_qstr);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_pluginmetadata_value8");
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

bool k_pluginmetadata_operator_equal(void* self, void* other) {
    return KPluginMetaData_OperatorEqual((KPluginMetaData*)self, (KPluginMetaData*)other);
}

bool k_pluginmetadata_operator_not_equal(void* self, void* other) {
    return KPluginMetaData_OperatorNotEqual((KPluginMetaData*)self, (KPluginMetaData*)other);
}

bool k_pluginmetadata_is_static_plugin(void* self) {
    return KPluginMetaData_IsStaticPlugin((KPluginMetaData*)self);
}

KPluginMetaData* k_pluginmetadata_find_plugin_by_id3(const char* directory, const char* pluginId, int32_t options) {
    return KPluginMetaData_FindPluginById3(qstring(directory), qstring(pluginId), options);
}

const char* k_pluginmetadata_value23(void* self, const char* key, const char* defaultValue) {
    libqt_string _str = KPluginMetaData_Value23((KPluginMetaData*)self, qstring(key), qstring(defaultValue));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pluginmetadata_delete(void* self) {
    KPluginMetaData_Delete((KPluginMetaData*)(self));
}
