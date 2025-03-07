#pragma once
#ifndef SRC_WEBCHANNELQT6C_LIBQWEBCHANNEL_H
#define SRC_WEBCHANNELQT6C_LIBQWEBCHANNEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"
#include "libqwebchannelabstracttransport.h"

QWebChannel* q_webchannel_new();
QWebChannel* q_webchannel_new2(void* parent);
QMetaObject* q_webchannel_meta_object(void* self);
void* q_webchannel_metacast(void* self, const char* param1);
int32_t q_webchannel_metacall(void* self, int64_t param1, int param2, void* param3);
void q_webchannel_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_webchannel_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_webchannel_tr(const char* s);
void q_webchannel_register_objects(void* self, libqt_map /* of const char* to QObject* */ objects);
libqt_map /* of const char* to QObject* */ q_webchannel_registered_objects(void* self);
void q_webchannel_register_object(void* self, const char* id, void* object);
void q_webchannel_deregister_object(void* self, void* object);
bool q_webchannel_block_updates(void* self);
void q_webchannel_set_block_updates(void* self, bool block);
int32_t q_webchannel_property_update_interval(void* self);
void q_webchannel_set_property_update_interval(void* self, int ms);
void q_webchannel_block_updates_changed(void* self, bool block);
void q_webchannel_on_block_updates_changed(void* self, void (*slot)(void*, bool));
void q_webchannel_connect_to(void* self, void* transport);
void q_webchannel_disconnect_from(void* self, void* transport);
const char* q_webchannel_tr2(const char* s, const char* c);
const char* q_webchannel_tr3(const char* s, const char* c, int n);
const char* q_webchannel_object_name(void* self);
void q_webchannel_set_object_name(void* self, const char* name);
bool q_webchannel_is_widget_type(void* self);
bool q_webchannel_is_window_type(void* self);
bool q_webchannel_is_quick_item_type(void* self);
bool q_webchannel_signals_blocked(void* self);
bool q_webchannel_block_signals(void* self, bool b);
QThread* q_webchannel_thread(void* self);
void q_webchannel_move_to_thread(void* self, void* thread);
int32_t q_webchannel_start_timer(void* self, int interval);
void q_webchannel_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_webchannel_children(void* self);
void q_webchannel_set_parent(void* self, void* parent);
void q_webchannel_install_event_filter(void* self, void* filterObj);
void q_webchannel_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_webchannel_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_webchannel_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_webchannel_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_webchannel_disconnect_with_q_meta_object_connection(void* param1);
void q_webchannel_dump_object_tree(void* self);
void q_webchannel_dump_object_info(void* self);
bool q_webchannel_set_property(void* self, const char* name, void* value);
QVariant* q_webchannel_property(void* self, const char* name);
const char** q_webchannel_dynamic_property_names(void* self);
QBindingStorage* q_webchannel_binding_storage(void* self);
QBindingStorage* q_webchannel_binding_storage2(void* self);
void q_webchannel_destroyed(void* self);
void q_webchannel_on_destroyed(void* self, void (*slot)(void*));
QObject* q_webchannel_parent(void* self);
bool q_webchannel_inherits(void* self, const char* classname);
void q_webchannel_delete_later(void* self);
int32_t q_webchannel_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_webchannel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_webchannel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_webchannel_destroyed1(void* self, void* param1);
void q_webchannel_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_webchannel_event(void* self, void* event);
bool q_webchannel_qbase_event(void* self, void* event);
void q_webchannel_on_event(void* self, bool (*slot)(void*, void*));
bool q_webchannel_event_filter(void* self, void* watched, void* event);
bool q_webchannel_qbase_event_filter(void* self, void* watched, void* event);
void q_webchannel_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_webchannel_timer_event(void* self, void* event);
void q_webchannel_qbase_timer_event(void* self, void* event);
void q_webchannel_on_timer_event(void* self, void (*slot)(void*, void*));
void q_webchannel_child_event(void* self, void* event);
void q_webchannel_qbase_child_event(void* self, void* event);
void q_webchannel_on_child_event(void* self, void (*slot)(void*, void*));
void q_webchannel_custom_event(void* self, void* event);
void q_webchannel_qbase_custom_event(void* self, void* event);
void q_webchannel_on_custom_event(void* self, void (*slot)(void*, void*));
void q_webchannel_connect_notify(void* self, void* signal);
void q_webchannel_qbase_connect_notify(void* self, void* signal);
void q_webchannel_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_webchannel_disconnect_notify(void* self, void* signal);
void q_webchannel_qbase_disconnect_notify(void* self, void* signal);
void q_webchannel_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_webchannel_sender(void* self);
QObject* q_webchannel_qbase_sender(void* self);
void q_webchannel_on_sender(void* self, QObject* (*slot)());
int32_t q_webchannel_sender_signal_index(void* self);
int32_t q_webchannel_qbase_sender_signal_index(void* self);
void q_webchannel_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_webchannel_receivers(void* self, const char* signal);
int32_t q_webchannel_qbase_receivers(void* self, const char* signal);
void q_webchannel_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_webchannel_is_signal_connected(void* self, void* signal);
bool q_webchannel_qbase_is_signal_connected(void* self, void* signal);
void q_webchannel_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_webchannel_delete(void* self);

#endif
