#pragma once
#ifndef SRC_EXTRAS_KIOQT6C_LIBKPROTOCOLINFO_H
#define SRC_EXTRAS_KIOQT6C_LIBKPROTOCOLINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kprotocolinfo.html

/// [Qt documentation](https://api.kde.org/kprotocolinfo.html#protocols)
///
/// Caller is responsible for freeing the returned memory
///
const char** k_protocolinfo_protocols();

/// [Qt documentation](https://api.kde.org/kprotocolinfo.html#isKnownProtocol)
///
/// @param url QUrl*
bool k_protocolinfo_is_known_protocol(void* url);

/// [Qt documentation](https://api.kde.org/kprotocolinfo.html#isKnownProtocol)
///
/// @param protocol const char*
bool k_protocolinfo_is_known_protocol2(const char* protocol);

/// [Qt documentation](https://api.kde.org/kprotocolinfo.html#exec)
///
/// Caller is responsible for freeing the returned memory
///
/// @param protocol const char*
const char* k_protocolinfo_exec(const char* protocol);

/// [Qt documentation](https://api.kde.org/kprotocolinfo.html#extraFields)
///
/// @param url QUrl*
libqt_list /* of KProtocolInfo__ExtraField* */ k_protocolinfo_extra_fields(void* url);

/// [Qt documentation](https://api.kde.org/kprotocolinfo.html#isHelperProtocol)
///
/// @param url QUrl*
bool k_protocolinfo_is_helper_protocol(void* url);

/// [Qt documentation](https://api.kde.org/kprotocolinfo.html#isHelperProtocol)
///
/// @param protocol const char*
bool k_protocolinfo_is_helper_protocol2(const char* protocol);

/// [Qt documentation](https://api.kde.org/kprotocolinfo.html#isFilterProtocol)
///
/// @param url QUrl*
bool k_protocolinfo_is_filter_protocol(void* url);

/// [Qt documentation](https://api.kde.org/kprotocolinfo.html#isFilterProtocol)
///
/// @param protocol const char*
bool k_protocolinfo_is_filter_protocol2(const char* protocol);

/// [Qt documentation](https://api.kde.org/kprotocolinfo.html#icon)
///
/// Caller is responsible for freeing the returned memory
///
/// @param protocol const char*
const char* k_protocolinfo_icon(const char* protocol);

/// [Qt documentation](https://api.kde.org/kprotocolinfo.html#config)
///
/// Caller is responsible for freeing the returned memory
///
/// @param protocol const char*
const char* k_protocolinfo_config(const char* protocol);

/// [Qt documentation](https://api.kde.org/kprotocolinfo.html#maxWorkers)
///
/// @param protocol const char*
int32_t k_protocolinfo_max_workers(const char* protocol);

/// [Qt documentation](https://api.kde.org/kprotocolinfo.html#maxWorkersPerHost)
///
/// @param protocol const char*
int32_t k_protocolinfo_max_workers_per_host(const char* protocol);

/// [Qt documentation](https://api.kde.org/kprotocolinfo.html#determineMimetypeFromExtension)
///
/// @param protocol const char*
bool k_protocolinfo_determine_mimetype_from_extension(const char* protocol);

/// [Qt documentation](https://api.kde.org/kprotocolinfo.html#defaultMimetype)
///
/// Caller is responsible for freeing the returned memory
///
/// @param protocol const char*
const char* k_protocolinfo_default_mimetype(const char* protocol);

/// [Qt documentation](https://api.kde.org/kprotocolinfo.html#docPath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param protocol const char*
const char* k_protocolinfo_doc_path(const char* protocol);

/// [Qt documentation](https://api.kde.org/kprotocolinfo.html#protocolClass)
///
/// Caller is responsible for freeing the returned memory
///
/// @param protocol const char*
const char* k_protocolinfo_protocol_class(const char* protocol);

/// [Qt documentation](https://api.kde.org/kprotocolinfo.html#showFilePreview)
///
/// @param protocol const char*
bool k_protocolinfo_show_file_preview(const char* protocol);

/// [Qt documentation](https://api.kde.org/kprotocolinfo.html#capabilities)
///
/// Caller is responsible for freeing the returned memory
///
/// @param protocol const char*
const char** k_protocolinfo_capabilities(const char* protocol);

/// [Qt documentation](https://api.kde.org/kprotocolinfo.html#archiveMimetypes)
///
/// Caller is responsible for freeing the returned memory
///
/// @param protocol const char*
const char** k_protocolinfo_archive_mimetypes(const char* protocol);

/// [Qt documentation](https://api.kde.org/kprotocolinfo.html#proxiedBy)
///
/// Caller is responsible for freeing the returned memory
///
/// @param protocol const char*
const char* k_protocolinfo_proxied_by(const char* protocol);

/// [Qt documentation](https://api.kde.org/kprotocolinfo.html#isKnownProtocol)
///
/// @param protocol const char*
/// @param updateCacheIfNotfound bool
bool k_protocolinfo_is_known_protocol22(const char* protocol, bool updateCacheIfNotfound);

/// [Qt documentation](https://api.kde.org/kprotocolinfo.html#dtor.KProtocolInfo)
///
/// Delete this object from C++ memory.
///
/// @param self KProtocolInfo*
void k_protocolinfo_delete(void* self);

/// https://api.kde.org/kprotocolinfo-extrafield.html

/// k_protocolinfo__extrafield_new constructs a new KProtocolInfo::ExtraField object.
///
KProtocolInfo__ExtraField* k_protocolinfo__extrafield_new();

/// k_protocolinfo__extrafield_new2 constructs a new KProtocolInfo::ExtraField object.
///
/// @param _name const char*
/// @param _type enum KProtocolInfo__ExtraField__Type
KProtocolInfo__ExtraField* k_protocolinfo__extrafield_new2(const char* _name, int32_t _type);

/// k_protocolinfo__extrafield_new3 constructs a new KProtocolInfo::ExtraField object.
///
/// @param param1 KProtocolInfo__ExtraField*
KProtocolInfo__ExtraField* k_protocolinfo__extrafield_new3(void* param1);

/// [Qt documentation](https://api.kde.org/kprotocolinfo-extrafield.html#name-var)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KProtocolInfo__ExtraField*
const char* k_protocolinfo__extrafield_name(void* self);

/// [Qt documentation](https://api.kde.org/kprotocolinfo-extrafield.html#name-var)
///
/// @param self KProtocolInfo__ExtraField*
/// @param name const char*
void k_protocolinfo__extrafield_set_name(void* self, const char* name);

/// [Qt documentation](https://api.kde.org/kprotocolinfo-extrafield.html#type-var)
///
/// @param self KProtocolInfo__ExtraField*
///
/// @return enum KProtocolInfo__ExtraField__Type
int32_t k_protocolinfo__extrafield_type(void* self);

/// [Qt documentation](https://api.kde.org/kprotocolinfo-extrafield.html#type-var)
///
/// @param self KProtocolInfo__ExtraField*
/// @param type enum KProtocolInfo__ExtraField__Type
void k_protocolinfo__extrafield_set_type(void* self, int32_t _type);

/// [Qt documentation](https://api.kde.org/kprotocolinfo-extrafield.html#operator-eq)
///
/// @param self KProtocolInfo__ExtraField*
/// @param param1 KProtocolInfo__ExtraField*
void k_protocolinfo__extrafield_operator_assign(void* self, void* param1);

/// Delete this object from C++ memory.
///
/// @param self KProtocolInfo__ExtraField*
void k_protocolinfo__extrafield_delete(void* self);

/// https://api.kde.org/kprotocolinfo.html#types

typedef enum {
    KPROTOCOLINFO_TYPE_T_STREAM = 0,
    KPROTOCOLINFO_TYPE_T_FILESYSTEM = 1,
    KPROTOCOLINFO_TYPE_T_NONE = 2,
    KPROTOCOLINFO_TYPE_T_ERROR = 3
} KProtocolInfo__Type;

typedef enum {
    KPROTOCOLINFO__NAME = 0,
    KPROTOCOLINFO__FROMURL = 1,
    KPROTOCOLINFO__DISPLAYNAME = 2
} KProtocolInfo__;

typedef enum {
    KPROTOCOLINFO_EXTRAFIELD_TYPE_STRING = 10,
    KPROTOCOLINFO_EXTRAFIELD_TYPE_DATETIME = 16,
    KPROTOCOLINFO_EXTRAFIELD_TYPE_INVALID = 0
} KProtocolInfo__ExtraField__Type;

#endif
