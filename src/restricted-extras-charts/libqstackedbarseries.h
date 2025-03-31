#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQSTACKEDBARSERIES_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQSTACKEDBARSERIES_H

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

QStackedBarSeries* q_stackedbarseries_new();
QStackedBarSeries* q_stackedbarseries_new2(void* parent);
QMetaObject* q_stackedbarseries_meta_object(void* self);
void* q_stackedbarseries_metacast(void* self, const char* param1);
int32_t q_stackedbarseries_metacall(void* self, int64_t param1, int param2, void* param3);
void q_stackedbarseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_stackedbarseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_stackedbarseries_tr(const char* s);
int64_t q_stackedbarseries_type(void* self);
void q_stackedbarseries_on_type(void* self, int64_t (*slot)());
int64_t q_stackedbarseries_qbase_type(void* self);
const char* q_stackedbarseries_tr2(const char* s, const char* c);
const char* q_stackedbarseries_tr3(const char* s, const char* c, int n);
void q_stackedbarseries_set_bar_width(void* self, double width);
double q_stackedbarseries_bar_width(void* self);
bool q_stackedbarseries_append(void* self, void* set);
bool q_stackedbarseries_remove(void* self, void* set);
bool q_stackedbarseries_take(void* self, void* set);
bool q_stackedbarseries_append_with_sets(void* self, void* sets[]);
bool q_stackedbarseries_insert(void* self, int index, void* set);
int32_t q_stackedbarseries_count(void* self);
libqt_list /* of QBarSet* */ q_stackedbarseries_bar_sets(void* self);
void q_stackedbarseries_clear(void* self);
void q_stackedbarseries_set_labels_visible(void* self);
bool q_stackedbarseries_is_labels_visible(void* self);
void q_stackedbarseries_set_labels_format(void* self, const char* format);
const char* q_stackedbarseries_labels_format(void* self);
void q_stackedbarseries_set_labels_angle(void* self, double angle);
double q_stackedbarseries_labels_angle(void* self);
void q_stackedbarseries_set_labels_position(void* self, int64_t position);
int64_t q_stackedbarseries_labels_position(void* self);
void q_stackedbarseries_set_labels_precision(void* self, int precision);
int32_t q_stackedbarseries_labels_precision(void* self);
void q_stackedbarseries_clicked(void* self, int index, void* barset);
void q_stackedbarseries_on_clicked(void* self, void (*slot)(void*, int, void*));
void q_stackedbarseries_hovered(void* self, bool status, int index, void* barset);
void q_stackedbarseries_on_hovered(void* self, void (*slot)(void*, bool, int, void*));
void q_stackedbarseries_pressed(void* self, int index, void* barset);
void q_stackedbarseries_on_pressed(void* self, void (*slot)(void*, int, void*));
void q_stackedbarseries_released(void* self, int index, void* barset);
void q_stackedbarseries_on_released(void* self, void (*slot)(void*, int, void*));
void q_stackedbarseries_double_clicked(void* self, int index, void* barset);
void q_stackedbarseries_on_double_clicked(void* self, void (*slot)(void*, int, void*));
void q_stackedbarseries_count_changed(void* self);
void q_stackedbarseries_on_count_changed(void* self, void (*slot)(void*));
void q_stackedbarseries_labels_visible_changed(void* self);
void q_stackedbarseries_on_labels_visible_changed(void* self, void (*slot)(void*));
void q_stackedbarseries_labels_format_changed(void* self, const char* format);
void q_stackedbarseries_on_labels_format_changed(void* self, void (*slot)(void*, const char*));
void q_stackedbarseries_labels_position_changed(void* self, int64_t position);
void q_stackedbarseries_on_labels_position_changed(void* self, void (*slot)(void*, int64_t));
void q_stackedbarseries_labels_angle_changed(void* self, double angle);
void q_stackedbarseries_on_labels_angle_changed(void* self, void (*slot)(void*, double));
void q_stackedbarseries_labels_precision_changed(void* self, int precision);
void q_stackedbarseries_on_labels_precision_changed(void* self, void (*slot)(void*, int));
void q_stackedbarseries_barsets_added(void* self, void* sets[]);
void q_stackedbarseries_on_barsets_added(void* self, void (*slot)(void*, void*));
void q_stackedbarseries_barsets_removed(void* self, void* sets[]);
void q_stackedbarseries_on_barsets_removed(void* self, void (*slot)(void*, void*));
void q_stackedbarseries_set_labels_visible1(void* self, bool visible);
void q_stackedbarseries_set_name(void* self, const char* name);
const char* q_stackedbarseries_name(void* self);
void q_stackedbarseries_set_visible(void* self);
bool q_stackedbarseries_is_visible(void* self);
double q_stackedbarseries_opacity(void* self);
void q_stackedbarseries_set_opacity(void* self, double opacity);
void q_stackedbarseries_set_use_open_g_l(void* self);
bool q_stackedbarseries_use_open_g_l(void* self);
QChart* q_stackedbarseries_chart(void* self);
bool q_stackedbarseries_attach_axis(void* self, void* axis);
bool q_stackedbarseries_detach_axis(void* self, void* axis);
libqt_list /* of QAbstractAxis* */ q_stackedbarseries_attached_axes(void* self);
void q_stackedbarseries_show(void* self);
void q_stackedbarseries_hide(void* self);
void q_stackedbarseries_name_changed(void* self);
void q_stackedbarseries_on_name_changed(void* self, void (*slot)(void*));
void q_stackedbarseries_visible_changed(void* self);
void q_stackedbarseries_on_visible_changed(void* self, void (*slot)(void*));
void q_stackedbarseries_opacity_changed(void* self);
void q_stackedbarseries_on_opacity_changed(void* self, void (*slot)(void*));
void q_stackedbarseries_use_open_g_l_changed(void* self);
void q_stackedbarseries_on_use_open_g_l_changed(void* self, void (*slot)(void*));
void q_stackedbarseries_set_visible1(void* self, bool visible);
void q_stackedbarseries_set_use_open_g_l1(void* self, bool enable);
const char* q_stackedbarseries_object_name(void* self);
void q_stackedbarseries_set_object_name(void* self, const char* name);
bool q_stackedbarseries_is_widget_type(void* self);
bool q_stackedbarseries_is_window_type(void* self);
bool q_stackedbarseries_is_quick_item_type(void* self);
bool q_stackedbarseries_signals_blocked(void* self);
bool q_stackedbarseries_block_signals(void* self, bool b);
QThread* q_stackedbarseries_thread(void* self);
void q_stackedbarseries_move_to_thread(void* self, void* thread);
int32_t q_stackedbarseries_start_timer(void* self, int interval);
void q_stackedbarseries_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_stackedbarseries_children(void* self);
void q_stackedbarseries_set_parent(void* self, void* parent);
void q_stackedbarseries_install_event_filter(void* self, void* filterObj);
void q_stackedbarseries_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_stackedbarseries_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_stackedbarseries_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_stackedbarseries_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_stackedbarseries_disconnect_with_q_meta_object_connection(void* param1);
void q_stackedbarseries_dump_object_tree(void* self);
void q_stackedbarseries_dump_object_info(void* self);
bool q_stackedbarseries_set_property(void* self, const char* name, void* value);
QVariant* q_stackedbarseries_property(void* self, const char* name);
const char** q_stackedbarseries_dynamic_property_names(void* self);
QBindingStorage* q_stackedbarseries_binding_storage(void* self);
QBindingStorage* q_stackedbarseries_binding_storage2(void* self);
void q_stackedbarseries_destroyed(void* self);
void q_stackedbarseries_on_destroyed(void* self, void (*slot)(void*));
QObject* q_stackedbarseries_parent(void* self);
bool q_stackedbarseries_inherits(void* self, const char* classname);
void q_stackedbarseries_delete_later(void* self);
int32_t q_stackedbarseries_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_stackedbarseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_stackedbarseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_stackedbarseries_destroyed1(void* self, void* param1);
void q_stackedbarseries_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_stackedbarseries_event(void* self, void* event);
bool q_stackedbarseries_qbase_event(void* self, void* event);
void q_stackedbarseries_on_event(void* self, bool (*slot)(void*, void*));
bool q_stackedbarseries_event_filter(void* self, void* watched, void* event);
bool q_stackedbarseries_qbase_event_filter(void* self, void* watched, void* event);
void q_stackedbarseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_stackedbarseries_timer_event(void* self, void* event);
void q_stackedbarseries_qbase_timer_event(void* self, void* event);
void q_stackedbarseries_on_timer_event(void* self, void (*slot)(void*, void*));
void q_stackedbarseries_child_event(void* self, void* event);
void q_stackedbarseries_qbase_child_event(void* self, void* event);
void q_stackedbarseries_on_child_event(void* self, void (*slot)(void*, void*));
void q_stackedbarseries_custom_event(void* self, void* event);
void q_stackedbarseries_qbase_custom_event(void* self, void* event);
void q_stackedbarseries_on_custom_event(void* self, void (*slot)(void*, void*));
void q_stackedbarseries_connect_notify(void* self, void* signal);
void q_stackedbarseries_qbase_connect_notify(void* self, void* signal);
void q_stackedbarseries_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_stackedbarseries_disconnect_notify(void* self, void* signal);
void q_stackedbarseries_qbase_disconnect_notify(void* self, void* signal);
void q_stackedbarseries_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_stackedbarseries_sender(void* self);
QObject* q_stackedbarseries_qbase_sender(void* self);
void q_stackedbarseries_on_sender(void* self, QObject* (*slot)());
int32_t q_stackedbarseries_sender_signal_index(void* self);
int32_t q_stackedbarseries_qbase_sender_signal_index(void* self);
void q_stackedbarseries_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_stackedbarseries_receivers(void* self, const char* signal);
int32_t q_stackedbarseries_qbase_receivers(void* self, const char* signal);
void q_stackedbarseries_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_stackedbarseries_is_signal_connected(void* self, void* signal);
bool q_stackedbarseries_qbase_is_signal_connected(void* self, void* signal);
void q_stackedbarseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_stackedbarseries_delete(void* self);

#endif
