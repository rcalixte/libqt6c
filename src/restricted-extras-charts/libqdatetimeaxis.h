#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQDATETIMEAXIS_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQDATETIMEAXIS_H

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
#include "../libqdatetime.h"
#include "../libqfont.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpen.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QDateTimeAxis* q_datetimeaxis_new();
QDateTimeAxis* q_datetimeaxis_new2(void* parent);
QMetaObject* q_datetimeaxis_meta_object(void* self);
void* q_datetimeaxis_metacast(void* self, const char* param1);
int32_t q_datetimeaxis_metacall(void* self, int64_t param1, int param2, void* param3);
void q_datetimeaxis_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_datetimeaxis_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_datetimeaxis_tr(const char* s);
int64_t q_datetimeaxis_type(void* self);
void q_datetimeaxis_on_type(void* self, int64_t (*slot)());
int64_t q_datetimeaxis_qbase_type(void* self);
void q_datetimeaxis_set_min(void* self, void* min);
QDateTime* q_datetimeaxis_min(void* self);
void q_datetimeaxis_set_max(void* self, void* max);
QDateTime* q_datetimeaxis_max(void* self);
void q_datetimeaxis_set_range(void* self, void* min, void* max);
void q_datetimeaxis_set_format(void* self, const char* format);
const char* q_datetimeaxis_format(void* self);
void q_datetimeaxis_set_tick_count(void* self, int count);
int32_t q_datetimeaxis_tick_count(void* self);
void q_datetimeaxis_min_changed(void* self, void* min);
void q_datetimeaxis_on_min_changed(void* self, void (*slot)(void*, void*));
void q_datetimeaxis_max_changed(void* self, void* max);
void q_datetimeaxis_on_max_changed(void* self, void (*slot)(void*, void*));
void q_datetimeaxis_range_changed(void* self, void* min, void* max);
void q_datetimeaxis_on_range_changed(void* self, void (*slot)(void*, void*, void*));
void q_datetimeaxis_format_changed(void* self, const char* format);
void q_datetimeaxis_on_format_changed(void* self, void (*slot)(void*, const char*));
void q_datetimeaxis_tick_count_changed(void* self, int tick);
void q_datetimeaxis_on_tick_count_changed(void* self, void (*slot)(void*, int));
const char* q_datetimeaxis_tr2(const char* s, const char* c);
const char* q_datetimeaxis_tr3(const char* s, const char* c, int n);
bool q_datetimeaxis_is_visible(void* self);
void q_datetimeaxis_set_visible(void* self);
void q_datetimeaxis_show(void* self);
void q_datetimeaxis_hide(void* self);
bool q_datetimeaxis_is_line_visible(void* self);
void q_datetimeaxis_set_line_visible(void* self);
void q_datetimeaxis_set_line_pen(void* self, void* pen);
QPen* q_datetimeaxis_line_pen(void* self);
void q_datetimeaxis_set_line_pen_color(void* self, void* color);
QColor* q_datetimeaxis_line_pen_color(void* self);
bool q_datetimeaxis_is_grid_line_visible(void* self);
void q_datetimeaxis_set_grid_line_visible(void* self);
void q_datetimeaxis_set_grid_line_pen(void* self, void* pen);
QPen* q_datetimeaxis_grid_line_pen(void* self);
bool q_datetimeaxis_is_minor_grid_line_visible(void* self);
void q_datetimeaxis_set_minor_grid_line_visible(void* self);
void q_datetimeaxis_set_minor_grid_line_pen(void* self, void* pen);
QPen* q_datetimeaxis_minor_grid_line_pen(void* self);
void q_datetimeaxis_set_grid_line_color(void* self, void* color);
QColor* q_datetimeaxis_grid_line_color(void* self);
void q_datetimeaxis_set_minor_grid_line_color(void* self, void* color);
QColor* q_datetimeaxis_minor_grid_line_color(void* self);
bool q_datetimeaxis_labels_visible(void* self);
void q_datetimeaxis_set_labels_visible(void* self);
void q_datetimeaxis_set_labels_brush(void* self, void* brush);
QBrush* q_datetimeaxis_labels_brush(void* self);
void q_datetimeaxis_set_labels_font(void* self, void* font);
QFont* q_datetimeaxis_labels_font(void* self);
void q_datetimeaxis_set_labels_angle(void* self, int angle);
int32_t q_datetimeaxis_labels_angle(void* self);
void q_datetimeaxis_set_labels_color(void* self, void* color);
QColor* q_datetimeaxis_labels_color(void* self);
bool q_datetimeaxis_is_title_visible(void* self);
void q_datetimeaxis_set_title_visible(void* self);
void q_datetimeaxis_set_title_brush(void* self, void* brush);
QBrush* q_datetimeaxis_title_brush(void* self);
void q_datetimeaxis_set_title_font(void* self, void* font);
QFont* q_datetimeaxis_title_font(void* self);
void q_datetimeaxis_set_title_text(void* self, const char* title);
const char* q_datetimeaxis_title_text(void* self);
bool q_datetimeaxis_shades_visible(void* self);
void q_datetimeaxis_set_shades_visible(void* self);
void q_datetimeaxis_set_shades_pen(void* self, void* pen);
QPen* q_datetimeaxis_shades_pen(void* self);
void q_datetimeaxis_set_shades_brush(void* self, void* brush);
QBrush* q_datetimeaxis_shades_brush(void* self);
void q_datetimeaxis_set_shades_color(void* self, void* color);
QColor* q_datetimeaxis_shades_color(void* self);
void q_datetimeaxis_set_shades_border_color(void* self, void* color);
QColor* q_datetimeaxis_shades_border_color(void* self);
int64_t q_datetimeaxis_orientation(void* self);
int64_t q_datetimeaxis_alignment(void* self);
void q_datetimeaxis_set_reverse(void* self);
bool q_datetimeaxis_is_reverse(void* self);
void q_datetimeaxis_set_labels_editable(void* self);
bool q_datetimeaxis_labels_editable(void* self);
bool q_datetimeaxis_labels_truncated(void* self);
void q_datetimeaxis_set_truncate_labels(void* self);
bool q_datetimeaxis_truncate_labels(void* self);
void q_datetimeaxis_visible_changed(void* self, bool visible);
void q_datetimeaxis_on_visible_changed(void* self, void (*slot)(void*, bool));
void q_datetimeaxis_line_pen_changed(void* self, void* pen);
void q_datetimeaxis_on_line_pen_changed(void* self, void (*slot)(void*, void*));
void q_datetimeaxis_line_visible_changed(void* self, bool visible);
void q_datetimeaxis_on_line_visible_changed(void* self, void (*slot)(void*, bool));
void q_datetimeaxis_labels_visible_changed(void* self, bool visible);
void q_datetimeaxis_on_labels_visible_changed(void* self, void (*slot)(void*, bool));
void q_datetimeaxis_labels_brush_changed(void* self, void* brush);
void q_datetimeaxis_on_labels_brush_changed(void* self, void (*slot)(void*, void*));
void q_datetimeaxis_labels_font_changed(void* self, void* pen);
void q_datetimeaxis_on_labels_font_changed(void* self, void (*slot)(void*, void*));
void q_datetimeaxis_labels_angle_changed(void* self, int angle);
void q_datetimeaxis_on_labels_angle_changed(void* self, void (*slot)(void*, int));
void q_datetimeaxis_grid_line_pen_changed(void* self, void* pen);
void q_datetimeaxis_on_grid_line_pen_changed(void* self, void (*slot)(void*, void*));
void q_datetimeaxis_grid_visible_changed(void* self, bool visible);
void q_datetimeaxis_on_grid_visible_changed(void* self, void (*slot)(void*, bool));
void q_datetimeaxis_minor_grid_visible_changed(void* self, bool visible);
void q_datetimeaxis_on_minor_grid_visible_changed(void* self, void (*slot)(void*, bool));
void q_datetimeaxis_minor_grid_line_pen_changed(void* self, void* pen);
void q_datetimeaxis_on_minor_grid_line_pen_changed(void* self, void (*slot)(void*, void*));
void q_datetimeaxis_grid_line_color_changed(void* self, void* color);
void q_datetimeaxis_on_grid_line_color_changed(void* self, void (*slot)(void*, void*));
void q_datetimeaxis_minor_grid_line_color_changed(void* self, void* color);
void q_datetimeaxis_on_minor_grid_line_color_changed(void* self, void (*slot)(void*, void*));
void q_datetimeaxis_color_changed(void* self, void* color);
void q_datetimeaxis_on_color_changed(void* self, void (*slot)(void*, void*));
void q_datetimeaxis_labels_color_changed(void* self, void* color);
void q_datetimeaxis_on_labels_color_changed(void* self, void (*slot)(void*, void*));
void q_datetimeaxis_title_text_changed(void* self, const char* title);
void q_datetimeaxis_on_title_text_changed(void* self, void (*slot)(void*, const char*));
void q_datetimeaxis_title_brush_changed(void* self, void* brush);
void q_datetimeaxis_on_title_brush_changed(void* self, void (*slot)(void*, void*));
void q_datetimeaxis_title_visible_changed(void* self, bool visible);
void q_datetimeaxis_on_title_visible_changed(void* self, void (*slot)(void*, bool));
void q_datetimeaxis_title_font_changed(void* self, void* font);
void q_datetimeaxis_on_title_font_changed(void* self, void (*slot)(void*, void*));
void q_datetimeaxis_shades_visible_changed(void* self, bool visible);
void q_datetimeaxis_on_shades_visible_changed(void* self, void (*slot)(void*, bool));
void q_datetimeaxis_shades_color_changed(void* self, void* color);
void q_datetimeaxis_on_shades_color_changed(void* self, void (*slot)(void*, void*));
void q_datetimeaxis_shades_border_color_changed(void* self, void* color);
void q_datetimeaxis_on_shades_border_color_changed(void* self, void (*slot)(void*, void*));
void q_datetimeaxis_shades_pen_changed(void* self, void* pen);
void q_datetimeaxis_on_shades_pen_changed(void* self, void (*slot)(void*, void*));
void q_datetimeaxis_shades_brush_changed(void* self, void* brush);
void q_datetimeaxis_on_shades_brush_changed(void* self, void (*slot)(void*, void*));
void q_datetimeaxis_reverse_changed(void* self, bool reverse);
void q_datetimeaxis_on_reverse_changed(void* self, void (*slot)(void*, bool));
void q_datetimeaxis_labels_editable_changed(void* self, bool editable);
void q_datetimeaxis_on_labels_editable_changed(void* self, void (*slot)(void*, bool));
void q_datetimeaxis_labels_truncated_changed(void* self, bool labelsTruncated);
void q_datetimeaxis_on_labels_truncated_changed(void* self, void (*slot)(void*, bool));
void q_datetimeaxis_truncate_labels_changed(void* self, bool truncateLabels);
void q_datetimeaxis_on_truncate_labels_changed(void* self, void (*slot)(void*, bool));
void q_datetimeaxis_set_visible1(void* self, bool visible);
void q_datetimeaxis_set_line_visible1(void* self, bool visible);
void q_datetimeaxis_set_grid_line_visible1(void* self, bool visible);
void q_datetimeaxis_set_minor_grid_line_visible1(void* self, bool visible);
void q_datetimeaxis_set_labels_visible1(void* self, bool visible);
void q_datetimeaxis_set_title_visible1(void* self, bool visible);
void q_datetimeaxis_set_shades_visible1(void* self, bool visible);
void q_datetimeaxis_set_reverse1(void* self, bool reverse);
void q_datetimeaxis_set_labels_editable1(void* self, bool editable);
void q_datetimeaxis_set_truncate_labels1(void* self, bool truncateLabels);
const char* q_datetimeaxis_object_name(void* self);
void q_datetimeaxis_set_object_name(void* self, const char* name);
bool q_datetimeaxis_is_widget_type(void* self);
bool q_datetimeaxis_is_window_type(void* self);
bool q_datetimeaxis_is_quick_item_type(void* self);
bool q_datetimeaxis_signals_blocked(void* self);
bool q_datetimeaxis_block_signals(void* self, bool b);
QThread* q_datetimeaxis_thread(void* self);
void q_datetimeaxis_move_to_thread(void* self, void* thread);
int32_t q_datetimeaxis_start_timer(void* self, int interval);
void q_datetimeaxis_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_datetimeaxis_children(void* self);
void q_datetimeaxis_set_parent(void* self, void* parent);
void q_datetimeaxis_install_event_filter(void* self, void* filterObj);
void q_datetimeaxis_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_datetimeaxis_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_datetimeaxis_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_datetimeaxis_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_datetimeaxis_disconnect_with_q_meta_object_connection(void* param1);
void q_datetimeaxis_dump_object_tree(void* self);
void q_datetimeaxis_dump_object_info(void* self);
bool q_datetimeaxis_set_property(void* self, const char* name, void* value);
QVariant* q_datetimeaxis_property(void* self, const char* name);
const char** q_datetimeaxis_dynamic_property_names(void* self);
QBindingStorage* q_datetimeaxis_binding_storage(void* self);
QBindingStorage* q_datetimeaxis_binding_storage2(void* self);
void q_datetimeaxis_destroyed(void* self);
void q_datetimeaxis_on_destroyed(void* self, void (*slot)(void*));
QObject* q_datetimeaxis_parent(void* self);
bool q_datetimeaxis_inherits(void* self, const char* classname);
void q_datetimeaxis_delete_later(void* self);
int32_t q_datetimeaxis_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_datetimeaxis_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_datetimeaxis_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_datetimeaxis_destroyed1(void* self, void* param1);
void q_datetimeaxis_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_datetimeaxis_event(void* self, void* event);
bool q_datetimeaxis_qbase_event(void* self, void* event);
void q_datetimeaxis_on_event(void* self, bool (*slot)(void*, void*));
bool q_datetimeaxis_event_filter(void* self, void* watched, void* event);
bool q_datetimeaxis_qbase_event_filter(void* self, void* watched, void* event);
void q_datetimeaxis_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_datetimeaxis_timer_event(void* self, void* event);
void q_datetimeaxis_qbase_timer_event(void* self, void* event);
void q_datetimeaxis_on_timer_event(void* self, void (*slot)(void*, void*));
void q_datetimeaxis_child_event(void* self, void* event);
void q_datetimeaxis_qbase_child_event(void* self, void* event);
void q_datetimeaxis_on_child_event(void* self, void (*slot)(void*, void*));
void q_datetimeaxis_custom_event(void* self, void* event);
void q_datetimeaxis_qbase_custom_event(void* self, void* event);
void q_datetimeaxis_on_custom_event(void* self, void (*slot)(void*, void*));
void q_datetimeaxis_connect_notify(void* self, void* signal);
void q_datetimeaxis_qbase_connect_notify(void* self, void* signal);
void q_datetimeaxis_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_datetimeaxis_disconnect_notify(void* self, void* signal);
void q_datetimeaxis_qbase_disconnect_notify(void* self, void* signal);
void q_datetimeaxis_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_datetimeaxis_sender(void* self);
QObject* q_datetimeaxis_qbase_sender(void* self);
void q_datetimeaxis_on_sender(void* self, QObject* (*slot)());
int32_t q_datetimeaxis_sender_signal_index(void* self);
int32_t q_datetimeaxis_qbase_sender_signal_index(void* self);
void q_datetimeaxis_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_datetimeaxis_receivers(void* self, const char* signal);
int32_t q_datetimeaxis_qbase_receivers(void* self, const char* signal);
void q_datetimeaxis_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_datetimeaxis_is_signal_connected(void* self, void* signal);
bool q_datetimeaxis_qbase_is_signal_connected(void* self, void* signal);
void q_datetimeaxis_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_datetimeaxis_delete(void* self);

#endif
