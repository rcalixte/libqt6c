#pragma once
#ifndef SRC_QT6C_LIBQTEXTTABLE_H
#define SRC_QT6C_LIBQTEXTTABLE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtexttablecell.html

/// q_texttablecell_new constructs a new QTextTableCell object.
///
QTextTableCell* q_texttablecell_new();

/// q_texttablecell_new2 constructs a new QTextTableCell object.
///
/// @param o QTextTableCell*
QTextTableCell* q_texttablecell_new2(void* o);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#operator-eq)
///
/// @param self QTextTableCell*
/// @param o QTextTableCell*
void q_texttablecell_operator_assign(void* self, void* o);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#setFormat)
///
/// @param self QTextTableCell*
/// @param format QTextCharFormat*
void q_texttablecell_set_format(void* self, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#format)
///
/// @param self QTextTableCell*
QTextCharFormat* q_texttablecell_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#row)
///
/// @param self QTextTableCell*
int32_t q_texttablecell_row(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#column)
///
/// @param self QTextTableCell*
int32_t q_texttablecell_column(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#rowSpan)
///
/// @param self QTextTableCell*
int32_t q_texttablecell_row_span(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#columnSpan)
///
/// @param self QTextTableCell*
int32_t q_texttablecell_column_span(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#isValid)
///
/// @param self QTextTableCell*
bool q_texttablecell_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#firstCursorPosition)
///
/// @param self QTextTableCell*
QTextCursor* q_texttablecell_first_cursor_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#lastCursorPosition)
///
/// @param self QTextTableCell*
QTextCursor* q_texttablecell_last_cursor_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#firstPosition)
///
/// @param self QTextTableCell*
int32_t q_texttablecell_first_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#lastPosition)
///
/// @param self QTextTableCell*
int32_t q_texttablecell_last_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#operator-eq-eq)
///
/// @param self QTextTableCell*
/// @param other QTextTableCell*
bool q_texttablecell_operator_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#operator-not-eq)
///
/// @param self QTextTableCell*
/// @param other QTextTableCell*
bool q_texttablecell_operator_not_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#begin)
///
/// @param self QTextTableCell*
QTextFrame__iterator* q_texttablecell_begin(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#end)
///
/// @param self QTextTableCell*
QTextFrame__iterator* q_texttablecell_end(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#tableCellFormatIndex)
///
/// @param self QTextTableCell*
int32_t q_texttablecell_table_cell_format_index(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttablecell.html#dtor.QTextTableCell)
///
/// Delete this object from C++ memory.
///
/// @param self QTextTableCell*
void q_texttablecell_delete(void* self);

/// https://doc.qt.io/qt-6/qtexttable.html

/// q_texttable_new constructs a new QTextTable object.
///
/// @param doc QTextDocument*
QTextTable* q_texttable_new(void* doc);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QTextTable*
const QMetaObject* q_texttable_meta_object(void* self);

/// @param self QTextTable*
/// @param param1 const char*
void* q_texttable_metacast(void* self, const char* param1);

/// @param self QTextTable*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_texttable_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QTextTable*
/// @param callback int32_t func(QTextTable* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_texttable_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QTextTable*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_texttable_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_texttable_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#resize)
///
/// @param self QTextTable*
/// @param rows int
/// @param cols int
void q_texttable_resize(void* self, int rows, int cols);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#insertRows)
///
/// @param self QTextTable*
/// @param pos int
/// @param num int
void q_texttable_insert_rows(void* self, int pos, int num);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#insertColumns)
///
/// @param self QTextTable*
/// @param pos int
/// @param num int
void q_texttable_insert_columns(void* self, int pos, int num);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#appendRows)
///
/// @param self QTextTable*
/// @param count int
void q_texttable_append_rows(void* self, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#appendColumns)
///
/// @param self QTextTable*
/// @param count int
void q_texttable_append_columns(void* self, int count);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#removeRows)
///
/// @param self QTextTable*
/// @param pos int
/// @param num int
void q_texttable_remove_rows(void* self, int pos, int num);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#removeColumns)
///
/// @param self QTextTable*
/// @param pos int
/// @param num int
void q_texttable_remove_columns(void* self, int pos, int num);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#mergeCells)
///
/// @param self QTextTable*
/// @param row int
/// @param col int
/// @param numRows int
/// @param numCols int
void q_texttable_merge_cells(void* self, int row, int col, int numRows, int numCols);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#mergeCells)
///
/// @param self QTextTable*
/// @param cursor QTextCursor*
void q_texttable_merge_cells2(void* self, void* cursor);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#splitCell)
///
/// @param self QTextTable*
/// @param row int
/// @param col int
/// @param numRows int
/// @param numCols int
void q_texttable_split_cell(void* self, int row, int col, int numRows, int numCols);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#rows)
///
/// @param self QTextTable*
int32_t q_texttable_rows(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#columns)
///
/// @param self QTextTable*
int32_t q_texttable_columns(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#cellAt)
///
/// @param self QTextTable*
/// @param row int
/// @param col int
QTextTableCell* q_texttable_cell_at(void* self, int row, int col);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#cellAt)
///
/// @param self QTextTable*
/// @param position int
QTextTableCell* q_texttable_cell_at2(void* self, int position);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#cellAt)
///
/// @param self QTextTable*
/// @param c QTextCursor*
QTextTableCell* q_texttable_cell_at3(void* self, void* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#rowStart)
///
/// @param self QTextTable*
/// @param c QTextCursor*
QTextCursor* q_texttable_row_start(void* self, void* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#rowEnd)
///
/// @param self QTextTable*
/// @param c QTextCursor*
QTextCursor* q_texttable_row_end(void* self, void* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#setFormat)
///
/// @param self QTextTable*
/// @param format QTextTableFormat*
void q_texttable_set_format(void* self, void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#format)
///
/// @param self QTextTable*
QTextTableFormat* q_texttable_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_texttable_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_texttable_tr3(const char* s, const char* c, int n);

/// Inherited from QTextFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#setFrameFormat)
///
/// @param self QTextTable*
/// @param format QTextFrameFormat*
void q_texttable_set_frame_format(void* self, void* format);

/// Inherited from QTextFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#frameFormat)
///
/// @param self QTextTable*
QTextFrameFormat* q_texttable_frame_format(void* self);

/// Inherited from QTextFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#firstCursorPosition)
///
/// @param self QTextTable*
QTextCursor* q_texttable_first_cursor_position(void* self);

/// Inherited from QTextFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#lastCursorPosition)
///
/// @param self QTextTable*
QTextCursor* q_texttable_last_cursor_position(void* self);

/// Inherited from QTextFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#firstPosition)
///
/// @param self QTextTable*
int32_t q_texttable_first_position(void* self);

/// Inherited from QTextFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#lastPosition)
///
/// @param self QTextTable*
int32_t q_texttable_last_position(void* self);

/// Inherited from QTextFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#layoutData)
///
/// @param self QTextTable*
QTextFrameLayoutData* q_texttable_layout_data(void* self);

/// Inherited from QTextFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#setLayoutData)
///
/// @param self QTextTable*
/// @param data QTextFrameLayoutData*
void q_texttable_set_layout_data(void* self, void* data);

/// Inherited from QTextFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#childFrames)
///
/// @param self QTextTable*
libqt_list /* of QTextFrame* */ q_texttable_child_frames(void* self);

/// Inherited from QTextFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#parentFrame)
///
/// @param self QTextTable*
QTextFrame* q_texttable_parent_frame(void* self);

/// Inherited from QTextFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#begin)
///
/// @param self QTextTable*
QTextFrame__iterator* q_texttable_begin(void* self);

/// Inherited from QTextFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextframe.html#end)
///
/// @param self QTextTable*
QTextFrame__iterator* q_texttable_end(void* self);

/// Inherited from QTextObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#formatIndex)
///
/// @param self QTextTable*
int32_t q_texttable_format_index(void* self);

/// Inherited from QTextObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#document)
///
/// @param self QTextTable*
QTextDocument* q_texttable_document(void* self);

/// Inherited from QTextObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qtextobject.html#objectIndex)
///
/// @param self QTextTable*
int32_t q_texttable_object_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextTable*
const char* q_texttable_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QTextTable*
/// @param name char*
void q_texttable_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QTextTable*
bool q_texttable_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QTextTable*
bool q_texttable_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QTextTable*
bool q_texttable_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QTextTable*
bool q_texttable_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QTextTable*
/// @param b bool
bool q_texttable_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QTextTable*
QThread* q_texttable_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTextTable*
/// @param thread QThread*
bool q_texttable_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextTable*
/// @param interval int
int32_t q_texttable_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTextTable*
/// @param id int
void q_texttable_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTextTable*
/// @param id enum Qt__TimerId
void q_texttable_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QTextTable*
libqt_list /* of QObject* */ q_texttable_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QTextTable*
/// @param parent QObject*
void q_texttable_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QTextTable*
/// @param filterObj QObject*
void q_texttable_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QTextTable*
/// @param obj QObject*
void q_texttable_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_texttable_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTextTable*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_texttable_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_texttable_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_texttable_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QTextTable*
void q_texttable_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QTextTable*
void q_texttable_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTextTable*
/// @param name const char*
/// @param value QVariant*
bool q_texttable_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QTextTable*
/// @param name const char*
QVariant* q_texttable_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextTable*
const char** q_texttable_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTextTable*
QBindingStorage* q_texttable_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTextTable*
const QBindingStorage* q_texttable_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextTable*
void q_texttable_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextTable*
/// @param callback void func(QTextTable* self)
void q_texttable_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QTextTable*
QObject* q_texttable_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QTextTable*
/// @param classname const char*
bool q_texttable_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QTextTable*
void q_texttable_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTextTable*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_texttable_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTextTable*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_texttable_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_texttable_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTextTable*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* q_texttable_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextTable*
/// @param param1 QObject*
void q_texttable_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTextTable*
/// @param callback void func(QTextTable* self, QObject* param1)
void q_texttable_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextTable*
/// @param event QEvent*
bool q_texttable_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextTable*
/// @param event QEvent*
bool q_texttable_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextTable*
/// @param callback bool func(QTextTable* self, QEvent* event)
void q_texttable_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextTable*
/// @param watched QObject*
/// @param event QEvent*
bool q_texttable_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextTable*
/// @param watched QObject*
/// @param event QEvent*
bool q_texttable_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextTable*
/// @param callback bool func(QTextTable* self, QObject* watched, QEvent* event)
void q_texttable_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextTable*
/// @param event QTimerEvent*
void q_texttable_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextTable*
/// @param event QTimerEvent*
void q_texttable_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextTable*
/// @param callback void func(QTextTable* self, QTimerEvent* event)
void q_texttable_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextTable*
/// @param event QChildEvent*
void q_texttable_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextTable*
/// @param event QChildEvent*
void q_texttable_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextTable*
/// @param callback void func(QTextTable* self, QChildEvent* event)
void q_texttable_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextTable*
/// @param event QEvent*
void q_texttable_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextTable*
/// @param event QEvent*
void q_texttable_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextTable*
/// @param callback void func(QTextTable* self, QEvent* event)
void q_texttable_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextTable*
/// @param signal QMetaMethod*
void q_texttable_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextTable*
/// @param signal QMetaMethod*
void q_texttable_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextTable*
/// @param callback void func(QTextTable* self, QMetaMethod* signal)
void q_texttable_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextTable*
/// @param signal QMetaMethod*
void q_texttable_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextTable*
/// @param signal QMetaMethod*
void q_texttable_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextTable*
/// @param callback void func(QTextTable* self, QMetaMethod* signal)
void q_texttable_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextTable*
QObject* q_texttable_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextTable*
QObject* q_texttable_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextTable*
/// @param callback QObject* func()
void q_texttable_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextTable*
int32_t q_texttable_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextTable*
int32_t q_texttable_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextTable*
/// @param callback int32_t func()
void q_texttable_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextTable*
/// @param signal const char*
int32_t q_texttable_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextTable*
/// @param signal const char*
int32_t q_texttable_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextTable*
/// @param callback int32_t func(QTextTable* self, const char* signal)
void q_texttable_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTextTable*
/// @param signal QMetaMethod*
bool q_texttable_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTextTable*
/// @param signal QMetaMethod*
bool q_texttable_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTextTable*
/// @param callback bool func(QTextTable* self, QMetaMethod* signal)
void q_texttable_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTextTable*
/// @param callback void func(QTextTable* self, const char* objectName)
void q_texttable_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtexttable.html#dtor.QTextTable)
///
/// Delete this object from C++ memory.
///
/// @param self QTextTable*
void q_texttable_delete(void* self);

#endif
