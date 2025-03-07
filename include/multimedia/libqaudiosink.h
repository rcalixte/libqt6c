#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQAUDIOSINK_H
#define SRC_MULTIMEDIAQT6C_LIBQAUDIOSINK_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "libqaudiodevice.h"
#include "libqaudioformat.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqiodevice.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QAudioSink* q_audiosink_new();
QAudioSink* q_audiosink_new2(void* audioDeviceInfo);
QAudioSink* q_audiosink_new3(void* format);
QAudioSink* q_audiosink_new4(void* format, void* parent);
QAudioSink* q_audiosink_new5(void* audioDeviceInfo, void* format);
QAudioSink* q_audiosink_new6(void* audioDeviceInfo, void* format, void* parent);
QMetaObject* q_audiosink_meta_object(void* self);
void* q_audiosink_metacast(void* self, const char* param1);
int32_t q_audiosink_metacall(void* self, int64_t param1, int param2, void* param3);
void q_audiosink_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_audiosink_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_audiosink_tr(const char* s);
bool q_audiosink_is_null(void* self);
QAudioFormat* q_audiosink_format(void* self);
void q_audiosink_start(void* self, void* device);
QIODevice* q_audiosink_start2(void* self);
void q_audiosink_stop(void* self);
void q_audiosink_reset(void* self);
void q_audiosink_suspend(void* self);
void q_audiosink_resume(void* self);
void q_audiosink_set_buffer_size(void* self, int64_t bytes);
int64_t q_audiosink_buffer_size(void* self);
int64_t q_audiosink_bytes_free(void* self);
long long q_audiosink_processed_u_secs(void* self);
long long q_audiosink_elapsed_u_secs(void* self);
int64_t q_audiosink_error(void* self);
int64_t q_audiosink_state(void* self);
void q_audiosink_set_volume(void* self, double volume);
double q_audiosink_volume(void* self);
void q_audiosink_state_changed(void* self, int64_t state);
void q_audiosink_on_state_changed(void* self, void (*slot)(void*, int64_t));
const char* q_audiosink_tr2(const char* s, const char* c);
const char* q_audiosink_tr3(const char* s, const char* c, int n);
const char* q_audiosink_object_name(void* self);
void q_audiosink_set_object_name(void* self, const char* name);
bool q_audiosink_is_widget_type(void* self);
bool q_audiosink_is_window_type(void* self);
bool q_audiosink_is_quick_item_type(void* self);
bool q_audiosink_signals_blocked(void* self);
bool q_audiosink_block_signals(void* self, bool b);
QThread* q_audiosink_thread(void* self);
void q_audiosink_move_to_thread(void* self, void* thread);
int32_t q_audiosink_start_timer(void* self, int interval);
void q_audiosink_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_audiosink_children(void* self);
void q_audiosink_set_parent(void* self, void* parent);
void q_audiosink_install_event_filter(void* self, void* filterObj);
void q_audiosink_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_audiosink_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_audiosink_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_audiosink_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_audiosink_disconnect_with_q_meta_object_connection(void* param1);
void q_audiosink_dump_object_tree(void* self);
void q_audiosink_dump_object_info(void* self);
bool q_audiosink_set_property(void* self, const char* name, void* value);
QVariant* q_audiosink_property(void* self, const char* name);
const char** q_audiosink_dynamic_property_names(void* self);
QBindingStorage* q_audiosink_binding_storage(void* self);
QBindingStorage* q_audiosink_binding_storage2(void* self);
void q_audiosink_destroyed(void* self);
void q_audiosink_on_destroyed(void* self, void (*slot)(void*));
QObject* q_audiosink_parent(void* self);
bool q_audiosink_inherits(void* self, const char* classname);
void q_audiosink_delete_later(void* self);
int32_t q_audiosink_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_audiosink_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_audiosink_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_audiosink_destroyed1(void* self, void* param1);
void q_audiosink_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_audiosink_event(void* self, void* event);
bool q_audiosink_qbase_event(void* self, void* event);
void q_audiosink_on_event(void* self, bool (*slot)(void*, void*));
bool q_audiosink_event_filter(void* self, void* watched, void* event);
bool q_audiosink_qbase_event_filter(void* self, void* watched, void* event);
void q_audiosink_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_audiosink_timer_event(void* self, void* event);
void q_audiosink_qbase_timer_event(void* self, void* event);
void q_audiosink_on_timer_event(void* self, void (*slot)(void*, void*));
void q_audiosink_child_event(void* self, void* event);
void q_audiosink_qbase_child_event(void* self, void* event);
void q_audiosink_on_child_event(void* self, void (*slot)(void*, void*));
void q_audiosink_custom_event(void* self, void* event);
void q_audiosink_qbase_custom_event(void* self, void* event);
void q_audiosink_on_custom_event(void* self, void (*slot)(void*, void*));
void q_audiosink_connect_notify(void* self, void* signal);
void q_audiosink_qbase_connect_notify(void* self, void* signal);
void q_audiosink_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_audiosink_disconnect_notify(void* self, void* signal);
void q_audiosink_qbase_disconnect_notify(void* self, void* signal);
void q_audiosink_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_audiosink_sender(void* self);
QObject* q_audiosink_qbase_sender(void* self);
void q_audiosink_on_sender(void* self, QObject* (*slot)());
int32_t q_audiosink_sender_signal_index(void* self);
int32_t q_audiosink_qbase_sender_signal_index(void* self);
void q_audiosink_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_audiosink_receivers(void* self, const char* signal);
int32_t q_audiosink_qbase_receivers(void* self, const char* signal);
void q_audiosink_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_audiosink_is_signal_connected(void* self, void* signal);
bool q_audiosink_qbase_is_signal_connected(void* self, void* signal);
void q_audiosink_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_audiosink_delete(void* self);

#endif
