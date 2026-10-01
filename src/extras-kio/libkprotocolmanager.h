#pragma once
#ifndef EXTRAS_KIO_LIBKPROTOCOLMANAGER_H
#define EXTRAS_KIO_LIBKPROTOCOLMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html)

/// k_protocolmanager_new constructs a new KProtocolManager object.
///
/// @param other KProtocolManager*
///
KProtocolManager* k_protocolmanager_new(const void* other);

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html)

/// k_protocolmanager_new2 constructs a new KProtocolManager object and invalidates the source KProtocolManager object.
///
/// @param other KProtocolManager*
///
KProtocolManager* k_protocolmanager_new2(void* other);

/// k_protocolmanager_copy_assign shallow copies `other` into `self`.
///
/// @param self KProtocolManager*
/// @param other KProtocolManager*
///
void k_protocolmanager_copy_assign(void* self, void* other);

/// k_protocolmanager_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self KProtocolManager*
/// @param other KProtocolManager*
///
void k_protocolmanager_move_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html#readTimeout)
///
int32_t k_protocolmanager_read_timeout();

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html#connectTimeout)
///
int32_t k_protocolmanager_connect_timeout();

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html#proxyConnectTimeout)
///
int32_t k_protocolmanager_proxy_connect_timeout();

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html#responseTimeout)
///
int32_t k_protocolmanager_response_timeout();

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html#autoResume)
///
bool k_protocolmanager_auto_resume();

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html#markPartial)
///
bool k_protocolmanager_mark_partial();

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html#minimumKeepSize)
///
int32_t k_protocolmanager_minimum_keep_size();

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsListing)
///
/// @param url QUrl*
///
bool k_protocolmanager_supports_listing(const void* url);

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsReading)
///
/// @param url QUrl*
///
bool k_protocolmanager_supports_reading(const void* url);

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsWriting)
///
/// @param url QUrl*
///
bool k_protocolmanager_supports_writing(const void* url);

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsMakeDir)
///
/// @param url QUrl*
///
bool k_protocolmanager_supports_make_dir(const void* url);

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsDeleting)
///
/// @param url QUrl*
///
bool k_protocolmanager_supports_deleting(const void* url);

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsLinking)
///
/// @param url QUrl*
///
bool k_protocolmanager_supports_linking(const void* url);

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsMoving)
///
/// @param url QUrl*
///
bool k_protocolmanager_supports_moving(const void* url);

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsOpening)
///
/// @param url QUrl*
///
bool k_protocolmanager_supports_opening(const void* url);

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsTruncating)
///
/// @param url QUrl*
///
bool k_protocolmanager_supports_truncating(const void* url);

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html#canCopyFromFile)
///
/// @param url QUrl*
///
bool k_protocolmanager_can_copy_from_file(const void* url);

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html#canCopyToFile)
///
/// @param url QUrl*
///
bool k_protocolmanager_can_copy_to_file(const void* url);

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html#canRenameFromFile)
///
/// @param url QUrl*
///
bool k_protocolmanager_can_rename_from_file(const void* url);

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html#canRenameToFile)
///
/// @param url QUrl*
///
bool k_protocolmanager_can_rename_to_file(const void* url);

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html#canDeleteRecursive)
///
/// @param url QUrl*
///
bool k_protocolmanager_can_delete_recursive(const void* url);

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html#fileNameUsedForCopying)
///
/// @param url QUrl*
///
/// @return enum KProtocolInfo__FileNameUsedForCopying
///
int32_t k_protocolmanager_file_name_used_for_copying(const void* url);

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html#defaultMimetype)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param url QUrl*
///
const char* k_protocolmanager_default_mimetype(const void* url);

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html#inputType)
///
/// @param url QUrl*
///
/// @return enum KProtocolInfo__ExtraField__Type
///
int32_t k_protocolmanager_input_type(const void* url);

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html#outputType)
///
/// @param url QUrl*
///
/// @return enum KProtocolInfo__ExtraField__Type
///
int32_t k_protocolmanager_output_type(const void* url);

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html#listing)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param url QUrl*
///
const char** k_protocolmanager_listing(const void* url);

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html#isSourceProtocol)
///
/// @param url QUrl*
///
bool k_protocolmanager_is_source_protocol(const void* url);

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html#protocolForArchiveMimetype)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param mimeType const char*
///
const char* k_protocolmanager_protocol_for_archive_mimetype(const char* mimeType);

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html#reparseConfiguration)
///
void k_protocolmanager_reparse_configuration();

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html#charsetFor)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param url QUrl*
///
const char* k_protocolmanager_charset_for(const void* url);

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html#supportsPermissions)
///
/// @param url QUrl*
///
bool k_protocolmanager_supports_permissions(const void* url);

/// [Upstream resources](https://api.kde.org/kprotocolmanager.html#dtor.KProtocolManager)
///
/// Delete this object from C++ memory.
///
/// @param self KProtocolManager*
///
void k_protocolmanager_delete(void* self);

#endif
