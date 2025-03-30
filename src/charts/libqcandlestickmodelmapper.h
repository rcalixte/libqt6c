#pragma once
#ifndef SRC_CHARTSQT6C_LIBQCANDLESTICKMODELMAPPER_H
#define SRC_CHARTSQT6C_LIBQCANDLESTICKMODELMAPPER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqabstractitemmodel.h"
#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "libqcandlestickseries.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QCandlestickModelMapper* q_candlestickmodelmapper_new();
QCandlestickModelMapper* q_candlestickmodelmapper_new2(void* parent);
QMetaObject* q_candlestickmodelmapper_meta_object(void* self);
void* q_candlestickmodelmapper_metacast(void* self, const char* param1);
int32_t q_candlestickmodelmapper_metacall(void* self, int64_t param1, int param2, void* param3);
void q_candlestickmodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_candlestickmodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_candlestickmodelmapper_tr(const char* s);
void q_candlestickmodelmapper_set_model(void* self, void* model);
QAbstractItemModel* q_candlestickmodelmapper_model(void* self);
void q_candlestickmodelmapper_set_series(void* self, void* series);
QCandlestickSeries* q_candlestickmodelmapper_series(void* self);
int64_t q_candlestickmodelmapper_orientation(void* self);
void q_candlestickmodelmapper_on_orientation(void* self, int64_t (*slot)());
int64_t q_candlestickmodelmapper_qbase_orientation(void* self);
void q_candlestickmodelmapper_model_replaced(void* self);
void q_candlestickmodelmapper_on_model_replaced(void* self, void (*slot)(void*));
void q_candlestickmodelmapper_series_replaced(void* self);
void q_candlestickmodelmapper_on_series_replaced(void* self, void (*slot)(void*));
void q_candlestickmodelmapper_set_timestamp(void* self, int timestamp);
void q_candlestickmodelmapper_on_set_timestamp(void* self, void (*slot)(void*, int));
void q_candlestickmodelmapper_qbase_set_timestamp(void* self, int timestamp);
int32_t q_candlestickmodelmapper_timestamp(void* self);
void q_candlestickmodelmapper_on_timestamp(void* self, int32_t (*slot)());
int32_t q_candlestickmodelmapper_qbase_timestamp(void* self);
void q_candlestickmodelmapper_set_open(void* self, int open);
void q_candlestickmodelmapper_on_set_open(void* self, void (*slot)(void*, int));
void q_candlestickmodelmapper_qbase_set_open(void* self, int open);
int32_t q_candlestickmodelmapper_open(void* self);
void q_candlestickmodelmapper_on_open(void* self, int32_t (*slot)());
int32_t q_candlestickmodelmapper_qbase_open(void* self);
void q_candlestickmodelmapper_set_high(void* self, int high);
void q_candlestickmodelmapper_on_set_high(void* self, void (*slot)(void*, int));
void q_candlestickmodelmapper_qbase_set_high(void* self, int high);
int32_t q_candlestickmodelmapper_high(void* self);
void q_candlestickmodelmapper_on_high(void* self, int32_t (*slot)());
int32_t q_candlestickmodelmapper_qbase_high(void* self);
void q_candlestickmodelmapper_set_low(void* self, int low);
void q_candlestickmodelmapper_on_set_low(void* self, void (*slot)(void*, int));
void q_candlestickmodelmapper_qbase_set_low(void* self, int low);
int32_t q_candlestickmodelmapper_low(void* self);
void q_candlestickmodelmapper_on_low(void* self, int32_t (*slot)());
int32_t q_candlestickmodelmapper_qbase_low(void* self);
void q_candlestickmodelmapper_set_close(void* self, int close);
void q_candlestickmodelmapper_on_set_close(void* self, void (*slot)(void*, int));
void q_candlestickmodelmapper_qbase_set_close(void* self, int close);
int32_t q_candlestickmodelmapper_close(void* self);
void q_candlestickmodelmapper_on_close(void* self, int32_t (*slot)());
int32_t q_candlestickmodelmapper_qbase_close(void* self);
void q_candlestickmodelmapper_set_first_set_section(void* self, int firstSetSection);
void q_candlestickmodelmapper_on_set_first_set_section(void* self, void (*slot)(void*, int));
void q_candlestickmodelmapper_qbase_set_first_set_section(void* self, int firstSetSection);
int32_t q_candlestickmodelmapper_first_set_section(void* self);
void q_candlestickmodelmapper_on_first_set_section(void* self, int32_t (*slot)());
int32_t q_candlestickmodelmapper_qbase_first_set_section(void* self);
void q_candlestickmodelmapper_set_last_set_section(void* self, int lastSetSection);
void q_candlestickmodelmapper_on_set_last_set_section(void* self, void (*slot)(void*, int));
void q_candlestickmodelmapper_qbase_set_last_set_section(void* self, int lastSetSection);
int32_t q_candlestickmodelmapper_last_set_section(void* self);
void q_candlestickmodelmapper_on_last_set_section(void* self, int32_t (*slot)());
int32_t q_candlestickmodelmapper_qbase_last_set_section(void* self);
const char* q_candlestickmodelmapper_tr2(const char* s, const char* c);
const char* q_candlestickmodelmapper_tr3(const char* s, const char* c, int n);
const char* q_candlestickmodelmapper_object_name(void* self);
void q_candlestickmodelmapper_set_object_name(void* self, const char* name);
bool q_candlestickmodelmapper_is_widget_type(void* self);
bool q_candlestickmodelmapper_is_window_type(void* self);
bool q_candlestickmodelmapper_is_quick_item_type(void* self);
bool q_candlestickmodelmapper_signals_blocked(void* self);
bool q_candlestickmodelmapper_block_signals(void* self, bool b);
QThread* q_candlestickmodelmapper_thread(void* self);
void q_candlestickmodelmapper_move_to_thread(void* self, void* thread);
int32_t q_candlestickmodelmapper_start_timer(void* self, int interval);
void q_candlestickmodelmapper_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_candlestickmodelmapper_children(void* self);
void q_candlestickmodelmapper_set_parent(void* self, void* parent);
void q_candlestickmodelmapper_install_event_filter(void* self, void* filterObj);
void q_candlestickmodelmapper_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_candlestickmodelmapper_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_candlestickmodelmapper_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_candlestickmodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_candlestickmodelmapper_disconnect_with_q_meta_object_connection(void* param1);
void q_candlestickmodelmapper_dump_object_tree(void* self);
void q_candlestickmodelmapper_dump_object_info(void* self);
bool q_candlestickmodelmapper_set_property(void* self, const char* name, void* value);
QVariant* q_candlestickmodelmapper_property(void* self, const char* name);
const char** q_candlestickmodelmapper_dynamic_property_names(void* self);
QBindingStorage* q_candlestickmodelmapper_binding_storage(void* self);
QBindingStorage* q_candlestickmodelmapper_binding_storage2(void* self);
void q_candlestickmodelmapper_destroyed(void* self);
void q_candlestickmodelmapper_on_destroyed(void* self, void (*slot)(void*));
QObject* q_candlestickmodelmapper_parent(void* self);
bool q_candlestickmodelmapper_inherits(void* self, const char* classname);
void q_candlestickmodelmapper_delete_later(void* self);
int32_t q_candlestickmodelmapper_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_candlestickmodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_candlestickmodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_candlestickmodelmapper_destroyed1(void* self, void* param1);
void q_candlestickmodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_candlestickmodelmapper_event(void* self, void* event);
bool q_candlestickmodelmapper_qbase_event(void* self, void* event);
void q_candlestickmodelmapper_on_event(void* self, bool (*slot)(void*, void*));
bool q_candlestickmodelmapper_event_filter(void* self, void* watched, void* event);
bool q_candlestickmodelmapper_qbase_event_filter(void* self, void* watched, void* event);
void q_candlestickmodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_candlestickmodelmapper_timer_event(void* self, void* event);
void q_candlestickmodelmapper_qbase_timer_event(void* self, void* event);
void q_candlestickmodelmapper_on_timer_event(void* self, void (*slot)(void*, void*));
void q_candlestickmodelmapper_child_event(void* self, void* event);
void q_candlestickmodelmapper_qbase_child_event(void* self, void* event);
void q_candlestickmodelmapper_on_child_event(void* self, void (*slot)(void*, void*));
void q_candlestickmodelmapper_custom_event(void* self, void* event);
void q_candlestickmodelmapper_qbase_custom_event(void* self, void* event);
void q_candlestickmodelmapper_on_custom_event(void* self, void (*slot)(void*, void*));
void q_candlestickmodelmapper_connect_notify(void* self, void* signal);
void q_candlestickmodelmapper_qbase_connect_notify(void* self, void* signal);
void q_candlestickmodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_candlestickmodelmapper_disconnect_notify(void* self, void* signal);
void q_candlestickmodelmapper_qbase_disconnect_notify(void* self, void* signal);
void q_candlestickmodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_candlestickmodelmapper_sender(void* self);
QObject* q_candlestickmodelmapper_qbase_sender(void* self);
void q_candlestickmodelmapper_on_sender(void* self, QObject* (*slot)());
int32_t q_candlestickmodelmapper_sender_signal_index(void* self);
int32_t q_candlestickmodelmapper_qbase_sender_signal_index(void* self);
void q_candlestickmodelmapper_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_candlestickmodelmapper_receivers(void* self, const char* signal);
int32_t q_candlestickmodelmapper_qbase_receivers(void* self, const char* signal);
void q_candlestickmodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_candlestickmodelmapper_is_signal_connected(void* self, void* signal);
bool q_candlestickmodelmapper_qbase_is_signal_connected(void* self, void* signal);
void q_candlestickmodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_candlestickmodelmapper_delete(void* self);

#endif
