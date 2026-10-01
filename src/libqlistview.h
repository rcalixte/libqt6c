#pragma once
#ifndef LIBQLISTVIEW_H
#define LIBQLISTVIEW_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html)

/// q_listview_new constructs a new QListView object.
///
/// @param parent QWidget*
///
QListView* q_listview_new(void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html)

/// q_listview_new2 constructs a new QListView object.
///
QListView* q_listview_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QListView*
///
const QMetaObject* q_listview_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self const QListView*
/// @param callback const QMetaObject* func(const QListView* self)
///
void q_listview_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const QListView*
///
const QMetaObject* q_listview_super_meta_object(const void* self);

/// @param self QListView*
/// @param param1 const char*
///
void* q_listview_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QListView*
/// @param callback void* func(QListView* self, const char* param1)
///
void q_listview_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QListView*
/// @param param1 const char*
///
void* q_listview_super_metacast(void* self, const char* param1);

/// @param self QListView*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_listview_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QListView*
/// @param callback int32_t func(QListView* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_listview_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QListView*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_listview_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_listview_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setMovement)
///
/// @param self QListView*
/// @param movement enum QListView__Movement
///
void q_listview_set_movement(void* self, int32_t movement);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#movement)
///
/// @param self const QListView*
///
/// @return enum QListView__Movement
///
int32_t q_listview_movement(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setFlow)
///
/// @param self QListView*
/// @param flow enum QListView__Flow
///
void q_listview_set_flow(void* self, int32_t flow);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#flow)
///
/// @param self const QListView*
///
/// @return enum QListView__Flow
///
int32_t q_listview_flow(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setWrapping)
///
/// @param self QListView*
/// @param enable bool
///
void q_listview_set_wrapping(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isWrapping)
///
/// @param self const QListView*
///
bool q_listview_is_wrapping(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setResizeMode)
///
/// @param self QListView*
/// @param mode enum QListView__ResizeMode
///
void q_listview_set_resize_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeMode)
///
/// @param self const QListView*
///
/// @return enum QListView__ResizeMode
///
int32_t q_listview_resize_mode(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setLayoutMode)
///
/// @param self QListView*
/// @param mode enum QListView__LayoutMode
///
void q_listview_set_layout_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#layoutMode)
///
/// @param self const QListView*
///
/// @return enum QListView__LayoutMode
///
int32_t q_listview_layout_mode(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setSpacing)
///
/// @param self QListView*
/// @param space int
///
void q_listview_set_spacing(void* self, int space);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#spacing)
///
/// @param self const QListView*
///
int32_t q_listview_spacing(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setBatchSize)
///
/// @param self QListView*
/// @param batchSize int
///
void q_listview_set_batch_size(void* self, int batchSize);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#batchSize)
///
/// @param self const QListView*
///
int32_t q_listview_batch_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setGridSize)
///
/// @param self QListView*
/// @param size QSize*
///
void q_listview_set_grid_size(void* self, const void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#gridSize)
///
/// @param self const QListView*
///
QSize* q_listview_grid_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setViewMode)
///
/// @param self QListView*
/// @param mode enum QListView__ViewMode
///
void q_listview_set_view_mode(void* self, int32_t mode);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#viewMode)
///
/// @param self const QListView*
///
/// @return enum QListView__ViewMode
///
int32_t q_listview_view_mode(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#clearPropertyFlags)
///
/// @param self QListView*
///
void q_listview_clear_property_flags(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isRowHidden)
///
/// @param self const QListView*
/// @param row int
///
bool q_listview_is_row_hidden(const void* self, int row);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setRowHidden)
///
/// @param self QListView*
/// @param row int
/// @param hide bool
///
void q_listview_set_row_hidden(void* self, int row, bool hide);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setModelColumn)
///
/// @param self QListView*
/// @param column int
///
void q_listview_set_model_column(void* self, int column);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#modelColumn)
///
/// @param self const QListView*
///
int32_t q_listview_model_column(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setUniformItemSizes)
///
/// @param self QListView*
/// @param enable bool
///
void q_listview_set_uniform_item_sizes(void* self, bool enable);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#uniformItemSizes)
///
/// @param self const QListView*
///
bool q_listview_uniform_item_sizes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setWordWrap)
///
/// @param self QListView*
/// @param on bool
///
void q_listview_set_word_wrap(void* self, bool on);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#wordWrap)
///
/// @param self const QListView*
///
bool q_listview_word_wrap(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setSelectionRectVisible)
///
/// @param self QListView*
/// @param show bool
///
void q_listview_set_selection_rect_visible(void* self, bool show);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isSelectionRectVisible)
///
/// @param self const QListView*
///
bool q_listview_is_selection_rect_visible(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setItemAlignment)
///
/// @param self QListView*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_listview_set_item_alignment(void* self, int32_t alignment);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#itemAlignment)
///
/// @param self const QListView*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t q_listview_item_alignment(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRect)
///
/// @param self const QListView*
/// @param index QModelIndex*
///
QRect* q_listview_visual_rect(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRect)
///
/// Allows for overriding the related default method
///
/// @param self const QListView*
/// @param callback QRect* func(const QListView* self, QModelIndex* index)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_listview_on_visual_rect(const void* self, QRect* (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRect)
///
/// Base class method implementation
///
/// @param self const QListView*
/// @param index QModelIndex*
///
QRect* q_listview_super_visual_rect(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
///
/// @param self QListView*
/// @param index QModelIndex*
/// @param hint enum QAbstractItemView__ScrollHint
///
void q_listview_scroll_to(void* self, const void* index, int32_t hint);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
///
/// Allows for overriding the related default method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint)
///
void q_listview_on_scroll_to(void* self, void (*callback)(void*, const void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
///
/// Base class method implementation
///
/// @param self QListView*
/// @param index QModelIndex*
/// @param hint enum QAbstractItemView__ScrollHint
///
void q_listview_super_scroll_to(void* self, const void* index, int32_t hint);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#indexAt)
///
/// @param self const QListView*
/// @param p QPoint*
///
QModelIndex* q_listview_index_at(const void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#indexAt)
///
/// Allows for overriding the related default method
///
/// @param self const QListView*
/// @param callback QModelIndex* func(const QListView* self, QPoint* p)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_listview_on_index_at(const void* self, QModelIndex* (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#indexAt)
///
/// Base class method implementation
///
/// @param self const QListView*
/// @param p QPoint*
///
QModelIndex* q_listview_super_index_at(const void* self, const void* p);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
///
/// @param self QListView*
///
void q_listview_do_items_layout(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
///
/// Allows for overriding the related default method
///
/// @param self QListView*
/// @param callback void func(QListView* self)
///
void q_listview_on_do_items_layout(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
///
/// Base class method implementation
///
/// @param self QListView*
///
void q_listview_super_do_items_layout(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#reset)
///
/// @param self QListView*
///
void q_listview_reset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#reset)
///
/// Allows for overriding the related default method
///
/// @param self QListView*
/// @param callback void func(QListView* self)
///
void q_listview_on_reset(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#reset)
///
/// Base class method implementation
///
/// @param self QListView*
///
void q_listview_super_reset(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
///
/// @param self QListView*
/// @param index QModelIndex*
///
void q_listview_set_root_index(void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
///
/// Allows for overriding the related default method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QModelIndex* index)
///
void q_listview_on_set_root_index(void* self, void (*callback)(void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
///
/// Base class method implementation
///
/// @param self QListView*
/// @param index QModelIndex*
///
void q_listview_super_set_root_index(void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#indexesMoved)
///
/// @param self QListView*
/// @param indexes libqt_list of QModelIndex*
///
void q_listview_indexes_moved(void* self, libqt_list indexes);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#indexesMoved)
///
/// @param self QListView*
/// @param callback void func(QListView* self, libqt_list of QModelIndex* indexes)
///
void q_listview_on_indexes_moved(void* self, void (*callback)(void*, libqt_list));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#event)
///
/// @param self QListView*
/// @param e QEvent*
///
bool q_listview_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QListView*
/// @param callback bool func(QListView* self, QEvent* e)
///
void q_listview_on_event(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#event)
///
/// Base class method implementation
///
/// @param self QListView*
/// @param e QEvent*
///
bool q_listview_super_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
///
/// @param self QListView*
/// @param dx int
/// @param dy int
///
void q_listview_scroll_contents_by(void* self, int dx, int dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
///
/// Allows for overriding the related default method
///
/// @param self QListView*
/// @param callback void func(QListView* self, int dx, int dy)
///
void q_listview_on_scroll_contents_by(void* self, void (*callback)(void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
///
/// Base class method implementation
///
/// @param self QListView*
/// @param dx int
/// @param dy int
///
void q_listview_super_scroll_contents_by(void* self, int dx, int dy);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
///
/// @param self QListView*
/// @param width int
/// @param height int
///
void q_listview_resize_contents(void* self, int width, int height);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
///
/// @param self const QListView*
///
QSize* q_listview_contents_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dataChanged)
///
/// @param self QListView*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void q_listview_data_changed(void* self, const void* topLeft, const void* bottomRight, libqt_list roles);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dataChanged)
///
/// Allows for overriding the related default method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list of int roles)
///
void q_listview_on_data_changed(void* self, void (*callback)(void*, const void*, const void*, libqt_list));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dataChanged)
///
/// Base class method implementation
///
/// @param self QListView*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void q_listview_super_data_changed(void* self, const void* topLeft, const void* bottomRight, libqt_list roles);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rowsInserted)
///
/// @param self QListView*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
///
void q_listview_rows_inserted(void* self, const void* parent, int start, int end);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rowsInserted)
///
/// Allows for overriding the related default method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QModelIndex* parent, int start, int end)
///
void q_listview_on_rows_inserted(void* self, void (*callback)(void*, const void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rowsInserted)
///
/// Base class method implementation
///
/// @param self QListView*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
///
void q_listview_super_rows_inserted(void* self, const void* parent, int start, int end);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
///
/// @param self QListView*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
///
void q_listview_rows_about_to_be_removed(void* self, const void* parent, int start, int end);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
///
/// Allows for overriding the related default method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QModelIndex* parent, int start, int end)
///
void q_listview_on_rows_about_to_be_removed(void* self, void (*callback)(void*, const void*, int, int));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
///
/// Base class method implementation
///
/// @param self QListView*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
///
void q_listview_super_rows_about_to_be_removed(void* self, const void* parent, int start, int end);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
///
/// @param self QListView*
/// @param e QMouseEvent*
///
void q_listview_mouse_move_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QMouseEvent* e)
///
void q_listview_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self QListView*
/// @param e QMouseEvent*
///
void q_listview_super_mouse_move_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
///
/// @param self QListView*
/// @param e QMouseEvent*
///
void q_listview_mouse_release_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QMouseEvent* e)
///
void q_listview_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self QListView*
/// @param e QMouseEvent*
///
void q_listview_super_mouse_release_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
///
/// @param self QListView*
/// @param e QWheelEvent*
///
void q_listview_wheel_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
///
/// Allows for overriding the related default method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QWheelEvent* e)
///
void q_listview_on_wheel_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
///
/// Base class method implementation
///
/// @param self QListView*
/// @param e QWheelEvent*
///
void q_listview_super_wheel_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
///
/// @param self QListView*
/// @param e QTimerEvent*
///
void q_listview_timer_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QTimerEvent* e)
///
void q_listview_on_timer_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
///
/// Base class method implementation
///
/// @param self QListView*
/// @param e QTimerEvent*
///
void q_listview_super_timer_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeEvent)
///
/// @param self QListView*
/// @param e QResizeEvent*
///
void q_listview_resize_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QResizeEvent* e)
///
void q_listview_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self QListView*
/// @param e QResizeEvent*
///
void q_listview_super_resize_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dragMoveEvent)
///
/// @param self QListView*
/// @param e QDragMoveEvent*
///
void q_listview_drag_move_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dragMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QDragMoveEvent* e)
///
void q_listview_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dragMoveEvent)
///
/// Base class method implementation
///
/// @param self QListView*
/// @param e QDragMoveEvent*
///
void q_listview_super_drag_move_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dragLeaveEvent)
///
/// @param self QListView*
/// @param e QDragLeaveEvent*
///
void q_listview_drag_leave_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dragLeaveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QDragLeaveEvent* e)
///
void q_listview_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dragLeaveEvent)
///
/// Base class method implementation
///
/// @param self QListView*
/// @param e QDragLeaveEvent*
///
void q_listview_super_drag_leave_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dropEvent)
///
/// @param self QListView*
/// @param e QDropEvent*
///
void q_listview_drop_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dropEvent)
///
/// Allows for overriding the related default method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QDropEvent* e)
///
void q_listview_on_drop_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dropEvent)
///
/// Base class method implementation
///
/// @param self QListView*
/// @param e QDropEvent*
///
void q_listview_super_drop_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#startDrag)
///
/// @param self QListView*
/// @param supportedActions flag of enum Qt__DropAction
///
void q_listview_start_drag(void* self, int32_t supportedActions);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#startDrag)
///
/// Allows for overriding the related default method
///
/// @param self QListView*
/// @param callback void func(QListView* self, flag of enum Qt__DropAction supportedActions)
///
void q_listview_on_start_drag(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#startDrag)
///
/// Base class method implementation
///
/// @param self QListView*
/// @param supportedActions flag of enum Qt__DropAction
///
void q_listview_super_start_drag(void* self, int32_t supportedActions);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
///
/// @param self const QListView*
/// @param option QStyleOptionViewItem*
///
void q_listview_init_view_item_option(const void* self, void* option);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
///
/// Allows for overriding the related default method
///
/// @param self const QListView*
/// @param callback void func(const QListView* self, QStyleOptionViewItem* option)
///
void q_listview_on_init_view_item_option(const void* self, void (*callback)(const void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
///
/// Base class method implementation
///
/// @param self const QListView*
/// @param option QStyleOptionViewItem*
///
void q_listview_super_init_view_item_option(const void* self, void* option);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#paintEvent)
///
/// @param self QListView*
/// @param e QPaintEvent*
///
void q_listview_paint_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QPaintEvent* e)
///
void q_listview_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#paintEvent)
///
/// Base class method implementation
///
/// @param self QListView*
/// @param e QPaintEvent*
///
void q_listview_super_paint_event(void* self, void* e);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
///
/// @param self const QListView*
///
int32_t q_listview_horizontal_offset(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
///
/// Allows for overriding the related default method
///
/// @param self const QListView*
/// @param callback int32_t func(const QListView* self)
///
void q_listview_on_horizontal_offset(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
///
/// Base class method implementation
///
/// @param self const QListView*
///
int32_t q_listview_super_horizontal_offset(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
///
/// @param self const QListView*
///
int32_t q_listview_vertical_offset(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
///
/// Allows for overriding the related default method
///
/// @param self const QListView*
/// @param callback int32_t func(const QListView* self)
///
void q_listview_on_vertical_offset(const void* self, int32_t (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
///
/// Base class method implementation
///
/// @param self const QListView*
///
int32_t q_listview_super_vertical_offset(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
///
/// @param self QListView*
/// @param cursorAction enum QAbstractItemView__CursorAction
/// @param modifiers flag of enum Qt__KeyboardModifier
///
QModelIndex* q_listview_move_cursor(void* self, int32_t cursorAction, int32_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
///
/// Allows for overriding the related default method
///
/// @param self QListView*
/// @param callback QModelIndex* func(QListView* self, enum QAbstractItemView__CursorAction cursorAction, flag of enum Qt__KeyboardModifier modifiers)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_listview_on_move_cursor(void* self, QModelIndex* (*callback)(void*, int32_t, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
///
/// Base class method implementation
///
/// @param self QListView*
/// @param cursorAction enum QAbstractItemView__CursorAction
/// @param modifiers flag of enum Qt__KeyboardModifier
///
QModelIndex* q_listview_super_move_cursor(void* self, int32_t cursorAction, int32_t modifiers);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
///
/// @param self const QListView*
/// @param index QModelIndex*
///
QRect* q_listview_rect_for_index(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
///
/// @param self QListView*
/// @param position QPoint*
/// @param index QModelIndex*
///
void q_listview_set_position_for_index(void* self, const void* position, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setSelection)
///
/// @param self QListView*
/// @param rect QRect*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
///
void q_listview_set_selection(void* self, const void* rect, int32_t command);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setSelection)
///
/// Allows for overriding the related default method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QRect* rect, flag of enum QItemSelectionModel__SelectionFlag command)
///
void q_listview_on_set_selection(void* self, void (*callback)(void*, const void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setSelection)
///
/// Base class method implementation
///
/// @param self QListView*
/// @param rect QRect*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
///
void q_listview_super_set_selection(void* self, const void* rect, int32_t command);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
///
/// @param self const QListView*
/// @param selection QItemSelection*
///
QRegion* q_listview_visual_region_for_selection(const void* self, const void* selection);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
///
/// Allows for overriding the related default method
///
/// @param self const QListView*
/// @param callback QRegion* func(const QListView* self, QItemSelection* selection)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_listview_on_visual_region_for_selection(const void* self, QRegion* (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
///
/// Base class method implementation
///
/// @param self const QListView*
/// @param selection QItemSelection*
///
QRegion* q_listview_super_visual_region_for_selection(const void* self, const void* selection);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
///
/// @param self const QListView*
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_listview_selected_indexes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
///
/// Allows for overriding the related default method
///
/// @param self const QListView*
/// @param callback libqt_list of QModelIndex* func(const QListView* self)
///
void q_listview_on_selected_indexes(const void* self, libqt_list (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
///
/// Base class method implementation
///
/// @param self const QListView*
///
/// @return libqt_list of QModelIndex*
///
libqt_list q_listview_super_selected_indexes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
///
/// @param self QListView*
///
void q_listview_update_geometries(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
///
/// Allows for overriding the related default method
///
/// @param self QListView*
/// @param callback void func(QListView* self)
///
void q_listview_on_update_geometries(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
///
/// Base class method implementation
///
/// @param self QListView*
///
void q_listview_super_update_geometries(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
///
/// @param self const QListView*
/// @param index QModelIndex*
///
bool q_listview_is_index_hidden(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
///
/// Allows for overriding the related default method
///
/// @param self const QListView*
/// @param callback bool func(const QListView* self, QModelIndex* index)
///
void q_listview_on_is_index_hidden(const void* self, bool (*callback)(const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
///
/// Base class method implementation
///
/// @param self const QListView*
/// @param index QModelIndex*
///
bool q_listview_super_is_index_hidden(const void* self, const void* index);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
///
/// @param self QListView*
/// @param selected QItemSelection*
/// @param deselected QItemSelection*
///
void q_listview_selection_changed(void* self, const void* selected, const void* deselected);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
///
/// Allows for overriding the related default method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QItemSelection* selected, QItemSelection* deselected)
///
void q_listview_on_selection_changed(void* self, void (*callback)(void*, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
///
/// Base class method implementation
///
/// @param self QListView*
/// @param selected QItemSelection*
/// @param deselected QItemSelection*
///
void q_listview_super_selection_changed(void* self, const void* selected, const void* deselected);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
///
/// @param self QListView*
/// @param current QModelIndex*
/// @param previous QModelIndex*
///
void q_listview_current_changed(void* self, const void* current, const void* previous);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
///
/// Allows for overriding the related default method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QModelIndex* current, QModelIndex* previous)
///
void q_listview_on_current_changed(void* self, void (*callback)(void*, const void*, const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
///
/// Base class method implementation
///
/// @param self QListView*
/// @param current QModelIndex*
/// @param previous QModelIndex*
///
void q_listview_super_current_changed(void* self, const void* current, const void* previous);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
///
/// @param self const QListView*
///
QSize* q_listview_viewport_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self const QListView*
/// @param callback QSize* func(const QListView* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_listview_on_viewport_size_hint(const void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
///
/// Base class method implementation
///
/// @param self const QListView*
///
QSize* q_listview_super_viewport_size_hint(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_listview_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_listview_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#model)
///
/// @param self const QListView*
///
QAbstractItemModel* q_listview_model(const void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
///
/// @param self const QListView*
///
QItemSelectionModel* q_listview_selection_model(const void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
///
/// @param self QListView*
/// @param delegate QAbstractItemDelegate*
///
void q_listview_set_item_delegate(void* self, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// @param self const QListView*
///
QAbstractItemDelegate* q_listview_item_delegate(const void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
///
/// @param self QListView*
/// @param mode enum QAbstractItemView__SelectionMode
///
void q_listview_set_selection_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
///
/// @param self const QListView*
///
/// @return enum QAbstractItemView__SelectionMode
///
int32_t q_listview_selection_mode(const void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
///
/// @param self QListView*
/// @param behavior enum QAbstractItemView__SelectionBehavior
///
void q_listview_set_selection_behavior(void* self, int32_t behavior);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
///
/// @param self const QListView*
///
/// @return enum QAbstractItemView__SelectionBehavior
///
int32_t q_listview_selection_behavior(const void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
///
/// @param self const QListView*
///
QModelIndex* q_listview_current_index(const void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
///
/// @param self const QListView*
///
QModelIndex* q_listview_root_index(const void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
///
/// @param self QListView*
/// @param triggers flag of enum QAbstractItemView__EditTrigger
///
void q_listview_set_edit_triggers(void* self, int32_t triggers);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
///
/// @param self const QListView*
///
/// @return flag of enum QAbstractItemView__EditTrigger
///
int32_t q_listview_edit_triggers(const void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
///
/// @param self QListView*
/// @param mode enum QAbstractItemView__ScrollMode
///
void q_listview_set_vertical_scroll_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
///
/// @param self const QListView*
///
/// @return enum QAbstractItemView__ScrollMode
///
int32_t q_listview_vertical_scroll_mode(const void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
///
/// @param self QListView*
///
void q_listview_reset_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
///
/// @param self QListView*
/// @param mode enum QAbstractItemView__ScrollMode
///
void q_listview_set_horizontal_scroll_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
///
/// @param self const QListView*
///
/// @return enum QAbstractItemView__ScrollMode
///
int32_t q_listview_horizontal_scroll_mode(const void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
///
/// @param self QListView*
///
void q_listview_reset_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
///
/// @param self QListView*
/// @param enable bool
///
void q_listview_set_auto_scroll(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
///
/// @param self const QListView*
///
bool q_listview_has_auto_scroll(const void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
///
/// @param self QListView*
/// @param margin int
///
void q_listview_set_auto_scroll_margin(void* self, int margin);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
///
/// @param self const QListView*
///
int32_t q_listview_auto_scroll_margin(const void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
///
/// @param self QListView*
/// @param enable bool
///
void q_listview_set_tab_key_navigation(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
///
/// @param self const QListView*
///
bool q_listview_tab_key_navigation(const void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
///
/// @param self QListView*
/// @param enable bool
///
void q_listview_set_drop_indicator_shown(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
///
/// @param self const QListView*
///
bool q_listview_show_drop_indicator(const void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
///
/// @param self QListView*
/// @param enable bool
///
void q_listview_set_drag_enabled(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
///
/// @param self const QListView*
///
bool q_listview_drag_enabled(const void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
///
/// @param self QListView*
/// @param overwrite bool
///
void q_listview_set_drag_drop_overwrite_mode(void* self, bool overwrite);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
///
/// @param self const QListView*
///
bool q_listview_drag_drop_overwrite_mode(const void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
///
/// @param self QListView*
/// @param behavior enum QAbstractItemView__DragDropMode
///
void q_listview_set_drag_drop_mode(void* self, int32_t behavior);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
///
/// @param self const QListView*
///
/// @return enum QAbstractItemView__DragDropMode
///
int32_t q_listview_drag_drop_mode(const void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
///
/// @param self QListView*
/// @param dropAction enum Qt__DropAction
///
void q_listview_set_default_drop_action(void* self, int32_t dropAction);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
///
/// @param self const QListView*
///
/// @return enum Qt__DropAction
///
int32_t q_listview_default_drop_action(const void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
///
/// @param self QListView*
/// @param enable bool
///
void q_listview_set_alternating_row_colors(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
///
/// @param self const QListView*
///
bool q_listview_alternating_row_colors(const void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
///
/// @param self QListView*
/// @param size QSize*
///
void q_listview_set_icon_size(void* self, const void* size);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
///
/// @param self const QListView*
///
QSize* q_listview_icon_size(const void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
///
/// @param self QListView*
/// @param mode enum Qt__TextElideMode
///
void q_listview_set_text_elide_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
///
/// @param self const QListView*
///
/// @return enum Qt__TextElideMode
///
int32_t q_listview_text_elide_mode(const void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
///
/// @param self const QListView*
/// @param index QModelIndex*
///
QSize* q_listview_size_hint_for_index(const void* self, const void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#openPersistentEditor)
///
/// @param self QListView*
/// @param index QModelIndex*
///
void q_listview_open_persistent_editor(void* self, const void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closePersistentEditor)
///
/// @param self QListView*
/// @param index QModelIndex*
///
void q_listview_close_persistent_editor(void* self, const void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#isPersistentEditorOpen)
///
/// @param self const QListView*
/// @param index QModelIndex*
///
bool q_listview_is_persistent_editor_open(const void* self, const void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
///
/// @param self QListView*
/// @param index QModelIndex*
/// @param widget QWidget*
///
void q_listview_set_index_widget(void* self, const void* index, void* widget);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
///
/// @param self const QListView*
/// @param index QModelIndex*
///
QWidget* q_listview_index_widget(const void* self, const void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
///
/// @param self QListView*
/// @param row int
/// @param delegate QAbstractItemDelegate*
///
void q_listview_set_item_delegate_for_row(void* self, int row, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
///
/// @param self const QListView*
/// @param row int
///
QAbstractItemDelegate* q_listview_item_delegate_for_row(const void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
///
/// @param self QListView*
/// @param column int
/// @param delegate QAbstractItemDelegate*
///
void q_listview_set_item_delegate_for_column(void* self, int column, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
///
/// @param self const QListView*
/// @param column int
///
QAbstractItemDelegate* q_listview_item_delegate_for_column(const void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// @param self const QListView*
/// @param index QModelIndex*
///
QAbstractItemDelegate* q_listview_item_delegate2(const void* self, const void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// @param self QListView*
/// @param index QModelIndex*
///
void q_listview_edit(void* self, const void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
///
/// @param self QListView*
///
void q_listview_clear_selection(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
///
/// @param self QListView*
/// @param index QModelIndex*
///
void q_listview_set_current_index(void* self, const void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
///
/// @param self QListView*
///
void q_listview_scroll_to_top(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
///
/// @param self QListView*
///
void q_listview_scroll_to_bottom(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#update)
///
/// @param self QListView*
/// @param index QModelIndex*
///
void q_listview_update(void* self, const void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// @param self QListView*
/// @param index QModelIndex*
///
void q_listview_pressed(void* self, const void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// @param self QListView*
/// @param callback void func(QListView* self, QModelIndex* index)
///
void q_listview_on_pressed(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// @param self QListView*
/// @param index QModelIndex*
///
void q_listview_clicked(void* self, const void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// @param self QListView*
/// @param callback void func(QListView* self, QModelIndex* index)
///
void q_listview_on_clicked(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// @param self QListView*
/// @param index QModelIndex*
///
void q_listview_double_clicked(void* self, const void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// @param self QListView*
/// @param callback void func(QListView* self, QModelIndex* index)
///
void q_listview_on_double_clicked(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// @param self QListView*
/// @param index QModelIndex*
///
void q_listview_activated(void* self, const void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// @param self QListView*
/// @param callback void func(QListView* self, QModelIndex* index)
///
void q_listview_on_activated(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// @param self QListView*
/// @param index QModelIndex*
///
void q_listview_entered(void* self, const void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// @param self QListView*
/// @param callback void func(QListView* self, QModelIndex* index)
///
void q_listview_on_entered(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// @param self QListView*
///
void q_listview_viewport_entered(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// @param self QListView*
/// @param callback void func(QListView* self)
///
void q_listview_on_viewport_entered(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// @param self QListView*
/// @param size QSize*
///
void q_listview_icon_size_changed(void* self, const void* size);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// @param self QListView*
/// @param callback void func(QListView* self, QSize* size)
///
void q_listview_on_icon_size_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// @param self const QListView*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t q_listview_vertical_scroll_bar_policy(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// @param self QListView*
/// @param verticalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void q_listview_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// @param self const QListView*
///
QScrollBar* q_listview_vertical_scroll_bar(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// @param self QListView*
/// @param scrollbar QScrollBar*
///
void q_listview_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// @param self const QListView*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t q_listview_horizontal_scroll_bar_policy(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// @param self QListView*
/// @param horizontalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void q_listview_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// @param self const QListView*
///
QScrollBar* q_listview_horizontal_scroll_bar(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// @param self QListView*
/// @param scrollbar QScrollBar*
///
void q_listview_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// @param self const QListView*
///
QWidget* q_listview_corner_widget(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// @param self QListView*
/// @param widget QWidget*
///
void q_listview_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// @param self QListView*
/// @param widget QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void q_listview_add_scroll_bar_widget(void* self, void* widget, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// @param self QListView*
/// @param alignment flag of enum Qt__AlignmentFlag
///
/// @return libqt_list of QWidget*
///
libqt_list q_listview_scroll_bar_widgets(void* self, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// @param self const QListView*
///
QWidget* q_listview_viewport(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// @param self QListView*
/// @param widget QWidget*
///
void q_listview_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// @param self const QListView*
///
QSize* q_listview_maximum_viewport_size(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// @param self const QListView*
///
/// @return enum QAbstractScrollArea__SizeAdjustPolicy
///
int32_t q_listview_size_adjust_policy(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// @param self QListView*
/// @param policy enum QAbstractScrollArea__SizeAdjustPolicy
///
void q_listview_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self const QListView*
///
int32_t q_listview_frame_style(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self QListView*
/// @param frameStyle int
///
void q_listview_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self const QListView*
///
int32_t q_listview_frame_width(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self const QListView*
///
/// @return enum QFrame__Shape
///
int32_t q_listview_frame_shape(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self QListView*
/// @param frameShape enum QFrame__Shape
///
void q_listview_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self const QListView*
///
/// @return enum QFrame__Shadow
///
int32_t q_listview_frame_shadow(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self QListView*
/// @param frameShadow enum QFrame__Shadow
///
void q_listview_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self const QListView*
///
int32_t q_listview_line_width(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self QListView*
/// @param lineWidth int
///
void q_listview_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self const QListView*
///
int32_t q_listview_mid_line_width(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self QListView*
/// @param midLineWidth int
///
void q_listview_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self const QListView*
///
QRect* q_listview_frame_rect(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self QListView*
/// @param frameRect QRect*
///
void q_listview_set_frame_rect(void* self, const void* frameRect);

/// Inherited from QWidget
///
/// Upcasts to a QPaintDevice object
///
/// @param self QListView*
///
QPaintDevice* q_listview_as_q_paint_device(void* self);

/// Inherited from QWidget
///
/// Downcasts to a QListView object
///
/// @param _qpaintdevice QPaintDevice*
///
QListView* q_listview_from_q_paint_device(void* _qpaintdevice);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self const QListView*
///
uintptr_t q_listview_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QListView*
///
void q_listview_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self const QListView*
///
uintptr_t q_listview_internal_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self const QListView*
///
uintptr_t q_listview_effective_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self const QListView*
///
QStyle* q_listview_style(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QListView*
/// @param style QStyle*
///
void q_listview_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self const QListView*
///
bool q_listview_is_top_level(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self const QListView*
///
bool q_listview_is_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self const QListView*
///
bool q_listview_is_modal(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self const QListView*
///
/// @return enum Qt__WindowModality
///
int32_t q_listview_window_modality(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QListView*
/// @param windowModality enum Qt__WindowModality
///
void q_listview_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self const QListView*
///
bool q_listview_is_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self const QListView*
/// @param param1 QWidget*
///
bool q_listview_is_enabled_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QListView*
/// @param enabled bool
///
void q_listview_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QListView*
/// @param disabled bool
///
void q_listview_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QListView*
/// @param windowModified bool
///
void q_listview_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self const QListView*
///
QRect* q_listview_frame_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self const QListView*
///
const QRect* q_listview_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self const QListView*
///
QRect* q_listview_normal_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self const QListView*
///
int32_t q_listview_x(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self const QListView*
///
int32_t q_listview_y(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self const QListView*
///
QPoint* q_listview_pos(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self const QListView*
///
QSize* q_listview_frame_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self const QListView*
///
QSize* q_listview_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self const QListView*
///
int32_t q_listview_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self const QListView*
///
int32_t q_listview_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self const QListView*
///
QRect* q_listview_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self const QListView*
///
QRect* q_listview_children_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self const QListView*
///
QRegion* q_listview_children_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self const QListView*
///
QSize* q_listview_minimum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self const QListView*
///
QSize* q_listview_maximum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self const QListView*
///
int32_t q_listview_minimum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self const QListView*
///
int32_t q_listview_minimum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self const QListView*
///
int32_t q_listview_maximum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self const QListView*
///
int32_t q_listview_maximum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QListView*
/// @param minimumSize QSize*
///
void q_listview_set_minimum_size(void* self, const void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QListView*
/// @param minw int
/// @param minh int
///
void q_listview_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QListView*
/// @param maximumSize QSize*
///
void q_listview_set_maximum_size(void* self, const void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QListView*
/// @param maxw int
/// @param maxh int
///
void q_listview_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QListView*
/// @param minw int
///
void q_listview_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QListView*
/// @param minh int
///
void q_listview_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QListView*
/// @param maxw int
///
void q_listview_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QListView*
/// @param maxh int
///
void q_listview_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self const QListView*
///
QSize* q_listview_size_increment(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QListView*
/// @param sizeIncrement QSize*
///
void q_listview_set_size_increment(void* self, const void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QListView*
/// @param w int
/// @param h int
///
void q_listview_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self const QListView*
///
QSize* q_listview_base_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QListView*
/// @param baseSize QSize*
///
void q_listview_set_base_size(void* self, const void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QListView*
/// @param basew int
/// @param baseh int
///
void q_listview_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QListView*
/// @param fixedSize QSize*
///
void q_listview_set_fixed_size(void* self, const void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QListView*
/// @param w int
/// @param h int
///
void q_listview_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QListView*
/// @param w int
///
void q_listview_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QListView*
/// @param h int
///
void q_listview_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const QListView*
/// @param param1 QPointF*
///
QPointF* q_listview_map_to_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const QListView*
/// @param param1 QPoint*
///
QPoint* q_listview_map_to_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const QListView*
/// @param param1 QPointF*
///
QPointF* q_listview_map_from_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const QListView*
/// @param param1 QPoint*
///
QPoint* q_listview_map_from_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const QListView*
/// @param param1 QPointF*
///
QPointF* q_listview_map_to_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const QListView*
/// @param param1 QPoint*
///
QPoint* q_listview_map_to_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const QListView*
/// @param param1 QPointF*
///
QPointF* q_listview_map_from_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const QListView*
/// @param param1 QPoint*
///
QPoint* q_listview_map_from_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const QListView*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_listview_map_to(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const QListView*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_listview_map_to2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const QListView*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* q_listview_map_from(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const QListView*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* q_listview_map_from2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self const QListView*
///
QWidget* q_listview_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self const QListView*
///
QWidget* q_listview_native_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self const QListView*
///
QWidget* q_listview_top_level_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self const QListView*
///
const QPalette* q_listview_palette(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QListView*
/// @param palette QPalette*
///
void q_listview_set_palette(void* self, const void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QListView*
/// @param backgroundRole enum QPalette__ColorRole
///
void q_listview_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self const QListView*
///
/// @return enum QPalette__ColorRole
///
int32_t q_listview_background_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QListView*
/// @param foregroundRole enum QPalette__ColorRole
///
void q_listview_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self const QListView*
///
/// @return enum QPalette__ColorRole
///
int32_t q_listview_foreground_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self const QListView*
///
const QFont* q_listview_font(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QListView*
/// @param font QFont*
///
void q_listview_set_font(void* self, const void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self const QListView*
///
QFontMetrics* q_listview_font_metrics(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self const QListView*
///
QFontInfo* q_listview_font_info(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self const QListView*
///
QCursor* q_listview_cursor(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QListView*
/// @param cursor QCursor*
///
void q_listview_set_cursor(void* self, const void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QListView*
///
void q_listview_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QListView*
/// @param enable bool
///
void q_listview_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self const QListView*
///
bool q_listview_has_mouse_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self const QListView*
///
bool q_listview_under_mouse(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QListView*
/// @param enable bool
///
void q_listview_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self const QListView*
///
bool q_listview_has_tablet_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QListView*
/// @param mask QBitmap*
///
void q_listview_set_mask(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QListView*
/// @param mask QRegion*
///
void q_listview_set_mask2(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self const QListView*
///
QRegion* q_listview_mask(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QListView*
///
void q_listview_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QListView*
/// @param target QPaintDevice*
///
void q_listview_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QListView*
/// @param painter QPainter*
///
void q_listview_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QListView*
///
QPixmap* q_listview_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self const QListView*
///
QGraphicsEffect* q_listview_graphics_effect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QListView*
/// @param effect QGraphicsEffect*
///
void q_listview_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QListView*
/// @param type enum Qt__GestureType
///
void q_listview_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QListView*
/// @param type enum Qt__GestureType
///
void q_listview_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QListView*
/// @param windowTitle const char*
///
void q_listview_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QListView*
/// @param styleSheet const char*
///
void q_listview_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QListView*
///
const char* q_listview_style_sheet(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QListView*
///
const char* q_listview_window_title(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QListView*
/// @param icon QIcon*
///
void q_listview_set_window_icon(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self const QListView*
///
QIcon* q_listview_window_icon(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QListView*
/// @param windowIconText const char*
///
void q_listview_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QListView*
///
const char* q_listview_window_icon_text(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QListView*
/// @param windowRole const char*
///
void q_listview_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QListView*
///
const char* q_listview_window_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QListView*
/// @param filePath const char*
///
void q_listview_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QListView*
///
const char* q_listview_window_file_path(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QListView*
/// @param level double
///
void q_listview_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self const QListView*
///
double q_listview_window_opacity(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self const QListView*
///
bool q_listview_is_window_modified(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QListView*
/// @param toolTip const char*
///
void q_listview_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QListView*
///
const char* q_listview_tool_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QListView*
/// @param msec int
///
void q_listview_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self const QListView*
///
int32_t q_listview_tool_tip_duration(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QListView*
/// @param statusTip const char*
///
void q_listview_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QListView*
///
const char* q_listview_status_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QListView*
/// @param whatsThis const char*
///
void q_listview_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QListView*
///
const char* q_listview_whats_this(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QListView*
///
const char* q_listview_accessible_name(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QListView*
/// @param name const char*
///
void q_listview_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QListView*
///
const char* q_listview_accessible_description(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QListView*
/// @param description const char*
///
void q_listview_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QListView*
/// @param direction enum Qt__LayoutDirection
///
void q_listview_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self const QListView*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_listview_layout_direction(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QListView*
///
void q_listview_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QListView*
/// @param locale QLocale*
///
void q_listview_set_locale(void* self, const void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self const QListView*
///
QLocale* q_listview_locale(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QListView*
///
void q_listview_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self const QListView*
///
bool q_listview_is_right_to_left(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self const QListView*
///
bool q_listview_is_left_to_right(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QListView*
///
void q_listview_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self const QListView*
///
bool q_listview_is_active_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QListView*
///
void q_listview_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QListView*
///
void q_listview_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QListView*
/// @param reason enum Qt__FocusReason
///
void q_listview_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self const QListView*
///
/// @return enum Qt__FocusPolicy
///
int32_t q_listview_focus_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QListView*
/// @param policy enum Qt__FocusPolicy
///
void q_listview_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self const QListView*
///
bool q_listview_has_focus(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void q_listview_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QListView*
/// @param focusProxy QWidget*
///
void q_listview_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self const QListView*
///
QWidget* q_listview_focus_proxy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self const QListView*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t q_listview_context_menu_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QListView*
/// @param policy enum Qt__ContextMenuPolicy
///
void q_listview_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QListView*
///
void q_listview_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QListView*
/// @param param1 QCursor*
///
void q_listview_grab_mouse2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QListView*
///
void q_listview_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QListView*
///
void q_listview_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QListView*
///
void q_listview_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QListView*
/// @param key QKeySequence*
///
int32_t q_listview_grab_shortcut(void* self, const void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QListView*
/// @param id int
///
void q_listview_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QListView*
/// @param id int
///
void q_listview_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QListView*
/// @param id int
///
void q_listview_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_listview_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_listview_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self const QListView*
///
bool q_listview_updates_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QListView*
/// @param enable bool
///
void q_listview_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self const QListView*
///
QGraphicsProxyWidget* q_listview_graphics_proxy_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QListView*
///
void q_listview_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QListView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_listview_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QListView*
/// @param param1 QRect*
///
void q_listview_update3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QListView*
/// @param param1 QRegion*
///
void q_listview_update4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QListView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_listview_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QListView*
/// @param param1 QRect*
///
void q_listview_repaint3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QListView*
/// @param param1 QRegion*
///
void q_listview_repaint4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QListView*
/// @param hidden bool
///
void q_listview_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QListView*
///
void q_listview_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QListView*
///
void q_listview_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QListView*
///
void q_listview_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QListView*
///
void q_listview_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QListView*
///
void q_listview_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QListView*
///
void q_listview_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QListView*
///
bool q_listview_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QListView*
///
void q_listview_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QListView*
///
void q_listview_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QListView*
/// @param param1 QWidget*
///
void q_listview_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QListView*
/// @param x int
/// @param y int
///
void q_listview_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QListView*
/// @param param1 QPoint*
///
void q_listview_move2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QListView*
/// @param w int
/// @param h int
///
void q_listview_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QListView*
/// @param param1 QSize*
///
void q_listview_resize2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QListView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void q_listview_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QListView*
/// @param geometry QRect*
///
void q_listview_set_geometry2(void* self, const void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QListView*
///
char* q_listview_save_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QListView*
/// @param geometry char*
///
bool q_listview_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QListView*
///
void q_listview_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self const QListView*
///
bool q_listview_is_visible(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self const QListView*
/// @param param1 QWidget*
///
bool q_listview_is_visible_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self const QListView*
///
bool q_listview_is_hidden(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self const QListView*
///
bool q_listview_is_minimized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self const QListView*
///
bool q_listview_is_maximized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self const QListView*
///
bool q_listview_is_full_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self const QListView*
///
/// @return flag of enum Qt__WindowState
///
int32_t q_listview_window_state(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QListView*
/// @param state flag of enum Qt__WindowState
///
void q_listview_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QListView*
/// @param state flag of enum Qt__WindowState
///
void q_listview_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self const QListView*
///
QSizePolicy* q_listview_size_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QListView*
/// @param sizePolicy QSizePolicy*
///
void q_listview_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QListView*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void q_listview_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self const QListView*
///
QRegion* q_listview_visible_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QListView*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_listview_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QListView*
/// @param margins QMargins*
///
void q_listview_set_contents_margins2(void* self, const void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self const QListView*
///
QMargins* q_listview_contents_margins(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self const QListView*
///
QRect* q_listview_contents_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self const QListView*
///
QLayout* q_listview_layout(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QListView*
/// @param layout QLayout*
///
void q_listview_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QListView*
///
void q_listview_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QListView*
/// @param parent QWidget*
///
void q_listview_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QListView*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void q_listview_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QListView*
/// @param dx int
/// @param dy int
///
void q_listview_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QListView*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void q_listview_scroll2(void* self, int dx, int dy, const void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self const QListView*
///
QWidget* q_listview_focus_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self const QListView*
///
QWidget* q_listview_next_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self const QListView*
///
QWidget* q_listview_previous_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self const QListView*
///
bool q_listview_accept_drops(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QListView*
/// @param on bool
///
void q_listview_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QListView*
/// @param action QAction*
///
void q_listview_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QListView*
/// @param actions libqt_list of QAction*
///
void q_listview_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QListView*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void q_listview_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QListView*
/// @param before QAction*
/// @param action QAction*
///
void q_listview_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QListView*
/// @param action QAction*
///
void q_listview_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self const QListView*
///
/// @return libqt_list of QAction*
///
libqt_list q_listview_actions(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QListView*
/// @param text const char*
///
QAction* q_listview_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QListView*
/// @param icon QIcon*
/// @param text const char*
///
QAction* q_listview_add_action3(void* self, const void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QListView*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_listview_add_action4(void* self, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QListView*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* q_listview_add_action5(void* self, const void* icon, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self const QListView*
///
QWidget* q_listview_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QListView*
/// @param type flag of enum Qt__WindowType
///
void q_listview_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self const QListView*
///
/// @return flag of enum Qt__WindowType
///
int32_t q_listview_window_flags(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QListView*
/// @param param1 enum Qt__WindowType
///
void q_listview_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QListView*
/// @param type flag of enum Qt__WindowType
///
void q_listview_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self const QListView*
///
/// @return enum Qt__WindowType
///
int32_t q_listview_window_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uintptr_t
///
QWidget* q_listview_find(uintptr_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QListView*
/// @param x int
/// @param y int
///
QWidget* q_listview_child_at(const void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QListView*
/// @param p QPoint*
///
QWidget* q_listview_child_at2(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const QListView*
/// @param p QPointF*
///
QWidget* q_listview_child_at3(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QListView*
/// @param param1 enum Qt__WidgetAttribute
///
void q_listview_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self const QListView*
/// @param param1 enum Qt__WidgetAttribute
///
bool q_listview_test_attribute(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self const QListView*
///
void q_listview_ensure_polished(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self const QListView*
/// @param child QWidget*
///
bool q_listview_is_ancestor_of(const void* self, const void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self const QListView*
///
bool q_listview_auto_fill_background(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QListView*
/// @param enabled bool
///
void q_listview_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self const QListView*
///
QBackingStore* q_listview_backing_store(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self const QListView*
///
QWindow* q_listview_window_handle(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self const QListView*
///
QScreen* q_listview_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QListView*
/// @param screen QScreen*
///
void q_listview_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* q_listview_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QListView*
/// @param title const char*
///
void q_listview_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QListView*
/// @param callback void func(QListView* self, const char* title)
///
void q_listview_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QListView*
/// @param icon QIcon*
///
void q_listview_window_icon_changed(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QListView*
/// @param callback void func(QListView* self, QIcon* icon)
///
void q_listview_on_window_icon_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QListView*
/// @param iconText const char*
///
void q_listview_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QListView*
/// @param callback void func(QListView* self, const char* iconText)
///
void q_listview_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QListView*
/// @param pos QPoint*
///
void q_listview_custom_context_menu_requested(void* self, const void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QListView*
/// @param callback void func(QListView* self, QPoint* pos)
///
void q_listview_on_custom_context_menu_requested(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self const QListView*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t q_listview_input_method_hints(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QListView*
/// @param hints flag of enum Qt__InputMethodHint
///
void q_listview_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QListView*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void q_listview_render22(void* self, void* target, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QListView*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_listview_render3(void* self, void* target, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QListView*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_listview_render4(void* self, void* target, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QListView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void q_listview_render23(void* self, void* painter, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QListView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void q_listview_render32(void* self, void* painter, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QListView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void q_listview_render42(void* self, void* painter, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QListView*
/// @param rectangle QRect*
///
QPixmap* q_listview_grab1(void* self, const void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QListView*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void q_listview_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QListView*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t q_listview_grab_shortcut2(void* self, const void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QListView*
/// @param id int
/// @param enable bool
///
void q_listview_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QListView*
/// @param id int
/// @param enable bool
///
void q_listview_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QListView*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void q_listview_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QListView*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void q_listview_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* q_listview_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* q_listview_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QListView*
///
const char* q_listview_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QListView*
/// @param name const char*
///
void q_listview_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QListView*
///
bool q_listview_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QListView*
///
bool q_listview_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QListView*
///
bool q_listview_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QListView*
///
bool q_listview_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QListView*
/// @param b bool
///
bool q_listview_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QListView*
///
QThread* q_listview_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QListView*
/// @param thread QThread*
///
bool q_listview_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QListView*
/// @param interval int
///
int32_t q_listview_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QListView*
/// @param time int64_t of nanoseconds
///
int32_t q_listview_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QListView*
/// @param id int
///
void q_listview_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QListView*
/// @param id enum Qt__TimerId
///
void q_listview_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QListView*
///
/// @return libqt_list of QObject*
///
libqt_list q_listview_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QListView*
/// @param filterObj QObject*
///
void q_listview_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QListView*
/// @param obj QObject*
///
void q_listview_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_listview_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_listview_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QListView*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_listview_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_listview_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_listview_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QListView*
///
bool q_listview_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QListView*
/// @param receiver QObject*
///
bool q_listview_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_listview_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QListView*
///
void q_listview_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QListView*
///
void q_listview_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QListView*
/// @param name const char*
/// @param value QVariant*
///
bool q_listview_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QListView*
/// @param name const char*
///
QVariant* q_listview_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QListView*
///
const char** q_listview_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QListView*
///
QBindingStorage* q_listview_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QListView*
///
const QBindingStorage* q_listview_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QListView*
///
void q_listview_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QListView*
/// @param callback void func(QListView* self)
///
void q_listview_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QListView*
///
QObject* q_listview_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QListView*
/// @param classname const char*
///
bool q_listview_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QListView*
///
void q_listview_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QListView*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_listview_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QListView*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_listview_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_listview_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_listview_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QListView*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_listview_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QListView*
/// @param signal const char*
///
bool q_listview_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QListView*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_listview_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QListView*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_listview_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QListView*
/// @param receiver QObject*
/// @param member const char*
///
bool q_listview_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QListView*
/// @param param1 QObject*
///
void q_listview_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QListView*
/// @param callback void func(QListView* self, QObject* param1)
///
void q_listview_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const QListView*
///
bool q_listview_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const QListView*
///
int32_t q_listview_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const QListView*
///
int32_t q_listview_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const QListView*
///
int32_t q_listview_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const QListView*
///
int32_t q_listview_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const QListView*
///
int32_t q_listview_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const QListView*
///
int32_t q_listview_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self const QListView*
///
double q_listview_device_pixel_ratio(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const QListView*
///
double q_listview_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const QListView*
///
int32_t q_listview_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const QListView*
///
int32_t q_listview_depth(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_listview_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_listview_encode_metric_f(int32_t metric, double value);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param model QAbstractItemModel*
///
void q_listview_set_model(void* self, void* model);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param model QAbstractItemModel*
///
void q_listview_super_set_model(void* self, void* model);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QAbstractItemModel* model)
///
void q_listview_on_set_model(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param selectionModel QItemSelectionModel*
///
void q_listview_set_selection_model(void* self, void* selectionModel);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param selectionModel QItemSelectionModel*
///
void q_listview_super_set_selection_model(void* self, void* selectionModel);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QItemSelectionModel* selectionModel)
///
void q_listview_on_set_selection_model(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param search const char*
///
void q_listview_keyboard_search(void* self, const char* search);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param search const char*
///
void q_listview_super_keyboard_search(void* self, const char* search);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, const char* search)
///
void q_listview_on_keyboard_search(void* self, void (*callback)(void*, const char*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QListView*
/// @param row int
///
int32_t q_listview_size_hint_for_row(const void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QListView*
/// @param row int
///
int32_t q_listview_super_size_hint_for_row(const void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QListView*
/// @param callback int32_t func(QListView* self, int row)
///
void q_listview_on_size_hint_for_row(const void* self, int32_t (*callback)(const void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QListView*
/// @param column int
///
int32_t q_listview_size_hint_for_column(const void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QListView*
/// @param column int
///
int32_t q_listview_super_size_hint_for_column(const void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QListView*
/// @param callback int32_t func(QListView* self, int column)
///
void q_listview_on_size_hint_for_column(const void* self, int32_t (*callback)(const void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QListView*
/// @param index QModelIndex*
///
QAbstractItemDelegate* q_listview_item_delegate_for_index(const void* self, const void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QListView*
/// @param index QModelIndex*
///
QAbstractItemDelegate* q_listview_super_item_delegate_for_index(const void* self, const void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QListView*
/// @param callback QAbstractItemDelegate* func(QListView* self, QModelIndex* index)
///
void q_listview_on_item_delegate_for_index(const void* self, QAbstractItemDelegate* (*callback)(const void*, const void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QListView*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_listview_input_method_query(const void* self, int32_t query);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QListView*
/// @param query enum Qt__InputMethodQuery
///
QVariant* q_listview_super_input_method_query(const void* self, int32_t query);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QListView*
/// @param callback QVariant* func(QListView* self, enum Qt__InputMethodQuery query)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_listview_on_input_method_query(const void* self, QVariant* (*callback)(const void*, int32_t));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
///
void q_listview_select_all(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
///
void q_listview_super_select_all(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self)
///
void q_listview_on_select_all(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
///
void q_listview_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
///
void q_listview_super_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self)
///
void q_listview_on_update_editor_data(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
///
void q_listview_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
///
void q_listview_super_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self)
///
void q_listview_on_update_editor_geometries(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param action int
///
void q_listview_vertical_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param action int
///
void q_listview_super_vertical_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, int action)
///
void q_listview_on_vertical_scrollbar_action(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param action int
///
void q_listview_horizontal_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param action int
///
void q_listview_super_horizontal_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, int action)
///
void q_listview_on_horizontal_scrollbar_action(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param value int
///
void q_listview_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param value int
///
void q_listview_super_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, int value)
///
void q_listview_on_vertical_scrollbar_value_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param value int
///
void q_listview_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param value int
///
void q_listview_super_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, int value)
///
void q_listview_on_horizontal_scrollbar_value_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param editor QWidget*
/// @param hint enum QAbstractItemDelegate__EndEditHint
///
void q_listview_close_editor(void* self, void* editor, int32_t hint);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param editor QWidget*
/// @param hint enum QAbstractItemDelegate__EndEditHint
///
void q_listview_super_close_editor(void* self, void* editor, int32_t hint);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint)
///
void q_listview_on_close_editor(void* self, void (*callback)(void*, void*, int32_t));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param editor QWidget*
///
void q_listview_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param editor QWidget*
///
void q_listview_super_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QWidget* editor)
///
void q_listview_on_commit_data(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param editor QObject*
///
void q_listview_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param editor QObject*
///
void q_listview_super_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QObject* editor)
///
void q_listview_on_editor_destroyed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param index QModelIndex*
/// @param trigger enum QAbstractItemView__EditTrigger
/// @param event QEvent*
///
bool q_listview_edit2(void* self, const void* index, int32_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param index QModelIndex*
/// @param trigger enum QAbstractItemView__EditTrigger
/// @param event QEvent*
///
bool q_listview_super_edit2(void* self, const void* index, int32_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback bool func(QListView* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event)
///
void q_listview_on_edit2(void* self, bool (*callback)(void*, const void*, int32_t, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QListView*
/// @param index QModelIndex*
/// @param event QEvent*
///
/// @return flag of enum QItemSelectionModel__SelectionFlag
///
int32_t q_listview_selection_command(const void* self, const void* index, const void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QListView*
/// @param index QModelIndex*
/// @param event QEvent*
///
/// @return flag of enum QItemSelectionModel__SelectionFlag
///
int32_t q_listview_super_selection_command(const void* self, const void* index, const void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QListView*
/// @param callback int32_t func(QListView* self, QModelIndex* index, QEvent* event)
///
void q_listview_on_selection_command(const void* self, int32_t (*callback)(const void*, const void*, const void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param next bool
///
bool q_listview_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param next bool
///
bool q_listview_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback bool func(QListView* self, bool next)
///
void q_listview_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param event QEvent*
///
bool q_listview_viewport_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param event QEvent*
///
bool q_listview_super_viewport_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback bool func(QListView* self, QEvent* event)
///
void q_listview_on_viewport_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param event QMouseEvent*
///
void q_listview_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param event QMouseEvent*
///
void q_listview_super_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QMouseEvent* event)
///
void q_listview_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param event QMouseEvent*
///
void q_listview_mouse_double_click_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param event QMouseEvent*
///
void q_listview_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QMouseEvent* event)
///
void q_listview_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param event QDragEnterEvent*
///
void q_listview_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param event QDragEnterEvent*
///
void q_listview_super_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QDragEnterEvent* event)
///
void q_listview_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param event QFocusEvent*
///
void q_listview_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param event QFocusEvent*
///
void q_listview_super_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QFocusEvent* event)
///
void q_listview_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param event QFocusEvent*
///
void q_listview_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param event QFocusEvent*
///
void q_listview_super_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QFocusEvent* event)
///
void q_listview_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param event QKeyEvent*
///
void q_listview_key_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param event QKeyEvent*
///
void q_listview_super_key_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QKeyEvent* event)
///
void q_listview_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param event QInputMethodEvent*
///
void q_listview_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param event QInputMethodEvent*
///
void q_listview_super_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QInputMethodEvent* event)
///
void q_listview_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param object QObject*
/// @param event QEvent*
///
bool q_listview_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param object QObject*
/// @param event QEvent*
///
bool q_listview_super_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback bool func(QListView* self, QObject* object, QEvent* event)
///
void q_listview_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QListView*
///
QSize* q_listview_minimum_size_hint(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QListView*
///
QSize* q_listview_super_minimum_size_hint(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QListView*
/// @param callback QSize* func(QListView* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_listview_on_minimum_size_hint(const void* self, QSize* (*callback)(const void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QListView*
///
QSize* q_listview_size_hint(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QListView*
///
QSize* q_listview_super_size_hint(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QListView*
/// @param callback QSize* func(QListView* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_listview_on_size_hint(const void* self, QSize* (*callback)(const void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param viewport QWidget*
///
void q_listview_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param viewport QWidget*
///
void q_listview_super_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QWidget* viewport)
///
void q_listview_on_setup_viewport(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param param1 QContextMenuEvent*
///
void q_listview_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param param1 QContextMenuEvent*
///
void q_listview_super_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QContextMenuEvent* param1)
///
void q_listview_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param param1 QEvent*
///
void q_listview_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param param1 QEvent*
///
void q_listview_super_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QEvent* param1)
///
void q_listview_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QListView*
/// @param option QStyleOptionFrame*
///
void q_listview_init_style_option(const void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QListView*
/// @param option QStyleOptionFrame*
///
void q_listview_super_init_style_option(const void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QListView*
/// @param callback void func(QListView* self, QStyleOptionFrame* option)
///
void q_listview_on_init_style_option(const void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QListView*
///
int32_t q_listview_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QListView*
///
int32_t q_listview_super_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QListView*
/// @param callback int32_t func(QListView* self)
///
void q_listview_on_dev_type(const void* self, int32_t (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param visible bool
///
void q_listview_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param visible bool
///
void q_listview_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, bool visible)
///
void q_listview_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QListView*
/// @param param1 int
///
int32_t q_listview_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QListView*
/// @param param1 int
///
int32_t q_listview_super_height_for_width(const void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QListView*
/// @param callback int32_t func(QListView* self, int param1)
///
void q_listview_on_height_for_width(const void* self, int32_t (*callback)(const void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QListView*
///
bool q_listview_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QListView*
///
bool q_listview_super_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QListView*
/// @param callback bool func(QListView* self)
///
void q_listview_on_has_height_for_width(const void* self, bool (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QListView*
///
QPaintEngine* q_listview_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QListView*
///
QPaintEngine* q_listview_super_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QListView*
/// @param callback QPaintEngine* func(QListView* self)
///
void q_listview_on_paint_engine(const void* self, QPaintEngine* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param event QKeyEvent*
///
void q_listview_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param event QKeyEvent*
///
void q_listview_super_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QKeyEvent* event)
///
void q_listview_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param event QEnterEvent*
///
void q_listview_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param event QEnterEvent*
///
void q_listview_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QEnterEvent* event)
///
void q_listview_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param event QEvent*
///
void q_listview_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param event QEvent*
///
void q_listview_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QEvent* event)
///
void q_listview_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param event QMoveEvent*
///
void q_listview_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param event QMoveEvent*
///
void q_listview_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QMoveEvent* event)
///
void q_listview_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param event QCloseEvent*
///
void q_listview_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param event QCloseEvent*
///
void q_listview_super_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QCloseEvent* event)
///
void q_listview_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param event QTabletEvent*
///
void q_listview_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param event QTabletEvent*
///
void q_listview_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QTabletEvent* event)
///
void q_listview_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param event QActionEvent*
///
void q_listview_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param event QActionEvent*
///
void q_listview_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QActionEvent* event)
///
void q_listview_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param event QShowEvent*
///
void q_listview_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param event QShowEvent*
///
void q_listview_super_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QShowEvent* event)
///
void q_listview_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param event QHideEvent*
///
void q_listview_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param event QHideEvent*
///
void q_listview_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QHideEvent* event)
///
void q_listview_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_listview_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool q_listview_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback bool func(QListView* self, libqt_string eventType, void* message, intptr_t* result)
///
void q_listview_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QListView*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_listview_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QListView*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t q_listview_super_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QListView*
/// @param callback int32_t func(QListView* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void q_listview_on_metric(const void* self, int32_t (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QListView*
/// @param painter QPainter*
///
void q_listview_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QListView*
/// @param painter QPainter*
///
void q_listview_super_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QListView*
/// @param callback void func(QListView* self, QPainter* painter)
///
void q_listview_on_init_painter(const void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QListView*
/// @param offset QPoint*
///
QPaintDevice* q_listview_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QListView*
/// @param offset QPoint*
///
QPaintDevice* q_listview_super_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QListView*
/// @param callback QPaintDevice* func(QListView* self, QPoint* offset)
///
void q_listview_on_redirected(const void* self, QPaintDevice* (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QListView*
///
QPainter* q_listview_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QListView*
///
QPainter* q_listview_super_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QListView*
/// @param callback QPainter* func(QListView* self)
///
void q_listview_on_shared_painter(const void* self, QPainter* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param event QChildEvent*
///
void q_listview_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param event QChildEvent*
///
void q_listview_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QChildEvent* event)
///
void q_listview_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param event QEvent*
///
void q_listview_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param event QEvent*
///
void q_listview_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QEvent* event)
///
void q_listview_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param signal QMetaMethod*
///
void q_listview_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param signal QMetaMethod*
///
void q_listview_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QMetaMethod* signal)
///
void q_listview_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param signal QMetaMethod*
///
void q_listview_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param signal QMetaMethod*
///
void q_listview_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QMetaMethod* signal)
///
void q_listview_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QListView*
///
/// @return enum QAbstractItemView__State
///
int32_t q_listview_state(const void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QListView*
///
/// @return enum QAbstractItemView__State
///
int32_t q_listview_super_state(const void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QListView*
/// @param callback int32_t func(QListView* self)
///
void q_listview_on_state(const void* self, int32_t (*callback)(const void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param state enum QAbstractItemView__State
///
void q_listview_set_state(void* self, int32_t state);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param state enum QAbstractItemView__State
///
void q_listview_super_set_state(void* self, int32_t state);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, enum QAbstractItemView__State state)
///
void q_listview_on_set_state(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
///
void q_listview_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
///
void q_listview_super_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self)
///
void q_listview_on_schedule_delayed_items_layout(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
///
void q_listview_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
///
void q_listview_super_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self)
///
void q_listview_on_execute_delayed_items_layout(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param region QRegion*
///
void q_listview_set_dirty_region(void* self, const void* region);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param region QRegion*
///
void q_listview_super_set_dirty_region(void* self, const void* region);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QRegion* region)
///
void q_listview_on_set_dirty_region(void* self, void (*callback)(void*, const void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param dx int
/// @param dy int
///
void q_listview_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param dx int
/// @param dy int
///
void q_listview_super_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, int dx, int dy)
///
void q_listview_on_scroll_dirty_region(void* self, void (*callback)(void*, int, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QListView*
///
QPoint* q_listview_dirty_region_offset(const void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QListView*
///
QPoint* q_listview_super_dirty_region_offset(const void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QListView*
/// @param callback QPoint* func(QListView* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_listview_on_dirty_region_offset(const void* self, QPoint* (*callback)(const void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
///
void q_listview_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
///
void q_listview_super_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self)
///
void q_listview_on_start_auto_scroll(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
///
void q_listview_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
///
void q_listview_super_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self)
///
void q_listview_on_stop_auto_scroll(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
///
void q_listview_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
///
void q_listview_super_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self)
///
void q_listview_on_do_auto_scroll(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QListView*
///
/// @return enum QAbstractItemView__DropIndicatorPosition
///
int32_t q_listview_drop_indicator_position(const void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QListView*
///
/// @return enum QAbstractItemView__DropIndicatorPosition
///
int32_t q_listview_super_drop_indicator_position(const void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QListView*
/// @param callback int32_t func(QListView* self)
///
void q_listview_on_drop_indicator_position(const void* self, int32_t (*callback)(const void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_listview_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void q_listview_super_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, int left, int top, int right, int bottom)
///
void q_listview_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QListView*
///
QMargins* q_listview_viewport_margins(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QListView*
///
QMargins* q_listview_super_viewport_margins(const void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QListView*
/// @param callback QMargins* func(QListView* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void q_listview_on_viewport_margins(const void* self, QMargins* (*callback)(const void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
/// @param param1 QPainter*
///
void q_listview_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
/// @param param1 QPainter*
///
void q_listview_super_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self, QPainter* param1)
///
void q_listview_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
///
void q_listview_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
///
void q_listview_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self)
///
void q_listview_on_update_micro_focus(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
///
void q_listview_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
///
void q_listview_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self)
///
void q_listview_on_create(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
///
void q_listview_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
///
void q_listview_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback void func(QListView* self)
///
void q_listview_on_destroy(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
///
bool q_listview_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
///
bool q_listview_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback bool func(QListView* self)
///
void q_listview_on_focus_next_child(void* self, bool (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QListView*
///
bool q_listview_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QListView*
///
bool q_listview_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QListView*
/// @param callback bool func(QListView* self)
///
void q_listview_on_focus_previous_child(void* self, bool (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QListView*
///
QObject* q_listview_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QListView*
///
QObject* q_listview_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QListView*
/// @param callback QObject* func(QListView* self)
///
void q_listview_on_sender(const void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QListView*
///
int32_t q_listview_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QListView*
///
int32_t q_listview_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QListView*
/// @param callback int32_t func(QListView* self)
///
void q_listview_on_sender_signal_index(const void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QListView*
/// @param signal const char*
///
int32_t q_listview_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QListView*
/// @param signal const char*
///
int32_t q_listview_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QListView*
/// @param callback int32_t func(QListView* self, const char* signal)
///
void q_listview_on_receivers(const void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QListView*
/// @param signal QMetaMethod*
///
bool q_listview_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QListView*
/// @param signal QMetaMethod*
///
bool q_listview_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QListView*
/// @param callback bool func(QListView* self, QMetaMethod* signal)
///
void q_listview_on_is_signal_connected(const void* self, bool (*callback)(const void*, const void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const QListView*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_listview_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const QListView*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_listview_super_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self const QListView*
/// @param callback double func(QListView* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_listview_on_get_decoded_metric_f(const void* self, double (*callback)(const void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QListView*
/// @param callback void func(QListView* self, const char* objectName)
///
void q_listview_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dtor.QListView)
///
/// Delete this object from C++ memory.
///
/// @param self QListView*
///
void q_listview_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#public-types)

typedef enum {
    QLISTVIEW_MOVEMENT_STATIC = 0,
    QLISTVIEW_MOVEMENT_FREE = 1,
    QLISTVIEW_MOVEMENT_SNAP = 2
} QListView__Movement;

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#public-types)

typedef enum {
    QLISTVIEW_FLOW_LEFTTORIGHT = 0,
    QLISTVIEW_FLOW_TOPTOBOTTOM = 1
} QListView__Flow;

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#public-types)

typedef enum {
    QLISTVIEW_RESIZEMODE_FIXED = 0,
    QLISTVIEW_RESIZEMODE_ADJUST = 1
} QListView__ResizeMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#public-types)

typedef enum {
    QLISTVIEW_LAYOUTMODE_SINGLEPASS = 0,
    QLISTVIEW_LAYOUTMODE_BATCHED = 1
} QListView__LayoutMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#public-types)

typedef enum {
    QLISTVIEW_VIEWMODE_LISTMODE = 0,
    QLISTVIEW_VIEWMODE_ICONMODE = 1
} QListView__ViewMode;

#endif
