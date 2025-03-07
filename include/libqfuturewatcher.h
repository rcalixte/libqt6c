#pragma once
#ifndef SRCQT6C_LIBQFUTUREWATCHER_H
#define SRCQT6C_LIBQFUTUREWATCHER_H

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

QMetaObject* q_futurewatcherbase_meta_object(void* self);
void* q_futurewatcherbase_metacast(void* self, const char* param1);
int32_t q_futurewatcherbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_futurewatcherbase_tr(const char* s);
int32_t q_futurewatcherbase_progress_value(void* self);
int32_t q_futurewatcherbase_progress_minimum(void* self);
int32_t q_futurewatcherbase_progress_maximum(void* self);
const char* q_futurewatcherbase_progress_text(void* self);
bool q_futurewatcherbase_is_started(void* self);
bool q_futurewatcherbase_is_finished(void* self);
bool q_futurewatcherbase_is_running(void* self);
bool q_futurewatcherbase_is_canceled(void* self);
bool q_futurewatcherbase_is_paused(void* self);
bool q_futurewatcherbase_is_suspending(void* self);
bool q_futurewatcherbase_is_suspended(void* self);
void q_futurewatcherbase_wait_for_finished(void* self);
void q_futurewatcherbase_set_pending_results_limit(void* self, int limit);
bool q_futurewatcherbase_event(void* self, void* event);
void q_futurewatcherbase_started(void* self);
void q_futurewatcherbase_on_started(void* self, void (*slot)(void*));
void q_futurewatcherbase_finished(void* self);
void q_futurewatcherbase_on_finished(void* self, void (*slot)(void*));
void q_futurewatcherbase_canceled(void* self);
void q_futurewatcherbase_on_canceled(void* self, void (*slot)(void*));
void q_futurewatcherbase_paused(void* self);
void q_futurewatcherbase_on_paused(void* self, void (*slot)(void*));
void q_futurewatcherbase_suspending(void* self);
void q_futurewatcherbase_on_suspending(void* self, void (*slot)(void*));
void q_futurewatcherbase_suspended(void* self);
void q_futurewatcherbase_on_suspended(void* self, void (*slot)(void*));
void q_futurewatcherbase_resumed(void* self);
void q_futurewatcherbase_on_resumed(void* self, void (*slot)(void*));
void q_futurewatcherbase_result_ready_at(void* self, int resultIndex);
void q_futurewatcherbase_on_result_ready_at(void* self, void (*slot)(void*, int));
void q_futurewatcherbase_results_ready_at(void* self, int beginIndex, int endIndex);
void q_futurewatcherbase_on_results_ready_at(void* self, void (*slot)(void*, int, int));
void q_futurewatcherbase_progress_range_changed(void* self, int minimum, int maximum);
void q_futurewatcherbase_on_progress_range_changed(void* self, void (*slot)(void*, int, int));
void q_futurewatcherbase_progress_value_changed(void* self, int progressValue);
void q_futurewatcherbase_on_progress_value_changed(void* self, void (*slot)(void*, int));
void q_futurewatcherbase_progress_text_changed(void* self, const char* progressText);
void q_futurewatcherbase_on_progress_text_changed(void* self, void (*slot)(void*, const char*));
void q_futurewatcherbase_cancel(void* self);
void q_futurewatcherbase_set_suspended(void* self, bool suspendVal);
void q_futurewatcherbase_suspend(void* self);
void q_futurewatcherbase_resume(void* self);
void q_futurewatcherbase_toggle_suspended(void* self);
void q_futurewatcherbase_set_paused(void* self, bool paused);
void q_futurewatcherbase_pause(void* self);
void q_futurewatcherbase_toggle_paused(void* self);
const char* q_futurewatcherbase_tr2(const char* s, const char* c);
const char* q_futurewatcherbase_tr3(const char* s, const char* c, int n);
bool q_futurewatcherbase_event_filter(void* self, void* watched, void* event);
const char* q_futurewatcherbase_object_name(void* self);
void q_futurewatcherbase_set_object_name(void* self, const char* name);
bool q_futurewatcherbase_is_widget_type(void* self);
bool q_futurewatcherbase_is_window_type(void* self);
bool q_futurewatcherbase_is_quick_item_type(void* self);
bool q_futurewatcherbase_signals_blocked(void* self);
bool q_futurewatcherbase_block_signals(void* self, bool b);
QThread* q_futurewatcherbase_thread(void* self);
void q_futurewatcherbase_move_to_thread(void* self, void* thread);
int32_t q_futurewatcherbase_start_timer(void* self, int interval);
void q_futurewatcherbase_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_futurewatcherbase_children(void* self);
void q_futurewatcherbase_set_parent(void* self, void* parent);
void q_futurewatcherbase_install_event_filter(void* self, void* filterObj);
void q_futurewatcherbase_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_futurewatcherbase_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_futurewatcherbase_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_futurewatcherbase_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_futurewatcherbase_disconnect_with_q_meta_object_connection(void* param1);
void q_futurewatcherbase_dump_object_tree(void* self);
void q_futurewatcherbase_dump_object_info(void* self);
bool q_futurewatcherbase_set_property(void* self, const char* name, void* value);
QVariant* q_futurewatcherbase_property(void* self, const char* name);
const char** q_futurewatcherbase_dynamic_property_names(void* self);
QBindingStorage* q_futurewatcherbase_binding_storage(void* self);
QBindingStorage* q_futurewatcherbase_binding_storage2(void* self);
void q_futurewatcherbase_destroyed(void* self);
void q_futurewatcherbase_on_destroyed(void* self, void (*slot)(void*));
QObject* q_futurewatcherbase_parent(void* self);
bool q_futurewatcherbase_inherits(void* self, const char* classname);
void q_futurewatcherbase_delete_later(void* self);
int32_t q_futurewatcherbase_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_futurewatcherbase_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_futurewatcherbase_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_futurewatcherbase_destroyed1(void* self, void* param1);
void q_futurewatcherbase_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_futurewatcherbase_delete(void* self);

#endif
