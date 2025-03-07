#pragma once
#ifndef SRC_WEBCHANNELQT6C_LIBQQMLWEBCHANNEL_H
#define SRC_WEBCHANNELQT6C_LIBQQMLWEBCHANNEL_H

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
#include "libqwebchannel.h"
#include "libqwebchannelabstracttransport.h"

QQmlWebChannel* q_qmlwebchannel_new();
QQmlWebChannel* q_qmlwebchannel_new2(void* parent);
QMetaObject* q_qmlwebchannel_meta_object(void* self);
void* q_qmlwebchannel_metacast(void* self, const char* param1);
int32_t q_qmlwebchannel_metacall(void* self, int64_t param1, int param2, void* param3);
void q_qmlwebchannel_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_qmlwebchannel_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_qmlwebchannel_tr(const char* s);
void q_qmlwebchannel_register_objects(void* self, libqt_map /* of const char* to QVariant* */ objects);
void q_qmlwebchannel_connect_to(void* self, void* transport);
void q_qmlwebchannel_disconnect_from(void* self, void* transport);
const char* q_qmlwebchannel_tr2(const char* s, const char* c);
const char* q_qmlwebchannel_tr3(const char* s, const char* c, int n);
libqt_map /* of const char* to QObject* */ q_qmlwebchannel_registered_objects(void* self);
void q_qmlwebchannel_register_object(void* self, const char* id, void* object);
void q_qmlwebchannel_deregister_object(void* self, void* object);
bool q_qmlwebchannel_block_updates(void* self);
void q_qmlwebchannel_set_block_updates(void* self, bool block);
int32_t q_qmlwebchannel_property_update_interval(void* self);
void q_qmlwebchannel_set_property_update_interval(void* self, int ms);
void q_qmlwebchannel_block_updates_changed(void* self, bool block);
void q_qmlwebchannel_on_block_updates_changed(void* self, void (*slot)(void*, bool));
const char* q_qmlwebchannel_object_name(void* self);
void q_qmlwebchannel_set_object_name(void* self, const char* name);
bool q_qmlwebchannel_is_widget_type(void* self);
bool q_qmlwebchannel_is_window_type(void* self);
bool q_qmlwebchannel_is_quick_item_type(void* self);
bool q_qmlwebchannel_signals_blocked(void* self);
bool q_qmlwebchannel_block_signals(void* self, bool b);
QThread* q_qmlwebchannel_thread(void* self);
void q_qmlwebchannel_move_to_thread(void* self, void* thread);
int32_t q_qmlwebchannel_start_timer(void* self, int interval);
void q_qmlwebchannel_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_qmlwebchannel_children(void* self);
void q_qmlwebchannel_set_parent(void* self, void* parent);
void q_qmlwebchannel_install_event_filter(void* self, void* filterObj);
void q_qmlwebchannel_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_qmlwebchannel_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_qmlwebchannel_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_qmlwebchannel_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_qmlwebchannel_disconnect_with_q_meta_object_connection(void* param1);
void q_qmlwebchannel_dump_object_tree(void* self);
void q_qmlwebchannel_dump_object_info(void* self);
bool q_qmlwebchannel_set_property(void* self, const char* name, void* value);
QVariant* q_qmlwebchannel_property(void* self, const char* name);
const char** q_qmlwebchannel_dynamic_property_names(void* self);
QBindingStorage* q_qmlwebchannel_binding_storage(void* self);
QBindingStorage* q_qmlwebchannel_binding_storage2(void* self);
void q_qmlwebchannel_destroyed(void* self);
void q_qmlwebchannel_on_destroyed(void* self, void (*slot)(void*));
QObject* q_qmlwebchannel_parent(void* self);
bool q_qmlwebchannel_inherits(void* self, const char* classname);
void q_qmlwebchannel_delete_later(void* self);
int32_t q_qmlwebchannel_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_qmlwebchannel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_qmlwebchannel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_qmlwebchannel_destroyed1(void* self, void* param1);
void q_qmlwebchannel_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_qmlwebchannel_event(void* self, void* event);
bool q_qmlwebchannel_qbase_event(void* self, void* event);
void q_qmlwebchannel_on_event(void* self, bool (*slot)(void*, void*));
bool q_qmlwebchannel_event_filter(void* self, void* watched, void* event);
bool q_qmlwebchannel_qbase_event_filter(void* self, void* watched, void* event);
void q_qmlwebchannel_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_qmlwebchannel_timer_event(void* self, void* event);
void q_qmlwebchannel_qbase_timer_event(void* self, void* event);
void q_qmlwebchannel_on_timer_event(void* self, void (*slot)(void*, void*));
void q_qmlwebchannel_child_event(void* self, void* event);
void q_qmlwebchannel_qbase_child_event(void* self, void* event);
void q_qmlwebchannel_on_child_event(void* self, void (*slot)(void*, void*));
void q_qmlwebchannel_custom_event(void* self, void* event);
void q_qmlwebchannel_qbase_custom_event(void* self, void* event);
void q_qmlwebchannel_on_custom_event(void* self, void (*slot)(void*, void*));
void q_qmlwebchannel_connect_notify(void* self, void* signal);
void q_qmlwebchannel_qbase_connect_notify(void* self, void* signal);
void q_qmlwebchannel_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_qmlwebchannel_disconnect_notify(void* self, void* signal);
void q_qmlwebchannel_qbase_disconnect_notify(void* self, void* signal);
void q_qmlwebchannel_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_qmlwebchannel_sender(void* self);
QObject* q_qmlwebchannel_qbase_sender(void* self);
void q_qmlwebchannel_on_sender(void* self, QObject* (*slot)());
int32_t q_qmlwebchannel_sender_signal_index(void* self);
int32_t q_qmlwebchannel_qbase_sender_signal_index(void* self);
void q_qmlwebchannel_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_qmlwebchannel_receivers(void* self, const char* signal);
int32_t q_qmlwebchannel_qbase_receivers(void* self, const char* signal);
void q_qmlwebchannel_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_qmlwebchannel_is_signal_connected(void* self, void* signal);
bool q_qmlwebchannel_qbase_is_signal_connected(void* self, void* signal);
void q_qmlwebchannel_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_qmlwebchannel_delete(void* self);

#endif
