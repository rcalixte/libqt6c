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

/// https://doc.qt.io/qt-6/qtexttablecell.html

/// q_texttablecell_new constructs a new QTextTableCell object.
///
///
QTextTableCell* q_texttablecell_new() {
    return QTextTableCell_new();
}

/// q_texttablecell_new2 constructs a new QTextTableCell object.
///
/// ``` QTextTableCell* o ```
QTextTableCell* q_texttablecell_new2(void* o) {
    return QTextTableCell_new2((QTextTableCell*)o);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#operator=)
///
/// ``` QTextTableCell* self, QTextTableCell* o ```
void q_texttablecell_operator_assign(void* self, void* o) {
    QTextTableCell_OperatorAssign((QTextTableCell*)self, (QTextTableCell*)o);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#setFormat)
///
/// ``` QTextTableCell* self, QTextCharFormat* format ```
void q_texttablecell_set_format(void* self, void* format) {
    QTextTableCell_SetFormat((QTextTableCell*)self, (QTextCharFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#format)
///
/// ``` QTextTableCell* self ```
QTextCharFormat* q_texttablecell_format(void* self) {
    return QTextTableCell_Format((QTextTableCell*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#row)
///
/// ``` QTextTableCell* self ```
int32_t q_texttablecell_row(void* self) {
    return QTextTableCell_Row((QTextTableCell*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#column)
///
/// ``` QTextTableCell* self ```
int32_t q_texttablecell_column(void* self) {
    return QTextTableCell_Column((QTextTableCell*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#rowSpan)
///
/// ``` QTextTableCell* self ```
int32_t q_texttablecell_row_span(void* self) {
    return QTextTableCell_RowSpan((QTextTableCell*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#columnSpan)
///
/// ``` QTextTableCell* self ```
int32_t q_texttablecell_column_span(void* self) {
    return QTextTableCell_ColumnSpan((QTextTableCell*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#isValid)
///
/// ``` QTextTableCell* self ```
bool q_texttablecell_is_valid(void* self) {
    return QTextTableCell_IsValid((QTextTableCell*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#firstCursorPosition)
///
/// ``` QTextTableCell* self ```
QTextCursor* q_texttablecell_first_cursor_position(void* self) {
    return QTextTableCell_FirstCursorPosition((QTextTableCell*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#lastCursorPosition)
///
/// ``` QTextTableCell* self ```
QTextCursor* q_texttablecell_last_cursor_position(void* self) {
    return QTextTableCell_LastCursorPosition((QTextTableCell*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#firstPosition)
///
/// ``` QTextTableCell* self ```
int32_t q_texttablecell_first_position(void* self) {
    return QTextTableCell_FirstPosition((QTextTableCell*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#lastPosition)
///
/// ``` QTextTableCell* self ```
int32_t q_texttablecell_last_position(void* self) {
    return QTextTableCell_LastPosition((QTextTableCell*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#operator==)
///
/// ``` QTextTableCell* self, QTextTableCell* other ```
bool q_texttablecell_operator_equal(void* self, void* other) {
    return QTextTableCell_OperatorEqual((QTextTableCell*)self, (QTextTableCell*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#operator!=)
///
/// ``` QTextTableCell* self, QTextTableCell* other ```
bool q_texttablecell_operator_not_equal(void* self, void* other) {
    return QTextTableCell_OperatorNotEqual((QTextTableCell*)self, (QTextTableCell*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#begin)
///
/// ``` QTextTableCell* self ```
QTextFrame__iterator* q_texttablecell_begin(void* self) {
    return QTextTableCell_Begin((QTextTableCell*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#end)
///
/// ``` QTextTableCell* self ```
QTextFrame__iterator* q_texttablecell_end(void* self) {
    return QTextTableCell_End((QTextTableCell*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#tableCellFormatIndex)
///
/// ``` QTextTableCell* self ```
int32_t q_texttablecell_table_cell_format_index(void* self) {
    return QTextTableCell_TableCellFormatIndex((QTextTableCell*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QTextTableCell* self ```
void q_texttablecell_delete(void* self) {
    QTextTableCell_Delete((QTextTableCell*)(self));
}

/// https://doc.qt.io/qt-6/qtexttable.html

/// q_texttable_new constructs a new QTextTable object.
///
/// ``` QTextDocument* doc ```
QTextTable* q_texttable_new(void* doc) {
    return QTextTable_new((QTextDocument*)doc);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTextTable* self ```
QMetaObject* q_texttable_meta_object(void* self) {
    return QTextTable_MetaObject((QTextTable*)self);
}

/// ``` QTextTable* self, const char* param1 ```
void* q_texttable_metacast(void* self, const char* param1) {
    return QTextTable_Metacast((QTextTable*)self, param1);
}

/// ``` QTextTable* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_texttable_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTextTable_Metacall((QTextTable*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QTextTable* self, int32_t (*slot)(QTextTable*, enum QMetaObject__Call, int, void*) ```
void q_texttable_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QTextTable_OnMetacall((QTextTable*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTextTable* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_texttable_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTextTable_QBaseMetacall((QTextTable*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_texttable_tr(const char* s) {
    libqt_string _str = QTextTable_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#resize)
///
/// ``` QTextTable* self, int rows, int cols ```
void q_texttable_resize(void* self, int rows, int cols) {
    QTextTable_Resize((QTextTable*)self, rows, cols);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#insertRows)
///
/// ``` QTextTable* self, int pos, int num ```
void q_texttable_insert_rows(void* self, int pos, int num) {
    QTextTable_InsertRows((QTextTable*)self, pos, num);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#insertColumns)
///
/// ``` QTextTable* self, int pos, int num ```
void q_texttable_insert_columns(void* self, int pos, int num) {
    QTextTable_InsertColumns((QTextTable*)self, pos, num);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#appendRows)
///
/// ``` QTextTable* self, int count ```
void q_texttable_append_rows(void* self, int count) {
    QTextTable_AppendRows((QTextTable*)self, count);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#appendColumns)
///
/// ``` QTextTable* self, int count ```
void q_texttable_append_columns(void* self, int count) {
    QTextTable_AppendColumns((QTextTable*)self, count);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#removeRows)
///
/// ``` QTextTable* self, int pos, int num ```
void q_texttable_remove_rows(void* self, int pos, int num) {
    QTextTable_RemoveRows((QTextTable*)self, pos, num);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#removeColumns)
///
/// ``` QTextTable* self, int pos, int num ```
void q_texttable_remove_columns(void* self, int pos, int num) {
    QTextTable_RemoveColumns((QTextTable*)self, pos, num);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#mergeCells)
///
/// ``` QTextTable* self, int row, int col, int numRows, int numCols ```
void q_texttable_merge_cells(void* self, int row, int col, int numRows, int numCols) {
    QTextTable_MergeCells((QTextTable*)self, row, col, numRows, numCols);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#mergeCells)
///
/// ``` QTextTable* self, QTextCursor* cursor ```
void q_texttable_merge_cells_with_cursor(void* self, void* cursor) {
    QTextTable_MergeCellsWithCursor((QTextTable*)self, (QTextCursor*)cursor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#splitCell)
///
/// ``` QTextTable* self, int row, int col, int numRows, int numCols ```
void q_texttable_split_cell(void* self, int row, int col, int numRows, int numCols) {
    QTextTable_SplitCell((QTextTable*)self, row, col, numRows, numCols);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#rows)
///
/// ``` QTextTable* self ```
int32_t q_texttable_rows(void* self) {
    return QTextTable_Rows((QTextTable*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#columns)
///
/// ``` QTextTable* self ```
int32_t q_texttable_columns(void* self) {
    return QTextTable_Columns((QTextTable*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#cellAt)
///
/// ``` QTextTable* self, int row, int col ```
QTextTableCell* q_texttable_cell_at(void* self, int row, int col) {
    return QTextTable_CellAt((QTextTable*)self, row, col);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#cellAt)
///
/// ``` QTextTable* self, int position ```
QTextTableCell* q_texttable_cell_at_with_position(void* self, int position) {
    return QTextTable_CellAtWithPosition((QTextTable*)self, position);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#cellAt)
///
/// ``` QTextTable* self, QTextCursor* c ```
QTextTableCell* q_texttable_cell_at_with_q_text_cursor(void* self, void* c) {
    return QTextTable_CellAtWithQTextCursor((QTextTable*)self, (QTextCursor*)c);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#rowStart)
///
/// ``` QTextTable* self, QTextCursor* c ```
QTextCursor* q_texttable_row_start(void* self, void* c) {
    return QTextTable_RowStart((QTextTable*)self, (QTextCursor*)c);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#rowEnd)
///
/// ``` QTextTable* self, QTextCursor* c ```
QTextCursor* q_texttable_row_end(void* self, void* c) {
    return QTextTable_RowEnd((QTextTable*)self, (QTextCursor*)c);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#setFormat)
///
/// ``` QTextTable* self, QTextTableFormat* format ```
void q_texttable_set_format(void* self, void* format) {
    QTextTable_SetFormat((QTextTable*)self, (QTextTableFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#format)
///
/// ``` QTextTable* self ```
QTextTableFormat* q_texttable_format(void* self) {
    return QTextTable_Format((QTextTable*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_texttable_tr2(const char* s, const char* c) {
    libqt_string _str = QTextTable_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_texttable_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QTextTable_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QTextFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#setFrameFormat)
///
/// ``` QTextTable* self, QTextFrameFormat* format ```
void q_texttable_set_frame_format(void* self, void* format) {
    QTextFrame_SetFrameFormat((QTextFrame*)self, (QTextFrameFormat*)format);
}

/// Inherited from QTextFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#frameFormat)
///
/// ``` QTextTable* self ```
QTextFrameFormat* q_texttable_frame_format(void* self) {
    return QTextFrame_FrameFormat((QTextFrame*)self);
}

/// Inherited from QTextFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#firstCursorPosition)
///
/// ``` QTextTable* self ```
QTextCursor* q_texttable_first_cursor_position(void* self) {
    return QTextFrame_FirstCursorPosition((QTextFrame*)self);
}

/// Inherited from QTextFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#lastCursorPosition)
///
/// ``` QTextTable* self ```
QTextCursor* q_texttable_last_cursor_position(void* self) {
    return QTextFrame_LastCursorPosition((QTextFrame*)self);
}

/// Inherited from QTextFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#firstPosition)
///
/// ``` QTextTable* self ```
int32_t q_texttable_first_position(void* self) {
    return QTextFrame_FirstPosition((QTextFrame*)self);
}

/// Inherited from QTextFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#lastPosition)
///
/// ``` QTextTable* self ```
int32_t q_texttable_last_position(void* self) {
    return QTextFrame_LastPosition((QTextFrame*)self);
}

/// Inherited from QTextFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#layoutData)
///
/// ``` QTextTable* self ```
QTextFrameLayoutData* q_texttable_layout_data(void* self) {
    return QTextFrame_LayoutData((QTextFrame*)self);
}

/// Inherited from QTextFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#setLayoutData)
///
/// ``` QTextTable* self, QTextFrameLayoutData* data ```
void q_texttable_set_layout_data(void* self, void* data) {
    QTextFrame_SetLayoutData((QTextFrame*)self, (QTextFrameLayoutData*)data);
}

/// Inherited from QTextFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#childFrames)
///
/// ``` QTextTable* self ```
libqt_list /* of QTextFrame* */ q_texttable_child_frames(void* self) {
    libqt_list _arr = QTextFrame_ChildFrames((QTextFrame*)self);
    return _arr;
}

/// Inherited from QTextFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#parentFrame)
///
/// ``` QTextTable* self ```
QTextFrame* q_texttable_parent_frame(void* self) {
    return QTextFrame_ParentFrame((QTextFrame*)self);
}

/// Inherited from QTextFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#begin)
///
/// ``` QTextTable* self ```
QTextFrame__iterator* q_texttable_begin(void* self) {
    return QTextFrame_Begin((QTextFrame*)self);
}

/// Inherited from QTextFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#end)
///
/// ``` QTextTable* self ```
QTextFrame__iterator* q_texttable_end(void* self) {
    return QTextFrame_End((QTextFrame*)self);
}

/// Inherited from QTextObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#formatIndex)
///
/// ``` QTextTable* self ```
int32_t q_texttable_format_index(void* self) {
    return QTextObject_FormatIndex((QTextObject*)self);
}

/// Inherited from QTextObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#document)
///
/// ``` QTextTable* self ```
QTextDocument* q_texttable_document(void* self) {
    return QTextObject_Document((QTextObject*)self);
}

/// Inherited from QTextObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#objectIndex)
///
/// ``` QTextTable* self ```
int32_t q_texttable_object_index(void* self) {
    return QTextObject_ObjectIndex((QTextObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTextTable* self ```
const char* q_texttable_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTextTable* self, const char* name ```
void q_texttable_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTextTable* self ```
bool q_texttable_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTextTable* self ```
bool q_texttable_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTextTable* self ```
bool q_texttable_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTextTable* self ```
bool q_texttable_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTextTable* self, bool b ```
bool q_texttable_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTextTable* self ```
QThread* q_texttable_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTextTable* self, QThread* thread ```
void q_texttable_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTextTable* self, int interval ```
int32_t q_texttable_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTextTable* self, int id ```
void q_texttable_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTextTable* self ```
libqt_list /* of QObject* */ q_texttable_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QTextTable* self, QObject* parent ```
void q_texttable_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTextTable* self, QObject* filterObj ```
void q_texttable_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTextTable* self, QObject* obj ```
void q_texttable_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_texttable_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTextTable* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_texttable_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_texttable_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_texttable_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTextTable* self ```
void q_texttable_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTextTable* self ```
void q_texttable_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTextTable* self, const char* name, QVariant* value ```
bool q_texttable_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTextTable* self, const char* name ```
QVariant* q_texttable_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTextTable* self ```
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

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTextTable* self ```
QBindingStorage* q_texttable_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTextTable* self ```
QBindingStorage* q_texttable_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextTable* self ```
void q_texttable_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QTextTable* self, void (*slot)(QObject*) ```
void q_texttable_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTextTable* self ```
QObject* q_texttable_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTextTable* self, const char* classname ```
bool q_texttable_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTextTable* self ```
void q_texttable_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTextTable* self, int interval, enum Qt__TimerType timerType ```
int32_t q_texttable_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_texttable_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTextTable* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_texttable_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextTable* self, QObject* param1 ```
void q_texttable_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QTextTable* self, void (*slot)(QObject*, QObject*) ```
void q_texttable_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextTable* self, QEvent* event ```
bool q_texttable_event(void* self, void* event) {
    return QTextTable_Event((QTextTable*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextTable* self, QEvent* event ```
bool q_texttable_qbase_event(void* self, void* event) {
    return QTextTable_QBaseEvent((QTextTable*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextTable* self, bool (*slot)(QTextTable*, QEvent*) ```
void q_texttable_on_event(void* self, bool (*slot)(void*, void*)) {
    QTextTable_OnEvent((QTextTable*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextTable* self, QObject* watched, QEvent* event ```
bool q_texttable_event_filter(void* self, void* watched, void* event) {
    return QTextTable_EventFilter((QTextTable*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextTable* self, QObject* watched, QEvent* event ```
bool q_texttable_qbase_event_filter(void* self, void* watched, void* event) {
    return QTextTable_QBaseEventFilter((QTextTable*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextTable* self, bool (*slot)(QTextTable*, QObject*, QEvent*) ```
void q_texttable_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QTextTable_OnEventFilter((QTextTable*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextTable* self, QTimerEvent* event ```
void q_texttable_timer_event(void* self, void* event) {
    QTextTable_TimerEvent((QTextTable*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextTable* self, QTimerEvent* event ```
void q_texttable_qbase_timer_event(void* self, void* event) {
    QTextTable_QBaseTimerEvent((QTextTable*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextTable* self, void (*slot)(QTextTable*, QTimerEvent*) ```
void q_texttable_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QTextTable_OnTimerEvent((QTextTable*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextTable* self, QChildEvent* event ```
void q_texttable_child_event(void* self, void* event) {
    QTextTable_ChildEvent((QTextTable*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextTable* self, QChildEvent* event ```
void q_texttable_qbase_child_event(void* self, void* event) {
    QTextTable_QBaseChildEvent((QTextTable*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextTable* self, void (*slot)(QTextTable*, QChildEvent*) ```
void q_texttable_on_child_event(void* self, void (*slot)(void*, void*)) {
    QTextTable_OnChildEvent((QTextTable*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextTable* self, QEvent* event ```
void q_texttable_custom_event(void* self, void* event) {
    QTextTable_CustomEvent((QTextTable*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextTable* self, QEvent* event ```
void q_texttable_qbase_custom_event(void* self, void* event) {
    QTextTable_QBaseCustomEvent((QTextTable*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextTable* self, void (*slot)(QTextTable*, QEvent*) ```
void q_texttable_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QTextTable_OnCustomEvent((QTextTable*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextTable* self, QMetaMethod* signal ```
void q_texttable_connect_notify(void* self, void* signal) {
    QTextTable_ConnectNotify((QTextTable*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextTable* self, QMetaMethod* signal ```
void q_texttable_qbase_connect_notify(void* self, void* signal) {
    QTextTable_QBaseConnectNotify((QTextTable*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextTable* self, void (*slot)(QTextTable*, QMetaMethod*) ```
void q_texttable_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QTextTable_OnConnectNotify((QTextTable*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextTable* self, QMetaMethod* signal ```
void q_texttable_disconnect_notify(void* self, void* signal) {
    QTextTable_DisconnectNotify((QTextTable*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextTable* self, QMetaMethod* signal ```
void q_texttable_qbase_disconnect_notify(void* self, void* signal) {
    QTextTable_QBaseDisconnectNotify((QTextTable*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextTable* self, void (*slot)(QTextTable*, QMetaMethod*) ```
void q_texttable_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QTextTable_OnDisconnectNotify((QTextTable*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextTable* self ```
QObject* q_texttable_sender(void* self) {
    return QTextTable_Sender((QTextTable*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextTable* self ```
QObject* q_texttable_qbase_sender(void* self) {
    return QTextTable_QBaseSender((QTextTable*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextTable* self, QObject* (*slot)() ```
void q_texttable_on_sender(void* self, QObject* (*slot)()) {
    QTextTable_OnSender((QTextTable*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextTable* self ```
int32_t q_texttable_sender_signal_index(void* self) {
    return QTextTable_SenderSignalIndex((QTextTable*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextTable* self ```
int32_t q_texttable_qbase_sender_signal_index(void* self) {
    return QTextTable_QBaseSenderSignalIndex((QTextTable*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextTable* self, int32_t (*slot)() ```
void q_texttable_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QTextTable_OnSenderSignalIndex((QTextTable*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextTable* self, const char* signal ```
int32_t q_texttable_receivers(void* self, const char* signal) {
    return QTextTable_Receivers((QTextTable*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextTable* self, const char* signal ```
int32_t q_texttable_qbase_receivers(void* self, const char* signal) {
    return QTextTable_QBaseReceivers((QTextTable*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextTable* self, int32_t (*slot)(QTextTable*, const char*) ```
void q_texttable_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QTextTable_OnReceivers((QTextTable*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextTable* self, QMetaMethod* signal ```
bool q_texttable_is_signal_connected(void* self, void* signal) {
    return QTextTable_IsSignalConnected((QTextTable*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextTable* self, QMetaMethod* signal ```
bool q_texttable_qbase_is_signal_connected(void* self, void* signal) {
    return QTextTable_QBaseIsSignalConnected((QTextTable*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextTable* self, bool (*slot)(QTextTable*, QMetaMethod*) ```
void q_texttable_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QTextTable_OnIsSignalConnected((QTextTable*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QTextTable* self ```
void q_texttable_delete(void* self) {
    QTextTable_Delete((QTextTable*)(self));
}