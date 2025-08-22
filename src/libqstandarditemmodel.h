#pragma once
#ifndef SRCQT6C_LIBQSTANDARDITEMMODEL_H
#define SRCQT6C_LIBQSTANDARDITEMMODEL_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qstandarditem.html

/// q_standarditem_new constructs a new QStandardItem object.
///
QStandardItem* q_standarditem_new();

/// q_standarditem_new2 constructs a new QStandardItem object.
///
/// @param text const char*
QStandardItem* q_standarditem_new2(const char* text);

/// q_standarditem_new3 constructs a new QStandardItem object.
///
/// @param icon QIcon*
/// @param text const char*
QStandardItem* q_standarditem_new3(void* icon, const char* text);

/// q_standarditem_new4 constructs a new QStandardItem object.
///
/// @param rows int
QStandardItem* q_standarditem_new4(int rows);

/// q_standarditem_new5 constructs a new QStandardItem object.
///
/// @param rows int
/// @param columns int
QStandardItem* q_standarditem_new5(int rows, int columns);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#data)
///
/// @param self QStandardItem*
/// @param role int
QVariant* q_standarditem_data(void* self, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#data)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItem*
/// @param callback QVariant* fn(QStandardItem*, int)
void q_standarditem_on_data(void* self, QVariant* (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#data)
///
/// Base class method implementation
///
/// @param self QStandardItem*
/// @param role int
QVariant* q_standarditem_qbase_data(void* self, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#multiData)
///
/// @param self QStandardItem*
/// @param roleDataSpan QModelRoleDataSpan*
void q_standarditem_multi_data(void* self, void* roleDataSpan);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#multiData)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItem*
/// @param callback void fn(QStandardItem*, QModelRoleDataSpan*)
void q_standarditem_on_multi_data(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#multiData)
///
/// Base class method implementation
///
/// @param self QStandardItem*
/// @param roleDataSpan QModelRoleDataSpan*
void q_standarditem_qbase_multi_data(void* self, void* roleDataSpan);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setData)
///
/// @param self QStandardItem*
/// @param value QVariant*
/// @param role int
void q_standarditem_set_data(void* self, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setData)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItem*
/// @param callback void fn(QStandardItem*, QVariant*, int)
void q_standarditem_on_set_data(void* self, void (*callback)(void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setData)
///
/// Base class method implementation
///
/// @param self QStandardItem*
/// @param value QVariant*
/// @param role int
void q_standarditem_qbase_set_data(void* self, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#clearData)
///
/// @param self QStandardItem*
void q_standarditem_clear_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStandardItem*
const char* q_standarditem_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setText)
///
/// @param self QStandardItem*
/// @param text const char*
void q_standarditem_set_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#icon)
///
/// @param self QStandardItem*
QIcon* q_standarditem_icon(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setIcon)
///
/// @param self QStandardItem*
/// @param icon QIcon*
void q_standarditem_set_icon(void* self, void* icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStandardItem*
const char* q_standarditem_tool_tip(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setToolTip)
///
/// @param self QStandardItem*
/// @param toolTip const char*
void q_standarditem_set_tool_tip(void* self, const char* toolTip);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStandardItem*
const char* q_standarditem_status_tip(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setStatusTip)
///
/// @param self QStandardItem*
/// @param statusTip const char*
void q_standarditem_set_status_tip(void* self, const char* statusTip);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStandardItem*
const char* q_standarditem_whats_this(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setWhatsThis)
///
/// @param self QStandardItem*
/// @param whatsThis const char*
void q_standarditem_set_whats_this(void* self, const char* whatsThis);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#sizeHint)
///
/// @param self QStandardItem*
QSize* q_standarditem_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setSizeHint)
///
/// @param self QStandardItem*
/// @param sizeHint QSize*
void q_standarditem_set_size_hint(void* self, void* sizeHint);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#font)
///
/// @param self QStandardItem*
QFont* q_standarditem_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setFont)
///
/// @param self QStandardItem*
/// @param font QFont*
void q_standarditem_set_font(void* self, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#textAlignment)
///
/// @param self QStandardItem*
///
/// @return flag of enum Qt__AlignmentFlag
int64_t q_standarditem_text_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setTextAlignment)
///
/// @param self QStandardItem*
/// @param textAlignment flag of enum Qt__AlignmentFlag
void q_standarditem_set_text_alignment(void* self, int64_t textAlignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#background)
///
/// @param self QStandardItem*
QBrush* q_standarditem_background(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setBackground)
///
/// @param self QStandardItem*
/// @param brush QBrush*
void q_standarditem_set_background(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#foreground)
///
/// @param self QStandardItem*
QBrush* q_standarditem_foreground(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setForeground)
///
/// @param self QStandardItem*
/// @param brush QBrush*
void q_standarditem_set_foreground(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#checkState)
///
/// @param self QStandardItem*
///
/// @return enum Qt__CheckState
int32_t q_standarditem_check_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setCheckState)
///
/// @param self QStandardItem*
/// @param checkState enum Qt__CheckState
void q_standarditem_set_check_state(void* self, int32_t checkState);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#accessibleText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStandardItem*
const char* q_standarditem_accessible_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setAccessibleText)
///
/// @param self QStandardItem*
/// @param accessibleText const char*
void q_standarditem_set_accessible_text(void* self, const char* accessibleText);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStandardItem*
const char* q_standarditem_accessible_description(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setAccessibleDescription)
///
/// @param self QStandardItem*
/// @param accessibleDescription const char*
void q_standarditem_set_accessible_description(void* self, const char* accessibleDescription);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#flags)
///
/// @param self QStandardItem*
///
/// @return flag of enum Qt__ItemFlag
int64_t q_standarditem_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setFlags)
///
/// @param self QStandardItem*
/// @param flags flag of enum Qt__ItemFlag
void q_standarditem_set_flags(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#isEnabled)
///
/// @param self QStandardItem*
bool q_standarditem_is_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setEnabled)
///
/// @param self QStandardItem*
/// @param enabled bool
void q_standarditem_set_enabled(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#isEditable)
///
/// @param self QStandardItem*
bool q_standarditem_is_editable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setEditable)
///
/// @param self QStandardItem*
/// @param editable bool
void q_standarditem_set_editable(void* self, bool editable);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#isSelectable)
///
/// @param self QStandardItem*
bool q_standarditem_is_selectable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setSelectable)
///
/// @param self QStandardItem*
/// @param selectable bool
void q_standarditem_set_selectable(void* self, bool selectable);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#isCheckable)
///
/// @param self QStandardItem*
bool q_standarditem_is_checkable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setCheckable)
///
/// @param self QStandardItem*
/// @param checkable bool
void q_standarditem_set_checkable(void* self, bool checkable);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#isAutoTristate)
///
/// @param self QStandardItem*
bool q_standarditem_is_auto_tristate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setAutoTristate)
///
/// @param self QStandardItem*
/// @param tristate bool
void q_standarditem_set_auto_tristate(void* self, bool tristate);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#isUserTristate)
///
/// @param self QStandardItem*
bool q_standarditem_is_user_tristate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setUserTristate)
///
/// @param self QStandardItem*
/// @param tristate bool
void q_standarditem_set_user_tristate(void* self, bool tristate);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#isDragEnabled)
///
/// @param self QStandardItem*
bool q_standarditem_is_drag_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setDragEnabled)
///
/// @param self QStandardItem*
/// @param dragEnabled bool
void q_standarditem_set_drag_enabled(void* self, bool dragEnabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#isDropEnabled)
///
/// @param self QStandardItem*
bool q_standarditem_is_drop_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setDropEnabled)
///
/// @param self QStandardItem*
/// @param dropEnabled bool
void q_standarditem_set_drop_enabled(void* self, bool dropEnabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#parent)
///
/// @param self QStandardItem*
QStandardItem* q_standarditem_parent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#row)
///
/// @param self QStandardItem*
int32_t q_standarditem_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#column)
///
/// @param self QStandardItem*
int32_t q_standarditem_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#index)
///
/// @param self QStandardItem*
QModelIndex* q_standarditem_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#model)
///
/// @param self QStandardItem*
QStandardItemModel* q_standarditem_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#rowCount)
///
/// @param self QStandardItem*
int32_t q_standarditem_row_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setRowCount)
///
/// @param self QStandardItem*
/// @param rows int
void q_standarditem_set_row_count(void* self, int rows);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#columnCount)
///
/// @param self QStandardItem*
int32_t q_standarditem_column_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setColumnCount)
///
/// @param self QStandardItem*
/// @param columns int
void q_standarditem_set_column_count(void* self, int columns);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#hasChildren)
///
/// @param self QStandardItem*
bool q_standarditem_has_children(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#child)
///
/// @param self QStandardItem*
/// @param row int
QStandardItem* q_standarditem_child(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setChild)
///
/// @param self QStandardItem*
/// @param row int
/// @param column int
/// @param item QStandardItem*
void q_standarditem_set_child(void* self, int row, int column, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setChild)
///
/// @param self QStandardItem*
/// @param row int
/// @param item QStandardItem*
void q_standarditem_set_child2(void* self, int row, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#insertRow)
///
/// @param self QStandardItem*
/// @param row int
/// @param items libqt_list /* of QStandardItem* */
void q_standarditem_insert_row(void* self, int row, libqt_list items);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#insertColumn)
///
/// @param self QStandardItem*
/// @param column int
/// @param items libqt_list /* of QStandardItem* */
void q_standarditem_insert_column(void* self, int column, libqt_list items);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#insertRows)
///
/// @param self QStandardItem*
/// @param row int
/// @param items libqt_list /* of QStandardItem* */
void q_standarditem_insert_rows(void* self, int row, libqt_list items);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#insertRows)
///
/// @param self QStandardItem*
/// @param row int
/// @param count int
void q_standarditem_insert_rows2(void* self, int row, int count);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#insertColumns)
///
/// @param self QStandardItem*
/// @param column int
/// @param count int
void q_standarditem_insert_columns(void* self, int column, int count);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#removeRow)
///
/// @param self QStandardItem*
/// @param row int
void q_standarditem_remove_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#removeColumn)
///
/// @param self QStandardItem*
/// @param column int
void q_standarditem_remove_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#removeRows)
///
/// @param self QStandardItem*
/// @param row int
/// @param count int
void q_standarditem_remove_rows(void* self, int row, int count);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#removeColumns)
///
/// @param self QStandardItem*
/// @param column int
/// @param count int
void q_standarditem_remove_columns(void* self, int column, int count);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#appendRow)
///
/// @param self QStandardItem*
/// @param items libqt_list /* of QStandardItem* */
void q_standarditem_append_row(void* self, libqt_list items);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#appendRows)
///
/// @param self QStandardItem*
/// @param items libqt_list /* of QStandardItem* */
void q_standarditem_append_rows(void* self, libqt_list items);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#appendColumn)
///
/// @param self QStandardItem*
/// @param items libqt_list /* of QStandardItem* */
void q_standarditem_append_column(void* self, libqt_list items);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#insertRow)
///
/// @param self QStandardItem*
/// @param row int
/// @param item QStandardItem*
void q_standarditem_insert_row2(void* self, int row, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#appendRow)
///
/// @param self QStandardItem*
/// @param item QStandardItem*
void q_standarditem_append_row2(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#takeChild)
///
/// @param self QStandardItem*
/// @param row int
QStandardItem* q_standarditem_take_child(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#takeRow)
///
/// @param self QStandardItem*
/// @param row int
libqt_list /* of QStandardItem* */ q_standarditem_take_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#takeColumn)
///
/// @param self QStandardItem*
/// @param column int
libqt_list /* of QStandardItem* */ q_standarditem_take_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#sortChildren)
///
/// @param self QStandardItem*
/// @param column int
void q_standarditem_sort_children(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#clone)
///
/// @param self QStandardItem*
QStandardItem* q_standarditem_clone(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#clone)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItem*
/// @param callback QStandardItem* fn()
void q_standarditem_on_clone(void* self, QStandardItem* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#clone)
///
/// Base class method implementation
///
/// @param self QStandardItem*
QStandardItem* q_standarditem_qbase_clone(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#type)
///
/// @param self QStandardItem*
int32_t q_standarditem_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#type)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItem*
/// @param callback int32_t fn()
void q_standarditem_on_type(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#type)
///
/// Base class method implementation
///
/// @param self QStandardItem*
int32_t q_standarditem_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#read)
///
/// @param self QStandardItem*
/// @param in QDataStream*
void q_standarditem_read(void* self, void* in);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#read)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItem*
/// @param callback void fn(QStandardItem*, QDataStream*)
void q_standarditem_on_read(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#read)
///
/// Base class method implementation
///
/// @param self QStandardItem*
/// @param in QDataStream*
void q_standarditem_qbase_read(void* self, void* in);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#write)
///
/// @param self QStandardItem*
/// @param out QDataStream*
void q_standarditem_write(void* self, void* out);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#write)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItem*
/// @param callback void fn(QStandardItem*, QDataStream*)
void q_standarditem_on_write(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#write)
///
/// Base class method implementation
///
/// @param self QStandardItem*
/// @param out QDataStream*
void q_standarditem_qbase_write(void* self, void* out);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#operator-lt)
///
/// @param self QStandardItem*
/// @param other QStandardItem*
bool q_standarditem_operator_lesser(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#operator-lt)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItem*
/// @param callback bool fn(QStandardItem*, QStandardItem*)
void q_standarditem_on_operator_lesser(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#operator-lt)
///
/// Base class method implementation
///
/// @param self QStandardItem*
/// @param other QStandardItem*
bool q_standarditem_qbase_operator_lesser(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#operator-eq)
///
/// @param self QStandardItem*
/// @param other QStandardItem*
void q_standarditem_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#operator-eq)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItem*
/// @param callback void fn(QStandardItem*, QStandardItem*)
void q_standarditem_on_operator_assign(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#operator-eq)
///
/// Base class method implementation
///
/// @param self QStandardItem*
/// @param other QStandardItem*
void q_standarditem_qbase_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#emitDataChanged)
///
/// @param self QStandardItem*
void q_standarditem_emit_data_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#emitDataChanged)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItem*
/// @param callback void fn()
void q_standarditem_on_emit_data_changed(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#emitDataChanged)
///
/// Base class method implementation
///
/// @param self QStandardItem*
void q_standarditem_qbase_emit_data_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#child)
///
/// @param self QStandardItem*
/// @param row int
/// @param column int
QStandardItem* q_standarditem_child2(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#takeChild)
///
/// @param self QStandardItem*
/// @param row int
/// @param column int
QStandardItem* q_standarditem_take_child2(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#sortChildren)
///
/// @param self QStandardItem*
/// @param column int
/// @param order enum Qt__SortOrder
void q_standarditem_sort_children2(void* self, int column, int32_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#dtor.QStandardItem)
///
/// Delete this object from C++ memory.
///
/// @param self QStandardItem*
void q_standarditem_delete(void* self);

/// https://doc.qt.io/qt-6/qstandarditemmodel.html

/// q_standarditemmodel_new constructs a new QStandardItemModel object.
///
QStandardItemModel* q_standarditemmodel_new();

/// q_standarditemmodel_new2 constructs a new QStandardItemModel object.
///
/// @param rows int
/// @param columns int
QStandardItemModel* q_standarditemmodel_new2(int rows, int columns);

/// q_standarditemmodel_new3 constructs a new QStandardItemModel object.
///
/// @param parent QObject*
QStandardItemModel* q_standarditemmodel_new3(void* parent);

/// q_standarditemmodel_new4 constructs a new QStandardItemModel object.
///
/// @param rows int
/// @param columns int
/// @param parent QObject*
QStandardItemModel* q_standarditemmodel_new4(int rows, int columns, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QStandardItemModel*
const QMetaObject* q_standarditemmodel_meta_object(void* self);

/// @param self QStandardItemModel*
/// @param param1 const char*
void* q_standarditemmodel_metacast(void* self, const char* param1);

/// @param self QStandardItemModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_standarditemmodel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QStandardItemModel*
/// @param callback int32_t fn(QStandardItemModel*, enum QMetaObject__Call, int, void*)
void q_standarditemmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QStandardItemModel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_standarditemmodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_standarditemmodel_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItemRoleNames)
///
/// @param self QStandardItemModel*
/// @param roleNames libqt_map /* of int to char* */
void q_standarditemmodel_set_item_role_names(void* self, libqt_map /* of int to char* */ roleNames);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#roleNames)
///
/// @param self QStandardItemModel*
libqt_map /* of int to char* */ q_standarditemmodel_role_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#roleNames)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItemModel*
/// @param callback libqt_map /* of int to char* */ fn()
void q_standarditemmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#roleNames)
///
/// Base class method implementation
///
/// @param self QStandardItemModel*
libqt_map /* of int to char* */ q_standarditemmodel_qbase_role_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#index)
///
/// @param self QStandardItemModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
QModelIndex* q_standarditemmodel_index(void* self, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#index)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItemModel*
/// @param callback QModelIndex* fn(QStandardItemModel*, int, int, QModelIndex*)
void q_standarditemmodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#index)
///
/// Base class method implementation
///
/// @param self QStandardItemModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
QModelIndex* q_standarditemmodel_qbase_index(void* self, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#parent)
///
/// @param self QStandardItemModel*
/// @param child QModelIndex*
QModelIndex* q_standarditemmodel_parent(void* self, void* child);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#parent)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItemModel*
/// @param callback QModelIndex* fn(QStandardItemModel*, QModelIndex*)
void q_standarditemmodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#parent)
///
/// Base class method implementation
///
/// @param self QStandardItemModel*
/// @param child QModelIndex*
QModelIndex* q_standarditemmodel_qbase_parent(void* self, void* child);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#rowCount)
///
/// @param self QStandardItemModel*
/// @param parent QModelIndex*
int32_t q_standarditemmodel_row_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#rowCount)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItemModel*
/// @param callback int32_t fn(QStandardItemModel*, QModelIndex*)
void q_standarditemmodel_on_row_count(void* self, int32_t (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#rowCount)
///
/// Base class method implementation
///
/// @param self QStandardItemModel*
/// @param parent QModelIndex*
int32_t q_standarditemmodel_qbase_row_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#columnCount)
///
/// @param self QStandardItemModel*
/// @param parent QModelIndex*
int32_t q_standarditemmodel_column_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#columnCount)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItemModel*
/// @param callback int32_t fn(QStandardItemModel*, QModelIndex*)
void q_standarditemmodel_on_column_count(void* self, int32_t (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#columnCount)
///
/// Base class method implementation
///
/// @param self QStandardItemModel*
/// @param parent QModelIndex*
int32_t q_standarditemmodel_qbase_column_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#hasChildren)
///
/// @param self QStandardItemModel*
/// @param parent QModelIndex*
bool q_standarditemmodel_has_children(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#hasChildren)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItemModel*
/// @param callback bool fn(QStandardItemModel*, QModelIndex*)
void q_standarditemmodel_on_has_children(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#hasChildren)
///
/// Base class method implementation
///
/// @param self QStandardItemModel*
/// @param parent QModelIndex*
bool q_standarditemmodel_qbase_has_children(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#data)
///
/// @param self QStandardItemModel*
/// @param index QModelIndex*
/// @param role int
QVariant* q_standarditemmodel_data(void* self, void* index, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#data)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItemModel*
/// @param callback QVariant* fn(QStandardItemModel*, QModelIndex*, int)
void q_standarditemmodel_on_data(void* self, QVariant* (*callback)(void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#data)
///
/// Base class method implementation
///
/// @param self QStandardItemModel*
/// @param index QModelIndex*
/// @param role int
QVariant* q_standarditemmodel_qbase_data(void* self, void* index, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#multiData)
///
/// @param self QStandardItemModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
void q_standarditemmodel_multi_data(void* self, void* index, void* roleDataSpan);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#multiData)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, QModelIndex*, QModelRoleDataSpan*)
void q_standarditemmodel_on_multi_data(void* self, void (*callback)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#multiData)
///
/// Base class method implementation
///
/// @param self QStandardItemModel*
/// @param index QModelIndex*
/// @param roleDataSpan QModelRoleDataSpan*
void q_standarditemmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setData)
///
/// @param self QStandardItemModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
bool q_standarditemmodel_set_data(void* self, void* index, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setData)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItemModel*
/// @param callback bool fn(QStandardItemModel*, QModelIndex*, QVariant*, int)
void q_standarditemmodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setData)
///
/// Base class method implementation
///
/// @param self QStandardItemModel*
/// @param index QModelIndex*
/// @param value QVariant*
/// @param role int
bool q_standarditemmodel_qbase_set_data(void* self, void* index, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#clearItemData)
///
/// @param self QStandardItemModel*
/// @param index QModelIndex*
bool q_standarditemmodel_clear_item_data(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#clearItemData)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItemModel*
/// @param callback bool fn(QStandardItemModel*, QModelIndex*)
void q_standarditemmodel_on_clear_item_data(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#clearItemData)
///
/// Base class method implementation
///
/// @param self QStandardItemModel*
/// @param index QModelIndex*
bool q_standarditemmodel_qbase_clear_item_data(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#headerData)
///
/// @param self QStandardItemModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
QVariant* q_standarditemmodel_header_data(void* self, int section, int32_t orientation, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#headerData)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItemModel*
/// @param callback QVariant* fn(QStandardItemModel*, int, enum Qt__Orientation, int)
void q_standarditemmodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#headerData)
///
/// Base class method implementation
///
/// @param self QStandardItemModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param role int
QVariant* q_standarditemmodel_qbase_header_data(void* self, int section, int32_t orientation, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setHeaderData)
///
/// @param self QStandardItemModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
bool q_standarditemmodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setHeaderData)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItemModel*
/// @param callback bool fn(QStandardItemModel*, int, enum Qt__Orientation, QVariant*, int)
void q_standarditemmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setHeaderData)
///
/// Base class method implementation
///
/// @param self QStandardItemModel*
/// @param section int
/// @param orientation enum Qt__Orientation
/// @param value QVariant*
/// @param role int
bool q_standarditemmodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRows)
///
/// @param self QStandardItemModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool q_standarditemmodel_insert_rows(void* self, int row, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRows)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItemModel*
/// @param callback bool fn(QStandardItemModel*, int, int, QModelIndex*)
void q_standarditemmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRows)
///
/// Base class method implementation
///
/// @param self QStandardItemModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool q_standarditemmodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertColumns)
///
/// @param self QStandardItemModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool q_standarditemmodel_insert_columns(void* self, int column, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertColumns)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItemModel*
/// @param callback bool fn(QStandardItemModel*, int, int, QModelIndex*)
void q_standarditemmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertColumns)
///
/// Base class method implementation
///
/// @param self QStandardItemModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool q_standarditemmodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#removeRows)
///
/// @param self QStandardItemModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool q_standarditemmodel_remove_rows(void* self, int row, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#removeRows)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItemModel*
/// @param callback bool fn(QStandardItemModel*, int, int, QModelIndex*)
void q_standarditemmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#removeRows)
///
/// Base class method implementation
///
/// @param self QStandardItemModel*
/// @param row int
/// @param count int
/// @param parent QModelIndex*
bool q_standarditemmodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#removeColumns)
///
/// @param self QStandardItemModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool q_standarditemmodel_remove_columns(void* self, int column, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#removeColumns)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItemModel*
/// @param callback bool fn(QStandardItemModel*, int, int, QModelIndex*)
void q_standarditemmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#removeColumns)
///
/// Base class method implementation
///
/// @param self QStandardItemModel*
/// @param column int
/// @param count int
/// @param parent QModelIndex*
bool q_standarditemmodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#flags)
///
/// @param self QStandardItemModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
int64_t q_standarditemmodel_flags(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#flags)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItemModel*
/// @param callback int64_t fn(QStandardItemModel*, QModelIndex*)
void q_standarditemmodel_on_flags(void* self, int64_t (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#flags)
///
/// Base class method implementation
///
/// @param self QStandardItemModel*
/// @param index QModelIndex*
///
/// @return flag of enum Qt__ItemFlag
int64_t q_standarditemmodel_qbase_flags(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#supportedDropActions)
///
/// @param self QStandardItemModel*
///
/// @return flag of enum Qt__DropAction
int64_t q_standarditemmodel_supported_drop_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#supportedDropActions)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItemModel*
/// @param callback int64_t fn()
void q_standarditemmodel_on_supported_drop_actions(void* self, int64_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#supportedDropActions)
///
/// Base class method implementation
///
/// @param self QStandardItemModel*
///
/// @return flag of enum Qt__DropAction
int64_t q_standarditemmodel_qbase_supported_drop_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemData)
///
/// @param self QStandardItemModel*
/// @param index QModelIndex*
libqt_map /* of int to QVariant* */ q_standarditemmodel_item_data(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemData)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItemModel*
/// @param callback libqt_map /* of int to QVariant* */ fn(QStandardItemModel*, QModelIndex*)
void q_standarditemmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemData)
///
/// Base class method implementation
///
/// @param self QStandardItemModel*
/// @param index QModelIndex*
libqt_map /* of int to QVariant* */ q_standarditemmodel_qbase_item_data(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItemData)
///
/// @param self QStandardItemModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
bool q_standarditemmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItemData)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItemModel*
/// @param callback bool fn(QStandardItemModel*, QModelIndex*, libqt_map /* of int to QVariant* */)
void q_standarditemmodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */));

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItemData)
///
/// Base class method implementation
///
/// @param self QStandardItemModel*
/// @param index QModelIndex*
/// @param roles libqt_map /* of int to QVariant* */
bool q_standarditemmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#clear)
///
/// @param self QStandardItemModel*
void q_standarditemmodel_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#sort)
///
/// @param self QStandardItemModel*
/// @param column int
/// @param order enum Qt__SortOrder
void q_standarditemmodel_sort(void* self, int column, int32_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#sort)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, int, enum Qt__SortOrder)
void q_standarditemmodel_on_sort(void* self, void (*callback)(void*, int, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#sort)
///
/// Base class method implementation
///
/// @param self QStandardItemModel*
/// @param column int
/// @param order enum Qt__SortOrder
void q_standarditemmodel_qbase_sort(void* self, int column, int32_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemFromIndex)
///
/// @param self QStandardItemModel*
/// @param index QModelIndex*
QStandardItem* q_standarditemmodel_item_from_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#indexFromItem)
///
/// @param self QStandardItemModel*
/// @param item QStandardItem*
QModelIndex* q_standarditemmodel_index_from_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#item)
///
/// @param self QStandardItemModel*
/// @param row int
QStandardItem* q_standarditemmodel_item(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItem)
///
/// @param self QStandardItemModel*
/// @param row int
/// @param column int
/// @param item QStandardItem*
void q_standarditemmodel_set_item(void* self, int row, int column, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItem)
///
/// @param self QStandardItemModel*
/// @param row int
/// @param item QStandardItem*
void q_standarditemmodel_set_item2(void* self, int row, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#invisibleRootItem)
///
/// @param self QStandardItemModel*
QStandardItem* q_standarditemmodel_invisible_root_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#horizontalHeaderItem)
///
/// @param self QStandardItemModel*
/// @param column int
QStandardItem* q_standarditemmodel_horizontal_header_item(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setHorizontalHeaderItem)
///
/// @param self QStandardItemModel*
/// @param column int
/// @param item QStandardItem*
void q_standarditemmodel_set_horizontal_header_item(void* self, int column, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#verticalHeaderItem)
///
/// @param self QStandardItemModel*
/// @param row int
QStandardItem* q_standarditemmodel_vertical_header_item(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setVerticalHeaderItem)
///
/// @param self QStandardItemModel*
/// @param row int
/// @param item QStandardItem*
void q_standarditemmodel_set_vertical_header_item(void* self, int row, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setHorizontalHeaderLabels)
///
/// @param self QStandardItemModel*
/// @param labels const char**
void q_standarditemmodel_set_horizontal_header_labels(void* self, const char* labels[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setVerticalHeaderLabels)
///
/// @param self QStandardItemModel*
/// @param labels const char**
void q_standarditemmodel_set_vertical_header_labels(void* self, const char* labels[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setRowCount)
///
/// @param self QStandardItemModel*
/// @param rows int
void q_standarditemmodel_set_row_count(void* self, int rows);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setColumnCount)
///
/// @param self QStandardItemModel*
/// @param columns int
void q_standarditemmodel_set_column_count(void* self, int columns);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#appendRow)
///
/// @param self QStandardItemModel*
/// @param items libqt_list /* of QStandardItem* */
void q_standarditemmodel_append_row(void* self, libqt_list items);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#appendColumn)
///
/// @param self QStandardItemModel*
/// @param items libqt_list /* of QStandardItem* */
void q_standarditemmodel_append_column(void* self, libqt_list items);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#appendRow)
///
/// @param self QStandardItemModel*
/// @param item QStandardItem*
void q_standarditemmodel_append_row2(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRow)
///
/// @param self QStandardItemModel*
/// @param row int
/// @param items libqt_list /* of QStandardItem* */
void q_standarditemmodel_insert_row(void* self, int row, libqt_list items);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertColumn)
///
/// @param self QStandardItemModel*
/// @param column int
/// @param items libqt_list /* of QStandardItem* */
void q_standarditemmodel_insert_column(void* self, int column, libqt_list items);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRow)
///
/// @param self QStandardItemModel*
/// @param row int
/// @param item QStandardItem*
void q_standarditemmodel_insert_row2(void* self, int row, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRow)
///
/// @param self QStandardItemModel*
/// @param row int
bool q_standarditemmodel_insert_row3(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertColumn)
///
/// @param self QStandardItemModel*
/// @param column int
bool q_standarditemmodel_insert_column2(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeItem)
///
/// @param self QStandardItemModel*
/// @param row int
QStandardItem* q_standarditemmodel_take_item(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeRow)
///
/// @param self QStandardItemModel*
/// @param row int
libqt_list /* of QStandardItem* */ q_standarditemmodel_take_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeColumn)
///
/// @param self QStandardItemModel*
/// @param column int
libqt_list /* of QStandardItem* */ q_standarditemmodel_take_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeHorizontalHeaderItem)
///
/// @param self QStandardItemModel*
/// @param column int
QStandardItem* q_standarditemmodel_take_horizontal_header_item(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeVerticalHeaderItem)
///
/// @param self QStandardItemModel*
/// @param row int
QStandardItem* q_standarditemmodel_take_vertical_header_item(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemPrototype)
///
/// @param self QStandardItemModel*
const QStandardItem* q_standarditemmodel_item_prototype(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItemPrototype)
///
/// @param self QStandardItemModel*
/// @param item QStandardItem*
void q_standarditemmodel_set_item_prototype(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#findItems)
///
/// @param self QStandardItemModel*
/// @param text const char*
libqt_list /* of QStandardItem* */ q_standarditemmodel_find_items(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#sortRole)
///
/// @param self QStandardItemModel*
int32_t q_standarditemmodel_sort_role(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setSortRole)
///
/// @param self QStandardItemModel*
/// @param role int
void q_standarditemmodel_set_sort_role(void* self, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#mimeTypes)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStandardItemModel*
const char** q_standarditemmodel_mime_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#mimeTypes)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItemModel*
/// @param callback const char** fn()
void q_standarditemmodel_on_mime_types(void* self, const char** (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#mimeTypes)
///
/// Base class method implementation
///
/// @param self QStandardItemModel*
const char** q_standarditemmodel_qbase_mime_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#mimeData)
///
/// @param self QStandardItemModel*
/// @param indexes libqt_list /* of QModelIndex* */
QMimeData* q_standarditemmodel_mime_data(void* self, libqt_list indexes);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#mimeData)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItemModel*
/// @param callback QMimeData* fn(QStandardItemModel*, libqt_list /* of QModelIndex* */)
void q_standarditemmodel_on_mime_data(void* self, QMimeData* (*callback)(void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#mimeData)
///
/// Base class method implementation
///
/// @param self QStandardItemModel*
/// @param indexes libqt_list /* of QModelIndex* */
QMimeData* q_standarditemmodel_qbase_mime_data(void* self, libqt_list indexes);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#dropMimeData)
///
/// @param self QStandardItemModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_standarditemmodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#dropMimeData)
///
/// Allows for overriding the related default method
///
/// @param self QStandardItemModel*
/// @param callback bool fn(QStandardItemModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*)
void q_standarditemmodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#dropMimeData)
///
/// Base class method implementation
///
/// @param self QStandardItemModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_standarditemmodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemChanged)
///
/// @param self QStandardItemModel*
/// @param item QStandardItem*
void q_standarditemmodel_item_changed(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemChanged)
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, QStandardItem*)
void q_standarditemmodel_on_item_changed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_standarditemmodel_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_standarditemmodel_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#item)
///
/// @param self QStandardItemModel*
/// @param row int
/// @param column int
QStandardItem* q_standarditemmodel_item2(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRow)
///
/// @param self QStandardItemModel*
/// @param row int
/// @param parent QModelIndex*
bool q_standarditemmodel_insert_row22(void* self, int row, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertColumn)
///
/// @param self QStandardItemModel*
/// @param column int
/// @param parent QModelIndex*
bool q_standarditemmodel_insert_column22(void* self, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeItem)
///
/// @param self QStandardItemModel*
/// @param row int
/// @param column int
QStandardItem* q_standarditemmodel_take_item2(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#findItems)
///
/// @param self QStandardItemModel*
/// @param text const char*
/// @param flags flag of enum Qt__MatchFlag
libqt_list /* of QStandardItem* */ q_standarditemmodel_find_items2(void* self, const char* text, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#findItems)
///
/// @param self QStandardItemModel*
/// @param text const char*
/// @param flags flag of enum Qt__MatchFlag
/// @param column int
libqt_list /* of QStandardItem* */ q_standarditemmodel_find_items3(void* self, const char* text, int64_t flags, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self QStandardItemModel*
/// @param row int
/// @param column int
bool q_standarditemmodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QStandardItemModel*
/// @param row int
bool q_standarditemmodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QStandardItemModel*
/// @param column int
bool q_standarditemmodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// @param self QStandardItemModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_standarditemmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// @param self QStandardItemModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_standarditemmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self QStandardItemModel*
/// @param index QModelIndex*
bool q_standarditemmodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QStandardItemModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
void q_standarditemmodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, QModelIndex*, QModelIndex*)
void q_standarditemmodel_on_data_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QStandardItemModel*
/// @param orientation enum Qt__Orientation
/// @param first int
/// @param last int
void q_standarditemmodel_header_data_changed(void* self, int32_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, enum Qt__Orientation, int, int)
void q_standarditemmodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QStandardItemModel*
void q_standarditemmodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*)
void q_standarditemmodel_on_layout_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QStandardItemModel*
void q_standarditemmodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*)
void q_standarditemmodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// @param self QStandardItemModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_standarditemmodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// @param self QStandardItemModel*
/// @param row int
/// @param parent QModelIndex*
bool q_standarditemmodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// @param self QStandardItemModel*
/// @param column int
/// @param parent QModelIndex*
bool q_standarditemmodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// @param self QStandardItemModel*
/// @param index QModelIndex*
/// @param options flag of enum QAbstractItemModel__CheckIndexOption
bool q_standarditemmodel_check_index2(void* self, void* index, int64_t options);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QStandardItemModel*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list /* of int */
void q_standarditemmodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, QModelIndex*, QModelIndex*, int*)
void q_standarditemmodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, int*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QStandardItemModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
void q_standarditemmodel_layout_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, libqt_list /* of QPersistentModelIndex* */)
void q_standarditemmodel_on_layout_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QStandardItemModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
void q_standarditemmodel_layout_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, libqt_list /* of QPersistentModelIndex* */, enum QAbstractItemModel__LayoutChangeHint)
void q_standarditemmodel_on_layout_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QStandardItemModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
void q_standarditemmodel_layout_about_to_be_changed1(void* self, libqt_list parents);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, libqt_list /* of QPersistentModelIndex* */)
void q_standarditemmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QStandardItemModel*
/// @param parents libqt_list /* of QPersistentModelIndex* */
/// @param hint enum QAbstractItemModel__LayoutChangeHint
void q_standarditemmodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, libqt_list /* of QPersistentModelIndex* */, enum QAbstractItemModel__LayoutChangeHint)
void q_standarditemmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, libqt_list, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStandardItemModel*
const char* q_standarditemmodel_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QStandardItemModel*
/// @param name char*
void q_standarditemmodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QStandardItemModel*
bool q_standarditemmodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QStandardItemModel*
bool q_standarditemmodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QStandardItemModel*
bool q_standarditemmodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QStandardItemModel*
bool q_standarditemmodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QStandardItemModel*
/// @param b bool
bool q_standarditemmodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QStandardItemModel*
QThread* q_standarditemmodel_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QStandardItemModel*
/// @param thread QThread*
bool q_standarditemmodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QStandardItemModel*
/// @param interval int
int32_t q_standarditemmodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QStandardItemModel*
/// @param id int
void q_standarditemmodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QStandardItemModel*
/// @param id enum Qt__TimerId
void q_standarditemmodel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QStandardItemModel*
libqt_list /* of QObject* */ q_standarditemmodel_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QStandardItemModel*
/// @param parent QObject*
void q_standarditemmodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QStandardItemModel*
/// @param filterObj QObject*
void q_standarditemmodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QStandardItemModel*
/// @param obj QObject*
void q_standarditemmodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_standarditemmodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QStandardItemModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_standarditemmodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_standarditemmodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_standarditemmodel_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QStandardItemModel*
void q_standarditemmodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QStandardItemModel*
void q_standarditemmodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QStandardItemModel*
/// @param name const char*
/// @param value QVariant*
bool q_standarditemmodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QStandardItemModel*
/// @param name const char*
QVariant* q_standarditemmodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QStandardItemModel*
const char** q_standarditemmodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QStandardItemModel*
QBindingStorage* q_standarditemmodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QStandardItemModel*
const QBindingStorage* q_standarditemmodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStandardItemModel*
void q_standarditemmodel_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*)
void q_standarditemmodel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QStandardItemModel*
/// @param classname const char*
bool q_standarditemmodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QStandardItemModel*
void q_standarditemmodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QStandardItemModel*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_standarditemmodel_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QStandardItemModel*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_standarditemmodel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_standarditemmodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QStandardItemModel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_standarditemmodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStandardItemModel*
/// @param param1 QObject*
void q_standarditemmodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, QObject*)
void q_standarditemmodel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
QModelIndex* q_standarditemmodel_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param row int
/// @param column int
/// @param idx QModelIndex*
QModelIndex* q_standarditemmodel_qbase_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback QModelIndex* fn(QStandardItemModel*, int, int, QModelIndex*)
void q_standarditemmodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_standarditemmodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param data QMimeData*
/// @param action enum Qt__DropAction
/// @param row int
/// @param column int
/// @param parent QModelIndex*
bool q_standarditemmodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback bool fn(QStandardItemModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*)
void q_standarditemmodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
///
/// @return flag of enum Qt__DropAction
int64_t q_standarditemmodel_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
///
/// @return flag of enum Qt__DropAction
int64_t q_standarditemmodel_qbase_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback int64_t fn()
void q_standarditemmodel_on_supported_drag_actions(void* self, int64_t (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_standarditemmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param sourceParent QModelIndex*
/// @param sourceRow int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_standarditemmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback bool fn(QStandardItemModel*, QModelIndex*, int, int, QModelIndex*, int)
void q_standarditemmodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_standarditemmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param sourceParent QModelIndex*
/// @param sourceColumn int
/// @param count int
/// @param destinationParent QModelIndex*
/// @param destinationChild int
bool q_standarditemmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback bool fn(QStandardItemModel*, QModelIndex*, int, int, QModelIndex*, int)
void q_standarditemmodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
/// @param parent QModelIndex*
void q_standarditemmodel_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param parent QModelIndex*
void q_standarditemmodel_qbase_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, QModelIndex*)
void q_standarditemmodel_on_fetch_more(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
/// @param parent QModelIndex*
bool q_standarditemmodel_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param parent QModelIndex*
bool q_standarditemmodel_qbase_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback bool fn(QStandardItemModel*, QModelIndex*)
void q_standarditemmodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
/// @param index QModelIndex*
QModelIndex* q_standarditemmodel_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param index QModelIndex*
QModelIndex* q_standarditemmodel_qbase_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback QModelIndex* fn(QStandardItemModel*, QModelIndex*)
void q_standarditemmodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
libqt_list /* of QModelIndex* */ q_standarditemmodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param start QModelIndex*
/// @param role int
/// @param value QVariant*
/// @param hits int
/// @param flags flag of enum Qt__MatchFlag
libqt_list /* of QModelIndex* */ q_standarditemmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int64_t flags);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback libqt_list /* of QModelIndex* */ fn(QStandardItemModel*, QModelIndex*, int, QVariant*, int, flag of enum Qt__MatchFlag)
void q_standarditemmodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*callback)(void*, void*, int, void*, int, int64_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
/// @param index QModelIndex*
QSize* q_standarditemmodel_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param index QModelIndex*
QSize* q_standarditemmodel_qbase_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback QSize* fn(QStandardItemModel*, QModelIndex*)
void q_standarditemmodel_on_span(void* self, QSize* (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
bool q_standarditemmodel_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
bool q_standarditemmodel_qbase_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback bool fn()
void q_standarditemmodel_on_submit(void* self, bool (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
void q_standarditemmodel_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
void q_standarditemmodel_qbase_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback void fn()
void q_standarditemmodel_on_revert(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
void q_standarditemmodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
void q_standarditemmodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback void fn()
void q_standarditemmodel_on_reset_internal_data(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
/// @param event QEvent*
bool q_standarditemmodel_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param event QEvent*
bool q_standarditemmodel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback bool fn(QStandardItemModel*, QEvent*)
void q_standarditemmodel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
/// @param watched QObject*
/// @param event QEvent*
bool q_standarditemmodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param watched QObject*
/// @param event QEvent*
bool q_standarditemmodel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback bool fn(QStandardItemModel*, QObject*, QEvent*)
void q_standarditemmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
/// @param event QTimerEvent*
void q_standarditemmodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param event QTimerEvent*
void q_standarditemmodel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, QTimerEvent*)
void q_standarditemmodel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
/// @param event QChildEvent*
void q_standarditemmodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param event QChildEvent*
void q_standarditemmodel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, QChildEvent*)
void q_standarditemmodel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
/// @param event QEvent*
void q_standarditemmodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param event QEvent*
void q_standarditemmodel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, QEvent*)
void q_standarditemmodel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
/// @param signal QMetaMethod*
void q_standarditemmodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param signal QMetaMethod*
void q_standarditemmodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, QMetaMethod*)
void q_standarditemmodel_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
/// @param signal QMetaMethod*
void q_standarditemmodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param signal QMetaMethod*
void q_standarditemmodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, QMetaMethod*)
void q_standarditemmodel_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
/// @param row int
/// @param column int
QModelIndex* q_standarditemmodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param row int
/// @param column int
QModelIndex* q_standarditemmodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback QModelIndex* fn(QStandardItemModel*, int, int)
void q_standarditemmodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
void q_standarditemmodel_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param indexes libqt_list /* of QModelIndex* */
/// @param stream QDataStream*
void q_standarditemmodel_qbase_encode_data(void* self, libqt_list indexes, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, libqt_list /* of QModelIndex* */, QDataStream*)
void q_standarditemmodel_on_encode_data(void* self, void (*callback)(void*, libqt_list, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
bool q_standarditemmodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param row int
/// @param column int
/// @param parent QModelIndex*
/// @param stream QDataStream*
bool q_standarditemmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback bool fn(QStandardItemModel*, int, int, QModelIndex*, QDataStream*)
void q_standarditemmodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_standarditemmodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_standarditemmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, QModelIndex*, int, int)
void q_standarditemmodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
void q_standarditemmodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
void q_standarditemmodel_qbase_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback void fn()
void q_standarditemmodel_on_end_insert_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_standarditemmodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_standarditemmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, QModelIndex*, int, int)
void q_standarditemmodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
void q_standarditemmodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
void q_standarditemmodel_qbase_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback void fn()
void q_standarditemmodel_on_end_remove_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
bool q_standarditemmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationRow int
bool q_standarditemmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback bool fn(QStandardItemModel*, QModelIndex*, int, int, QModelIndex*, int)
void q_standarditemmodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
void q_standarditemmodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
void q_standarditemmodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback void fn()
void q_standarditemmodel_on_end_move_rows(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_standarditemmodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_standarditemmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, QModelIndex*, int, int)
void q_standarditemmodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
void q_standarditemmodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
void q_standarditemmodel_qbase_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback void fn()
void q_standarditemmodel_on_end_insert_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_standarditemmodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
void q_standarditemmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, QModelIndex*, int, int)
void q_standarditemmodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
void q_standarditemmodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
void q_standarditemmodel_qbase_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback void fn()
void q_standarditemmodel_on_end_remove_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
bool q_standarditemmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param sourceParent QModelIndex*
/// @param sourceFirst int
/// @param sourceLast int
/// @param destinationParent QModelIndex*
/// @param destinationColumn int
bool q_standarditemmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback bool fn(QStandardItemModel*, QModelIndex*, int, int, QModelIndex*, int)
void q_standarditemmodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
void q_standarditemmodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
void q_standarditemmodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback void fn()
void q_standarditemmodel_on_end_move_columns(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
void q_standarditemmodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
void q_standarditemmodel_qbase_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback void fn()
void q_standarditemmodel_on_begin_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
void q_standarditemmodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
void q_standarditemmodel_qbase_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback void fn()
void q_standarditemmodel_on_end_reset_model(void* self, void (*callback)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
void q_standarditemmodel_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param from QModelIndex*
/// @param to QModelIndex*
void q_standarditemmodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, QModelIndex*, QModelIndex*)
void q_standarditemmodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
void q_standarditemmodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param from libqt_list /* of QModelIndex* */
/// @param to libqt_list /* of QModelIndex* */
void q_standarditemmodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, libqt_list /* of QModelIndex* */, libqt_list /* of QModelIndex* */)
void q_standarditemmodel_on_change_persistent_index_list(void* self, void (*callback)(void*, libqt_list, libqt_list));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
libqt_list /* of QModelIndex* */ q_standarditemmodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
libqt_list /* of QModelIndex* */ q_standarditemmodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback libqt_list /* of QModelIndex* */ fn()
void q_standarditemmodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
QObject* q_standarditemmodel_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
QObject* q_standarditemmodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback QObject* fn()
void q_standarditemmodel_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
int32_t q_standarditemmodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
int32_t q_standarditemmodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback int32_t fn()
void q_standarditemmodel_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
/// @param signal const char*
int32_t q_standarditemmodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param signal const char*
int32_t q_standarditemmodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback int32_t fn(QStandardItemModel*, const char*)
void q_standarditemmodel_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QStandardItemModel*
/// @param signal QMetaMethod*
bool q_standarditemmodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param signal QMetaMethod*
bool q_standarditemmodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QStandardItemModel*
/// @param callback bool fn(QStandardItemModel*, QMetaMethod*)
void q_standarditemmodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, QModelIndex*, int, int)
void q_standarditemmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, QModelIndex*, int, int)
void q_standarditemmodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, QModelIndex*, int, int)
void q_standarditemmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, QModelIndex*, int, int)
void q_standarditemmodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, QModelIndex*, int, int)
void q_standarditemmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
///
/// Wrapper to allow calling private signal
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, QModelIndex*, int, int)
void q_standarditemmodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, QModelIndex*, int, int)
void q_standarditemmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, QModelIndex*, int, int)
void q_standarditemmodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*)
void q_standarditemmodel_on_model_about_to_be_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
///
/// Wrapper to allow calling private signal
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*)
void q_standarditemmodel_on_model_reset(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, QModelIndex*, int, int, QModelIndex*, int)
void q_standarditemmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, QModelIndex*, int, int, QModelIndex*, int)
void q_standarditemmodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, QModelIndex*, int, int, QModelIndex*, int)
void q_standarditemmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
///
/// Wrapper to allow calling private signal
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, QModelIndex*, int, int, QModelIndex*, int)
void q_standarditemmodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QStandardItemModel*
/// @param callback void fn(QStandardItemModel*, const char*)
void q_standarditemmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#dtor.QStandardItemModel)
///
/// Delete this object from C++ memory.
///
/// @param self QStandardItemModel*
void q_standarditemmodel_delete(void* self);

/// https://doc.qt.io/qt-6/qstandarditemmodel.html#types

typedef enum {
    QSTANDARDITEM_ITEMTYPE_TYPE = 0,
    QSTANDARDITEM_ITEMTYPE_USERTYPE = 1000
} QStandardItem__ItemType;

#endif
