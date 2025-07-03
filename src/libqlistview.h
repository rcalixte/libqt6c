#pragma once
#ifndef SRCQT6C_LIBQLISTVIEW_H
#define SRCQT6C_LIBQLISTVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractitemdelegate.h"
#include "libqabstractitemmodel.h"
#include "libqabstractitemview.h"
#include "libqabstractscrollarea.h"
#include "libqevent.h"
#include "libqframe.h"
#include "libqitemselectionmodel.h"
#include "libqmargins.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpaintdevice.h"
#include "libqpaintengine.h"
#include "libqpainter.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqregion.h"
#include "libqsize.h"
#include <string.h>
#include "libqstyleoption.h"
#include "libqvariant.h"
#include "libqwidget.h"

/// https://doc.qt.io/qt-6/qlistview.html

/// q_listview_new constructs a new QListView object.
///
/// ``` QWidget* parent ```
QListView* q_listview_new(void* parent);

/// q_listview_new2 constructs a new QListView object.
///
///
QListView* q_listview_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QListView* self ```
const QMetaObject* q_listview_meta_object(void* self);

/// ``` QListView* self, const char* param1 ```
void* q_listview_metacast(void* self, const char* param1);

/// ``` QListView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_listview_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QListView* self, int32_t (*slot)(QListView*, enum QMetaObject__Call, int, void*) ```
void q_listview_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QListView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_listview_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_listview_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setMovement)
///
/// ``` QListView* self, enum QListView__Movement movement ```
void q_listview_set_movement(void* self, int64_t movement);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#movement)
///
/// ``` QListView* self ```
int64_t q_listview_movement(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setFlow)
///
/// ``` QListView* self, enum QListView__Flow flow ```
void q_listview_set_flow(void* self, int64_t flow);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#flow)
///
/// ``` QListView* self ```
int64_t q_listview_flow(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setWrapping)
///
/// ``` QListView* self, bool enable ```
void q_listview_set_wrapping(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isWrapping)
///
/// ``` QListView* self ```
bool q_listview_is_wrapping(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setResizeMode)
///
/// ``` QListView* self, enum QListView__ResizeMode mode ```
void q_listview_set_resize_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeMode)
///
/// ``` QListView* self ```
int64_t q_listview_resize_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setLayoutMode)
///
/// ``` QListView* self, enum QListView__LayoutMode mode ```
void q_listview_set_layout_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#layoutMode)
///
/// ``` QListView* self ```
int64_t q_listview_layout_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSpacing)
///
/// ``` QListView* self, int space ```
void q_listview_set_spacing(void* self, int space);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#spacing)
///
/// ``` QListView* self ```
int32_t q_listview_spacing(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setBatchSize)
///
/// ``` QListView* self, int batchSize ```
void q_listview_set_batch_size(void* self, int batchSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#batchSize)
///
/// ``` QListView* self ```
int32_t q_listview_batch_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setGridSize)
///
/// ``` QListView* self, QSize* size ```
void q_listview_set_grid_size(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#gridSize)
///
/// ``` QListView* self ```
QSize* q_listview_grid_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setViewMode)
///
/// ``` QListView* self, enum QListView__ViewMode mode ```
void q_listview_set_view_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#viewMode)
///
/// ``` QListView* self ```
int64_t q_listview_view_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#clearPropertyFlags)
///
/// ``` QListView* self ```
void q_listview_clear_property_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isRowHidden)
///
/// ``` QListView* self, int row ```
bool q_listview_is_row_hidden(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setRowHidden)
///
/// ``` QListView* self, int row, bool hide ```
void q_listview_set_row_hidden(void* self, int row, bool hide);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setModelColumn)
///
/// ``` QListView* self, int column ```
void q_listview_set_model_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#modelColumn)
///
/// ``` QListView* self ```
int32_t q_listview_model_column(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setUniformItemSizes)
///
/// ``` QListView* self, bool enable ```
void q_listview_set_uniform_item_sizes(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#uniformItemSizes)
///
/// ``` QListView* self ```
bool q_listview_uniform_item_sizes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setWordWrap)
///
/// ``` QListView* self, bool on ```
void q_listview_set_word_wrap(void* self, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#wordWrap)
///
/// ``` QListView* self ```
bool q_listview_word_wrap(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSelectionRectVisible)
///
/// ``` QListView* self, bool show ```
void q_listview_set_selection_rect_visible(void* self, bool show);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isSelectionRectVisible)
///
/// ``` QListView* self ```
bool q_listview_is_selection_rect_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setItemAlignment)
///
/// ``` QListView* self, int alignment ```
void q_listview_set_item_alignment(void* self, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#itemAlignment)
///
/// ``` QListView* self ```
int64_t q_listview_item_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRect)
///
/// ``` QListView* self, QModelIndex* index ```
QRect* q_listview_visual_rect(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRect)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, QRect* (*slot)(QListView*, QModelIndex*) ```
void q_listview_on_visual_rect(void* self, QRect* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRect)
///
/// Base class method implementation
///
/// ``` QListView* self, QModelIndex* index ```
QRect* q_listview_qbase_visual_rect(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
///
/// ``` QListView* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_listview_scroll_to(void* self, void* index, int64_t hint);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QModelIndex*, enum QAbstractItemView__ScrollHint) ```
void q_listview_on_scroll_to(void* self, void (*slot)(void*, void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
///
/// Base class method implementation
///
/// ``` QListView* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_listview_qbase_scroll_to(void* self, void* index, int64_t hint);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#indexAt)
///
/// ``` QListView* self, QPoint* p ```
QModelIndex* q_listview_index_at(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#indexAt)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, QModelIndex* (*slot)(QListView*, QPoint*) ```
void q_listview_on_index_at(void* self, QModelIndex* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#indexAt)
///
/// Base class method implementation
///
/// ``` QListView* self, QPoint* p ```
QModelIndex* q_listview_qbase_index_at(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
///
/// ``` QListView* self ```
void q_listview_do_items_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)() ```
void q_listview_on_do_items_layout(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
///
/// Base class method implementation
///
/// ``` QListView* self ```
void q_listview_qbase_do_items_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#reset)
///
/// ``` QListView* self ```
void q_listview_reset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#reset)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)() ```
void q_listview_on_reset(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#reset)
///
/// Base class method implementation
///
/// ``` QListView* self ```
void q_listview_qbase_reset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
///
/// ``` QListView* self, QModelIndex* index ```
void q_listview_set_root_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QModelIndex*) ```
void q_listview_on_set_root_index(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
///
/// Base class method implementation
///
/// ``` QListView* self, QModelIndex* index ```
void q_listview_qbase_set_root_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#indexesMoved)
///
/// ``` QListView* self, libqt_list /* of QModelIndex* */ indexes ```
void q_listview_indexes_moved(void* self, libqt_list indexes);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#indexesMoved)
///
/// ``` QListView* self, void (*slot)(QListView*, libqt_list /* of QModelIndex* */ indexes ) ```
void q_listview_on_indexes_moved(void* self, void (*slot)(void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#event)
///
/// ``` QListView* self, QEvent* e ```
bool q_listview_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, bool (*slot)(QListView*, QEvent*) ```
void q_listview_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#event)
///
/// Base class method implementation
///
/// ``` QListView* self, QEvent* e ```
bool q_listview_qbase_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
///
/// ``` QListView* self, int dx, int dy ```
void q_listview_scroll_contents_by(void* self, int dx, int dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, int, int) ```
void q_listview_on_scroll_contents_by(void* self, void (*slot)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
///
/// Base class method implementation
///
/// ``` QListView* self, int dx, int dy ```
void q_listview_qbase_scroll_contents_by(void* self, int dx, int dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
///
/// ``` QListView* self, int width, int height ```
void q_listview_resize_contents(void* self, int width, int height);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, int, int) ```
void q_listview_on_resize_contents(void* self, void (*slot)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
///
/// Base class method implementation
///
/// ``` QListView* self, int width, int height ```
void q_listview_qbase_resize_contents(void* self, int width, int height);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
///
/// ``` QListView* self ```
QSize* q_listview_contents_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, QSize* (*slot)() ```
void q_listview_on_contents_size(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
///
/// Base class method implementation
///
/// ``` QListView* self ```
QSize* q_listview_qbase_contents_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dataChanged)
///
/// ``` QListView* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles ```
void q_listview_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dataChanged)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QModelIndex*, QModelIndex*, libqt_list /* of int */ roles ) ```
void q_listview_on_data_changed(void* self, void (*slot)(void*, void*, void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dataChanged)
///
/// Base class method implementation
///
/// ``` QListView* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles ```
void q_listview_qbase_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsInserted)
///
/// ``` QListView* self, QModelIndex* parent, int start, int end ```
void q_listview_rows_inserted(void* self, void* parent, int start, int end);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsInserted)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QModelIndex*, int, int) ```
void q_listview_on_rows_inserted(void* self, void (*slot)(void*, void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsInserted)
///
/// Base class method implementation
///
/// ``` QListView* self, QModelIndex* parent, int start, int end ```
void q_listview_qbase_rows_inserted(void* self, void* parent, int start, int end);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
///
/// ``` QListView* self, QModelIndex* parent, int start, int end ```
void q_listview_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QModelIndex*, int, int) ```
void q_listview_on_rows_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
///
/// Base class method implementation
///
/// ``` QListView* self, QModelIndex* parent, int start, int end ```
void q_listview_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
///
/// ``` QListView* self, QMouseEvent* e ```
void q_listview_mouse_move_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QMouseEvent*) ```
void q_listview_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// ``` QListView* self, QMouseEvent* e ```
void q_listview_qbase_mouse_move_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
///
/// ``` QListView* self, QMouseEvent* e ```
void q_listview_mouse_release_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QMouseEvent*) ```
void q_listview_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// ``` QListView* self, QMouseEvent* e ```
void q_listview_qbase_mouse_release_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
///
/// ``` QListView* self, QWheelEvent* e ```
void q_listview_wheel_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QWheelEvent*) ```
void q_listview_on_wheel_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
///
/// Base class method implementation
///
/// ``` QListView* self, QWheelEvent* e ```
void q_listview_qbase_wheel_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
///
/// ``` QListView* self, QTimerEvent* e ```
void q_listview_timer_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QTimerEvent*) ```
void q_listview_on_timer_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
///
/// Base class method implementation
///
/// ``` QListView* self, QTimerEvent* e ```
void q_listview_qbase_timer_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeEvent)
///
/// ``` QListView* self, QResizeEvent* e ```
void q_listview_resize_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QResizeEvent*) ```
void q_listview_on_resize_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeEvent)
///
/// Base class method implementation
///
/// ``` QListView* self, QResizeEvent* e ```
void q_listview_qbase_resize_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragMoveEvent)
///
/// ``` QListView* self, QDragMoveEvent* e ```
void q_listview_drag_move_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragMoveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QDragMoveEvent*) ```
void q_listview_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragMoveEvent)
///
/// Base class method implementation
///
/// ``` QListView* self, QDragMoveEvent* e ```
void q_listview_qbase_drag_move_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragLeaveEvent)
///
/// ``` QListView* self, QDragLeaveEvent* e ```
void q_listview_drag_leave_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragLeaveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QDragLeaveEvent*) ```
void q_listview_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragLeaveEvent)
///
/// Base class method implementation
///
/// ``` QListView* self, QDragLeaveEvent* e ```
void q_listview_qbase_drag_leave_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dropEvent)
///
/// ``` QListView* self, QDropEvent* e ```
void q_listview_drop_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dropEvent)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QDropEvent*) ```
void q_listview_on_drop_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dropEvent)
///
/// Base class method implementation
///
/// ``` QListView* self, QDropEvent* e ```
void q_listview_qbase_drop_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#startDrag)
///
/// ``` QListView* self, int supportedActions ```
void q_listview_start_drag(void* self, int64_t supportedActions);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#startDrag)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, int) ```
void q_listview_on_start_drag(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#startDrag)
///
/// Base class method implementation
///
/// ``` QListView* self, int supportedActions ```
void q_listview_qbase_start_drag(void* self, int64_t supportedActions);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
///
/// ``` QListView* self, QStyleOptionViewItem* option ```
void q_listview_init_view_item_option(void* self, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QStyleOptionViewItem*) ```
void q_listview_on_init_view_item_option(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
///
/// Base class method implementation
///
/// ``` QListView* self, QStyleOptionViewItem* option ```
void q_listview_qbase_init_view_item_option(void* self, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#paintEvent)
///
/// ``` QListView* self, QPaintEvent* e ```
void q_listview_paint_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QPaintEvent*) ```
void q_listview_on_paint_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#paintEvent)
///
/// Base class method implementation
///
/// ``` QListView* self, QPaintEvent* e ```
void q_listview_qbase_paint_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
///
/// ``` QListView* self ```
int32_t q_listview_horizontal_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, int32_t (*slot)() ```
void q_listview_on_horizontal_offset(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
///
/// Base class method implementation
///
/// ``` QListView* self ```
int32_t q_listview_qbase_horizontal_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
///
/// ``` QListView* self ```
int32_t q_listview_vertical_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, int32_t (*slot)() ```
void q_listview_on_vertical_offset(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
///
/// Base class method implementation
///
/// ``` QListView* self ```
int32_t q_listview_qbase_vertical_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
///
/// ``` QListView* self, enum QAbstractItemView__CursorAction cursorAction, int modifiers ```
QModelIndex* q_listview_move_cursor(void* self, int64_t cursorAction, int64_t modifiers);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, QModelIndex* (*slot)(QListView*, enum QAbstractItemView__CursorAction, int) ```
void q_listview_on_move_cursor(void* self, QModelIndex* (*slot)(void*, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
///
/// Base class method implementation
///
/// ``` QListView* self, enum QAbstractItemView__CursorAction cursorAction, int modifiers ```
QModelIndex* q_listview_qbase_move_cursor(void* self, int64_t cursorAction, int64_t modifiers);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
///
/// ``` QListView* self, QModelIndex* index ```
QRect* q_listview_rect_for_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, QRect* (*slot)(QListView*, QModelIndex*) ```
void q_listview_on_rect_for_index(void* self, QRect* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
///
/// Base class method implementation
///
/// ``` QListView* self, QModelIndex* index ```
QRect* q_listview_qbase_rect_for_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
///
/// ``` QListView* self, QPoint* position, QModelIndex* index ```
void q_listview_set_position_for_index(void* self, void* position, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QPoint*, QModelIndex*) ```
void q_listview_on_set_position_for_index(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
///
/// Base class method implementation
///
/// ``` QListView* self, QPoint* position, QModelIndex* index ```
void q_listview_qbase_set_position_for_index(void* self, void* position, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSelection)
///
/// ``` QListView* self, QRect* rect, int command ```
void q_listview_set_selection(void* self, void* rect, int64_t command);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSelection)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QRect*, int) ```
void q_listview_on_set_selection(void* self, void (*slot)(void*, void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSelection)
///
/// Base class method implementation
///
/// ``` QListView* self, QRect* rect, int command ```
void q_listview_qbase_set_selection(void* self, void* rect, int64_t command);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
///
/// ``` QListView* self, QItemSelection* selection ```
QRegion* q_listview_visual_region_for_selection(void* self, void* selection);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, QRegion* (*slot)(QListView*, QItemSelection*) ```
void q_listview_on_visual_region_for_selection(void* self, QRegion* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
///
/// Base class method implementation
///
/// ``` QListView* self, QItemSelection* selection ```
QRegion* q_listview_qbase_visual_region_for_selection(void* self, void* selection);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
///
/// ``` QListView* self ```
libqt_list /* of QModelIndex* */ q_listview_selected_indexes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_listview_on_selected_indexes(void* self, libqt_list /* of QModelIndex* */ (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
///
/// Base class method implementation
///
/// ``` QListView* self ```
libqt_list /* of QModelIndex* */ q_listview_qbase_selected_indexes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
///
/// ``` QListView* self ```
void q_listview_update_geometries(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)() ```
void q_listview_on_update_geometries(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
///
/// Base class method implementation
///
/// ``` QListView* self ```
void q_listview_qbase_update_geometries(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
///
/// ``` QListView* self, QModelIndex* index ```
bool q_listview_is_index_hidden(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, bool (*slot)(QListView*, QModelIndex*) ```
void q_listview_on_is_index_hidden(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
///
/// Base class method implementation
///
/// ``` QListView* self, QModelIndex* index ```
bool q_listview_qbase_is_index_hidden(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
///
/// ``` QListView* self, QItemSelection* selected, QItemSelection* deselected ```
void q_listview_selection_changed(void* self, void* selected, void* deselected);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QItemSelection*, QItemSelection*) ```
void q_listview_on_selection_changed(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
///
/// Base class method implementation
///
/// ``` QListView* self, QItemSelection* selected, QItemSelection* deselected ```
void q_listview_qbase_selection_changed(void* self, void* selected, void* deselected);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
///
/// ``` QListView* self, QModelIndex* current, QModelIndex* previous ```
void q_listview_current_changed(void* self, void* current, void* previous);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, void (*slot)(QListView*, QModelIndex*, QModelIndex*) ```
void q_listview_on_current_changed(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
///
/// Base class method implementation
///
/// ``` QListView* self, QModelIndex* current, QModelIndex* previous ```
void q_listview_qbase_current_changed(void* self, void* current, void* previous);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
///
/// ``` QListView* self ```
QSize* q_listview_viewport_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QListView* self, QSize* (*slot)() ```
void q_listview_on_viewport_size_hint(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
///
/// Base class method implementation
///
/// ``` QListView* self ```
QSize* q_listview_qbase_viewport_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_listview_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_listview_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#model)
///
/// ``` QListView* self ```
QAbstractItemModel* q_listview_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
///
/// ``` QListView* self ```
QItemSelectionModel* q_listview_selection_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
///
/// ``` QListView* self, QAbstractItemDelegate* delegate ```
void q_listview_set_item_delegate(void* self, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QListView* self ```
QAbstractItemDelegate* q_listview_item_delegate(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
///
/// ``` QListView* self, enum QAbstractItemView__SelectionMode mode ```
void q_listview_set_selection_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
///
/// ``` QListView* self ```
int64_t q_listview_selection_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
///
/// ``` QListView* self, enum QAbstractItemView__SelectionBehavior behavior ```
void q_listview_set_selection_behavior(void* self, int64_t behavior);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
///
/// ``` QListView* self ```
int64_t q_listview_selection_behavior(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
///
/// ``` QListView* self ```
QModelIndex* q_listview_current_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
///
/// ``` QListView* self ```
QModelIndex* q_listview_root_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
///
/// ``` QListView* self, int triggers ```
void q_listview_set_edit_triggers(void* self, int64_t triggers);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
///
/// ``` QListView* self ```
int64_t q_listview_edit_triggers(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
///
/// ``` QListView* self, enum QAbstractItemView__ScrollMode mode ```
void q_listview_set_vertical_scroll_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
///
/// ``` QListView* self ```
int64_t q_listview_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
///
/// ``` QListView* self ```
void q_listview_reset_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
///
/// ``` QListView* self, enum QAbstractItemView__ScrollMode mode ```
void q_listview_set_horizontal_scroll_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
///
/// ``` QListView* self ```
int64_t q_listview_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
///
/// ``` QListView* self ```
void q_listview_reset_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
///
/// ``` QListView* self, bool enable ```
void q_listview_set_auto_scroll(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
///
/// ``` QListView* self ```
bool q_listview_has_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
///
/// ``` QListView* self, int margin ```
void q_listview_set_auto_scroll_margin(void* self, int margin);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
///
/// ``` QListView* self ```
int32_t q_listview_auto_scroll_margin(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
///
/// ``` QListView* self, bool enable ```
void q_listview_set_tab_key_navigation(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
///
/// ``` QListView* self ```
bool q_listview_tab_key_navigation(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
///
/// ``` QListView* self, bool enable ```
void q_listview_set_drop_indicator_shown(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
///
/// ``` QListView* self ```
bool q_listview_show_drop_indicator(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
///
/// ``` QListView* self, bool enable ```
void q_listview_set_drag_enabled(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
///
/// ``` QListView* self ```
bool q_listview_drag_enabled(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
///
/// ``` QListView* self, bool overwrite ```
void q_listview_set_drag_drop_overwrite_mode(void* self, bool overwrite);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
///
/// ``` QListView* self ```
bool q_listview_drag_drop_overwrite_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
///
/// ``` QListView* self, enum QAbstractItemView__DragDropMode behavior ```
void q_listview_set_drag_drop_mode(void* self, int64_t behavior);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
///
/// ``` QListView* self ```
int64_t q_listview_drag_drop_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
///
/// ``` QListView* self, enum Qt__DropAction dropAction ```
void q_listview_set_default_drop_action(void* self, int64_t dropAction);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
///
/// ``` QListView* self ```
int64_t q_listview_default_drop_action(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
///
/// ``` QListView* self, bool enable ```
void q_listview_set_alternating_row_colors(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
///
/// ``` QListView* self ```
bool q_listview_alternating_row_colors(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
///
/// ``` QListView* self, QSize* size ```
void q_listview_set_icon_size(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
///
/// ``` QListView* self ```
QSize* q_listview_icon_size(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
///
/// ``` QListView* self, enum Qt__TextElideMode mode ```
void q_listview_set_text_elide_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
///
/// ``` QListView* self ```
int64_t q_listview_text_elide_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
///
/// ``` QListView* self, QModelIndex* index ```
QSize* q_listview_size_hint_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#openPersistentEditor)
///
/// ``` QListView* self, QModelIndex* index ```
void q_listview_open_persistent_editor(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closePersistentEditor)
///
/// ``` QListView* self, QModelIndex* index ```
void q_listview_close_persistent_editor(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#isPersistentEditorOpen)
///
/// ``` QListView* self, QModelIndex* index ```
bool q_listview_is_persistent_editor_open(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
///
/// ``` QListView* self, QModelIndex* index, QWidget* widget ```
void q_listview_set_index_widget(void* self, void* index, void* widget);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
///
/// ``` QListView* self, QModelIndex* index ```
QWidget* q_listview_index_widget(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
///
/// ``` QListView* self, int row, QAbstractItemDelegate* delegate ```
void q_listview_set_item_delegate_for_row(void* self, int row, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
///
/// ``` QListView* self, int row ```
QAbstractItemDelegate* q_listview_item_delegate_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
///
/// ``` QListView* self, int column, QAbstractItemDelegate* delegate ```
void q_listview_set_item_delegate_for_column(void* self, int column, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
///
/// ``` QListView* self, int column ```
QAbstractItemDelegate* q_listview_item_delegate_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QListView* self, QModelIndex* index ```
QAbstractItemDelegate* q_listview_item_delegate_with_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// ``` QListView* self, QModelIndex* index ```
void q_listview_edit(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
///
/// ``` QListView* self ```
void q_listview_clear_selection(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
///
/// ``` QListView* self, QModelIndex* index ```
void q_listview_set_current_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
///
/// ``` QListView* self ```
void q_listview_scroll_to_top(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
///
/// ``` QListView* self ```
void q_listview_scroll_to_bottom(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#update)
///
/// ``` QListView* self, QModelIndex* index ```
void q_listview_update(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// ``` QListView* self, QModelIndex* index ```
void q_listview_pressed(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// ``` QListView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_listview_on_pressed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// ``` QListView* self, QModelIndex* index ```
void q_listview_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// ``` QListView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_listview_on_clicked(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// ``` QListView* self, QModelIndex* index ```
void q_listview_double_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// ``` QListView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_listview_on_double_clicked(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// ``` QListView* self, QModelIndex* index ```
void q_listview_activated(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// ``` QListView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_listview_on_activated(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// ``` QListView* self, QModelIndex* index ```
void q_listview_entered(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// ``` QListView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_listview_on_entered(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// ``` QListView* self ```
void q_listview_viewport_entered(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// ``` QListView* self, void (*slot)(QAbstractItemView*) ```
void q_listview_on_viewport_entered(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// ``` QListView* self, QSize* size ```
void q_listview_icon_size_changed(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// ``` QListView* self, void (*slot)(QAbstractItemView*, QSize*) ```
void q_listview_on_icon_size_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// ``` QListView* self ```
int64_t q_listview_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// ``` QListView* self, enum Qt__ScrollBarPolicy verticalScrollBarPolicy ```
void q_listview_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// ``` QListView* self ```
QScrollBar* q_listview_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// ``` QListView* self, QScrollBar* scrollbar ```
void q_listview_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// ``` QListView* self ```
int64_t q_listview_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// ``` QListView* self, enum Qt__ScrollBarPolicy horizontalScrollBarPolicy ```
void q_listview_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// ``` QListView* self ```
QScrollBar* q_listview_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// ``` QListView* self, QScrollBar* scrollbar ```
void q_listview_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// ``` QListView* self ```
QWidget* q_listview_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// ``` QListView* self, QWidget* widget ```
void q_listview_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// ``` QListView* self, QWidget* widget, int alignment ```
void q_listview_add_scroll_bar_widget(void* self, void* widget, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// ``` QListView* self, int alignment ```
libqt_list /* of QWidget* */ q_listview_scroll_bar_widgets(void* self, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// ``` QListView* self ```
QWidget* q_listview_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// ``` QListView* self, QWidget* widget ```
void q_listview_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// ``` QListView* self ```
QSize* q_listview_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// ``` QListView* self ```
int64_t q_listview_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// ``` QListView* self, enum QAbstractScrollArea__SizeAdjustPolicy policy ```
void q_listview_set_size_adjust_policy(void* self, int64_t policy);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QListView* self ```
int32_t q_listview_frame_style(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QListView* self, int frameStyle ```
void q_listview_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QListView* self ```
int32_t q_listview_frame_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QListView* self ```
int64_t q_listview_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QListView* self, enum QFrame__Shape frameShape ```
void q_listview_set_frame_shape(void* self, int64_t frameShape);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QListView* self ```
int64_t q_listview_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QListView* self, enum QFrame__Shadow frameShadow ```
void q_listview_set_frame_shadow(void* self, int64_t frameShadow);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QListView* self ```
int32_t q_listview_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QListView* self, int lineWidth ```
void q_listview_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QListView* self ```
int32_t q_listview_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QListView* self, int midLineWidth ```
void q_listview_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QListView* self ```
QRect* q_listview_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QListView* self, QRect* frameRect ```
void q_listview_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QListView* self ```
uintptr_t q_listview_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QListView* self ```
void q_listview_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QListView* self ```
uintptr_t q_listview_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QListView* self ```
uintptr_t q_listview_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QListView* self ```
QStyle* q_listview_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QListView* self, QStyle* style ```
void q_listview_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QListView* self ```
bool q_listview_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QListView* self ```
bool q_listview_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QListView* self ```
bool q_listview_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QListView* self ```
int64_t q_listview_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QListView* self, enum Qt__WindowModality windowModality ```
void q_listview_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QListView* self ```
bool q_listview_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QListView* self, QWidget* param1 ```
bool q_listview_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QListView* self, bool enabled ```
void q_listview_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QListView* self, bool disabled ```
void q_listview_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QListView* self, bool windowModified ```
void q_listview_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QListView* self ```
QRect* q_listview_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QListView* self ```
const QRect* q_listview_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QListView* self ```
QRect* q_listview_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QListView* self ```
int32_t q_listview_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QListView* self ```
int32_t q_listview_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QListView* self ```
QPoint* q_listview_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QListView* self ```
QSize* q_listview_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QListView* self ```
QSize* q_listview_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QListView* self ```
int32_t q_listview_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QListView* self ```
int32_t q_listview_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QListView* self ```
QRect* q_listview_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QListView* self ```
QRect* q_listview_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QListView* self ```
QRegion* q_listview_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QListView* self ```
QSize* q_listview_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QListView* self ```
QSize* q_listview_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QListView* self ```
int32_t q_listview_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QListView* self ```
int32_t q_listview_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QListView* self ```
int32_t q_listview_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QListView* self ```
int32_t q_listview_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QListView* self, QSize* minimumSize ```
void q_listview_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QListView* self, int minw, int minh ```
void q_listview_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QListView* self, QSize* maximumSize ```
void q_listview_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QListView* self, int maxw, int maxh ```
void q_listview_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QListView* self, int minw ```
void q_listview_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QListView* self, int minh ```
void q_listview_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QListView* self, int maxw ```
void q_listview_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QListView* self, int maxh ```
void q_listview_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QListView* self ```
QSize* q_listview_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QListView* self, QSize* sizeIncrement ```
void q_listview_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QListView* self, int w, int h ```
void q_listview_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QListView* self ```
QSize* q_listview_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QListView* self, QSize* baseSize ```
void q_listview_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QListView* self, int basew, int baseh ```
void q_listview_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QListView* self, QSize* fixedSize ```
void q_listview_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QListView* self, int w, int h ```
void q_listview_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QListView* self, int w ```
void q_listview_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QListView* self, int h ```
void q_listview_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QListView* self, QPointF* param1 ```
QPointF* q_listview_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QListView* self, QPoint* param1 ```
QPoint* q_listview_map_to_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QListView* self, QPointF* param1 ```
QPointF* q_listview_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QListView* self, QPoint* param1 ```
QPoint* q_listview_map_from_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QListView* self, QPointF* param1 ```
QPointF* q_listview_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QListView* self, QPoint* param1 ```
QPoint* q_listview_map_to_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QListView* self, QPointF* param1 ```
QPointF* q_listview_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QListView* self, QPoint* param1 ```
QPoint* q_listview_map_from_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QListView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_listview_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QListView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_listview_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QListView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_listview_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QListView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_listview_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QListView* self ```
QWidget* q_listview_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QListView* self ```
QWidget* q_listview_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QListView* self ```
QWidget* q_listview_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QListView* self ```
const QPalette* q_listview_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QListView* self, QPalette* palette ```
void q_listview_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QListView* self, enum QPalette__ColorRole backgroundRole ```
void q_listview_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QListView* self ```
int64_t q_listview_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QListView* self, enum QPalette__ColorRole foregroundRole ```
void q_listview_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QListView* self ```
int64_t q_listview_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QListView* self ```
const QFont* q_listview_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QListView* self, QFont* font ```
void q_listview_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QListView* self ```
QFontMetrics* q_listview_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QListView* self ```
QFontInfo* q_listview_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QListView* self ```
QCursor* q_listview_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QListView* self, QCursor* cursor ```
void q_listview_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QListView* self ```
void q_listview_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QListView* self, bool enable ```
void q_listview_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QListView* self ```
bool q_listview_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QListView* self ```
bool q_listview_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QListView* self, bool enable ```
void q_listview_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QListView* self ```
bool q_listview_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QListView* self, QBitmap* mask ```
void q_listview_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QListView* self, QRegion* mask ```
void q_listview_set_mask_with_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QListView* self ```
QRegion* q_listview_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QListView* self ```
void q_listview_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QListView* self, QPaintDevice* target ```
void q_listview_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QListView* self, QPainter* painter ```
void q_listview_render_with_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QListView* self ```
QPixmap* q_listview_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QListView* self ```
QGraphicsEffect* q_listview_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QListView* self, QGraphicsEffect* effect ```
void q_listview_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QListView* self, enum Qt__GestureType typeVal ```
void q_listview_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QListView* self, enum Qt__GestureType typeVal ```
void q_listview_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QListView* self, const char* windowTitle ```
void q_listview_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QListView* self, const char* styleSheet ```
void q_listview_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QListView* self ```
const char* q_listview_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QListView* self ```
const char* q_listview_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QListView* self, QIcon* icon ```
void q_listview_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QListView* self ```
QIcon* q_listview_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QListView* self, const char* windowIconText ```
void q_listview_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QListView* self ```
const char* q_listview_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QListView* self, const char* windowRole ```
void q_listview_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QListView* self ```
const char* q_listview_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QListView* self, const char* filePath ```
void q_listview_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QListView* self ```
const char* q_listview_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QListView* self, double level ```
void q_listview_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QListView* self ```
double q_listview_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QListView* self ```
bool q_listview_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QListView* self, const char* toolTip ```
void q_listview_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QListView* self ```
const char* q_listview_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QListView* self, int msec ```
void q_listview_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QListView* self ```
int32_t q_listview_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QListView* self, const char* statusTip ```
void q_listview_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QListView* self ```
const char* q_listview_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QListView* self, const char* whatsThis ```
void q_listview_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QListView* self ```
const char* q_listview_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QListView* self ```
const char* q_listview_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QListView* self, const char* name ```
void q_listview_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QListView* self ```
const char* q_listview_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QListView* self, const char* description ```
void q_listview_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QListView* self, enum Qt__LayoutDirection direction ```
void q_listview_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QListView* self ```
int64_t q_listview_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QListView* self ```
void q_listview_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QListView* self, QLocale* locale ```
void q_listview_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QListView* self ```
QLocale* q_listview_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QListView* self ```
void q_listview_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QListView* self ```
bool q_listview_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QListView* self ```
bool q_listview_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QListView* self ```
void q_listview_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QListView* self ```
bool q_listview_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QListView* self ```
void q_listview_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QListView* self ```
void q_listview_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QListView* self, enum Qt__FocusReason reason ```
void q_listview_set_focus_with_reason(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QListView* self ```
int64_t q_listview_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QListView* self, enum Qt__FocusPolicy policy ```
void q_listview_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QListView* self ```
bool q_listview_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_listview_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QListView* self, QWidget* focusProxy ```
void q_listview_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QListView* self ```
QWidget* q_listview_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QListView* self ```
int64_t q_listview_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QListView* self, enum Qt__ContextMenuPolicy policy ```
void q_listview_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QListView* self ```
void q_listview_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QListView* self, QCursor* param1 ```
void q_listview_grab_mouse_with_q_cursor(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QListView* self ```
void q_listview_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QListView* self ```
void q_listview_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QListView* self ```
void q_listview_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QListView* self, QKeySequence* key ```
int32_t q_listview_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QListView* self, int id ```
void q_listview_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QListView* self, int id ```
void q_listview_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QListView* self, int id ```
void q_listview_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_listview_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_listview_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QListView* self ```
bool q_listview_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QListView* self, bool enable ```
void q_listview_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QListView* self ```
QGraphicsProxyWidget* q_listview_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QListView* self ```
void q_listview_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QListView* self, int x, int y, int w, int h ```
void q_listview_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QListView* self, QRect* param1 ```
void q_listview_update_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QListView* self, QRegion* param1 ```
void q_listview_update_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QListView* self, int x, int y, int w, int h ```
void q_listview_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QListView* self, QRect* param1 ```
void q_listview_repaint_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QListView* self, QRegion* param1 ```
void q_listview_repaint_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QListView* self, bool hidden ```
void q_listview_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QListView* self ```
void q_listview_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QListView* self ```
void q_listview_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QListView* self ```
void q_listview_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QListView* self ```
void q_listview_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QListView* self ```
void q_listview_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QListView* self ```
void q_listview_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QListView* self ```
bool q_listview_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QListView* self ```
void q_listview_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QListView* self ```
void q_listview_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QListView* self, QWidget* param1 ```
void q_listview_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QListView* self, int x, int y ```
void q_listview_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QListView* self, QPoint* param1 ```
void q_listview_move_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QListView* self, int w, int h ```
void q_listview_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QListView* self, QSize* param1 ```
void q_listview_resize_with_q_size(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QListView* self, int x, int y, int w, int h ```
void q_listview_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QListView* self, QRect* geometry ```
void q_listview_set_geometry_with_geometry(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QListView* self ```
char* q_listview_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QListView* self, const char* geometry ```
bool q_listview_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QListView* self ```
void q_listview_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QListView* self ```
bool q_listview_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QListView* self, QWidget* param1 ```
bool q_listview_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QListView* self ```
bool q_listview_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QListView* self ```
bool q_listview_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QListView* self ```
bool q_listview_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QListView* self ```
bool q_listview_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QListView* self ```
int64_t q_listview_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QListView* self, int state ```
void q_listview_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QListView* self, int state ```
void q_listview_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QListView* self ```
QSizePolicy* q_listview_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QListView* self, QSizePolicy* sizePolicy ```
void q_listview_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QListView* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_listview_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QListView* self ```
QRegion* q_listview_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QListView* self, int left, int top, int right, int bottom ```
void q_listview_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QListView* self, QMargins* margins ```
void q_listview_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QListView* self ```
QMargins* q_listview_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QListView* self ```
QRect* q_listview_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QListView* self ```
QLayout* q_listview_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QListView* self, QLayout* layout ```
void q_listview_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QListView* self ```
void q_listview_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QListView* self, QWidget* parent ```
void q_listview_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QListView* self, QWidget* parent, int f ```
void q_listview_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QListView* self, int dx, int dy ```
void q_listview_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QListView* self, int dx, int dy, QRect* param3 ```
void q_listview_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QListView* self ```
QWidget* q_listview_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QListView* self ```
QWidget* q_listview_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QListView* self ```
QWidget* q_listview_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QListView* self ```
bool q_listview_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QListView* self, bool on ```
void q_listview_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QListView* self, QAction* action ```
void q_listview_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QListView* self, libqt_list /* of QAction* */ actions ```
void q_listview_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QListView* self, QAction* before, libqt_list /* of QAction* */ actions ```
void q_listview_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QListView* self, QAction* before, QAction* action ```
void q_listview_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QListView* self, QAction* action ```
void q_listview_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QListView* self ```
libqt_list /* of QAction* */ q_listview_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QListView* self, const char* text ```
QAction* q_listview_add_action_with_text(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QListView* self, QIcon* icon, const char* text ```
QAction* q_listview_add_action2(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QListView* self, const char* text, QKeySequence* shortcut ```
QAction* q_listview_add_action3(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QListView* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_listview_add_action4(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QListView* self ```
QWidget* q_listview_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QListView* self, int typeVal ```
void q_listview_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QListView* self ```
int64_t q_listview_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QListView* self, enum Qt__WindowType param1 ```
void q_listview_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QListView* self, int typeVal ```
void q_listview_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QListView* self ```
int64_t q_listview_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_listview_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QListView* self, int x, int y ```
QWidget* q_listview_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QListView* self, QPoint* p ```
QWidget* q_listview_child_at_with_q_point(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QListView* self, enum Qt__WidgetAttribute param1 ```
void q_listview_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QListView* self, enum Qt__WidgetAttribute param1 ```
bool q_listview_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QListView* self ```
void q_listview_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QListView* self, QWidget* child ```
bool q_listview_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QListView* self ```
bool q_listview_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QListView* self, bool enabled ```
void q_listview_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QListView* self ```
QBackingStore* q_listview_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QListView* self ```
QWindow* q_listview_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QListView* self ```
QScreen* q_listview_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QListView* self, QScreen* screen ```
void q_listview_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_listview_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QListView* self, const char* title ```
void q_listview_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QListView* self, void (*slot)(QWidget*, const char*) ```
void q_listview_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QListView* self, QIcon* icon ```
void q_listview_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QListView* self, void (*slot)(QWidget*, QIcon*) ```
void q_listview_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QListView* self, const char* iconText ```
void q_listview_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QListView* self, void (*slot)(QWidget*, const char*) ```
void q_listview_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QListView* self, QPoint* pos ```
void q_listview_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QListView* self, void (*slot)(QWidget*, QPoint*) ```
void q_listview_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QListView* self ```
int64_t q_listview_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QListView* self, int hints ```
void q_listview_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QListView* self, QPaintDevice* target, QPoint* targetOffset ```
void q_listview_render2(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QListView* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_listview_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QListView* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_listview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QListView* self, QPainter* painter, QPoint* targetOffset ```
void q_listview_render22(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QListView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_listview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QListView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_listview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QListView* self, QRect* rectangle ```
QPixmap* q_listview_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QListView* self, enum Qt__GestureType typeVal, int flags ```
void q_listview_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QListView* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_listview_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QListView* self, int id, bool enable ```
void q_listview_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QListView* self, int id, bool enable ```
void q_listview_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QListView* self, enum Qt__WindowType param1, bool on ```
void q_listview_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QListView* self, enum Qt__WidgetAttribute param1, bool on ```
void q_listview_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_listview_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_listview_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QListView* self ```
const char* q_listview_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QListView* self, char* name ```
void q_listview_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QListView* self ```
bool q_listview_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QListView* self ```
bool q_listview_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QListView* self ```
bool q_listview_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QListView* self ```
bool q_listview_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QListView* self, bool b ```
bool q_listview_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QListView* self ```
QThread* q_listview_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QListView* self, QThread* thread ```
void q_listview_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QListView* self, int interval ```
int32_t q_listview_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QListView* self, int id ```
void q_listview_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QListView* self ```
libqt_list /* of QObject* */ q_listview_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QListView* self, QObject* filterObj ```
void q_listview_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QListView* self, QObject* obj ```
void q_listview_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_listview_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QListView* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_listview_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_listview_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_listview_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QListView* self ```
void q_listview_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QListView* self ```
void q_listview_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QListView* self, const char* name, QVariant* value ```
bool q_listview_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QListView* self, const char* name ```
QVariant* q_listview_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QListView* self ```
const char** q_listview_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QListView* self ```
QBindingStorage* q_listview_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QListView* self ```
const QBindingStorage* q_listview_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QListView* self ```
void q_listview_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QListView* self, void (*slot)(QObject*) ```
void q_listview_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QListView* self ```
QObject* q_listview_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QListView* self, const char* classname ```
bool q_listview_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QListView* self ```
void q_listview_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QListView* self, int interval, enum Qt__TimerType timerType ```
int32_t q_listview_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_listview_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QListView* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_listview_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QListView* self, QObject* param1 ```
void q_listview_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QListView* self, void (*slot)(QObject*, QObject*) ```
void q_listview_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QListView* self ```
bool q_listview_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QListView* self ```
int32_t q_listview_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QListView* self ```
int32_t q_listview_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QListView* self ```
int32_t q_listview_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QListView* self ```
int32_t q_listview_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QListView* self ```
int32_t q_listview_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QListView* self ```
int32_t q_listview_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QListView* self ```
double q_listview_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QListView* self ```
double q_listview_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QListView* self ```
int32_t q_listview_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QListView* self ```
int32_t q_listview_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_listview_device_pixel_ratio_f_scale();

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QAbstractItemModel* model ```
void q_listview_set_model(void* self, void* model);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QAbstractItemModel* model ```
void q_listview_qbase_set_model(void* self, void* model);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QAbstractItemModel*) ```
void q_listview_on_set_model(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QItemSelectionModel* selectionModel ```
void q_listview_set_selection_model(void* self, void* selectionModel);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QItemSelectionModel* selectionModel ```
void q_listview_qbase_set_selection_model(void* self, void* selectionModel);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QItemSelectionModel*) ```
void q_listview_on_set_selection_model(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, const char* search ```
void q_listview_keyboard_search(void* self, const char* search);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, const char* search ```
void q_listview_qbase_keyboard_search(void* self, const char* search);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, const char*) ```
void q_listview_on_keyboard_search(void* self, void (*slot)(void*, const char*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, int row ```
int32_t q_listview_size_hint_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, int row ```
int32_t q_listview_qbase_size_hint_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, int32_t (*slot)(QListView*, int) ```
void q_listview_on_size_hint_for_row(void* self, int32_t (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, int column ```
int32_t q_listview_size_hint_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, int column ```
int32_t q_listview_qbase_size_hint_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, int32_t (*slot)(QListView*, int) ```
void q_listview_on_size_hint_for_column(void* self, int32_t (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QModelIndex* index ```
QAbstractItemDelegate* q_listview_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QModelIndex* index ```
QAbstractItemDelegate* q_listview_qbase_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, QAbstractItemDelegate* (*slot)(QListView*, QModelIndex*) ```
void q_listview_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, enum Qt__InputMethodQuery query ```
QVariant* q_listview_input_method_query(void* self, int64_t query);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, enum Qt__InputMethodQuery query ```
QVariant* q_listview_qbase_input_method_query(void* self, int64_t query);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, QVariant* (*slot)(QListView*, enum Qt__InputMethodQuery) ```
void q_listview_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
void q_listview_select_all(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
void q_listview_qbase_select_all(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)() ```
void q_listview_on_select_all(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
void q_listview_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
void q_listview_qbase_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)() ```
void q_listview_on_update_editor_data(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
void q_listview_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
void q_listview_qbase_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)() ```
void q_listview_on_update_editor_geometries(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, int action ```
void q_listview_vertical_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, int action ```
void q_listview_qbase_vertical_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, int) ```
void q_listview_on_vertical_scrollbar_action(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, int action ```
void q_listview_horizontal_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, int action ```
void q_listview_qbase_horizontal_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, int) ```
void q_listview_on_horizontal_scrollbar_action(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, int value ```
void q_listview_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, int value ```
void q_listview_qbase_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, int) ```
void q_listview_on_vertical_scrollbar_value_changed(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, int value ```
void q_listview_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, int value ```
void q_listview_qbase_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, int) ```
void q_listview_on_horizontal_scrollbar_value_changed(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_listview_close_editor(void* self, void* editor, int64_t hint);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_listview_qbase_close_editor(void* self, void* editor, int64_t hint);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QWidget*, enum QAbstractItemDelegate__EndEditHint) ```
void q_listview_on_close_editor(void* self, void (*slot)(void*, void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QWidget* editor ```
void q_listview_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QWidget* editor ```
void q_listview_qbase_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QWidget*) ```
void q_listview_on_commit_data(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QObject* editor ```
void q_listview_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QObject* editor ```
void q_listview_qbase_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QObject*) ```
void q_listview_on_editor_destroyed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_listview_edit2(void* self, void* index, int64_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_listview_qbase_edit2(void* self, void* index, int64_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, bool (*slot)(QListView*, QModelIndex*, enum QAbstractItemView__EditTrigger, QEvent*) ```
void q_listview_on_edit2(void* self, bool (*slot)(void*, void*, int64_t, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QModelIndex* index, QEvent* event ```
int64_t q_listview_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QModelIndex* index, QEvent* event ```
int64_t q_listview_qbase_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, int64_t (*slot)(QListView*, QModelIndex*, QEvent*) ```
void q_listview_on_selection_command(void* self, int64_t (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, bool next ```
bool q_listview_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, bool next ```
bool q_listview_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, bool (*slot)(QListView*, bool) ```
void q_listview_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QEvent* event ```
bool q_listview_viewport_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QEvent* event ```
bool q_listview_qbase_viewport_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, bool (*slot)(QListView*, QEvent*) ```
void q_listview_on_viewport_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QMouseEvent* event ```
void q_listview_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QMouseEvent* event ```
void q_listview_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QMouseEvent*) ```
void q_listview_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QMouseEvent* event ```
void q_listview_mouse_double_click_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QMouseEvent* event ```
void q_listview_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QMouseEvent*) ```
void q_listview_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QDragEnterEvent* event ```
void q_listview_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QDragEnterEvent* event ```
void q_listview_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QDragEnterEvent*) ```
void q_listview_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QFocusEvent* event ```
void q_listview_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QFocusEvent* event ```
void q_listview_qbase_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QFocusEvent*) ```
void q_listview_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QFocusEvent* event ```
void q_listview_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QFocusEvent* event ```
void q_listview_qbase_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QFocusEvent*) ```
void q_listview_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QKeyEvent* event ```
void q_listview_key_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QKeyEvent* event ```
void q_listview_qbase_key_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QKeyEvent*) ```
void q_listview_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QInputMethodEvent* event ```
void q_listview_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QInputMethodEvent* event ```
void q_listview_qbase_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QInputMethodEvent*) ```
void q_listview_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QObject* object, QEvent* event ```
bool q_listview_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QObject* object, QEvent* event ```
bool q_listview_qbase_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, bool (*slot)(QListView*, QObject*, QEvent*) ```
void q_listview_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
QSize* q_listview_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
QSize* q_listview_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, QSize* (*slot)() ```
void q_listview_on_minimum_size_hint(void* self, QSize* (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
QSize* q_listview_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
QSize* q_listview_qbase_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, QSize* (*slot)() ```
void q_listview_on_size_hint(void* self, QSize* (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QWidget* viewport ```
void q_listview_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QWidget* viewport ```
void q_listview_qbase_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QWidget*) ```
void q_listview_on_setup_viewport(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QContextMenuEvent* param1 ```
void q_listview_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QContextMenuEvent* param1 ```
void q_listview_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QContextMenuEvent*) ```
void q_listview_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QEvent* param1 ```
void q_listview_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QEvent* param1 ```
void q_listview_qbase_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QEvent*) ```
void q_listview_on_change_event(void* self, void (*slot)(void*, void*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QStyleOptionFrame* option ```
void q_listview_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QStyleOptionFrame* option ```
void q_listview_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QStyleOptionFrame*) ```
void q_listview_on_init_style_option(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
int32_t q_listview_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
int32_t q_listview_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, int32_t (*slot)() ```
void q_listview_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, bool visible ```
void q_listview_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, bool visible ```
void q_listview_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, bool) ```
void q_listview_on_set_visible(void* self, void (*slot)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, int param1 ```
int32_t q_listview_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, int param1 ```
int32_t q_listview_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, int32_t (*slot)(QListView*, int) ```
void q_listview_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
bool q_listview_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
bool q_listview_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, bool (*slot)() ```
void q_listview_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
QPaintEngine* q_listview_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
QPaintEngine* q_listview_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, QPaintEngine* (*slot)() ```
void q_listview_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QKeyEvent* event ```
void q_listview_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QKeyEvent* event ```
void q_listview_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QKeyEvent*) ```
void q_listview_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QEnterEvent* event ```
void q_listview_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QEnterEvent* event ```
void q_listview_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QEnterEvent*) ```
void q_listview_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QEvent* event ```
void q_listview_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QEvent* event ```
void q_listview_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QEvent*) ```
void q_listview_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QMoveEvent* event ```
void q_listview_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QMoveEvent* event ```
void q_listview_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QMoveEvent*) ```
void q_listview_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QCloseEvent* event ```
void q_listview_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QCloseEvent* event ```
void q_listview_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QCloseEvent*) ```
void q_listview_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QTabletEvent* event ```
void q_listview_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QTabletEvent* event ```
void q_listview_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QTabletEvent*) ```
void q_listview_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QActionEvent* event ```
void q_listview_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QActionEvent* event ```
void q_listview_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QActionEvent*) ```
void q_listview_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QShowEvent* event ```
void q_listview_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QShowEvent* event ```
void q_listview_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QShowEvent*) ```
void q_listview_on_show_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QHideEvent* event ```
void q_listview_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QHideEvent* event ```
void q_listview_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QHideEvent*) ```
void q_listview_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, const char* eventType, void* message, intptr_t* result ```
bool q_listview_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, const char* eventType, void* message, intptr_t* result ```
bool q_listview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, bool (*slot)(QListView*, const char*, void*, intptr_t*) ```
void q_listview_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_listview_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_listview_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, int32_t (*slot)(QListView*, enum QPaintDevice__PaintDeviceMetric) ```
void q_listview_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QPainter* painter ```
void q_listview_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QPainter* painter ```
void q_listview_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QPainter*) ```
void q_listview_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QPoint* offset ```
QPaintDevice* q_listview_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QPoint* offset ```
QPaintDevice* q_listview_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, QPaintDevice* (*slot)(QListView*, QPoint*) ```
void q_listview_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
QPainter* q_listview_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
QPainter* q_listview_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, QPainter* (*slot)() ```
void q_listview_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QChildEvent* event ```
void q_listview_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QChildEvent* event ```
void q_listview_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QChildEvent*) ```
void q_listview_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QEvent* event ```
void q_listview_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QEvent* event ```
void q_listview_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QEvent*) ```
void q_listview_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QMetaMethod* signal ```
void q_listview_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QMetaMethod* signal ```
void q_listview_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QMetaMethod*) ```
void q_listview_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QMetaMethod* signal ```
void q_listview_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QMetaMethod* signal ```
void q_listview_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QMetaMethod*) ```
void q_listview_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
int64_t q_listview_state(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
int64_t q_listview_qbase_state(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, int64_t (*slot)() ```
void q_listview_on_state(void* self, int64_t (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, enum QAbstractItemView__State state ```
void q_listview_set_state(void* self, int64_t state);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, enum QAbstractItemView__State state ```
void q_listview_qbase_set_state(void* self, int64_t state);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, enum QAbstractItemView__State) ```
void q_listview_on_set_state(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
void q_listview_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
void q_listview_qbase_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)() ```
void q_listview_on_schedule_delayed_items_layout(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
void q_listview_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
void q_listview_qbase_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)() ```
void q_listview_on_execute_delayed_items_layout(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QRegion* region ```
void q_listview_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QRegion* region ```
void q_listview_qbase_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QRegion*) ```
void q_listview_on_set_dirty_region(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, int dx, int dy ```
void q_listview_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, int dx, int dy ```
void q_listview_qbase_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, int, int) ```
void q_listview_on_scroll_dirty_region(void* self, void (*slot)(void*, int, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
QPoint* q_listview_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
QPoint* q_listview_qbase_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, QPoint* (*slot)() ```
void q_listview_on_dirty_region_offset(void* self, QPoint* (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
void q_listview_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
void q_listview_qbase_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)() ```
void q_listview_on_start_auto_scroll(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
void q_listview_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
void q_listview_qbase_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)() ```
void q_listview_on_stop_auto_scroll(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
void q_listview_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
void q_listview_qbase_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)() ```
void q_listview_on_do_auto_scroll(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
int64_t q_listview_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
int64_t q_listview_qbase_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, int64_t (*slot)() ```
void q_listview_on_drop_indicator_position(void* self, int64_t (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, int left, int top, int right, int bottom ```
void q_listview_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, int left, int top, int right, int bottom ```
void q_listview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, int, int, int, int) ```
void q_listview_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
QMargins* q_listview_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
QMargins* q_listview_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, QMargins* (*slot)() ```
void q_listview_on_viewport_margins(void* self, QMargins* (*slot)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QPainter* param1 ```
void q_listview_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QPainter* param1 ```
void q_listview_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)(QListView*, QPainter*) ```
void q_listview_on_draw_frame(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
void q_listview_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
void q_listview_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)() ```
void q_listview_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
void q_listview_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
void q_listview_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)() ```
void q_listview_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
void q_listview_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
void q_listview_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, void (*slot)() ```
void q_listview_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
bool q_listview_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
bool q_listview_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, bool (*slot)() ```
void q_listview_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
bool q_listview_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
bool q_listview_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, bool (*slot)() ```
void q_listview_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
QObject* q_listview_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
QObject* q_listview_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, QObject* (*slot)() ```
void q_listview_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self ```
int32_t q_listview_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self ```
int32_t q_listview_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, int32_t (*slot)() ```
void q_listview_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, const char* signal ```
int32_t q_listview_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, const char* signal ```
int32_t q_listview_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, int32_t (*slot)(QListView*, const char*) ```
void q_listview_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QListView* self, QMetaMethod* signal ```
bool q_listview_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QListView* self, QMetaMethod* signal ```
bool q_listview_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QListView* self, bool (*slot)(QListView*, QMetaMethod*) ```
void q_listview_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QListView* self, void (*slot)(QObject*, const char*) ```
void q_listview_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dtor.QListView)
///
/// Delete this object from C++ memory.
///
/// ``` QListView* self ```
void q_listview_delete(void* self);

/// https://doc.qt.io/qt-6/qlistview.html#types

typedef enum {
    QLISTVIEW_MOVEMENT_STATIC = 0,
    QLISTVIEW_MOVEMENT_FREE = 1,
    QLISTVIEW_MOVEMENT_SNAP = 2
} QListView__Movement;

typedef enum {
    QLISTVIEW_FLOW_LEFTTORIGHT = 0,
    QLISTVIEW_FLOW_TOPTOBOTTOM = 1
} QListView__Flow;

typedef enum {
    QLISTVIEW_RESIZEMODE_FIXED = 0,
    QLISTVIEW_RESIZEMODE_ADJUST = 1
} QListView__ResizeMode;

typedef enum {
    QLISTVIEW_LAYOUTMODE_SINGLEPASS = 0,
    QLISTVIEW_LAYOUTMODE_BATCHED = 1
} QListView__LayoutMode;

typedef enum {
    QLISTVIEW_VIEWMODE_LISTMODE = 0,
    QLISTVIEW_VIEWMODE_ICONMODE = 1
} QListView__ViewMode;

#endif
