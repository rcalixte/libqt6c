#pragma once
#ifndef SRCQT6C_LIBQSIGNALMAPPER_H
#define SRCQT6C_LIBQSIGNALMAPPER_H

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

QSignalMapper* q_signalmapper_new();
QSignalMapper* q_signalmapper_new2(void* parent);
QMetaObject* q_signalmapper_meta_object(void* self);
void* q_signalmapper_metacast(void* self, const char* param1);
int32_t q_signalmapper_metacall(void* self, int64_t param1, int param2, void* param3);
void q_signalmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_signalmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_signalmapper_tr(const char* s);
void q_signalmapper_set_mapping(void* self, void* sender, int id);
void q_signalmapper_set_mapping2(void* self, void* sender, const char* text);
void q_signalmapper_set_mapping3(void* self, void* sender, void* object);
void q_signalmapper_remove_mappings(void* self, void* sender);
QObject* q_signalmapper_mapping(void* self, int id);
QObject* q_signalmapper_mapping_with_text(void* self, const char* text);
QObject* q_signalmapper_mapping_with_object(void* self, void* object);
void q_signalmapper_mapped_int(void* self, int param1);
void q_signalmapper_on_mapped_int(void* self, void (*slot)(void*, int));
void q_signalmapper_mapped_string(void* self, const char* param1);
void q_signalmapper_on_mapped_string(void* self, void (*slot)(void*, const char*));
void q_signalmapper_mapped_object(void* self, void* param1);
void q_signalmapper_on_mapped_object(void* self, void (*slot)(void*, void*));
void q_signalmapper_map(void* self);
void q_signalmapper_map_with_sender(void* self, void* sender);
const char* q_signalmapper_tr2(const char* s, const char* c);
const char* q_signalmapper_tr3(const char* s, const char* c, int n);
const char* q_signalmapper_object_name(void* self);
void q_signalmapper_set_object_name(void* self, const char* name);
bool q_signalmapper_is_widget_type(void* self);
bool q_signalmapper_is_window_type(void* self);
bool q_signalmapper_is_quick_item_type(void* self);
bool q_signalmapper_signals_blocked(void* self);
bool q_signalmapper_block_signals(void* self, bool b);
QThread* q_signalmapper_thread(void* self);
void q_signalmapper_move_to_thread(void* self, void* thread);
int32_t q_signalmapper_start_timer(void* self, int interval);
void q_signalmapper_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_signalmapper_children(void* self);
void q_signalmapper_set_parent(void* self, void* parent);
void q_signalmapper_install_event_filter(void* self, void* filterObj);
void q_signalmapper_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_signalmapper_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_signalmapper_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_signalmapper_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_signalmapper_disconnect_with_q_meta_object_connection(void* param1);
void q_signalmapper_dump_object_tree(void* self);
void q_signalmapper_dump_object_info(void* self);
bool q_signalmapper_set_property(void* self, const char* name, void* value);
QVariant* q_signalmapper_property(void* self, const char* name);
const char** q_signalmapper_dynamic_property_names(void* self);
QBindingStorage* q_signalmapper_binding_storage(void* self);
QBindingStorage* q_signalmapper_binding_storage2(void* self);
void q_signalmapper_destroyed(void* self);
void q_signalmapper_on_destroyed(void* self, void (*slot)(void*));
QObject* q_signalmapper_parent(void* self);
bool q_signalmapper_inherits(void* self, const char* classname);
void q_signalmapper_delete_later(void* self);
int32_t q_signalmapper_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_signalmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_signalmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_signalmapper_destroyed1(void* self, void* param1);
void q_signalmapper_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_signalmapper_event(void* self, void* event);
bool q_signalmapper_qbase_event(void* self, void* event);
void q_signalmapper_on_event(void* self, bool (*slot)(void*, void*));
bool q_signalmapper_event_filter(void* self, void* watched, void* event);
bool q_signalmapper_qbase_event_filter(void* self, void* watched, void* event);
void q_signalmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_signalmapper_timer_event(void* self, void* event);
void q_signalmapper_qbase_timer_event(void* self, void* event);
void q_signalmapper_on_timer_event(void* self, void (*slot)(void*, void*));
void q_signalmapper_child_event(void* self, void* event);
void q_signalmapper_qbase_child_event(void* self, void* event);
void q_signalmapper_on_child_event(void* self, void (*slot)(void*, void*));
void q_signalmapper_custom_event(void* self, void* event);
void q_signalmapper_qbase_custom_event(void* self, void* event);
void q_signalmapper_on_custom_event(void* self, void (*slot)(void*, void*));
void q_signalmapper_connect_notify(void* self, void* signal);
void q_signalmapper_qbase_connect_notify(void* self, void* signal);
void q_signalmapper_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_signalmapper_disconnect_notify(void* self, void* signal);
void q_signalmapper_qbase_disconnect_notify(void* self, void* signal);
void q_signalmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_signalmapper_sender(void* self);
QObject* q_signalmapper_qbase_sender(void* self);
void q_signalmapper_on_sender(void* self, QObject* (*slot)());
int32_t q_signalmapper_sender_signal_index(void* self);
int32_t q_signalmapper_qbase_sender_signal_index(void* self);
void q_signalmapper_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_signalmapper_receivers(void* self, const char* signal);
int32_t q_signalmapper_qbase_receivers(void* self, const char* signal);
void q_signalmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_signalmapper_is_signal_connected(void* self, void* signal);
bool q_signalmapper_qbase_is_signal_connected(void* self, void* signal);
void q_signalmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_signalmapper_delete(void* self);

#endif
