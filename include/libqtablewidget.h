#pragma once
#ifndef SRCQT6C_LIBQTABLEWIDGET_H
#define SRCQT6C_LIBQTABLEWIDGET_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtablewidgetselectionrange.html

/// q_tablewidgetselectionrange_new constructs a new QTableWidgetSelectionRange object.
///
/// @param other QTableWidgetSelectionRange*
QTableWidgetSelectionRange* q_tablewidgetselectionrange_new(void* other);

/// q_tablewidgetselectionrange_new2 constructs a new QTableWidgetSelectionRange object and invalidates the source QTableWidgetSelectionRange object.
///
/// @param other QTableWidgetSelectionRange*
QTableWidgetSelectionRange* q_tablewidgetselectionrange_new2(void* other);

/// q_tablewidgetselectionrange_new3 constructs a new QTableWidgetSelectionRange object.
///
QTableWidgetSelectionRange* q_tablewidgetselectionrange_new3();

/// q_tablewidgetselectionrange_new4 constructs a new QTableWidgetSelectionRange object.
///
/// @param top int
/// @param left int
/// @param bottom int
/// @param right int
QTableWidgetSelectionRange* q_tablewidgetselectionrange_new4(int top, int left, int bottom, int right);

/// q_tablewidgetselectionrange_copy_assign shallow copies `other` into `self`.
///
/// @param self QTableWidgetSelectionRange*
/// @param other QTableWidgetSelectionRange*
void q_tablewidgetselectionrange_copy_assign(void* self, void* other);

/// q_tablewidgetselectionrange_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QTableWidgetSelectionRange*
/// @param other QTableWidgetSelectionRange*
void q_tablewidgetselectionrange_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#topRow)
///
/// @param self QTableWidgetSelectionRange*
int32_t q_tablewidgetselectionrange_top_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#bottomRow)
///
/// @param self QTableWidgetSelectionRange*
int32_t q_tablewidgetselectionrange_bottom_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#leftColumn)
///
/// @param self QTableWidgetSelectionRange*
int32_t q_tablewidgetselectionrange_left_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#rightColumn)
///
/// @param self QTableWidgetSelectionRange*
int32_t q_tablewidgetselectionrange_right_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#rowCount)
///
/// @param self QTableWidgetSelectionRange*
int32_t q_tablewidgetselectionrange_row_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#columnCount)
///
/// @param self QTableWidgetSelectionRange*
int32_t q_tablewidgetselectionrange_column_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#dtor.QTableWidgetSelectionRange)
///
/// Delete this object from C++ memory.
///
/// @param self QTableWidgetSelectionRange*
void q_tablewidgetselectionrange_delete(void* self);

/// https://doc.qt.io/qt-6/qtablewidgetitem.html

/// q_tablewidgetitem_new constructs a new QTableWidgetItem object.
///
QTableWidgetItem* q_tablewidgetitem_new();

/// q_tablewidgetitem_new2 constructs a new QTableWidgetItem object.
///
/// @param text const char*
QTableWidgetItem* q_tablewidgetitem_new2(const char* text);

/// q_tablewidgetitem_new3 constructs a new QTableWidgetItem object.
///
/// @param icon QIcon*
/// @param text const char*
QTableWidgetItem* q_tablewidgetitem_new3(void* icon, const char* text);

/// q_tablewidgetitem_new4 constructs a new QTableWidgetItem object.
///
/// @param other QTableWidgetItem*
QTableWidgetItem* q_tablewidgetitem_new4(void* other);

/// q_tablewidgetitem_new5 constructs a new QTableWidgetItem object.
///
/// @param typeVal int
QTableWidgetItem* q_tablewidgetitem_new5(int typeVal);

/// q_tablewidgetitem_new6 constructs a new QTableWidgetItem object.
///
/// @param text const char*
/// @param typeVal int
QTableWidgetItem* q_tablewidgetitem_new6(const char* text, int typeVal);

/// q_tablewidgetitem_new7 constructs a new QTableWidgetItem object.
///
/// @param icon QIcon*
/// @param text const char*
/// @param typeVal int
QTableWidgetItem* q_tablewidgetitem_new7(void* icon, const char* text, int typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#clone)
///
/// @param self QTableWidgetItem*
QTableWidgetItem* q_tablewidgetitem_clone(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QTableWidgetItem*
/// @param callback QTableWidgetItem* fn()
void q_tablewidgetitem_on_clone(void* self, QTableWidgetItem* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#clone)
///
/// Base class method implementation
///
/// @param self QTableWidgetItem*
QTableWidgetItem* q_tablewidgetitem_qbase_clone(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#tableWidget)
///
/// @param self QTableWidgetItem*
QTableWidget* q_tablewidgetitem_table_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#row)
///
/// @param self QTableWidgetItem*
int32_t q_tablewidgetitem_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#column)
///
/// @param self QTableWidgetItem*
int32_t q_tablewidgetitem_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setSelected)
///
/// @param self QTableWidgetItem*
/// @param selectVal bool
void q_tablewidgetitem_set_selected(void* self, bool selectVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#isSelected)
///
/// @param self QTableWidgetItem*
bool q_tablewidgetitem_is_selected(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#flags)
///
/// @param self QTableWidgetItem*
///
/// @return flag of enum Qt__ItemFlag
int64_t q_tablewidgetitem_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setFlags)
///
/// @param self QTableWidgetItem*
/// @param flags flag of enum Qt__ItemFlag
void q_tablewidgetitem_set_flags(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTableWidgetItem*
const char* q_tablewidgetitem_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setText)
///
/// @param self QTableWidgetItem*
/// @param text const char*
void q_tablewidgetitem_set_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#icon)
///
/// @param self QTableWidgetItem*
QIcon* q_tablewidgetitem_icon(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setIcon)
///
/// @param self QTableWidgetItem*
/// @param icon QIcon*
void q_tablewidgetitem_set_icon(void* self, void* icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTableWidgetItem*
const char* q_tablewidgetitem_status_tip(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setStatusTip)
///
/// @param self QTableWidgetItem*
/// @param statusTip const char*
void q_tablewidgetitem_set_status_tip(void* self, const char* statusTip);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTableWidgetItem*
const char* q_tablewidgetitem_tool_tip(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setToolTip)
///
/// @param self QTableWidgetItem*
/// @param toolTip const char*
void q_tablewidgetitem_set_tool_tip(void* self, const char* toolTip);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTableWidgetItem*
const char* q_tablewidgetitem_whats_this(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setWhatsThis)
///
/// @param self QTableWidgetItem*
/// @param whatsThis const char*
void q_tablewidgetitem_set_whats_this(void* self, const char* whatsThis);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#font)
///
/// @param self QTableWidgetItem*
QFont* q_tablewidgetitem_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setFont)
///
/// @param self QTableWidgetItem*
/// @param font QFont*
void q_tablewidgetitem_set_font(void* self, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#textAlignment)
///
/// @param self QTableWidgetItem*
int32_t q_tablewidgetitem_text_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setTextAlignment)
///
/// @param self QTableWidgetItem*
/// @param alignment int
void q_tablewidgetitem_set_text_alignment(void* self, int alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setTextAlignment)
///
/// @param self QTableWidgetItem*
/// @param alignment enum Qt__AlignmentFlag
void q_tablewidgetitem_set_text_alignment2(void* self, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setTextAlignment)
///
/// @param self QTableWidgetItem*
/// @param alignment flag of enum Qt__AlignmentFlag
void q_tablewidgetitem_set_text_alignment3(void* self, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#background)
///
/// @param self QTableWidgetItem*
QBrush* q_tablewidgetitem_background(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setBackground)
///
/// @param self QTableWidgetItem*
/// @param brush QBrush*
void q_tablewidgetitem_set_background(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#foreground)
///
/// @param self QTableWidgetItem*
QBrush* q_tablewidgetitem_foreground(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setForeground)
///
/// @param self QTableWidgetItem*
/// @param brush QBrush*
void q_tablewidgetitem_set_foreground(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#checkState)
///
/// @param self QTableWidgetItem*
///
/// @return enum Qt__CheckState
int64_t q_tablewidgetitem_check_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setCheckState)
///
/// @param self QTableWidgetItem*
/// @param state enum Qt__CheckState
void q_tablewidgetitem_set_check_state(void* self, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#sizeHint)
///
/// @param self QTableWidgetItem*
QSize* q_tablewidgetitem_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setSizeHint)
///
/// @param self QTableWidgetItem*
/// @param size QSize*
void q_tablewidgetitem_set_size_hint(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#data)
///
/// @param self QTableWidgetItem*
/// @param role int
QVariant* q_tablewidgetitem_data(void* self, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#data)
///
/// Allows for overriding the related default method
///
/// @param self QTableWidgetItem*
/// @param callback QVariant* fn(QTableWidgetItem*, int)
void q_tablewidgetitem_on_data(void* self, QVariant* (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#data)
///
/// Base class method implementation
///
/// @param self QTableWidgetItem*
/// @param role int
QVariant* q_tablewidgetitem_qbase_data(void* self, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setData)
///
/// @param self QTableWidgetItem*
/// @param role int
/// @param value QVariant*
void q_tablewidgetitem_set_data(void* self, int role, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setData)
///
/// Allows for overriding the related default method
///
/// @param self QTableWidgetItem*
/// @param callback void fn(QTableWidgetItem*, int, QVariant*)
void q_tablewidgetitem_on_set_data(void* self, void (*callback)(void*, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setData)
///
/// Base class method implementation
///
/// @param self QTableWidgetItem*
/// @param role int
/// @param value QVariant*
void q_tablewidgetitem_qbase_set_data(void* self, int role, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#operator-lt)
///
/// @param self QTableWidgetItem*
/// @param other QTableWidgetItem*
bool q_tablewidgetitem_operator_lesser(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#operator-lt)
///
/// Allows for overriding the related default method
///
/// @param self QTableWidgetItem*
/// @param callback bool fn(QTableWidgetItem*, QTableWidgetItem*)
void q_tablewidgetitem_on_operator_lesser(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#operator-lt)
///
/// Base class method implementation
///
/// @param self QTableWidgetItem*
/// @param other QTableWidgetItem*
bool q_tablewidgetitem_qbase_operator_lesser(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#read)
///
/// @param self QTableWidgetItem*
/// @param in QDataStream*
void q_tablewidgetitem_read(void* self, void* in);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#read)
///
/// Allows for overriding the related default method
///
/// @param self QTableWidgetItem*
/// @param callback void fn(QTableWidgetItem*, QDataStream*)
void q_tablewidgetitem_on_read(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#read)
///
/// Base class method implementation
///
/// @param self QTableWidgetItem*
/// @param in QDataStream*
void q_tablewidgetitem_qbase_read(void* self, void* in);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#write)
///
/// @param self QTableWidgetItem*
/// @param out QDataStream*
void q_tablewidgetitem_write(void* self, void* out);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#write)
///
/// Allows for overriding the related default method
///
/// @param self QTableWidgetItem*
/// @param callback void fn(QTableWidgetItem*, QDataStream*)
void q_tablewidgetitem_on_write(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#write)
///
/// Base class method implementation
///
/// @param self QTableWidgetItem*
/// @param out QDataStream*
void q_tablewidgetitem_qbase_write(void* self, void* out);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#operator-eq)
///
/// @param self QTableWidgetItem*
/// @param other QTableWidgetItem*
void q_tablewidgetitem_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#type)
///
/// @param self QTableWidgetItem*
int32_t q_tablewidgetitem_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#dtor.QTableWidgetItem)
///
/// Delete this object from C++ memory.
///
/// @param self QTableWidgetItem*
void q_tablewidgetitem_delete(void* self);

/// https://doc.qt.io/qt-6/qtablewidget.html

/// q_tablewidget_new constructs a new QTableWidget object.
///
/// @param parent QWidget*
QTableWidget* q_tablewidget_new(void* parent);

/// q_tablewidget_new2 constructs a new QTableWidget object.
///
QTableWidget* q_tablewidget_new2();

/// q_tablewidget_new3 constructs a new QTableWidget object.
///
/// @param rows int
/// @param columns int
QTableWidget* q_tablewidget_new3(int rows, int columns);

/// q_tablewidget_new4 constructs a new QTableWidget object.
///
/// @param rows int
/// @param columns int
/// @param parent QWidget*
QTableWidget* q_tablewidget_new4(int rows, int columns, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QTableWidget*
const QMetaObject* q_tablewidget_meta_object(void* self);

/// @param self QTableWidget*
/// @param param1 const char*
void* q_tablewidget_metacast(void* self, const char* param1);

/// @param self QTableWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_tablewidget_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QTableWidget*
/// @param callback int32_t fn(QTableWidget*, enum QMetaObject__Call, int, void*)
void q_tablewidget_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// @param self QTableWidget*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_tablewidget_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_tablewidget_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setRowCount)
///
/// @param self QTableWidget*
/// @param rows int
void q_tablewidget_set_row_count(void* self, int rows);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#rowCount)
///
/// @param self QTableWidget*
int32_t q_tablewidget_row_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setColumnCount)
///
/// @param self QTableWidget*
/// @param columns int
void q_tablewidget_set_column_count(void* self, int columns);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#columnCount)
///
/// @param self QTableWidget*
int32_t q_tablewidget_column_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#row)
///
/// @param self QTableWidget*
/// @param item QTableWidgetItem*
int32_t q_tablewidget_row(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#column)
///
/// @param self QTableWidget*
/// @param item QTableWidgetItem*
int32_t q_tablewidget_column(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#item)
///
/// @param self QTableWidget*
/// @param row int
/// @param column int
QTableWidgetItem* q_tablewidget_item(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setItem)
///
/// @param self QTableWidget*
/// @param row int
/// @param column int
/// @param item QTableWidgetItem*
void q_tablewidget_set_item(void* self, int row, int column, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#takeItem)
///
/// @param self QTableWidget*
/// @param row int
/// @param column int
QTableWidgetItem* q_tablewidget_take_item(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#items)
///
/// @param self QTableWidget*
/// @param data QMimeData*
libqt_list /* of QTableWidgetItem* */ q_tablewidget_items(void* self, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#indexFromItem)
///
/// @param self QTableWidget*
/// @param item QTableWidgetItem*
QModelIndex* q_tablewidget_index_from_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemFromIndex)
///
/// @param self QTableWidget*
/// @param index QModelIndex*
QTableWidgetItem* q_tablewidget_item_from_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#verticalHeaderItem)
///
/// @param self QTableWidget*
/// @param row int
QTableWidgetItem* q_tablewidget_vertical_header_item(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setVerticalHeaderItem)
///
/// @param self QTableWidget*
/// @param row int
/// @param item QTableWidgetItem*
void q_tablewidget_set_vertical_header_item(void* self, int row, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#takeVerticalHeaderItem)
///
/// @param self QTableWidget*
/// @param row int
QTableWidgetItem* q_tablewidget_take_vertical_header_item(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#horizontalHeaderItem)
///
/// @param self QTableWidget*
/// @param column int
QTableWidgetItem* q_tablewidget_horizontal_header_item(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setHorizontalHeaderItem)
///
/// @param self QTableWidget*
/// @param column int
/// @param item QTableWidgetItem*
void q_tablewidget_set_horizontal_header_item(void* self, int column, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#takeHorizontalHeaderItem)
///
/// @param self QTableWidget*
/// @param column int
QTableWidgetItem* q_tablewidget_take_horizontal_header_item(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setVerticalHeaderLabels)
///
/// @param self QTableWidget*
/// @param labels const char**
void q_tablewidget_set_vertical_header_labels(void* self, const char* labels[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setHorizontalHeaderLabels)
///
/// @param self QTableWidget*
/// @param labels const char**
void q_tablewidget_set_horizontal_header_labels(void* self, const char* labels[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#currentRow)
///
/// @param self QTableWidget*
int32_t q_tablewidget_current_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#currentColumn)
///
/// @param self QTableWidget*
int32_t q_tablewidget_current_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#currentItem)
///
/// @param self QTableWidget*
QTableWidgetItem* q_tablewidget_current_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setCurrentItem)
///
/// @param self QTableWidget*
/// @param item QTableWidgetItem*
void q_tablewidget_set_current_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setCurrentItem)
///
/// @param self QTableWidget*
/// @param item QTableWidgetItem*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
void q_tablewidget_set_current_item2(void* self, void* item, int64_t command);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setCurrentCell)
///
/// @param self QTableWidget*
/// @param row int
/// @param column int
void q_tablewidget_set_current_cell(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setCurrentCell)
///
/// @param self QTableWidget*
/// @param row int
/// @param column int
/// @param command flag of enum QItemSelectionModel__SelectionFlag
void q_tablewidget_set_current_cell2(void* self, int row, int column, int64_t command);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#sortItems)
///
/// @param self QTableWidget*
/// @param column int
void q_tablewidget_sort_items(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setSortingEnabled)
///
/// @param self QTableWidget*
/// @param enable bool
void q_tablewidget_set_sorting_enabled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#isSortingEnabled)
///
/// @param self QTableWidget*
bool q_tablewidget_is_sorting_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#editItem)
///
/// @param self QTableWidget*
/// @param item QTableWidgetItem*
void q_tablewidget_edit_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#openPersistentEditor)
///
/// @param self QTableWidget*
/// @param item QTableWidgetItem*
void q_tablewidget_open_persistent_editor(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#closePersistentEditor)
///
/// @param self QTableWidget*
/// @param item QTableWidgetItem*
void q_tablewidget_close_persistent_editor(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#isPersistentEditorOpen)
///
/// @param self QTableWidget*
/// @param item QTableWidgetItem*
bool q_tablewidget_is_persistent_editor_open(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellWidget)
///
/// @param self QTableWidget*
/// @param row int
/// @param column int
QWidget* q_tablewidget_cell_widget(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setCellWidget)
///
/// @param self QTableWidget*
/// @param row int
/// @param column int
/// @param widget QWidget*
void q_tablewidget_set_cell_widget(void* self, int row, int column, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#removeCellWidget)
///
/// @param self QTableWidget*
/// @param row int
/// @param column int
void q_tablewidget_remove_cell_widget(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setRangeSelected)
///
/// @param self QTableWidget*
/// @param range QTableWidgetSelectionRange*
/// @param selectVal bool
void q_tablewidget_set_range_selected(void* self, void* range, bool selectVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#selectedRanges)
///
/// @param self QTableWidget*
libqt_list /* of QTableWidgetSelectionRange* */ q_tablewidget_selected_ranges(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#selectedItems)
///
/// @param self QTableWidget*
libqt_list /* of QTableWidgetItem* */ q_tablewidget_selected_items(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#findItems)
///
/// @param self QTableWidget*
/// @param text const char*
/// @param flags flag of enum Qt__MatchFlag
libqt_list /* of QTableWidgetItem* */ q_tablewidget_find_items(void* self, const char* text, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#visualRow)
///
/// @param self QTableWidget*
/// @param logicalRow int
int32_t q_tablewidget_visual_row(void* self, int logicalRow);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#visualColumn)
///
/// @param self QTableWidget*
/// @param logicalColumn int
int32_t q_tablewidget_visual_column(void* self, int logicalColumn);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemAt)
///
/// @param self QTableWidget*
/// @param p QPoint*
QTableWidgetItem* q_tablewidget_item_at(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemAt)
///
/// @param self QTableWidget*
/// @param x int
/// @param y int
QTableWidgetItem* q_tablewidget_item_at2(void* self, int x, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#visualItemRect)
///
/// @param self QTableWidget*
/// @param item QTableWidgetItem*
QRect* q_tablewidget_visual_item_rect(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemPrototype)
///
/// @param self QTableWidget*
const QTableWidgetItem* q_tablewidget_item_prototype(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setItemPrototype)
///
/// @param self QTableWidget*
/// @param item QTableWidgetItem*
void q_tablewidget_set_item_prototype(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#scrollToItem)
///
/// @param self QTableWidget*
/// @param item QTableWidgetItem*
void q_tablewidget_scroll_to_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#insertRow)
///
/// @param self QTableWidget*
/// @param row int
void q_tablewidget_insert_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#insertColumn)
///
/// @param self QTableWidget*
/// @param column int
void q_tablewidget_insert_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#removeRow)
///
/// @param self QTableWidget*
/// @param row int
void q_tablewidget_remove_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#removeColumn)
///
/// @param self QTableWidget*
/// @param column int
void q_tablewidget_remove_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#clear)
///
/// @param self QTableWidget*
void q_tablewidget_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#clearContents)
///
/// @param self QTableWidget*
void q_tablewidget_clear_contents(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemPressed)
///
/// @param self QTableWidget*
/// @param item QTableWidgetItem*
void q_tablewidget_item_pressed(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemPressed)
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QTableWidgetItem*)
void q_tablewidget_on_item_pressed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemClicked)
///
/// @param self QTableWidget*
/// @param item QTableWidgetItem*
void q_tablewidget_item_clicked(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemClicked)
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QTableWidgetItem*)
void q_tablewidget_on_item_clicked(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemDoubleClicked)
///
/// @param self QTableWidget*
/// @param item QTableWidgetItem*
void q_tablewidget_item_double_clicked(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemDoubleClicked)
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QTableWidgetItem*)
void q_tablewidget_on_item_double_clicked(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemActivated)
///
/// @param self QTableWidget*
/// @param item QTableWidgetItem*
void q_tablewidget_item_activated(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemActivated)
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QTableWidgetItem*)
void q_tablewidget_on_item_activated(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemEntered)
///
/// @param self QTableWidget*
/// @param item QTableWidgetItem*
void q_tablewidget_item_entered(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemEntered)
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QTableWidgetItem*)
void q_tablewidget_on_item_entered(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemChanged)
///
/// @param self QTableWidget*
/// @param item QTableWidgetItem*
void q_tablewidget_item_changed(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemChanged)
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QTableWidgetItem*)
void q_tablewidget_on_item_changed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#currentItemChanged)
///
/// @param self QTableWidget*
/// @param current QTableWidgetItem*
/// @param previous QTableWidgetItem*
void q_tablewidget_current_item_changed(void* self, void* current, void* previous);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#currentItemChanged)
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QTableWidgetItem*, QTableWidgetItem*)
void q_tablewidget_on_current_item_changed(void* self, void (*callback)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemSelectionChanged)
///
/// @param self QTableWidget*
void q_tablewidget_item_selection_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemSelectionChanged)
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*)
void q_tablewidget_on_item_selection_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellPressed)
///
/// @param self QTableWidget*
/// @param row int
/// @param column int
void q_tablewidget_cell_pressed(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellPressed)
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, int, int)
void q_tablewidget_on_cell_pressed(void* self, void (*callback)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellClicked)
///
/// @param self QTableWidget*
/// @param row int
/// @param column int
void q_tablewidget_cell_clicked(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellClicked)
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, int, int)
void q_tablewidget_on_cell_clicked(void* self, void (*callback)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellDoubleClicked)
///
/// @param self QTableWidget*
/// @param row int
/// @param column int
void q_tablewidget_cell_double_clicked(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellDoubleClicked)
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, int, int)
void q_tablewidget_on_cell_double_clicked(void* self, void (*callback)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellActivated)
///
/// @param self QTableWidget*
/// @param row int
/// @param column int
void q_tablewidget_cell_activated(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellActivated)
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, int, int)
void q_tablewidget_on_cell_activated(void* self, void (*callback)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellEntered)
///
/// @param self QTableWidget*
/// @param row int
/// @param column int
void q_tablewidget_cell_entered(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellEntered)
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, int, int)
void q_tablewidget_on_cell_entered(void* self, void (*callback)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellChanged)
///
/// @param self QTableWidget*
/// @param row int
/// @param column int
void q_tablewidget_cell_changed(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellChanged)
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, int, int)
void q_tablewidget_on_cell_changed(void* self, void (*callback)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#currentCellChanged)
///
/// @param self QTableWidget*
/// @param currentRow int
/// @param currentColumn int
/// @param previousRow int
/// @param previousColumn int
void q_tablewidget_current_cell_changed(void* self, int currentRow, int currentColumn, int previousRow, int previousColumn);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#currentCellChanged)
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, int, int, int, int)
void q_tablewidget_on_current_cell_changed(void* self, void (*callback)(void*, int, int, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#event)
///
/// @param self QTableWidget*
/// @param e QEvent*
bool q_tablewidget_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QTableWidget*
/// @param callback bool fn(QTableWidget*, QEvent*)
void q_tablewidget_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#event)
///
/// Base class method implementation
///
/// @param self QTableWidget*
/// @param e QEvent*
bool q_tablewidget_qbase_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#mimeTypes)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTableWidget*
const char** q_tablewidget_mime_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#mimeTypes)
///
/// Allows for overriding the related default method
///
/// @param self QTableWidget*
/// @param callback const char** fn()
void q_tablewidget_on_mime_types(void* self, const char** (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#mimeTypes)
///
/// Base class method implementation
///
/// @param self QTableWidget*
const char** q_tablewidget_qbase_mime_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#mimeData)
///
/// @param self QTableWidget*
/// @param items libqt_list /* of QTableWidgetItem* */
QMimeData* q_tablewidget_mime_data(void* self, libqt_list items);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#mimeData)
///
/// Allows for overriding the related default method
///
/// @param self QTableWidget*
/// @param callback QMimeData* fn(QTableWidget*, libqt_list /* of QTableWidgetItem* */)
void q_tablewidget_on_mime_data(void* self, QMimeData* (*callback)(void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#mimeData)
///
/// Base class method implementation
///
/// @param self QTableWidget*
/// @param items libqt_list /* of QTableWidgetItem* */
QMimeData* q_tablewidget_qbase_mime_data(void* self, libqt_list items);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#dropMimeData)
///
/// @param self QTableWidget*
/// @param row int
/// @param column int
/// @param data QMimeData*
/// @param action enum Qt__DropAction
bool q_tablewidget_drop_mime_data(void* self, int row, int column, void* data, int64_t action);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#dropMimeData)
///
/// Allows for overriding the related default method
///
/// @param self QTableWidget*
/// @param callback bool fn(QTableWidget*, int, int, QMimeData*, enum Qt__DropAction)
void q_tablewidget_on_drop_mime_data(void* self, bool (*callback)(void*, int, int, void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#dropMimeData)
///
/// Base class method implementation
///
/// @param self QTableWidget*
/// @param row int
/// @param column int
/// @param data QMimeData*
/// @param action enum Qt__DropAction
bool q_tablewidget_qbase_drop_mime_data(void* self, int row, int column, void* data, int64_t action);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#supportedDropActions)
///
/// @param self QTableWidget*
///
/// @return flag of enum Qt__DropAction
int64_t q_tablewidget_supported_drop_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#supportedDropActions)
///
/// Allows for overriding the related default method
///
/// @param self QTableWidget*
/// @param callback int64_t fn()
void q_tablewidget_on_supported_drop_actions(void* self, int64_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#supportedDropActions)
///
/// Base class method implementation
///
/// @param self QTableWidget*
///
/// @return flag of enum Qt__DropAction
int64_t q_tablewidget_qbase_supported_drop_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#dropEvent)
///
/// @param self QTableWidget*
/// @param event QDropEvent*
void q_tablewidget_drop_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#dropEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QDropEvent*)
void q_tablewidget_on_drop_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#dropEvent)
///
/// Base class method implementation
///
/// @param self QTableWidget*
/// @param event QDropEvent*
void q_tablewidget_qbase_drop_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_tablewidget_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_tablewidget_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#sortItems)
///
/// @param self QTableWidget*
/// @param column int
/// @param order enum Qt__SortOrder
void q_tablewidget_sort_items2(void* self, int column, int64_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#scrollToItem)
///
/// @param self QTableWidget*
/// @param item QTableWidgetItem*
/// @param hint enum QAbstractItemView__ScrollHint
void q_tablewidget_scroll_to_item2(void* self, void* item, int64_t hint);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setModel)
///
/// @param self QTableWidget*
/// @param model QAbstractItemModel*
void q_tablewidget_set_model(void* self, void* model);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setModel)
///
/// Allows for overriding the related default method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QAbstractItemModel*)
void q_tablewidget_on_set_model(void* self, void (*callback)(void*, void*));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setModel)
///
/// Base class method implementation
///
/// @param self QTableWidget*
/// @param model QAbstractItemModel*
void q_tablewidget_qbase_set_model(void* self, void* model);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalHeader)
///
/// @param self QTableWidget*
QHeaderView* q_tablewidget_horizontal_header(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalHeader)
///
/// @param self QTableWidget*
QHeaderView* q_tablewidget_vertical_header(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setHorizontalHeader)
///
/// @param self QTableWidget*
/// @param header QHeaderView*
void q_tablewidget_set_horizontal_header(void* self, void* header);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setVerticalHeader)
///
/// @param self QTableWidget*
/// @param header QHeaderView*
void q_tablewidget_set_vertical_header(void* self, void* header);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowViewportPosition)
///
/// @param self QTableWidget*
/// @param row int
int32_t q_tablewidget_row_viewport_position(void* self, int row);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowAt)
///
/// @param self QTableWidget*
/// @param y int
int32_t q_tablewidget_row_at(void* self, int y);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setRowHeight)
///
/// @param self QTableWidget*
/// @param row int
/// @param height int
void q_tablewidget_set_row_height(void* self, int row, int height);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowHeight)
///
/// @param self QTableWidget*
/// @param row int
int32_t q_tablewidget_row_height(void* self, int row);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnViewportPosition)
///
/// @param self QTableWidget*
/// @param column int
int32_t q_tablewidget_column_viewport_position(void* self, int column);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnAt)
///
/// @param self QTableWidget*
/// @param x int
int32_t q_tablewidget_column_at(void* self, int x);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setColumnWidth)
///
/// @param self QTableWidget*
/// @param column int
/// @param width int
void q_tablewidget_set_column_width(void* self, int column, int width);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnWidth)
///
/// @param self QTableWidget*
/// @param column int
int32_t q_tablewidget_column_width(void* self, int column);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isRowHidden)
///
/// @param self QTableWidget*
/// @param row int
bool q_tablewidget_is_row_hidden(void* self, int row);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setRowHidden)
///
/// @param self QTableWidget*
/// @param row int
/// @param hide bool
void q_tablewidget_set_row_hidden(void* self, int row, bool hide);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isColumnHidden)
///
/// @param self QTableWidget*
/// @param column int
bool q_tablewidget_is_column_hidden(void* self, int column);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setColumnHidden)
///
/// @param self QTableWidget*
/// @param column int
/// @param hide bool
void q_tablewidget_set_column_hidden(void* self, int column, bool hide);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#showGrid)
///
/// @param self QTableWidget*
bool q_tablewidget_show_grid(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#gridStyle)
///
/// @param self QTableWidget*
///
/// @return enum Qt__PenStyle
int64_t q_tablewidget_grid_style(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setGridStyle)
///
/// @param self QTableWidget*
/// @param style enum Qt__PenStyle
void q_tablewidget_set_grid_style(void* self, int64_t style);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setWordWrap)
///
/// @param self QTableWidget*
/// @param on bool
void q_tablewidget_set_word_wrap(void* self, bool on);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#wordWrap)
///
/// @param self QTableWidget*
bool q_tablewidget_word_wrap(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setCornerButtonEnabled)
///
/// @param self QTableWidget*
/// @param enable bool
void q_tablewidget_set_corner_button_enabled(void* self, bool enable);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isCornerButtonEnabled)
///
/// @param self QTableWidget*
bool q_tablewidget_is_corner_button_enabled(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSpan)
///
/// @param self QTableWidget*
/// @param row int
/// @param column int
/// @param rowSpan int
/// @param columnSpan int
void q_tablewidget_set_span(void* self, int row, int column, int rowSpan, int columnSpan);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowSpan)
///
/// @param self QTableWidget*
/// @param row int
/// @param column int
int32_t q_tablewidget_row_span(void* self, int row, int column);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnSpan)
///
/// @param self QTableWidget*
/// @param row int
/// @param column int
int32_t q_tablewidget_column_span(void* self, int row, int column);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#clearSpans)
///
/// @param self QTableWidget*
void q_tablewidget_clear_spans(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectRow)
///
/// @param self QTableWidget*
/// @param row int
void q_tablewidget_select_row(void* self, int row);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectColumn)
///
/// @param self QTableWidget*
/// @param column int
void q_tablewidget_select_column(void* self, int column);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#hideRow)
///
/// @param self QTableWidget*
/// @param row int
void q_tablewidget_hide_row(void* self, int row);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#hideColumn)
///
/// @param self QTableWidget*
/// @param column int
void q_tablewidget_hide_column(void* self, int column);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#showRow)
///
/// @param self QTableWidget*
/// @param row int
void q_tablewidget_show_row(void* self, int row);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#showColumn)
///
/// @param self QTableWidget*
/// @param column int
void q_tablewidget_show_column(void* self, int column);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#resizeRowToContents)
///
/// @param self QTableWidget*
/// @param row int
void q_tablewidget_resize_row_to_contents(void* self, int row);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#resizeRowsToContents)
///
/// @param self QTableWidget*
void q_tablewidget_resize_rows_to_contents(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#resizeColumnToContents)
///
/// @param self QTableWidget*
/// @param column int
void q_tablewidget_resize_column_to_contents(void* self, int column);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#resizeColumnsToContents)
///
/// @param self QTableWidget*
void q_tablewidget_resize_columns_to_contents(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sortByColumn)
///
/// @param self QTableWidget*
/// @param column int
/// @param order enum Qt__SortOrder
void q_tablewidget_sort_by_column(void* self, int column, int64_t order);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setShowGrid)
///
/// @param self QTableWidget*
/// @param show bool
void q_tablewidget_set_show_grid(void* self, bool show);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#model)
///
/// @param self QTableWidget*
QAbstractItemModel* q_tablewidget_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
///
/// @param self QTableWidget*
QItemSelectionModel* q_tablewidget_selection_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
///
/// @param self QTableWidget*
/// @param delegate QAbstractItemDelegate*
void q_tablewidget_set_item_delegate(void* self, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// @param self QTableWidget*
QAbstractItemDelegate* q_tablewidget_item_delegate(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
///
/// @param self QTableWidget*
/// @param mode enum QAbstractItemView__SelectionMode
void q_tablewidget_set_selection_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
///
/// @param self QTableWidget*
///
/// @return enum QAbstractItemView__SelectionMode
int64_t q_tablewidget_selection_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
///
/// @param self QTableWidget*
/// @param behavior enum QAbstractItemView__SelectionBehavior
void q_tablewidget_set_selection_behavior(void* self, int64_t behavior);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
///
/// @param self QTableWidget*
///
/// @return enum QAbstractItemView__SelectionBehavior
int64_t q_tablewidget_selection_behavior(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
///
/// @param self QTableWidget*
QModelIndex* q_tablewidget_current_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
///
/// @param self QTableWidget*
QModelIndex* q_tablewidget_root_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
///
/// @param self QTableWidget*
/// @param triggers flag of enum QAbstractItemView__EditTrigger
void q_tablewidget_set_edit_triggers(void* self, int64_t triggers);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
///
/// @param self QTableWidget*
///
/// @return flag of enum QAbstractItemView__EditTrigger
int64_t q_tablewidget_edit_triggers(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
///
/// @param self QTableWidget*
/// @param mode enum QAbstractItemView__ScrollMode
void q_tablewidget_set_vertical_scroll_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
///
/// @param self QTableWidget*
///
/// @return enum QAbstractItemView__ScrollMode
int64_t q_tablewidget_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
///
/// @param self QTableWidget*
void q_tablewidget_reset_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
///
/// @param self QTableWidget*
/// @param mode enum QAbstractItemView__ScrollMode
void q_tablewidget_set_horizontal_scroll_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
///
/// @param self QTableWidget*
///
/// @return enum QAbstractItemView__ScrollMode
int64_t q_tablewidget_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
///
/// @param self QTableWidget*
void q_tablewidget_reset_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
///
/// @param self QTableWidget*
/// @param enable bool
void q_tablewidget_set_auto_scroll(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
///
/// @param self QTableWidget*
bool q_tablewidget_has_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
///
/// @param self QTableWidget*
/// @param margin int
void q_tablewidget_set_auto_scroll_margin(void* self, int margin);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
///
/// @param self QTableWidget*
int32_t q_tablewidget_auto_scroll_margin(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
///
/// @param self QTableWidget*
/// @param enable bool
void q_tablewidget_set_tab_key_navigation(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
///
/// @param self QTableWidget*
bool q_tablewidget_tab_key_navigation(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
///
/// @param self QTableWidget*
/// @param enable bool
void q_tablewidget_set_drop_indicator_shown(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
///
/// @param self QTableWidget*
bool q_tablewidget_show_drop_indicator(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
///
/// @param self QTableWidget*
/// @param enable bool
void q_tablewidget_set_drag_enabled(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
///
/// @param self QTableWidget*
bool q_tablewidget_drag_enabled(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
///
/// @param self QTableWidget*
/// @param overwrite bool
void q_tablewidget_set_drag_drop_overwrite_mode(void* self, bool overwrite);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
///
/// @param self QTableWidget*
bool q_tablewidget_drag_drop_overwrite_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
///
/// @param self QTableWidget*
/// @param behavior enum QAbstractItemView__DragDropMode
void q_tablewidget_set_drag_drop_mode(void* self, int64_t behavior);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
///
/// @param self QTableWidget*
///
/// @return enum QAbstractItemView__DragDropMode
int64_t q_tablewidget_drag_drop_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
///
/// @param self QTableWidget*
/// @param dropAction enum Qt__DropAction
void q_tablewidget_set_default_drop_action(void* self, int64_t dropAction);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
///
/// @param self QTableWidget*
///
/// @return enum Qt__DropAction
int64_t q_tablewidget_default_drop_action(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
///
/// @param self QTableWidget*
/// @param enable bool
void q_tablewidget_set_alternating_row_colors(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
///
/// @param self QTableWidget*
bool q_tablewidget_alternating_row_colors(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
///
/// @param self QTableWidget*
/// @param size QSize*
void q_tablewidget_set_icon_size(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
///
/// @param self QTableWidget*
QSize* q_tablewidget_icon_size(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
///
/// @param self QTableWidget*
/// @param mode enum Qt__TextElideMode
void q_tablewidget_set_text_elide_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
///
/// @param self QTableWidget*
///
/// @return enum Qt__TextElideMode
int64_t q_tablewidget_text_elide_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
///
/// @param self QTableWidget*
/// @param index QModelIndex*
QSize* q_tablewidget_size_hint_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
///
/// @param self QTableWidget*
/// @param index QModelIndex*
/// @param widget QWidget*
void q_tablewidget_set_index_widget(void* self, void* index, void* widget);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
///
/// @param self QTableWidget*
/// @param index QModelIndex*
QWidget* q_tablewidget_index_widget(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
///
/// @param self QTableWidget*
/// @param row int
/// @param delegate QAbstractItemDelegate*
void q_tablewidget_set_item_delegate_for_row(void* self, int row, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
///
/// @param self QTableWidget*
/// @param row int
QAbstractItemDelegate* q_tablewidget_item_delegate_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
///
/// @param self QTableWidget*
/// @param column int
/// @param delegate QAbstractItemDelegate*
void q_tablewidget_set_item_delegate_for_column(void* self, int column, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
///
/// @param self QTableWidget*
/// @param column int
QAbstractItemDelegate* q_tablewidget_item_delegate_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// @param self QTableWidget*
/// @param index QModelIndex*
QAbstractItemDelegate* q_tablewidget_item_delegate2(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// @param self QTableWidget*
/// @param index QModelIndex*
void q_tablewidget_edit(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
///
/// @param self QTableWidget*
void q_tablewidget_clear_selection(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
///
/// @param self QTableWidget*
/// @param index QModelIndex*
void q_tablewidget_set_current_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
///
/// @param self QTableWidget*
void q_tablewidget_scroll_to_top(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
///
/// @param self QTableWidget*
void q_tablewidget_scroll_to_bottom(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#update)
///
/// @param self QTableWidget*
/// @param index QModelIndex*
void q_tablewidget_update(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// @param self QTableWidget*
/// @param index QModelIndex*
void q_tablewidget_pressed(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QModelIndex*)
void q_tablewidget_on_pressed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// @param self QTableWidget*
/// @param index QModelIndex*
void q_tablewidget_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QModelIndex*)
void q_tablewidget_on_clicked(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// @param self QTableWidget*
/// @param index QModelIndex*
void q_tablewidget_double_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QModelIndex*)
void q_tablewidget_on_double_clicked(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// @param self QTableWidget*
/// @param index QModelIndex*
void q_tablewidget_activated(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QModelIndex*)
void q_tablewidget_on_activated(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// @param self QTableWidget*
/// @param index QModelIndex*
void q_tablewidget_entered(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QModelIndex*)
void q_tablewidget_on_entered(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// @param self QTableWidget*
void q_tablewidget_viewport_entered(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*)
void q_tablewidget_on_viewport_entered(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// @param self QTableWidget*
/// @param size QSize*
void q_tablewidget_icon_size_changed(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QSize*)
void q_tablewidget_on_icon_size_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// @param self QTableWidget*
///
/// @return enum Qt__ScrollBarPolicy
int64_t q_tablewidget_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// @param self QTableWidget*
/// @param verticalScrollBarPolicy enum Qt__ScrollBarPolicy
void q_tablewidget_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// @param self QTableWidget*
QScrollBar* q_tablewidget_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// @param self QTableWidget*
/// @param scrollbar QScrollBar*
void q_tablewidget_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// @param self QTableWidget*
///
/// @return enum Qt__ScrollBarPolicy
int64_t q_tablewidget_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// @param self QTableWidget*
/// @param horizontalScrollBarPolicy enum Qt__ScrollBarPolicy
void q_tablewidget_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// @param self QTableWidget*
QScrollBar* q_tablewidget_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// @param self QTableWidget*
/// @param scrollbar QScrollBar*
void q_tablewidget_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// @param self QTableWidget*
QWidget* q_tablewidget_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// @param self QTableWidget*
/// @param widget QWidget*
void q_tablewidget_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// @param self QTableWidget*
/// @param widget QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
void q_tablewidget_add_scroll_bar_widget(void* self, void* widget, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// @param self QTableWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
libqt_list /* of QWidget* */ q_tablewidget_scroll_bar_widgets(void* self, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// @param self QTableWidget*
QWidget* q_tablewidget_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// @param self QTableWidget*
/// @param widget QWidget*
void q_tablewidget_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// @param self QTableWidget*
QSize* q_tablewidget_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// @param self QTableWidget*
///
/// @return enum QAbstractScrollArea__SizeAdjustPolicy
int64_t q_tablewidget_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// @param self QTableWidget*
/// @param policy enum QAbstractScrollArea__SizeAdjustPolicy
void q_tablewidget_set_size_adjust_policy(void* self, int64_t policy);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self QTableWidget*
int32_t q_tablewidget_frame_style(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self QTableWidget*
/// @param frameStyle int
void q_tablewidget_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self QTableWidget*
int32_t q_tablewidget_frame_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self QTableWidget*
///
/// @return enum QFrame__Shape
int64_t q_tablewidget_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self QTableWidget*
/// @param frameShape enum QFrame__Shape
void q_tablewidget_set_frame_shape(void* self, int64_t frameShape);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self QTableWidget*
///
/// @return enum QFrame__Shadow
int64_t q_tablewidget_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self QTableWidget*
/// @param frameShadow enum QFrame__Shadow
void q_tablewidget_set_frame_shadow(void* self, int64_t frameShadow);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self QTableWidget*
int32_t q_tablewidget_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self QTableWidget*
/// @param lineWidth int
void q_tablewidget_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self QTableWidget*
int32_t q_tablewidget_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self QTableWidget*
/// @param midLineWidth int
void q_tablewidget_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self QTableWidget*
QRect* q_tablewidget_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self QTableWidget*
/// @param frameRect QRect*
void q_tablewidget_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QTableWidget*
uintptr_t q_tablewidget_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QTableWidget*
void q_tablewidget_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QTableWidget*
uintptr_t q_tablewidget_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QTableWidget*
uintptr_t q_tablewidget_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QTableWidget*
QStyle* q_tablewidget_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QTableWidget*
/// @param style QStyle*
void q_tablewidget_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QTableWidget*
bool q_tablewidget_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QTableWidget*
bool q_tablewidget_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QTableWidget*
bool q_tablewidget_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QTableWidget*
///
/// @return enum Qt__WindowModality
int64_t q_tablewidget_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QTableWidget*
/// @param windowModality enum Qt__WindowModality
void q_tablewidget_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QTableWidget*
bool q_tablewidget_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QTableWidget*
/// @param param1 QWidget*
bool q_tablewidget_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QTableWidget*
/// @param enabled bool
void q_tablewidget_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QTableWidget*
/// @param disabled bool
void q_tablewidget_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QTableWidget*
/// @param windowModified bool
void q_tablewidget_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QTableWidget*
QRect* q_tablewidget_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QTableWidget*
const QRect* q_tablewidget_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QTableWidget*
QRect* q_tablewidget_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QTableWidget*
int32_t q_tablewidget_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QTableWidget*
int32_t q_tablewidget_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QTableWidget*
QPoint* q_tablewidget_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QTableWidget*
QSize* q_tablewidget_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QTableWidget*
QSize* q_tablewidget_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QTableWidget*
int32_t q_tablewidget_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QTableWidget*
int32_t q_tablewidget_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QTableWidget*
QRect* q_tablewidget_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QTableWidget*
QRect* q_tablewidget_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QTableWidget*
QRegion* q_tablewidget_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QTableWidget*
QSize* q_tablewidget_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QTableWidget*
QSize* q_tablewidget_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QTableWidget*
int32_t q_tablewidget_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QTableWidget*
int32_t q_tablewidget_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QTableWidget*
int32_t q_tablewidget_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QTableWidget*
int32_t q_tablewidget_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QTableWidget*
/// @param minimumSize QSize*
void q_tablewidget_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QTableWidget*
/// @param minw int
/// @param minh int
void q_tablewidget_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QTableWidget*
/// @param maximumSize QSize*
void q_tablewidget_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QTableWidget*
/// @param maxw int
/// @param maxh int
void q_tablewidget_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QTableWidget*
/// @param minw int
void q_tablewidget_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QTableWidget*
/// @param minh int
void q_tablewidget_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QTableWidget*
/// @param maxw int
void q_tablewidget_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QTableWidget*
/// @param maxh int
void q_tablewidget_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QTableWidget*
QSize* q_tablewidget_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QTableWidget*
/// @param sizeIncrement QSize*
void q_tablewidget_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QTableWidget*
/// @param w int
/// @param h int
void q_tablewidget_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QTableWidget*
QSize* q_tablewidget_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QTableWidget*
/// @param baseSize QSize*
void q_tablewidget_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QTableWidget*
/// @param basew int
/// @param baseh int
void q_tablewidget_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QTableWidget*
/// @param fixedSize QSize*
void q_tablewidget_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QTableWidget*
/// @param w int
/// @param h int
void q_tablewidget_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QTableWidget*
/// @param w int
void q_tablewidget_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QTableWidget*
/// @param h int
void q_tablewidget_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QTableWidget*
/// @param param1 QPointF*
QPointF* q_tablewidget_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QTableWidget*
/// @param param1 QPoint*
QPoint* q_tablewidget_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QTableWidget*
/// @param param1 QPointF*
QPointF* q_tablewidget_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QTableWidget*
/// @param param1 QPoint*
QPoint* q_tablewidget_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QTableWidget*
/// @param param1 QPointF*
QPointF* q_tablewidget_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QTableWidget*
/// @param param1 QPoint*
QPoint* q_tablewidget_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QTableWidget*
/// @param param1 QPointF*
QPointF* q_tablewidget_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QTableWidget*
/// @param param1 QPoint*
QPoint* q_tablewidget_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QTableWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* q_tablewidget_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QTableWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* q_tablewidget_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QTableWidget*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* q_tablewidget_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QTableWidget*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* q_tablewidget_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QTableWidget*
QWidget* q_tablewidget_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QTableWidget*
QWidget* q_tablewidget_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QTableWidget*
QWidget* q_tablewidget_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QTableWidget*
const QPalette* q_tablewidget_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QTableWidget*
/// @param palette QPalette*
void q_tablewidget_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QTableWidget*
/// @param backgroundRole enum QPalette__ColorRole
void q_tablewidget_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QTableWidget*
///
/// @return enum QPalette__ColorRole
int64_t q_tablewidget_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QTableWidget*
/// @param foregroundRole enum QPalette__ColorRole
void q_tablewidget_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QTableWidget*
///
/// @return enum QPalette__ColorRole
int64_t q_tablewidget_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QTableWidget*
const QFont* q_tablewidget_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QTableWidget*
/// @param font QFont*
void q_tablewidget_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QTableWidget*
QFontMetrics* q_tablewidget_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QTableWidget*
QFontInfo* q_tablewidget_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QTableWidget*
QCursor* q_tablewidget_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QTableWidget*
/// @param cursor QCursor*
void q_tablewidget_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QTableWidget*
void q_tablewidget_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QTableWidget*
/// @param enable bool
void q_tablewidget_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QTableWidget*
bool q_tablewidget_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QTableWidget*
bool q_tablewidget_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QTableWidget*
/// @param enable bool
void q_tablewidget_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QTableWidget*
bool q_tablewidget_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QTableWidget*
/// @param mask QBitmap*
void q_tablewidget_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QTableWidget*
/// @param mask QRegion*
void q_tablewidget_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QTableWidget*
QRegion* q_tablewidget_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QTableWidget*
void q_tablewidget_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTableWidget*
/// @param target QPaintDevice*
void q_tablewidget_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTableWidget*
/// @param painter QPainter*
void q_tablewidget_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QTableWidget*
QPixmap* q_tablewidget_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QTableWidget*
QGraphicsEffect* q_tablewidget_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QTableWidget*
/// @param effect QGraphicsEffect*
void q_tablewidget_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QTableWidget*
/// @param typeVal enum Qt__GestureType
void q_tablewidget_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QTableWidget*
/// @param typeVal enum Qt__GestureType
void q_tablewidget_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QTableWidget*
/// @param windowTitle const char*
void q_tablewidget_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QTableWidget*
/// @param styleSheet const char*
void q_tablewidget_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTableWidget*
const char* q_tablewidget_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTableWidget*
const char* q_tablewidget_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QTableWidget*
/// @param icon QIcon*
void q_tablewidget_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QTableWidget*
QIcon* q_tablewidget_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QTableWidget*
/// @param windowIconText const char*
void q_tablewidget_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTableWidget*
const char* q_tablewidget_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QTableWidget*
/// @param windowRole const char*
void q_tablewidget_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTableWidget*
const char* q_tablewidget_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QTableWidget*
/// @param filePath const char*
void q_tablewidget_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTableWidget*
const char* q_tablewidget_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QTableWidget*
/// @param level double
void q_tablewidget_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QTableWidget*
double q_tablewidget_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QTableWidget*
bool q_tablewidget_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QTableWidget*
/// @param toolTip const char*
void q_tablewidget_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTableWidget*
const char* q_tablewidget_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QTableWidget*
/// @param msec int
void q_tablewidget_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QTableWidget*
int32_t q_tablewidget_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QTableWidget*
/// @param statusTip const char*
void q_tablewidget_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTableWidget*
const char* q_tablewidget_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QTableWidget*
/// @param whatsThis const char*
void q_tablewidget_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTableWidget*
const char* q_tablewidget_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTableWidget*
const char* q_tablewidget_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QTableWidget*
/// @param name const char*
void q_tablewidget_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTableWidget*
const char* q_tablewidget_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QTableWidget*
/// @param description const char*
void q_tablewidget_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QTableWidget*
/// @param direction enum Qt__LayoutDirection
void q_tablewidget_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QTableWidget*
///
/// @return enum Qt__LayoutDirection
int64_t q_tablewidget_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QTableWidget*
void q_tablewidget_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QTableWidget*
/// @param locale QLocale*
void q_tablewidget_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QTableWidget*
QLocale* q_tablewidget_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QTableWidget*
void q_tablewidget_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QTableWidget*
bool q_tablewidget_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QTableWidget*
bool q_tablewidget_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QTableWidget*
void q_tablewidget_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QTableWidget*
bool q_tablewidget_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QTableWidget*
void q_tablewidget_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QTableWidget*
void q_tablewidget_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QTableWidget*
/// @param reason enum Qt__FocusReason
void q_tablewidget_set_focus2(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QTableWidget*
///
/// @return enum Qt__FocusPolicy
int64_t q_tablewidget_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QTableWidget*
/// @param policy enum Qt__FocusPolicy
void q_tablewidget_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QTableWidget*
bool q_tablewidget_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void q_tablewidget_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QTableWidget*
/// @param focusProxy QWidget*
void q_tablewidget_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QTableWidget*
QWidget* q_tablewidget_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QTableWidget*
///
/// @return enum Qt__ContextMenuPolicy
int64_t q_tablewidget_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QTableWidget*
/// @param policy enum Qt__ContextMenuPolicy
void q_tablewidget_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QTableWidget*
void q_tablewidget_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QTableWidget*
/// @param param1 QCursor*
void q_tablewidget_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QTableWidget*
void q_tablewidget_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QTableWidget*
void q_tablewidget_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QTableWidget*
void q_tablewidget_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QTableWidget*
/// @param key QKeySequence*
int32_t q_tablewidget_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QTableWidget*
/// @param id int
void q_tablewidget_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QTableWidget*
/// @param id int
void q_tablewidget_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QTableWidget*
/// @param id int
void q_tablewidget_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_tablewidget_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_tablewidget_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QTableWidget*
bool q_tablewidget_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QTableWidget*
/// @param enable bool
void q_tablewidget_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QTableWidget*
QGraphicsProxyWidget* q_tablewidget_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTableWidget*
void q_tablewidget_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTableWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_tablewidget_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTableWidget*
/// @param param1 QRect*
void q_tablewidget_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTableWidget*
/// @param param1 QRegion*
void q_tablewidget_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTableWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_tablewidget_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTableWidget*
/// @param param1 QRect*
void q_tablewidget_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTableWidget*
/// @param param1 QRegion*
void q_tablewidget_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QTableWidget*
/// @param hidden bool
void q_tablewidget_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QTableWidget*
void q_tablewidget_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QTableWidget*
void q_tablewidget_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QTableWidget*
void q_tablewidget_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QTableWidget*
void q_tablewidget_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QTableWidget*
void q_tablewidget_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QTableWidget*
void q_tablewidget_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QTableWidget*
bool q_tablewidget_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QTableWidget*
void q_tablewidget_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QTableWidget*
void q_tablewidget_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QTableWidget*
/// @param param1 QWidget*
void q_tablewidget_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QTableWidget*
/// @param x int
/// @param y int
void q_tablewidget_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QTableWidget*
/// @param param1 QPoint*
void q_tablewidget_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QTableWidget*
/// @param w int
/// @param h int
void q_tablewidget_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QTableWidget*
/// @param param1 QSize*
void q_tablewidget_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QTableWidget*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_tablewidget_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QTableWidget*
/// @param geometry QRect*
void q_tablewidget_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTableWidget*
char* q_tablewidget_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QTableWidget*
/// @param geometry const char*
bool q_tablewidget_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QTableWidget*
void q_tablewidget_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QTableWidget*
bool q_tablewidget_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QTableWidget*
/// @param param1 QWidget*
bool q_tablewidget_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QTableWidget*
bool q_tablewidget_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QTableWidget*
bool q_tablewidget_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QTableWidget*
bool q_tablewidget_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QTableWidget*
bool q_tablewidget_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QTableWidget*
///
/// @return flag of enum Qt__WindowState
int64_t q_tablewidget_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QTableWidget*
/// @param state flag of enum Qt__WindowState
void q_tablewidget_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QTableWidget*
/// @param state flag of enum Qt__WindowState
void q_tablewidget_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QTableWidget*
QSizePolicy* q_tablewidget_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QTableWidget*
/// @param sizePolicy QSizePolicy*
void q_tablewidget_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QTableWidget*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void q_tablewidget_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QTableWidget*
QRegion* q_tablewidget_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QTableWidget*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void q_tablewidget_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QTableWidget*
/// @param margins QMargins*
void q_tablewidget_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QTableWidget*
QMargins* q_tablewidget_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QTableWidget*
QRect* q_tablewidget_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QTableWidget*
QLayout* q_tablewidget_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QTableWidget*
/// @param layout QLayout*
void q_tablewidget_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QTableWidget*
void q_tablewidget_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QTableWidget*
/// @param parent QWidget*
void q_tablewidget_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QTableWidget*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void q_tablewidget_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QTableWidget*
/// @param dx int
/// @param dy int
void q_tablewidget_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QTableWidget*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void q_tablewidget_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QTableWidget*
QWidget* q_tablewidget_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QTableWidget*
QWidget* q_tablewidget_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QTableWidget*
QWidget* q_tablewidget_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QTableWidget*
bool q_tablewidget_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QTableWidget*
/// @param on bool
void q_tablewidget_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTableWidget*
/// @param action QAction*
void q_tablewidget_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QTableWidget*
/// @param actions libqt_list /* of QAction* */
void q_tablewidget_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QTableWidget*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void q_tablewidget_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QTableWidget*
/// @param before QAction*
/// @param action QAction*
void q_tablewidget_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QTableWidget*
/// @param action QAction*
void q_tablewidget_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QTableWidget*
libqt_list /* of QAction* */ q_tablewidget_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTableWidget*
/// @param text const char*
QAction* q_tablewidget_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTableWidget*
/// @param icon QIcon*
/// @param text const char*
QAction* q_tablewidget_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTableWidget*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* q_tablewidget_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTableWidget*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* q_tablewidget_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QTableWidget*
QWidget* q_tablewidget_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QTableWidget*
/// @param typeVal flag of enum Qt__WindowType
void q_tablewidget_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QTableWidget*
///
/// @return flag of enum Qt__WindowType
int64_t q_tablewidget_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QTableWidget*
/// @param param1 enum Qt__WindowType
void q_tablewidget_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QTableWidget*
/// @param typeVal flag of enum Qt__WindowType
void q_tablewidget_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QTableWidget*
///
/// @return enum Qt__WindowType
int64_t q_tablewidget_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* q_tablewidget_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QTableWidget*
/// @param x int
/// @param y int
QWidget* q_tablewidget_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QTableWidget*
/// @param p QPoint*
QWidget* q_tablewidget_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QTableWidget*
/// @param p QPointF*
QWidget* q_tablewidget_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QTableWidget*
/// @param param1 enum Qt__WidgetAttribute
void q_tablewidget_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QTableWidget*
/// @param param1 enum Qt__WidgetAttribute
bool q_tablewidget_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QTableWidget*
void q_tablewidget_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QTableWidget*
/// @param child QWidget*
bool q_tablewidget_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QTableWidget*
bool q_tablewidget_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QTableWidget*
/// @param enabled bool
void q_tablewidget_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QTableWidget*
QBackingStore* q_tablewidget_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QTableWidget*
QWindow* q_tablewidget_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QTableWidget*
QScreen* q_tablewidget_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QTableWidget*
/// @param screen QScreen*
void q_tablewidget_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* q_tablewidget_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QTableWidget*
/// @param title const char*
void q_tablewidget_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, const char*)
void q_tablewidget_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QTableWidget*
/// @param icon QIcon*
void q_tablewidget_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QIcon*)
void q_tablewidget_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QTableWidget*
/// @param iconText const char*
void q_tablewidget_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, const char*)
void q_tablewidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QTableWidget*
/// @param pos QPoint*
void q_tablewidget_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QPoint*)
void q_tablewidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QTableWidget*
///
/// @return flag of enum Qt__InputMethodHint
int64_t q_tablewidget_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QTableWidget*
/// @param hints flag of enum Qt__InputMethodHint
void q_tablewidget_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTableWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void q_tablewidget_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTableWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void q_tablewidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTableWidget*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void q_tablewidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTableWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void q_tablewidget_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTableWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void q_tablewidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTableWidget*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void q_tablewidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QTableWidget*
/// @param rectangle QRect*
QPixmap* q_tablewidget_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QTableWidget*
/// @param typeVal enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void q_tablewidget_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QTableWidget*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t q_tablewidget_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QTableWidget*
/// @param id int
/// @param enable bool
void q_tablewidget_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QTableWidget*
/// @param id int
/// @param enable bool
void q_tablewidget_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QTableWidget*
/// @param param1 enum Qt__WindowType
/// @param on bool
void q_tablewidget_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QTableWidget*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void q_tablewidget_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* q_tablewidget_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* q_tablewidget_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTableWidget*
const char* q_tablewidget_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QTableWidget*
/// @param name char*
void q_tablewidget_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QTableWidget*
bool q_tablewidget_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QTableWidget*
bool q_tablewidget_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QTableWidget*
bool q_tablewidget_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QTableWidget*
bool q_tablewidget_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QTableWidget*
/// @param b bool
bool q_tablewidget_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QTableWidget*
QThread* q_tablewidget_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTableWidget*
/// @param thread QThread*
bool q_tablewidget_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTableWidget*
/// @param interval int
int32_t q_tablewidget_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTableWidget*
/// @param id int
void q_tablewidget_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTableWidget*
/// @param id enum Qt__TimerId
void q_tablewidget_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QTableWidget*
libqt_list /* of QObject* */ q_tablewidget_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QTableWidget*
/// @param filterObj QObject*
void q_tablewidget_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QTableWidget*
/// @param obj QObject*
void q_tablewidget_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_tablewidget_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTableWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_tablewidget_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_tablewidget_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_tablewidget_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QTableWidget*
void q_tablewidget_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QTableWidget*
void q_tablewidget_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTableWidget*
/// @param name const char*
/// @param value QVariant*
bool q_tablewidget_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QTableWidget*
/// @param name const char*
QVariant* q_tablewidget_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTableWidget*
const char** q_tablewidget_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTableWidget*
QBindingStorage* q_tablewidget_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTableWidget*
const QBindingStorage* q_tablewidget_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTableWidget*
void q_tablewidget_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*)
void q_tablewidget_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QTableWidget*
QObject* q_tablewidget_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QTableWidget*
/// @param classname const char*
bool q_tablewidget_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QTableWidget*
void q_tablewidget_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTableWidget*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_tablewidget_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTableWidget*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_tablewidget_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_tablewidget_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTableWidget*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_tablewidget_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTableWidget*
/// @param param1 QObject*
void q_tablewidget_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QObject*)
void q_tablewidget_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QTableWidget*
bool q_tablewidget_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QTableWidget*
int32_t q_tablewidget_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QTableWidget*
int32_t q_tablewidget_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QTableWidget*
int32_t q_tablewidget_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QTableWidget*
int32_t q_tablewidget_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QTableWidget*
int32_t q_tablewidget_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QTableWidget*
int32_t q_tablewidget_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QTableWidget*
double q_tablewidget_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QTableWidget*
double q_tablewidget_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QTableWidget*
int32_t q_tablewidget_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QTableWidget*
int32_t q_tablewidget_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_tablewidget_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t q_tablewidget_encode_metric_f(int64_t metric, double value);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setRootIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param index QModelIndex*
void q_tablewidget_set_root_index(void* self, void* index);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setRootIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param index QModelIndex*
void q_tablewidget_qbase_set_root_index(void* self, void* index);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setRootIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QModelIndex*)
void q_tablewidget_on_set_root_index(void* self, void (*callback)(void*, void*));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSelectionModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param selectionModel QItemSelectionModel*
void q_tablewidget_set_selection_model(void* self, void* selectionModel);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSelectionModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param selectionModel QItemSelectionModel*
void q_tablewidget_qbase_set_selection_model(void* self, void* selectionModel);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSelectionModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QItemSelectionModel*)
void q_tablewidget_on_set_selection_model(void* self, void (*callback)(void*, void*));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#doItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
void q_tablewidget_do_items_layout(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#doItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
void q_tablewidget_qbase_do_items_layout(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#doItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn()
void q_tablewidget_on_do_items_layout(void* self, void (*callback)());

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#visualRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param index QModelIndex*
QRect* q_tablewidget_visual_rect(void* self, void* index);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#visualRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param index QModelIndex*
QRect* q_tablewidget_qbase_visual_rect(void* self, void* index);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#visualRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback QRect* fn(QTableWidget*, QModelIndex*)
void q_tablewidget_on_visual_rect(void* self, QRect* (*callback)(void*, void*));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#scrollTo)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param index QModelIndex*
/// @param hint enum QAbstractItemView__ScrollHint
void q_tablewidget_scroll_to(void* self, void* index, int64_t hint);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#scrollTo)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param index QModelIndex*
/// @param hint enum QAbstractItemView__ScrollHint
void q_tablewidget_qbase_scroll_to(void* self, void* index, int64_t hint);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#scrollTo)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QModelIndex*, enum QAbstractItemView__ScrollHint)
void q_tablewidget_on_scroll_to(void* self, void (*callback)(void*, void*, int64_t));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#indexAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param p QPoint*
QModelIndex* q_tablewidget_index_at(void* self, void* p);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#indexAt)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param p QPoint*
QModelIndex* q_tablewidget_qbase_index_at(void* self, void* p);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#indexAt)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback QModelIndex* fn(QTableWidget*, QPoint*)
void q_tablewidget_on_index_at(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#scrollContentsBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param dx int
/// @param dy int
void q_tablewidget_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#scrollContentsBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param dx int
/// @param dy int
void q_tablewidget_qbase_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#scrollContentsBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, int, int)
void q_tablewidget_on_scroll_contents_by(void* self, void (*callback)(void*, int, int));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#initViewItemOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param option QStyleOptionViewItem*
void q_tablewidget_init_view_item_option(void* self, void* option);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#initViewItemOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param option QStyleOptionViewItem*
void q_tablewidget_qbase_init_view_item_option(void* self, void* option);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#initViewItemOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QStyleOptionViewItem*)
void q_tablewidget_on_init_view_item_option(void* self, void (*callback)(void*, void*));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param e QPaintEvent*
void q_tablewidget_paint_event(void* self, void* e);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param e QPaintEvent*
void q_tablewidget_qbase_paint_event(void* self, void* e);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QPaintEvent*)
void q_tablewidget_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param event QTimerEvent*
void q_tablewidget_timer_event(void* self, void* event);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param event QTimerEvent*
void q_tablewidget_qbase_timer_event(void* self, void* event);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QTimerEvent*)
void q_tablewidget_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
int32_t q_tablewidget_horizontal_offset(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
int32_t q_tablewidget_qbase_horizontal_offset(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback int32_t fn()
void q_tablewidget_on_horizontal_offset(void* self, int32_t (*callback)());

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
int32_t q_tablewidget_vertical_offset(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
int32_t q_tablewidget_qbase_vertical_offset(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback int32_t fn()
void q_tablewidget_on_vertical_offset(void* self, int32_t (*callback)());

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#moveCursor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param cursorAction enum QAbstractItemView__CursorAction
/// @param modifiers flag of enum Qt__KeyboardModifier
QModelIndex* q_tablewidget_move_cursor(void* self, int64_t cursorAction, int64_t modifiers);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#moveCursor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param cursorAction enum QAbstractItemView__CursorAction
/// @param modifiers flag of enum Qt__KeyboardModifier
QModelIndex* q_tablewidget_qbase_move_cursor(void* self, int64_t cursorAction, int64_t modifiers);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#moveCursor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback QModelIndex* fn(QTableWidget*, enum QAbstractItemView__CursorAction, flag of enum Qt__KeyboardModifier)
void q_tablewidget_on_move_cursor(void* self, QModelIndex* (*callback)(void*, int64_t, int64_t));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param rect QRect*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
void q_tablewidget_set_selection(void* self, void* rect, int64_t command);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSelection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param rect QRect*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
void q_tablewidget_qbase_set_selection(void* self, void* rect, int64_t command);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSelection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QRect*, flag of enum QItemSelectionModel__SelectionFlag)
void q_tablewidget_on_set_selection(void* self, void (*callback)(void*, void*, int64_t));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#visualRegionForSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param selection QItemSelection*
QRegion* q_tablewidget_visual_region_for_selection(void* self, void* selection);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#visualRegionForSelection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param selection QItemSelection*
QRegion* q_tablewidget_qbase_visual_region_for_selection(void* self, void* selection);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#visualRegionForSelection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback QRegion* fn(QTableWidget*, QItemSelection*)
void q_tablewidget_on_visual_region_for_selection(void* self, QRegion* (*callback)(void*, void*));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectedIndexes)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
libqt_list /* of QModelIndex* */ q_tablewidget_selected_indexes(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectedIndexes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
libqt_list /* of QModelIndex* */ q_tablewidget_qbase_selected_indexes(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectedIndexes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback libqt_list /* of QModelIndex* */ fn()
void q_tablewidget_on_selected_indexes(void* self, libqt_list /* of QModelIndex* */ (*callback)());

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#updateGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
void q_tablewidget_update_geometries(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#updateGeometries)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
void q_tablewidget_qbase_update_geometries(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#updateGeometries)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn()
void q_tablewidget_on_update_geometries(void* self, void (*callback)());

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
QSize* q_tablewidget_viewport_size_hint(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
QSize* q_tablewidget_qbase_viewport_size_hint(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback QSize* fn()
void q_tablewidget_on_viewport_size_hint(void* self, QSize* (*callback)());

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sizeHintForRow)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param row int
int32_t q_tablewidget_size_hint_for_row(void* self, int row);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sizeHintForRow)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param row int
int32_t q_tablewidget_qbase_size_hint_for_row(void* self, int row);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sizeHintForRow)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback int32_t fn(QTableWidget*, int)
void q_tablewidget_on_size_hint_for_row(void* self, int32_t (*callback)(void*, int));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sizeHintForColumn)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param column int
int32_t q_tablewidget_size_hint_for_column(void* self, int column);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sizeHintForColumn)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param column int
int32_t q_tablewidget_qbase_size_hint_for_column(void* self, int column);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sizeHintForColumn)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback int32_t fn(QTableWidget*, int)
void q_tablewidget_on_size_hint_for_column(void* self, int32_t (*callback)(void*, int));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param action int
void q_tablewidget_vertical_scrollbar_action(void* self, int action);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param action int
void q_tablewidget_qbase_vertical_scrollbar_action(void* self, int action);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalScrollbarAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, int)
void q_tablewidget_on_vertical_scrollbar_action(void* self, void (*callback)(void*, int));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param action int
void q_tablewidget_horizontal_scrollbar_action(void* self, int action);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param action int
void q_tablewidget_qbase_horizontal_scrollbar_action(void* self, int action);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalScrollbarAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, int)
void q_tablewidget_on_horizontal_scrollbar_action(void* self, void (*callback)(void*, int));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isIndexHidden)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param index QModelIndex*
bool q_tablewidget_is_index_hidden(void* self, void* index);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isIndexHidden)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param index QModelIndex*
bool q_tablewidget_qbase_is_index_hidden(void* self, void* index);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isIndexHidden)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback bool fn(QTableWidget*, QModelIndex*)
void q_tablewidget_on_is_index_hidden(void* self, bool (*callback)(void*, void*));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectionChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param selected QItemSelection*
/// @param deselected QItemSelection*
void q_tablewidget_selection_changed(void* self, void* selected, void* deselected);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectionChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param selected QItemSelection*
/// @param deselected QItemSelection*
void q_tablewidget_qbase_selection_changed(void* self, void* selected, void* deselected);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectionChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QItemSelection*, QItemSelection*)
void q_tablewidget_on_selection_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#currentChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param current QModelIndex*
/// @param previous QModelIndex*
void q_tablewidget_current_changed(void* self, void* current, void* previous);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#currentChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param current QModelIndex*
/// @param previous QModelIndex*
void q_tablewidget_qbase_current_changed(void* self, void* current, void* previous);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#currentChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QModelIndex*, QModelIndex*)
void q_tablewidget_on_current_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param search const char*
void q_tablewidget_keyboard_search(void* self, const char* search);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param search const char*
void q_tablewidget_qbase_keyboard_search(void* self, const char* search);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, const char*)
void q_tablewidget_on_keyboard_search(void* self, void (*callback)(void*, const char*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param index QModelIndex*
QAbstractItemDelegate* q_tablewidget_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param index QModelIndex*
QAbstractItemDelegate* q_tablewidget_qbase_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback QAbstractItemDelegate* fn(QTableWidget*, QModelIndex*)
void q_tablewidget_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param query enum Qt__InputMethodQuery
QVariant* q_tablewidget_input_method_query(void* self, int64_t query);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param query enum Qt__InputMethodQuery
QVariant* q_tablewidget_qbase_input_method_query(void* self, int64_t query);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback QVariant* fn(QTableWidget*, enum Qt__InputMethodQuery)
void q_tablewidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
void q_tablewidget_reset(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
void q_tablewidget_qbase_reset(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn()
void q_tablewidget_on_reset(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
void q_tablewidget_select_all(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
void q_tablewidget_qbase_select_all(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn()
void q_tablewidget_on_select_all(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list /* of int */
void q_tablewidget_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list /* of int */
void q_tablewidget_qbase_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QModelIndex*, QModelIndex*, libqt_list /* of int */)
void q_tablewidget_on_data_changed(void* self, void (*callback)(void*, void*, void*, libqt_list));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsInserted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
void q_tablewidget_rows_inserted(void* self, void* parent, int start, int end);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsInserted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
void q_tablewidget_qbase_rows_inserted(void* self, void* parent, int start, int end);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsInserted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QModelIndex*, int, int)
void q_tablewidget_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
void q_tablewidget_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
void q_tablewidget_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QModelIndex*, int, int)
void q_tablewidget_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
void q_tablewidget_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
void q_tablewidget_qbase_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn()
void q_tablewidget_on_update_editor_data(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
void q_tablewidget_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
void q_tablewidget_qbase_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn()
void q_tablewidget_on_update_editor_geometries(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param value int
void q_tablewidget_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param value int
void q_tablewidget_qbase_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, int)
void q_tablewidget_on_vertical_scrollbar_value_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param value int
void q_tablewidget_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param value int
void q_tablewidget_qbase_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, int)
void q_tablewidget_on_horizontal_scrollbar_value_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param editor QWidget*
/// @param hint enum QAbstractItemDelegate__EndEditHint
void q_tablewidget_close_editor(void* self, void* editor, int64_t hint);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param editor QWidget*
/// @param hint enum QAbstractItemDelegate__EndEditHint
void q_tablewidget_qbase_close_editor(void* self, void* editor, int64_t hint);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QWidget*, enum QAbstractItemDelegate__EndEditHint)
void q_tablewidget_on_close_editor(void* self, void (*callback)(void*, void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param editor QWidget*
void q_tablewidget_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param editor QWidget*
void q_tablewidget_qbase_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QWidget*)
void q_tablewidget_on_commit_data(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param editor QObject*
void q_tablewidget_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param editor QObject*
void q_tablewidget_qbase_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QObject*)
void q_tablewidget_on_editor_destroyed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param index QModelIndex*
/// @param trigger enum QAbstractItemView__EditTrigger
/// @param event QEvent*
bool q_tablewidget_edit2(void* self, void* index, int64_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param index QModelIndex*
/// @param trigger enum QAbstractItemView__EditTrigger
/// @param event QEvent*
bool q_tablewidget_qbase_edit2(void* self, void* index, int64_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback bool fn(QTableWidget*, QModelIndex*, enum QAbstractItemView__EditTrigger, QEvent*)
void q_tablewidget_on_edit2(void* self, bool (*callback)(void*, void*, int64_t, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param index QModelIndex*
/// @param event QEvent*
///
/// @return flag of enum QItemSelectionModel__SelectionFlag
int64_t q_tablewidget_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param index QModelIndex*
/// @param event QEvent*
///
/// @return flag of enum QItemSelectionModel__SelectionFlag
int64_t q_tablewidget_qbase_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback int64_t fn(QTableWidget*, QModelIndex*, QEvent*)
void q_tablewidget_on_selection_command(void* self, int64_t (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param supportedActions flag of enum Qt__DropAction
void q_tablewidget_start_drag(void* self, int64_t supportedActions);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param supportedActions flag of enum Qt__DropAction
void q_tablewidget_qbase_start_drag(void* self, int64_t supportedActions);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, flag of enum Qt__DropAction)
void q_tablewidget_on_start_drag(void* self, void (*callback)(void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param next bool
bool q_tablewidget_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param next bool
bool q_tablewidget_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback bool fn(QTableWidget*, bool)
void q_tablewidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param event QEvent*
bool q_tablewidget_viewport_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param event QEvent*
bool q_tablewidget_qbase_viewport_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback bool fn(QTableWidget*, QEvent*)
void q_tablewidget_on_viewport_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param event QMouseEvent*
void q_tablewidget_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param event QMouseEvent*
void q_tablewidget_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QMouseEvent*)
void q_tablewidget_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param event QMouseEvent*
void q_tablewidget_mouse_move_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param event QMouseEvent*
void q_tablewidget_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QMouseEvent*)
void q_tablewidget_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param event QMouseEvent*
void q_tablewidget_mouse_release_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param event QMouseEvent*
void q_tablewidget_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QMouseEvent*)
void q_tablewidget_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param event QMouseEvent*
void q_tablewidget_mouse_double_click_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param event QMouseEvent*
void q_tablewidget_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QMouseEvent*)
void q_tablewidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param event QDragEnterEvent*
void q_tablewidget_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param event QDragEnterEvent*
void q_tablewidget_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QDragEnterEvent*)
void q_tablewidget_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param event QDragMoveEvent*
void q_tablewidget_drag_move_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param event QDragMoveEvent*
void q_tablewidget_qbase_drag_move_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QDragMoveEvent*)
void q_tablewidget_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param event QDragLeaveEvent*
void q_tablewidget_drag_leave_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param event QDragLeaveEvent*
void q_tablewidget_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QDragLeaveEvent*)
void q_tablewidget_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param event QFocusEvent*
void q_tablewidget_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param event QFocusEvent*
void q_tablewidget_qbase_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QFocusEvent*)
void q_tablewidget_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param event QFocusEvent*
void q_tablewidget_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param event QFocusEvent*
void q_tablewidget_qbase_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QFocusEvent*)
void q_tablewidget_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param event QKeyEvent*
void q_tablewidget_key_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param event QKeyEvent*
void q_tablewidget_qbase_key_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QKeyEvent*)
void q_tablewidget_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param event QResizeEvent*
void q_tablewidget_resize_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param event QResizeEvent*
void q_tablewidget_qbase_resize_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QResizeEvent*)
void q_tablewidget_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param event QInputMethodEvent*
void q_tablewidget_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param event QInputMethodEvent*
void q_tablewidget_qbase_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QInputMethodEvent*)
void q_tablewidget_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param object QObject*
/// @param event QEvent*
bool q_tablewidget_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param object QObject*
/// @param event QEvent*
bool q_tablewidget_qbase_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback bool fn(QTableWidget*, QObject*, QEvent*)
void q_tablewidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
QSize* q_tablewidget_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
QSize* q_tablewidget_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback QSize* fn()
void q_tablewidget_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
QSize* q_tablewidget_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
QSize* q_tablewidget_qbase_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback QSize* fn()
void q_tablewidget_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param viewport QWidget*
void q_tablewidget_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param viewport QWidget*
void q_tablewidget_qbase_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QWidget*)
void q_tablewidget_on_setup_viewport(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param param1 QWheelEvent*
void q_tablewidget_wheel_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param param1 QWheelEvent*
void q_tablewidget_qbase_wheel_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QWheelEvent*)
void q_tablewidget_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param param1 QContextMenuEvent*
void q_tablewidget_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param param1 QContextMenuEvent*
void q_tablewidget_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QContextMenuEvent*)
void q_tablewidget_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param param1 QEvent*
void q_tablewidget_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param param1 QEvent*
void q_tablewidget_qbase_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QEvent*)
void q_tablewidget_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param option QStyleOptionFrame*
void q_tablewidget_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param option QStyleOptionFrame*
void q_tablewidget_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QStyleOptionFrame*)
void q_tablewidget_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
int32_t q_tablewidget_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
int32_t q_tablewidget_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback int32_t fn()
void q_tablewidget_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param visible bool
void q_tablewidget_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param visible bool
void q_tablewidget_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, bool)
void q_tablewidget_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param param1 int
int32_t q_tablewidget_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param param1 int
int32_t q_tablewidget_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback int32_t fn(QTableWidget*, int)
void q_tablewidget_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
bool q_tablewidget_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
bool q_tablewidget_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback bool fn()
void q_tablewidget_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
QPaintEngine* q_tablewidget_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
QPaintEngine* q_tablewidget_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback QPaintEngine* fn()
void q_tablewidget_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param event QKeyEvent*
void q_tablewidget_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param event QKeyEvent*
void q_tablewidget_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QKeyEvent*)
void q_tablewidget_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param event QEnterEvent*
void q_tablewidget_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param event QEnterEvent*
void q_tablewidget_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QEnterEvent*)
void q_tablewidget_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param event QEvent*
void q_tablewidget_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param event QEvent*
void q_tablewidget_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QEvent*)
void q_tablewidget_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param event QMoveEvent*
void q_tablewidget_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param event QMoveEvent*
void q_tablewidget_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QMoveEvent*)
void q_tablewidget_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param event QCloseEvent*
void q_tablewidget_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param event QCloseEvent*
void q_tablewidget_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QCloseEvent*)
void q_tablewidget_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param event QTabletEvent*
void q_tablewidget_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param event QTabletEvent*
void q_tablewidget_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QTabletEvent*)
void q_tablewidget_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param event QActionEvent*
void q_tablewidget_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param event QActionEvent*
void q_tablewidget_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QActionEvent*)
void q_tablewidget_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param event QShowEvent*
void q_tablewidget_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param event QShowEvent*
void q_tablewidget_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QShowEvent*)
void q_tablewidget_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param event QHideEvent*
void q_tablewidget_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param event QHideEvent*
void q_tablewidget_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QHideEvent*)
void q_tablewidget_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_tablewidget_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_tablewidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback bool fn(QTableWidget*, const char*, void*, intptr_t*)
void q_tablewidget_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_tablewidget_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_tablewidget_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback int32_t fn(QTableWidget*, enum QPaintDevice__PaintDeviceMetric)
void q_tablewidget_on_metric(void* self, int32_t (*callback)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param painter QPainter*
void q_tablewidget_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param painter QPainter*
void q_tablewidget_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QPainter*)
void q_tablewidget_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param offset QPoint*
QPaintDevice* q_tablewidget_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param offset QPoint*
QPaintDevice* q_tablewidget_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback QPaintDevice* fn(QTableWidget*, QPoint*)
void q_tablewidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
QPainter* q_tablewidget_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
QPainter* q_tablewidget_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback QPainter* fn()
void q_tablewidget_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param event QChildEvent*
void q_tablewidget_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param event QChildEvent*
void q_tablewidget_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QChildEvent*)
void q_tablewidget_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param event QEvent*
void q_tablewidget_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param event QEvent*
void q_tablewidget_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QEvent*)
void q_tablewidget_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param signal QMetaMethod*
void q_tablewidget_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param signal QMetaMethod*
void q_tablewidget_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QMetaMethod*)
void q_tablewidget_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param signal QMetaMethod*
void q_tablewidget_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param signal QMetaMethod*
void q_tablewidget_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QMetaMethod*)
void q_tablewidget_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowMoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param row int
/// @param oldIndex int
/// @param newIndex int
void q_tablewidget_row_moved(void* self, int row, int oldIndex, int newIndex);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowMoved)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param row int
/// @param oldIndex int
/// @param newIndex int
void q_tablewidget_qbase_row_moved(void* self, int row, int oldIndex, int newIndex);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowMoved)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, int, int, int)
void q_tablewidget_on_row_moved(void* self, void (*callback)(void*, int, int, int));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnMoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param column int
/// @param oldIndex int
/// @param newIndex int
void q_tablewidget_column_moved(void* self, int column, int oldIndex, int newIndex);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnMoved)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param column int
/// @param oldIndex int
/// @param newIndex int
void q_tablewidget_qbase_column_moved(void* self, int column, int oldIndex, int newIndex);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnMoved)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, int, int, int)
void q_tablewidget_on_column_moved(void* self, void (*callback)(void*, int, int, int));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowResized)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param row int
/// @param oldHeight int
/// @param newHeight int
void q_tablewidget_row_resized(void* self, int row, int oldHeight, int newHeight);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowResized)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param row int
/// @param oldHeight int
/// @param newHeight int
void q_tablewidget_qbase_row_resized(void* self, int row, int oldHeight, int newHeight);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowResized)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, int, int, int)
void q_tablewidget_on_row_resized(void* self, void (*callback)(void*, int, int, int));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnResized)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param column int
/// @param oldWidth int
/// @param newWidth int
void q_tablewidget_column_resized(void* self, int column, int oldWidth, int newWidth);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnResized)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param column int
/// @param oldWidth int
/// @param newWidth int
void q_tablewidget_qbase_column_resized(void* self, int column, int oldWidth, int newWidth);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnResized)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, int, int, int)
void q_tablewidget_on_column_resized(void* self, void (*callback)(void*, int, int, int));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowCountChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param oldCount int
/// @param newCount int
void q_tablewidget_row_count_changed(void* self, int oldCount, int newCount);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowCountChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param oldCount int
/// @param newCount int
void q_tablewidget_qbase_row_count_changed(void* self, int oldCount, int newCount);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowCountChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, int, int)
void q_tablewidget_on_row_count_changed(void* self, void (*callback)(void*, int, int));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnCountChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param oldCount int
/// @param newCount int
void q_tablewidget_column_count_changed(void* self, int oldCount, int newCount);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnCountChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param oldCount int
/// @param newCount int
void q_tablewidget_qbase_column_count_changed(void* self, int oldCount, int newCount);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnCountChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, int, int)
void q_tablewidget_on_column_count_changed(void* self, void (*callback)(void*, int, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
///
/// @return enum QAbstractItemView__State
int64_t q_tablewidget_state(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
///
/// @return enum QAbstractItemView__State
int64_t q_tablewidget_qbase_state(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback int64_t fn()
void q_tablewidget_on_state(void* self, int64_t (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param state enum QAbstractItemView__State
void q_tablewidget_set_state(void* self, int64_t state);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param state enum QAbstractItemView__State
void q_tablewidget_qbase_set_state(void* self, int64_t state);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, enum QAbstractItemView__State)
void q_tablewidget_on_set_state(void* self, void (*callback)(void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
void q_tablewidget_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
void q_tablewidget_qbase_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn()
void q_tablewidget_on_schedule_delayed_items_layout(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
void q_tablewidget_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
void q_tablewidget_qbase_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn()
void q_tablewidget_on_execute_delayed_items_layout(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param region QRegion*
void q_tablewidget_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param region QRegion*
void q_tablewidget_qbase_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QRegion*)
void q_tablewidget_on_set_dirty_region(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param dx int
/// @param dy int
void q_tablewidget_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param dx int
/// @param dy int
void q_tablewidget_qbase_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, int, int)
void q_tablewidget_on_scroll_dirty_region(void* self, void (*callback)(void*, int, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
QPoint* q_tablewidget_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
QPoint* q_tablewidget_qbase_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback QPoint* fn()
void q_tablewidget_on_dirty_region_offset(void* self, QPoint* (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
void q_tablewidget_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
void q_tablewidget_qbase_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn()
void q_tablewidget_on_start_auto_scroll(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
void q_tablewidget_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
void q_tablewidget_qbase_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn()
void q_tablewidget_on_stop_auto_scroll(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
void q_tablewidget_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
void q_tablewidget_qbase_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn()
void q_tablewidget_on_do_auto_scroll(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
///
/// @return enum QAbstractItemView__DropIndicatorPosition
int64_t q_tablewidget_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
///
/// @return enum QAbstractItemView__DropIndicatorPosition
int64_t q_tablewidget_qbase_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback int64_t fn()
void q_tablewidget_on_drop_indicator_position(void* self, int64_t (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void q_tablewidget_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void q_tablewidget_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, int, int, int, int)
void q_tablewidget_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
QMargins* q_tablewidget_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
QMargins* q_tablewidget_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback QMargins* fn()
void q_tablewidget_on_viewport_margins(void* self, QMargins* (*callback)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param param1 QPainter*
void q_tablewidget_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param param1 QPainter*
void q_tablewidget_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, QPainter*)
void q_tablewidget_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
void q_tablewidget_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
void q_tablewidget_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn()
void q_tablewidget_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
void q_tablewidget_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
void q_tablewidget_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn()
void q_tablewidget_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
void q_tablewidget_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
void q_tablewidget_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback void fn()
void q_tablewidget_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
bool q_tablewidget_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
bool q_tablewidget_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback bool fn()
void q_tablewidget_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
bool q_tablewidget_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
bool q_tablewidget_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback bool fn()
void q_tablewidget_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
QObject* q_tablewidget_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
QObject* q_tablewidget_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback QObject* fn()
void q_tablewidget_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
int32_t q_tablewidget_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
int32_t q_tablewidget_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback int32_t fn()
void q_tablewidget_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param signal const char*
int32_t q_tablewidget_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param signal const char*
int32_t q_tablewidget_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback int32_t fn(QTableWidget*, const char*)
void q_tablewidget_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param signal QMetaMethod*
bool q_tablewidget_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param signal QMetaMethod*
bool q_tablewidget_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback bool fn(QTableWidget*, QMetaMethod*)
void q_tablewidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_tablewidget_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableWidget*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_tablewidget_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableWidget*
/// @param callback double fn(QTableWidget*, enum QPaintDevice__PaintDeviceMetric, enum QPaintDevice__PaintDeviceMetric)
void q_tablewidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int64_t, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTableWidget*
/// @param callback void fn(QTableWidget*, const char*)
void q_tablewidget_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#dtor.QTableWidget)
///
/// Delete this object from C++ memory.
///
/// @param self QTableWidget*
void q_tablewidget_delete(void* self);

/// https://doc.qt.io/qt-6/qtablewidget.html#types

typedef enum {
    QTABLEWIDGETITEM_ITEMTYPE_TYPE = 0,
    QTABLEWIDGETITEM_ITEMTYPE_USERTYPE = 1000
} QTableWidgetItem__ItemType;

#endif
