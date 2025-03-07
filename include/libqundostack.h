#pragma once
#ifndef SRCQT6C_LIBQUNDOSTACK_H
#define SRCQT6C_LIBQUNDOSTACK_H

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
#include "libqvariant.h"

QUndoCommand* q_undocommand_new();
QUndoCommand* q_undocommand_new2(const char* text);
QUndoCommand* q_undocommand_new3(void* parent);
QUndoCommand* q_undocommand_new4(const char* text, void* parent);
void q_undocommand_undo(void* self);
void q_undocommand_on_undo(void* self, void (*slot)());
void q_undocommand_qbase_undo(void* self);
void q_undocommand_redo(void* self);
void q_undocommand_on_redo(void* self, void (*slot)());
void q_undocommand_qbase_redo(void* self);
const char* q_undocommand_text(void* self);
const char* q_undocommand_action_text(void* self);
void q_undocommand_set_text(void* self, const char* text);
bool q_undocommand_is_obsolete(void* self);
void q_undocommand_set_obsolete(void* self, bool obsolete);
int32_t q_undocommand_id(void* self);
void q_undocommand_on_id(void* self, int32_t (*slot)());
int32_t q_undocommand_qbase_id(void* self);
bool q_undocommand_merge_with(void* self, void* other);
void q_undocommand_on_merge_with(void* self, bool (*slot)(void*, void*));
bool q_undocommand_qbase_merge_with(void* self, void* other);
int32_t q_undocommand_child_count(void* self);
QUndoCommand* q_undocommand_child(void* self, int index);
void q_undocommand_delete(void* self);

QUndoStack* q_undostack_new();
QUndoStack* q_undostack_new2(void* parent);
QMetaObject* q_undostack_meta_object(void* self);
void* q_undostack_metacast(void* self, const char* param1);
int32_t q_undostack_metacall(void* self, int64_t param1, int param2, void* param3);
void q_undostack_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_undostack_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_undostack_tr(const char* s);
void q_undostack_clear(void* self);
void q_undostack_push(void* self, void* cmd);
bool q_undostack_can_undo(void* self);
bool q_undostack_can_redo(void* self);
const char* q_undostack_undo_text(void* self);
const char* q_undostack_redo_text(void* self);
int32_t q_undostack_count(void* self);
int32_t q_undostack_index(void* self);
const char* q_undostack_text(void* self, int idx);
QAction* q_undostack_create_undo_action(void* self, void* parent);
QAction* q_undostack_create_redo_action(void* self, void* parent);
bool q_undostack_is_active(void* self);
bool q_undostack_is_clean(void* self);
int32_t q_undostack_clean_index(void* self);
void q_undostack_begin_macro(void* self, const char* text);
void q_undostack_end_macro(void* self);
void q_undostack_set_undo_limit(void* self, int limit);
int32_t q_undostack_undo_limit(void* self);
QUndoCommand* q_undostack_command(void* self, int index);
void q_undostack_set_clean(void* self);
void q_undostack_reset_clean(void* self);
void q_undostack_set_index(void* self, int idx);
void q_undostack_undo(void* self);
void q_undostack_redo(void* self);
void q_undostack_set_active(void* self);
void q_undostack_index_changed(void* self, int idx);
void q_undostack_on_index_changed(void* self, void (*slot)(void*, int));
void q_undostack_clean_changed(void* self, bool clean);
void q_undostack_on_clean_changed(void* self, void (*slot)(void*, bool));
void q_undostack_can_undo_changed(void* self, bool canUndo);
void q_undostack_on_can_undo_changed(void* self, void (*slot)(void*, bool));
void q_undostack_can_redo_changed(void* self, bool canRedo);
void q_undostack_on_can_redo_changed(void* self, void (*slot)(void*, bool));
void q_undostack_undo_text_changed(void* self, const char* undoText);
void q_undostack_on_undo_text_changed(void* self, void (*slot)(void*, const char*));
void q_undostack_redo_text_changed(void* self, const char* redoText);
void q_undostack_on_redo_text_changed(void* self, void (*slot)(void*, const char*));
const char* q_undostack_tr2(const char* s, const char* c);
const char* q_undostack_tr3(const char* s, const char* c, int n);
QAction* q_undostack_create_undo_action2(void* self, void* parent, const char* prefix);
QAction* q_undostack_create_redo_action2(void* self, void* parent, const char* prefix);
void q_undostack_set_active1(void* self, bool active);
const char* q_undostack_object_name(void* self);
void q_undostack_set_object_name(void* self, const char* name);
bool q_undostack_is_widget_type(void* self);
bool q_undostack_is_window_type(void* self);
bool q_undostack_is_quick_item_type(void* self);
bool q_undostack_signals_blocked(void* self);
bool q_undostack_block_signals(void* self, bool b);
QThread* q_undostack_thread(void* self);
void q_undostack_move_to_thread(void* self, void* thread);
int32_t q_undostack_start_timer(void* self, int interval);
void q_undostack_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_undostack_children(void* self);
void q_undostack_set_parent(void* self, void* parent);
void q_undostack_install_event_filter(void* self, void* filterObj);
void q_undostack_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_undostack_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_undostack_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_undostack_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_undostack_disconnect_with_q_meta_object_connection(void* param1);
void q_undostack_dump_object_tree(void* self);
void q_undostack_dump_object_info(void* self);
bool q_undostack_set_property(void* self, const char* name, void* value);
QVariant* q_undostack_property(void* self, const char* name);
const char** q_undostack_dynamic_property_names(void* self);
QBindingStorage* q_undostack_binding_storage(void* self);
QBindingStorage* q_undostack_binding_storage2(void* self);
void q_undostack_destroyed(void* self);
void q_undostack_on_destroyed(void* self, void (*slot)(void*));
QObject* q_undostack_parent(void* self);
bool q_undostack_inherits(void* self, const char* classname);
void q_undostack_delete_later(void* self);
int32_t q_undostack_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_undostack_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_undostack_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_undostack_destroyed1(void* self, void* param1);
void q_undostack_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_undostack_event(void* self, void* event);
bool q_undostack_qbase_event(void* self, void* event);
void q_undostack_on_event(void* self, bool (*slot)(void*, void*));
bool q_undostack_event_filter(void* self, void* watched, void* event);
bool q_undostack_qbase_event_filter(void* self, void* watched, void* event);
void q_undostack_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_undostack_timer_event(void* self, void* event);
void q_undostack_qbase_timer_event(void* self, void* event);
void q_undostack_on_timer_event(void* self, void (*slot)(void*, void*));
void q_undostack_child_event(void* self, void* event);
void q_undostack_qbase_child_event(void* self, void* event);
void q_undostack_on_child_event(void* self, void (*slot)(void*, void*));
void q_undostack_custom_event(void* self, void* event);
void q_undostack_qbase_custom_event(void* self, void* event);
void q_undostack_on_custom_event(void* self, void (*slot)(void*, void*));
void q_undostack_connect_notify(void* self, void* signal);
void q_undostack_qbase_connect_notify(void* self, void* signal);
void q_undostack_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_undostack_disconnect_notify(void* self, void* signal);
void q_undostack_qbase_disconnect_notify(void* self, void* signal);
void q_undostack_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_undostack_sender(void* self);
QObject* q_undostack_qbase_sender(void* self);
void q_undostack_on_sender(void* self, QObject* (*slot)());
int32_t q_undostack_sender_signal_index(void* self);
int32_t q_undostack_qbase_sender_signal_index(void* self);
void q_undostack_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_undostack_receivers(void* self, const char* signal);
int32_t q_undostack_qbase_receivers(void* self, const char* signal);
void q_undostack_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_undostack_is_signal_connected(void* self, void* signal);
bool q_undostack_qbase_is_signal_connected(void* self, void* signal);
void q_undostack_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_undostack_delete(void* self);

#endif
