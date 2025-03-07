#pragma once
#ifndef SRCQT6C_LIBQFILESELECTOR_H
#define SRCQT6C_LIBQFILESELECTOR_H

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
#include "libqurl.h"
#include "libqvariant.h"

QFileSelector* q_fileselector_new();
QFileSelector* q_fileselector_new2(void* parent);
QMetaObject* q_fileselector_meta_object(void* self);
void* q_fileselector_metacast(void* self, const char* param1);
int32_t q_fileselector_metacall(void* self, int64_t param1, int param2, void* param3);
void q_fileselector_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_fileselector_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_fileselector_tr(const char* s);
const char* q_fileselector_select(void* self, const char* filePath);
QUrl* q_fileselector_select_with_file_path(void* self, void* filePath);
const char** q_fileselector_extra_selectors(void* self);
void q_fileselector_set_extra_selectors(void* self, const char* list[]);
const char** q_fileselector_all_selectors(void* self);
const char* q_fileselector_tr2(const char* s, const char* c);
const char* q_fileselector_tr3(const char* s, const char* c, int n);
const char* q_fileselector_object_name(void* self);
void q_fileselector_set_object_name(void* self, const char* name);
bool q_fileselector_is_widget_type(void* self);
bool q_fileselector_is_window_type(void* self);
bool q_fileselector_is_quick_item_type(void* self);
bool q_fileselector_signals_blocked(void* self);
bool q_fileselector_block_signals(void* self, bool b);
QThread* q_fileselector_thread(void* self);
void q_fileselector_move_to_thread(void* self, void* thread);
int32_t q_fileselector_start_timer(void* self, int interval);
void q_fileselector_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_fileselector_children(void* self);
void q_fileselector_set_parent(void* self, void* parent);
void q_fileselector_install_event_filter(void* self, void* filterObj);
void q_fileselector_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_fileselector_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_fileselector_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_fileselector_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_fileselector_disconnect_with_q_meta_object_connection(void* param1);
void q_fileselector_dump_object_tree(void* self);
void q_fileselector_dump_object_info(void* self);
bool q_fileselector_set_property(void* self, const char* name, void* value);
QVariant* q_fileselector_property(void* self, const char* name);
const char** q_fileselector_dynamic_property_names(void* self);
QBindingStorage* q_fileselector_binding_storage(void* self);
QBindingStorage* q_fileselector_binding_storage2(void* self);
void q_fileselector_destroyed(void* self);
void q_fileselector_on_destroyed(void* self, void (*slot)(void*));
QObject* q_fileselector_parent(void* self);
bool q_fileselector_inherits(void* self, const char* classname);
void q_fileselector_delete_later(void* self);
int32_t q_fileselector_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_fileselector_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_fileselector_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_fileselector_destroyed1(void* self, void* param1);
void q_fileselector_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_fileselector_event(void* self, void* event);
bool q_fileselector_qbase_event(void* self, void* event);
void q_fileselector_on_event(void* self, bool (*slot)(void*, void*));
bool q_fileselector_event_filter(void* self, void* watched, void* event);
bool q_fileselector_qbase_event_filter(void* self, void* watched, void* event);
void q_fileselector_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_fileselector_timer_event(void* self, void* event);
void q_fileselector_qbase_timer_event(void* self, void* event);
void q_fileselector_on_timer_event(void* self, void (*slot)(void*, void*));
void q_fileselector_child_event(void* self, void* event);
void q_fileselector_qbase_child_event(void* self, void* event);
void q_fileselector_on_child_event(void* self, void (*slot)(void*, void*));
void q_fileselector_custom_event(void* self, void* event);
void q_fileselector_qbase_custom_event(void* self, void* event);
void q_fileselector_on_custom_event(void* self, void (*slot)(void*, void*));
void q_fileselector_connect_notify(void* self, void* signal);
void q_fileselector_qbase_connect_notify(void* self, void* signal);
void q_fileselector_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_fileselector_disconnect_notify(void* self, void* signal);
void q_fileselector_qbase_disconnect_notify(void* self, void* signal);
void q_fileselector_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_fileselector_sender(void* self);
QObject* q_fileselector_qbase_sender(void* self);
void q_fileselector_on_sender(void* self, QObject* (*slot)());
int32_t q_fileselector_sender_signal_index(void* self);
int32_t q_fileselector_qbase_sender_signal_index(void* self);
void q_fileselector_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_fileselector_receivers(void* self, const char* signal);
int32_t q_fileselector_qbase_receivers(void* self, const char* signal);
void q_fileselector_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_fileselector_is_signal_connected(void* self, void* signal);
bool q_fileselector_qbase_is_signal_connected(void* self, void* signal);
void q_fileselector_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_fileselector_delete(void* self);

#endif
