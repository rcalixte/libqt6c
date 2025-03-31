#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQVALUEAXIS_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQVALUEAXIS_H

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

QValueAxis* q_valueaxis_new();
QValueAxis* q_valueaxis_new2(void* parent);
QMetaObject* q_valueaxis_meta_object(void* self);
void* q_valueaxis_metacast(void* self, const char* param1);
int32_t q_valueaxis_metacall(void* self, int64_t param1, int param2, void* param3);
void q_valueaxis_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_valueaxis_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_valueaxis_tr(const char* s);
int64_t q_valueaxis_type(void* self);
void q_valueaxis_on_type(void* self, int64_t (*slot)());
int64_t q_valueaxis_qbase_type(void* self);
void q_valueaxis_set_min(void* self, double min);
double q_valueaxis_min(void* self);
void q_valueaxis_set_max(void* self, double max);
double q_valueaxis_max(void* self);
void q_valueaxis_set_range(void* self, double min, double max);
void q_valueaxis_set_tick_count(void* self, int count);
int32_t q_valueaxis_tick_count(void* self);
void q_valueaxis_set_minor_tick_count(void* self, int count);
int32_t q_valueaxis_minor_tick_count(void* self);
void q_valueaxis_set_tick_anchor(void* self, double anchor);
double q_valueaxis_tick_anchor(void* self);
void q_valueaxis_set_tick_interval(void* self, double insterval);
double q_valueaxis_tick_interval(void* self);
void q_valueaxis_set_tick_type(void* self, int64_t typeVal);
int64_t q_valueaxis_tick_type(void* self);
void q_valueaxis_set_label_format(void* self, const char* format);
const char* q_valueaxis_label_format(void* self);
void q_valueaxis_apply_nice_numbers(void* self);
void q_valueaxis_min_changed(void* self, double min);
void q_valueaxis_on_min_changed(void* self, void (*slot)(void*, double));
void q_valueaxis_max_changed(void* self, double max);
void q_valueaxis_on_max_changed(void* self, void (*slot)(void*, double));
void q_valueaxis_range_changed(void* self, double min, double max);
void q_valueaxis_on_range_changed(void* self, void (*slot)(void*, double, double));
void q_valueaxis_tick_count_changed(void* self, int tickCount);
void q_valueaxis_on_tick_count_changed(void* self, void (*slot)(void*, int));
void q_valueaxis_minor_tick_count_changed(void* self, int tickCount);
void q_valueaxis_on_minor_tick_count_changed(void* self, void (*slot)(void*, int));
void q_valueaxis_label_format_changed(void* self, const char* format);
void q_valueaxis_on_label_format_changed(void* self, void (*slot)(void*, const char*));
void q_valueaxis_tick_interval_changed(void* self, double interval);
void q_valueaxis_on_tick_interval_changed(void* self, void (*slot)(void*, double));
void q_valueaxis_tick_anchor_changed(void* self, double anchor);
void q_valueaxis_on_tick_anchor_changed(void* self, void (*slot)(void*, double));
void q_valueaxis_tick_type_changed(void* self, int64_t typeVal);
void q_valueaxis_on_tick_type_changed(void* self, void (*slot)(void*, int64_t));
const char* q_valueaxis_tr2(const char* s, const char* c);
const char* q_valueaxis_tr3(const char* s, const char* c, int n);
bool q_valueaxis_is_visible(void* self);
void q_valueaxis_set_visible(void* self);
void q_valueaxis_show(void* self);
void q_valueaxis_hide(void* self);
bool q_valueaxis_is_line_visible(void* self);
void q_valueaxis_set_line_visible(void* self);
void q_valueaxis_set_line_pen(void* self, void* pen);
QPen* q_valueaxis_line_pen(void* self);
void q_valueaxis_set_line_pen_color(void* self, void* color);
QColor* q_valueaxis_line_pen_color(void* self);
bool q_valueaxis_is_grid_line_visible(void* self);
void q_valueaxis_set_grid_line_visible(void* self);
void q_valueaxis_set_grid_line_pen(void* self, void* pen);
QPen* q_valueaxis_grid_line_pen(void* self);
bool q_valueaxis_is_minor_grid_line_visible(void* self);
void q_valueaxis_set_minor_grid_line_visible(void* self);
void q_valueaxis_set_minor_grid_line_pen(void* self, void* pen);
QPen* q_valueaxis_minor_grid_line_pen(void* self);
void q_valueaxis_set_grid_line_color(void* self, void* color);
QColor* q_valueaxis_grid_line_color(void* self);
void q_valueaxis_set_minor_grid_line_color(void* self, void* color);
QColor* q_valueaxis_minor_grid_line_color(void* self);
bool q_valueaxis_labels_visible(void* self);
void q_valueaxis_set_labels_visible(void* self);
void q_valueaxis_set_labels_brush(void* self, void* brush);
QBrush* q_valueaxis_labels_brush(void* self);
void q_valueaxis_set_labels_font(void* self, void* font);
QFont* q_valueaxis_labels_font(void* self);
void q_valueaxis_set_labels_angle(void* self, int angle);
int32_t q_valueaxis_labels_angle(void* self);
void q_valueaxis_set_labels_color(void* self, void* color);
QColor* q_valueaxis_labels_color(void* self);
bool q_valueaxis_is_title_visible(void* self);
void q_valueaxis_set_title_visible(void* self);
void q_valueaxis_set_title_brush(void* self, void* brush);
QBrush* q_valueaxis_title_brush(void* self);
void q_valueaxis_set_title_font(void* self, void* font);
QFont* q_valueaxis_title_font(void* self);
void q_valueaxis_set_title_text(void* self, const char* title);
const char* q_valueaxis_title_text(void* self);
bool q_valueaxis_shades_visible(void* self);
void q_valueaxis_set_shades_visible(void* self);
void q_valueaxis_set_shades_pen(void* self, void* pen);
QPen* q_valueaxis_shades_pen(void* self);
void q_valueaxis_set_shades_brush(void* self, void* brush);
QBrush* q_valueaxis_shades_brush(void* self);
void q_valueaxis_set_shades_color(void* self, void* color);
QColor* q_valueaxis_shades_color(void* self);
void q_valueaxis_set_shades_border_color(void* self, void* color);
QColor* q_valueaxis_shades_border_color(void* self);
int64_t q_valueaxis_orientation(void* self);
int64_t q_valueaxis_alignment(void* self);
void q_valueaxis_set_reverse(void* self);
bool q_valueaxis_is_reverse(void* self);
void q_valueaxis_set_labels_editable(void* self);
bool q_valueaxis_labels_editable(void* self);
bool q_valueaxis_labels_truncated(void* self);
void q_valueaxis_set_truncate_labels(void* self);
bool q_valueaxis_truncate_labels(void* self);
void q_valueaxis_visible_changed(void* self, bool visible);
void q_valueaxis_on_visible_changed(void* self, void (*slot)(void*, bool));
void q_valueaxis_line_pen_changed(void* self, void* pen);
void q_valueaxis_on_line_pen_changed(void* self, void (*slot)(void*, void*));
void q_valueaxis_line_visible_changed(void* self, bool visible);
void q_valueaxis_on_line_visible_changed(void* self, void (*slot)(void*, bool));
void q_valueaxis_labels_visible_changed(void* self, bool visible);
void q_valueaxis_on_labels_visible_changed(void* self, void (*slot)(void*, bool));
void q_valueaxis_labels_brush_changed(void* self, void* brush);
void q_valueaxis_on_labels_brush_changed(void* self, void (*slot)(void*, void*));
void q_valueaxis_labels_font_changed(void* self, void* pen);
void q_valueaxis_on_labels_font_changed(void* self, void (*slot)(void*, void*));
void q_valueaxis_labels_angle_changed(void* self, int angle);
void q_valueaxis_on_labels_angle_changed(void* self, void (*slot)(void*, int));
void q_valueaxis_grid_line_pen_changed(void* self, void* pen);
void q_valueaxis_on_grid_line_pen_changed(void* self, void (*slot)(void*, void*));
void q_valueaxis_grid_visible_changed(void* self, bool visible);
void q_valueaxis_on_grid_visible_changed(void* self, void (*slot)(void*, bool));
void q_valueaxis_minor_grid_visible_changed(void* self, bool visible);
void q_valueaxis_on_minor_grid_visible_changed(void* self, void (*slot)(void*, bool));
void q_valueaxis_minor_grid_line_pen_changed(void* self, void* pen);
void q_valueaxis_on_minor_grid_line_pen_changed(void* self, void (*slot)(void*, void*));
void q_valueaxis_grid_line_color_changed(void* self, void* color);
void q_valueaxis_on_grid_line_color_changed(void* self, void (*slot)(void*, void*));
void q_valueaxis_minor_grid_line_color_changed(void* self, void* color);
void q_valueaxis_on_minor_grid_line_color_changed(void* self, void (*slot)(void*, void*));
void q_valueaxis_color_changed(void* self, void* color);
void q_valueaxis_on_color_changed(void* self, void (*slot)(void*, void*));
void q_valueaxis_labels_color_changed(void* self, void* color);
void q_valueaxis_on_labels_color_changed(void* self, void (*slot)(void*, void*));
void q_valueaxis_title_text_changed(void* self, const char* title);
void q_valueaxis_on_title_text_changed(void* self, void (*slot)(void*, const char*));
void q_valueaxis_title_brush_changed(void* self, void* brush);
void q_valueaxis_on_title_brush_changed(void* self, void (*slot)(void*, void*));
void q_valueaxis_title_visible_changed(void* self, bool visible);
void q_valueaxis_on_title_visible_changed(void* self, void (*slot)(void*, bool));
void q_valueaxis_title_font_changed(void* self, void* font);
void q_valueaxis_on_title_font_changed(void* self, void (*slot)(void*, void*));
void q_valueaxis_shades_visible_changed(void* self, bool visible);
void q_valueaxis_on_shades_visible_changed(void* self, void (*slot)(void*, bool));
void q_valueaxis_shades_color_changed(void* self, void* color);
void q_valueaxis_on_shades_color_changed(void* self, void (*slot)(void*, void*));
void q_valueaxis_shades_border_color_changed(void* self, void* color);
void q_valueaxis_on_shades_border_color_changed(void* self, void (*slot)(void*, void*));
void q_valueaxis_shades_pen_changed(void* self, void* pen);
void q_valueaxis_on_shades_pen_changed(void* self, void (*slot)(void*, void*));
void q_valueaxis_shades_brush_changed(void* self, void* brush);
void q_valueaxis_on_shades_brush_changed(void* self, void (*slot)(void*, void*));
void q_valueaxis_reverse_changed(void* self, bool reverse);
void q_valueaxis_on_reverse_changed(void* self, void (*slot)(void*, bool));
void q_valueaxis_labels_editable_changed(void* self, bool editable);
void q_valueaxis_on_labels_editable_changed(void* self, void (*slot)(void*, bool));
void q_valueaxis_labels_truncated_changed(void* self, bool labelsTruncated);
void q_valueaxis_on_labels_truncated_changed(void* self, void (*slot)(void*, bool));
void q_valueaxis_truncate_labels_changed(void* self, bool truncateLabels);
void q_valueaxis_on_truncate_labels_changed(void* self, void (*slot)(void*, bool));
void q_valueaxis_set_visible1(void* self, bool visible);
void q_valueaxis_set_line_visible1(void* self, bool visible);
void q_valueaxis_set_grid_line_visible1(void* self, bool visible);
void q_valueaxis_set_minor_grid_line_visible1(void* self, bool visible);
void q_valueaxis_set_labels_visible1(void* self, bool visible);
void q_valueaxis_set_title_visible1(void* self, bool visible);
void q_valueaxis_set_shades_visible1(void* self, bool visible);
void q_valueaxis_set_reverse1(void* self, bool reverse);
void q_valueaxis_set_labels_editable1(void* self, bool editable);
void q_valueaxis_set_truncate_labels1(void* self, bool truncateLabels);
const char* q_valueaxis_object_name(void* self);
void q_valueaxis_set_object_name(void* self, const char* name);
bool q_valueaxis_is_widget_type(void* self);
bool q_valueaxis_is_window_type(void* self);
bool q_valueaxis_is_quick_item_type(void* self);
bool q_valueaxis_signals_blocked(void* self);
bool q_valueaxis_block_signals(void* self, bool b);
QThread* q_valueaxis_thread(void* self);
void q_valueaxis_move_to_thread(void* self, void* thread);
int32_t q_valueaxis_start_timer(void* self, int interval);
void q_valueaxis_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_valueaxis_children(void* self);
void q_valueaxis_set_parent(void* self, void* parent);
void q_valueaxis_install_event_filter(void* self, void* filterObj);
void q_valueaxis_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_valueaxis_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_valueaxis_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_valueaxis_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_valueaxis_disconnect_with_q_meta_object_connection(void* param1);
void q_valueaxis_dump_object_tree(void* self);
void q_valueaxis_dump_object_info(void* self);
bool q_valueaxis_set_property(void* self, const char* name, void* value);
QVariant* q_valueaxis_property(void* self, const char* name);
const char** q_valueaxis_dynamic_property_names(void* self);
QBindingStorage* q_valueaxis_binding_storage(void* self);
QBindingStorage* q_valueaxis_binding_storage2(void* self);
void q_valueaxis_destroyed(void* self);
void q_valueaxis_on_destroyed(void* self, void (*slot)(void*));
QObject* q_valueaxis_parent(void* self);
bool q_valueaxis_inherits(void* self, const char* classname);
void q_valueaxis_delete_later(void* self);
int32_t q_valueaxis_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_valueaxis_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_valueaxis_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_valueaxis_destroyed1(void* self, void* param1);
void q_valueaxis_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_valueaxis_event(void* self, void* event);
bool q_valueaxis_qbase_event(void* self, void* event);
void q_valueaxis_on_event(void* self, bool (*slot)(void*, void*));
bool q_valueaxis_event_filter(void* self, void* watched, void* event);
bool q_valueaxis_qbase_event_filter(void* self, void* watched, void* event);
void q_valueaxis_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_valueaxis_timer_event(void* self, void* event);
void q_valueaxis_qbase_timer_event(void* self, void* event);
void q_valueaxis_on_timer_event(void* self, void (*slot)(void*, void*));
void q_valueaxis_child_event(void* self, void* event);
void q_valueaxis_qbase_child_event(void* self, void* event);
void q_valueaxis_on_child_event(void* self, void (*slot)(void*, void*));
void q_valueaxis_custom_event(void* self, void* event);
void q_valueaxis_qbase_custom_event(void* self, void* event);
void q_valueaxis_on_custom_event(void* self, void (*slot)(void*, void*));
void q_valueaxis_connect_notify(void* self, void* signal);
void q_valueaxis_qbase_connect_notify(void* self, void* signal);
void q_valueaxis_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_valueaxis_disconnect_notify(void* self, void* signal);
void q_valueaxis_qbase_disconnect_notify(void* self, void* signal);
void q_valueaxis_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_valueaxis_sender(void* self);
QObject* q_valueaxis_qbase_sender(void* self);
void q_valueaxis_on_sender(void* self, QObject* (*slot)());
int32_t q_valueaxis_sender_signal_index(void* self);
int32_t q_valueaxis_qbase_sender_signal_index(void* self);
void q_valueaxis_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_valueaxis_receivers(void* self, const char* signal);
int32_t q_valueaxis_qbase_receivers(void* self, const char* signal);
void q_valueaxis_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_valueaxis_is_signal_connected(void* self, void* signal);
bool q_valueaxis_qbase_is_signal_connected(void* self, void* signal);
void q_valueaxis_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_valueaxis_delete(void* self);

/// https://doc.qt.io/qt-6/qvalueaxis.html#types

typedef enum {
    QVALUEAXIS_TICKTYPE_TICKSDYNAMIC = 0,
    QVALUEAXIS_TICKTYPE_TICKSFIXED = 1
} QValueAxis__TickType;

#endif
