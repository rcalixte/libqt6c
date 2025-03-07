#pragma once
#ifndef SRCQT6C_LIBQSYNTAXHIGHLIGHTER_H
#define SRCQT6C_LIBQSYNTAXHIGHLIGHTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqcolor.h"
#include "libqfont.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqtextobject.h"
#include "libqtextformat.h"
#include "libqtextdocument.h"
#include "libqthread.h"
#include "libqvariant.h"

QSyntaxHighlighter* q_syntaxhighlighter_new(void* parent);
QSyntaxHighlighter* q_syntaxhighlighter_new2(void* parent);
QMetaObject* q_syntaxhighlighter_meta_object(void* self);
void* q_syntaxhighlighter_metacast(void* self, const char* param1);
int32_t q_syntaxhighlighter_metacall(void* self, int64_t param1, int param2, void* param3);
void q_syntaxhighlighter_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_syntaxhighlighter_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_syntaxhighlighter_tr(const char* s);
void q_syntaxhighlighter_set_document(void* self, void* doc);
QTextDocument* q_syntaxhighlighter_document(void* self);
void q_syntaxhighlighter_rehighlight(void* self);
void q_syntaxhighlighter_rehighlight_block(void* self, void* block);
void q_syntaxhighlighter_highlight_block(void* self, const char* text);
void q_syntaxhighlighter_on_highlight_block(void* self, void (*slot)(void*, const char*));
void q_syntaxhighlighter_qbase_highlight_block(void* self, const char* text);
void q_syntaxhighlighter_set_format(void* self, int start, int count, void* format);
void q_syntaxhighlighter_on_set_format(void* self, void (*slot)(void*, int, int, void*));
void q_syntaxhighlighter_qbase_set_format(void* self, int start, int count, void* format);
void q_syntaxhighlighter_set_format2(void* self, int start, int count, void* color);
void q_syntaxhighlighter_on_set_format2(void* self, void (*slot)(void*, int, int, void*));
void q_syntaxhighlighter_qbase_set_format2(void* self, int start, int count, void* color);
void q_syntaxhighlighter_set_format3(void* self, int start, int count, void* font);
void q_syntaxhighlighter_on_set_format3(void* self, void (*slot)(void*, int, int, void*));
void q_syntaxhighlighter_qbase_set_format3(void* self, int start, int count, void* font);
QTextCharFormat* q_syntaxhighlighter_format(void* self, int pos);
void q_syntaxhighlighter_on_format(void* self, QTextCharFormat* (*slot)(void*, int));
QTextCharFormat* q_syntaxhighlighter_qbase_format(void* self, int pos);
int32_t q_syntaxhighlighter_previous_block_state(void* self);
void q_syntaxhighlighter_on_previous_block_state(void* self, int32_t (*slot)());
int32_t q_syntaxhighlighter_qbase_previous_block_state(void* self);
int32_t q_syntaxhighlighter_current_block_state(void* self);
void q_syntaxhighlighter_on_current_block_state(void* self, int32_t (*slot)());
int32_t q_syntaxhighlighter_qbase_current_block_state(void* self);
void q_syntaxhighlighter_set_current_block_state(void* self, int newState);
void q_syntaxhighlighter_on_set_current_block_state(void* self, void (*slot)(void*, int));
void q_syntaxhighlighter_qbase_set_current_block_state(void* self, int newState);
void q_syntaxhighlighter_set_current_block_user_data(void* self, void* data);
void q_syntaxhighlighter_on_set_current_block_user_data(void* self, void (*slot)(void*, void*));
void q_syntaxhighlighter_qbase_set_current_block_user_data(void* self, void* data);
QTextBlockUserData* q_syntaxhighlighter_current_block_user_data(void* self);
void q_syntaxhighlighter_on_current_block_user_data(void* self, QTextBlockUserData* (*slot)());
QTextBlockUserData* q_syntaxhighlighter_qbase_current_block_user_data(void* self);
QTextBlock* q_syntaxhighlighter_current_block(void* self);
void q_syntaxhighlighter_on_current_block(void* self, QTextBlock* (*slot)());
QTextBlock* q_syntaxhighlighter_qbase_current_block(void* self);
const char* q_syntaxhighlighter_tr2(const char* s, const char* c);
const char* q_syntaxhighlighter_tr3(const char* s, const char* c, int n);
const char* q_syntaxhighlighter_object_name(void* self);
void q_syntaxhighlighter_set_object_name(void* self, const char* name);
bool q_syntaxhighlighter_is_widget_type(void* self);
bool q_syntaxhighlighter_is_window_type(void* self);
bool q_syntaxhighlighter_is_quick_item_type(void* self);
bool q_syntaxhighlighter_signals_blocked(void* self);
bool q_syntaxhighlighter_block_signals(void* self, bool b);
QThread* q_syntaxhighlighter_thread(void* self);
void q_syntaxhighlighter_move_to_thread(void* self, void* thread);
int32_t q_syntaxhighlighter_start_timer(void* self, int interval);
void q_syntaxhighlighter_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_syntaxhighlighter_children(void* self);
void q_syntaxhighlighter_set_parent(void* self, void* parent);
void q_syntaxhighlighter_install_event_filter(void* self, void* filterObj);
void q_syntaxhighlighter_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_syntaxhighlighter_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_syntaxhighlighter_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_syntaxhighlighter_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_syntaxhighlighter_disconnect_with_q_meta_object_connection(void* param1);
void q_syntaxhighlighter_dump_object_tree(void* self);
void q_syntaxhighlighter_dump_object_info(void* self);
bool q_syntaxhighlighter_set_property(void* self, const char* name, void* value);
QVariant* q_syntaxhighlighter_property(void* self, const char* name);
const char** q_syntaxhighlighter_dynamic_property_names(void* self);
QBindingStorage* q_syntaxhighlighter_binding_storage(void* self);
QBindingStorage* q_syntaxhighlighter_binding_storage2(void* self);
void q_syntaxhighlighter_destroyed(void* self);
void q_syntaxhighlighter_on_destroyed(void* self, void (*slot)(void*));
QObject* q_syntaxhighlighter_parent(void* self);
bool q_syntaxhighlighter_inherits(void* self, const char* classname);
void q_syntaxhighlighter_delete_later(void* self);
int32_t q_syntaxhighlighter_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_syntaxhighlighter_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_syntaxhighlighter_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_syntaxhighlighter_destroyed1(void* self, void* param1);
void q_syntaxhighlighter_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_syntaxhighlighter_event(void* self, void* event);
bool q_syntaxhighlighter_qbase_event(void* self, void* event);
void q_syntaxhighlighter_on_event(void* self, bool (*slot)(void*, void*));
bool q_syntaxhighlighter_event_filter(void* self, void* watched, void* event);
bool q_syntaxhighlighter_qbase_event_filter(void* self, void* watched, void* event);
void q_syntaxhighlighter_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_syntaxhighlighter_timer_event(void* self, void* event);
void q_syntaxhighlighter_qbase_timer_event(void* self, void* event);
void q_syntaxhighlighter_on_timer_event(void* self, void (*slot)(void*, void*));
void q_syntaxhighlighter_child_event(void* self, void* event);
void q_syntaxhighlighter_qbase_child_event(void* self, void* event);
void q_syntaxhighlighter_on_child_event(void* self, void (*slot)(void*, void*));
void q_syntaxhighlighter_custom_event(void* self, void* event);
void q_syntaxhighlighter_qbase_custom_event(void* self, void* event);
void q_syntaxhighlighter_on_custom_event(void* self, void (*slot)(void*, void*));
void q_syntaxhighlighter_connect_notify(void* self, void* signal);
void q_syntaxhighlighter_qbase_connect_notify(void* self, void* signal);
void q_syntaxhighlighter_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_syntaxhighlighter_disconnect_notify(void* self, void* signal);
void q_syntaxhighlighter_qbase_disconnect_notify(void* self, void* signal);
void q_syntaxhighlighter_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_syntaxhighlighter_sender(void* self);
QObject* q_syntaxhighlighter_qbase_sender(void* self);
void q_syntaxhighlighter_on_sender(void* self, QObject* (*slot)());
int32_t q_syntaxhighlighter_sender_signal_index(void* self);
int32_t q_syntaxhighlighter_qbase_sender_signal_index(void* self);
void q_syntaxhighlighter_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_syntaxhighlighter_receivers(void* self, const char* signal);
int32_t q_syntaxhighlighter_qbase_receivers(void* self, const char* signal);
void q_syntaxhighlighter_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_syntaxhighlighter_is_signal_connected(void* self, void* signal);
bool q_syntaxhighlighter_qbase_is_signal_connected(void* self, void* signal);
void q_syntaxhighlighter_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_syntaxhighlighter_delete(void* self);

#endif
