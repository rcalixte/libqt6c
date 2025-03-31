#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQCOLORAXIS_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQCOLORAXIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqabstractaxis.h"
#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqbrush.h"
#include "../libqevent.h"
#include "../libqcolor.h"
#include "../libqfont.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpen.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QColorAxis* q_coloraxis_new();
QColorAxis* q_coloraxis_new2(void* parent);
QMetaObject* q_coloraxis_meta_object(void* self);
void* q_coloraxis_metacast(void* self, const char* param1);
int32_t q_coloraxis_metacall(void* self, int64_t param1, int param2, void* param3);
void q_coloraxis_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_coloraxis_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_coloraxis_tr(const char* s);
int64_t q_coloraxis_type(void* self);
void q_coloraxis_on_type(void* self, int64_t (*slot)());
int64_t q_coloraxis_qbase_type(void* self);
void q_coloraxis_set_min(void* self, double min);
double q_coloraxis_min(void* self);
void q_coloraxis_set_max(void* self, double max);
double q_coloraxis_max(void* self);
void q_coloraxis_set_range(void* self, double min, double max);
void q_coloraxis_set_tick_count(void* self, int count);
int32_t q_coloraxis_tick_count(void* self);
void q_coloraxis_set_size(void* self, double size);
double q_coloraxis_size(void* self);
void q_coloraxis_set_gradient(void* self, void* gradient);
QLinearGradient* q_coloraxis_gradient(void* self);
void q_coloraxis_set_auto_range(void* self, bool autoRange);
bool q_coloraxis_auto_range(void* self);
void q_coloraxis_min_changed(void* self, double min);
void q_coloraxis_on_min_changed(void* self, void (*slot)(void*, double));
void q_coloraxis_max_changed(void* self, double max);
void q_coloraxis_on_max_changed(void* self, void (*slot)(void*, double));
void q_coloraxis_range_changed(void* self, double min, double max);
void q_coloraxis_on_range_changed(void* self, void (*slot)(void*, double, double));
void q_coloraxis_tick_count_changed(void* self, int tickCount);
void q_coloraxis_on_tick_count_changed(void* self, void (*slot)(void*, int));
void q_coloraxis_gradient_changed(void* self, void* gradient);
void q_coloraxis_on_gradient_changed(void* self, void (*slot)(void*, void*));
void q_coloraxis_size_changed(void* self, double size);
void q_coloraxis_on_size_changed(void* self, void (*slot)(void*, double));
void q_coloraxis_auto_range_changed(void* self, bool autoRange);
void q_coloraxis_on_auto_range_changed(void* self, void (*slot)(void*, bool));
const char* q_coloraxis_tr2(const char* s, const char* c);
const char* q_coloraxis_tr3(const char* s, const char* c, int n);
bool q_coloraxis_is_visible(void* self);
void q_coloraxis_set_visible(void* self);
void q_coloraxis_show(void* self);
void q_coloraxis_hide(void* self);
bool q_coloraxis_is_line_visible(void* self);
void q_coloraxis_set_line_visible(void* self);
void q_coloraxis_set_line_pen(void* self, void* pen);
QPen* q_coloraxis_line_pen(void* self);
void q_coloraxis_set_line_pen_color(void* self, void* color);
QColor* q_coloraxis_line_pen_color(void* self);
bool q_coloraxis_is_grid_line_visible(void* self);
void q_coloraxis_set_grid_line_visible(void* self);
void q_coloraxis_set_grid_line_pen(void* self, void* pen);
QPen* q_coloraxis_grid_line_pen(void* self);
bool q_coloraxis_is_minor_grid_line_visible(void* self);
void q_coloraxis_set_minor_grid_line_visible(void* self);
void q_coloraxis_set_minor_grid_line_pen(void* self, void* pen);
QPen* q_coloraxis_minor_grid_line_pen(void* self);
void q_coloraxis_set_grid_line_color(void* self, void* color);
QColor* q_coloraxis_grid_line_color(void* self);
void q_coloraxis_set_minor_grid_line_color(void* self, void* color);
QColor* q_coloraxis_minor_grid_line_color(void* self);
bool q_coloraxis_labels_visible(void* self);
void q_coloraxis_set_labels_visible(void* self);
void q_coloraxis_set_labels_brush(void* self, void* brush);
QBrush* q_coloraxis_labels_brush(void* self);
void q_coloraxis_set_labels_font(void* self, void* font);
QFont* q_coloraxis_labels_font(void* self);
void q_coloraxis_set_labels_angle(void* self, int angle);
int32_t q_coloraxis_labels_angle(void* self);
void q_coloraxis_set_labels_color(void* self, void* color);
QColor* q_coloraxis_labels_color(void* self);
bool q_coloraxis_is_title_visible(void* self);
void q_coloraxis_set_title_visible(void* self);
void q_coloraxis_set_title_brush(void* self, void* brush);
QBrush* q_coloraxis_title_brush(void* self);
void q_coloraxis_set_title_font(void* self, void* font);
QFont* q_coloraxis_title_font(void* self);
void q_coloraxis_set_title_text(void* self, const char* title);
const char* q_coloraxis_title_text(void* self);
bool q_coloraxis_shades_visible(void* self);
void q_coloraxis_set_shades_visible(void* self);
void q_coloraxis_set_shades_pen(void* self, void* pen);
QPen* q_coloraxis_shades_pen(void* self);
void q_coloraxis_set_shades_brush(void* self, void* brush);
QBrush* q_coloraxis_shades_brush(void* self);
void q_coloraxis_set_shades_color(void* self, void* color);
QColor* q_coloraxis_shades_color(void* self);
void q_coloraxis_set_shades_border_color(void* self, void* color);
QColor* q_coloraxis_shades_border_color(void* self);
int64_t q_coloraxis_orientation(void* self);
int64_t q_coloraxis_alignment(void* self);
void q_coloraxis_set_reverse(void* self);
bool q_coloraxis_is_reverse(void* self);
void q_coloraxis_set_labels_editable(void* self);
bool q_coloraxis_labels_editable(void* self);
bool q_coloraxis_labels_truncated(void* self);
void q_coloraxis_set_truncate_labels(void* self);
bool q_coloraxis_truncate_labels(void* self);
void q_coloraxis_visible_changed(void* self, bool visible);
void q_coloraxis_on_visible_changed(void* self, void (*slot)(void*, bool));
void q_coloraxis_line_pen_changed(void* self, void* pen);
void q_coloraxis_on_line_pen_changed(void* self, void (*slot)(void*, void*));
void q_coloraxis_line_visible_changed(void* self, bool visible);
void q_coloraxis_on_line_visible_changed(void* self, void (*slot)(void*, bool));
void q_coloraxis_labels_visible_changed(void* self, bool visible);
void q_coloraxis_on_labels_visible_changed(void* self, void (*slot)(void*, bool));
void q_coloraxis_labels_brush_changed(void* self, void* brush);
void q_coloraxis_on_labels_brush_changed(void* self, void (*slot)(void*, void*));
void q_coloraxis_labels_font_changed(void* self, void* pen);
void q_coloraxis_on_labels_font_changed(void* self, void (*slot)(void*, void*));
void q_coloraxis_labels_angle_changed(void* self, int angle);
void q_coloraxis_on_labels_angle_changed(void* self, void (*slot)(void*, int));
void q_coloraxis_grid_line_pen_changed(void* self, void* pen);
void q_coloraxis_on_grid_line_pen_changed(void* self, void (*slot)(void*, void*));
void q_coloraxis_grid_visible_changed(void* self, bool visible);
void q_coloraxis_on_grid_visible_changed(void* self, void (*slot)(void*, bool));
void q_coloraxis_minor_grid_visible_changed(void* self, bool visible);
void q_coloraxis_on_minor_grid_visible_changed(void* self, void (*slot)(void*, bool));
void q_coloraxis_minor_grid_line_pen_changed(void* self, void* pen);
void q_coloraxis_on_minor_grid_line_pen_changed(void* self, void (*slot)(void*, void*));
void q_coloraxis_grid_line_color_changed(void* self, void* color);
void q_coloraxis_on_grid_line_color_changed(void* self, void (*slot)(void*, void*));
void q_coloraxis_minor_grid_line_color_changed(void* self, void* color);
void q_coloraxis_on_minor_grid_line_color_changed(void* self, void (*slot)(void*, void*));
void q_coloraxis_color_changed(void* self, void* color);
void q_coloraxis_on_color_changed(void* self, void (*slot)(void*, void*));
void q_coloraxis_labels_color_changed(void* self, void* color);
void q_coloraxis_on_labels_color_changed(void* self, void (*slot)(void*, void*));
void q_coloraxis_title_text_changed(void* self, const char* title);
void q_coloraxis_on_title_text_changed(void* self, void (*slot)(void*, const char*));
void q_coloraxis_title_brush_changed(void* self, void* brush);
void q_coloraxis_on_title_brush_changed(void* self, void (*slot)(void*, void*));
void q_coloraxis_title_visible_changed(void* self, bool visible);
void q_coloraxis_on_title_visible_changed(void* self, void (*slot)(void*, bool));
void q_coloraxis_title_font_changed(void* self, void* font);
void q_coloraxis_on_title_font_changed(void* self, void (*slot)(void*, void*));
void q_coloraxis_shades_visible_changed(void* self, bool visible);
void q_coloraxis_on_shades_visible_changed(void* self, void (*slot)(void*, bool));
void q_coloraxis_shades_color_changed(void* self, void* color);
void q_coloraxis_on_shades_color_changed(void* self, void (*slot)(void*, void*));
void q_coloraxis_shades_border_color_changed(void* self, void* color);
void q_coloraxis_on_shades_border_color_changed(void* self, void (*slot)(void*, void*));
void q_coloraxis_shades_pen_changed(void* self, void* pen);
void q_coloraxis_on_shades_pen_changed(void* self, void (*slot)(void*, void*));
void q_coloraxis_shades_brush_changed(void* self, void* brush);
void q_coloraxis_on_shades_brush_changed(void* self, void (*slot)(void*, void*));
void q_coloraxis_reverse_changed(void* self, bool reverse);
void q_coloraxis_on_reverse_changed(void* self, void (*slot)(void*, bool));
void q_coloraxis_labels_editable_changed(void* self, bool editable);
void q_coloraxis_on_labels_editable_changed(void* self, void (*slot)(void*, bool));
void q_coloraxis_labels_truncated_changed(void* self, bool labelsTruncated);
void q_coloraxis_on_labels_truncated_changed(void* self, void (*slot)(void*, bool));
void q_coloraxis_truncate_labels_changed(void* self, bool truncateLabels);
void q_coloraxis_on_truncate_labels_changed(void* self, void (*slot)(void*, bool));
void q_coloraxis_set_visible1(void* self, bool visible);
void q_coloraxis_set_line_visible1(void* self, bool visible);
void q_coloraxis_set_grid_line_visible1(void* self, bool visible);
void q_coloraxis_set_minor_grid_line_visible1(void* self, bool visible);
void q_coloraxis_set_labels_visible1(void* self, bool visible);
void q_coloraxis_set_title_visible1(void* self, bool visible);
void q_coloraxis_set_shades_visible1(void* self, bool visible);
void q_coloraxis_set_reverse1(void* self, bool reverse);
void q_coloraxis_set_labels_editable1(void* self, bool editable);
void q_coloraxis_set_truncate_labels1(void* self, bool truncateLabels);
const char* q_coloraxis_object_name(void* self);
void q_coloraxis_set_object_name(void* self, const char* name);
bool q_coloraxis_is_widget_type(void* self);
bool q_coloraxis_is_window_type(void* self);
bool q_coloraxis_is_quick_item_type(void* self);
bool q_coloraxis_signals_blocked(void* self);
bool q_coloraxis_block_signals(void* self, bool b);
QThread* q_coloraxis_thread(void* self);
void q_coloraxis_move_to_thread(void* self, void* thread);
int32_t q_coloraxis_start_timer(void* self, int interval);
void q_coloraxis_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_coloraxis_children(void* self);
void q_coloraxis_set_parent(void* self, void* parent);
void q_coloraxis_install_event_filter(void* self, void* filterObj);
void q_coloraxis_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_coloraxis_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_coloraxis_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_coloraxis_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_coloraxis_disconnect_with_q_meta_object_connection(void* param1);
void q_coloraxis_dump_object_tree(void* self);
void q_coloraxis_dump_object_info(void* self);
bool q_coloraxis_set_property(void* self, const char* name, void* value);
QVariant* q_coloraxis_property(void* self, const char* name);
const char** q_coloraxis_dynamic_property_names(void* self);
QBindingStorage* q_coloraxis_binding_storage(void* self);
QBindingStorage* q_coloraxis_binding_storage2(void* self);
void q_coloraxis_destroyed(void* self);
void q_coloraxis_on_destroyed(void* self, void (*slot)(void*));
QObject* q_coloraxis_parent(void* self);
bool q_coloraxis_inherits(void* self, const char* classname);
void q_coloraxis_delete_later(void* self);
int32_t q_coloraxis_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_coloraxis_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_coloraxis_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_coloraxis_destroyed1(void* self, void* param1);
void q_coloraxis_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_coloraxis_event(void* self, void* event);
bool q_coloraxis_qbase_event(void* self, void* event);
void q_coloraxis_on_event(void* self, bool (*slot)(void*, void*));
bool q_coloraxis_event_filter(void* self, void* watched, void* event);
bool q_coloraxis_qbase_event_filter(void* self, void* watched, void* event);
void q_coloraxis_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_coloraxis_timer_event(void* self, void* event);
void q_coloraxis_qbase_timer_event(void* self, void* event);
void q_coloraxis_on_timer_event(void* self, void (*slot)(void*, void*));
void q_coloraxis_child_event(void* self, void* event);
void q_coloraxis_qbase_child_event(void* self, void* event);
void q_coloraxis_on_child_event(void* self, void (*slot)(void*, void*));
void q_coloraxis_custom_event(void* self, void* event);
void q_coloraxis_qbase_custom_event(void* self, void* event);
void q_coloraxis_on_custom_event(void* self, void (*slot)(void*, void*));
void q_coloraxis_connect_notify(void* self, void* signal);
void q_coloraxis_qbase_connect_notify(void* self, void* signal);
void q_coloraxis_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_coloraxis_disconnect_notify(void* self, void* signal);
void q_coloraxis_qbase_disconnect_notify(void* self, void* signal);
void q_coloraxis_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_coloraxis_sender(void* self);
QObject* q_coloraxis_qbase_sender(void* self);
void q_coloraxis_on_sender(void* self, QObject* (*slot)());
int32_t q_coloraxis_sender_signal_index(void* self);
int32_t q_coloraxis_qbase_sender_signal_index(void* self);
void q_coloraxis_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_coloraxis_receivers(void* self, const char* signal);
int32_t q_coloraxis_qbase_receivers(void* self, const char* signal);
void q_coloraxis_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_coloraxis_is_signal_connected(void* self, void* signal);
bool q_coloraxis_qbase_is_signal_connected(void* self, void* signal);
void q_coloraxis_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_coloraxis_delete(void* self);

#endif
