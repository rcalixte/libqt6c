#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQAUDIOINPUT_H
#define SRC_MULTIMEDIAQT6C_LIBQAUDIOINPUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "libqaudiodevice.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QAudioInput* q_audioinput_new();
QAudioInput* q_audioinput_new2(void* deviceInfo);
QAudioInput* q_audioinput_new3(void* parent);
QAudioInput* q_audioinput_new4(void* deviceInfo, void* parent);
QMetaObject* q_audioinput_meta_object(void* self);
void* q_audioinput_metacast(void* self, const char* param1);
int32_t q_audioinput_metacall(void* self, int64_t param1, int param2, void* param3);
void q_audioinput_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_audioinput_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_audioinput_tr(const char* s);
QAudioDevice* q_audioinput_device(void* self);
float q_audioinput_volume(void* self);
bool q_audioinput_is_muted(void* self);
void q_audioinput_set_device(void* self, void* device);
void q_audioinput_set_volume(void* self, float volume);
void q_audioinput_set_muted(void* self, bool muted);
void q_audioinput_device_changed(void* self);
void q_audioinput_on_device_changed(void* self, void (*slot)(void*));
void q_audioinput_volume_changed(void* self, float volume);
void q_audioinput_on_volume_changed(void* self, void (*slot)(void*, float));
void q_audioinput_muted_changed(void* self, bool muted);
void q_audioinput_on_muted_changed(void* self, void (*slot)(void*, bool));
const char* q_audioinput_tr2(const char* s, const char* c);
const char* q_audioinput_tr3(const char* s, const char* c, int n);
const char* q_audioinput_object_name(void* self);
void q_audioinput_set_object_name(void* self, const char* name);
bool q_audioinput_is_widget_type(void* self);
bool q_audioinput_is_window_type(void* self);
bool q_audioinput_is_quick_item_type(void* self);
bool q_audioinput_signals_blocked(void* self);
bool q_audioinput_block_signals(void* self, bool b);
QThread* q_audioinput_thread(void* self);
void q_audioinput_move_to_thread(void* self, void* thread);
int32_t q_audioinput_start_timer(void* self, int interval);
void q_audioinput_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_audioinput_children(void* self);
void q_audioinput_set_parent(void* self, void* parent);
void q_audioinput_install_event_filter(void* self, void* filterObj);
void q_audioinput_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_audioinput_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_audioinput_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_audioinput_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_audioinput_disconnect_with_q_meta_object_connection(void* param1);
void q_audioinput_dump_object_tree(void* self);
void q_audioinput_dump_object_info(void* self);
bool q_audioinput_set_property(void* self, const char* name, void* value);
QVariant* q_audioinput_property(void* self, const char* name);
const char** q_audioinput_dynamic_property_names(void* self);
QBindingStorage* q_audioinput_binding_storage(void* self);
QBindingStorage* q_audioinput_binding_storage2(void* self);
void q_audioinput_destroyed(void* self);
void q_audioinput_on_destroyed(void* self, void (*slot)(void*));
QObject* q_audioinput_parent(void* self);
bool q_audioinput_inherits(void* self, const char* classname);
void q_audioinput_delete_later(void* self);
int32_t q_audioinput_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_audioinput_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_audioinput_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_audioinput_destroyed1(void* self, void* param1);
void q_audioinput_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_audioinput_event(void* self, void* event);
bool q_audioinput_qbase_event(void* self, void* event);
void q_audioinput_on_event(void* self, bool (*slot)(void*, void*));
bool q_audioinput_event_filter(void* self, void* watched, void* event);
bool q_audioinput_qbase_event_filter(void* self, void* watched, void* event);
void q_audioinput_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_audioinput_timer_event(void* self, void* event);
void q_audioinput_qbase_timer_event(void* self, void* event);
void q_audioinput_on_timer_event(void* self, void (*slot)(void*, void*));
void q_audioinput_child_event(void* self, void* event);
void q_audioinput_qbase_child_event(void* self, void* event);
void q_audioinput_on_child_event(void* self, void (*slot)(void*, void*));
void q_audioinput_custom_event(void* self, void* event);
void q_audioinput_qbase_custom_event(void* self, void* event);
void q_audioinput_on_custom_event(void* self, void (*slot)(void*, void*));
void q_audioinput_connect_notify(void* self, void* signal);
void q_audioinput_qbase_connect_notify(void* self, void* signal);
void q_audioinput_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_audioinput_disconnect_notify(void* self, void* signal);
void q_audioinput_qbase_disconnect_notify(void* self, void* signal);
void q_audioinput_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_audioinput_sender(void* self);
QObject* q_audioinput_qbase_sender(void* self);
void q_audioinput_on_sender(void* self, QObject* (*slot)());
int32_t q_audioinput_sender_signal_index(void* self);
int32_t q_audioinput_qbase_sender_signal_index(void* self);
void q_audioinput_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_audioinput_receivers(void* self, const char* signal);
int32_t q_audioinput_qbase_receivers(void* self, const char* signal);
void q_audioinput_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_audioinput_is_signal_connected(void* self, void* signal);
bool q_audioinput_qbase_is_signal_connected(void* self, void* signal);
void q_audioinput_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_audioinput_delete(void* self);

#endif
