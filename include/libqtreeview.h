#pragma once
#ifndef SRC_QT6C_LIBQTREEVIEW_H
#define SRC_QT6C_LIBQTREEVIEW_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html)

/// q_treeview_new constructs a new QTreeView object.
///
/// @param parent QWidget*
///
QTreeView* q_treeview_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html)

/// q_treeview_new2 constructs a new QTreeView object.
///
QTreeView* q_treeview_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QTreeView*
///
const QMetaObject* q_treeview_meta_object(void* self);

/// @param self QTreeView*
/// @param param1 const char*
///
void* q_treeview_metacast(void* self, const char* param1);

/// @param self QTreeView*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_treeview_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback int32_t func(QTreeView* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_treeview_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QTreeView*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_treeview_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_treeview_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setModel)
///
/// @param self QTreeView*
/// @param model QAbstractItemModel*
///
void q_treeview_set_model(void* self, void* model);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setModel)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QAbstractItemModel* model)
///
void q_treeview_on_set_model(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setModel)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param model QAbstractItemModel*
///
void q_treeview_qbase_set_model(void* self, void* model);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setRootIndex)
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
void q_treeview_set_root_index(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setRootIndex)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QModelIndex* index)
///
void q_treeview_on_set_root_index(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setRootIndex)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
void q_treeview_qbase_set_root_index(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setSelectionModel)
///
/// @param self QTreeView*
/// @param selectionModel QItemSelectionModel*
///
void q_treeview_set_selection_model(void* self, void* selectionModel);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setSelectionModel)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QItemSelectionModel* selectionModel)
///
void q_treeview_on_set_selection_model(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setSelectionModel)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param selectionModel QItemSelectionModel*
///
void q_treeview_qbase_set_selection_model(void* self, void* selectionModel);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#header)
///
/// @param self QTreeView*
///
QHeaderView* q_treeview_header(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setHeader)
///
/// @param self QTreeView*
/// @param header QHeaderView*
///
void q_treeview_set_header(void* self, void* header);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#autoExpandDelay)
///
/// @param self QTreeView*
///
int32_t q_treeview_auto_expand_delay(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setAutoExpandDelay)
///
/// @param self QTreeView*
/// @param delay int
///
void q_treeview_set_auto_expand_delay(void* self, int delay);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#indentation)
///
/// @param self QTreeView*
///
int32_t q_treeview_indentation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setIndentation)
///
/// @param self QTreeView*
/// @param i int
///
void q_treeview_set_indentation(void* self, int i);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#resetIndentation)
///
/// @param self QTreeView*
///
void q_treeview_reset_indentation(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#rootIsDecorated)
///
/// @param self QTreeView*
///
bool q_treeview_root_is_decorated(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setRootIsDecorated)
///
/// @param self QTreeView*
/// @param show bool
///
void q_treeview_set_root_is_decorated(void* self, bool show);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#uniformRowHeights)
///
/// @param self QTreeView*
///
bool q_treeview_uniform_row_heights(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setUniformRowHeights)
///
/// @param self QTreeView*
/// @param uniform bool
///
void q_treeview_set_uniform_row_heights(void* self, bool uniform);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#itemsExpandable)
///
/// @param self QTreeView*
///
bool q_treeview_items_expandable(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setItemsExpandable)
///
/// @param self QTreeView*
/// @param enable bool
///
void q_treeview_set_items_expandable(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#expandsOnDoubleClick)
///
/// @param self QTreeView*
///
bool q_treeview_expands_on_double_click(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setExpandsOnDoubleClick)
///
/// @param self QTreeView*
/// @param enable bool
///
void q_treeview_set_expands_on_double_click(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#columnViewportPosition)
///
/// @param self QTreeView*
/// @param column int
///
int32_t q_treeview_column_viewport_position(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#columnWidth)
///
/// @param self QTreeView*
/// @param column int
///
int32_t q_treeview_column_width(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setColumnWidth)
///
/// @param self QTreeView*
/// @param column int
/// @param width int
///
void q_treeview_set_column_width(void* self, int column, int width);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#columnAt)
///
/// @param self QTreeView*
/// @param x int
///
int32_t q_treeview_column_at(void* self, int x);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#isColumnHidden)
///
/// @param self QTreeView*
/// @param column int
///
bool q_treeview_is_column_hidden(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setColumnHidden)
///
/// @param self QTreeView*
/// @param column int
/// @param hide bool
///
void q_treeview_set_column_hidden(void* self, int column, bool hide);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#isHeaderHidden)
///
/// @param self QTreeView*
///
bool q_treeview_is_header_hidden(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setHeaderHidden)
///
/// @param self QTreeView*
/// @param hide bool
///
void q_treeview_set_header_hidden(void* self, bool hide);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#isRowHidden)
///
/// @param self QTreeView*
/// @param row int
/// @param parent QModelIndex*
///
bool q_treeview_is_row_hidden(void* self, int row, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setRowHidden)
///
/// @param self QTreeView*
/// @param row int
/// @param parent QModelIndex*
/// @param hide bool
///
void q_treeview_set_row_hidden(void* self, int row, void* parent, bool hide);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#isFirstColumnSpanned)
///
/// @param self QTreeView*
/// @param row int
/// @param parent QModelIndex*
///
bool q_treeview_is_first_column_spanned(void* self, int row, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setFirstColumnSpanned)
///
/// @param self QTreeView*
/// @param row int
/// @param parent QModelIndex*
/// @param span bool
///
void q_treeview_set_first_column_spanned(void* self, int row, void* parent, bool span);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#isExpanded)
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
bool q_treeview_is_expanded(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setExpanded)
///
/// @param self QTreeView*
/// @param index QModelIndex*
/// @param expand bool
///
void q_treeview_set_expanded(void* self, void* index, bool expand);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setSortingEnabled)
///
/// @param self QTreeView*
/// @param enable bool
///
void q_treeview_set_sorting_enabled(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#isSortingEnabled)
///
/// @param self QTreeView*
///
bool q_treeview_is_sorting_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setAnimated)
///
/// @param self QTreeView*
/// @param enable bool
///
void q_treeview_set_animated(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#isAnimated)
///
/// @param self QTreeView*
///
bool q_treeview_is_animated(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setAllColumnsShowFocus)
///
/// @param self QTreeView*
/// @param enable bool
///
void q_treeview_set_all_columns_show_focus(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#allColumnsShowFocus)
///
/// @param self QTreeView*
///
bool q_treeview_all_columns_show_focus(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setWordWrap)
///
/// @param self QTreeView*
/// @param on bool
///
void q_treeview_set_word_wrap(void* self, bool on);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#wordWrap)
///
/// @param self QTreeView*
///
bool q_treeview_word_wrap(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setTreePosition)
///
/// @param self QTreeView*
/// @param logicalIndex int
///
void q_treeview_set_tree_position(void* self, int logicalIndex);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#treePosition)
///
/// @param self QTreeView*
///
int32_t q_treeview_tree_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#keyboardSearch)
///
/// @param self QTreeView*
/// @param search const char*
///
void q_treeview_keyboard_search(void* self, const char* search);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#keyboardSearch)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, const char* search)
///
void q_treeview_on_keyboard_search(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#keyboardSearch)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param search const char*
///
void q_treeview_qbase_keyboard_search(void* self, const char* search);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#visualRect)
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
QRect* q_treeview_visual_rect(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#visualRect)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback QRect* func(QTreeView* self, QModelIndex* index)
///
void q_treeview_on_visual_rect(void* self, QRect* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#visualRect)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
QRect* q_treeview_qbase_visual_rect(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#scrollTo)
///
/// @param self QTreeView*
/// @param index QModelIndex*
/// @param hint enum QAbstractItemView__ScrollHint
///
void q_treeview_scroll_to(void* self, void* index, int32_t hint);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#scrollTo)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint)
///
void q_treeview_on_scroll_to(void* self, void (*callback)(void*, void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#scrollTo)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param index QModelIndex*
/// @param hint enum QAbstractItemView__ScrollHint
///
void q_treeview_qbase_scroll_to(void* self, void* index, int32_t hint);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#indexAt)
///
/// @param self QTreeView*
/// @param p QPoint*
///
QModelIndex* q_treeview_index_at(void* self, void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#indexAt)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback QModelIndex* func(QTreeView* self, QPoint* p)
///
void q_treeview_on_index_at(void* self, QModelIndex* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#indexAt)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param p QPoint*
///
QModelIndex* q_treeview_qbase_index_at(void* self, void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#indexAbove)
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
QModelIndex* q_treeview_index_above(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#indexBelow)
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
QModelIndex* q_treeview_index_below(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#doItemsLayout)
///
/// @param self QTreeView*
///
void q_treeview_do_items_layout(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#doItemsLayout)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func()
///
void q_treeview_on_do_items_layout(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#doItemsLayout)
///
/// Base class method implementation
///
/// @param self QTreeView*
///
void q_treeview_qbase_do_items_layout(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#reset)
///
/// @param self QTreeView*
///
void q_treeview_reset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#reset)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func()
///
void q_treeview_on_reset(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#reset)
///
/// Base class method implementation
///
/// @param self QTreeView*
///
void q_treeview_qbase_reset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#dataChanged)
///
/// @param self QTreeView*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list /* of int */
///
void q_treeview_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#dataChanged)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* /* of int */)
///
void q_treeview_on_data_changed(void* self, void (*callback)(void*, void*, void*, int*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#dataChanged)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list /* of int */
///
void q_treeview_qbase_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#selectAll)
///
/// @param self QTreeView*
///
void q_treeview_select_all(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#selectAll)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func()
///
void q_treeview_on_select_all(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#selectAll)
///
/// Base class method implementation
///
/// @param self QTreeView*
///
void q_treeview_qbase_select_all(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#expanded)
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
void q_treeview_expanded(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#expanded)
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QModelIndex* index)
///
void q_treeview_on_expanded(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#collapsed)
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
void q_treeview_collapsed(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#collapsed)
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QModelIndex* index)
///
void q_treeview_on_collapsed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#hideColumn)
///
/// @param self QTreeView*
/// @param column int
///
void q_treeview_hide_column(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#showColumn)
///
/// @param self QTreeView*
/// @param column int
///
void q_treeview_show_column(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#expand)
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
void q_treeview_expand(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#collapse)
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
void q_treeview_collapse(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#resizeColumnToContents)
///
/// @param self QTreeView*
/// @param column int
///
void q_treeview_resize_column_to_contents(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#sortByColumn)
///
/// @param self QTreeView*
/// @param column int
/// @param order enum Qt__SortOrder
///
void q_treeview_sort_by_column(void* self, int column, int32_t order);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#expandAll)
///
/// @param self QTreeView*
///
void q_treeview_expand_all(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#expandRecursively)
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
void q_treeview_expand_recursively(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#collapseAll)
///
/// @param self QTreeView*
///
void q_treeview_collapse_all(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#expandToDepth)
///
/// @param self QTreeView*
/// @param depth int
///
void q_treeview_expand_to_depth(void* self, int depth);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#columnResized)
///
/// @param self QTreeView*
/// @param column int
/// @param oldSize int
/// @param newSize int
///
void q_treeview_column_resized(void* self, int column, int oldSize, int newSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#columnResized)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, int column, int oldSize, int newSize)
///
void q_treeview_on_column_resized(void* self, void (*callback)(void*, int, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#columnResized)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param column int
/// @param oldSize int
/// @param newSize int
///
void q_treeview_qbase_column_resized(void* self, int column, int oldSize, int newSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#columnCountChanged)
///
/// @param self QTreeView*
/// @param oldCount int
/// @param newCount int
///
void q_treeview_column_count_changed(void* self, int oldCount, int newCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#columnCountChanged)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, int oldCount, int newCount)
///
void q_treeview_on_column_count_changed(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#columnCountChanged)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param oldCount int
/// @param newCount int
///
void q_treeview_qbase_column_count_changed(void* self, int oldCount, int newCount);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#columnMoved)
///
/// @param self QTreeView*
///
void q_treeview_column_moved(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#columnMoved)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func()
///
void q_treeview_on_column_moved(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#columnMoved)
///
/// Base class method implementation
///
/// @param self QTreeView*
///
void q_treeview_qbase_column_moved(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#reexpand)
///
/// @param self QTreeView*
///
void q_treeview_reexpand(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#reexpand)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func()
///
void q_treeview_on_reexpand(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#reexpand)
///
/// Base class method implementation
///
/// @param self QTreeView*
///
void q_treeview_qbase_reexpand(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#rowsRemoved)
///
/// @param self QTreeView*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_treeview_rows_removed(void* self, void* parent, int first, int last);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#rowsRemoved)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QModelIndex* parent, int first, int last)
///
void q_treeview_on_rows_removed(void* self, void (*callback)(void*, void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#rowsRemoved)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param parent QModelIndex*
/// @param first int
/// @param last int
///
void q_treeview_qbase_rows_removed(void* self, void* parent, int first, int last);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#verticalScrollbarValueChanged)
///
/// @param self QTreeView*
/// @param value int
///
void q_treeview_vertical_scrollbar_value_changed(void* self, int value);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#verticalScrollbarValueChanged)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, int value)
///
void q_treeview_on_vertical_scrollbar_value_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#verticalScrollbarValueChanged)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param value int
///
void q_treeview_qbase_vertical_scrollbar_value_changed(void* self, int value);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#scrollContentsBy)
///
/// @param self QTreeView*
/// @param dx int
/// @param dy int
///
void q_treeview_scroll_contents_by(void* self, int dx, int dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#scrollContentsBy)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, int dx, int dy)
///
void q_treeview_on_scroll_contents_by(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#scrollContentsBy)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param dx int
/// @param dy int
///
void q_treeview_qbase_scroll_contents_by(void* self, int dx, int dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#rowsInserted)
///
/// @param self QTreeView*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
///
void q_treeview_rows_inserted(void* self, void* parent, int start, int end);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#rowsInserted)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QModelIndex* parent, int start, int end)
///
void q_treeview_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#rowsInserted)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
///
void q_treeview_qbase_rows_inserted(void* self, void* parent, int start, int end);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#rowsAboutToBeRemoved)
///
/// @param self QTreeView*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
///
void q_treeview_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#rowsAboutToBeRemoved)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QModelIndex* parent, int start, int end)
///
void q_treeview_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#rowsAboutToBeRemoved)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
///
void q_treeview_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#moveCursor)
///
/// @param self QTreeView*
/// @param cursorAction enum QAbstractItemView__CursorAction
/// @param modifiers flag of enum Qt__KeyboardModifier
///
QModelIndex* q_treeview_move_cursor(void* self, int32_t cursorAction, int64_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#moveCursor)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback QModelIndex* func(QTreeView* self, enum QAbstractItemView__CursorAction cursorAction, flag of enum Qt__KeyboardModifier modifiers)
///
void q_treeview_on_move_cursor(void* self, QModelIndex* (*callback)(void*, int32_t, int64_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#moveCursor)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param cursorAction enum QAbstractItemView__CursorAction
/// @param modifiers flag of enum Qt__KeyboardModifier
///
QModelIndex* q_treeview_qbase_move_cursor(void* self, int32_t cursorAction, int64_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#horizontalOffset)
///
/// @param self QTreeView*
///
int32_t q_treeview_horizontal_offset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#horizontalOffset)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback int32_t func()
///
void q_treeview_on_horizontal_offset(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#horizontalOffset)
///
/// Base class method implementation
///
/// @param self QTreeView*
///
int32_t q_treeview_qbase_horizontal_offset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#verticalOffset)
///
/// @param self QTreeView*
///
int32_t q_treeview_vertical_offset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#verticalOffset)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback int32_t func()
///
void q_treeview_on_vertical_offset(void* self, int32_t (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#verticalOffset)
///
/// Base class method implementation
///
/// @param self QTreeView*
///
int32_t q_treeview_qbase_vertical_offset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setSelection)
///
/// @param self QTreeView*
/// @param rect QRect*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
///
void q_treeview_set_selection(void* self, void* rect, int32_t command);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setSelection)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QRect* rect, flag of enum QItemSelectionModel__SelectionFlag command)
///
void q_treeview_on_set_selection(void* self, void (*callback)(void*, void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setSelection)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param rect QRect*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
///
void q_treeview_qbase_set_selection(void* self, void* rect, int32_t command);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#visualRegionForSelection)
///
/// @param self QTreeView*
/// @param selection QItemSelection*
///
QRegion* q_treeview_visual_region_for_selection(void* self, void* selection);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#visualRegionForSelection)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback QRegion* func(QTreeView* self, QItemSelection* selection)
///
void q_treeview_on_visual_region_for_selection(void* self, QRegion* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#visualRegionForSelection)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param selection QItemSelection*
///
QRegion* q_treeview_qbase_visual_region_for_selection(void* self, void* selection);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#selectedIndexes)
///
/// @param self QTreeView*
///
libqt_list /* of QModelIndex* */ q_treeview_selected_indexes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#selectedIndexes)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback QModelIndex** func()
///
void q_treeview_on_selected_indexes(void* self, QModelIndex** (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#selectedIndexes)
///
/// Base class method implementation
///
/// @param self QTreeView*
///
libqt_list /* of QModelIndex* */ q_treeview_qbase_selected_indexes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#changeEvent)
///
/// @param self QTreeView*
/// @param event QEvent*
///
void q_treeview_change_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QEvent* event)
///
void q_treeview_on_change_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#changeEvent)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param event QEvent*
///
void q_treeview_qbase_change_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#timerEvent)
///
/// @param self QTreeView*
/// @param event QTimerEvent*
///
void q_treeview_timer_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QTimerEvent* event)
///
void q_treeview_on_timer_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#timerEvent)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param event QTimerEvent*
///
void q_treeview_qbase_timer_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#paintEvent)
///
/// @param self QTreeView*
/// @param event QPaintEvent*
///
void q_treeview_paint_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QPaintEvent* event)
///
void q_treeview_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#paintEvent)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param event QPaintEvent*
///
void q_treeview_qbase_paint_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#drawTree)
///
/// @param self QTreeView*
/// @param painter QPainter*
/// @param region QRegion*
///
void q_treeview_draw_tree(void* self, void* painter, void* region);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#drawTree)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QPainter* painter, QRegion* region)
///
void q_treeview_on_draw_tree(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#drawTree)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param painter QPainter*
/// @param region QRegion*
///
void q_treeview_qbase_draw_tree(void* self, void* painter, void* region);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#drawRow)
///
/// @param self QTreeView*
/// @param painter QPainter*
/// @param options QStyleOptionViewItem*
/// @param index QModelIndex*
///
void q_treeview_draw_row(void* self, void* painter, void* options, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#drawRow)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QPainter* painter, QStyleOptionViewItem* options, QModelIndex* index)
///
void q_treeview_on_draw_row(void* self, void (*callback)(void*, void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#drawRow)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param painter QPainter*
/// @param options QStyleOptionViewItem*
/// @param index QModelIndex*
///
void q_treeview_qbase_draw_row(void* self, void* painter, void* options, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#drawBranches)
///
/// @param self QTreeView*
/// @param painter QPainter*
/// @param rect QRect*
/// @param index QModelIndex*
///
void q_treeview_draw_branches(void* self, void* painter, void* rect, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#drawBranches)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QPainter* painter, QRect* rect, QModelIndex* index)
///
void q_treeview_on_draw_branches(void* self, void (*callback)(void*, void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#drawBranches)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param painter QPainter*
/// @param rect QRect*
/// @param index QModelIndex*
///
void q_treeview_qbase_draw_branches(void* self, void* painter, void* rect, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#mousePressEvent)
///
/// @param self QTreeView*
/// @param event QMouseEvent*
///
void q_treeview_mouse_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QMouseEvent* event)
///
void q_treeview_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param event QMouseEvent*
///
void q_treeview_qbase_mouse_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#mouseReleaseEvent)
///
/// @param self QTreeView*
/// @param event QMouseEvent*
///
void q_treeview_mouse_release_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QMouseEvent* event)
///
void q_treeview_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param event QMouseEvent*
///
void q_treeview_qbase_mouse_release_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#mouseDoubleClickEvent)
///
/// @param self QTreeView*
/// @param event QMouseEvent*
///
void q_treeview_mouse_double_click_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#mouseDoubleClickEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QMouseEvent* event)
///
void q_treeview_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#mouseDoubleClickEvent)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param event QMouseEvent*
///
void q_treeview_qbase_mouse_double_click_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#mouseMoveEvent)
///
/// @param self QTreeView*
/// @param event QMouseEvent*
///
void q_treeview_mouse_move_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QMouseEvent* event)
///
void q_treeview_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param event QMouseEvent*
///
void q_treeview_qbase_mouse_move_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#keyPressEvent)
///
/// @param self QTreeView*
/// @param event QKeyEvent*
///
void q_treeview_key_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QKeyEvent* event)
///
void q_treeview_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param event QKeyEvent*
///
void q_treeview_qbase_key_press_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#dragMoveEvent)
///
/// @param self QTreeView*
/// @param event QDragMoveEvent*
///
void q_treeview_drag_move_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#dragMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QDragMoveEvent* event)
///
void q_treeview_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#dragMoveEvent)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param event QDragMoveEvent*
///
void q_treeview_qbase_drag_move_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#viewportEvent)
///
/// @param self QTreeView*
/// @param event QEvent*
///
bool q_treeview_viewport_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#viewportEvent)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback bool func(QTreeView* self, QEvent* event)
///
void q_treeview_on_viewport_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#viewportEvent)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param event QEvent*
///
bool q_treeview_qbase_viewport_event(void* self, void* event);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#updateGeometries)
///
/// @param self QTreeView*
///
void q_treeview_update_geometries(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#updateGeometries)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func()
///
void q_treeview_on_update_geometries(void* self, void (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#updateGeometries)
///
/// Base class method implementation
///
/// @param self QTreeView*
///
void q_treeview_qbase_update_geometries(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#viewportSizeHint)
///
/// @param self QTreeView*
///
QSize* q_treeview_viewport_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#viewportSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback QSize* func()
///
void q_treeview_on_viewport_size_hint(void* self, QSize* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#viewportSizeHint)
///
/// Base class method implementation
///
/// @param self QTreeView*
///
QSize* q_treeview_qbase_viewport_size_hint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#sizeHintForColumn)
///
/// @param self QTreeView*
/// @param column int
///
int32_t q_treeview_size_hint_for_column(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#sizeHintForColumn)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback int32_t func(QTreeView* self, int column)
///
void q_treeview_on_size_hint_for_column(void* self, int32_t (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#sizeHintForColumn)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param column int
///
int32_t q_treeview_qbase_size_hint_for_column(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#indexRowSizeHint)
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
int32_t q_treeview_index_row_size_hint(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#indexRowSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback int32_t func(QTreeView* self, QModelIndex* index)
///
void q_treeview_on_index_row_size_hint(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#indexRowSizeHint)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
int32_t q_treeview_qbase_index_row_size_hint(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#rowHeight)
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
int32_t q_treeview_row_height(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#rowHeight)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback int32_t func(QTreeView* self, QModelIndex* index)
///
void q_treeview_on_row_height(void* self, int32_t (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#rowHeight)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
int32_t q_treeview_qbase_row_height(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#horizontalScrollbarAction)
///
/// @param self QTreeView*
/// @param action int
///
void q_treeview_horizontal_scrollbar_action(void* self, int action);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#horizontalScrollbarAction)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, int action)
///
void q_treeview_on_horizontal_scrollbar_action(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#horizontalScrollbarAction)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param action int
///
void q_treeview_qbase_horizontal_scrollbar_action(void* self, int action);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#isIndexHidden)
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
bool q_treeview_is_index_hidden(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#isIndexHidden)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback bool func(QTreeView* self, QModelIndex* index)
///
void q_treeview_on_is_index_hidden(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#isIndexHidden)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
bool q_treeview_qbase_is_index_hidden(void* self, void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#selectionChanged)
///
/// @param self QTreeView*
/// @param selected QItemSelection*
/// @param deselected QItemSelection*
///
void q_treeview_selection_changed(void* self, void* selected, void* deselected);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#selectionChanged)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QItemSelection* selected, QItemSelection* deselected)
///
void q_treeview_on_selection_changed(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#selectionChanged)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param selected QItemSelection*
/// @param deselected QItemSelection*
///
void q_treeview_qbase_selection_changed(void* self, void* selected, void* deselected);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#currentChanged)
///
/// @param self QTreeView*
/// @param current QModelIndex*
/// @param previous QModelIndex*
///
void q_treeview_current_changed(void* self, void* current, void* previous);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#currentChanged)
///
/// Allows for overriding the related default method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QModelIndex* current, QModelIndex* previous)
///
void q_treeview_on_current_changed(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#currentChanged)
///
/// Base class method implementation
///
/// @param self QTreeView*
/// @param current QModelIndex*
/// @param previous QModelIndex*
///
void q_treeview_qbase_current_changed(void* self, void* current, void* previous);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_treeview_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_treeview_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#expandRecursively)
///
/// @param self QTreeView*
/// @param index QModelIndex*
/// @param depth int
///
void q_treeview_expand_recursively2(void* self, void* index, int depth);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#model)
///
/// @param self QTreeView*
///
QAbstractItemModel* q_treeview_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
///
/// @param self QTreeView*
///
QItemSelectionModel* q_treeview_selection_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
///
/// @param self QTreeView*
/// @param delegate QAbstractItemDelegate*
///
void q_treeview_set_item_delegate(void* self, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// @param self QTreeView*
///
QAbstractItemDelegate* q_treeview_item_delegate(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
///
/// @param self QTreeView*
/// @param mode enum QAbstractItemView__SelectionMode
///
void q_treeview_set_selection_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
///
/// @param self QTreeView*
///
/// @return enum QAbstractItemView__SelectionMode
///
int32_t q_treeview_selection_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
///
/// @param self QTreeView*
/// @param behavior enum QAbstractItemView__SelectionBehavior
///
void q_treeview_set_selection_behavior(void* self, int32_t behavior);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
///
/// @param self QTreeView*
///
/// @return enum QAbstractItemView__SelectionBehavior
///
int32_t q_treeview_selection_behavior(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
///
/// @param self QTreeView*
///
QModelIndex* q_treeview_current_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
///
/// @param self QTreeView*
///
QModelIndex* q_treeview_root_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
///
/// @param self QTreeView*
/// @param triggers flag of enum QAbstractItemView__EditTrigger
///
void q_treeview_set_edit_triggers(void* self, int32_t triggers);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
///
/// @param self QTreeView*
///
/// @return flag of enum QAbstractItemView__EditTrigger
///
int32_t q_treeview_edit_triggers(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
///
/// @param self QTreeView*
/// @param mode enum QAbstractItemView__ScrollMode
///
void q_treeview_set_vertical_scroll_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
///
/// @param self QTreeView*
///
/// @return enum QAbstractItemView__ScrollMode
///
int32_t q_treeview_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
///
/// @param self QTreeView*
///
void q_treeview_reset_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
///
/// @param self QTreeView*
/// @param mode enum QAbstractItemView__ScrollMode
///
void q_treeview_set_horizontal_scroll_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
///
/// @param self QTreeView*
///
/// @return enum QAbstractItemView__ScrollMode
///
int32_t q_treeview_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
///
/// @param self QTreeView*
///
void q_treeview_reset_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
///
/// @param self QTreeView*
/// @param enable bool
///
void q_treeview_set_auto_scroll(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
///
/// @param self QTreeView*
///
bool q_treeview_has_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
///
/// @param self QTreeView*
/// @param margin int
///
void q_treeview_set_auto_scroll_margin(void* self, int margin);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
///
/// @param self QTreeView*
///
int32_t q_treeview_auto_scroll_margin(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
///
/// @param self QTreeView*
/// @param enable bool
///
void q_treeview_set_tab_key_navigation(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
///
/// @param self QTreeView*
///
bool q_treeview_tab_key_navigation(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
///
/// @param self QTreeView*
/// @param enable bool
///
void q_treeview_set_drop_indicator_shown(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
///
/// @param self QTreeView*
///
bool q_treeview_show_drop_indicator(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
///
/// @param self QTreeView*
/// @param enable bool
///
void q_treeview_set_drag_enabled(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
///
/// @param self QTreeView*
///
bool q_treeview_drag_enabled(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
///
/// @param self QTreeView*
/// @param overwrite bool
///
void q_treeview_set_drag_drop_overwrite_mode(void* self, bool overwrite);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
///
/// @param self QTreeView*
///
bool q_treeview_drag_drop_overwrite_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
///
/// @param self QTreeView*
/// @param behavior enum QAbstractItemView__DragDropMode
///
void q_treeview_set_drag_drop_mode(void* self, int32_t behavior);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
///
/// @param self QTreeView*
///
/// @return enum QAbstractItemView__DragDropMode
///
int32_t q_treeview_drag_drop_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
///
/// @param self QTreeView*
/// @param dropAction enum Qt__DropAction
///
void q_treeview_set_default_drop_action(void* self, int32_t dropAction);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
///
/// @param self QTreeView*
///
/// @return enum Qt__DropAction
///
int32_t q_treeview_default_drop_action(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
///
/// @param self QTreeView*
/// @param enable bool
///
void q_treeview_set_alternating_row_colors(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
///
/// @param self QTreeView*
///
bool q_treeview_alternating_row_colors(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
///
/// @param self QTreeView*
/// @param size QSize*
///
void q_treeview_set_icon_size(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
///
/// @param self QTreeView*
///
QSize* q_treeview_icon_size(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
///
/// @param self QTreeView*
/// @param mode enum Qt__TextElideMode
///
void q_treeview_set_text_elide_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
///
/// @param self QTreeView*
///
/// @return enum Qt__TextElideMode
///
int32_t q_treeview_text_elide_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
QSize* q_treeview_size_hint_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#openPersistentEditor)
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
void q_treeview_open_persistent_editor(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closePersistentEditor)
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
void q_treeview_close_persistent_editor(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#isPersistentEditorOpen)
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
bool q_treeview_is_persistent_editor_open(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
///
/// @param self QTreeView*
/// @param index QModelIndex*
/// @param widget QWidget*
///
void q_treeview_set_index_widget(void* self, void* index, void* widget);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
QWidget* q_treeview_index_widget(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
///
/// @param self QTreeView*
/// @param row int
/// @param delegate QAbstractItemDelegate*
///
void q_treeview_set_item_delegate_for_row(void* self, int row, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
///
/// @param self QTreeView*
/// @param row int
///
QAbstractItemDelegate* q_treeview_item_delegate_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
///
/// @param self QTreeView*
/// @param column int
/// @param delegate QAbstractItemDelegate*
///
void q_treeview_set_item_delegate_for_column(void* self, int column, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
///
/// @param self QTreeView*
/// @param column int
///
QAbstractItemDelegate* q_treeview_item_delegate_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
QAbstractItemDelegate* q_treeview_item_delegate2(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
void q_treeview_edit(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
///
/// @param self QTreeView*
///
void q_treeview_clear_selection(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
void q_treeview_set_current_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
///
/// @param self QTreeView*
///
void q_treeview_scroll_to_top(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
///
/// @param self QTreeView*
///
void q_treeview_scroll_to_bottom(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#update)
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
void q_treeview_update(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
void q_treeview_pressed(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QModelIndex* index)
///
void q_treeview_on_pressed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
void q_treeview_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QModelIndex* index)
///
void q_treeview_on_clicked(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
void q_treeview_double_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QModelIndex* index)
///
void q_treeview_on_double_clicked(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
void q_treeview_activated(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QModelIndex* index)
///
void q_treeview_on_activated(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
void q_treeview_entered(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QModelIndex* index)
///
void q_treeview_on_entered(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// @param self QTreeView*
///
void q_treeview_viewport_entered(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self)
///
void q_treeview_on_viewport_entered(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// @param self QTreeView*
/// @param size QSize*
///
void q_treeview_icon_size_changed(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QSize* size)
///
void q_treeview_on_icon_size_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// @param self QTreeView*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t q_treeview_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// @param self QTreeView*
/// @param verticalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void q_treeview_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// @param self QTreeView*
///
QScrollBar* q_treeview_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// @param self QTreeView*
/// @param scrollbar QScrollBar*
///
void q_treeview_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// @param self QTreeView*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t q_treeview_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// @param self QTreeView*
/// @param horizontalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void q_treeview_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// @param self QTreeView*
///
QScrollBar* q_treeview_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// @param self QTreeView*
/// @param scrollbar QScrollBar*
///
void q_treeview_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// @param self QTreeView*
///
QWidget* q_treeview_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// @param self QTreeView*
/// @param widget QWidget*
///
void q_treeview_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// @param self QTreeView*
/// @param widget QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_treeview_add_scroll_bar_widget(void* self, void* widget, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// @param self QTreeView*
/// @param alignment flag of enum Qt__AlignmentFlag
///
libqt_list /* of QWidget* */ q_treeview_scroll_bar_widgets(void* self, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// @param self QTreeView*
///
QWidget* q_treeview_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// @param self QTreeView*
/// @param widget QWidget*
///
void q_treeview_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// @param self QTreeView*
///
QSize* q_treeview_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// @param self QTreeView*
///
/// @return enum QAbstractScrollArea__SizeAdjustPolicy
///
int32_t q_treeview_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// @param self QTreeView*
/// @param policy enum QAbstractScrollArea__SizeAdjustPolicy
///
void q_treeview_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self QTreeView*
///
int32_t q_treeview_frame_style(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self QTreeView*
/// @param frameStyle int
///
void q_treeview_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self QTreeView*
///
int32_t q_treeview_frame_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self QTreeView*
///
/// @return enum QFrame__Shape
///
int32_t q_treeview_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self QTreeView*
/// @param frameShape enum QFrame__Shape
///
void q_treeview_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self QTreeView*
///
/// @return enum QFrame__Shadow
///
int32_t q_treeview_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self QTreeView*
/// @param frameShadow enum QFrame__Shadow
///
void q_treeview_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self QTreeView*
///
int32_t q_treeview_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self QTreeView*
/// @param lineWidth int
///
void q_treeview_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self QTreeView*
///
int32_t q_treeview_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self QTreeView*
/// @param midLineWidth int
///
void q_treeview_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self QTreeView*
///
QRect* q_treeview_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self QTreeView*
/// @param frameRect QRect*
///
void q_treeview_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QTreeView*
///
uintptr_t q_treeview_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QTreeView*
///
void q_treeview_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QTreeView*
///
uintptr_t q_treeview_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QTreeView*
///
uintptr_t q_treeview_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QTreeView*
///
QStyle* q_treeview_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QTreeView*
/// @param style QStyle*
///
void q_treeview_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QTreeView*
///
bool q_treeview_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QTreeView*
///
bool q_treeview_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QTreeView*
///
bool q_treeview_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QTreeView*
///
/// @return enum Qt__WindowModality
///
int32_t q_treeview_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QTreeView*
/// @param windowModality enum Qt__WindowModality
///
void q_treeview_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QTreeView*
///
bool q_treeview_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QTreeView*
/// @param param1 QWidget*
///
bool q_treeview_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QTreeView*
/// @param enabled bool
///
void q_treeview_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QTreeView*
/// @param disabled bool
///
void q_treeview_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QTreeView*
/// @param windowModified bool
///
void q_treeview_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QTreeView*
///
QRect* q_treeview_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QTreeView*
///
const QRect* q_treeview_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QTreeView*
///
QRect* q_treeview_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QTreeView*
///
int32_t q_treeview_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QTreeView*
///
int32_t q_treeview_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QTreeView*
///
QPoint* q_treeview_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QTreeView*
///
QSize* q_treeview_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QTreeView*
///
QSize* q_treeview_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QTreeView*
///
int32_t q_treeview_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QTreeView*
///
int32_t q_treeview_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QTreeView*
///
QRect* q_treeview_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QTreeView*
///
QRect* q_treeview_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QTreeView*
///
QRegion* q_treeview_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QTreeView*
///
QSize* q_treeview_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QTreeView*
///
QSize* q_treeview_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QTreeView*
///
int32_t q_treeview_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QTreeView*
///
int32_t q_treeview_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QTreeView*
///
int32_t q_treeview_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QTreeView*
///
int32_t q_treeview_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QTreeView*
/// @param minimumSize QSize*
///
void q_treeview_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QTreeView*
/// @param minw int
/// @param minh int
///
void q_treeview_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QTreeView*
/// @param maximumSize QSize*
///
void q_treeview_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QTreeView*
/// @param maxw int
/// @param maxh int
///
void q_treeview_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QTreeView*
/// @param minw int
///
void q_treeview_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QTreeView*
/// @param minh int
///
void q_treeview_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QTreeView*
/// @param maxw int
///
void q_treeview_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QTreeView*
/// @param maxh int
///
void q_treeview_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QTreeView*
///
QSize* q_treeview_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QTreeView*
/// @param sizeIncrement QSize*
///
void q_treeview_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QTreeView*
/// @param w int
/// @param h int
///
void q_treeview_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QTreeView*
///
QSize* q_treeview_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QTreeView*
/// @param baseSize QSize*
///
void q_treeview_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QTreeView*
/// @param basew int
/// @param baseh int
///
void q_treeview_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QTreeView*
/// @param fixedSize QSize*
///
void q_treeview_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QTreeView*
/// @param w int
/// @param h int
///
void q_treeview_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QTreeView*
/// @param w int
///
void q_treeview_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QTreeView*
/// @param h int
///
void q_treeview_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QTreeView*
/// @param param1 QPointF*
///
QPointF* q_treeview_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QTreeView*
/// @param param1 QPoint*
///
QPoint* q_treeview_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QTreeView*
/// @param param1 QPointF*
///
QPointF* q_treeview_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QTreeView*
/// @param param1 QPoint*
///
QPoint* q_treeview_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QTreeView*
/// @param param1 QPointF*
///
QPointF* q_treeview_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QTreeView*
/// @param param1 QPoint*
///
QPoint* q_treeview_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QTreeView*
/// @param param1 QPointF*
///
QPointF* q_treeview_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QTreeView*
/// @param param1 QPoint*
///
QPoint* q_treeview_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QTreeView*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_treeview_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QTreeView*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_treeview_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QTreeView*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_treeview_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QTreeView*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_treeview_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QTreeView*
///
QWidget* q_treeview_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QTreeView*
///
QWidget* q_treeview_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QTreeView*
///
QWidget* q_treeview_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QTreeView*
///
const QPalette* q_treeview_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QTreeView*
/// @param palette QPalette*
///
void q_treeview_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QTreeView*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_treeview_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QTreeView*
///
/// @return enum QPalette__ColorRole
///
int32_t q_treeview_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QTreeView*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_treeview_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QTreeView*
///
/// @return enum QPalette__ColorRole
///
int32_t q_treeview_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QTreeView*
///
const QFont* q_treeview_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QTreeView*
/// @param font QFont*
///
void q_treeview_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QTreeView*
///
QFontMetrics* q_treeview_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QTreeView*
///
QFontInfo* q_treeview_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QTreeView*
///
QCursor* q_treeview_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QTreeView*
/// @param cursor QCursor*
///
void q_treeview_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QTreeView*
///
void q_treeview_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QTreeView*
/// @param enable bool
///
void q_treeview_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QTreeView*
///
bool q_treeview_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QTreeView*
///
bool q_treeview_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QTreeView*
/// @param enable bool
///
void q_treeview_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QTreeView*
///
bool q_treeview_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QTreeView*
/// @param mask QBitmap*
///
void q_treeview_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QTreeView*
/// @param mask QRegion*
///
void q_treeview_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QTreeView*
///
QRegion* q_treeview_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QTreeView*
///
void q_treeview_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTreeView*
/// @param target QPaintDevice*
///
void q_treeview_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTreeView*
/// @param painter QPainter*
///
void q_treeview_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QTreeView*
///
QPixmap* q_treeview_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QTreeView*
///
QGraphicsEffect* q_treeview_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QTreeView*
/// @param effect QGraphicsEffect*
///
void q_treeview_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QTreeView*
/// @param type enum Qt__GestureType
///
void q_treeview_grab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QTreeView*
/// @param type enum Qt__GestureType
///
void q_treeview_ungrab_gesture(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QTreeView*
/// @param windowTitle const char*
///
void q_treeview_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QTreeView*
/// @param styleSheet const char*
///
void q_treeview_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTreeView*
///
const char* q_treeview_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTreeView*
///
const char* q_treeview_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QTreeView*
/// @param icon QIcon*
///
void q_treeview_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QTreeView*
///
QIcon* q_treeview_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QTreeView*
/// @param windowIconText const char*
///
void q_treeview_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTreeView*
///
const char* q_treeview_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QTreeView*
/// @param windowRole const char*
///
void q_treeview_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTreeView*
///
const char* q_treeview_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QTreeView*
/// @param filePath const char*
///
void q_treeview_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTreeView*
///
const char* q_treeview_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QTreeView*
/// @param level double
///
void q_treeview_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QTreeView*
///
double q_treeview_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QTreeView*
///
bool q_treeview_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QTreeView*
/// @param toolTip const char*
///
void q_treeview_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTreeView*
///
const char* q_treeview_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QTreeView*
/// @param msec int
///
void q_treeview_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QTreeView*
///
int32_t q_treeview_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QTreeView*
/// @param statusTip const char*
///
void q_treeview_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTreeView*
///
const char* q_treeview_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QTreeView*
/// @param whatsThis const char*
///
void q_treeview_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTreeView*
///
const char* q_treeview_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTreeView*
///
const char* q_treeview_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QTreeView*
/// @param name const char*
///
void q_treeview_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTreeView*
///
const char* q_treeview_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QTreeView*
/// @param description const char*
///
void q_treeview_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QTreeView*
/// @param direction enum Qt__LayoutDirection
///
void q_treeview_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QTreeView*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_treeview_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QTreeView*
///
void q_treeview_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QTreeView*
/// @param locale QLocale*
///
void q_treeview_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QTreeView*
///
QLocale* q_treeview_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QTreeView*
///
void q_treeview_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QTreeView*
///
bool q_treeview_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QTreeView*
///
bool q_treeview_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QTreeView*
///
void q_treeview_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QTreeView*
///
bool q_treeview_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QTreeView*
///
void q_treeview_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QTreeView*
///
void q_treeview_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QTreeView*
/// @param reason enum Qt__FocusReason
///
void q_treeview_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QTreeView*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_treeview_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QTreeView*
/// @param policy enum Qt__FocusPolicy
///
void q_treeview_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QTreeView*
///
bool q_treeview_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_treeview_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QTreeView*
/// @param focusProxy QWidget*
///
void q_treeview_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QTreeView*
///
QWidget* q_treeview_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QTreeView*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_treeview_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QTreeView*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_treeview_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QTreeView*
///
void q_treeview_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QTreeView*
/// @param param1 QCursor*
///
void q_treeview_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QTreeView*
///
void q_treeview_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QTreeView*
///
void q_treeview_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QTreeView*
///
void q_treeview_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QTreeView*
/// @param key QKeySequence*
///
int32_t q_treeview_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QTreeView*
/// @param id int
///
void q_treeview_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QTreeView*
/// @param id int
///
void q_treeview_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QTreeView*
/// @param id int
///
void q_treeview_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_treeview_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_treeview_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QTreeView*
///
bool q_treeview_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QTreeView*
/// @param enable bool
///
void q_treeview_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QTreeView*
///
QGraphicsProxyWidget* q_treeview_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTreeView*
///
void q_treeview_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTreeView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_treeview_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTreeView*
/// @param param1 QRect*
///
void q_treeview_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QTreeView*
/// @param param1 QRegion*
///
void q_treeview_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTreeView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_treeview_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTreeView*
/// @param param1 QRect*
///
void q_treeview_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QTreeView*
/// @param param1 QRegion*
///
void q_treeview_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QTreeView*
/// @param hidden bool
///
void q_treeview_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QTreeView*
///
void q_treeview_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QTreeView*
///
void q_treeview_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QTreeView*
///
void q_treeview_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QTreeView*
///
void q_treeview_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QTreeView*
///
void q_treeview_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QTreeView*
///
void q_treeview_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QTreeView*
///
bool q_treeview_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QTreeView*
///
void q_treeview_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QTreeView*
///
void q_treeview_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QTreeView*
/// @param param1 QWidget*
///
void q_treeview_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QTreeView*
/// @param x int
/// @param y int
///
void q_treeview_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QTreeView*
/// @param param1 QPoint*
///
void q_treeview_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QTreeView*
/// @param w int
/// @param h int
///
void q_treeview_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QTreeView*
/// @param param1 QSize*
///
void q_treeview_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QTreeView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_treeview_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QTreeView*
/// @param geometry QRect*
///
void q_treeview_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QTreeView*
///
char* q_treeview_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QTreeView*
/// @param geometry const char*
///
bool q_treeview_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QTreeView*
///
void q_treeview_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QTreeView*
///
bool q_treeview_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QTreeView*
/// @param param1 QWidget*
///
bool q_treeview_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QTreeView*
///
bool q_treeview_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QTreeView*
///
bool q_treeview_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QTreeView*
///
bool q_treeview_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QTreeView*
///
bool q_treeview_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QTreeView*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_treeview_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QTreeView*
/// @param state flag of enum Qt__WindowState
///
void q_treeview_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QTreeView*
/// @param state flag of enum Qt__WindowState
///
void q_treeview_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QTreeView*
///
QSizePolicy* q_treeview_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QTreeView*
/// @param sizePolicy QSizePolicy*
///
void q_treeview_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QTreeView*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_treeview_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QTreeView*
///
QRegion* q_treeview_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QTreeView*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_treeview_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QTreeView*
/// @param margins QMargins*
///
void q_treeview_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QTreeView*
///
QMargins* q_treeview_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QTreeView*
///
QRect* q_treeview_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QTreeView*
///
QLayout* q_treeview_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QTreeView*
/// @param layout QLayout*
///
void q_treeview_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QTreeView*
///
void q_treeview_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QTreeView*
/// @param parent QWidget*
///
void q_treeview_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QTreeView*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_treeview_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QTreeView*
/// @param dx int
/// @param dy int
///
void q_treeview_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QTreeView*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_treeview_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QTreeView*
///
QWidget* q_treeview_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QTreeView*
///
QWidget* q_treeview_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QTreeView*
///
QWidget* q_treeview_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QTreeView*
///
bool q_treeview_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QTreeView*
/// @param on bool
///
void q_treeview_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTreeView*
/// @param action QAction*
///
void q_treeview_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QTreeView*
/// @param actions libqt_list /* of QAction* */
///
void q_treeview_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QTreeView*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
///
void q_treeview_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QTreeView*
/// @param before QAction*
/// @param action QAction*
///
void q_treeview_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QTreeView*
/// @param action QAction*
///
void q_treeview_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QTreeView*
///
libqt_list /* of QAction* */ q_treeview_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTreeView*
/// @param text const char*
///
QAction* q_treeview_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTreeView*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_treeview_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTreeView*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_treeview_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QTreeView*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_treeview_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QTreeView*
///
QWidget* q_treeview_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QTreeView*
/// @param type flag of enum Qt__WindowType
///
void q_treeview_set_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QTreeView*
///
/// @return flag of enum Qt__WindowType
///
int64_t q_treeview_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QTreeView*
/// @param param1 enum Qt__WindowType
///
void q_treeview_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QTreeView*
/// @param type flag of enum Qt__WindowType
///
void q_treeview_override_window_flags(void* self, int64_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QTreeView*
///
/// @return enum Qt__WindowType
///
int64_t q_treeview_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* q_treeview_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QTreeView*
/// @param x int
/// @param y int
///
QWidget* q_treeview_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QTreeView*
/// @param p QPoint*
///
QWidget* q_treeview_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QTreeView*
/// @param p QPointF*
///
QWidget* q_treeview_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QTreeView*
/// @param param1 enum Qt__WidgetAttribute
///
void q_treeview_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QTreeView*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_treeview_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QTreeView*
///
void q_treeview_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QTreeView*
/// @param child QWidget*
///
bool q_treeview_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QTreeView*
///
bool q_treeview_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QTreeView*
/// @param enabled bool
///
void q_treeview_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QTreeView*
///
QBackingStore* q_treeview_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QTreeView*
///
QWindow* q_treeview_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QTreeView*
///
QScreen* q_treeview_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QTreeView*
/// @param screen QScreen*
///
void q_treeview_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_treeview_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QTreeView*
/// @param title const char*
///
void q_treeview_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, const char* title)
///
void q_treeview_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QTreeView*
/// @param icon QIcon*
///
void q_treeview_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QIcon* icon)
///
void q_treeview_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QTreeView*
/// @param iconText const char*
///
void q_treeview_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, const char* iconText)
///
void q_treeview_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QTreeView*
/// @param pos QPoint*
///
void q_treeview_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QPoint* pos)
///
void q_treeview_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QTreeView*
///
/// @return flag of enum Qt__InputMethodHint
///
int64_t q_treeview_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QTreeView*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_treeview_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTreeView*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_treeview_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTreeView*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_treeview_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTreeView*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_treeview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTreeView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_treeview_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTreeView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_treeview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QTreeView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_treeview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QTreeView*
/// @param rectangle QRect*
///
QPixmap* q_treeview_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QTreeView*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_treeview_grab_gesture2(void* self, int64_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QTreeView*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_treeview_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QTreeView*
/// @param id int
/// @param enable bool
///
void q_treeview_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QTreeView*
/// @param id int
/// @param enable bool
///
void q_treeview_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QTreeView*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_treeview_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QTreeView*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_treeview_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_treeview_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_treeview_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTreeView*
///
const char* q_treeview_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QTreeView*
/// @param name char*
///
void q_treeview_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QTreeView*
///
bool q_treeview_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QTreeView*
///
bool q_treeview_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QTreeView*
///
bool q_treeview_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QTreeView*
///
bool q_treeview_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QTreeView*
/// @param b bool
///
bool q_treeview_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QTreeView*
///
QThread* q_treeview_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTreeView*
/// @param thread QThread*
///
bool q_treeview_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTreeView*
/// @param interval int
///
int32_t q_treeview_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTreeView*
/// @param id int
///
void q_treeview_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QTreeView*
/// @param id enum Qt__TimerId
///
void q_treeview_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QTreeView*
///
libqt_list /* of QObject* */ q_treeview_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QTreeView*
/// @param filterObj QObject*
///
void q_treeview_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QTreeView*
/// @param obj QObject*
///
void q_treeview_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_treeview_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTreeView*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_treeview_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_treeview_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_treeview_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QTreeView*
///
void q_treeview_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QTreeView*
///
void q_treeview_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QTreeView*
/// @param name const char*
/// @param value QVariant*
///
bool q_treeview_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QTreeView*
/// @param name const char*
///
QVariant* q_treeview_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QTreeView*
///
const char** q_treeview_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTreeView*
///
QBindingStorage* q_treeview_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QTreeView*
///
const QBindingStorage* q_treeview_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTreeView*
///
void q_treeview_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self)
///
void q_treeview_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QTreeView*
///
QObject* q_treeview_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QTreeView*
/// @param classname const char*
///
bool q_treeview_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QTreeView*
///
void q_treeview_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QTreeView*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_treeview_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QTreeView*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_treeview_start_timer22(void* self, int interval, int32_t timerType);

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
QMetaObject__Connection* q_treeview_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QTreeView*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_treeview_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTreeView*
/// @param param1 QObject*
///
void q_treeview_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QObject* param1)
///
void q_treeview_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QTreeView*
///
bool q_treeview_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QTreeView*
///
int32_t q_treeview_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QTreeView*
///
int32_t q_treeview_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QTreeView*
///
int32_t q_treeview_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QTreeView*
///
int32_t q_treeview_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QTreeView*
///
int32_t q_treeview_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QTreeView*
///
int32_t q_treeview_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QTreeView*
///
double q_treeview_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QTreeView*
///
double q_treeview_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QTreeView*
///
int32_t q_treeview_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QTreeView*
///
int32_t q_treeview_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_treeview_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_treeview_encode_metric_f(int32_t metric, double value);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param row int
///
int32_t q_treeview_size_hint_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param row int
///
int32_t q_treeview_qbase_size_hint_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback int32_t func(QTreeView* self, int row)
///
void q_treeview_on_size_hint_for_row(void* self, int32_t (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
QAbstractItemDelegate* q_treeview_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param index QModelIndex*
///
QAbstractItemDelegate* q_treeview_qbase_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback QAbstractItemDelegate* func(QTreeView* self, QModelIndex* index)
///
void q_treeview_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_treeview_input_method_query(void* self, int64_t query);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_treeview_qbase_input_method_query(void* self, int64_t query);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback QVariant* func(QTreeView* self, enum Qt__InputMethodQuery query)
///
void q_treeview_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
///
void q_treeview_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
///
void q_treeview_qbase_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func()
///
void q_treeview_on_update_editor_data(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
///
void q_treeview_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
///
void q_treeview_qbase_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func()
///
void q_treeview_on_update_editor_geometries(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param action int
///
void q_treeview_vertical_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param action int
///
void q_treeview_qbase_vertical_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, int action)
///
void q_treeview_on_vertical_scrollbar_action(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param value int
///
void q_treeview_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param value int
///
void q_treeview_qbase_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, int value)
///
void q_treeview_on_horizontal_scrollbar_value_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param editor QWidget*
/// @param hint enum QAbstractItemDelegate__EndEditHint
///
void q_treeview_close_editor(void* self, void* editor, int32_t hint);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param editor QWidget*
/// @param hint enum QAbstractItemDelegate__EndEditHint
///
void q_treeview_qbase_close_editor(void* self, void* editor, int32_t hint);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint)
///
void q_treeview_on_close_editor(void* self, void (*callback)(void*, void*, int32_t));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param editor QWidget*
///
void q_treeview_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param editor QWidget*
///
void q_treeview_qbase_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QWidget* editor)
///
void q_treeview_on_commit_data(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param editor QObject*
///
void q_treeview_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param editor QObject*
///
void q_treeview_qbase_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QObject* editor)
///
void q_treeview_on_editor_destroyed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param index QModelIndex*
/// @param trigger enum QAbstractItemView__EditTrigger
/// @param event QEvent*
///
bool q_treeview_edit2(void* self, void* index, int32_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param index QModelIndex*
/// @param trigger enum QAbstractItemView__EditTrigger
/// @param event QEvent*
///
bool q_treeview_qbase_edit2(void* self, void* index, int32_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback bool func(QTreeView* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event)
///
void q_treeview_on_edit2(void* self, bool (*callback)(void*, void*, int32_t, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param index QModelIndex*
/// @param event QEvent*
///
/// @return flag of enum QItemSelectionModel__SelectionFlag
///
int32_t q_treeview_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param index QModelIndex*
/// @param event QEvent*
///
/// @return flag of enum QItemSelectionModel__SelectionFlag
///
int32_t q_treeview_qbase_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback int32_t func(QTreeView* self, QModelIndex* index, QEvent* event)
///
void q_treeview_on_selection_command(void* self, int32_t (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param supportedActions flag of enum Qt__DropAction
///
void q_treeview_start_drag(void* self, int32_t supportedActions);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param supportedActions flag of enum Qt__DropAction
///
void q_treeview_qbase_start_drag(void* self, int32_t supportedActions);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, flag of enum Qt__DropAction supportedActions)
///
void q_treeview_on_start_drag(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param option QStyleOptionViewItem*
///
void q_treeview_init_view_item_option(void* self, void* option);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param option QStyleOptionViewItem*
///
void q_treeview_qbase_init_view_item_option(void* self, void* option);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QStyleOptionViewItem* option)
///
void q_treeview_on_init_view_item_option(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param next bool
///
bool q_treeview_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param next bool
///
bool q_treeview_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback bool func(QTreeView* self, bool next)
///
void q_treeview_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param event QEvent*
///
bool q_treeview_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param event QEvent*
///
bool q_treeview_qbase_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback bool func(QTreeView* self, QEvent* event)
///
void q_treeview_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param event QDragEnterEvent*
///
void q_treeview_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param event QDragEnterEvent*
///
void q_treeview_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QDragEnterEvent* event)
///
void q_treeview_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param event QDragLeaveEvent*
///
void q_treeview_drag_leave_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param event QDragLeaveEvent*
///
void q_treeview_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QDragLeaveEvent* event)
///
void q_treeview_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param event QDropEvent*
///
void q_treeview_drop_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param event QDropEvent*
///
void q_treeview_qbase_drop_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QDropEvent* event)
///
void q_treeview_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param event QFocusEvent*
///
void q_treeview_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param event QFocusEvent*
///
void q_treeview_qbase_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QFocusEvent* event)
///
void q_treeview_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param event QFocusEvent*
///
void q_treeview_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param event QFocusEvent*
///
void q_treeview_qbase_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QFocusEvent* event)
///
void q_treeview_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param event QResizeEvent*
///
void q_treeview_resize_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param event QResizeEvent*
///
void q_treeview_qbase_resize_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QResizeEvent* event)
///
void q_treeview_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param event QInputMethodEvent*
///
void q_treeview_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param event QInputMethodEvent*
///
void q_treeview_qbase_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QInputMethodEvent* event)
///
void q_treeview_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param object QObject*
/// @param event QEvent*
///
bool q_treeview_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param object QObject*
/// @param event QEvent*
///
bool q_treeview_qbase_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback bool func(QTreeView* self, QObject* object, QEvent* event)
///
void q_treeview_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
///
QSize* q_treeview_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
///
QSize* q_treeview_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback QSize* func()
///
void q_treeview_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
///
QSize* q_treeview_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
///
QSize* q_treeview_qbase_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback QSize* func()
///
void q_treeview_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param viewport QWidget*
///
void q_treeview_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param viewport QWidget*
///
void q_treeview_qbase_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QWidget* viewport)
///
void q_treeview_on_setup_viewport(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param param1 QWheelEvent*
///
void q_treeview_wheel_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param param1 QWheelEvent*
///
void q_treeview_qbase_wheel_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QWheelEvent* param1)
///
void q_treeview_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param param1 QContextMenuEvent*
///
void q_treeview_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param param1 QContextMenuEvent*
///
void q_treeview_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QContextMenuEvent* param1)
///
void q_treeview_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param option QStyleOptionFrame*
///
void q_treeview_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param option QStyleOptionFrame*
///
void q_treeview_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QStyleOptionFrame* option)
///
void q_treeview_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
///
int32_t q_treeview_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
///
int32_t q_treeview_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback int32_t func()
///
void q_treeview_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param visible bool
///
void q_treeview_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param visible bool
///
void q_treeview_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, bool visible)
///
void q_treeview_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param param1 int
///
int32_t q_treeview_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param param1 int
///
int32_t q_treeview_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback int32_t func(QTreeView* self, int param1)
///
void q_treeview_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
///
bool q_treeview_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
///
bool q_treeview_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback bool func()
///
void q_treeview_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
///
QPaintEngine* q_treeview_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
///
QPaintEngine* q_treeview_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback QPaintEngine* func()
///
void q_treeview_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param event QKeyEvent*
///
void q_treeview_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param event QKeyEvent*
///
void q_treeview_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QKeyEvent* event)
///
void q_treeview_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param event QEnterEvent*
///
void q_treeview_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param event QEnterEvent*
///
void q_treeview_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QEnterEvent* event)
///
void q_treeview_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param event QEvent*
///
void q_treeview_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param event QEvent*
///
void q_treeview_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QEvent* event)
///
void q_treeview_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param event QMoveEvent*
///
void q_treeview_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param event QMoveEvent*
///
void q_treeview_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QMoveEvent* event)
///
void q_treeview_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param event QCloseEvent*
///
void q_treeview_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param event QCloseEvent*
///
void q_treeview_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QCloseEvent* event)
///
void q_treeview_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param event QTabletEvent*
///
void q_treeview_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param event QTabletEvent*
///
void q_treeview_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QTabletEvent* event)
///
void q_treeview_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param event QActionEvent*
///
void q_treeview_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param event QActionEvent*
///
void q_treeview_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QActionEvent* event)
///
void q_treeview_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param event QShowEvent*
///
void q_treeview_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param event QShowEvent*
///
void q_treeview_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QShowEvent* event)
///
void q_treeview_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param event QHideEvent*
///
void q_treeview_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param event QHideEvent*
///
void q_treeview_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QHideEvent* event)
///
void q_treeview_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_treeview_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_treeview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback bool func(QTreeView* self, const char* eventType, void* message, intptr_t* result)
///
void q_treeview_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_treeview_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_treeview_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback int32_t func(QTreeView* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_treeview_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param painter QPainter*
///
void q_treeview_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param painter QPainter*
///
void q_treeview_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QPainter* painter)
///
void q_treeview_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param offset QPoint*
///
QPaintDevice* q_treeview_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param offset QPoint*
///
QPaintDevice* q_treeview_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback QPaintDevice* func(QTreeView* self, QPoint* offset)
///
void q_treeview_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
///
QPainter* q_treeview_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
///
QPainter* q_treeview_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback QPainter* func()
///
void q_treeview_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param event QChildEvent*
///
void q_treeview_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param event QChildEvent*
///
void q_treeview_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QChildEvent* event)
///
void q_treeview_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param event QEvent*
///
void q_treeview_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param event QEvent*
///
void q_treeview_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QEvent* event)
///
void q_treeview_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param signal QMetaMethod*
///
void q_treeview_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param signal QMetaMethod*
///
void q_treeview_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QMetaMethod* signal)
///
void q_treeview_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param signal QMetaMethod*
///
void q_treeview_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param signal QMetaMethod*
///
void q_treeview_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QMetaMethod* signal)
///
void q_treeview_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
///
/// @return enum QAbstractItemView__State
///
int32_t q_treeview_state(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
///
/// @return enum QAbstractItemView__State
///
int32_t q_treeview_qbase_state(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback int32_t func()
///
void q_treeview_on_state(void* self, int32_t (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param state enum QAbstractItemView__State
///
void q_treeview_set_state(void* self, int32_t state);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param state enum QAbstractItemView__State
///
void q_treeview_qbase_set_state(void* self, int32_t state);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, enum QAbstractItemView__State state)
///
void q_treeview_on_set_state(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
///
void q_treeview_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
///
void q_treeview_qbase_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func()
///
void q_treeview_on_schedule_delayed_items_layout(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
///
void q_treeview_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
///
void q_treeview_qbase_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func()
///
void q_treeview_on_execute_delayed_items_layout(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param region QRegion*
///
void q_treeview_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param region QRegion*
///
void q_treeview_qbase_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QRegion* region)
///
void q_treeview_on_set_dirty_region(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param dx int
/// @param dy int
///
void q_treeview_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param dx int
/// @param dy int
///
void q_treeview_qbase_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, int dx, int dy)
///
void q_treeview_on_scroll_dirty_region(void* self, void (*callback)(void*, int, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
///
QPoint* q_treeview_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
///
QPoint* q_treeview_qbase_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback QPoint* func()
///
void q_treeview_on_dirty_region_offset(void* self, QPoint* (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
///
void q_treeview_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
///
void q_treeview_qbase_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func()
///
void q_treeview_on_start_auto_scroll(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
///
void q_treeview_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
///
void q_treeview_qbase_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func()
///
void q_treeview_on_stop_auto_scroll(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
///
void q_treeview_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
///
void q_treeview_qbase_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func()
///
void q_treeview_on_do_auto_scroll(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
///
/// @return enum QAbstractItemView__DropIndicatorPosition
///
int32_t q_treeview_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
///
/// @return enum QAbstractItemView__DropIndicatorPosition
///
int32_t q_treeview_qbase_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback int32_t func()
///
void q_treeview_on_drop_indicator_position(void* self, int32_t (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_treeview_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_treeview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, int left, int top, int right, int bottom)
///
void q_treeview_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
///
QMargins* q_treeview_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
///
QMargins* q_treeview_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback QMargins* func()
///
void q_treeview_on_viewport_margins(void* self, QMargins* (*callback)());

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param param1 QPainter*
///
void q_treeview_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param param1 QPainter*
///
void q_treeview_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, QPainter* param1)
///
void q_treeview_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
///
void q_treeview_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
///
void q_treeview_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func()
///
void q_treeview_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
///
void q_treeview_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
///
void q_treeview_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func()
///
void q_treeview_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
///
void q_treeview_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
///
void q_treeview_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback void func()
///
void q_treeview_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
///
bool q_treeview_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
///
bool q_treeview_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback bool func()
///
void q_treeview_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
///
bool q_treeview_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
///
bool q_treeview_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback bool func()
///
void q_treeview_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
///
QObject* q_treeview_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
///
QObject* q_treeview_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback QObject* func()
///
void q_treeview_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
///
int32_t q_treeview_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
///
int32_t q_treeview_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback int32_t func()
///
void q_treeview_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param signal const char*
///
int32_t q_treeview_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param signal const char*
///
int32_t q_treeview_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback int32_t func(QTreeView* self, const char* signal)
///
void q_treeview_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param signal QMetaMethod*
///
bool q_treeview_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param signal QMetaMethod*
///
bool q_treeview_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback bool func(QTreeView* self, QMetaMethod* signal)
///
void q_treeview_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QTreeView*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_treeview_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QTreeView*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_treeview_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QTreeView*
/// @param callback double func(QTreeView* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_treeview_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QTreeView*
/// @param callback void func(QTreeView* self, const char* objectName)
///
void q_treeview_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#dtor.QTreeView)
///
/// Delete this object from C++ memory.
///
/// @param self QTreeView*
///
void q_treeview_delete(void* self);

#endif
