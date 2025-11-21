#pragma once
#ifndef SRC_EXTRAS_KSERVICE_QT6C_LIBKSERVICEACTION_H
#define SRC_EXTRAS_KSERVICE_QT6C_LIBKSERVICEACTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kserviceaction.html

/// k_serviceaction_new constructs a new KServiceAction object.
///
KServiceAction* k_serviceaction_new();

/// k_serviceaction_new2 constructs a new KServiceAction object.
///
/// @param other KServiceAction*
KServiceAction* k_serviceaction_new2(void* other);

/// [Qt documentation](https://api.kde.org/kserviceaction.html#operator-eq)
///
/// @param self KServiceAction*
/// @param other KServiceAction*
void k_serviceaction_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/kserviceaction.html#setData)
///
/// @param self KServiceAction*
/// @param userData QVariant*
void k_serviceaction_set_data(void* self, void* userData);

/// [Qt documentation](https://api.kde.org/kserviceaction.html#data)
///
/// @param self KServiceAction*
QVariant* k_serviceaction_data(void* self);

/// [Qt documentation](https://api.kde.org/kserviceaction.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KServiceAction*
const char* k_serviceaction_name(void* self);

/// [Qt documentation](https://api.kde.org/kserviceaction.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KServiceAction*
const char* k_serviceaction_text(void* self);

/// [Qt documentation](https://api.kde.org/kserviceaction.html#icon)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KServiceAction*
const char* k_serviceaction_icon(void* self);

/// [Qt documentation](https://api.kde.org/kserviceaction.html#exec)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KServiceAction*
const char* k_serviceaction_exec(void* self);

/// [Qt documentation](https://api.kde.org/kserviceaction.html#noDisplay)
///
/// @param self KServiceAction*
bool k_serviceaction_no_display(void* self);

/// [Qt documentation](https://api.kde.org/kserviceaction.html#isSeparator)
///
/// @param self KServiceAction*
bool k_serviceaction_is_separator(void* self);

/// [Qt documentation](https://api.kde.org/kserviceaction.html#dtor.KServiceAction)
///
/// Delete this object from C++ memory.
///
/// @param self KServiceAction*
void k_serviceaction_delete(void* self);

#endif
