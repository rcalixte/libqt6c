#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQAUDIOSOURCE_H
#define SRC_MULTIMEDIAQT6C_LIBQAUDIOSOURCE_H

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

QAudioSource* q_audiosource_new();
QAudioSource* q_audiosource_new2(void* audioDeviceInfo);
QAudioSource* q_audiosource_new3(void* format);
QAudioSource* q_audiosource_new4(void* format, void* parent);
QAudioSource* q_audiosource_new5(void* audioDeviceInfo, void* format);
QAudioSource* q_audiosource_new6(void* audioDeviceInfo, void* format, void* parent);
QMetaObject* q_audiosource_meta_object(void* self);
void* q_audiosource_metacast(void* self, const char* param1);
int32_t q_audiosource_metacall(void* self, int64_t param1, int param2, void* param3);
void q_audiosource_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_audiosource_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_audiosource_tr(const char* s);
bool q_audiosource_is_null(void* self);
QAudioFormat* q_audiosource_format(void* self);
void q_audiosource_start(void* self, void* device);
QIODevice* q_audiosource_start2(void* self);
void q_audiosource_stop(void* self);
void q_audiosource_reset(void* self);
void q_audiosource_suspend(void* self);
void q_audiosource_resume(void* self);
void q_audiosource_set_buffer_size(void* self, int64_t bytes);
int64_t q_audiosource_buffer_size(void* self);
int64_t q_audiosource_bytes_available(void* self);
void q_audiosource_set_volume(void* self, double volume);
double q_audiosource_volume(void* self);
long long q_audiosource_processed_u_secs(void* self);
long long q_audiosource_elapsed_u_secs(void* self);
int64_t q_audiosource_error(void* self);
int64_t q_audiosource_state(void* self);
void q_audiosource_state_changed(void* self, int64_t state);
void q_audiosource_on_state_changed(void* self, void (*slot)(void*, int64_t));
const char* q_audiosource_tr2(const char* s, const char* c);
const char* q_audiosource_tr3(const char* s, const char* c, int n);
const char* q_audiosource_object_name(void* self);
void q_audiosource_set_object_name(void* self, const char* name);
bool q_audiosource_is_widget_type(void* self);
bool q_audiosource_is_window_type(void* self);
bool q_audiosource_is_quick_item_type(void* self);
bool q_audiosource_signals_blocked(void* self);
bool q_audiosource_block_signals(void* self, bool b);
QThread* q_audiosource_thread(void* self);
void q_audiosource_move_to_thread(void* self, void* thread);
int32_t q_audiosource_start_timer(void* self, int interval);
void q_audiosource_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_audiosource_children(void* self);
void q_audiosource_set_parent(void* self, void* parent);
void q_audiosource_install_event_filter(void* self, void* filterObj);
void q_audiosource_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_audiosource_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_audiosource_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_audiosource_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_audiosource_disconnect_with_q_meta_object_connection(void* param1);
void q_audiosource_dump_object_tree(void* self);
void q_audiosource_dump_object_info(void* self);
bool q_audiosource_set_property(void* self, const char* name, void* value);
QVariant* q_audiosource_property(void* self, const char* name);
const char** q_audiosource_dynamic_property_names(void* self);
QBindingStorage* q_audiosource_binding_storage(void* self);
QBindingStorage* q_audiosource_binding_storage2(void* self);
void q_audiosource_destroyed(void* self);
void q_audiosource_on_destroyed(void* self, void (*slot)(void*));
QObject* q_audiosource_parent(void* self);
bool q_audiosource_inherits(void* self, const char* classname);
void q_audiosource_delete_later(void* self);
int32_t q_audiosource_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_audiosource_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_audiosource_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_audiosource_destroyed1(void* self, void* param1);
void q_audiosource_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_audiosource_event(void* self, void* event);
bool q_audiosource_qbase_event(void* self, void* event);
void q_audiosource_on_event(void* self, bool (*slot)(void*, void*));
bool q_audiosource_event_filter(void* self, void* watched, void* event);
bool q_audiosource_qbase_event_filter(void* self, void* watched, void* event);
void q_audiosource_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_audiosource_timer_event(void* self, void* event);
void q_audiosource_qbase_timer_event(void* self, void* event);
void q_audiosource_on_timer_event(void* self, void (*slot)(void*, void*));
void q_audiosource_child_event(void* self, void* event);
void q_audiosource_qbase_child_event(void* self, void* event);
void q_audiosource_on_child_event(void* self, void (*slot)(void*, void*));
void q_audiosource_custom_event(void* self, void* event);
void q_audiosource_qbase_custom_event(void* self, void* event);
void q_audiosource_on_custom_event(void* self, void (*slot)(void*, void*));
void q_audiosource_connect_notify(void* self, void* signal);
void q_audiosource_qbase_connect_notify(void* self, void* signal);
void q_audiosource_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_audiosource_disconnect_notify(void* self, void* signal);
void q_audiosource_qbase_disconnect_notify(void* self, void* signal);
void q_audiosource_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_audiosource_sender(void* self);
QObject* q_audiosource_qbase_sender(void* self);
void q_audiosource_on_sender(void* self, QObject* (*slot)());
int32_t q_audiosource_sender_signal_index(void* self);
int32_t q_audiosource_qbase_sender_signal_index(void* self);
void q_audiosource_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_audiosource_receivers(void* self, const char* signal);
int32_t q_audiosource_qbase_receivers(void* self, const char* signal);
void q_audiosource_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_audiosource_is_signal_connected(void* self, void* signal);
bool q_audiosource_qbase_is_signal_connected(void* self, void* signal);
void q_audiosource_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_audiosource_delete(void* self);

#endif
