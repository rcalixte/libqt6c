#pragma once
#ifndef SRCQT6C_LIBQTIMER_H
#define SRCQT6C_LIBQTIMER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QTimer* q_timer_new();
QTimer* q_timer_new2(void* parent);
QMetaObject* q_timer_meta_object(void* self);
void* q_timer_metacast(void* self, const char* param1);
int32_t q_timer_metacall(void* self, int64_t param1, int param2, void* param3);
void q_timer_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_timer_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_timer_tr(const char* s);
bool q_timer_is_active(void* self);
int32_t q_timer_timer_id(void* self);
void q_timer_set_interval(void* self, int msec);
int32_t q_timer_interval(void* self);
int32_t q_timer_remaining_time(void* self);
void q_timer_set_timer_type(void* self, int64_t atype);
int64_t q_timer_timer_type(void* self);
void q_timer_set_single_shot(void* self, bool singleShot);
bool q_timer_is_single_shot(void* self);
void q_timer_start(void* self, int msec);
void q_timer_start2(void* self);
void q_timer_stop(void* self);
void q_timer_timer_event(void* self, void* param1);
void q_timer_on_timer_event(void* self, void (*slot)(void*, void*));
void q_timer_qbase_timer_event(void* self, void* param1);
const char* q_timer_tr2(const char* s, const char* c);
const char* q_timer_tr3(const char* s, const char* c, int n);
const char* q_timer_object_name(void* self);
void q_timer_set_object_name(void* self, const char* name);
bool q_timer_is_widget_type(void* self);
bool q_timer_is_window_type(void* self);
bool q_timer_is_quick_item_type(void* self);
bool q_timer_signals_blocked(void* self);
bool q_timer_block_signals(void* self, bool b);
QThread* q_timer_thread(void* self);
void q_timer_move_to_thread(void* self, void* thread);
int32_t q_timer_start_timer(void* self, int interval);
void q_timer_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_timer_children(void* self);
void q_timer_set_parent(void* self, void* parent);
void q_timer_install_event_filter(void* self, void* filterObj);
void q_timer_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_timer_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_timer_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_timer_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_timer_disconnect_with_q_meta_object_connection(void* param1);
void q_timer_dump_object_tree(void* self);
void q_timer_dump_object_info(void* self);
bool q_timer_set_property(void* self, const char* name, void* value);
QVariant* q_timer_property(void* self, const char* name);
const char** q_timer_dynamic_property_names(void* self);
QBindingStorage* q_timer_binding_storage(void* self);
QBindingStorage* q_timer_binding_storage2(void* self);
void q_timer_destroyed(void* self);
void q_timer_on_destroyed(void* self, void (*slot)(void*));
QObject* q_timer_parent(void* self);
bool q_timer_inherits(void* self, const char* classname);
void q_timer_delete_later(void* self);
int32_t q_timer_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_timer_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_timer_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_timer_destroyed1(void* self, void* param1);
void q_timer_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_timer_event(void* self, void* event);
bool q_timer_qbase_event(void* self, void* event);
void q_timer_on_event(void* self, bool (*slot)(void*, void*));
bool q_timer_event_filter(void* self, void* watched, void* event);
bool q_timer_qbase_event_filter(void* self, void* watched, void* event);
void q_timer_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_timer_child_event(void* self, void* event);
void q_timer_qbase_child_event(void* self, void* event);
void q_timer_on_child_event(void* self, void (*slot)(void*, void*));
void q_timer_custom_event(void* self, void* event);
void q_timer_qbase_custom_event(void* self, void* event);
void q_timer_on_custom_event(void* self, void (*slot)(void*, void*));
void q_timer_connect_notify(void* self, void* signal);
void q_timer_qbase_connect_notify(void* self, void* signal);
void q_timer_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_timer_disconnect_notify(void* self, void* signal);
void q_timer_qbase_disconnect_notify(void* self, void* signal);
void q_timer_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_timer_sender(void* self);
QObject* q_timer_qbase_sender(void* self);
void q_timer_on_sender(void* self, QObject* (*slot)());
int32_t q_timer_sender_signal_index(void* self);
int32_t q_timer_qbase_sender_signal_index(void* self);
void q_timer_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_timer_receivers(void* self, const char* signal);
int32_t q_timer_qbase_receivers(void* self, const char* signal);
void q_timer_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_timer_is_signal_connected(void* self, void* signal);
bool q_timer_qbase_is_signal_connected(void* self, void* signal);
void q_timer_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_timer_delete(void* self);

#endif
