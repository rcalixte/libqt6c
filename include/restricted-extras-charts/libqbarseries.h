#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQBARSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQBARSERIES_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "libqabstractaxis.h"
#include "libqabstractbarseries.h"
#include "libqabstractseries.h"
#include "../libqanystringview.h"
#include "libqbarset.h"
#include "../libqbindingstorage.h"
#include "libqchart.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QBarSeries* q_barseries_new();
QBarSeries* q_barseries_new2(void* parent);
QMetaObject* q_barseries_meta_object(void* self);
void* q_barseries_metacast(void* self, const char* param1);
int32_t q_barseries_metacall(void* self, int64_t param1, int param2, void* param3);
void q_barseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_barseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_barseries_tr(const char* s);
int64_t q_barseries_type(void* self);
void q_barseries_on_type(void* self, int64_t (*slot)());
int64_t q_barseries_qbase_type(void* self);
const char* q_barseries_tr2(const char* s, const char* c);
const char* q_barseries_tr3(const char* s, const char* c, int n);
void q_barseries_set_bar_width(void* self, double width);
double q_barseries_bar_width(void* self);
bool q_barseries_append(void* self, void* set);
bool q_barseries_remove(void* self, void* set);
bool q_barseries_take(void* self, void* set);
bool q_barseries_append_with_sets(void* self, void* sets[]);
bool q_barseries_insert(void* self, int index, void* set);
int32_t q_barseries_count(void* self);
libqt_list /* of QBarSet* */ q_barseries_bar_sets(void* self);
void q_barseries_clear(void* self);
void q_barseries_set_labels_visible(void* self);
bool q_barseries_is_labels_visible(void* self);
void q_barseries_set_labels_format(void* self, const char* format);
const char* q_barseries_labels_format(void* self);
void q_barseries_set_labels_angle(void* self, double angle);
double q_barseries_labels_angle(void* self);
void q_barseries_set_labels_position(void* self, int64_t position);
int64_t q_barseries_labels_position(void* self);
void q_barseries_set_labels_precision(void* self, int precision);
int32_t q_barseries_labels_precision(void* self);
void q_barseries_clicked(void* self, int index, void* barset);
void q_barseries_on_clicked(void* self, void (*slot)(void*, int, void*));
void q_barseries_hovered(void* self, bool status, int index, void* barset);
void q_barseries_on_hovered(void* self, void (*slot)(void*, bool, int, void*));
void q_barseries_pressed(void* self, int index, void* barset);
void q_barseries_on_pressed(void* self, void (*slot)(void*, int, void*));
void q_barseries_released(void* self, int index, void* barset);
void q_barseries_on_released(void* self, void (*slot)(void*, int, void*));
void q_barseries_double_clicked(void* self, int index, void* barset);
void q_barseries_on_double_clicked(void* self, void (*slot)(void*, int, void*));
void q_barseries_count_changed(void* self);
void q_barseries_on_count_changed(void* self, void (*slot)(void*));
void q_barseries_labels_visible_changed(void* self);
void q_barseries_on_labels_visible_changed(void* self, void (*slot)(void*));
void q_barseries_labels_format_changed(void* self, const char* format);
void q_barseries_on_labels_format_changed(void* self, void (*slot)(void*, const char*));
void q_barseries_labels_position_changed(void* self, int64_t position);
void q_barseries_on_labels_position_changed(void* self, void (*slot)(void*, int64_t));
void q_barseries_labels_angle_changed(void* self, double angle);
void q_barseries_on_labels_angle_changed(void* self, void (*slot)(void*, double));
void q_barseries_labels_precision_changed(void* self, int precision);
void q_barseries_on_labels_precision_changed(void* self, void (*slot)(void*, int));
void q_barseries_barsets_added(void* self, void* sets[]);
void q_barseries_on_barsets_added(void* self, void (*slot)(void*, void*));
void q_barseries_barsets_removed(void* self, void* sets[]);
void q_barseries_on_barsets_removed(void* self, void (*slot)(void*, void*));
void q_barseries_set_labels_visible1(void* self, bool visible);
void q_barseries_set_name(void* self, const char* name);
const char* q_barseries_name(void* self);
void q_barseries_set_visible(void* self);
bool q_barseries_is_visible(void* self);
double q_barseries_opacity(void* self);
void q_barseries_set_opacity(void* self, double opacity);
void q_barseries_set_use_open_g_l(void* self);
bool q_barseries_use_open_g_l(void* self);
QChart* q_barseries_chart(void* self);
bool q_barseries_attach_axis(void* self, void* axis);
bool q_barseries_detach_axis(void* self, void* axis);
libqt_list /* of QAbstractAxis* */ q_barseries_attached_axes(void* self);
void q_barseries_show(void* self);
void q_barseries_hide(void* self);
void q_barseries_name_changed(void* self);
void q_barseries_on_name_changed(void* self, void (*slot)(void*));
void q_barseries_visible_changed(void* self);
void q_barseries_on_visible_changed(void* self, void (*slot)(void*));
void q_barseries_opacity_changed(void* self);
void q_barseries_on_opacity_changed(void* self, void (*slot)(void*));
void q_barseries_use_open_g_l_changed(void* self);
void q_barseries_on_use_open_g_l_changed(void* self, void (*slot)(void*));
void q_barseries_set_visible1(void* self, bool visible);
void q_barseries_set_use_open_g_l1(void* self, bool enable);
const char* q_barseries_object_name(void* self);
void q_barseries_set_object_name(void* self, const char* name);
bool q_barseries_is_widget_type(void* self);
bool q_barseries_is_window_type(void* self);
bool q_barseries_is_quick_item_type(void* self);
bool q_barseries_signals_blocked(void* self);
bool q_barseries_block_signals(void* self, bool b);
QThread* q_barseries_thread(void* self);
void q_barseries_move_to_thread(void* self, void* thread);
int32_t q_barseries_start_timer(void* self, int interval);
void q_barseries_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_barseries_children(void* self);
void q_barseries_set_parent(void* self, void* parent);
void q_barseries_install_event_filter(void* self, void* filterObj);
void q_barseries_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_barseries_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_barseries_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_barseries_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_barseries_disconnect_with_q_meta_object_connection(void* param1);
void q_barseries_dump_object_tree(void* self);
void q_barseries_dump_object_info(void* self);
bool q_barseries_set_property(void* self, const char* name, void* value);
QVariant* q_barseries_property(void* self, const char* name);
const char** q_barseries_dynamic_property_names(void* self);
QBindingStorage* q_barseries_binding_storage(void* self);
QBindingStorage* q_barseries_binding_storage2(void* self);
void q_barseries_destroyed(void* self);
void q_barseries_on_destroyed(void* self, void (*slot)(void*));
QObject* q_barseries_parent(void* self);
bool q_barseries_inherits(void* self, const char* classname);
void q_barseries_delete_later(void* self);
int32_t q_barseries_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_barseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_barseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_barseries_destroyed1(void* self, void* param1);
void q_barseries_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_barseries_event(void* self, void* event);
bool q_barseries_qbase_event(void* self, void* event);
void q_barseries_on_event(void* self, bool (*slot)(void*, void*));
bool q_barseries_event_filter(void* self, void* watched, void* event);
bool q_barseries_qbase_event_filter(void* self, void* watched, void* event);
void q_barseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_barseries_timer_event(void* self, void* event);
void q_barseries_qbase_timer_event(void* self, void* event);
void q_barseries_on_timer_event(void* self, void (*slot)(void*, void*));
void q_barseries_child_event(void* self, void* event);
void q_barseries_qbase_child_event(void* self, void* event);
void q_barseries_on_child_event(void* self, void (*slot)(void*, void*));
void q_barseries_custom_event(void* self, void* event);
void q_barseries_qbase_custom_event(void* self, void* event);
void q_barseries_on_custom_event(void* self, void (*slot)(void*, void*));
void q_barseries_connect_notify(void* self, void* signal);
void q_barseries_qbase_connect_notify(void* self, void* signal);
void q_barseries_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_barseries_disconnect_notify(void* self, void* signal);
void q_barseries_qbase_disconnect_notify(void* self, void* signal);
void q_barseries_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_barseries_sender(void* self);
QObject* q_barseries_qbase_sender(void* self);
void q_barseries_on_sender(void* self, QObject* (*slot)());
int32_t q_barseries_sender_signal_index(void* self);
int32_t q_barseries_qbase_sender_signal_index(void* self);
void q_barseries_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_barseries_receivers(void* self, const char* signal);
int32_t q_barseries_qbase_receivers(void* self, const char* signal);
void q_barseries_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_barseries_is_signal_connected(void* self, void* signal);
bool q_barseries_qbase_is_signal_connected(void* self, void* signal);
void q_barseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_barseries_delete(void* self);

#endif
