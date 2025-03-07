#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCIAPIS_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCIAPIS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

QsciAPIs* q_sciapis_new(void* lexer);
QMetaObject* q_sciapis_meta_object(void* self);
void* q_sciapis_metacast(void* self, const char* param1);
int32_t q_sciapis_metacall(void* self, int64_t param1, int param2, void* param3);
void q_sciapis_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_sciapis_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_sciapis_tr(const char* s);
void q_sciapis_add(void* self, const char* entry);
void q_sciapis_clear(void* self);
bool q_sciapis_load(void* self, const char* filename);
void q_sciapis_remove(void* self, const char* entry);
void q_sciapis_prepare(void* self);
void q_sciapis_cancel_preparation(void* self);
const char* q_sciapis_default_prepared_name(void* self);
bool q_sciapis_is_prepared(void* self);
bool q_sciapis_load_prepared(void* self);
bool q_sciapis_save_prepared(void* self);
void q_sciapis_update_auto_completion_list(void* self, const char* context[], const char* list[]);
void q_sciapis_on_update_auto_completion_list(void* self, void (*slot)(void*, const char*, const char*));
void q_sciapis_qbase_update_auto_completion_list(void* self, const char* context[], const char* list[]);
void q_sciapis_auto_completion_selected(void* self, const char* sel);
void q_sciapis_on_auto_completion_selected(void* self, void (*slot)(void*, const char*));
void q_sciapis_qbase_auto_completion_selected(void* self, const char* sel);
const char** q_sciapis_call_tips(void* self, const char* context[], int commas, int64_t style, int* shifts[]);
void q_sciapis_on_call_tips(void* self, const char** (*slot)(void*, const char*, int, int64_t, int*));
const char** q_sciapis_qbase_call_tips(void* self, const char* context[], int commas, int64_t style, int* shifts[]);
bool q_sciapis_event(void* self, void* e);
void q_sciapis_on_event(void* self, bool (*slot)(void*, void*));
bool q_sciapis_qbase_event(void* self, void* e);
const char** q_sciapis_installed_a_p_i_files(void* self);
void q_sciapis_api_preparation_cancelled(void* self);
void q_sciapis_on_api_preparation_cancelled(void* self, void (*slot)(void*));
void q_sciapis_api_preparation_started(void* self);
void q_sciapis_on_api_preparation_started(void* self, void (*slot)(void*));
void q_sciapis_api_preparation_finished(void* self);
void q_sciapis_on_api_preparation_finished(void* self, void (*slot)(void*));
const char* q_sciapis_tr2(const char* s, const char* c);
const char* q_sciapis_tr3(const char* s, const char* c, int n);
bool q_sciapis_is_prepared1(void* self, const char* filename);
bool q_sciapis_load_prepared1(void* self, const char* filename);
bool q_sciapis_save_prepared1(void* self, const char* filename);
QsciLexer* q_sciapis_lexer(void* self);
const char* q_sciapis_object_name(void* self);
void q_sciapis_set_object_name(void* self, const char* name);
bool q_sciapis_is_widget_type(void* self);
bool q_sciapis_is_window_type(void* self);
bool q_sciapis_is_quick_item_type(void* self);
bool q_sciapis_signals_blocked(void* self);
bool q_sciapis_block_signals(void* self, bool b);
QThread* q_sciapis_thread(void* self);
void q_sciapis_move_to_thread(void* self, void* thread);
int32_t q_sciapis_start_timer(void* self, int interval);
void q_sciapis_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_sciapis_children(void* self);
void q_sciapis_set_parent(void* self, void* parent);
void q_sciapis_install_event_filter(void* self, void* filterObj);
void q_sciapis_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_sciapis_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_sciapis_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_sciapis_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_sciapis_disconnect_with_q_meta_object_connection(void* param1);
void q_sciapis_dump_object_tree(void* self);
void q_sciapis_dump_object_info(void* self);
bool q_sciapis_set_property(void* self, const char* name, void* value);
QVariant* q_sciapis_property(void* self, const char* name);
const char** q_sciapis_dynamic_property_names(void* self);
QBindingStorage* q_sciapis_binding_storage(void* self);
QBindingStorage* q_sciapis_binding_storage2(void* self);
void q_sciapis_destroyed(void* self);
void q_sciapis_on_destroyed(void* self, void (*slot)(void*));
QObject* q_sciapis_parent(void* self);
bool q_sciapis_inherits(void* self, const char* classname);
void q_sciapis_delete_later(void* self);
int32_t q_sciapis_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_sciapis_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_sciapis_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_sciapis_destroyed1(void* self, void* param1);
void q_sciapis_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_sciapis_event_filter(void* self, void* watched, void* event);
bool q_sciapis_qbase_event_filter(void* self, void* watched, void* event);
void q_sciapis_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_sciapis_timer_event(void* self, void* event);
void q_sciapis_qbase_timer_event(void* self, void* event);
void q_sciapis_on_timer_event(void* self, void (*slot)(void*, void*));
void q_sciapis_child_event(void* self, void* event);
void q_sciapis_qbase_child_event(void* self, void* event);
void q_sciapis_on_child_event(void* self, void (*slot)(void*, void*));
void q_sciapis_custom_event(void* self, void* event);
void q_sciapis_qbase_custom_event(void* self, void* event);
void q_sciapis_on_custom_event(void* self, void (*slot)(void*, void*));
void q_sciapis_connect_notify(void* self, void* signal);
void q_sciapis_qbase_connect_notify(void* self, void* signal);
void q_sciapis_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_sciapis_disconnect_notify(void* self, void* signal);
void q_sciapis_qbase_disconnect_notify(void* self, void* signal);
void q_sciapis_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_sciapis_sender(void* self);
QObject* q_sciapis_qbase_sender(void* self);
void q_sciapis_on_sender(void* self, QObject* (*slot)());
int32_t q_sciapis_sender_signal_index(void* self);
int32_t q_sciapis_qbase_sender_signal_index(void* self);
void q_sciapis_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_sciapis_receivers(void* self, const char* signal);
int32_t q_sciapis_qbase_receivers(void* self, const char* signal);
void q_sciapis_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_sciapis_is_signal_connected(void* self, void* signal);
bool q_sciapis_qbase_is_signal_connected(void* self, void* signal);
void q_sciapis_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_sciapis_delete(void* self);

#endif
