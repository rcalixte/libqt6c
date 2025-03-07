#pragma once
#ifndef SRCQT6C_LIBQABSTRACTEVENTDISPATCHER_H
#define SRCQT6C_LIBQABSTRACTEVENTDISPATCHER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractnativeeventfilter.h"
#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqsocketnotifier.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QMetaObject* q_abstracteventdispatcher_meta_object(void* self);
void* q_abstracteventdispatcher_metacast(void* self, const char* param1);
int32_t q_abstracteventdispatcher_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_abstracteventdispatcher_tr(const char* s);
QAbstractEventDispatcher* q_abstracteventdispatcher_instance();
bool q_abstracteventdispatcher_process_events(void* self, int64_t flags);
void q_abstracteventdispatcher_register_socket_notifier(void* self, void* notifier);
void q_abstracteventdispatcher_unregister_socket_notifier(void* self, void* notifier);
int32_t q_abstracteventdispatcher_register_timer(void* self, long long interval, int64_t timerType, void* object);
void q_abstracteventdispatcher_register_timer2(void* self, int timerId, long long interval, int64_t timerType, void* object);
bool q_abstracteventdispatcher_unregister_timer(void* self, int timerId);
bool q_abstracteventdispatcher_unregister_timers(void* self, void* object);
libqt_list /* of QAbstractEventDispatcher__TimerInfo* */ q_abstracteventdispatcher_registered_timers(void* self, void* object);
int32_t q_abstracteventdispatcher_remaining_time(void* self, int timerId);
void q_abstracteventdispatcher_wake_up(void* self);
void q_abstracteventdispatcher_interrupt(void* self);
void q_abstracteventdispatcher_starting_up(void* self);
void q_abstracteventdispatcher_closing_down(void* self);
void q_abstracteventdispatcher_install_native_event_filter(void* self, void* filterObj);
void q_abstracteventdispatcher_remove_native_event_filter(void* self, void* filterObj);
bool q_abstracteventdispatcher_filter_native_event(void* self, const char* eventType, void* message, intptr_t* result);
void q_abstracteventdispatcher_about_to_block(void* self);
void q_abstracteventdispatcher_on_about_to_block(void* self, void (*slot)(void*));
void q_abstracteventdispatcher_awake(void* self);
void q_abstracteventdispatcher_on_awake(void* self, void (*slot)(void*));
const char* q_abstracteventdispatcher_tr2(const char* s, const char* c);
const char* q_abstracteventdispatcher_tr3(const char* s, const char* c, int n);
QAbstractEventDispatcher* q_abstracteventdispatcher_instance1(void* thread);
bool q_abstracteventdispatcher_event(void* self, void* event);
bool q_abstracteventdispatcher_event_filter(void* self, void* watched, void* event);
const char* q_abstracteventdispatcher_object_name(void* self);
void q_abstracteventdispatcher_set_object_name(void* self, const char* name);
bool q_abstracteventdispatcher_is_widget_type(void* self);
bool q_abstracteventdispatcher_is_window_type(void* self);
bool q_abstracteventdispatcher_is_quick_item_type(void* self);
bool q_abstracteventdispatcher_signals_blocked(void* self);
bool q_abstracteventdispatcher_block_signals(void* self, bool b);
QThread* q_abstracteventdispatcher_thread(void* self);
void q_abstracteventdispatcher_move_to_thread(void* self, void* thread);
int32_t q_abstracteventdispatcher_start_timer(void* self, int interval);
void q_abstracteventdispatcher_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_abstracteventdispatcher_children(void* self);
void q_abstracteventdispatcher_set_parent(void* self, void* parent);
void q_abstracteventdispatcher_install_event_filter(void* self, void* filterObj);
void q_abstracteventdispatcher_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_abstracteventdispatcher_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_abstracteventdispatcher_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_abstracteventdispatcher_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_abstracteventdispatcher_disconnect_with_q_meta_object_connection(void* param1);
void q_abstracteventdispatcher_dump_object_tree(void* self);
void q_abstracteventdispatcher_dump_object_info(void* self);
bool q_abstracteventdispatcher_set_property(void* self, const char* name, void* value);
QVariant* q_abstracteventdispatcher_property(void* self, const char* name);
const char** q_abstracteventdispatcher_dynamic_property_names(void* self);
QBindingStorage* q_abstracteventdispatcher_binding_storage(void* self);
QBindingStorage* q_abstracteventdispatcher_binding_storage2(void* self);
void q_abstracteventdispatcher_destroyed(void* self);
void q_abstracteventdispatcher_on_destroyed(void* self, void (*slot)(void*));
QObject* q_abstracteventdispatcher_parent(void* self);
bool q_abstracteventdispatcher_inherits(void* self, const char* classname);
void q_abstracteventdispatcher_delete_later(void* self);
int32_t q_abstracteventdispatcher_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_abstracteventdispatcher_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_abstracteventdispatcher_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_abstracteventdispatcher_destroyed1(void* self, void* param1);
void q_abstracteventdispatcher_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_abstracteventdispatcher_delete(void* self);

QAbstractEventDispatcher__TimerInfo* q_abstracteventdispatcher__timerinfo_new(void* other);
QAbstractEventDispatcher__TimerInfo* q_abstracteventdispatcher__timerinfo_new2(void* other);
QAbstractEventDispatcher__TimerInfo* q_abstracteventdispatcher__timerinfo_new3(int id, int i, int64_t t);
void q_abstracteventdispatcher__timerinfo_copy_assign(void* self, void* other);
void q_abstracteventdispatcher__timerinfo_move_assign(void* self, void* other);
void q_abstracteventdispatcher__timerinfo_delete(void* self);

#endif
