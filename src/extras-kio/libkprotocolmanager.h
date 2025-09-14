#pragma once
#ifndef SRC_EXTRAS_KIOQT6C_LIBKPROTOCOLMANAGER_H
#define SRC_EXTRAS_KIOQT6C_LIBKPROTOCOLMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kprotocolmanager.html

/// k_protocolmanager_new constructs a new KProtocolManager object.
///
/// @param other KProtocolManager*
KProtocolManager* k_protocolmanager_new(void* other);

/// k_protocolmanager_new2 constructs a new KProtocolManager object and invalidates the source KProtocolManager object.
///
/// @param other KProtocolManager*
KProtocolManager* k_protocolmanager_new2(void* other);

/// k_protocolmanager_copy_assign shallow copies `other` into `self`.
///
/// @param self KProtocolManager*
/// @param other KProtocolManager*
void k_protocolmanager_copy_assign(void* self, void* other);

/// k_protocolmanager_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self KProtocolManager*
/// @param other KProtocolManager*
void k_protocolmanager_move_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/kprotocolmanager.html#readTimeout)
///
int32_t k_protocolmanager_read_timeout();

/// [Qt documentation](https://api.kde.org/kprotocolmanager.html#connectTimeout)
///
int32_t k_protocolmanager_connect_timeout();

/// [Qt documentation](https://api.kde.org/kprotocolmanager.html#proxyConnectTimeout)
///
int32_t k_protocolmanager_proxy_connect_timeout();

/// [Qt documentation](https://api.kde.org/kprotocolmanager.html#responseTimeout)
///
int32_t k_protocolmanager_response_timeout();

/// [Qt documentation](https://api.kde.org/kprotocolmanager.html#autoResume)
///
bool k_protocolmanager_auto_resume();

/// [Qt documentation](https://api.kde.org/kprotocolmanager.html#markPartial)
///
bool k_protocolmanager_mark_partial();

/// [Qt documentation](https://api.kde.org/kprotocolmanager.html#minimumKeepSize)
///
int32_t k_protocolmanager_minimum_keep_size();

/// [Qt documentation](https://api.kde.org/kprotocolmanager.html#supportsListing)
///
/// @param url QUrl*
bool k_protocolmanager_supports_listing(void* url);

/// [Qt documentation](https://api.kde.org/kprotocolmanager.html#supportsReading)
///
/// @param url QUrl*
bool k_protocolmanager_supports_reading(void* url);

/// [Qt documentation](https://api.kde.org/kprotocolmanager.html#supportsWriting)
///
/// @param url QUrl*
bool k_protocolmanager_supports_writing(void* url);

/// [Qt documentation](https://api.kde.org/kprotocolmanager.html#supportsMakeDir)
///
/// @param url QUrl*
bool k_protocolmanager_supports_make_dir(void* url);

/// [Qt documentation](https://api.kde.org/kprotocolmanager.html#supportsDeleting)
///
/// @param url QUrl*
bool k_protocolmanager_supports_deleting(void* url);

/// [Qt documentation](https://api.kde.org/kprotocolmanager.html#supportsLinking)
///
/// @param url QUrl*
bool k_protocolmanager_supports_linking(void* url);

/// [Qt documentation](https://api.kde.org/kprotocolmanager.html#supportsMoving)
///
/// @param url QUrl*
bool k_protocolmanager_supports_moving(void* url);

/// [Qt documentation](https://api.kde.org/kprotocolmanager.html#supportsOpening)
///
/// @param url QUrl*
bool k_protocolmanager_supports_opening(void* url);

/// [Qt documentation](https://api.kde.org/kprotocolmanager.html#supportsTruncating)
///
/// @param url QUrl*
bool k_protocolmanager_supports_truncating(void* url);

/// [Qt documentation](https://api.kde.org/kprotocolmanager.html#canCopyFromFile)
///
/// @param url QUrl*
bool k_protocolmanager_can_copy_from_file(void* url);

/// [Qt documentation](https://api.kde.org/kprotocolmanager.html#canCopyToFile)
///
/// @param url QUrl*
bool k_protocolmanager_can_copy_to_file(void* url);

/// [Qt documentation](https://api.kde.org/kprotocolmanager.html#canRenameFromFile)
///
/// @param url QUrl*
bool k_protocolmanager_can_rename_from_file(void* url);

/// [Qt documentation](https://api.kde.org/kprotocolmanager.html#canRenameToFile)
///
/// @param url QUrl*
bool k_protocolmanager_can_rename_to_file(void* url);

/// [Qt documentation](https://api.kde.org/kprotocolmanager.html#canDeleteRecursive)
///
/// @param url QUrl*
bool k_protocolmanager_can_delete_recursive(void* url);

/// [Qt documentation](https://api.kde.org/kprotocolmanager.html#defaultMimetype)
///
/// Caller is responsible for freeing the returned memory
///
/// @param url QUrl*
const char* k_protocolmanager_default_mimetype(void* url);

/// [Qt documentation](https://api.kde.org/kprotocolmanager.html#inputType)
///
/// @param url QUrl*
///
/// @return enum KProtocolInfo__ExtraField__Type
int32_t k_protocolmanager_input_type(void* url);

/// [Qt documentation](https://api.kde.org/kprotocolmanager.html#outputType)
///
/// @param url QUrl*
///
/// @return enum KProtocolInfo__ExtraField__Type
int32_t k_protocolmanager_output_type(void* url);

/// [Qt documentation](https://api.kde.org/kprotocolmanager.html#listing)
///
/// Caller is responsible for freeing the returned memory
///
/// @param url QUrl*
const char** k_protocolmanager_listing(void* url);

/// [Qt documentation](https://api.kde.org/kprotocolmanager.html#isSourceProtocol)
///
/// @param url QUrl*
bool k_protocolmanager_is_source_protocol(void* url);

/// [Qt documentation](https://api.kde.org/kprotocolmanager.html#protocolForArchiveMimetype)
///
/// Caller is responsible for freeing the returned memory
///
/// @param mimeType const char*
const char* k_protocolmanager_protocol_for_archive_mimetype(const char* mimeType);

/// [Qt documentation](https://api.kde.org/kprotocolmanager.html#reparseConfiguration)
///
void k_protocolmanager_reparse_configuration();

/// [Qt documentation](https://api.kde.org/kprotocolmanager.html#charsetFor)
///
/// Caller is responsible for freeing the returned memory
///
/// @param url QUrl*
const char* k_protocolmanager_charset_for(void* url);

/// [Qt documentation](https://api.kde.org/kprotocolmanager.html#supportsPermissions)
///
/// @param url QUrl*
bool k_protocolmanager_supports_permissions(void* url);

/// [Qt documentation](https://api.kde.org/kprotocolmanager.html#dtor.KProtocolManager)
///
/// Delete this object from C++ memory.
///
/// @param self KProtocolManager*
void k_protocolmanager_delete(void* self);

#endif
