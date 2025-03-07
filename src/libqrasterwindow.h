#pragma once
#ifndef SRCQT6C_LIBQRASTERWINDOW_H
#define SRCQT6C_LIBQRASTERWINDOW_H

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
#include "libqpaintdevice.h"
#include "libqpaintdevicewindow.h"
#include "libqpaintengine.h"
#include "libqpainter.h"
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
#include "libqwindow.h"

QRasterWindow* q_rasterwindow_new();
QRasterWindow* q_rasterwindow_new2(void* parent);
QMetaObject* q_rasterwindow_meta_object(void* self);
void* q_rasterwindow_metacast(void* self, const char* param1);
int32_t q_rasterwindow_metacall(void* self, int64_t param1, int param2, void* param3);
void q_rasterwindow_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_rasterwindow_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_rasterwindow_tr(const char* s);
int32_t q_rasterwindow_metric(void* self, int64_t metric);
void q_rasterwindow_on_metric(void* self, int32_t (*slot)(void*, int64_t));
int32_t q_rasterwindow_qbase_metric(void* self, int64_t metric);
QPaintDevice* q_rasterwindow_redirected(void* self, void* param1);
void q_rasterwindow_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));
QPaintDevice* q_rasterwindow_qbase_redirected(void* self, void* param1);
const char* q_rasterwindow_tr2(const char* s, const char* c);
const char* q_rasterwindow_tr3(const char* s, const char* c, int n);
void q_rasterwindow_update(void* self, void* rect);
void q_rasterwindow_update_with_region(void* self, void* region);
void q_rasterwindow_update2(void* self);
void q_rasterwindow_set_surface_type(void* self, int64_t surfaceType);
bool q_rasterwindow_is_visible(void* self);
int64_t q_rasterwindow_visibility(void* self);
void q_rasterwindow_set_visibility(void* self, int64_t v);
void q_rasterwindow_create(void* self);
uintptr_t q_rasterwindow_win_id(void* self);
QWindow* q_rasterwindow_parent(void* self);
void q_rasterwindow_set_parent(void* self, void* parent);
bool q_rasterwindow_is_top_level(void* self);
bool q_rasterwindow_is_modal(void* self);
int64_t q_rasterwindow_modality(void* self);
void q_rasterwindow_set_modality(void* self, int64_t modality);
void q_rasterwindow_set_format(void* self, void* format);
QSurfaceFormat* q_rasterwindow_requested_format(void* self);
void q_rasterwindow_set_flags(void* self, int64_t flags);
int64_t q_rasterwindow_flags(void* self);
void q_rasterwindow_set_flag(void* self, int64_t param1);
int64_t q_rasterwindow_type(void* self);
const char* q_rasterwindow_title(void* self);
void q_rasterwindow_set_opacity(void* self, double level);
double q_rasterwindow_opacity(void* self);
void q_rasterwindow_set_mask(void* self, void* region);
QRegion* q_rasterwindow_mask(void* self);
bool q_rasterwindow_is_active(void* self);
void q_rasterwindow_report_content_orientation_change(void* self, int64_t orientation);
int64_t q_rasterwindow_content_orientation(void* self);
double q_rasterwindow_device_pixel_ratio(void* self);
int64_t q_rasterwindow_window_state(void* self);
int64_t q_rasterwindow_window_states(void* self);
void q_rasterwindow_set_window_state(void* self, int64_t state);
void q_rasterwindow_set_window_states(void* self, int64_t states);
void q_rasterwindow_set_transient_parent(void* self, void* parent);
QWindow* q_rasterwindow_transient_parent(void* self);
bool q_rasterwindow_is_ancestor_of(void* self, void* child);
bool q_rasterwindow_is_exposed(void* self);
int32_t q_rasterwindow_minimum_width(void* self);
int32_t q_rasterwindow_minimum_height(void* self);
int32_t q_rasterwindow_maximum_width(void* self);
int32_t q_rasterwindow_maximum_height(void* self);
QSize* q_rasterwindow_minimum_size(void* self);
QSize* q_rasterwindow_maximum_size(void* self);
QSize* q_rasterwindow_base_size(void* self);
QSize* q_rasterwindow_size_increment(void* self);
void q_rasterwindow_set_minimum_size(void* self, void* size);
void q_rasterwindow_set_maximum_size(void* self, void* size);
void q_rasterwindow_set_base_size(void* self, void* size);
void q_rasterwindow_set_size_increment(void* self, void* size);
QRect* q_rasterwindow_geometry(void* self);
QMargins* q_rasterwindow_frame_margins(void* self);
QRect* q_rasterwindow_frame_geometry(void* self);
QPoint* q_rasterwindow_frame_position(void* self);
void q_rasterwindow_set_frame_position(void* self, void* point);
int32_t q_rasterwindow_width(void* self);
int32_t q_rasterwindow_height(void* self);
int32_t q_rasterwindow_x(void* self);
int32_t q_rasterwindow_y(void* self);
QPoint* q_rasterwindow_position(void* self);
void q_rasterwindow_set_position(void* self, void* pt);
void q_rasterwindow_set_position2(void* self, int posx, int posy);
void q_rasterwindow_resize(void* self, void* newSize);
void q_rasterwindow_resize2(void* self, int w, int h);
void q_rasterwindow_set_file_path(void* self, const char* filePath);
const char* q_rasterwindow_file_path(void* self);
void q_rasterwindow_set_icon(void* self, void* icon);
QIcon* q_rasterwindow_icon(void* self);
void q_rasterwindow_destroy(void* self);
bool q_rasterwindow_set_keyboard_grab_enabled(void* self, bool grab);
bool q_rasterwindow_set_mouse_grab_enabled(void* self, bool grab);
QScreen* q_rasterwindow_screen(void* self);
void q_rasterwindow_set_screen(void* self, void* screen);
QPointF* q_rasterwindow_map_to_global(void* self, void* pos);
QPointF* q_rasterwindow_map_from_global(void* self, void* pos);
QPoint* q_rasterwindow_map_to_global_with_pos(void* self, void* pos);
QPoint* q_rasterwindow_map_from_global_with_pos(void* self, void* pos);
QCursor* q_rasterwindow_cursor(void* self);
void q_rasterwindow_set_cursor(void* self, void* cursor);
void q_rasterwindow_unset_cursor(void* self);
QWindow* q_rasterwindow_from_win_id(uintptr_t id);
void q_rasterwindow_request_activate(void* self);
void q_rasterwindow_set_visible(void* self, bool visible);
void q_rasterwindow_show(void* self);
void q_rasterwindow_hide(void* self);
void q_rasterwindow_show_minimized(void* self);
void q_rasterwindow_show_maximized(void* self);
void q_rasterwindow_show_full_screen(void* self);
void q_rasterwindow_show_normal(void* self);
bool q_rasterwindow_close(void* self);
void q_rasterwindow_raise(void* self);
void q_rasterwindow_lower(void* self);
bool q_rasterwindow_start_system_resize(void* self, int64_t edges);
bool q_rasterwindow_start_system_move(void* self);
void q_rasterwindow_set_title(void* self, const char* title);
void q_rasterwindow_set_x(void* self, int arg);
void q_rasterwindow_set_y(void* self, int arg);
void q_rasterwindow_set_width(void* self, int arg);
void q_rasterwindow_set_height(void* self, int arg);
void q_rasterwindow_set_geometry(void* self, int posx, int posy, int w, int h);
void q_rasterwindow_set_geometry_with_rect(void* self, void* rect);
void q_rasterwindow_set_minimum_width(void* self, int w);
void q_rasterwindow_set_minimum_height(void* self, int h);
void q_rasterwindow_set_maximum_width(void* self, int w);
void q_rasterwindow_set_maximum_height(void* self, int h);
void q_rasterwindow_alert(void* self, int msec);
void q_rasterwindow_request_update(void* self);
void q_rasterwindow_screen_changed(void* self, void* screen);
void q_rasterwindow_on_screen_changed(void* self, void (*slot)(void*, void*));
void q_rasterwindow_modality_changed(void* self, int64_t modality);
void q_rasterwindow_on_modality_changed(void* self, void (*slot)(void*, int64_t));
void q_rasterwindow_window_state_changed(void* self, int64_t windowState);
void q_rasterwindow_on_window_state_changed(void* self, void (*slot)(void*, int64_t));
void q_rasterwindow_window_title_changed(void* self, const char* title);
void q_rasterwindow_on_window_title_changed(void* self, void (*slot)(void*, const char*));
void q_rasterwindow_x_changed(void* self, int arg);
void q_rasterwindow_on_x_changed(void* self, void (*slot)(void*, int));
void q_rasterwindow_y_changed(void* self, int arg);
void q_rasterwindow_on_y_changed(void* self, void (*slot)(void*, int));
void q_rasterwindow_width_changed(void* self, int arg);
void q_rasterwindow_on_width_changed(void* self, void (*slot)(void*, int));
void q_rasterwindow_height_changed(void* self, int arg);
void q_rasterwindow_on_height_changed(void* self, void (*slot)(void*, int));
void q_rasterwindow_minimum_width_changed(void* self, int arg);
void q_rasterwindow_on_minimum_width_changed(void* self, void (*slot)(void*, int));
void q_rasterwindow_minimum_height_changed(void* self, int arg);
void q_rasterwindow_on_minimum_height_changed(void* self, void (*slot)(void*, int));
void q_rasterwindow_maximum_width_changed(void* self, int arg);
void q_rasterwindow_on_maximum_width_changed(void* self, void (*slot)(void*, int));
void q_rasterwindow_maximum_height_changed(void* self, int arg);
void q_rasterwindow_on_maximum_height_changed(void* self, void (*slot)(void*, int));
void q_rasterwindow_visible_changed(void* self, bool arg);
void q_rasterwindow_on_visible_changed(void* self, void (*slot)(void*, bool));
void q_rasterwindow_visibility_changed(void* self, int64_t visibility);
void q_rasterwindow_on_visibility_changed(void* self, void (*slot)(void*, int64_t));
void q_rasterwindow_active_changed(void* self);
void q_rasterwindow_on_active_changed(void* self, void (*slot)(void*));
void q_rasterwindow_content_orientation_changed(void* self, int64_t orientation);
void q_rasterwindow_on_content_orientation_changed(void* self, void (*slot)(void*, int64_t));
void q_rasterwindow_focus_object_changed(void* self, void* object);
void q_rasterwindow_on_focus_object_changed(void* self, void (*slot)(void*, void*));
void q_rasterwindow_opacity_changed(void* self, double opacity);
void q_rasterwindow_on_opacity_changed(void* self, void (*slot)(void*, double));
void q_rasterwindow_transient_parent_changed(void* self, void* transientParent);
void q_rasterwindow_on_transient_parent_changed(void* self, void (*slot)(void*, void*));
QWindow* q_rasterwindow_parent1(void* self, int64_t mode);
void q_rasterwindow_set_flag2(void* self, int64_t param1, bool on);
bool q_rasterwindow_is_ancestor_of2(void* self, void* child, int64_t mode);
const char* q_rasterwindow_object_name(void* self);
void q_rasterwindow_set_object_name(void* self, const char* name);
bool q_rasterwindow_is_widget_type(void* self);
bool q_rasterwindow_is_window_type(void* self);
bool q_rasterwindow_is_quick_item_type(void* self);
bool q_rasterwindow_signals_blocked(void* self);
bool q_rasterwindow_block_signals(void* self, bool b);
QThread* q_rasterwindow_thread(void* self);
void q_rasterwindow_move_to_thread(void* self, void* thread);
int32_t q_rasterwindow_start_timer(void* self, int interval);
void q_rasterwindow_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_rasterwindow_children(void* self);
void q_rasterwindow_install_event_filter(void* self, void* filterObj);
void q_rasterwindow_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_rasterwindow_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_rasterwindow_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_rasterwindow_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_rasterwindow_disconnect_with_q_meta_object_connection(void* param1);
void q_rasterwindow_dump_object_tree(void* self);
void q_rasterwindow_dump_object_info(void* self);
bool q_rasterwindow_set_property(void* self, const char* name, void* value);
QVariant* q_rasterwindow_property(void* self, const char* name);
const char** q_rasterwindow_dynamic_property_names(void* self);
QBindingStorage* q_rasterwindow_binding_storage(void* self);
QBindingStorage* q_rasterwindow_binding_storage2(void* self);
void q_rasterwindow_destroyed(void* self);
void q_rasterwindow_on_destroyed(void* self, void (*slot)(void*));
bool q_rasterwindow_inherits(void* self, const char* classname);
void q_rasterwindow_delete_later(void* self);
int32_t q_rasterwindow_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_rasterwindow_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_rasterwindow_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_rasterwindow_destroyed1(void* self, void* param1);
void q_rasterwindow_on_destroyed1(void* self, void (*slot)(void*, void*));
int64_t q_rasterwindow_surface_class(void* self);
bool q_rasterwindow_supports_open_g_l(void* self);
bool q_rasterwindow_painting_active(void* self);
QPaintEngine* q_rasterwindow_paint_engine(void* self);
int32_t q_rasterwindow_width_m_m(void* self);
int32_t q_rasterwindow_height_m_m(void* self);
int32_t q_rasterwindow_logical_dpi_x(void* self);
int32_t q_rasterwindow_logical_dpi_y(void* self);
int32_t q_rasterwindow_physical_dpi_x(void* self);
int32_t q_rasterwindow_physical_dpi_y(void* self);
double q_rasterwindow_device_pixel_ratio_f(void* self);
int32_t q_rasterwindow_color_count(void* self);
int32_t q_rasterwindow_depth(void* self);
double q_rasterwindow_device_pixel_ratio_f_scale();
void q_rasterwindow_expose_event(void* self, void* param1);
void q_rasterwindow_qbase_expose_event(void* self, void* param1);
void q_rasterwindow_on_expose_event(void* self, void (*slot)(void*, void*));
void q_rasterwindow_paint_event(void* self, void* event);
void q_rasterwindow_qbase_paint_event(void* self, void* event);
void q_rasterwindow_on_paint_event(void* self, void (*slot)(void*, void*));
bool q_rasterwindow_event(void* self, void* event);
bool q_rasterwindow_qbase_event(void* self, void* event);
void q_rasterwindow_on_event(void* self, bool (*slot)(void*, void*));
int64_t q_rasterwindow_surface_type(void* self);
int64_t q_rasterwindow_qbase_surface_type(void* self);
void q_rasterwindow_on_surface_type(void* self, int64_t (*slot)());
QSurfaceFormat* q_rasterwindow_format(void* self);
QSurfaceFormat* q_rasterwindow_qbase_format(void* self);
void q_rasterwindow_on_format(void* self, QSurfaceFormat* (*slot)());
QSize* q_rasterwindow_size(void* self);
QSize* q_rasterwindow_qbase_size(void* self);
void q_rasterwindow_on_size(void* self, QSize* (*slot)());
QAccessibleInterface* q_rasterwindow_accessible_root(void* self);
QAccessibleInterface* q_rasterwindow_qbase_accessible_root(void* self);
void q_rasterwindow_on_accessible_root(void* self, QAccessibleInterface* (*slot)());
QObject* q_rasterwindow_focus_object(void* self);
QObject* q_rasterwindow_qbase_focus_object(void* self);
void q_rasterwindow_on_focus_object(void* self, QObject* (*slot)());
void q_rasterwindow_resize_event(void* self, void* param1);
void q_rasterwindow_qbase_resize_event(void* self, void* param1);
void q_rasterwindow_on_resize_event(void* self, void (*slot)(void*, void*));
void q_rasterwindow_move_event(void* self, void* param1);
void q_rasterwindow_qbase_move_event(void* self, void* param1);
void q_rasterwindow_on_move_event(void* self, void (*slot)(void*, void*));
void q_rasterwindow_focus_in_event(void* self, void* param1);
void q_rasterwindow_qbase_focus_in_event(void* self, void* param1);
void q_rasterwindow_on_focus_in_event(void* self, void (*slot)(void*, void*));
void q_rasterwindow_focus_out_event(void* self, void* param1);
void q_rasterwindow_qbase_focus_out_event(void* self, void* param1);
void q_rasterwindow_on_focus_out_event(void* self, void (*slot)(void*, void*));
void q_rasterwindow_show_event(void* self, void* param1);
void q_rasterwindow_qbase_show_event(void* self, void* param1);
void q_rasterwindow_on_show_event(void* self, void (*slot)(void*, void*));
void q_rasterwindow_hide_event(void* self, void* param1);
void q_rasterwindow_qbase_hide_event(void* self, void* param1);
void q_rasterwindow_on_hide_event(void* self, void (*slot)(void*, void*));
void q_rasterwindow_close_event(void* self, void* param1);
void q_rasterwindow_qbase_close_event(void* self, void* param1);
void q_rasterwindow_on_close_event(void* self, void (*slot)(void*, void*));
void q_rasterwindow_key_press_event(void* self, void* param1);
void q_rasterwindow_qbase_key_press_event(void* self, void* param1);
void q_rasterwindow_on_key_press_event(void* self, void (*slot)(void*, void*));
void q_rasterwindow_key_release_event(void* self, void* param1);
void q_rasterwindow_qbase_key_release_event(void* self, void* param1);
void q_rasterwindow_on_key_release_event(void* self, void (*slot)(void*, void*));
void q_rasterwindow_mouse_press_event(void* self, void* param1);
void q_rasterwindow_qbase_mouse_press_event(void* self, void* param1);
void q_rasterwindow_on_mouse_press_event(void* self, void (*slot)(void*, void*));
void q_rasterwindow_mouse_release_event(void* self, void* param1);
void q_rasterwindow_qbase_mouse_release_event(void* self, void* param1);
void q_rasterwindow_on_mouse_release_event(void* self, void (*slot)(void*, void*));
void q_rasterwindow_mouse_double_click_event(void* self, void* param1);
void q_rasterwindow_qbase_mouse_double_click_event(void* self, void* param1);
void q_rasterwindow_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));
void q_rasterwindow_mouse_move_event(void* self, void* param1);
void q_rasterwindow_qbase_mouse_move_event(void* self, void* param1);
void q_rasterwindow_on_mouse_move_event(void* self, void (*slot)(void*, void*));
void q_rasterwindow_wheel_event(void* self, void* param1);
void q_rasterwindow_qbase_wheel_event(void* self, void* param1);
void q_rasterwindow_on_wheel_event(void* self, void (*slot)(void*, void*));
void q_rasterwindow_touch_event(void* self, void* param1);
void q_rasterwindow_qbase_touch_event(void* self, void* param1);
void q_rasterwindow_on_touch_event(void* self, void (*slot)(void*, void*));
void q_rasterwindow_tablet_event(void* self, void* param1);
void q_rasterwindow_qbase_tablet_event(void* self, void* param1);
void q_rasterwindow_on_tablet_event(void* self, void (*slot)(void*, void*));
bool q_rasterwindow_native_event(void* self, const char* eventType, void* message, intptr_t* result);
bool q_rasterwindow_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);
void q_rasterwindow_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));
bool q_rasterwindow_event_filter(void* self, void* watched, void* event);
bool q_rasterwindow_qbase_event_filter(void* self, void* watched, void* event);
void q_rasterwindow_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_rasterwindow_timer_event(void* self, void* event);
void q_rasterwindow_qbase_timer_event(void* self, void* event);
void q_rasterwindow_on_timer_event(void* self, void (*slot)(void*, void*));
void q_rasterwindow_child_event(void* self, void* event);
void q_rasterwindow_qbase_child_event(void* self, void* event);
void q_rasterwindow_on_child_event(void* self, void (*slot)(void*, void*));
void q_rasterwindow_custom_event(void* self, void* event);
void q_rasterwindow_qbase_custom_event(void* self, void* event);
void q_rasterwindow_on_custom_event(void* self, void (*slot)(void*, void*));
void q_rasterwindow_connect_notify(void* self, void* signal);
void q_rasterwindow_qbase_connect_notify(void* self, void* signal);
void q_rasterwindow_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_rasterwindow_disconnect_notify(void* self, void* signal);
void q_rasterwindow_qbase_disconnect_notify(void* self, void* signal);
void q_rasterwindow_on_disconnect_notify(void* self, void (*slot)(void*, void*));
int32_t q_rasterwindow_dev_type(void* self);
int32_t q_rasterwindow_qbase_dev_type(void* self);
void q_rasterwindow_on_dev_type(void* self, int32_t (*slot)());
void q_rasterwindow_init_painter(void* self, void* painter);
void q_rasterwindow_qbase_init_painter(void* self, void* painter);
void q_rasterwindow_on_init_painter(void* self, void (*slot)(void*, void*));
QPainter* q_rasterwindow_shared_painter(void* self);
QPainter* q_rasterwindow_qbase_shared_painter(void* self);
void q_rasterwindow_on_shared_painter(void* self, QPainter* (*slot)());
void* q_rasterwindow_resolve_interface(void* self, const char* name, int revision);
void* q_rasterwindow_qbase_resolve_interface(void* self, const char* name, int revision);
void q_rasterwindow_on_resolve_interface(void* self, void* (*slot)(void*, const char*, int));
QObject* q_rasterwindow_sender(void* self);
QObject* q_rasterwindow_qbase_sender(void* self);
void q_rasterwindow_on_sender(void* self, QObject* (*slot)());
int32_t q_rasterwindow_sender_signal_index(void* self);
int32_t q_rasterwindow_qbase_sender_signal_index(void* self);
void q_rasterwindow_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_rasterwindow_receivers(void* self, const char* signal);
int32_t q_rasterwindow_qbase_receivers(void* self, const char* signal);
void q_rasterwindow_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_rasterwindow_is_signal_connected(void* self, void* signal);
bool q_rasterwindow_qbase_is_signal_connected(void* self, void* signal);
void q_rasterwindow_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_rasterwindow_delete(void* self);

#endif
