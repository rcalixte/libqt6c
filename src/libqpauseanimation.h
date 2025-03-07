#pragma once
#ifndef SRCQT6C_LIBQPAUSEANIMATION_H
#define SRCQT6C_LIBQPAUSEANIMATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractanimation.h"
#include "libqanimationgroup.h"
#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QPauseAnimation* q_pauseanimation_new();
QPauseAnimation* q_pauseanimation_new2(int msecs);
QPauseAnimation* q_pauseanimation_new3(void* parent);
QPauseAnimation* q_pauseanimation_new4(int msecs, void* parent);
QMetaObject* q_pauseanimation_meta_object(void* self);
void* q_pauseanimation_metacast(void* self, const char* param1);
int32_t q_pauseanimation_metacall(void* self, int64_t param1, int param2, void* param3);
void q_pauseanimation_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_pauseanimation_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_pauseanimation_tr(const char* s);
int32_t q_pauseanimation_duration(void* self);
void q_pauseanimation_on_duration(void* self, int32_t (*slot)());
int32_t q_pauseanimation_qbase_duration(void* self);
void q_pauseanimation_set_duration(void* self, int msecs);
bool q_pauseanimation_event(void* self, void* e);
void q_pauseanimation_on_event(void* self, bool (*slot)(void*, void*));
bool q_pauseanimation_qbase_event(void* self, void* e);
void q_pauseanimation_update_current_time(void* self, int param1);
void q_pauseanimation_on_update_current_time(void* self, void (*slot)(void*, int));
void q_pauseanimation_qbase_update_current_time(void* self, int param1);
const char* q_pauseanimation_tr2(const char* s, const char* c);
const char* q_pauseanimation_tr3(const char* s, const char* c, int n);
int64_t q_pauseanimation_state(void* self);
QAnimationGroup* q_pauseanimation_group(void* self);
int64_t q_pauseanimation_direction(void* self);
void q_pauseanimation_set_direction(void* self, int64_t direction);
int32_t q_pauseanimation_current_time(void* self);
int32_t q_pauseanimation_current_loop_time(void* self);
int32_t q_pauseanimation_loop_count(void* self);
void q_pauseanimation_set_loop_count(void* self, int loopCount);
int32_t q_pauseanimation_current_loop(void* self);
int32_t q_pauseanimation_total_duration(void* self);
void q_pauseanimation_finished(void* self);
void q_pauseanimation_on_finished(void* self, void (*slot)(void*));
void q_pauseanimation_state_changed(void* self, int64_t newState, int64_t oldState);
void q_pauseanimation_on_state_changed(void* self, void (*slot)(void*, int64_t, int64_t));
void q_pauseanimation_current_loop_changed(void* self, int currentLoop);
void q_pauseanimation_on_current_loop_changed(void* self, void (*slot)(void*, int));
void q_pauseanimation_direction_changed(void* self, int64_t param1);
void q_pauseanimation_on_direction_changed(void* self, void (*slot)(void*, int64_t));
void q_pauseanimation_start(void* self);
void q_pauseanimation_pause(void* self);
void q_pauseanimation_resume(void* self);
void q_pauseanimation_set_paused(void* self, bool paused);
void q_pauseanimation_stop(void* self);
void q_pauseanimation_set_current_time(void* self, int msecs);
void q_pauseanimation_start1(void* self, int64_t policy);
const char* q_pauseanimation_object_name(void* self);
void q_pauseanimation_set_object_name(void* self, const char* name);
bool q_pauseanimation_is_widget_type(void* self);
bool q_pauseanimation_is_window_type(void* self);
bool q_pauseanimation_is_quick_item_type(void* self);
bool q_pauseanimation_signals_blocked(void* self);
bool q_pauseanimation_block_signals(void* self, bool b);
QThread* q_pauseanimation_thread(void* self);
void q_pauseanimation_move_to_thread(void* self, void* thread);
int32_t q_pauseanimation_start_timer(void* self, int interval);
void q_pauseanimation_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_pauseanimation_children(void* self);
void q_pauseanimation_set_parent(void* self, void* parent);
void q_pauseanimation_install_event_filter(void* self, void* filterObj);
void q_pauseanimation_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_pauseanimation_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_pauseanimation_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_pauseanimation_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_pauseanimation_disconnect_with_q_meta_object_connection(void* param1);
void q_pauseanimation_dump_object_tree(void* self);
void q_pauseanimation_dump_object_info(void* self);
bool q_pauseanimation_set_property(void* self, const char* name, void* value);
QVariant* q_pauseanimation_property(void* self, const char* name);
const char** q_pauseanimation_dynamic_property_names(void* self);
QBindingStorage* q_pauseanimation_binding_storage(void* self);
QBindingStorage* q_pauseanimation_binding_storage2(void* self);
void q_pauseanimation_destroyed(void* self);
void q_pauseanimation_on_destroyed(void* self, void (*slot)(void*));
QObject* q_pauseanimation_parent(void* self);
bool q_pauseanimation_inherits(void* self, const char* classname);
void q_pauseanimation_delete_later(void* self);
int32_t q_pauseanimation_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_pauseanimation_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_pauseanimation_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_pauseanimation_destroyed1(void* self, void* param1);
void q_pauseanimation_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_pauseanimation_update_state(void* self, int64_t newState, int64_t oldState);
void q_pauseanimation_qbase_update_state(void* self, int64_t newState, int64_t oldState);
void q_pauseanimation_on_update_state(void* self, void (*slot)(void*, int64_t, int64_t));
void q_pauseanimation_update_direction(void* self, int64_t direction);
void q_pauseanimation_qbase_update_direction(void* self, int64_t direction);
void q_pauseanimation_on_update_direction(void* self, void (*slot)(void*, int64_t));
bool q_pauseanimation_event_filter(void* self, void* watched, void* event);
bool q_pauseanimation_qbase_event_filter(void* self, void* watched, void* event);
void q_pauseanimation_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_pauseanimation_timer_event(void* self, void* event);
void q_pauseanimation_qbase_timer_event(void* self, void* event);
void q_pauseanimation_on_timer_event(void* self, void (*slot)(void*, void*));
void q_pauseanimation_child_event(void* self, void* event);
void q_pauseanimation_qbase_child_event(void* self, void* event);
void q_pauseanimation_on_child_event(void* self, void (*slot)(void*, void*));
void q_pauseanimation_custom_event(void* self, void* event);
void q_pauseanimation_qbase_custom_event(void* self, void* event);
void q_pauseanimation_on_custom_event(void* self, void (*slot)(void*, void*));
void q_pauseanimation_connect_notify(void* self, void* signal);
void q_pauseanimation_qbase_connect_notify(void* self, void* signal);
void q_pauseanimation_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_pauseanimation_disconnect_notify(void* self, void* signal);
void q_pauseanimation_qbase_disconnect_notify(void* self, void* signal);
void q_pauseanimation_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_pauseanimation_sender(void* self);
QObject* q_pauseanimation_qbase_sender(void* self);
void q_pauseanimation_on_sender(void* self, QObject* (*slot)());
int32_t q_pauseanimation_sender_signal_index(void* self);
int32_t q_pauseanimation_qbase_sender_signal_index(void* self);
void q_pauseanimation_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_pauseanimation_receivers(void* self, const char* signal);
int32_t q_pauseanimation_qbase_receivers(void* self, const char* signal);
void q_pauseanimation_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_pauseanimation_is_signal_connected(void* self, void* signal);
bool q_pauseanimation_qbase_is_signal_connected(void* self, void* signal);
void q_pauseanimation_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_pauseanimation_delete(void* self);

#endif
