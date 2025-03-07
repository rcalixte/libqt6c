#pragma once
#ifndef SRCQT6C_LIBQTEXTTABLE_H
#define SRCQT6C_LIBQTEXTTABLE_H

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
#include "libqtextformat.h"
#include "libqtextcursor.h"
#include "libqtextdocument.h"
#include "libqtextobject.h"
#include "libqthread.h"
#include "libqvariant.h"

QTextTableCell* q_texttablecell_new();
QTextTableCell* q_texttablecell_new2(void* o);
void q_texttablecell_operator_assign(void* self, void* o);
void q_texttablecell_set_format(void* self, void* format);
QTextCharFormat* q_texttablecell_format(void* self);
int32_t q_texttablecell_row(void* self);
int32_t q_texttablecell_column(void* self);
int32_t q_texttablecell_row_span(void* self);
int32_t q_texttablecell_column_span(void* self);
bool q_texttablecell_is_valid(void* self);
QTextCursor* q_texttablecell_first_cursor_position(void* self);
QTextCursor* q_texttablecell_last_cursor_position(void* self);
int32_t q_texttablecell_first_position(void* self);
int32_t q_texttablecell_last_position(void* self);
bool q_texttablecell_operator_equal(void* self, void* other);
bool q_texttablecell_operator_not_equal(void* self, void* other);
QTextFrame__iterator* q_texttablecell_begin(void* self);
QTextFrame__iterator* q_texttablecell_end(void* self);
int32_t q_texttablecell_table_cell_format_index(void* self);
void q_texttablecell_delete(void* self);

QTextTable* q_texttable_new(void* doc);
QMetaObject* q_texttable_meta_object(void* self);
void* q_texttable_metacast(void* self, const char* param1);
int32_t q_texttable_metacall(void* self, int64_t param1, int param2, void* param3);
void q_texttable_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_texttable_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_texttable_tr(const char* s);
void q_texttable_resize(void* self, int rows, int cols);
void q_texttable_insert_rows(void* self, int pos, int num);
void q_texttable_insert_columns(void* self, int pos, int num);
void q_texttable_append_rows(void* self, int count);
void q_texttable_append_columns(void* self, int count);
void q_texttable_remove_rows(void* self, int pos, int num);
void q_texttable_remove_columns(void* self, int pos, int num);
void q_texttable_merge_cells(void* self, int row, int col, int numRows, int numCols);
void q_texttable_merge_cells_with_cursor(void* self, void* cursor);
void q_texttable_split_cell(void* self, int row, int col, int numRows, int numCols);
int32_t q_texttable_rows(void* self);
int32_t q_texttable_columns(void* self);
QTextTableCell* q_texttable_cell_at(void* self, int row, int col);
QTextTableCell* q_texttable_cell_at_with_position(void* self, int position);
QTextTableCell* q_texttable_cell_at_with_q_text_cursor(void* self, void* c);
QTextCursor* q_texttable_row_start(void* self, void* c);
QTextCursor* q_texttable_row_end(void* self, void* c);
void q_texttable_set_format(void* self, void* format);
QTextTableFormat* q_texttable_format(void* self);
const char* q_texttable_tr2(const char* s, const char* c);
const char* q_texttable_tr3(const char* s, const char* c, int n);
void q_texttable_set_frame_format(void* self, void* format);
QTextFrameFormat* q_texttable_frame_format(void* self);
QTextCursor* q_texttable_first_cursor_position(void* self);
QTextCursor* q_texttable_last_cursor_position(void* self);
int32_t q_texttable_first_position(void* self);
int32_t q_texttable_last_position(void* self);
QTextFrameLayoutData* q_texttable_layout_data(void* self);
void q_texttable_set_layout_data(void* self, void* data);
libqt_list /* of QTextFrame* */ q_texttable_child_frames(void* self);
QTextFrame* q_texttable_parent_frame(void* self);
QTextFrame__iterator* q_texttable_begin(void* self);
QTextFrame__iterator* q_texttable_end(void* self);
int32_t q_texttable_format_index(void* self);
QTextDocument* q_texttable_document(void* self);
int32_t q_texttable_object_index(void* self);
const char* q_texttable_object_name(void* self);
void q_texttable_set_object_name(void* self, const char* name);
bool q_texttable_is_widget_type(void* self);
bool q_texttable_is_window_type(void* self);
bool q_texttable_is_quick_item_type(void* self);
bool q_texttable_signals_blocked(void* self);
bool q_texttable_block_signals(void* self, bool b);
QThread* q_texttable_thread(void* self);
void q_texttable_move_to_thread(void* self, void* thread);
int32_t q_texttable_start_timer(void* self, int interval);
void q_texttable_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_texttable_children(void* self);
void q_texttable_set_parent(void* self, void* parent);
void q_texttable_install_event_filter(void* self, void* filterObj);
void q_texttable_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_texttable_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_texttable_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_texttable_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_texttable_disconnect_with_q_meta_object_connection(void* param1);
void q_texttable_dump_object_tree(void* self);
void q_texttable_dump_object_info(void* self);
bool q_texttable_set_property(void* self, const char* name, void* value);
QVariant* q_texttable_property(void* self, const char* name);
const char** q_texttable_dynamic_property_names(void* self);
QBindingStorage* q_texttable_binding_storage(void* self);
QBindingStorage* q_texttable_binding_storage2(void* self);
void q_texttable_destroyed(void* self);
void q_texttable_on_destroyed(void* self, void (*slot)(void*));
QObject* q_texttable_parent(void* self);
bool q_texttable_inherits(void* self, const char* classname);
void q_texttable_delete_later(void* self);
int32_t q_texttable_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_texttable_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_texttable_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_texttable_destroyed1(void* self, void* param1);
void q_texttable_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_texttable_event(void* self, void* event);
bool q_texttable_qbase_event(void* self, void* event);
void q_texttable_on_event(void* self, bool (*slot)(void*, void*));
bool q_texttable_event_filter(void* self, void* watched, void* event);
bool q_texttable_qbase_event_filter(void* self, void* watched, void* event);
void q_texttable_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_texttable_timer_event(void* self, void* event);
void q_texttable_qbase_timer_event(void* self, void* event);
void q_texttable_on_timer_event(void* self, void (*slot)(void*, void*));
void q_texttable_child_event(void* self, void* event);
void q_texttable_qbase_child_event(void* self, void* event);
void q_texttable_on_child_event(void* self, void (*slot)(void*, void*));
void q_texttable_custom_event(void* self, void* event);
void q_texttable_qbase_custom_event(void* self, void* event);
void q_texttable_on_custom_event(void* self, void (*slot)(void*, void*));
void q_texttable_connect_notify(void* self, void* signal);
void q_texttable_qbase_connect_notify(void* self, void* signal);
void q_texttable_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_texttable_disconnect_notify(void* self, void* signal);
void q_texttable_qbase_disconnect_notify(void* self, void* signal);
void q_texttable_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_texttable_sender(void* self);
QObject* q_texttable_qbase_sender(void* self);
void q_texttable_on_sender(void* self, QObject* (*slot)());
int32_t q_texttable_sender_signal_index(void* self);
int32_t q_texttable_qbase_sender_signal_index(void* self);
void q_texttable_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_texttable_receivers(void* self, const char* signal);
int32_t q_texttable_qbase_receivers(void* self, const char* signal);
void q_texttable_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_texttable_is_signal_connected(void* self, void* signal);
bool q_texttable_qbase_is_signal_connected(void* self, void* signal);
void q_texttable_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_texttable_delete(void* self);

#endif
