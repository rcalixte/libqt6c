#pragma once
#ifndef EXTRAS_KSERVICE_LIBKSERVICEACTION_H
#define EXTRAS_KSERVICE_LIBKSERVICEACTION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kserviceaction.html)

/// k_serviceaction_new constructs a new KServiceAction object.
///
KServiceAction* k_serviceaction_new();

/// [Upstream resources](https://api.kde.org/kserviceaction.html)

/// k_serviceaction_new2 constructs a new KServiceAction object.
///
/// @param other KServiceAction*
///
KServiceAction* k_serviceaction_new2(const void* other);

/// [Upstream resources](https://api.kde.org/kserviceaction.html#operator-eq)
///
/// @param self KServiceAction*
/// @param other KServiceAction*
///
void k_serviceaction_operator_assign(void* self, const void* other);

/// [Upstream resources](https://api.kde.org/kserviceaction.html#setData)
///
/// @param self KServiceAction*
/// @param userData QVariant*
///
void k_serviceaction_set_data(void* self, const void* userData);

/// [Upstream resources](https://api.kde.org/kserviceaction.html#data)
///
/// @param self const KServiceAction*
///
QVariant* k_serviceaction_data(const void* self);

/// [Upstream resources](https://api.kde.org/kserviceaction.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KServiceAction*
///
const char* k_serviceaction_name(const void* self);

/// [Upstream resources](https://api.kde.org/kserviceaction.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KServiceAction*
///
const char* k_serviceaction_text(const void* self);

/// [Upstream resources](https://api.kde.org/kserviceaction.html#icon)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KServiceAction*
///
const char* k_serviceaction_icon(const void* self);

/// [Upstream resources](https://api.kde.org/kserviceaction.html#exec)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KServiceAction*
///
const char* k_serviceaction_exec(const void* self);

/// [Upstream resources](https://api.kde.org/kserviceaction.html#noDisplay)
///
/// @param self const KServiceAction*
///
bool k_serviceaction_no_display(const void* self);

/// [Upstream resources](https://api.kde.org/kserviceaction.html#isSeparator)
///
/// @param self const KServiceAction*
///
bool k_serviceaction_is_separator(const void* self);

/// [Upstream resources](https://api.kde.org/kserviceaction.html#dtor.KServiceAction)
///
/// Delete this object from C++ memory.
///
/// @param self KServiceAction*
///
void k_serviceaction_delete(void* self);

#endif
