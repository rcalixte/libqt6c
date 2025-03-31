#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQCANDLESTICKSET_H
#define SRC_RESTRICTED_EXTRAS_CHARTSQT6C_LIBQCANDLESTICKSET_H

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
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpen.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QCandlestickSet* q_candlestickset_new();
QCandlestickSet* q_candlestickset_new2(double open, double high, double low, double close);
QCandlestickSet* q_candlestickset_new3(double timestamp);
QCandlestickSet* q_candlestickset_new4(double timestamp, void* parent);
QCandlestickSet* q_candlestickset_new5(double open, double high, double low, double close, double timestamp);
QCandlestickSet* q_candlestickset_new6(double open, double high, double low, double close, double timestamp, void* parent);
QMetaObject* q_candlestickset_meta_object(void* self);
void* q_candlestickset_metacast(void* self, const char* param1);
int32_t q_candlestickset_metacall(void* self, int64_t param1, int param2, void* param3);
void q_candlestickset_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_candlestickset_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_candlestickset_tr(const char* s);
void q_candlestickset_set_timestamp(void* self, double timestamp);
double q_candlestickset_timestamp(void* self);
void q_candlestickset_set_open(void* self, double open);
double q_candlestickset_open(void* self);
void q_candlestickset_set_high(void* self, double high);
double q_candlestickset_high(void* self);
void q_candlestickset_set_low(void* self, double low);
double q_candlestickset_low(void* self);
void q_candlestickset_set_close(void* self, double close);
double q_candlestickset_close(void* self);
void q_candlestickset_set_brush(void* self, void* brush);
QBrush* q_candlestickset_brush(void* self);
void q_candlestickset_set_pen(void* self, void* pen);
QPen* q_candlestickset_pen(void* self);
void q_candlestickset_clicked(void* self);
void q_candlestickset_on_clicked(void* self, void (*slot)(void*));
void q_candlestickset_hovered(void* self, bool status);
void q_candlestickset_on_hovered(void* self, void (*slot)(void*, bool));
void q_candlestickset_pressed(void* self);
void q_candlestickset_on_pressed(void* self, void (*slot)(void*));
void q_candlestickset_released(void* self);
void q_candlestickset_on_released(void* self, void (*slot)(void*));
void q_candlestickset_double_clicked(void* self);
void q_candlestickset_on_double_clicked(void* self, void (*slot)(void*));
void q_candlestickset_timestamp_changed(void* self);
void q_candlestickset_on_timestamp_changed(void* self, void (*slot)(void*));
void q_candlestickset_open_changed(void* self);
void q_candlestickset_on_open_changed(void* self, void (*slot)(void*));
void q_candlestickset_high_changed(void* self);
void q_candlestickset_on_high_changed(void* self, void (*slot)(void*));
void q_candlestickset_low_changed(void* self);
void q_candlestickset_on_low_changed(void* self, void (*slot)(void*));
void q_candlestickset_close_changed(void* self);
void q_candlestickset_on_close_changed(void* self, void (*slot)(void*));
void q_candlestickset_brush_changed(void* self);
void q_candlestickset_on_brush_changed(void* self, void (*slot)(void*));
void q_candlestickset_pen_changed(void* self);
void q_candlestickset_on_pen_changed(void* self, void (*slot)(void*));
const char* q_candlestickset_tr2(const char* s, const char* c);
const char* q_candlestickset_tr3(const char* s, const char* c, int n);
const char* q_candlestickset_object_name(void* self);
void q_candlestickset_set_object_name(void* self, const char* name);
bool q_candlestickset_is_widget_type(void* self);
bool q_candlestickset_is_window_type(void* self);
bool q_candlestickset_is_quick_item_type(void* self);
bool q_candlestickset_signals_blocked(void* self);
bool q_candlestickset_block_signals(void* self, bool b);
QThread* q_candlestickset_thread(void* self);
void q_candlestickset_move_to_thread(void* self, void* thread);
int32_t q_candlestickset_start_timer(void* self, int interval);
void q_candlestickset_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_candlestickset_children(void* self);
void q_candlestickset_set_parent(void* self, void* parent);
void q_candlestickset_install_event_filter(void* self, void* filterObj);
void q_candlestickset_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_candlestickset_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_candlestickset_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_candlestickset_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_candlestickset_disconnect_with_q_meta_object_connection(void* param1);
void q_candlestickset_dump_object_tree(void* self);
void q_candlestickset_dump_object_info(void* self);
bool q_candlestickset_set_property(void* self, const char* name, void* value);
QVariant* q_candlestickset_property(void* self, const char* name);
const char** q_candlestickset_dynamic_property_names(void* self);
QBindingStorage* q_candlestickset_binding_storage(void* self);
QBindingStorage* q_candlestickset_binding_storage2(void* self);
void q_candlestickset_destroyed(void* self);
void q_candlestickset_on_destroyed(void* self, void (*slot)(void*));
QObject* q_candlestickset_parent(void* self);
bool q_candlestickset_inherits(void* self, const char* classname);
void q_candlestickset_delete_later(void* self);
int32_t q_candlestickset_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_candlestickset_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_candlestickset_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_candlestickset_destroyed1(void* self, void* param1);
void q_candlestickset_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_candlestickset_event(void* self, void* event);
bool q_candlestickset_qbase_event(void* self, void* event);
void q_candlestickset_on_event(void* self, bool (*slot)(void*, void*));
bool q_candlestickset_event_filter(void* self, void* watched, void* event);
bool q_candlestickset_qbase_event_filter(void* self, void* watched, void* event);
void q_candlestickset_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_candlestickset_timer_event(void* self, void* event);
void q_candlestickset_qbase_timer_event(void* self, void* event);
void q_candlestickset_on_timer_event(void* self, void (*slot)(void*, void*));
void q_candlestickset_child_event(void* self, void* event);
void q_candlestickset_qbase_child_event(void* self, void* event);
void q_candlestickset_on_child_event(void* self, void (*slot)(void*, void*));
void q_candlestickset_custom_event(void* self, void* event);
void q_candlestickset_qbase_custom_event(void* self, void* event);
void q_candlestickset_on_custom_event(void* self, void (*slot)(void*, void*));
void q_candlestickset_connect_notify(void* self, void* signal);
void q_candlestickset_qbase_connect_notify(void* self, void* signal);
void q_candlestickset_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_candlestickset_disconnect_notify(void* self, void* signal);
void q_candlestickset_qbase_disconnect_notify(void* self, void* signal);
void q_candlestickset_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_candlestickset_sender(void* self);
QObject* q_candlestickset_qbase_sender(void* self);
void q_candlestickset_on_sender(void* self, QObject* (*slot)());
int32_t q_candlestickset_sender_signal_index(void* self);
int32_t q_candlestickset_qbase_sender_signal_index(void* self);
void q_candlestickset_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_candlestickset_receivers(void* self, const char* signal);
int32_t q_candlestickset_qbase_receivers(void* self, const char* signal);
void q_candlestickset_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_candlestickset_is_signal_connected(void* self, void* signal);
bool q_candlestickset_qbase_is_signal_connected(void* self, void* signal);
void q_candlestickset_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_candlestickset_delete(void* self);

#endif
