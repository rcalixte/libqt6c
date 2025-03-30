#pragma once
#ifndef SRC_CHARTSQT6C_LIBQHBOXPLOTMODELMAPPER_H
#define SRC_CHARTSQT6C_LIBQHBOXPLOTMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqabstractitemmodel.h"
#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "libqboxplotmodelmapper.h"
#include "libqboxplotseries.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QHBoxPlotModelMapper* q_hboxplotmodelmapper_new();
QHBoxPlotModelMapper* q_hboxplotmodelmapper_new2(void* parent);
QMetaObject* q_hboxplotmodelmapper_meta_object(void* self);
void* q_hboxplotmodelmapper_metacast(void* self, const char* param1);
int32_t q_hboxplotmodelmapper_metacall(void* self, int64_t param1, int param2, void* param3);
void q_hboxplotmodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_hboxplotmodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_hboxplotmodelmapper_tr(const char* s);
QAbstractItemModel* q_hboxplotmodelmapper_model(void* self);
void q_hboxplotmodelmapper_set_model(void* self, void* model);
QBoxPlotSeries* q_hboxplotmodelmapper_series(void* self);
void q_hboxplotmodelmapper_set_series(void* self, void* series);
int32_t q_hboxplotmodelmapper_first_box_set_row(void* self);
void q_hboxplotmodelmapper_set_first_box_set_row(void* self, int firstBoxSetRow);
int32_t q_hboxplotmodelmapper_last_box_set_row(void* self);
void q_hboxplotmodelmapper_set_last_box_set_row(void* self, int lastBoxSetRow);
int32_t q_hboxplotmodelmapper_first_column(void* self);
void q_hboxplotmodelmapper_set_first_column(void* self, int firstColumn);
int32_t q_hboxplotmodelmapper_column_count(void* self);
void q_hboxplotmodelmapper_set_column_count(void* self, int rowCount);
void q_hboxplotmodelmapper_series_replaced(void* self);
void q_hboxplotmodelmapper_on_series_replaced(void* self, void (*slot)(void*));
void q_hboxplotmodelmapper_model_replaced(void* self);
void q_hboxplotmodelmapper_on_model_replaced(void* self, void (*slot)(void*));
void q_hboxplotmodelmapper_first_box_set_row_changed(void* self);
void q_hboxplotmodelmapper_on_first_box_set_row_changed(void* self, void (*slot)(void*));
void q_hboxplotmodelmapper_last_box_set_row_changed(void* self);
void q_hboxplotmodelmapper_on_last_box_set_row_changed(void* self, void (*slot)(void*));
void q_hboxplotmodelmapper_first_column_changed(void* self);
void q_hboxplotmodelmapper_on_first_column_changed(void* self, void (*slot)(void*));
void q_hboxplotmodelmapper_column_count_changed(void* self);
void q_hboxplotmodelmapper_on_column_count_changed(void* self, void (*slot)(void*));
const char* q_hboxplotmodelmapper_tr2(const char* s, const char* c);
const char* q_hboxplotmodelmapper_tr3(const char* s, const char* c, int n);
const char* q_hboxplotmodelmapper_object_name(void* self);
void q_hboxplotmodelmapper_set_object_name(void* self, const char* name);
bool q_hboxplotmodelmapper_is_widget_type(void* self);
bool q_hboxplotmodelmapper_is_window_type(void* self);
bool q_hboxplotmodelmapper_is_quick_item_type(void* self);
bool q_hboxplotmodelmapper_signals_blocked(void* self);
bool q_hboxplotmodelmapper_block_signals(void* self, bool b);
QThread* q_hboxplotmodelmapper_thread(void* self);
void q_hboxplotmodelmapper_move_to_thread(void* self, void* thread);
int32_t q_hboxplotmodelmapper_start_timer(void* self, int interval);
void q_hboxplotmodelmapper_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_hboxplotmodelmapper_children(void* self);
void q_hboxplotmodelmapper_set_parent(void* self, void* parent);
void q_hboxplotmodelmapper_install_event_filter(void* self, void* filterObj);
void q_hboxplotmodelmapper_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_hboxplotmodelmapper_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_hboxplotmodelmapper_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_hboxplotmodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_hboxplotmodelmapper_disconnect_with_q_meta_object_connection(void* param1);
void q_hboxplotmodelmapper_dump_object_tree(void* self);
void q_hboxplotmodelmapper_dump_object_info(void* self);
bool q_hboxplotmodelmapper_set_property(void* self, const char* name, void* value);
QVariant* q_hboxplotmodelmapper_property(void* self, const char* name);
const char** q_hboxplotmodelmapper_dynamic_property_names(void* self);
QBindingStorage* q_hboxplotmodelmapper_binding_storage(void* self);
QBindingStorage* q_hboxplotmodelmapper_binding_storage2(void* self);
void q_hboxplotmodelmapper_destroyed(void* self);
void q_hboxplotmodelmapper_on_destroyed(void* self, void (*slot)(void*));
QObject* q_hboxplotmodelmapper_parent(void* self);
bool q_hboxplotmodelmapper_inherits(void* self, const char* classname);
void q_hboxplotmodelmapper_delete_later(void* self);
int32_t q_hboxplotmodelmapper_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_hboxplotmodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_hboxplotmodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_hboxplotmodelmapper_destroyed1(void* self, void* param1);
void q_hboxplotmodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_hboxplotmodelmapper_event(void* self, void* event);
bool q_hboxplotmodelmapper_qbase_event(void* self, void* event);
void q_hboxplotmodelmapper_on_event(void* self, bool (*slot)(void*, void*));
bool q_hboxplotmodelmapper_event_filter(void* self, void* watched, void* event);
bool q_hboxplotmodelmapper_qbase_event_filter(void* self, void* watched, void* event);
void q_hboxplotmodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_hboxplotmodelmapper_timer_event(void* self, void* event);
void q_hboxplotmodelmapper_qbase_timer_event(void* self, void* event);
void q_hboxplotmodelmapper_on_timer_event(void* self, void (*slot)(void*, void*));
void q_hboxplotmodelmapper_child_event(void* self, void* event);
void q_hboxplotmodelmapper_qbase_child_event(void* self, void* event);
void q_hboxplotmodelmapper_on_child_event(void* self, void (*slot)(void*, void*));
void q_hboxplotmodelmapper_custom_event(void* self, void* event);
void q_hboxplotmodelmapper_qbase_custom_event(void* self, void* event);
void q_hboxplotmodelmapper_on_custom_event(void* self, void (*slot)(void*, void*));
void q_hboxplotmodelmapper_connect_notify(void* self, void* signal);
void q_hboxplotmodelmapper_qbase_connect_notify(void* self, void* signal);
void q_hboxplotmodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_hboxplotmodelmapper_disconnect_notify(void* self, void* signal);
void q_hboxplotmodelmapper_qbase_disconnect_notify(void* self, void* signal);
void q_hboxplotmodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*));
int32_t q_hboxplotmodelmapper_first(void* self);
int32_t q_hboxplotmodelmapper_qbase_first(void* self);
void q_hboxplotmodelmapper_on_first(void* self, int32_t (*slot)());
void q_hboxplotmodelmapper_set_first(void* self, int first);
void q_hboxplotmodelmapper_qbase_set_first(void* self, int first);
void q_hboxplotmodelmapper_on_set_first(void* self, void (*slot)(void*, int));
int32_t q_hboxplotmodelmapper_count(void* self);
int32_t q_hboxplotmodelmapper_qbase_count(void* self);
void q_hboxplotmodelmapper_on_count(void* self, int32_t (*slot)());
void q_hboxplotmodelmapper_set_count(void* self, int count);
void q_hboxplotmodelmapper_qbase_set_count(void* self, int count);
void q_hboxplotmodelmapper_on_set_count(void* self, void (*slot)(void*, int));
int32_t q_hboxplotmodelmapper_first_box_set_section(void* self);
int32_t q_hboxplotmodelmapper_qbase_first_box_set_section(void* self);
void q_hboxplotmodelmapper_on_first_box_set_section(void* self, int32_t (*slot)());
void q_hboxplotmodelmapper_set_first_box_set_section(void* self, int firstBoxSetSection);
void q_hboxplotmodelmapper_qbase_set_first_box_set_section(void* self, int firstBoxSetSection);
void q_hboxplotmodelmapper_on_set_first_box_set_section(void* self, void (*slot)(void*, int));
int32_t q_hboxplotmodelmapper_last_box_set_section(void* self);
int32_t q_hboxplotmodelmapper_qbase_last_box_set_section(void* self);
void q_hboxplotmodelmapper_on_last_box_set_section(void* self, int32_t (*slot)());
void q_hboxplotmodelmapper_set_last_box_set_section(void* self, int lastBoxSetSection);
void q_hboxplotmodelmapper_qbase_set_last_box_set_section(void* self, int lastBoxSetSection);
void q_hboxplotmodelmapper_on_set_last_box_set_section(void* self, void (*slot)(void*, int));
int64_t q_hboxplotmodelmapper_orientation(void* self);
int64_t q_hboxplotmodelmapper_qbase_orientation(void* self);
void q_hboxplotmodelmapper_on_orientation(void* self, int64_t (*slot)());
void q_hboxplotmodelmapper_set_orientation(void* self, int64_t orientation);
void q_hboxplotmodelmapper_qbase_set_orientation(void* self, int64_t orientation);
void q_hboxplotmodelmapper_on_set_orientation(void* self, void (*slot)(void*, int64_t));
QObject* q_hboxplotmodelmapper_sender(void* self);
QObject* q_hboxplotmodelmapper_qbase_sender(void* self);
void q_hboxplotmodelmapper_on_sender(void* self, QObject* (*slot)());
int32_t q_hboxplotmodelmapper_sender_signal_index(void* self);
int32_t q_hboxplotmodelmapper_qbase_sender_signal_index(void* self);
void q_hboxplotmodelmapper_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_hboxplotmodelmapper_receivers(void* self, const char* signal);
int32_t q_hboxplotmodelmapper_qbase_receivers(void* self, const char* signal);
void q_hboxplotmodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_hboxplotmodelmapper_is_signal_connected(void* self, void* signal);
bool q_hboxplotmodelmapper_qbase_is_signal_connected(void* self, void* signal);
void q_hboxplotmodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_hboxplotmodelmapper_delete(void* self);

#endif
