#pragma once
#ifndef SRCQT6C_LIBQABSTRACTANIMATION_H
#define SRCQT6C_LIBQABSTRACTANIMATION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanimationgroup.h"
#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QAbstractAnimation* q_abstractanimation_new();
QAbstractAnimation* q_abstractanimation_new2(void* parent);
QMetaObject* q_abstractanimation_meta_object(void* self);
void* q_abstractanimation_metacast(void* self, const char* param1);
int32_t q_abstractanimation_metacall(void* self, int64_t param1, int param2, void* param3);
void q_abstractanimation_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_abstractanimation_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_abstractanimation_tr(const char* s);
int64_t q_abstractanimation_state(void* self);
QAnimationGroup* q_abstractanimation_group(void* self);
int64_t q_abstractanimation_direction(void* self);
void q_abstractanimation_set_direction(void* self, int64_t direction);
int32_t q_abstractanimation_current_time(void* self);
int32_t q_abstractanimation_current_loop_time(void* self);
int32_t q_abstractanimation_loop_count(void* self);
void q_abstractanimation_set_loop_count(void* self, int loopCount);
int32_t q_abstractanimation_current_loop(void* self);
int32_t q_abstractanimation_duration(void* self);
void q_abstractanimation_on_duration(void* self, int32_t (*slot)());
int32_t q_abstractanimation_qbase_duration(void* self);
int32_t q_abstractanimation_total_duration(void* self);
void q_abstractanimation_finished(void* self);
void q_abstractanimation_on_finished(void* self, void (*slot)(void*));
void q_abstractanimation_state_changed(void* self, int64_t newState, int64_t oldState);
void q_abstractanimation_on_state_changed(void* self, void (*slot)(void*, int64_t, int64_t));
void q_abstractanimation_current_loop_changed(void* self, int currentLoop);
void q_abstractanimation_on_current_loop_changed(void* self, void (*slot)(void*, int));
void q_abstractanimation_direction_changed(void* self, int64_t param1);
void q_abstractanimation_on_direction_changed(void* self, void (*slot)(void*, int64_t));
void q_abstractanimation_start(void* self);
void q_abstractanimation_pause(void* self);
void q_abstractanimation_resume(void* self);
void q_abstractanimation_set_paused(void* self, bool paused);
void q_abstractanimation_stop(void* self);
void q_abstractanimation_set_current_time(void* self, int msecs);
bool q_abstractanimation_event(void* self, void* event);
void q_abstractanimation_on_event(void* self, bool (*slot)(void*, void*));
bool q_abstractanimation_qbase_event(void* self, void* event);
void q_abstractanimation_update_current_time(void* self, int currentTime);
void q_abstractanimation_on_update_current_time(void* self, void (*slot)(void*, int));
void q_abstractanimation_qbase_update_current_time(void* self, int currentTime);
void q_abstractanimation_update_state(void* self, int64_t newState, int64_t oldState);
void q_abstractanimation_on_update_state(void* self, void (*slot)(void*, int64_t, int64_t));
void q_abstractanimation_qbase_update_state(void* self, int64_t newState, int64_t oldState);
void q_abstractanimation_update_direction(void* self, int64_t direction);
void q_abstractanimation_on_update_direction(void* self, void (*slot)(void*, int64_t));
void q_abstractanimation_qbase_update_direction(void* self, int64_t direction);
const char* q_abstractanimation_tr2(const char* s, const char* c);
const char* q_abstractanimation_tr3(const char* s, const char* c, int n);
void q_abstractanimation_start1(void* self, int64_t policy);
const char* q_abstractanimation_object_name(void* self);
void q_abstractanimation_set_object_name(void* self, const char* name);
bool q_abstractanimation_is_widget_type(void* self);
bool q_abstractanimation_is_window_type(void* self);
bool q_abstractanimation_is_quick_item_type(void* self);
bool q_abstractanimation_signals_blocked(void* self);
bool q_abstractanimation_block_signals(void* self, bool b);
QThread* q_abstractanimation_thread(void* self);
void q_abstractanimation_move_to_thread(void* self, void* thread);
int32_t q_abstractanimation_start_timer(void* self, int interval);
void q_abstractanimation_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_abstractanimation_children(void* self);
void q_abstractanimation_set_parent(void* self, void* parent);
void q_abstractanimation_install_event_filter(void* self, void* filterObj);
void q_abstractanimation_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_abstractanimation_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_abstractanimation_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_abstractanimation_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_abstractanimation_disconnect_with_q_meta_object_connection(void* param1);
void q_abstractanimation_dump_object_tree(void* self);
void q_abstractanimation_dump_object_info(void* self);
bool q_abstractanimation_set_property(void* self, const char* name, void* value);
QVariant* q_abstractanimation_property(void* self, const char* name);
const char** q_abstractanimation_dynamic_property_names(void* self);
QBindingStorage* q_abstractanimation_binding_storage(void* self);
QBindingStorage* q_abstractanimation_binding_storage2(void* self);
void q_abstractanimation_destroyed(void* self);
void q_abstractanimation_on_destroyed(void* self, void (*slot)(void*));
QObject* q_abstractanimation_parent(void* self);
bool q_abstractanimation_inherits(void* self, const char* classname);
void q_abstractanimation_delete_later(void* self);
int32_t q_abstractanimation_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_abstractanimation_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_abstractanimation_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_abstractanimation_destroyed1(void* self, void* param1);
void q_abstractanimation_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_abstractanimation_event_filter(void* self, void* watched, void* event);
bool q_abstractanimation_qbase_event_filter(void* self, void* watched, void* event);
void q_abstractanimation_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_abstractanimation_timer_event(void* self, void* event);
void q_abstractanimation_qbase_timer_event(void* self, void* event);
void q_abstractanimation_on_timer_event(void* self, void (*slot)(void*, void*));
void q_abstractanimation_child_event(void* self, void* event);
void q_abstractanimation_qbase_child_event(void* self, void* event);
void q_abstractanimation_on_child_event(void* self, void (*slot)(void*, void*));
void q_abstractanimation_custom_event(void* self, void* event);
void q_abstractanimation_qbase_custom_event(void* self, void* event);
void q_abstractanimation_on_custom_event(void* self, void (*slot)(void*, void*));
void q_abstractanimation_connect_notify(void* self, void* signal);
void q_abstractanimation_qbase_connect_notify(void* self, void* signal);
void q_abstractanimation_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_abstractanimation_disconnect_notify(void* self, void* signal);
void q_abstractanimation_qbase_disconnect_notify(void* self, void* signal);
void q_abstractanimation_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_abstractanimation_sender(void* self);
QObject* q_abstractanimation_qbase_sender(void* self);
void q_abstractanimation_on_sender(void* self, QObject* (*slot)());
int32_t q_abstractanimation_sender_signal_index(void* self);
int32_t q_abstractanimation_qbase_sender_signal_index(void* self);
void q_abstractanimation_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_abstractanimation_receivers(void* self, const char* signal);
int32_t q_abstractanimation_qbase_receivers(void* self, const char* signal);
void q_abstractanimation_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_abstractanimation_is_signal_connected(void* self, void* signal);
bool q_abstractanimation_qbase_is_signal_connected(void* self, void* signal);
void q_abstractanimation_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_abstractanimation_delete(void* self);

QAnimationDriver* q_animationdriver_new();
QAnimationDriver* q_animationdriver_new2(void* parent);
QMetaObject* q_animationdriver_meta_object(void* self);
void* q_animationdriver_metacast(void* self, const char* param1);
int32_t q_animationdriver_metacall(void* self, int64_t param1, int param2, void* param3);
void q_animationdriver_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_animationdriver_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_animationdriver_tr(const char* s);
void q_animationdriver_advance(void* self);
void q_animationdriver_on_advance(void* self, void (*slot)());
void q_animationdriver_qbase_advance(void* self);
void q_animationdriver_install(void* self);
void q_animationdriver_uninstall(void* self);
bool q_animationdriver_is_running(void* self);
long long q_animationdriver_elapsed(void* self);
void q_animationdriver_on_elapsed(void* self, long long (*slot)());
long long q_animationdriver_qbase_elapsed(void* self);
void q_animationdriver_started(void* self);
void q_animationdriver_on_started(void* self, void (*slot)(void*));
void q_animationdriver_stopped(void* self);
void q_animationdriver_on_stopped(void* self, void (*slot)(void*));
void q_animationdriver_advance_animation(void* self);
void q_animationdriver_on_advance_animation(void* self, void (*slot)());
void q_animationdriver_qbase_advance_animation(void* self);
void q_animationdriver_start(void* self);
void q_animationdriver_on_start(void* self, void (*slot)());
void q_animationdriver_qbase_start(void* self);
void q_animationdriver_stop(void* self);
void q_animationdriver_on_stop(void* self, void (*slot)());
void q_animationdriver_qbase_stop(void* self);
const char* q_animationdriver_tr2(const char* s, const char* c);
const char* q_animationdriver_tr3(const char* s, const char* c, int n);
const char* q_animationdriver_object_name(void* self);
void q_animationdriver_set_object_name(void* self, const char* name);
bool q_animationdriver_is_widget_type(void* self);
bool q_animationdriver_is_window_type(void* self);
bool q_animationdriver_is_quick_item_type(void* self);
bool q_animationdriver_signals_blocked(void* self);
bool q_animationdriver_block_signals(void* self, bool b);
QThread* q_animationdriver_thread(void* self);
void q_animationdriver_move_to_thread(void* self, void* thread);
int32_t q_animationdriver_start_timer(void* self, int interval);
void q_animationdriver_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_animationdriver_children(void* self);
void q_animationdriver_set_parent(void* self, void* parent);
void q_animationdriver_install_event_filter(void* self, void* filterObj);
void q_animationdriver_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_animationdriver_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_animationdriver_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_animationdriver_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_animationdriver_disconnect_with_q_meta_object_connection(void* param1);
void q_animationdriver_dump_object_tree(void* self);
void q_animationdriver_dump_object_info(void* self);
bool q_animationdriver_set_property(void* self, const char* name, void* value);
QVariant* q_animationdriver_property(void* self, const char* name);
const char** q_animationdriver_dynamic_property_names(void* self);
QBindingStorage* q_animationdriver_binding_storage(void* self);
QBindingStorage* q_animationdriver_binding_storage2(void* self);
void q_animationdriver_destroyed(void* self);
void q_animationdriver_on_destroyed(void* self, void (*slot)(void*));
QObject* q_animationdriver_parent(void* self);
bool q_animationdriver_inherits(void* self, const char* classname);
void q_animationdriver_delete_later(void* self);
int32_t q_animationdriver_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_animationdriver_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_animationdriver_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_animationdriver_destroyed1(void* self, void* param1);
void q_animationdriver_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_animationdriver_event(void* self, void* event);
bool q_animationdriver_qbase_event(void* self, void* event);
void q_animationdriver_on_event(void* self, bool (*slot)(void*, void*));
bool q_animationdriver_event_filter(void* self, void* watched, void* event);
bool q_animationdriver_qbase_event_filter(void* self, void* watched, void* event);
void q_animationdriver_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_animationdriver_timer_event(void* self, void* event);
void q_animationdriver_qbase_timer_event(void* self, void* event);
void q_animationdriver_on_timer_event(void* self, void (*slot)(void*, void*));
void q_animationdriver_child_event(void* self, void* event);
void q_animationdriver_qbase_child_event(void* self, void* event);
void q_animationdriver_on_child_event(void* self, void (*slot)(void*, void*));
void q_animationdriver_custom_event(void* self, void* event);
void q_animationdriver_qbase_custom_event(void* self, void* event);
void q_animationdriver_on_custom_event(void* self, void (*slot)(void*, void*));
void q_animationdriver_connect_notify(void* self, void* signal);
void q_animationdriver_qbase_connect_notify(void* self, void* signal);
void q_animationdriver_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_animationdriver_disconnect_notify(void* self, void* signal);
void q_animationdriver_qbase_disconnect_notify(void* self, void* signal);
void q_animationdriver_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_animationdriver_sender(void* self);
QObject* q_animationdriver_qbase_sender(void* self);
void q_animationdriver_on_sender(void* self, QObject* (*slot)());
int32_t q_animationdriver_sender_signal_index(void* self);
int32_t q_animationdriver_qbase_sender_signal_index(void* self);
void q_animationdriver_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_animationdriver_receivers(void* self, const char* signal);
int32_t q_animationdriver_qbase_receivers(void* self, const char* signal);
void q_animationdriver_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_animationdriver_is_signal_connected(void* self, void* signal);
bool q_animationdriver_qbase_is_signal_connected(void* self, void* signal);
void q_animationdriver_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_animationdriver_delete(void* self);

/// https://doc.qt.io/qt-6/qabstractanimation.html#types

typedef enum {
    QABSTRACTANIMATION_DIRECTION_FORWARD = 0,
    QABSTRACTANIMATION_DIRECTION_BACKWARD = 1
} QAbstractAnimation__Direction;

typedef enum {
    QABSTRACTANIMATION_STATE_STOPPED = 0,
    QABSTRACTANIMATION_STATE_PAUSED = 1,
    QABSTRACTANIMATION_STATE_RUNNING = 2
} QAbstractAnimation__State;

typedef enum {
    QABSTRACTANIMATION_DELETIONPOLICY_KEEPWHENSTOPPED = 0,
    QABSTRACTANIMATION_DELETIONPOLICY_DELETEWHENSTOPPED = 1
} QAbstractAnimation__DeletionPolicy;

#endif
