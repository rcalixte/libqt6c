#pragma once
#ifndef SRCQT6C_LIBQOBJECTCLEANUPHANDLER_H
#define SRCQT6C_LIBQOBJECTCLEANUPHANDLER_H

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

QObjectCleanupHandler* q_objectcleanuphandler_new();
QMetaObject* q_objectcleanuphandler_meta_object(void* self);
void* q_objectcleanuphandler_metacast(void* self, const char* param1);
int32_t q_objectcleanuphandler_metacall(void* self, int64_t param1, int param2, void* param3);
void q_objectcleanuphandler_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_objectcleanuphandler_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_objectcleanuphandler_tr(const char* s);
QObject* q_objectcleanuphandler_add(void* self, void* object);
void q_objectcleanuphandler_remove(void* self, void* object);
bool q_objectcleanuphandler_is_empty(void* self);
void q_objectcleanuphandler_clear(void* self);
const char* q_objectcleanuphandler_tr2(const char* s, const char* c);
const char* q_objectcleanuphandler_tr3(const char* s, const char* c, int n);
const char* q_objectcleanuphandler_object_name(void* self);
void q_objectcleanuphandler_set_object_name(void* self, const char* name);
bool q_objectcleanuphandler_is_widget_type(void* self);
bool q_objectcleanuphandler_is_window_type(void* self);
bool q_objectcleanuphandler_is_quick_item_type(void* self);
bool q_objectcleanuphandler_signals_blocked(void* self);
bool q_objectcleanuphandler_block_signals(void* self, bool b);
QThread* q_objectcleanuphandler_thread(void* self);
void q_objectcleanuphandler_move_to_thread(void* self, void* thread);
int32_t q_objectcleanuphandler_start_timer(void* self, int interval);
void q_objectcleanuphandler_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_objectcleanuphandler_children(void* self);
void q_objectcleanuphandler_set_parent(void* self, void* parent);
void q_objectcleanuphandler_install_event_filter(void* self, void* filterObj);
void q_objectcleanuphandler_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_objectcleanuphandler_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_objectcleanuphandler_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_objectcleanuphandler_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_objectcleanuphandler_disconnect_with_q_meta_object_connection(void* param1);
void q_objectcleanuphandler_dump_object_tree(void* self);
void q_objectcleanuphandler_dump_object_info(void* self);
bool q_objectcleanuphandler_set_property(void* self, const char* name, void* value);
QVariant* q_objectcleanuphandler_property(void* self, const char* name);
const char** q_objectcleanuphandler_dynamic_property_names(void* self);
QBindingStorage* q_objectcleanuphandler_binding_storage(void* self);
QBindingStorage* q_objectcleanuphandler_binding_storage2(void* self);
void q_objectcleanuphandler_destroyed(void* self);
void q_objectcleanuphandler_on_destroyed(void* self, void (*slot)(void*));
QObject* q_objectcleanuphandler_parent(void* self);
bool q_objectcleanuphandler_inherits(void* self, const char* classname);
void q_objectcleanuphandler_delete_later(void* self);
int32_t q_objectcleanuphandler_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_objectcleanuphandler_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_objectcleanuphandler_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_objectcleanuphandler_destroyed1(void* self, void* param1);
void q_objectcleanuphandler_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_objectcleanuphandler_event(void* self, void* event);
bool q_objectcleanuphandler_qbase_event(void* self, void* event);
void q_objectcleanuphandler_on_event(void* self, bool (*slot)(void*, void*));
bool q_objectcleanuphandler_event_filter(void* self, void* watched, void* event);
bool q_objectcleanuphandler_qbase_event_filter(void* self, void* watched, void* event);
void q_objectcleanuphandler_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_objectcleanuphandler_timer_event(void* self, void* event);
void q_objectcleanuphandler_qbase_timer_event(void* self, void* event);
void q_objectcleanuphandler_on_timer_event(void* self, void (*slot)(void*, void*));
void q_objectcleanuphandler_child_event(void* self, void* event);
void q_objectcleanuphandler_qbase_child_event(void* self, void* event);
void q_objectcleanuphandler_on_child_event(void* self, void (*slot)(void*, void*));
void q_objectcleanuphandler_custom_event(void* self, void* event);
void q_objectcleanuphandler_qbase_custom_event(void* self, void* event);
void q_objectcleanuphandler_on_custom_event(void* self, void (*slot)(void*, void*));
void q_objectcleanuphandler_connect_notify(void* self, void* signal);
void q_objectcleanuphandler_qbase_connect_notify(void* self, void* signal);
void q_objectcleanuphandler_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_objectcleanuphandler_disconnect_notify(void* self, void* signal);
void q_objectcleanuphandler_qbase_disconnect_notify(void* self, void* signal);
void q_objectcleanuphandler_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_objectcleanuphandler_sender(void* self);
QObject* q_objectcleanuphandler_qbase_sender(void* self);
void q_objectcleanuphandler_on_sender(void* self, QObject* (*slot)());
int32_t q_objectcleanuphandler_sender_signal_index(void* self);
int32_t q_objectcleanuphandler_qbase_sender_signal_index(void* self);
void q_objectcleanuphandler_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_objectcleanuphandler_receivers(void* self, const char* signal);
int32_t q_objectcleanuphandler_qbase_receivers(void* self, const char* signal);
void q_objectcleanuphandler_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_objectcleanuphandler_is_signal_connected(void* self, void* signal);
bool q_objectcleanuphandler_qbase_is_signal_connected(void* self, void* signal);
void q_objectcleanuphandler_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_objectcleanuphandler_delete(void* self);

#endif
