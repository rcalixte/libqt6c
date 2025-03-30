#pragma once
#ifndef SRC_CHARTSQT6C_LIBQCANDLESTICKSERIES_H
#define SRC_CHARTSQT6C_LIBQCANDLESTICKSERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqabstractaxis.h"
#include "libqabstractseries.h"
#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqbrush.h"
#include "libqcandlestickset.h"
#include "libqchart.h"
#include "../libqevent.h"
#include "../libqcolor.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpen.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QCandlestickSeries* q_candlestickseries_new();
QCandlestickSeries* q_candlestickseries_new2(void* parent);
QMetaObject* q_candlestickseries_meta_object(void* self);
void* q_candlestickseries_metacast(void* self, const char* param1);
int32_t q_candlestickseries_metacall(void* self, int64_t param1, int param2, void* param3);
void q_candlestickseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_candlestickseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_candlestickseries_tr(const char* s);
bool q_candlestickseries_append(void* self, void* set);
bool q_candlestickseries_remove(void* self, void* set);
bool q_candlestickseries_append_with_sets(void* self, void* sets[]);
bool q_candlestickseries_remove_with_sets(void* self, void* sets[]);
bool q_candlestickseries_insert(void* self, int index, void* set);
bool q_candlestickseries_take(void* self, void* set);
void q_candlestickseries_clear(void* self);
libqt_list /* of QCandlestickSet* */ q_candlestickseries_sets(void* self);
int32_t q_candlestickseries_count(void* self);
int64_t q_candlestickseries_type(void* self);
void q_candlestickseries_on_type(void* self, int64_t (*slot)());
int64_t q_candlestickseries_qbase_type(void* self);
void q_candlestickseries_set_maximum_column_width(void* self, double maximumColumnWidth);
double q_candlestickseries_maximum_column_width(void* self);
void q_candlestickseries_set_minimum_column_width(void* self, double minimumColumnWidth);
double q_candlestickseries_minimum_column_width(void* self);
void q_candlestickseries_set_body_width(void* self, double bodyWidth);
double q_candlestickseries_body_width(void* self);
void q_candlestickseries_set_body_outline_visible(void* self, bool bodyOutlineVisible);
bool q_candlestickseries_body_outline_visible(void* self);
void q_candlestickseries_set_caps_width(void* self, double capsWidth);
double q_candlestickseries_caps_width(void* self);
void q_candlestickseries_set_caps_visible(void* self, bool capsVisible);
bool q_candlestickseries_caps_visible(void* self);
void q_candlestickseries_set_increasing_color(void* self, void* increasingColor);
QColor* q_candlestickseries_increasing_color(void* self);
void q_candlestickseries_set_decreasing_color(void* self, void* decreasingColor);
QColor* q_candlestickseries_decreasing_color(void* self);
void q_candlestickseries_set_brush(void* self, void* brush);
QBrush* q_candlestickseries_brush(void* self);
void q_candlestickseries_set_pen(void* self, void* pen);
QPen* q_candlestickseries_pen(void* self);
void q_candlestickseries_clicked(void* self, void* set);
void q_candlestickseries_on_clicked(void* self, void (*slot)(void*, void*));
void q_candlestickseries_hovered(void* self, bool status, void* set);
void q_candlestickseries_on_hovered(void* self, void (*slot)(void*, bool, void*));
void q_candlestickseries_pressed(void* self, void* set);
void q_candlestickseries_on_pressed(void* self, void (*slot)(void*, void*));
void q_candlestickseries_released(void* self, void* set);
void q_candlestickseries_on_released(void* self, void (*slot)(void*, void*));
void q_candlestickseries_double_clicked(void* self, void* set);
void q_candlestickseries_on_double_clicked(void* self, void (*slot)(void*, void*));
void q_candlestickseries_candlestick_sets_added(void* self, void* sets[]);
void q_candlestickseries_on_candlestick_sets_added(void* self, void (*slot)(void*, void*));
void q_candlestickseries_candlestick_sets_removed(void* self, void* sets[]);
void q_candlestickseries_on_candlestick_sets_removed(void* self, void (*slot)(void*, void*));
void q_candlestickseries_count_changed(void* self);
void q_candlestickseries_on_count_changed(void* self, void (*slot)(void*));
void q_candlestickseries_maximum_column_width_changed(void* self);
void q_candlestickseries_on_maximum_column_width_changed(void* self, void (*slot)(void*));
void q_candlestickseries_minimum_column_width_changed(void* self);
void q_candlestickseries_on_minimum_column_width_changed(void* self, void (*slot)(void*));
void q_candlestickseries_body_width_changed(void* self);
void q_candlestickseries_on_body_width_changed(void* self, void (*slot)(void*));
void q_candlestickseries_body_outline_visibility_changed(void* self);
void q_candlestickseries_on_body_outline_visibility_changed(void* self, void (*slot)(void*));
void q_candlestickseries_caps_width_changed(void* self);
void q_candlestickseries_on_caps_width_changed(void* self, void (*slot)(void*));
void q_candlestickseries_caps_visibility_changed(void* self);
void q_candlestickseries_on_caps_visibility_changed(void* self, void (*slot)(void*));
void q_candlestickseries_increasing_color_changed(void* self);
void q_candlestickseries_on_increasing_color_changed(void* self, void (*slot)(void*));
void q_candlestickseries_decreasing_color_changed(void* self);
void q_candlestickseries_on_decreasing_color_changed(void* self, void (*slot)(void*));
void q_candlestickseries_brush_changed(void* self);
void q_candlestickseries_on_brush_changed(void* self, void (*slot)(void*));
void q_candlestickseries_pen_changed(void* self);
void q_candlestickseries_on_pen_changed(void* self, void (*slot)(void*));
const char* q_candlestickseries_tr2(const char* s, const char* c);
const char* q_candlestickseries_tr3(const char* s, const char* c, int n);
void q_candlestickseries_set_name(void* self, const char* name);
const char* q_candlestickseries_name(void* self);
void q_candlestickseries_set_visible(void* self);
bool q_candlestickseries_is_visible(void* self);
double q_candlestickseries_opacity(void* self);
void q_candlestickseries_set_opacity(void* self, double opacity);
void q_candlestickseries_set_use_open_g_l(void* self);
bool q_candlestickseries_use_open_g_l(void* self);
QChart* q_candlestickseries_chart(void* self);
bool q_candlestickseries_attach_axis(void* self, void* axis);
bool q_candlestickseries_detach_axis(void* self, void* axis);
libqt_list /* of QAbstractAxis* */ q_candlestickseries_attached_axes(void* self);
void q_candlestickseries_show(void* self);
void q_candlestickseries_hide(void* self);
void q_candlestickseries_name_changed(void* self);
void q_candlestickseries_on_name_changed(void* self, void (*slot)(void*));
void q_candlestickseries_visible_changed(void* self);
void q_candlestickseries_on_visible_changed(void* self, void (*slot)(void*));
void q_candlestickseries_opacity_changed(void* self);
void q_candlestickseries_on_opacity_changed(void* self, void (*slot)(void*));
void q_candlestickseries_use_open_g_l_changed(void* self);
void q_candlestickseries_on_use_open_g_l_changed(void* self, void (*slot)(void*));
void q_candlestickseries_set_visible1(void* self, bool visible);
void q_candlestickseries_set_use_open_g_l1(void* self, bool enable);
const char* q_candlestickseries_object_name(void* self);
void q_candlestickseries_set_object_name(void* self, const char* name);
bool q_candlestickseries_is_widget_type(void* self);
bool q_candlestickseries_is_window_type(void* self);
bool q_candlestickseries_is_quick_item_type(void* self);
bool q_candlestickseries_signals_blocked(void* self);
bool q_candlestickseries_block_signals(void* self, bool b);
QThread* q_candlestickseries_thread(void* self);
void q_candlestickseries_move_to_thread(void* self, void* thread);
int32_t q_candlestickseries_start_timer(void* self, int interval);
void q_candlestickseries_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_candlestickseries_children(void* self);
void q_candlestickseries_set_parent(void* self, void* parent);
void q_candlestickseries_install_event_filter(void* self, void* filterObj);
void q_candlestickseries_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_candlestickseries_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_candlestickseries_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_candlestickseries_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_candlestickseries_disconnect_with_q_meta_object_connection(void* param1);
void q_candlestickseries_dump_object_tree(void* self);
void q_candlestickseries_dump_object_info(void* self);
bool q_candlestickseries_set_property(void* self, const char* name, void* value);
QVariant* q_candlestickseries_property(void* self, const char* name);
const char** q_candlestickseries_dynamic_property_names(void* self);
QBindingStorage* q_candlestickseries_binding_storage(void* self);
QBindingStorage* q_candlestickseries_binding_storage2(void* self);
void q_candlestickseries_destroyed(void* self);
void q_candlestickseries_on_destroyed(void* self, void (*slot)(void*));
QObject* q_candlestickseries_parent(void* self);
bool q_candlestickseries_inherits(void* self, const char* classname);
void q_candlestickseries_delete_later(void* self);
int32_t q_candlestickseries_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_candlestickseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_candlestickseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_candlestickseries_destroyed1(void* self, void* param1);
void q_candlestickseries_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_candlestickseries_event(void* self, void* event);
bool q_candlestickseries_qbase_event(void* self, void* event);
void q_candlestickseries_on_event(void* self, bool (*slot)(void*, void*));
bool q_candlestickseries_event_filter(void* self, void* watched, void* event);
bool q_candlestickseries_qbase_event_filter(void* self, void* watched, void* event);
void q_candlestickseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_candlestickseries_timer_event(void* self, void* event);
void q_candlestickseries_qbase_timer_event(void* self, void* event);
void q_candlestickseries_on_timer_event(void* self, void (*slot)(void*, void*));
void q_candlestickseries_child_event(void* self, void* event);
void q_candlestickseries_qbase_child_event(void* self, void* event);
void q_candlestickseries_on_child_event(void* self, void (*slot)(void*, void*));
void q_candlestickseries_custom_event(void* self, void* event);
void q_candlestickseries_qbase_custom_event(void* self, void* event);
void q_candlestickseries_on_custom_event(void* self, void (*slot)(void*, void*));
void q_candlestickseries_connect_notify(void* self, void* signal);
void q_candlestickseries_qbase_connect_notify(void* self, void* signal);
void q_candlestickseries_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_candlestickseries_disconnect_notify(void* self, void* signal);
void q_candlestickseries_qbase_disconnect_notify(void* self, void* signal);
void q_candlestickseries_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_candlestickseries_sender(void* self);
QObject* q_candlestickseries_qbase_sender(void* self);
void q_candlestickseries_on_sender(void* self, QObject* (*slot)());
int32_t q_candlestickseries_sender_signal_index(void* self);
int32_t q_candlestickseries_qbase_sender_signal_index(void* self);
void q_candlestickseries_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_candlestickseries_receivers(void* self, const char* signal);
int32_t q_candlestickseries_qbase_receivers(void* self, const char* signal);
void q_candlestickseries_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_candlestickseries_is_signal_connected(void* self, void* signal);
bool q_candlestickseries_qbase_is_signal_connected(void* self, void* signal);
void q_candlestickseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_candlestickseries_delete(void* self);

#endif
