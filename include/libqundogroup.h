#pragma once
#ifndef SRCQT6C_LIBQUNDOGROUP_H
#define SRCQT6C_LIBQUNDOGROUP_H

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
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqthread.h"
#include "libqundostack.h"
#include "libqvariant.h"

QUndoGroup* q_undogroup_new();
QUndoGroup* q_undogroup_new2(void* parent);
QMetaObject* q_undogroup_meta_object(void* self);
void* q_undogroup_metacast(void* self, const char* param1);
int32_t q_undogroup_metacall(void* self, int64_t param1, int param2, void* param3);
void q_undogroup_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_undogroup_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_undogroup_tr(const char* s);
void q_undogroup_add_stack(void* self, void* stack);
void q_undogroup_remove_stack(void* self, void* stack);
libqt_list /* of QUndoStack* */ q_undogroup_stacks(void* self);
QUndoStack* q_undogroup_active_stack(void* self);
QAction* q_undogroup_create_undo_action(void* self, void* parent);
QAction* q_undogroup_create_redo_action(void* self, void* parent);
bool q_undogroup_can_undo(void* self);
bool q_undogroup_can_redo(void* self);
const char* q_undogroup_undo_text(void* self);
const char* q_undogroup_redo_text(void* self);
bool q_undogroup_is_clean(void* self);
void q_undogroup_undo(void* self);
void q_undogroup_redo(void* self);
void q_undogroup_set_active_stack(void* self, void* stack);
void q_undogroup_active_stack_changed(void* self, void* stack);
void q_undogroup_on_active_stack_changed(void* self, void (*slot)(void*, void*));
void q_undogroup_index_changed(void* self, int idx);
void q_undogroup_on_index_changed(void* self, void (*slot)(void*, int));
void q_undogroup_clean_changed(void* self, bool clean);
void q_undogroup_on_clean_changed(void* self, void (*slot)(void*, bool));
void q_undogroup_can_undo_changed(void* self, bool canUndo);
void q_undogroup_on_can_undo_changed(void* self, void (*slot)(void*, bool));
void q_undogroup_can_redo_changed(void* self, bool canRedo);
void q_undogroup_on_can_redo_changed(void* self, void (*slot)(void*, bool));
void q_undogroup_undo_text_changed(void* self, const char* undoText);
void q_undogroup_on_undo_text_changed(void* self, void (*slot)(void*, const char*));
void q_undogroup_redo_text_changed(void* self, const char* redoText);
void q_undogroup_on_redo_text_changed(void* self, void (*slot)(void*, const char*));
const char* q_undogroup_tr2(const char* s, const char* c);
const char* q_undogroup_tr3(const char* s, const char* c, int n);
QAction* q_undogroup_create_undo_action2(void* self, void* parent, const char* prefix);
QAction* q_undogroup_create_redo_action2(void* self, void* parent, const char* prefix);
const char* q_undogroup_object_name(void* self);
void q_undogroup_set_object_name(void* self, const char* name);
bool q_undogroup_is_widget_type(void* self);
bool q_undogroup_is_window_type(void* self);
bool q_undogroup_is_quick_item_type(void* self);
bool q_undogroup_signals_blocked(void* self);
bool q_undogroup_block_signals(void* self, bool b);
QThread* q_undogroup_thread(void* self);
void q_undogroup_move_to_thread(void* self, void* thread);
int32_t q_undogroup_start_timer(void* self, int interval);
void q_undogroup_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_undogroup_children(void* self);
void q_undogroup_set_parent(void* self, void* parent);
void q_undogroup_install_event_filter(void* self, void* filterObj);
void q_undogroup_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_undogroup_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_undogroup_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_undogroup_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_undogroup_disconnect_with_q_meta_object_connection(void* param1);
void q_undogroup_dump_object_tree(void* self);
void q_undogroup_dump_object_info(void* self);
bool q_undogroup_set_property(void* self, const char* name, void* value);
QVariant* q_undogroup_property(void* self, const char* name);
const char** q_undogroup_dynamic_property_names(void* self);
QBindingStorage* q_undogroup_binding_storage(void* self);
QBindingStorage* q_undogroup_binding_storage2(void* self);
void q_undogroup_destroyed(void* self);
void q_undogroup_on_destroyed(void* self, void (*slot)(void*));
QObject* q_undogroup_parent(void* self);
bool q_undogroup_inherits(void* self, const char* classname);
void q_undogroup_delete_later(void* self);
int32_t q_undogroup_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_undogroup_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_undogroup_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_undogroup_destroyed1(void* self, void* param1);
void q_undogroup_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_undogroup_event(void* self, void* event);
bool q_undogroup_qbase_event(void* self, void* event);
void q_undogroup_on_event(void* self, bool (*slot)(void*, void*));
bool q_undogroup_event_filter(void* self, void* watched, void* event);
bool q_undogroup_qbase_event_filter(void* self, void* watched, void* event);
void q_undogroup_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_undogroup_timer_event(void* self, void* event);
void q_undogroup_qbase_timer_event(void* self, void* event);
void q_undogroup_on_timer_event(void* self, void (*slot)(void*, void*));
void q_undogroup_child_event(void* self, void* event);
void q_undogroup_qbase_child_event(void* self, void* event);
void q_undogroup_on_child_event(void* self, void (*slot)(void*, void*));
void q_undogroup_custom_event(void* self, void* event);
void q_undogroup_qbase_custom_event(void* self, void* event);
void q_undogroup_on_custom_event(void* self, void (*slot)(void*, void*));
void q_undogroup_connect_notify(void* self, void* signal);
void q_undogroup_qbase_connect_notify(void* self, void* signal);
void q_undogroup_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_undogroup_disconnect_notify(void* self, void* signal);
void q_undogroup_qbase_disconnect_notify(void* self, void* signal);
void q_undogroup_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_undogroup_sender(void* self);
QObject* q_undogroup_qbase_sender(void* self);
void q_undogroup_on_sender(void* self, QObject* (*slot)());
int32_t q_undogroup_sender_signal_index(void* self);
int32_t q_undogroup_qbase_sender_signal_index(void* self);
void q_undogroup_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_undogroup_receivers(void* self, const char* signal);
int32_t q_undogroup_qbase_receivers(void* self, const char* signal);
void q_undogroup_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_undogroup_is_signal_connected(void* self, void* signal);
bool q_undogroup_qbase_is_signal_connected(void* self, void* signal);
void q_undogroup_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_undogroup_delete(void* self);

#endif
