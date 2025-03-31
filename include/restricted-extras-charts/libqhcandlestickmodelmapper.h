#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQHCANDLESTICKMODELMAPPER_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQHCANDLESTICKMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqabstractitemmodel.h"
#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "libqcandlestickmodelmapper.h"
#include "libqcandlestickseries.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QHCandlestickModelMapper* q_hcandlestickmodelmapper_new();
QHCandlestickModelMapper* q_hcandlestickmodelmapper_new2(void* parent);
QMetaObject* q_hcandlestickmodelmapper_meta_object(void* self);
void* q_hcandlestickmodelmapper_metacast(void* self, const char* param1);
int32_t q_hcandlestickmodelmapper_metacall(void* self, int64_t param1, int param2, void* param3);
void q_hcandlestickmodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_hcandlestickmodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_hcandlestickmodelmapper_tr(const char* s);
int64_t q_hcandlestickmodelmapper_orientation(void* self);
void q_hcandlestickmodelmapper_on_orientation(void* self, int64_t (*slot)());
int64_t q_hcandlestickmodelmapper_qbase_orientation(void* self);
void q_hcandlestickmodelmapper_set_timestamp_column(void* self, int timestampColumn);
int32_t q_hcandlestickmodelmapper_timestamp_column(void* self);
void q_hcandlestickmodelmapper_set_open_column(void* self, int openColumn);
int32_t q_hcandlestickmodelmapper_open_column(void* self);
void q_hcandlestickmodelmapper_set_high_column(void* self, int highColumn);
int32_t q_hcandlestickmodelmapper_high_column(void* self);
void q_hcandlestickmodelmapper_set_low_column(void* self, int lowColumn);
int32_t q_hcandlestickmodelmapper_low_column(void* self);
void q_hcandlestickmodelmapper_set_close_column(void* self, int closeColumn);
int32_t q_hcandlestickmodelmapper_close_column(void* self);
void q_hcandlestickmodelmapper_set_first_set_row(void* self, int firstSetRow);
int32_t q_hcandlestickmodelmapper_first_set_row(void* self);
void q_hcandlestickmodelmapper_set_last_set_row(void* self, int lastSetRow);
int32_t q_hcandlestickmodelmapper_last_set_row(void* self);
void q_hcandlestickmodelmapper_timestamp_column_changed(void* self);
void q_hcandlestickmodelmapper_on_timestamp_column_changed(void* self, void (*slot)(void*));
void q_hcandlestickmodelmapper_open_column_changed(void* self);
void q_hcandlestickmodelmapper_on_open_column_changed(void* self, void (*slot)(void*));
void q_hcandlestickmodelmapper_high_column_changed(void* self);
void q_hcandlestickmodelmapper_on_high_column_changed(void* self, void (*slot)(void*));
void q_hcandlestickmodelmapper_low_column_changed(void* self);
void q_hcandlestickmodelmapper_on_low_column_changed(void* self, void (*slot)(void*));
void q_hcandlestickmodelmapper_close_column_changed(void* self);
void q_hcandlestickmodelmapper_on_close_column_changed(void* self, void (*slot)(void*));
void q_hcandlestickmodelmapper_first_set_row_changed(void* self);
void q_hcandlestickmodelmapper_on_first_set_row_changed(void* self, void (*slot)(void*));
void q_hcandlestickmodelmapper_last_set_row_changed(void* self);
void q_hcandlestickmodelmapper_on_last_set_row_changed(void* self, void (*slot)(void*));
const char* q_hcandlestickmodelmapper_tr2(const char* s, const char* c);
const char* q_hcandlestickmodelmapper_tr3(const char* s, const char* c, int n);
void q_hcandlestickmodelmapper_set_model(void* self, void* model);
QAbstractItemModel* q_hcandlestickmodelmapper_model(void* self);
void q_hcandlestickmodelmapper_set_series(void* self, void* series);
QCandlestickSeries* q_hcandlestickmodelmapper_series(void* self);
void q_hcandlestickmodelmapper_model_replaced(void* self);
void q_hcandlestickmodelmapper_on_model_replaced(void* self, void (*slot)(void*));
void q_hcandlestickmodelmapper_series_replaced(void* self);
void q_hcandlestickmodelmapper_on_series_replaced(void* self, void (*slot)(void*));
const char* q_hcandlestickmodelmapper_object_name(void* self);
void q_hcandlestickmodelmapper_set_object_name(void* self, const char* name);
bool q_hcandlestickmodelmapper_is_widget_type(void* self);
bool q_hcandlestickmodelmapper_is_window_type(void* self);
bool q_hcandlestickmodelmapper_is_quick_item_type(void* self);
bool q_hcandlestickmodelmapper_signals_blocked(void* self);
bool q_hcandlestickmodelmapper_block_signals(void* self, bool b);
QThread* q_hcandlestickmodelmapper_thread(void* self);
void q_hcandlestickmodelmapper_move_to_thread(void* self, void* thread);
int32_t q_hcandlestickmodelmapper_start_timer(void* self, int interval);
void q_hcandlestickmodelmapper_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_hcandlestickmodelmapper_children(void* self);
void q_hcandlestickmodelmapper_set_parent(void* self, void* parent);
void q_hcandlestickmodelmapper_install_event_filter(void* self, void* filterObj);
void q_hcandlestickmodelmapper_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_hcandlestickmodelmapper_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_hcandlestickmodelmapper_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_hcandlestickmodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_hcandlestickmodelmapper_disconnect_with_q_meta_object_connection(void* param1);
void q_hcandlestickmodelmapper_dump_object_tree(void* self);
void q_hcandlestickmodelmapper_dump_object_info(void* self);
bool q_hcandlestickmodelmapper_set_property(void* self, const char* name, void* value);
QVariant* q_hcandlestickmodelmapper_property(void* self, const char* name);
const char** q_hcandlestickmodelmapper_dynamic_property_names(void* self);
QBindingStorage* q_hcandlestickmodelmapper_binding_storage(void* self);
QBindingStorage* q_hcandlestickmodelmapper_binding_storage2(void* self);
void q_hcandlestickmodelmapper_destroyed(void* self);
void q_hcandlestickmodelmapper_on_destroyed(void* self, void (*slot)(void*));
QObject* q_hcandlestickmodelmapper_parent(void* self);
bool q_hcandlestickmodelmapper_inherits(void* self, const char* classname);
void q_hcandlestickmodelmapper_delete_later(void* self);
int32_t q_hcandlestickmodelmapper_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_hcandlestickmodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_hcandlestickmodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_hcandlestickmodelmapper_destroyed1(void* self, void* param1);
void q_hcandlestickmodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_hcandlestickmodelmapper_event(void* self, void* event);
bool q_hcandlestickmodelmapper_qbase_event(void* self, void* event);
void q_hcandlestickmodelmapper_on_event(void* self, bool (*slot)(void*, void*));
bool q_hcandlestickmodelmapper_event_filter(void* self, void* watched, void* event);
bool q_hcandlestickmodelmapper_qbase_event_filter(void* self, void* watched, void* event);
void q_hcandlestickmodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_hcandlestickmodelmapper_timer_event(void* self, void* event);
void q_hcandlestickmodelmapper_qbase_timer_event(void* self, void* event);
void q_hcandlestickmodelmapper_on_timer_event(void* self, void (*slot)(void*, void*));
void q_hcandlestickmodelmapper_child_event(void* self, void* event);
void q_hcandlestickmodelmapper_qbase_child_event(void* self, void* event);
void q_hcandlestickmodelmapper_on_child_event(void* self, void (*slot)(void*, void*));
void q_hcandlestickmodelmapper_custom_event(void* self, void* event);
void q_hcandlestickmodelmapper_qbase_custom_event(void* self, void* event);
void q_hcandlestickmodelmapper_on_custom_event(void* self, void (*slot)(void*, void*));
void q_hcandlestickmodelmapper_connect_notify(void* self, void* signal);
void q_hcandlestickmodelmapper_qbase_connect_notify(void* self, void* signal);
void q_hcandlestickmodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_hcandlestickmodelmapper_disconnect_notify(void* self, void* signal);
void q_hcandlestickmodelmapper_qbase_disconnect_notify(void* self, void* signal);
void q_hcandlestickmodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_hcandlestickmodelmapper_set_timestamp(void* self, int timestamp);
void q_hcandlestickmodelmapper_qbase_set_timestamp(void* self, int timestamp);
void q_hcandlestickmodelmapper_on_set_timestamp(void* self, void (*slot)(void*, int));
int32_t q_hcandlestickmodelmapper_timestamp(void* self);
int32_t q_hcandlestickmodelmapper_qbase_timestamp(void* self);
void q_hcandlestickmodelmapper_on_timestamp(void* self, int32_t (*slot)());
void q_hcandlestickmodelmapper_set_open(void* self, int open);
void q_hcandlestickmodelmapper_qbase_set_open(void* self, int open);
void q_hcandlestickmodelmapper_on_set_open(void* self, void (*slot)(void*, int));
int32_t q_hcandlestickmodelmapper_open(void* self);
int32_t q_hcandlestickmodelmapper_qbase_open(void* self);
void q_hcandlestickmodelmapper_on_open(void* self, int32_t (*slot)());
void q_hcandlestickmodelmapper_set_high(void* self, int high);
void q_hcandlestickmodelmapper_qbase_set_high(void* self, int high);
void q_hcandlestickmodelmapper_on_set_high(void* self, void (*slot)(void*, int));
int32_t q_hcandlestickmodelmapper_high(void* self);
int32_t q_hcandlestickmodelmapper_qbase_high(void* self);
void q_hcandlestickmodelmapper_on_high(void* self, int32_t (*slot)());
void q_hcandlestickmodelmapper_set_low(void* self, int low);
void q_hcandlestickmodelmapper_qbase_set_low(void* self, int low);
void q_hcandlestickmodelmapper_on_set_low(void* self, void (*slot)(void*, int));
int32_t q_hcandlestickmodelmapper_low(void* self);
int32_t q_hcandlestickmodelmapper_qbase_low(void* self);
void q_hcandlestickmodelmapper_on_low(void* self, int32_t (*slot)());
void q_hcandlestickmodelmapper_set_close(void* self, int close);
void q_hcandlestickmodelmapper_qbase_set_close(void* self, int close);
void q_hcandlestickmodelmapper_on_set_close(void* self, void (*slot)(void*, int));
int32_t q_hcandlestickmodelmapper_close(void* self);
int32_t q_hcandlestickmodelmapper_qbase_close(void* self);
void q_hcandlestickmodelmapper_on_close(void* self, int32_t (*slot)());
void q_hcandlestickmodelmapper_set_first_set_section(void* self, int firstSetSection);
void q_hcandlestickmodelmapper_qbase_set_first_set_section(void* self, int firstSetSection);
void q_hcandlestickmodelmapper_on_set_first_set_section(void* self, void (*slot)(void*, int));
int32_t q_hcandlestickmodelmapper_first_set_section(void* self);
int32_t q_hcandlestickmodelmapper_qbase_first_set_section(void* self);
void q_hcandlestickmodelmapper_on_first_set_section(void* self, int32_t (*slot)());
void q_hcandlestickmodelmapper_set_last_set_section(void* self, int lastSetSection);
void q_hcandlestickmodelmapper_qbase_set_last_set_section(void* self, int lastSetSection);
void q_hcandlestickmodelmapper_on_set_last_set_section(void* self, void (*slot)(void*, int));
int32_t q_hcandlestickmodelmapper_last_set_section(void* self);
int32_t q_hcandlestickmodelmapper_qbase_last_set_section(void* self);
void q_hcandlestickmodelmapper_on_last_set_section(void* self, int32_t (*slot)());
QObject* q_hcandlestickmodelmapper_sender(void* self);
QObject* q_hcandlestickmodelmapper_qbase_sender(void* self);
void q_hcandlestickmodelmapper_on_sender(void* self, QObject* (*slot)());
int32_t q_hcandlestickmodelmapper_sender_signal_index(void* self);
int32_t q_hcandlestickmodelmapper_qbase_sender_signal_index(void* self);
void q_hcandlestickmodelmapper_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_hcandlestickmodelmapper_receivers(void* self, const char* signal);
int32_t q_hcandlestickmodelmapper_qbase_receivers(void* self, const char* signal);
void q_hcandlestickmodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_hcandlestickmodelmapper_is_signal_connected(void* self, void* signal);
bool q_hcandlestickmodelmapper_qbase_is_signal_connected(void* self, void* signal);
void q_hcandlestickmodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_hcandlestickmodelmapper_delete(void* self);

#endif
