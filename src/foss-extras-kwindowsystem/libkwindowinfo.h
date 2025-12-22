#pragma once
#ifndef SRC_FOSS_EXTRAS_KWINDOWSYSTEM_QT6C_LIBKWINDOWINFO_H
#define SRC_FOSS_EXTRAS_KWINDOWSYSTEM_QT6C_LIBKWINDOWINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kwindowinfo.html)

/// k_windowinfo_new constructs a new KWindowInfo object.
///
/// @param param1 KWindowInfo*
///
KWindowInfo* k_windowinfo_new(void* param1);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#valid)
///
/// @param self KWindowInfo*
///
bool k_windowinfo_valid(void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#win)
///
/// @param self KWindowInfo*
///
uintptr_t k_windowinfo_win(void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#isMinimized)
///
/// @param self KWindowInfo*
///
bool k_windowinfo_is_minimized(void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#extendedStrut)
///
/// @param self KWindowInfo*
///
NETExtendedStrut* k_windowinfo_extended_strut(void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#visibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KWindowInfo*
///
const char* k_windowinfo_visible_name(void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#visibleNameWithState)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KWindowInfo*
///
const char* k_windowinfo_visible_name_with_state(void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KWindowInfo*
///
const char* k_windowinfo_name(void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#visibleIconName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KWindowInfo*
///
const char* k_windowinfo_visible_icon_name(void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#visibleIconNameWithState)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KWindowInfo*
///
const char* k_windowinfo_visible_icon_name_with_state(void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#iconName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KWindowInfo*
///
const char* k_windowinfo_icon_name(void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#isOnCurrentDesktop)
///
/// @param self KWindowInfo*
///
bool k_windowinfo_is_on_current_desktop(void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#isOnDesktop)
///
/// @param self KWindowInfo*
/// @param desktop int
///
bool k_windowinfo_is_on_desktop(void* self, int desktop);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#onAllDesktops)
///
/// @param self KWindowInfo*
///
bool k_windowinfo_on_all_desktops(void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#desktop)
///
/// @param self KWindowInfo*
///
int32_t k_windowinfo_desktop(void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#activities)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KWindowInfo*
///
const char** k_windowinfo_activities(void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#geometry)
///
/// @param self KWindowInfo*
///
QRect* k_windowinfo_geometry(void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#frameGeometry)
///
/// @param self KWindowInfo*
///
QRect* k_windowinfo_frame_geometry(void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#transientFor)
///
/// @param self KWindowInfo*
///
uintptr_t k_windowinfo_transient_for(void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#groupLeader)
///
/// @param self KWindowInfo*
///
uintptr_t k_windowinfo_group_leader(void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#windowClassClass)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KWindowInfo*
///
char* k_windowinfo_window_class_class(void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#windowClassName)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KWindowInfo*
///
char* k_windowinfo_window_class_name(void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KWindowInfo*
///
char* k_windowinfo_window_role(void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#clientMachine)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KWindowInfo*
///
char* k_windowinfo_client_machine(void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#desktopFileName)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KWindowInfo*
///
char* k_windowinfo_desktop_file_name(void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#gtkApplicationId)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KWindowInfo*
///
char* k_windowinfo_gtk_application_id(void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#pid)
///
/// @param self KWindowInfo*
///
int32_t k_windowinfo_pid(void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#applicationMenuServiceName)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KWindowInfo*
///
char* k_windowinfo_application_menu_service_name(void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#applicationMenuObjectPath)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KWindowInfo*
///
char* k_windowinfo_application_menu_object_path(void* self);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#operator-eq)
///
/// @param self KWindowInfo*
/// @param param1 KWindowInfo*
///
void k_windowinfo_operator_assign(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#valid)
///
/// @param self KWindowInfo*
/// @param withdrawn_is_valid bool
///
bool k_windowinfo_valid1(void* self, bool withdrawn_is_valid);

/// [Upstream resources](https://api.kde.org/kwindowinfo.html#dtor.KWindowInfo)
///
/// Delete this object from C++ memory.
///
/// @param self KWindowInfo*
///
void k_windowinfo_delete(void* self);

#endif
