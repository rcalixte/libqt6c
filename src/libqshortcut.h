#pragma once
#ifndef SRCQT6C_LIBQSHORTCUT_H
#define SRCQT6C_LIBQSHORTCUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqkeysequence.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QShortcut* q_shortcut_new(void* parent);
QShortcut* q_shortcut_new2(void* key, void* parent);
QShortcut* q_shortcut_new3(int64_t key, void* parent);
QShortcut* q_shortcut_new4(void* key, void* parent, const char* member);
QShortcut* q_shortcut_new5(void* key, void* parent, const char* member, const char* ambiguousMember);
QShortcut* q_shortcut_new6(void* key, void* parent, const char* member, const char* ambiguousMember, int64_t context);
QShortcut* q_shortcut_new7(int64_t key, void* parent, const char* member);
QShortcut* q_shortcut_new8(int64_t key, void* parent, const char* member, const char* ambiguousMember);
QShortcut* q_shortcut_new9(int64_t key, void* parent, const char* member, const char* ambiguousMember, int64_t context);
QMetaObject* q_shortcut_meta_object(void* self);
void* q_shortcut_metacast(void* self, const char* param1);
int32_t q_shortcut_metacall(void* self, int64_t param1, int param2, void* param3);
void q_shortcut_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_shortcut_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_shortcut_tr(const char* s);
void q_shortcut_set_key(void* self, void* key);
QKeySequence* q_shortcut_key(void* self);
void q_shortcut_set_keys(void* self, int64_t key);
void q_shortcut_set_keys_with_keys(void* self, void* keys[]);
libqt_list /* of QKeySequence* */ q_shortcut_keys(void* self);
void q_shortcut_set_enabled(void* self, bool enable);
bool q_shortcut_is_enabled(void* self);
void q_shortcut_set_context(void* self, int64_t context);
int64_t q_shortcut_context(void* self);
void q_shortcut_set_auto_repeat(void* self, bool on);
bool q_shortcut_auto_repeat(void* self);
int32_t q_shortcut_id(void* self);
void q_shortcut_set_whats_this(void* self, const char* text);
const char* q_shortcut_whats_this(void* self);
void q_shortcut_activated(void* self);
void q_shortcut_on_activated(void* self, void (*slot)(void*));
void q_shortcut_activated_ambiguously(void* self);
void q_shortcut_on_activated_ambiguously(void* self, void (*slot)(void*));
bool q_shortcut_event(void* self, void* e);
void q_shortcut_on_event(void* self, bool (*slot)(void*, void*));
bool q_shortcut_qbase_event(void* self, void* e);
const char* q_shortcut_tr2(const char* s, const char* c);
const char* q_shortcut_tr3(const char* s, const char* c, int n);
const char* q_shortcut_object_name(void* self);
void q_shortcut_set_object_name(void* self, const char* name);
bool q_shortcut_is_widget_type(void* self);
bool q_shortcut_is_window_type(void* self);
bool q_shortcut_is_quick_item_type(void* self);
bool q_shortcut_signals_blocked(void* self);
bool q_shortcut_block_signals(void* self, bool b);
QThread* q_shortcut_thread(void* self);
void q_shortcut_move_to_thread(void* self, void* thread);
int32_t q_shortcut_start_timer(void* self, int interval);
void q_shortcut_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_shortcut_children(void* self);
void q_shortcut_set_parent(void* self, void* parent);
void q_shortcut_install_event_filter(void* self, void* filterObj);
void q_shortcut_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_shortcut_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_shortcut_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_shortcut_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_shortcut_disconnect_with_q_meta_object_connection(void* param1);
void q_shortcut_dump_object_tree(void* self);
void q_shortcut_dump_object_info(void* self);
bool q_shortcut_set_property(void* self, const char* name, void* value);
QVariant* q_shortcut_property(void* self, const char* name);
const char** q_shortcut_dynamic_property_names(void* self);
QBindingStorage* q_shortcut_binding_storage(void* self);
QBindingStorage* q_shortcut_binding_storage2(void* self);
void q_shortcut_destroyed(void* self);
void q_shortcut_on_destroyed(void* self, void (*slot)(void*));
QObject* q_shortcut_parent(void* self);
bool q_shortcut_inherits(void* self, const char* classname);
void q_shortcut_delete_later(void* self);
int32_t q_shortcut_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_shortcut_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_shortcut_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_shortcut_destroyed1(void* self, void* param1);
void q_shortcut_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_shortcut_event_filter(void* self, void* watched, void* event);
bool q_shortcut_qbase_event_filter(void* self, void* watched, void* event);
void q_shortcut_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_shortcut_timer_event(void* self, void* event);
void q_shortcut_qbase_timer_event(void* self, void* event);
void q_shortcut_on_timer_event(void* self, void (*slot)(void*, void*));
void q_shortcut_child_event(void* self, void* event);
void q_shortcut_qbase_child_event(void* self, void* event);
void q_shortcut_on_child_event(void* self, void (*slot)(void*, void*));
void q_shortcut_custom_event(void* self, void* event);
void q_shortcut_qbase_custom_event(void* self, void* event);
void q_shortcut_on_custom_event(void* self, void (*slot)(void*, void*));
void q_shortcut_connect_notify(void* self, void* signal);
void q_shortcut_qbase_connect_notify(void* self, void* signal);
void q_shortcut_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_shortcut_disconnect_notify(void* self, void* signal);
void q_shortcut_qbase_disconnect_notify(void* self, void* signal);
void q_shortcut_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_shortcut_sender(void* self);
QObject* q_shortcut_qbase_sender(void* self);
void q_shortcut_on_sender(void* self, QObject* (*slot)());
int32_t q_shortcut_sender_signal_index(void* self);
int32_t q_shortcut_qbase_sender_signal_index(void* self);
void q_shortcut_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_shortcut_receivers(void* self, const char* signal);
int32_t q_shortcut_qbase_receivers(void* self, const char* signal);
void q_shortcut_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_shortcut_is_signal_connected(void* self, void* signal);
bool q_shortcut_qbase_is_signal_connected(void* self, void* signal);
void q_shortcut_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_shortcut_delete(void* self);

#endif
