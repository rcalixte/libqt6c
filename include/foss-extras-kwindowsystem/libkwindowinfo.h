#pragma once
#ifndef SRC_FOSS_EXTRAS_KWINDOWSYSTEMQT6C_LIBKWINDOWINFO_H
#define SRC_FOSS_EXTRAS_KWINDOWSYSTEMQT6C_LIBKWINDOWINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kwindowinfo.html

/// k_windowinfo_new constructs a new KWindowInfo object.
///
/// @param param1 KWindowInfo*
KWindowInfo* k_windowinfo_new(void* param1);

/// [Qt documentation](https://api.kde.org/kwindowinfo.html#valid)
///
/// @param self KWindowInfo*
bool k_windowinfo_valid(void* self);

/// [Qt documentation](https://api.kde.org/kwindowinfo.html#win)
///
/// @param self KWindowInfo*
uintptr_t k_windowinfo_win(void* self);

/// [Qt documentation](https://api.kde.org/kwindowinfo.html#isMinimized)
///
/// @param self KWindowInfo*
bool k_windowinfo_is_minimized(void* self);

/// [Qt documentation](https://api.kde.org/kwindowinfo.html#extendedStrut)
///
/// @param self KWindowInfo*
NETExtendedStrut* k_windowinfo_extended_strut(void* self);

/// [Qt documentation](https://api.kde.org/kwindowinfo.html#visibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KWindowInfo*
const char* k_windowinfo_visible_name(void* self);

/// [Qt documentation](https://api.kde.org/kwindowinfo.html#visibleNameWithState)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KWindowInfo*
const char* k_windowinfo_visible_name_with_state(void* self);

/// [Qt documentation](https://api.kde.org/kwindowinfo.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KWindowInfo*
const char* k_windowinfo_name(void* self);

/// [Qt documentation](https://api.kde.org/kwindowinfo.html#visibleIconName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KWindowInfo*
const char* k_windowinfo_visible_icon_name(void* self);

/// [Qt documentation](https://api.kde.org/kwindowinfo.html#visibleIconNameWithState)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KWindowInfo*
const char* k_windowinfo_visible_icon_name_with_state(void* self);

/// [Qt documentation](https://api.kde.org/kwindowinfo.html#iconName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KWindowInfo*
const char* k_windowinfo_icon_name(void* self);

/// [Qt documentation](https://api.kde.org/kwindowinfo.html#isOnCurrentDesktop)
///
/// @param self KWindowInfo*
bool k_windowinfo_is_on_current_desktop(void* self);

/// [Qt documentation](https://api.kde.org/kwindowinfo.html#isOnDesktop)
///
/// @param self KWindowInfo*
/// @param desktop int
bool k_windowinfo_is_on_desktop(void* self, int desktop);

/// [Qt documentation](https://api.kde.org/kwindowinfo.html#onAllDesktops)
///
/// @param self KWindowInfo*
bool k_windowinfo_on_all_desktops(void* self);

/// [Qt documentation](https://api.kde.org/kwindowinfo.html#desktop)
///
/// @param self KWindowInfo*
int32_t k_windowinfo_desktop(void* self);

/// [Qt documentation](https://api.kde.org/kwindowinfo.html#activities)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KWindowInfo*
const char** k_windowinfo_activities(void* self);

/// [Qt documentation](https://api.kde.org/kwindowinfo.html#geometry)
///
/// @param self KWindowInfo*
QRect* k_windowinfo_geometry(void* self);

/// [Qt documentation](https://api.kde.org/kwindowinfo.html#frameGeometry)
///
/// @param self KWindowInfo*
QRect* k_windowinfo_frame_geometry(void* self);

/// [Qt documentation](https://api.kde.org/kwindowinfo.html#transientFor)
///
/// @param self KWindowInfo*
uintptr_t k_windowinfo_transient_for(void* self);

/// [Qt documentation](https://api.kde.org/kwindowinfo.html#groupLeader)
///
/// @param self KWindowInfo*
uintptr_t k_windowinfo_group_leader(void* self);

/// [Qt documentation](https://api.kde.org/kwindowinfo.html#windowClassClass)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KWindowInfo*
char* k_windowinfo_window_class_class(void* self);

/// [Qt documentation](https://api.kde.org/kwindowinfo.html#windowClassName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KWindowInfo*
char* k_windowinfo_window_class_name(void* self);

/// [Qt documentation](https://api.kde.org/kwindowinfo.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KWindowInfo*
char* k_windowinfo_window_role(void* self);

/// [Qt documentation](https://api.kde.org/kwindowinfo.html#clientMachine)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KWindowInfo*
char* k_windowinfo_client_machine(void* self);

/// [Qt documentation](https://api.kde.org/kwindowinfo.html#desktopFileName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KWindowInfo*
char* k_windowinfo_desktop_file_name(void* self);

/// [Qt documentation](https://api.kde.org/kwindowinfo.html#gtkApplicationId)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KWindowInfo*
char* k_windowinfo_gtk_application_id(void* self);

/// [Qt documentation](https://api.kde.org/kwindowinfo.html#pid)
///
/// @param self KWindowInfo*
int32_t k_windowinfo_pid(void* self);

/// [Qt documentation](https://api.kde.org/kwindowinfo.html#applicationMenuServiceName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KWindowInfo*
char* k_windowinfo_application_menu_service_name(void* self);

/// [Qt documentation](https://api.kde.org/kwindowinfo.html#applicationMenuObjectPath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KWindowInfo*
char* k_windowinfo_application_menu_object_path(void* self);

/// [Qt documentation](https://api.kde.org/kwindowinfo.html#operator-eq)
///
/// @param self KWindowInfo*
/// @param param1 KWindowInfo*
void k_windowinfo_operator_assign(void* self, void* param1);

/// [Qt documentation](https://api.kde.org/kwindowinfo.html#valid)
///
/// @param self KWindowInfo*
/// @param withdrawn_is_valid bool
bool k_windowinfo_valid1(void* self, bool withdrawn_is_valid);

/// [Qt documentation](https://api.kde.org/kwindowinfo.html#dtor.KWindowInfo)
///
/// Delete this object from C++ memory.
///
/// @param self KWindowInfo*
void k_windowinfo_delete(void* self);

#endif
