#pragma once
#ifndef SRC_EXTRAS_KNOTIFICATIONSQT6C_LIBKNOTIFYCONFIG_H
#define SRC_EXTRAS_KNOTIFICATIONSQT6C_LIBKNOTIFYCONFIG_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/knotifyconfig.html

/// k_notifyconfig_new constructs a new KNotifyConfig object.
///
/// @param applicationName const char*
/// @param eventId const char*
KNotifyConfig* k_notifyconfig_new(const char* applicationName, const char* eventId);

/// k_notifyconfig_new2 constructs a new KNotifyConfig object.
///
/// @param other KNotifyConfig*
KNotifyConfig* k_notifyconfig_new2(void* other);

/// [Qt documentation](https://api.kde.org/knotifyconfig.html#operator-eq)
///
/// @param self KNotifyConfig*
/// @param other KNotifyConfig*
void k_notifyconfig_operator_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/knotifyconfig.html#applicationName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNotifyConfig*
const char* k_notifyconfig_application_name(void* self);

/// [Qt documentation](https://api.kde.org/knotifyconfig.html#eventId)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNotifyConfig*
const char* k_notifyconfig_event_id(void* self);

/// [Qt documentation](https://api.kde.org/knotifyconfig.html#isValid)
///
/// @param self KNotifyConfig*
bool k_notifyconfig_is_valid(void* self);

/// [Qt documentation](https://api.kde.org/knotifyconfig.html#readGlobalEntry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNotifyConfig*
/// @param key const char*
const char* k_notifyconfig_read_global_entry(void* self, const char* key);

/// [Qt documentation](https://api.kde.org/knotifyconfig.html#readEntry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNotifyConfig*
/// @param key const char*
const char* k_notifyconfig_read_entry(void* self, const char* key);

/// [Qt documentation](https://api.kde.org/knotifyconfig.html#readPathEntry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNotifyConfig*
/// @param key const char*
const char* k_notifyconfig_read_path_entry(void* self, const char* key);

/// [Qt documentation](https://api.kde.org/knotifyconfig.html#reparseConfiguration)
///
void k_notifyconfig_reparse_configuration();

/// [Qt documentation](https://api.kde.org/knotifyconfig.html#reparseSingleConfiguration)
///
/// @param app const char*
void k_notifyconfig_reparse_single_configuration(const char* app);

/// [Qt documentation](https://api.kde.org/knotifyconfig.html#dtor.KNotifyConfig)
///
/// Delete this object from C++ memory.
///
/// @param self KNotifyConfig*
void k_notifyconfig_delete(void* self);

#endif
