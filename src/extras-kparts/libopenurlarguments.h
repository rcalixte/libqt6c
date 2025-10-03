#pragma once
#ifndef SRC_EXTRAS_KPARTSQT6C_LIBOPENURLARGUMENTS_H
#define SRC_EXTRAS_KPARTSQT6C_LIBOPENURLARGUMENTS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kparts-openurlarguments.html

/// k_parts__openurlarguments_new constructs a new KParts::OpenUrlArguments object.
///
KParts__OpenUrlArguments* k_parts__openurlarguments_new();

/// k_parts__openurlarguments_new2 constructs a new KParts::OpenUrlArguments object.
///
/// @param other KParts__OpenUrlArguments*
KParts__OpenUrlArguments* k_parts__openurlarguments_new2(void* other);

/// [Qt documentation](https://api.kde.org/kparts-openurlarguments.html#operator-eq)
///
/// @param self KParts__OpenUrlArguments*
/// @param other KParts__OpenUrlArguments*
void k_parts__openurlarguments_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/kparts-openurlarguments.html#reload)
///
/// @param self KParts__OpenUrlArguments*
bool k_parts__openurlarguments_reload(void* self);

/// [Qt documentation](https://api.kde.org/kparts-openurlarguments.html#setReload)
///
/// @param self KParts__OpenUrlArguments*
/// @param b bool
void k_parts__openurlarguments_set_reload(void* self, bool b);

/// [Qt documentation](https://api.kde.org/kparts-openurlarguments.html#xOffset)
///
/// @param self KParts__OpenUrlArguments*
int32_t k_parts__openurlarguments_x_offset(void* self);

/// [Qt documentation](https://api.kde.org/kparts-openurlarguments.html#setXOffset)
///
/// @param self KParts__OpenUrlArguments*
/// @param x int
void k_parts__openurlarguments_set_x_offset(void* self, int x);

/// [Qt documentation](https://api.kde.org/kparts-openurlarguments.html#yOffset)
///
/// @param self KParts__OpenUrlArguments*
int32_t k_parts__openurlarguments_y_offset(void* self);

/// [Qt documentation](https://api.kde.org/kparts-openurlarguments.html#setYOffset)
///
/// @param self KParts__OpenUrlArguments*
/// @param y int
void k_parts__openurlarguments_set_y_offset(void* self, int y);

/// [Qt documentation](https://api.kde.org/kparts-openurlarguments.html#mimeType)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KParts__OpenUrlArguments*
const char* k_parts__openurlarguments_mime_type(void* self);

/// [Qt documentation](https://api.kde.org/kparts-openurlarguments.html#setMimeType)
///
/// @param self KParts__OpenUrlArguments*
/// @param mime const char*
void k_parts__openurlarguments_set_mime_type(void* self, const char* mime);

/// [Qt documentation](https://api.kde.org/kparts-openurlarguments.html#actionRequestedByUser)
///
/// @param self KParts__OpenUrlArguments*
bool k_parts__openurlarguments_action_requested_by_user(void* self);

/// [Qt documentation](https://api.kde.org/kparts-openurlarguments.html#setActionRequestedByUser)
///
/// @param self KParts__OpenUrlArguments*
/// @param userRequested bool
void k_parts__openurlarguments_set_action_requested_by_user(void* self, bool userRequested);

/// [Qt documentation](https://api.kde.org/kparts-openurlarguments.html#metaData)
///
/// @param self KParts__OpenUrlArguments*
libqt_map /* of const char* to const char* */ k_parts__openurlarguments_meta_data(void* self);

/// [Qt documentation](https://api.kde.org/kparts-openurlarguments.html#metaData)
///
/// @param self KParts__OpenUrlArguments*
libqt_map /* of const char* to const char* */ k_parts__openurlarguments_meta_data2(void* self);

/// Delete this object from C++ memory.
///
/// @param self KParts__OpenUrlArguments*
void k_parts__openurlarguments_delete(void* self);

#endif
