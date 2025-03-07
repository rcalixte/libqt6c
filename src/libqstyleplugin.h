#pragma once
#ifndef SRCQT6C_LIBQSTYLEPLUGIN_H
#define SRCQT6C_LIBQSTYLEPLUGIN_H

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
#include "libqstyle.h"
#include "libqthread.h"
#include "libqvariant.h"

QStylePlugin* q_styleplugin_new();
QStylePlugin* q_styleplugin_new2(void* parent);
QMetaObject* q_styleplugin_meta_object(void* self);
void* q_styleplugin_metacast(void* self, const char* param1);
int32_t q_styleplugin_metacall(void* self, int64_t param1, int param2, void* param3);
void q_styleplugin_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_styleplugin_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_styleplugin_tr(const char* s);
QStyle* q_styleplugin_create(void* self, const char* key);
void q_styleplugin_on_create(void* self, QStyle* (*slot)(void*, const char*));
QStyle* q_styleplugin_qbase_create(void* self, const char* key);
const char* q_styleplugin_tr2(const char* s, const char* c);
const char* q_styleplugin_tr3(const char* s, const char* c, int n);
const char* q_styleplugin_object_name(void* self);
void q_styleplugin_set_object_name(void* self, const char* name);
bool q_styleplugin_is_widget_type(void* self);
bool q_styleplugin_is_window_type(void* self);
bool q_styleplugin_is_quick_item_type(void* self);
bool q_styleplugin_signals_blocked(void* self);
bool q_styleplugin_block_signals(void* self, bool b);
QThread* q_styleplugin_thread(void* self);
void q_styleplugin_move_to_thread(void* self, void* thread);
int32_t q_styleplugin_start_timer(void* self, int interval);
void q_styleplugin_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_styleplugin_children(void* self);
void q_styleplugin_set_parent(void* self, void* parent);
void q_styleplugin_install_event_filter(void* self, void* filterObj);
void q_styleplugin_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_styleplugin_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_styleplugin_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_styleplugin_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_styleplugin_disconnect_with_q_meta_object_connection(void* param1);
void q_styleplugin_dump_object_tree(void* self);
void q_styleplugin_dump_object_info(void* self);
bool q_styleplugin_set_property(void* self, const char* name, void* value);
QVariant* q_styleplugin_property(void* self, const char* name);
const char** q_styleplugin_dynamic_property_names(void* self);
QBindingStorage* q_styleplugin_binding_storage(void* self);
QBindingStorage* q_styleplugin_binding_storage2(void* self);
void q_styleplugin_destroyed(void* self);
void q_styleplugin_on_destroyed(void* self, void (*slot)(void*));
QObject* q_styleplugin_parent(void* self);
bool q_styleplugin_inherits(void* self, const char* classname);
void q_styleplugin_delete_later(void* self);
int32_t q_styleplugin_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_styleplugin_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_styleplugin_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_styleplugin_destroyed1(void* self, void* param1);
void q_styleplugin_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_styleplugin_event(void* self, void* event);
bool q_styleplugin_qbase_event(void* self, void* event);
void q_styleplugin_on_event(void* self, bool (*slot)(void*, void*));
bool q_styleplugin_event_filter(void* self, void* watched, void* event);
bool q_styleplugin_qbase_event_filter(void* self, void* watched, void* event);
void q_styleplugin_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_styleplugin_timer_event(void* self, void* event);
void q_styleplugin_qbase_timer_event(void* self, void* event);
void q_styleplugin_on_timer_event(void* self, void (*slot)(void*, void*));
void q_styleplugin_child_event(void* self, void* event);
void q_styleplugin_qbase_child_event(void* self, void* event);
void q_styleplugin_on_child_event(void* self, void (*slot)(void*, void*));
void q_styleplugin_custom_event(void* self, void* event);
void q_styleplugin_qbase_custom_event(void* self, void* event);
void q_styleplugin_on_custom_event(void* self, void (*slot)(void*, void*));
void q_styleplugin_connect_notify(void* self, void* signal);
void q_styleplugin_qbase_connect_notify(void* self, void* signal);
void q_styleplugin_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_styleplugin_disconnect_notify(void* self, void* signal);
void q_styleplugin_qbase_disconnect_notify(void* self, void* signal);
void q_styleplugin_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_styleplugin_sender(void* self);
QObject* q_styleplugin_qbase_sender(void* self);
void q_styleplugin_on_sender(void* self, QObject* (*slot)());
int32_t q_styleplugin_sender_signal_index(void* self);
int32_t q_styleplugin_qbase_sender_signal_index(void* self);
void q_styleplugin_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_styleplugin_receivers(void* self, const char* signal);
int32_t q_styleplugin_qbase_receivers(void* self, const char* signal);
void q_styleplugin_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_styleplugin_is_signal_connected(void* self, void* signal);
bool q_styleplugin_qbase_is_signal_connected(void* self, void* signal);
void q_styleplugin_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_styleplugin_delete(void* self);

#endif
