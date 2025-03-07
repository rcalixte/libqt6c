#pragma once
#ifndef SRCQT6C_LIBQPAINTDEVICEWINDOW_H
#define SRCQT6C_LIBQPAINTDEVICEWINDOW_H

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
#include "libqpaintengine.h"
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

QMetaObject* q_paintdevicewindow_meta_object(void* self);
void* q_paintdevicewindow_metacast(void* self, const char* param1);
int32_t q_paintdevicewindow_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_paintdevicewindow_tr(const char* s);
void q_paintdevicewindow_update(void* self, void* rect);
void q_paintdevicewindow_update_with_region(void* self, void* region);
void q_paintdevicewindow_update2(void* self);
const char* q_paintdevicewindow_tr2(const char* s, const char* c);
const char* q_paintdevicewindow_tr3(const char* s, const char* c, int n);
void q_paintdevicewindow_set_surface_type(void* self, int64_t surfaceType);
int64_t q_paintdevicewindow_surface_type(void* self);
bool q_paintdevicewindow_is_visible(void* self);
int64_t q_paintdevicewindow_visibility(void* self);
void q_paintdevicewindow_set_visibility(void* self, int64_t v);
void q_paintdevicewindow_create(void* self);
uintptr_t q_paintdevicewindow_win_id(void* self);
QWindow* q_paintdevicewindow_parent(void* self);
void q_paintdevicewindow_set_parent(void* self, void* parent);
bool q_paintdevicewindow_is_top_level(void* self);
bool q_paintdevicewindow_is_modal(void* self);
int64_t q_paintdevicewindow_modality(void* self);
void q_paintdevicewindow_set_modality(void* self, int64_t modality);
void q_paintdevicewindow_set_format(void* self, void* format);
QSurfaceFormat* q_paintdevicewindow_format(void* self);
QSurfaceFormat* q_paintdevicewindow_requested_format(void* self);
void q_paintdevicewindow_set_flags(void* self, int64_t flags);
int64_t q_paintdevicewindow_flags(void* self);
void q_paintdevicewindow_set_flag(void* self, int64_t param1);
int64_t q_paintdevicewindow_type(void* self);
const char* q_paintdevicewindow_title(void* self);
void q_paintdevicewindow_set_opacity(void* self, double level);
double q_paintdevicewindow_opacity(void* self);
void q_paintdevicewindow_set_mask(void* self, void* region);
QRegion* q_paintdevicewindow_mask(void* self);
bool q_paintdevicewindow_is_active(void* self);
void q_paintdevicewindow_report_content_orientation_change(void* self, int64_t orientation);
int64_t q_paintdevicewindow_content_orientation(void* self);
double q_paintdevicewindow_device_pixel_ratio(void* self);
int64_t q_paintdevicewindow_window_state(void* self);
int64_t q_paintdevicewindow_window_states(void* self);
void q_paintdevicewindow_set_window_state(void* self, int64_t state);
void q_paintdevicewindow_set_window_states(void* self, int64_t states);
void q_paintdevicewindow_set_transient_parent(void* self, void* parent);
QWindow* q_paintdevicewindow_transient_parent(void* self);
bool q_paintdevicewindow_is_ancestor_of(void* self, void* child);
bool q_paintdevicewindow_is_exposed(void* self);
int32_t q_paintdevicewindow_minimum_width(void* self);
int32_t q_paintdevicewindow_minimum_height(void* self);
int32_t q_paintdevicewindow_maximum_width(void* self);
int32_t q_paintdevicewindow_maximum_height(void* self);
QSize* q_paintdevicewindow_minimum_size(void* self);
QSize* q_paintdevicewindow_maximum_size(void* self);
QSize* q_paintdevicewindow_base_size(void* self);
QSize* q_paintdevicewindow_size_increment(void* self);
void q_paintdevicewindow_set_minimum_size(void* self, void* size);
void q_paintdevicewindow_set_maximum_size(void* self, void* size);
void q_paintdevicewindow_set_base_size(void* self, void* size);
void q_paintdevicewindow_set_size_increment(void* self, void* size);
QRect* q_paintdevicewindow_geometry(void* self);
QMargins* q_paintdevicewindow_frame_margins(void* self);
QRect* q_paintdevicewindow_frame_geometry(void* self);
QPoint* q_paintdevicewindow_frame_position(void* self);
void q_paintdevicewindow_set_frame_position(void* self, void* point);
int32_t q_paintdevicewindow_width(void* self);
int32_t q_paintdevicewindow_height(void* self);
int32_t q_paintdevicewindow_x(void* self);
int32_t q_paintdevicewindow_y(void* self);
QSize* q_paintdevicewindow_size(void* self);
QPoint* q_paintdevicewindow_position(void* self);
void q_paintdevicewindow_set_position(void* self, void* pt);
void q_paintdevicewindow_set_position2(void* self, int posx, int posy);
void q_paintdevicewindow_resize(void* self, void* newSize);
void q_paintdevicewindow_resize2(void* self, int w, int h);
void q_paintdevicewindow_set_file_path(void* self, const char* filePath);
const char* q_paintdevicewindow_file_path(void* self);
void q_paintdevicewindow_set_icon(void* self, void* icon);
QIcon* q_paintdevicewindow_icon(void* self);
void q_paintdevicewindow_destroy(void* self);
bool q_paintdevicewindow_set_keyboard_grab_enabled(void* self, bool grab);
bool q_paintdevicewindow_set_mouse_grab_enabled(void* self, bool grab);
QScreen* q_paintdevicewindow_screen(void* self);
void q_paintdevicewindow_set_screen(void* self, void* screen);
QAccessibleInterface* q_paintdevicewindow_accessible_root(void* self);
QObject* q_paintdevicewindow_focus_object(void* self);
QPointF* q_paintdevicewindow_map_to_global(void* self, void* pos);
QPointF* q_paintdevicewindow_map_from_global(void* self, void* pos);
QPoint* q_paintdevicewindow_map_to_global_with_pos(void* self, void* pos);
QPoint* q_paintdevicewindow_map_from_global_with_pos(void* self, void* pos);
QCursor* q_paintdevicewindow_cursor(void* self);
void q_paintdevicewindow_set_cursor(void* self, void* cursor);
void q_paintdevicewindow_unset_cursor(void* self);
QWindow* q_paintdevicewindow_from_win_id(uintptr_t id);
void q_paintdevicewindow_request_activate(void* self);
void q_paintdevicewindow_set_visible(void* self, bool visible);
void q_paintdevicewindow_show(void* self);
void q_paintdevicewindow_hide(void* self);
void q_paintdevicewindow_show_minimized(void* self);
void q_paintdevicewindow_show_maximized(void* self);
void q_paintdevicewindow_show_full_screen(void* self);
void q_paintdevicewindow_show_normal(void* self);
bool q_paintdevicewindow_close(void* self);
void q_paintdevicewindow_raise(void* self);
void q_paintdevicewindow_lower(void* self);
bool q_paintdevicewindow_start_system_resize(void* self, int64_t edges);
bool q_paintdevicewindow_start_system_move(void* self);
void q_paintdevicewindow_set_title(void* self, const char* title);
void q_paintdevicewindow_set_x(void* self, int arg);
void q_paintdevicewindow_set_y(void* self, int arg);
void q_paintdevicewindow_set_width(void* self, int arg);
void q_paintdevicewindow_set_height(void* self, int arg);
void q_paintdevicewindow_set_geometry(void* self, int posx, int posy, int w, int h);
void q_paintdevicewindow_set_geometry_with_rect(void* self, void* rect);
void q_paintdevicewindow_set_minimum_width(void* self, int w);
void q_paintdevicewindow_set_minimum_height(void* self, int h);
void q_paintdevicewindow_set_maximum_width(void* self, int w);
void q_paintdevicewindow_set_maximum_height(void* self, int h);
void q_paintdevicewindow_alert(void* self, int msec);
void q_paintdevicewindow_request_update(void* self);
void q_paintdevicewindow_screen_changed(void* self, void* screen);
void q_paintdevicewindow_on_screen_changed(void* self, void (*slot)(void*, void*));
void q_paintdevicewindow_modality_changed(void* self, int64_t modality);
void q_paintdevicewindow_on_modality_changed(void* self, void (*slot)(void*, int64_t));
void q_paintdevicewindow_window_state_changed(void* self, int64_t windowState);
void q_paintdevicewindow_on_window_state_changed(void* self, void (*slot)(void*, int64_t));
void q_paintdevicewindow_window_title_changed(void* self, const char* title);
void q_paintdevicewindow_on_window_title_changed(void* self, void (*slot)(void*, const char*));
void q_paintdevicewindow_x_changed(void* self, int arg);
void q_paintdevicewindow_on_x_changed(void* self, void (*slot)(void*, int));
void q_paintdevicewindow_y_changed(void* self, int arg);
void q_paintdevicewindow_on_y_changed(void* self, void (*slot)(void*, int));
void q_paintdevicewindow_width_changed(void* self, int arg);
void q_paintdevicewindow_on_width_changed(void* self, void (*slot)(void*, int));
void q_paintdevicewindow_height_changed(void* self, int arg);
void q_paintdevicewindow_on_height_changed(void* self, void (*slot)(void*, int));
void q_paintdevicewindow_minimum_width_changed(void* self, int arg);
void q_paintdevicewindow_on_minimum_width_changed(void* self, void (*slot)(void*, int));
void q_paintdevicewindow_minimum_height_changed(void* self, int arg);
void q_paintdevicewindow_on_minimum_height_changed(void* self, void (*slot)(void*, int));
void q_paintdevicewindow_maximum_width_changed(void* self, int arg);
void q_paintdevicewindow_on_maximum_width_changed(void* self, void (*slot)(void*, int));
void q_paintdevicewindow_maximum_height_changed(void* self, int arg);
void q_paintdevicewindow_on_maximum_height_changed(void* self, void (*slot)(void*, int));
void q_paintdevicewindow_visible_changed(void* self, bool arg);
void q_paintdevicewindow_on_visible_changed(void* self, void (*slot)(void*, bool));
void q_paintdevicewindow_visibility_changed(void* self, int64_t visibility);
void q_paintdevicewindow_on_visibility_changed(void* self, void (*slot)(void*, int64_t));
void q_paintdevicewindow_active_changed(void* self);
void q_paintdevicewindow_on_active_changed(void* self, void (*slot)(void*));
void q_paintdevicewindow_content_orientation_changed(void* self, int64_t orientation);
void q_paintdevicewindow_on_content_orientation_changed(void* self, void (*slot)(void*, int64_t));
void q_paintdevicewindow_focus_object_changed(void* self, void* object);
void q_paintdevicewindow_on_focus_object_changed(void* self, void (*slot)(void*, void*));
void q_paintdevicewindow_opacity_changed(void* self, double opacity);
void q_paintdevicewindow_on_opacity_changed(void* self, void (*slot)(void*, double));
void q_paintdevicewindow_transient_parent_changed(void* self, void* transientParent);
void q_paintdevicewindow_on_transient_parent_changed(void* self, void (*slot)(void*, void*));
QWindow* q_paintdevicewindow_parent1(void* self, int64_t mode);
void q_paintdevicewindow_set_flag2(void* self, int64_t param1, bool on);
bool q_paintdevicewindow_is_ancestor_of2(void* self, void* child, int64_t mode);
bool q_paintdevicewindow_event_filter(void* self, void* watched, void* event);
const char* q_paintdevicewindow_object_name(void* self);
void q_paintdevicewindow_set_object_name(void* self, const char* name);
bool q_paintdevicewindow_is_widget_type(void* self);
bool q_paintdevicewindow_is_window_type(void* self);
bool q_paintdevicewindow_is_quick_item_type(void* self);
bool q_paintdevicewindow_signals_blocked(void* self);
bool q_paintdevicewindow_block_signals(void* self, bool b);
QThread* q_paintdevicewindow_thread(void* self);
void q_paintdevicewindow_move_to_thread(void* self, void* thread);
int32_t q_paintdevicewindow_start_timer(void* self, int interval);
void q_paintdevicewindow_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_paintdevicewindow_children(void* self);
void q_paintdevicewindow_install_event_filter(void* self, void* filterObj);
void q_paintdevicewindow_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_paintdevicewindow_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_paintdevicewindow_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_paintdevicewindow_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_paintdevicewindow_disconnect_with_q_meta_object_connection(void* param1);
void q_paintdevicewindow_dump_object_tree(void* self);
void q_paintdevicewindow_dump_object_info(void* self);
bool q_paintdevicewindow_set_property(void* self, const char* name, void* value);
QVariant* q_paintdevicewindow_property(void* self, const char* name);
const char** q_paintdevicewindow_dynamic_property_names(void* self);
QBindingStorage* q_paintdevicewindow_binding_storage(void* self);
QBindingStorage* q_paintdevicewindow_binding_storage2(void* self);
void q_paintdevicewindow_destroyed(void* self);
void q_paintdevicewindow_on_destroyed(void* self, void (*slot)(void*));
bool q_paintdevicewindow_inherits(void* self, const char* classname);
void q_paintdevicewindow_delete_later(void* self);
int32_t q_paintdevicewindow_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_paintdevicewindow_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_paintdevicewindow_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_paintdevicewindow_destroyed1(void* self, void* param1);
void q_paintdevicewindow_on_destroyed1(void* self, void (*slot)(void*, void*));
int64_t q_paintdevicewindow_surface_class(void* self);
bool q_paintdevicewindow_supports_open_g_l(void* self);
int32_t q_paintdevicewindow_dev_type(void* self);
bool q_paintdevicewindow_painting_active(void* self);
QPaintEngine* q_paintdevicewindow_paint_engine(void* self);
int32_t q_paintdevicewindow_width_m_m(void* self);
int32_t q_paintdevicewindow_height_m_m(void* self);
int32_t q_paintdevicewindow_logical_dpi_x(void* self);
int32_t q_paintdevicewindow_logical_dpi_y(void* self);
int32_t q_paintdevicewindow_physical_dpi_x(void* self);
int32_t q_paintdevicewindow_physical_dpi_y(void* self);
double q_paintdevicewindow_device_pixel_ratio_f(void* self);
int32_t q_paintdevicewindow_color_count(void* self);
int32_t q_paintdevicewindow_depth(void* self);
double q_paintdevicewindow_device_pixel_ratio_f_scale();
void q_paintdevicewindow_delete(void* self);

#endif
