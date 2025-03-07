#pragma once
#ifndef SRC_SPATIALAUDIOQT6C_LIBQAUDIOLISTENER_H
#define SRC_SPATIALAUDIOQT6C_LIBQAUDIOLISTENER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "libqaudioengine.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqquaternion.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"
#include "../libqvectornd.h"

QAudioListener* q_audiolistener_new(void* engine);
void q_audiolistener_set_position(void* self, void* pos);
QVector3D* q_audiolistener_position(void* self);
void q_audiolistener_set_rotation(void* self, void* q);
QQuaternion* q_audiolistener_rotation(void* self);
QAudioEngine* q_audiolistener_engine(void* self);
QMetaObject* q_audiolistener_meta_object(void* self);
void* q_audiolistener_metacast(void* self, const char* param1);
const char* q_audiolistener_tr(const char* s);
const char* q_audiolistener_object_name(void* self);
void q_audiolistener_set_object_name(void* self, const char* name);
bool q_audiolistener_is_widget_type(void* self);
bool q_audiolistener_is_window_type(void* self);
bool q_audiolistener_is_quick_item_type(void* self);
bool q_audiolistener_signals_blocked(void* self);
bool q_audiolistener_block_signals(void* self, bool b);
QThread* q_audiolistener_thread(void* self);
void q_audiolistener_move_to_thread(void* self, void* thread);
int32_t q_audiolistener_start_timer(void* self, int interval);
void q_audiolistener_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_audiolistener_children(void* self);
void q_audiolistener_set_parent(void* self, void* parent);
void q_audiolistener_install_event_filter(void* self, void* filterObj);
void q_audiolistener_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_audiolistener_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_audiolistener_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_audiolistener_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_audiolistener_disconnect_with_q_meta_object_connection(void* param1);
void q_audiolistener_dump_object_tree(void* self);
void q_audiolistener_dump_object_info(void* self);
bool q_audiolistener_set_property(void* self, const char* name, void* value);
QVariant* q_audiolistener_property(void* self, const char* name);
const char** q_audiolistener_dynamic_property_names(void* self);
QBindingStorage* q_audiolistener_binding_storage(void* self);
QBindingStorage* q_audiolistener_binding_storage2(void* self);
void q_audiolistener_destroyed(void* self);
void q_audiolistener_on_destroyed(void* self, void (*slot)(void*));
QObject* q_audiolistener_parent(void* self);
bool q_audiolistener_inherits(void* self, const char* classname);
void q_audiolistener_delete_later(void* self);
const char* q_audiolistener_tr2(const char* s, const char* c);
const char* q_audiolistener_tr3(const char* s, const char* c, int n);
int32_t q_audiolistener_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_audiolistener_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_audiolistener_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_audiolistener_destroyed1(void* self, void* param1);
void q_audiolistener_on_destroyed1(void* self, void (*slot)(void*, void*));
int32_t q_audiolistener_metacall(void* self, int64_t param1, int param2, void* param3);
int32_t q_audiolistener_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
void q_audiolistener_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
bool q_audiolistener_event(void* self, void* event);
bool q_audiolistener_qbase_event(void* self, void* event);
void q_audiolistener_on_event(void* self, bool (*slot)(void*, void*));
bool q_audiolistener_event_filter(void* self, void* watched, void* event);
bool q_audiolistener_qbase_event_filter(void* self, void* watched, void* event);
void q_audiolistener_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_audiolistener_timer_event(void* self, void* event);
void q_audiolistener_qbase_timer_event(void* self, void* event);
void q_audiolistener_on_timer_event(void* self, void (*slot)(void*, void*));
void q_audiolistener_child_event(void* self, void* event);
void q_audiolistener_qbase_child_event(void* self, void* event);
void q_audiolistener_on_child_event(void* self, void (*slot)(void*, void*));
void q_audiolistener_custom_event(void* self, void* event);
void q_audiolistener_qbase_custom_event(void* self, void* event);
void q_audiolistener_on_custom_event(void* self, void (*slot)(void*, void*));
void q_audiolistener_connect_notify(void* self, void* signal);
void q_audiolistener_qbase_connect_notify(void* self, void* signal);
void q_audiolistener_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_audiolistener_disconnect_notify(void* self, void* signal);
void q_audiolistener_qbase_disconnect_notify(void* self, void* signal);
void q_audiolistener_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_audiolistener_sender(void* self);
QObject* q_audiolistener_qbase_sender(void* self);
void q_audiolistener_on_sender(void* self, QObject* (*slot)());
int32_t q_audiolistener_sender_signal_index(void* self);
int32_t q_audiolistener_qbase_sender_signal_index(void* self);
void q_audiolistener_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_audiolistener_receivers(void* self, const char* signal);
int32_t q_audiolistener_qbase_receivers(void* self, const char* signal);
void q_audiolistener_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_audiolistener_is_signal_connected(void* self, void* signal);
bool q_audiolistener_qbase_is_signal_connected(void* self, void* signal);
void q_audiolistener_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_audiolistener_delete(void* self);

#endif
