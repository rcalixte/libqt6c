#pragma once
#ifndef SRC_FOSS_EXTRAS_KWINDOWSYSTEM_QT6C_LIBNETWM_DEF_H
#define SRC_FOSS_EXTRAS_KWINDOWSYSTEM_QT6C_LIBNETWM_DEF_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/netpoint.html

/// k_netpoint_new constructs a new NETPoint object.
///
/// @param other NETPoint*
NETPoint* k_netpoint_new(void* other);

/// k_netpoint_new2 constructs a new NETPoint object and invalidates the source NETPoint object.
///
/// @param other NETPoint*
NETPoint* k_netpoint_new2(void* other);

/// k_netpoint_new3 constructs a new NETPoint object.
///
NETPoint* k_netpoint_new3();

/// k_netpoint_new4 constructs a new NETPoint object.
///
/// @param p QPoint*
NETPoint* k_netpoint_new4(void* p);

/// k_netpoint_new5 constructs a new NETPoint object.
///
/// @param param1 NETPoint*
NETPoint* k_netpoint_new5(void* param1);

/// k_netpoint_copy_assign shallow copies `other` into `self`.
///
/// @param self NETPoint*
/// @param other NETPoint*
void k_netpoint_copy_assign(void* self, void* other);

/// k_netpoint_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self NETPoint*
/// @param other NETPoint*
void k_netpoint_move_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/netpoint.html#toPoint)
///
/// @param self NETPoint*
QPoint* k_netpoint_to_point(void* self);

/// [Qt documentation](https://api.kde.org/netpoint.html#x-var)
///
/// @param self NETPoint*
int32_t k_netpoint_x(void* self);

/// [Qt documentation](https://api.kde.org/netpoint.html#x-var)
///
/// @param self NETPoint*
/// @param x int
void k_netpoint_set_x(void* self, int x);

/// [Qt documentation](https://api.kde.org/netpoint.html#y-var)
///
/// @param self NETPoint*
int32_t k_netpoint_y(void* self);

/// [Qt documentation](https://api.kde.org/netpoint.html#y-var)
///
/// @param self NETPoint*
/// @param y int
void k_netpoint_set_y(void* self, int y);

/// [Qt documentation](https://api.kde.org/netpoint.html#dtor.NETPoint)
///
/// Delete this object from C++ memory.
///
/// @param self NETPoint*
void k_netpoint_delete(void* self);

/// https://api.kde.org/netsize.html

/// k_netsize_new constructs a new NETSize object.
///
/// @param other NETSize*
NETSize* k_netsize_new(void* other);

/// k_netsize_new2 constructs a new NETSize object and invalidates the source NETSize object.
///
/// @param other NETSize*
NETSize* k_netsize_new2(void* other);

/// k_netsize_new3 constructs a new NETSize object.
///
NETSize* k_netsize_new3();

/// k_netsize_new4 constructs a new NETSize object.
///
/// @param size QSize*
NETSize* k_netsize_new4(void* size);

/// k_netsize_new5 constructs a new NETSize object.
///
/// @param param1 NETSize*
NETSize* k_netsize_new5(void* param1);

/// k_netsize_copy_assign shallow copies `other` into `self`.
///
/// @param self NETSize*
/// @param other NETSize*
void k_netsize_copy_assign(void* self, void* other);

/// k_netsize_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self NETSize*
/// @param other NETSize*
void k_netsize_move_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/netsize.html#toSize)
///
/// @param self NETSize*
QSize* k_netsize_to_size(void* self);

/// [Qt documentation](https://api.kde.org/netsize.html#width-var)
///
/// @param self NETSize*
int32_t k_netsize_width(void* self);

/// [Qt documentation](https://api.kde.org/netsize.html#width-var)
///
/// @param self NETSize*
/// @param width int
void k_netsize_set_width(void* self, int width);

/// [Qt documentation](https://api.kde.org/netsize.html#height-var)
///
/// @param self NETSize*
int32_t k_netsize_height(void* self);

/// [Qt documentation](https://api.kde.org/netsize.html#height-var)
///
/// @param self NETSize*
/// @param height int
void k_netsize_set_height(void* self, int height);

/// [Qt documentation](https://api.kde.org/netsize.html#dtor.NETSize)
///
/// Delete this object from C++ memory.
///
/// @param self NETSize*
void k_netsize_delete(void* self);

/// https://api.kde.org/netrect.html

/// k_netrect_new constructs a new NETRect object.
///
/// @param other NETRect*
NETRect* k_netrect_new(void* other);

/// k_netrect_new2 constructs a new NETRect object and invalidates the source NETRect object.
///
/// @param other NETRect*
NETRect* k_netrect_new2(void* other);

/// k_netrect_new3 constructs a new NETRect object.
///
NETRect* k_netrect_new3();

/// k_netrect_new4 constructs a new NETRect object.
///
/// @param rect QRect*
NETRect* k_netrect_new4(void* rect);

/// k_netrect_copy_assign shallow copies `other` into `self`.
///
/// @param self NETRect*
/// @param other NETRect*
void k_netrect_copy_assign(void* self, void* other);

/// k_netrect_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self NETRect*
/// @param other NETRect*
void k_netrect_move_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/netrect.html#toRect)
///
/// @param self NETRect*
QRect* k_netrect_to_rect(void* self);

/// [Qt documentation](https://api.kde.org/netrect.html#pos-var)
///
/// @param self NETRect*
NETPoint* k_netrect_pos(void* self);

/// [Qt documentation](https://api.kde.org/netrect.html#pos-var)
///
/// @param self NETRect*
/// @param pos NETPoint*
void k_netrect_set_pos(void* self, void* pos);

/// [Qt documentation](https://api.kde.org/netrect.html#size-var)
///
/// @param self NETRect*
NETSize* k_netrect_size(void* self);

/// [Qt documentation](https://api.kde.org/netrect.html#size-var)
///
/// @param self NETRect*
/// @param size NETSize*
void k_netrect_set_size(void* self, void* size);

/// [Qt documentation](https://api.kde.org/netrect.html#dtor.NETRect)
///
/// Delete this object from C++ memory.
///
/// @param self NETRect*
void k_netrect_delete(void* self);

/// https://api.kde.org/neticon.html

/// k_neticon_new constructs a new NETIcon object.
///
/// @param other NETIcon*
NETIcon* k_neticon_new(void* other);

/// k_neticon_new2 constructs a new NETIcon object and invalidates the source NETIcon object.
///
/// @param other NETIcon*
NETIcon* k_neticon_new2(void* other);

/// k_neticon_new3 constructs a new NETIcon object.
///
NETIcon* k_neticon_new3();

/// k_neticon_copy_assign shallow copies `other` into `self`.
///
/// @param self NETIcon*
/// @param other NETIcon*
void k_neticon_copy_assign(void* self, void* other);

/// k_neticon_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self NETIcon*
/// @param other NETIcon*
void k_neticon_move_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/neticon.html#size-var)
///
/// @param self NETIcon*
NETSize* k_neticon_size(void* self);

/// [Qt documentation](https://api.kde.org/neticon.html#size-var)
///
/// @param self NETIcon*
/// @param size NETSize*
void k_neticon_set_size(void* self, void* size);

/// [Qt documentation](https://api.kde.org/neticon.html#data-var)
///
/// @param self NETIcon*
unsigned char* k_neticon_data(void* self);

/// [Qt documentation](https://api.kde.org/neticon.html#data-var)
///
/// @param self NETIcon*
/// @param data unsigned char*
void k_neticon_set_data(void* self, unsigned char* data);

/// [Qt documentation](https://api.kde.org/neticon.html#dtor.NETIcon)
///
/// Delete this object from C++ memory.
///
/// @param self NETIcon*
void k_neticon_delete(void* self);

/// https://api.kde.org/netextendedstrut.html

/// k_netextendedstrut_new constructs a new NETExtendedStrut object.
///
/// @param other NETExtendedStrut*
NETExtendedStrut* k_netextendedstrut_new(void* other);

/// k_netextendedstrut_new2 constructs a new NETExtendedStrut object and invalidates the source NETExtendedStrut object.
///
/// @param other NETExtendedStrut*
NETExtendedStrut* k_netextendedstrut_new2(void* other);

/// k_netextendedstrut_new3 constructs a new NETExtendedStrut object.
///
NETExtendedStrut* k_netextendedstrut_new3();

/// k_netextendedstrut_copy_assign shallow copies `other` into `self`.
///
/// @param self NETExtendedStrut*
/// @param other NETExtendedStrut*
void k_netextendedstrut_copy_assign(void* self, void* other);

/// k_netextendedstrut_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self NETExtendedStrut*
/// @param other NETExtendedStrut*
void k_netextendedstrut_move_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/netextendedstrut.html#left_width-var)
///
/// @param self NETExtendedStrut*
int32_t k_netextendedstrut_left_width(void* self);

/// [Qt documentation](https://api.kde.org/netextendedstrut.html#left_width-var)
///
/// @param self NETExtendedStrut*
/// @param left_width int
void k_netextendedstrut_set_left_width(void* self, int left_width);

/// [Qt documentation](https://api.kde.org/netextendedstrut.html#left_start-var)
///
/// @param self NETExtendedStrut*
int32_t k_netextendedstrut_left_start(void* self);

/// [Qt documentation](https://api.kde.org/netextendedstrut.html#left_start-var)
///
/// @param self NETExtendedStrut*
/// @param left_start int
void k_netextendedstrut_set_left_start(void* self, int left_start);

/// [Qt documentation](https://api.kde.org/netextendedstrut.html#left_end-var)
///
/// @param self NETExtendedStrut*
int32_t k_netextendedstrut_left_end(void* self);

/// [Qt documentation](https://api.kde.org/netextendedstrut.html#left_end-var)
///
/// @param self NETExtendedStrut*
/// @param left_end int
void k_netextendedstrut_set_left_end(void* self, int left_end);

/// [Qt documentation](https://api.kde.org/netextendedstrut.html#right_width-var)
///
/// @param self NETExtendedStrut*
int32_t k_netextendedstrut_right_width(void* self);

/// [Qt documentation](https://api.kde.org/netextendedstrut.html#right_width-var)
///
/// @param self NETExtendedStrut*
/// @param right_width int
void k_netextendedstrut_set_right_width(void* self, int right_width);

/// [Qt documentation](https://api.kde.org/netextendedstrut.html#right_start-var)
///
/// @param self NETExtendedStrut*
int32_t k_netextendedstrut_right_start(void* self);

/// [Qt documentation](https://api.kde.org/netextendedstrut.html#right_start-var)
///
/// @param self NETExtendedStrut*
/// @param right_start int
void k_netextendedstrut_set_right_start(void* self, int right_start);

/// [Qt documentation](https://api.kde.org/netextendedstrut.html#right_end-var)
///
/// @param self NETExtendedStrut*
int32_t k_netextendedstrut_right_end(void* self);

/// [Qt documentation](https://api.kde.org/netextendedstrut.html#right_end-var)
///
/// @param self NETExtendedStrut*
/// @param right_end int
void k_netextendedstrut_set_right_end(void* self, int right_end);

/// [Qt documentation](https://api.kde.org/netextendedstrut.html#top_width-var)
///
/// @param self NETExtendedStrut*
int32_t k_netextendedstrut_top_width(void* self);

/// [Qt documentation](https://api.kde.org/netextendedstrut.html#top_width-var)
///
/// @param self NETExtendedStrut*
/// @param top_width int
void k_netextendedstrut_set_top_width(void* self, int top_width);

/// [Qt documentation](https://api.kde.org/netextendedstrut.html#top_start-var)
///
/// @param self NETExtendedStrut*
int32_t k_netextendedstrut_top_start(void* self);

/// [Qt documentation](https://api.kde.org/netextendedstrut.html#top_start-var)
///
/// @param self NETExtendedStrut*
/// @param top_start int
void k_netextendedstrut_set_top_start(void* self, int top_start);

/// [Qt documentation](https://api.kde.org/netextendedstrut.html#top_end-var)
///
/// @param self NETExtendedStrut*
int32_t k_netextendedstrut_top_end(void* self);

/// [Qt documentation](https://api.kde.org/netextendedstrut.html#top_end-var)
///
/// @param self NETExtendedStrut*
/// @param top_end int
void k_netextendedstrut_set_top_end(void* self, int top_end);

/// [Qt documentation](https://api.kde.org/netextendedstrut.html#bottom_width-var)
///
/// @param self NETExtendedStrut*
int32_t k_netextendedstrut_bottom_width(void* self);

/// [Qt documentation](https://api.kde.org/netextendedstrut.html#bottom_width-var)
///
/// @param self NETExtendedStrut*
/// @param bottom_width int
void k_netextendedstrut_set_bottom_width(void* self, int bottom_width);

/// [Qt documentation](https://api.kde.org/netextendedstrut.html#bottom_start-var)
///
/// @param self NETExtendedStrut*
int32_t k_netextendedstrut_bottom_start(void* self);

/// [Qt documentation](https://api.kde.org/netextendedstrut.html#bottom_start-var)
///
/// @param self NETExtendedStrut*
/// @param bottom_start int
void k_netextendedstrut_set_bottom_start(void* self, int bottom_start);

/// [Qt documentation](https://api.kde.org/netextendedstrut.html#bottom_end-var)
///
/// @param self NETExtendedStrut*
int32_t k_netextendedstrut_bottom_end(void* self);

/// [Qt documentation](https://api.kde.org/netextendedstrut.html#bottom_end-var)
///
/// @param self NETExtendedStrut*
/// @param bottom_end int
void k_netextendedstrut_set_bottom_end(void* self, int bottom_end);

/// [Qt documentation](https://api.kde.org/netextendedstrut.html#dtor.NETExtendedStrut)
///
/// Delete this object from C++ memory.
///
/// @param self NETExtendedStrut*
void k_netextendedstrut_delete(void* self);

/// https://api.kde.org/netstrut.html

/// k_netstrut_new constructs a new NETStrut object.
///
/// @param other NETStrut*
NETStrut* k_netstrut_new(void* other);

/// k_netstrut_new2 constructs a new NETStrut object and invalidates the source NETStrut object.
///
/// @param other NETStrut*
NETStrut* k_netstrut_new2(void* other);

/// k_netstrut_new3 constructs a new NETStrut object.
///
NETStrut* k_netstrut_new3();

/// k_netstrut_copy_assign shallow copies `other` into `self`.
///
/// @param self NETStrut*
/// @param other NETStrut*
void k_netstrut_copy_assign(void* self, void* other);

/// k_netstrut_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self NETStrut*
/// @param other NETStrut*
void k_netstrut_move_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/netstrut.html#left-var)
///
/// @param self NETStrut*
int32_t k_netstrut_left(void* self);

/// [Qt documentation](https://api.kde.org/netstrut.html#left-var)
///
/// @param self NETStrut*
/// @param left int
void k_netstrut_set_left(void* self, int left);

/// [Qt documentation](https://api.kde.org/netstrut.html#right-var)
///
/// @param self NETStrut*
int32_t k_netstrut_right(void* self);

/// [Qt documentation](https://api.kde.org/netstrut.html#right-var)
///
/// @param self NETStrut*
/// @param right int
void k_netstrut_set_right(void* self, int right);

/// [Qt documentation](https://api.kde.org/netstrut.html#top-var)
///
/// @param self NETStrut*
int32_t k_netstrut_top(void* self);

/// [Qt documentation](https://api.kde.org/netstrut.html#top-var)
///
/// @param self NETStrut*
/// @param top int
void k_netstrut_set_top(void* self, int top);

/// [Qt documentation](https://api.kde.org/netstrut.html#bottom-var)
///
/// @param self NETStrut*
int32_t k_netstrut_bottom(void* self);

/// [Qt documentation](https://api.kde.org/netstrut.html#bottom-var)
///
/// @param self NETStrut*
/// @param bottom int
void k_netstrut_set_bottom(void* self, int bottom);

/// [Qt documentation](https://api.kde.org/netstrut.html#dtor.NETStrut)
///
/// Delete this object from C++ memory.
///
/// @param self NETStrut*
void k_netstrut_delete(void* self);

/// https://api.kde.org/netfullscreenmonitors.html

/// k_netfullscreenmonitors_new constructs a new NETFullscreenMonitors object.
///
/// @param other NETFullscreenMonitors*
NETFullscreenMonitors* k_netfullscreenmonitors_new(void* other);

/// k_netfullscreenmonitors_new2 constructs a new NETFullscreenMonitors object and invalidates the source NETFullscreenMonitors object.
///
/// @param other NETFullscreenMonitors*
NETFullscreenMonitors* k_netfullscreenmonitors_new2(void* other);

/// k_netfullscreenmonitors_new3 constructs a new NETFullscreenMonitors object.
///
NETFullscreenMonitors* k_netfullscreenmonitors_new3();

/// k_netfullscreenmonitors_copy_assign shallow copies `other` into `self`.
///
/// @param self NETFullscreenMonitors*
/// @param other NETFullscreenMonitors*
void k_netfullscreenmonitors_copy_assign(void* self, void* other);

/// k_netfullscreenmonitors_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self NETFullscreenMonitors*
/// @param other NETFullscreenMonitors*
void k_netfullscreenmonitors_move_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/netfullscreenmonitors.html#top-var)
///
/// @param self NETFullscreenMonitors*
int32_t k_netfullscreenmonitors_top(void* self);

/// [Qt documentation](https://api.kde.org/netfullscreenmonitors.html#top-var)
///
/// @param self NETFullscreenMonitors*
/// @param top int
void k_netfullscreenmonitors_set_top(void* self, int top);

/// [Qt documentation](https://api.kde.org/netfullscreenmonitors.html#bottom-var)
///
/// @param self NETFullscreenMonitors*
int32_t k_netfullscreenmonitors_bottom(void* self);

/// [Qt documentation](https://api.kde.org/netfullscreenmonitors.html#bottom-var)
///
/// @param self NETFullscreenMonitors*
/// @param bottom int
void k_netfullscreenmonitors_set_bottom(void* self, int bottom);

/// [Qt documentation](https://api.kde.org/netfullscreenmonitors.html#left-var)
///
/// @param self NETFullscreenMonitors*
int32_t k_netfullscreenmonitors_left(void* self);

/// [Qt documentation](https://api.kde.org/netfullscreenmonitors.html#left-var)
///
/// @param self NETFullscreenMonitors*
/// @param left int
void k_netfullscreenmonitors_set_left(void* self, int left);

/// [Qt documentation](https://api.kde.org/netfullscreenmonitors.html#right-var)
///
/// @param self NETFullscreenMonitors*
int32_t k_netfullscreenmonitors_right(void* self);

/// [Qt documentation](https://api.kde.org/netfullscreenmonitors.html#right-var)
///
/// @param self NETFullscreenMonitors*
/// @param right int
void k_netfullscreenmonitors_set_right(void* self, int right);

/// [Qt documentation](https://api.kde.org/netfullscreenmonitors.html#isSet)
///
/// @param self NETFullscreenMonitors*
bool k_netfullscreenmonitors_is_set(void* self);

/// [Qt documentation](https://api.kde.org/netfullscreenmonitors.html#dtor.NETFullscreenMonitors)
///
/// Delete this object from C++ memory.
///
/// @param self NETFullscreenMonitors*
void k_netfullscreenmonitors_delete(void* self);

/// https://api.kde.org/net.html

/// k_net_new constructs a new NET object.
///
/// @param other NET*
NET* k_net_new(void* other);

/// k_net_new2 constructs a new NET object and invalidates the source NET object.
///
/// @param other NET*
NET* k_net_new2(void* other);

/// k_net_copy_assign shallow copies `other` into `self`.
///
/// @param self NET*
/// @param other NET*
void k_net_copy_assign(void* self, void* other);

/// k_net_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self NET*
/// @param other NET*
void k_net_move_assign(void* self, void* other);

/// [Qt documentation](https://api.kde.org/net.html#timestampCompare)
///
/// @param time1 uint64_t
/// @param time2 uint64_t
int32_t k_net_timestamp_compare(uint64_t time1, uint64_t time2);

/// [Qt documentation](https://api.kde.org/net.html#timestampDiff)
///
/// @param time1 uint64_t
/// @param time2 uint64_t
int32_t k_net_timestamp_diff(uint64_t time1, uint64_t time2);

/// [Qt documentation](https://api.kde.org/net.html#dtor.NET)
///
/// Delete this object from C++ memory.
///
/// @param self NET*
void k_net_delete(void* self);

/// https://api.kde.org/netwm-def.html#types

typedef enum {
    NET_ROLE_CLIENT = 0,
    NET_ROLE_WINDOWMANAGER = 1
} NET__Role;

typedef enum {
    NET_WINDOWTYPE_UNKNOWN = -1,
    NET_WINDOWTYPE_NORMAL = 0,
    NET_WINDOWTYPE_DESKTOP = 1,
    NET_WINDOWTYPE_DOCK = 2,
    NET_WINDOWTYPE_TOOLBAR = 3,
    NET_WINDOWTYPE_MENU = 4,
    NET_WINDOWTYPE_DIALOG = 5,
    NET_WINDOWTYPE_OVERRIDE = 6,
    NET_WINDOWTYPE_TOPMENU = 7,
    NET_WINDOWTYPE_UTILITY = 8,
    NET_WINDOWTYPE_SPLASH = 9,
    NET_WINDOWTYPE_DROPDOWNMENU = 10,
    NET_WINDOWTYPE_POPUPMENU = 11,
    NET_WINDOWTYPE_TOOLTIP = 12,
    NET_WINDOWTYPE_NOTIFICATION = 13,
    NET_WINDOWTYPE_COMBOBOX = 14,
    NET_WINDOWTYPE_DNDICON = 15,
    NET_WINDOWTYPE_ONSCREENDISPLAY = 16,
    NET_WINDOWTYPE_CRITICALNOTIFICATION = 17,
    NET_WINDOWTYPE_APPLETPOPUP = 18
} NET__WindowType;

typedef enum {
    NET_WINDOWTYPEMASK_NORMALMASK = 1,
    NET_WINDOWTYPEMASK_DESKTOPMASK = 2,
    NET_WINDOWTYPEMASK_DOCKMASK = 4,
    NET_WINDOWTYPEMASK_TOOLBARMASK = 8,
    NET_WINDOWTYPEMASK_MENUMASK = 16,
    NET_WINDOWTYPEMASK_DIALOGMASK = 32,
    NET_WINDOWTYPEMASK_OVERRIDEMASK = 64,
    NET_WINDOWTYPEMASK_TOPMENUMASK = 128,
    NET_WINDOWTYPEMASK_UTILITYMASK = 256,
    NET_WINDOWTYPEMASK_SPLASHMASK = 512,
    NET_WINDOWTYPEMASK_DROPDOWNMENUMASK = 1024,
    NET_WINDOWTYPEMASK_POPUPMENUMASK = 2048,
    NET_WINDOWTYPEMASK_TOOLTIPMASK = 4096,
    NET_WINDOWTYPEMASK_NOTIFICATIONMASK = 8192,
    NET_WINDOWTYPEMASK_COMBOBOXMASK = 16384,
    NET_WINDOWTYPEMASK_DNDICONMASK = 32768,
    NET_WINDOWTYPEMASK_ONSCREENDISPLAYMASK = 65536,
    NET_WINDOWTYPEMASK_CRITICALNOTIFICATIONMASK = 131072,
    NET_WINDOWTYPEMASK_APPLETPOPUPMASK = 262144,
    NET_WINDOWTYPEMASK_ALLTYPESMASK = 4294967295
} NET__WindowTypeMask;

typedef enum {
    NET_STATE_MODAL = 1,
    NET_STATE_STICKY = 2,
    NET_STATE_MAXVERT = 4,
    NET_STATE_MAXHORIZ = 8,
    NET_STATE_MAX = 12,
    NET_STATE_SHADED = 16,
    NET_STATE_SKIPTASKBAR = 32,
    NET_STATE_KEEPABOVE = 64,
    NET_STATE_SKIPPAGER = 128,
    NET_STATE_HIDDEN = 256,
    NET_STATE_FULLSCREEN = 512,
    NET_STATE_KEEPBELOW = 1024,
    NET_STATE_DEMANDSATTENTION = 2048,
    NET_STATE_SKIPSWITCHER = 4096,
    NET_STATE_FOCUSED = 8192
} NET__State;

typedef enum {
    NET_DIRECTION_TOPLEFT = 0,
    NET_DIRECTION_TOP = 1,
    NET_DIRECTION_TOPRIGHT = 2,
    NET_DIRECTION_RIGHT = 3,
    NET_DIRECTION_BOTTOMRIGHT = 4,
    NET_DIRECTION_BOTTOM = 5,
    NET_DIRECTION_BOTTOMLEFT = 6,
    NET_DIRECTION_LEFT = 7,
    NET_DIRECTION_MOVE = 8,
    NET_DIRECTION_KEYBOARDSIZE = 9,
    NET_DIRECTION_KEYBOARDMOVE = 10,
    NET_DIRECTION_MOVERESIZECANCEL = 11
} NET__Direction;

typedef enum {
    NET_MAPPINGSTATE_VISIBLE = 1,
    NET_MAPPINGSTATE_WITHDRAWN = 0,
    NET_MAPPINGSTATE_ICONIC = 3
} NET__MappingState;

typedef enum {
    NET_ACTION_ACTIONMOVE = 1,
    NET_ACTION_ACTIONRESIZE = 2,
    NET_ACTION_ACTIONMINIMIZE = 4,
    NET_ACTION_ACTIONSHADE = 8,
    NET_ACTION_ACTIONSTICK = 16,
    NET_ACTION_ACTIONMAXVERT = 32,
    NET_ACTION_ACTIONMAXHORIZ = 64,
    NET_ACTION_ACTIONMAX = 96,
    NET_ACTION_ACTIONFULLSCREEN = 128,
    NET_ACTION_ACTIONCHANGEDESKTOP = 256,
    NET_ACTION_ACTIONCLOSE = 512
} NET__Action;

typedef enum {
    NET_PROPERTY_SUPPORTED = 1,
    NET_PROPERTY_CLIENTLIST = 2,
    NET_PROPERTY_CLIENTLISTSTACKING = 4,
    NET_PROPERTY_NUMBEROFDESKTOPS = 8,
    NET_PROPERTY_DESKTOPGEOMETRY = 16,
    NET_PROPERTY_DESKTOPVIEWPORT = 32,
    NET_PROPERTY_CURRENTDESKTOP = 64,
    NET_PROPERTY_DESKTOPNAMES = 128,
    NET_PROPERTY_ACTIVEWINDOW = 256,
    NET_PROPERTY_WORKAREA = 512,
    NET_PROPERTY_SUPPORTINGWMCHECK = 1024,
    NET_PROPERTY_VIRTUALROOTS = 2048,
    NET_PROPERTY_CLOSEWINDOW = 8192,
    NET_PROPERTY_WMMOVERESIZE = 16384,
    NET_PROPERTY_WMNAME = 32768,
    NET_PROPERTY_WMVISIBLENAME = 65536,
    NET_PROPERTY_WMDESKTOP = 131072,
    NET_PROPERTY_WMWINDOWTYPE = 262144,
    NET_PROPERTY_WMSTATE = 524288,
    NET_PROPERTY_WMSTRUT = 1048576,
    NET_PROPERTY_WMICONGEOMETRY = 2097152,
    NET_PROPERTY_WMICON = 4194304,
    NET_PROPERTY_WMPID = 8388608,
    NET_PROPERTY_WMHANDLEDICONS = 16777216,
    NET_PROPERTY_WMPING = 33554432,
    NET_PROPERTY_XAWMSTATE = 134217728,
    NET_PROPERTY_WMFRAMEEXTENTS = 268435456,
    NET_PROPERTY_WMICONNAME = 536870912,
    NET_PROPERTY_WMVISIBLEICONNAME = 1073741824,
    NET_PROPERTY_WMGEOMETRY = 2147483648,
    NET_PROPERTY_WMALLPROPERTIES = 4294967295
} NET__Property;

typedef enum {
    NET_PROPERTY2_WM2USERTIME = 1,
    NET_PROPERTY2_WM2STARTUPID = 2,
    NET_PROPERTY2_WM2TRANSIENTFOR = 4,
    NET_PROPERTY2_WM2GROUPLEADER = 8,
    NET_PROPERTY2_WM2ALLOWEDACTIONS = 16,
    NET_PROPERTY2_WM2RESTACKWINDOW = 32,
    NET_PROPERTY2_WM2MOVERESIZEWINDOW = 64,
    NET_PROPERTY2_WM2EXTENDEDSTRUT = 128,
    NET_PROPERTY2_WM2KDETEMPORARYRULES = 256,
    NET_PROPERTY2_WM2WINDOWCLASS = 512,
    NET_PROPERTY2_WM2WINDOWROLE = 1024,
    NET_PROPERTY2_WM2CLIENTMACHINE = 2048,
    NET_PROPERTY2_WM2SHOWINGDESKTOP = 4096,
    NET_PROPERTY2_WM2OPACITY = 8192,
    NET_PROPERTY2_WM2DESKTOPLAYOUT = 16384,
    NET_PROPERTY2_WM2FULLPLACEMENT = 32768,
    NET_PROPERTY2_WM2FULLSCREENMONITORS = 65536,
    NET_PROPERTY2_WM2FRAMEOVERLAP = 131072,
    NET_PROPERTY2_WM2ACTIVITIES = 262144,
    NET_PROPERTY2_WM2BLOCKCOMPOSITING = 524288,
    NET_PROPERTY2_WM2KDESHADOW = 1048576,
    NET_PROPERTY2_WM2URGENCY = 2097152,
    NET_PROPERTY2_WM2INPUT = 4194304,
    NET_PROPERTY2_WM2PROTOCOLS = 8388608,
    NET_PROPERTY2_WM2INITIALMAPPINGSTATE = 16777216,
    NET_PROPERTY2_WM2ICONPIXMAP = 33554432,
    NET_PROPERTY2_WM2OPAQUEREGION = 33554432,
    NET_PROPERTY2_WM2DESKTOPFILENAME = 67108864,
    NET_PROPERTY2_WM2GTKFRAMEEXTENTS = 134217728,
    NET_PROPERTY2_WM2APPMENUSERVICENAME = 268435456,
    NET_PROPERTY2_WM2APPMENUOBJECTPATH = 536870912,
    NET_PROPERTY2_WM2GTKAPPLICATIONID = 1073741824,
    NET_PROPERTY2_WM2GTKSHOWWINDOWMENU = 2147483648,
    NET_PROPERTY2_WM2ALLPROPERTIES = 4294967295
} NET__Property2;

typedef enum {
    NET__ONALLDESKTOPS = -1
} NET__;

typedef enum {
    NET_REQUESTSOURCE_FROMUNKNOWN = 0,
    NET_REQUESTSOURCE_FROMAPPLICATION = 1,
    NET_REQUESTSOURCE_FROMTOOL = 2
} NET__RequestSource;

typedef enum {
    NET_ORIENTATION_ORIENTATIONHORIZONTAL = 0,
    NET_ORIENTATION_ORIENTATIONVERTICAL = 1
} NET__Orientation;

typedef enum {
    NET_DESKTOPLAYOUTCORNER_DESKTOPLAYOUTCORNERTOPLEFT = 0,
    NET_DESKTOPLAYOUTCORNER_DESKTOPLAYOUTCORNERTOPRIGHT = 1,
    NET_DESKTOPLAYOUTCORNER_DESKTOPLAYOUTCORNERBOTTOMLEFT = 2,
    NET_DESKTOPLAYOUTCORNER_DESKTOPLAYOUTCORNERBOTTOMRIGHT = 3
} NET__DesktopLayoutCorner;

typedef enum {
    NET_PROTOCOL_NOPROTOCOL = 0,
    NET_PROTOCOL_TAKEFOCUSPROTOCOL = 1,
    NET_PROTOCOL_DELETEWINDOWPROTOCOL = 2,
    NET_PROTOCOL_PINGPROTOCOL = 4,
    NET_PROTOCOL_SYNCREQUESTPROTOCOL = 8,
    NET_PROTOCOL_CONTEXTHELPPROTOCOL = 16
} NET__Protocol;

#endif
