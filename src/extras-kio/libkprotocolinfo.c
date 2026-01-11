#include "../libqurl.hpp"
#include "libkprotocolinfo.hpp"
#include "libkprotocolinfo.h"

const char** k_protocolinfo_protocols() {
    libqt_list _arr = KProtocolInfo_Protocols();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_protocolinfo_protocols");
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

bool k_protocolinfo_is_known_protocol(void* url) {
    return KProtocolInfo_IsKnownProtocol((QUrl*)url);
}

bool k_protocolinfo_is_known_protocol2(const char* protocol) {
    return KProtocolInfo_IsKnownProtocol2(qstring(protocol));
}

const char* k_protocolinfo_exec(const char* protocol) {
    libqt_string _str = KProtocolInfo_Exec(qstring(protocol));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of KProtocolInfo__ExtraField* */ k_protocolinfo_extra_fields(void* url) {
    libqt_list _arr = KProtocolInfo_ExtraFields((QUrl*)url);
    return _arr;
}

bool k_protocolinfo_is_helper_protocol(void* url) {
    return KProtocolInfo_IsHelperProtocol((QUrl*)url);
}

bool k_protocolinfo_is_helper_protocol2(const char* protocol) {
    return KProtocolInfo_IsHelperProtocol2(qstring(protocol));
}

bool k_protocolinfo_is_filter_protocol(void* url) {
    return KProtocolInfo_IsFilterProtocol((QUrl*)url);
}

bool k_protocolinfo_is_filter_protocol2(const char* protocol) {
    return KProtocolInfo_IsFilterProtocol2(qstring(protocol));
}

const char* k_protocolinfo_icon(const char* protocol) {
    libqt_string _str = KProtocolInfo_Icon(qstring(protocol));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_protocolinfo_config(const char* protocol) {
    libqt_string _str = KProtocolInfo_Config(qstring(protocol));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_protocolinfo_max_workers(const char* protocol) {
    return KProtocolInfo_MaxWorkers(qstring(protocol));
}

int32_t k_protocolinfo_max_workers_per_host(const char* protocol) {
    return KProtocolInfo_MaxWorkersPerHost(qstring(protocol));
}

bool k_protocolinfo_determine_mimetype_from_extension(const char* protocol) {
    return KProtocolInfo_DetermineMimetypeFromExtension(qstring(protocol));
}

const char* k_protocolinfo_default_mimetype(const char* protocol) {
    libqt_string _str = KProtocolInfo_DefaultMimetype(qstring(protocol));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_protocolinfo_doc_path(const char* protocol) {
    libqt_string _str = KProtocolInfo_DocPath(qstring(protocol));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_protocolinfo_protocol_class(const char* protocol) {
    libqt_string _str = KProtocolInfo_ProtocolClass(qstring(protocol));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_protocolinfo_show_file_preview(const char* protocol) {
    return KProtocolInfo_ShowFilePreview(qstring(protocol));
}

const char** k_protocolinfo_capabilities(const char* protocol) {
    libqt_list _arr = KProtocolInfo_Capabilities(qstring(protocol));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_protocolinfo_capabilities");
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

const char** k_protocolinfo_archive_mimetypes(const char* protocol) {
    libqt_list _arr = KProtocolInfo_ArchiveMimetypes(qstring(protocol));
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_protocolinfo_archive_mimetypes");
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

const char* k_protocolinfo_proxied_by(const char* protocol) {
    libqt_string _str = KProtocolInfo_ProxiedBy(qstring(protocol));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_protocolinfo_is_known_protocol22(const char* protocol, bool updateCacheIfNotfound) {
    return KProtocolInfo_IsKnownProtocol22(qstring(protocol), updateCacheIfNotfound);
}

void k_protocolinfo_delete(void* self) {
    KProtocolInfo_Delete((KProtocolInfo*)(self));
}

KProtocolInfo__ExtraField* k_protocolinfo__extrafield_new() {
    return KProtocolInfo__ExtraField_new();
}

KProtocolInfo__ExtraField* k_protocolinfo__extrafield_new2(const char* _name, int32_t _type) {
    return KProtocolInfo__ExtraField_new2(qstring(_name), _type);
}

KProtocolInfo__ExtraField* k_protocolinfo__extrafield_new3(void* param1) {
    return KProtocolInfo__ExtraField_new3((KProtocolInfo__ExtraField*)param1);
}

const char* k_protocolinfo__extrafield_name(void* self) {
    libqt_string name_str = KProtocolInfo__ExtraField_Name((KProtocolInfo__ExtraField*)self);
    char* name_ret = qstring_to_char(name_str);
    libqt_string_free(&name_str);
    return name_ret;
}

void k_protocolinfo__extrafield_set_name(void* self, const char* name) {
    KProtocolInfo__ExtraField_SetName((KProtocolInfo__ExtraField*)self, qstring(name));
}

int32_t k_protocolinfo__extrafield_type(void* self) {
    return KProtocolInfo__ExtraField_Type((KProtocolInfo__ExtraField*)self);
}

void k_protocolinfo__extrafield_set_type(void* self, int32_t type) {
    KProtocolInfo__ExtraField_SetType((KProtocolInfo__ExtraField*)self, type);
}

void k_protocolinfo__extrafield_operator_assign(void* self, void* param1) {
    KProtocolInfo__ExtraField_OperatorAssign((KProtocolInfo__ExtraField*)self, (KProtocolInfo__ExtraField*)param1);
}

void k_protocolinfo__extrafield_delete(void* self) {
    KProtocolInfo__ExtraField_Delete((KProtocolInfo__ExtraField*)(self));
}
