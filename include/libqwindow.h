#pragma once
#ifndef SRCQT6C_LIBQWINDOW_H
#define SRCQT6C_LIBQWINDOW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqaccessible.h"
#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqcursor.h"
#include "libqicon.h"
#include "libqmargins.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqregion.h"
#include "libqscreen.h"
#include "libqsize.h"
#include <string.h>
#include "libqsurface.h"
#include "libqsurfaceformat.h"
#include "libqthread.h"
#include "libqvariant.h"

QWindow* q_window_new();
QWindow* q_window_new2(void* parent);
QWindow* q_window_new3(void* screen);
QMetaObject* q_window_meta_object(void* self);
void* q_window_metacast(void* self, const char* param1);
int32_t q_window_metacall(void* self, int64_t param1, int param2, void* param3);
void q_window_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_window_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_window_tr(const char* s);
void q_window_set_surface_type(void* self, int64_t surfaceType);
int64_t q_window_surface_type(void* self);
void q_window_on_surface_type(void* self, int64_t (*slot)());
int64_t q_window_qbase_surface_type(void* self);
bool q_window_is_visible(void* self);
int64_t q_window_visibility(void* self);
void q_window_set_visibility(void* self, int64_t v);
void q_window_create(void* self);
uintptr_t q_window_win_id(void* self);
QWindow* q_window_parent(void* self);
void q_window_set_parent(void* self, void* parent);
bool q_window_is_top_level(void* self);
bool q_window_is_modal(void* self);
int64_t q_window_modality(void* self);
void q_window_set_modality(void* self, int64_t modality);
void q_window_set_format(void* self, void* format);
QSurfaceFormat* q_window_format(void* self);
void q_window_on_format(void* self, QSurfaceFormat* (*slot)());
QSurfaceFormat* q_window_qbase_format(void* self);
QSurfaceFormat* q_window_requested_format(void* self);
void q_window_set_flags(void* self, int64_t flags);
int64_t q_window_flags(void* self);
void q_window_set_flag(void* self, int64_t param1);
int64_t q_window_type(void* self);
const char* q_window_title(void* self);
void q_window_set_opacity(void* self, double level);
double q_window_opacity(void* self);
void q_window_set_mask(void* self, void* region);
QRegion* q_window_mask(void* self);
bool q_window_is_active(void* self);
void q_window_report_content_orientation_change(void* self, int64_t orientation);
int64_t q_window_content_orientation(void* self);
double q_window_device_pixel_ratio(void* self);
int64_t q_window_window_state(void* self);
int64_t q_window_window_states(void* self);
void q_window_set_window_state(void* self, int64_t state);
void q_window_set_window_states(void* self, int64_t states);
void q_window_set_transient_parent(void* self, void* parent);
QWindow* q_window_transient_parent(void* self);
bool q_window_is_ancestor_of(void* self, void* child);
bool q_window_is_exposed(void* self);
int32_t q_window_minimum_width(void* self);
int32_t q_window_minimum_height(void* self);
int32_t q_window_maximum_width(void* self);
int32_t q_window_maximum_height(void* self);
QSize* q_window_minimum_size(void* self);
QSize* q_window_maximum_size(void* self);
QSize* q_window_base_size(void* self);
QSize* q_window_size_increment(void* self);
void q_window_set_minimum_size(void* self, void* size);
void q_window_set_maximum_size(void* self, void* size);
void q_window_set_base_size(void* self, void* size);
void q_window_set_size_increment(void* self, void* size);
QRect* q_window_geometry(void* self);
QMargins* q_window_frame_margins(void* self);
QRect* q_window_frame_geometry(void* self);
QPoint* q_window_frame_position(void* self);
void q_window_set_frame_position(void* self, void* point);
int32_t q_window_width(void* self);
int32_t q_window_height(void* self);
int32_t q_window_x(void* self);
int32_t q_window_y(void* self);
QSize* q_window_size(void* self);
void q_window_on_size(void* self, QSize* (*slot)());
QSize* q_window_qbase_size(void* self);
QPoint* q_window_position(void* self);
void q_window_set_position(void* self, void* pt);
void q_window_set_position2(void* self, int posx, int posy);
void q_window_resize(void* self, void* newSize);
void q_window_resize2(void* self, int w, int h);
void q_window_set_file_path(void* self, const char* filePath);
const char* q_window_file_path(void* self);
void q_window_set_icon(void* self, void* icon);
QIcon* q_window_icon(void* self);
void q_window_destroy(void* self);
bool q_window_set_keyboard_grab_enabled(void* self, bool grab);
bool q_window_set_mouse_grab_enabled(void* self, bool grab);
QScreen* q_window_screen(void* self);
void q_window_set_screen(void* self, void* screen);
QAccessibleInterface* q_window_accessible_root(void* self);
void q_window_on_accessible_root(void* self, QAccessibleInterface* (*slot)());
QAccessibleInterface* q_window_qbase_accessible_root(void* self);
QObject* q_window_focus_object(void* self);
void q_window_on_focus_object(void* self, QObject* (*slot)());
QObject* q_window_qbase_focus_object(void* self);
QPointF* q_window_map_to_global(void* self, void* pos);
QPointF* q_window_map_from_global(void* self, void* pos);
QPoint* q_window_map_to_global_with_pos(void* self, void* pos);
QPoint* q_window_map_from_global_with_pos(void* self, void* pos);
QCursor* q_window_cursor(void* self);
void q_window_set_cursor(void* self, void* cursor);
void q_window_unset_cursor(void* self);
QWindow* q_window_from_win_id(uintptr_t id);
void* q_window_resolve_interface(void* self, const char* name, int revision);
void q_window_on_resolve_interface(void* self, void* (*slot)(void*, const char*, int));
void* q_window_qbase_resolve_interface(void* self, const char* name, int revision);
void q_window_request_activate(void* self);
void q_window_set_visible(void* self, bool visible);
void q_window_show(void* self);
void q_window_hide(void* self);
void q_window_show_minimized(void* self);
void q_window_show_maximized(void* self);
void q_window_show_full_screen(void* self);
void q_window_show_normal(void* self);
bool q_window_close(void* self);
void q_window_raise(void* self);
void q_window_lower(void* self);
bool q_window_start_system_resize(void* self, int64_t edges);
bool q_window_start_system_move(void* self);
void q_window_set_title(void* self, const char* title);
void q_window_set_x(void* self, int arg);
void q_window_set_y(void* self, int arg);
void q_window_set_width(void* self, int arg);
void q_window_set_height(void* self, int arg);
void q_window_set_geometry(void* self, int posx, int posy, int w, int h);
void q_window_set_geometry_with_rect(void* self, void* rect);
void q_window_set_minimum_width(void* self, int w);
void q_window_set_minimum_height(void* self, int h);
void q_window_set_maximum_width(void* self, int w);
void q_window_set_maximum_height(void* self, int h);
void q_window_alert(void* self, int msec);
void q_window_request_update(void* self);
void q_window_screen_changed(void* self, void* screen);
void q_window_on_screen_changed(void* self, void (*slot)(void*, void*));
void q_window_modality_changed(void* self, int64_t modality);
void q_window_on_modality_changed(void* self, void (*slot)(void*, int64_t));
void q_window_window_state_changed(void* self, int64_t windowState);
void q_window_on_window_state_changed(void* self, void (*slot)(void*, int64_t));
void q_window_window_title_changed(void* self, const char* title);
void q_window_on_window_title_changed(void* self, void (*slot)(void*, const char*));
void q_window_x_changed(void* self, int arg);
void q_window_on_x_changed(void* self, void (*slot)(void*, int));
void q_window_y_changed(void* self, int arg);
void q_window_on_y_changed(void* self, void (*slot)(void*, int));
void q_window_width_changed(void* self, int arg);
void q_window_on_width_changed(void* self, void (*slot)(void*, int));
void q_window_height_changed(void* self, int arg);
void q_window_on_height_changed(void* self, void (*slot)(void*, int));
void q_window_minimum_width_changed(void* self, int arg);
void q_window_on_minimum_width_changed(void* self, void (*slot)(void*, int));
void q_window_minimum_height_changed(void* self, int arg);
void q_window_on_minimum_height_changed(void* self, void (*slot)(void*, int));
void q_window_maximum_width_changed(void* self, int arg);
void q_window_on_maximum_width_changed(void* self, void (*slot)(void*, int));
void q_window_maximum_height_changed(void* self, int arg);
void q_window_on_maximum_height_changed(void* self, void (*slot)(void*, int));
void q_window_visible_changed(void* self, bool arg);
void q_window_on_visible_changed(void* self, void (*slot)(void*, bool));
void q_window_visibility_changed(void* self, int64_t visibility);
void q_window_on_visibility_changed(void* self, void (*slot)(void*, int64_t));
void q_window_active_changed(void* self);
void q_window_on_active_changed(void* self, void (*slot)(void*));
void q_window_content_orientation_changed(void* self, int64_t orientation);
void q_window_on_content_orientation_changed(void* self, void (*slot)(void*, int64_t));
void q_window_focus_object_changed(void* self, void* object);
void q_window_on_focus_object_changed(void* self, void (*slot)(void*, void*));
void q_window_opacity_changed(void* self, double opacity);
void q_window_on_opacity_changed(void* self, void (*slot)(void*, double));
void q_window_transient_parent_changed(void* self, void* transientParent);
void q_window_on_transient_parent_changed(void* self, void (*slot)(void*, void*));
void q_window_expose_event(void* self, void* param1);
void q_window_on_expose_event(void* self, void (*slot)(void*, void*));
void q_window_qbase_expose_event(void* self, void* param1);
void q_window_resize_event(void* self, void* param1);
void q_window_on_resize_event(void* self, void (*slot)(void*, void*));
void q_window_qbase_resize_event(void* self, void* param1);
void q_window_paint_event(void* self, void* param1);
void q_window_on_paint_event(void* self, void (*slot)(void*, void*));
void q_window_qbase_paint_event(void* self, void* param1);
void q_window_move_event(void* self, void* param1);
void q_window_on_move_event(void* self, void (*slot)(void*, void*));
void q_window_qbase_move_event(void* self, void* param1);
void q_window_focus_in_event(void* self, void* param1);
void q_window_on_focus_in_event(void* self, void (*slot)(void*, void*));
void q_window_qbase_focus_in_event(void* self, void* param1);
void q_window_focus_out_event(void* self, void* param1);
void q_window_on_focus_out_event(void* self, void (*slot)(void*, void*));
void q_window_qbase_focus_out_event(void* self, void* param1);
void q_window_show_event(void* self, void* param1);
void q_window_on_show_event(void* self, void (*slot)(void*, void*));
void q_window_qbase_show_event(void* self, void* param1);
void q_window_hide_event(void* self, void* param1);
void q_window_on_hide_event(void* self, void (*slot)(void*, void*));
void q_window_qbase_hide_event(void* self, void* param1);
void q_window_close_event(void* self, void* param1);
void q_window_on_close_event(void* self, void (*slot)(void*, void*));
void q_window_qbase_close_event(void* self, void* param1);
bool q_window_event(void* self, void* param1);
void q_window_on_event(void* self, bool (*slot)(void*, void*));
bool q_window_qbase_event(void* self, void* param1);
void q_window_key_press_event(void* self, void* param1);
void q_window_on_key_press_event(void* self, void (*slot)(void*, void*));
void q_window_qbase_key_press_event(void* self, void* param1);
void q_window_key_release_event(void* self, void* param1);
void q_window_on_key_release_event(void* self, void (*slot)(void*, void*));
void q_window_qbase_key_release_event(void* self, void* param1);
void q_window_mouse_press_event(void* self, void* param1);
void q_window_on_mouse_press_event(void* self, void (*slot)(void*, void*));
void q_window_qbase_mouse_press_event(void* self, void* param1);
void q_window_mouse_release_event(void* self, void* param1);
void q_window_on_mouse_release_event(void* self, void (*slot)(void*, void*));
void q_window_qbase_mouse_release_event(void* self, void* param1);
void q_window_mouse_double_click_event(void* self, void* param1);
void q_window_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));
void q_window_qbase_mouse_double_click_event(void* self, void* param1);
void q_window_mouse_move_event(void* self, void* param1);
void q_window_on_mouse_move_event(void* self, void (*slot)(void*, void*));
void q_window_qbase_mouse_move_event(void* self, void* param1);
void q_window_wheel_event(void* self, void* param1);
void q_window_on_wheel_event(void* self, void (*slot)(void*, void*));
void q_window_qbase_wheel_event(void* self, void* param1);
void q_window_touch_event(void* self, void* param1);
void q_window_on_touch_event(void* self, void (*slot)(void*, void*));
void q_window_qbase_touch_event(void* self, void* param1);
void q_window_tablet_event(void* self, void* param1);
void q_window_on_tablet_event(void* self, void (*slot)(void*, void*));
void q_window_qbase_tablet_event(void* self, void* param1);
bool q_window_native_event(void* self, const char* eventType, void* message, intptr_t* result);
void q_window_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));
bool q_window_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);
const char* q_window_tr2(const char* s, const char* c);
const char* q_window_tr3(const char* s, const char* c, int n);
QWindow* q_window_parent1(void* self, int64_t mode);
void q_window_set_flag2(void* self, int64_t param1, bool on);
bool q_window_is_ancestor_of2(void* self, void* child, int64_t mode);
const char* q_window_object_name(void* self);
void q_window_set_object_name(void* self, const char* name);
bool q_window_is_widget_type(void* self);
bool q_window_is_window_type(void* self);
bool q_window_is_quick_item_type(void* self);
bool q_window_signals_blocked(void* self);
bool q_window_block_signals(void* self, bool b);
QThread* q_window_thread(void* self);
void q_window_move_to_thread(void* self, void* thread);
int32_t q_window_start_timer(void* self, int interval);
void q_window_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_window_children(void* self);
void q_window_install_event_filter(void* self, void* filterObj);
void q_window_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_window_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_window_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_window_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_window_disconnect_with_q_meta_object_connection(void* param1);
void q_window_dump_object_tree(void* self);
void q_window_dump_object_info(void* self);
bool q_window_set_property(void* self, const char* name, void* value);
QVariant* q_window_property(void* self, const char* name);
const char** q_window_dynamic_property_names(void* self);
QBindingStorage* q_window_binding_storage(void* self);
QBindingStorage* q_window_binding_storage2(void* self);
void q_window_destroyed(void* self);
void q_window_on_destroyed(void* self, void (*slot)(void*));
bool q_window_inherits(void* self, const char* classname);
void q_window_delete_later(void* self);
int32_t q_window_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_window_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_window_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_window_destroyed1(void* self, void* param1);
void q_window_on_destroyed1(void* self, void (*slot)(void*, void*));
int64_t q_window_surface_class(void* self);
bool q_window_supports_open_g_l(void* self);
bool q_window_event_filter(void* self, void* watched, void* event);
bool q_window_qbase_event_filter(void* self, void* watched, void* event);
void q_window_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_window_timer_event(void* self, void* event);
void q_window_qbase_timer_event(void* self, void* event);
void q_window_on_timer_event(void* self, void (*slot)(void*, void*));
void q_window_child_event(void* self, void* event);
void q_window_qbase_child_event(void* self, void* event);
void q_window_on_child_event(void* self, void (*slot)(void*, void*));
void q_window_custom_event(void* self, void* event);
void q_window_qbase_custom_event(void* self, void* event);
void q_window_on_custom_event(void* self, void (*slot)(void*, void*));
void q_window_connect_notify(void* self, void* signal);
void q_window_qbase_connect_notify(void* self, void* signal);
void q_window_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_window_disconnect_notify(void* self, void* signal);
void q_window_qbase_disconnect_notify(void* self, void* signal);
void q_window_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_window_sender(void* self);
QObject* q_window_qbase_sender(void* self);
void q_window_on_sender(void* self, QObject* (*slot)());
int32_t q_window_sender_signal_index(void* self);
int32_t q_window_qbase_sender_signal_index(void* self);
void q_window_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_window_receivers(void* self, const char* signal);
int32_t q_window_qbase_receivers(void* self, const char* signal);
void q_window_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_window_is_signal_connected(void* self, void* signal);
bool q_window_qbase_is_signal_connected(void* self, void* signal);
void q_window_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_window_delete(void* self);

/// https://doc.qt.io/qt-6/qwindow.html#types

typedef enum {
    QWINDOW_VISIBILITY_HIDDEN = 0,
    QWINDOW_VISIBILITY_AUTOMATICVISIBILITY = 1,
    QWINDOW_VISIBILITY_WINDOWED = 2,
    QWINDOW_VISIBILITY_MINIMIZED = 3,
    QWINDOW_VISIBILITY_MAXIMIZED = 4,
    QWINDOW_VISIBILITY_FULLSCREEN = 5
} QWindow__Visibility;

typedef enum {
    QWINDOW_ANCESTORMODE_EXCLUDETRANSIENTS = 0,
    QWINDOW_ANCESTORMODE_INCLUDETRANSIENTS = 1
} QWindow__AncestorMode;

#endif
