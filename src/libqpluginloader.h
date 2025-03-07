#pragma once
#ifndef SRCQT6C_LIBQPLUGINLOADER_H
#define SRCQT6C_LIBQPLUGINLOADER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqjsonobject.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqplugin.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QPluginLoader* q_pluginloader_new();
QPluginLoader* q_pluginloader_new2(const char* fileName);
QPluginLoader* q_pluginloader_new3(void* parent);
QPluginLoader* q_pluginloader_new4(const char* fileName, void* parent);
QMetaObject* q_pluginloader_meta_object(void* self);
void* q_pluginloader_metacast(void* self, const char* param1);
int32_t q_pluginloader_metacall(void* self, int64_t param1, int param2, void* param3);
void q_pluginloader_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_pluginloader_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_pluginloader_tr(const char* s);
QObject* q_pluginloader_instance(void* self);
QJsonObject* q_pluginloader_meta_data(void* self);
libqt_list /* of QObject* */ q_pluginloader_static_instances();
libqt_list /* of QStaticPlugin* */ q_pluginloader_static_plugins();
bool q_pluginloader_load(void* self);
bool q_pluginloader_unload(void* self);
bool q_pluginloader_is_loaded(void* self);
void q_pluginloader_set_file_name(void* self, const char* fileName);
const char* q_pluginloader_file_name(void* self);
const char* q_pluginloader_error_string(void* self);
void q_pluginloader_set_load_hints(void* self, int64_t loadHints);
int64_t q_pluginloader_load_hints(void* self);
const char* q_pluginloader_tr2(const char* s, const char* c);
const char* q_pluginloader_tr3(const char* s, const char* c, int n);
const char* q_pluginloader_object_name(void* self);
void q_pluginloader_set_object_name(void* self, const char* name);
bool q_pluginloader_is_widget_type(void* self);
bool q_pluginloader_is_window_type(void* self);
bool q_pluginloader_is_quick_item_type(void* self);
bool q_pluginloader_signals_blocked(void* self);
bool q_pluginloader_block_signals(void* self, bool b);
QThread* q_pluginloader_thread(void* self);
void q_pluginloader_move_to_thread(void* self, void* thread);
int32_t q_pluginloader_start_timer(void* self, int interval);
void q_pluginloader_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_pluginloader_children(void* self);
void q_pluginloader_set_parent(void* self, void* parent);
void q_pluginloader_install_event_filter(void* self, void* filterObj);
void q_pluginloader_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_pluginloader_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_pluginloader_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_pluginloader_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_pluginloader_disconnect_with_q_meta_object_connection(void* param1);
void q_pluginloader_dump_object_tree(void* self);
void q_pluginloader_dump_object_info(void* self);
bool q_pluginloader_set_property(void* self, const char* name, void* value);
QVariant* q_pluginloader_property(void* self, const char* name);
const char** q_pluginloader_dynamic_property_names(void* self);
QBindingStorage* q_pluginloader_binding_storage(void* self);
QBindingStorage* q_pluginloader_binding_storage2(void* self);
void q_pluginloader_destroyed(void* self);
void q_pluginloader_on_destroyed(void* self, void (*slot)(void*));
QObject* q_pluginloader_parent(void* self);
bool q_pluginloader_inherits(void* self, const char* classname);
void q_pluginloader_delete_later(void* self);
int32_t q_pluginloader_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_pluginloader_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_pluginloader_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_pluginloader_destroyed1(void* self, void* param1);
void q_pluginloader_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_pluginloader_event(void* self, void* event);
bool q_pluginloader_qbase_event(void* self, void* event);
void q_pluginloader_on_event(void* self, bool (*slot)(void*, void*));
bool q_pluginloader_event_filter(void* self, void* watched, void* event);
bool q_pluginloader_qbase_event_filter(void* self, void* watched, void* event);
void q_pluginloader_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_pluginloader_timer_event(void* self, void* event);
void q_pluginloader_qbase_timer_event(void* self, void* event);
void q_pluginloader_on_timer_event(void* self, void (*slot)(void*, void*));
void q_pluginloader_child_event(void* self, void* event);
void q_pluginloader_qbase_child_event(void* self, void* event);
void q_pluginloader_on_child_event(void* self, void (*slot)(void*, void*));
void q_pluginloader_custom_event(void* self, void* event);
void q_pluginloader_qbase_custom_event(void* self, void* event);
void q_pluginloader_on_custom_event(void* self, void (*slot)(void*, void*));
void q_pluginloader_connect_notify(void* self, void* signal);
void q_pluginloader_qbase_connect_notify(void* self, void* signal);
void q_pluginloader_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_pluginloader_disconnect_notify(void* self, void* signal);
void q_pluginloader_qbase_disconnect_notify(void* self, void* signal);
void q_pluginloader_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_pluginloader_sender(void* self);
QObject* q_pluginloader_qbase_sender(void* self);
void q_pluginloader_on_sender(void* self, QObject* (*slot)());
int32_t q_pluginloader_sender_signal_index(void* self);
int32_t q_pluginloader_qbase_sender_signal_index(void* self);
void q_pluginloader_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_pluginloader_receivers(void* self, const char* signal);
int32_t q_pluginloader_qbase_receivers(void* self, const char* signal);
void q_pluginloader_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_pluginloader_is_signal_connected(void* self, void* signal);
bool q_pluginloader_qbase_is_signal_connected(void* self, void* signal);
void q_pluginloader_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_pluginloader_delete(void* self);

#endif
