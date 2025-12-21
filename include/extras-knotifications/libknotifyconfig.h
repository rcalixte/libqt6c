#pragma once
#ifndef SRC_EXTRAS_KNOTIFICATIONS_QT6C_LIBKNOTIFYCONFIG_H
#define SRC_EXTRAS_KNOTIFICATIONS_QT6C_LIBKNOTIFYCONFIG_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/knotifyconfig.html)

/// k_notifyconfig_new constructs a new KNotifyConfig object.
///
/// @param applicationName const char*
/// @param eventId const char*
///
KNotifyConfig* k_notifyconfig_new(const char* applicationName, const char* eventId);

/// [Upstream resources](https://api.kde.org/knotifyconfig.html)

/// k_notifyconfig_new2 constructs a new KNotifyConfig object.
///
/// @param other KNotifyConfig*
///
KNotifyConfig* k_notifyconfig_new2(void* other);

/// [Upstream resources](https://api.kde.org/knotifyconfig.html#operator-eq)
///
/// @param self KNotifyConfig*
/// @param other KNotifyConfig*
///
void k_notifyconfig_operator_assign(void* self, void* other);

/// [Upstream resources](https://api.kde.org/knotifyconfig.html#applicationName)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KNotifyConfig*
///
const char* k_notifyconfig_application_name(void* self);

/// [Upstream resources](https://api.kde.org/knotifyconfig.html#eventId)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KNotifyConfig*
///
const char* k_notifyconfig_event_id(void* self);

/// [Upstream resources](https://api.kde.org/knotifyconfig.html#isValid)
///
/// @param self KNotifyConfig*
///
bool k_notifyconfig_is_valid(void* self);

/// [Upstream resources](https://api.kde.org/knotifyconfig.html#readGlobalEntry)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KNotifyConfig*
/// @param key const char*
///
const char* k_notifyconfig_read_global_entry(void* self, const char* key);

/// [Upstream resources](https://api.kde.org/knotifyconfig.html#readEntry)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KNotifyConfig*
/// @param key const char*
///
const char* k_notifyconfig_read_entry(void* self, const char* key);

/// [Upstream resources](https://api.kde.org/knotifyconfig.html#readPathEntry)
///
/// @warning Caller is responsible for freeing the returned memory
///
/// @param self KNotifyConfig*
/// @param key const char*
///
const char* k_notifyconfig_read_path_entry(void* self, const char* key);

/// [Upstream resources](https://api.kde.org/knotifyconfig.html#reparseConfiguration)
///
void k_notifyconfig_reparse_configuration();

/// [Upstream resources](https://api.kde.org/knotifyconfig.html#reparseSingleConfiguration)
///
/// @param app const char*
///
void k_notifyconfig_reparse_single_configuration(const char* app);

/// [Upstream resources](https://api.kde.org/knotifyconfig.html#dtor.KNotifyConfig)
///
/// Delete this object from C++ memory.
///
/// @param self KNotifyConfig*
///
void k_notifyconfig_delete(void* self);

#endif
