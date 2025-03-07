#pragma once
#ifndef SRCQT6C_LIBQTHREAD_H
#define SRCQT6C_LIBQTHREAD_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstracteventdispatcher.h"
#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqdeadlinetimer.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqvariant.h"

QThread* q_thread_new();
QThread* q_thread_new2(void* parent);
QMetaObject* q_thread_meta_object(void* self);
void* q_thread_metacast(void* self, const char* param1);
int32_t q_thread_metacall(void* self, int64_t param1, int param2, void* param3);
void q_thread_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_thread_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_thread_tr(const char* s);
void* q_thread_current_thread_id();
QThread* q_thread_current_thread();
int32_t q_thread_ideal_thread_count();
void q_thread_yield_current_thread();
void q_thread_set_priority(void* self, int64_t priority);
int64_t q_thread_priority(void* self);
bool q_thread_is_finished(void* self);
bool q_thread_is_running(void* self);
void q_thread_request_interruption(void* self);
bool q_thread_is_interruption_requested(void* self);
void q_thread_set_stack_size(void* self, uint32_t stackSize);
uint32_t q_thread_stack_size(void* self);
QAbstractEventDispatcher* q_thread_event_dispatcher(void* self);
void q_thread_set_event_dispatcher(void* self, void* eventDispatcher);
bool q_thread_event(void* self, void* event);
void q_thread_on_event(void* self, bool (*slot)(void*, void*));
bool q_thread_qbase_event(void* self, void* event);
int32_t q_thread_loop_level(void* self);
void q_thread_start(void* self);
void q_thread_terminate(void* self);
void q_thread_exit(void* self);
void q_thread_quit(void* self);
bool q_thread_wait(void* self);
bool q_thread_wait_with_time(void* self, uint64_t time);
void q_thread_sleep(uint64_t param1);
void q_thread_msleep(uint64_t param1);
void q_thread_usleep(uint64_t param1);
void q_thread_run(void* self);
void q_thread_on_run(void* self, void (*slot)());
void q_thread_qbase_run(void* self);
int32_t q_thread_exec(void* self);
void q_thread_on_exec(void* self, int32_t (*slot)());
int32_t q_thread_qbase_exec(void* self);
const char* q_thread_tr2(const char* s, const char* c);
const char* q_thread_tr3(const char* s, const char* c, int n);
void q_thread_start1(void* self, int64_t param1);
void q_thread_exit1(void* self, int retcode);
bool q_thread_wait1(void* self, void* deadline);
const char* q_thread_object_name(void* self);
void q_thread_set_object_name(void* self, const char* name);
bool q_thread_is_widget_type(void* self);
bool q_thread_is_window_type(void* self);
bool q_thread_is_quick_item_type(void* self);
bool q_thread_signals_blocked(void* self);
bool q_thread_block_signals(void* self, bool b);
QThread* q_thread_thread(void* self);
void q_thread_move_to_thread(void* self, void* thread);
int32_t q_thread_start_timer(void* self, int interval);
void q_thread_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_thread_children(void* self);
void q_thread_set_parent(void* self, void* parent);
void q_thread_install_event_filter(void* self, void* filterObj);
void q_thread_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_thread_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_thread_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_thread_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_thread_disconnect_with_q_meta_object_connection(void* param1);
void q_thread_dump_object_tree(void* self);
void q_thread_dump_object_info(void* self);
bool q_thread_set_property(void* self, const char* name, void* value);
QVariant* q_thread_property(void* self, const char* name);
const char** q_thread_dynamic_property_names(void* self);
QBindingStorage* q_thread_binding_storage(void* self);
QBindingStorage* q_thread_binding_storage2(void* self);
void q_thread_destroyed(void* self);
void q_thread_on_destroyed(void* self, void (*slot)(void*));
QObject* q_thread_parent(void* self);
bool q_thread_inherits(void* self, const char* classname);
void q_thread_delete_later(void* self);
int32_t q_thread_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_thread_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_thread_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_thread_destroyed1(void* self, void* param1);
void q_thread_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_thread_event_filter(void* self, void* watched, void* event);
bool q_thread_qbase_event_filter(void* self, void* watched, void* event);
void q_thread_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_thread_timer_event(void* self, void* event);
void q_thread_qbase_timer_event(void* self, void* event);
void q_thread_on_timer_event(void* self, void (*slot)(void*, void*));
void q_thread_child_event(void* self, void* event);
void q_thread_qbase_child_event(void* self, void* event);
void q_thread_on_child_event(void* self, void (*slot)(void*, void*));
void q_thread_custom_event(void* self, void* event);
void q_thread_qbase_custom_event(void* self, void* event);
void q_thread_on_custom_event(void* self, void (*slot)(void*, void*));
void q_thread_connect_notify(void* self, void* signal);
void q_thread_qbase_connect_notify(void* self, void* signal);
void q_thread_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_thread_disconnect_notify(void* self, void* signal);
void q_thread_qbase_disconnect_notify(void* self, void* signal);
void q_thread_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_thread_sender(void* self);
QObject* q_thread_qbase_sender(void* self);
void q_thread_on_sender(void* self, QObject* (*slot)());
int32_t q_thread_sender_signal_index(void* self);
int32_t q_thread_qbase_sender_signal_index(void* self);
void q_thread_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_thread_receivers(void* self, const char* signal);
int32_t q_thread_qbase_receivers(void* self, const char* signal);
void q_thread_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_thread_is_signal_connected(void* self, void* signal);
bool q_thread_qbase_is_signal_connected(void* self, void* signal);
void q_thread_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_thread_delete(void* self);

/// https://doc.qt.io/qt-6/qthread.html#types

typedef enum {
    QTHREAD_PRIORITY_IDLEPRIORITY = 0,
    QTHREAD_PRIORITY_LOWESTPRIORITY = 1,
    QTHREAD_PRIORITY_LOWPRIORITY = 2,
    QTHREAD_PRIORITY_NORMALPRIORITY = 3,
    QTHREAD_PRIORITY_HIGHPRIORITY = 4,
    QTHREAD_PRIORITY_HIGHESTPRIORITY = 5,
    QTHREAD_PRIORITY_TIMECRITICALPRIORITY = 6,
    QTHREAD_PRIORITY_INHERITPRIORITY = 7
} QThread__Priority;

#endif
