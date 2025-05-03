#pragma once
#ifndef SRCQT6C_LIBQSTANDARDITEMMODEL_H
#define SRCQT6C_LIBQSTANDARDITEMMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractitemmodel.h"
#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqbrush.h"
#include "libqevent.h"
#include "libqdatastream.h"
#include "libqfont.h"
#include "libqicon.h"
#include "libqmetaobject.h"
#include "libqmimedata.h"
#include "libqobject.h"
#include "libqsize.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

/// https://doc.qt.io/qt-6/qstandarditem.html

/// q_standarditem_new constructs a new QStandardItem object.
///
///
QStandardItem* q_standarditem_new();

/// q_standarditem_new2 constructs a new QStandardItem object.
///
/// ``` const char* text ```
QStandardItem* q_standarditem_new2(const char* text);

/// q_standarditem_new3 constructs a new QStandardItem object.
///
/// ``` QIcon* icon, const char* text ```
QStandardItem* q_standarditem_new3(void* icon, const char* text);

/// q_standarditem_new4 constructs a new QStandardItem object.
///
/// ``` int rows ```
QStandardItem* q_standarditem_new4(int rows);

/// q_standarditem_new5 constructs a new QStandardItem object.
///
/// ``` int rows, int columns ```
QStandardItem* q_standarditem_new5(int rows, int columns);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#data)
///
/// ``` QStandardItem* self, int role ```
QVariant* q_standarditem_data(void* self, int role);

/// Allows for overriding the related default method
///
/// ``` QStandardItem* self, QVariant* (*slot)(QStandardItem*, int) ```
void q_standarditem_on_data(void* self, QVariant* (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QStandardItem* self, int role ```
QVariant* q_standarditem_qbase_data(void* self, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#multiData)
///
/// ``` QStandardItem* self, QModelRoleDataSpan* roleDataSpan ```
void q_standarditem_multi_data(void* self, void* roleDataSpan);

/// Allows for overriding the related default method
///
/// ``` QStandardItem* self, void (*slot)(QStandardItem*, QModelRoleDataSpan*) ```
void q_standarditem_on_multi_data(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QStandardItem* self, QModelRoleDataSpan* roleDataSpan ```
void q_standarditem_qbase_multi_data(void* self, void* roleDataSpan);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setData)
///
/// ``` QStandardItem* self, QVariant* value, int role ```
void q_standarditem_set_data(void* self, void* value, int role);

/// Allows for overriding the related default method
///
/// ``` QStandardItem* self, void (*slot)(QStandardItem*, QVariant*, int) ```
void q_standarditem_on_set_data(void* self, void (*slot)(void*, void*, int));

/// Base class method implementation
///
/// ``` QStandardItem* self, QVariant* value, int role ```
void q_standarditem_qbase_set_data(void* self, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#clearData)
///
/// ``` QStandardItem* self ```
void q_standarditem_clear_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#text)
///
/// ``` QStandardItem* self ```
const char* q_standarditem_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setText)
///
/// ``` QStandardItem* self, const char* text ```
void q_standarditem_set_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#icon)
///
/// ``` QStandardItem* self ```
QIcon* q_standarditem_icon(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setIcon)
///
/// ``` QStandardItem* self, QIcon* icon ```
void q_standarditem_set_icon(void* self, void* icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#toolTip)
///
/// ``` QStandardItem* self ```
const char* q_standarditem_tool_tip(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setToolTip)
///
/// ``` QStandardItem* self, const char* toolTip ```
void q_standarditem_set_tool_tip(void* self, const char* toolTip);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#statusTip)
///
/// ``` QStandardItem* self ```
const char* q_standarditem_status_tip(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setStatusTip)
///
/// ``` QStandardItem* self, const char* statusTip ```
void q_standarditem_set_status_tip(void* self, const char* statusTip);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#whatsThis)
///
/// ``` QStandardItem* self ```
const char* q_standarditem_whats_this(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setWhatsThis)
///
/// ``` QStandardItem* self, const char* whatsThis ```
void q_standarditem_set_whats_this(void* self, const char* whatsThis);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#sizeHint)
///
/// ``` QStandardItem* self ```
QSize* q_standarditem_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setSizeHint)
///
/// ``` QStandardItem* self, QSize* sizeHint ```
void q_standarditem_set_size_hint(void* self, void* sizeHint);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#font)
///
/// ``` QStandardItem* self ```
QFont* q_standarditem_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setFont)
///
/// ``` QStandardItem* self, QFont* font ```
void q_standarditem_set_font(void* self, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#textAlignment)
///
/// ``` QStandardItem* self ```
int64_t q_standarditem_text_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setTextAlignment)
///
/// ``` QStandardItem* self, int textAlignment ```
void q_standarditem_set_text_alignment(void* self, int64_t textAlignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#background)
///
/// ``` QStandardItem* self ```
QBrush* q_standarditem_background(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setBackground)
///
/// ``` QStandardItem* self, QBrush* brush ```
void q_standarditem_set_background(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#foreground)
///
/// ``` QStandardItem* self ```
QBrush* q_standarditem_foreground(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setForeground)
///
/// ``` QStandardItem* self, QBrush* brush ```
void q_standarditem_set_foreground(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#checkState)
///
/// ``` QStandardItem* self ```
int64_t q_standarditem_check_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setCheckState)
///
/// ``` QStandardItem* self, enum Qt__CheckState checkState ```
void q_standarditem_set_check_state(void* self, int64_t checkState);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#accessibleText)
///
/// ``` QStandardItem* self ```
const char* q_standarditem_accessible_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setAccessibleText)
///
/// ``` QStandardItem* self, const char* accessibleText ```
void q_standarditem_set_accessible_text(void* self, const char* accessibleText);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#accessibleDescription)
///
/// ``` QStandardItem* self ```
const char* q_standarditem_accessible_description(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setAccessibleDescription)
///
/// ``` QStandardItem* self, const char* accessibleDescription ```
void q_standarditem_set_accessible_description(void* self, const char* accessibleDescription);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#flags)
///
/// ``` QStandardItem* self ```
int64_t q_standarditem_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setFlags)
///
/// ``` QStandardItem* self, int flags ```
void q_standarditem_set_flags(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#isEnabled)
///
/// ``` QStandardItem* self ```
bool q_standarditem_is_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setEnabled)
///
/// ``` QStandardItem* self, bool enabled ```
void q_standarditem_set_enabled(void* self, bool enabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#isEditable)
///
/// ``` QStandardItem* self ```
bool q_standarditem_is_editable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setEditable)
///
/// ``` QStandardItem* self, bool editable ```
void q_standarditem_set_editable(void* self, bool editable);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#isSelectable)
///
/// ``` QStandardItem* self ```
bool q_standarditem_is_selectable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setSelectable)
///
/// ``` QStandardItem* self, bool selectable ```
void q_standarditem_set_selectable(void* self, bool selectable);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#isCheckable)
///
/// ``` QStandardItem* self ```
bool q_standarditem_is_checkable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setCheckable)
///
/// ``` QStandardItem* self, bool checkable ```
void q_standarditem_set_checkable(void* self, bool checkable);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#isAutoTristate)
///
/// ``` QStandardItem* self ```
bool q_standarditem_is_auto_tristate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setAutoTristate)
///
/// ``` QStandardItem* self, bool tristate ```
void q_standarditem_set_auto_tristate(void* self, bool tristate);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#isUserTristate)
///
/// ``` QStandardItem* self ```
bool q_standarditem_is_user_tristate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setUserTristate)
///
/// ``` QStandardItem* self, bool tristate ```
void q_standarditem_set_user_tristate(void* self, bool tristate);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#isDragEnabled)
///
/// ``` QStandardItem* self ```
bool q_standarditem_is_drag_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setDragEnabled)
///
/// ``` QStandardItem* self, bool dragEnabled ```
void q_standarditem_set_drag_enabled(void* self, bool dragEnabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#isDropEnabled)
///
/// ``` QStandardItem* self ```
bool q_standarditem_is_drop_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setDropEnabled)
///
/// ``` QStandardItem* self, bool dropEnabled ```
void q_standarditem_set_drop_enabled(void* self, bool dropEnabled);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#parent)
///
/// ``` QStandardItem* self ```
QStandardItem* q_standarditem_parent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#row)
///
/// ``` QStandardItem* self ```
int32_t q_standarditem_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#column)
///
/// ``` QStandardItem* self ```
int32_t q_standarditem_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#index)
///
/// ``` QStandardItem* self ```
QModelIndex* q_standarditem_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#model)
///
/// ``` QStandardItem* self ```
QStandardItemModel* q_standarditem_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#rowCount)
///
/// ``` QStandardItem* self ```
int32_t q_standarditem_row_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setRowCount)
///
/// ``` QStandardItem* self, int rows ```
void q_standarditem_set_row_count(void* self, int rows);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#columnCount)
///
/// ``` QStandardItem* self ```
int32_t q_standarditem_column_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setColumnCount)
///
/// ``` QStandardItem* self, int columns ```
void q_standarditem_set_column_count(void* self, int columns);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#hasChildren)
///
/// ``` QStandardItem* self ```
bool q_standarditem_has_children(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#child)
///
/// ``` QStandardItem* self, int row ```
QStandardItem* q_standarditem_child(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setChild)
///
/// ``` QStandardItem* self, int row, int column, QStandardItem* item ```
void q_standarditem_set_child(void* self, int row, int column, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#setChild)
///
/// ``` QStandardItem* self, int row, QStandardItem* item ```
void q_standarditem_set_child2(void* self, int row, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#insertRow)
///
/// ``` QStandardItem* self, int row, QStandardItem* items[] ```
void q_standarditem_insert_row(void* self, int row, void* items[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#insertColumn)
///
/// ``` QStandardItem* self, int column, QStandardItem* items[] ```
void q_standarditem_insert_column(void* self, int column, void* items[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#insertRows)
///
/// ``` QStandardItem* self, int row, QStandardItem* items[] ```
void q_standarditem_insert_rows(void* self, int row, void* items[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#insertRows)
///
/// ``` QStandardItem* self, int row, int count ```
void q_standarditem_insert_rows2(void* self, int row, int count);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#insertColumns)
///
/// ``` QStandardItem* self, int column, int count ```
void q_standarditem_insert_columns(void* self, int column, int count);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#removeRow)
///
/// ``` QStandardItem* self, int row ```
void q_standarditem_remove_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#removeColumn)
///
/// ``` QStandardItem* self, int column ```
void q_standarditem_remove_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#removeRows)
///
/// ``` QStandardItem* self, int row, int count ```
void q_standarditem_remove_rows(void* self, int row, int count);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#removeColumns)
///
/// ``` QStandardItem* self, int column, int count ```
void q_standarditem_remove_columns(void* self, int column, int count);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#appendRow)
///
/// ``` QStandardItem* self, QStandardItem* items[] ```
void q_standarditem_append_row(void* self, void* items[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#appendRows)
///
/// ``` QStandardItem* self, QStandardItem* items[] ```
void q_standarditem_append_rows(void* self, void* items[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#appendColumn)
///
/// ``` QStandardItem* self, QStandardItem* items[] ```
void q_standarditem_append_column(void* self, void* items[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#insertRow)
///
/// ``` QStandardItem* self, int row, QStandardItem* item ```
void q_standarditem_insert_row2(void* self, int row, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#appendRow)
///
/// ``` QStandardItem* self, QStandardItem* item ```
void q_standarditem_append_row_with_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#takeChild)
///
/// ``` QStandardItem* self, int row ```
QStandardItem* q_standarditem_take_child(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#takeRow)
///
/// ``` QStandardItem* self, int row ```
libqt_list /* of QStandardItem* */ q_standarditem_take_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#takeColumn)
///
/// ``` QStandardItem* self, int column ```
libqt_list /* of QStandardItem* */ q_standarditem_take_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#sortChildren)
///
/// ``` QStandardItem* self, int column ```
void q_standarditem_sort_children(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#clone)
///
/// ``` QStandardItem* self ```
QStandardItem* q_standarditem_clone(void* self);

/// Allows for overriding the related default method
///
/// ``` QStandardItem* self, QStandardItem* (*slot)() ```
void q_standarditem_on_clone(void* self, QStandardItem* (*slot)());

/// Base class method implementation
///
/// ``` QStandardItem* self ```
QStandardItem* q_standarditem_qbase_clone(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#type)
///
/// ``` QStandardItem* self ```
int32_t q_standarditem_type(void* self);

/// Allows for overriding the related default method
///
/// ``` QStandardItem* self, int32_t (*slot)() ```
void q_standarditem_on_type(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QStandardItem* self ```
int32_t q_standarditem_qbase_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#read)
///
/// ``` QStandardItem* self, QDataStream* in ```
void q_standarditem_read(void* self, void* in);

/// Allows for overriding the related default method
///
/// ``` QStandardItem* self, void (*slot)(QStandardItem*, QDataStream*) ```
void q_standarditem_on_read(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QStandardItem* self, QDataStream* in ```
void q_standarditem_qbase_read(void* self, void* in);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#write)
///
/// ``` QStandardItem* self, QDataStream* out ```
void q_standarditem_write(void* self, void* out);

/// Allows for overriding the related default method
///
/// ``` QStandardItem* self, void (*slot)(QStandardItem*, QDataStream*) ```
void q_standarditem_on_write(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QStandardItem* self, QDataStream* out ```
void q_standarditem_qbase_write(void* self, void* out);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#operator<)
///
/// ``` QStandardItem* self, QStandardItem* other ```
bool q_standarditem_operator_lesser(void* self, void* other);

/// Allows for overriding the related default method
///
/// ``` QStandardItem* self, bool (*slot)(QStandardItem*, QStandardItem*) ```
void q_standarditem_on_operator_lesser(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QStandardItem* self, QStandardItem* other ```
bool q_standarditem_qbase_operator_lesser(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#operator=)
///
/// ``` QStandardItem* self, QStandardItem* other ```
void q_standarditem_operator_assign(void* self, void* other);

/// Allows for overriding the related default method
///
/// ``` QStandardItem* self, void (*slot)(QStandardItem*, QStandardItem*) ```
void q_standarditem_on_operator_assign(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QStandardItem* self, QStandardItem* other ```
void q_standarditem_qbase_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#emitDataChanged)
///
/// ``` QStandardItem* self ```
void q_standarditem_emit_data_changed(void* self);

/// Allows for overriding the related default method
///
/// ``` QStandardItem* self, void (*slot)() ```
void q_standarditem_on_emit_data_changed(void* self, void (*slot)());

/// Base class method implementation
///
/// ``` QStandardItem* self ```
void q_standarditem_qbase_emit_data_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#child)
///
/// ``` QStandardItem* self, int row, int column ```
QStandardItem* q_standarditem_child2(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#takeChild)
///
/// ``` QStandardItem* self, int row, int column ```
QStandardItem* q_standarditem_take_child2(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditem.html#sortChildren)
///
/// ``` QStandardItem* self, int column, enum Qt__SortOrder order ```
void q_standarditem_sort_children2(void* self, int column, int64_t order);

/// Delete this object from C++ memory.
///
/// ``` QStandardItem* self ```
void q_standarditem_delete(void* self);

/// https://doc.qt.io/qt-6/qstandarditemmodel.html

/// q_standarditemmodel_new constructs a new QStandardItemModel object.
///
///
QStandardItemModel* q_standarditemmodel_new();

/// q_standarditemmodel_new2 constructs a new QStandardItemModel object.
///
/// ``` int rows, int columns ```
QStandardItemModel* q_standarditemmodel_new2(int rows, int columns);

/// q_standarditemmodel_new3 constructs a new QStandardItemModel object.
///
/// ``` QObject* parent ```
QStandardItemModel* q_standarditemmodel_new3(void* parent);

/// q_standarditemmodel_new4 constructs a new QStandardItemModel object.
///
/// ``` int rows, int columns, QObject* parent ```
QStandardItemModel* q_standarditemmodel_new4(int rows, int columns, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QStandardItemModel* self ```
QMetaObject* q_standarditemmodel_meta_object(void* self);

/// ``` QStandardItemModel* self, const char* param1 ```
void* q_standarditemmodel_metacast(void* self, const char* param1);

/// ``` QStandardItemModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_standarditemmodel_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, int32_t (*slot)(QStandardItemModel*, enum QMetaObject__Call, int, void*) ```
void q_standarditemmodel_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QStandardItemModel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_standarditemmodel_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_standarditemmodel_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItemRoleNames)
///
/// ``` QStandardItemModel* self, libqt_map /* of int to char* */ roleNames ```
void q_standarditemmodel_set_item_role_names(void* self, libqt_map /* of int to char* */ roleNames);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#roleNames)
///
/// ``` QStandardItemModel* self ```
libqt_map /* of int to char* */ q_standarditemmodel_role_names(void* self);

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, libqt_map /* of int to char* */ (*slot)() ```
void q_standarditemmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*slot)());

/// Base class method implementation
///
/// ``` QStandardItemModel* self ```
libqt_map /* of int to char* */ q_standarditemmodel_qbase_role_names(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#index)
///
/// ``` QStandardItemModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_standarditemmodel_index(void* self, int row, int column, void* parent);

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, QModelIndex* (*slot)(QStandardItemModel*, int, int, QModelIndex*) ```
void q_standarditemmodel_on_index(void* self, QModelIndex* (*slot)(void*, int, int, void*));

/// Base class method implementation
///
/// ``` QStandardItemModel* self, int row, int column, QModelIndex* parent ```
QModelIndex* q_standarditemmodel_qbase_index(void* self, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#parent)
///
/// ``` QStandardItemModel* self, QModelIndex* child ```
QModelIndex* q_standarditemmodel_parent(void* self, void* child);

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, QModelIndex* (*slot)(QStandardItemModel*, QModelIndex*) ```
void q_standarditemmodel_on_parent(void* self, QModelIndex* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QStandardItemModel* self, QModelIndex* child ```
QModelIndex* q_standarditemmodel_qbase_parent(void* self, void* child);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#rowCount)
///
/// ``` QStandardItemModel* self, QModelIndex* parent ```
int32_t q_standarditemmodel_row_count(void* self, void* parent);

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, int32_t (*slot)(QStandardItemModel*, QModelIndex*) ```
void q_standarditemmodel_on_row_count(void* self, int32_t (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QStandardItemModel* self, QModelIndex* parent ```
int32_t q_standarditemmodel_qbase_row_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#columnCount)
///
/// ``` QStandardItemModel* self, QModelIndex* parent ```
int32_t q_standarditemmodel_column_count(void* self, void* parent);

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, int32_t (*slot)(QStandardItemModel*, QModelIndex*) ```
void q_standarditemmodel_on_column_count(void* self, int32_t (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QStandardItemModel* self, QModelIndex* parent ```
int32_t q_standarditemmodel_qbase_column_count(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#hasChildren)
///
/// ``` QStandardItemModel* self, QModelIndex* parent ```
bool q_standarditemmodel_has_children(void* self, void* parent);

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, QModelIndex*) ```
void q_standarditemmodel_on_has_children(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QStandardItemModel* self, QModelIndex* parent ```
bool q_standarditemmodel_qbase_has_children(void* self, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#data)
///
/// ``` QStandardItemModel* self, QModelIndex* index, int role ```
QVariant* q_standarditemmodel_data(void* self, void* index, int role);

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, QVariant* (*slot)(QStandardItemModel*, QModelIndex*, int) ```
void q_standarditemmodel_on_data(void* self, QVariant* (*slot)(void*, void*, int));

/// Base class method implementation
///
/// ``` QStandardItemModel* self, QModelIndex* index, int role ```
QVariant* q_standarditemmodel_qbase_data(void* self, void* index, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#multiData)
///
/// ``` QStandardItemModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_standarditemmodel_multi_data(void* self, void* index, void* roleDataSpan);

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, void (*slot)(QStandardItemModel*, QModelIndex*, QModelRoleDataSpan*) ```
void q_standarditemmodel_on_multi_data(void* self, void (*slot)(void*, void*, void*));

/// Base class method implementation
///
/// ``` QStandardItemModel* self, QModelIndex* index, QModelRoleDataSpan* roleDataSpan ```
void q_standarditemmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setData)
///
/// ``` QStandardItemModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_standarditemmodel_set_data(void* self, void* index, void* value, int role);

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, QModelIndex*, QVariant*, int) ```
void q_standarditemmodel_on_set_data(void* self, bool (*slot)(void*, void*, void*, int));

/// Base class method implementation
///
/// ``` QStandardItemModel* self, QModelIndex* index, QVariant* value, int role ```
bool q_standarditemmodel_qbase_set_data(void* self, void* index, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#clearItemData)
///
/// ``` QStandardItemModel* self, QModelIndex* index ```
bool q_standarditemmodel_clear_item_data(void* self, void* index);

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, QModelIndex*) ```
void q_standarditemmodel_on_clear_item_data(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QStandardItemModel* self, QModelIndex* index ```
bool q_standarditemmodel_qbase_clear_item_data(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#headerData)
///
/// ``` QStandardItemModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_standarditemmodel_header_data(void* self, int section, int64_t orientation, int role);

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, QVariant* (*slot)(QStandardItemModel*, int, enum Qt__Orientation, int) ```
void q_standarditemmodel_on_header_data(void* self, QVariant* (*slot)(void*, int, int64_t, int));

/// Base class method implementation
///
/// ``` QStandardItemModel* self, int section, enum Qt__Orientation orientation, int role ```
QVariant* q_standarditemmodel_qbase_header_data(void* self, int section, int64_t orientation, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setHeaderData)
///
/// ``` QStandardItemModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_standarditemmodel_set_header_data(void* self, int section, int64_t orientation, void* value, int role);

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, int, enum Qt__Orientation, QVariant*, int) ```
void q_standarditemmodel_on_set_header_data(void* self, bool (*slot)(void*, int, int64_t, void*, int));

/// Base class method implementation
///
/// ``` QStandardItemModel* self, int section, enum Qt__Orientation orientation, QVariant* value, int role ```
bool q_standarditemmodel_qbase_set_header_data(void* self, int section, int64_t orientation, void* value, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRows)
///
/// ``` QStandardItemModel* self, int row, int count, QModelIndex* parent ```
bool q_standarditemmodel_insert_rows(void* self, int row, int count, void* parent);

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, int, int, QModelIndex*) ```
void q_standarditemmodel_on_insert_rows(void* self, bool (*slot)(void*, int, int, void*));

/// Base class method implementation
///
/// ``` QStandardItemModel* self, int row, int count, QModelIndex* parent ```
bool q_standarditemmodel_qbase_insert_rows(void* self, int row, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertColumns)
///
/// ``` QStandardItemModel* self, int column, int count, QModelIndex* parent ```
bool q_standarditemmodel_insert_columns(void* self, int column, int count, void* parent);

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, int, int, QModelIndex*) ```
void q_standarditemmodel_on_insert_columns(void* self, bool (*slot)(void*, int, int, void*));

/// Base class method implementation
///
/// ``` QStandardItemModel* self, int column, int count, QModelIndex* parent ```
bool q_standarditemmodel_qbase_insert_columns(void* self, int column, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#removeRows)
///
/// ``` QStandardItemModel* self, int row, int count, QModelIndex* parent ```
bool q_standarditemmodel_remove_rows(void* self, int row, int count, void* parent);

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, int, int, QModelIndex*) ```
void q_standarditemmodel_on_remove_rows(void* self, bool (*slot)(void*, int, int, void*));

/// Base class method implementation
///
/// ``` QStandardItemModel* self, int row, int count, QModelIndex* parent ```
bool q_standarditemmodel_qbase_remove_rows(void* self, int row, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#removeColumns)
///
/// ``` QStandardItemModel* self, int column, int count, QModelIndex* parent ```
bool q_standarditemmodel_remove_columns(void* self, int column, int count, void* parent);

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, int, int, QModelIndex*) ```
void q_standarditemmodel_on_remove_columns(void* self, bool (*slot)(void*, int, int, void*));

/// Base class method implementation
///
/// ``` QStandardItemModel* self, int column, int count, QModelIndex* parent ```
bool q_standarditemmodel_qbase_remove_columns(void* self, int column, int count, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#flags)
///
/// ``` QStandardItemModel* self, QModelIndex* index ```
int64_t q_standarditemmodel_flags(void* self, void* index);

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, int64_t (*slot)(QStandardItemModel*, QModelIndex*) ```
void q_standarditemmodel_on_flags(void* self, int64_t (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QStandardItemModel* self, QModelIndex* index ```
int64_t q_standarditemmodel_qbase_flags(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#supportedDropActions)
///
/// ``` QStandardItemModel* self ```
int64_t q_standarditemmodel_supported_drop_actions(void* self);

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, int64_t (*slot)() ```
void q_standarditemmodel_on_supported_drop_actions(void* self, int64_t (*slot)());

/// Base class method implementation
///
/// ``` QStandardItemModel* self ```
int64_t q_standarditemmodel_qbase_supported_drop_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemData)
///
/// ``` QStandardItemModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_standarditemmodel_item_data(void* self, void* index);

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, libqt_map /* of int to QVariant* */ (*slot)(QStandardItemModel*, QModelIndex*) ```
void q_standarditemmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QStandardItemModel* self, QModelIndex* index ```
libqt_map /* of int to QVariant* */ q_standarditemmodel_qbase_item_data(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItemData)
///
/// ``` QStandardItemModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_standarditemmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, QModelIndex*, libqt_map /* of int to QVariant* */) ```
void q_standarditemmodel_on_set_item_data(void* self, bool (*slot)(void*, void*, libqt_map /* of int to QVariant* */));

/// Base class method implementation
///
/// ``` QStandardItemModel* self, QModelIndex* index, libqt_map /* of int to QVariant* */ roles ```
bool q_standarditemmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#clear)
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#sort)
///
/// ``` QStandardItemModel* self, int column, enum Qt__SortOrder order ```
void q_standarditemmodel_sort(void* self, int column, int64_t order);

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, void (*slot)(QStandardItemModel*, int, enum Qt__SortOrder) ```
void q_standarditemmodel_on_sort(void* self, void (*slot)(void*, int, int64_t));

/// Base class method implementation
///
/// ``` QStandardItemModel* self, int column, enum Qt__SortOrder order ```
void q_standarditemmodel_qbase_sort(void* self, int column, int64_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemFromIndex)
///
/// ``` QStandardItemModel* self, QModelIndex* index ```
QStandardItem* q_standarditemmodel_item_from_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#indexFromItem)
///
/// ``` QStandardItemModel* self, QStandardItem* item ```
QModelIndex* q_standarditemmodel_index_from_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#item)
///
/// ``` QStandardItemModel* self, int row ```
QStandardItem* q_standarditemmodel_item(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItem)
///
/// ``` QStandardItemModel* self, int row, int column, QStandardItem* item ```
void q_standarditemmodel_set_item(void* self, int row, int column, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItem)
///
/// ``` QStandardItemModel* self, int row, QStandardItem* item ```
void q_standarditemmodel_set_item2(void* self, int row, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#invisibleRootItem)
///
/// ``` QStandardItemModel* self ```
QStandardItem* q_standarditemmodel_invisible_root_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#horizontalHeaderItem)
///
/// ``` QStandardItemModel* self, int column ```
QStandardItem* q_standarditemmodel_horizontal_header_item(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setHorizontalHeaderItem)
///
/// ``` QStandardItemModel* self, int column, QStandardItem* item ```
void q_standarditemmodel_set_horizontal_header_item(void* self, int column, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#verticalHeaderItem)
///
/// ``` QStandardItemModel* self, int row ```
QStandardItem* q_standarditemmodel_vertical_header_item(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setVerticalHeaderItem)
///
/// ``` QStandardItemModel* self, int row, QStandardItem* item ```
void q_standarditemmodel_set_vertical_header_item(void* self, int row, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setHorizontalHeaderLabels)
///
/// ``` QStandardItemModel* self, const char* labels[] ```
void q_standarditemmodel_set_horizontal_header_labels(void* self, const char* labels[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setVerticalHeaderLabels)
///
/// ``` QStandardItemModel* self, const char* labels[] ```
void q_standarditemmodel_set_vertical_header_labels(void* self, const char* labels[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setRowCount)
///
/// ``` QStandardItemModel* self, int rows ```
void q_standarditemmodel_set_row_count(void* self, int rows);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setColumnCount)
///
/// ``` QStandardItemModel* self, int columns ```
void q_standarditemmodel_set_column_count(void* self, int columns);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#appendRow)
///
/// ``` QStandardItemModel* self, QStandardItem* items[] ```
void q_standarditemmodel_append_row(void* self, void* items[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#appendColumn)
///
/// ``` QStandardItemModel* self, QStandardItem* items[] ```
void q_standarditemmodel_append_column(void* self, void* items[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#appendRow)
///
/// ``` QStandardItemModel* self, QStandardItem* item ```
void q_standarditemmodel_append_row_with_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRow)
///
/// ``` QStandardItemModel* self, int row, QStandardItem* items[] ```
void q_standarditemmodel_insert_row(void* self, int row, void* items[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertColumn)
///
/// ``` QStandardItemModel* self, int column, QStandardItem* items[] ```
void q_standarditemmodel_insert_column(void* self, int column, void* items[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRow)
///
/// ``` QStandardItemModel* self, int row, QStandardItem* item ```
void q_standarditemmodel_insert_row2(void* self, int row, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRow)
///
/// ``` QStandardItemModel* self, int row ```
bool q_standarditemmodel_insert_row_with_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertColumn)
///
/// ``` QStandardItemModel* self, int column ```
bool q_standarditemmodel_insert_column_with_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeItem)
///
/// ``` QStandardItemModel* self, int row ```
QStandardItem* q_standarditemmodel_take_item(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeRow)
///
/// ``` QStandardItemModel* self, int row ```
libqt_list /* of QStandardItem* */ q_standarditemmodel_take_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeColumn)
///
/// ``` QStandardItemModel* self, int column ```
libqt_list /* of QStandardItem* */ q_standarditemmodel_take_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeHorizontalHeaderItem)
///
/// ``` QStandardItemModel* self, int column ```
QStandardItem* q_standarditemmodel_take_horizontal_header_item(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeVerticalHeaderItem)
///
/// ``` QStandardItemModel* self, int row ```
QStandardItem* q_standarditemmodel_take_vertical_header_item(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemPrototype)
///
/// ``` QStandardItemModel* self ```
QStandardItem* q_standarditemmodel_item_prototype(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setItemPrototype)
///
/// ``` QStandardItemModel* self, QStandardItem* item ```
void q_standarditemmodel_set_item_prototype(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#findItems)
///
/// ``` QStandardItemModel* self, const char* text ```
libqt_list /* of QStandardItem* */ q_standarditemmodel_find_items(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#sortRole)
///
/// ``` QStandardItemModel* self ```
int32_t q_standarditemmodel_sort_role(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#setSortRole)
///
/// ``` QStandardItemModel* self, int role ```
void q_standarditemmodel_set_sort_role(void* self, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#mimeTypes)
///
/// ``` QStandardItemModel* self ```
const char** q_standarditemmodel_mime_types(void* self);

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, const char** (*slot)() ```
void q_standarditemmodel_on_mime_types(void* self, const char** (*slot)());

/// Base class method implementation
///
/// ``` QStandardItemModel* self ```
const char** q_standarditemmodel_qbase_mime_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#mimeData)
///
/// ``` QStandardItemModel* self, QModelIndex* indexes[] ```
QMimeData* q_standarditemmodel_mime_data(void* self, void* indexes[]);

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, QMimeData* (*slot)(QStandardItemModel*, QModelIndex*[]) ```
void q_standarditemmodel_on_mime_data(void* self, QMimeData* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QStandardItemModel* self, QModelIndex* indexes[] ```
QMimeData* q_standarditemmodel_qbase_mime_data(void* self, void* indexes[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#dropMimeData)
///
/// ``` QStandardItemModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_standarditemmodel_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// Allows for overriding the related default method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_standarditemmodel_on_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*));

/// Base class method implementation
///
/// ``` QStandardItemModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_standarditemmodel_qbase_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#itemChanged)
///
/// ``` QStandardItemModel* self, QStandardItem* item ```
void q_standarditemmodel_item_changed(void* self, void* item);

/// ``` QStandardItemModel* self, void (*slot)(QStandardItemModel*, QStandardItem*) ```
void q_standarditemmodel_on_item_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_standarditemmodel_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_standarditemmodel_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#item)
///
/// ``` QStandardItemModel* self, int row, int column ```
QStandardItem* q_standarditemmodel_item2(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertRow)
///
/// ``` QStandardItemModel* self, int row, QModelIndex* parent ```
bool q_standarditemmodel_insert_row22(void* self, int row, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#insertColumn)
///
/// ``` QStandardItemModel* self, int column, QModelIndex* parent ```
bool q_standarditemmodel_insert_column2(void* self, int column, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#takeItem)
///
/// ``` QStandardItemModel* self, int row, int column ```
QStandardItem* q_standarditemmodel_take_item2(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#findItems)
///
/// ``` QStandardItemModel* self, const char* text, int flags ```
libqt_list /* of QStandardItem* */ q_standarditemmodel_find_items2(void* self, const char* text, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qstandarditemmodel.html#findItems)
///
/// ``` QStandardItemModel* self, const char* text, int flags, int column ```
libqt_list /* of QStandardItem* */ q_standarditemmodel_find_items3(void* self, const char* text, int64_t flags, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QStandardItemModel* self, int row, int column ```
bool q_standarditemmodel_has_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QStandardItemModel* self, int row ```
bool q_standarditemmodel_remove_row(void* self, int row);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QStandardItemModel* self, int column ```
bool q_standarditemmodel_remove_column(void* self, int column);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
///
/// ``` QStandardItemModel* self, QModelIndex* sourceParent, int sourceRow, QModelIndex* destinationParent, int destinationChild ```
bool q_standarditemmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
///
/// ``` QStandardItemModel* self, QModelIndex* sourceParent, int sourceColumn, QModelIndex* destinationParent, int destinationChild ```
bool q_standarditemmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QStandardItemModel* self, QModelIndex* index ```
bool q_standarditemmodel_check_index(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QStandardItemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight ```
void q_standarditemmodel_data_changed(void* self, void* topLeft, void* bottomRight);

/// Inherited from QAbstractItemModel
///
/// ``` QStandardItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*) ```
void q_standarditemmodel_on_data_changed(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
///
/// ``` QStandardItemModel* self, enum Qt__Orientation orientation, int first, int last ```
void q_standarditemmodel_header_data_changed(void* self, int64_t orientation, int first, int last);

/// Inherited from QAbstractItemModel
///
/// ``` QStandardItemModel* self, void (*slot)(QAbstractItemModel*, enum Qt__Orientation, int, int) ```
void q_standarditemmodel_on_header_data_changed(void* self, void (*slot)(void*, int64_t, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_layout_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// ``` QStandardItemModel* self, void (*slot)(QAbstractItemModel*) ```
void q_standarditemmodel_on_layout_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_layout_about_to_be_changed(void* self);

/// Inherited from QAbstractItemModel
///
/// ``` QStandardItemModel* self, void (*slot)(QAbstractItemModel*) ```
void q_standarditemmodel_on_layout_about_to_be_changed(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
///
/// ``` QStandardItemModel* self, int row, int column, QModelIndex* parent ```
bool q_standarditemmodel_has_index3(void* self, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
///
/// ``` QStandardItemModel* self, int row, QModelIndex* parent ```
bool q_standarditemmodel_remove_row2(void* self, int row, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
///
/// ``` QStandardItemModel* self, int column, QModelIndex* parent ```
bool q_standarditemmodel_remove_column2(void* self, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
///
/// ``` QStandardItemModel* self, QModelIndex* index, int options ```
bool q_standarditemmodel_check_index2(void* self, void* index, int64_t options);

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
///
/// ``` QStandardItemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_standarditemmodel_data_changed3(void* self, void* topLeft, void* bottomRight, int* roles[]);

/// Inherited from QAbstractItemModel
///
/// ``` QStandardItemModel* self, void (*slot)(QAbstractItemModel*, QModelIndex*, QModelIndex*, int*[]) ```
void q_standarditemmodel_on_data_changed3(void* self, void (*slot)(void*, void*, void*, int*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QStandardItemModel* self, QPersistentModelIndex* parents[] ```
void q_standarditemmodel_layout_changed1(void* self, void* parents[]);

/// Inherited from QAbstractItemModel
///
/// ``` QStandardItemModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[]) ```
void q_standarditemmodel_on_layout_changed1(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
///
/// ``` QStandardItemModel* self, QPersistentModelIndex* parents[], enum QAbstractItemModel__LayoutChangeHint hint ```
void q_standarditemmodel_layout_changed2(void* self, void* parents[], int64_t hint);

/// Inherited from QAbstractItemModel
///
/// ``` QStandardItemModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[], enum QAbstractItemModel__LayoutChangeHint) ```
void q_standarditemmodel_on_layout_changed2(void* self, void (*slot)(void*, void*, int64_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QStandardItemModel* self, QPersistentModelIndex* parents[] ```
void q_standarditemmodel_layout_about_to_be_changed1(void* self, void* parents[]);

/// Inherited from QAbstractItemModel
///
/// ``` QStandardItemModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[]) ```
void q_standarditemmodel_on_layout_about_to_be_changed1(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
///
/// ``` QStandardItemModel* self, QPersistentModelIndex* parents[], enum QAbstractItemModel__LayoutChangeHint hint ```
void q_standarditemmodel_layout_about_to_be_changed2(void* self, void* parents[], int64_t hint);

/// Inherited from QAbstractItemModel
///
/// ``` QStandardItemModel* self, void (*slot)(QAbstractItemModel*, QPersistentModelIndex*[], enum QAbstractItemModel__LayoutChangeHint) ```
void q_standarditemmodel_on_layout_about_to_be_changed2(void* self, void (*slot)(void*, void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QStandardItemModel* self ```
const char* q_standarditemmodel_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QStandardItemModel* self, char* name ```
void q_standarditemmodel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QStandardItemModel* self ```
bool q_standarditemmodel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QStandardItemModel* self ```
bool q_standarditemmodel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QStandardItemModel* self ```
bool q_standarditemmodel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QStandardItemModel* self ```
bool q_standarditemmodel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QStandardItemModel* self, bool b ```
bool q_standarditemmodel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QStandardItemModel* self ```
QThread* q_standarditemmodel_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QStandardItemModel* self, QThread* thread ```
void q_standarditemmodel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QStandardItemModel* self, int interval ```
int32_t q_standarditemmodel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QStandardItemModel* self, int id ```
void q_standarditemmodel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QStandardItemModel* self ```
libqt_list /* of QObject* */ q_standarditemmodel_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QStandardItemModel* self, QObject* parent ```
void q_standarditemmodel_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QStandardItemModel* self, QObject* filterObj ```
void q_standarditemmodel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QStandardItemModel* self, QObject* obj ```
void q_standarditemmodel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_standarditemmodel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QStandardItemModel* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_standarditemmodel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_standarditemmodel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_standarditemmodel_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QStandardItemModel* self, const char* name, QVariant* value ```
bool q_standarditemmodel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QStandardItemModel* self, const char* name ```
QVariant* q_standarditemmodel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QStandardItemModel* self ```
const char** q_standarditemmodel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QStandardItemModel* self ```
QBindingStorage* q_standarditemmodel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QStandardItemModel* self ```
QBindingStorage* q_standarditemmodel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QStandardItemModel* self, void (*slot)(QObject*) ```
void q_standarditemmodel_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QStandardItemModel* self, const char* classname ```
bool q_standarditemmodel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QStandardItemModel* self, int interval, enum Qt__TimerType timerType ```
int32_t q_standarditemmodel_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_standarditemmodel_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QStandardItemModel* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_standarditemmodel_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QStandardItemModel* self, QObject* param1 ```
void q_standarditemmodel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QStandardItemModel* self, void (*slot)(QObject*, QObject*) ```
void q_standarditemmodel_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_standarditemmodel_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, int row, int column, QModelIndex* idx ```
QModelIndex* q_standarditemmodel_qbase_sibling(void* self, int row, int column, void* idx);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* (*slot)(QStandardItemModel*, int, int, QModelIndex*) ```
void q_standarditemmodel_on_sibling(void* self, QModelIndex* (*slot)(void*, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_standarditemmodel_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QMimeData* data, enum Qt__DropAction action, int row, int column, QModelIndex* parent ```
bool q_standarditemmodel_qbase_can_drop_mime_data(void* self, void* data, int64_t action, int row, int column, void* parent);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, QMimeData*, enum Qt__DropAction, int, int, QModelIndex*) ```
void q_standarditemmodel_on_can_drop_mime_data(void* self, bool (*slot)(void*, void*, int64_t, int, int, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self ```
int64_t q_standarditemmodel_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self ```
int64_t q_standarditemmodel_qbase_supported_drag_actions(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, int64_t (*slot)() ```
void q_standarditemmodel_on_supported_drag_actions(void* self, int64_t (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_standarditemmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_standarditemmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_standarditemmodel_on_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_standarditemmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild ```
bool q_standarditemmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_standarditemmodel_on_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* parent ```
void q_standarditemmodel_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* parent ```
void q_standarditemmodel_qbase_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)(QStandardItemModel*, QModelIndex*) ```
void q_standarditemmodel_on_fetch_more(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* parent ```
bool q_standarditemmodel_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* parent ```
bool q_standarditemmodel_qbase_can_fetch_more(void* self, void* parent);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, QModelIndex*) ```
void q_standarditemmodel_on_can_fetch_more(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* index ```
QModelIndex* q_standarditemmodel_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* index ```
QModelIndex* q_standarditemmodel_qbase_buddy(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* (*slot)(QStandardItemModel*, QModelIndex*) ```
void q_standarditemmodel_on_buddy(void* self, QModelIndex* (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_standarditemmodel_match(void* self, void* start, int role, void* value, int hits, int64_t flags);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags ```
libqt_list /* of QModelIndex* */ q_standarditemmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int64_t flags);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, libqt_list /* of QModelIndex* */ (*slot)(QStandardItemModel*, QModelIndex*, int, QVariant*, int, int) ```
void q_standarditemmodel_on_match(void* self, libqt_list /* of QModelIndex* */ (*slot)(void*, void*, int, void*, int, int64_t));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* index ```
QSize* q_standarditemmodel_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* index ```
QSize* q_standarditemmodel_qbase_span(void* self, void* index);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, QSize* (*slot)(QStandardItemModel*, QModelIndex*) ```
void q_standarditemmodel_on_span(void* self, QSize* (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self ```
bool q_standarditemmodel_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self ```
bool q_standarditemmodel_qbase_submit(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, bool (*slot)() ```
void q_standarditemmodel_on_submit(void* self, bool (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_qbase_revert(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)() ```
void q_standarditemmodel_on_revert(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_qbase_reset_internal_data(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)() ```
void q_standarditemmodel_on_reset_internal_data(void* self, void (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QEvent* event ```
bool q_standarditemmodel_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QEvent* event ```
bool q_standarditemmodel_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, QEvent*) ```
void q_standarditemmodel_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QObject* watched, QEvent* event ```
bool q_standarditemmodel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QObject* watched, QEvent* event ```
bool q_standarditemmodel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, QObject*, QEvent*) ```
void q_standarditemmodel_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QTimerEvent* event ```
void q_standarditemmodel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QTimerEvent* event ```
void q_standarditemmodel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)(QStandardItemModel*, QTimerEvent*) ```
void q_standarditemmodel_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QChildEvent* event ```
void q_standarditemmodel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QChildEvent* event ```
void q_standarditemmodel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)(QStandardItemModel*, QChildEvent*) ```
void q_standarditemmodel_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QEvent* event ```
void q_standarditemmodel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QEvent* event ```
void q_standarditemmodel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)(QStandardItemModel*, QEvent*) ```
void q_standarditemmodel_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QMetaMethod* signal ```
void q_standarditemmodel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QMetaMethod* signal ```
void q_standarditemmodel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)(QStandardItemModel*, QMetaMethod*) ```
void q_standarditemmodel_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QMetaMethod* signal ```
void q_standarditemmodel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QMetaMethod* signal ```
void q_standarditemmodel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)(QStandardItemModel*, QMetaMethod*) ```
void q_standarditemmodel_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, int row, int column ```
QModelIndex* q_standarditemmodel_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, int row, int column ```
QModelIndex* q_standarditemmodel_qbase_create_index(void* self, int row, int column);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* (*slot)(QStandardItemModel*, int, int) ```
void q_standarditemmodel_on_create_index(void* self, QModelIndex* (*slot)(void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* indexes[], QDataStream* stream ```
void q_standarditemmodel_encode_data(void* self, void* indexes[], void* stream);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* indexes[], QDataStream* stream ```
void q_standarditemmodel_qbase_encode_data(void* self, void* indexes[], void* stream);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)(QStandardItemModel*, QModelIndex*[], QDataStream*) ```
void q_standarditemmodel_on_encode_data(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_standarditemmodel_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, int row, int column, QModelIndex* parent, QDataStream* stream ```
bool q_standarditemmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, int, int, QModelIndex*, QDataStream*) ```
void q_standarditemmodel_on_decode_data(void* self, bool (*slot)(void*, int, int, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* parent, int first, int last ```
void q_standarditemmodel_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* parent, int first, int last ```
void q_standarditemmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)(QStandardItemModel*, QModelIndex*, int, int) ```
void q_standarditemmodel_on_begin_insert_rows(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_qbase_end_insert_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)() ```
void q_standarditemmodel_on_end_insert_rows(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* parent, int first, int last ```
void q_standarditemmodel_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* parent, int first, int last ```
void q_standarditemmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)(QStandardItemModel*, QModelIndex*, int, int) ```
void q_standarditemmodel_on_begin_remove_rows(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_qbase_end_remove_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)() ```
void q_standarditemmodel_on_end_remove_rows(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_standarditemmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow ```
bool q_standarditemmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_standarditemmodel_on_begin_move_rows(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_qbase_end_move_rows(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)() ```
void q_standarditemmodel_on_end_move_rows(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* parent, int first, int last ```
void q_standarditemmodel_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* parent, int first, int last ```
void q_standarditemmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)(QStandardItemModel*, QModelIndex*, int, int) ```
void q_standarditemmodel_on_begin_insert_columns(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_qbase_end_insert_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)() ```
void q_standarditemmodel_on_end_insert_columns(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* parent, int first, int last ```
void q_standarditemmodel_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* parent, int first, int last ```
void q_standarditemmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)(QStandardItemModel*, QModelIndex*, int, int) ```
void q_standarditemmodel_on_begin_remove_columns(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_qbase_end_remove_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)() ```
void q_standarditemmodel_on_end_remove_columns(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_standarditemmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn ```
bool q_standarditemmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, QModelIndex*, int, int, QModelIndex*, int) ```
void q_standarditemmodel_on_begin_move_columns(void* self, bool (*slot)(void*, void*, int, int, void*, int));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_qbase_end_move_columns(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)() ```
void q_standarditemmodel_on_end_move_columns(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_qbase_begin_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)() ```
void q_standarditemmodel_on_begin_reset_model(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_qbase_end_reset_model(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)() ```
void q_standarditemmodel_on_end_reset_model(void* self, void (*slot)());

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* from, QModelIndex* to ```
void q_standarditemmodel_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* from, QModelIndex* to ```
void q_standarditemmodel_qbase_change_persistent_index(void* self, void* from, void* to);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)(QStandardItemModel*, QModelIndex*, QModelIndex*) ```
void q_standarditemmodel_on_change_persistent_index(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* from[], QModelIndex* to[] ```
void q_standarditemmodel_change_persistent_index_list(void* self, void* from[], void* to[]);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QModelIndex* from[], QModelIndex* to[] ```
void q_standarditemmodel_qbase_change_persistent_index_list(void* self, void* from[], void* to[]);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, void (*slot)(QStandardItemModel*, QModelIndex*[], QModelIndex*[]) ```
void q_standarditemmodel_on_change_persistent_index_list(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemModel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self ```
libqt_list /* of QModelIndex* */ q_standarditemmodel_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self ```
libqt_list /* of QModelIndex* */ q_standarditemmodel_qbase_persistent_index_list(void* self);

/// Inherited from QAbstractItemModel
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_standarditemmodel_on_persistent_index_list(void* self, libqt_list /* of QModelIndex* */ (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self ```
QObject* q_standarditemmodel_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self ```
QObject* q_standarditemmodel_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, QObject* (*slot)() ```
void q_standarditemmodel_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self ```
int32_t q_standarditemmodel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self ```
int32_t q_standarditemmodel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, int32_t (*slot)() ```
void q_standarditemmodel_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, const char* signal ```
int32_t q_standarditemmodel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, const char* signal ```
int32_t q_standarditemmodel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, int32_t (*slot)(QStandardItemModel*, const char*) ```
void q_standarditemmodel_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStandardItemModel* self, QMetaMethod* signal ```
bool q_standarditemmodel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStandardItemModel* self, QMetaMethod* signal ```
bool q_standarditemmodel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStandardItemModel* self, bool (*slot)(QStandardItemModel*, QMetaMethod*) ```
void q_standarditemmodel_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QStandardItemModel* self ```
void q_standarditemmodel_delete(void* self);

/// https://doc.qt.io/qt-6/qstandarditemmodel.html#types

typedef enum {
    QSTANDARDITEM_ITEMTYPE_TYPE = 0,
    QSTANDARDITEM_ITEMTYPE_USERTYPE = 1000
} QStandardItem__ItemType;

#endif
