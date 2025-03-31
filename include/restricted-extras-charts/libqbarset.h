#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQBARSET_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQBARSET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

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

QBarSet* q_barset_new(const char* label);
QBarSet* q_barset_new2(const char* label, void* parent);
QMetaObject* q_barset_meta_object(void* self);
void* q_barset_metacast(void* self, const char* param1);
int32_t q_barset_metacall(void* self, int64_t param1, int param2, void* param3);
void q_barset_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_barset_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_barset_tr(const char* s);
void q_barset_set_label(void* self, const char* label);
const char* q_barset_label(void* self);
void q_barset_append(void* self, double value);
void q_barset_append_with_values(void* self, double* values[]);
QBarSet* q_barset_operator_shift_left(void* self, double* value);
void q_barset_insert(void* self, int index, double value);
void q_barset_remove(void* self, int index);
void q_barset_replace(void* self, int index, double value);
double q_barset_at(void* self, int index);
double q_barset_operator_subscript(void* self, int index);
int32_t q_barset_count(void* self);
double q_barset_sum(void* self);
void q_barset_set_pen(void* self, void* pen);
QPen* q_barset_pen(void* self);
void q_barset_set_brush(void* self, void* brush);
QBrush* q_barset_brush(void* self);
void q_barset_set_label_brush(void* self, void* brush);
QBrush* q_barset_label_brush(void* self);
void q_barset_set_label_font(void* self, void* font);
QFont* q_barset_label_font(void* self);
QColor* q_barset_color(void* self);
void q_barset_set_color(void* self, void* color);
QColor* q_barset_border_color(void* self);
void q_barset_set_border_color(void* self, void* color);
QColor* q_barset_label_color(void* self);
void q_barset_set_label_color(void* self, void* color);
QColor* q_barset_selected_color(void* self);
void q_barset_set_selected_color(void* self, void* color);
bool q_barset_is_bar_selected(void* self, int index);
void q_barset_select_bar(void* self, int index);
void q_barset_deselect_bar(void* self, int index);
void q_barset_set_bar_selected(void* self, int index, bool selected);
void q_barset_select_all_bars(void* self);
void q_barset_deselect_all_bars(void* self);
void q_barset_select_bars(void* self, int* indexes[]);
void q_barset_deselect_bars(void* self, int* indexes[]);
void q_barset_toggle_selection(void* self, int* indexes[]);
libqt_list /* of int */ q_barset_selected_bars(void* self);
void q_barset_clicked(void* self, int index);
void q_barset_on_clicked(void* self, void (*slot)(void*, int));
void q_barset_hovered(void* self, bool status, int index);
void q_barset_on_hovered(void* self, void (*slot)(void*, bool, int));
void q_barset_pressed(void* self, int index);
void q_barset_on_pressed(void* self, void (*slot)(void*, int));
void q_barset_released(void* self, int index);
void q_barset_on_released(void* self, void (*slot)(void*, int));
void q_barset_double_clicked(void* self, int index);
void q_barset_on_double_clicked(void* self, void (*slot)(void*, int));
void q_barset_pen_changed(void* self);
void q_barset_on_pen_changed(void* self, void (*slot)(void*));
void q_barset_brush_changed(void* self);
void q_barset_on_brush_changed(void* self, void (*slot)(void*));
void q_barset_label_changed(void* self);
void q_barset_on_label_changed(void* self, void (*slot)(void*));
void q_barset_label_brush_changed(void* self);
void q_barset_on_label_brush_changed(void* self, void (*slot)(void*));
void q_barset_label_font_changed(void* self);
void q_barset_on_label_font_changed(void* self, void (*slot)(void*));
void q_barset_color_changed(void* self, void* color);
void q_barset_on_color_changed(void* self, void (*slot)(void*, void*));
void q_barset_border_color_changed(void* self, void* color);
void q_barset_on_border_color_changed(void* self, void (*slot)(void*, void*));
void q_barset_label_color_changed(void* self, void* color);
void q_barset_on_label_color_changed(void* self, void (*slot)(void*, void*));
void q_barset_selected_color_changed(void* self, void* color);
void q_barset_on_selected_color_changed(void* self, void (*slot)(void*, void*));
void q_barset_values_added(void* self, int index, int count);
void q_barset_on_values_added(void* self, void (*slot)(void*, int, int));
void q_barset_values_removed(void* self, int index, int count);
void q_barset_on_values_removed(void* self, void (*slot)(void*, int, int));
void q_barset_value_changed(void* self, int index);
void q_barset_on_value_changed(void* self, void (*slot)(void*, int));
void q_barset_selected_bars_changed(void* self, int* indexes[]);
void q_barset_on_selected_bars_changed(void* self, void (*slot)(void*, int*));
const char* q_barset_tr2(const char* s, const char* c);
const char* q_barset_tr3(const char* s, const char* c, int n);
void q_barset_remove2(void* self, int index, int count);
const char* q_barset_object_name(void* self);
void q_barset_set_object_name(void* self, const char* name);
bool q_barset_is_widget_type(void* self);
bool q_barset_is_window_type(void* self);
bool q_barset_is_quick_item_type(void* self);
bool q_barset_signals_blocked(void* self);
bool q_barset_block_signals(void* self, bool b);
QThread* q_barset_thread(void* self);
void q_barset_move_to_thread(void* self, void* thread);
int32_t q_barset_start_timer(void* self, int interval);
void q_barset_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_barset_children(void* self);
void q_barset_set_parent(void* self, void* parent);
void q_barset_install_event_filter(void* self, void* filterObj);
void q_barset_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_barset_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_barset_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_barset_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_barset_disconnect_with_q_meta_object_connection(void* param1);
void q_barset_dump_object_tree(void* self);
void q_barset_dump_object_info(void* self);
bool q_barset_set_property(void* self, const char* name, void* value);
QVariant* q_barset_property(void* self, const char* name);
const char** q_barset_dynamic_property_names(void* self);
QBindingStorage* q_barset_binding_storage(void* self);
QBindingStorage* q_barset_binding_storage2(void* self);
void q_barset_destroyed(void* self);
void q_barset_on_destroyed(void* self, void (*slot)(void*));
QObject* q_barset_parent(void* self);
bool q_barset_inherits(void* self, const char* classname);
void q_barset_delete_later(void* self);
int32_t q_barset_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_barset_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_barset_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_barset_destroyed1(void* self, void* param1);
void q_barset_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_barset_event(void* self, void* event);
bool q_barset_qbase_event(void* self, void* event);
void q_barset_on_event(void* self, bool (*slot)(void*, void*));
bool q_barset_event_filter(void* self, void* watched, void* event);
bool q_barset_qbase_event_filter(void* self, void* watched, void* event);
void q_barset_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_barset_timer_event(void* self, void* event);
void q_barset_qbase_timer_event(void* self, void* event);
void q_barset_on_timer_event(void* self, void (*slot)(void*, void*));
void q_barset_child_event(void* self, void* event);
void q_barset_qbase_child_event(void* self, void* event);
void q_barset_on_child_event(void* self, void (*slot)(void*, void*));
void q_barset_custom_event(void* self, void* event);
void q_barset_qbase_custom_event(void* self, void* event);
void q_barset_on_custom_event(void* self, void (*slot)(void*, void*));
void q_barset_connect_notify(void* self, void* signal);
void q_barset_qbase_connect_notify(void* self, void* signal);
void q_barset_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_barset_disconnect_notify(void* self, void* signal);
void q_barset_qbase_disconnect_notify(void* self, void* signal);
void q_barset_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_barset_sender(void* self);
QObject* q_barset_qbase_sender(void* self);
void q_barset_on_sender(void* self, QObject* (*slot)());
int32_t q_barset_sender_signal_index(void* self);
int32_t q_barset_qbase_sender_signal_index(void* self);
void q_barset_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_barset_receivers(void* self, const char* signal);
int32_t q_barset_qbase_receivers(void* self, const char* signal);
void q_barset_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_barset_is_signal_connected(void* self, void* signal);
bool q_barset_qbase_is_signal_connected(void* self, void* signal);
void q_barset_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_barset_delete(void* self);

#endif
