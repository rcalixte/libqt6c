#pragma once
#ifndef SRC_CHARTSQT6C_LIBQVCANDLESTICKMODELMAPPER_H
#define SRC_CHARTSQT6C_LIBQVCANDLESTICKMODELMAPPER_H

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

QVCandlestickModelMapper* q_vcandlestickmodelmapper_new();
QVCandlestickModelMapper* q_vcandlestickmodelmapper_new2(void* parent);
QMetaObject* q_vcandlestickmodelmapper_meta_object(void* self);
void* q_vcandlestickmodelmapper_metacast(void* self, const char* param1);
int32_t q_vcandlestickmodelmapper_metacall(void* self, int64_t param1, int param2, void* param3);
void q_vcandlestickmodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_vcandlestickmodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_vcandlestickmodelmapper_tr(const char* s);
int64_t q_vcandlestickmodelmapper_orientation(void* self);
void q_vcandlestickmodelmapper_on_orientation(void* self, int64_t (*slot)());
int64_t q_vcandlestickmodelmapper_qbase_orientation(void* self);
void q_vcandlestickmodelmapper_set_timestamp_row(void* self, int timestampRow);
int32_t q_vcandlestickmodelmapper_timestamp_row(void* self);
void q_vcandlestickmodelmapper_set_open_row(void* self, int openRow);
int32_t q_vcandlestickmodelmapper_open_row(void* self);
void q_vcandlestickmodelmapper_set_high_row(void* self, int highRow);
int32_t q_vcandlestickmodelmapper_high_row(void* self);
void q_vcandlestickmodelmapper_set_low_row(void* self, int lowRow);
int32_t q_vcandlestickmodelmapper_low_row(void* self);
void q_vcandlestickmodelmapper_set_close_row(void* self, int closeRow);
int32_t q_vcandlestickmodelmapper_close_row(void* self);
void q_vcandlestickmodelmapper_set_first_set_column(void* self, int firstSetColumn);
int32_t q_vcandlestickmodelmapper_first_set_column(void* self);
void q_vcandlestickmodelmapper_set_last_set_column(void* self, int lastSetColumn);
int32_t q_vcandlestickmodelmapper_last_set_column(void* self);
void q_vcandlestickmodelmapper_timestamp_row_changed(void* self);
void q_vcandlestickmodelmapper_on_timestamp_row_changed(void* self, void (*slot)(void*));
void q_vcandlestickmodelmapper_open_row_changed(void* self);
void q_vcandlestickmodelmapper_on_open_row_changed(void* self, void (*slot)(void*));
void q_vcandlestickmodelmapper_high_row_changed(void* self);
void q_vcandlestickmodelmapper_on_high_row_changed(void* self, void (*slot)(void*));
void q_vcandlestickmodelmapper_low_row_changed(void* self);
void q_vcandlestickmodelmapper_on_low_row_changed(void* self, void (*slot)(void*));
void q_vcandlestickmodelmapper_close_row_changed(void* self);
void q_vcandlestickmodelmapper_on_close_row_changed(void* self, void (*slot)(void*));
void q_vcandlestickmodelmapper_first_set_column_changed(void* self);
void q_vcandlestickmodelmapper_on_first_set_column_changed(void* self, void (*slot)(void*));
void q_vcandlestickmodelmapper_last_set_column_changed(void* self);
void q_vcandlestickmodelmapper_on_last_set_column_changed(void* self, void (*slot)(void*));
const char* q_vcandlestickmodelmapper_tr2(const char* s, const char* c);
const char* q_vcandlestickmodelmapper_tr3(const char* s, const char* c, int n);
void q_vcandlestickmodelmapper_set_model(void* self, void* model);
QAbstractItemModel* q_vcandlestickmodelmapper_model(void* self);
void q_vcandlestickmodelmapper_set_series(void* self, void* series);
QCandlestickSeries* q_vcandlestickmodelmapper_series(void* self);
void q_vcandlestickmodelmapper_model_replaced(void* self);
void q_vcandlestickmodelmapper_on_model_replaced(void* self, void (*slot)(void*));
void q_vcandlestickmodelmapper_series_replaced(void* self);
void q_vcandlestickmodelmapper_on_series_replaced(void* self, void (*slot)(void*));
const char* q_vcandlestickmodelmapper_object_name(void* self);
void q_vcandlestickmodelmapper_set_object_name(void* self, const char* name);
bool q_vcandlestickmodelmapper_is_widget_type(void* self);
bool q_vcandlestickmodelmapper_is_window_type(void* self);
bool q_vcandlestickmodelmapper_is_quick_item_type(void* self);
bool q_vcandlestickmodelmapper_signals_blocked(void* self);
bool q_vcandlestickmodelmapper_block_signals(void* self, bool b);
QThread* q_vcandlestickmodelmapper_thread(void* self);
void q_vcandlestickmodelmapper_move_to_thread(void* self, void* thread);
int32_t q_vcandlestickmodelmapper_start_timer(void* self, int interval);
void q_vcandlestickmodelmapper_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_vcandlestickmodelmapper_children(void* self);
void q_vcandlestickmodelmapper_set_parent(void* self, void* parent);
void q_vcandlestickmodelmapper_install_event_filter(void* self, void* filterObj);
void q_vcandlestickmodelmapper_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_vcandlestickmodelmapper_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_vcandlestickmodelmapper_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_vcandlestickmodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_vcandlestickmodelmapper_disconnect_with_q_meta_object_connection(void* param1);
void q_vcandlestickmodelmapper_dump_object_tree(void* self);
void q_vcandlestickmodelmapper_dump_object_info(void* self);
bool q_vcandlestickmodelmapper_set_property(void* self, const char* name, void* value);
QVariant* q_vcandlestickmodelmapper_property(void* self, const char* name);
const char** q_vcandlestickmodelmapper_dynamic_property_names(void* self);
QBindingStorage* q_vcandlestickmodelmapper_binding_storage(void* self);
QBindingStorage* q_vcandlestickmodelmapper_binding_storage2(void* self);
void q_vcandlestickmodelmapper_destroyed(void* self);
void q_vcandlestickmodelmapper_on_destroyed(void* self, void (*slot)(void*));
QObject* q_vcandlestickmodelmapper_parent(void* self);
bool q_vcandlestickmodelmapper_inherits(void* self, const char* classname);
void q_vcandlestickmodelmapper_delete_later(void* self);
int32_t q_vcandlestickmodelmapper_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_vcandlestickmodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_vcandlestickmodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_vcandlestickmodelmapper_destroyed1(void* self, void* param1);
void q_vcandlestickmodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_vcandlestickmodelmapper_event(void* self, void* event);
bool q_vcandlestickmodelmapper_qbase_event(void* self, void* event);
void q_vcandlestickmodelmapper_on_event(void* self, bool (*slot)(void*, void*));
bool q_vcandlestickmodelmapper_event_filter(void* self, void* watched, void* event);
bool q_vcandlestickmodelmapper_qbase_event_filter(void* self, void* watched, void* event);
void q_vcandlestickmodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_vcandlestickmodelmapper_timer_event(void* self, void* event);
void q_vcandlestickmodelmapper_qbase_timer_event(void* self, void* event);
void q_vcandlestickmodelmapper_on_timer_event(void* self, void (*slot)(void*, void*));
void q_vcandlestickmodelmapper_child_event(void* self, void* event);
void q_vcandlestickmodelmapper_qbase_child_event(void* self, void* event);
void q_vcandlestickmodelmapper_on_child_event(void* self, void (*slot)(void*, void*));
void q_vcandlestickmodelmapper_custom_event(void* self, void* event);
void q_vcandlestickmodelmapper_qbase_custom_event(void* self, void* event);
void q_vcandlestickmodelmapper_on_custom_event(void* self, void (*slot)(void*, void*));
void q_vcandlestickmodelmapper_connect_notify(void* self, void* signal);
void q_vcandlestickmodelmapper_qbase_connect_notify(void* self, void* signal);
void q_vcandlestickmodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_vcandlestickmodelmapper_disconnect_notify(void* self, void* signal);
void q_vcandlestickmodelmapper_qbase_disconnect_notify(void* self, void* signal);
void q_vcandlestickmodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_vcandlestickmodelmapper_set_timestamp(void* self, int timestamp);
void q_vcandlestickmodelmapper_qbase_set_timestamp(void* self, int timestamp);
void q_vcandlestickmodelmapper_on_set_timestamp(void* self, void (*slot)(void*, int));
int32_t q_vcandlestickmodelmapper_timestamp(void* self);
int32_t q_vcandlestickmodelmapper_qbase_timestamp(void* self);
void q_vcandlestickmodelmapper_on_timestamp(void* self, int32_t (*slot)());
void q_vcandlestickmodelmapper_set_open(void* self, int open);
void q_vcandlestickmodelmapper_qbase_set_open(void* self, int open);
void q_vcandlestickmodelmapper_on_set_open(void* self, void (*slot)(void*, int));
int32_t q_vcandlestickmodelmapper_open(void* self);
int32_t q_vcandlestickmodelmapper_qbase_open(void* self);
void q_vcandlestickmodelmapper_on_open(void* self, int32_t (*slot)());
void q_vcandlestickmodelmapper_set_high(void* self, int high);
void q_vcandlestickmodelmapper_qbase_set_high(void* self, int high);
void q_vcandlestickmodelmapper_on_set_high(void* self, void (*slot)(void*, int));
int32_t q_vcandlestickmodelmapper_high(void* self);
int32_t q_vcandlestickmodelmapper_qbase_high(void* self);
void q_vcandlestickmodelmapper_on_high(void* self, int32_t (*slot)());
void q_vcandlestickmodelmapper_set_low(void* self, int low);
void q_vcandlestickmodelmapper_qbase_set_low(void* self, int low);
void q_vcandlestickmodelmapper_on_set_low(void* self, void (*slot)(void*, int));
int32_t q_vcandlestickmodelmapper_low(void* self);
int32_t q_vcandlestickmodelmapper_qbase_low(void* self);
void q_vcandlestickmodelmapper_on_low(void* self, int32_t (*slot)());
void q_vcandlestickmodelmapper_set_close(void* self, int close);
void q_vcandlestickmodelmapper_qbase_set_close(void* self, int close);
void q_vcandlestickmodelmapper_on_set_close(void* self, void (*slot)(void*, int));
int32_t q_vcandlestickmodelmapper_close(void* self);
int32_t q_vcandlestickmodelmapper_qbase_close(void* self);
void q_vcandlestickmodelmapper_on_close(void* self, int32_t (*slot)());
void q_vcandlestickmodelmapper_set_first_set_section(void* self, int firstSetSection);
void q_vcandlestickmodelmapper_qbase_set_first_set_section(void* self, int firstSetSection);
void q_vcandlestickmodelmapper_on_set_first_set_section(void* self, void (*slot)(void*, int));
int32_t q_vcandlestickmodelmapper_first_set_section(void* self);
int32_t q_vcandlestickmodelmapper_qbase_first_set_section(void* self);
void q_vcandlestickmodelmapper_on_first_set_section(void* self, int32_t (*slot)());
void q_vcandlestickmodelmapper_set_last_set_section(void* self, int lastSetSection);
void q_vcandlestickmodelmapper_qbase_set_last_set_section(void* self, int lastSetSection);
void q_vcandlestickmodelmapper_on_set_last_set_section(void* self, void (*slot)(void*, int));
int32_t q_vcandlestickmodelmapper_last_set_section(void* self);
int32_t q_vcandlestickmodelmapper_qbase_last_set_section(void* self);
void q_vcandlestickmodelmapper_on_last_set_section(void* self, int32_t (*slot)());
QObject* q_vcandlestickmodelmapper_sender(void* self);
QObject* q_vcandlestickmodelmapper_qbase_sender(void* self);
void q_vcandlestickmodelmapper_on_sender(void* self, QObject* (*slot)());
int32_t q_vcandlestickmodelmapper_sender_signal_index(void* self);
int32_t q_vcandlestickmodelmapper_qbase_sender_signal_index(void* self);
void q_vcandlestickmodelmapper_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_vcandlestickmodelmapper_receivers(void* self, const char* signal);
int32_t q_vcandlestickmodelmapper_qbase_receivers(void* self, const char* signal);
void q_vcandlestickmodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_vcandlestickmodelmapper_is_signal_connected(void* self, void* signal);
bool q_vcandlestickmodelmapper_qbase_is_signal_connected(void* self, void* signal);
void q_vcandlestickmodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_vcandlestickmodelmapper_delete(void* self);

#endif
