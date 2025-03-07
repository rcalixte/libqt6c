#pragma once
#ifndef SRCQT6C_LIBQTEXTOBJECT_H
#define SRCQT6C_LIBQTEXTOBJECT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqglyphrun.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include <string.h>
#include "libqtextformat.h"
#include "libqtextcursor.h"
#include "libqtextdocument.h"
#include "libqtextlayout.h"
#include "libqtextlist.h"
#include "libqthread.h"
#include "libqvariant.h"

QMetaObject* q_textobject_meta_object(void* self);
void* q_textobject_metacast(void* self, const char* param1);
int32_t q_textobject_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_textobject_tr(const char* s);
QTextFormat* q_textobject_format(void* self);
int32_t q_textobject_format_index(void* self);
QTextDocument* q_textobject_document(void* self);
int32_t q_textobject_object_index(void* self);
const char* q_textobject_tr2(const char* s, const char* c);
const char* q_textobject_tr3(const char* s, const char* c, int n);
bool q_textobject_event(void* self, void* event);
bool q_textobject_event_filter(void* self, void* watched, void* event);
const char* q_textobject_object_name(void* self);
void q_textobject_set_object_name(void* self, const char* name);
bool q_textobject_is_widget_type(void* self);
bool q_textobject_is_window_type(void* self);
bool q_textobject_is_quick_item_type(void* self);
bool q_textobject_signals_blocked(void* self);
bool q_textobject_block_signals(void* self, bool b);
QThread* q_textobject_thread(void* self);
void q_textobject_move_to_thread(void* self, void* thread);
int32_t q_textobject_start_timer(void* self, int interval);
void q_textobject_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_textobject_children(void* self);
void q_textobject_set_parent(void* self, void* parent);
void q_textobject_install_event_filter(void* self, void* filterObj);
void q_textobject_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_textobject_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_textobject_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_textobject_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_textobject_disconnect_with_q_meta_object_connection(void* param1);
void q_textobject_dump_object_tree(void* self);
void q_textobject_dump_object_info(void* self);
bool q_textobject_set_property(void* self, const char* name, void* value);
QVariant* q_textobject_property(void* self, const char* name);
const char** q_textobject_dynamic_property_names(void* self);
QBindingStorage* q_textobject_binding_storage(void* self);
QBindingStorage* q_textobject_binding_storage2(void* self);
void q_textobject_destroyed(void* self);
void q_textobject_on_destroyed(void* self, void (*slot)(void*));
QObject* q_textobject_parent(void* self);
bool q_textobject_inherits(void* self, const char* classname);
void q_textobject_delete_later(void* self);
int32_t q_textobject_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_textobject_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_textobject_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_textobject_destroyed1(void* self, void* param1);
void q_textobject_on_destroyed1(void* self, void (*slot)(void*, void*));
QMetaObject* q_textblockgroup_meta_object(void* self);
void* q_textblockgroup_metacast(void* self, const char* param1);
int32_t q_textblockgroup_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_textblockgroup_tr(const char* s);
const char* q_textblockgroup_tr2(const char* s, const char* c);
const char* q_textblockgroup_tr3(const char* s, const char* c, int n);
QTextFormat* q_textblockgroup_format(void* self);
int32_t q_textblockgroup_format_index(void* self);
QTextDocument* q_textblockgroup_document(void* self);
int32_t q_textblockgroup_object_index(void* self);
bool q_textblockgroup_event(void* self, void* event);
bool q_textblockgroup_event_filter(void* self, void* watched, void* event);
const char* q_textblockgroup_object_name(void* self);
void q_textblockgroup_set_object_name(void* self, const char* name);
bool q_textblockgroup_is_widget_type(void* self);
bool q_textblockgroup_is_window_type(void* self);
bool q_textblockgroup_is_quick_item_type(void* self);
bool q_textblockgroup_signals_blocked(void* self);
bool q_textblockgroup_block_signals(void* self, bool b);
QThread* q_textblockgroup_thread(void* self);
void q_textblockgroup_move_to_thread(void* self, void* thread);
int32_t q_textblockgroup_start_timer(void* self, int interval);
void q_textblockgroup_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_textblockgroup_children(void* self);
void q_textblockgroup_set_parent(void* self, void* parent);
void q_textblockgroup_install_event_filter(void* self, void* filterObj);
void q_textblockgroup_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_textblockgroup_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_textblockgroup_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_textblockgroup_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_textblockgroup_disconnect_with_q_meta_object_connection(void* param1);
void q_textblockgroup_dump_object_tree(void* self);
void q_textblockgroup_dump_object_info(void* self);
bool q_textblockgroup_set_property(void* self, const char* name, void* value);
QVariant* q_textblockgroup_property(void* self, const char* name);
const char** q_textblockgroup_dynamic_property_names(void* self);
QBindingStorage* q_textblockgroup_binding_storage(void* self);
QBindingStorage* q_textblockgroup_binding_storage2(void* self);
void q_textblockgroup_destroyed(void* self);
void q_textblockgroup_on_destroyed(void* self, void (*slot)(void*));
QObject* q_textblockgroup_parent(void* self);
bool q_textblockgroup_inherits(void* self, const char* classname);
void q_textblockgroup_delete_later(void* self);
int32_t q_textblockgroup_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_textblockgroup_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_textblockgroup_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_textblockgroup_destroyed1(void* self, void* param1);
void q_textblockgroup_on_destroyed1(void* self, void (*slot)(void*, void*));
void q_textframelayoutdata_operator_assign(void* self, void* param1);
void q_textframelayoutdata_delete(void* self);

QTextFrame* q_textframe_new(void* doc);
QMetaObject* q_textframe_meta_object(void* self);
void* q_textframe_metacast(void* self, const char* param1);
int32_t q_textframe_metacall(void* self, int64_t param1, int param2, void* param3);
void q_textframe_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_textframe_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_textframe_tr(const char* s);
void q_textframe_set_frame_format(void* self, void* format);
QTextFrameFormat* q_textframe_frame_format(void* self);
QTextCursor* q_textframe_first_cursor_position(void* self);
QTextCursor* q_textframe_last_cursor_position(void* self);
int32_t q_textframe_first_position(void* self);
int32_t q_textframe_last_position(void* self);
QTextFrameLayoutData* q_textframe_layout_data(void* self);
void q_textframe_set_layout_data(void* self, void* data);
libqt_list /* of QTextFrame* */ q_textframe_child_frames(void* self);
QTextFrame* q_textframe_parent_frame(void* self);
QTextFrame__iterator* q_textframe_begin(void* self);
QTextFrame__iterator* q_textframe_end(void* self);
const char* q_textframe_tr2(const char* s, const char* c);
const char* q_textframe_tr3(const char* s, const char* c, int n);
QTextFormat* q_textframe_format(void* self);
int32_t q_textframe_format_index(void* self);
QTextDocument* q_textframe_document(void* self);
int32_t q_textframe_object_index(void* self);
const char* q_textframe_object_name(void* self);
void q_textframe_set_object_name(void* self, const char* name);
bool q_textframe_is_widget_type(void* self);
bool q_textframe_is_window_type(void* self);
bool q_textframe_is_quick_item_type(void* self);
bool q_textframe_signals_blocked(void* self);
bool q_textframe_block_signals(void* self, bool b);
QThread* q_textframe_thread(void* self);
void q_textframe_move_to_thread(void* self, void* thread);
int32_t q_textframe_start_timer(void* self, int interval);
void q_textframe_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_textframe_children(void* self);
void q_textframe_set_parent(void* self, void* parent);
void q_textframe_install_event_filter(void* self, void* filterObj);
void q_textframe_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_textframe_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_textframe_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_textframe_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_textframe_disconnect_with_q_meta_object_connection(void* param1);
void q_textframe_dump_object_tree(void* self);
void q_textframe_dump_object_info(void* self);
bool q_textframe_set_property(void* self, const char* name, void* value);
QVariant* q_textframe_property(void* self, const char* name);
const char** q_textframe_dynamic_property_names(void* self);
QBindingStorage* q_textframe_binding_storage(void* self);
QBindingStorage* q_textframe_binding_storage2(void* self);
void q_textframe_destroyed(void* self);
void q_textframe_on_destroyed(void* self, void (*slot)(void*));
QObject* q_textframe_parent(void* self);
bool q_textframe_inherits(void* self, const char* classname);
void q_textframe_delete_later(void* self);
int32_t q_textframe_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_textframe_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_textframe_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_textframe_destroyed1(void* self, void* param1);
void q_textframe_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_textframe_event(void* self, void* event);
bool q_textframe_qbase_event(void* self, void* event);
void q_textframe_on_event(void* self, bool (*slot)(void*, void*));
bool q_textframe_event_filter(void* self, void* watched, void* event);
bool q_textframe_qbase_event_filter(void* self, void* watched, void* event);
void q_textframe_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_textframe_timer_event(void* self, void* event);
void q_textframe_qbase_timer_event(void* self, void* event);
void q_textframe_on_timer_event(void* self, void (*slot)(void*, void*));
void q_textframe_child_event(void* self, void* event);
void q_textframe_qbase_child_event(void* self, void* event);
void q_textframe_on_child_event(void* self, void (*slot)(void*, void*));
void q_textframe_custom_event(void* self, void* event);
void q_textframe_qbase_custom_event(void* self, void* event);
void q_textframe_on_custom_event(void* self, void (*slot)(void*, void*));
void q_textframe_connect_notify(void* self, void* signal);
void q_textframe_qbase_connect_notify(void* self, void* signal);
void q_textframe_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_textframe_disconnect_notify(void* self, void* signal);
void q_textframe_qbase_disconnect_notify(void* self, void* signal);
void q_textframe_on_disconnect_notify(void* self, void (*slot)(void*, void*));
void q_textframe_set_format(void* self, void* format);
void q_textframe_qbase_set_format(void* self, void* format);
void q_textframe_on_set_format(void* self, void (*slot)(void*, void*));
QObject* q_textframe_sender(void* self);
QObject* q_textframe_qbase_sender(void* self);
void q_textframe_on_sender(void* self, QObject* (*slot)());
int32_t q_textframe_sender_signal_index(void* self);
int32_t q_textframe_qbase_sender_signal_index(void* self);
void q_textframe_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_textframe_receivers(void* self, const char* signal);
int32_t q_textframe_qbase_receivers(void* self, const char* signal);
void q_textframe_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_textframe_is_signal_connected(void* self, void* signal);
bool q_textframe_qbase_is_signal_connected(void* self, void* signal);
void q_textframe_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_textframe_delete(void* self);

void q_textblockuserdata_operator_assign(void* self, void* param1);
void q_textblockuserdata_delete(void* self);

QTextBlock* q_textblock_new();
QTextBlock* q_textblock_new2(void* o);
void q_textblock_operator_assign(void* self, void* o);
bool q_textblock_is_valid(void* self);
bool q_textblock_operator_equal(void* self, void* o);
bool q_textblock_operator_not_equal(void* self, void* o);
bool q_textblock_operator_lesser(void* self, void* o);
int32_t q_textblock_position(void* self);
int32_t q_textblock_length(void* self);
bool q_textblock_contains(void* self, int position);
QTextLayout* q_textblock_layout(void* self);
void q_textblock_clear_layout(void* self);
QTextBlockFormat* q_textblock_block_format(void* self);
int32_t q_textblock_block_format_index(void* self);
QTextCharFormat* q_textblock_char_format(void* self);
int32_t q_textblock_char_format_index(void* self);
int64_t q_textblock_text_direction(void* self);
const char* q_textblock_text(void* self);
libqt_list /* of QTextLayout__FormatRange* */ q_textblock_text_formats(void* self);
QTextDocument* q_textblock_document(void* self);
QTextList* q_textblock_text_list(void* self);
QTextBlockUserData* q_textblock_user_data(void* self);
void q_textblock_set_user_data(void* self, void* data);
int32_t q_textblock_user_state(void* self);
void q_textblock_set_user_state(void* self, int state);
int32_t q_textblock_revision(void* self);
void q_textblock_set_revision(void* self, int rev);
bool q_textblock_is_visible(void* self);
void q_textblock_set_visible(void* self, bool visible);
int32_t q_textblock_block_number(void* self);
int32_t q_textblock_first_line_number(void* self);
void q_textblock_set_line_count(void* self, int count);
int32_t q_textblock_line_count(void* self);
QTextBlock__iterator* q_textblock_begin(void* self);
QTextBlock__iterator* q_textblock_end(void* self);
QTextBlock* q_textblock_next(void* self);
QTextBlock* q_textblock_previous(void* self);
int32_t q_textblock_fragment_index(void* self);
void q_textblock_delete(void* self);

QTextFragment* q_textfragment_new();
QTextFragment* q_textfragment_new2(void* o);
void q_textfragment_operator_assign(void* self, void* o);
bool q_textfragment_is_valid(void* self);
bool q_textfragment_operator_equal(void* self, void* o);
bool q_textfragment_operator_not_equal(void* self, void* o);
bool q_textfragment_operator_lesser(void* self, void* o);
int32_t q_textfragment_position(void* self);
int32_t q_textfragment_length(void* self);
bool q_textfragment_contains(void* self, int position);
QTextCharFormat* q_textfragment_char_format(void* self);
int32_t q_textfragment_char_format_index(void* self);
const char* q_textfragment_text(void* self);
libqt_list /* of QGlyphRun* */ q_textfragment_glyph_runs(void* self);
libqt_list /* of QGlyphRun* */ q_textfragment_glyph_runs1(void* self, int from);
libqt_list /* of QGlyphRun* */ q_textfragment_glyph_runs2(void* self, int from, int length);
void q_textfragment_delete(void* self);

QTextFrame__iterator* q_textframe__iterator_new(void* other);
QTextFrame__iterator* q_textframe__iterator_new2(void* other);
QTextFrame__iterator* q_textframe__iterator_new3();
QTextFrame__iterator* q_textframe__iterator_new4(void* param1);
void q_textframe__iterator_copy_assign(void* self, void* other);
void q_textframe__iterator_move_assign(void* self, void* other);
QTextFrame* q_textframe__iterator_parent_frame(void* self);
QTextFrame* q_textframe__iterator_current_frame(void* self);
QTextBlock* q_textframe__iterator_current_block(void* self);
bool q_textframe__iterator_at_end(void* self);
bool q_textframe__iterator_operator_equal(void* self, void* o);
bool q_textframe__iterator_operator_not_equal(void* self, void* o);
QTextFrame__iterator* q_textframe__iterator_operator_plus_plus(void* self);
QTextFrame__iterator* q_textframe__iterator_operator_plus_plus_with_int(void* self, int param1);
QTextFrame__iterator* q_textframe__iterator_operator_minus_minus(void* self);
QTextFrame__iterator* q_textframe__iterator_operator_minus_minus_with_int(void* self, int param1);
void q_textframe__iterator_delete(void* self);

QTextBlock__iterator* q_textblock__iterator_new(void* other);
QTextBlock__iterator* q_textblock__iterator_new2(void* other);
QTextBlock__iterator* q_textblock__iterator_new3();
QTextBlock__iterator* q_textblock__iterator_new4(void* param1);
void q_textblock__iterator_copy_assign(void* self, void* other);
void q_textblock__iterator_move_assign(void* self, void* other);
QTextFragment* q_textblock__iterator_fragment(void* self);
bool q_textblock__iterator_at_end(void* self);
bool q_textblock__iterator_operator_equal(void* self, void* o);
bool q_textblock__iterator_operator_not_equal(void* self, void* o);
QTextBlock__iterator* q_textblock__iterator_operator_plus_plus(void* self);
QTextBlock__iterator* q_textblock__iterator_operator_plus_plus_with_int(void* self, int param1);
QTextBlock__iterator* q_textblock__iterator_operator_minus_minus(void* self);
QTextBlock__iterator* q_textblock__iterator_operator_minus_minus_with_int(void* self, int param1);
void q_textblock__iterator_delete(void* self);

#endif
