#pragma once
#ifndef SRCQT6C_LIBQTEXTLIST_H
#define SRCQT6C_LIBQTEXTLIST_H

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
#include "libqtextobject.h"
#include "libqtextdocument.h"
#include "libqtextformat.h"
#include "libqthread.h"
#include "libqvariant.h"

QTextList* q_textlist_new(void* doc);
QMetaObject* q_textlist_meta_object(void* self);
void* q_textlist_metacast(void* self, const char* param1);
int32_t q_textlist_metacall(void* self, int64_t param1, int param2, void* param3);
void q_textlist_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_textlist_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_textlist_tr(const char* s);
int32_t q_textlist_count(void* self);
QTextBlock* q_textlist_item(void* self, int i);
int32_t q_textlist_item_number(void* self, void* param1);
const char* q_textlist_item_text(void* self, void* param1);
void q_textlist_remove_item(void* self, int i);
void q_textlist_remove(void* self, void* param1);
void q_textlist_add(void* self, void* block);
void q_textlist_set_format(void* self, void* format);
QTextListFormat* q_textlist_format(void* self);
const char* q_textlist_tr2(const char* s, const char* c);
const char* q_textlist_tr3(const char* s, const char* c, int n);
int32_t q_textlist_format_index(void* self);
QTextDocument* q_textlist_document(void* self);
int32_t q_textlist_object_index(void* self);
const char* q_textlist_object_name(void* self);
void q_textlist_set_object_name(void* self, const char* name);
bool q_textlist_is_widget_type(void* self);
bool q_textlist_is_window_type(void* self);
bool q_textlist_is_quick_item_type(void* self);
bool q_textlist_signals_blocked(void* self);
bool q_textlist_block_signals(void* self, bool b);
QThread* q_textlist_thread(void* self);
void q_textlist_move_to_thread(void* self, void* thread);
int32_t q_textlist_start_timer(void* self, int interval);
void q_textlist_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_textlist_children(void* self);
void q_textlist_set_parent(void* self, void* parent);
void q_textlist_install_event_filter(void* self, void* filterObj);
void q_textlist_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_textlist_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_textlist_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_textlist_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_textlist_disconnect_with_q_meta_object_connection(void* param1);
void q_textlist_dump_object_tree(void* self);
void q_textlist_dump_object_info(void* self);
bool q_textlist_set_property(void* self, const char* name, void* value);
QVariant* q_textlist_property(void* self, const char* name);
const char** q_textlist_dynamic_property_names(void* self);
QBindingStorage* q_textlist_binding_storage(void* self);
QBindingStorage* q_textlist_binding_storage2(void* self);
void q_textlist_destroyed(void* self);
void q_textlist_on_destroyed(void* self, void (*slot)(void*));
QObject* q_textlist_parent(void* self);
bool q_textlist_inherits(void* self, const char* classname);
void q_textlist_delete_later(void* self);
int32_t q_textlist_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_textlist_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_textlist_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_textlist_destroyed1(void* self, void* param1);
void q_textlist_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_textlist_block_inserted(void* self, void* block);
void q_textlist_qbase_block_inserted(void* self, void* block);
void q_textlist_on_block_inserted(void* self, void (*slot)(void*, void*));
void q_textlist_block_removed(void* self, void* block);
void q_textlist_qbase_block_removed(void* self, void* block);
void q_textlist_on_block_removed(void* self, void (*slot)(void*, void*));
void q_textlist_block_format_changed(void* self, void* block);
void q_textlist_qbase_block_format_changed(void* self, void* block);
void q_textlist_on_block_format_changed(void* self, void (*slot)(void*, void*));
bool q_textlist_event(void* self, void* event);
bool q_textlist_qbase_event(void* self, void* event);
void q_textlist_on_event(void* self, bool (*slot)(void*, void*));
bool q_textlist_event_filter(void* self, void* watched, void* event);
bool q_textlist_qbase_event_filter(void* self, void* watched, void* event);
void q_textlist_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_textlist_timer_event(void* self, void* event);
void q_textlist_qbase_timer_event(void* self, void* event);
void q_textlist_on_timer_event(void* self, void (*slot)(void*, void*));
void q_textlist_child_event(void* self, void* event);
void q_textlist_qbase_child_event(void* self, void* event);
void q_textlist_on_child_event(void* self, void (*slot)(void*, void*));
void q_textlist_custom_event(void* self, void* event);
void q_textlist_qbase_custom_event(void* self, void* event);
void q_textlist_on_custom_event(void* self, void (*slot)(void*, void*));
void q_textlist_connect_notify(void* self, void* signal);
void q_textlist_qbase_connect_notify(void* self, void* signal);
void q_textlist_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_textlist_disconnect_notify(void* self, void* signal);
void q_textlist_qbase_disconnect_notify(void* self, void* signal);
void q_textlist_on_disconnect_notify(void* self, void (*slot)(void*, void*));
libqt_list /* of QTextBlock* */ q_textlist_block_list(void* self);
libqt_list /* of QTextBlock* */ q_textlist_qbase_block_list(void* self);
void q_textlist_on_block_list(void* self, libqt_list /* of QTextBlock* */ (*slot)());
QObject* q_textlist_sender(void* self);
QObject* q_textlist_qbase_sender(void* self);
void q_textlist_on_sender(void* self, QObject* (*slot)());
int32_t q_textlist_sender_signal_index(void* self);
int32_t q_textlist_qbase_sender_signal_index(void* self);
void q_textlist_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_textlist_receivers(void* self, const char* signal);
int32_t q_textlist_qbase_receivers(void* self, const char* signal);
void q_textlist_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_textlist_is_signal_connected(void* self, void* signal);
bool q_textlist_qbase_is_signal_connected(void* self, void* signal);
void q_textlist_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_textlist_delete(void* self);

#endif
