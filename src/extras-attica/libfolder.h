#pragma once
#ifndef SRC_EXTRAS_ATTICAQT6C_LIBFOLDER_H
#define SRC_EXTRAS_ATTICAQT6C_LIBFOLDER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/attica-folder.html

/// k_attica__folder_new constructs a new Attica::Folder object.
///
Attica__Folder* k_attica__folder_new();

/// k_attica__folder_new2 constructs a new Attica::Folder object.
///
/// @param other Attica__Folder*
Attica__Folder* k_attica__folder_new2(void* other);

/// [Qt documentation](https://api.kde.org/attica-folder.html#operator-eq)
///
/// @param self Attica__Folder*
/// @param other Attica__Folder*
void k_attica__folder_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/attica-folder.html#setId)
///
/// @param self Attica__Folder*
/// @param id const char*
void k_attica__folder_set_id(void* self, const char* id);

/// [Qt documentation](https://api.kde.org/attica-folder.html#id)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Folder*
const char* k_attica__folder_id(void* self);

/// [Qt documentation](https://api.kde.org/attica-folder.html#setName)
///
/// @param self Attica__Folder*
/// @param name const char*
void k_attica__folder_set_name(void* self, const char* name);

/// [Qt documentation](https://api.kde.org/attica-folder.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Folder*
const char* k_attica__folder_name(void* self);

/// [Qt documentation](https://api.kde.org/attica-folder.html#setMessageCount)
///
/// @param self Attica__Folder*
/// @param messageCount int
void k_attica__folder_set_message_count(void* self, int messageCount);

/// [Qt documentation](https://api.kde.org/attica-folder.html#messageCount)
///
/// @param self Attica__Folder*
int32_t k_attica__folder_message_count(void* self);

/// [Qt documentation](https://api.kde.org/attica-folder.html#setType)
///
/// @param self Attica__Folder*
/// @param type const char*
void k_attica__folder_set_type(void* self, const char* type);

/// [Qt documentation](https://api.kde.org/attica-folder.html#type)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Attica__Folder*
const char* k_attica__folder_type(void* self);

/// [Qt documentation](https://api.kde.org/attica-folder.html#isValid)
///
/// @param self Attica__Folder*
bool k_attica__folder_is_valid(void* self);

/// Delete this object from C++ memory.
///
/// @param self Attica__Folder*
void k_attica__folder_delete(void* self);

#endif
