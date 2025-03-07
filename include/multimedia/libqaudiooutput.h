#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQAUDIOOUTPUT_H
#define SRC_MULTIMEDIAQT6C_LIBQAUDIOOUTPUT_H

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

QAudioOutput* q_audiooutput_new();
QAudioOutput* q_audiooutput_new2(void* device);
QAudioOutput* q_audiooutput_new3(void* parent);
QAudioOutput* q_audiooutput_new4(void* device, void* parent);
QMetaObject* q_audiooutput_meta_object(void* self);
void* q_audiooutput_metacast(void* self, const char* param1);
int32_t q_audiooutput_metacall(void* self, int64_t param1, int param2, void* param3);
void q_audiooutput_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_audiooutput_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_audiooutput_tr(const char* s);
QAudioDevice* q_audiooutput_device(void* self);
float q_audiooutput_volume(void* self);
bool q_audiooutput_is_muted(void* self);
void q_audiooutput_set_device(void* self, void* device);
void q_audiooutput_set_volume(void* self, float volume);
void q_audiooutput_set_muted(void* self, bool muted);
void q_audiooutput_device_changed(void* self);
void q_audiooutput_on_device_changed(void* self, void (*slot)(void*));
void q_audiooutput_volume_changed(void* self, float volume);
void q_audiooutput_on_volume_changed(void* self, void (*slot)(void*, float));
void q_audiooutput_muted_changed(void* self, bool muted);
void q_audiooutput_on_muted_changed(void* self, void (*slot)(void*, bool));
const char* q_audiooutput_tr2(const char* s, const char* c);
const char* q_audiooutput_tr3(const char* s, const char* c, int n);
const char* q_audiooutput_object_name(void* self);
void q_audiooutput_set_object_name(void* self, const char* name);
bool q_audiooutput_is_widget_type(void* self);
bool q_audiooutput_is_window_type(void* self);
bool q_audiooutput_is_quick_item_type(void* self);
bool q_audiooutput_signals_blocked(void* self);
bool q_audiooutput_block_signals(void* self, bool b);
QThread* q_audiooutput_thread(void* self);
void q_audiooutput_move_to_thread(void* self, void* thread);
int32_t q_audiooutput_start_timer(void* self, int interval);
void q_audiooutput_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_audiooutput_children(void* self);
void q_audiooutput_set_parent(void* self, void* parent);
void q_audiooutput_install_event_filter(void* self, void* filterObj);
void q_audiooutput_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_audiooutput_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_audiooutput_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_audiooutput_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_audiooutput_disconnect_with_q_meta_object_connection(void* param1);
void q_audiooutput_dump_object_tree(void* self);
void q_audiooutput_dump_object_info(void* self);
bool q_audiooutput_set_property(void* self, const char* name, void* value);
QVariant* q_audiooutput_property(void* self, const char* name);
const char** q_audiooutput_dynamic_property_names(void* self);
QBindingStorage* q_audiooutput_binding_storage(void* self);
QBindingStorage* q_audiooutput_binding_storage2(void* self);
void q_audiooutput_destroyed(void* self);
void q_audiooutput_on_destroyed(void* self, void (*slot)(void*));
QObject* q_audiooutput_parent(void* self);
bool q_audiooutput_inherits(void* self, const char* classname);
void q_audiooutput_delete_later(void* self);
int32_t q_audiooutput_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_audiooutput_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_audiooutput_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_audiooutput_destroyed1(void* self, void* param1);
void q_audiooutput_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_audiooutput_event(void* self, void* event);
bool q_audiooutput_qbase_event(void* self, void* event);
void q_audiooutput_on_event(void* self, bool (*slot)(void*, void*));
bool q_audiooutput_event_filter(void* self, void* watched, void* event);
bool q_audiooutput_qbase_event_filter(void* self, void* watched, void* event);
void q_audiooutput_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_audiooutput_timer_event(void* self, void* event);
void q_audiooutput_qbase_timer_event(void* self, void* event);
void q_audiooutput_on_timer_event(void* self, void (*slot)(void*, void*));
void q_audiooutput_child_event(void* self, void* event);
void q_audiooutput_qbase_child_event(void* self, void* event);
void q_audiooutput_on_child_event(void* self, void (*slot)(void*, void*));
void q_audiooutput_custom_event(void* self, void* event);
void q_audiooutput_qbase_custom_event(void* self, void* event);
void q_audiooutput_on_custom_event(void* self, void (*slot)(void*, void*));
void q_audiooutput_connect_notify(void* self, void* signal);
void q_audiooutput_qbase_connect_notify(void* self, void* signal);
void q_audiooutput_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_audiooutput_disconnect_notify(void* self, void* signal);
void q_audiooutput_qbase_disconnect_notify(void* self, void* signal);
void q_audiooutput_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_audiooutput_sender(void* self);
QObject* q_audiooutput_qbase_sender(void* self);
void q_audiooutput_on_sender(void* self, QObject* (*slot)());
int32_t q_audiooutput_sender_signal_index(void* self);
int32_t q_audiooutput_qbase_sender_signal_index(void* self);
void q_audiooutput_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_audiooutput_receivers(void* self, const char* signal);
int32_t q_audiooutput_qbase_receivers(void* self, const char* signal);
void q_audiooutput_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_audiooutput_is_signal_connected(void* self, void* signal);
bool q_audiooutput_qbase_is_signal_connected(void* self, void* signal);
void q_audiooutput_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_audiooutput_delete(void* self);

#endif
