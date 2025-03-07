#pragma once
#ifndef SRCQT6C_LIBQACTIONGROUP_H
#define SRCQT6C_LIBQACTIONGROUP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqaction.h"
#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqicon.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

QActionGroup* q_actiongroup_new(void* parent);
QMetaObject* q_actiongroup_meta_object(void* self);
void* q_actiongroup_metacast(void* self, const char* param1);
int32_t q_actiongroup_metacall(void* self, int64_t param1, int param2, void* param3);
void q_actiongroup_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_actiongroup_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_actiongroup_tr(const char* s);
QAction* q_actiongroup_add_action(void* self, void* a);
QAction* q_actiongroup_add_action_with_text(void* self, const char* text);
QAction* q_actiongroup_add_action2(void* self, void* icon, const char* text);
void q_actiongroup_remove_action(void* self, void* a);
libqt_list /* of QAction* */ q_actiongroup_actions(void* self);
QAction* q_actiongroup_checked_action(void* self);
bool q_actiongroup_is_exclusive(void* self);
bool q_actiongroup_is_enabled(void* self);
bool q_actiongroup_is_visible(void* self);
int64_t q_actiongroup_exclusion_policy(void* self);
void q_actiongroup_set_enabled(void* self, bool enabled);
void q_actiongroup_set_disabled(void* self, bool b);
void q_actiongroup_set_visible(void* self, bool visible);
void q_actiongroup_set_exclusive(void* self, bool exclusive);
void q_actiongroup_set_exclusion_policy(void* self, int64_t policy);
void q_actiongroup_triggered(void* self, void* param1);
void q_actiongroup_on_triggered(void* self, void (*slot)(void*, void*));
void q_actiongroup_hovered(void* self, void* param1);
void q_actiongroup_on_hovered(void* self, void (*slot)(void*, void*));
const char* q_actiongroup_tr2(const char* s, const char* c);
const char* q_actiongroup_tr3(const char* s, const char* c, int n);
const char* q_actiongroup_object_name(void* self);
void q_actiongroup_set_object_name(void* self, const char* name);
bool q_actiongroup_is_widget_type(void* self);
bool q_actiongroup_is_window_type(void* self);
bool q_actiongroup_is_quick_item_type(void* self);
bool q_actiongroup_signals_blocked(void* self);
bool q_actiongroup_block_signals(void* self, bool b);
QThread* q_actiongroup_thread(void* self);
void q_actiongroup_move_to_thread(void* self, void* thread);
int32_t q_actiongroup_start_timer(void* self, int interval);
void q_actiongroup_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_actiongroup_children(void* self);
void q_actiongroup_set_parent(void* self, void* parent);
void q_actiongroup_install_event_filter(void* self, void* filterObj);
void q_actiongroup_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_actiongroup_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_actiongroup_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_actiongroup_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_actiongroup_disconnect_with_q_meta_object_connection(void* param1);
void q_actiongroup_dump_object_tree(void* self);
void q_actiongroup_dump_object_info(void* self);
bool q_actiongroup_set_property(void* self, const char* name, void* value);
QVariant* q_actiongroup_property(void* self, const char* name);
const char** q_actiongroup_dynamic_property_names(void* self);
QBindingStorage* q_actiongroup_binding_storage(void* self);
QBindingStorage* q_actiongroup_binding_storage2(void* self);
void q_actiongroup_destroyed(void* self);
void q_actiongroup_on_destroyed(void* self, void (*slot)(void*));
QObject* q_actiongroup_parent(void* self);
bool q_actiongroup_inherits(void* self, const char* classname);
void q_actiongroup_delete_later(void* self);
int32_t q_actiongroup_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_actiongroup_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_actiongroup_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_actiongroup_destroyed1(void* self, void* param1);
void q_actiongroup_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_actiongroup_event(void* self, void* event);
bool q_actiongroup_qbase_event(void* self, void* event);
void q_actiongroup_on_event(void* self, bool (*slot)(void*, void*));
bool q_actiongroup_event_filter(void* self, void* watched, void* event);
bool q_actiongroup_qbase_event_filter(void* self, void* watched, void* event);
void q_actiongroup_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_actiongroup_timer_event(void* self, void* event);
void q_actiongroup_qbase_timer_event(void* self, void* event);
void q_actiongroup_on_timer_event(void* self, void (*slot)(void*, void*));
void q_actiongroup_child_event(void* self, void* event);
void q_actiongroup_qbase_child_event(void* self, void* event);
void q_actiongroup_on_child_event(void* self, void (*slot)(void*, void*));
void q_actiongroup_custom_event(void* self, void* event);
void q_actiongroup_qbase_custom_event(void* self, void* event);
void q_actiongroup_on_custom_event(void* self, void (*slot)(void*, void*));
void q_actiongroup_connect_notify(void* self, void* signal);
void q_actiongroup_qbase_connect_notify(void* self, void* signal);
void q_actiongroup_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_actiongroup_disconnect_notify(void* self, void* signal);
void q_actiongroup_qbase_disconnect_notify(void* self, void* signal);
void q_actiongroup_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_actiongroup_sender(void* self);
QObject* q_actiongroup_qbase_sender(void* self);
void q_actiongroup_on_sender(void* self, QObject* (*slot)());
int32_t q_actiongroup_sender_signal_index(void* self);
int32_t q_actiongroup_qbase_sender_signal_index(void* self);
void q_actiongroup_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_actiongroup_receivers(void* self, const char* signal);
int32_t q_actiongroup_qbase_receivers(void* self, const char* signal);
void q_actiongroup_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_actiongroup_is_signal_connected(void* self, void* signal);
bool q_actiongroup_qbase_is_signal_connected(void* self, void* signal);
void q_actiongroup_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_actiongroup_delete(void* self);

/// https://doc.qt.io/qt-6/qactiongroup.html#types

typedef enum {
    QACTIONGROUP_EXCLUSIONPOLICY_NONE = 0,
    QACTIONGROUP_EXCLUSIONPOLICY_EXCLUSIVE = 1,
    QACTIONGROUP_EXCLUSIONPOLICY_EXCLUSIVEOPTIONAL = 2
} QActionGroup__ExclusionPolicy;

#endif
