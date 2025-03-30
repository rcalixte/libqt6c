#pragma once
#ifndef SRC_CHARTSQT6C_LIBQLOGVALUEAXIS_H
#define SRC_CHARTSQT6C_LIBQLOGVALUEAXIS_H

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

QLogValueAxis* q_logvalueaxis_new();
QLogValueAxis* q_logvalueaxis_new2(void* parent);
QMetaObject* q_logvalueaxis_meta_object(void* self);
void* q_logvalueaxis_metacast(void* self, const char* param1);
int32_t q_logvalueaxis_metacall(void* self, int64_t param1, int param2, void* param3);
void q_logvalueaxis_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_logvalueaxis_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_logvalueaxis_tr(const char* s);
int64_t q_logvalueaxis_type(void* self);
void q_logvalueaxis_on_type(void* self, int64_t (*slot)());
int64_t q_logvalueaxis_qbase_type(void* self);
void q_logvalueaxis_set_min(void* self, double min);
double q_logvalueaxis_min(void* self);
void q_logvalueaxis_set_max(void* self, double max);
double q_logvalueaxis_max(void* self);
void q_logvalueaxis_set_range(void* self, double min, double max);
void q_logvalueaxis_set_label_format(void* self, const char* format);
const char* q_logvalueaxis_label_format(void* self);
void q_logvalueaxis_set_base(void* self, double base);
double q_logvalueaxis_base(void* self);
int32_t q_logvalueaxis_tick_count(void* self);
void q_logvalueaxis_set_minor_tick_count(void* self, int minorTickCount);
int32_t q_logvalueaxis_minor_tick_count(void* self);
void q_logvalueaxis_min_changed(void* self, double min);
void q_logvalueaxis_on_min_changed(void* self, void (*slot)(void*, double));
void q_logvalueaxis_max_changed(void* self, double max);
void q_logvalueaxis_on_max_changed(void* self, void (*slot)(void*, double));
void q_logvalueaxis_range_changed(void* self, double min, double max);
void q_logvalueaxis_on_range_changed(void* self, void (*slot)(void*, double, double));
void q_logvalueaxis_label_format_changed(void* self, const char* format);
void q_logvalueaxis_on_label_format_changed(void* self, void (*slot)(void*, const char*));
void q_logvalueaxis_base_changed(void* self, double base);
void q_logvalueaxis_on_base_changed(void* self, void (*slot)(void*, double));
void q_logvalueaxis_tick_count_changed(void* self, int tickCount);
void q_logvalueaxis_on_tick_count_changed(void* self, void (*slot)(void*, int));
void q_logvalueaxis_minor_tick_count_changed(void* self, int minorTickCount);
void q_logvalueaxis_on_minor_tick_count_changed(void* self, void (*slot)(void*, int));
const char* q_logvalueaxis_tr2(const char* s, const char* c);
const char* q_logvalueaxis_tr3(const char* s, const char* c, int n);
bool q_logvalueaxis_is_visible(void* self);
void q_logvalueaxis_set_visible(void* self);
void q_logvalueaxis_show(void* self);
void q_logvalueaxis_hide(void* self);
bool q_logvalueaxis_is_line_visible(void* self);
void q_logvalueaxis_set_line_visible(void* self);
void q_logvalueaxis_set_line_pen(void* self, void* pen);
QPen* q_logvalueaxis_line_pen(void* self);
void q_logvalueaxis_set_line_pen_color(void* self, void* color);
QColor* q_logvalueaxis_line_pen_color(void* self);
bool q_logvalueaxis_is_grid_line_visible(void* self);
void q_logvalueaxis_set_grid_line_visible(void* self);
void q_logvalueaxis_set_grid_line_pen(void* self, void* pen);
QPen* q_logvalueaxis_grid_line_pen(void* self);
bool q_logvalueaxis_is_minor_grid_line_visible(void* self);
void q_logvalueaxis_set_minor_grid_line_visible(void* self);
void q_logvalueaxis_set_minor_grid_line_pen(void* self, void* pen);
QPen* q_logvalueaxis_minor_grid_line_pen(void* self);
void q_logvalueaxis_set_grid_line_color(void* self, void* color);
QColor* q_logvalueaxis_grid_line_color(void* self);
void q_logvalueaxis_set_minor_grid_line_color(void* self, void* color);
QColor* q_logvalueaxis_minor_grid_line_color(void* self);
bool q_logvalueaxis_labels_visible(void* self);
void q_logvalueaxis_set_labels_visible(void* self);
void q_logvalueaxis_set_labels_brush(void* self, void* brush);
QBrush* q_logvalueaxis_labels_brush(void* self);
void q_logvalueaxis_set_labels_font(void* self, void* font);
QFont* q_logvalueaxis_labels_font(void* self);
void q_logvalueaxis_set_labels_angle(void* self, int angle);
int32_t q_logvalueaxis_labels_angle(void* self);
void q_logvalueaxis_set_labels_color(void* self, void* color);
QColor* q_logvalueaxis_labels_color(void* self);
bool q_logvalueaxis_is_title_visible(void* self);
void q_logvalueaxis_set_title_visible(void* self);
void q_logvalueaxis_set_title_brush(void* self, void* brush);
QBrush* q_logvalueaxis_title_brush(void* self);
void q_logvalueaxis_set_title_font(void* self, void* font);
QFont* q_logvalueaxis_title_font(void* self);
void q_logvalueaxis_set_title_text(void* self, const char* title);
const char* q_logvalueaxis_title_text(void* self);
bool q_logvalueaxis_shades_visible(void* self);
void q_logvalueaxis_set_shades_visible(void* self);
void q_logvalueaxis_set_shades_pen(void* self, void* pen);
QPen* q_logvalueaxis_shades_pen(void* self);
void q_logvalueaxis_set_shades_brush(void* self, void* brush);
QBrush* q_logvalueaxis_shades_brush(void* self);
void q_logvalueaxis_set_shades_color(void* self, void* color);
QColor* q_logvalueaxis_shades_color(void* self);
void q_logvalueaxis_set_shades_border_color(void* self, void* color);
QColor* q_logvalueaxis_shades_border_color(void* self);
int64_t q_logvalueaxis_orientation(void* self);
int64_t q_logvalueaxis_alignment(void* self);
void q_logvalueaxis_set_reverse(void* self);
bool q_logvalueaxis_is_reverse(void* self);
void q_logvalueaxis_set_labels_editable(void* self);
bool q_logvalueaxis_labels_editable(void* self);
bool q_logvalueaxis_labels_truncated(void* self);
void q_logvalueaxis_set_truncate_labels(void* self);
bool q_logvalueaxis_truncate_labels(void* self);
void q_logvalueaxis_visible_changed(void* self, bool visible);
void q_logvalueaxis_on_visible_changed(void* self, void (*slot)(void*, bool));
void q_logvalueaxis_line_pen_changed(void* self, void* pen);
void q_logvalueaxis_on_line_pen_changed(void* self, void (*slot)(void*, void*));
void q_logvalueaxis_line_visible_changed(void* self, bool visible);
void q_logvalueaxis_on_line_visible_changed(void* self, void (*slot)(void*, bool));
void q_logvalueaxis_labels_visible_changed(void* self, bool visible);
void q_logvalueaxis_on_labels_visible_changed(void* self, void (*slot)(void*, bool));
void q_logvalueaxis_labels_brush_changed(void* self, void* brush);
void q_logvalueaxis_on_labels_brush_changed(void* self, void (*slot)(void*, void*));
void q_logvalueaxis_labels_font_changed(void* self, void* pen);
void q_logvalueaxis_on_labels_font_changed(void* self, void (*slot)(void*, void*));
void q_logvalueaxis_labels_angle_changed(void* self, int angle);
void q_logvalueaxis_on_labels_angle_changed(void* self, void (*slot)(void*, int));
void q_logvalueaxis_grid_line_pen_changed(void* self, void* pen);
void q_logvalueaxis_on_grid_line_pen_changed(void* self, void (*slot)(void*, void*));
void q_logvalueaxis_grid_visible_changed(void* self, bool visible);
void q_logvalueaxis_on_grid_visible_changed(void* self, void (*slot)(void*, bool));
void q_logvalueaxis_minor_grid_visible_changed(void* self, bool visible);
void q_logvalueaxis_on_minor_grid_visible_changed(void* self, void (*slot)(void*, bool));
void q_logvalueaxis_minor_grid_line_pen_changed(void* self, void* pen);
void q_logvalueaxis_on_minor_grid_line_pen_changed(void* self, void (*slot)(void*, void*));
void q_logvalueaxis_grid_line_color_changed(void* self, void* color);
void q_logvalueaxis_on_grid_line_color_changed(void* self, void (*slot)(void*, void*));
void q_logvalueaxis_minor_grid_line_color_changed(void* self, void* color);
void q_logvalueaxis_on_minor_grid_line_color_changed(void* self, void (*slot)(void*, void*));
void q_logvalueaxis_color_changed(void* self, void* color);
void q_logvalueaxis_on_color_changed(void* self, void (*slot)(void*, void*));
void q_logvalueaxis_labels_color_changed(void* self, void* color);
void q_logvalueaxis_on_labels_color_changed(void* self, void (*slot)(void*, void*));
void q_logvalueaxis_title_text_changed(void* self, const char* title);
void q_logvalueaxis_on_title_text_changed(void* self, void (*slot)(void*, const char*));
void q_logvalueaxis_title_brush_changed(void* self, void* brush);
void q_logvalueaxis_on_title_brush_changed(void* self, void (*slot)(void*, void*));
void q_logvalueaxis_title_visible_changed(void* self, bool visible);
void q_logvalueaxis_on_title_visible_changed(void* self, void (*slot)(void*, bool));
void q_logvalueaxis_title_font_changed(void* self, void* font);
void q_logvalueaxis_on_title_font_changed(void* self, void (*slot)(void*, void*));
void q_logvalueaxis_shades_visible_changed(void* self, bool visible);
void q_logvalueaxis_on_shades_visible_changed(void* self, void (*slot)(void*, bool));
void q_logvalueaxis_shades_color_changed(void* self, void* color);
void q_logvalueaxis_on_shades_color_changed(void* self, void (*slot)(void*, void*));
void q_logvalueaxis_shades_border_color_changed(void* self, void* color);
void q_logvalueaxis_on_shades_border_color_changed(void* self, void (*slot)(void*, void*));
void q_logvalueaxis_shades_pen_changed(void* self, void* pen);
void q_logvalueaxis_on_shades_pen_changed(void* self, void (*slot)(void*, void*));
void q_logvalueaxis_shades_brush_changed(void* self, void* brush);
void q_logvalueaxis_on_shades_brush_changed(void* self, void (*slot)(void*, void*));
void q_logvalueaxis_reverse_changed(void* self, bool reverse);
void q_logvalueaxis_on_reverse_changed(void* self, void (*slot)(void*, bool));
void q_logvalueaxis_labels_editable_changed(void* self, bool editable);
void q_logvalueaxis_on_labels_editable_changed(void* self, void (*slot)(void*, bool));
void q_logvalueaxis_labels_truncated_changed(void* self, bool labelsTruncated);
void q_logvalueaxis_on_labels_truncated_changed(void* self, void (*slot)(void*, bool));
void q_logvalueaxis_truncate_labels_changed(void* self, bool truncateLabels);
void q_logvalueaxis_on_truncate_labels_changed(void* self, void (*slot)(void*, bool));
void q_logvalueaxis_set_visible1(void* self, bool visible);
void q_logvalueaxis_set_line_visible1(void* self, bool visible);
void q_logvalueaxis_set_grid_line_visible1(void* self, bool visible);
void q_logvalueaxis_set_minor_grid_line_visible1(void* self, bool visible);
void q_logvalueaxis_set_labels_visible1(void* self, bool visible);
void q_logvalueaxis_set_title_visible1(void* self, bool visible);
void q_logvalueaxis_set_shades_visible1(void* self, bool visible);
void q_logvalueaxis_set_reverse1(void* self, bool reverse);
void q_logvalueaxis_set_labels_editable1(void* self, bool editable);
void q_logvalueaxis_set_truncate_labels1(void* self, bool truncateLabels);
const char* q_logvalueaxis_object_name(void* self);
void q_logvalueaxis_set_object_name(void* self, const char* name);
bool q_logvalueaxis_is_widget_type(void* self);
bool q_logvalueaxis_is_window_type(void* self);
bool q_logvalueaxis_is_quick_item_type(void* self);
bool q_logvalueaxis_signals_blocked(void* self);
bool q_logvalueaxis_block_signals(void* self, bool b);
QThread* q_logvalueaxis_thread(void* self);
void q_logvalueaxis_move_to_thread(void* self, void* thread);
int32_t q_logvalueaxis_start_timer(void* self, int interval);
void q_logvalueaxis_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_logvalueaxis_children(void* self);
void q_logvalueaxis_set_parent(void* self, void* parent);
void q_logvalueaxis_install_event_filter(void* self, void* filterObj);
void q_logvalueaxis_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_logvalueaxis_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_logvalueaxis_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_logvalueaxis_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_logvalueaxis_disconnect_with_q_meta_object_connection(void* param1);
void q_logvalueaxis_dump_object_tree(void* self);
void q_logvalueaxis_dump_object_info(void* self);
bool q_logvalueaxis_set_property(void* self, const char* name, void* value);
QVariant* q_logvalueaxis_property(void* self, const char* name);
const char** q_logvalueaxis_dynamic_property_names(void* self);
QBindingStorage* q_logvalueaxis_binding_storage(void* self);
QBindingStorage* q_logvalueaxis_binding_storage2(void* self);
void q_logvalueaxis_destroyed(void* self);
void q_logvalueaxis_on_destroyed(void* self, void (*slot)(void*));
QObject* q_logvalueaxis_parent(void* self);
bool q_logvalueaxis_inherits(void* self, const char* classname);
void q_logvalueaxis_delete_later(void* self);
int32_t q_logvalueaxis_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_logvalueaxis_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_logvalueaxis_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_logvalueaxis_destroyed1(void* self, void* param1);
void q_logvalueaxis_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_logvalueaxis_event(void* self, void* event);
bool q_logvalueaxis_qbase_event(void* self, void* event);
void q_logvalueaxis_on_event(void* self, bool (*slot)(void*, void*));
bool q_logvalueaxis_event_filter(void* self, void* watched, void* event);
bool q_logvalueaxis_qbase_event_filter(void* self, void* watched, void* event);
void q_logvalueaxis_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_logvalueaxis_timer_event(void* self, void* event);
void q_logvalueaxis_qbase_timer_event(void* self, void* event);
void q_logvalueaxis_on_timer_event(void* self, void (*slot)(void*, void*));
void q_logvalueaxis_child_event(void* self, void* event);
void q_logvalueaxis_qbase_child_event(void* self, void* event);
void q_logvalueaxis_on_child_event(void* self, void (*slot)(void*, void*));
void q_logvalueaxis_custom_event(void* self, void* event);
void q_logvalueaxis_qbase_custom_event(void* self, void* event);
void q_logvalueaxis_on_custom_event(void* self, void (*slot)(void*, void*));
void q_logvalueaxis_connect_notify(void* self, void* signal);
void q_logvalueaxis_qbase_connect_notify(void* self, void* signal);
void q_logvalueaxis_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_logvalueaxis_disconnect_notify(void* self, void* signal);
void q_logvalueaxis_qbase_disconnect_notify(void* self, void* signal);
void q_logvalueaxis_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_logvalueaxis_sender(void* self);
QObject* q_logvalueaxis_qbase_sender(void* self);
void q_logvalueaxis_on_sender(void* self, QObject* (*slot)());
int32_t q_logvalueaxis_sender_signal_index(void* self);
int32_t q_logvalueaxis_qbase_sender_signal_index(void* self);
void q_logvalueaxis_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_logvalueaxis_receivers(void* self, const char* signal);
int32_t q_logvalueaxis_qbase_receivers(void* self, const char* signal);
void q_logvalueaxis_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_logvalueaxis_is_signal_connected(void* self, void* signal);
bool q_logvalueaxis_qbase_is_signal_connected(void* self, void* signal);
void q_logvalueaxis_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_logvalueaxis_delete(void* self);

#endif
