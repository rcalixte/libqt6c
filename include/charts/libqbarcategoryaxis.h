#pragma once
#ifndef SRC_CHARTSQT6C_LIBQBARCATEGORYAXIS_H
#define SRC_CHARTSQT6C_LIBQBARCATEGORYAXIS_H

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

QBarCategoryAxis* q_barcategoryaxis_new();
QBarCategoryAxis* q_barcategoryaxis_new2(void* parent);
QMetaObject* q_barcategoryaxis_meta_object(void* self);
void* q_barcategoryaxis_metacast(void* self, const char* param1);
int32_t q_barcategoryaxis_metacall(void* self, int64_t param1, int param2, void* param3);
void q_barcategoryaxis_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_barcategoryaxis_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_barcategoryaxis_tr(const char* s);
int64_t q_barcategoryaxis_type(void* self);
void q_barcategoryaxis_on_type(void* self, int64_t (*slot)());
int64_t q_barcategoryaxis_qbase_type(void* self);
void q_barcategoryaxis_append(void* self, const char* categories[]);
void q_barcategoryaxis_append_with_category(void* self, const char* category);
void q_barcategoryaxis_remove(void* self, const char* category);
void q_barcategoryaxis_insert(void* self, int index, const char* category);
void q_barcategoryaxis_replace(void* self, const char* oldCategory, const char* newCategory);
void q_barcategoryaxis_clear(void* self);
void q_barcategoryaxis_set_categories(void* self, const char* categories[]);
const char** q_barcategoryaxis_categories(void* self);
int32_t q_barcategoryaxis_count(void* self);
const char* q_barcategoryaxis_at(void* self, int index);
void q_barcategoryaxis_set_min(void* self, const char* minCategory);
const char* q_barcategoryaxis_min(void* self);
void q_barcategoryaxis_set_max(void* self, const char* maxCategory);
const char* q_barcategoryaxis_max(void* self);
void q_barcategoryaxis_set_range(void* self, const char* minCategory, const char* maxCategory);
void q_barcategoryaxis_categories_changed(void* self);
void q_barcategoryaxis_on_categories_changed(void* self, void (*slot)(void*));
void q_barcategoryaxis_min_changed(void* self, const char* min);
void q_barcategoryaxis_on_min_changed(void* self, void (*slot)(void*, const char*));
void q_barcategoryaxis_max_changed(void* self, const char* max);
void q_barcategoryaxis_on_max_changed(void* self, void (*slot)(void*, const char*));
void q_barcategoryaxis_range_changed(void* self, const char* min, const char* max);
void q_barcategoryaxis_on_range_changed(void* self, void (*slot)(void*, const char*, const char*));
void q_barcategoryaxis_count_changed(void* self);
void q_barcategoryaxis_on_count_changed(void* self, void (*slot)(void*));
const char* q_barcategoryaxis_tr2(const char* s, const char* c);
const char* q_barcategoryaxis_tr3(const char* s, const char* c, int n);
bool q_barcategoryaxis_is_visible(void* self);
void q_barcategoryaxis_set_visible(void* self);
void q_barcategoryaxis_show(void* self);
void q_barcategoryaxis_hide(void* self);
bool q_barcategoryaxis_is_line_visible(void* self);
void q_barcategoryaxis_set_line_visible(void* self);
void q_barcategoryaxis_set_line_pen(void* self, void* pen);
QPen* q_barcategoryaxis_line_pen(void* self);
void q_barcategoryaxis_set_line_pen_color(void* self, void* color);
QColor* q_barcategoryaxis_line_pen_color(void* self);
bool q_barcategoryaxis_is_grid_line_visible(void* self);
void q_barcategoryaxis_set_grid_line_visible(void* self);
void q_barcategoryaxis_set_grid_line_pen(void* self, void* pen);
QPen* q_barcategoryaxis_grid_line_pen(void* self);
bool q_barcategoryaxis_is_minor_grid_line_visible(void* self);
void q_barcategoryaxis_set_minor_grid_line_visible(void* self);
void q_barcategoryaxis_set_minor_grid_line_pen(void* self, void* pen);
QPen* q_barcategoryaxis_minor_grid_line_pen(void* self);
void q_barcategoryaxis_set_grid_line_color(void* self, void* color);
QColor* q_barcategoryaxis_grid_line_color(void* self);
void q_barcategoryaxis_set_minor_grid_line_color(void* self, void* color);
QColor* q_barcategoryaxis_minor_grid_line_color(void* self);
bool q_barcategoryaxis_labels_visible(void* self);
void q_barcategoryaxis_set_labels_visible(void* self);
void q_barcategoryaxis_set_labels_brush(void* self, void* brush);
QBrush* q_barcategoryaxis_labels_brush(void* self);
void q_barcategoryaxis_set_labels_font(void* self, void* font);
QFont* q_barcategoryaxis_labels_font(void* self);
void q_barcategoryaxis_set_labels_angle(void* self, int angle);
int32_t q_barcategoryaxis_labels_angle(void* self);
void q_barcategoryaxis_set_labels_color(void* self, void* color);
QColor* q_barcategoryaxis_labels_color(void* self);
bool q_barcategoryaxis_is_title_visible(void* self);
void q_barcategoryaxis_set_title_visible(void* self);
void q_barcategoryaxis_set_title_brush(void* self, void* brush);
QBrush* q_barcategoryaxis_title_brush(void* self);
void q_barcategoryaxis_set_title_font(void* self, void* font);
QFont* q_barcategoryaxis_title_font(void* self);
void q_barcategoryaxis_set_title_text(void* self, const char* title);
const char* q_barcategoryaxis_title_text(void* self);
bool q_barcategoryaxis_shades_visible(void* self);
void q_barcategoryaxis_set_shades_visible(void* self);
void q_barcategoryaxis_set_shades_pen(void* self, void* pen);
QPen* q_barcategoryaxis_shades_pen(void* self);
void q_barcategoryaxis_set_shades_brush(void* self, void* brush);
QBrush* q_barcategoryaxis_shades_brush(void* self);
void q_barcategoryaxis_set_shades_color(void* self, void* color);
QColor* q_barcategoryaxis_shades_color(void* self);
void q_barcategoryaxis_set_shades_border_color(void* self, void* color);
QColor* q_barcategoryaxis_shades_border_color(void* self);
int64_t q_barcategoryaxis_orientation(void* self);
int64_t q_barcategoryaxis_alignment(void* self);
void q_barcategoryaxis_set_reverse(void* self);
bool q_barcategoryaxis_is_reverse(void* self);
void q_barcategoryaxis_set_labels_editable(void* self);
bool q_barcategoryaxis_labels_editable(void* self);
bool q_barcategoryaxis_labels_truncated(void* self);
void q_barcategoryaxis_set_truncate_labels(void* self);
bool q_barcategoryaxis_truncate_labels(void* self);
void q_barcategoryaxis_visible_changed(void* self, bool visible);
void q_barcategoryaxis_on_visible_changed(void* self, void (*slot)(void*, bool));
void q_barcategoryaxis_line_pen_changed(void* self, void* pen);
void q_barcategoryaxis_on_line_pen_changed(void* self, void (*slot)(void*, void*));
void q_barcategoryaxis_line_visible_changed(void* self, bool visible);
void q_barcategoryaxis_on_line_visible_changed(void* self, void (*slot)(void*, bool));
void q_barcategoryaxis_labels_visible_changed(void* self, bool visible);
void q_barcategoryaxis_on_labels_visible_changed(void* self, void (*slot)(void*, bool));
void q_barcategoryaxis_labels_brush_changed(void* self, void* brush);
void q_barcategoryaxis_on_labels_brush_changed(void* self, void (*slot)(void*, void*));
void q_barcategoryaxis_labels_font_changed(void* self, void* pen);
void q_barcategoryaxis_on_labels_font_changed(void* self, void (*slot)(void*, void*));
void q_barcategoryaxis_labels_angle_changed(void* self, int angle);
void q_barcategoryaxis_on_labels_angle_changed(void* self, void (*slot)(void*, int));
void q_barcategoryaxis_grid_line_pen_changed(void* self, void* pen);
void q_barcategoryaxis_on_grid_line_pen_changed(void* self, void (*slot)(void*, void*));
void q_barcategoryaxis_grid_visible_changed(void* self, bool visible);
void q_barcategoryaxis_on_grid_visible_changed(void* self, void (*slot)(void*, bool));
void q_barcategoryaxis_minor_grid_visible_changed(void* self, bool visible);
void q_barcategoryaxis_on_minor_grid_visible_changed(void* self, void (*slot)(void*, bool));
void q_barcategoryaxis_minor_grid_line_pen_changed(void* self, void* pen);
void q_barcategoryaxis_on_minor_grid_line_pen_changed(void* self, void (*slot)(void*, void*));
void q_barcategoryaxis_grid_line_color_changed(void* self, void* color);
void q_barcategoryaxis_on_grid_line_color_changed(void* self, void (*slot)(void*, void*));
void q_barcategoryaxis_minor_grid_line_color_changed(void* self, void* color);
void q_barcategoryaxis_on_minor_grid_line_color_changed(void* self, void (*slot)(void*, void*));
void q_barcategoryaxis_color_changed(void* self, void* color);
void q_barcategoryaxis_on_color_changed(void* self, void (*slot)(void*, void*));
void q_barcategoryaxis_labels_color_changed(void* self, void* color);
void q_barcategoryaxis_on_labels_color_changed(void* self, void (*slot)(void*, void*));
void q_barcategoryaxis_title_text_changed(void* self, const char* title);
void q_barcategoryaxis_on_title_text_changed(void* self, void (*slot)(void*, const char*));
void q_barcategoryaxis_title_brush_changed(void* self, void* brush);
void q_barcategoryaxis_on_title_brush_changed(void* self, void (*slot)(void*, void*));
void q_barcategoryaxis_title_visible_changed(void* self, bool visible);
void q_barcategoryaxis_on_title_visible_changed(void* self, void (*slot)(void*, bool));
void q_barcategoryaxis_title_font_changed(void* self, void* font);
void q_barcategoryaxis_on_title_font_changed(void* self, void (*slot)(void*, void*));
void q_barcategoryaxis_shades_visible_changed(void* self, bool visible);
void q_barcategoryaxis_on_shades_visible_changed(void* self, void (*slot)(void*, bool));
void q_barcategoryaxis_shades_color_changed(void* self, void* color);
void q_barcategoryaxis_on_shades_color_changed(void* self, void (*slot)(void*, void*));
void q_barcategoryaxis_shades_border_color_changed(void* self, void* color);
void q_barcategoryaxis_on_shades_border_color_changed(void* self, void (*slot)(void*, void*));
void q_barcategoryaxis_shades_pen_changed(void* self, void* pen);
void q_barcategoryaxis_on_shades_pen_changed(void* self, void (*slot)(void*, void*));
void q_barcategoryaxis_shades_brush_changed(void* self, void* brush);
void q_barcategoryaxis_on_shades_brush_changed(void* self, void (*slot)(void*, void*));
void q_barcategoryaxis_reverse_changed(void* self, bool reverse);
void q_barcategoryaxis_on_reverse_changed(void* self, void (*slot)(void*, bool));
void q_barcategoryaxis_labels_editable_changed(void* self, bool editable);
void q_barcategoryaxis_on_labels_editable_changed(void* self, void (*slot)(void*, bool));
void q_barcategoryaxis_labels_truncated_changed(void* self, bool labelsTruncated);
void q_barcategoryaxis_on_labels_truncated_changed(void* self, void (*slot)(void*, bool));
void q_barcategoryaxis_truncate_labels_changed(void* self, bool truncateLabels);
void q_barcategoryaxis_on_truncate_labels_changed(void* self, void (*slot)(void*, bool));
void q_barcategoryaxis_set_visible1(void* self, bool visible);
void q_barcategoryaxis_set_line_visible1(void* self, bool visible);
void q_barcategoryaxis_set_grid_line_visible1(void* self, bool visible);
void q_barcategoryaxis_set_minor_grid_line_visible1(void* self, bool visible);
void q_barcategoryaxis_set_labels_visible1(void* self, bool visible);
void q_barcategoryaxis_set_title_visible1(void* self, bool visible);
void q_barcategoryaxis_set_shades_visible1(void* self, bool visible);
void q_barcategoryaxis_set_reverse1(void* self, bool reverse);
void q_barcategoryaxis_set_labels_editable1(void* self, bool editable);
void q_barcategoryaxis_set_truncate_labels1(void* self, bool truncateLabels);
const char* q_barcategoryaxis_object_name(void* self);
void q_barcategoryaxis_set_object_name(void* self, const char* name);
bool q_barcategoryaxis_is_widget_type(void* self);
bool q_barcategoryaxis_is_window_type(void* self);
bool q_barcategoryaxis_is_quick_item_type(void* self);
bool q_barcategoryaxis_signals_blocked(void* self);
bool q_barcategoryaxis_block_signals(void* self, bool b);
QThread* q_barcategoryaxis_thread(void* self);
void q_barcategoryaxis_move_to_thread(void* self, void* thread);
int32_t q_barcategoryaxis_start_timer(void* self, int interval);
void q_barcategoryaxis_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_barcategoryaxis_children(void* self);
void q_barcategoryaxis_set_parent(void* self, void* parent);
void q_barcategoryaxis_install_event_filter(void* self, void* filterObj);
void q_barcategoryaxis_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_barcategoryaxis_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_barcategoryaxis_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_barcategoryaxis_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_barcategoryaxis_disconnect_with_q_meta_object_connection(void* param1);
void q_barcategoryaxis_dump_object_tree(void* self);
void q_barcategoryaxis_dump_object_info(void* self);
bool q_barcategoryaxis_set_property(void* self, const char* name, void* value);
QVariant* q_barcategoryaxis_property(void* self, const char* name);
const char** q_barcategoryaxis_dynamic_property_names(void* self);
QBindingStorage* q_barcategoryaxis_binding_storage(void* self);
QBindingStorage* q_barcategoryaxis_binding_storage2(void* self);
void q_barcategoryaxis_destroyed(void* self);
void q_barcategoryaxis_on_destroyed(void* self, void (*slot)(void*));
QObject* q_barcategoryaxis_parent(void* self);
bool q_barcategoryaxis_inherits(void* self, const char* classname);
void q_barcategoryaxis_delete_later(void* self);
int32_t q_barcategoryaxis_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_barcategoryaxis_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_barcategoryaxis_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_barcategoryaxis_destroyed1(void* self, void* param1);
void q_barcategoryaxis_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_barcategoryaxis_event(void* self, void* event);
bool q_barcategoryaxis_qbase_event(void* self, void* event);
void q_barcategoryaxis_on_event(void* self, bool (*slot)(void*, void*));
bool q_barcategoryaxis_event_filter(void* self, void* watched, void* event);
bool q_barcategoryaxis_qbase_event_filter(void* self, void* watched, void* event);
void q_barcategoryaxis_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_barcategoryaxis_timer_event(void* self, void* event);
void q_barcategoryaxis_qbase_timer_event(void* self, void* event);
void q_barcategoryaxis_on_timer_event(void* self, void (*slot)(void*, void*));
void q_barcategoryaxis_child_event(void* self, void* event);
void q_barcategoryaxis_qbase_child_event(void* self, void* event);
void q_barcategoryaxis_on_child_event(void* self, void (*slot)(void*, void*));
void q_barcategoryaxis_custom_event(void* self, void* event);
void q_barcategoryaxis_qbase_custom_event(void* self, void* event);
void q_barcategoryaxis_on_custom_event(void* self, void (*slot)(void*, void*));
void q_barcategoryaxis_connect_notify(void* self, void* signal);
void q_barcategoryaxis_qbase_connect_notify(void* self, void* signal);
void q_barcategoryaxis_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_barcategoryaxis_disconnect_notify(void* self, void* signal);
void q_barcategoryaxis_qbase_disconnect_notify(void* self, void* signal);
void q_barcategoryaxis_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_barcategoryaxis_sender(void* self);
QObject* q_barcategoryaxis_qbase_sender(void* self);
void q_barcategoryaxis_on_sender(void* self, QObject* (*slot)());
int32_t q_barcategoryaxis_sender_signal_index(void* self);
int32_t q_barcategoryaxis_qbase_sender_signal_index(void* self);
void q_barcategoryaxis_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_barcategoryaxis_receivers(void* self, const char* signal);
int32_t q_barcategoryaxis_qbase_receivers(void* self, const char* signal);
void q_barcategoryaxis_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_barcategoryaxis_is_signal_connected(void* self, void* signal);
bool q_barcategoryaxis_qbase_is_signal_connected(void* self, void* signal);
void q_barcategoryaxis_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_barcategoryaxis_delete(void* self);

#endif
