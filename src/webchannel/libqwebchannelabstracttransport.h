#pragma once
#ifndef SRC_WEBCHANNELQT6C_LIBQWEBCHANNELABSTRACTTRANSPORT_H
#define SRC_WEBCHANNELQT6C_LIBQWEBCHANNELABSTRACTTRANSPORT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqjsonobject.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QWebChannelAbstractTransport* q_webchannelabstracttransport_new();
QWebChannelAbstractTransport* q_webchannelabstracttransport_new2(void* parent);
QMetaObject* q_webchannelabstracttransport_meta_object(void* self);
void* q_webchannelabstracttransport_metacast(void* self, const char* param1);
int32_t q_webchannelabstracttransport_metacall(void* self, int64_t param1, int param2, void* param3);
void q_webchannelabstracttransport_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_webchannelabstracttransport_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_webchannelabstracttransport_tr(const char* s);
void q_webchannelabstracttransport_send_message(void* self, void* message);
void q_webchannelabstracttransport_on_send_message(void* self, void (*slot)(void*, void*));
void q_webchannelabstracttransport_qbase_send_message(void* self, void* message);
void q_webchannelabstracttransport_message_received(void* self, void* message, void* transport);
void q_webchannelabstracttransport_on_message_received(void* self, void (*slot)(void*, void*, void*));
const char* q_webchannelabstracttransport_tr2(const char* s, const char* c);
const char* q_webchannelabstracttransport_tr3(const char* s, const char* c, int n);
const char* q_webchannelabstracttransport_object_name(void* self);
void q_webchannelabstracttransport_set_object_name(void* self, const char* name);
bool q_webchannelabstracttransport_is_widget_type(void* self);
bool q_webchannelabstracttransport_is_window_type(void* self);
bool q_webchannelabstracttransport_is_quick_item_type(void* self);
bool q_webchannelabstracttransport_signals_blocked(void* self);
bool q_webchannelabstracttransport_block_signals(void* self, bool b);
QThread* q_webchannelabstracttransport_thread(void* self);
void q_webchannelabstracttransport_move_to_thread(void* self, void* thread);
int32_t q_webchannelabstracttransport_start_timer(void* self, int interval);
void q_webchannelabstracttransport_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_webchannelabstracttransport_children(void* self);
void q_webchannelabstracttransport_set_parent(void* self, void* parent);
void q_webchannelabstracttransport_install_event_filter(void* self, void* filterObj);
void q_webchannelabstracttransport_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_webchannelabstracttransport_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_webchannelabstracttransport_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_webchannelabstracttransport_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_webchannelabstracttransport_disconnect_with_q_meta_object_connection(void* param1);
void q_webchannelabstracttransport_dump_object_tree(void* self);
void q_webchannelabstracttransport_dump_object_info(void* self);
bool q_webchannelabstracttransport_set_property(void* self, const char* name, void* value);
QVariant* q_webchannelabstracttransport_property(void* self, const char* name);
const char** q_webchannelabstracttransport_dynamic_property_names(void* self);
QBindingStorage* q_webchannelabstracttransport_binding_storage(void* self);
QBindingStorage* q_webchannelabstracttransport_binding_storage2(void* self);
void q_webchannelabstracttransport_destroyed(void* self);
void q_webchannelabstracttransport_on_destroyed(void* self, void (*slot)(void*));
QObject* q_webchannelabstracttransport_parent(void* self);
bool q_webchannelabstracttransport_inherits(void* self, const char* classname);
void q_webchannelabstracttransport_delete_later(void* self);
int32_t q_webchannelabstracttransport_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_webchannelabstracttransport_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_webchannelabstracttransport_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_webchannelabstracttransport_destroyed1(void* self, void* param1);
void q_webchannelabstracttransport_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_webchannelabstracttransport_event(void* self, void* event);
bool q_webchannelabstracttransport_qbase_event(void* self, void* event);
void q_webchannelabstracttransport_on_event(void* self, bool (*slot)(void*, void*));
bool q_webchannelabstracttransport_event_filter(void* self, void* watched, void* event);
bool q_webchannelabstracttransport_qbase_event_filter(void* self, void* watched, void* event);
void q_webchannelabstracttransport_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_webchannelabstracttransport_timer_event(void* self, void* event);
void q_webchannelabstracttransport_qbase_timer_event(void* self, void* event);
void q_webchannelabstracttransport_on_timer_event(void* self, void (*slot)(void*, void*));
void q_webchannelabstracttransport_child_event(void* self, void* event);
void q_webchannelabstracttransport_qbase_child_event(void* self, void* event);
void q_webchannelabstracttransport_on_child_event(void* self, void (*slot)(void*, void*));
void q_webchannelabstracttransport_custom_event(void* self, void* event);
void q_webchannelabstracttransport_qbase_custom_event(void* self, void* event);
void q_webchannelabstracttransport_on_custom_event(void* self, void (*slot)(void*, void*));
void q_webchannelabstracttransport_connect_notify(void* self, void* signal);
void q_webchannelabstracttransport_qbase_connect_notify(void* self, void* signal);
void q_webchannelabstracttransport_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_webchannelabstracttransport_disconnect_notify(void* self, void* signal);
void q_webchannelabstracttransport_qbase_disconnect_notify(void* self, void* signal);
void q_webchannelabstracttransport_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_webchannelabstracttransport_sender(void* self);
QObject* q_webchannelabstracttransport_qbase_sender(void* self);
void q_webchannelabstracttransport_on_sender(void* self, QObject* (*slot)());
int32_t q_webchannelabstracttransport_sender_signal_index(void* self);
int32_t q_webchannelabstracttransport_qbase_sender_signal_index(void* self);
void q_webchannelabstracttransport_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_webchannelabstracttransport_receivers(void* self, const char* signal);
int32_t q_webchannelabstracttransport_qbase_receivers(void* self, const char* signal);
void q_webchannelabstracttransport_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_webchannelabstracttransport_is_signal_connected(void* self, void* signal);
bool q_webchannelabstracttransport_qbase_is_signal_connected(void* self, void* signal);
void q_webchannelabstracttransport_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_webchannelabstracttransport_delete(void* self);

#endif
