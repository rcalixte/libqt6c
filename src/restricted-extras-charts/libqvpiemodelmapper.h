#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQVPIEMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQVPIEMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqabstractitemmodel.h"
#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "libqpiemodelmapper.h"
#include "libqpieseries.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QVPieModelMapper* q_vpiemodelmapper_new();
QVPieModelMapper* q_vpiemodelmapper_new2(void* parent);
QMetaObject* q_vpiemodelmapper_meta_object(void* self);
void* q_vpiemodelmapper_metacast(void* self, const char* param1);
int32_t q_vpiemodelmapper_metacall(void* self, int64_t param1, int param2, void* param3);
void q_vpiemodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_vpiemodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_vpiemodelmapper_tr(const char* s);
QAbstractItemModel* q_vpiemodelmapper_model(void* self);
void q_vpiemodelmapper_set_model(void* self, void* model);
QPieSeries* q_vpiemodelmapper_series(void* self);
void q_vpiemodelmapper_set_series(void* self, void* series);
int32_t q_vpiemodelmapper_values_column(void* self);
void q_vpiemodelmapper_set_values_column(void* self, int valuesColumn);
int32_t q_vpiemodelmapper_labels_column(void* self);
void q_vpiemodelmapper_set_labels_column(void* self, int labelsColumn);
int32_t q_vpiemodelmapper_first_row(void* self);
void q_vpiemodelmapper_set_first_row(void* self, int firstRow);
int32_t q_vpiemodelmapper_row_count(void* self);
void q_vpiemodelmapper_set_row_count(void* self, int rowCount);
void q_vpiemodelmapper_series_replaced(void* self);
void q_vpiemodelmapper_on_series_replaced(void* self, void (*slot)(void*));
void q_vpiemodelmapper_model_replaced(void* self);
void q_vpiemodelmapper_on_model_replaced(void* self, void (*slot)(void*));
void q_vpiemodelmapper_values_column_changed(void* self);
void q_vpiemodelmapper_on_values_column_changed(void* self, void (*slot)(void*));
void q_vpiemodelmapper_labels_column_changed(void* self);
void q_vpiemodelmapper_on_labels_column_changed(void* self, void (*slot)(void*));
void q_vpiemodelmapper_first_row_changed(void* self);
void q_vpiemodelmapper_on_first_row_changed(void* self, void (*slot)(void*));
void q_vpiemodelmapper_row_count_changed(void* self);
void q_vpiemodelmapper_on_row_count_changed(void* self, void (*slot)(void*));
const char* q_vpiemodelmapper_tr2(const char* s, const char* c);
const char* q_vpiemodelmapper_tr3(const char* s, const char* c, int n);
const char* q_vpiemodelmapper_object_name(void* self);
void q_vpiemodelmapper_set_object_name(void* self, const char* name);
bool q_vpiemodelmapper_is_widget_type(void* self);
bool q_vpiemodelmapper_is_window_type(void* self);
bool q_vpiemodelmapper_is_quick_item_type(void* self);
bool q_vpiemodelmapper_signals_blocked(void* self);
bool q_vpiemodelmapper_block_signals(void* self, bool b);
QThread* q_vpiemodelmapper_thread(void* self);
void q_vpiemodelmapper_move_to_thread(void* self, void* thread);
int32_t q_vpiemodelmapper_start_timer(void* self, int interval);
void q_vpiemodelmapper_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_vpiemodelmapper_children(void* self);
void q_vpiemodelmapper_set_parent(void* self, void* parent);
void q_vpiemodelmapper_install_event_filter(void* self, void* filterObj);
void q_vpiemodelmapper_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_vpiemodelmapper_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_vpiemodelmapper_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_vpiemodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_vpiemodelmapper_disconnect_with_q_meta_object_connection(void* param1);
void q_vpiemodelmapper_dump_object_tree(void* self);
void q_vpiemodelmapper_dump_object_info(void* self);
bool q_vpiemodelmapper_set_property(void* self, const char* name, void* value);
QVariant* q_vpiemodelmapper_property(void* self, const char* name);
const char** q_vpiemodelmapper_dynamic_property_names(void* self);
QBindingStorage* q_vpiemodelmapper_binding_storage(void* self);
QBindingStorage* q_vpiemodelmapper_binding_storage2(void* self);
void q_vpiemodelmapper_destroyed(void* self);
void q_vpiemodelmapper_on_destroyed(void* self, void (*slot)(void*));
QObject* q_vpiemodelmapper_parent(void* self);
bool q_vpiemodelmapper_inherits(void* self, const char* classname);
void q_vpiemodelmapper_delete_later(void* self);
int32_t q_vpiemodelmapper_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_vpiemodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_vpiemodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_vpiemodelmapper_destroyed1(void* self, void* param1);
void q_vpiemodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_vpiemodelmapper_event(void* self, void* event);
bool q_vpiemodelmapper_qbase_event(void* self, void* event);
void q_vpiemodelmapper_on_event(void* self, bool (*slot)(void*, void*));
bool q_vpiemodelmapper_event_filter(void* self, void* watched, void* event);
bool q_vpiemodelmapper_qbase_event_filter(void* self, void* watched, void* event);
void q_vpiemodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_vpiemodelmapper_timer_event(void* self, void* event);
void q_vpiemodelmapper_qbase_timer_event(void* self, void* event);
void q_vpiemodelmapper_on_timer_event(void* self, void (*slot)(void*, void*));
void q_vpiemodelmapper_child_event(void* self, void* event);
void q_vpiemodelmapper_qbase_child_event(void* self, void* event);
void q_vpiemodelmapper_on_child_event(void* self, void (*slot)(void*, void*));
void q_vpiemodelmapper_custom_event(void* self, void* event);
void q_vpiemodelmapper_qbase_custom_event(void* self, void* event);
void q_vpiemodelmapper_on_custom_event(void* self, void (*slot)(void*, void*));
void q_vpiemodelmapper_connect_notify(void* self, void* signal);
void q_vpiemodelmapper_qbase_connect_notify(void* self, void* signal);
void q_vpiemodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_vpiemodelmapper_disconnect_notify(void* self, void* signal);
void q_vpiemodelmapper_qbase_disconnect_notify(void* self, void* signal);
void q_vpiemodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*));
int32_t q_vpiemodelmapper_first(void* self);
int32_t q_vpiemodelmapper_qbase_first(void* self);
void q_vpiemodelmapper_on_first(void* self, int32_t (*slot)());
void q_vpiemodelmapper_set_first(void* self, int first);
void q_vpiemodelmapper_qbase_set_first(void* self, int first);
void q_vpiemodelmapper_on_set_first(void* self, void (*slot)(void*, int));
int32_t q_vpiemodelmapper_count(void* self);
int32_t q_vpiemodelmapper_qbase_count(void* self);
void q_vpiemodelmapper_on_count(void* self, int32_t (*slot)());
void q_vpiemodelmapper_set_count(void* self, int count);
void q_vpiemodelmapper_qbase_set_count(void* self, int count);
void q_vpiemodelmapper_on_set_count(void* self, void (*slot)(void*, int));
int32_t q_vpiemodelmapper_values_section(void* self);
int32_t q_vpiemodelmapper_qbase_values_section(void* self);
void q_vpiemodelmapper_on_values_section(void* self, int32_t (*slot)());
void q_vpiemodelmapper_set_values_section(void* self, int valuesSection);
void q_vpiemodelmapper_qbase_set_values_section(void* self, int valuesSection);
void q_vpiemodelmapper_on_set_values_section(void* self, void (*slot)(void*, int));
int32_t q_vpiemodelmapper_labels_section(void* self);
int32_t q_vpiemodelmapper_qbase_labels_section(void* self);
void q_vpiemodelmapper_on_labels_section(void* self, int32_t (*slot)());
void q_vpiemodelmapper_set_labels_section(void* self, int labelsSection);
void q_vpiemodelmapper_qbase_set_labels_section(void* self, int labelsSection);
void q_vpiemodelmapper_on_set_labels_section(void* self, void (*slot)(void*, int));
int64_t q_vpiemodelmapper_orientation(void* self);
int64_t q_vpiemodelmapper_qbase_orientation(void* self);
void q_vpiemodelmapper_on_orientation(void* self, int64_t (*slot)());
void q_vpiemodelmapper_set_orientation(void* self, int64_t orientation);
void q_vpiemodelmapper_qbase_set_orientation(void* self, int64_t orientation);
void q_vpiemodelmapper_on_set_orientation(void* self, void (*slot)(void*, int64_t));
QObject* q_vpiemodelmapper_sender(void* self);
QObject* q_vpiemodelmapper_qbase_sender(void* self);
void q_vpiemodelmapper_on_sender(void* self, QObject* (*slot)());
int32_t q_vpiemodelmapper_sender_signal_index(void* self);
int32_t q_vpiemodelmapper_qbase_sender_signal_index(void* self);
void q_vpiemodelmapper_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_vpiemodelmapper_receivers(void* self, const char* signal);
int32_t q_vpiemodelmapper_qbase_receivers(void* self, const char* signal);
void q_vpiemodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_vpiemodelmapper_is_signal_connected(void* self, void* signal);
bool q_vpiemodelmapper_qbase_is_signal_connected(void* self, void* signal);
void q_vpiemodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_vpiemodelmapper_delete(void* self);

#endif
