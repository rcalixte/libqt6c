#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQPIESERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQPIESERIES_H

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
#include "libqchart.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "libqpieslice.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QPieSeries* q_pieseries_new();
QPieSeries* q_pieseries_new2(void* parent);
QMetaObject* q_pieseries_meta_object(void* self);
void* q_pieseries_metacast(void* self, const char* param1);
int32_t q_pieseries_metacall(void* self, int64_t param1, int param2, void* param3);
void q_pieseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_pieseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_pieseries_tr(const char* s);
int64_t q_pieseries_type(void* self);
void q_pieseries_on_type(void* self, int64_t (*slot)());
int64_t q_pieseries_qbase_type(void* self);
bool q_pieseries_append(void* self, void* slice);
bool q_pieseries_append_with_slices(void* self, void* slices[]);
QPieSeries* q_pieseries_operator_shift_left(void* self, void* slice);
QPieSlice* q_pieseries_append2(void* self, const char* label, double value);
bool q_pieseries_insert(void* self, int index, void* slice);
bool q_pieseries_remove(void* self, void* slice);
bool q_pieseries_take(void* self, void* slice);
void q_pieseries_clear(void* self);
libqt_list /* of QPieSlice* */ q_pieseries_slices(void* self);
int32_t q_pieseries_count(void* self);
bool q_pieseries_is_empty(void* self);
double q_pieseries_sum(void* self);
void q_pieseries_set_hole_size(void* self, double holeSize);
double q_pieseries_hole_size(void* self);
void q_pieseries_set_horizontal_position(void* self, double relativePosition);
double q_pieseries_horizontal_position(void* self);
void q_pieseries_set_vertical_position(void* self, double relativePosition);
double q_pieseries_vertical_position(void* self);
void q_pieseries_set_pie_size(void* self, double relativeSize);
double q_pieseries_pie_size(void* self);
void q_pieseries_set_pie_start_angle(void* self, double startAngle);
double q_pieseries_pie_start_angle(void* self);
void q_pieseries_set_pie_end_angle(void* self, double endAngle);
double q_pieseries_pie_end_angle(void* self);
void q_pieseries_set_labels_visible(void* self);
void q_pieseries_set_labels_position(void* self, int64_t position);
void q_pieseries_added(void* self, void* slices[]);
void q_pieseries_on_added(void* self, void (*slot)(void*, void*));
void q_pieseries_removed(void* self, void* slices[]);
void q_pieseries_on_removed(void* self, void (*slot)(void*, void*));
void q_pieseries_clicked(void* self, void* slice);
void q_pieseries_on_clicked(void* self, void (*slot)(void*, void*));
void q_pieseries_hovered(void* self, void* slice, bool state);
void q_pieseries_on_hovered(void* self, void (*slot)(void*, void*, bool));
void q_pieseries_pressed(void* self, void* slice);
void q_pieseries_on_pressed(void* self, void (*slot)(void*, void*));
void q_pieseries_released(void* self, void* slice);
void q_pieseries_on_released(void* self, void (*slot)(void*, void*));
void q_pieseries_double_clicked(void* self, void* slice);
void q_pieseries_on_double_clicked(void* self, void (*slot)(void*, void*));
void q_pieseries_count_changed(void* self);
void q_pieseries_on_count_changed(void* self, void (*slot)(void*));
void q_pieseries_sum_changed(void* self);
void q_pieseries_on_sum_changed(void* self, void (*slot)(void*));
const char* q_pieseries_tr2(const char* s, const char* c);
const char* q_pieseries_tr3(const char* s, const char* c, int n);
void q_pieseries_set_labels_visible1(void* self, bool visible);
void q_pieseries_set_name(void* self, const char* name);
const char* q_pieseries_name(void* self);
void q_pieseries_set_visible(void* self);
bool q_pieseries_is_visible(void* self);
double q_pieseries_opacity(void* self);
void q_pieseries_set_opacity(void* self, double opacity);
void q_pieseries_set_use_open_g_l(void* self);
bool q_pieseries_use_open_g_l(void* self);
QChart* q_pieseries_chart(void* self);
bool q_pieseries_attach_axis(void* self, void* axis);
bool q_pieseries_detach_axis(void* self, void* axis);
libqt_list /* of QAbstractAxis* */ q_pieseries_attached_axes(void* self);
void q_pieseries_show(void* self);
void q_pieseries_hide(void* self);
void q_pieseries_name_changed(void* self);
void q_pieseries_on_name_changed(void* self, void (*slot)(void*));
void q_pieseries_visible_changed(void* self);
void q_pieseries_on_visible_changed(void* self, void (*slot)(void*));
void q_pieseries_opacity_changed(void* self);
void q_pieseries_on_opacity_changed(void* self, void (*slot)(void*));
void q_pieseries_use_open_g_l_changed(void* self);
void q_pieseries_on_use_open_g_l_changed(void* self, void (*slot)(void*));
void q_pieseries_set_visible1(void* self, bool visible);
void q_pieseries_set_use_open_g_l1(void* self, bool enable);
const char* q_pieseries_object_name(void* self);
void q_pieseries_set_object_name(void* self, const char* name);
bool q_pieseries_is_widget_type(void* self);
bool q_pieseries_is_window_type(void* self);
bool q_pieseries_is_quick_item_type(void* self);
bool q_pieseries_signals_blocked(void* self);
bool q_pieseries_block_signals(void* self, bool b);
QThread* q_pieseries_thread(void* self);
void q_pieseries_move_to_thread(void* self, void* thread);
int32_t q_pieseries_start_timer(void* self, int interval);
void q_pieseries_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_pieseries_children(void* self);
void q_pieseries_set_parent(void* self, void* parent);
void q_pieseries_install_event_filter(void* self, void* filterObj);
void q_pieseries_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_pieseries_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_pieseries_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_pieseries_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_pieseries_disconnect_with_q_meta_object_connection(void* param1);
void q_pieseries_dump_object_tree(void* self);
void q_pieseries_dump_object_info(void* self);
bool q_pieseries_set_property(void* self, const char* name, void* value);
QVariant* q_pieseries_property(void* self, const char* name);
const char** q_pieseries_dynamic_property_names(void* self);
QBindingStorage* q_pieseries_binding_storage(void* self);
QBindingStorage* q_pieseries_binding_storage2(void* self);
void q_pieseries_destroyed(void* self);
void q_pieseries_on_destroyed(void* self, void (*slot)(void*));
QObject* q_pieseries_parent(void* self);
bool q_pieseries_inherits(void* self, const char* classname);
void q_pieseries_delete_later(void* self);
int32_t q_pieseries_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_pieseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_pieseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_pieseries_destroyed1(void* self, void* param1);
void q_pieseries_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_pieseries_event(void* self, void* event);
bool q_pieseries_qbase_event(void* self, void* event);
void q_pieseries_on_event(void* self, bool (*slot)(void*, void*));
bool q_pieseries_event_filter(void* self, void* watched, void* event);
bool q_pieseries_qbase_event_filter(void* self, void* watched, void* event);
void q_pieseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_pieseries_timer_event(void* self, void* event);
void q_pieseries_qbase_timer_event(void* self, void* event);
void q_pieseries_on_timer_event(void* self, void (*slot)(void*, void*));
void q_pieseries_child_event(void* self, void* event);
void q_pieseries_qbase_child_event(void* self, void* event);
void q_pieseries_on_child_event(void* self, void (*slot)(void*, void*));
void q_pieseries_custom_event(void* self, void* event);
void q_pieseries_qbase_custom_event(void* self, void* event);
void q_pieseries_on_custom_event(void* self, void (*slot)(void*, void*));
void q_pieseries_connect_notify(void* self, void* signal);
void q_pieseries_qbase_connect_notify(void* self, void* signal);
void q_pieseries_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_pieseries_disconnect_notify(void* self, void* signal);
void q_pieseries_qbase_disconnect_notify(void* self, void* signal);
void q_pieseries_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_pieseries_sender(void* self);
QObject* q_pieseries_qbase_sender(void* self);
void q_pieseries_on_sender(void* self, QObject* (*slot)());
int32_t q_pieseries_sender_signal_index(void* self);
int32_t q_pieseries_qbase_sender_signal_index(void* self);
void q_pieseries_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_pieseries_receivers(void* self, const char* signal);
int32_t q_pieseries_qbase_receivers(void* self, const char* signal);
void q_pieseries_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_pieseries_is_signal_connected(void* self, void* signal);
bool q_pieseries_qbase_is_signal_connected(void* self, void* signal);
void q_pieseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_pieseries_delete(void* self);

#endif
