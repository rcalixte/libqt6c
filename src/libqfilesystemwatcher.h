#pragma once
#ifndef SRCQT6C_LIBQFILESYSTEMWATCHER_H
#define SRCQT6C_LIBQFILESYSTEMWATCHER_H

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

QFileSystemWatcher* q_filesystemwatcher_new();
QFileSystemWatcher* q_filesystemwatcher_new2(const char* paths[]);
QFileSystemWatcher* q_filesystemwatcher_new3(void* parent);
QFileSystemWatcher* q_filesystemwatcher_new4(const char* paths[], void* parent);
QMetaObject* q_filesystemwatcher_meta_object(void* self);
void* q_filesystemwatcher_metacast(void* self, const char* param1);
int32_t q_filesystemwatcher_metacall(void* self, int64_t param1, int param2, void* param3);
void q_filesystemwatcher_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_filesystemwatcher_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_filesystemwatcher_tr(const char* s);
bool q_filesystemwatcher_add_path(void* self, const char* file);
const char** q_filesystemwatcher_add_paths(void* self, const char* files[]);
bool q_filesystemwatcher_remove_path(void* self, const char* file);
const char** q_filesystemwatcher_remove_paths(void* self, const char* files[]);
const char** q_filesystemwatcher_files(void* self);
const char** q_filesystemwatcher_directories(void* self);
const char* q_filesystemwatcher_tr2(const char* s, const char* c);
const char* q_filesystemwatcher_tr3(const char* s, const char* c, int n);
const char* q_filesystemwatcher_object_name(void* self);
void q_filesystemwatcher_set_object_name(void* self, const char* name);
bool q_filesystemwatcher_is_widget_type(void* self);
bool q_filesystemwatcher_is_window_type(void* self);
bool q_filesystemwatcher_is_quick_item_type(void* self);
bool q_filesystemwatcher_signals_blocked(void* self);
bool q_filesystemwatcher_block_signals(void* self, bool b);
QThread* q_filesystemwatcher_thread(void* self);
void q_filesystemwatcher_move_to_thread(void* self, void* thread);
int32_t q_filesystemwatcher_start_timer(void* self, int interval);
void q_filesystemwatcher_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_filesystemwatcher_children(void* self);
void q_filesystemwatcher_set_parent(void* self, void* parent);
void q_filesystemwatcher_install_event_filter(void* self, void* filterObj);
void q_filesystemwatcher_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_filesystemwatcher_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_filesystemwatcher_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_filesystemwatcher_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_filesystemwatcher_disconnect_with_q_meta_object_connection(void* param1);
void q_filesystemwatcher_dump_object_tree(void* self);
void q_filesystemwatcher_dump_object_info(void* self);
bool q_filesystemwatcher_set_property(void* self, const char* name, void* value);
QVariant* q_filesystemwatcher_property(void* self, const char* name);
const char** q_filesystemwatcher_dynamic_property_names(void* self);
QBindingStorage* q_filesystemwatcher_binding_storage(void* self);
QBindingStorage* q_filesystemwatcher_binding_storage2(void* self);
void q_filesystemwatcher_destroyed(void* self);
void q_filesystemwatcher_on_destroyed(void* self, void (*slot)(void*));
QObject* q_filesystemwatcher_parent(void* self);
bool q_filesystemwatcher_inherits(void* self, const char* classname);
void q_filesystemwatcher_delete_later(void* self);
int32_t q_filesystemwatcher_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_filesystemwatcher_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_filesystemwatcher_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_filesystemwatcher_destroyed1(void* self, void* param1);
void q_filesystemwatcher_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_filesystemwatcher_event(void* self, void* event);
bool q_filesystemwatcher_qbase_event(void* self, void* event);
void q_filesystemwatcher_on_event(void* self, bool (*slot)(void*, void*));
bool q_filesystemwatcher_event_filter(void* self, void* watched, void* event);
bool q_filesystemwatcher_qbase_event_filter(void* self, void* watched, void* event);
void q_filesystemwatcher_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_filesystemwatcher_timer_event(void* self, void* event);
void q_filesystemwatcher_qbase_timer_event(void* self, void* event);
void q_filesystemwatcher_on_timer_event(void* self, void (*slot)(void*, void*));
void q_filesystemwatcher_child_event(void* self, void* event);
void q_filesystemwatcher_qbase_child_event(void* self, void* event);
void q_filesystemwatcher_on_child_event(void* self, void (*slot)(void*, void*));
void q_filesystemwatcher_custom_event(void* self, void* event);
void q_filesystemwatcher_qbase_custom_event(void* self, void* event);
void q_filesystemwatcher_on_custom_event(void* self, void (*slot)(void*, void*));
void q_filesystemwatcher_connect_notify(void* self, void* signal);
void q_filesystemwatcher_qbase_connect_notify(void* self, void* signal);
void q_filesystemwatcher_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_filesystemwatcher_disconnect_notify(void* self, void* signal);
void q_filesystemwatcher_qbase_disconnect_notify(void* self, void* signal);
void q_filesystemwatcher_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_filesystemwatcher_sender(void* self);
QObject* q_filesystemwatcher_qbase_sender(void* self);
void q_filesystemwatcher_on_sender(void* self, QObject* (*slot)());
int32_t q_filesystemwatcher_sender_signal_index(void* self);
int32_t q_filesystemwatcher_qbase_sender_signal_index(void* self);
void q_filesystemwatcher_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_filesystemwatcher_receivers(void* self, const char* signal);
int32_t q_filesystemwatcher_qbase_receivers(void* self, const char* signal);
void q_filesystemwatcher_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_filesystemwatcher_is_signal_connected(void* self, void* signal);
bool q_filesystemwatcher_qbase_is_signal_connected(void* self, void* signal);
void q_filesystemwatcher_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_filesystemwatcher_delete(void* self);

#endif
