#pragma once
#ifndef SRCQT6C_LIBQACCESSIBLEBRIDGE_H
#define SRCQT6C_LIBQACCESSIBLEBRIDGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqevent.h"
#include "libqaccessible.h"
#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

void q_accessiblebridge_set_root_object(void* self, void* rootObject);
void q_accessiblebridge_notify_accessibility_update(void* self, void* event);
void q_accessiblebridge_operator_assign(void* self, void* param1);
void q_accessiblebridge_delete(void* self);

QAccessibleBridgePlugin* q_accessiblebridgeplugin_new();
QAccessibleBridgePlugin* q_accessiblebridgeplugin_new2(void* parent);
QMetaObject* q_accessiblebridgeplugin_meta_object(void* self);
void* q_accessiblebridgeplugin_metacast(void* self, const char* param1);
int32_t q_accessiblebridgeplugin_metacall(void* self, int64_t param1, int param2, void* param3);
void q_accessiblebridgeplugin_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_accessiblebridgeplugin_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_accessiblebridgeplugin_tr(const char* s);
QAccessibleBridge* q_accessiblebridgeplugin_create(void* self, const char* key);
void q_accessiblebridgeplugin_on_create(void* self, QAccessibleBridge* (*slot)(void*, const char*));
QAccessibleBridge* q_accessiblebridgeplugin_qbase_create(void* self, const char* key);
const char* q_accessiblebridgeplugin_tr2(const char* s, const char* c);
const char* q_accessiblebridgeplugin_tr3(const char* s, const char* c, int n);
const char* q_accessiblebridgeplugin_object_name(void* self);
void q_accessiblebridgeplugin_set_object_name(void* self, const char* name);
bool q_accessiblebridgeplugin_is_widget_type(void* self);
bool q_accessiblebridgeplugin_is_window_type(void* self);
bool q_accessiblebridgeplugin_is_quick_item_type(void* self);
bool q_accessiblebridgeplugin_signals_blocked(void* self);
bool q_accessiblebridgeplugin_block_signals(void* self, bool b);
QThread* q_accessiblebridgeplugin_thread(void* self);
void q_accessiblebridgeplugin_move_to_thread(void* self, void* thread);
int32_t q_accessiblebridgeplugin_start_timer(void* self, int interval);
void q_accessiblebridgeplugin_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_accessiblebridgeplugin_children(void* self);
void q_accessiblebridgeplugin_set_parent(void* self, void* parent);
void q_accessiblebridgeplugin_install_event_filter(void* self, void* filterObj);
void q_accessiblebridgeplugin_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_accessiblebridgeplugin_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_accessiblebridgeplugin_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_accessiblebridgeplugin_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_accessiblebridgeplugin_disconnect_with_q_meta_object_connection(void* param1);
void q_accessiblebridgeplugin_dump_object_tree(void* self);
void q_accessiblebridgeplugin_dump_object_info(void* self);
bool q_accessiblebridgeplugin_set_property(void* self, const char* name, void* value);
QVariant* q_accessiblebridgeplugin_property(void* self, const char* name);
const char** q_accessiblebridgeplugin_dynamic_property_names(void* self);
QBindingStorage* q_accessiblebridgeplugin_binding_storage(void* self);
QBindingStorage* q_accessiblebridgeplugin_binding_storage2(void* self);
void q_accessiblebridgeplugin_destroyed(void* self);
void q_accessiblebridgeplugin_on_destroyed(void* self, void (*slot)(void*));
QObject* q_accessiblebridgeplugin_parent(void* self);
bool q_accessiblebridgeplugin_inherits(void* self, const char* classname);
void q_accessiblebridgeplugin_delete_later(void* self);
int32_t q_accessiblebridgeplugin_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_accessiblebridgeplugin_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_accessiblebridgeplugin_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_accessiblebridgeplugin_destroyed1(void* self, void* param1);
void q_accessiblebridgeplugin_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_accessiblebridgeplugin_event(void* self, void* event);
bool q_accessiblebridgeplugin_qbase_event(void* self, void* event);
void q_accessiblebridgeplugin_on_event(void* self, bool (*slot)(void*, void*));
bool q_accessiblebridgeplugin_event_filter(void* self, void* watched, void* event);
bool q_accessiblebridgeplugin_qbase_event_filter(void* self, void* watched, void* event);
void q_accessiblebridgeplugin_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_accessiblebridgeplugin_timer_event(void* self, void* event);
void q_accessiblebridgeplugin_qbase_timer_event(void* self, void* event);
void q_accessiblebridgeplugin_on_timer_event(void* self, void (*slot)(void*, void*));
void q_accessiblebridgeplugin_child_event(void* self, void* event);
void q_accessiblebridgeplugin_qbase_child_event(void* self, void* event);
void q_accessiblebridgeplugin_on_child_event(void* self, void (*slot)(void*, void*));
void q_accessiblebridgeplugin_custom_event(void* self, void* event);
void q_accessiblebridgeplugin_qbase_custom_event(void* self, void* event);
void q_accessiblebridgeplugin_on_custom_event(void* self, void (*slot)(void*, void*));
void q_accessiblebridgeplugin_connect_notify(void* self, void* signal);
void q_accessiblebridgeplugin_qbase_connect_notify(void* self, void* signal);
void q_accessiblebridgeplugin_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_accessiblebridgeplugin_disconnect_notify(void* self, void* signal);
void q_accessiblebridgeplugin_qbase_disconnect_notify(void* self, void* signal);
void q_accessiblebridgeplugin_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_accessiblebridgeplugin_sender(void* self);
QObject* q_accessiblebridgeplugin_qbase_sender(void* self);
void q_accessiblebridgeplugin_on_sender(void* self, QObject* (*slot)());
int32_t q_accessiblebridgeplugin_sender_signal_index(void* self);
int32_t q_accessiblebridgeplugin_qbase_sender_signal_index(void* self);
void q_accessiblebridgeplugin_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_accessiblebridgeplugin_receivers(void* self, const char* signal);
int32_t q_accessiblebridgeplugin_qbase_receivers(void* self, const char* signal);
void q_accessiblebridgeplugin_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_accessiblebridgeplugin_is_signal_connected(void* self, void* signal);
bool q_accessiblebridgeplugin_qbase_is_signal_connected(void* self, void* signal);
void q_accessiblebridgeplugin_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_accessiblebridgeplugin_delete(void* self);

#endif
