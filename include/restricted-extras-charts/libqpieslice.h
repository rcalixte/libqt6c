#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQPIESLICE_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQPIESLICE_H

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
#include "libqpieseries.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QPieSlice* q_pieslice_new();
QPieSlice* q_pieslice_new2(const char* label, double value);
QPieSlice* q_pieslice_new3(void* parent);
QPieSlice* q_pieslice_new4(const char* label, double value, void* parent);
QMetaObject* q_pieslice_meta_object(void* self);
void* q_pieslice_metacast(void* self, const char* param1);
int32_t q_pieslice_metacall(void* self, int64_t param1, int param2, void* param3);
void q_pieslice_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_pieslice_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_pieslice_tr(const char* s);
void q_pieslice_set_label(void* self, const char* label);
const char* q_pieslice_label(void* self);
void q_pieslice_set_value(void* self, double value);
double q_pieslice_value(void* self);
void q_pieslice_set_label_visible(void* self);
bool q_pieslice_is_label_visible(void* self);
int64_t q_pieslice_label_position(void* self);
void q_pieslice_set_label_position(void* self, int64_t position);
void q_pieslice_set_exploded(void* self);
bool q_pieslice_is_exploded(void* self);
void q_pieslice_set_pen(void* self, void* pen);
QPen* q_pieslice_pen(void* self);
QColor* q_pieslice_border_color(void* self);
void q_pieslice_set_border_color(void* self, void* color);
int32_t q_pieslice_border_width(void* self);
void q_pieslice_set_border_width(void* self, int width);
void q_pieslice_set_brush(void* self, void* brush);
QBrush* q_pieslice_brush(void* self);
QColor* q_pieslice_color(void* self);
void q_pieslice_set_color(void* self, void* color);
void q_pieslice_set_label_brush(void* self, void* brush);
QBrush* q_pieslice_label_brush(void* self);
QColor* q_pieslice_label_color(void* self);
void q_pieslice_set_label_color(void* self, void* color);
void q_pieslice_set_label_font(void* self, void* font);
QFont* q_pieslice_label_font(void* self);
void q_pieslice_set_label_arm_length_factor(void* self, double factor);
double q_pieslice_label_arm_length_factor(void* self);
void q_pieslice_set_explode_distance_factor(void* self, double factor);
double q_pieslice_explode_distance_factor(void* self);
double q_pieslice_percentage(void* self);
double q_pieslice_start_angle(void* self);
double q_pieslice_angle_span(void* self);
QPieSeries* q_pieslice_series(void* self);
void q_pieslice_clicked(void* self);
void q_pieslice_on_clicked(void* self, void (*slot)(void*));
void q_pieslice_hovered(void* self, bool state);
void q_pieslice_on_hovered(void* self, void (*slot)(void*, bool));
void q_pieslice_pressed(void* self);
void q_pieslice_on_pressed(void* self, void (*slot)(void*));
void q_pieslice_released(void* self);
void q_pieslice_on_released(void* self, void (*slot)(void*));
void q_pieslice_double_clicked(void* self);
void q_pieslice_on_double_clicked(void* self, void (*slot)(void*));
void q_pieslice_label_changed(void* self);
void q_pieslice_on_label_changed(void* self, void (*slot)(void*));
void q_pieslice_value_changed(void* self);
void q_pieslice_on_value_changed(void* self, void (*slot)(void*));
void q_pieslice_label_visible_changed(void* self);
void q_pieslice_on_label_visible_changed(void* self, void (*slot)(void*));
void q_pieslice_pen_changed(void* self);
void q_pieslice_on_pen_changed(void* self, void (*slot)(void*));
void q_pieslice_brush_changed(void* self);
void q_pieslice_on_brush_changed(void* self, void (*slot)(void*));
void q_pieslice_label_brush_changed(void* self);
void q_pieslice_on_label_brush_changed(void* self, void (*slot)(void*));
void q_pieslice_label_font_changed(void* self);
void q_pieslice_on_label_font_changed(void* self, void (*slot)(void*));
void q_pieslice_percentage_changed(void* self);
void q_pieslice_on_percentage_changed(void* self, void (*slot)(void*));
void q_pieslice_start_angle_changed(void* self);
void q_pieslice_on_start_angle_changed(void* self, void (*slot)(void*));
void q_pieslice_angle_span_changed(void* self);
void q_pieslice_on_angle_span_changed(void* self, void (*slot)(void*));
void q_pieslice_color_changed(void* self);
void q_pieslice_on_color_changed(void* self, void (*slot)(void*));
void q_pieslice_border_color_changed(void* self);
void q_pieslice_on_border_color_changed(void* self, void (*slot)(void*));
void q_pieslice_border_width_changed(void* self);
void q_pieslice_on_border_width_changed(void* self, void (*slot)(void*));
void q_pieslice_label_color_changed(void* self);
void q_pieslice_on_label_color_changed(void* self, void (*slot)(void*));
const char* q_pieslice_tr2(const char* s, const char* c);
const char* q_pieslice_tr3(const char* s, const char* c, int n);
void q_pieslice_set_label_visible1(void* self, bool visible);
void q_pieslice_set_exploded1(void* self, bool exploded);
const char* q_pieslice_object_name(void* self);
void q_pieslice_set_object_name(void* self, const char* name);
bool q_pieslice_is_widget_type(void* self);
bool q_pieslice_is_window_type(void* self);
bool q_pieslice_is_quick_item_type(void* self);
bool q_pieslice_signals_blocked(void* self);
bool q_pieslice_block_signals(void* self, bool b);
QThread* q_pieslice_thread(void* self);
void q_pieslice_move_to_thread(void* self, void* thread);
int32_t q_pieslice_start_timer(void* self, int interval);
void q_pieslice_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_pieslice_children(void* self);
void q_pieslice_set_parent(void* self, void* parent);
void q_pieslice_install_event_filter(void* self, void* filterObj);
void q_pieslice_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_pieslice_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_pieslice_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_pieslice_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_pieslice_disconnect_with_q_meta_object_connection(void* param1);
void q_pieslice_dump_object_tree(void* self);
void q_pieslice_dump_object_info(void* self);
bool q_pieslice_set_property(void* self, const char* name, void* value);
QVariant* q_pieslice_property(void* self, const char* name);
const char** q_pieslice_dynamic_property_names(void* self);
QBindingStorage* q_pieslice_binding_storage(void* self);
QBindingStorage* q_pieslice_binding_storage2(void* self);
void q_pieslice_destroyed(void* self);
void q_pieslice_on_destroyed(void* self, void (*slot)(void*));
QObject* q_pieslice_parent(void* self);
bool q_pieslice_inherits(void* self, const char* classname);
void q_pieslice_delete_later(void* self);
int32_t q_pieslice_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_pieslice_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_pieslice_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_pieslice_destroyed1(void* self, void* param1);
void q_pieslice_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_pieslice_event(void* self, void* event);
bool q_pieslice_qbase_event(void* self, void* event);
void q_pieslice_on_event(void* self, bool (*slot)(void*, void*));
bool q_pieslice_event_filter(void* self, void* watched, void* event);
bool q_pieslice_qbase_event_filter(void* self, void* watched, void* event);
void q_pieslice_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_pieslice_timer_event(void* self, void* event);
void q_pieslice_qbase_timer_event(void* self, void* event);
void q_pieslice_on_timer_event(void* self, void (*slot)(void*, void*));
void q_pieslice_child_event(void* self, void* event);
void q_pieslice_qbase_child_event(void* self, void* event);
void q_pieslice_on_child_event(void* self, void (*slot)(void*, void*));
void q_pieslice_custom_event(void* self, void* event);
void q_pieslice_qbase_custom_event(void* self, void* event);
void q_pieslice_on_custom_event(void* self, void (*slot)(void*, void*));
void q_pieslice_connect_notify(void* self, void* signal);
void q_pieslice_qbase_connect_notify(void* self, void* signal);
void q_pieslice_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_pieslice_disconnect_notify(void* self, void* signal);
void q_pieslice_qbase_disconnect_notify(void* self, void* signal);
void q_pieslice_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_pieslice_sender(void* self);
QObject* q_pieslice_qbase_sender(void* self);
void q_pieslice_on_sender(void* self, QObject* (*slot)());
int32_t q_pieslice_sender_signal_index(void* self);
int32_t q_pieslice_qbase_sender_signal_index(void* self);
void q_pieslice_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_pieslice_receivers(void* self, const char* signal);
int32_t q_pieslice_qbase_receivers(void* self, const char* signal);
void q_pieslice_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_pieslice_is_signal_connected(void* self, void* signal);
bool q_pieslice_qbase_is_signal_connected(void* self, void* signal);
void q_pieslice_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_pieslice_delete(void* self);

/// https://doc.qt.io/qt-6/qpieslice.html#types

typedef enum {
    QPIESLICE_LABELPOSITION_LABELOUTSIDE = 0,
    QPIESLICE_LABELPOSITION_LABELINSIDEHORIZONTAL = 1,
    QPIESLICE_LABELPOSITION_LABELINSIDETANGENTIAL = 2,
    QPIESLICE_LABELPOSITION_LABELINSIDENORMAL = 3
} QPieSlice__LabelPosition;

#endif
