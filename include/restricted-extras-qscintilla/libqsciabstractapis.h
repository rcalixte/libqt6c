#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCIABSTRACTAPIS_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCIABSTRACTAPIS_H

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

QsciAbstractAPIs* q_sciabstractapis_new(void* lexer);
QMetaObject* q_sciabstractapis_meta_object(void* self);
void* q_sciabstractapis_metacast(void* self, const char* param1);
int32_t q_sciabstractapis_metacall(void* self, int64_t param1, int param2, void* param3);
void q_sciabstractapis_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_sciabstractapis_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_sciabstractapis_tr(const char* s);
QsciLexer* q_sciabstractapis_lexer(void* self);
void q_sciabstractapis_update_auto_completion_list(void* self, const char* context[], const char* list[]);
void q_sciabstractapis_on_update_auto_completion_list(void* self, void (*slot)(void*, const char*, const char*));
void q_sciabstractapis_qbase_update_auto_completion_list(void* self, const char* context[], const char* list[]);
void q_sciabstractapis_auto_completion_selected(void* self, const char* selection);
void q_sciabstractapis_on_auto_completion_selected(void* self, void (*slot)(void*, const char*));
void q_sciabstractapis_qbase_auto_completion_selected(void* self, const char* selection);
const char** q_sciabstractapis_call_tips(void* self, const char* context[], int commas, int64_t style, int* shifts[]);
void q_sciabstractapis_on_call_tips(void* self, const char** (*slot)(void*, const char*, int, int64_t, int*));
const char** q_sciabstractapis_qbase_call_tips(void* self, const char* context[], int commas, int64_t style, int* shifts[]);
const char* q_sciabstractapis_tr2(const char* s, const char* c);
const char* q_sciabstractapis_tr3(const char* s, const char* c, int n);
const char* q_sciabstractapis_object_name(void* self);
void q_sciabstractapis_set_object_name(void* self, const char* name);
bool q_sciabstractapis_is_widget_type(void* self);
bool q_sciabstractapis_is_window_type(void* self);
bool q_sciabstractapis_is_quick_item_type(void* self);
bool q_sciabstractapis_signals_blocked(void* self);
bool q_sciabstractapis_block_signals(void* self, bool b);
QThread* q_sciabstractapis_thread(void* self);
void q_sciabstractapis_move_to_thread(void* self, void* thread);
int32_t q_sciabstractapis_start_timer(void* self, int interval);
void q_sciabstractapis_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_sciabstractapis_children(void* self);
void q_sciabstractapis_set_parent(void* self, void* parent);
void q_sciabstractapis_install_event_filter(void* self, void* filterObj);
void q_sciabstractapis_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_sciabstractapis_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_sciabstractapis_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_sciabstractapis_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_sciabstractapis_disconnect_with_q_meta_object_connection(void* param1);
void q_sciabstractapis_dump_object_tree(void* self);
void q_sciabstractapis_dump_object_info(void* self);
bool q_sciabstractapis_set_property(void* self, const char* name, void* value);
QVariant* q_sciabstractapis_property(void* self, const char* name);
const char** q_sciabstractapis_dynamic_property_names(void* self);
QBindingStorage* q_sciabstractapis_binding_storage(void* self);
QBindingStorage* q_sciabstractapis_binding_storage2(void* self);
void q_sciabstractapis_destroyed(void* self);
void q_sciabstractapis_on_destroyed(void* self, void (*slot)(void*));
QObject* q_sciabstractapis_parent(void* self);
bool q_sciabstractapis_inherits(void* self, const char* classname);
void q_sciabstractapis_delete_later(void* self);
int32_t q_sciabstractapis_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_sciabstractapis_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_sciabstractapis_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_sciabstractapis_destroyed1(void* self, void* param1);
void q_sciabstractapis_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_sciabstractapis_event(void* self, void* event);
bool q_sciabstractapis_qbase_event(void* self, void* event);
void q_sciabstractapis_on_event(void* self, bool (*slot)(void*, void*));
bool q_sciabstractapis_event_filter(void* self, void* watched, void* event);
bool q_sciabstractapis_qbase_event_filter(void* self, void* watched, void* event);
void q_sciabstractapis_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_sciabstractapis_timer_event(void* self, void* event);
void q_sciabstractapis_qbase_timer_event(void* self, void* event);
void q_sciabstractapis_on_timer_event(void* self, void (*slot)(void*, void*));
void q_sciabstractapis_child_event(void* self, void* event);
void q_sciabstractapis_qbase_child_event(void* self, void* event);
void q_sciabstractapis_on_child_event(void* self, void (*slot)(void*, void*));
void q_sciabstractapis_custom_event(void* self, void* event);
void q_sciabstractapis_qbase_custom_event(void* self, void* event);
void q_sciabstractapis_on_custom_event(void* self, void (*slot)(void*, void*));
void q_sciabstractapis_connect_notify(void* self, void* signal);
void q_sciabstractapis_qbase_connect_notify(void* self, void* signal);
void q_sciabstractapis_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_sciabstractapis_disconnect_notify(void* self, void* signal);
void q_sciabstractapis_qbase_disconnect_notify(void* self, void* signal);
void q_sciabstractapis_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_sciabstractapis_sender(void* self);
QObject* q_sciabstractapis_qbase_sender(void* self);
void q_sciabstractapis_on_sender(void* self, QObject* (*slot)());
int32_t q_sciabstractapis_sender_signal_index(void* self);
int32_t q_sciabstractapis_qbase_sender_signal_index(void* self);
void q_sciabstractapis_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_sciabstractapis_receivers(void* self, const char* signal);
int32_t q_sciabstractapis_qbase_receivers(void* self, const char* signal);
void q_sciabstractapis_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_sciabstractapis_is_signal_connected(void* self, void* signal);
bool q_sciabstractapis_qbase_is_signal_connected(void* self, void* signal);
void q_sciabstractapis_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_sciabstractapis_delete(void* self);

#endif
