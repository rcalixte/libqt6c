#pragma once
#ifndef SRCQT6C_LIBQTHREADPOOL_H
#define SRCQT6C_LIBQTHREADPOOL_H

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
#include "libqrunnable.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QThreadPool* q_threadpool_new();
QThreadPool* q_threadpool_new2(void* parent);
QMetaObject* q_threadpool_meta_object(void* self);
void* q_threadpool_metacast(void* self, const char* param1);
int32_t q_threadpool_metacall(void* self, int64_t param1, int param2, void* param3);
void q_threadpool_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_threadpool_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_threadpool_tr(const char* s);
QThreadPool* q_threadpool_global_instance();
void q_threadpool_start(void* self, void* runnable);
bool q_threadpool_try_start(void* self, void* runnable);
void q_threadpool_start_on_reserved_thread(void* self, void* runnable);
int32_t q_threadpool_expiry_timeout(void* self);
void q_threadpool_set_expiry_timeout(void* self, int expiryTimeout);
int32_t q_threadpool_max_thread_count(void* self);
void q_threadpool_set_max_thread_count(void* self, int maxThreadCount);
int32_t q_threadpool_active_thread_count(void* self);
void q_threadpool_set_stack_size(void* self, uint32_t stackSize);
uint32_t q_threadpool_stack_size(void* self);
void q_threadpool_set_thread_priority(void* self, int64_t priority);
int64_t q_threadpool_thread_priority(void* self);
void q_threadpool_reserve_thread(void* self);
void q_threadpool_release_thread(void* self);
bool q_threadpool_wait_for_done(void* self);
void q_threadpool_clear(void* self);
bool q_threadpool_contains(void* self, void* thread);
bool q_threadpool_try_take(void* self, void* runnable);
const char* q_threadpool_tr2(const char* s, const char* c);
const char* q_threadpool_tr3(const char* s, const char* c, int n);
void q_threadpool_start2(void* self, void* runnable, int priority);
bool q_threadpool_wait_for_done1(void* self, int msecs);
const char* q_threadpool_object_name(void* self);
void q_threadpool_set_object_name(void* self, const char* name);
bool q_threadpool_is_widget_type(void* self);
bool q_threadpool_is_window_type(void* self);
bool q_threadpool_is_quick_item_type(void* self);
bool q_threadpool_signals_blocked(void* self);
bool q_threadpool_block_signals(void* self, bool b);
QThread* q_threadpool_thread(void* self);
void q_threadpool_move_to_thread(void* self, void* thread);
int32_t q_threadpool_start_timer(void* self, int interval);
void q_threadpool_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_threadpool_children(void* self);
void q_threadpool_set_parent(void* self, void* parent);
void q_threadpool_install_event_filter(void* self, void* filterObj);
void q_threadpool_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_threadpool_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_threadpool_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_threadpool_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_threadpool_disconnect_with_q_meta_object_connection(void* param1);
void q_threadpool_dump_object_tree(void* self);
void q_threadpool_dump_object_info(void* self);
bool q_threadpool_set_property(void* self, const char* name, void* value);
QVariant* q_threadpool_property(void* self, const char* name);
const char** q_threadpool_dynamic_property_names(void* self);
QBindingStorage* q_threadpool_binding_storage(void* self);
QBindingStorage* q_threadpool_binding_storage2(void* self);
void q_threadpool_destroyed(void* self);
void q_threadpool_on_destroyed(void* self, void (*slot)(void*));
QObject* q_threadpool_parent(void* self);
bool q_threadpool_inherits(void* self, const char* classname);
void q_threadpool_delete_later(void* self);
int32_t q_threadpool_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_threadpool_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_threadpool_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_threadpool_destroyed1(void* self, void* param1);
void q_threadpool_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_threadpool_event(void* self, void* event);
bool q_threadpool_qbase_event(void* self, void* event);
void q_threadpool_on_event(void* self, bool (*slot)(void*, void*));
bool q_threadpool_event_filter(void* self, void* watched, void* event);
bool q_threadpool_qbase_event_filter(void* self, void* watched, void* event);
void q_threadpool_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_threadpool_timer_event(void* self, void* event);
void q_threadpool_qbase_timer_event(void* self, void* event);
void q_threadpool_on_timer_event(void* self, void (*slot)(void*, void*));
void q_threadpool_child_event(void* self, void* event);
void q_threadpool_qbase_child_event(void* self, void* event);
void q_threadpool_on_child_event(void* self, void (*slot)(void*, void*));
void q_threadpool_custom_event(void* self, void* event);
void q_threadpool_qbase_custom_event(void* self, void* event);
void q_threadpool_on_custom_event(void* self, void (*slot)(void*, void*));
void q_threadpool_connect_notify(void* self, void* signal);
void q_threadpool_qbase_connect_notify(void* self, void* signal);
void q_threadpool_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_threadpool_disconnect_notify(void* self, void* signal);
void q_threadpool_qbase_disconnect_notify(void* self, void* signal);
void q_threadpool_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_threadpool_sender(void* self);
QObject* q_threadpool_qbase_sender(void* self);
void q_threadpool_on_sender(void* self, QObject* (*slot)());
int32_t q_threadpool_sender_signal_index(void* self);
int32_t q_threadpool_qbase_sender_signal_index(void* self);
void q_threadpool_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_threadpool_receivers(void* self, const char* signal);
int32_t q_threadpool_qbase_receivers(void* self, const char* signal);
void q_threadpool_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_threadpool_is_signal_connected(void* self, void* signal);
bool q_threadpool_qbase_is_signal_connected(void* self, void* signal);
void q_threadpool_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_threadpool_delete(void* self);

#endif
