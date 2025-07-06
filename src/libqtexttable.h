#pragma once
#ifndef SRCQT6C_LIBQTEXTTABLE_H
#define SRCQT6C_LIBQTEXTTABLE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtexttablecell.html

/// q_texttablecell_new constructs a new QTextTableCell object.
///
///
QTextTableCell* q_texttablecell_new();

/// q_texttablecell_new2 constructs a new QTextTableCell object.
///
/// ``` QTextTableCell* o ```
QTextTableCell* q_texttablecell_new2(void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#operator=)
///
/// ``` QTextTableCell* self, QTextTableCell* o ```
void q_texttablecell_operator_assign(void* self, void* o);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#setFormat)
///
/// ``` QTextTableCell* self, QTextCharFormat* format ```
void q_texttablecell_set_format(void* self, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#format)
///
/// ``` QTextTableCell* self ```
QTextCharFormat* q_texttablecell_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#row)
///
/// ``` QTextTableCell* self ```
int32_t q_texttablecell_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#column)
///
/// ``` QTextTableCell* self ```
int32_t q_texttablecell_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#rowSpan)
///
/// ``` QTextTableCell* self ```
int32_t q_texttablecell_row_span(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#columnSpan)
///
/// ``` QTextTableCell* self ```
int32_t q_texttablecell_column_span(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#isValid)
///
/// ``` QTextTableCell* self ```
bool q_texttablecell_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#firstCursorPosition)
///
/// ``` QTextTableCell* self ```
QTextCursor* q_texttablecell_first_cursor_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#lastCursorPosition)
///
/// ``` QTextTableCell* self ```
QTextCursor* q_texttablecell_last_cursor_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#firstPosition)
///
/// ``` QTextTableCell* self ```
int32_t q_texttablecell_first_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#lastPosition)
///
/// ``` QTextTableCell* self ```
int32_t q_texttablecell_last_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#operator==)
///
/// ``` QTextTableCell* self, QTextTableCell* other ```
bool q_texttablecell_operator_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#operator!=)
///
/// ``` QTextTableCell* self, QTextTableCell* other ```
bool q_texttablecell_operator_not_equal(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#tableCellFormatIndex)
///
/// ``` QTextTableCell* self ```
int32_t q_texttablecell_table_cell_format_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttablecell.html#dtor.QTextTableCell)
///
/// Delete this object from C++ memory.
///
/// ``` QTextTableCell* self ```
void q_texttablecell_delete(void* self);

/// https://doc.qt.io/qt-6/qtexttable.html

/// q_texttable_new constructs a new QTextTable object.
///
/// ``` QTextDocument* doc ```
QTextTable* q_texttable_new(void* doc);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTextTable* self ```
const QMetaObject* q_texttable_meta_object(void* self);

/// ``` QTextTable* self, const char* param1 ```
void* q_texttable_metacast(void* self, const char* param1);

/// ``` QTextTable* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_texttable_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QTextTable* self, int32_t (*slot)(QTextTable*, enum QMetaObject__Call, int, void*) ```
void q_texttable_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QTextTable* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_texttable_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_texttable_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#resize)
///
/// ``` QTextTable* self, int rows, int cols ```
void q_texttable_resize(void* self, int rows, int cols);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#insertRows)
///
/// ``` QTextTable* self, int pos, int num ```
void q_texttable_insert_rows(void* self, int pos, int num);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#insertColumns)
///
/// ``` QTextTable* self, int pos, int num ```
void q_texttable_insert_columns(void* self, int pos, int num);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#appendRows)
///
/// ``` QTextTable* self, int count ```
void q_texttable_append_rows(void* self, int count);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#appendColumns)
///
/// ``` QTextTable* self, int count ```
void q_texttable_append_columns(void* self, int count);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#removeRows)
///
/// ``` QTextTable* self, int pos, int num ```
void q_texttable_remove_rows(void* self, int pos, int num);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#removeColumns)
///
/// ``` QTextTable* self, int pos, int num ```
void q_texttable_remove_columns(void* self, int pos, int num);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#mergeCells)
///
/// ``` QTextTable* self, int row, int col, int numRows, int numCols ```
void q_texttable_merge_cells(void* self, int row, int col, int numRows, int numCols);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#mergeCells)
///
/// ``` QTextTable* self, QTextCursor* cursor ```
void q_texttable_merge_cells_with_cursor(void* self, void* cursor);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#splitCell)
///
/// ``` QTextTable* self, int row, int col, int numRows, int numCols ```
void q_texttable_split_cell(void* self, int row, int col, int numRows, int numCols);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#rows)
///
/// ``` QTextTable* self ```
int32_t q_texttable_rows(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#columns)
///
/// ``` QTextTable* self ```
int32_t q_texttable_columns(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#cellAt)
///
/// ``` QTextTable* self, int row, int col ```
QTextTableCell* q_texttable_cell_at(void* self, int row, int col);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#cellAt)
///
/// ``` QTextTable* self, int position ```
QTextTableCell* q_texttable_cell_at_with_position(void* self, int position);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#cellAt)
///
/// ``` QTextTable* self, QTextCursor* c ```
QTextTableCell* q_texttable_cell_at_with_q_text_cursor(void* self, void* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#rowStart)
///
/// ``` QTextTable* self, QTextCursor* c ```
QTextCursor* q_texttable_row_start(void* self, void* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#rowEnd)
///
/// ``` QTextTable* self, QTextCursor* c ```
QTextCursor* q_texttable_row_end(void* self, void* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#setFormat)
///
/// ``` QTextTable* self, QTextTableFormat* format ```
void q_texttable_set_format(void* self, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#format)
///
/// ``` QTextTable* self ```
QTextTableFormat* q_texttable_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_texttable_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_texttable_tr3(const char* s, const char* c, int n);

/// Inherited from QTextFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#setFrameFormat)
///
/// ``` QTextTable* self, QTextFrameFormat* format ```
void q_texttable_set_frame_format(void* self, void* format);

/// Inherited from QTextFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#frameFormat)
///
/// ``` QTextTable* self ```
QTextFrameFormat* q_texttable_frame_format(void* self);

/// Inherited from QTextFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#firstCursorPosition)
///
/// ``` QTextTable* self ```
QTextCursor* q_texttable_first_cursor_position(void* self);

/// Inherited from QTextFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#lastCursorPosition)
///
/// ``` QTextTable* self ```
QTextCursor* q_texttable_last_cursor_position(void* self);

/// Inherited from QTextFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#firstPosition)
///
/// ``` QTextTable* self ```
int32_t q_texttable_first_position(void* self);

/// Inherited from QTextFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#lastPosition)
///
/// ``` QTextTable* self ```
int32_t q_texttable_last_position(void* self);

/// Inherited from QTextFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#layoutData)
///
/// ``` QTextTable* self ```
QTextFrameLayoutData* q_texttable_layout_data(void* self);

/// Inherited from QTextFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#setLayoutData)
///
/// ``` QTextTable* self, QTextFrameLayoutData* data ```
void q_texttable_set_layout_data(void* self, void* data);

/// Inherited from QTextFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#childFrames)
///
/// ``` QTextTable* self ```
libqt_list /* of QTextFrame* */ q_texttable_child_frames(void* self);

/// Inherited from QTextFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextframe.html#parentFrame)
///
/// ``` QTextTable* self ```
QTextFrame* q_texttable_parent_frame(void* self);

/// Inherited from QTextObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#formatIndex)
///
/// ``` QTextTable* self ```
int32_t q_texttable_format_index(void* self);

/// Inherited from QTextObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#document)
///
/// ``` QTextTable* self ```
QTextDocument* q_texttable_document(void* self);

/// Inherited from QTextObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtextobject.html#objectIndex)
///
/// ``` QTextTable* self ```
int32_t q_texttable_object_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTextTable* self ```
const char* q_texttable_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTextTable* self, char* name ```
void q_texttable_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTextTable* self ```
bool q_texttable_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTextTable* self ```
bool q_texttable_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTextTable* self ```
bool q_texttable_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTextTable* self ```
bool q_texttable_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTextTable* self, bool b ```
bool q_texttable_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTextTable* self ```
QThread* q_texttable_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTextTable* self, QThread* thread ```
bool q_texttable_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTextTable* self, int interval ```
int32_t q_texttable_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTextTable* self, int id ```
void q_texttable_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTextTable* self, enum Qt__TimerId id ```
void q_texttable_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTextTable* self ```
libqt_list /* of QObject* */ q_texttable_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QTextTable* self, QObject* parent ```
void q_texttable_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTextTable* self, QObject* filterObj ```
void q_texttable_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTextTable* self, QObject* obj ```
void q_texttable_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_texttable_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTextTable* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_texttable_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_texttable_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_texttable_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTextTable* self ```
void q_texttable_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTextTable* self ```
void q_texttable_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTextTable* self, const char* name, QVariant* value ```
bool q_texttable_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTextTable* self, const char* name ```
QVariant* q_texttable_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTextTable* self ```
const char** q_texttable_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTextTable* self ```
QBindingStorage* q_texttable_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTextTable* self ```
const QBindingStorage* q_texttable_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextTable* self ```
void q_texttable_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextTable* self, void (*slot)(QObject*) ```
void q_texttable_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTextTable* self ```
QObject* q_texttable_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTextTable* self, const char* classname ```
bool q_texttable_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTextTable* self ```
void q_texttable_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTextTable* self, QThread* thread, Disambiguated_t* param2 ```
bool q_texttable_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTextTable* self, int interval, enum Qt__TimerType timerType ```
int32_t q_texttable_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_texttable_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTextTable* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_texttable_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextTable* self, QObject* param1 ```
void q_texttable_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTextTable* self, void (*slot)(QObject*, QObject*) ```
void q_texttable_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextTable* self, QEvent* event ```
bool q_texttable_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextTable* self, QEvent* event ```
bool q_texttable_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextTable* self, bool (*slot)(QTextTable*, QEvent*) ```
void q_texttable_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextTable* self, QObject* watched, QEvent* event ```
bool q_texttable_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextTable* self, QObject* watched, QEvent* event ```
bool q_texttable_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextTable* self, bool (*slot)(QTextTable*, QObject*, QEvent*) ```
void q_texttable_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextTable* self, QTimerEvent* event ```
void q_texttable_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextTable* self, QTimerEvent* event ```
void q_texttable_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextTable* self, void (*slot)(QTextTable*, QTimerEvent*) ```
void q_texttable_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextTable* self, QChildEvent* event ```
void q_texttable_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextTable* self, QChildEvent* event ```
void q_texttable_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextTable* self, void (*slot)(QTextTable*, QChildEvent*) ```
void q_texttable_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextTable* self, QEvent* event ```
void q_texttable_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextTable* self, QEvent* event ```
void q_texttable_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextTable* self, void (*slot)(QTextTable*, QEvent*) ```
void q_texttable_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextTable* self, QMetaMethod* signal ```
void q_texttable_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextTable* self, QMetaMethod* signal ```
void q_texttable_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextTable* self, void (*slot)(QTextTable*, QMetaMethod*) ```
void q_texttable_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextTable* self, QMetaMethod* signal ```
void q_texttable_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextTable* self, QMetaMethod* signal ```
void q_texttable_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextTable* self, void (*slot)(QTextTable*, QMetaMethod*) ```
void q_texttable_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextTable* self ```
QObject* q_texttable_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextTable* self ```
QObject* q_texttable_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextTable* self, QObject* (*slot)() ```
void q_texttable_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextTable* self ```
int32_t q_texttable_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextTable* self ```
int32_t q_texttable_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextTable* self, int32_t (*slot)() ```
void q_texttable_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextTable* self, const char* signal ```
int32_t q_texttable_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextTable* self, const char* signal ```
int32_t q_texttable_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextTable* self, int32_t (*slot)(QTextTable*, const char*) ```
void q_texttable_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTextTable* self, QMetaMethod* signal ```
bool q_texttable_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTextTable* self, QMetaMethod* signal ```
bool q_texttable_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTextTable* self, bool (*slot)(QTextTable*, QMetaMethod*) ```
void q_texttable_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QTextTable* self, void (*slot)(QObject*, const char*) ```
void q_texttable_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtexttable.html#dtor.QTextTable)
///
/// Delete this object from C++ memory.
///
/// ``` QTextTable* self ```
void q_texttable_delete(void* self);

#endif
