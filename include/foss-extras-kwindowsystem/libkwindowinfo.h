#pragma once
#ifndef FOSS_EXTRAS_KWINDOWSYSTEM_LIBKWINDOWINFO_H
#define FOSS_EXTRAS_KWINDOWSYSTEM_LIBKWINDOWINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kwindowinfo.html)

/// k_windowinfo_new constructs a new KWindowInfo object.
///
/// @param param1 KWindowInfo*
///
KWindowInfo* k_windowinfo_new(const void* param1);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#valid)
///
/// @param self const KWindowInfo*
///
bool k_windowinfo_valid(const void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#win)
///
/// @param self const KWindowInfo*
///
uintptr_t k_windowinfo_win(const void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#isMinimized)
///
/// @param self const KWindowInfo*
///
bool k_windowinfo_is_minimized(const void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#extendedStrut)
///
/// @param self const KWindowInfo*
///
NETExtendedStrut* k_windowinfo_extended_strut(const void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#visibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KWindowInfo*
///
const char* k_windowinfo_visible_name(const void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#visibleNameWithState)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KWindowInfo*
///
const char* k_windowinfo_visible_name_with_state(const void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KWindowInfo*
///
const char* k_windowinfo_name(const void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#visibleIconName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KWindowInfo*
///
const char* k_windowinfo_visible_icon_name(const void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#visibleIconNameWithState)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KWindowInfo*
///
const char* k_windowinfo_visible_icon_name_with_state(const void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#iconName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KWindowInfo*
///
const char* k_windowinfo_icon_name(const void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#isOnCurrentDesktop)
///
/// @param self const KWindowInfo*
///
bool k_windowinfo_is_on_current_desktop(const void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#isOnDesktop)
///
/// @param self const KWindowInfo*
/// @param desktop int
///
bool k_windowinfo_is_on_desktop(const void* self, int desktop);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#onAllDesktops)
///
/// @param self const KWindowInfo*
///
bool k_windowinfo_on_all_desktops(const void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#desktop)
///
/// @param self const KWindowInfo*
///
int32_t k_windowinfo_desktop(const void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#activities)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KWindowInfo*
///
const char** k_windowinfo_activities(const void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#geometry)
///
/// @param self const KWindowInfo*
///
QRect* k_windowinfo_geometry(const void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#frameGeometry)
///
/// @param self const KWindowInfo*
///
QRect* k_windowinfo_frame_geometry(const void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#transientFor)
///
/// @param self const KWindowInfo*
///
uintptr_t k_windowinfo_transient_for(const void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#groupLeader)
///
/// @param self const KWindowInfo*
///
uintptr_t k_windowinfo_group_leader(const void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#windowClassClass)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KWindowInfo*
///
const char* k_windowinfo_window_class_class(const void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#windowClassName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KWindowInfo*
///
const char* k_windowinfo_window_class_name(const void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KWindowInfo*
///
const char* k_windowinfo_window_role(const void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#clientMachine)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KWindowInfo*
///
const char* k_windowinfo_client_machine(const void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#desktopFileName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KWindowInfo*
///
const char* k_windowinfo_desktop_file_name(const void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#gtkApplicationId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KWindowInfo*
///
const char* k_windowinfo_gtk_application_id(const void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#pid)
///
/// @param self const KWindowInfo*
///
int32_t k_windowinfo_pid(const void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#applicationMenuServiceName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KWindowInfo*
///
const char* k_windowinfo_application_menu_service_name(const void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#applicationMenuObjectPath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KWindowInfo*
///
const char* k_windowinfo_application_menu_object_path(const void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#operator-eq)
///
/// @param self KWindowInfo*
/// @param param1 KWindowInfo*
///
void k_windowinfo_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#valid)
///
/// @param self const KWindowInfo*
/// @param withdrawn_is_valid bool
///
bool k_windowinfo_valid1(const void* self, bool withdrawn_is_valid);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#dtor.KWindowInfo)
///
/// Delete this object from C++ memory.
///
/// @param self KWindowInfo*
///
void k_windowinfo_delete(void* self);

#endif
