#pragma once
#ifndef SRCQT6C_LIBQACCESSIBLEPLUGIN_H
#define SRCQT6C_LIBQACCESSIBLEPLUGIN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqaccessible.h"
#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QAccessiblePlugin* q_accessibleplugin_new();
QAccessiblePlugin* q_accessibleplugin_new2(void* parent);
QMetaObject* q_accessibleplugin_meta_object(void* self);
void* q_accessibleplugin_metacast(void* self, const char* param1);
int32_t q_accessibleplugin_metacall(void* self, int64_t param1, int param2, void* param3);
void q_accessibleplugin_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_accessibleplugin_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_accessibleplugin_tr(const char* s);
QAccessibleInterface* q_accessibleplugin_create(void* self, const char* key, void* object);
void q_accessibleplugin_on_create(void* self, QAccessibleInterface* (*slot)(void*, const char*, void*));
QAccessibleInterface* q_accessibleplugin_qbase_create(void* self, const char* key, void* object);
const char* q_accessibleplugin_tr2(const char* s, const char* c);
const char* q_accessibleplugin_tr3(const char* s, const char* c, int n);
const char* q_accessibleplugin_object_name(void* self);
void q_accessibleplugin_set_object_name(void* self, const char* name);
bool q_accessibleplugin_is_widget_type(void* self);
bool q_accessibleplugin_is_window_type(void* self);
bool q_accessibleplugin_is_quick_item_type(void* self);
bool q_accessibleplugin_signals_blocked(void* self);
bool q_accessibleplugin_block_signals(void* self, bool b);
QThread* q_accessibleplugin_thread(void* self);
void q_accessibleplugin_move_to_thread(void* self, void* thread);
int32_t q_accessibleplugin_start_timer(void* self, int interval);
void q_accessibleplugin_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_accessibleplugin_children(void* self);
void q_accessibleplugin_set_parent(void* self, void* parent);
void q_accessibleplugin_install_event_filter(void* self, void* filterObj);
void q_accessibleplugin_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_accessibleplugin_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_accessibleplugin_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_accessibleplugin_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_accessibleplugin_disconnect_with_q_meta_object_connection(void* param1);
void q_accessibleplugin_dump_object_tree(void* self);
void q_accessibleplugin_dump_object_info(void* self);
bool q_accessibleplugin_set_property(void* self, const char* name, void* value);
QVariant* q_accessibleplugin_property(void* self, const char* name);
const char** q_accessibleplugin_dynamic_property_names(void* self);
QBindingStorage* q_accessibleplugin_binding_storage(void* self);
QBindingStorage* q_accessibleplugin_binding_storage2(void* self);
void q_accessibleplugin_destroyed(void* self);
void q_accessibleplugin_on_destroyed(void* self, void (*slot)(void*));
QObject* q_accessibleplugin_parent(void* self);
bool q_accessibleplugin_inherits(void* self, const char* classname);
void q_accessibleplugin_delete_later(void* self);
int32_t q_accessibleplugin_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_accessibleplugin_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_accessibleplugin_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_accessibleplugin_destroyed1(void* self, void* param1);
void q_accessibleplugin_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_accessibleplugin_event(void* self, void* event);
bool q_accessibleplugin_qbase_event(void* self, void* event);
void q_accessibleplugin_on_event(void* self, bool (*slot)(void*, void*));
bool q_accessibleplugin_event_filter(void* self, void* watched, void* event);
bool q_accessibleplugin_qbase_event_filter(void* self, void* watched, void* event);
void q_accessibleplugin_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_accessibleplugin_timer_event(void* self, void* event);
void q_accessibleplugin_qbase_timer_event(void* self, void* event);
void q_accessibleplugin_on_timer_event(void* self, void (*slot)(void*, void*));
void q_accessibleplugin_child_event(void* self, void* event);
void q_accessibleplugin_qbase_child_event(void* self, void* event);
void q_accessibleplugin_on_child_event(void* self, void (*slot)(void*, void*));
void q_accessibleplugin_custom_event(void* self, void* event);
void q_accessibleplugin_qbase_custom_event(void* self, void* event);
void q_accessibleplugin_on_custom_event(void* self, void (*slot)(void*, void*));
void q_accessibleplugin_connect_notify(void* self, void* signal);
void q_accessibleplugin_qbase_connect_notify(void* self, void* signal);
void q_accessibleplugin_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_accessibleplugin_disconnect_notify(void* self, void* signal);
void q_accessibleplugin_qbase_disconnect_notify(void* self, void* signal);
void q_accessibleplugin_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_accessibleplugin_sender(void* self);
QObject* q_accessibleplugin_qbase_sender(void* self);
void q_accessibleplugin_on_sender(void* self, QObject* (*slot)());
int32_t q_accessibleplugin_sender_signal_index(void* self);
int32_t q_accessibleplugin_qbase_sender_signal_index(void* self);
void q_accessibleplugin_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_accessibleplugin_receivers(void* self, const char* signal);
int32_t q_accessibleplugin_qbase_receivers(void* self, const char* signal);
void q_accessibleplugin_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_accessibleplugin_is_signal_connected(void* self, void* signal);
bool q_accessibleplugin_qbase_is_signal_connected(void* self, void* signal);
void q_accessibleplugin_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_accessibleplugin_delete(void* self);

#endif
