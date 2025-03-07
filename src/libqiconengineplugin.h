#pragma once
#ifndef SRCQT6C_LIBQICONENGINEPLUGIN_H
#define SRCQT6C_LIBQICONENGINEPLUGIN_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqiconengine.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QIconEnginePlugin* q_iconengineplugin_new();
QIconEnginePlugin* q_iconengineplugin_new2(void* parent);
QMetaObject* q_iconengineplugin_meta_object(void* self);
void* q_iconengineplugin_metacast(void* self, const char* param1);
int32_t q_iconengineplugin_metacall(void* self, int64_t param1, int param2, void* param3);
void q_iconengineplugin_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_iconengineplugin_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_iconengineplugin_tr(const char* s);
QIconEngine* q_iconengineplugin_create(void* self, const char* filename);
void q_iconengineplugin_on_create(void* self, QIconEngine* (*slot)(void*, const char*));
QIconEngine* q_iconengineplugin_qbase_create(void* self, const char* filename);
const char* q_iconengineplugin_tr2(const char* s, const char* c);
const char* q_iconengineplugin_tr3(const char* s, const char* c, int n);
const char* q_iconengineplugin_object_name(void* self);
void q_iconengineplugin_set_object_name(void* self, const char* name);
bool q_iconengineplugin_is_widget_type(void* self);
bool q_iconengineplugin_is_window_type(void* self);
bool q_iconengineplugin_is_quick_item_type(void* self);
bool q_iconengineplugin_signals_blocked(void* self);
bool q_iconengineplugin_block_signals(void* self, bool b);
QThread* q_iconengineplugin_thread(void* self);
void q_iconengineplugin_move_to_thread(void* self, void* thread);
int32_t q_iconengineplugin_start_timer(void* self, int interval);
void q_iconengineplugin_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_iconengineplugin_children(void* self);
void q_iconengineplugin_set_parent(void* self, void* parent);
void q_iconengineplugin_install_event_filter(void* self, void* filterObj);
void q_iconengineplugin_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_iconengineplugin_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_iconengineplugin_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_iconengineplugin_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_iconengineplugin_disconnect_with_q_meta_object_connection(void* param1);
void q_iconengineplugin_dump_object_tree(void* self);
void q_iconengineplugin_dump_object_info(void* self);
bool q_iconengineplugin_set_property(void* self, const char* name, void* value);
QVariant* q_iconengineplugin_property(void* self, const char* name);
const char** q_iconengineplugin_dynamic_property_names(void* self);
QBindingStorage* q_iconengineplugin_binding_storage(void* self);
QBindingStorage* q_iconengineplugin_binding_storage2(void* self);
void q_iconengineplugin_destroyed(void* self);
void q_iconengineplugin_on_destroyed(void* self, void (*slot)(void*));
QObject* q_iconengineplugin_parent(void* self);
bool q_iconengineplugin_inherits(void* self, const char* classname);
void q_iconengineplugin_delete_later(void* self);
int32_t q_iconengineplugin_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_iconengineplugin_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_iconengineplugin_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_iconengineplugin_destroyed1(void* self, void* param1);
void q_iconengineplugin_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_iconengineplugin_event(void* self, void* event);
bool q_iconengineplugin_qbase_event(void* self, void* event);
void q_iconengineplugin_on_event(void* self, bool (*slot)(void*, void*));
bool q_iconengineplugin_event_filter(void* self, void* watched, void* event);
bool q_iconengineplugin_qbase_event_filter(void* self, void* watched, void* event);
void q_iconengineplugin_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_iconengineplugin_timer_event(void* self, void* event);
void q_iconengineplugin_qbase_timer_event(void* self, void* event);
void q_iconengineplugin_on_timer_event(void* self, void (*slot)(void*, void*));
void q_iconengineplugin_child_event(void* self, void* event);
void q_iconengineplugin_qbase_child_event(void* self, void* event);
void q_iconengineplugin_on_child_event(void* self, void (*slot)(void*, void*));
void q_iconengineplugin_custom_event(void* self, void* event);
void q_iconengineplugin_qbase_custom_event(void* self, void* event);
void q_iconengineplugin_on_custom_event(void* self, void (*slot)(void*, void*));
void q_iconengineplugin_connect_notify(void* self, void* signal);
void q_iconengineplugin_qbase_connect_notify(void* self, void* signal);
void q_iconengineplugin_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_iconengineplugin_disconnect_notify(void* self, void* signal);
void q_iconengineplugin_qbase_disconnect_notify(void* self, void* signal);
void q_iconengineplugin_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_iconengineplugin_sender(void* self);
QObject* q_iconengineplugin_qbase_sender(void* self);
void q_iconengineplugin_on_sender(void* self, QObject* (*slot)());
int32_t q_iconengineplugin_sender_signal_index(void* self);
int32_t q_iconengineplugin_qbase_sender_signal_index(void* self);
void q_iconengineplugin_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_iconengineplugin_receivers(void* self, const char* signal);
int32_t q_iconengineplugin_qbase_receivers(void* self, const char* signal);
void q_iconengineplugin_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_iconengineplugin_is_signal_connected(void* self, void* signal);
bool q_iconengineplugin_qbase_is_signal_connected(void* self, void* signal);
void q_iconengineplugin_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_iconengineplugin_delete(void* self);

#endif
