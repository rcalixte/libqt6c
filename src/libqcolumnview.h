#pragma once
#ifndef SRCQT6C_LIBQCOLUMNVIEW_H
#define SRCQT6C_LIBQCOLUMNVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qcolumnview.html

/// q_columnview_new constructs a new QColumnView object.
///
/// ``` QWidget* parent ```
QColumnView* q_columnview_new(void* parent);

/// q_columnview_new2 constructs a new QColumnView object.
///
///
QColumnView* q_columnview_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QColumnView* self ```
const QMetaObject* q_columnview_meta_object(void* self);

/// ``` QColumnView* self, const char* param1 ```
void* q_columnview_metacast(void* self, const char* param1);

/// ``` QColumnView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_columnview_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QColumnView* self, int32_t (*slot)(QColumnView*, enum QMetaObject__Call, int, void*) ```
void q_columnview_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QColumnView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_columnview_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_columnview_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#updatePreviewWidget)
///
/// ``` QColumnView* self, QModelIndex* index ```
void q_columnview_update_preview_widget(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#updatePreviewWidget)
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QModelIndex*) ```
void q_columnview_on_update_preview_widget(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#indexAt)
///
/// ``` QColumnView* self, QPoint* point ```
QModelIndex* q_columnview_index_at(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#indexAt)
///
/// Allows for overriding the related default method
///
/// ``` QColumnView* self, QModelIndex* (*slot)(QColumnView*, QPoint*) ```
void q_columnview_on_index_at(void* self, QModelIndex* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#indexAt)
///
/// Base class method implementation
///
/// ``` QColumnView* self, QPoint* point ```
QModelIndex* q_columnview_qbase_index_at(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#scrollTo)
///
/// ``` QColumnView* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_columnview_scroll_to(void* self, void* index, int64_t hint);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#scrollTo)
///
/// Allows for overriding the related default method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QModelIndex*, enum QAbstractItemView__ScrollHint) ```
void q_columnview_on_scroll_to(void* self, void (*slot)(void*, void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#scrollTo)
///
/// Base class method implementation
///
/// ``` QColumnView* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_columnview_qbase_scroll_to(void* self, void* index, int64_t hint);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#sizeHint)
///
/// ``` QColumnView* self ```
QSize* q_columnview_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QColumnView* self, QSize* (*slot)() ```
void q_columnview_on_size_hint(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#sizeHint)
///
/// Base class method implementation
///
/// ``` QColumnView* self ```
QSize* q_columnview_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#visualRect)
///
/// ``` QColumnView* self, QModelIndex* index ```
QRect* q_columnview_visual_rect(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#visualRect)
///
/// Allows for overriding the related default method
///
/// ``` QColumnView* self, QRect* (*slot)(QColumnView*, QModelIndex*) ```
void q_columnview_on_visual_rect(void* self, QRect* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#visualRect)
///
/// Base class method implementation
///
/// ``` QColumnView* self, QModelIndex* index ```
QRect* q_columnview_qbase_visual_rect(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#setModel)
///
/// ``` QColumnView* self, QAbstractItemModel* model ```
void q_columnview_set_model(void* self, void* model);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#setModel)
///
/// Allows for overriding the related default method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QAbstractItemModel*) ```
void q_columnview_on_set_model(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#setModel)
///
/// Base class method implementation
///
/// ``` QColumnView* self, QAbstractItemModel* model ```
void q_columnview_qbase_set_model(void* self, void* model);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#setSelectionModel)
///
/// ``` QColumnView* self, QItemSelectionModel* selectionModel ```
void q_columnview_set_selection_model(void* self, void* selectionModel);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#setSelectionModel)
///
/// Allows for overriding the related default method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QItemSelectionModel*) ```
void q_columnview_on_set_selection_model(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#setSelectionModel)
///
/// Base class method implementation
///
/// ``` QColumnView* self, QItemSelectionModel* selectionModel ```
void q_columnview_qbase_set_selection_model(void* self, void* selectionModel);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#setRootIndex)
///
/// ``` QColumnView* self, QModelIndex* index ```
void q_columnview_set_root_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#setRootIndex)
///
/// Allows for overriding the related default method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QModelIndex*) ```
void q_columnview_on_set_root_index(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#setRootIndex)
///
/// Base class method implementation
///
/// ``` QColumnView* self, QModelIndex* index ```
void q_columnview_qbase_set_root_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#selectAll)
///
/// ``` QColumnView* self ```
void q_columnview_select_all(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#selectAll)
///
/// Allows for overriding the related default method
///
/// ``` QColumnView* self, void (*slot)() ```
void q_columnview_on_select_all(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#selectAll)
///
/// Base class method implementation
///
/// ``` QColumnView* self ```
void q_columnview_qbase_select_all(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#setResizeGripsVisible)
///
/// ``` QColumnView* self, bool visible ```
void q_columnview_set_resize_grips_visible(void* self, bool visible);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#resizeGripsVisible)
///
/// ``` QColumnView* self ```
bool q_columnview_resize_grips_visible(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#previewWidget)
///
/// ``` QColumnView* self ```
QWidget* q_columnview_preview_widget(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#setPreviewWidget)
///
/// ``` QColumnView* self, QWidget* widget ```
void q_columnview_set_preview_widget(void* self, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#setColumnWidths)
///
/// ``` QColumnView* self, libqt_list /* of int */ list ```
void q_columnview_set_column_widths(void* self, libqt_list list);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#columnWidths)
///
/// ``` QColumnView* self ```
libqt_list /* of int */ q_columnview_column_widths(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#isIndexHidden)
///
/// ``` QColumnView* self, QModelIndex* index ```
bool q_columnview_is_index_hidden(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#isIndexHidden)
///
/// Allows for overriding the related default method
///
/// ``` QColumnView* self, bool (*slot)(QColumnView*, QModelIndex*) ```
void q_columnview_on_is_index_hidden(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#isIndexHidden)
///
/// Base class method implementation
///
/// ``` QColumnView* self, QModelIndex* index ```
bool q_columnview_qbase_is_index_hidden(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#moveCursor)
///
/// ``` QColumnView* self, enum QAbstractItemView__CursorAction cursorAction, int modifiers ```
QModelIndex* q_columnview_move_cursor(void* self, int64_t cursorAction, int64_t modifiers);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#moveCursor)
///
/// Allows for overriding the related default method
///
/// ``` QColumnView* self, QModelIndex* (*slot)(QColumnView*, enum QAbstractItemView__CursorAction, int) ```
void q_columnview_on_move_cursor(void* self, QModelIndex* (*slot)(void*, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#moveCursor)
///
/// Base class method implementation
///
/// ``` QColumnView* self, enum QAbstractItemView__CursorAction cursorAction, int modifiers ```
QModelIndex* q_columnview_qbase_move_cursor(void* self, int64_t cursorAction, int64_t modifiers);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#resizeEvent)
///
/// ``` QColumnView* self, QResizeEvent* event ```
void q_columnview_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QResizeEvent*) ```
void q_columnview_on_resize_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#resizeEvent)
///
/// Base class method implementation
///
/// ``` QColumnView* self, QResizeEvent* event ```
void q_columnview_qbase_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#setSelection)
///
/// ``` QColumnView* self, QRect* rect, int command ```
void q_columnview_set_selection(void* self, void* rect, int64_t command);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#setSelection)
///
/// Allows for overriding the related default method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QRect*, int) ```
void q_columnview_on_set_selection(void* self, void (*slot)(void*, void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#setSelection)
///
/// Base class method implementation
///
/// ``` QColumnView* self, QRect* rect, int command ```
void q_columnview_qbase_set_selection(void* self, void* rect, int64_t command);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#visualRegionForSelection)
///
/// ``` QColumnView* self, QItemSelection* selection ```
QRegion* q_columnview_visual_region_for_selection(void* self, void* selection);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#visualRegionForSelection)
///
/// Allows for overriding the related default method
///
/// ``` QColumnView* self, QRegion* (*slot)(QColumnView*, QItemSelection*) ```
void q_columnview_on_visual_region_for_selection(void* self, QRegion* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#visualRegionForSelection)
///
/// Base class method implementation
///
/// ``` QColumnView* self, QItemSelection* selection ```
QRegion* q_columnview_qbase_visual_region_for_selection(void* self, void* selection);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#horizontalOffset)
///
/// ``` QColumnView* self ```
int32_t q_columnview_horizontal_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#horizontalOffset)
///
/// Allows for overriding the related default method
///
/// ``` QColumnView* self, int32_t (*slot)() ```
void q_columnview_on_horizontal_offset(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#horizontalOffset)
///
/// Base class method implementation
///
/// ``` QColumnView* self ```
int32_t q_columnview_qbase_horizontal_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#verticalOffset)
///
/// ``` QColumnView* self ```
int32_t q_columnview_vertical_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#verticalOffset)
///
/// Allows for overriding the related default method
///
/// ``` QColumnView* self, int32_t (*slot)() ```
void q_columnview_on_vertical_offset(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#verticalOffset)
///
/// Base class method implementation
///
/// ``` QColumnView* self ```
int32_t q_columnview_qbase_vertical_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#rowsInserted)
///
/// ``` QColumnView* self, QModelIndex* parent, int start, int end ```
void q_columnview_rows_inserted(void* self, void* parent, int start, int end);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#rowsInserted)
///
/// Allows for overriding the related default method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QModelIndex*, int, int) ```
void q_columnview_on_rows_inserted(void* self, void (*slot)(void*, void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#rowsInserted)
///
/// Base class method implementation
///
/// ``` QColumnView* self, QModelIndex* parent, int start, int end ```
void q_columnview_qbase_rows_inserted(void* self, void* parent, int start, int end);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#currentChanged)
///
/// ``` QColumnView* self, QModelIndex* current, QModelIndex* previous ```
void q_columnview_current_changed(void* self, void* current, void* previous);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#currentChanged)
///
/// Allows for overriding the related default method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QModelIndex*, QModelIndex*) ```
void q_columnview_on_current_changed(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#currentChanged)
///
/// Base class method implementation
///
/// ``` QColumnView* self, QModelIndex* current, QModelIndex* previous ```
void q_columnview_qbase_current_changed(void* self, void* current, void* previous);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#scrollContentsBy)
///
/// ``` QColumnView* self, int dx, int dy ```
void q_columnview_scroll_contents_by(void* self, int dx, int dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#scrollContentsBy)
///
/// Allows for overriding the related default method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, int, int) ```
void q_columnview_on_scroll_contents_by(void* self, void (*slot)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#scrollContentsBy)
///
/// Base class method implementation
///
/// ``` QColumnView* self, int dx, int dy ```
void q_columnview_qbase_scroll_contents_by(void* self, int dx, int dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#createColumn)
///
/// ``` QColumnView* self, QModelIndex* rootIndex ```
QAbstractItemView* q_columnview_create_column(void* self, void* rootIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#createColumn)
///
/// Allows for overriding the related default method
///
/// ``` QColumnView* self, QAbstractItemView* (*slot)(QColumnView*, QModelIndex*) ```
void q_columnview_on_create_column(void* self, QAbstractItemView* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#createColumn)
///
/// Base class method implementation
///
/// ``` QColumnView* self, QModelIndex* rootIndex ```
QAbstractItemView* q_columnview_qbase_create_column(void* self, void* rootIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#initializeColumn)
///
/// ``` QColumnView* self, QAbstractItemView* column ```
void q_columnview_initialize_column(void* self, void* column);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#initializeColumn)
///
/// Allows for overriding the related default method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QAbstractItemView*) ```
void q_columnview_on_initialize_column(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#initializeColumn)
///
/// Base class method implementation
///
/// ``` QColumnView* self, QAbstractItemView* column ```
void q_columnview_qbase_initialize_column(void* self, void* column);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_columnview_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_columnview_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#model)
///
/// ``` QColumnView* self ```
QAbstractItemModel* q_columnview_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
///
/// ``` QColumnView* self ```
QItemSelectionModel* q_columnview_selection_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
///
/// ``` QColumnView* self, QAbstractItemDelegate* delegate ```
void q_columnview_set_item_delegate(void* self, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QColumnView* self ```
QAbstractItemDelegate* q_columnview_item_delegate(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
///
/// ``` QColumnView* self, enum QAbstractItemView__SelectionMode mode ```
void q_columnview_set_selection_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
///
/// ``` QColumnView* self ```
int64_t q_columnview_selection_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
///
/// ``` QColumnView* self, enum QAbstractItemView__SelectionBehavior behavior ```
void q_columnview_set_selection_behavior(void* self, int64_t behavior);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
///
/// ``` QColumnView* self ```
int64_t q_columnview_selection_behavior(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
///
/// ``` QColumnView* self ```
QModelIndex* q_columnview_current_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
///
/// ``` QColumnView* self ```
QModelIndex* q_columnview_root_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
///
/// ``` QColumnView* self, int triggers ```
void q_columnview_set_edit_triggers(void* self, int64_t triggers);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
///
/// ``` QColumnView* self ```
int64_t q_columnview_edit_triggers(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
///
/// ``` QColumnView* self, enum QAbstractItemView__ScrollMode mode ```
void q_columnview_set_vertical_scroll_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
///
/// ``` QColumnView* self ```
int64_t q_columnview_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
///
/// ``` QColumnView* self ```
void q_columnview_reset_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
///
/// ``` QColumnView* self, enum QAbstractItemView__ScrollMode mode ```
void q_columnview_set_horizontal_scroll_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
///
/// ``` QColumnView* self ```
int64_t q_columnview_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
///
/// ``` QColumnView* self ```
void q_columnview_reset_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
///
/// ``` QColumnView* self, bool enable ```
void q_columnview_set_auto_scroll(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
///
/// ``` QColumnView* self ```
bool q_columnview_has_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
///
/// ``` QColumnView* self, int margin ```
void q_columnview_set_auto_scroll_margin(void* self, int margin);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
///
/// ``` QColumnView* self ```
int32_t q_columnview_auto_scroll_margin(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
///
/// ``` QColumnView* self, bool enable ```
void q_columnview_set_tab_key_navigation(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
///
/// ``` QColumnView* self ```
bool q_columnview_tab_key_navigation(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
///
/// ``` QColumnView* self, bool enable ```
void q_columnview_set_drop_indicator_shown(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
///
/// ``` QColumnView* self ```
bool q_columnview_show_drop_indicator(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
///
/// ``` QColumnView* self, bool enable ```
void q_columnview_set_drag_enabled(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
///
/// ``` QColumnView* self ```
bool q_columnview_drag_enabled(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
///
/// ``` QColumnView* self, bool overwrite ```
void q_columnview_set_drag_drop_overwrite_mode(void* self, bool overwrite);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
///
/// ``` QColumnView* self ```
bool q_columnview_drag_drop_overwrite_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
///
/// ``` QColumnView* self, enum QAbstractItemView__DragDropMode behavior ```
void q_columnview_set_drag_drop_mode(void* self, int64_t behavior);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
///
/// ``` QColumnView* self ```
int64_t q_columnview_drag_drop_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
///
/// ``` QColumnView* self, enum Qt__DropAction dropAction ```
void q_columnview_set_default_drop_action(void* self, int64_t dropAction);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
///
/// ``` QColumnView* self ```
int64_t q_columnview_default_drop_action(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
///
/// ``` QColumnView* self, bool enable ```
void q_columnview_set_alternating_row_colors(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
///
/// ``` QColumnView* self ```
bool q_columnview_alternating_row_colors(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
///
/// ``` QColumnView* self, QSize* size ```
void q_columnview_set_icon_size(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
///
/// ``` QColumnView* self ```
QSize* q_columnview_icon_size(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
///
/// ``` QColumnView* self, enum Qt__TextElideMode mode ```
void q_columnview_set_text_elide_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
///
/// ``` QColumnView* self ```
int64_t q_columnview_text_elide_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
///
/// ``` QColumnView* self, QModelIndex* index ```
QSize* q_columnview_size_hint_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#openPersistentEditor)
///
/// ``` QColumnView* self, QModelIndex* index ```
void q_columnview_open_persistent_editor(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closePersistentEditor)
///
/// ``` QColumnView* self, QModelIndex* index ```
void q_columnview_close_persistent_editor(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#isPersistentEditorOpen)
///
/// ``` QColumnView* self, QModelIndex* index ```
bool q_columnview_is_persistent_editor_open(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
///
/// ``` QColumnView* self, QModelIndex* index, QWidget* widget ```
void q_columnview_set_index_widget(void* self, void* index, void* widget);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
///
/// ``` QColumnView* self, QModelIndex* index ```
QWidget* q_columnview_index_widget(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
///
/// ``` QColumnView* self, int row, QAbstractItemDelegate* delegate ```
void q_columnview_set_item_delegate_for_row(void* self, int row, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
///
/// ``` QColumnView* self, int row ```
QAbstractItemDelegate* q_columnview_item_delegate_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
///
/// ``` QColumnView* self, int column, QAbstractItemDelegate* delegate ```
void q_columnview_set_item_delegate_for_column(void* self, int column, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
///
/// ``` QColumnView* self, int column ```
QAbstractItemDelegate* q_columnview_item_delegate_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QColumnView* self, QModelIndex* index ```
QAbstractItemDelegate* q_columnview_item_delegate2(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// ``` QColumnView* self, QModelIndex* index ```
void q_columnview_edit(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
///
/// ``` QColumnView* self ```
void q_columnview_clear_selection(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
///
/// ``` QColumnView* self, QModelIndex* index ```
void q_columnview_set_current_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
///
/// ``` QColumnView* self ```
void q_columnview_scroll_to_top(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
///
/// ``` QColumnView* self ```
void q_columnview_scroll_to_bottom(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#update)
///
/// ``` QColumnView* self, QModelIndex* index ```
void q_columnview_update(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// ``` QColumnView* self, QModelIndex* index ```
void q_columnview_pressed(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QModelIndex*) ```
void q_columnview_on_pressed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// ``` QColumnView* self, QModelIndex* index ```
void q_columnview_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QModelIndex*) ```
void q_columnview_on_clicked(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// ``` QColumnView* self, QModelIndex* index ```
void q_columnview_double_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QModelIndex*) ```
void q_columnview_on_double_clicked(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// ``` QColumnView* self, QModelIndex* index ```
void q_columnview_activated(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QModelIndex*) ```
void q_columnview_on_activated(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// ``` QColumnView* self, QModelIndex* index ```
void q_columnview_entered(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QModelIndex*) ```
void q_columnview_on_entered(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// ``` QColumnView* self ```
void q_columnview_viewport_entered(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// ``` QColumnView* self, void (*slot)(QColumnView*) ```
void q_columnview_on_viewport_entered(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// ``` QColumnView* self, QSize* size ```
void q_columnview_icon_size_changed(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QSize*) ```
void q_columnview_on_icon_size_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// ``` QColumnView* self ```
int64_t q_columnview_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// ``` QColumnView* self, enum Qt__ScrollBarPolicy verticalScrollBarPolicy ```
void q_columnview_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// ``` QColumnView* self ```
QScrollBar* q_columnview_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// ``` QColumnView* self, QScrollBar* scrollbar ```
void q_columnview_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// ``` QColumnView* self ```
int64_t q_columnview_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// ``` QColumnView* self, enum Qt__ScrollBarPolicy horizontalScrollBarPolicy ```
void q_columnview_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// ``` QColumnView* self ```
QScrollBar* q_columnview_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// ``` QColumnView* self, QScrollBar* scrollbar ```
void q_columnview_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// ``` QColumnView* self ```
QWidget* q_columnview_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// ``` QColumnView* self, QWidget* widget ```
void q_columnview_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// ``` QColumnView* self, QWidget* widget, int alignment ```
void q_columnview_add_scroll_bar_widget(void* self, void* widget, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// ``` QColumnView* self, int alignment ```
libqt_list /* of QWidget* */ q_columnview_scroll_bar_widgets(void* self, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// ``` QColumnView* self ```
QWidget* q_columnview_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// ``` QColumnView* self, QWidget* widget ```
void q_columnview_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// ``` QColumnView* self ```
QSize* q_columnview_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// ``` QColumnView* self ```
int64_t q_columnview_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// ``` QColumnView* self, enum QAbstractScrollArea__SizeAdjustPolicy policy ```
void q_columnview_set_size_adjust_policy(void* self, int64_t policy);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QColumnView* self ```
int32_t q_columnview_frame_style(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QColumnView* self, int frameStyle ```
void q_columnview_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QColumnView* self ```
int32_t q_columnview_frame_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QColumnView* self ```
int64_t q_columnview_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QColumnView* self, enum QFrame__Shape frameShape ```
void q_columnview_set_frame_shape(void* self, int64_t frameShape);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QColumnView* self ```
int64_t q_columnview_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QColumnView* self, enum QFrame__Shadow frameShadow ```
void q_columnview_set_frame_shadow(void* self, int64_t frameShadow);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QColumnView* self ```
int32_t q_columnview_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QColumnView* self, int lineWidth ```
void q_columnview_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QColumnView* self ```
int32_t q_columnview_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QColumnView* self, int midLineWidth ```
void q_columnview_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QColumnView* self ```
QRect* q_columnview_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QColumnView* self, QRect* frameRect ```
void q_columnview_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QColumnView* self ```
uintptr_t q_columnview_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QColumnView* self ```
void q_columnview_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QColumnView* self ```
uintptr_t q_columnview_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QColumnView* self ```
uintptr_t q_columnview_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QColumnView* self ```
QStyle* q_columnview_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QColumnView* self, QStyle* style ```
void q_columnview_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QColumnView* self ```
bool q_columnview_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QColumnView* self ```
bool q_columnview_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QColumnView* self ```
bool q_columnview_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QColumnView* self ```
int64_t q_columnview_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QColumnView* self, enum Qt__WindowModality windowModality ```
void q_columnview_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QColumnView* self ```
bool q_columnview_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QColumnView* self, QWidget* param1 ```
bool q_columnview_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QColumnView* self, bool enabled ```
void q_columnview_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QColumnView* self, bool disabled ```
void q_columnview_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QColumnView* self, bool windowModified ```
void q_columnview_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QColumnView* self ```
QRect* q_columnview_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QColumnView* self ```
const QRect* q_columnview_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QColumnView* self ```
QRect* q_columnview_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QColumnView* self ```
int32_t q_columnview_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QColumnView* self ```
int32_t q_columnview_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QColumnView* self ```
QPoint* q_columnview_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QColumnView* self ```
QSize* q_columnview_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QColumnView* self ```
QSize* q_columnview_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QColumnView* self ```
int32_t q_columnview_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QColumnView* self ```
int32_t q_columnview_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QColumnView* self ```
QRect* q_columnview_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QColumnView* self ```
QRect* q_columnview_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QColumnView* self ```
QRegion* q_columnview_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QColumnView* self ```
QSize* q_columnview_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QColumnView* self ```
QSize* q_columnview_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QColumnView* self ```
int32_t q_columnview_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QColumnView* self ```
int32_t q_columnview_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QColumnView* self ```
int32_t q_columnview_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QColumnView* self ```
int32_t q_columnview_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QColumnView* self, QSize* minimumSize ```
void q_columnview_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QColumnView* self, int minw, int minh ```
void q_columnview_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QColumnView* self, QSize* maximumSize ```
void q_columnview_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QColumnView* self, int maxw, int maxh ```
void q_columnview_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QColumnView* self, int minw ```
void q_columnview_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QColumnView* self, int minh ```
void q_columnview_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QColumnView* self, int maxw ```
void q_columnview_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QColumnView* self, int maxh ```
void q_columnview_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QColumnView* self ```
QSize* q_columnview_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QColumnView* self, QSize* sizeIncrement ```
void q_columnview_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QColumnView* self, int w, int h ```
void q_columnview_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QColumnView* self ```
QSize* q_columnview_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QColumnView* self, QSize* baseSize ```
void q_columnview_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QColumnView* self, int basew, int baseh ```
void q_columnview_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QColumnView* self, QSize* fixedSize ```
void q_columnview_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QColumnView* self, int w, int h ```
void q_columnview_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QColumnView* self, int w ```
void q_columnview_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QColumnView* self, int h ```
void q_columnview_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QColumnView* self, QPointF* param1 ```
QPointF* q_columnview_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QColumnView* self, QPoint* param1 ```
QPoint* q_columnview_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QColumnView* self, QPointF* param1 ```
QPointF* q_columnview_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QColumnView* self, QPoint* param1 ```
QPoint* q_columnview_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QColumnView* self, QPointF* param1 ```
QPointF* q_columnview_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QColumnView* self, QPoint* param1 ```
QPoint* q_columnview_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QColumnView* self, QPointF* param1 ```
QPointF* q_columnview_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QColumnView* self, QPoint* param1 ```
QPoint* q_columnview_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QColumnView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_columnview_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QColumnView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_columnview_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QColumnView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_columnview_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QColumnView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_columnview_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QColumnView* self ```
QWidget* q_columnview_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QColumnView* self ```
QWidget* q_columnview_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QColumnView* self ```
QWidget* q_columnview_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QColumnView* self ```
const QPalette* q_columnview_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QColumnView* self, QPalette* palette ```
void q_columnview_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QColumnView* self, enum QPalette__ColorRole backgroundRole ```
void q_columnview_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QColumnView* self ```
int64_t q_columnview_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QColumnView* self, enum QPalette__ColorRole foregroundRole ```
void q_columnview_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QColumnView* self ```
int64_t q_columnview_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QColumnView* self ```
const QFont* q_columnview_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QColumnView* self, QFont* font ```
void q_columnview_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QColumnView* self ```
QFontMetrics* q_columnview_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QColumnView* self ```
QFontInfo* q_columnview_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QColumnView* self ```
QCursor* q_columnview_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QColumnView* self, QCursor* cursor ```
void q_columnview_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QColumnView* self ```
void q_columnview_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QColumnView* self, bool enable ```
void q_columnview_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QColumnView* self ```
bool q_columnview_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QColumnView* self ```
bool q_columnview_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QColumnView* self, bool enable ```
void q_columnview_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QColumnView* self ```
bool q_columnview_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QColumnView* self, QBitmap* mask ```
void q_columnview_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QColumnView* self, QRegion* mask ```
void q_columnview_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QColumnView* self ```
QRegion* q_columnview_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QColumnView* self ```
void q_columnview_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QColumnView* self, QPaintDevice* target ```
void q_columnview_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QColumnView* self, QPainter* painter ```
void q_columnview_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QColumnView* self ```
QPixmap* q_columnview_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QColumnView* self ```
QGraphicsEffect* q_columnview_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QColumnView* self, QGraphicsEffect* effect ```
void q_columnview_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QColumnView* self, enum Qt__GestureType typeVal ```
void q_columnview_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QColumnView* self, enum Qt__GestureType typeVal ```
void q_columnview_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QColumnView* self, const char* windowTitle ```
void q_columnview_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QColumnView* self, const char* styleSheet ```
void q_columnview_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QColumnView* self ```
const char* q_columnview_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QColumnView* self ```
const char* q_columnview_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QColumnView* self, QIcon* icon ```
void q_columnview_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QColumnView* self ```
QIcon* q_columnview_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QColumnView* self, const char* windowIconText ```
void q_columnview_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QColumnView* self ```
const char* q_columnview_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QColumnView* self, const char* windowRole ```
void q_columnview_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QColumnView* self ```
const char* q_columnview_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QColumnView* self, const char* filePath ```
void q_columnview_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QColumnView* self ```
const char* q_columnview_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QColumnView* self, double level ```
void q_columnview_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QColumnView* self ```
double q_columnview_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QColumnView* self ```
bool q_columnview_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QColumnView* self, const char* toolTip ```
void q_columnview_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QColumnView* self ```
const char* q_columnview_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QColumnView* self, int msec ```
void q_columnview_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QColumnView* self ```
int32_t q_columnview_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QColumnView* self, const char* statusTip ```
void q_columnview_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QColumnView* self ```
const char* q_columnview_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QColumnView* self, const char* whatsThis ```
void q_columnview_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QColumnView* self ```
const char* q_columnview_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QColumnView* self ```
const char* q_columnview_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QColumnView* self, const char* name ```
void q_columnview_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QColumnView* self ```
const char* q_columnview_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QColumnView* self, const char* description ```
void q_columnview_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QColumnView* self, enum Qt__LayoutDirection direction ```
void q_columnview_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QColumnView* self ```
int64_t q_columnview_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QColumnView* self ```
void q_columnview_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QColumnView* self, QLocale* locale ```
void q_columnview_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QColumnView* self ```
QLocale* q_columnview_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QColumnView* self ```
void q_columnview_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QColumnView* self ```
bool q_columnview_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QColumnView* self ```
bool q_columnview_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QColumnView* self ```
void q_columnview_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QColumnView* self ```
bool q_columnview_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QColumnView* self ```
void q_columnview_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QColumnView* self ```
void q_columnview_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QColumnView* self, enum Qt__FocusReason reason ```
void q_columnview_set_focus2(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QColumnView* self ```
int64_t q_columnview_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QColumnView* self, enum Qt__FocusPolicy policy ```
void q_columnview_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QColumnView* self ```
bool q_columnview_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_columnview_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QColumnView* self, QWidget* focusProxy ```
void q_columnview_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QColumnView* self ```
QWidget* q_columnview_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QColumnView* self ```
int64_t q_columnview_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QColumnView* self, enum Qt__ContextMenuPolicy policy ```
void q_columnview_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QColumnView* self ```
void q_columnview_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QColumnView* self, QCursor* param1 ```
void q_columnview_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QColumnView* self ```
void q_columnview_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QColumnView* self ```
void q_columnview_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QColumnView* self ```
void q_columnview_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QColumnView* self, QKeySequence* key ```
int32_t q_columnview_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QColumnView* self, int id ```
void q_columnview_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QColumnView* self, int id ```
void q_columnview_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QColumnView* self, int id ```
void q_columnview_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_columnview_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_columnview_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QColumnView* self ```
bool q_columnview_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QColumnView* self, bool enable ```
void q_columnview_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QColumnView* self ```
QGraphicsProxyWidget* q_columnview_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QColumnView* self ```
void q_columnview_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QColumnView* self, int x, int y, int w, int h ```
void q_columnview_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QColumnView* self, QRect* param1 ```
void q_columnview_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QColumnView* self, QRegion* param1 ```
void q_columnview_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QColumnView* self, int x, int y, int w, int h ```
void q_columnview_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QColumnView* self, QRect* param1 ```
void q_columnview_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QColumnView* self, QRegion* param1 ```
void q_columnview_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QColumnView* self, bool hidden ```
void q_columnview_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QColumnView* self ```
void q_columnview_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QColumnView* self ```
void q_columnview_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QColumnView* self ```
void q_columnview_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QColumnView* self ```
void q_columnview_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QColumnView* self ```
void q_columnview_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QColumnView* self ```
void q_columnview_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QColumnView* self ```
bool q_columnview_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QColumnView* self ```
void q_columnview_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QColumnView* self ```
void q_columnview_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QColumnView* self, QWidget* param1 ```
void q_columnview_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QColumnView* self, int x, int y ```
void q_columnview_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QColumnView* self, QPoint* param1 ```
void q_columnview_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QColumnView* self, int w, int h ```
void q_columnview_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QColumnView* self, QSize* param1 ```
void q_columnview_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QColumnView* self, int x, int y, int w, int h ```
void q_columnview_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QColumnView* self, QRect* geometry ```
void q_columnview_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QColumnView* self ```
char* q_columnview_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QColumnView* self, const char* geometry ```
bool q_columnview_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QColumnView* self ```
void q_columnview_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QColumnView* self ```
bool q_columnview_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QColumnView* self, QWidget* param1 ```
bool q_columnview_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QColumnView* self ```
bool q_columnview_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QColumnView* self ```
bool q_columnview_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QColumnView* self ```
bool q_columnview_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QColumnView* self ```
bool q_columnview_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QColumnView* self ```
int64_t q_columnview_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QColumnView* self, int state ```
void q_columnview_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QColumnView* self, int state ```
void q_columnview_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QColumnView* self ```
QSizePolicy* q_columnview_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QColumnView* self, QSizePolicy* sizePolicy ```
void q_columnview_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QColumnView* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_columnview_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QColumnView* self ```
QRegion* q_columnview_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QColumnView* self, int left, int top, int right, int bottom ```
void q_columnview_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QColumnView* self, QMargins* margins ```
void q_columnview_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QColumnView* self ```
QMargins* q_columnview_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QColumnView* self ```
QRect* q_columnview_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QColumnView* self ```
QLayout* q_columnview_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QColumnView* self, QLayout* layout ```
void q_columnview_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QColumnView* self ```
void q_columnview_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QColumnView* self, QWidget* parent ```
void q_columnview_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QColumnView* self, QWidget* parent, int f ```
void q_columnview_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QColumnView* self, int dx, int dy ```
void q_columnview_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QColumnView* self, int dx, int dy, QRect* param3 ```
void q_columnview_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QColumnView* self ```
QWidget* q_columnview_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QColumnView* self ```
QWidget* q_columnview_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QColumnView* self ```
QWidget* q_columnview_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QColumnView* self ```
bool q_columnview_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QColumnView* self, bool on ```
void q_columnview_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QColumnView* self, QAction* action ```
void q_columnview_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QColumnView* self, libqt_list /* of QAction* */ actions ```
void q_columnview_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QColumnView* self, QAction* before, libqt_list /* of QAction* */ actions ```
void q_columnview_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QColumnView* self, QAction* before, QAction* action ```
void q_columnview_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QColumnView* self, QAction* action ```
void q_columnview_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QColumnView* self ```
libqt_list /* of QAction* */ q_columnview_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QColumnView* self, const char* text ```
QAction* q_columnview_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QColumnView* self, QIcon* icon, const char* text ```
QAction* q_columnview_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QColumnView* self, const char* text, QKeySequence* shortcut ```
QAction* q_columnview_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QColumnView* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_columnview_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QColumnView* self ```
QWidget* q_columnview_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QColumnView* self, int typeVal ```
void q_columnview_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QColumnView* self ```
int64_t q_columnview_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QColumnView* self, enum Qt__WindowType param1 ```
void q_columnview_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QColumnView* self, int typeVal ```
void q_columnview_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QColumnView* self ```
int64_t q_columnview_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_columnview_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QColumnView* self, int x, int y ```
QWidget* q_columnview_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QColumnView* self, QPoint* p ```
QWidget* q_columnview_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QColumnView* self, QPointF* p ```
QWidget* q_columnview_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QColumnView* self, enum Qt__WidgetAttribute param1 ```
void q_columnview_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QColumnView* self, enum Qt__WidgetAttribute param1 ```
bool q_columnview_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QColumnView* self ```
void q_columnview_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QColumnView* self, QWidget* child ```
bool q_columnview_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QColumnView* self ```
bool q_columnview_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QColumnView* self, bool enabled ```
void q_columnview_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QColumnView* self ```
QBackingStore* q_columnview_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QColumnView* self ```
QWindow* q_columnview_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QColumnView* self ```
QScreen* q_columnview_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QColumnView* self, QScreen* screen ```
void q_columnview_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_columnview_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QColumnView* self, const char* title ```
void q_columnview_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, const char*) ```
void q_columnview_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QColumnView* self, QIcon* icon ```
void q_columnview_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QIcon*) ```
void q_columnview_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QColumnView* self, const char* iconText ```
void q_columnview_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, const char*) ```
void q_columnview_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QColumnView* self, QPoint* pos ```
void q_columnview_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QPoint*) ```
void q_columnview_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QColumnView* self ```
int64_t q_columnview_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QColumnView* self, int hints ```
void q_columnview_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QColumnView* self, QPaintDevice* target, QPoint* targetOffset ```
void q_columnview_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QColumnView* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_columnview_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QColumnView* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_columnview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QColumnView* self, QPainter* painter, QPoint* targetOffset ```
void q_columnview_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QColumnView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_columnview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QColumnView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_columnview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QColumnView* self, QRect* rectangle ```
QPixmap* q_columnview_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QColumnView* self, enum Qt__GestureType typeVal, int flags ```
void q_columnview_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QColumnView* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_columnview_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QColumnView* self, int id, bool enable ```
void q_columnview_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QColumnView* self, int id, bool enable ```
void q_columnview_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QColumnView* self, enum Qt__WindowType param1, bool on ```
void q_columnview_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QColumnView* self, enum Qt__WidgetAttribute param1, bool on ```
void q_columnview_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_columnview_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_columnview_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QColumnView* self ```
const char* q_columnview_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QColumnView* self, char* name ```
void q_columnview_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QColumnView* self ```
bool q_columnview_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QColumnView* self ```
bool q_columnview_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QColumnView* self ```
bool q_columnview_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QColumnView* self ```
bool q_columnview_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QColumnView* self, bool b ```
bool q_columnview_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QColumnView* self ```
QThread* q_columnview_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QColumnView* self, QThread* thread ```
bool q_columnview_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QColumnView* self, int interval ```
int32_t q_columnview_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QColumnView* self, int id ```
void q_columnview_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QColumnView* self, enum Qt__TimerId id ```
void q_columnview_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QColumnView* self ```
libqt_list /* of QObject* */ q_columnview_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QColumnView* self, QObject* filterObj ```
void q_columnview_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QColumnView* self, QObject* obj ```
void q_columnview_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_columnview_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QColumnView* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_columnview_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_columnview_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_columnview_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QColumnView* self ```
void q_columnview_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QColumnView* self ```
void q_columnview_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QColumnView* self, const char* name, QVariant* value ```
bool q_columnview_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QColumnView* self, const char* name ```
QVariant* q_columnview_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QColumnView* self ```
const char** q_columnview_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QColumnView* self ```
QBindingStorage* q_columnview_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QColumnView* self ```
const QBindingStorage* q_columnview_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QColumnView* self ```
void q_columnview_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QColumnView* self, void (*slot)(QColumnView*) ```
void q_columnview_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QColumnView* self ```
QObject* q_columnview_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QColumnView* self, const char* classname ```
bool q_columnview_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QColumnView* self ```
void q_columnview_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QColumnView* self, QThread* thread, Disambiguated_t* param2 ```
bool q_columnview_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QColumnView* self, int interval, enum Qt__TimerType timerType ```
int32_t q_columnview_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_columnview_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QColumnView* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_columnview_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QColumnView* self, QObject* param1 ```
void q_columnview_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QObject*) ```
void q_columnview_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QColumnView* self ```
bool q_columnview_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QColumnView* self ```
int32_t q_columnview_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QColumnView* self ```
int32_t q_columnview_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QColumnView* self ```
int32_t q_columnview_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QColumnView* self ```
int32_t q_columnview_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QColumnView* self ```
int32_t q_columnview_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QColumnView* self ```
int32_t q_columnview_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QColumnView* self ```
double q_columnview_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QColumnView* self ```
double q_columnview_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QColumnView* self ```
int32_t q_columnview_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QColumnView* self ```
int32_t q_columnview_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_columnview_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// ``` enum QPaintDevice__PaintDeviceMetric metric, double value ```
int32_t q_columnview_encode_metric_f(int64_t metric, double value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, const char* search ```
void q_columnview_keyboard_search(void* self, const char* search);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, const char* search ```
void q_columnview_qbase_keyboard_search(void* self, const char* search);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, const char*) ```
void q_columnview_on_keyboard_search(void* self, void (*slot)(void*, const char*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, int row ```
int32_t q_columnview_size_hint_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, int row ```
int32_t q_columnview_qbase_size_hint_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, int32_t (*slot)(QColumnView*, int) ```
void q_columnview_on_size_hint_for_row(void* self, int32_t (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, int column ```
int32_t q_columnview_size_hint_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, int column ```
int32_t q_columnview_qbase_size_hint_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, int32_t (*slot)(QColumnView*, int) ```
void q_columnview_on_size_hint_for_column(void* self, int32_t (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QModelIndex* index ```
QAbstractItemDelegate* q_columnview_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QModelIndex* index ```
QAbstractItemDelegate* q_columnview_qbase_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, QAbstractItemDelegate* (*slot)(QColumnView*, QModelIndex*) ```
void q_columnview_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, enum Qt__InputMethodQuery query ```
QVariant* q_columnview_input_method_query(void* self, int64_t query);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, enum Qt__InputMethodQuery query ```
QVariant* q_columnview_qbase_input_method_query(void* self, int64_t query);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, QVariant* (*slot)(QColumnView*, enum Qt__InputMethodQuery) ```
void q_columnview_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self ```
void q_columnview_reset(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self ```
void q_columnview_qbase_reset(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)() ```
void q_columnview_on_reset(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self ```
void q_columnview_do_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self ```
void q_columnview_qbase_do_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)() ```
void q_columnview_on_do_items_layout(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles ```
void q_columnview_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles ```
void q_columnview_qbase_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QModelIndex*, QModelIndex*, libqt_list /* of int */ roles ) ```
void q_columnview_on_data_changed(void* self, void (*slot)(void*, void*, void*, libqt_list));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QModelIndex* parent, int start, int end ```
void q_columnview_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QModelIndex* parent, int start, int end ```
void q_columnview_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QModelIndex*, int, int) ```
void q_columnview_on_rows_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QItemSelection* selected, QItemSelection* deselected ```
void q_columnview_selection_changed(void* self, void* selected, void* deselected);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QItemSelection* selected, QItemSelection* deselected ```
void q_columnview_qbase_selection_changed(void* self, void* selected, void* deselected);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QItemSelection*, QItemSelection*) ```
void q_columnview_on_selection_changed(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self ```
void q_columnview_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self ```
void q_columnview_qbase_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)() ```
void q_columnview_on_update_editor_data(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self ```
void q_columnview_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self ```
void q_columnview_qbase_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)() ```
void q_columnview_on_update_editor_geometries(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self ```
void q_columnview_update_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateGeometries)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self ```
void q_columnview_qbase_update_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateGeometries)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)() ```
void q_columnview_on_update_geometries(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, int action ```
void q_columnview_vertical_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, int action ```
void q_columnview_qbase_vertical_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, int) ```
void q_columnview_on_vertical_scrollbar_action(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, int action ```
void q_columnview_horizontal_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, int action ```
void q_columnview_qbase_horizontal_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, int) ```
void q_columnview_on_horizontal_scrollbar_action(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, int value ```
void q_columnview_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, int value ```
void q_columnview_qbase_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, int) ```
void q_columnview_on_vertical_scrollbar_value_changed(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, int value ```
void q_columnview_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, int value ```
void q_columnview_qbase_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, int) ```
void q_columnview_on_horizontal_scrollbar_value_changed(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_columnview_close_editor(void* self, void* editor, int64_t hint);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_columnview_qbase_close_editor(void* self, void* editor, int64_t hint);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QWidget*, enum QAbstractItemDelegate__EndEditHint) ```
void q_columnview_on_close_editor(void* self, void (*slot)(void*, void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QWidget* editor ```
void q_columnview_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QWidget* editor ```
void q_columnview_qbase_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QWidget*) ```
void q_columnview_on_commit_data(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QObject* editor ```
void q_columnview_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QObject* editor ```
void q_columnview_qbase_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QObject*) ```
void q_columnview_on_editor_destroyed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectedIndexes)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self ```
libqt_list /* of QModelIndex* */ q_columnview_selected_indexes(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectedIndexes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self ```
libqt_list /* of QModelIndex* */ q_columnview_qbase_selected_indexes(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectedIndexes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_columnview_on_selected_indexes(void* self, libqt_list /* of QModelIndex* */ (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_columnview_edit2(void* self, void* index, int64_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_columnview_qbase_edit2(void* self, void* index, int64_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, bool (*slot)(QColumnView*, QModelIndex*, enum QAbstractItemView__EditTrigger, QEvent*) ```
void q_columnview_on_edit2(void* self, bool (*slot)(void*, void*, int64_t, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QModelIndex* index, QEvent* event ```
int64_t q_columnview_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QModelIndex* index, QEvent* event ```
int64_t q_columnview_qbase_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, int64_t (*slot)(QColumnView*, QModelIndex*, QEvent*) ```
void q_columnview_on_selection_command(void* self, int64_t (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, int supportedActions ```
void q_columnview_start_drag(void* self, int64_t supportedActions);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, int supportedActions ```
void q_columnview_qbase_start_drag(void* self, int64_t supportedActions);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, int) ```
void q_columnview_on_start_drag(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QStyleOptionViewItem* option ```
void q_columnview_init_view_item_option(void* self, void* option);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QStyleOptionViewItem* option ```
void q_columnview_qbase_init_view_item_option(void* self, void* option);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QStyleOptionViewItem*) ```
void q_columnview_on_init_view_item_option(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, bool next ```
bool q_columnview_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, bool next ```
bool q_columnview_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, bool (*slot)(QColumnView*, bool) ```
void q_columnview_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QEvent* event ```
bool q_columnview_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QEvent* event ```
bool q_columnview_qbase_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, bool (*slot)(QColumnView*, QEvent*) ```
void q_columnview_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QEvent* event ```
bool q_columnview_viewport_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QEvent* event ```
bool q_columnview_qbase_viewport_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, bool (*slot)(QColumnView*, QEvent*) ```
void q_columnview_on_viewport_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QMouseEvent* event ```
void q_columnview_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QMouseEvent* event ```
void q_columnview_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QMouseEvent*) ```
void q_columnview_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QMouseEvent* event ```
void q_columnview_mouse_move_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QMouseEvent* event ```
void q_columnview_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QMouseEvent*) ```
void q_columnview_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QMouseEvent* event ```
void q_columnview_mouse_release_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QMouseEvent* event ```
void q_columnview_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QMouseEvent*) ```
void q_columnview_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QMouseEvent* event ```
void q_columnview_mouse_double_click_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QMouseEvent* event ```
void q_columnview_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QMouseEvent*) ```
void q_columnview_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QDragEnterEvent* event ```
void q_columnview_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QDragEnterEvent* event ```
void q_columnview_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QDragEnterEvent*) ```
void q_columnview_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QDragMoveEvent* event ```
void q_columnview_drag_move_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QDragMoveEvent* event ```
void q_columnview_qbase_drag_move_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QDragMoveEvent*) ```
void q_columnview_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QDragLeaveEvent* event ```
void q_columnview_drag_leave_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QDragLeaveEvent* event ```
void q_columnview_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QDragLeaveEvent*) ```
void q_columnview_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QDropEvent* event ```
void q_columnview_drop_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QDropEvent* event ```
void q_columnview_qbase_drop_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QDropEvent*) ```
void q_columnview_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QFocusEvent* event ```
void q_columnview_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QFocusEvent* event ```
void q_columnview_qbase_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QFocusEvent*) ```
void q_columnview_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QFocusEvent* event ```
void q_columnview_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QFocusEvent* event ```
void q_columnview_qbase_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QFocusEvent*) ```
void q_columnview_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QKeyEvent* event ```
void q_columnview_key_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QKeyEvent* event ```
void q_columnview_qbase_key_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QKeyEvent*) ```
void q_columnview_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QTimerEvent* event ```
void q_columnview_timer_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QTimerEvent* event ```
void q_columnview_qbase_timer_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QTimerEvent*) ```
void q_columnview_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QInputMethodEvent* event ```
void q_columnview_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QInputMethodEvent* event ```
void q_columnview_qbase_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QInputMethodEvent*) ```
void q_columnview_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QObject* object, QEvent* event ```
bool q_columnview_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QObject* object, QEvent* event ```
bool q_columnview_qbase_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, bool (*slot)(QColumnView*, QObject*, QEvent*) ```
void q_columnview_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self ```
QSize* q_columnview_viewport_size_hint(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self ```
QSize* q_columnview_qbase_viewport_size_hint(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, QSize* (*slot)() ```
void q_columnview_on_viewport_size_hint(void* self, QSize* (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self ```
QSize* q_columnview_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self ```
QSize* q_columnview_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, QSize* (*slot)() ```
void q_columnview_on_minimum_size_hint(void* self, QSize* (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QWidget* viewport ```
void q_columnview_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QWidget* viewport ```
void q_columnview_qbase_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QWidget*) ```
void q_columnview_on_setup_viewport(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QPaintEvent* param1 ```
void q_columnview_paint_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QPaintEvent* param1 ```
void q_columnview_qbase_paint_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QPaintEvent*) ```
void q_columnview_on_paint_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QWheelEvent* param1 ```
void q_columnview_wheel_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QWheelEvent* param1 ```
void q_columnview_qbase_wheel_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QWheelEvent*) ```
void q_columnview_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QContextMenuEvent* param1 ```
void q_columnview_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QContextMenuEvent* param1 ```
void q_columnview_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QContextMenuEvent*) ```
void q_columnview_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QEvent* param1 ```
void q_columnview_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QEvent* param1 ```
void q_columnview_qbase_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QEvent*) ```
void q_columnview_on_change_event(void* self, void (*slot)(void*, void*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QStyleOptionFrame* option ```
void q_columnview_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QStyleOptionFrame* option ```
void q_columnview_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QStyleOptionFrame*) ```
void q_columnview_on_init_style_option(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self ```
int32_t q_columnview_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self ```
int32_t q_columnview_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, int32_t (*slot)() ```
void q_columnview_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, bool visible ```
void q_columnview_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, bool visible ```
void q_columnview_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, bool) ```
void q_columnview_on_set_visible(void* self, void (*slot)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, int param1 ```
int32_t q_columnview_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, int param1 ```
int32_t q_columnview_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, int32_t (*slot)(QColumnView*, int) ```
void q_columnview_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self ```
bool q_columnview_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self ```
bool q_columnview_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, bool (*slot)() ```
void q_columnview_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self ```
QPaintEngine* q_columnview_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self ```
QPaintEngine* q_columnview_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, QPaintEngine* (*slot)() ```
void q_columnview_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QKeyEvent* event ```
void q_columnview_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QKeyEvent* event ```
void q_columnview_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QKeyEvent*) ```
void q_columnview_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QEnterEvent* event ```
void q_columnview_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QEnterEvent* event ```
void q_columnview_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QEnterEvent*) ```
void q_columnview_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QEvent* event ```
void q_columnview_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QEvent* event ```
void q_columnview_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QEvent*) ```
void q_columnview_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QMoveEvent* event ```
void q_columnview_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QMoveEvent* event ```
void q_columnview_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QMoveEvent*) ```
void q_columnview_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QCloseEvent* event ```
void q_columnview_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QCloseEvent* event ```
void q_columnview_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QCloseEvent*) ```
void q_columnview_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QTabletEvent* event ```
void q_columnview_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QTabletEvent* event ```
void q_columnview_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QTabletEvent*) ```
void q_columnview_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QActionEvent* event ```
void q_columnview_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QActionEvent* event ```
void q_columnview_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QActionEvent*) ```
void q_columnview_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QShowEvent* event ```
void q_columnview_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QShowEvent* event ```
void q_columnview_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QShowEvent*) ```
void q_columnview_on_show_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QHideEvent* event ```
void q_columnview_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QHideEvent* event ```
void q_columnview_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QHideEvent*) ```
void q_columnview_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, const char* eventType, void* message, intptr_t* result ```
bool q_columnview_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, const char* eventType, void* message, intptr_t* result ```
bool q_columnview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, bool (*slot)(QColumnView*, const char*, void*, intptr_t*) ```
void q_columnview_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_columnview_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_columnview_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, int32_t (*slot)(QColumnView*, enum QPaintDevice__PaintDeviceMetric) ```
void q_columnview_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QPainter* painter ```
void q_columnview_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QPainter* painter ```
void q_columnview_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QPainter*) ```
void q_columnview_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QPoint* offset ```
QPaintDevice* q_columnview_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QPoint* offset ```
QPaintDevice* q_columnview_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, QPaintDevice* (*slot)(QColumnView*, QPoint*) ```
void q_columnview_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self ```
QPainter* q_columnview_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self ```
QPainter* q_columnview_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, QPainter* (*slot)() ```
void q_columnview_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QChildEvent* event ```
void q_columnview_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QChildEvent* event ```
void q_columnview_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QChildEvent*) ```
void q_columnview_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QEvent* event ```
void q_columnview_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QEvent* event ```
void q_columnview_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QEvent*) ```
void q_columnview_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QMetaMethod* signal ```
void q_columnview_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QMetaMethod* signal ```
void q_columnview_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QMetaMethod*) ```
void q_columnview_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QMetaMethod* signal ```
void q_columnview_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QMetaMethod* signal ```
void q_columnview_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QMetaMethod*) ```
void q_columnview_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self ```
int64_t q_columnview_state(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self ```
int64_t q_columnview_qbase_state(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, int64_t (*slot)() ```
void q_columnview_on_state(void* self, int64_t (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, enum QAbstractItemView__State state ```
void q_columnview_set_state(void* self, int64_t state);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, enum QAbstractItemView__State state ```
void q_columnview_qbase_set_state(void* self, int64_t state);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, enum QAbstractItemView__State) ```
void q_columnview_on_set_state(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self ```
void q_columnview_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self ```
void q_columnview_qbase_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)() ```
void q_columnview_on_schedule_delayed_items_layout(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self ```
void q_columnview_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self ```
void q_columnview_qbase_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)() ```
void q_columnview_on_execute_delayed_items_layout(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QRegion* region ```
void q_columnview_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QRegion* region ```
void q_columnview_qbase_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QRegion*) ```
void q_columnview_on_set_dirty_region(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, int dx, int dy ```
void q_columnview_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, int dx, int dy ```
void q_columnview_qbase_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, int, int) ```
void q_columnview_on_scroll_dirty_region(void* self, void (*slot)(void*, int, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self ```
QPoint* q_columnview_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self ```
QPoint* q_columnview_qbase_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, QPoint* (*slot)() ```
void q_columnview_on_dirty_region_offset(void* self, QPoint* (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self ```
void q_columnview_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self ```
void q_columnview_qbase_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)() ```
void q_columnview_on_start_auto_scroll(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self ```
void q_columnview_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self ```
void q_columnview_qbase_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)() ```
void q_columnview_on_stop_auto_scroll(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self ```
void q_columnview_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self ```
void q_columnview_qbase_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)() ```
void q_columnview_on_do_auto_scroll(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self ```
int64_t q_columnview_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self ```
int64_t q_columnview_qbase_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, int64_t (*slot)() ```
void q_columnview_on_drop_indicator_position(void* self, int64_t (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, int left, int top, int right, int bottom ```
void q_columnview_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, int left, int top, int right, int bottom ```
void q_columnview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, int, int, int, int) ```
void q_columnview_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self ```
QMargins* q_columnview_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self ```
QMargins* q_columnview_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, QMargins* (*slot)() ```
void q_columnview_on_viewport_margins(void* self, QMargins* (*slot)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QPainter* param1 ```
void q_columnview_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QPainter* param1 ```
void q_columnview_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, QPainter*) ```
void q_columnview_on_draw_frame(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self ```
void q_columnview_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self ```
void q_columnview_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)() ```
void q_columnview_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self ```
void q_columnview_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self ```
void q_columnview_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)() ```
void q_columnview_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self ```
void q_columnview_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self ```
void q_columnview_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, void (*slot)() ```
void q_columnview_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self ```
bool q_columnview_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self ```
bool q_columnview_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, bool (*slot)() ```
void q_columnview_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self ```
bool q_columnview_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self ```
bool q_columnview_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, bool (*slot)() ```
void q_columnview_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self ```
QObject* q_columnview_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self ```
QObject* q_columnview_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, QObject* (*slot)() ```
void q_columnview_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self ```
int32_t q_columnview_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self ```
int32_t q_columnview_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, int32_t (*slot)() ```
void q_columnview_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, const char* signal ```
int32_t q_columnview_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, const char* signal ```
int32_t q_columnview_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, int32_t (*slot)(QColumnView*, const char*) ```
void q_columnview_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, QMetaMethod* signal ```
bool q_columnview_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, QMetaMethod* signal ```
bool q_columnview_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, bool (*slot)(QColumnView*, QMetaMethod*) ```
void q_columnview_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColumnView* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_columnview_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColumnView* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_columnview_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColumnView* self, double (*slot)(QColumnView*, enum QPaintDevice__PaintDeviceMetric, enum QPaintDevice__PaintDeviceMetric) ```
void q_columnview_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QColumnView* self, void (*slot)(QColumnView*, const char*) ```
void q_columnview_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcolumnview.html#dtor.QColumnView)
///
/// Delete this object from C++ memory.
///
/// ``` QColumnView* self ```
void q_columnview_delete(void* self);

#endif
