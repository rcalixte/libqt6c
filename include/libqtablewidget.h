#pragma once
#ifndef SRCQT6C_LIBQTABLEWIDGET_H
#define SRCQT6C_LIBQTABLEWIDGET_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtablewidgetselectionrange.html

/// q_tablewidgetselectionrange_new constructs a new QTableWidgetSelectionRange object.
///
/// ``` QTableWidgetSelectionRange* other ```
QTableWidgetSelectionRange* q_tablewidgetselectionrange_new(void* other);

/// q_tablewidgetselectionrange_new2 constructs a new QTableWidgetSelectionRange object and invalidates the source QTableWidgetSelectionRange object.
///
/// ``` QTableWidgetSelectionRange* other ```
QTableWidgetSelectionRange* q_tablewidgetselectionrange_new2(void* other);

/// q_tablewidgetselectionrange_new3 constructs a new QTableWidgetSelectionRange object.
///
///
QTableWidgetSelectionRange* q_tablewidgetselectionrange_new3();

/// q_tablewidgetselectionrange_new4 constructs a new QTableWidgetSelectionRange object.
///
/// ``` int top, int left, int bottom, int right ```
QTableWidgetSelectionRange* q_tablewidgetselectionrange_new4(int top, int left, int bottom, int right);

/// q_tablewidgetselectionrange_copy_assign shallow copies `other` into `self`.
///
/// ``` QTableWidgetSelectionRange* self, QTableWidgetSelectionRange* other ```
void q_tablewidgetselectionrange_copy_assign(void* self, void* other);

/// q_tablewidgetselectionrange_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QTableWidgetSelectionRange* self, QTableWidgetSelectionRange* other ```
void q_tablewidgetselectionrange_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#topRow)
///
/// ``` QTableWidgetSelectionRange* self ```
int32_t q_tablewidgetselectionrange_top_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#bottomRow)
///
/// ``` QTableWidgetSelectionRange* self ```
int32_t q_tablewidgetselectionrange_bottom_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#leftColumn)
///
/// ``` QTableWidgetSelectionRange* self ```
int32_t q_tablewidgetselectionrange_left_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#rightColumn)
///
/// ``` QTableWidgetSelectionRange* self ```
int32_t q_tablewidgetselectionrange_right_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#rowCount)
///
/// ``` QTableWidgetSelectionRange* self ```
int32_t q_tablewidgetselectionrange_row_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#columnCount)
///
/// ``` QTableWidgetSelectionRange* self ```
int32_t q_tablewidgetselectionrange_column_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetselectionrange.html#dtor.QTableWidgetSelectionRange)
///
/// Delete this object from C++ memory.
///
/// ``` QTableWidgetSelectionRange* self ```
void q_tablewidgetselectionrange_delete(void* self);

/// https://doc.qt.io/qt-6/qtablewidgetitem.html

/// q_tablewidgetitem_new constructs a new QTableWidgetItem object.
///
///
QTableWidgetItem* q_tablewidgetitem_new();

/// q_tablewidgetitem_new2 constructs a new QTableWidgetItem object.
///
/// ``` const char* text ```
QTableWidgetItem* q_tablewidgetitem_new2(const char* text);

/// q_tablewidgetitem_new3 constructs a new QTableWidgetItem object.
///
/// ``` QIcon* icon, const char* text ```
QTableWidgetItem* q_tablewidgetitem_new3(void* icon, const char* text);

/// q_tablewidgetitem_new4 constructs a new QTableWidgetItem object.
///
/// ``` QTableWidgetItem* other ```
QTableWidgetItem* q_tablewidgetitem_new4(void* other);

/// q_tablewidgetitem_new5 constructs a new QTableWidgetItem object.
///
/// ``` int typeVal ```
QTableWidgetItem* q_tablewidgetitem_new5(int typeVal);

/// q_tablewidgetitem_new6 constructs a new QTableWidgetItem object.
///
/// ``` const char* text, int typeVal ```
QTableWidgetItem* q_tablewidgetitem_new6(const char* text, int typeVal);

/// q_tablewidgetitem_new7 constructs a new QTableWidgetItem object.
///
/// ``` QIcon* icon, const char* text, int typeVal ```
QTableWidgetItem* q_tablewidgetitem_new7(void* icon, const char* text, int typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#clone)
///
/// ``` QTableWidgetItem* self ```
QTableWidgetItem* q_tablewidgetitem_clone(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#clone)
///
/// Allows for overriding the related default method
///
/// ``` QTableWidgetItem* self, QTableWidgetItem* (*slot)() ```
void q_tablewidgetitem_on_clone(void* self, QTableWidgetItem* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#clone)
///
/// Base class method implementation
///
/// ``` QTableWidgetItem* self ```
QTableWidgetItem* q_tablewidgetitem_qbase_clone(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#tableWidget)
///
/// ``` QTableWidgetItem* self ```
QTableWidget* q_tablewidgetitem_table_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#row)
///
/// ``` QTableWidgetItem* self ```
int32_t q_tablewidgetitem_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#column)
///
/// ``` QTableWidgetItem* self ```
int32_t q_tablewidgetitem_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setSelected)
///
/// ``` QTableWidgetItem* self, bool selectVal ```
void q_tablewidgetitem_set_selected(void* self, bool selectVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#isSelected)
///
/// ``` QTableWidgetItem* self ```
bool q_tablewidgetitem_is_selected(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#flags)
///
/// ``` QTableWidgetItem* self ```
int64_t q_tablewidgetitem_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setFlags)
///
/// ``` QTableWidgetItem* self, int flags ```
void q_tablewidgetitem_set_flags(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#text)
///
/// ``` QTableWidgetItem* self ```
const char* q_tablewidgetitem_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setText)
///
/// ``` QTableWidgetItem* self, const char* text ```
void q_tablewidgetitem_set_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#icon)
///
/// ``` QTableWidgetItem* self ```
QIcon* q_tablewidgetitem_icon(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setIcon)
///
/// ``` QTableWidgetItem* self, QIcon* icon ```
void q_tablewidgetitem_set_icon(void* self, void* icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#statusTip)
///
/// ``` QTableWidgetItem* self ```
const char* q_tablewidgetitem_status_tip(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setStatusTip)
///
/// ``` QTableWidgetItem* self, const char* statusTip ```
void q_tablewidgetitem_set_status_tip(void* self, const char* statusTip);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#toolTip)
///
/// ``` QTableWidgetItem* self ```
const char* q_tablewidgetitem_tool_tip(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setToolTip)
///
/// ``` QTableWidgetItem* self, const char* toolTip ```
void q_tablewidgetitem_set_tool_tip(void* self, const char* toolTip);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#whatsThis)
///
/// ``` QTableWidgetItem* self ```
const char* q_tablewidgetitem_whats_this(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setWhatsThis)
///
/// ``` QTableWidgetItem* self, const char* whatsThis ```
void q_tablewidgetitem_set_whats_this(void* self, const char* whatsThis);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#font)
///
/// ``` QTableWidgetItem* self ```
QFont* q_tablewidgetitem_font(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setFont)
///
/// ``` QTableWidgetItem* self, QFont* font ```
void q_tablewidgetitem_set_font(void* self, void* font);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#textAlignment)
///
/// ``` QTableWidgetItem* self ```
int32_t q_tablewidgetitem_text_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setTextAlignment)
///
/// ``` QTableWidgetItem* self, int alignment ```
void q_tablewidgetitem_set_text_alignment(void* self, int alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setTextAlignment)
///
/// ``` QTableWidgetItem* self, enum Qt__AlignmentFlag alignment ```
void q_tablewidgetitem_set_text_alignment_with_alignment(void* self, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setTextAlignment)
///
/// ``` QTableWidgetItem* self, int alignment ```
void q_tablewidgetitem_set_text_alignment2(void* self, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#background)
///
/// ``` QTableWidgetItem* self ```
QBrush* q_tablewidgetitem_background(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setBackground)
///
/// ``` QTableWidgetItem* self, QBrush* brush ```
void q_tablewidgetitem_set_background(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#foreground)
///
/// ``` QTableWidgetItem* self ```
QBrush* q_tablewidgetitem_foreground(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setForeground)
///
/// ``` QTableWidgetItem* self, QBrush* brush ```
void q_tablewidgetitem_set_foreground(void* self, void* brush);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#checkState)
///
/// ``` QTableWidgetItem* self ```
int64_t q_tablewidgetitem_check_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setCheckState)
///
/// ``` QTableWidgetItem* self, enum Qt__CheckState state ```
void q_tablewidgetitem_set_check_state(void* self, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#sizeHint)
///
/// ``` QTableWidgetItem* self ```
QSize* q_tablewidgetitem_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setSizeHint)
///
/// ``` QTableWidgetItem* self, QSize* size ```
void q_tablewidgetitem_set_size_hint(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#data)
///
/// ``` QTableWidgetItem* self, int role ```
QVariant* q_tablewidgetitem_data(void* self, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#data)
///
/// Allows for overriding the related default method
///
/// ``` QTableWidgetItem* self, QVariant* (*slot)(QTableWidgetItem*, int) ```
void q_tablewidgetitem_on_data(void* self, QVariant* (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#data)
///
/// Base class method implementation
///
/// ``` QTableWidgetItem* self, int role ```
QVariant* q_tablewidgetitem_qbase_data(void* self, int role);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setData)
///
/// ``` QTableWidgetItem* self, int role, QVariant* value ```
void q_tablewidgetitem_set_data(void* self, int role, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setData)
///
/// Allows for overriding the related default method
///
/// ``` QTableWidgetItem* self, void (*slot)(QTableWidgetItem*, int, QVariant*) ```
void q_tablewidgetitem_on_set_data(void* self, void (*slot)(void*, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#setData)
///
/// Base class method implementation
///
/// ``` QTableWidgetItem* self, int role, QVariant* value ```
void q_tablewidgetitem_qbase_set_data(void* self, int role, void* value);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#operator<)
///
/// ``` QTableWidgetItem* self, QTableWidgetItem* other ```
bool q_tablewidgetitem_operator_lesser(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#operator<)
///
/// Allows for overriding the related default method
///
/// ``` QTableWidgetItem* self, bool (*slot)(QTableWidgetItem*, QTableWidgetItem*) ```
void q_tablewidgetitem_on_operator_lesser(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#operator<)
///
/// Base class method implementation
///
/// ``` QTableWidgetItem* self, QTableWidgetItem* other ```
bool q_tablewidgetitem_qbase_operator_lesser(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#read)
///
/// ``` QTableWidgetItem* self, QDataStream* in ```
void q_tablewidgetitem_read(void* self, void* in);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#read)
///
/// Allows for overriding the related default method
///
/// ``` QTableWidgetItem* self, void (*slot)(QTableWidgetItem*, QDataStream*) ```
void q_tablewidgetitem_on_read(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#read)
///
/// Base class method implementation
///
/// ``` QTableWidgetItem* self, QDataStream* in ```
void q_tablewidgetitem_qbase_read(void* self, void* in);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#write)
///
/// ``` QTableWidgetItem* self, QDataStream* out ```
void q_tablewidgetitem_write(void* self, void* out);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#write)
///
/// Allows for overriding the related default method
///
/// ``` QTableWidgetItem* self, void (*slot)(QTableWidgetItem*, QDataStream*) ```
void q_tablewidgetitem_on_write(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#write)
///
/// Base class method implementation
///
/// ``` QTableWidgetItem* self, QDataStream* out ```
void q_tablewidgetitem_qbase_write(void* self, void* out);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#operator=)
///
/// ``` QTableWidgetItem* self, QTableWidgetItem* other ```
void q_tablewidgetitem_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#type)
///
/// ``` QTableWidgetItem* self ```
int32_t q_tablewidgetitem_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidgetitem.html#dtor.QTableWidgetItem)
///
/// Delete this object from C++ memory.
///
/// ``` QTableWidgetItem* self ```
void q_tablewidgetitem_delete(void* self);

/// https://doc.qt.io/qt-6/qtablewidget.html

/// q_tablewidget_new constructs a new QTableWidget object.
///
/// ``` QWidget* parent ```
QTableWidget* q_tablewidget_new(void* parent);

/// q_tablewidget_new2 constructs a new QTableWidget object.
///
///
QTableWidget* q_tablewidget_new2();

/// q_tablewidget_new3 constructs a new QTableWidget object.
///
/// ``` int rows, int columns ```
QTableWidget* q_tablewidget_new3(int rows, int columns);

/// q_tablewidget_new4 constructs a new QTableWidget object.
///
/// ``` int rows, int columns, QWidget* parent ```
QTableWidget* q_tablewidget_new4(int rows, int columns, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTableWidget* self ```
const QMetaObject* q_tablewidget_meta_object(void* self);

/// ``` QTableWidget* self, const char* param1 ```
void* q_tablewidget_metacast(void* self, const char* param1);

/// ``` QTableWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_tablewidget_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QTableWidget* self, int32_t (*slot)(QTableWidget*, enum QMetaObject__Call, int, void*) ```
void q_tablewidget_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QTableWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_tablewidget_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_tablewidget_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setRowCount)
///
/// ``` QTableWidget* self, int rows ```
void q_tablewidget_set_row_count(void* self, int rows);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#rowCount)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_row_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setColumnCount)
///
/// ``` QTableWidget* self, int columns ```
void q_tablewidget_set_column_count(void* self, int columns);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#columnCount)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_column_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#row)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
int32_t q_tablewidget_row(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#column)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
int32_t q_tablewidget_column(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#item)
///
/// ``` QTableWidget* self, int row, int column ```
QTableWidgetItem* q_tablewidget_item(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setItem)
///
/// ``` QTableWidget* self, int row, int column, QTableWidgetItem* item ```
void q_tablewidget_set_item(void* self, int row, int column, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#takeItem)
///
/// ``` QTableWidget* self, int row, int column ```
QTableWidgetItem* q_tablewidget_take_item(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#items)
///
/// ``` QTableWidget* self, QMimeData* data ```
libqt_list /* of QTableWidgetItem* */ q_tablewidget_items(void* self, void* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#indexFromItem)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
QModelIndex* q_tablewidget_index_from_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemFromIndex)
///
/// ``` QTableWidget* self, QModelIndex* index ```
QTableWidgetItem* q_tablewidget_item_from_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#verticalHeaderItem)
///
/// ``` QTableWidget* self, int row ```
QTableWidgetItem* q_tablewidget_vertical_header_item(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setVerticalHeaderItem)
///
/// ``` QTableWidget* self, int row, QTableWidgetItem* item ```
void q_tablewidget_set_vertical_header_item(void* self, int row, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#takeVerticalHeaderItem)
///
/// ``` QTableWidget* self, int row ```
QTableWidgetItem* q_tablewidget_take_vertical_header_item(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#horizontalHeaderItem)
///
/// ``` QTableWidget* self, int column ```
QTableWidgetItem* q_tablewidget_horizontal_header_item(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setHorizontalHeaderItem)
///
/// ``` QTableWidget* self, int column, QTableWidgetItem* item ```
void q_tablewidget_set_horizontal_header_item(void* self, int column, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#takeHorizontalHeaderItem)
///
/// ``` QTableWidget* self, int column ```
QTableWidgetItem* q_tablewidget_take_horizontal_header_item(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setVerticalHeaderLabels)
///
/// ``` QTableWidget* self, const char* labels[] ```
void q_tablewidget_set_vertical_header_labels(void* self, const char* labels[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setHorizontalHeaderLabels)
///
/// ``` QTableWidget* self, const char* labels[] ```
void q_tablewidget_set_horizontal_header_labels(void* self, const char* labels[]);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#currentRow)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_current_row(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#currentColumn)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_current_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#currentItem)
///
/// ``` QTableWidget* self ```
QTableWidgetItem* q_tablewidget_current_item(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setCurrentItem)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
void q_tablewidget_set_current_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setCurrentItem)
///
/// ``` QTableWidget* self, QTableWidgetItem* item, int command ```
void q_tablewidget_set_current_item2(void* self, void* item, int64_t command);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setCurrentCell)
///
/// ``` QTableWidget* self, int row, int column ```
void q_tablewidget_set_current_cell(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setCurrentCell)
///
/// ``` QTableWidget* self, int row, int column, int command ```
void q_tablewidget_set_current_cell2(void* self, int row, int column, int64_t command);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#sortItems)
///
/// ``` QTableWidget* self, int column ```
void q_tablewidget_sort_items(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setSortingEnabled)
///
/// ``` QTableWidget* self, bool enable ```
void q_tablewidget_set_sorting_enabled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#isSortingEnabled)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_sorting_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#editItem)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
void q_tablewidget_edit_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#openPersistentEditor)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
void q_tablewidget_open_persistent_editor(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#closePersistentEditor)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
void q_tablewidget_close_persistent_editor(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#isPersistentEditorOpen)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
bool q_tablewidget_is_persistent_editor_open(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellWidget)
///
/// ``` QTableWidget* self, int row, int column ```
QWidget* q_tablewidget_cell_widget(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setCellWidget)
///
/// ``` QTableWidget* self, int row, int column, QWidget* widget ```
void q_tablewidget_set_cell_widget(void* self, int row, int column, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#removeCellWidget)
///
/// ``` QTableWidget* self, int row, int column ```
void q_tablewidget_remove_cell_widget(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setRangeSelected)
///
/// ``` QTableWidget* self, QTableWidgetSelectionRange* range, bool selectVal ```
void q_tablewidget_set_range_selected(void* self, void* range, bool selectVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#selectedRanges)
///
/// ``` QTableWidget* self ```
libqt_list /* of QTableWidgetSelectionRange* */ q_tablewidget_selected_ranges(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#selectedItems)
///
/// ``` QTableWidget* self ```
libqt_list /* of QTableWidgetItem* */ q_tablewidget_selected_items(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#findItems)
///
/// ``` QTableWidget* self, const char* text, int flags ```
libqt_list /* of QTableWidgetItem* */ q_tablewidget_find_items(void* self, const char* text, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#visualRow)
///
/// ``` QTableWidget* self, int logicalRow ```
int32_t q_tablewidget_visual_row(void* self, int logicalRow);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#visualColumn)
///
/// ``` QTableWidget* self, int logicalColumn ```
int32_t q_tablewidget_visual_column(void* self, int logicalColumn);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemAt)
///
/// ``` QTableWidget* self, QPoint* p ```
QTableWidgetItem* q_tablewidget_item_at(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemAt)
///
/// ``` QTableWidget* self, int x, int y ```
QTableWidgetItem* q_tablewidget_item_at2(void* self, int x, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#visualItemRect)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
QRect* q_tablewidget_visual_item_rect(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemPrototype)
///
/// ``` QTableWidget* self ```
const QTableWidgetItem* q_tablewidget_item_prototype(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#setItemPrototype)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
void q_tablewidget_set_item_prototype(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#scrollToItem)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
void q_tablewidget_scroll_to_item(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#insertRow)
///
/// ``` QTableWidget* self, int row ```
void q_tablewidget_insert_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#insertColumn)
///
/// ``` QTableWidget* self, int column ```
void q_tablewidget_insert_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#removeRow)
///
/// ``` QTableWidget* self, int row ```
void q_tablewidget_remove_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#removeColumn)
///
/// ``` QTableWidget* self, int column ```
void q_tablewidget_remove_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#clear)
///
/// ``` QTableWidget* self ```
void q_tablewidget_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#clearContents)
///
/// ``` QTableWidget* self ```
void q_tablewidget_clear_contents(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemPressed)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
void q_tablewidget_item_pressed(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemPressed)
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QTableWidgetItem*) ```
void q_tablewidget_on_item_pressed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemClicked)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
void q_tablewidget_item_clicked(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemClicked)
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QTableWidgetItem*) ```
void q_tablewidget_on_item_clicked(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemDoubleClicked)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
void q_tablewidget_item_double_clicked(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemDoubleClicked)
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QTableWidgetItem*) ```
void q_tablewidget_on_item_double_clicked(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemActivated)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
void q_tablewidget_item_activated(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemActivated)
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QTableWidgetItem*) ```
void q_tablewidget_on_item_activated(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemEntered)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
void q_tablewidget_item_entered(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemEntered)
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QTableWidgetItem*) ```
void q_tablewidget_on_item_entered(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemChanged)
///
/// ``` QTableWidget* self, QTableWidgetItem* item ```
void q_tablewidget_item_changed(void* self, void* item);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemChanged)
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QTableWidgetItem*) ```
void q_tablewidget_on_item_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#currentItemChanged)
///
/// ``` QTableWidget* self, QTableWidgetItem* current, QTableWidgetItem* previous ```
void q_tablewidget_current_item_changed(void* self, void* current, void* previous);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#currentItemChanged)
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QTableWidgetItem*, QTableWidgetItem*) ```
void q_tablewidget_on_current_item_changed(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemSelectionChanged)
///
/// ``` QTableWidget* self ```
void q_tablewidget_item_selection_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#itemSelectionChanged)
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*) ```
void q_tablewidget_on_item_selection_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellPressed)
///
/// ``` QTableWidget* self, int row, int column ```
void q_tablewidget_cell_pressed(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellPressed)
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int, int) ```
void q_tablewidget_on_cell_pressed(void* self, void (*slot)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellClicked)
///
/// ``` QTableWidget* self, int row, int column ```
void q_tablewidget_cell_clicked(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellClicked)
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int, int) ```
void q_tablewidget_on_cell_clicked(void* self, void (*slot)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellDoubleClicked)
///
/// ``` QTableWidget* self, int row, int column ```
void q_tablewidget_cell_double_clicked(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellDoubleClicked)
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int, int) ```
void q_tablewidget_on_cell_double_clicked(void* self, void (*slot)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellActivated)
///
/// ``` QTableWidget* self, int row, int column ```
void q_tablewidget_cell_activated(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellActivated)
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int, int) ```
void q_tablewidget_on_cell_activated(void* self, void (*slot)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellEntered)
///
/// ``` QTableWidget* self, int row, int column ```
void q_tablewidget_cell_entered(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellEntered)
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int, int) ```
void q_tablewidget_on_cell_entered(void* self, void (*slot)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellChanged)
///
/// ``` QTableWidget* self, int row, int column ```
void q_tablewidget_cell_changed(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#cellChanged)
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int, int) ```
void q_tablewidget_on_cell_changed(void* self, void (*slot)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#currentCellChanged)
///
/// ``` QTableWidget* self, int currentRow, int currentColumn, int previousRow, int previousColumn ```
void q_tablewidget_current_cell_changed(void* self, int currentRow, int currentColumn, int previousRow, int previousColumn);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#currentCellChanged)
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int, int, int, int) ```
void q_tablewidget_on_current_cell_changed(void* self, void (*slot)(void*, int, int, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#event)
///
/// ``` QTableWidget* self, QEvent* e ```
bool q_tablewidget_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QTableWidget* self, bool (*slot)(QTableWidget*, QEvent*) ```
void q_tablewidget_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#event)
///
/// Base class method implementation
///
/// ``` QTableWidget* self, QEvent* e ```
bool q_tablewidget_qbase_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#mimeTypes)
///
/// ``` QTableWidget* self ```
const char** q_tablewidget_mime_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#mimeTypes)
///
/// Allows for overriding the related default method
///
/// ``` QTableWidget* self, const char** (*slot)() ```
void q_tablewidget_on_mime_types(void* self, const char** (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#mimeTypes)
///
/// Base class method implementation
///
/// ``` QTableWidget* self ```
const char** q_tablewidget_qbase_mime_types(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#mimeData)
///
/// ``` QTableWidget* self, libqt_list /* of QTableWidgetItem* */ items ```
QMimeData* q_tablewidget_mime_data(void* self, libqt_list items);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#mimeData)
///
/// Allows for overriding the related default method
///
/// ``` QTableWidget* self, QMimeData* (*slot)(QTableWidget*, libqt_list /* of QTableWidgetItem* */ items ) ```
void q_tablewidget_on_mime_data(void* self, QMimeData* (*slot)(void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#mimeData)
///
/// Base class method implementation
///
/// ``` QTableWidget* self, libqt_list /* of QTableWidgetItem* */ items ```
QMimeData* q_tablewidget_qbase_mime_data(void* self, libqt_list items);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#dropMimeData)
///
/// ``` QTableWidget* self, int row, int column, QMimeData* data, enum Qt__DropAction action ```
bool q_tablewidget_drop_mime_data(void* self, int row, int column, void* data, int64_t action);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#dropMimeData)
///
/// Allows for overriding the related default method
///
/// ``` QTableWidget* self, bool (*slot)(QTableWidget*, int, int, QMimeData*, enum Qt__DropAction) ```
void q_tablewidget_on_drop_mime_data(void* self, bool (*slot)(void*, int, int, void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#dropMimeData)
///
/// Base class method implementation
///
/// ``` QTableWidget* self, int row, int column, QMimeData* data, enum Qt__DropAction action ```
bool q_tablewidget_qbase_drop_mime_data(void* self, int row, int column, void* data, int64_t action);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#supportedDropActions)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_supported_drop_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#supportedDropActions)
///
/// Allows for overriding the related default method
///
/// ``` QTableWidget* self, int64_t (*slot)() ```
void q_tablewidget_on_supported_drop_actions(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#supportedDropActions)
///
/// Base class method implementation
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_qbase_supported_drop_actions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#dropEvent)
///
/// ``` QTableWidget* self, QDropEvent* event ```
void q_tablewidget_drop_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#dropEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QDropEvent*) ```
void q_tablewidget_on_drop_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#dropEvent)
///
/// Base class method implementation
///
/// ``` QTableWidget* self, QDropEvent* event ```
void q_tablewidget_qbase_drop_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_tablewidget_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_tablewidget_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#sortItems)
///
/// ``` QTableWidget* self, int column, enum Qt__SortOrder order ```
void q_tablewidget_sort_items2(void* self, int column, int64_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#scrollToItem)
///
/// ``` QTableWidget* self, QTableWidgetItem* item, enum QAbstractItemView__ScrollHint hint ```
void q_tablewidget_scroll_to_item2(void* self, void* item, int64_t hint);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setModel)
///
/// ``` QTableWidget* self, QAbstractItemModel* model ```
void q_tablewidget_set_model(void* self, void* model);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setModel)
///
/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QAbstractItemModel*) ```
void q_tablewidget_on_set_model(void* self, void (*slot)(void*, void*));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setModel)
///
/// Base class method implementation
///
/// ``` QTableWidget* self, QAbstractItemModel* model ```
void q_tablewidget_qbase_set_model(void* self, void* model);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalHeader)
///
/// ``` QTableWidget* self ```
QHeaderView* q_tablewidget_horizontal_header(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalHeader)
///
/// ``` QTableWidget* self ```
QHeaderView* q_tablewidget_vertical_header(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setHorizontalHeader)
///
/// ``` QTableWidget* self, QHeaderView* header ```
void q_tablewidget_set_horizontal_header(void* self, void* header);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setVerticalHeader)
///
/// ``` QTableWidget* self, QHeaderView* header ```
void q_tablewidget_set_vertical_header(void* self, void* header);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowViewportPosition)
///
/// ``` QTableWidget* self, int row ```
int32_t q_tablewidget_row_viewport_position(void* self, int row);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowAt)
///
/// ``` QTableWidget* self, int y ```
int32_t q_tablewidget_row_at(void* self, int y);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setRowHeight)
///
/// ``` QTableWidget* self, int row, int height ```
void q_tablewidget_set_row_height(void* self, int row, int height);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowHeight)
///
/// ``` QTableWidget* self, int row ```
int32_t q_tablewidget_row_height(void* self, int row);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnViewportPosition)
///
/// ``` QTableWidget* self, int column ```
int32_t q_tablewidget_column_viewport_position(void* self, int column);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnAt)
///
/// ``` QTableWidget* self, int x ```
int32_t q_tablewidget_column_at(void* self, int x);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setColumnWidth)
///
/// ``` QTableWidget* self, int column, int width ```
void q_tablewidget_set_column_width(void* self, int column, int width);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnWidth)
///
/// ``` QTableWidget* self, int column ```
int32_t q_tablewidget_column_width(void* self, int column);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isRowHidden)
///
/// ``` QTableWidget* self, int row ```
bool q_tablewidget_is_row_hidden(void* self, int row);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setRowHidden)
///
/// ``` QTableWidget* self, int row, bool hide ```
void q_tablewidget_set_row_hidden(void* self, int row, bool hide);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isColumnHidden)
///
/// ``` QTableWidget* self, int column ```
bool q_tablewidget_is_column_hidden(void* self, int column);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setColumnHidden)
///
/// ``` QTableWidget* self, int column, bool hide ```
void q_tablewidget_set_column_hidden(void* self, int column, bool hide);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#showGrid)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_show_grid(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#gridStyle)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_grid_style(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setGridStyle)
///
/// ``` QTableWidget* self, enum Qt__PenStyle style ```
void q_tablewidget_set_grid_style(void* self, int64_t style);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setWordWrap)
///
/// ``` QTableWidget* self, bool on ```
void q_tablewidget_set_word_wrap(void* self, bool on);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#wordWrap)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_word_wrap(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setCornerButtonEnabled)
///
/// ``` QTableWidget* self, bool enable ```
void q_tablewidget_set_corner_button_enabled(void* self, bool enable);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isCornerButtonEnabled)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_corner_button_enabled(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSpan)
///
/// ``` QTableWidget* self, int row, int column, int rowSpan, int columnSpan ```
void q_tablewidget_set_span(void* self, int row, int column, int rowSpan, int columnSpan);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowSpan)
///
/// ``` QTableWidget* self, int row, int column ```
int32_t q_tablewidget_row_span(void* self, int row, int column);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnSpan)
///
/// ``` QTableWidget* self, int row, int column ```
int32_t q_tablewidget_column_span(void* self, int row, int column);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#clearSpans)
///
/// ``` QTableWidget* self ```
void q_tablewidget_clear_spans(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectRow)
///
/// ``` QTableWidget* self, int row ```
void q_tablewidget_select_row(void* self, int row);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectColumn)
///
/// ``` QTableWidget* self, int column ```
void q_tablewidget_select_column(void* self, int column);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#hideRow)
///
/// ``` QTableWidget* self, int row ```
void q_tablewidget_hide_row(void* self, int row);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#hideColumn)
///
/// ``` QTableWidget* self, int column ```
void q_tablewidget_hide_column(void* self, int column);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#showRow)
///
/// ``` QTableWidget* self, int row ```
void q_tablewidget_show_row(void* self, int row);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#showColumn)
///
/// ``` QTableWidget* self, int column ```
void q_tablewidget_show_column(void* self, int column);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#resizeRowToContents)
///
/// ``` QTableWidget* self, int row ```
void q_tablewidget_resize_row_to_contents(void* self, int row);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#resizeRowsToContents)
///
/// ``` QTableWidget* self ```
void q_tablewidget_resize_rows_to_contents(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#resizeColumnToContents)
///
/// ``` QTableWidget* self, int column ```
void q_tablewidget_resize_column_to_contents(void* self, int column);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#resizeColumnsToContents)
///
/// ``` QTableWidget* self ```
void q_tablewidget_resize_columns_to_contents(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sortByColumn)
///
/// ``` QTableWidget* self, int column, enum Qt__SortOrder order ```
void q_tablewidget_sort_by_column(void* self, int column, int64_t order);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setShowGrid)
///
/// ``` QTableWidget* self, bool show ```
void q_tablewidget_set_show_grid(void* self, bool show);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#model)
///
/// ``` QTableWidget* self ```
QAbstractItemModel* q_tablewidget_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
///
/// ``` QTableWidget* self ```
QItemSelectionModel* q_tablewidget_selection_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
///
/// ``` QTableWidget* self, QAbstractItemDelegate* delegate ```
void q_tablewidget_set_item_delegate(void* self, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QTableWidget* self ```
QAbstractItemDelegate* q_tablewidget_item_delegate(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
///
/// ``` QTableWidget* self, enum QAbstractItemView__SelectionMode mode ```
void q_tablewidget_set_selection_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_selection_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
///
/// ``` QTableWidget* self, enum QAbstractItemView__SelectionBehavior behavior ```
void q_tablewidget_set_selection_behavior(void* self, int64_t behavior);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_selection_behavior(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
///
/// ``` QTableWidget* self ```
QModelIndex* q_tablewidget_current_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
///
/// ``` QTableWidget* self ```
QModelIndex* q_tablewidget_root_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
///
/// ``` QTableWidget* self, int triggers ```
void q_tablewidget_set_edit_triggers(void* self, int64_t triggers);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_edit_triggers(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
///
/// ``` QTableWidget* self, enum QAbstractItemView__ScrollMode mode ```
void q_tablewidget_set_vertical_scroll_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
///
/// ``` QTableWidget* self ```
void q_tablewidget_reset_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
///
/// ``` QTableWidget* self, enum QAbstractItemView__ScrollMode mode ```
void q_tablewidget_set_horizontal_scroll_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
///
/// ``` QTableWidget* self ```
void q_tablewidget_reset_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
///
/// ``` QTableWidget* self, bool enable ```
void q_tablewidget_set_auto_scroll(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_has_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
///
/// ``` QTableWidget* self, int margin ```
void q_tablewidget_set_auto_scroll_margin(void* self, int margin);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_auto_scroll_margin(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
///
/// ``` QTableWidget* self, bool enable ```
void q_tablewidget_set_tab_key_navigation(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_tab_key_navigation(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
///
/// ``` QTableWidget* self, bool enable ```
void q_tablewidget_set_drop_indicator_shown(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_show_drop_indicator(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
///
/// ``` QTableWidget* self, bool enable ```
void q_tablewidget_set_drag_enabled(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_drag_enabled(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
///
/// ``` QTableWidget* self, bool overwrite ```
void q_tablewidget_set_drag_drop_overwrite_mode(void* self, bool overwrite);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_drag_drop_overwrite_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
///
/// ``` QTableWidget* self, enum QAbstractItemView__DragDropMode behavior ```
void q_tablewidget_set_drag_drop_mode(void* self, int64_t behavior);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_drag_drop_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
///
/// ``` QTableWidget* self, enum Qt__DropAction dropAction ```
void q_tablewidget_set_default_drop_action(void* self, int64_t dropAction);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_default_drop_action(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
///
/// ``` QTableWidget* self, bool enable ```
void q_tablewidget_set_alternating_row_colors(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_alternating_row_colors(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
///
/// ``` QTableWidget* self, QSize* size ```
void q_tablewidget_set_icon_size(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
///
/// ``` QTableWidget* self ```
QSize* q_tablewidget_icon_size(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
///
/// ``` QTableWidget* self, enum Qt__TextElideMode mode ```
void q_tablewidget_set_text_elide_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_text_elide_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
///
/// ``` QTableWidget* self, QModelIndex* index ```
QSize* q_tablewidget_size_hint_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
///
/// ``` QTableWidget* self, QModelIndex* index, QWidget* widget ```
void q_tablewidget_set_index_widget(void* self, void* index, void* widget);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
///
/// ``` QTableWidget* self, QModelIndex* index ```
QWidget* q_tablewidget_index_widget(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
///
/// ``` QTableWidget* self, int row, QAbstractItemDelegate* delegate ```
void q_tablewidget_set_item_delegate_for_row(void* self, int row, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
///
/// ``` QTableWidget* self, int row ```
QAbstractItemDelegate* q_tablewidget_item_delegate_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
///
/// ``` QTableWidget* self, int column, QAbstractItemDelegate* delegate ```
void q_tablewidget_set_item_delegate_for_column(void* self, int column, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
///
/// ``` QTableWidget* self, int column ```
QAbstractItemDelegate* q_tablewidget_item_delegate_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QTableWidget* self, QModelIndex* index ```
QAbstractItemDelegate* q_tablewidget_item_delegate_with_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// ``` QTableWidget* self, QModelIndex* index ```
void q_tablewidget_edit(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
///
/// ``` QTableWidget* self ```
void q_tablewidget_clear_selection(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
///
/// ``` QTableWidget* self, QModelIndex* index ```
void q_tablewidget_set_current_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
///
/// ``` QTableWidget* self ```
void q_tablewidget_scroll_to_top(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
///
/// ``` QTableWidget* self ```
void q_tablewidget_scroll_to_bottom(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#update)
///
/// ``` QTableWidget* self, QModelIndex* index ```
void q_tablewidget_update(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// ``` QTableWidget* self, QModelIndex* index ```
void q_tablewidget_pressed(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// ``` QTableWidget* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_tablewidget_on_pressed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// ``` QTableWidget* self, QModelIndex* index ```
void q_tablewidget_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// ``` QTableWidget* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_tablewidget_on_clicked(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// ``` QTableWidget* self, QModelIndex* index ```
void q_tablewidget_double_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// ``` QTableWidget* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_tablewidget_on_double_clicked(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// ``` QTableWidget* self, QModelIndex* index ```
void q_tablewidget_activated(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// ``` QTableWidget* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_tablewidget_on_activated(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// ``` QTableWidget* self, QModelIndex* index ```
void q_tablewidget_entered(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// ``` QTableWidget* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_tablewidget_on_entered(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// ``` QTableWidget* self ```
void q_tablewidget_viewport_entered(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// ``` QTableWidget* self, void (*slot)(QAbstractItemView*) ```
void q_tablewidget_on_viewport_entered(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// ``` QTableWidget* self, QSize* size ```
void q_tablewidget_icon_size_changed(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// ``` QTableWidget* self, void (*slot)(QAbstractItemView*, QSize*) ```
void q_tablewidget_on_icon_size_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// ``` QTableWidget* self, enum Qt__ScrollBarPolicy verticalScrollBarPolicy ```
void q_tablewidget_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// ``` QTableWidget* self ```
QScrollBar* q_tablewidget_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// ``` QTableWidget* self, QScrollBar* scrollbar ```
void q_tablewidget_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// ``` QTableWidget* self, enum Qt__ScrollBarPolicy horizontalScrollBarPolicy ```
void q_tablewidget_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// ``` QTableWidget* self ```
QScrollBar* q_tablewidget_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// ``` QTableWidget* self, QScrollBar* scrollbar ```
void q_tablewidget_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// ``` QTableWidget* self ```
QWidget* q_tablewidget_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// ``` QTableWidget* self, QWidget* widget ```
void q_tablewidget_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// ``` QTableWidget* self, QWidget* widget, int alignment ```
void q_tablewidget_add_scroll_bar_widget(void* self, void* widget, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// ``` QTableWidget* self, int alignment ```
libqt_list /* of QWidget* */ q_tablewidget_scroll_bar_widgets(void* self, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// ``` QTableWidget* self ```
QWidget* q_tablewidget_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// ``` QTableWidget* self, QWidget* widget ```
void q_tablewidget_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// ``` QTableWidget* self ```
QSize* q_tablewidget_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// ``` QTableWidget* self, enum QAbstractScrollArea__SizeAdjustPolicy policy ```
void q_tablewidget_set_size_adjust_policy(void* self, int64_t policy);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_frame_style(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QTableWidget* self, int frameStyle ```
void q_tablewidget_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_frame_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QTableWidget* self, enum QFrame__Shape frameShape ```
void q_tablewidget_set_frame_shape(void* self, int64_t frameShape);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QTableWidget* self, enum QFrame__Shadow frameShadow ```
void q_tablewidget_set_frame_shadow(void* self, int64_t frameShadow);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QTableWidget* self, int lineWidth ```
void q_tablewidget_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QTableWidget* self, int midLineWidth ```
void q_tablewidget_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QTableWidget* self ```
QRect* q_tablewidget_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QTableWidget* self, QRect* frameRect ```
void q_tablewidget_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QTableWidget* self ```
uintptr_t q_tablewidget_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QTableWidget* self ```
void q_tablewidget_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QTableWidget* self ```
uintptr_t q_tablewidget_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QTableWidget* self ```
uintptr_t q_tablewidget_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QTableWidget* self ```
QStyle* q_tablewidget_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QTableWidget* self, QStyle* style ```
void q_tablewidget_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QTableWidget* self, enum Qt__WindowModality windowModality ```
void q_tablewidget_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QTableWidget* self, QWidget* param1 ```
bool q_tablewidget_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QTableWidget* self, bool enabled ```
void q_tablewidget_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QTableWidget* self, bool disabled ```
void q_tablewidget_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QTableWidget* self, bool windowModified ```
void q_tablewidget_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QTableWidget* self ```
QRect* q_tablewidget_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QTableWidget* self ```
const QRect* q_tablewidget_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QTableWidget* self ```
QRect* q_tablewidget_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QTableWidget* self ```
QPoint* q_tablewidget_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QTableWidget* self ```
QSize* q_tablewidget_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QTableWidget* self ```
QSize* q_tablewidget_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QTableWidget* self ```
QRect* q_tablewidget_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QTableWidget* self ```
QRect* q_tablewidget_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QTableWidget* self ```
QRegion* q_tablewidget_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QTableWidget* self ```
QSize* q_tablewidget_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QTableWidget* self ```
QSize* q_tablewidget_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QTableWidget* self, QSize* minimumSize ```
void q_tablewidget_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QTableWidget* self, int minw, int minh ```
void q_tablewidget_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QTableWidget* self, QSize* maximumSize ```
void q_tablewidget_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QTableWidget* self, int maxw, int maxh ```
void q_tablewidget_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QTableWidget* self, int minw ```
void q_tablewidget_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QTableWidget* self, int minh ```
void q_tablewidget_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QTableWidget* self, int maxw ```
void q_tablewidget_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QTableWidget* self, int maxh ```
void q_tablewidget_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QTableWidget* self ```
QSize* q_tablewidget_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QTableWidget* self, QSize* sizeIncrement ```
void q_tablewidget_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QTableWidget* self, int w, int h ```
void q_tablewidget_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QTableWidget* self ```
QSize* q_tablewidget_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QTableWidget* self, QSize* baseSize ```
void q_tablewidget_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QTableWidget* self, int basew, int baseh ```
void q_tablewidget_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QTableWidget* self, QSize* fixedSize ```
void q_tablewidget_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QTableWidget* self, int w, int h ```
void q_tablewidget_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QTableWidget* self, int w ```
void q_tablewidget_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QTableWidget* self, int h ```
void q_tablewidget_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QTableWidget* self, QPointF* param1 ```
QPointF* q_tablewidget_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QTableWidget* self, QPoint* param1 ```
QPoint* q_tablewidget_map_to_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QTableWidget* self, QPointF* param1 ```
QPointF* q_tablewidget_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QTableWidget* self, QPoint* param1 ```
QPoint* q_tablewidget_map_from_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QTableWidget* self, QPointF* param1 ```
QPointF* q_tablewidget_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QTableWidget* self, QPoint* param1 ```
QPoint* q_tablewidget_map_to_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QTableWidget* self, QPointF* param1 ```
QPointF* q_tablewidget_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QTableWidget* self, QPoint* param1 ```
QPoint* q_tablewidget_map_from_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QTableWidget* self, QWidget* param1, QPointF* param2 ```
QPointF* q_tablewidget_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QTableWidget* self, QWidget* param1, QPoint* param2 ```
QPoint* q_tablewidget_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QTableWidget* self, QWidget* param1, QPointF* param2 ```
QPointF* q_tablewidget_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QTableWidget* self, QWidget* param1, QPoint* param2 ```
QPoint* q_tablewidget_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QTableWidget* self ```
QWidget* q_tablewidget_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QTableWidget* self ```
QWidget* q_tablewidget_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QTableWidget* self ```
QWidget* q_tablewidget_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QTableWidget* self ```
const QPalette* q_tablewidget_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QTableWidget* self, QPalette* palette ```
void q_tablewidget_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QTableWidget* self, enum QPalette__ColorRole backgroundRole ```
void q_tablewidget_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QTableWidget* self, enum QPalette__ColorRole foregroundRole ```
void q_tablewidget_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QTableWidget* self ```
const QFont* q_tablewidget_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QTableWidget* self, QFont* font ```
void q_tablewidget_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QTableWidget* self ```
QFontMetrics* q_tablewidget_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QTableWidget* self ```
QFontInfo* q_tablewidget_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QTableWidget* self ```
QCursor* q_tablewidget_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QTableWidget* self, QCursor* cursor ```
void q_tablewidget_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QTableWidget* self ```
void q_tablewidget_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QTableWidget* self, bool enable ```
void q_tablewidget_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QTableWidget* self, bool enable ```
void q_tablewidget_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QTableWidget* self, QBitmap* mask ```
void q_tablewidget_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QTableWidget* self, QRegion* mask ```
void q_tablewidget_set_mask_with_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QTableWidget* self ```
QRegion* q_tablewidget_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QTableWidget* self ```
void q_tablewidget_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTableWidget* self, QPaintDevice* target ```
void q_tablewidget_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTableWidget* self, QPainter* painter ```
void q_tablewidget_render_with_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QTableWidget* self ```
QPixmap* q_tablewidget_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QTableWidget* self ```
QGraphicsEffect* q_tablewidget_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QTableWidget* self, QGraphicsEffect* effect ```
void q_tablewidget_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QTableWidget* self, enum Qt__GestureType typeVal ```
void q_tablewidget_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QTableWidget* self, enum Qt__GestureType typeVal ```
void q_tablewidget_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QTableWidget* self, const char* windowTitle ```
void q_tablewidget_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QTableWidget* self, const char* styleSheet ```
void q_tablewidget_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QTableWidget* self ```
const char* q_tablewidget_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QTableWidget* self ```
const char* q_tablewidget_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QTableWidget* self, QIcon* icon ```
void q_tablewidget_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QTableWidget* self ```
QIcon* q_tablewidget_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QTableWidget* self, const char* windowIconText ```
void q_tablewidget_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QTableWidget* self ```
const char* q_tablewidget_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QTableWidget* self, const char* windowRole ```
void q_tablewidget_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QTableWidget* self ```
const char* q_tablewidget_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QTableWidget* self, const char* filePath ```
void q_tablewidget_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QTableWidget* self ```
const char* q_tablewidget_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QTableWidget* self, double level ```
void q_tablewidget_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QTableWidget* self ```
double q_tablewidget_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QTableWidget* self, const char* toolTip ```
void q_tablewidget_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QTableWidget* self ```
const char* q_tablewidget_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QTableWidget* self, int msec ```
void q_tablewidget_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QTableWidget* self, const char* statusTip ```
void q_tablewidget_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QTableWidget* self ```
const char* q_tablewidget_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QTableWidget* self, const char* whatsThis ```
void q_tablewidget_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QTableWidget* self ```
const char* q_tablewidget_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QTableWidget* self ```
const char* q_tablewidget_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QTableWidget* self, const char* name ```
void q_tablewidget_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QTableWidget* self ```
const char* q_tablewidget_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QTableWidget* self, const char* description ```
void q_tablewidget_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QTableWidget* self, enum Qt__LayoutDirection direction ```
void q_tablewidget_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QTableWidget* self ```
void q_tablewidget_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QTableWidget* self, QLocale* locale ```
void q_tablewidget_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QTableWidget* self ```
QLocale* q_tablewidget_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QTableWidget* self ```
void q_tablewidget_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QTableWidget* self ```
void q_tablewidget_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QTableWidget* self ```
void q_tablewidget_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QTableWidget* self ```
void q_tablewidget_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QTableWidget* self, enum Qt__FocusReason reason ```
void q_tablewidget_set_focus_with_reason(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QTableWidget* self, enum Qt__FocusPolicy policy ```
void q_tablewidget_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_tablewidget_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QTableWidget* self, QWidget* focusProxy ```
void q_tablewidget_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QTableWidget* self ```
QWidget* q_tablewidget_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QTableWidget* self, enum Qt__ContextMenuPolicy policy ```
void q_tablewidget_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QTableWidget* self ```
void q_tablewidget_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QTableWidget* self, QCursor* param1 ```
void q_tablewidget_grab_mouse_with_q_cursor(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QTableWidget* self ```
void q_tablewidget_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QTableWidget* self ```
void q_tablewidget_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QTableWidget* self ```
void q_tablewidget_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QTableWidget* self, QKeySequence* key ```
int32_t q_tablewidget_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QTableWidget* self, int id ```
void q_tablewidget_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QTableWidget* self, int id ```
void q_tablewidget_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QTableWidget* self, int id ```
void q_tablewidget_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_tablewidget_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_tablewidget_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QTableWidget* self, bool enable ```
void q_tablewidget_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QTableWidget* self ```
QGraphicsProxyWidget* q_tablewidget_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTableWidget* self ```
void q_tablewidget_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTableWidget* self, int x, int y, int w, int h ```
void q_tablewidget_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTableWidget* self, QRect* param1 ```
void q_tablewidget_update_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTableWidget* self, QRegion* param1 ```
void q_tablewidget_update_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTableWidget* self, int x, int y, int w, int h ```
void q_tablewidget_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTableWidget* self, QRect* param1 ```
void q_tablewidget_repaint_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTableWidget* self, QRegion* param1 ```
void q_tablewidget_repaint_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QTableWidget* self, bool hidden ```
void q_tablewidget_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QTableWidget* self ```
void q_tablewidget_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QTableWidget* self ```
void q_tablewidget_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QTableWidget* self ```
void q_tablewidget_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QTableWidget* self ```
void q_tablewidget_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QTableWidget* self ```
void q_tablewidget_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QTableWidget* self ```
void q_tablewidget_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QTableWidget* self ```
void q_tablewidget_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QTableWidget* self ```
void q_tablewidget_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QTableWidget* self, QWidget* param1 ```
void q_tablewidget_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QTableWidget* self, int x, int y ```
void q_tablewidget_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QTableWidget* self, QPoint* param1 ```
void q_tablewidget_move_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QTableWidget* self, int w, int h ```
void q_tablewidget_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QTableWidget* self, QSize* param1 ```
void q_tablewidget_resize_with_q_size(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QTableWidget* self, int x, int y, int w, int h ```
void q_tablewidget_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QTableWidget* self, QRect* geometry ```
void q_tablewidget_set_geometry_with_geometry(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QTableWidget* self ```
char* q_tablewidget_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QTableWidget* self, const char* geometry ```
bool q_tablewidget_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QTableWidget* self ```
void q_tablewidget_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QTableWidget* self, QWidget* param1 ```
bool q_tablewidget_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QTableWidget* self, int state ```
void q_tablewidget_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QTableWidget* self, int state ```
void q_tablewidget_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QTableWidget* self ```
QSizePolicy* q_tablewidget_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QTableWidget* self, QSizePolicy* sizePolicy ```
void q_tablewidget_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QTableWidget* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_tablewidget_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QTableWidget* self ```
QRegion* q_tablewidget_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QTableWidget* self, int left, int top, int right, int bottom ```
void q_tablewidget_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QTableWidget* self, QMargins* margins ```
void q_tablewidget_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QTableWidget* self ```
QMargins* q_tablewidget_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QTableWidget* self ```
QRect* q_tablewidget_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QTableWidget* self ```
QLayout* q_tablewidget_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QTableWidget* self, QLayout* layout ```
void q_tablewidget_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QTableWidget* self ```
void q_tablewidget_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QTableWidget* self, QWidget* parent ```
void q_tablewidget_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QTableWidget* self, QWidget* parent, int f ```
void q_tablewidget_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QTableWidget* self, int dx, int dy ```
void q_tablewidget_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QTableWidget* self, int dx, int dy, QRect* param3 ```
void q_tablewidget_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QTableWidget* self ```
QWidget* q_tablewidget_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QTableWidget* self ```
QWidget* q_tablewidget_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QTableWidget* self ```
QWidget* q_tablewidget_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QTableWidget* self, bool on ```
void q_tablewidget_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTableWidget* self, QAction* action ```
void q_tablewidget_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QTableWidget* self, libqt_list /* of QAction* */ actions ```
void q_tablewidget_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QTableWidget* self, QAction* before, libqt_list /* of QAction* */ actions ```
void q_tablewidget_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QTableWidget* self, QAction* before, QAction* action ```
void q_tablewidget_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QTableWidget* self, QAction* action ```
void q_tablewidget_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QTableWidget* self ```
libqt_list /* of QAction* */ q_tablewidget_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTableWidget* self, const char* text ```
QAction* q_tablewidget_add_action_with_text(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTableWidget* self, QIcon* icon, const char* text ```
QAction* q_tablewidget_add_action2(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTableWidget* self, const char* text, QKeySequence* shortcut ```
QAction* q_tablewidget_add_action3(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTableWidget* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_tablewidget_add_action4(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QTableWidget* self ```
QWidget* q_tablewidget_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QTableWidget* self, int typeVal ```
void q_tablewidget_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QTableWidget* self, enum Qt__WindowType param1 ```
void q_tablewidget_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QTableWidget* self, int typeVal ```
void q_tablewidget_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_tablewidget_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QTableWidget* self, int x, int y ```
QWidget* q_tablewidget_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QTableWidget* self, QPoint* p ```
QWidget* q_tablewidget_child_at_with_q_point(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QTableWidget* self, QPointF* p ```
QWidget* q_tablewidget_child_at_with_q_point_f(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QTableWidget* self, enum Qt__WidgetAttribute param1 ```
void q_tablewidget_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QTableWidget* self, enum Qt__WidgetAttribute param1 ```
bool q_tablewidget_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QTableWidget* self ```
void q_tablewidget_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QTableWidget* self, QWidget* child ```
bool q_tablewidget_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QTableWidget* self, bool enabled ```
void q_tablewidget_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QTableWidget* self ```
QBackingStore* q_tablewidget_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QTableWidget* self ```
QWindow* q_tablewidget_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QTableWidget* self ```
QScreen* q_tablewidget_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QTableWidget* self, QScreen* screen ```
void q_tablewidget_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_tablewidget_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QTableWidget* self, const char* title ```
void q_tablewidget_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QTableWidget* self, void (*slot)(QWidget*, const char*) ```
void q_tablewidget_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QTableWidget* self, QIcon* icon ```
void q_tablewidget_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QTableWidget* self, void (*slot)(QWidget*, QIcon*) ```
void q_tablewidget_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QTableWidget* self, const char* iconText ```
void q_tablewidget_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QTableWidget* self, void (*slot)(QWidget*, const char*) ```
void q_tablewidget_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QTableWidget* self, QPoint* pos ```
void q_tablewidget_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QTableWidget* self, void (*slot)(QWidget*, QPoint*) ```
void q_tablewidget_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QTableWidget* self, int hints ```
void q_tablewidget_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTableWidget* self, QPaintDevice* target, QPoint* targetOffset ```
void q_tablewidget_render2(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTableWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_tablewidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTableWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_tablewidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTableWidget* self, QPainter* painter, QPoint* targetOffset ```
void q_tablewidget_render22(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTableWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_tablewidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTableWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_tablewidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QTableWidget* self, QRect* rectangle ```
QPixmap* q_tablewidget_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QTableWidget* self, enum Qt__GestureType typeVal, int flags ```
void q_tablewidget_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QTableWidget* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_tablewidget_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QTableWidget* self, int id, bool enable ```
void q_tablewidget_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QTableWidget* self, int id, bool enable ```
void q_tablewidget_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QTableWidget* self, enum Qt__WindowType param1, bool on ```
void q_tablewidget_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QTableWidget* self, enum Qt__WidgetAttribute param1, bool on ```
void q_tablewidget_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_tablewidget_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_tablewidget_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTableWidget* self ```
const char* q_tablewidget_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTableWidget* self, char* name ```
void q_tablewidget_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTableWidget* self, bool b ```
bool q_tablewidget_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTableWidget* self ```
QThread* q_tablewidget_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTableWidget* self, QThread* thread ```
bool q_tablewidget_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTableWidget* self, int interval ```
int32_t q_tablewidget_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTableWidget* self, int id ```
void q_tablewidget_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTableWidget* self, enum Qt__TimerId id ```
void q_tablewidget_kill_timer_with_id(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTableWidget* self ```
libqt_list /* of QObject* */ q_tablewidget_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTableWidget* self, QObject* filterObj ```
void q_tablewidget_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTableWidget* self, QObject* obj ```
void q_tablewidget_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_tablewidget_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTableWidget* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_tablewidget_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_tablewidget_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_tablewidget_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTableWidget* self ```
void q_tablewidget_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTableWidget* self ```
void q_tablewidget_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTableWidget* self, const char* name, QVariant* value ```
bool q_tablewidget_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTableWidget* self, const char* name ```
QVariant* q_tablewidget_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTableWidget* self ```
const char** q_tablewidget_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTableWidget* self ```
QBindingStorage* q_tablewidget_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTableWidget* self ```
const QBindingStorage* q_tablewidget_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTableWidget* self ```
void q_tablewidget_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTableWidget* self, void (*slot)(QObject*) ```
void q_tablewidget_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTableWidget* self ```
QObject* q_tablewidget_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTableWidget* self, const char* classname ```
bool q_tablewidget_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTableWidget* self ```
void q_tablewidget_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTableWidget* self, QThread* thread, Disambiguated_t* param2 ```
bool q_tablewidget_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTableWidget* self, int interval, enum Qt__TimerType timerType ```
int32_t q_tablewidget_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_tablewidget_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTableWidget* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_tablewidget_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTableWidget* self, QObject* param1 ```
void q_tablewidget_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTableWidget* self, void (*slot)(QObject*, QObject*) ```
void q_tablewidget_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QTableWidget* self ```
bool q_tablewidget_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QTableWidget* self ```
double q_tablewidget_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QTableWidget* self ```
double q_tablewidget_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_tablewidget_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// ``` enum QPaintDevice__PaintDeviceMetric metric, double value ```
int32_t q_tablewidget_encode_metric_f(int64_t metric, double value);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setRootIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* index ```
void q_tablewidget_set_root_index(void* self, void* index);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setRootIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* index ```
void q_tablewidget_qbase_set_root_index(void* self, void* index);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setRootIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QModelIndex*) ```
void q_tablewidget_on_set_root_index(void* self, void (*slot)(void*, void*));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSelectionModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QItemSelectionModel* selectionModel ```
void q_tablewidget_set_selection_model(void* self, void* selectionModel);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSelectionModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QItemSelectionModel* selectionModel ```
void q_tablewidget_qbase_set_selection_model(void* self, void* selectionModel);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSelectionModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QItemSelectionModel*) ```
void q_tablewidget_on_set_selection_model(void* self, void (*slot)(void*, void*));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#doItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_do_items_layout(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#doItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_qbase_do_items_layout(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#doItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)() ```
void q_tablewidget_on_do_items_layout(void* self, void (*slot)());

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#visualRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* index ```
QRect* q_tablewidget_visual_rect(void* self, void* index);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#visualRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* index ```
QRect* q_tablewidget_qbase_visual_rect(void* self, void* index);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#visualRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, QRect* (*slot)(QTableWidget*, QModelIndex*) ```
void q_tablewidget_on_visual_rect(void* self, QRect* (*slot)(void*, void*));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#scrollTo)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_tablewidget_scroll_to(void* self, void* index, int64_t hint);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#scrollTo)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_tablewidget_qbase_scroll_to(void* self, void* index, int64_t hint);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#scrollTo)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QModelIndex*, enum QAbstractItemView__ScrollHint) ```
void q_tablewidget_on_scroll_to(void* self, void (*slot)(void*, void*, int64_t));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#indexAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QPoint* p ```
QModelIndex* q_tablewidget_index_at(void* self, void* p);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#indexAt)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QPoint* p ```
QModelIndex* q_tablewidget_qbase_index_at(void* self, void* p);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#indexAt)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* (*slot)(QTableWidget*, QPoint*) ```
void q_tablewidget_on_index_at(void* self, QModelIndex* (*slot)(void*, void*));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#scrollContentsBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int dx, int dy ```
void q_tablewidget_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#scrollContentsBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int dx, int dy ```
void q_tablewidget_qbase_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#scrollContentsBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int, int) ```
void q_tablewidget_on_scroll_contents_by(void* self, void (*slot)(void*, int, int));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#initViewItemOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QStyleOptionViewItem* option ```
void q_tablewidget_init_view_item_option(void* self, void* option);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#initViewItemOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QStyleOptionViewItem* option ```
void q_tablewidget_qbase_init_view_item_option(void* self, void* option);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#initViewItemOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QStyleOptionViewItem*) ```
void q_tablewidget_on_init_view_item_option(void* self, void (*slot)(void*, void*));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QPaintEvent* e ```
void q_tablewidget_paint_event(void* self, void* e);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QPaintEvent* e ```
void q_tablewidget_qbase_paint_event(void* self, void* e);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QPaintEvent*) ```
void q_tablewidget_on_paint_event(void* self, void (*slot)(void*, void*));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QTimerEvent* event ```
void q_tablewidget_timer_event(void* self, void* event);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QTimerEvent* event ```
void q_tablewidget_qbase_timer_event(void* self, void* event);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QTimerEvent*) ```
void q_tablewidget_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_horizontal_offset(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_qbase_horizontal_offset(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, int32_t (*slot)() ```
void q_tablewidget_on_horizontal_offset(void* self, int32_t (*slot)());

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_vertical_offset(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_qbase_vertical_offset(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, int32_t (*slot)() ```
void q_tablewidget_on_vertical_offset(void* self, int32_t (*slot)());

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#moveCursor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, enum QAbstractItemView__CursorAction cursorAction, int modifiers ```
QModelIndex* q_tablewidget_move_cursor(void* self, int64_t cursorAction, int64_t modifiers);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#moveCursor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, enum QAbstractItemView__CursorAction cursorAction, int modifiers ```
QModelIndex* q_tablewidget_qbase_move_cursor(void* self, int64_t cursorAction, int64_t modifiers);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#moveCursor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* (*slot)(QTableWidget*, enum QAbstractItemView__CursorAction, int) ```
void q_tablewidget_on_move_cursor(void* self, QModelIndex* (*slot)(void*, int64_t, int64_t));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QRect* rect, int command ```
void q_tablewidget_set_selection(void* self, void* rect, int64_t command);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSelection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QRect* rect, int command ```
void q_tablewidget_qbase_set_selection(void* self, void* rect, int64_t command);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSelection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QRect*, int) ```
void q_tablewidget_on_set_selection(void* self, void (*slot)(void*, void*, int64_t));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#visualRegionForSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QItemSelection* selection ```
QRegion* q_tablewidget_visual_region_for_selection(void* self, void* selection);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#visualRegionForSelection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QItemSelection* selection ```
QRegion* q_tablewidget_qbase_visual_region_for_selection(void* self, void* selection);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#visualRegionForSelection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, QRegion* (*slot)(QTableWidget*, QItemSelection*) ```
void q_tablewidget_on_visual_region_for_selection(void* self, QRegion* (*slot)(void*, void*));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectedIndexes)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
libqt_list /* of QModelIndex* */ q_tablewidget_selected_indexes(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectedIndexes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
libqt_list /* of QModelIndex* */ q_tablewidget_qbase_selected_indexes(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectedIndexes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_tablewidget_on_selected_indexes(void* self, libqt_list /* of QModelIndex* */ (*slot)());

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#updateGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_update_geometries(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#updateGeometries)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_qbase_update_geometries(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#updateGeometries)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)() ```
void q_tablewidget_on_update_geometries(void* self, void (*slot)());

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
QSize* q_tablewidget_viewport_size_hint(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
QSize* q_tablewidget_qbase_viewport_size_hint(void* self);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, QSize* (*slot)() ```
void q_tablewidget_on_viewport_size_hint(void* self, QSize* (*slot)());

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sizeHintForRow)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int row ```
int32_t q_tablewidget_size_hint_for_row(void* self, int row);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sizeHintForRow)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int row ```
int32_t q_tablewidget_qbase_size_hint_for_row(void* self, int row);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sizeHintForRow)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, int32_t (*slot)(QTableWidget*, int) ```
void q_tablewidget_on_size_hint_for_row(void* self, int32_t (*slot)(void*, int));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sizeHintForColumn)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int column ```
int32_t q_tablewidget_size_hint_for_column(void* self, int column);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sizeHintForColumn)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int column ```
int32_t q_tablewidget_qbase_size_hint_for_column(void* self, int column);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sizeHintForColumn)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, int32_t (*slot)(QTableWidget*, int) ```
void q_tablewidget_on_size_hint_for_column(void* self, int32_t (*slot)(void*, int));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int action ```
void q_tablewidget_vertical_scrollbar_action(void* self, int action);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int action ```
void q_tablewidget_qbase_vertical_scrollbar_action(void* self, int action);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalScrollbarAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int) ```
void q_tablewidget_on_vertical_scrollbar_action(void* self, void (*slot)(void*, int));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int action ```
void q_tablewidget_horizontal_scrollbar_action(void* self, int action);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int action ```
void q_tablewidget_qbase_horizontal_scrollbar_action(void* self, int action);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalScrollbarAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int) ```
void q_tablewidget_on_horizontal_scrollbar_action(void* self, void (*slot)(void*, int));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isIndexHidden)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* index ```
bool q_tablewidget_is_index_hidden(void* self, void* index);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isIndexHidden)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* index ```
bool q_tablewidget_qbase_is_index_hidden(void* self, void* index);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isIndexHidden)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, bool (*slot)(QTableWidget*, QModelIndex*) ```
void q_tablewidget_on_is_index_hidden(void* self, bool (*slot)(void*, void*));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectionChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QItemSelection* selected, QItemSelection* deselected ```
void q_tablewidget_selection_changed(void* self, void* selected, void* deselected);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectionChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QItemSelection* selected, QItemSelection* deselected ```
void q_tablewidget_qbase_selection_changed(void* self, void* selected, void* deselected);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectionChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QItemSelection*, QItemSelection*) ```
void q_tablewidget_on_selection_changed(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#currentChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* current, QModelIndex* previous ```
void q_tablewidget_current_changed(void* self, void* current, void* previous);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#currentChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* current, QModelIndex* previous ```
void q_tablewidget_qbase_current_changed(void* self, void* current, void* previous);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#currentChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QModelIndex*, QModelIndex*) ```
void q_tablewidget_on_current_changed(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, const char* search ```
void q_tablewidget_keyboard_search(void* self, const char* search);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, const char* search ```
void q_tablewidget_qbase_keyboard_search(void* self, const char* search);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, const char*) ```
void q_tablewidget_on_keyboard_search(void* self, void (*slot)(void*, const char*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* index ```
QAbstractItemDelegate* q_tablewidget_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* index ```
QAbstractItemDelegate* q_tablewidget_qbase_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, QAbstractItemDelegate* (*slot)(QTableWidget*, QModelIndex*) ```
void q_tablewidget_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, enum Qt__InputMethodQuery query ```
QVariant* q_tablewidget_input_method_query(void* self, int64_t query);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, enum Qt__InputMethodQuery query ```
QVariant* q_tablewidget_qbase_input_method_query(void* self, int64_t query);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, QVariant* (*slot)(QTableWidget*, enum Qt__InputMethodQuery) ```
void q_tablewidget_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_reset(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_qbase_reset(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)() ```
void q_tablewidget_on_reset(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_select_all(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_qbase_select_all(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)() ```
void q_tablewidget_on_select_all(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles ```
void q_tablewidget_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles ```
void q_tablewidget_qbase_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QModelIndex*, QModelIndex*, libqt_list /* of int */ roles ) ```
void q_tablewidget_on_data_changed(void* self, void (*slot)(void*, void*, void*, libqt_list));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsInserted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* parent, int start, int end ```
void q_tablewidget_rows_inserted(void* self, void* parent, int start, int end);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsInserted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* parent, int start, int end ```
void q_tablewidget_qbase_rows_inserted(void* self, void* parent, int start, int end);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsInserted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QModelIndex*, int, int) ```
void q_tablewidget_on_rows_inserted(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* parent, int start, int end ```
void q_tablewidget_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* parent, int start, int end ```
void q_tablewidget_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QModelIndex*, int, int) ```
void q_tablewidget_on_rows_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_qbase_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)() ```
void q_tablewidget_on_update_editor_data(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_qbase_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)() ```
void q_tablewidget_on_update_editor_geometries(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int value ```
void q_tablewidget_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int value ```
void q_tablewidget_qbase_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int) ```
void q_tablewidget_on_vertical_scrollbar_value_changed(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int value ```
void q_tablewidget_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int value ```
void q_tablewidget_qbase_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int) ```
void q_tablewidget_on_horizontal_scrollbar_value_changed(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_tablewidget_close_editor(void* self, void* editor, int64_t hint);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_tablewidget_qbase_close_editor(void* self, void* editor, int64_t hint);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QWidget*, enum QAbstractItemDelegate__EndEditHint) ```
void q_tablewidget_on_close_editor(void* self, void (*slot)(void*, void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QWidget* editor ```
void q_tablewidget_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QWidget* editor ```
void q_tablewidget_qbase_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QWidget*) ```
void q_tablewidget_on_commit_data(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QObject* editor ```
void q_tablewidget_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QObject* editor ```
void q_tablewidget_qbase_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QObject*) ```
void q_tablewidget_on_editor_destroyed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_tablewidget_edit2(void* self, void* index, int64_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_tablewidget_qbase_edit2(void* self, void* index, int64_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, bool (*slot)(QTableWidget*, QModelIndex*, enum QAbstractItemView__EditTrigger, QEvent*) ```
void q_tablewidget_on_edit2(void* self, bool (*slot)(void*, void*, int64_t, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* index, QEvent* event ```
int64_t q_tablewidget_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QModelIndex* index, QEvent* event ```
int64_t q_tablewidget_qbase_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, int64_t (*slot)(QTableWidget*, QModelIndex*, QEvent*) ```
void q_tablewidget_on_selection_command(void* self, int64_t (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int supportedActions ```
void q_tablewidget_start_drag(void* self, int64_t supportedActions);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int supportedActions ```
void q_tablewidget_qbase_start_drag(void* self, int64_t supportedActions);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int) ```
void q_tablewidget_on_start_drag(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, bool next ```
bool q_tablewidget_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, bool next ```
bool q_tablewidget_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, bool (*slot)(QTableWidget*, bool) ```
void q_tablewidget_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QEvent* event ```
bool q_tablewidget_viewport_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QEvent* event ```
bool q_tablewidget_qbase_viewport_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, bool (*slot)(QTableWidget*, QEvent*) ```
void q_tablewidget_on_viewport_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QMouseEvent* event ```
void q_tablewidget_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QMouseEvent* event ```
void q_tablewidget_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QMouseEvent*) ```
void q_tablewidget_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QMouseEvent* event ```
void q_tablewidget_mouse_move_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QMouseEvent* event ```
void q_tablewidget_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QMouseEvent*) ```
void q_tablewidget_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QMouseEvent* event ```
void q_tablewidget_mouse_release_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QMouseEvent* event ```
void q_tablewidget_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QMouseEvent*) ```
void q_tablewidget_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QMouseEvent* event ```
void q_tablewidget_mouse_double_click_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QMouseEvent* event ```
void q_tablewidget_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QMouseEvent*) ```
void q_tablewidget_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QDragEnterEvent* event ```
void q_tablewidget_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QDragEnterEvent* event ```
void q_tablewidget_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QDragEnterEvent*) ```
void q_tablewidget_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QDragMoveEvent* event ```
void q_tablewidget_drag_move_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QDragMoveEvent* event ```
void q_tablewidget_qbase_drag_move_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QDragMoveEvent*) ```
void q_tablewidget_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QDragLeaveEvent* event ```
void q_tablewidget_drag_leave_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QDragLeaveEvent* event ```
void q_tablewidget_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QDragLeaveEvent*) ```
void q_tablewidget_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QFocusEvent* event ```
void q_tablewidget_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QFocusEvent* event ```
void q_tablewidget_qbase_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QFocusEvent*) ```
void q_tablewidget_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QFocusEvent* event ```
void q_tablewidget_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QFocusEvent* event ```
void q_tablewidget_qbase_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QFocusEvent*) ```
void q_tablewidget_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QKeyEvent* event ```
void q_tablewidget_key_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QKeyEvent* event ```
void q_tablewidget_qbase_key_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QKeyEvent*) ```
void q_tablewidget_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QResizeEvent* event ```
void q_tablewidget_resize_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QResizeEvent* event ```
void q_tablewidget_qbase_resize_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QResizeEvent*) ```
void q_tablewidget_on_resize_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QInputMethodEvent* event ```
void q_tablewidget_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QInputMethodEvent* event ```
void q_tablewidget_qbase_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QInputMethodEvent*) ```
void q_tablewidget_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QObject* object, QEvent* event ```
bool q_tablewidget_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QObject* object, QEvent* event ```
bool q_tablewidget_qbase_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, bool (*slot)(QTableWidget*, QObject*, QEvent*) ```
void q_tablewidget_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
QSize* q_tablewidget_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
QSize* q_tablewidget_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, QSize* (*slot)() ```
void q_tablewidget_on_minimum_size_hint(void* self, QSize* (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
QSize* q_tablewidget_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
QSize* q_tablewidget_qbase_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, QSize* (*slot)() ```
void q_tablewidget_on_size_hint(void* self, QSize* (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QWidget* viewport ```
void q_tablewidget_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QWidget* viewport ```
void q_tablewidget_qbase_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QWidget*) ```
void q_tablewidget_on_setup_viewport(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QWheelEvent* param1 ```
void q_tablewidget_wheel_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QWheelEvent* param1 ```
void q_tablewidget_qbase_wheel_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QWheelEvent*) ```
void q_tablewidget_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QContextMenuEvent* param1 ```
void q_tablewidget_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QContextMenuEvent* param1 ```
void q_tablewidget_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QContextMenuEvent*) ```
void q_tablewidget_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QEvent* param1 ```
void q_tablewidget_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QEvent* param1 ```
void q_tablewidget_qbase_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QEvent*) ```
void q_tablewidget_on_change_event(void* self, void (*slot)(void*, void*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QStyleOptionFrame* option ```
void q_tablewidget_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QStyleOptionFrame* option ```
void q_tablewidget_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QStyleOptionFrame*) ```
void q_tablewidget_on_init_style_option(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, int32_t (*slot)() ```
void q_tablewidget_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, bool visible ```
void q_tablewidget_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, bool visible ```
void q_tablewidget_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, bool) ```
void q_tablewidget_on_set_visible(void* self, void (*slot)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int param1 ```
int32_t q_tablewidget_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int param1 ```
int32_t q_tablewidget_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, int32_t (*slot)(QTableWidget*, int) ```
void q_tablewidget_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
bool q_tablewidget_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
bool q_tablewidget_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, bool (*slot)() ```
void q_tablewidget_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
QPaintEngine* q_tablewidget_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
QPaintEngine* q_tablewidget_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, QPaintEngine* (*slot)() ```
void q_tablewidget_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QKeyEvent* event ```
void q_tablewidget_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QKeyEvent* event ```
void q_tablewidget_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QKeyEvent*) ```
void q_tablewidget_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QEnterEvent* event ```
void q_tablewidget_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QEnterEvent* event ```
void q_tablewidget_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QEnterEvent*) ```
void q_tablewidget_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QEvent* event ```
void q_tablewidget_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QEvent* event ```
void q_tablewidget_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QEvent*) ```
void q_tablewidget_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QMoveEvent* event ```
void q_tablewidget_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QMoveEvent* event ```
void q_tablewidget_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QMoveEvent*) ```
void q_tablewidget_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QCloseEvent* event ```
void q_tablewidget_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QCloseEvent* event ```
void q_tablewidget_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QCloseEvent*) ```
void q_tablewidget_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QTabletEvent* event ```
void q_tablewidget_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QTabletEvent* event ```
void q_tablewidget_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QTabletEvent*) ```
void q_tablewidget_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QActionEvent* event ```
void q_tablewidget_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QActionEvent* event ```
void q_tablewidget_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QActionEvent*) ```
void q_tablewidget_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QShowEvent* event ```
void q_tablewidget_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QShowEvent* event ```
void q_tablewidget_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QShowEvent*) ```
void q_tablewidget_on_show_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QHideEvent* event ```
void q_tablewidget_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QHideEvent* event ```
void q_tablewidget_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QHideEvent*) ```
void q_tablewidget_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, const char* eventType, void* message, intptr_t* result ```
bool q_tablewidget_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, const char* eventType, void* message, intptr_t* result ```
bool q_tablewidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, bool (*slot)(QTableWidget*, const char*, void*, intptr_t*) ```
void q_tablewidget_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_tablewidget_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_tablewidget_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, int32_t (*slot)(QTableWidget*, enum QPaintDevice__PaintDeviceMetric) ```
void q_tablewidget_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QPainter* painter ```
void q_tablewidget_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QPainter* painter ```
void q_tablewidget_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QPainter*) ```
void q_tablewidget_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QPoint* offset ```
QPaintDevice* q_tablewidget_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QPoint* offset ```
QPaintDevice* q_tablewidget_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, QPaintDevice* (*slot)(QTableWidget*, QPoint*) ```
void q_tablewidget_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
QPainter* q_tablewidget_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
QPainter* q_tablewidget_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, QPainter* (*slot)() ```
void q_tablewidget_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QChildEvent* event ```
void q_tablewidget_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QChildEvent* event ```
void q_tablewidget_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QChildEvent*) ```
void q_tablewidget_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QEvent* event ```
void q_tablewidget_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QEvent* event ```
void q_tablewidget_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QEvent*) ```
void q_tablewidget_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QMetaMethod* signal ```
void q_tablewidget_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QMetaMethod* signal ```
void q_tablewidget_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QMetaMethod*) ```
void q_tablewidget_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QMetaMethod* signal ```
void q_tablewidget_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QMetaMethod* signal ```
void q_tablewidget_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QMetaMethod*) ```
void q_tablewidget_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowMoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int row, int oldIndex, int newIndex ```
void q_tablewidget_row_moved(void* self, int row, int oldIndex, int newIndex);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowMoved)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int row, int oldIndex, int newIndex ```
void q_tablewidget_qbase_row_moved(void* self, int row, int oldIndex, int newIndex);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowMoved)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int, int, int) ```
void q_tablewidget_on_row_moved(void* self, void (*slot)(void*, int, int, int));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnMoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int column, int oldIndex, int newIndex ```
void q_tablewidget_column_moved(void* self, int column, int oldIndex, int newIndex);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnMoved)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int column, int oldIndex, int newIndex ```
void q_tablewidget_qbase_column_moved(void* self, int column, int oldIndex, int newIndex);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnMoved)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int, int, int) ```
void q_tablewidget_on_column_moved(void* self, void (*slot)(void*, int, int, int));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowResized)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int row, int oldHeight, int newHeight ```
void q_tablewidget_row_resized(void* self, int row, int oldHeight, int newHeight);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowResized)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int row, int oldHeight, int newHeight ```
void q_tablewidget_qbase_row_resized(void* self, int row, int oldHeight, int newHeight);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowResized)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int, int, int) ```
void q_tablewidget_on_row_resized(void* self, void (*slot)(void*, int, int, int));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnResized)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int column, int oldWidth, int newWidth ```
void q_tablewidget_column_resized(void* self, int column, int oldWidth, int newWidth);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnResized)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int column, int oldWidth, int newWidth ```
void q_tablewidget_qbase_column_resized(void* self, int column, int oldWidth, int newWidth);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnResized)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int, int, int) ```
void q_tablewidget_on_column_resized(void* self, void (*slot)(void*, int, int, int));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowCountChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int oldCount, int newCount ```
void q_tablewidget_row_count_changed(void* self, int oldCount, int newCount);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowCountChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int oldCount, int newCount ```
void q_tablewidget_qbase_row_count_changed(void* self, int oldCount, int newCount);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowCountChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int, int) ```
void q_tablewidget_on_row_count_changed(void* self, void (*slot)(void*, int, int));

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnCountChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int oldCount, int newCount ```
void q_tablewidget_column_count_changed(void* self, int oldCount, int newCount);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnCountChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int oldCount, int newCount ```
void q_tablewidget_qbase_column_count_changed(void* self, int oldCount, int newCount);

/// Inherited from QTableView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnCountChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int, int) ```
void q_tablewidget_on_column_count_changed(void* self, void (*slot)(void*, int, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_state(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_qbase_state(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, int64_t (*slot)() ```
void q_tablewidget_on_state(void* self, int64_t (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, enum QAbstractItemView__State state ```
void q_tablewidget_set_state(void* self, int64_t state);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, enum QAbstractItemView__State state ```
void q_tablewidget_qbase_set_state(void* self, int64_t state);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, enum QAbstractItemView__State) ```
void q_tablewidget_on_set_state(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_qbase_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)() ```
void q_tablewidget_on_schedule_delayed_items_layout(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_qbase_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)() ```
void q_tablewidget_on_execute_delayed_items_layout(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QRegion* region ```
void q_tablewidget_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QRegion* region ```
void q_tablewidget_qbase_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QRegion*) ```
void q_tablewidget_on_set_dirty_region(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int dx, int dy ```
void q_tablewidget_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int dx, int dy ```
void q_tablewidget_qbase_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int, int) ```
void q_tablewidget_on_scroll_dirty_region(void* self, void (*slot)(void*, int, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
QPoint* q_tablewidget_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
QPoint* q_tablewidget_qbase_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, QPoint* (*slot)() ```
void q_tablewidget_on_dirty_region_offset(void* self, QPoint* (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_qbase_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)() ```
void q_tablewidget_on_start_auto_scroll(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_qbase_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)() ```
void q_tablewidget_on_stop_auto_scroll(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_qbase_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)() ```
void q_tablewidget_on_do_auto_scroll(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
int64_t q_tablewidget_qbase_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, int64_t (*slot)() ```
void q_tablewidget_on_drop_indicator_position(void* self, int64_t (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, int left, int top, int right, int bottom ```
void q_tablewidget_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, int left, int top, int right, int bottom ```
void q_tablewidget_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, int, int, int, int) ```
void q_tablewidget_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
QMargins* q_tablewidget_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
QMargins* q_tablewidget_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, QMargins* (*slot)() ```
void q_tablewidget_on_viewport_margins(void* self, QMargins* (*slot)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QPainter* param1 ```
void q_tablewidget_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QPainter* param1 ```
void q_tablewidget_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)(QTableWidget*, QPainter*) ```
void q_tablewidget_on_draw_frame(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)() ```
void q_tablewidget_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)() ```
void q_tablewidget_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
void q_tablewidget_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, void (*slot)() ```
void q_tablewidget_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
bool q_tablewidget_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
bool q_tablewidget_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, bool (*slot)() ```
void q_tablewidget_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
bool q_tablewidget_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
bool q_tablewidget_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, bool (*slot)() ```
void q_tablewidget_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
QObject* q_tablewidget_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
QObject* q_tablewidget_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, QObject* (*slot)() ```
void q_tablewidget_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self ```
int32_t q_tablewidget_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, int32_t (*slot)() ```
void q_tablewidget_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, const char* signal ```
int32_t q_tablewidget_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, const char* signal ```
int32_t q_tablewidget_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, int32_t (*slot)(QTableWidget*, const char*) ```
void q_tablewidget_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, QMetaMethod* signal ```
bool q_tablewidget_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, QMetaMethod* signal ```
bool q_tablewidget_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, bool (*slot)(QTableWidget*, QMetaMethod*) ```
void q_tablewidget_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableWidget* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_tablewidget_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableWidget* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_tablewidget_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableWidget* self, double (*slot)(QTableWidget*, enum QPaintDevice__PaintDeviceMetric, enum QPaintDevice__PaintDeviceMetric) ```
void q_tablewidget_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QTableWidget* self, void (*slot)(QObject*, const char*) ```
void q_tablewidget_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtablewidget.html#dtor.QTableWidget)
///
/// Delete this object from C++ memory.
///
/// ``` QTableWidget* self ```
void q_tablewidget_delete(void* self);

/// https://doc.qt.io/qt-6/qtablewidget.html#types

typedef enum {
    QTABLEWIDGETITEM_ITEMTYPE_TYPE = 0,
    QTABLEWIDGETITEM_ITEMTYPE_USERTYPE = 1000
} QTableWidgetItem__ItemType;

#endif
