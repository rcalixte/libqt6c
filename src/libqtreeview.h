#pragma once
#ifndef SRCQT6C_LIBQTREEVIEW_H
#define SRCQT6C_LIBQTREEVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtreeview.html

/// q_treeview_new constructs a new QTreeView object.
///
/// ``` QWidget* parent ```
QTreeView* q_treeview_new(void* parent);

/// q_treeview_new2 constructs a new QTreeView object.
///
///
QTreeView* q_treeview_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTreeView* self ```
const QMetaObject* q_treeview_meta_object(void* self);

/// ``` QTreeView* self, const char* param1 ```
void* q_treeview_metacast(void* self, const char* param1);

/// ``` QTreeView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_treeview_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QTreeView* self, int32_t (*slot)(QTreeView*, enum QMetaObject__Call, int, void*) ```
void q_treeview_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QTreeView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_treeview_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_treeview_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setModel)
///
/// ``` QTreeView* self, QAbstractItemModel* model ```
void q_treeview_set_model(void* self, void* model);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setModel)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QAbstractItemModel*) ```
void q_treeview_on_set_model(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setModel)
///
/// Base class method implementation
///
/// ``` QTreeView* self, QAbstractItemModel* model ```
void q_treeview_qbase_set_model(void* self, void* model);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setRootIndex)
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_set_root_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setRootIndex)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QModelIndex*) ```
void q_treeview_on_set_root_index(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setRootIndex)
///
/// Base class method implementation
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_qbase_set_root_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setSelectionModel)
///
/// ``` QTreeView* self, QItemSelectionModel* selectionModel ```
void q_treeview_set_selection_model(void* self, void* selectionModel);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setSelectionModel)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QItemSelectionModel*) ```
void q_treeview_on_set_selection_model(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setSelectionModel)
///
/// Base class method implementation
///
/// ``` QTreeView* self, QItemSelectionModel* selectionModel ```
void q_treeview_qbase_set_selection_model(void* self, void* selectionModel);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#header)
///
/// ``` QTreeView* self ```
QHeaderView* q_treeview_header(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setHeader)
///
/// ``` QTreeView* self, QHeaderView* header ```
void q_treeview_set_header(void* self, void* header);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#autoExpandDelay)
///
/// ``` QTreeView* self ```
int32_t q_treeview_auto_expand_delay(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setAutoExpandDelay)
///
/// ``` QTreeView* self, int delay ```
void q_treeview_set_auto_expand_delay(void* self, int delay);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indentation)
///
/// ``` QTreeView* self ```
int32_t q_treeview_indentation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setIndentation)
///
/// ``` QTreeView* self, int i ```
void q_treeview_set_indentation(void* self, int i);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#resetIndentation)
///
/// ``` QTreeView* self ```
void q_treeview_reset_indentation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rootIsDecorated)
///
/// ``` QTreeView* self ```
bool q_treeview_root_is_decorated(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setRootIsDecorated)
///
/// ``` QTreeView* self, bool show ```
void q_treeview_set_root_is_decorated(void* self, bool show);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#uniformRowHeights)
///
/// ``` QTreeView* self ```
bool q_treeview_uniform_row_heights(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setUniformRowHeights)
///
/// ``` QTreeView* self, bool uniform ```
void q_treeview_set_uniform_row_heights(void* self, bool uniform);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#itemsExpandable)
///
/// ``` QTreeView* self ```
bool q_treeview_items_expandable(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setItemsExpandable)
///
/// ``` QTreeView* self, bool enable ```
void q_treeview_set_items_expandable(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expandsOnDoubleClick)
///
/// ``` QTreeView* self ```
bool q_treeview_expands_on_double_click(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setExpandsOnDoubleClick)
///
/// ``` QTreeView* self, bool enable ```
void q_treeview_set_expands_on_double_click(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnViewportPosition)
///
/// ``` QTreeView* self, int column ```
int32_t q_treeview_column_viewport_position(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnWidth)
///
/// ``` QTreeView* self, int column ```
int32_t q_treeview_column_width(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setColumnWidth)
///
/// ``` QTreeView* self, int column, int width ```
void q_treeview_set_column_width(void* self, int column, int width);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnAt)
///
/// ``` QTreeView* self, int x ```
int32_t q_treeview_column_at(void* self, int x);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isColumnHidden)
///
/// ``` QTreeView* self, int column ```
bool q_treeview_is_column_hidden(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setColumnHidden)
///
/// ``` QTreeView* self, int column, bool hide ```
void q_treeview_set_column_hidden(void* self, int column, bool hide);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isHeaderHidden)
///
/// ``` QTreeView* self ```
bool q_treeview_is_header_hidden(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setHeaderHidden)
///
/// ``` QTreeView* self, bool hide ```
void q_treeview_set_header_hidden(void* self, bool hide);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isRowHidden)
///
/// ``` QTreeView* self, int row, QModelIndex* parent ```
bool q_treeview_is_row_hidden(void* self, int row, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setRowHidden)
///
/// ``` QTreeView* self, int row, QModelIndex* parent, bool hide ```
void q_treeview_set_row_hidden(void* self, int row, void* parent, bool hide);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isFirstColumnSpanned)
///
/// ``` QTreeView* self, int row, QModelIndex* parent ```
bool q_treeview_is_first_column_spanned(void* self, int row, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setFirstColumnSpanned)
///
/// ``` QTreeView* self, int row, QModelIndex* parent, bool span ```
void q_treeview_set_first_column_spanned(void* self, int row, void* parent, bool span);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isExpanded)
///
/// ``` QTreeView* self, QModelIndex* index ```
bool q_treeview_is_expanded(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setExpanded)
///
/// ``` QTreeView* self, QModelIndex* index, bool expand ```
void q_treeview_set_expanded(void* self, void* index, bool expand);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setSortingEnabled)
///
/// ``` QTreeView* self, bool enable ```
void q_treeview_set_sorting_enabled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isSortingEnabled)
///
/// ``` QTreeView* self ```
bool q_treeview_is_sorting_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setAnimated)
///
/// ``` QTreeView* self, bool enable ```
void q_treeview_set_animated(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isAnimated)
///
/// ``` QTreeView* self ```
bool q_treeview_is_animated(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setAllColumnsShowFocus)
///
/// ``` QTreeView* self, bool enable ```
void q_treeview_set_all_columns_show_focus(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#allColumnsShowFocus)
///
/// ``` QTreeView* self ```
bool q_treeview_all_columns_show_focus(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setWordWrap)
///
/// ``` QTreeView* self, bool on ```
void q_treeview_set_word_wrap(void* self, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#wordWrap)
///
/// ``` QTreeView* self ```
bool q_treeview_word_wrap(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setTreePosition)
///
/// ``` QTreeView* self, int logicalIndex ```
void q_treeview_set_tree_position(void* self, int logicalIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#treePosition)
///
/// ``` QTreeView* self ```
int32_t q_treeview_tree_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#keyboardSearch)
///
/// ``` QTreeView* self, const char* search ```
void q_treeview_keyboard_search(void* self, const char* search);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#keyboardSearch)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, const char*) ```
void q_treeview_on_keyboard_search(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#keyboardSearch)
///
/// Base class method implementation
///
/// ``` QTreeView* self, const char* search ```
void q_treeview_qbase_keyboard_search(void* self, const char* search);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#visualRect)
///
/// ``` QTreeView* self, QModelIndex* index ```
QRect* q_treeview_visual_rect(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#visualRect)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, QRect* (*slot)(QTreeView*, QModelIndex*) ```
void q_treeview_on_visual_rect(void* self, QRect* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#visualRect)
///
/// Base class method implementation
///
/// ``` QTreeView* self, QModelIndex* index ```
QRect* q_treeview_qbase_visual_rect(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#scrollTo)
///
/// ``` QTreeView* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_treeview_scroll_to(void* self, void* index, int64_t hint);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#scrollTo)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QModelIndex*, enum QAbstractItemView__ScrollHint) ```
void q_treeview_on_scroll_to(void* self, void (*slot)(void*, void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#scrollTo)
///
/// Base class method implementation
///
/// ``` QTreeView* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_treeview_qbase_scroll_to(void* self, void* index, int64_t hint);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indexAt)
///
/// ``` QTreeView* self, QPoint* p ```
QModelIndex* q_treeview_index_at(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indexAt)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, QModelIndex* (*slot)(QTreeView*, QPoint*) ```
void q_treeview_on_index_at(void* self, QModelIndex* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indexAt)
///
/// Base class method implementation
///
/// ``` QTreeView* self, QPoint* p ```
QModelIndex* q_treeview_qbase_index_at(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indexAbove)
///
/// ``` QTreeView* self, QModelIndex* index ```
QModelIndex* q_treeview_index_above(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indexBelow)
///
/// ``` QTreeView* self, QModelIndex* index ```
QModelIndex* q_treeview_index_below(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#doItemsLayout)
///
/// ``` QTreeView* self ```
void q_treeview_do_items_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#doItemsLayout)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)() ```
void q_treeview_on_do_items_layout(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#doItemsLayout)
///
/// Base class method implementation
///
/// ``` QTreeView* self ```
void q_treeview_qbase_do_items_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#reset)
///
/// ``` QTreeView* self ```
void q_treeview_reset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#reset)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)() ```
void q_treeview_on_reset(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#reset)
///
/// Base class method implementation
///
/// ``` QTreeView* self ```
void q_treeview_qbase_reset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#dataChanged)
///
/// ``` QTreeView* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles ```
void q_treeview_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#dataChanged)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QModelIndex*, QModelIndex*, libqt_list /* of int */ roles ) ```
void q_treeview_on_data_changed(void* self, void (*slot)(void*, void*, void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#dataChanged)
///
/// Base class method implementation
///
/// ``` QTreeView* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles ```
void q_treeview_qbase_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#selectAll)
///
/// ``` QTreeView* self ```
void q_treeview_select_all(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#selectAll)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)() ```
void q_treeview_on_select_all(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#selectAll)
///
/// Base class method implementation
///
/// ``` QTreeView* self ```
void q_treeview_qbase_select_all(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expanded)
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_expanded(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expanded)
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QModelIndex*) ```
void q_treeview_on_expanded(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#collapsed)
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_collapsed(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#collapsed)
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QModelIndex*) ```
void q_treeview_on_collapsed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#hideColumn)
///
/// ``` QTreeView* self, int column ```
void q_treeview_hide_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#showColumn)
///
/// ``` QTreeView* self, int column ```
void q_treeview_show_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expand)
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_expand(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#collapse)
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_collapse(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#resizeColumnToContents)
///
/// ``` QTreeView* self, int column ```
void q_treeview_resize_column_to_contents(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#sortByColumn)
///
/// ``` QTreeView* self, int column, enum Qt__SortOrder order ```
void q_treeview_sort_by_column(void* self, int column, int64_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expandAll)
///
/// ``` QTreeView* self ```
void q_treeview_expand_all(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expandRecursively)
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_expand_recursively(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#collapseAll)
///
/// ``` QTreeView* self ```
void q_treeview_collapse_all(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expandToDepth)
///
/// ``` QTreeView* self, int depth ```
void q_treeview_expand_to_depth(void* self, int depth);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnResized)
///
/// ``` QTreeView* self, int column, int oldSize, int newSize ```
void q_treeview_column_resized(void* self, int column, int oldSize, int newSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnResized)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, int, int, int) ```
void q_treeview_on_column_resized(void* self, void (*slot)(void*, int, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnResized)
///
/// Base class method implementation
///
/// ``` QTreeView* self, int column, int oldSize, int newSize ```
void q_treeview_qbase_column_resized(void* self, int column, int oldSize, int newSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnCountChanged)
///
/// ``` QTreeView* self, int oldCount, int newCount ```
void q_treeview_column_count_changed(void* self, int oldCount, int newCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnCountChanged)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, int, int) ```
void q_treeview_on_column_count_changed(void* self, void (*slot)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnCountChanged)
///
/// Base class method implementation
///
/// ``` QTreeView* self, int oldCount, int newCount ```
void q_treeview_qbase_column_count_changed(void* self, int oldCount, int newCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnMoved)
///
/// ``` QTreeView* self ```
void q_treeview_column_moved(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnMoved)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)() ```
void q_treeview_on_column_moved(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#columnMoved)
///
/// Base class method implementation
///
/// ``` QTreeView* self ```
void q_treeview_qbase_column_moved(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#reexpand)
///
/// ``` QTreeView* self ```
void q_treeview_reexpand(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#reexpand)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)() ```
void q_treeview_on_reexpand(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#reexpand)
///
/// Base class method implementation
///
/// ``` QTreeView* self ```
void q_treeview_qbase_reexpand(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowsRemoved)
///
/// ``` QTreeView* self, QModelIndex* parent, int first, int last ```
void q_treeview_rows_removed(void* self, void* parent, int first, int last);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowsRemoved)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QModelIndex*, int, int) ```
void q_treeview_on_rows_removed(void* self, void (*slot)(void*, void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowsRemoved)
///
/// Base class method implementation
///
/// ``` QTreeView* self, QModelIndex* parent, int first, int last ```
void q_treeview_qbase_rows_removed(void* self, void* parent, int first, int last);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#verticalScrollbarValueChanged)
///
/// ``` QTreeView* self, int value ```
void q_treeview_vertical_scrollbar_value_changed(void* self, int value);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#verticalScrollbarValueChanged)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, int) ```
void q_treeview_on_vertical_scrollbar_value_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#verticalScrollbarValueChanged)
///
/// Base class method implementation
///
/// ``` QTreeView* self, int value ```
void q_treeview_qbase_vertical_scrollbar_value_changed(void* self, int value);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#scrollContentsBy)
///
/// ``` QTreeView* self, int dx, int dy ```
void q_treeview_scroll_contents_by(void* self, int dx, int dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#scrollContentsBy)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, int, int) ```
void q_treeview_on_scroll_contents_by(void* self, void (*slot)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#scrollContentsBy)
///
/// Base class method implementation
///
/// ``` QTreeView* self, int dx, int dy ```
void q_treeview_qbase_scroll_contents_by(void* self, int dx, int dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowsInserted)
///
/// ``` QTreeView* self, QModelIndex* parent, int start, int end ```
void q_treeview_rows_inserted(void* self, void* parent, int start, int end);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowsInserted)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QModelIndex*, int, int) ```
void q_treeview_on_rows_inserted(void* self, void (*slot)(void*, void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowsInserted)
///
/// Base class method implementation
///
/// ``` QTreeView* self, QModelIndex* parent, int start, int end ```
void q_treeview_qbase_rows_inserted(void* self, void* parent, int start, int end);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowsAboutToBeRemoved)
///
/// ``` QTreeView* self, QModelIndex* parent, int start, int end ```
void q_treeview_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowsAboutToBeRemoved)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QModelIndex*, int, int) ```
void q_treeview_on_rows_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowsAboutToBeRemoved)
///
/// Base class method implementation
///
/// ``` QTreeView* self, QModelIndex* parent, int start, int end ```
void q_treeview_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#moveCursor)
///
/// ``` QTreeView* self, enum QAbstractItemView__CursorAction cursorAction, int modifiers ```
QModelIndex* q_treeview_move_cursor(void* self, int64_t cursorAction, int64_t modifiers);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#moveCursor)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, QModelIndex* (*slot)(QTreeView*, enum QAbstractItemView__CursorAction, int) ```
void q_treeview_on_move_cursor(void* self, QModelIndex* (*slot)(void*, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#moveCursor)
///
/// Base class method implementation
///
/// ``` QTreeView* self, enum QAbstractItemView__CursorAction cursorAction, int modifiers ```
QModelIndex* q_treeview_qbase_move_cursor(void* self, int64_t cursorAction, int64_t modifiers);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#horizontalOffset)
///
/// ``` QTreeView* self ```
int32_t q_treeview_horizontal_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#horizontalOffset)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, int32_t (*slot)() ```
void q_treeview_on_horizontal_offset(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#horizontalOffset)
///
/// Base class method implementation
///
/// ``` QTreeView* self ```
int32_t q_treeview_qbase_horizontal_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#verticalOffset)
///
/// ``` QTreeView* self ```
int32_t q_treeview_vertical_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#verticalOffset)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, int32_t (*slot)() ```
void q_treeview_on_vertical_offset(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#verticalOffset)
///
/// Base class method implementation
///
/// ``` QTreeView* self ```
int32_t q_treeview_qbase_vertical_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setSelection)
///
/// ``` QTreeView* self, QRect* rect, int command ```
void q_treeview_set_selection(void* self, void* rect, int64_t command);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setSelection)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QRect*, int) ```
void q_treeview_on_set_selection(void* self, void (*slot)(void*, void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#setSelection)
///
/// Base class method implementation
///
/// ``` QTreeView* self, QRect* rect, int command ```
void q_treeview_qbase_set_selection(void* self, void* rect, int64_t command);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#visualRegionForSelection)
///
/// ``` QTreeView* self, QItemSelection* selection ```
QRegion* q_treeview_visual_region_for_selection(void* self, void* selection);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#visualRegionForSelection)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, QRegion* (*slot)(QTreeView*, QItemSelection*) ```
void q_treeview_on_visual_region_for_selection(void* self, QRegion* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#visualRegionForSelection)
///
/// Base class method implementation
///
/// ``` QTreeView* self, QItemSelection* selection ```
QRegion* q_treeview_qbase_visual_region_for_selection(void* self, void* selection);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#selectedIndexes)
///
/// ``` QTreeView* self ```
libqt_list /* of QModelIndex* */ q_treeview_selected_indexes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#selectedIndexes)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_treeview_on_selected_indexes(void* self, libqt_list /* of QModelIndex* */ (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#selectedIndexes)
///
/// Base class method implementation
///
/// ``` QTreeView* self ```
libqt_list /* of QModelIndex* */ q_treeview_qbase_selected_indexes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#changeEvent)
///
/// ``` QTreeView* self, QEvent* event ```
void q_treeview_change_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#changeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QEvent*) ```
void q_treeview_on_change_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#changeEvent)
///
/// Base class method implementation
///
/// ``` QTreeView* self, QEvent* event ```
void q_treeview_qbase_change_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#timerEvent)
///
/// ``` QTreeView* self, QTimerEvent* event ```
void q_treeview_timer_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QTimerEvent*) ```
void q_treeview_on_timer_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#timerEvent)
///
/// Base class method implementation
///
/// ``` QTreeView* self, QTimerEvent* event ```
void q_treeview_qbase_timer_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#paintEvent)
///
/// ``` QTreeView* self, QPaintEvent* event ```
void q_treeview_paint_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QPaintEvent*) ```
void q_treeview_on_paint_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#paintEvent)
///
/// Base class method implementation
///
/// ``` QTreeView* self, QPaintEvent* event ```
void q_treeview_qbase_paint_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#drawTree)
///
/// ``` QTreeView* self, QPainter* painter, QRegion* region ```
void q_treeview_draw_tree(void* self, void* painter, void* region);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#drawTree)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QPainter*, QRegion*) ```
void q_treeview_on_draw_tree(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#drawTree)
///
/// Base class method implementation
///
/// ``` QTreeView* self, QPainter* painter, QRegion* region ```
void q_treeview_qbase_draw_tree(void* self, void* painter, void* region);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#drawRow)
///
/// ``` QTreeView* self, QPainter* painter, QStyleOptionViewItem* options, QModelIndex* index ```
void q_treeview_draw_row(void* self, void* painter, void* options, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#drawRow)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QPainter*, QStyleOptionViewItem*, QModelIndex*) ```
void q_treeview_on_draw_row(void* self, void (*slot)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#drawRow)
///
/// Base class method implementation
///
/// ``` QTreeView* self, QPainter* painter, QStyleOptionViewItem* options, QModelIndex* index ```
void q_treeview_qbase_draw_row(void* self, void* painter, void* options, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#drawBranches)
///
/// ``` QTreeView* self, QPainter* painter, QRect* rect, QModelIndex* index ```
void q_treeview_draw_branches(void* self, void* painter, void* rect, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#drawBranches)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QPainter*, QRect*, QModelIndex*) ```
void q_treeview_on_draw_branches(void* self, void (*slot)(void*, void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#drawBranches)
///
/// Base class method implementation
///
/// ``` QTreeView* self, QPainter* painter, QRect* rect, QModelIndex* index ```
void q_treeview_qbase_draw_branches(void* self, void* painter, void* rect, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mousePressEvent)
///
/// ``` QTreeView* self, QMouseEvent* event ```
void q_treeview_mouse_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QMouseEvent*) ```
void q_treeview_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mousePressEvent)
///
/// Base class method implementation
///
/// ``` QTreeView* self, QMouseEvent* event ```
void q_treeview_qbase_mouse_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mouseReleaseEvent)
///
/// ``` QTreeView* self, QMouseEvent* event ```
void q_treeview_mouse_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QMouseEvent*) ```
void q_treeview_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// ``` QTreeView* self, QMouseEvent* event ```
void q_treeview_qbase_mouse_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mouseDoubleClickEvent)
///
/// ``` QTreeView* self, QMouseEvent* event ```
void q_treeview_mouse_double_click_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mouseDoubleClickEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QMouseEvent*) ```
void q_treeview_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mouseDoubleClickEvent)
///
/// Base class method implementation
///
/// ``` QTreeView* self, QMouseEvent* event ```
void q_treeview_qbase_mouse_double_click_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mouseMoveEvent)
///
/// ``` QTreeView* self, QMouseEvent* event ```
void q_treeview_mouse_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QMouseEvent*) ```
void q_treeview_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// ``` QTreeView* self, QMouseEvent* event ```
void q_treeview_qbase_mouse_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#keyPressEvent)
///
/// ``` QTreeView* self, QKeyEvent* event ```
void q_treeview_key_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QKeyEvent*) ```
void q_treeview_on_key_press_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#keyPressEvent)
///
/// Base class method implementation
///
/// ``` QTreeView* self, QKeyEvent* event ```
void q_treeview_qbase_key_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#dragMoveEvent)
///
/// ``` QTreeView* self, QDragMoveEvent* event ```
void q_treeview_drag_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#dragMoveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QDragMoveEvent*) ```
void q_treeview_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#dragMoveEvent)
///
/// Base class method implementation
///
/// ``` QTreeView* self, QDragMoveEvent* event ```
void q_treeview_qbase_drag_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#viewportEvent)
///
/// ``` QTreeView* self, QEvent* event ```
bool q_treeview_viewport_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#viewportEvent)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, bool (*slot)(QTreeView*, QEvent*) ```
void q_treeview_on_viewport_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#viewportEvent)
///
/// Base class method implementation
///
/// ``` QTreeView* self, QEvent* event ```
bool q_treeview_qbase_viewport_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#updateGeometries)
///
/// ``` QTreeView* self ```
void q_treeview_update_geometries(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#updateGeometries)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)() ```
void q_treeview_on_update_geometries(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#updateGeometries)
///
/// Base class method implementation
///
/// ``` QTreeView* self ```
void q_treeview_qbase_update_geometries(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#viewportSizeHint)
///
/// ``` QTreeView* self ```
QSize* q_treeview_viewport_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#viewportSizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, QSize* (*slot)() ```
void q_treeview_on_viewport_size_hint(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#viewportSizeHint)
///
/// Base class method implementation
///
/// ``` QTreeView* self ```
QSize* q_treeview_qbase_viewport_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#sizeHintForColumn)
///
/// ``` QTreeView* self, int column ```
int32_t q_treeview_size_hint_for_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#sizeHintForColumn)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, int32_t (*slot)(QTreeView*, int) ```
void q_treeview_on_size_hint_for_column(void* self, int32_t (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#sizeHintForColumn)
///
/// Base class method implementation
///
/// ``` QTreeView* self, int column ```
int32_t q_treeview_qbase_size_hint_for_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indexRowSizeHint)
///
/// ``` QTreeView* self, QModelIndex* index ```
int32_t q_treeview_index_row_size_hint(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indexRowSizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, int32_t (*slot)(QTreeView*, QModelIndex*) ```
void q_treeview_on_index_row_size_hint(void* self, int32_t (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#indexRowSizeHint)
///
/// Base class method implementation
///
/// ``` QTreeView* self, QModelIndex* index ```
int32_t q_treeview_qbase_index_row_size_hint(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowHeight)
///
/// ``` QTreeView* self, QModelIndex* index ```
int32_t q_treeview_row_height(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowHeight)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, int32_t (*slot)(QTreeView*, QModelIndex*) ```
void q_treeview_on_row_height(void* self, int32_t (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#rowHeight)
///
/// Base class method implementation
///
/// ``` QTreeView* self, QModelIndex* index ```
int32_t q_treeview_qbase_row_height(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#horizontalScrollbarAction)
///
/// ``` QTreeView* self, int action ```
void q_treeview_horizontal_scrollbar_action(void* self, int action);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#horizontalScrollbarAction)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, int) ```
void q_treeview_on_horizontal_scrollbar_action(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#horizontalScrollbarAction)
///
/// Base class method implementation
///
/// ``` QTreeView* self, int action ```
void q_treeview_qbase_horizontal_scrollbar_action(void* self, int action);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isIndexHidden)
///
/// ``` QTreeView* self, QModelIndex* index ```
bool q_treeview_is_index_hidden(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isIndexHidden)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, bool (*slot)(QTreeView*, QModelIndex*) ```
void q_treeview_on_is_index_hidden(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#isIndexHidden)
///
/// Base class method implementation
///
/// ``` QTreeView* self, QModelIndex* index ```
bool q_treeview_qbase_is_index_hidden(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#selectionChanged)
///
/// ``` QTreeView* self, QItemSelection* selected, QItemSelection* deselected ```
void q_treeview_selection_changed(void* self, void* selected, void* deselected);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#selectionChanged)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QItemSelection*, QItemSelection*) ```
void q_treeview_on_selection_changed(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#selectionChanged)
///
/// Base class method implementation
///
/// ``` QTreeView* self, QItemSelection* selected, QItemSelection* deselected ```
void q_treeview_qbase_selection_changed(void* self, void* selected, void* deselected);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#currentChanged)
///
/// ``` QTreeView* self, QModelIndex* current, QModelIndex* previous ```
void q_treeview_current_changed(void* self, void* current, void* previous);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#currentChanged)
///
/// Allows for overriding the related default method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QModelIndex*, QModelIndex*) ```
void q_treeview_on_current_changed(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#currentChanged)
///
/// Base class method implementation
///
/// ``` QTreeView* self, QModelIndex* current, QModelIndex* previous ```
void q_treeview_qbase_current_changed(void* self, void* current, void* previous);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_treeview_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_treeview_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#expandRecursively)
///
/// ``` QTreeView* self, QModelIndex* index, int depth ```
void q_treeview_expand_recursively2(void* self, void* index, int depth);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#model)
///
/// ``` QTreeView* self ```
QAbstractItemModel* q_treeview_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
///
/// ``` QTreeView* self ```
QItemSelectionModel* q_treeview_selection_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
///
/// ``` QTreeView* self, QAbstractItemDelegate* delegate ```
void q_treeview_set_item_delegate(void* self, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QTreeView* self ```
QAbstractItemDelegate* q_treeview_item_delegate(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
///
/// ``` QTreeView* self, enum QAbstractItemView__SelectionMode mode ```
void q_treeview_set_selection_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
///
/// ``` QTreeView* self ```
int64_t q_treeview_selection_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
///
/// ``` QTreeView* self, enum QAbstractItemView__SelectionBehavior behavior ```
void q_treeview_set_selection_behavior(void* self, int64_t behavior);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
///
/// ``` QTreeView* self ```
int64_t q_treeview_selection_behavior(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
///
/// ``` QTreeView* self ```
QModelIndex* q_treeview_current_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
///
/// ``` QTreeView* self ```
QModelIndex* q_treeview_root_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
///
/// ``` QTreeView* self, int triggers ```
void q_treeview_set_edit_triggers(void* self, int64_t triggers);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
///
/// ``` QTreeView* self ```
int64_t q_treeview_edit_triggers(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
///
/// ``` QTreeView* self, enum QAbstractItemView__ScrollMode mode ```
void q_treeview_set_vertical_scroll_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
///
/// ``` QTreeView* self ```
int64_t q_treeview_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
///
/// ``` QTreeView* self ```
void q_treeview_reset_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
///
/// ``` QTreeView* self, enum QAbstractItemView__ScrollMode mode ```
void q_treeview_set_horizontal_scroll_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
///
/// ``` QTreeView* self ```
int64_t q_treeview_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
///
/// ``` QTreeView* self ```
void q_treeview_reset_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
///
/// ``` QTreeView* self, bool enable ```
void q_treeview_set_auto_scroll(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
///
/// ``` QTreeView* self ```
bool q_treeview_has_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
///
/// ``` QTreeView* self, int margin ```
void q_treeview_set_auto_scroll_margin(void* self, int margin);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
///
/// ``` QTreeView* self ```
int32_t q_treeview_auto_scroll_margin(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
///
/// ``` QTreeView* self, bool enable ```
void q_treeview_set_tab_key_navigation(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
///
/// ``` QTreeView* self ```
bool q_treeview_tab_key_navigation(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
///
/// ``` QTreeView* self, bool enable ```
void q_treeview_set_drop_indicator_shown(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
///
/// ``` QTreeView* self ```
bool q_treeview_show_drop_indicator(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
///
/// ``` QTreeView* self, bool enable ```
void q_treeview_set_drag_enabled(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
///
/// ``` QTreeView* self ```
bool q_treeview_drag_enabled(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
///
/// ``` QTreeView* self, bool overwrite ```
void q_treeview_set_drag_drop_overwrite_mode(void* self, bool overwrite);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
///
/// ``` QTreeView* self ```
bool q_treeview_drag_drop_overwrite_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
///
/// ``` QTreeView* self, enum QAbstractItemView__DragDropMode behavior ```
void q_treeview_set_drag_drop_mode(void* self, int64_t behavior);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
///
/// ``` QTreeView* self ```
int64_t q_treeview_drag_drop_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
///
/// ``` QTreeView* self, enum Qt__DropAction dropAction ```
void q_treeview_set_default_drop_action(void* self, int64_t dropAction);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
///
/// ``` QTreeView* self ```
int64_t q_treeview_default_drop_action(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
///
/// ``` QTreeView* self, bool enable ```
void q_treeview_set_alternating_row_colors(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
///
/// ``` QTreeView* self ```
bool q_treeview_alternating_row_colors(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
///
/// ``` QTreeView* self, QSize* size ```
void q_treeview_set_icon_size(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
///
/// ``` QTreeView* self ```
QSize* q_treeview_icon_size(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
///
/// ``` QTreeView* self, enum Qt__TextElideMode mode ```
void q_treeview_set_text_elide_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
///
/// ``` QTreeView* self ```
int64_t q_treeview_text_elide_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
///
/// ``` QTreeView* self, QModelIndex* index ```
QSize* q_treeview_size_hint_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#openPersistentEditor)
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_open_persistent_editor(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closePersistentEditor)
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_close_persistent_editor(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#isPersistentEditorOpen)
///
/// ``` QTreeView* self, QModelIndex* index ```
bool q_treeview_is_persistent_editor_open(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
///
/// ``` QTreeView* self, QModelIndex* index, QWidget* widget ```
void q_treeview_set_index_widget(void* self, void* index, void* widget);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
///
/// ``` QTreeView* self, QModelIndex* index ```
QWidget* q_treeview_index_widget(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
///
/// ``` QTreeView* self, int row, QAbstractItemDelegate* delegate ```
void q_treeview_set_item_delegate_for_row(void* self, int row, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
///
/// ``` QTreeView* self, int row ```
QAbstractItemDelegate* q_treeview_item_delegate_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
///
/// ``` QTreeView* self, int column, QAbstractItemDelegate* delegate ```
void q_treeview_set_item_delegate_for_column(void* self, int column, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
///
/// ``` QTreeView* self, int column ```
QAbstractItemDelegate* q_treeview_item_delegate_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QTreeView* self, QModelIndex* index ```
QAbstractItemDelegate* q_treeview_item_delegate2(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_edit(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
///
/// ``` QTreeView* self ```
void q_treeview_clear_selection(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_set_current_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
///
/// ``` QTreeView* self ```
void q_treeview_scroll_to_top(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
///
/// ``` QTreeView* self ```
void q_treeview_scroll_to_bottom(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#update)
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_update(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_pressed(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// ``` QTreeView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_treeview_on_pressed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// ``` QTreeView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_treeview_on_clicked(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_double_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// ``` QTreeView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_treeview_on_double_clicked(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_activated(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// ``` QTreeView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_treeview_on_activated(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// ``` QTreeView* self, QModelIndex* index ```
void q_treeview_entered(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// ``` QTreeView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_treeview_on_entered(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// ``` QTreeView* self ```
void q_treeview_viewport_entered(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// ``` QTreeView* self, void (*slot)(QAbstractItemView*) ```
void q_treeview_on_viewport_entered(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// ``` QTreeView* self, QSize* size ```
void q_treeview_icon_size_changed(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// ``` QTreeView* self, void (*slot)(QAbstractItemView*, QSize*) ```
void q_treeview_on_icon_size_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// ``` QTreeView* self ```
int64_t q_treeview_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// ``` QTreeView* self, enum Qt__ScrollBarPolicy verticalScrollBarPolicy ```
void q_treeview_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// ``` QTreeView* self ```
QScrollBar* q_treeview_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// ``` QTreeView* self, QScrollBar* scrollbar ```
void q_treeview_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// ``` QTreeView* self ```
int64_t q_treeview_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// ``` QTreeView* self, enum Qt__ScrollBarPolicy horizontalScrollBarPolicy ```
void q_treeview_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// ``` QTreeView* self ```
QScrollBar* q_treeview_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// ``` QTreeView* self, QScrollBar* scrollbar ```
void q_treeview_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// ``` QTreeView* self ```
QWidget* q_treeview_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// ``` QTreeView* self, QWidget* widget ```
void q_treeview_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// ``` QTreeView* self, QWidget* widget, int alignment ```
void q_treeview_add_scroll_bar_widget(void* self, void* widget, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// ``` QTreeView* self, int alignment ```
libqt_list /* of QWidget* */ q_treeview_scroll_bar_widgets(void* self, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// ``` QTreeView* self ```
QWidget* q_treeview_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// ``` QTreeView* self, QWidget* widget ```
void q_treeview_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// ``` QTreeView* self ```
QSize* q_treeview_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// ``` QTreeView* self ```
int64_t q_treeview_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// ``` QTreeView* self, enum QAbstractScrollArea__SizeAdjustPolicy policy ```
void q_treeview_set_size_adjust_policy(void* self, int64_t policy);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QTreeView* self ```
int32_t q_treeview_frame_style(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QTreeView* self, int frameStyle ```
void q_treeview_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QTreeView* self ```
int32_t q_treeview_frame_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QTreeView* self ```
int64_t q_treeview_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QTreeView* self, enum QFrame__Shape frameShape ```
void q_treeview_set_frame_shape(void* self, int64_t frameShape);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QTreeView* self ```
int64_t q_treeview_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QTreeView* self, enum QFrame__Shadow frameShadow ```
void q_treeview_set_frame_shadow(void* self, int64_t frameShadow);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QTreeView* self ```
int32_t q_treeview_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QTreeView* self, int lineWidth ```
void q_treeview_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QTreeView* self ```
int32_t q_treeview_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QTreeView* self, int midLineWidth ```
void q_treeview_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QTreeView* self ```
QRect* q_treeview_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QTreeView* self, QRect* frameRect ```
void q_treeview_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QTreeView* self ```
uintptr_t q_treeview_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QTreeView* self ```
void q_treeview_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QTreeView* self ```
uintptr_t q_treeview_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QTreeView* self ```
uintptr_t q_treeview_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QTreeView* self ```
QStyle* q_treeview_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QTreeView* self, QStyle* style ```
void q_treeview_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QTreeView* self ```
bool q_treeview_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QTreeView* self ```
bool q_treeview_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QTreeView* self ```
bool q_treeview_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QTreeView* self ```
int64_t q_treeview_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QTreeView* self, enum Qt__WindowModality windowModality ```
void q_treeview_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QTreeView* self ```
bool q_treeview_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QTreeView* self, QWidget* param1 ```
bool q_treeview_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QTreeView* self, bool enabled ```
void q_treeview_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QTreeView* self, bool disabled ```
void q_treeview_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QTreeView* self, bool windowModified ```
void q_treeview_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QTreeView* self ```
QRect* q_treeview_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QTreeView* self ```
const QRect* q_treeview_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QTreeView* self ```
QRect* q_treeview_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QTreeView* self ```
int32_t q_treeview_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QTreeView* self ```
int32_t q_treeview_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QTreeView* self ```
QPoint* q_treeview_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QTreeView* self ```
QSize* q_treeview_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QTreeView* self ```
QSize* q_treeview_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QTreeView* self ```
int32_t q_treeview_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QTreeView* self ```
int32_t q_treeview_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QTreeView* self ```
QRect* q_treeview_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QTreeView* self ```
QRect* q_treeview_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QTreeView* self ```
QRegion* q_treeview_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QTreeView* self ```
QSize* q_treeview_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QTreeView* self ```
QSize* q_treeview_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QTreeView* self ```
int32_t q_treeview_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QTreeView* self ```
int32_t q_treeview_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QTreeView* self ```
int32_t q_treeview_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QTreeView* self ```
int32_t q_treeview_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QTreeView* self, QSize* minimumSize ```
void q_treeview_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QTreeView* self, int minw, int minh ```
void q_treeview_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QTreeView* self, QSize* maximumSize ```
void q_treeview_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QTreeView* self, int maxw, int maxh ```
void q_treeview_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QTreeView* self, int minw ```
void q_treeview_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QTreeView* self, int minh ```
void q_treeview_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QTreeView* self, int maxw ```
void q_treeview_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QTreeView* self, int maxh ```
void q_treeview_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QTreeView* self ```
QSize* q_treeview_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QTreeView* self, QSize* sizeIncrement ```
void q_treeview_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QTreeView* self, int w, int h ```
void q_treeview_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QTreeView* self ```
QSize* q_treeview_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QTreeView* self, QSize* baseSize ```
void q_treeview_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QTreeView* self, int basew, int baseh ```
void q_treeview_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QTreeView* self, QSize* fixedSize ```
void q_treeview_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QTreeView* self, int w, int h ```
void q_treeview_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QTreeView* self, int w ```
void q_treeview_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QTreeView* self, int h ```
void q_treeview_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QTreeView* self, QPointF* param1 ```
QPointF* q_treeview_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QTreeView* self, QPoint* param1 ```
QPoint* q_treeview_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QTreeView* self, QPointF* param1 ```
QPointF* q_treeview_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QTreeView* self, QPoint* param1 ```
QPoint* q_treeview_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QTreeView* self, QPointF* param1 ```
QPointF* q_treeview_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QTreeView* self, QPoint* param1 ```
QPoint* q_treeview_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QTreeView* self, QPointF* param1 ```
QPointF* q_treeview_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QTreeView* self, QPoint* param1 ```
QPoint* q_treeview_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QTreeView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_treeview_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QTreeView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_treeview_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QTreeView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_treeview_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QTreeView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_treeview_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QTreeView* self ```
QWidget* q_treeview_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QTreeView* self ```
QWidget* q_treeview_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QTreeView* self ```
QWidget* q_treeview_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QTreeView* self ```
const QPalette* q_treeview_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QTreeView* self, QPalette* palette ```
void q_treeview_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QTreeView* self, enum QPalette__ColorRole backgroundRole ```
void q_treeview_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QTreeView* self ```
int64_t q_treeview_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QTreeView* self, enum QPalette__ColorRole foregroundRole ```
void q_treeview_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QTreeView* self ```
int64_t q_treeview_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QTreeView* self ```
const QFont* q_treeview_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QTreeView* self, QFont* font ```
void q_treeview_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QTreeView* self ```
QFontMetrics* q_treeview_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QTreeView* self ```
QFontInfo* q_treeview_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QTreeView* self ```
QCursor* q_treeview_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QTreeView* self, QCursor* cursor ```
void q_treeview_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QTreeView* self ```
void q_treeview_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QTreeView* self, bool enable ```
void q_treeview_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QTreeView* self ```
bool q_treeview_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QTreeView* self ```
bool q_treeview_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QTreeView* self, bool enable ```
void q_treeview_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QTreeView* self ```
bool q_treeview_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QTreeView* self, QBitmap* mask ```
void q_treeview_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QTreeView* self, QRegion* mask ```
void q_treeview_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QTreeView* self ```
QRegion* q_treeview_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QTreeView* self ```
void q_treeview_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTreeView* self, QPaintDevice* target ```
void q_treeview_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTreeView* self, QPainter* painter ```
void q_treeview_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QTreeView* self ```
QPixmap* q_treeview_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QTreeView* self ```
QGraphicsEffect* q_treeview_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QTreeView* self, QGraphicsEffect* effect ```
void q_treeview_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QTreeView* self, enum Qt__GestureType typeVal ```
void q_treeview_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QTreeView* self, enum Qt__GestureType typeVal ```
void q_treeview_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QTreeView* self, const char* windowTitle ```
void q_treeview_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QTreeView* self, const char* styleSheet ```
void q_treeview_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QTreeView* self ```
const char* q_treeview_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QTreeView* self ```
const char* q_treeview_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QTreeView* self, QIcon* icon ```
void q_treeview_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QTreeView* self ```
QIcon* q_treeview_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QTreeView* self, const char* windowIconText ```
void q_treeview_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QTreeView* self ```
const char* q_treeview_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QTreeView* self, const char* windowRole ```
void q_treeview_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QTreeView* self ```
const char* q_treeview_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QTreeView* self, const char* filePath ```
void q_treeview_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QTreeView* self ```
const char* q_treeview_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QTreeView* self, double level ```
void q_treeview_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QTreeView* self ```
double q_treeview_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QTreeView* self ```
bool q_treeview_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QTreeView* self, const char* toolTip ```
void q_treeview_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QTreeView* self ```
const char* q_treeview_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QTreeView* self, int msec ```
void q_treeview_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QTreeView* self ```
int32_t q_treeview_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QTreeView* self, const char* statusTip ```
void q_treeview_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QTreeView* self ```
const char* q_treeview_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QTreeView* self, const char* whatsThis ```
void q_treeview_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QTreeView* self ```
const char* q_treeview_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QTreeView* self ```
const char* q_treeview_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QTreeView* self, const char* name ```
void q_treeview_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QTreeView* self ```
const char* q_treeview_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QTreeView* self, const char* description ```
void q_treeview_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QTreeView* self, enum Qt__LayoutDirection direction ```
void q_treeview_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QTreeView* self ```
int64_t q_treeview_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QTreeView* self ```
void q_treeview_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QTreeView* self, QLocale* locale ```
void q_treeview_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QTreeView* self ```
QLocale* q_treeview_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QTreeView* self ```
void q_treeview_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QTreeView* self ```
bool q_treeview_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QTreeView* self ```
bool q_treeview_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QTreeView* self ```
void q_treeview_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QTreeView* self ```
bool q_treeview_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QTreeView* self ```
void q_treeview_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QTreeView* self ```
void q_treeview_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QTreeView* self, enum Qt__FocusReason reason ```
void q_treeview_set_focus2(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QTreeView* self ```
int64_t q_treeview_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QTreeView* self, enum Qt__FocusPolicy policy ```
void q_treeview_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QTreeView* self ```
bool q_treeview_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_treeview_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QTreeView* self, QWidget* focusProxy ```
void q_treeview_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QTreeView* self ```
QWidget* q_treeview_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QTreeView* self ```
int64_t q_treeview_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QTreeView* self, enum Qt__ContextMenuPolicy policy ```
void q_treeview_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QTreeView* self ```
void q_treeview_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QTreeView* self, QCursor* param1 ```
void q_treeview_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QTreeView* self ```
void q_treeview_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QTreeView* self ```
void q_treeview_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QTreeView* self ```
void q_treeview_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QTreeView* self, QKeySequence* key ```
int32_t q_treeview_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QTreeView* self, int id ```
void q_treeview_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QTreeView* self, int id ```
void q_treeview_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QTreeView* self, int id ```
void q_treeview_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_treeview_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_treeview_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QTreeView* self ```
bool q_treeview_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QTreeView* self, bool enable ```
void q_treeview_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QTreeView* self ```
QGraphicsProxyWidget* q_treeview_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTreeView* self ```
void q_treeview_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTreeView* self, int x, int y, int w, int h ```
void q_treeview_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTreeView* self, QRect* param1 ```
void q_treeview_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTreeView* self, QRegion* param1 ```
void q_treeview_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTreeView* self, int x, int y, int w, int h ```
void q_treeview_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTreeView* self, QRect* param1 ```
void q_treeview_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTreeView* self, QRegion* param1 ```
void q_treeview_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QTreeView* self, bool hidden ```
void q_treeview_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QTreeView* self ```
void q_treeview_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QTreeView* self ```
void q_treeview_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QTreeView* self ```
void q_treeview_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QTreeView* self ```
void q_treeview_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QTreeView* self ```
void q_treeview_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QTreeView* self ```
void q_treeview_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QTreeView* self ```
bool q_treeview_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QTreeView* self ```
void q_treeview_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QTreeView* self ```
void q_treeview_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QTreeView* self, QWidget* param1 ```
void q_treeview_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QTreeView* self, int x, int y ```
void q_treeview_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QTreeView* self, QPoint* param1 ```
void q_treeview_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QTreeView* self, int w, int h ```
void q_treeview_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QTreeView* self, QSize* param1 ```
void q_treeview_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QTreeView* self, int x, int y, int w, int h ```
void q_treeview_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QTreeView* self, QRect* geometry ```
void q_treeview_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QTreeView* self ```
char* q_treeview_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QTreeView* self, const char* geometry ```
bool q_treeview_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QTreeView* self ```
void q_treeview_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QTreeView* self ```
bool q_treeview_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QTreeView* self, QWidget* param1 ```
bool q_treeview_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QTreeView* self ```
bool q_treeview_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QTreeView* self ```
bool q_treeview_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QTreeView* self ```
bool q_treeview_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QTreeView* self ```
bool q_treeview_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QTreeView* self ```
int64_t q_treeview_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QTreeView* self, int state ```
void q_treeview_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QTreeView* self, int state ```
void q_treeview_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QTreeView* self ```
QSizePolicy* q_treeview_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QTreeView* self, QSizePolicy* sizePolicy ```
void q_treeview_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QTreeView* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_treeview_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QTreeView* self ```
QRegion* q_treeview_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QTreeView* self, int left, int top, int right, int bottom ```
void q_treeview_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QTreeView* self, QMargins* margins ```
void q_treeview_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QTreeView* self ```
QMargins* q_treeview_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QTreeView* self ```
QRect* q_treeview_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QTreeView* self ```
QLayout* q_treeview_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QTreeView* self, QLayout* layout ```
void q_treeview_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QTreeView* self ```
void q_treeview_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QTreeView* self, QWidget* parent ```
void q_treeview_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QTreeView* self, QWidget* parent, int f ```
void q_treeview_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QTreeView* self, int dx, int dy ```
void q_treeview_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QTreeView* self, int dx, int dy, QRect* param3 ```
void q_treeview_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QTreeView* self ```
QWidget* q_treeview_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QTreeView* self ```
QWidget* q_treeview_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QTreeView* self ```
QWidget* q_treeview_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QTreeView* self ```
bool q_treeview_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QTreeView* self, bool on ```
void q_treeview_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTreeView* self, QAction* action ```
void q_treeview_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QTreeView* self, libqt_list /* of QAction* */ actions ```
void q_treeview_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QTreeView* self, QAction* before, libqt_list /* of QAction* */ actions ```
void q_treeview_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QTreeView* self, QAction* before, QAction* action ```
void q_treeview_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QTreeView* self, QAction* action ```
void q_treeview_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QTreeView* self ```
libqt_list /* of QAction* */ q_treeview_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTreeView* self, const char* text ```
QAction* q_treeview_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTreeView* self, QIcon* icon, const char* text ```
QAction* q_treeview_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTreeView* self, const char* text, QKeySequence* shortcut ```
QAction* q_treeview_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTreeView* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_treeview_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QTreeView* self ```
QWidget* q_treeview_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QTreeView* self, int typeVal ```
void q_treeview_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QTreeView* self ```
int64_t q_treeview_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QTreeView* self, enum Qt__WindowType param1 ```
void q_treeview_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QTreeView* self, int typeVal ```
void q_treeview_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QTreeView* self ```
int64_t q_treeview_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_treeview_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QTreeView* self, int x, int y ```
QWidget* q_treeview_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QTreeView* self, QPoint* p ```
QWidget* q_treeview_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QTreeView* self, QPointF* p ```
QWidget* q_treeview_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QTreeView* self, enum Qt__WidgetAttribute param1 ```
void q_treeview_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QTreeView* self, enum Qt__WidgetAttribute param1 ```
bool q_treeview_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QTreeView* self ```
void q_treeview_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QTreeView* self, QWidget* child ```
bool q_treeview_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QTreeView* self ```
bool q_treeview_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QTreeView* self, bool enabled ```
void q_treeview_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QTreeView* self ```
QBackingStore* q_treeview_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QTreeView* self ```
QWindow* q_treeview_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QTreeView* self ```
QScreen* q_treeview_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QTreeView* self, QScreen* screen ```
void q_treeview_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_treeview_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QTreeView* self, const char* title ```
void q_treeview_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QTreeView* self, void (*slot)(QWidget*, const char*) ```
void q_treeview_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QTreeView* self, QIcon* icon ```
void q_treeview_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QTreeView* self, void (*slot)(QWidget*, QIcon*) ```
void q_treeview_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QTreeView* self, const char* iconText ```
void q_treeview_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QTreeView* self, void (*slot)(QWidget*, const char*) ```
void q_treeview_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QTreeView* self, QPoint* pos ```
void q_treeview_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QTreeView* self, void (*slot)(QWidget*, QPoint*) ```
void q_treeview_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QTreeView* self ```
int64_t q_treeview_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QTreeView* self, int hints ```
void q_treeview_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTreeView* self, QPaintDevice* target, QPoint* targetOffset ```
void q_treeview_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTreeView* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_treeview_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTreeView* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_treeview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTreeView* self, QPainter* painter, QPoint* targetOffset ```
void q_treeview_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTreeView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_treeview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTreeView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_treeview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QTreeView* self, QRect* rectangle ```
QPixmap* q_treeview_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QTreeView* self, enum Qt__GestureType typeVal, int flags ```
void q_treeview_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QTreeView* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_treeview_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QTreeView* self, int id, bool enable ```
void q_treeview_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QTreeView* self, int id, bool enable ```
void q_treeview_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QTreeView* self, enum Qt__WindowType param1, bool on ```
void q_treeview_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QTreeView* self, enum Qt__WidgetAttribute param1, bool on ```
void q_treeview_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_treeview_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_treeview_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTreeView* self ```
const char* q_treeview_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTreeView* self, char* name ```
void q_treeview_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTreeView* self ```
bool q_treeview_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTreeView* self ```
bool q_treeview_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTreeView* self ```
bool q_treeview_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTreeView* self ```
bool q_treeview_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTreeView* self, bool b ```
bool q_treeview_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTreeView* self ```
QThread* q_treeview_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTreeView* self, QThread* thread ```
bool q_treeview_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTreeView* self, int interval ```
int32_t q_treeview_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTreeView* self, int id ```
void q_treeview_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTreeView* self, enum Qt__TimerId id ```
void q_treeview_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTreeView* self ```
libqt_list /* of QObject* */ q_treeview_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTreeView* self, QObject* filterObj ```
void q_treeview_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTreeView* self, QObject* obj ```
void q_treeview_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_treeview_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTreeView* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_treeview_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_treeview_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_treeview_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTreeView* self ```
void q_treeview_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTreeView* self ```
void q_treeview_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTreeView* self, const char* name, QVariant* value ```
bool q_treeview_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTreeView* self, const char* name ```
QVariant* q_treeview_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTreeView* self ```
const char** q_treeview_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTreeView* self ```
QBindingStorage* q_treeview_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTreeView* self ```
const QBindingStorage* q_treeview_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTreeView* self ```
void q_treeview_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTreeView* self, void (*slot)(QObject*) ```
void q_treeview_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTreeView* self ```
QObject* q_treeview_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTreeView* self, const char* classname ```
bool q_treeview_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTreeView* self ```
void q_treeview_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTreeView* self, QThread* thread, Disambiguated_t* param2 ```
bool q_treeview_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTreeView* self, int interval, enum Qt__TimerType timerType ```
int32_t q_treeview_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_treeview_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTreeView* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_treeview_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTreeView* self, QObject* param1 ```
void q_treeview_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTreeView* self, void (*slot)(QObject*, QObject*) ```
void q_treeview_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QTreeView* self ```
bool q_treeview_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QTreeView* self ```
int32_t q_treeview_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QTreeView* self ```
int32_t q_treeview_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QTreeView* self ```
int32_t q_treeview_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QTreeView* self ```
int32_t q_treeview_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QTreeView* self ```
int32_t q_treeview_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QTreeView* self ```
int32_t q_treeview_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QTreeView* self ```
double q_treeview_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QTreeView* self ```
double q_treeview_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QTreeView* self ```
int32_t q_treeview_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QTreeView* self ```
int32_t q_treeview_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_treeview_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// ``` enum QPaintDevice__PaintDeviceMetric metric, double value ```
int32_t q_treeview_encode_metric_f(int64_t metric, double value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, int row ```
int32_t q_treeview_size_hint_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, int row ```
int32_t q_treeview_qbase_size_hint_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, int32_t (*slot)(QTreeView*, int) ```
void q_treeview_on_size_hint_for_row(void* self, int32_t (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QModelIndex* index ```
QAbstractItemDelegate* q_treeview_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QModelIndex* index ```
QAbstractItemDelegate* q_treeview_qbase_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, QAbstractItemDelegate* (*slot)(QTreeView*, QModelIndex*) ```
void q_treeview_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, enum Qt__InputMethodQuery query ```
QVariant* q_treeview_input_method_query(void* self, int64_t query);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, enum Qt__InputMethodQuery query ```
QVariant* q_treeview_qbase_input_method_query(void* self, int64_t query);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, QVariant* (*slot)(QTreeView*, enum Qt__InputMethodQuery) ```
void q_treeview_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_qbase_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)() ```
void q_treeview_on_update_editor_data(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_qbase_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)() ```
void q_treeview_on_update_editor_geometries(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, int action ```
void q_treeview_vertical_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, int action ```
void q_treeview_qbase_vertical_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, int) ```
void q_treeview_on_vertical_scrollbar_action(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, int value ```
void q_treeview_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, int value ```
void q_treeview_qbase_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, int) ```
void q_treeview_on_horizontal_scrollbar_value_changed(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_treeview_close_editor(void* self, void* editor, int64_t hint);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_treeview_qbase_close_editor(void* self, void* editor, int64_t hint);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QWidget*, enum QAbstractItemDelegate__EndEditHint) ```
void q_treeview_on_close_editor(void* self, void (*slot)(void*, void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QWidget* editor ```
void q_treeview_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QWidget* editor ```
void q_treeview_qbase_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QWidget*) ```
void q_treeview_on_commit_data(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QObject* editor ```
void q_treeview_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QObject* editor ```
void q_treeview_qbase_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QObject*) ```
void q_treeview_on_editor_destroyed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_treeview_edit2(void* self, void* index, int64_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_treeview_qbase_edit2(void* self, void* index, int64_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, bool (*slot)(QTreeView*, QModelIndex*, enum QAbstractItemView__EditTrigger, QEvent*) ```
void q_treeview_on_edit2(void* self, bool (*slot)(void*, void*, int64_t, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QModelIndex* index, QEvent* event ```
int64_t q_treeview_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QModelIndex* index, QEvent* event ```
int64_t q_treeview_qbase_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, int64_t (*slot)(QTreeView*, QModelIndex*, QEvent*) ```
void q_treeview_on_selection_command(void* self, int64_t (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, int supportedActions ```
void q_treeview_start_drag(void* self, int64_t supportedActions);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, int supportedActions ```
void q_treeview_qbase_start_drag(void* self, int64_t supportedActions);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, int) ```
void q_treeview_on_start_drag(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QStyleOptionViewItem* option ```
void q_treeview_init_view_item_option(void* self, void* option);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QStyleOptionViewItem* option ```
void q_treeview_qbase_init_view_item_option(void* self, void* option);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QStyleOptionViewItem*) ```
void q_treeview_on_init_view_item_option(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, bool next ```
bool q_treeview_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, bool next ```
bool q_treeview_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, bool (*slot)(QTreeView*, bool) ```
void q_treeview_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QEvent* event ```
bool q_treeview_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QEvent* event ```
bool q_treeview_qbase_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, bool (*slot)(QTreeView*, QEvent*) ```
void q_treeview_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QDragEnterEvent* event ```
void q_treeview_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QDragEnterEvent* event ```
void q_treeview_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QDragEnterEvent*) ```
void q_treeview_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QDragLeaveEvent* event ```
void q_treeview_drag_leave_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QDragLeaveEvent* event ```
void q_treeview_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QDragLeaveEvent*) ```
void q_treeview_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QDropEvent* event ```
void q_treeview_drop_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QDropEvent* event ```
void q_treeview_qbase_drop_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QDropEvent*) ```
void q_treeview_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QFocusEvent* event ```
void q_treeview_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QFocusEvent* event ```
void q_treeview_qbase_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QFocusEvent*) ```
void q_treeview_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QFocusEvent* event ```
void q_treeview_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QFocusEvent* event ```
void q_treeview_qbase_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QFocusEvent*) ```
void q_treeview_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QResizeEvent* event ```
void q_treeview_resize_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QResizeEvent* event ```
void q_treeview_qbase_resize_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QResizeEvent*) ```
void q_treeview_on_resize_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QInputMethodEvent* event ```
void q_treeview_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QInputMethodEvent* event ```
void q_treeview_qbase_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QInputMethodEvent*) ```
void q_treeview_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QObject* object, QEvent* event ```
bool q_treeview_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QObject* object, QEvent* event ```
bool q_treeview_qbase_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, bool (*slot)(QTreeView*, QObject*, QEvent*) ```
void q_treeview_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
QSize* q_treeview_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
QSize* q_treeview_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, QSize* (*slot)() ```
void q_treeview_on_minimum_size_hint(void* self, QSize* (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
QSize* q_treeview_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
QSize* q_treeview_qbase_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, QSize* (*slot)() ```
void q_treeview_on_size_hint(void* self, QSize* (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QWidget* viewport ```
void q_treeview_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QWidget* viewport ```
void q_treeview_qbase_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QWidget*) ```
void q_treeview_on_setup_viewport(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QWheelEvent* param1 ```
void q_treeview_wheel_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QWheelEvent* param1 ```
void q_treeview_qbase_wheel_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QWheelEvent*) ```
void q_treeview_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QContextMenuEvent* param1 ```
void q_treeview_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QContextMenuEvent* param1 ```
void q_treeview_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QContextMenuEvent*) ```
void q_treeview_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QStyleOptionFrame* option ```
void q_treeview_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QStyleOptionFrame* option ```
void q_treeview_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QStyleOptionFrame*) ```
void q_treeview_on_init_style_option(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
int32_t q_treeview_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
int32_t q_treeview_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, int32_t (*slot)() ```
void q_treeview_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, bool visible ```
void q_treeview_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, bool visible ```
void q_treeview_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, bool) ```
void q_treeview_on_set_visible(void* self, void (*slot)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, int param1 ```
int32_t q_treeview_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, int param1 ```
int32_t q_treeview_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, int32_t (*slot)(QTreeView*, int) ```
void q_treeview_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
bool q_treeview_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
bool q_treeview_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, bool (*slot)() ```
void q_treeview_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
QPaintEngine* q_treeview_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
QPaintEngine* q_treeview_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, QPaintEngine* (*slot)() ```
void q_treeview_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QKeyEvent* event ```
void q_treeview_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QKeyEvent* event ```
void q_treeview_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QKeyEvent*) ```
void q_treeview_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QEnterEvent* event ```
void q_treeview_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QEnterEvent* event ```
void q_treeview_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QEnterEvent*) ```
void q_treeview_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QEvent* event ```
void q_treeview_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QEvent* event ```
void q_treeview_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QEvent*) ```
void q_treeview_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QMoveEvent* event ```
void q_treeview_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QMoveEvent* event ```
void q_treeview_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QMoveEvent*) ```
void q_treeview_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QCloseEvent* event ```
void q_treeview_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QCloseEvent* event ```
void q_treeview_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QCloseEvent*) ```
void q_treeview_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QTabletEvent* event ```
void q_treeview_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QTabletEvent* event ```
void q_treeview_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QTabletEvent*) ```
void q_treeview_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QActionEvent* event ```
void q_treeview_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QActionEvent* event ```
void q_treeview_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QActionEvent*) ```
void q_treeview_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QShowEvent* event ```
void q_treeview_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QShowEvent* event ```
void q_treeview_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QShowEvent*) ```
void q_treeview_on_show_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QHideEvent* event ```
void q_treeview_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QHideEvent* event ```
void q_treeview_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QHideEvent*) ```
void q_treeview_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, const char* eventType, void* message, intptr_t* result ```
bool q_treeview_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, const char* eventType, void* message, intptr_t* result ```
bool q_treeview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, bool (*slot)(QTreeView*, const char*, void*, intptr_t*) ```
void q_treeview_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_treeview_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_treeview_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, int32_t (*slot)(QTreeView*, enum QPaintDevice__PaintDeviceMetric) ```
void q_treeview_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QPainter* painter ```
void q_treeview_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QPainter* painter ```
void q_treeview_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QPainter*) ```
void q_treeview_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QPoint* offset ```
QPaintDevice* q_treeview_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QPoint* offset ```
QPaintDevice* q_treeview_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, QPaintDevice* (*slot)(QTreeView*, QPoint*) ```
void q_treeview_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
QPainter* q_treeview_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
QPainter* q_treeview_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, QPainter* (*slot)() ```
void q_treeview_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QChildEvent* event ```
void q_treeview_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QChildEvent* event ```
void q_treeview_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QChildEvent*) ```
void q_treeview_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QEvent* event ```
void q_treeview_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QEvent* event ```
void q_treeview_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QEvent*) ```
void q_treeview_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QMetaMethod* signal ```
void q_treeview_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QMetaMethod* signal ```
void q_treeview_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QMetaMethod*) ```
void q_treeview_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QMetaMethod* signal ```
void q_treeview_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QMetaMethod* signal ```
void q_treeview_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QMetaMethod*) ```
void q_treeview_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
int64_t q_treeview_state(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
int64_t q_treeview_qbase_state(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, int64_t (*slot)() ```
void q_treeview_on_state(void* self, int64_t (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, enum QAbstractItemView__State state ```
void q_treeview_set_state(void* self, int64_t state);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, enum QAbstractItemView__State state ```
void q_treeview_qbase_set_state(void* self, int64_t state);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, enum QAbstractItemView__State) ```
void q_treeview_on_set_state(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_qbase_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)() ```
void q_treeview_on_schedule_delayed_items_layout(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_qbase_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)() ```
void q_treeview_on_execute_delayed_items_layout(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QRegion* region ```
void q_treeview_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QRegion* region ```
void q_treeview_qbase_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QRegion*) ```
void q_treeview_on_set_dirty_region(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, int dx, int dy ```
void q_treeview_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, int dx, int dy ```
void q_treeview_qbase_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, int, int) ```
void q_treeview_on_scroll_dirty_region(void* self, void (*slot)(void*, int, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
QPoint* q_treeview_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
QPoint* q_treeview_qbase_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, QPoint* (*slot)() ```
void q_treeview_on_dirty_region_offset(void* self, QPoint* (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_qbase_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)() ```
void q_treeview_on_start_auto_scroll(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_qbase_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)() ```
void q_treeview_on_stop_auto_scroll(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_qbase_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)() ```
void q_treeview_on_do_auto_scroll(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
int64_t q_treeview_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
int64_t q_treeview_qbase_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, int64_t (*slot)() ```
void q_treeview_on_drop_indicator_position(void* self, int64_t (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, int left, int top, int right, int bottom ```
void q_treeview_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, int left, int top, int right, int bottom ```
void q_treeview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, int, int, int, int) ```
void q_treeview_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
QMargins* q_treeview_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
QMargins* q_treeview_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, QMargins* (*slot)() ```
void q_treeview_on_viewport_margins(void* self, QMargins* (*slot)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QPainter* param1 ```
void q_treeview_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QPainter* param1 ```
void q_treeview_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)(QTreeView*, QPainter*) ```
void q_treeview_on_draw_frame(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)() ```
void q_treeview_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)() ```
void q_treeview_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
void q_treeview_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, void (*slot)() ```
void q_treeview_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
bool q_treeview_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
bool q_treeview_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, bool (*slot)() ```
void q_treeview_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
bool q_treeview_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
bool q_treeview_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, bool (*slot)() ```
void q_treeview_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
QObject* q_treeview_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
QObject* q_treeview_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, QObject* (*slot)() ```
void q_treeview_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self ```
int32_t q_treeview_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self ```
int32_t q_treeview_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, int32_t (*slot)() ```
void q_treeview_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, const char* signal ```
int32_t q_treeview_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, const char* signal ```
int32_t q_treeview_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, int32_t (*slot)(QTreeView*, const char*) ```
void q_treeview_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, QMetaMethod* signal ```
bool q_treeview_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, QMetaMethod* signal ```
bool q_treeview_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, bool (*slot)(QTreeView*, QMetaMethod*) ```
void q_treeview_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTreeView* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_treeview_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTreeView* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_treeview_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTreeView* self, double (*slot)(QTreeView*, enum QPaintDevice__PaintDeviceMetric, enum QPaintDevice__PaintDeviceMetric) ```
void q_treeview_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QTreeView* self, void (*slot)(QObject*, const char*) ```
void q_treeview_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qtreeview.html#dtor.QTreeView)
///
/// Delete this object from C++ memory.
///
/// ``` QTreeView* self ```
void q_treeview_delete(void* self);

#endif
