#pragma once
#ifndef SRC_QT6C_LIBQUNDOVIEW_H
#define SRC_QT6C_LIBQUNDOVIEW_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qundoview.html)

/// q_undoview_new constructs a new QUndoView object.
///
/// @param parent QWidget*
///
QUndoView* q_undoview_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qundoview.html)

/// q_undoview_new2 constructs a new QUndoView object.
///
QUndoView* q_undoview_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qundoview.html)

/// q_undoview_new3 constructs a new QUndoView object.
///
/// @param stack QUndoStack*
///
QUndoView* q_undoview_new3(void* stack);

/// [Upstream resources](https://doc.qt.io/qt-6/qundoview.html)

/// q_undoview_new4 constructs a new QUndoView object.
///
/// @param group QUndoGroup*
///
QUndoView* q_undoview_new4(void* group);

/// [Upstream resources](https://doc.qt.io/qt-6/qundoview.html)

/// q_undoview_new5 constructs a new QUndoView object.
///
/// @param stack QUndoStack*
/// @param parent QWidget*
///
QUndoView* q_undoview_new5(void* stack, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qundoview.html)

/// q_undoview_new6 constructs a new QUndoView object.
///
/// @param group QUndoGroup*
/// @param parent QWidget*
///
QUndoView* q_undoview_new6(void* group, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QUndoView*
///
const QMetaObject* q_undoview_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QUndoView*
/// @param callback const QMetaObject* func()
///
void q_undoview_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_undoview_super_meta_object` instead
///
#define q_undoview_qbase_meta_object q_undoview_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QUndoView*
///
const QMetaObject* q_undoview_super_meta_object(void* self);

/// @param self QUndoView*
/// @param param1 const char*
///
void* q_undoview_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QUndoView*
/// @param callback void* func(QUndoView* self, const char* param1)
///
void q_undoview_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_undoview_super_metacast` instead
///
#define q_undoview_qbase_metacast q_undoview_super_metacast

/// Base class method implementation
///
/// @param self QUndoView*
/// @param param1 const char*
///
void* q_undoview_super_metacast(void* self, const char* param1);

/// @param self QUndoView*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_undoview_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QUndoView*
/// @param callback int32_t func(QUndoView* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_undoview_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `q_undoview_super_metacall` instead
///
#define q_undoview_qbase_metacall q_undoview_super_metacall

/// Base class method implementation
///
/// @param self QUndoView*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_undoview_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_undoview_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qundoview.html#stack)
///
/// @param self QUndoView*
///
QUndoStack* q_undoview_stack(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qundoview.html#group)
///
/// @param self QUndoView*
///
QUndoGroup* q_undoview_group(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qundoview.html#setEmptyLabel)
///
/// @param self QUndoView*
/// @param label const char*
///
void q_undoview_set_empty_label(void* self, const char* label);

/// [Upstream resources](https://doc.qt.io/qt-6/qundoview.html#emptyLabel)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QUndoView*
///
const char* q_undoview_empty_label(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qundoview.html#setCleanIcon)
///
/// @param self QUndoView*
/// @param icon QIcon*
///
void q_undoview_set_clean_icon(void* self, void* icon);

/// [Upstream resources](https://doc.qt.io/qt-6/qundoview.html#cleanIcon)
///
/// @param self QUndoView*
///
QIcon* q_undoview_clean_icon(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qundoview.html#setStack)
///
/// @param self QUndoView*
/// @param stack QUndoStack*
///
void q_undoview_set_stack(void* self, void* stack);

/// [Upstream resources](https://doc.qt.io/qt-6/qundoview.html#setGroup)
///
/// @param self QUndoView*
/// @param group QUndoGroup*
///
void q_undoview_set_group(void* self, void* group);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_undoview_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_undoview_tr3(const char* s, const char* c, int n);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setMovement)
///
/// @param self QUndoView*
/// @param movement enum QListView__Movement
///
void q_undoview_set_movement(void* self, int32_t movement);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#movement)
///
/// @param self QUndoView*
///
/// @return enum QListView__Movement
///
int32_t q_undoview_movement(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setFlow)
///
/// @param self QUndoView*
/// @param flow enum QListView__Flow
///
void q_undoview_set_flow(void* self, int32_t flow);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#flow)
///
/// @param self QUndoView*
///
/// @return enum QListView__Flow
///
int32_t q_undoview_flow(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setWrapping)
///
/// @param self QUndoView*
/// @param enable bool
///
void q_undoview_set_wrapping(void* self, bool enable);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isWrapping)
///
/// @param self QUndoView*
///
bool q_undoview_is_wrapping(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setResizeMode)
///
/// @param self QUndoView*
/// @param mode enum QListView__ResizeMode
///
void q_undoview_set_resize_mode(void* self, int32_t mode);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeMode)
///
/// @param self QUndoView*
///
/// @return enum QListView__ResizeMode
///
int32_t q_undoview_resize_mode(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setLayoutMode)
///
/// @param self QUndoView*
/// @param mode enum QListView__LayoutMode
///
void q_undoview_set_layout_mode(void* self, int32_t mode);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#layoutMode)
///
/// @param self QUndoView*
///
/// @return enum QListView__LayoutMode
///
int32_t q_undoview_layout_mode(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setSpacing)
///
/// @param self QUndoView*
/// @param space int
///
void q_undoview_set_spacing(void* self, int space);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#spacing)
///
/// @param self QUndoView*
///
int32_t q_undoview_spacing(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setBatchSize)
///
/// @param self QUndoView*
/// @param batchSize int
///
void q_undoview_set_batch_size(void* self, int batchSize);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#batchSize)
///
/// @param self QUndoView*
///
int32_t q_undoview_batch_size(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setGridSize)
///
/// @param self QUndoView*
/// @param size QSize*
///
void q_undoview_set_grid_size(void* self, void* size);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#gridSize)
///
/// @param self QUndoView*
///
QSize* q_undoview_grid_size(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setViewMode)
///
/// @param self QUndoView*
/// @param mode enum QListView__ViewMode
///
void q_undoview_set_view_mode(void* self, int32_t mode);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#viewMode)
///
/// @param self QUndoView*
///
/// @return enum QListView__ViewMode
///
int32_t q_undoview_view_mode(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#clearPropertyFlags)
///
/// @param self QUndoView*
///
void q_undoview_clear_property_flags(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isRowHidden)
///
/// @param self QUndoView*
/// @param row int
///
bool q_undoview_is_row_hidden(void* self, int row);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setRowHidden)
///
/// @param self QUndoView*
/// @param row int
/// @param hide bool
///
void q_undoview_set_row_hidden(void* self, int row, bool hide);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setModelColumn)
///
/// @param self QUndoView*
/// @param column int
///
void q_undoview_set_model_column(void* self, int column);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#modelColumn)
///
/// @param self QUndoView*
///
int32_t q_undoview_model_column(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setUniformItemSizes)
///
/// @param self QUndoView*
/// @param enable bool
///
void q_undoview_set_uniform_item_sizes(void* self, bool enable);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#uniformItemSizes)
///
/// @param self QUndoView*
///
bool q_undoview_uniform_item_sizes(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setWordWrap)
///
/// @param self QUndoView*
/// @param on bool
///
void q_undoview_set_word_wrap(void* self, bool on);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#wordWrap)
///
/// @param self QUndoView*
///
bool q_undoview_word_wrap(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setSelectionRectVisible)
///
/// @param self QUndoView*
/// @param show bool
///
void q_undoview_set_selection_rect_visible(void* self, bool show);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isSelectionRectVisible)
///
/// @param self QUndoView*
///
bool q_undoview_is_selection_rect_visible(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setItemAlignment)
///
/// @param self QUndoView*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_undoview_set_item_alignment(void* self, int32_t alignment);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#itemAlignment)
///
/// @param self QUndoView*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_undoview_item_alignment(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#indexesMoved)
///
/// @param self QUndoView*
/// @param indexes libqt_list of QModelIndex*
///
void q_undoview_indexes_moved(void* self, libqt_list indexes);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#indexesMoved)
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, libqt_list of QModelIndex* indexes)
///
void q_undoview_on_indexes_moved(void* self, void (*callback)(void*, libqt_list));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#model)
///
/// @param self QUndoView*
///
QAbstractItemModel* q_undoview_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
///
/// @param self QUndoView*
///
QItemSelectionModel* q_undoview_selection_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
///
/// @param self QUndoView*
/// @param delegate QAbstractItemDelegate*
///
void q_undoview_set_item_delegate(void* self, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// @param self QUndoView*
///
QAbstractItemDelegate* q_undoview_item_delegate(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
///
/// @param self QUndoView*
/// @param mode enum QAbstractItemView__SelectionMode
///
void q_undoview_set_selection_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
///
/// @param self QUndoView*
///
/// @return enum QAbstractItemView__SelectionMode
///
int32_t q_undoview_selection_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
///
/// @param self QUndoView*
/// @param behavior enum QAbstractItemView__SelectionBehavior
///
void q_undoview_set_selection_behavior(void* self, int32_t behavior);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
///
/// @param self QUndoView*
///
/// @return enum QAbstractItemView__SelectionBehavior
///
int32_t q_undoview_selection_behavior(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
///
/// @param self QUndoView*
///
QModelIndex* q_undoview_current_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
///
/// @param self QUndoView*
///
QModelIndex* q_undoview_root_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
///
/// @param self QUndoView*
/// @param triggers flag of enum QAbstractItemView__EditTrigger
///
void q_undoview_set_edit_triggers(void* self, int32_t triggers);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
///
/// @param self QUndoView*
///
/// @return flag of enum QAbstractItemView__EditTrigger
///
int32_t q_undoview_edit_triggers(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
///
/// @param self QUndoView*
/// @param mode enum QAbstractItemView__ScrollMode
///
void q_undoview_set_vertical_scroll_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
///
/// @param self QUndoView*
///
/// @return enum QAbstractItemView__ScrollMode
///
int32_t q_undoview_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
///
/// @param self QUndoView*
///
void q_undoview_reset_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
///
/// @param self QUndoView*
/// @param mode enum QAbstractItemView__ScrollMode
///
void q_undoview_set_horizontal_scroll_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
///
/// @param self QUndoView*
///
/// @return enum QAbstractItemView__ScrollMode
///
int32_t q_undoview_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
///
/// @param self QUndoView*
///
void q_undoview_reset_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
///
/// @param self QUndoView*
/// @param enable bool
///
void q_undoview_set_auto_scroll(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
///
/// @param self QUndoView*
///
bool q_undoview_has_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
///
/// @param self QUndoView*
/// @param margin int
///
void q_undoview_set_auto_scroll_margin(void* self, int margin);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
///
/// @param self QUndoView*
///
int32_t q_undoview_auto_scroll_margin(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
///
/// @param self QUndoView*
/// @param enable bool
///
void q_undoview_set_tab_key_navigation(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
///
/// @param self QUndoView*
///
bool q_undoview_tab_key_navigation(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
///
/// @param self QUndoView*
/// @param enable bool
///
void q_undoview_set_drop_indicator_shown(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
///
/// @param self QUndoView*
///
bool q_undoview_show_drop_indicator(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
///
/// @param self QUndoView*
/// @param enable bool
///
void q_undoview_set_drag_enabled(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
///
/// @param self QUndoView*
///
bool q_undoview_drag_enabled(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
///
/// @param self QUndoView*
/// @param overwrite bool
///
void q_undoview_set_drag_drop_overwrite_mode(void* self, bool overwrite);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
///
/// @param self QUndoView*
///
bool q_undoview_drag_drop_overwrite_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
///
/// @param self QUndoView*
/// @param behavior enum QAbstractItemView__DragDropMode
///
void q_undoview_set_drag_drop_mode(void* self, int32_t behavior);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
///
/// @param self QUndoView*
///
/// @return enum QAbstractItemView__DragDropMode
///
int32_t q_undoview_drag_drop_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
///
/// @param self QUndoView*
/// @param dropAction enum Qt__DropAction
///
void q_undoview_set_default_drop_action(void* self, int32_t dropAction);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
///
/// @param self QUndoView*
///
/// @return enum Qt__DropAction
///
int32_t q_undoview_default_drop_action(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
///
/// @param self QUndoView*
/// @param enable bool
///
void q_undoview_set_alternating_row_colors(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
///
/// @param self QUndoView*
///
bool q_undoview_alternating_row_colors(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
///
/// @param self QUndoView*
/// @param size QSize*
///
void q_undoview_set_icon_size(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
///
/// @param self QUndoView*
///
QSize* q_undoview_icon_size(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
///
/// @param self QUndoView*
/// @param mode enum Qt__TextElideMode
///
void q_undoview_set_text_elide_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
///
/// @param self QUndoView*
///
/// @return enum Qt__TextElideMode
///
int32_t q_undoview_text_elide_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
///
/// @param self QUndoView*
/// @param index QModelIndex*
///
QSize* q_undoview_size_hint_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#openPersistentEditor)
///
/// @param self QUndoView*
/// @param index QModelIndex*
///
void q_undoview_open_persistent_editor(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closePersistentEditor)
///
/// @param self QUndoView*
/// @param index QModelIndex*
///
void q_undoview_close_persistent_editor(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#isPersistentEditorOpen)
///
/// @param self QUndoView*
/// @param index QModelIndex*
///
bool q_undoview_is_persistent_editor_open(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
///
/// @param self QUndoView*
/// @param index QModelIndex*
/// @param widget QWidget*
///
void q_undoview_set_index_widget(void* self, void* index, void* widget);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
///
/// @param self QUndoView*
/// @param index QModelIndex*
///
QWidget* q_undoview_index_widget(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
///
/// @param self QUndoView*
/// @param row int
/// @param delegate QAbstractItemDelegate*
///
void q_undoview_set_item_delegate_for_row(void* self, int row, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
///
/// @param self QUndoView*
/// @param row int
///
QAbstractItemDelegate* q_undoview_item_delegate_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
///
/// @param self QUndoView*
/// @param column int
/// @param delegate QAbstractItemDelegate*
///
void q_undoview_set_item_delegate_for_column(void* self, int column, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
///
/// @param self QUndoView*
/// @param column int
///
QAbstractItemDelegate* q_undoview_item_delegate_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// @param self QUndoView*
/// @param index QModelIndex*
///
QAbstractItemDelegate* q_undoview_item_delegate2(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// @param self QUndoView*
/// @param index QModelIndex*
///
void q_undoview_edit(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
///
/// @param self QUndoView*
///
void q_undoview_clear_selection(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
///
/// @param self QUndoView*
/// @param index QModelIndex*
///
void q_undoview_set_current_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
///
/// @param self QUndoView*
///
void q_undoview_scroll_to_top(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
///
/// @param self QUndoView*
///
void q_undoview_scroll_to_bottom(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#update)
///
/// @param self QUndoView*
/// @param index QModelIndex*
///
void q_undoview_update(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// @param self QUndoView*
/// @param index QModelIndex*
///
void q_undoview_pressed(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QModelIndex* index)
///
void q_undoview_on_pressed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// @param self QUndoView*
/// @param index QModelIndex*
///
void q_undoview_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QModelIndex* index)
///
void q_undoview_on_clicked(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// @param self QUndoView*
/// @param index QModelIndex*
///
void q_undoview_double_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QModelIndex* index)
///
void q_undoview_on_double_clicked(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// @param self QUndoView*
/// @param index QModelIndex*
///
void q_undoview_activated(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QModelIndex* index)
///
void q_undoview_on_activated(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// @param self QUndoView*
/// @param index QModelIndex*
///
void q_undoview_entered(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QModelIndex* index)
///
void q_undoview_on_entered(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// @param self QUndoView*
///
void q_undoview_viewport_entered(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self)
///
void q_undoview_on_viewport_entered(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// @param self QUndoView*
/// @param size QSize*
///
void q_undoview_icon_size_changed(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QSize* size)
///
void q_undoview_on_icon_size_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// @param self QUndoView*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t q_undoview_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// @param self QUndoView*
/// @param verticalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void q_undoview_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// @param self QUndoView*
///
QScrollBar* q_undoview_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// @param self QUndoView*
/// @param scrollbar QScrollBar*
///
void q_undoview_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// @param self QUndoView*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t q_undoview_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// @param self QUndoView*
/// @param horizontalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void q_undoview_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// @param self QUndoView*
///
QScrollBar* q_undoview_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// @param self QUndoView*
/// @param scrollbar QScrollBar*
///
void q_undoview_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// @param self QUndoView*
///
QWidget* q_undoview_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// @param self QUndoView*
/// @param widget QWidget*
///
void q_undoview_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// @param self QUndoView*
/// @param widget QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_undoview_add_scroll_bar_widget(void* self, void* widget, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// @param self QUndoView*
/// @param alignment flag of enum Qt__AlignmentFlag
///
/// @return libqt_list of QWidget*
///
libqt_list q_undoview_scroll_bar_widgets(void* self, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// @param self QUndoView*
///
QWidget* q_undoview_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// @param self QUndoView*
/// @param widget QWidget*
///
void q_undoview_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// @param self QUndoView*
///
QSize* q_undoview_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// @param self QUndoView*
///
/// @return enum QAbstractScrollArea__SizeAdjustPolicy
///
int32_t q_undoview_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// @param self QUndoView*
/// @param policy enum QAbstractScrollArea__SizeAdjustPolicy
///
void q_undoview_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self QUndoView*
///
int32_t q_undoview_frame_style(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self QUndoView*
/// @param frameStyle int
///
void q_undoview_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self QUndoView*
///
int32_t q_undoview_frame_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self QUndoView*
///
/// @return enum QFrame__Shape
///
int32_t q_undoview_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self QUndoView*
/// @param frameShape enum QFrame__Shape
///
void q_undoview_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self QUndoView*
///
/// @return enum QFrame__Shadow
///
int32_t q_undoview_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self QUndoView*
/// @param frameShadow enum QFrame__Shadow
///
void q_undoview_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self QUndoView*
///
int32_t q_undoview_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self QUndoView*
/// @param lineWidth int
///
void q_undoview_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self QUndoView*
///
int32_t q_undoview_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self QUndoView*
/// @param midLineWidth int
///
void q_undoview_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self QUndoView*
///
QRect* q_undoview_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self QUndoView*
/// @param frameRect QRect*
///
void q_undoview_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QUndoView*
///
uintptr_t q_undoview_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QUndoView*
///
void q_undoview_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QUndoView*
///
uintptr_t q_undoview_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QUndoView*
///
uintptr_t q_undoview_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QUndoView*
///
QStyle* q_undoview_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QUndoView*
/// @param style QStyle*
///
void q_undoview_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QUndoView*
///
bool q_undoview_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QUndoView*
///
bool q_undoview_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QUndoView*
///
bool q_undoview_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QUndoView*
///
/// @return enum Qt__WindowModality
///
int32_t q_undoview_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QUndoView*
/// @param windowModality enum Qt__WindowModality
///
void q_undoview_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QUndoView*
///
bool q_undoview_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QUndoView*
/// @param param1 QWidget*
///
bool q_undoview_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QUndoView*
/// @param enabled bool
///
void q_undoview_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QUndoView*
/// @param disabled bool
///
void q_undoview_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QUndoView*
/// @param windowModified bool
///
void q_undoview_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QUndoView*
///
QRect* q_undoview_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QUndoView*
///
const QRect* q_undoview_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QUndoView*
///
QRect* q_undoview_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QUndoView*
///
int32_t q_undoview_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QUndoView*
///
int32_t q_undoview_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QUndoView*
///
QPoint* q_undoview_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QUndoView*
///
QSize* q_undoview_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QUndoView*
///
QSize* q_undoview_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QUndoView*
///
int32_t q_undoview_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QUndoView*
///
int32_t q_undoview_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QUndoView*
///
QRect* q_undoview_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QUndoView*
///
QRect* q_undoview_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QUndoView*
///
QRegion* q_undoview_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QUndoView*
///
QSize* q_undoview_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QUndoView*
///
QSize* q_undoview_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QUndoView*
///
int32_t q_undoview_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QUndoView*
///
int32_t q_undoview_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QUndoView*
///
int32_t q_undoview_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QUndoView*
///
int32_t q_undoview_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QUndoView*
/// @param minimumSize QSize*
///
void q_undoview_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QUndoView*
/// @param minw int
/// @param minh int
///
void q_undoview_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QUndoView*
/// @param maximumSize QSize*
///
void q_undoview_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QUndoView*
/// @param maxw int
/// @param maxh int
///
void q_undoview_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QUndoView*
/// @param minw int
///
void q_undoview_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QUndoView*
/// @param minh int
///
void q_undoview_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QUndoView*
/// @param maxw int
///
void q_undoview_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QUndoView*
/// @param maxh int
///
void q_undoview_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QUndoView*
///
QSize* q_undoview_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QUndoView*
/// @param sizeIncrement QSize*
///
void q_undoview_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QUndoView*
/// @param w int
/// @param h int
///
void q_undoview_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QUndoView*
///
QSize* q_undoview_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QUndoView*
/// @param baseSize QSize*
///
void q_undoview_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QUndoView*
/// @param basew int
/// @param baseh int
///
void q_undoview_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QUndoView*
/// @param fixedSize QSize*
///
void q_undoview_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QUndoView*
/// @param w int
/// @param h int
///
void q_undoview_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QUndoView*
/// @param w int
///
void q_undoview_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QUndoView*
/// @param h int
///
void q_undoview_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QUndoView*
/// @param param1 QPointF*
///
QPointF* q_undoview_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QUndoView*
/// @param param1 QPoint*
///
QPoint* q_undoview_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QUndoView*
/// @param param1 QPointF*
///
QPointF* q_undoview_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QUndoView*
/// @param param1 QPoint*
///
QPoint* q_undoview_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QUndoView*
/// @param param1 QPointF*
///
QPointF* q_undoview_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QUndoView*
/// @param param1 QPoint*
///
QPoint* q_undoview_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QUndoView*
/// @param param1 QPointF*
///
QPointF* q_undoview_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QUndoView*
/// @param param1 QPoint*
///
QPoint* q_undoview_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QUndoView*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_undoview_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QUndoView*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_undoview_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QUndoView*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_undoview_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QUndoView*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_undoview_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QUndoView*
///
QWidget* q_undoview_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QUndoView*
///
QWidget* q_undoview_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QUndoView*
///
QWidget* q_undoview_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QUndoView*
///
const QPalette* q_undoview_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QUndoView*
/// @param palette QPalette*
///
void q_undoview_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QUndoView*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_undoview_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QUndoView*
///
/// @return enum QPalette__ColorRole
///
int32_t q_undoview_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QUndoView*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_undoview_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QUndoView*
///
/// @return enum QPalette__ColorRole
///
int32_t q_undoview_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QUndoView*
///
const QFont* q_undoview_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QUndoView*
/// @param font QFont*
///
void q_undoview_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QUndoView*
///
QFontMetrics* q_undoview_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QUndoView*
///
QFontInfo* q_undoview_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QUndoView*
///
QCursor* q_undoview_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QUndoView*
/// @param cursor QCursor*
///
void q_undoview_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QUndoView*
///
void q_undoview_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QUndoView*
/// @param enable bool
///
void q_undoview_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QUndoView*
///
bool q_undoview_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QUndoView*
///
bool q_undoview_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QUndoView*
/// @param enable bool
///
void q_undoview_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QUndoView*
///
bool q_undoview_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QUndoView*
/// @param mask QBitmap*
///
void q_undoview_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QUndoView*
/// @param mask QRegion*
///
void q_undoview_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QUndoView*
///
QRegion* q_undoview_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QUndoView*
///
void q_undoview_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QUndoView*
/// @param target QPaintDevice*
///
void q_undoview_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QUndoView*
/// @param painter QPainter*
///
void q_undoview_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QUndoView*
///
QPixmap* q_undoview_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QUndoView*
///
QGraphicsEffect* q_undoview_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QUndoView*
/// @param effect QGraphicsEffect*
///
void q_undoview_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QUndoView*
/// @param type enum Qt__GestureType
///
void q_undoview_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QUndoView*
/// @param type enum Qt__GestureType
///
void q_undoview_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QUndoView*
/// @param windowTitle const char*
///
void q_undoview_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QUndoView*
/// @param styleSheet const char*
///
void q_undoview_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QUndoView*
///
const char* q_undoview_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QUndoView*
///
const char* q_undoview_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QUndoView*
/// @param icon QIcon*
///
void q_undoview_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QUndoView*
///
QIcon* q_undoview_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QUndoView*
/// @param windowIconText const char*
///
void q_undoview_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QUndoView*
///
const char* q_undoview_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QUndoView*
/// @param windowRole const char*
///
void q_undoview_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QUndoView*
///
const char* q_undoview_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QUndoView*
/// @param filePath const char*
///
void q_undoview_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QUndoView*
///
const char* q_undoview_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QUndoView*
/// @param level double
///
void q_undoview_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QUndoView*
///
double q_undoview_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QUndoView*
///
bool q_undoview_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QUndoView*
/// @param toolTip const char*
///
void q_undoview_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QUndoView*
///
const char* q_undoview_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QUndoView*
/// @param msec int
///
void q_undoview_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QUndoView*
///
int32_t q_undoview_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QUndoView*
/// @param statusTip const char*
///
void q_undoview_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QUndoView*
///
const char* q_undoview_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QUndoView*
/// @param whatsThis const char*
///
void q_undoview_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QUndoView*
///
const char* q_undoview_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QUndoView*
///
const char* q_undoview_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QUndoView*
/// @param name const char*
///
void q_undoview_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QUndoView*
///
const char* q_undoview_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QUndoView*
/// @param description const char*
///
void q_undoview_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QUndoView*
/// @param direction enum Qt__LayoutDirection
///
void q_undoview_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QUndoView*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_undoview_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QUndoView*
///
void q_undoview_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QUndoView*
/// @param locale QLocale*
///
void q_undoview_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QUndoView*
///
QLocale* q_undoview_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QUndoView*
///
void q_undoview_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QUndoView*
///
bool q_undoview_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QUndoView*
///
bool q_undoview_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QUndoView*
///
void q_undoview_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QUndoView*
///
bool q_undoview_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QUndoView*
///
void q_undoview_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QUndoView*
///
void q_undoview_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QUndoView*
/// @param reason enum Qt__FocusReason
///
void q_undoview_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QUndoView*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_undoview_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QUndoView*
/// @param policy enum Qt__FocusPolicy
///
void q_undoview_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QUndoView*
///
bool q_undoview_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_undoview_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QUndoView*
/// @param focusProxy QWidget*
///
void q_undoview_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QUndoView*
///
QWidget* q_undoview_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QUndoView*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_undoview_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QUndoView*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_undoview_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QUndoView*
///
void q_undoview_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QUndoView*
/// @param param1 QCursor*
///
void q_undoview_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QUndoView*
///
void q_undoview_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QUndoView*
///
void q_undoview_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QUndoView*
///
void q_undoview_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QUndoView*
/// @param key QKeySequence*
///
int32_t q_undoview_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QUndoView*
/// @param id int
///
void q_undoview_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QUndoView*
/// @param id int
///
void q_undoview_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QUndoView*
/// @param id int
///
void q_undoview_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_undoview_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_undoview_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QUndoView*
///
bool q_undoview_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QUndoView*
/// @param enable bool
///
void q_undoview_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QUndoView*
///
QGraphicsProxyWidget* q_undoview_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QUndoView*
///
void q_undoview_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QUndoView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_undoview_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QUndoView*
/// @param param1 QRect*
///
void q_undoview_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QUndoView*
/// @param param1 QRegion*
///
void q_undoview_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QUndoView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_undoview_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QUndoView*
/// @param param1 QRect*
///
void q_undoview_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QUndoView*
/// @param param1 QRegion*
///
void q_undoview_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QUndoView*
/// @param hidden bool
///
void q_undoview_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QUndoView*
///
void q_undoview_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QUndoView*
///
void q_undoview_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QUndoView*
///
void q_undoview_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QUndoView*
///
void q_undoview_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QUndoView*
///
void q_undoview_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QUndoView*
///
void q_undoview_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QUndoView*
///
bool q_undoview_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QUndoView*
///
void q_undoview_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QUndoView*
///
void q_undoview_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QUndoView*
/// @param param1 QWidget*
///
void q_undoview_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QUndoView*
/// @param x int
/// @param y int
///
void q_undoview_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QUndoView*
/// @param param1 QPoint*
///
void q_undoview_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QUndoView*
/// @param w int
/// @param h int
///
void q_undoview_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QUndoView*
/// @param param1 QSize*
///
void q_undoview_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QUndoView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_undoview_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QUndoView*
/// @param geometry QRect*
///
void q_undoview_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QUndoView*
///
char* q_undoview_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QUndoView*
/// @param geometry char*
///
bool q_undoview_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QUndoView*
///
void q_undoview_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QUndoView*
///
bool q_undoview_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QUndoView*
/// @param param1 QWidget*
///
bool q_undoview_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QUndoView*
///
bool q_undoview_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QUndoView*
///
bool q_undoview_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QUndoView*
///
bool q_undoview_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QUndoView*
///
bool q_undoview_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QUndoView*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_undoview_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QUndoView*
/// @param state flag of enum Qt__WindowState
///
void q_undoview_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QUndoView*
/// @param state flag of enum Qt__WindowState
///
void q_undoview_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QUndoView*
///
QSizePolicy* q_undoview_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QUndoView*
/// @param sizePolicy QSizePolicy*
///
void q_undoview_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QUndoView*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_undoview_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QUndoView*
///
QRegion* q_undoview_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QUndoView*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_undoview_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QUndoView*
/// @param margins QMargins*
///
void q_undoview_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QUndoView*
///
QMargins* q_undoview_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QUndoView*
///
QRect* q_undoview_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QUndoView*
///
QLayout* q_undoview_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QUndoView*
/// @param layout QLayout*
///
void q_undoview_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QUndoView*
///
void q_undoview_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QUndoView*
/// @param parent QWidget*
///
void q_undoview_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QUndoView*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_undoview_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QUndoView*
/// @param dx int
/// @param dy int
///
void q_undoview_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QUndoView*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_undoview_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QUndoView*
///
QWidget* q_undoview_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QUndoView*
///
QWidget* q_undoview_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QUndoView*
///
QWidget* q_undoview_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QUndoView*
///
bool q_undoview_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QUndoView*
/// @param on bool
///
void q_undoview_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QUndoView*
/// @param action QAction*
///
void q_undoview_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QUndoView*
/// @param actions libqt_list of QAction*
///
void q_undoview_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QUndoView*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_undoview_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QUndoView*
/// @param before QAction*
/// @param action QAction*
///
void q_undoview_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QUndoView*
/// @param action QAction*
///
void q_undoview_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QUndoView*
///
/// @return libqt_list of QAction*
///
libqt_list q_undoview_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QUndoView*
/// @param text const char*
///
QAction* q_undoview_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QUndoView*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_undoview_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QUndoView*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_undoview_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QUndoView*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_undoview_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QUndoView*
///
QWidget* q_undoview_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QUndoView*
/// @param type flag of enum Qt__WindowType
///
void q_undoview_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QUndoView*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_undoview_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QUndoView*
/// @param param1 enum Qt__WindowType
///
void q_undoview_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QUndoView*
/// @param type flag of enum Qt__WindowType
///
void q_undoview_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QUndoView*
///
/// @return enum Qt__WindowType
///
int32_t q_undoview_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* q_undoview_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QUndoView*
/// @param x int
/// @param y int
///
QWidget* q_undoview_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QUndoView*
/// @param p QPoint*
///
QWidget* q_undoview_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QUndoView*
/// @param p QPointF*
///
QWidget* q_undoview_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QUndoView*
/// @param param1 enum Qt__WidgetAttribute
///
void q_undoview_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QUndoView*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_undoview_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QUndoView*
///
void q_undoview_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QUndoView*
/// @param child QWidget*
///
bool q_undoview_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QUndoView*
///
bool q_undoview_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QUndoView*
/// @param enabled bool
///
void q_undoview_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QUndoView*
///
QBackingStore* q_undoview_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QUndoView*
///
QWindow* q_undoview_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QUndoView*
///
QScreen* q_undoview_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QUndoView*
/// @param screen QScreen*
///
void q_undoview_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_undoview_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QUndoView*
/// @param title const char*
///
void q_undoview_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, const char* title)
///
void q_undoview_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QUndoView*
/// @param icon QIcon*
///
void q_undoview_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QIcon* icon)
///
void q_undoview_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QUndoView*
/// @param iconText const char*
///
void q_undoview_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, const char* iconText)
///
void q_undoview_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QUndoView*
/// @param pos QPoint*
///
void q_undoview_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QPoint* pos)
///
void q_undoview_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QUndoView*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_undoview_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QUndoView*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_undoview_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QUndoView*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_undoview_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QUndoView*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_undoview_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QUndoView*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_undoview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QUndoView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_undoview_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QUndoView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_undoview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QUndoView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_undoview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QUndoView*
/// @param rectangle QRect*
///
QPixmap* q_undoview_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QUndoView*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_undoview_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QUndoView*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_undoview_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QUndoView*
/// @param id int
/// @param enable bool
///
void q_undoview_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QUndoView*
/// @param id int
/// @param enable bool
///
void q_undoview_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QUndoView*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_undoview_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QUndoView*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_undoview_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_undoview_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_undoview_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QUndoView*
///
const char* q_undoview_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QUndoView*
/// @param name const char*
///
void q_undoview_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QUndoView*
///
bool q_undoview_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QUndoView*
///
bool q_undoview_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QUndoView*
///
bool q_undoview_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QUndoView*
///
bool q_undoview_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QUndoView*
/// @param b bool
///
bool q_undoview_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QUndoView*
///
QThread* q_undoview_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QUndoView*
/// @param thread QThread*
///
bool q_undoview_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QUndoView*
/// @param interval int
///
int32_t q_undoview_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QUndoView*
/// @param time int64_t of nanoseconds
///
int32_t q_undoview_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QUndoView*
/// @param id int
///
void q_undoview_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QUndoView*
/// @param id enum Qt__TimerId
///
void q_undoview_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QUndoView*
///
/// @return libqt_list of QObject*
///
libqt_list q_undoview_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QUndoView*
/// @param filterObj QObject*
///
void q_undoview_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QUndoView*
/// @param obj QObject*
///
void q_undoview_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_undoview_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_undoview_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QUndoView*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_undoview_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_undoview_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_undoview_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QUndoView*
///
bool q_undoview_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QUndoView*
/// @param receiver QObject*
///
bool q_undoview_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_undoview_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QUndoView*
///
void q_undoview_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QUndoView*
///
void q_undoview_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QUndoView*
/// @param name const char*
/// @param value QVariant*
///
bool q_undoview_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QUndoView*
/// @param name const char*
///
QVariant* q_undoview_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QUndoView*
///
const char** q_undoview_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QUndoView*
///
QBindingStorage* q_undoview_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QUndoView*
///
const QBindingStorage* q_undoview_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QUndoView*
///
void q_undoview_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self)
///
void q_undoview_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QUndoView*
///
QObject* q_undoview_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QUndoView*
/// @param classname const char*
///
bool q_undoview_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QUndoView*
///
void q_undoview_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QUndoView*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_undoview_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QUndoView*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_undoview_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_undoview_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_undoview_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QUndoView*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_undoview_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QUndoView*
/// @param signal const char*
///
bool q_undoview_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QUndoView*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_undoview_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QUndoView*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_undoview_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QUndoView*
/// @param receiver QObject*
/// @param member const char*
///
bool q_undoview_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QUndoView*
/// @param param1 QObject*
///
void q_undoview_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QObject* param1)
///
void q_undoview_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QUndoView*
///
bool q_undoview_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QUndoView*
///
int32_t q_undoview_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QUndoView*
///
int32_t q_undoview_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QUndoView*
///
int32_t q_undoview_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QUndoView*
///
int32_t q_undoview_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QUndoView*
///
int32_t q_undoview_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QUndoView*
///
int32_t q_undoview_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QUndoView*
///
double q_undoview_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QUndoView*
///
double q_undoview_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QUndoView*
///
int32_t q_undoview_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QUndoView*
///
int32_t q_undoview_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_undoview_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_undoview_encode_metric_f(int32_t metric, double value);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param index QModelIndex*
///
QRect* q_undoview_visual_rect(void* self, void* index);

/// @warning DEPRECATED: Use `q_undoview_super_visual_rect` instead
///
#define q_undoview_qbase_visual_rect q_undoview_super_visual_rect

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRect)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param index QModelIndex*
///
QRect* q_undoview_super_visual_rect(void* self, void* index);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRect)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback QRect* func(QUndoView* self, QModelIndex* index)
///
void q_undoview_on_visual_rect(void* self, QRect* (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param index QModelIndex*
/// @param hint enum QAbstractItemView__ScrollHint
///
void q_undoview_scroll_to(void* self, void* index, int32_t hint);

/// @warning DEPRECATED: Use `q_undoview_super_scroll_to` instead
///
#define q_undoview_qbase_scroll_to q_undoview_super_scroll_to

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param index QModelIndex*
/// @param hint enum QAbstractItemView__ScrollHint
///
void q_undoview_super_scroll_to(void* self, void* index, int32_t hint);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint)
///
void q_undoview_on_scroll_to(void* self, void (*callback)(void*, void*, int32_t));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#indexAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param p QPoint*
///
QModelIndex* q_undoview_index_at(void* self, void* p);

/// @warning DEPRECATED: Use `q_undoview_super_index_at` instead
///
#define q_undoview_qbase_index_at q_undoview_super_index_at

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#indexAt)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param p QPoint*
///
QModelIndex* q_undoview_super_index_at(void* self, void* p);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#indexAt)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback QModelIndex* func(QUndoView* self, QPoint* p)
///
void q_undoview_on_index_at(void* self, QModelIndex* (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
void q_undoview_do_items_layout(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_do_items_layout` instead
///
#define q_undoview_qbase_do_items_layout q_undoview_super_do_items_layout

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
void q_undoview_super_do_items_layout(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func()
///
void q_undoview_on_do_items_layout(void* self, void (*callback)());

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
void q_undoview_reset(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_reset` instead
///
#define q_undoview_qbase_reset q_undoview_super_reset

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
void q_undoview_super_reset(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func()
///
void q_undoview_on_reset(void* self, void (*callback)());

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param index QModelIndex*
///
void q_undoview_set_root_index(void* self, void* index);

/// @warning DEPRECATED: Use `q_undoview_super_set_root_index` instead
///
#define q_undoview_qbase_set_root_index q_undoview_super_set_root_index

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param index QModelIndex*
///
void q_undoview_super_set_root_index(void* self, void* index);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QModelIndex* index)
///
void q_undoview_on_set_root_index(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param e QEvent*
///
bool q_undoview_event(void* self, void* e);

/// @warning DEPRECATED: Use `q_undoview_super_event` instead
///
#define q_undoview_qbase_event q_undoview_super_event

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param e QEvent*
///
bool q_undoview_super_event(void* self, void* e);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback bool func(QUndoView* self, QEvent* e)
///
void q_undoview_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param dx int
/// @param dy int
///
void q_undoview_scroll_contents_by(void* self, int dx, int dy);

/// @warning DEPRECATED: Use `q_undoview_super_scroll_contents_by` instead
///
#define q_undoview_qbase_scroll_contents_by q_undoview_super_scroll_contents_by

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param dx int
/// @param dy int
///
void q_undoview_super_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, int dx, int dy)
///
void q_undoview_on_scroll_contents_by(void* self, void (*callback)(void*, int, int));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dataChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void q_undoview_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// @warning DEPRECATED: Use `q_undoview_super_data_changed` instead
///
#define q_undoview_qbase_data_changed q_undoview_super_data_changed

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dataChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void q_undoview_super_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dataChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list of int roles)
///
void q_undoview_on_data_changed(void* self, void (*callback)(void*, void*, void*, libqt_list));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rowsInserted)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
///
void q_undoview_rows_inserted(void* self, void* parent, int start, int end);

/// @warning DEPRECATED: Use `q_undoview_super_rows_inserted` instead
///
#define q_undoview_qbase_rows_inserted q_undoview_super_rows_inserted

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rowsInserted)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
///
void q_undoview_super_rows_inserted(void* self, void* parent, int start, int end);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rowsInserted)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QModelIndex* parent, int start, int end)
///
void q_undoview_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
///
void q_undoview_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// @warning DEPRECATED: Use `q_undoview_super_rows_about_to_be_removed` instead
///
#define q_undoview_qbase_rows_about_to_be_removed q_undoview_super_rows_about_to_be_removed

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
///
void q_undoview_super_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QModelIndex* parent, int start, int end)
///
void q_undoview_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param e QMouseEvent*
///
void q_undoview_mouse_move_event(void* self, void* e);

/// @warning DEPRECATED: Use `q_undoview_super_mouse_move_event` instead
///
#define q_undoview_qbase_mouse_move_event q_undoview_super_mouse_move_event

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param e QMouseEvent*
///
void q_undoview_super_mouse_move_event(void* self, void* e);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QMouseEvent* e)
///
void q_undoview_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param e QMouseEvent*
///
void q_undoview_mouse_release_event(void* self, void* e);

/// @warning DEPRECATED: Use `q_undoview_super_mouse_release_event` instead
///
#define q_undoview_qbase_mouse_release_event q_undoview_super_mouse_release_event

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param e QMouseEvent*
///
void q_undoview_super_mouse_release_event(void* self, void* e);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QMouseEvent* e)
///
void q_undoview_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param e QWheelEvent*
///
void q_undoview_wheel_event(void* self, void* e);

/// @warning DEPRECATED: Use `q_undoview_super_wheel_event` instead
///
#define q_undoview_qbase_wheel_event q_undoview_super_wheel_event

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param e QWheelEvent*
///
void q_undoview_super_wheel_event(void* self, void* e);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QWheelEvent* e)
///
void q_undoview_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param e QTimerEvent*
///
void q_undoview_timer_event(void* self, void* e);

/// @warning DEPRECATED: Use `q_undoview_super_timer_event` instead
///
#define q_undoview_qbase_timer_event q_undoview_super_timer_event

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param e QTimerEvent*
///
void q_undoview_super_timer_event(void* self, void* e);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QTimerEvent* e)
///
void q_undoview_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param e QResizeEvent*
///
void q_undoview_resize_event(void* self, void* e);

/// @warning DEPRECATED: Use `q_undoview_super_resize_event` instead
///
#define q_undoview_qbase_resize_event q_undoview_super_resize_event

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param e QResizeEvent*
///
void q_undoview_super_resize_event(void* self, void* e);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QResizeEvent* e)
///
void q_undoview_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param e QDragMoveEvent*
///
void q_undoview_drag_move_event(void* self, void* e);

/// @warning DEPRECATED: Use `q_undoview_super_drag_move_event` instead
///
#define q_undoview_qbase_drag_move_event q_undoview_super_drag_move_event

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param e QDragMoveEvent*
///
void q_undoview_super_drag_move_event(void* self, void* e);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QDragMoveEvent* e)
///
void q_undoview_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param e QDragLeaveEvent*
///
void q_undoview_drag_leave_event(void* self, void* e);

/// @warning DEPRECATED: Use `q_undoview_super_drag_leave_event` instead
///
#define q_undoview_qbase_drag_leave_event q_undoview_super_drag_leave_event

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param e QDragLeaveEvent*
///
void q_undoview_super_drag_leave_event(void* self, void* e);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QDragLeaveEvent* e)
///
void q_undoview_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param e QDropEvent*
///
void q_undoview_drop_event(void* self, void* e);

/// @warning DEPRECATED: Use `q_undoview_super_drop_event` instead
///
#define q_undoview_qbase_drop_event q_undoview_super_drop_event

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param e QDropEvent*
///
void q_undoview_super_drop_event(void* self, void* e);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QDropEvent* e)
///
void q_undoview_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#startDrag)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param supportedActions flag of enum Qt__DropAction
///
void q_undoview_start_drag(void* self, int32_t supportedActions);

/// @warning DEPRECATED: Use `q_undoview_super_start_drag` instead
///
#define q_undoview_qbase_start_drag q_undoview_super_start_drag

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#startDrag)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param supportedActions flag of enum Qt__DropAction
///
void q_undoview_super_start_drag(void* self, int32_t supportedActions);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#startDrag)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, flag of enum Qt__DropAction supportedActions)
///
void q_undoview_on_start_drag(void* self, void (*callback)(void*, int32_t));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param option QStyleOptionViewItem*
///
void q_undoview_init_view_item_option(void* self, void* option);

/// @warning DEPRECATED: Use `q_undoview_super_init_view_item_option` instead
///
#define q_undoview_qbase_init_view_item_option q_undoview_super_init_view_item_option

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param option QStyleOptionViewItem*
///
void q_undoview_super_init_view_item_option(void* self, void* option);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QStyleOptionViewItem* option)
///
void q_undoview_on_init_view_item_option(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param e QPaintEvent*
///
void q_undoview_paint_event(void* self, void* e);

/// @warning DEPRECATED: Use `q_undoview_super_paint_event` instead
///
#define q_undoview_qbase_paint_event q_undoview_super_paint_event

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param e QPaintEvent*
///
void q_undoview_super_paint_event(void* self, void* e);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QPaintEvent* e)
///
void q_undoview_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
int32_t q_undoview_horizontal_offset(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_horizontal_offset` instead
///
#define q_undoview_qbase_horizontal_offset q_undoview_super_horizontal_offset

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
int32_t q_undoview_super_horizontal_offset(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback int32_t func()
///
void q_undoview_on_horizontal_offset(void* self, int32_t (*callback)());

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
int32_t q_undoview_vertical_offset(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_vertical_offset` instead
///
#define q_undoview_qbase_vertical_offset q_undoview_super_vertical_offset

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
int32_t q_undoview_super_vertical_offset(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback int32_t func()
///
void q_undoview_on_vertical_offset(void* self, int32_t (*callback)());

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param cursorAction enum QAbstractItemView__CursorAction
/// @param modifiers flag of enum Qt__KeyboardModifier
///
QModelIndex* q_undoview_move_cursor(void* self, int32_t cursorAction, int32_t modifiers);

/// @warning DEPRECATED: Use `q_undoview_super_move_cursor` instead
///
#define q_undoview_qbase_move_cursor q_undoview_super_move_cursor

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param cursorAction enum QAbstractItemView__CursorAction
/// @param modifiers flag of enum Qt__KeyboardModifier
///
QModelIndex* q_undoview_super_move_cursor(void* self, int32_t cursorAction, int32_t modifiers);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback QModelIndex* func(QUndoView* self, enum QAbstractItemView__CursorAction cursorAction, flag of enum Qt__KeyboardModifier modifiers)
///
void q_undoview_on_move_cursor(void* self, QModelIndex* (*callback)(void*, int32_t, int32_t));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param rect QRect*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
///
void q_undoview_set_selection(void* self, void* rect, int32_t command);

/// @warning DEPRECATED: Use `q_undoview_super_set_selection` instead
///
#define q_undoview_qbase_set_selection q_undoview_super_set_selection

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setSelection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param rect QRect*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
///
void q_undoview_super_set_selection(void* self, void* rect, int32_t command);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setSelection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QRect* rect, flag of enum QItemSelectionModel__SelectionFlag command)
///
void q_undoview_on_set_selection(void* self, void (*callback)(void*, void*, int32_t));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param selection QItemSelection*
///
QRegion* q_undoview_visual_region_for_selection(void* self, void* selection);

/// @warning DEPRECATED: Use `q_undoview_super_visual_region_for_selection` instead
///
#define q_undoview_qbase_visual_region_for_selection q_undoview_super_visual_region_for_selection

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param selection QItemSelection*
///
QRegion* q_undoview_super_visual_region_for_selection(void* self, void* selection);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback QRegion* func(QUndoView* self, QItemSelection* selection)
///
void q_undoview_on_visual_region_for_selection(void* self, QRegion* (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_undoview_selected_indexes(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_selected_indexes` instead
///
#define q_undoview_qbase_selected_indexes q_undoview_super_selected_indexes

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_undoview_super_selected_indexes(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback libqt_list of QModelIndex* func()
///
void q_undoview_on_selected_indexes(void* self, libqt_list (*callback)());

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
void q_undoview_update_geometries(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_update_geometries` instead
///
#define q_undoview_qbase_update_geometries q_undoview_super_update_geometries

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
void q_undoview_super_update_geometries(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func()
///
void q_undoview_on_update_geometries(void* self, void (*callback)());

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param index QModelIndex*
///
bool q_undoview_is_index_hidden(void* self, void* index);

/// @warning DEPRECATED: Use `q_undoview_super_is_index_hidden` instead
///
#define q_undoview_qbase_is_index_hidden q_undoview_super_is_index_hidden

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param index QModelIndex*
///
bool q_undoview_super_is_index_hidden(void* self, void* index);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback bool func(QUndoView* self, QModelIndex* index)
///
void q_undoview_on_is_index_hidden(void* self, bool (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param selected QItemSelection*
/// @param deselected QItemSelection*
///
void q_undoview_selection_changed(void* self, void* selected, void* deselected);

/// @warning DEPRECATED: Use `q_undoview_super_selection_changed` instead
///
#define q_undoview_qbase_selection_changed q_undoview_super_selection_changed

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param selected QItemSelection*
/// @param deselected QItemSelection*
///
void q_undoview_super_selection_changed(void* self, void* selected, void* deselected);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QItemSelection* selected, QItemSelection* deselected)
///
void q_undoview_on_selection_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param current QModelIndex*
/// @param previous QModelIndex*
///
void q_undoview_current_changed(void* self, void* current, void* previous);

/// @warning DEPRECATED: Use `q_undoview_super_current_changed` instead
///
#define q_undoview_qbase_current_changed q_undoview_super_current_changed

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param current QModelIndex*
/// @param previous QModelIndex*
///
void q_undoview_super_current_changed(void* self, void* current, void* previous);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QModelIndex* current, QModelIndex* previous)
///
void q_undoview_on_current_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
QSize* q_undoview_viewport_size_hint(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_viewport_size_hint` instead
///
#define q_undoview_qbase_viewport_size_hint q_undoview_super_viewport_size_hint

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
QSize* q_undoview_super_viewport_size_hint(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback QSize* func()
///
void q_undoview_on_viewport_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param model QAbstractItemModel*
///
void q_undoview_set_model(void* self, void* model);

/// @warning DEPRECATED: Use `q_undoview_super_set_model` instead
///
#define q_undoview_qbase_set_model q_undoview_super_set_model

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param model QAbstractItemModel*
///
void q_undoview_super_set_model(void* self, void* model);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QAbstractItemModel* model)
///
void q_undoview_on_set_model(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param selectionModel QItemSelectionModel*
///
void q_undoview_set_selection_model(void* self, void* selectionModel);

/// @warning DEPRECATED: Use `q_undoview_super_set_selection_model` instead
///
#define q_undoview_qbase_set_selection_model q_undoview_super_set_selection_model

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param selectionModel QItemSelectionModel*
///
void q_undoview_super_set_selection_model(void* self, void* selectionModel);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QItemSelectionModel* selectionModel)
///
void q_undoview_on_set_selection_model(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param search const char*
///
void q_undoview_keyboard_search(void* self, const char* search);

/// @warning DEPRECATED: Use `q_undoview_super_keyboard_search` instead
///
#define q_undoview_qbase_keyboard_search q_undoview_super_keyboard_search

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param search const char*
///
void q_undoview_super_keyboard_search(void* self, const char* search);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, const char* search)
///
void q_undoview_on_keyboard_search(void* self, void (*callback)(void*, const char*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param row int
///
int32_t q_undoview_size_hint_for_row(void* self, int row);

/// @warning DEPRECATED: Use `q_undoview_super_size_hint_for_row` instead
///
#define q_undoview_qbase_size_hint_for_row q_undoview_super_size_hint_for_row

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param row int
///
int32_t q_undoview_super_size_hint_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback int32_t func(QUndoView* self, int row)
///
void q_undoview_on_size_hint_for_row(void* self, int32_t (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param column int
///
int32_t q_undoview_size_hint_for_column(void* self, int column);

/// @warning DEPRECATED: Use `q_undoview_super_size_hint_for_column` instead
///
#define q_undoview_qbase_size_hint_for_column q_undoview_super_size_hint_for_column

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param column int
///
int32_t q_undoview_super_size_hint_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback int32_t func(QUndoView* self, int column)
///
void q_undoview_on_size_hint_for_column(void* self, int32_t (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param index QModelIndex*
///
QAbstractItemDelegate* q_undoview_item_delegate_for_index(void* self, void* index);

/// @warning DEPRECATED: Use `q_undoview_super_item_delegate_for_index` instead
///
#define q_undoview_qbase_item_delegate_for_index q_undoview_super_item_delegate_for_index

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param index QModelIndex*
///
QAbstractItemDelegate* q_undoview_super_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback QAbstractItemDelegate* func(QUndoView* self, QModelIndex* index)
///
void q_undoview_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_undoview_input_method_query(void* self, int32_t query);

/// @warning DEPRECATED: Use `q_undoview_super_input_method_query` instead
///
#define q_undoview_qbase_input_method_query q_undoview_super_input_method_query

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_undoview_super_input_method_query(void* self, int32_t query);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback QVariant* func(QUndoView* self, enum Qt__InputMethodQuery query)
///
void q_undoview_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
void q_undoview_select_all(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_select_all` instead
///
#define q_undoview_qbase_select_all q_undoview_super_select_all

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
void q_undoview_super_select_all(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func()
///
void q_undoview_on_select_all(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
void q_undoview_update_editor_data(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_update_editor_data` instead
///
#define q_undoview_qbase_update_editor_data q_undoview_super_update_editor_data

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
void q_undoview_super_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func()
///
void q_undoview_on_update_editor_data(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
void q_undoview_update_editor_geometries(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_update_editor_geometries` instead
///
#define q_undoview_qbase_update_editor_geometries q_undoview_super_update_editor_geometries

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
void q_undoview_super_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func()
///
void q_undoview_on_update_editor_geometries(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param action int
///
void q_undoview_vertical_scrollbar_action(void* self, int action);

/// @warning DEPRECATED: Use `q_undoview_super_vertical_scrollbar_action` instead
///
#define q_undoview_qbase_vertical_scrollbar_action q_undoview_super_vertical_scrollbar_action

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param action int
///
void q_undoview_super_vertical_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, int action)
///
void q_undoview_on_vertical_scrollbar_action(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param action int
///
void q_undoview_horizontal_scrollbar_action(void* self, int action);

/// @warning DEPRECATED: Use `q_undoview_super_horizontal_scrollbar_action` instead
///
#define q_undoview_qbase_horizontal_scrollbar_action q_undoview_super_horizontal_scrollbar_action

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param action int
///
void q_undoview_super_horizontal_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, int action)
///
void q_undoview_on_horizontal_scrollbar_action(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param value int
///
void q_undoview_vertical_scrollbar_value_changed(void* self, int value);

/// @warning DEPRECATED: Use `q_undoview_super_vertical_scrollbar_value_changed` instead
///
#define q_undoview_qbase_vertical_scrollbar_value_changed q_undoview_super_vertical_scrollbar_value_changed

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param value int
///
void q_undoview_super_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, int value)
///
void q_undoview_on_vertical_scrollbar_value_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param value int
///
void q_undoview_horizontal_scrollbar_value_changed(void* self, int value);

/// @warning DEPRECATED: Use `q_undoview_super_horizontal_scrollbar_value_changed` instead
///
#define q_undoview_qbase_horizontal_scrollbar_value_changed q_undoview_super_horizontal_scrollbar_value_changed

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param value int
///
void q_undoview_super_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, int value)
///
void q_undoview_on_horizontal_scrollbar_value_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param editor QWidget*
/// @param hint enum QAbstractItemDelegate__EndEditHint
///
void q_undoview_close_editor(void* self, void* editor, int32_t hint);

/// @warning DEPRECATED: Use `q_undoview_super_close_editor` instead
///
#define q_undoview_qbase_close_editor q_undoview_super_close_editor

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param editor QWidget*
/// @param hint enum QAbstractItemDelegate__EndEditHint
///
void q_undoview_super_close_editor(void* self, void* editor, int32_t hint);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint)
///
void q_undoview_on_close_editor(void* self, void (*callback)(void*, void*, int32_t));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param editor QWidget*
///
void q_undoview_commit_data(void* self, void* editor);

/// @warning DEPRECATED: Use `q_undoview_super_commit_data` instead
///
#define q_undoview_qbase_commit_data q_undoview_super_commit_data

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param editor QWidget*
///
void q_undoview_super_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QWidget* editor)
///
void q_undoview_on_commit_data(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param editor QObject*
///
void q_undoview_editor_destroyed(void* self, void* editor);

/// @warning DEPRECATED: Use `q_undoview_super_editor_destroyed` instead
///
#define q_undoview_qbase_editor_destroyed q_undoview_super_editor_destroyed

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param editor QObject*
///
void q_undoview_super_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QObject* editor)
///
void q_undoview_on_editor_destroyed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param index QModelIndex*
/// @param trigger enum QAbstractItemView__EditTrigger
/// @param event QEvent*
///
bool q_undoview_edit2(void* self, void* index, int32_t trigger, void* event);

/// @warning DEPRECATED: Use `q_undoview_super_edit2` instead
///
#define q_undoview_qbase_edit2 q_undoview_super_edit2

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param index QModelIndex*
/// @param trigger enum QAbstractItemView__EditTrigger
/// @param event QEvent*
///
bool q_undoview_super_edit2(void* self, void* index, int32_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback bool func(QUndoView* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event)
///
void q_undoview_on_edit2(void* self, bool (*callback)(void*, void*, int32_t, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param index QModelIndex*
/// @param event QEvent*
///
/// @return flag of enum QItemSelectionModel__SelectionFlag
///
int32_t q_undoview_selection_command(void* self, void* index, void* event);

/// @warning DEPRECATED: Use `q_undoview_super_selection_command` instead
///
#define q_undoview_qbase_selection_command q_undoview_super_selection_command

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param index QModelIndex*
/// @param event QEvent*
///
/// @return flag of enum QItemSelectionModel__SelectionFlag
///
int32_t q_undoview_super_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback int32_t func(QUndoView* self, QModelIndex* index, QEvent* event)
///
void q_undoview_on_selection_command(void* self, int32_t (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param next bool
///
bool q_undoview_focus_next_prev_child(void* self, bool next);

/// @warning DEPRECATED: Use `q_undoview_super_focus_next_prev_child` instead
///
#define q_undoview_qbase_focus_next_prev_child q_undoview_super_focus_next_prev_child

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param next bool
///
bool q_undoview_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback bool func(QUndoView* self, bool next)
///
void q_undoview_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param event QEvent*
///
bool q_undoview_viewport_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_undoview_super_viewport_event` instead
///
#define q_undoview_qbase_viewport_event q_undoview_super_viewport_event

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param event QEvent*
///
bool q_undoview_super_viewport_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback bool func(QUndoView* self, QEvent* event)
///
void q_undoview_on_viewport_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param event QMouseEvent*
///
void q_undoview_mouse_press_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_undoview_super_mouse_press_event` instead
///
#define q_undoview_qbase_mouse_press_event q_undoview_super_mouse_press_event

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param event QMouseEvent*
///
void q_undoview_super_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QMouseEvent* event)
///
void q_undoview_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param event QMouseEvent*
///
void q_undoview_mouse_double_click_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_undoview_super_mouse_double_click_event` instead
///
#define q_undoview_qbase_mouse_double_click_event q_undoview_super_mouse_double_click_event

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param event QMouseEvent*
///
void q_undoview_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QMouseEvent* event)
///
void q_undoview_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param event QDragEnterEvent*
///
void q_undoview_drag_enter_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_undoview_super_drag_enter_event` instead
///
#define q_undoview_qbase_drag_enter_event q_undoview_super_drag_enter_event

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param event QDragEnterEvent*
///
void q_undoview_super_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QDragEnterEvent* event)
///
void q_undoview_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param event QFocusEvent*
///
void q_undoview_focus_in_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_undoview_super_focus_in_event` instead
///
#define q_undoview_qbase_focus_in_event q_undoview_super_focus_in_event

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param event QFocusEvent*
///
void q_undoview_super_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QFocusEvent* event)
///
void q_undoview_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param event QFocusEvent*
///
void q_undoview_focus_out_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_undoview_super_focus_out_event` instead
///
#define q_undoview_qbase_focus_out_event q_undoview_super_focus_out_event

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param event QFocusEvent*
///
void q_undoview_super_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QFocusEvent* event)
///
void q_undoview_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param event QKeyEvent*
///
void q_undoview_key_press_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_undoview_super_key_press_event` instead
///
#define q_undoview_qbase_key_press_event q_undoview_super_key_press_event

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param event QKeyEvent*
///
void q_undoview_super_key_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QKeyEvent* event)
///
void q_undoview_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param event QInputMethodEvent*
///
void q_undoview_input_method_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_undoview_super_input_method_event` instead
///
#define q_undoview_qbase_input_method_event q_undoview_super_input_method_event

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param event QInputMethodEvent*
///
void q_undoview_super_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QInputMethodEvent* event)
///
void q_undoview_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param object QObject*
/// @param event QEvent*
///
bool q_undoview_event_filter(void* self, void* object, void* event);

/// @warning DEPRECATED: Use `q_undoview_super_event_filter` instead
///
#define q_undoview_qbase_event_filter q_undoview_super_event_filter

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param object QObject*
/// @param event QEvent*
///
bool q_undoview_super_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback bool func(QUndoView* self, QObject* object, QEvent* event)
///
void q_undoview_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
QSize* q_undoview_minimum_size_hint(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_minimum_size_hint` instead
///
#define q_undoview_qbase_minimum_size_hint q_undoview_super_minimum_size_hint

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
QSize* q_undoview_super_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback QSize* func()
///
void q_undoview_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
QSize* q_undoview_size_hint(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_size_hint` instead
///
#define q_undoview_qbase_size_hint q_undoview_super_size_hint

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
QSize* q_undoview_super_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback QSize* func()
///
void q_undoview_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param viewport QWidget*
///
void q_undoview_setup_viewport(void* self, void* viewport);

/// @warning DEPRECATED: Use `q_undoview_super_setup_viewport` instead
///
#define q_undoview_qbase_setup_viewport q_undoview_super_setup_viewport

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param viewport QWidget*
///
void q_undoview_super_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QWidget* viewport)
///
void q_undoview_on_setup_viewport(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param param1 QContextMenuEvent*
///
void q_undoview_context_menu_event(void* self, void* param1);

/// @warning DEPRECATED: Use `q_undoview_super_context_menu_event` instead
///
#define q_undoview_qbase_context_menu_event q_undoview_super_context_menu_event

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param param1 QContextMenuEvent*
///
void q_undoview_super_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QContextMenuEvent* param1)
///
void q_undoview_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param param1 QEvent*
///
void q_undoview_change_event(void* self, void* param1);

/// @warning DEPRECATED: Use `q_undoview_super_change_event` instead
///
#define q_undoview_qbase_change_event q_undoview_super_change_event

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param param1 QEvent*
///
void q_undoview_super_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QEvent* param1)
///
void q_undoview_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param option QStyleOptionFrame*
///
void q_undoview_init_style_option(void* self, void* option);

/// @warning DEPRECATED: Use `q_undoview_super_init_style_option` instead
///
#define q_undoview_qbase_init_style_option q_undoview_super_init_style_option

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param option QStyleOptionFrame*
///
void q_undoview_super_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QStyleOptionFrame* option)
///
void q_undoview_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
int32_t q_undoview_dev_type(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_dev_type` instead
///
#define q_undoview_qbase_dev_type q_undoview_super_dev_type

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
int32_t q_undoview_super_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback int32_t func()
///
void q_undoview_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param visible bool
///
void q_undoview_set_visible(void* self, bool visible);

/// @warning DEPRECATED: Use `q_undoview_super_set_visible` instead
///
#define q_undoview_qbase_set_visible q_undoview_super_set_visible

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param visible bool
///
void q_undoview_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, bool visible)
///
void q_undoview_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param param1 int
///
int32_t q_undoview_height_for_width(void* self, int param1);

/// @warning DEPRECATED: Use `q_undoview_super_height_for_width` instead
///
#define q_undoview_qbase_height_for_width q_undoview_super_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param param1 int
///
int32_t q_undoview_super_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback int32_t func(QUndoView* self, int param1)
///
void q_undoview_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
bool q_undoview_has_height_for_width(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_has_height_for_width` instead
///
#define q_undoview_qbase_has_height_for_width q_undoview_super_has_height_for_width

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
bool q_undoview_super_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback bool func()
///
void q_undoview_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
QPaintEngine* q_undoview_paint_engine(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_paint_engine` instead
///
#define q_undoview_qbase_paint_engine q_undoview_super_paint_engine

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
QPaintEngine* q_undoview_super_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback QPaintEngine* func()
///
void q_undoview_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param event QKeyEvent*
///
void q_undoview_key_release_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_undoview_super_key_release_event` instead
///
#define q_undoview_qbase_key_release_event q_undoview_super_key_release_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param event QKeyEvent*
///
void q_undoview_super_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QKeyEvent* event)
///
void q_undoview_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param event QEnterEvent*
///
void q_undoview_enter_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_undoview_super_enter_event` instead
///
#define q_undoview_qbase_enter_event q_undoview_super_enter_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param event QEnterEvent*
///
void q_undoview_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QEnterEvent* event)
///
void q_undoview_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param event QEvent*
///
void q_undoview_leave_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_undoview_super_leave_event` instead
///
#define q_undoview_qbase_leave_event q_undoview_super_leave_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param event QEvent*
///
void q_undoview_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QEvent* event)
///
void q_undoview_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param event QMoveEvent*
///
void q_undoview_move_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_undoview_super_move_event` instead
///
#define q_undoview_qbase_move_event q_undoview_super_move_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param event QMoveEvent*
///
void q_undoview_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QMoveEvent* event)
///
void q_undoview_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param event QCloseEvent*
///
void q_undoview_close_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_undoview_super_close_event` instead
///
#define q_undoview_qbase_close_event q_undoview_super_close_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param event QCloseEvent*
///
void q_undoview_super_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QCloseEvent* event)
///
void q_undoview_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param event QTabletEvent*
///
void q_undoview_tablet_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_undoview_super_tablet_event` instead
///
#define q_undoview_qbase_tablet_event q_undoview_super_tablet_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param event QTabletEvent*
///
void q_undoview_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QTabletEvent* event)
///
void q_undoview_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param event QActionEvent*
///
void q_undoview_action_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_undoview_super_action_event` instead
///
#define q_undoview_qbase_action_event q_undoview_super_action_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param event QActionEvent*
///
void q_undoview_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QActionEvent* event)
///
void q_undoview_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param event QShowEvent*
///
void q_undoview_show_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_undoview_super_show_event` instead
///
#define q_undoview_qbase_show_event q_undoview_super_show_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param event QShowEvent*
///
void q_undoview_super_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QShowEvent* event)
///
void q_undoview_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param event QHideEvent*
///
void q_undoview_hide_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_undoview_super_hide_event` instead
///
#define q_undoview_qbase_hide_event q_undoview_super_hide_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param event QHideEvent*
///
void q_undoview_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QHideEvent* event)
///
void q_undoview_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_undoview_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// @warning DEPRECATED: Use `q_undoview_super_native_event` instead
///
#define q_undoview_qbase_native_event q_undoview_super_native_event

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_undoview_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback bool func(QUndoView* self, libqt_string eventType, void* message, intptr_t* result)
///
void q_undoview_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_undoview_metric(void* self, int32_t param1);

/// @warning DEPRECATED: Use `q_undoview_super_metric` instead
///
#define q_undoview_qbase_metric q_undoview_super_metric

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_undoview_super_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback int32_t func(QUndoView* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_undoview_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param painter QPainter*
///
void q_undoview_init_painter(void* self, void* painter);

/// @warning DEPRECATED: Use `q_undoview_super_init_painter` instead
///
#define q_undoview_qbase_init_painter q_undoview_super_init_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param painter QPainter*
///
void q_undoview_super_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QPainter* painter)
///
void q_undoview_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param offset QPoint*
///
QPaintDevice* q_undoview_redirected(void* self, void* offset);

/// @warning DEPRECATED: Use `q_undoview_super_redirected` instead
///
#define q_undoview_qbase_redirected q_undoview_super_redirected

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param offset QPoint*
///
QPaintDevice* q_undoview_super_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback QPaintDevice* func(QUndoView* self, QPoint* offset)
///
void q_undoview_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
QPainter* q_undoview_shared_painter(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_shared_painter` instead
///
#define q_undoview_qbase_shared_painter q_undoview_super_shared_painter

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
QPainter* q_undoview_super_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback QPainter* func()
///
void q_undoview_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param event QChildEvent*
///
void q_undoview_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_undoview_super_child_event` instead
///
#define q_undoview_qbase_child_event q_undoview_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param event QChildEvent*
///
void q_undoview_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QChildEvent* event)
///
void q_undoview_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param event QEvent*
///
void q_undoview_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_undoview_super_custom_event` instead
///
#define q_undoview_qbase_custom_event q_undoview_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param event QEvent*
///
void q_undoview_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QEvent* event)
///
void q_undoview_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param signal QMetaMethod*
///
void q_undoview_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_undoview_super_connect_notify` instead
///
#define q_undoview_qbase_connect_notify q_undoview_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param signal QMetaMethod*
///
void q_undoview_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QMetaMethod* signal)
///
void q_undoview_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param signal QMetaMethod*
///
void q_undoview_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_undoview_super_disconnect_notify` instead
///
#define q_undoview_qbase_disconnect_notify q_undoview_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param signal QMetaMethod*
///
void q_undoview_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QMetaMethod* signal)
///
void q_undoview_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param width int
/// @param height int
///
void q_undoview_resize_contents(void* self, int width, int height);

/// @warning DEPRECATED: Use `q_undoview_super_resize_contents` instead
///
#define q_undoview_qbase_resize_contents q_undoview_super_resize_contents

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param width int
/// @param height int
///
void q_undoview_super_resize_contents(void* self, int width, int height);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, int width, int height)
///
void q_undoview_on_resize_contents(void* self, void (*callback)(void*, int, int));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
QSize* q_undoview_contents_size(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_contents_size` instead
///
#define q_undoview_qbase_contents_size q_undoview_super_contents_size

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
QSize* q_undoview_super_contents_size(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback QSize* func()
///
void q_undoview_on_contents_size(void* self, QSize* (*callback)());

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param index QModelIndex*
///
QRect* q_undoview_rect_for_index(void* self, void* index);

/// @warning DEPRECATED: Use `q_undoview_super_rect_for_index` instead
///
#define q_undoview_qbase_rect_for_index q_undoview_super_rect_for_index

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param index QModelIndex*
///
QRect* q_undoview_super_rect_for_index(void* self, void* index);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback QRect* func(QUndoView* self, QModelIndex* index)
///
void q_undoview_on_rect_for_index(void* self, QRect* (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param position QPoint*
/// @param index QModelIndex*
///
void q_undoview_set_position_for_index(void* self, void* position, void* index);

/// @warning DEPRECATED: Use `q_undoview_super_set_position_for_index` instead
///
#define q_undoview_qbase_set_position_for_index q_undoview_super_set_position_for_index

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param position QPoint*
/// @param index QModelIndex*
///
void q_undoview_super_set_position_for_index(void* self, void* position, void* index);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QPoint* position, QModelIndex* index)
///
void q_undoview_on_set_position_for_index(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
/// @return enum QAbstractItemView__State
///
int32_t q_undoview_state(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_state` instead
///
#define q_undoview_qbase_state q_undoview_super_state

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
/// @return enum QAbstractItemView__State
///
int32_t q_undoview_super_state(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback int32_t func()
///
void q_undoview_on_state(void* self, int32_t (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param state enum QAbstractItemView__State
///
void q_undoview_set_state(void* self, int32_t state);

/// @warning DEPRECATED: Use `q_undoview_super_set_state` instead
///
#define q_undoview_qbase_set_state q_undoview_super_set_state

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param state enum QAbstractItemView__State
///
void q_undoview_super_set_state(void* self, int32_t state);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, enum QAbstractItemView__State state)
///
void q_undoview_on_set_state(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
void q_undoview_schedule_delayed_items_layout(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_schedule_delayed_items_layout` instead
///
#define q_undoview_qbase_schedule_delayed_items_layout q_undoview_super_schedule_delayed_items_layout

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
void q_undoview_super_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func()
///
void q_undoview_on_schedule_delayed_items_layout(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
void q_undoview_execute_delayed_items_layout(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_execute_delayed_items_layout` instead
///
#define q_undoview_qbase_execute_delayed_items_layout q_undoview_super_execute_delayed_items_layout

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
void q_undoview_super_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func()
///
void q_undoview_on_execute_delayed_items_layout(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param region QRegion*
///
void q_undoview_set_dirty_region(void* self, void* region);

/// @warning DEPRECATED: Use `q_undoview_super_set_dirty_region` instead
///
#define q_undoview_qbase_set_dirty_region q_undoview_super_set_dirty_region

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param region QRegion*
///
void q_undoview_super_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QRegion* region)
///
void q_undoview_on_set_dirty_region(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param dx int
/// @param dy int
///
void q_undoview_scroll_dirty_region(void* self, int dx, int dy);

/// @warning DEPRECATED: Use `q_undoview_super_scroll_dirty_region` instead
///
#define q_undoview_qbase_scroll_dirty_region q_undoview_super_scroll_dirty_region

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param dx int
/// @param dy int
///
void q_undoview_super_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, int dx, int dy)
///
void q_undoview_on_scroll_dirty_region(void* self, void (*callback)(void*, int, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
QPoint* q_undoview_dirty_region_offset(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_dirty_region_offset` instead
///
#define q_undoview_qbase_dirty_region_offset q_undoview_super_dirty_region_offset

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
QPoint* q_undoview_super_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback QPoint* func()
///
void q_undoview_on_dirty_region_offset(void* self, QPoint* (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
void q_undoview_start_auto_scroll(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_start_auto_scroll` instead
///
#define q_undoview_qbase_start_auto_scroll q_undoview_super_start_auto_scroll

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
void q_undoview_super_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func()
///
void q_undoview_on_start_auto_scroll(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
void q_undoview_stop_auto_scroll(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_stop_auto_scroll` instead
///
#define q_undoview_qbase_stop_auto_scroll q_undoview_super_stop_auto_scroll

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
void q_undoview_super_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func()
///
void q_undoview_on_stop_auto_scroll(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
void q_undoview_do_auto_scroll(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_do_auto_scroll` instead
///
#define q_undoview_qbase_do_auto_scroll q_undoview_super_do_auto_scroll

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
void q_undoview_super_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func()
///
void q_undoview_on_do_auto_scroll(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
/// @return enum QAbstractItemView__DropIndicatorPosition
///
int32_t q_undoview_drop_indicator_position(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_drop_indicator_position` instead
///
#define q_undoview_qbase_drop_indicator_position q_undoview_super_drop_indicator_position

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
/// @return enum QAbstractItemView__DropIndicatorPosition
///
int32_t q_undoview_super_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback int32_t func()
///
void q_undoview_on_drop_indicator_position(void* self, int32_t (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_undoview_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// @warning DEPRECATED: Use `q_undoview_super_set_viewport_margins` instead
///
#define q_undoview_qbase_set_viewport_margins q_undoview_super_set_viewport_margins

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_undoview_super_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, int left, int top, int right, int bottom)
///
void q_undoview_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
QMargins* q_undoview_viewport_margins(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_viewport_margins` instead
///
#define q_undoview_qbase_viewport_margins q_undoview_super_viewport_margins

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
QMargins* q_undoview_super_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback QMargins* func()
///
void q_undoview_on_viewport_margins(void* self, QMargins* (*callback)());

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param param1 QPainter*
///
void q_undoview_draw_frame(void* self, void* param1);

/// @warning DEPRECATED: Use `q_undoview_super_draw_frame` instead
///
#define q_undoview_qbase_draw_frame q_undoview_super_draw_frame

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param param1 QPainter*
///
void q_undoview_super_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, QPainter* param1)
///
void q_undoview_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
void q_undoview_update_micro_focus(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_update_micro_focus` instead
///
#define q_undoview_qbase_update_micro_focus q_undoview_super_update_micro_focus

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
void q_undoview_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func()
///
void q_undoview_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
void q_undoview_create(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_create` instead
///
#define q_undoview_qbase_create q_undoview_super_create

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
void q_undoview_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func()
///
void q_undoview_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
void q_undoview_destroy(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_destroy` instead
///
#define q_undoview_qbase_destroy q_undoview_super_destroy

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
void q_undoview_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback void func()
///
void q_undoview_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
bool q_undoview_focus_next_child(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_focus_next_child` instead
///
#define q_undoview_qbase_focus_next_child q_undoview_super_focus_next_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
bool q_undoview_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback bool func()
///
void q_undoview_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
bool q_undoview_focus_previous_child(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_focus_previous_child` instead
///
#define q_undoview_qbase_focus_previous_child q_undoview_super_focus_previous_child

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
bool q_undoview_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback bool func()
///
void q_undoview_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
QObject* q_undoview_sender(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_sender` instead
///
#define q_undoview_qbase_sender q_undoview_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
QObject* q_undoview_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback QObject* func()
///
void q_undoview_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
///
int32_t q_undoview_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_undoview_super_sender_signal_index` instead
///
#define q_undoview_qbase_sender_signal_index q_undoview_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
///
int32_t q_undoview_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback int32_t func()
///
void q_undoview_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param signal const char*
///
int32_t q_undoview_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_undoview_super_receivers` instead
///
#define q_undoview_qbase_receivers q_undoview_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param signal const char*
///
int32_t q_undoview_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback int32_t func(QUndoView* self, const char* signal)
///
void q_undoview_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param signal QMetaMethod*
///
bool q_undoview_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_undoview_super_is_signal_connected` instead
///
#define q_undoview_qbase_is_signal_connected q_undoview_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param signal QMetaMethod*
///
bool q_undoview_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback bool func(QUndoView* self, QMetaMethod* signal)
///
void q_undoview_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QUndoView*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_undoview_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// @warning DEPRECATED: Use `q_undoview_super_get_decoded_metric_f` instead
///
#define q_undoview_qbase_get_decoded_metric_f q_undoview_super_get_decoded_metric_f

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QUndoView*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_undoview_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QUndoView*
/// @param callback double func(QUndoView* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_undoview_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QUndoView*
/// @param callback void func(QUndoView* self, const char* objectName)
///
void q_undoview_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qundoview.html#dtor.QUndoView)
///
/// Delete this object from C++ memory.
///
/// @param self QUndoView*
///
void q_undoview_delete(void* self);

#endif
