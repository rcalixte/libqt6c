#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQHPIEMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQHPIEMODELMAPPER_H

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

QHPieModelMapper* q_hpiemodelmapper_new();
QHPieModelMapper* q_hpiemodelmapper_new2(void* parent);
QMetaObject* q_hpiemodelmapper_meta_object(void* self);
void* q_hpiemodelmapper_metacast(void* self, const char* param1);
int32_t q_hpiemodelmapper_metacall(void* self, int64_t param1, int param2, void* param3);
void q_hpiemodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_hpiemodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_hpiemodelmapper_tr(const char* s);
QAbstractItemModel* q_hpiemodelmapper_model(void* self);
void q_hpiemodelmapper_set_model(void* self, void* model);
QPieSeries* q_hpiemodelmapper_series(void* self);
void q_hpiemodelmapper_set_series(void* self, void* series);
int32_t q_hpiemodelmapper_values_row(void* self);
void q_hpiemodelmapper_set_values_row(void* self, int valuesRow);
int32_t q_hpiemodelmapper_labels_row(void* self);
void q_hpiemodelmapper_set_labels_row(void* self, int labelsRow);
int32_t q_hpiemodelmapper_first_column(void* self);
void q_hpiemodelmapper_set_first_column(void* self, int firstColumn);
int32_t q_hpiemodelmapper_column_count(void* self);
void q_hpiemodelmapper_set_column_count(void* self, int columnCount);
void q_hpiemodelmapper_series_replaced(void* self);
void q_hpiemodelmapper_on_series_replaced(void* self, void (*slot)(void*));
void q_hpiemodelmapper_model_replaced(void* self);
void q_hpiemodelmapper_on_model_replaced(void* self, void (*slot)(void*));
void q_hpiemodelmapper_values_row_changed(void* self);
void q_hpiemodelmapper_on_values_row_changed(void* self, void (*slot)(void*));
void q_hpiemodelmapper_labels_row_changed(void* self);
void q_hpiemodelmapper_on_labels_row_changed(void* self, void (*slot)(void*));
void q_hpiemodelmapper_first_column_changed(void* self);
void q_hpiemodelmapper_on_first_column_changed(void* self, void (*slot)(void*));
void q_hpiemodelmapper_column_count_changed(void* self);
void q_hpiemodelmapper_on_column_count_changed(void* self, void (*slot)(void*));
const char* q_hpiemodelmapper_tr2(const char* s, const char* c);
const char* q_hpiemodelmapper_tr3(const char* s, const char* c, int n);
const char* q_hpiemodelmapper_object_name(void* self);
void q_hpiemodelmapper_set_object_name(void* self, const char* name);
bool q_hpiemodelmapper_is_widget_type(void* self);
bool q_hpiemodelmapper_is_window_type(void* self);
bool q_hpiemodelmapper_is_quick_item_type(void* self);
bool q_hpiemodelmapper_signals_blocked(void* self);
bool q_hpiemodelmapper_block_signals(void* self, bool b);
QThread* q_hpiemodelmapper_thread(void* self);
void q_hpiemodelmapper_move_to_thread(void* self, void* thread);
int32_t q_hpiemodelmapper_start_timer(void* self, int interval);
void q_hpiemodelmapper_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_hpiemodelmapper_children(void* self);
void q_hpiemodelmapper_set_parent(void* self, void* parent);
void q_hpiemodelmapper_install_event_filter(void* self, void* filterObj);
void q_hpiemodelmapper_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_hpiemodelmapper_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_hpiemodelmapper_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_hpiemodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_hpiemodelmapper_disconnect_with_q_meta_object_connection(void* param1);
void q_hpiemodelmapper_dump_object_tree(void* self);
void q_hpiemodelmapper_dump_object_info(void* self);
bool q_hpiemodelmapper_set_property(void* self, const char* name, void* value);
QVariant* q_hpiemodelmapper_property(void* self, const char* name);
const char** q_hpiemodelmapper_dynamic_property_names(void* self);
QBindingStorage* q_hpiemodelmapper_binding_storage(void* self);
QBindingStorage* q_hpiemodelmapper_binding_storage2(void* self);
void q_hpiemodelmapper_destroyed(void* self);
void q_hpiemodelmapper_on_destroyed(void* self, void (*slot)(void*));
QObject* q_hpiemodelmapper_parent(void* self);
bool q_hpiemodelmapper_inherits(void* self, const char* classname);
void q_hpiemodelmapper_delete_later(void* self);
int32_t q_hpiemodelmapper_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_hpiemodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_hpiemodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_hpiemodelmapper_destroyed1(void* self, void* param1);
void q_hpiemodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_hpiemodelmapper_event(void* self, void* event);
bool q_hpiemodelmapper_qbase_event(void* self, void* event);
void q_hpiemodelmapper_on_event(void* self, bool (*slot)(void*, void*));
bool q_hpiemodelmapper_event_filter(void* self, void* watched, void* event);
bool q_hpiemodelmapper_qbase_event_filter(void* self, void* watched, void* event);
void q_hpiemodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_hpiemodelmapper_timer_event(void* self, void* event);
void q_hpiemodelmapper_qbase_timer_event(void* self, void* event);
void q_hpiemodelmapper_on_timer_event(void* self, void (*slot)(void*, void*));
void q_hpiemodelmapper_child_event(void* self, void* event);
void q_hpiemodelmapper_qbase_child_event(void* self, void* event);
void q_hpiemodelmapper_on_child_event(void* self, void (*slot)(void*, void*));
void q_hpiemodelmapper_custom_event(void* self, void* event);
void q_hpiemodelmapper_qbase_custom_event(void* self, void* event);
void q_hpiemodelmapper_on_custom_event(void* self, void (*slot)(void*, void*));
void q_hpiemodelmapper_connect_notify(void* self, void* signal);
void q_hpiemodelmapper_qbase_connect_notify(void* self, void* signal);
void q_hpiemodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_hpiemodelmapper_disconnect_notify(void* self, void* signal);
void q_hpiemodelmapper_qbase_disconnect_notify(void* self, void* signal);
void q_hpiemodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*));
int32_t q_hpiemodelmapper_first(void* self);
int32_t q_hpiemodelmapper_qbase_first(void* self);
void q_hpiemodelmapper_on_first(void* self, int32_t (*slot)());
void q_hpiemodelmapper_set_first(void* self, int first);
void q_hpiemodelmapper_qbase_set_first(void* self, int first);
void q_hpiemodelmapper_on_set_first(void* self, void (*slot)(void*, int));
int32_t q_hpiemodelmapper_count(void* self);
int32_t q_hpiemodelmapper_qbase_count(void* self);
void q_hpiemodelmapper_on_count(void* self, int32_t (*slot)());
void q_hpiemodelmapper_set_count(void* self, int count);
void q_hpiemodelmapper_qbase_set_count(void* self, int count);
void q_hpiemodelmapper_on_set_count(void* self, void (*slot)(void*, int));
int32_t q_hpiemodelmapper_values_section(void* self);
int32_t q_hpiemodelmapper_qbase_values_section(void* self);
void q_hpiemodelmapper_on_values_section(void* self, int32_t (*slot)());
void q_hpiemodelmapper_set_values_section(void* self, int valuesSection);
void q_hpiemodelmapper_qbase_set_values_section(void* self, int valuesSection);
void q_hpiemodelmapper_on_set_values_section(void* self, void (*slot)(void*, int));
int32_t q_hpiemodelmapper_labels_section(void* self);
int32_t q_hpiemodelmapper_qbase_labels_section(void* self);
void q_hpiemodelmapper_on_labels_section(void* self, int32_t (*slot)());
void q_hpiemodelmapper_set_labels_section(void* self, int labelsSection);
void q_hpiemodelmapper_qbase_set_labels_section(void* self, int labelsSection);
void q_hpiemodelmapper_on_set_labels_section(void* self, void (*slot)(void*, int));
int64_t q_hpiemodelmapper_orientation(void* self);
int64_t q_hpiemodelmapper_qbase_orientation(void* self);
void q_hpiemodelmapper_on_orientation(void* self, int64_t (*slot)());
void q_hpiemodelmapper_set_orientation(void* self, int64_t orientation);
void q_hpiemodelmapper_qbase_set_orientation(void* self, int64_t orientation);
void q_hpiemodelmapper_on_set_orientation(void* self, void (*slot)(void*, int64_t));
QObject* q_hpiemodelmapper_sender(void* self);
QObject* q_hpiemodelmapper_qbase_sender(void* self);
void q_hpiemodelmapper_on_sender(void* self, QObject* (*slot)());
int32_t q_hpiemodelmapper_sender_signal_index(void* self);
int32_t q_hpiemodelmapper_qbase_sender_signal_index(void* self);
void q_hpiemodelmapper_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_hpiemodelmapper_receivers(void* self, const char* signal);
int32_t q_hpiemodelmapper_qbase_receivers(void* self, const char* signal);
void q_hpiemodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_hpiemodelmapper_is_signal_connected(void* self, void* signal);
bool q_hpiemodelmapper_qbase_is_signal_connected(void* self, void* signal);
void q_hpiemodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_hpiemodelmapper_delete(void* self);

#endif
