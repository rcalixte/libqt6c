#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqtextformat.hpp"
#include "libqtextcursor.hpp"
#include "libqtextdocument.hpp"
#include "libqtextobject.hpp"
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqtexttable.hpp"
#include "libqtexttable.h"

QTextTableCell* q_texttablecell_new() {
    return QTextTableCell_new();
}

QTextTableCell* q_texttablecell_new2(void* o) {
    return QTextTableCell_new2((QTextTableCell*)o);
}

void q_texttablecell_operator_assign(void* self, void* o) {
    QTextTableCell_OperatorAssign((QTextTableCell*)self, (QTextTableCell*)o);
}

void q_texttablecell_set_format(void* self, void* format) {
    QTextTableCell_SetFormat((QTextTableCell*)self, (QTextCharFormat*)format);
}

QTextCharFormat* q_texttablecell_format(void* self) {
    return QTextTableCell_Format((QTextTableCell*)self);
}

int32_t q_texttablecell_row(void* self) {
    return QTextTableCell_Row((QTextTableCell*)self);
}

int32_t q_texttablecell_column(void* self) {
    return QTextTableCell_Column((QTextTableCell*)self);
}

int32_t q_texttablecell_row_span(void* self) {
    return QTextTableCell_RowSpan((QTextTableCell*)self);
}

int32_t q_texttablecell_column_span(void* self) {
    return QTextTableCell_ColumnSpan((QTextTableCell*)self);
}

bool q_texttablecell_is_valid(void* self) {
    return QTextTableCell_IsValid((QTextTableCell*)self);
}

QTextCursor* q_texttablecell_first_cursor_position(void* self) {
    return QTextTableCell_FirstCursorPosition((QTextTableCell*)self);
}

QTextCursor* q_texttablecell_last_cursor_position(void* self) {
    return QTextTableCell_LastCursorPosition((QTextTableCell*)self);
}

int32_t q_texttablecell_first_position(void* self) {
    return QTextTableCell_FirstPosition((QTextTableCell*)self);
}

int32_t q_texttablecell_last_position(void* self) {
    return QTextTableCell_LastPosition((QTextTableCell*)self);
}

bool q_texttablecell_operator_equal(void* self, void* other) {
    return QTextTableCell_OperatorEqual((QTextTableCell*)self, (QTextTableCell*)other);
}

bool q_texttablecell_operator_not_equal(void* self, void* other) {
    return QTextTableCell_OperatorNotEqual((QTextTableCell*)self, (QTextTableCell*)other);
}

QTextFrame__iterator* q_texttablecell_begin(void* self) {
    return QTextTableCell_Begin((QTextTableCell*)self);
}

QTextFrame__iterator* q_texttablecell_end(void* self) {
    return QTextTableCell_End((QTextTableCell*)self);
}

int32_t q_texttablecell_table_cell_format_index(void* self) {
    return QTextTableCell_TableCellFormatIndex((QTextTableCell*)self);
}

void q_texttablecell_delete(void* self) {
    QTextTableCell_Delete((QTextTableCell*)(self));
}

QTextTable* q_texttable_new(void* doc) {
    return QTextTable_new((QTextDocument*)doc);
}

QMetaObject* q_texttable_meta_object(void* self) {
    return QTextTable_MetaObject((QTextTable*)self);
}

void* q_texttable_metacast(void* self, const char* param1) {
    return QTextTable_Metacast((QTextTable*)self, param1);
}

int32_t q_texttable_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTextTable_Metacall((QTextTable*)self, param1, param2, param3);
}

void q_texttable_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QTextTable_OnMetacall((QTextTable*)self, (intptr_t)slot);
}

int32_t q_texttable_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTextTable_QBaseMetacall((QTextTable*)self, param1, param2, param3);
}

const char* q_texttable_tr(const char* s) {
    libqt_string _str = QTextTable_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_texttable_resize(void* self, int rows, int cols) {
    QTextTable_Resize((QTextTable*)self, rows, cols);
}

void q_texttable_insert_rows(void* self, int pos, int num) {
    QTextTable_InsertRows((QTextTable*)self, pos, num);
}

void q_texttable_insert_columns(void* self, int pos, int num) {
    QTextTable_InsertColumns((QTextTable*)self, pos, num);
}

void q_texttable_append_rows(void* self, int count) {
    QTextTable_AppendRows((QTextTable*)self, count);
}

void q_texttable_append_columns(void* self, int count) {
    QTextTable_AppendColumns((QTextTable*)self, count);
}

void q_texttable_remove_rows(void* self, int pos, int num) {
    QTextTable_RemoveRows((QTextTable*)self, pos, num);
}

void q_texttable_remove_columns(void* self, int pos, int num) {
    QTextTable_RemoveColumns((QTextTable*)self, pos, num);
}

void q_texttable_merge_cells(void* self, int row, int col, int numRows, int numCols) {
    QTextTable_MergeCells((QTextTable*)self, row, col, numRows, numCols);
}

void q_texttable_merge_cells_with_cursor(void* self, void* cursor) {
    QTextTable_MergeCellsWithCursor((QTextTable*)self, (QTextCursor*)cursor);
}

void q_texttable_split_cell(void* self, int row, int col, int numRows, int numCols) {
    QTextTable_SplitCell((QTextTable*)self, row, col, numRows, numCols);
}

int32_t q_texttable_rows(void* self) {
    return QTextTable_Rows((QTextTable*)self);
}

int32_t q_texttable_columns(void* self) {
    return QTextTable_Columns((QTextTable*)self);
}

QTextTableCell* q_texttable_cell_at(void* self, int row, int col) {
    return QTextTable_CellAt((QTextTable*)self, row, col);
}

QTextTableCell* q_texttable_cell_at_with_position(void* self, int position) {
    return QTextTable_CellAtWithPosition((QTextTable*)self, position);
}

QTextTableCell* q_texttable_cell_at_with_q_text_cursor(void* self, void* c) {
    return QTextTable_CellAtWithQTextCursor((QTextTable*)self, (QTextCursor*)c);
}

QTextCursor* q_texttable_row_start(void* self, void* c) {
    return QTextTable_RowStart((QTextTable*)self, (QTextCursor*)c);
}

QTextCursor* q_texttable_row_end(void* self, void* c) {
    return QTextTable_RowEnd((QTextTable*)self, (QTextCursor*)c);
}

void q_texttable_set_format(void* self, void* format) {
    QTextTable_SetFormat((QTextTable*)self, (QTextTableFormat*)format);
}

QTextTableFormat* q_texttable_format(void* self) {
    return QTextTable_Format((QTextTable*)self);
}

const char* q_texttable_tr2(const char* s, const char* c) {
    libqt_string _str = QTextTable_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_texttable_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QTextTable_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_texttable_set_frame_format(void* self, void* format) {
    QTextFrame_SetFrameFormat((QTextFrame*)self, (QTextFrameFormat*)format);
}

QTextFrameFormat* q_texttable_frame_format(void* self) {
    return QTextFrame_FrameFormat((QTextFrame*)self);
}

QTextCursor* q_texttable_first_cursor_position(void* self) {
    return QTextFrame_FirstCursorPosition((QTextFrame*)self);
}

QTextCursor* q_texttable_last_cursor_position(void* self) {
    return QTextFrame_LastCursorPosition((QTextFrame*)self);
}

int32_t q_texttable_first_position(void* self) {
    return QTextFrame_FirstPosition((QTextFrame*)self);
}

int32_t q_texttable_last_position(void* self) {
    return QTextFrame_LastPosition((QTextFrame*)self);
}

QTextFrameLayoutData* q_texttable_layout_data(void* self) {
    return QTextFrame_LayoutData((QTextFrame*)self);
}

void q_texttable_set_layout_data(void* self, void* data) {
    QTextFrame_SetLayoutData((QTextFrame*)self, (QTextFrameLayoutData*)data);
}

libqt_list /* of QTextFrame* */ q_texttable_child_frames(void* self) {
    libqt_list _arr = QTextFrame_ChildFrames((QTextFrame*)self);
    return _arr;
}

QTextFrame* q_texttable_parent_frame(void* self) {
    return QTextFrame_ParentFrame((QTextFrame*)self);
}

QTextFrame__iterator* q_texttable_begin(void* self) {
    return QTextFrame_Begin((QTextFrame*)self);
}

QTextFrame__iterator* q_texttable_end(void* self) {
    return QTextFrame_End((QTextFrame*)self);
}

int32_t q_texttable_format_index(void* self) {
    return QTextObject_FormatIndex((QTextObject*)self);
}

QTextDocument* q_texttable_document(void* self) {
    return QTextObject_Document((QTextObject*)self);
}

int32_t q_texttable_object_index(void* self) {
    return QTextObject_ObjectIndex((QTextObject*)self);
}

const char* q_texttable_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_texttable_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_texttable_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_texttable_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_texttable_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_texttable_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_texttable_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_texttable_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_texttable_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_texttable_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_texttable_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_texttable_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_texttable_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_texttable_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_texttable_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_texttable_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_texttable_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_texttable_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_texttable_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_texttable_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_texttable_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_texttable_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_texttable_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_texttable_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_texttable_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_texttable_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_texttable_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_texttable_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_texttable_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_texttable_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_texttable_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_texttable_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_texttable_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_texttable_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_texttable_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_texttable_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_texttable_event(void* self, void* event) {
    return QTextTable_Event((QTextTable*)self, (QEvent*)event);
}

bool q_texttable_qbase_event(void* self, void* event) {
    return QTextTable_QBaseEvent((QTextTable*)self, (QEvent*)event);
}

void q_texttable_on_event(void* self, bool (*slot)(void*, void*)) {
    QTextTable_OnEvent((QTextTable*)self, (intptr_t)slot);
}

bool q_texttable_event_filter(void* self, void* watched, void* event) {
    return QTextTable_EventFilter((QTextTable*)self, (QObject*)watched, (QEvent*)event);
}

bool q_texttable_qbase_event_filter(void* self, void* watched, void* event) {
    return QTextTable_QBaseEventFilter((QTextTable*)self, (QObject*)watched, (QEvent*)event);
}

void q_texttable_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QTextTable_OnEventFilter((QTextTable*)self, (intptr_t)slot);
}

void q_texttable_timer_event(void* self, void* event) {
    QTextTable_TimerEvent((QTextTable*)self, (QTimerEvent*)event);
}

void q_texttable_qbase_timer_event(void* self, void* event) {
    QTextTable_QBaseTimerEvent((QTextTable*)self, (QTimerEvent*)event);
}

void q_texttable_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QTextTable_OnTimerEvent((QTextTable*)self, (intptr_t)slot);
}

void q_texttable_child_event(void* self, void* event) {
    QTextTable_ChildEvent((QTextTable*)self, (QChildEvent*)event);
}

void q_texttable_qbase_child_event(void* self, void* event) {
    QTextTable_QBaseChildEvent((QTextTable*)self, (QChildEvent*)event);
}

void q_texttable_on_child_event(void* self, void (*slot)(void*, void*)) {
    QTextTable_OnChildEvent((QTextTable*)self, (intptr_t)slot);
}

void q_texttable_custom_event(void* self, void* event) {
    QTextTable_CustomEvent((QTextTable*)self, (QEvent*)event);
}

void q_texttable_qbase_custom_event(void* self, void* event) {
    QTextTable_QBaseCustomEvent((QTextTable*)self, (QEvent*)event);
}

void q_texttable_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QTextTable_OnCustomEvent((QTextTable*)self, (intptr_t)slot);
}

void q_texttable_connect_notify(void* self, void* signal) {
    QTextTable_ConnectNotify((QTextTable*)self, (QMetaMethod*)signal);
}

void q_texttable_qbase_connect_notify(void* self, void* signal) {
    QTextTable_QBaseConnectNotify((QTextTable*)self, (QMetaMethod*)signal);
}

void q_texttable_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QTextTable_OnConnectNotify((QTextTable*)self, (intptr_t)slot);
}

void q_texttable_disconnect_notify(void* self, void* signal) {
    QTextTable_DisconnectNotify((QTextTable*)self, (QMetaMethod*)signal);
}

void q_texttable_qbase_disconnect_notify(void* self, void* signal) {
    QTextTable_QBaseDisconnectNotify((QTextTable*)self, (QMetaMethod*)signal);
}

void q_texttable_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QTextTable_OnDisconnectNotify((QTextTable*)self, (intptr_t)slot);
}

QObject* q_texttable_sender(void* self) {
    return QTextTable_Sender((QTextTable*)self);
}

QObject* q_texttable_qbase_sender(void* self) {
    return QTextTable_QBaseSender((QTextTable*)self);
}

void q_texttable_on_sender(void* self, QObject* (*slot)()) {
    QTextTable_OnSender((QTextTable*)self, (intptr_t)slot);
}

int32_t q_texttable_sender_signal_index(void* self) {
    return QTextTable_SenderSignalIndex((QTextTable*)self);
}

int32_t q_texttable_qbase_sender_signal_index(void* self) {
    return QTextTable_QBaseSenderSignalIndex((QTextTable*)self);
}

void q_texttable_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QTextTable_OnSenderSignalIndex((QTextTable*)self, (intptr_t)slot);
}

int32_t q_texttable_receivers(void* self, const char* signal) {
    return QTextTable_Receivers((QTextTable*)self, signal);
}

int32_t q_texttable_qbase_receivers(void* self, const char* signal) {
    return QTextTable_QBaseReceivers((QTextTable*)self, signal);
}

void q_texttable_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QTextTable_OnReceivers((QTextTable*)self, (intptr_t)slot);
}

bool q_texttable_is_signal_connected(void* self, void* signal) {
    return QTextTable_IsSignalConnected((QTextTable*)self, (QMetaMethod*)signal);
}

bool q_texttable_qbase_is_signal_connected(void* self, void* signal) {
    return QTextTable_QBaseIsSignalConnected((QTextTable*)self, (QMetaMethod*)signal);
}

void q_texttable_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QTextTable_OnIsSignalConnected((QTextTable*)self, (intptr_t)slot);
}

void q_texttable_delete(void* self) {
    QTextTable_Delete((QTextTable*)(self));
}
