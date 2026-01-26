#pragma once
#ifndef SRC_QT6C_LIBQTABLEVIEW_H
#define SRC_QT6C_LIBQTABLEVIEW_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html)

/// q_tableview_new constructs a new QTableView object.
///
/// @param parent QWidget*
///
QTableView* q_tableview_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html)

/// q_tableview_new2 constructs a new QTableView object.
///
QTableView* q_tableview_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QTableView*
///
const QMetaObject* q_tableview_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback const QMetaObject* func()
///
void q_tableview_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QTableView*
///
const QMetaObject* q_tableview_qbase_meta_object(void* self);

/// @param self QTableView*
/// @param param1 const char*
///
void* q_tableview_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback void* func(QTableView* self, const char* param1)
///
void q_tableview_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QTableView*
/// @param param1 const char*
///
void* q_tableview_qbase_metacast(void* self, const char* param1);

/// @param self QTableView*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_tableview_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback int32_t func(QTableView* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_tableview_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QTableView*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_tableview_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_tableview_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setModel)
///
/// @param self QTableView*
/// @param model QAbstractItemModel*
///
void q_tableview_set_model(void* self, void* model);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setModel)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QAbstractItemModel* model)
///
void q_tableview_on_set_model(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setModel)
///
/// Base class method implementation
///
/// @param self QTableView*
/// @param model QAbstractItemModel*
///
void q_tableview_qbase_set_model(void* self, void* model);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setRootIndex)
///
/// @param self QTableView*
/// @param index QModelIndex*
///
void q_tableview_set_root_index(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setRootIndex)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QModelIndex* index)
///
void q_tableview_on_set_root_index(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setRootIndex)
///
/// Base class method implementation
///
/// @param self QTableView*
/// @param index QModelIndex*
///
void q_tableview_qbase_set_root_index(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setSelectionModel)
///
/// @param self QTableView*
/// @param selectionModel QItemSelectionModel*
///
void q_tableview_set_selection_model(void* self, void* selectionModel);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setSelectionModel)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QItemSelectionModel* selectionModel)
///
void q_tableview_on_set_selection_model(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setSelectionModel)
///
/// Base class method implementation
///
/// @param self QTableView*
/// @param selectionModel QItemSelectionModel*
///
void q_tableview_qbase_set_selection_model(void* self, void* selectionModel);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#doItemsLayout)
///
/// @param self QTableView*
///
void q_tableview_do_items_layout(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#doItemsLayout)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback void func()
///
void q_tableview_on_do_items_layout(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#doItemsLayout)
///
/// Base class method implementation
///
/// @param self QTableView*
///
void q_tableview_qbase_do_items_layout(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#horizontalHeader)
///
/// @param self QTableView*
///
QHeaderView* q_tableview_horizontal_header(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#verticalHeader)
///
/// @param self QTableView*
///
QHeaderView* q_tableview_vertical_header(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setHorizontalHeader)
///
/// @param self QTableView*
/// @param header QHeaderView*
///
void q_tableview_set_horizontal_header(void* self, void* header);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setVerticalHeader)
///
/// @param self QTableView*
/// @param header QHeaderView*
///
void q_tableview_set_vertical_header(void* self, void* header);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#rowViewportPosition)
///
/// @param self QTableView*
/// @param row int
///
int32_t q_tableview_row_viewport_position(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#rowAt)
///
/// @param self QTableView*
/// @param y int
///
int32_t q_tableview_row_at(void* self, int y);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setRowHeight)
///
/// @param self QTableView*
/// @param row int
/// @param height int
///
void q_tableview_set_row_height(void* self, int row, int height);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#rowHeight)
///
/// @param self QTableView*
/// @param row int
///
int32_t q_tableview_row_height(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#columnViewportPosition)
///
/// @param self QTableView*
/// @param column int
///
int32_t q_tableview_column_viewport_position(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#columnAt)
///
/// @param self QTableView*
/// @param x int
///
int32_t q_tableview_column_at(void* self, int x);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setColumnWidth)
///
/// @param self QTableView*
/// @param column int
/// @param width int
///
void q_tableview_set_column_width(void* self, int column, int width);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#columnWidth)
///
/// @param self QTableView*
/// @param column int
///
int32_t q_tableview_column_width(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#isRowHidden)
///
/// @param self QTableView*
/// @param row int
///
bool q_tableview_is_row_hidden(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setRowHidden)
///
/// @param self QTableView*
/// @param row int
/// @param hide bool
///
void q_tableview_set_row_hidden(void* self, int row, bool hide);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#isColumnHidden)
///
/// @param self QTableView*
/// @param column int
///
bool q_tableview_is_column_hidden(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setColumnHidden)
///
/// @param self QTableView*
/// @param column int
/// @param hide bool
///
void q_tableview_set_column_hidden(void* self, int column, bool hide);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setSortingEnabled)
///
/// @param self QTableView*
/// @param enable bool
///
void q_tableview_set_sorting_enabled(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#isSortingEnabled)
///
/// @param self QTableView*
///
bool q_tableview_is_sorting_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#showGrid)
///
/// @param self QTableView*
///
bool q_tableview_show_grid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#gridStyle)
///
/// @param self QTableView*
///
/// @return enum Qt__PenStyle
///
int32_t q_tableview_grid_style(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setGridStyle)
///
/// @param self QTableView*
/// @param style enum Qt__PenStyle
///
void q_tableview_set_grid_style(void* self, int32_t style);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setWordWrap)
///
/// @param self QTableView*
/// @param on bool
///
void q_tableview_set_word_wrap(void* self, bool on);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#wordWrap)
///
/// @param self QTableView*
///
bool q_tableview_word_wrap(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setCornerButtonEnabled)
///
/// @param self QTableView*
/// @param enable bool
///
void q_tableview_set_corner_button_enabled(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#isCornerButtonEnabled)
///
/// @param self QTableView*
///
bool q_tableview_is_corner_button_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#visualRect)
///
/// @param self QTableView*
/// @param index QModelIndex*
///
QRect* q_tableview_visual_rect(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#visualRect)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback QRect* func(QTableView* self, QModelIndex* index)
///
void q_tableview_on_visual_rect(void* self, QRect* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#visualRect)
///
/// Base class method implementation
///
/// @param self QTableView*
/// @param index QModelIndex*
///
QRect* q_tableview_qbase_visual_rect(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#scrollTo)
///
/// @param self QTableView*
/// @param index QModelIndex*
/// @param hint enum QAbstractItemView__ScrollHint
///
void q_tableview_scroll_to(void* self, void* index, int32_t hint);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#scrollTo)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint)
///
void q_tableview_on_scroll_to(void* self, void (*callback)(void*, void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#scrollTo)
///
/// Base class method implementation
///
/// @param self QTableView*
/// @param index QModelIndex*
/// @param hint enum QAbstractItemView__ScrollHint
///
void q_tableview_qbase_scroll_to(void* self, void* index, int32_t hint);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#indexAt)
///
/// @param self QTableView*
/// @param p QPoint*
///
QModelIndex* q_tableview_index_at(void* self, void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#indexAt)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback QModelIndex* func(QTableView* self, QPoint* p)
///
void q_tableview_on_index_at(void* self, QModelIndex* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#indexAt)
///
/// Base class method implementation
///
/// @param self QTableView*
/// @param p QPoint*
///
QModelIndex* q_tableview_qbase_index_at(void* self, void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setSpan)
///
/// @param self QTableView*
/// @param row int
/// @param column int
/// @param rowSpan int
/// @param columnSpan int
///
void q_tableview_set_span(void* self, int row, int column, int rowSpan, int columnSpan);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#rowSpan)
///
/// @param self QTableView*
/// @param row int
/// @param column int
///
int32_t q_tableview_row_span(void* self, int row, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#columnSpan)
///
/// @param self QTableView*
/// @param row int
/// @param column int
///
int32_t q_tableview_column_span(void* self, int row, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#clearSpans)
///
/// @param self QTableView*
///
void q_tableview_clear_spans(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#selectRow)
///
/// @param self QTableView*
/// @param row int
///
void q_tableview_select_row(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#selectColumn)
///
/// @param self QTableView*
/// @param column int
///
void q_tableview_select_column(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#hideRow)
///
/// @param self QTableView*
/// @param row int
///
void q_tableview_hide_row(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#hideColumn)
///
/// @param self QTableView*
/// @param column int
///
void q_tableview_hide_column(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#showRow)
///
/// @param self QTableView*
/// @param row int
///
void q_tableview_show_row(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#showColumn)
///
/// @param self QTableView*
/// @param column int
///
void q_tableview_show_column(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#resizeRowToContents)
///
/// @param self QTableView*
/// @param row int
///
void q_tableview_resize_row_to_contents(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#resizeRowsToContents)
///
/// @param self QTableView*
///
void q_tableview_resize_rows_to_contents(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#resizeColumnToContents)
///
/// @param self QTableView*
/// @param column int
///
void q_tableview_resize_column_to_contents(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#resizeColumnsToContents)
///
/// @param self QTableView*
///
void q_tableview_resize_columns_to_contents(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#sortByColumn)
///
/// @param self QTableView*
/// @param column int
/// @param order enum Qt__SortOrder
///
void q_tableview_sort_by_column(void* self, int column, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setShowGrid)
///
/// @param self QTableView*
/// @param show bool
///
void q_tableview_set_show_grid(void* self, bool show);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#rowMoved)
///
/// @param self QTableView*
/// @param row int
/// @param oldIndex int
/// @param newIndex int
///
void q_tableview_row_moved(void* self, int row, int oldIndex, int newIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#rowMoved)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, int row, int oldIndex, int newIndex)
///
void q_tableview_on_row_moved(void* self, void (*callback)(void*, int, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#rowMoved)
///
/// Base class method implementation
///
/// @param self QTableView*
/// @param row int
/// @param oldIndex int
/// @param newIndex int
///
void q_tableview_qbase_row_moved(void* self, int row, int oldIndex, int newIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#columnMoved)
///
/// @param self QTableView*
/// @param column int
/// @param oldIndex int
/// @param newIndex int
///
void q_tableview_column_moved(void* self, int column, int oldIndex, int newIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#columnMoved)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, int column, int oldIndex, int newIndex)
///
void q_tableview_on_column_moved(void* self, void (*callback)(void*, int, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#columnMoved)
///
/// Base class method implementation
///
/// @param self QTableView*
/// @param column int
/// @param oldIndex int
/// @param newIndex int
///
void q_tableview_qbase_column_moved(void* self, int column, int oldIndex, int newIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#rowResized)
///
/// @param self QTableView*
/// @param row int
/// @param oldHeight int
/// @param newHeight int
///
void q_tableview_row_resized(void* self, int row, int oldHeight, int newHeight);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#rowResized)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, int row, int oldHeight, int newHeight)
///
void q_tableview_on_row_resized(void* self, void (*callback)(void*, int, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#rowResized)
///
/// Base class method implementation
///
/// @param self QTableView*
/// @param row int
/// @param oldHeight int
/// @param newHeight int
///
void q_tableview_qbase_row_resized(void* self, int row, int oldHeight, int newHeight);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#columnResized)
///
/// @param self QTableView*
/// @param column int
/// @param oldWidth int
/// @param newWidth int
///
void q_tableview_column_resized(void* self, int column, int oldWidth, int newWidth);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#columnResized)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, int column, int oldWidth, int newWidth)
///
void q_tableview_on_column_resized(void* self, void (*callback)(void*, int, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#columnResized)
///
/// Base class method implementation
///
/// @param self QTableView*
/// @param column int
/// @param oldWidth int
/// @param newWidth int
///
void q_tableview_qbase_column_resized(void* self, int column, int oldWidth, int newWidth);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#rowCountChanged)
///
/// @param self QTableView*
/// @param oldCount int
/// @param newCount int
///
void q_tableview_row_count_changed(void* self, int oldCount, int newCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#rowCountChanged)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, int oldCount, int newCount)
///
void q_tableview_on_row_count_changed(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#rowCountChanged)
///
/// Base class method implementation
///
/// @param self QTableView*
/// @param oldCount int
/// @param newCount int
///
void q_tableview_qbase_row_count_changed(void* self, int oldCount, int newCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#columnCountChanged)
///
/// @param self QTableView*
/// @param oldCount int
/// @param newCount int
///
void q_tableview_column_count_changed(void* self, int oldCount, int newCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#columnCountChanged)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, int oldCount, int newCount)
///
void q_tableview_on_column_count_changed(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#columnCountChanged)
///
/// Base class method implementation
///
/// @param self QTableView*
/// @param oldCount int
/// @param newCount int
///
void q_tableview_qbase_column_count_changed(void* self, int oldCount, int newCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#scrollContentsBy)
///
/// @param self QTableView*
/// @param dx int
/// @param dy int
///
void q_tableview_scroll_contents_by(void* self, int dx, int dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#scrollContentsBy)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, int dx, int dy)
///
void q_tableview_on_scroll_contents_by(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#scrollContentsBy)
///
/// Base class method implementation
///
/// @param self QTableView*
/// @param dx int
/// @param dy int
///
void q_tableview_qbase_scroll_contents_by(void* self, int dx, int dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#initViewItemOption)
///
/// @param self QTableView*
/// @param option QStyleOptionViewItem*
///
void q_tableview_init_view_item_option(void* self, void* option);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#initViewItemOption)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QStyleOptionViewItem* option)
///
void q_tableview_on_init_view_item_option(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#initViewItemOption)
///
/// Base class method implementation
///
/// @param self QTableView*
/// @param option QStyleOptionViewItem*
///
void q_tableview_qbase_init_view_item_option(void* self, void* option);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#paintEvent)
///
/// @param self QTableView*
/// @param e QPaintEvent*
///
void q_tableview_paint_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QPaintEvent* e)
///
void q_tableview_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#paintEvent)
///
/// Base class method implementation
///
/// @param self QTableView*
/// @param e QPaintEvent*
///
void q_tableview_qbase_paint_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#timerEvent)
///
/// @param self QTableView*
/// @param event QTimerEvent*
///
void q_tableview_timer_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QTimerEvent* event)
///
void q_tableview_on_timer_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#timerEvent)
///
/// Base class method implementation
///
/// @param self QTableView*
/// @param event QTimerEvent*
///
void q_tableview_qbase_timer_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#dropEvent)
///
/// @param self QTableView*
/// @param event QDropEvent*
///
void q_tableview_drop_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#dropEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QDropEvent* event)
///
void q_tableview_on_drop_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#dropEvent)
///
/// Base class method implementation
///
/// @param self QTableView*
/// @param event QDropEvent*
///
void q_tableview_qbase_drop_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#horizontalOffset)
///
/// @param self QTableView*
///
int32_t q_tableview_horizontal_offset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#horizontalOffset)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback int32_t func()
///
void q_tableview_on_horizontal_offset(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#horizontalOffset)
///
/// Base class method implementation
///
/// @param self QTableView*
///
int32_t q_tableview_qbase_horizontal_offset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#verticalOffset)
///
/// @param self QTableView*
///
int32_t q_tableview_vertical_offset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#verticalOffset)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback int32_t func()
///
void q_tableview_on_vertical_offset(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#verticalOffset)
///
/// Base class method implementation
///
/// @param self QTableView*
///
int32_t q_tableview_qbase_vertical_offset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#moveCursor)
///
/// @param self QTableView*
/// @param cursorAction enum QAbstractItemView__CursorAction
/// @param modifiers flag of enum Qt__KeyboardModifier
///
QModelIndex* q_tableview_move_cursor(void* self, int32_t cursorAction, int32_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#moveCursor)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback QModelIndex* func(QTableView* self, enum QAbstractItemView__CursorAction cursorAction, flag of enum Qt__KeyboardModifier modifiers)
///
void q_tableview_on_move_cursor(void* self, QModelIndex* (*callback)(void*, int32_t, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#moveCursor)
///
/// Base class method implementation
///
/// @param self QTableView*
/// @param cursorAction enum QAbstractItemView__CursorAction
/// @param modifiers flag of enum Qt__KeyboardModifier
///
QModelIndex* q_tableview_qbase_move_cursor(void* self, int32_t cursorAction, int32_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setSelection)
///
/// @param self QTableView*
/// @param rect QRect*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
///
void q_tableview_set_selection(void* self, void* rect, int32_t command);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setSelection)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QRect* rect, flag of enum QItemSelectionModel__SelectionFlag command)
///
void q_tableview_on_set_selection(void* self, void (*callback)(void*, void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#setSelection)
///
/// Base class method implementation
///
/// @param self QTableView*
/// @param rect QRect*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
///
void q_tableview_qbase_set_selection(void* self, void* rect, int32_t command);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#visualRegionForSelection)
///
/// @param self QTableView*
/// @param selection QItemSelection*
///
QRegion* q_tableview_visual_region_for_selection(void* self, void* selection);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#visualRegionForSelection)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback QRegion* func(QTableView* self, QItemSelection* selection)
///
void q_tableview_on_visual_region_for_selection(void* self, QRegion* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#visualRegionForSelection)
///
/// Base class method implementation
///
/// @param self QTableView*
/// @param selection QItemSelection*
///
QRegion* q_tableview_qbase_visual_region_for_selection(void* self, void* selection);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#selectedIndexes)
///
/// @param self QTableView*
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_tableview_selected_indexes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#selectedIndexes)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback QModelIndex** func()
///
void q_tableview_on_selected_indexes(void* self, QModelIndex** (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#selectedIndexes)
///
/// Base class method implementation
///
/// @param self QTableView*
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_tableview_qbase_selected_indexes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#updateGeometries)
///
/// @param self QTableView*
///
void q_tableview_update_geometries(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#updateGeometries)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback void func()
///
void q_tableview_on_update_geometries(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#updateGeometries)
///
/// Base class method implementation
///
/// @param self QTableView*
///
void q_tableview_qbase_update_geometries(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#viewportSizeHint)
///
/// @param self QTableView*
///
QSize* q_tableview_viewport_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#viewportSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback QSize* func()
///
void q_tableview_on_viewport_size_hint(void* self, QSize* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#viewportSizeHint)
///
/// Base class method implementation
///
/// @param self QTableView*
///
QSize* q_tableview_qbase_viewport_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#sizeHintForRow)
///
/// @param self QTableView*
/// @param row int
///
int32_t q_tableview_size_hint_for_row(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#sizeHintForRow)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback int32_t func(QTableView* self, int row)
///
void q_tableview_on_size_hint_for_row(void* self, int32_t (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#sizeHintForRow)
///
/// Base class method implementation
///
/// @param self QTableView*
/// @param row int
///
int32_t q_tableview_qbase_size_hint_for_row(void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#sizeHintForColumn)
///
/// @param self QTableView*
/// @param column int
///
int32_t q_tableview_size_hint_for_column(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#sizeHintForColumn)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback int32_t func(QTableView* self, int column)
///
void q_tableview_on_size_hint_for_column(void* self, int32_t (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#sizeHintForColumn)
///
/// Base class method implementation
///
/// @param self QTableView*
/// @param column int
///
int32_t q_tableview_qbase_size_hint_for_column(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#verticalScrollbarAction)
///
/// @param self QTableView*
/// @param action int
///
void q_tableview_vertical_scrollbar_action(void* self, int action);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#verticalScrollbarAction)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, int action)
///
void q_tableview_on_vertical_scrollbar_action(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#verticalScrollbarAction)
///
/// Base class method implementation
///
/// @param self QTableView*
/// @param action int
///
void q_tableview_qbase_vertical_scrollbar_action(void* self, int action);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#horizontalScrollbarAction)
///
/// @param self QTableView*
/// @param action int
///
void q_tableview_horizontal_scrollbar_action(void* self, int action);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#horizontalScrollbarAction)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, int action)
///
void q_tableview_on_horizontal_scrollbar_action(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#horizontalScrollbarAction)
///
/// Base class method implementation
///
/// @param self QTableView*
/// @param action int
///
void q_tableview_qbase_horizontal_scrollbar_action(void* self, int action);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#isIndexHidden)
///
/// @param self QTableView*
/// @param index QModelIndex*
///
bool q_tableview_is_index_hidden(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#isIndexHidden)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback bool func(QTableView* self, QModelIndex* index)
///
void q_tableview_on_is_index_hidden(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#isIndexHidden)
///
/// Base class method implementation
///
/// @param self QTableView*
/// @param index QModelIndex*
///
bool q_tableview_qbase_is_index_hidden(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#selectionChanged)
///
/// @param self QTableView*
/// @param selected QItemSelection*
/// @param deselected QItemSelection*
///
void q_tableview_selection_changed(void* self, void* selected, void* deselected);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#selectionChanged)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QItemSelection* selected, QItemSelection* deselected)
///
void q_tableview_on_selection_changed(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#selectionChanged)
///
/// Base class method implementation
///
/// @param self QTableView*
/// @param selected QItemSelection*
/// @param deselected QItemSelection*
///
void q_tableview_qbase_selection_changed(void* self, void* selected, void* deselected);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#currentChanged)
///
/// @param self QTableView*
/// @param current QModelIndex*
/// @param previous QModelIndex*
///
void q_tableview_current_changed(void* self, void* current, void* previous);

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#currentChanged)
///
/// Allows for overriding the related default method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QModelIndex* current, QModelIndex* previous)
///
void q_tableview_on_current_changed(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#currentChanged)
///
/// Base class method implementation
///
/// @param self QTableView*
/// @param current QModelIndex*
/// @param previous QModelIndex*
///
void q_tableview_qbase_current_changed(void* self, void* current, void* previous);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_tableview_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_tableview_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#model)
///
/// @param self QTableView*
///
QAbstractItemModel* q_tableview_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
///
/// @param self QTableView*
///
QItemSelectionModel* q_tableview_selection_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
///
/// @param self QTableView*
/// @param delegate QAbstractItemDelegate*
///
void q_tableview_set_item_delegate(void* self, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// @param self QTableView*
///
QAbstractItemDelegate* q_tableview_item_delegate(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
///
/// @param self QTableView*
/// @param mode enum QAbstractItemView__SelectionMode
///
void q_tableview_set_selection_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
///
/// @param self QTableView*
///
/// @return enum QAbstractItemView__SelectionMode
///
int32_t q_tableview_selection_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
///
/// @param self QTableView*
/// @param behavior enum QAbstractItemView__SelectionBehavior
///
void q_tableview_set_selection_behavior(void* self, int32_t behavior);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
///
/// @param self QTableView*
///
/// @return enum QAbstractItemView__SelectionBehavior
///
int32_t q_tableview_selection_behavior(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
///
/// @param self QTableView*
///
QModelIndex* q_tableview_current_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
///
/// @param self QTableView*
///
QModelIndex* q_tableview_root_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
///
/// @param self QTableView*
/// @param triggers flag of enum QAbstractItemView__EditTrigger
///
void q_tableview_set_edit_triggers(void* self, int32_t triggers);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
///
/// @param self QTableView*
///
/// @return flag of enum QAbstractItemView__EditTrigger
///
int32_t q_tableview_edit_triggers(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
///
/// @param self QTableView*
/// @param mode enum QAbstractItemView__ScrollMode
///
void q_tableview_set_vertical_scroll_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
///
/// @param self QTableView*
///
/// @return enum QAbstractItemView__ScrollMode
///
int32_t q_tableview_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
///
/// @param self QTableView*
///
void q_tableview_reset_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
///
/// @param self QTableView*
/// @param mode enum QAbstractItemView__ScrollMode
///
void q_tableview_set_horizontal_scroll_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
///
/// @param self QTableView*
///
/// @return enum QAbstractItemView__ScrollMode
///
int32_t q_tableview_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
///
/// @param self QTableView*
///
void q_tableview_reset_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
///
/// @param self QTableView*
/// @param enable bool
///
void q_tableview_set_auto_scroll(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
///
/// @param self QTableView*
///
bool q_tableview_has_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
///
/// @param self QTableView*
/// @param margin int
///
void q_tableview_set_auto_scroll_margin(void* self, int margin);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
///
/// @param self QTableView*
///
int32_t q_tableview_auto_scroll_margin(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
///
/// @param self QTableView*
/// @param enable bool
///
void q_tableview_set_tab_key_navigation(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
///
/// @param self QTableView*
///
bool q_tableview_tab_key_navigation(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
///
/// @param self QTableView*
/// @param enable bool
///
void q_tableview_set_drop_indicator_shown(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
///
/// @param self QTableView*
///
bool q_tableview_show_drop_indicator(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
///
/// @param self QTableView*
/// @param enable bool
///
void q_tableview_set_drag_enabled(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
///
/// @param self QTableView*
///
bool q_tableview_drag_enabled(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
///
/// @param self QTableView*
/// @param overwrite bool
///
void q_tableview_set_drag_drop_overwrite_mode(void* self, bool overwrite);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
///
/// @param self QTableView*
///
bool q_tableview_drag_drop_overwrite_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
///
/// @param self QTableView*
/// @param behavior enum QAbstractItemView__DragDropMode
///
void q_tableview_set_drag_drop_mode(void* self, int32_t behavior);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
///
/// @param self QTableView*
///
/// @return enum QAbstractItemView__DragDropMode
///
int32_t q_tableview_drag_drop_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
///
/// @param self QTableView*
/// @param dropAction enum Qt__DropAction
///
void q_tableview_set_default_drop_action(void* self, int32_t dropAction);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
///
/// @param self QTableView*
///
/// @return enum Qt__DropAction
///
int32_t q_tableview_default_drop_action(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
///
/// @param self QTableView*
/// @param enable bool
///
void q_tableview_set_alternating_row_colors(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
///
/// @param self QTableView*
///
bool q_tableview_alternating_row_colors(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
///
/// @param self QTableView*
/// @param size QSize*
///
void q_tableview_set_icon_size(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
///
/// @param self QTableView*
///
QSize* q_tableview_icon_size(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
///
/// @param self QTableView*
/// @param mode enum Qt__TextElideMode
///
void q_tableview_set_text_elide_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
///
/// @param self QTableView*
///
/// @return enum Qt__TextElideMode
///
int32_t q_tableview_text_elide_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
///
/// @param self QTableView*
/// @param index QModelIndex*
///
QSize* q_tableview_size_hint_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#openPersistentEditor)
///
/// @param self QTableView*
/// @param index QModelIndex*
///
void q_tableview_open_persistent_editor(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closePersistentEditor)
///
/// @param self QTableView*
/// @param index QModelIndex*
///
void q_tableview_close_persistent_editor(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#isPersistentEditorOpen)
///
/// @param self QTableView*
/// @param index QModelIndex*
///
bool q_tableview_is_persistent_editor_open(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
///
/// @param self QTableView*
/// @param index QModelIndex*
/// @param widget QWidget*
///
void q_tableview_set_index_widget(void* self, void* index, void* widget);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
///
/// @param self QTableView*
/// @param index QModelIndex*
///
QWidget* q_tableview_index_widget(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
///
/// @param self QTableView*
/// @param row int
/// @param delegate QAbstractItemDelegate*
///
void q_tableview_set_item_delegate_for_row(void* self, int row, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
///
/// @param self QTableView*
/// @param row int
///
QAbstractItemDelegate* q_tableview_item_delegate_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
///
/// @param self QTableView*
/// @param column int
/// @param delegate QAbstractItemDelegate*
///
void q_tableview_set_item_delegate_for_column(void* self, int column, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
///
/// @param self QTableView*
/// @param column int
///
QAbstractItemDelegate* q_tableview_item_delegate_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// @param self QTableView*
/// @param index QModelIndex*
///
QAbstractItemDelegate* q_tableview_item_delegate2(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// @param self QTableView*
/// @param index QModelIndex*
///
void q_tableview_edit(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
///
/// @param self QTableView*
///
void q_tableview_clear_selection(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
///
/// @param self QTableView*
/// @param index QModelIndex*
///
void q_tableview_set_current_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
///
/// @param self QTableView*
///
void q_tableview_scroll_to_top(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
///
/// @param self QTableView*
///
void q_tableview_scroll_to_bottom(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#update)
///
/// @param self QTableView*
/// @param index QModelIndex*
///
void q_tableview_update(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// @param self QTableView*
/// @param index QModelIndex*
///
void q_tableview_pressed(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QModelIndex* index)
///
void q_tableview_on_pressed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// @param self QTableView*
/// @param index QModelIndex*
///
void q_tableview_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QModelIndex* index)
///
void q_tableview_on_clicked(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// @param self QTableView*
/// @param index QModelIndex*
///
void q_tableview_double_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QModelIndex* index)
///
void q_tableview_on_double_clicked(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// @param self QTableView*
/// @param index QModelIndex*
///
void q_tableview_activated(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QModelIndex* index)
///
void q_tableview_on_activated(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// @param self QTableView*
/// @param index QModelIndex*
///
void q_tableview_entered(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QModelIndex* index)
///
void q_tableview_on_entered(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// @param self QTableView*
///
void q_tableview_viewport_entered(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// @param self QTableView*
/// @param callback void func(QTableView* self)
///
void q_tableview_on_viewport_entered(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// @param self QTableView*
/// @param size QSize*
///
void q_tableview_icon_size_changed(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QSize* size)
///
void q_tableview_on_icon_size_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// @param self QTableView*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t q_tableview_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// @param self QTableView*
/// @param verticalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void q_tableview_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// @param self QTableView*
///
QScrollBar* q_tableview_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// @param self QTableView*
/// @param scrollbar QScrollBar*
///
void q_tableview_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// @param self QTableView*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t q_tableview_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// @param self QTableView*
/// @param horizontalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void q_tableview_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// @param self QTableView*
///
QScrollBar* q_tableview_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// @param self QTableView*
/// @param scrollbar QScrollBar*
///
void q_tableview_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// @param self QTableView*
///
QWidget* q_tableview_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// @param self QTableView*
/// @param widget QWidget*
///
void q_tableview_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// @param self QTableView*
/// @param widget QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_tableview_add_scroll_bar_widget(void* self, void* widget, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// @param self QTableView*
/// @param alignment flag of enum Qt__AlignmentFlag
///
/// @return libqt_list of QWidget*
///
libqt_list q_tableview_scroll_bar_widgets(void* self, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// @param self QTableView*
///
QWidget* q_tableview_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// @param self QTableView*
/// @param widget QWidget*
///
void q_tableview_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// @param self QTableView*
///
QSize* q_tableview_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// @param self QTableView*
///
/// @return enum QAbstractScrollArea__SizeAdjustPolicy
///
int32_t q_tableview_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// @param self QTableView*
/// @param policy enum QAbstractScrollArea__SizeAdjustPolicy
///
void q_tableview_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self QTableView*
///
int32_t q_tableview_frame_style(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self QTableView*
/// @param frameStyle int
///
void q_tableview_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self QTableView*
///
int32_t q_tableview_frame_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self QTableView*
///
/// @return enum QFrame__Shape
///
int32_t q_tableview_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self QTableView*
/// @param frameShape enum QFrame__Shape
///
void q_tableview_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self QTableView*
///
/// @return enum QFrame__Shadow
///
int32_t q_tableview_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self QTableView*
/// @param frameShadow enum QFrame__Shadow
///
void q_tableview_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self QTableView*
///
int32_t q_tableview_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self QTableView*
/// @param lineWidth int
///
void q_tableview_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self QTableView*
///
int32_t q_tableview_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self QTableView*
/// @param midLineWidth int
///
void q_tableview_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self QTableView*
///
QRect* q_tableview_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self QTableView*
/// @param frameRect QRect*
///
void q_tableview_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QTableView*
///
uintptr_t q_tableview_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QTableView*
///
void q_tableview_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QTableView*
///
uintptr_t q_tableview_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QTableView*
///
uintptr_t q_tableview_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QTableView*
///
QStyle* q_tableview_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QTableView*
/// @param style QStyle*
///
void q_tableview_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QTableView*
///
bool q_tableview_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QTableView*
///
bool q_tableview_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QTableView*
///
bool q_tableview_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QTableView*
///
/// @return enum Qt__WindowModality
///
int32_t q_tableview_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QTableView*
/// @param windowModality enum Qt__WindowModality
///
void q_tableview_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QTableView*
///
bool q_tableview_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QTableView*
/// @param param1 QWidget*
///
bool q_tableview_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QTableView*
/// @param enabled bool
///
void q_tableview_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QTableView*
/// @param disabled bool
///
void q_tableview_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QTableView*
/// @param windowModified bool
///
void q_tableview_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QTableView*
///
QRect* q_tableview_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QTableView*
///
const QRect* q_tableview_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QTableView*
///
QRect* q_tableview_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QTableView*
///
int32_t q_tableview_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QTableView*
///
int32_t q_tableview_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QTableView*
///
QPoint* q_tableview_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QTableView*
///
QSize* q_tableview_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QTableView*
///
QSize* q_tableview_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QTableView*
///
int32_t q_tableview_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QTableView*
///
int32_t q_tableview_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QTableView*
///
QRect* q_tableview_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QTableView*
///
QRect* q_tableview_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QTableView*
///
QRegion* q_tableview_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QTableView*
///
QSize* q_tableview_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QTableView*
///
QSize* q_tableview_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QTableView*
///
int32_t q_tableview_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QTableView*
///
int32_t q_tableview_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QTableView*
///
int32_t q_tableview_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QTableView*
///
int32_t q_tableview_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QTableView*
/// @param minimumSize QSize*
///
void q_tableview_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QTableView*
/// @param minw int
/// @param minh int
///
void q_tableview_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QTableView*
/// @param maximumSize QSize*
///
void q_tableview_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QTableView*
/// @param maxw int
/// @param maxh int
///
void q_tableview_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QTableView*
/// @param minw int
///
void q_tableview_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QTableView*
/// @param minh int
///
void q_tableview_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QTableView*
/// @param maxw int
///
void q_tableview_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QTableView*
/// @param maxh int
///
void q_tableview_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QTableView*
///
QSize* q_tableview_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QTableView*
/// @param sizeIncrement QSize*
///
void q_tableview_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QTableView*
/// @param w int
/// @param h int
///
void q_tableview_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QTableView*
///
QSize* q_tableview_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QTableView*
/// @param baseSize QSize*
///
void q_tableview_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QTableView*
/// @param basew int
/// @param baseh int
///
void q_tableview_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QTableView*
/// @param fixedSize QSize*
///
void q_tableview_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QTableView*
/// @param w int
/// @param h int
///
void q_tableview_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QTableView*
/// @param w int
///
void q_tableview_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QTableView*
/// @param h int
///
void q_tableview_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QTableView*
/// @param param1 QPointF*
///
QPointF* q_tableview_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QTableView*
/// @param param1 QPoint*
///
QPoint* q_tableview_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QTableView*
/// @param param1 QPointF*
///
QPointF* q_tableview_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QTableView*
/// @param param1 QPoint*
///
QPoint* q_tableview_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QTableView*
/// @param param1 QPointF*
///
QPointF* q_tableview_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QTableView*
/// @param param1 QPoint*
///
QPoint* q_tableview_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QTableView*
/// @param param1 QPointF*
///
QPointF* q_tableview_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QTableView*
/// @param param1 QPoint*
///
QPoint* q_tableview_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QTableView*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_tableview_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QTableView*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_tableview_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QTableView*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_tableview_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QTableView*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_tableview_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QTableView*
///
QWidget* q_tableview_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QTableView*
///
QWidget* q_tableview_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QTableView*
///
QWidget* q_tableview_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QTableView*
///
const QPalette* q_tableview_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QTableView*
/// @param palette QPalette*
///
void q_tableview_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QTableView*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_tableview_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QTableView*
///
/// @return enum QPalette__ColorRole
///
int32_t q_tableview_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QTableView*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_tableview_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QTableView*
///
/// @return enum QPalette__ColorRole
///
int32_t q_tableview_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QTableView*
///
const QFont* q_tableview_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QTableView*
/// @param font QFont*
///
void q_tableview_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QTableView*
///
QFontMetrics* q_tableview_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QTableView*
///
QFontInfo* q_tableview_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QTableView*
///
QCursor* q_tableview_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QTableView*
/// @param cursor QCursor*
///
void q_tableview_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QTableView*
///
void q_tableview_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QTableView*
/// @param enable bool
///
void q_tableview_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QTableView*
///
bool q_tableview_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QTableView*
///
bool q_tableview_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QTableView*
/// @param enable bool
///
void q_tableview_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QTableView*
///
bool q_tableview_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QTableView*
/// @param mask QBitmap*
///
void q_tableview_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QTableView*
/// @param mask QRegion*
///
void q_tableview_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QTableView*
///
QRegion* q_tableview_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QTableView*
///
void q_tableview_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTableView*
/// @param target QPaintDevice*
///
void q_tableview_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTableView*
/// @param painter QPainter*
///
void q_tableview_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QTableView*
///
QPixmap* q_tableview_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QTableView*
///
QGraphicsEffect* q_tableview_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QTableView*
/// @param effect QGraphicsEffect*
///
void q_tableview_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QTableView*
/// @param type enum Qt__GestureType
///
void q_tableview_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QTableView*
/// @param type enum Qt__GestureType
///
void q_tableview_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QTableView*
/// @param windowTitle const char*
///
void q_tableview_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QTableView*
/// @param styleSheet const char*
///
void q_tableview_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTableView*
///
const char* q_tableview_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTableView*
///
const char* q_tableview_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QTableView*
/// @param icon QIcon*
///
void q_tableview_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QTableView*
///
QIcon* q_tableview_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QTableView*
/// @param windowIconText const char*
///
void q_tableview_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTableView*
///
const char* q_tableview_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QTableView*
/// @param windowRole const char*
///
void q_tableview_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTableView*
///
const char* q_tableview_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QTableView*
/// @param filePath const char*
///
void q_tableview_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTableView*
///
const char* q_tableview_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QTableView*
/// @param level double
///
void q_tableview_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QTableView*
///
double q_tableview_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QTableView*
///
bool q_tableview_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QTableView*
/// @param toolTip const char*
///
void q_tableview_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTableView*
///
const char* q_tableview_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QTableView*
/// @param msec int
///
void q_tableview_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QTableView*
///
int32_t q_tableview_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QTableView*
/// @param statusTip const char*
///
void q_tableview_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTableView*
///
const char* q_tableview_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QTableView*
/// @param whatsThis const char*
///
void q_tableview_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTableView*
///
const char* q_tableview_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTableView*
///
const char* q_tableview_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QTableView*
/// @param name const char*
///
void q_tableview_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTableView*
///
const char* q_tableview_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QTableView*
/// @param description const char*
///
void q_tableview_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QTableView*
/// @param direction enum Qt__LayoutDirection
///
void q_tableview_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QTableView*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_tableview_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QTableView*
///
void q_tableview_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QTableView*
/// @param locale QLocale*
///
void q_tableview_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QTableView*
///
QLocale* q_tableview_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QTableView*
///
void q_tableview_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QTableView*
///
bool q_tableview_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QTableView*
///
bool q_tableview_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QTableView*
///
void q_tableview_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QTableView*
///
bool q_tableview_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QTableView*
///
void q_tableview_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QTableView*
///
void q_tableview_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QTableView*
/// @param reason enum Qt__FocusReason
///
void q_tableview_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QTableView*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_tableview_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QTableView*
/// @param policy enum Qt__FocusPolicy
///
void q_tableview_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QTableView*
///
bool q_tableview_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_tableview_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QTableView*
/// @param focusProxy QWidget*
///
void q_tableview_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QTableView*
///
QWidget* q_tableview_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QTableView*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_tableview_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QTableView*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_tableview_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QTableView*
///
void q_tableview_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QTableView*
/// @param param1 QCursor*
///
void q_tableview_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QTableView*
///
void q_tableview_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QTableView*
///
void q_tableview_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QTableView*
///
void q_tableview_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QTableView*
/// @param key QKeySequence*
///
int32_t q_tableview_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QTableView*
/// @param id int
///
void q_tableview_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QTableView*
/// @param id int
///
void q_tableview_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QTableView*
/// @param id int
///
void q_tableview_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_tableview_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_tableview_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QTableView*
///
bool q_tableview_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QTableView*
/// @param enable bool
///
void q_tableview_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QTableView*
///
QGraphicsProxyWidget* q_tableview_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTableView*
///
void q_tableview_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTableView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_tableview_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTableView*
/// @param param1 QRect*
///
void q_tableview_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTableView*
/// @param param1 QRegion*
///
void q_tableview_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTableView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_tableview_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTableView*
/// @param param1 QRect*
///
void q_tableview_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTableView*
/// @param param1 QRegion*
///
void q_tableview_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QTableView*
/// @param hidden bool
///
void q_tableview_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QTableView*
///
void q_tableview_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QTableView*
///
void q_tableview_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QTableView*
///
void q_tableview_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QTableView*
///
void q_tableview_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QTableView*
///
void q_tableview_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QTableView*
///
void q_tableview_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QTableView*
///
bool q_tableview_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QTableView*
///
void q_tableview_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QTableView*
///
void q_tableview_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QTableView*
/// @param param1 QWidget*
///
void q_tableview_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QTableView*
/// @param x int
/// @param y int
///
void q_tableview_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QTableView*
/// @param param1 QPoint*
///
void q_tableview_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QTableView*
/// @param w int
/// @param h int
///
void q_tableview_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QTableView*
/// @param param1 QSize*
///
void q_tableview_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QTableView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_tableview_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QTableView*
/// @param geometry QRect*
///
void q_tableview_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QTableView*
///
char* q_tableview_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QTableView*
/// @param geometry const char*
///
bool q_tableview_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QTableView*
///
void q_tableview_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QTableView*
///
bool q_tableview_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QTableView*
/// @param param1 QWidget*
///
bool q_tableview_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QTableView*
///
bool q_tableview_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QTableView*
///
bool q_tableview_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QTableView*
///
bool q_tableview_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QTableView*
///
bool q_tableview_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QTableView*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_tableview_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QTableView*
/// @param state flag of enum Qt__WindowState
///
void q_tableview_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QTableView*
/// @param state flag of enum Qt__WindowState
///
void q_tableview_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QTableView*
///
QSizePolicy* q_tableview_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QTableView*
/// @param sizePolicy QSizePolicy*
///
void q_tableview_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QTableView*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_tableview_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QTableView*
///
QRegion* q_tableview_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QTableView*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_tableview_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QTableView*
/// @param margins QMargins*
///
void q_tableview_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QTableView*
///
QMargins* q_tableview_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QTableView*
///
QRect* q_tableview_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QTableView*
///
QLayout* q_tableview_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QTableView*
/// @param layout QLayout*
///
void q_tableview_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QTableView*
///
void q_tableview_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QTableView*
/// @param parent QWidget*
///
void q_tableview_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QTableView*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_tableview_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QTableView*
/// @param dx int
/// @param dy int
///
void q_tableview_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QTableView*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_tableview_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QTableView*
///
QWidget* q_tableview_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QTableView*
///
QWidget* q_tableview_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QTableView*
///
QWidget* q_tableview_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QTableView*
///
bool q_tableview_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QTableView*
/// @param on bool
///
void q_tableview_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTableView*
/// @param action QAction*
///
void q_tableview_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QTableView*
/// @param actions libqt_list of QAction*
///
void q_tableview_add_actions(void* self, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QTableView*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_tableview_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QTableView*
/// @param before QAction*
/// @param action QAction*
///
void q_tableview_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QTableView*
/// @param action QAction*
///
void q_tableview_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QTableView*
///
/// @return libqt_list of QAction*
///
libqt_list q_tableview_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTableView*
/// @param text const char*
///
QAction* q_tableview_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTableView*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_tableview_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTableView*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_tableview_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTableView*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_tableview_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QTableView*
///
QWidget* q_tableview_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QTableView*
/// @param type flag of enum Qt__WindowType
///
void q_tableview_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QTableView*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_tableview_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QTableView*
/// @param param1 enum Qt__WindowType
///
void q_tableview_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QTableView*
/// @param type flag of enum Qt__WindowType
///
void q_tableview_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QTableView*
///
/// @return enum Qt__WindowType
///
int32_t q_tableview_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* q_tableview_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QTableView*
/// @param x int
/// @param y int
///
QWidget* q_tableview_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QTableView*
/// @param p QPoint*
///
QWidget* q_tableview_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QTableView*
/// @param p QPointF*
///
QWidget* q_tableview_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QTableView*
/// @param param1 enum Qt__WidgetAttribute
///
void q_tableview_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QTableView*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_tableview_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QTableView*
///
void q_tableview_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QTableView*
/// @param child QWidget*
///
bool q_tableview_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QTableView*
///
bool q_tableview_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QTableView*
/// @param enabled bool
///
void q_tableview_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QTableView*
///
QBackingStore* q_tableview_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QTableView*
///
QWindow* q_tableview_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QTableView*
///
QScreen* q_tableview_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QTableView*
/// @param screen QScreen*
///
void q_tableview_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_tableview_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QTableView*
/// @param title const char*
///
void q_tableview_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, const char* title)
///
void q_tableview_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QTableView*
/// @param icon QIcon*
///
void q_tableview_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QIcon* icon)
///
void q_tableview_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QTableView*
/// @param iconText const char*
///
void q_tableview_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, const char* iconText)
///
void q_tableview_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QTableView*
/// @param pos QPoint*
///
void q_tableview_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QPoint* pos)
///
void q_tableview_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QTableView*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_tableview_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QTableView*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_tableview_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTableView*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_tableview_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTableView*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_tableview_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTableView*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_tableview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTableView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_tableview_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTableView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_tableview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTableView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_tableview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QTableView*
/// @param rectangle QRect*
///
QPixmap* q_tableview_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QTableView*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_tableview_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QTableView*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_tableview_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QTableView*
/// @param id int
/// @param enable bool
///
void q_tableview_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QTableView*
/// @param id int
/// @param enable bool
///
void q_tableview_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QTableView*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_tableview_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QTableView*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_tableview_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_tableview_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_tableview_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTableView*
///
const char* q_tableview_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QTableView*
/// @param name char*
///
void q_tableview_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QTableView*
///
bool q_tableview_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QTableView*
///
bool q_tableview_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QTableView*
///
bool q_tableview_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QTableView*
///
bool q_tableview_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QTableView*
/// @param b bool
///
bool q_tableview_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QTableView*
///
QThread* q_tableview_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTableView*
/// @param thread QThread*
///
bool q_tableview_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTableView*
/// @param interval int
///
int32_t q_tableview_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTableView*
/// @param time int64_t of nanoseconds
///
int32_t q_tableview_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTableView*
/// @param id int
///
void q_tableview_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTableView*
/// @param id enum Qt__TimerId
///
void q_tableview_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QTableView*
///
/// @return libqt_list of QObject*
///
libqt_list q_tableview_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QTableView*
/// @param filterObj QObject*
///
void q_tableview_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QTableView*
/// @param obj QObject*
///
void q_tableview_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_tableview_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTableView*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_tableview_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_tableview_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_tableview_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QTableView*
///
void q_tableview_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QTableView*
///
void q_tableview_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTableView*
/// @param name const char*
/// @param value QVariant*
///
bool q_tableview_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QTableView*
/// @param name const char*
///
QVariant* q_tableview_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QTableView*
///
const char** q_tableview_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTableView*
///
QBindingStorage* q_tableview_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTableView*
///
const QBindingStorage* q_tableview_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTableView*
///
void q_tableview_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTableView*
/// @param callback void func(QTableView* self)
///
void q_tableview_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QTableView*
///
QObject* q_tableview_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QTableView*
/// @param classname const char*
///
bool q_tableview_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QTableView*
///
void q_tableview_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTableView*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_tableview_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTableView*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_tableview_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTableView*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_tableview_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_tableview_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTableView*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_tableview_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTableView*
/// @param param1 QObject*
///
void q_tableview_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QObject* param1)
///
void q_tableview_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QTableView*
///
bool q_tableview_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QTableView*
///
int32_t q_tableview_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QTableView*
///
int32_t q_tableview_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QTableView*
///
int32_t q_tableview_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QTableView*
///
int32_t q_tableview_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QTableView*
///
int32_t q_tableview_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QTableView*
///
int32_t q_tableview_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QTableView*
///
double q_tableview_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QTableView*
///
double q_tableview_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QTableView*
///
int32_t q_tableview_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QTableView*
///
int32_t q_tableview_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_tableview_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_tableview_encode_metric_f(int32_t metric, double value);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param search const char*
///
void q_tableview_keyboard_search(void* self, const char* search);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param search const char*
///
void q_tableview_qbase_keyboard_search(void* self, const char* search);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, const char* search)
///
void q_tableview_on_keyboard_search(void* self, void (*callback)(void*, const char*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param index QModelIndex*
///
QAbstractItemDelegate* q_tableview_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param index QModelIndex*
///
QAbstractItemDelegate* q_tableview_qbase_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback QAbstractItemDelegate* func(QTableView* self, QModelIndex* index)
///
void q_tableview_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_tableview_input_method_query(void* self, int32_t query);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_tableview_qbase_input_method_query(void* self, int32_t query);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback QVariant* func(QTableView* self, enum Qt__InputMethodQuery query)
///
void q_tableview_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
///
void q_tableview_reset(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
///
void q_tableview_qbase_reset(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func()
///
void q_tableview_on_reset(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
///
void q_tableview_select_all(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
///
void q_tableview_qbase_select_all(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func()
///
void q_tableview_on_select_all(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void q_tableview_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void q_tableview_qbase_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* )
///
void q_tableview_on_data_changed(void* self, void (*callback)(void*, void*, void*, libqt_list /* of int */));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rowsInserted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
///
void q_tableview_rows_inserted(void* self, void* parent, int start, int end);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rowsInserted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
///
void q_tableview_qbase_rows_inserted(void* self, void* parent, int start, int end);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rowsInserted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QModelIndex* parent, int start, int end)
///
void q_tableview_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
///
void q_tableview_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
///
void q_tableview_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QModelIndex* parent, int start, int end)
///
void q_tableview_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
///
void q_tableview_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
///
void q_tableview_qbase_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func()
///
void q_tableview_on_update_editor_data(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
///
void q_tableview_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
///
void q_tableview_qbase_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func()
///
void q_tableview_on_update_editor_geometries(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param value int
///
void q_tableview_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param value int
///
void q_tableview_qbase_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, int value)
///
void q_tableview_on_vertical_scrollbar_value_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param value int
///
void q_tableview_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param value int
///
void q_tableview_qbase_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, int value)
///
void q_tableview_on_horizontal_scrollbar_value_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param editor QWidget*
/// @param hint enum QAbstractItemDelegate__EndEditHint
///
void q_tableview_close_editor(void* self, void* editor, int32_t hint);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param editor QWidget*
/// @param hint enum QAbstractItemDelegate__EndEditHint
///
void q_tableview_qbase_close_editor(void* self, void* editor, int32_t hint);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint)
///
void q_tableview_on_close_editor(void* self, void (*callback)(void*, void*, int32_t));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param editor QWidget*
///
void q_tableview_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param editor QWidget*
///
void q_tableview_qbase_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QWidget* editor)
///
void q_tableview_on_commit_data(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param editor QObject*
///
void q_tableview_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param editor QObject*
///
void q_tableview_qbase_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QObject* editor)
///
void q_tableview_on_editor_destroyed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param index QModelIndex*
/// @param trigger enum QAbstractItemView__EditTrigger
/// @param event QEvent*
///
bool q_tableview_edit2(void* self, void* index, int32_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param index QModelIndex*
/// @param trigger enum QAbstractItemView__EditTrigger
/// @param event QEvent*
///
bool q_tableview_qbase_edit2(void* self, void* index, int32_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback bool func(QTableView* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event)
///
void q_tableview_on_edit2(void* self, bool (*callback)(void*, void*, int32_t, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param index QModelIndex*
/// @param event QEvent*
///
/// @return flag of enum QItemSelectionModel__SelectionFlag
///
int32_t q_tableview_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param index QModelIndex*
/// @param event QEvent*
///
/// @return flag of enum QItemSelectionModel__SelectionFlag
///
int32_t q_tableview_qbase_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback int32_t func(QTableView* self, QModelIndex* index, QEvent* event)
///
void q_tableview_on_selection_command(void* self, int32_t (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param supportedActions flag of enum Qt__DropAction
///
void q_tableview_start_drag(void* self, int32_t supportedActions);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param supportedActions flag of enum Qt__DropAction
///
void q_tableview_qbase_start_drag(void* self, int32_t supportedActions);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, flag of enum Qt__DropAction supportedActions)
///
void q_tableview_on_start_drag(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param next bool
///
bool q_tableview_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param next bool
///
bool q_tableview_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback bool func(QTableView* self, bool next)
///
void q_tableview_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param event QEvent*
///
bool q_tableview_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param event QEvent*
///
bool q_tableview_qbase_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback bool func(QTableView* self, QEvent* event)
///
void q_tableview_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param event QEvent*
///
bool q_tableview_viewport_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param event QEvent*
///
bool q_tableview_qbase_viewport_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback bool func(QTableView* self, QEvent* event)
///
void q_tableview_on_viewport_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param event QMouseEvent*
///
void q_tableview_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param event QMouseEvent*
///
void q_tableview_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QMouseEvent* event)
///
void q_tableview_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param event QMouseEvent*
///
void q_tableview_mouse_move_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param event QMouseEvent*
///
void q_tableview_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QMouseEvent* event)
///
void q_tableview_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param event QMouseEvent*
///
void q_tableview_mouse_release_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param event QMouseEvent*
///
void q_tableview_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QMouseEvent* event)
///
void q_tableview_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param event QMouseEvent*
///
void q_tableview_mouse_double_click_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param event QMouseEvent*
///
void q_tableview_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QMouseEvent* event)
///
void q_tableview_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param event QDragEnterEvent*
///
void q_tableview_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param event QDragEnterEvent*
///
void q_tableview_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QDragEnterEvent* event)
///
void q_tableview_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param event QDragMoveEvent*
///
void q_tableview_drag_move_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param event QDragMoveEvent*
///
void q_tableview_qbase_drag_move_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QDragMoveEvent* event)
///
void q_tableview_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param event QDragLeaveEvent*
///
void q_tableview_drag_leave_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param event QDragLeaveEvent*
///
void q_tableview_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QDragLeaveEvent* event)
///
void q_tableview_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param event QFocusEvent*
///
void q_tableview_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param event QFocusEvent*
///
void q_tableview_qbase_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QFocusEvent* event)
///
void q_tableview_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param event QFocusEvent*
///
void q_tableview_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param event QFocusEvent*
///
void q_tableview_qbase_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QFocusEvent* event)
///
void q_tableview_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param event QKeyEvent*
///
void q_tableview_key_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param event QKeyEvent*
///
void q_tableview_qbase_key_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QKeyEvent* event)
///
void q_tableview_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param event QResizeEvent*
///
void q_tableview_resize_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param event QResizeEvent*
///
void q_tableview_qbase_resize_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QResizeEvent* event)
///
void q_tableview_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param event QInputMethodEvent*
///
void q_tableview_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param event QInputMethodEvent*
///
void q_tableview_qbase_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QInputMethodEvent* event)
///
void q_tableview_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param object QObject*
/// @param event QEvent*
///
bool q_tableview_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param object QObject*
/// @param event QEvent*
///
bool q_tableview_qbase_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback bool func(QTableView* self, QObject* object, QEvent* event)
///
void q_tableview_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
///
QSize* q_tableview_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
///
QSize* q_tableview_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback QSize* func()
///
void q_tableview_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
///
QSize* q_tableview_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
///
QSize* q_tableview_qbase_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback QSize* func()
///
void q_tableview_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param viewport QWidget*
///
void q_tableview_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param viewport QWidget*
///
void q_tableview_qbase_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QWidget* viewport)
///
void q_tableview_on_setup_viewport(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param param1 QWheelEvent*
///
void q_tableview_wheel_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param param1 QWheelEvent*
///
void q_tableview_qbase_wheel_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QWheelEvent* param1)
///
void q_tableview_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param param1 QContextMenuEvent*
///
void q_tableview_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param param1 QContextMenuEvent*
///
void q_tableview_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QContextMenuEvent* param1)
///
void q_tableview_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param param1 QEvent*
///
void q_tableview_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param param1 QEvent*
///
void q_tableview_qbase_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QEvent* param1)
///
void q_tableview_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param option QStyleOptionFrame*
///
void q_tableview_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param option QStyleOptionFrame*
///
void q_tableview_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QStyleOptionFrame* option)
///
void q_tableview_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
///
int32_t q_tableview_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
///
int32_t q_tableview_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback int32_t func()
///
void q_tableview_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param visible bool
///
void q_tableview_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param visible bool
///
void q_tableview_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, bool visible)
///
void q_tableview_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param param1 int
///
int32_t q_tableview_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param param1 int
///
int32_t q_tableview_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback int32_t func(QTableView* self, int param1)
///
void q_tableview_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
///
bool q_tableview_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
///
bool q_tableview_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback bool func()
///
void q_tableview_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
///
QPaintEngine* q_tableview_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
///
QPaintEngine* q_tableview_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback QPaintEngine* func()
///
void q_tableview_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param event QKeyEvent*
///
void q_tableview_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param event QKeyEvent*
///
void q_tableview_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QKeyEvent* event)
///
void q_tableview_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param event QEnterEvent*
///
void q_tableview_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param event QEnterEvent*
///
void q_tableview_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QEnterEvent* event)
///
void q_tableview_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param event QEvent*
///
void q_tableview_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param event QEvent*
///
void q_tableview_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QEvent* event)
///
void q_tableview_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param event QMoveEvent*
///
void q_tableview_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param event QMoveEvent*
///
void q_tableview_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QMoveEvent* event)
///
void q_tableview_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param event QCloseEvent*
///
void q_tableview_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param event QCloseEvent*
///
void q_tableview_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QCloseEvent* event)
///
void q_tableview_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param event QTabletEvent*
///
void q_tableview_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param event QTabletEvent*
///
void q_tableview_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QTabletEvent* event)
///
void q_tableview_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param event QActionEvent*
///
void q_tableview_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param event QActionEvent*
///
void q_tableview_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QActionEvent* event)
///
void q_tableview_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param event QShowEvent*
///
void q_tableview_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param event QShowEvent*
///
void q_tableview_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QShowEvent* event)
///
void q_tableview_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param event QHideEvent*
///
void q_tableview_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param event QHideEvent*
///
void q_tableview_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QHideEvent* event)
///
void q_tableview_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_tableview_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_tableview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback bool func(QTableView* self, const char* eventType, void* message, intptr_t* result)
///
void q_tableview_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_tableview_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_tableview_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback int32_t func(QTableView* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_tableview_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param painter QPainter*
///
void q_tableview_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param painter QPainter*
///
void q_tableview_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QPainter* painter)
///
void q_tableview_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param offset QPoint*
///
QPaintDevice* q_tableview_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param offset QPoint*
///
QPaintDevice* q_tableview_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback QPaintDevice* func(QTableView* self, QPoint* offset)
///
void q_tableview_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
///
QPainter* q_tableview_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
///
QPainter* q_tableview_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback QPainter* func()
///
void q_tableview_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param event QChildEvent*
///
void q_tableview_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param event QChildEvent*
///
void q_tableview_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QChildEvent* event)
///
void q_tableview_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param event QEvent*
///
void q_tableview_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param event QEvent*
///
void q_tableview_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QEvent* event)
///
void q_tableview_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param signal QMetaMethod*
///
void q_tableview_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param signal QMetaMethod*
///
void q_tableview_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QMetaMethod* signal)
///
void q_tableview_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param signal QMetaMethod*
///
void q_tableview_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param signal QMetaMethod*
///
void q_tableview_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QMetaMethod* signal)
///
void q_tableview_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
///
/// @return enum QAbstractItemView__State
///
int32_t q_tableview_state(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
///
/// @return enum QAbstractItemView__State
///
int32_t q_tableview_qbase_state(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback int32_t func()
///
void q_tableview_on_state(void* self, int32_t (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param state enum QAbstractItemView__State
///
void q_tableview_set_state(void* self, int32_t state);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param state enum QAbstractItemView__State
///
void q_tableview_qbase_set_state(void* self, int32_t state);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, enum QAbstractItemView__State state)
///
void q_tableview_on_set_state(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
///
void q_tableview_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
///
void q_tableview_qbase_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func()
///
void q_tableview_on_schedule_delayed_items_layout(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
///
void q_tableview_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
///
void q_tableview_qbase_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func()
///
void q_tableview_on_execute_delayed_items_layout(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param region QRegion*
///
void q_tableview_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param region QRegion*
///
void q_tableview_qbase_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QRegion* region)
///
void q_tableview_on_set_dirty_region(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param dx int
/// @param dy int
///
void q_tableview_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param dx int
/// @param dy int
///
void q_tableview_qbase_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, int dx, int dy)
///
void q_tableview_on_scroll_dirty_region(void* self, void (*callback)(void*, int, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
///
QPoint* q_tableview_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
///
QPoint* q_tableview_qbase_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback QPoint* func()
///
void q_tableview_on_dirty_region_offset(void* self, QPoint* (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
///
void q_tableview_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
///
void q_tableview_qbase_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func()
///
void q_tableview_on_start_auto_scroll(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
///
void q_tableview_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
///
void q_tableview_qbase_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func()
///
void q_tableview_on_stop_auto_scroll(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
///
void q_tableview_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
///
void q_tableview_qbase_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func()
///
void q_tableview_on_do_auto_scroll(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
///
/// @return enum QAbstractItemView__DropIndicatorPosition
///
int32_t q_tableview_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
///
/// @return enum QAbstractItemView__DropIndicatorPosition
///
int32_t q_tableview_qbase_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback int32_t func()
///
void q_tableview_on_drop_indicator_position(void* self, int32_t (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_tableview_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_tableview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, int left, int top, int right, int bottom)
///
void q_tableview_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
///
QMargins* q_tableview_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
///
QMargins* q_tableview_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback QMargins* func()
///
void q_tableview_on_viewport_margins(void* self, QMargins* (*callback)());

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param param1 QPainter*
///
void q_tableview_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param param1 QPainter*
///
void q_tableview_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, QPainter* param1)
///
void q_tableview_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
///
void q_tableview_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
///
void q_tableview_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func()
///
void q_tableview_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
///
void q_tableview_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
///
void q_tableview_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func()
///
void q_tableview_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
///
void q_tableview_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
///
void q_tableview_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback void func()
///
void q_tableview_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
///
bool q_tableview_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
///
bool q_tableview_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback bool func()
///
void q_tableview_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
///
bool q_tableview_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
///
bool q_tableview_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback bool func()
///
void q_tableview_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
///
QObject* q_tableview_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
///
QObject* q_tableview_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback QObject* func()
///
void q_tableview_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
///
int32_t q_tableview_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
///
int32_t q_tableview_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback int32_t func()
///
void q_tableview_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param signal const char*
///
int32_t q_tableview_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param signal const char*
///
int32_t q_tableview_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback int32_t func(QTableView* self, const char* signal)
///
void q_tableview_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param signal QMetaMethod*
///
bool q_tableview_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param signal QMetaMethod*
///
bool q_tableview_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback bool func(QTableView* self, QMetaMethod* signal)
///
void q_tableview_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTableView*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_tableview_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTableView*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_tableview_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTableView*
/// @param callback double func(QTableView* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_tableview_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTableView*
/// @param callback void func(QTableView* self, const char* objectName)
///
void q_tableview_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtableview.html#dtor.QTableView)
///
/// Delete this object from C++ memory.
///
/// @param self QTableView*
///
void q_tableview_delete(void* self);

#endif
