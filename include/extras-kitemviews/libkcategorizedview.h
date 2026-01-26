#pragma once
#ifndef SRC_EXTRAS_KITEMVIEWS_QT6C_LIBKCATEGORIZEDVIEW_H
#define SRC_EXTRAS_KITEMVIEWS_QT6C_LIBKCATEGORIZEDVIEW_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kcategorizedview.html)

/// k_categorizedview_new constructs a new KCategorizedView object.
///
/// @param parent QWidget*
///
KCategorizedView* k_categorizedview_new(void* parent);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html)

/// k_categorizedview_new2 constructs a new KCategorizedView object.
///
KCategorizedView* k_categorizedview_new2();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KCategorizedView*
///
const QMetaObject* k_categorizedview_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedView*
/// @param callback const QMetaObject* func()
///
void k_categorizedview_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KCategorizedView*
///
const QMetaObject* k_categorizedview_qbase_meta_object(void* self);

/// @param self KCategorizedView*
/// @param param1 const char*
///
void* k_categorizedview_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KCategorizedView*
/// @param callback void* func(KCategorizedView* self, const char* param1)
///
void k_categorizedview_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KCategorizedView*
/// @param param1 const char*
///
void* k_categorizedview_qbase_metacast(void* self, const char* param1);

/// @param self KCategorizedView*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_categorizedview_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KCategorizedView*
/// @param callback int32_t func(KCategorizedView* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_categorizedview_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KCategorizedView*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_categorizedview_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_categorizedview_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#setModel)
///
/// @param self KCategorizedView*
/// @param model QAbstractItemModel*
///
void k_categorizedview_set_model(void* self, void* model);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#setModel)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QAbstractItemModel* model)
///
void k_categorizedview_on_set_model(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#setModel)
///
/// Base class method implementation
///
/// @param self KCategorizedView*
/// @param model QAbstractItemModel*
///
void k_categorizedview_qbase_set_model(void* self, void* model);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#setGridSize)
///
/// @param self KCategorizedView*
/// @param size QSize*
///
void k_categorizedview_set_grid_size(void* self, void* size);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#setGridSizeOwn)
///
/// @param self KCategorizedView*
/// @param size QSize*
///
void k_categorizedview_set_grid_size_own(void* self, void* size);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#visualRect)
///
/// @param self KCategorizedView*
/// @param index QModelIndex*
///
QRect* k_categorizedview_visual_rect(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#visualRect)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedView*
/// @param callback QRect* func(KCategorizedView* self, QModelIndex* index)
///
void k_categorizedview_on_visual_rect(void* self, QRect* (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#visualRect)
///
/// Base class method implementation
///
/// @param self KCategorizedView*
/// @param index QModelIndex*
///
QRect* k_categorizedview_qbase_visual_rect(void* self, void* index);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#categoryDrawer)
///
/// @param self KCategorizedView*
///
KCategoryDrawer* k_categorizedview_category_drawer(void* self);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#setCategoryDrawer)
///
/// @param self KCategorizedView*
/// @param categoryDrawer KCategoryDrawer*
///
void k_categorizedview_set_category_drawer(void* self, void* categoryDrawer);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#categorySpacing)
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_category_spacing(void* self);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#setCategorySpacing)
///
/// @param self KCategorizedView*
/// @param categorySpacing int
///
void k_categorizedview_set_category_spacing(void* self, int categorySpacing);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#alternatingBlockColors)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_alternating_block_colors(void* self);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#setAlternatingBlockColors)
///
/// @param self KCategorizedView*
/// @param enable bool
///
void k_categorizedview_set_alternating_block_colors(void* self, bool enable);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#collapsibleBlocks)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_collapsible_blocks(void* self);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#setCollapsibleBlocks)
///
/// @param self KCategorizedView*
/// @param enable bool
///
void k_categorizedview_set_collapsible_blocks(void* self, bool enable);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#block)
///
/// @param self KCategorizedView*
/// @param category const char*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_categorizedview_block(void* self, const char* category);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#block)
///
/// @param self KCategorizedView*
/// @param representative QModelIndex*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_categorizedview_block2(void* self, void* representative);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#indexAt)
///
/// @param self KCategorizedView*
/// @param point QPoint*
///
QModelIndex* k_categorizedview_index_at(void* self, void* point);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#indexAt)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedView*
/// @param callback QModelIndex* func(KCategorizedView* self, QPoint* point)
///
void k_categorizedview_on_index_at(void* self, QModelIndex* (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#indexAt)
///
/// Base class method implementation
///
/// @param self KCategorizedView*
/// @param point QPoint*
///
QModelIndex* k_categorizedview_qbase_index_at(void* self, void* point);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#reset)
///
/// @param self KCategorizedView*
///
void k_categorizedview_reset(void* self);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#reset)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedView*
/// @param callback void func()
///
void k_categorizedview_on_reset(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#reset)
///
/// Base class method implementation
///
/// @param self KCategorizedView*
///
void k_categorizedview_qbase_reset(void* self);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#categorySpacingChanged)
///
/// @param self KCategorizedView*
/// @param spacing int
///
void k_categorizedview_category_spacing_changed(void* self, int spacing);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#categorySpacingChanged)
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, int spacing)
///
void k_categorizedview_on_category_spacing_changed(void* self, void (*callback)(void*, int));

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#alternatingBlockColorsChanged)
///
/// @param self KCategorizedView*
/// @param enable bool
///
void k_categorizedview_alternating_block_colors_changed(void* self, bool enable);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#alternatingBlockColorsChanged)
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, bool enable)
///
void k_categorizedview_on_alternating_block_colors_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#collapsibleBlocksChanged)
///
/// @param self KCategorizedView*
/// @param enable bool
///
void k_categorizedview_collapsible_blocks_changed(void* self, bool enable);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#collapsibleBlocksChanged)
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, bool enable)
///
void k_categorizedview_on_collapsible_blocks_changed(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#paintEvent)
///
/// @param self KCategorizedView*
/// @param event QPaintEvent*
///
void k_categorizedview_paint_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#paintEvent)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QPaintEvent* event)
///
void k_categorizedview_on_paint_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#paintEvent)
///
/// Base class method implementation
///
/// @param self KCategorizedView*
/// @param event QPaintEvent*
///
void k_categorizedview_qbase_paint_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#resizeEvent)
///
/// @param self KCategorizedView*
/// @param event QResizeEvent*
///
void k_categorizedview_resize_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QResizeEvent* event)
///
void k_categorizedview_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self KCategorizedView*
/// @param event QResizeEvent*
///
void k_categorizedview_qbase_resize_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#setSelection)
///
/// @param self KCategorizedView*
/// @param rect QRect*
/// @param flags flag of enum QItemSelectionModel__SelectionFlag
///
void k_categorizedview_set_selection(void* self, void* rect, int32_t flags);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#setSelection)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QRect* rect, flag of enum QItemSelectionModel__SelectionFlag flags)
///
void k_categorizedview_on_set_selection(void* self, void (*callback)(void*, void*, int32_t));

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#setSelection)
///
/// Base class method implementation
///
/// @param self KCategorizedView*
/// @param rect QRect*
/// @param flags flag of enum QItemSelectionModel__SelectionFlag
///
void k_categorizedview_qbase_set_selection(void* self, void* rect, int32_t flags);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#mouseMoveEvent)
///
/// @param self KCategorizedView*
/// @param event QMouseEvent*
///
void k_categorizedview_mouse_move_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QMouseEvent* event)
///
void k_categorizedview_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self KCategorizedView*
/// @param event QMouseEvent*
///
void k_categorizedview_qbase_mouse_move_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#mousePressEvent)
///
/// @param self KCategorizedView*
/// @param event QMouseEvent*
///
void k_categorizedview_mouse_press_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QMouseEvent* event)
///
void k_categorizedview_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self KCategorizedView*
/// @param event QMouseEvent*
///
void k_categorizedview_qbase_mouse_press_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#mouseReleaseEvent)
///
/// @param self KCategorizedView*
/// @param event QMouseEvent*
///
void k_categorizedview_mouse_release_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QMouseEvent* event)
///
void k_categorizedview_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self KCategorizedView*
/// @param event QMouseEvent*
///
void k_categorizedview_qbase_mouse_release_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#leaveEvent)
///
/// @param self KCategorizedView*
/// @param event QEvent*
///
void k_categorizedview_leave_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#leaveEvent)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QEvent* event)
///
void k_categorizedview_on_leave_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#leaveEvent)
///
/// Base class method implementation
///
/// @param self KCategorizedView*
/// @param event QEvent*
///
void k_categorizedview_qbase_leave_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#startDrag)
///
/// @param self KCategorizedView*
/// @param supportedActions flag of enum Qt__DropAction
///
void k_categorizedview_start_drag(void* self, int32_t supportedActions);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#startDrag)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, flag of enum Qt__DropAction supportedActions)
///
void k_categorizedview_on_start_drag(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#startDrag)
///
/// Base class method implementation
///
/// @param self KCategorizedView*
/// @param supportedActions flag of enum Qt__DropAction
///
void k_categorizedview_qbase_start_drag(void* self, int32_t supportedActions);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#dragMoveEvent)
///
/// @param self KCategorizedView*
/// @param event QDragMoveEvent*
///
void k_categorizedview_drag_move_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#dragMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QDragMoveEvent* event)
///
void k_categorizedview_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#dragMoveEvent)
///
/// Base class method implementation
///
/// @param self KCategorizedView*
/// @param event QDragMoveEvent*
///
void k_categorizedview_qbase_drag_move_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#dragEnterEvent)
///
/// @param self KCategorizedView*
/// @param event QDragEnterEvent*
///
void k_categorizedview_drag_enter_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#dragEnterEvent)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QDragEnterEvent* event)
///
void k_categorizedview_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#dragEnterEvent)
///
/// Base class method implementation
///
/// @param self KCategorizedView*
/// @param event QDragEnterEvent*
///
void k_categorizedview_qbase_drag_enter_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#dragLeaveEvent)
///
/// @param self KCategorizedView*
/// @param event QDragLeaveEvent*
///
void k_categorizedview_drag_leave_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#dragLeaveEvent)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QDragLeaveEvent* event)
///
void k_categorizedview_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#dragLeaveEvent)
///
/// Base class method implementation
///
/// @param self KCategorizedView*
/// @param event QDragLeaveEvent*
///
void k_categorizedview_qbase_drag_leave_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#dropEvent)
///
/// @param self KCategorizedView*
/// @param event QDropEvent*
///
void k_categorizedview_drop_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#dropEvent)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QDropEvent* event)
///
void k_categorizedview_on_drop_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#dropEvent)
///
/// Base class method implementation
///
/// @param self KCategorizedView*
/// @param event QDropEvent*
///
void k_categorizedview_qbase_drop_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#moveCursor)
///
/// @param self KCategorizedView*
/// @param cursorAction enum QAbstractItemView__CursorAction
/// @param modifiers flag of enum Qt__KeyboardModifier
///
QModelIndex* k_categorizedview_move_cursor(void* self, int32_t cursorAction, int32_t modifiers);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#moveCursor)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedView*
/// @param callback QModelIndex* func(KCategorizedView* self, enum QAbstractItemView__CursorAction cursorAction, flag of enum Qt__KeyboardModifier modifiers)
///
void k_categorizedview_on_move_cursor(void* self, QModelIndex* (*callback)(void*, int32_t, int32_t));

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#moveCursor)
///
/// Base class method implementation
///
/// @param self KCategorizedView*
/// @param cursorAction enum QAbstractItemView__CursorAction
/// @param modifiers flag of enum Qt__KeyboardModifier
///
QModelIndex* k_categorizedview_qbase_move_cursor(void* self, int32_t cursorAction, int32_t modifiers);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#rowsAboutToBeRemoved)
///
/// @param self KCategorizedView*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
///
void k_categorizedview_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#rowsAboutToBeRemoved)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QModelIndex* parent, int start, int end)
///
void k_categorizedview_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#rowsAboutToBeRemoved)
///
/// Base class method implementation
///
/// @param self KCategorizedView*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
///
void k_categorizedview_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#updateGeometries)
///
/// @param self KCategorizedView*
///
void k_categorizedview_update_geometries(void* self);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#updateGeometries)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedView*
/// @param callback void func()
///
void k_categorizedview_on_update_geometries(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#updateGeometries)
///
/// Base class method implementation
///
/// @param self KCategorizedView*
///
void k_categorizedview_qbase_update_geometries(void* self);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#currentChanged)
///
/// @param self KCategorizedView*
/// @param current QModelIndex*
/// @param previous QModelIndex*
///
void k_categorizedview_current_changed(void* self, void* current, void* previous);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#currentChanged)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QModelIndex* current, QModelIndex* previous)
///
void k_categorizedview_on_current_changed(void* self, void (*callback)(void*, void*, void*));

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#currentChanged)
///
/// Base class method implementation
///
/// @param self KCategorizedView*
/// @param current QModelIndex*
/// @param previous QModelIndex*
///
void k_categorizedview_qbase_current_changed(void* self, void* current, void* previous);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#dataChanged)
///
/// @param self KCategorizedView*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void k_categorizedview_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#dataChanged)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* )
///
void k_categorizedview_on_data_changed(void* self, void (*callback)(void*, void*, void*, libqt_list /* of int */));

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#dataChanged)
///
/// Base class method implementation
///
/// @param self KCategorizedView*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list of int
///
void k_categorizedview_qbase_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#rowsInserted)
///
/// @param self KCategorizedView*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
///
void k_categorizedview_rows_inserted(void* self, void* parent, int start, int end);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#rowsInserted)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QModelIndex* parent, int start, int end)
///
void k_categorizedview_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#rowsInserted)
///
/// Base class method implementation
///
/// @param self KCategorizedView*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
///
void k_categorizedview_qbase_rows_inserted(void* self, void* parent, int start, int end);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#slotLayoutChanged)
///
/// @param self KCategorizedView*
///
void k_categorizedview_slot_layout_changed(void* self);

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#slotLayoutChanged)
///
/// Allows for overriding the related default method
///
/// @param self KCategorizedView*
/// @param callback void func()
///
void k_categorizedview_on_slot_layout_changed(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#slotLayoutChanged)
///
/// Base class method implementation
///
/// @param self KCategorizedView*
///
void k_categorizedview_qbase_slot_layout_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_categorizedview_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_categorizedview_tr3(const char* s, const char* c, int n);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setMovement)
///
/// @param self KCategorizedView*
/// @param movement enum QListView__Movement
///
void k_categorizedview_set_movement(void* self, int32_t movement);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#movement)
///
/// @param self KCategorizedView*
///
/// @return enum QListView__Movement
///
int32_t k_categorizedview_movement(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setFlow)
///
/// @param self KCategorizedView*
/// @param flow enum QListView__Flow
///
void k_categorizedview_set_flow(void* self, int32_t flow);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#flow)
///
/// @param self KCategorizedView*
///
/// @return enum QListView__Flow
///
int32_t k_categorizedview_flow(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setWrapping)
///
/// @param self KCategorizedView*
/// @param enable bool
///
void k_categorizedview_set_wrapping(void* self, bool enable);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isWrapping)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_is_wrapping(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setResizeMode)
///
/// @param self KCategorizedView*
/// @param mode enum QListView__ResizeMode
///
void k_categorizedview_set_resize_mode(void* self, int32_t mode);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeMode)
///
/// @param self KCategorizedView*
///
/// @return enum QListView__ResizeMode
///
int32_t k_categorizedview_resize_mode(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setLayoutMode)
///
/// @param self KCategorizedView*
/// @param mode enum QListView__LayoutMode
///
void k_categorizedview_set_layout_mode(void* self, int32_t mode);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#layoutMode)
///
/// @param self KCategorizedView*
///
/// @return enum QListView__LayoutMode
///
int32_t k_categorizedview_layout_mode(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setSpacing)
///
/// @param self KCategorizedView*
/// @param space int
///
void k_categorizedview_set_spacing(void* self, int space);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#spacing)
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_spacing(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setBatchSize)
///
/// @param self KCategorizedView*
/// @param batchSize int
///
void k_categorizedview_set_batch_size(void* self, int batchSize);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#batchSize)
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_batch_size(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#gridSize)
///
/// @param self KCategorizedView*
///
QSize* k_categorizedview_grid_size(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setViewMode)
///
/// @param self KCategorizedView*
/// @param mode enum QListView__ViewMode
///
void k_categorizedview_set_view_mode(void* self, int32_t mode);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#viewMode)
///
/// @param self KCategorizedView*
///
/// @return enum QListView__ViewMode
///
int32_t k_categorizedview_view_mode(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#clearPropertyFlags)
///
/// @param self KCategorizedView*
///
void k_categorizedview_clear_property_flags(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isRowHidden)
///
/// @param self KCategorizedView*
/// @param row int
///
bool k_categorizedview_is_row_hidden(void* self, int row);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setRowHidden)
///
/// @param self KCategorizedView*
/// @param row int
/// @param hide bool
///
void k_categorizedview_set_row_hidden(void* self, int row, bool hide);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setModelColumn)
///
/// @param self KCategorizedView*
/// @param column int
///
void k_categorizedview_set_model_column(void* self, int column);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#modelColumn)
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_model_column(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setUniformItemSizes)
///
/// @param self KCategorizedView*
/// @param enable bool
///
void k_categorizedview_set_uniform_item_sizes(void* self, bool enable);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#uniformItemSizes)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_uniform_item_sizes(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setWordWrap)
///
/// @param self KCategorizedView*
/// @param on bool
///
void k_categorizedview_set_word_wrap(void* self, bool on);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#wordWrap)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_word_wrap(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setSelectionRectVisible)
///
/// @param self KCategorizedView*
/// @param show bool
///
void k_categorizedview_set_selection_rect_visible(void* self, bool show);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isSelectionRectVisible)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_is_selection_rect_visible(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setItemAlignment)
///
/// @param self KCategorizedView*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void k_categorizedview_set_item_alignment(void* self, int32_t alignment);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#itemAlignment)
///
/// @param self KCategorizedView*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t k_categorizedview_item_alignment(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#indexesMoved)
///
/// @param self KCategorizedView*
/// @param indexes libqt_list of QModelIndex*
///
void k_categorizedview_indexes_moved(void* self, libqt_list /* of QModelIndex* */ indexes);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#indexesMoved)
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QModelIndex** indexes)
///
void k_categorizedview_on_indexes_moved(void* self, void (*callback)(void*, QModelIndex**));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#model)
///
/// @param self KCategorizedView*
///
QAbstractItemModel* k_categorizedview_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
///
/// @param self KCategorizedView*
///
QItemSelectionModel* k_categorizedview_selection_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
///
/// @param self KCategorizedView*
/// @param delegate QAbstractItemDelegate*
///
void k_categorizedview_set_item_delegate(void* self, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// @param self KCategorizedView*
///
QAbstractItemDelegate* k_categorizedview_item_delegate(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
///
/// @param self KCategorizedView*
/// @param mode enum QAbstractItemView__SelectionMode
///
void k_categorizedview_set_selection_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
///
/// @param self KCategorizedView*
///
/// @return enum QAbstractItemView__SelectionMode
///
int32_t k_categorizedview_selection_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
///
/// @param self KCategorizedView*
/// @param behavior enum QAbstractItemView__SelectionBehavior
///
void k_categorizedview_set_selection_behavior(void* self, int32_t behavior);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
///
/// @param self KCategorizedView*
///
/// @return enum QAbstractItemView__SelectionBehavior
///
int32_t k_categorizedview_selection_behavior(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
///
/// @param self KCategorizedView*
///
QModelIndex* k_categorizedview_current_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
///
/// @param self KCategorizedView*
///
QModelIndex* k_categorizedview_root_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
///
/// @param self KCategorizedView*
/// @param triggers flag of enum QAbstractItemView__EditTrigger
///
void k_categorizedview_set_edit_triggers(void* self, int32_t triggers);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
///
/// @param self KCategorizedView*
///
/// @return flag of enum QAbstractItemView__EditTrigger
///
int32_t k_categorizedview_edit_triggers(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
///
/// @param self KCategorizedView*
/// @param mode enum QAbstractItemView__ScrollMode
///
void k_categorizedview_set_vertical_scroll_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
///
/// @param self KCategorizedView*
///
/// @return enum QAbstractItemView__ScrollMode
///
int32_t k_categorizedview_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
///
/// @param self KCategorizedView*
///
void k_categorizedview_reset_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
///
/// @param self KCategorizedView*
/// @param mode enum QAbstractItemView__ScrollMode
///
void k_categorizedview_set_horizontal_scroll_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
///
/// @param self KCategorizedView*
///
/// @return enum QAbstractItemView__ScrollMode
///
int32_t k_categorizedview_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
///
/// @param self KCategorizedView*
///
void k_categorizedview_reset_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
///
/// @param self KCategorizedView*
/// @param enable bool
///
void k_categorizedview_set_auto_scroll(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_has_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
///
/// @param self KCategorizedView*
/// @param margin int
///
void k_categorizedview_set_auto_scroll_margin(void* self, int margin);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_auto_scroll_margin(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
///
/// @param self KCategorizedView*
/// @param enable bool
///
void k_categorizedview_set_tab_key_navigation(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_tab_key_navigation(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
///
/// @param self KCategorizedView*
/// @param enable bool
///
void k_categorizedview_set_drop_indicator_shown(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_show_drop_indicator(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
///
/// @param self KCategorizedView*
/// @param enable bool
///
void k_categorizedview_set_drag_enabled(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_drag_enabled(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
///
/// @param self KCategorizedView*
/// @param overwrite bool
///
void k_categorizedview_set_drag_drop_overwrite_mode(void* self, bool overwrite);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_drag_drop_overwrite_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
///
/// @param self KCategorizedView*
/// @param behavior enum QAbstractItemView__DragDropMode
///
void k_categorizedview_set_drag_drop_mode(void* self, int32_t behavior);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
///
/// @param self KCategorizedView*
///
/// @return enum QAbstractItemView__DragDropMode
///
int32_t k_categorizedview_drag_drop_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
///
/// @param self KCategorizedView*
/// @param dropAction enum Qt__DropAction
///
void k_categorizedview_set_default_drop_action(void* self, int32_t dropAction);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
///
/// @param self KCategorizedView*
///
/// @return enum Qt__DropAction
///
int32_t k_categorizedview_default_drop_action(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
///
/// @param self KCategorizedView*
/// @param enable bool
///
void k_categorizedview_set_alternating_row_colors(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_alternating_row_colors(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
///
/// @param self KCategorizedView*
/// @param size QSize*
///
void k_categorizedview_set_icon_size(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
///
/// @param self KCategorizedView*
///
QSize* k_categorizedview_icon_size(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
///
/// @param self KCategorizedView*
/// @param mode enum Qt__TextElideMode
///
void k_categorizedview_set_text_elide_mode(void* self, int32_t mode);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
///
/// @param self KCategorizedView*
///
/// @return enum Qt__TextElideMode
///
int32_t k_categorizedview_text_elide_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
///
/// @param self KCategorizedView*
/// @param index QModelIndex*
///
QSize* k_categorizedview_size_hint_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#openPersistentEditor)
///
/// @param self KCategorizedView*
/// @param index QModelIndex*
///
void k_categorizedview_open_persistent_editor(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closePersistentEditor)
///
/// @param self KCategorizedView*
/// @param index QModelIndex*
///
void k_categorizedview_close_persistent_editor(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#isPersistentEditorOpen)
///
/// @param self KCategorizedView*
/// @param index QModelIndex*
///
bool k_categorizedview_is_persistent_editor_open(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
///
/// @param self KCategorizedView*
/// @param index QModelIndex*
/// @param widget QWidget*
///
void k_categorizedview_set_index_widget(void* self, void* index, void* widget);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
///
/// @param self KCategorizedView*
/// @param index QModelIndex*
///
QWidget* k_categorizedview_index_widget(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
///
/// @param self KCategorizedView*
/// @param row int
/// @param delegate QAbstractItemDelegate*
///
void k_categorizedview_set_item_delegate_for_row(void* self, int row, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
///
/// @param self KCategorizedView*
/// @param row int
///
QAbstractItemDelegate* k_categorizedview_item_delegate_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
///
/// @param self KCategorizedView*
/// @param column int
/// @param delegate QAbstractItemDelegate*
///
void k_categorizedview_set_item_delegate_for_column(void* self, int column, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
///
/// @param self KCategorizedView*
/// @param column int
///
QAbstractItemDelegate* k_categorizedview_item_delegate_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// @param self KCategorizedView*
/// @param index QModelIndex*
///
QAbstractItemDelegate* k_categorizedview_item_delegate2(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// @param self KCategorizedView*
/// @param index QModelIndex*
///
void k_categorizedview_edit(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
///
/// @param self KCategorizedView*
///
void k_categorizedview_clear_selection(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
///
/// @param self KCategorizedView*
/// @param index QModelIndex*
///
void k_categorizedview_set_current_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
///
/// @param self KCategorizedView*
///
void k_categorizedview_scroll_to_top(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
///
/// @param self KCategorizedView*
///
void k_categorizedview_scroll_to_bottom(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#update)
///
/// @param self KCategorizedView*
/// @param index QModelIndex*
///
void k_categorizedview_update(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// @param self KCategorizedView*
/// @param index QModelIndex*
///
void k_categorizedview_pressed(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QModelIndex* index)
///
void k_categorizedview_on_pressed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// @param self KCategorizedView*
/// @param index QModelIndex*
///
void k_categorizedview_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QModelIndex* index)
///
void k_categorizedview_on_clicked(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// @param self KCategorizedView*
/// @param index QModelIndex*
///
void k_categorizedview_double_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QModelIndex* index)
///
void k_categorizedview_on_double_clicked(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// @param self KCategorizedView*
/// @param index QModelIndex*
///
void k_categorizedview_activated(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QModelIndex* index)
///
void k_categorizedview_on_activated(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// @param self KCategorizedView*
/// @param index QModelIndex*
///
void k_categorizedview_entered(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QModelIndex* index)
///
void k_categorizedview_on_entered(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// @param self KCategorizedView*
///
void k_categorizedview_viewport_entered(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self)
///
void k_categorizedview_on_viewport_entered(void* self, void (*callback)(void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// @param self KCategorizedView*
/// @param size QSize*
///
void k_categorizedview_icon_size_changed(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QSize* size)
///
void k_categorizedview_on_icon_size_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// @param self KCategorizedView*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t k_categorizedview_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// @param self KCategorizedView*
/// @param verticalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void k_categorizedview_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// @param self KCategorizedView*
///
QScrollBar* k_categorizedview_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// @param self KCategorizedView*
/// @param scrollbar QScrollBar*
///
void k_categorizedview_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// @param self KCategorizedView*
///
/// @return enum Qt__ScrollBarPolicy
///
int32_t k_categorizedview_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// @param self KCategorizedView*
/// @param horizontalScrollBarPolicy enum Qt__ScrollBarPolicy
///
void k_categorizedview_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// @param self KCategorizedView*
///
QScrollBar* k_categorizedview_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// @param self KCategorizedView*
/// @param scrollbar QScrollBar*
///
void k_categorizedview_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// @param self KCategorizedView*
///
QWidget* k_categorizedview_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// @param self KCategorizedView*
/// @param widget QWidget*
///
void k_categorizedview_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// @param self KCategorizedView*
/// @param widget QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void k_categorizedview_add_scroll_bar_widget(void* self, void* widget, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// @param self KCategorizedView*
/// @param alignment flag of enum Qt__AlignmentFlag
///
/// @return libqt_list of QWidget*
///
libqt_list k_categorizedview_scroll_bar_widgets(void* self, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// @param self KCategorizedView*
///
QWidget* k_categorizedview_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// @param self KCategorizedView*
/// @param widget QWidget*
///
void k_categorizedview_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// @param self KCategorizedView*
///
QSize* k_categorizedview_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// @param self KCategorizedView*
///
/// @return enum QAbstractScrollArea__SizeAdjustPolicy
///
int32_t k_categorizedview_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// @param self KCategorizedView*
/// @param policy enum QAbstractScrollArea__SizeAdjustPolicy
///
void k_categorizedview_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_frame_style(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self KCategorizedView*
/// @param frameStyle int
///
void k_categorizedview_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_frame_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self KCategorizedView*
///
/// @return enum QFrame__Shape
///
int32_t k_categorizedview_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self KCategorizedView*
/// @param frameShape enum QFrame__Shape
///
void k_categorizedview_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self KCategorizedView*
///
/// @return enum QFrame__Shadow
///
int32_t k_categorizedview_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self KCategorizedView*
/// @param frameShadow enum QFrame__Shadow
///
void k_categorizedview_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self KCategorizedView*
/// @param lineWidth int
///
void k_categorizedview_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self KCategorizedView*
/// @param midLineWidth int
///
void k_categorizedview_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self KCategorizedView*
///
QRect* k_categorizedview_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self KCategorizedView*
/// @param frameRect QRect*
///
void k_categorizedview_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KCategorizedView*
///
uintptr_t k_categorizedview_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KCategorizedView*
///
void k_categorizedview_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KCategorizedView*
///
uintptr_t k_categorizedview_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KCategorizedView*
///
uintptr_t k_categorizedview_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KCategorizedView*
///
QStyle* k_categorizedview_style(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KCategorizedView*
/// @param style QStyle*
///
void k_categorizedview_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_is_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_is_modal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KCategorizedView*
///
/// @return enum Qt__WindowModality
///
int32_t k_categorizedview_window_modality(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KCategorizedView*
/// @param windowModality enum Qt__WindowModality
///
void k_categorizedview_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KCategorizedView*
/// @param param1 QWidget*
///
bool k_categorizedview_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KCategorizedView*
/// @param enabled bool
///
void k_categorizedview_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KCategorizedView*
/// @param disabled bool
///
void k_categorizedview_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KCategorizedView*
/// @param windowModified bool
///
void k_categorizedview_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KCategorizedView*
///
QRect* k_categorizedview_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KCategorizedView*
///
const QRect* k_categorizedview_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KCategorizedView*
///
QRect* k_categorizedview_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_x(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_y(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KCategorizedView*
///
QPoint* k_categorizedview_pos(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KCategorizedView*
///
QSize* k_categorizedview_frame_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KCategorizedView*
///
QSize* k_categorizedview_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KCategorizedView*
///
QRect* k_categorizedview_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KCategorizedView*
///
QRect* k_categorizedview_children_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KCategorizedView*
///
QRegion* k_categorizedview_children_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KCategorizedView*
///
QSize* k_categorizedview_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KCategorizedView*
///
QSize* k_categorizedview_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KCategorizedView*
/// @param minimumSize QSize*
///
void k_categorizedview_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KCategorizedView*
/// @param minw int
/// @param minh int
///
void k_categorizedview_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KCategorizedView*
/// @param maximumSize QSize*
///
void k_categorizedview_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KCategorizedView*
/// @param maxw int
/// @param maxh int
///
void k_categorizedview_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KCategorizedView*
/// @param minw int
///
void k_categorizedview_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KCategorizedView*
/// @param minh int
///
void k_categorizedview_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KCategorizedView*
/// @param maxw int
///
void k_categorizedview_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KCategorizedView*
/// @param maxh int
///
void k_categorizedview_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KCategorizedView*
///
QSize* k_categorizedview_size_increment(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KCategorizedView*
/// @param sizeIncrement QSize*
///
void k_categorizedview_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KCategorizedView*
/// @param w int
/// @param h int
///
void k_categorizedview_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KCategorizedView*
///
QSize* k_categorizedview_base_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KCategorizedView*
/// @param baseSize QSize*
///
void k_categorizedview_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KCategorizedView*
/// @param basew int
/// @param baseh int
///
void k_categorizedview_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KCategorizedView*
/// @param fixedSize QSize*
///
void k_categorizedview_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KCategorizedView*
/// @param w int
/// @param h int
///
void k_categorizedview_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KCategorizedView*
/// @param w int
///
void k_categorizedview_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KCategorizedView*
/// @param h int
///
void k_categorizedview_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KCategorizedView*
/// @param param1 QPointF*
///
QPointF* k_categorizedview_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KCategorizedView*
/// @param param1 QPoint*
///
QPoint* k_categorizedview_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KCategorizedView*
/// @param param1 QPointF*
///
QPointF* k_categorizedview_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KCategorizedView*
/// @param param1 QPoint*
///
QPoint* k_categorizedview_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KCategorizedView*
/// @param param1 QPointF*
///
QPointF* k_categorizedview_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KCategorizedView*
/// @param param1 QPoint*
///
QPoint* k_categorizedview_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KCategorizedView*
/// @param param1 QPointF*
///
QPointF* k_categorizedview_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KCategorizedView*
/// @param param1 QPoint*
///
QPoint* k_categorizedview_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KCategorizedView*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_categorizedview_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KCategorizedView*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_categorizedview_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KCategorizedView*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_categorizedview_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KCategorizedView*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_categorizedview_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KCategorizedView*
///
QWidget* k_categorizedview_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KCategorizedView*
///
QWidget* k_categorizedview_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KCategorizedView*
///
QWidget* k_categorizedview_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KCategorizedView*
///
const QPalette* k_categorizedview_palette(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KCategorizedView*
/// @param palette QPalette*
///
void k_categorizedview_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KCategorizedView*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_categorizedview_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KCategorizedView*
///
/// @return enum QPalette__ColorRole
///
int32_t k_categorizedview_background_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KCategorizedView*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_categorizedview_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KCategorizedView*
///
/// @return enum QPalette__ColorRole
///
int32_t k_categorizedview_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KCategorizedView*
///
const QFont* k_categorizedview_font(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KCategorizedView*
/// @param font QFont*
///
void k_categorizedview_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KCategorizedView*
///
QFontMetrics* k_categorizedview_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KCategorizedView*
///
QFontInfo* k_categorizedview_font_info(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KCategorizedView*
///
QCursor* k_categorizedview_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KCategorizedView*
/// @param cursor QCursor*
///
void k_categorizedview_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KCategorizedView*
///
void k_categorizedview_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KCategorizedView*
/// @param enable bool
///
void k_categorizedview_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KCategorizedView*
/// @param enable bool
///
void k_categorizedview_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KCategorizedView*
/// @param mask QBitmap*
///
void k_categorizedview_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KCategorizedView*
/// @param mask QRegion*
///
void k_categorizedview_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KCategorizedView*
///
QRegion* k_categorizedview_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KCategorizedView*
///
void k_categorizedview_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KCategorizedView*
/// @param target QPaintDevice*
///
void k_categorizedview_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KCategorizedView*
/// @param painter QPainter*
///
void k_categorizedview_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KCategorizedView*
///
QPixmap* k_categorizedview_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KCategorizedView*
///
QGraphicsEffect* k_categorizedview_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KCategorizedView*
/// @param effect QGraphicsEffect*
///
void k_categorizedview_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KCategorizedView*
/// @param type enum Qt__GestureType
///
void k_categorizedview_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KCategorizedView*
/// @param type enum Qt__GestureType
///
void k_categorizedview_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KCategorizedView*
/// @param windowTitle const char*
///
void k_categorizedview_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KCategorizedView*
/// @param styleSheet const char*
///
void k_categorizedview_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KCategorizedView*
///
const char* k_categorizedview_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KCategorizedView*
///
const char* k_categorizedview_window_title(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KCategorizedView*
/// @param icon QIcon*
///
void k_categorizedview_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KCategorizedView*
///
QIcon* k_categorizedview_window_icon(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KCategorizedView*
/// @param windowIconText const char*
///
void k_categorizedview_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KCategorizedView*
///
const char* k_categorizedview_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KCategorizedView*
/// @param windowRole const char*
///
void k_categorizedview_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KCategorizedView*
///
const char* k_categorizedview_window_role(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KCategorizedView*
/// @param filePath const char*
///
void k_categorizedview_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KCategorizedView*
///
const char* k_categorizedview_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KCategorizedView*
/// @param level double
///
void k_categorizedview_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KCategorizedView*
///
double k_categorizedview_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KCategorizedView*
/// @param toolTip const char*
///
void k_categorizedview_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KCategorizedView*
///
const char* k_categorizedview_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KCategorizedView*
/// @param msec int
///
void k_categorizedview_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KCategorizedView*
/// @param statusTip const char*
///
void k_categorizedview_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KCategorizedView*
///
const char* k_categorizedview_status_tip(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KCategorizedView*
/// @param whatsThis const char*
///
void k_categorizedview_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KCategorizedView*
///
const char* k_categorizedview_whats_this(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KCategorizedView*
///
const char* k_categorizedview_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KCategorizedView*
/// @param name const char*
///
void k_categorizedview_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KCategorizedView*
///
const char* k_categorizedview_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KCategorizedView*
/// @param description const char*
///
void k_categorizedview_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KCategorizedView*
/// @param direction enum Qt__LayoutDirection
///
void k_categorizedview_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KCategorizedView*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_categorizedview_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KCategorizedView*
///
void k_categorizedview_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KCategorizedView*
/// @param locale QLocale*
///
void k_categorizedview_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KCategorizedView*
///
QLocale* k_categorizedview_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KCategorizedView*
///
void k_categorizedview_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KCategorizedView*
///
void k_categorizedview_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KCategorizedView*
///
void k_categorizedview_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KCategorizedView*
///
void k_categorizedview_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KCategorizedView*
/// @param reason enum Qt__FocusReason
///
void k_categorizedview_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KCategorizedView*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_categorizedview_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KCategorizedView*
/// @param policy enum Qt__FocusPolicy
///
void k_categorizedview_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_has_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_categorizedview_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KCategorizedView*
/// @param focusProxy QWidget*
///
void k_categorizedview_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KCategorizedView*
///
QWidget* k_categorizedview_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KCategorizedView*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_categorizedview_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KCategorizedView*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_categorizedview_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KCategorizedView*
///
void k_categorizedview_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KCategorizedView*
/// @param param1 QCursor*
///
void k_categorizedview_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KCategorizedView*
///
void k_categorizedview_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KCategorizedView*
///
void k_categorizedview_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KCategorizedView*
///
void k_categorizedview_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KCategorizedView*
/// @param key QKeySequence*
///
int32_t k_categorizedview_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KCategorizedView*
/// @param id int
///
void k_categorizedview_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KCategorizedView*
/// @param id int
///
void k_categorizedview_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KCategorizedView*
/// @param id int
///
void k_categorizedview_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_categorizedview_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_categorizedview_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KCategorizedView*
/// @param enable bool
///
void k_categorizedview_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KCategorizedView*
///
QGraphicsProxyWidget* k_categorizedview_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KCategorizedView*
///
void k_categorizedview_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KCategorizedView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_categorizedview_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KCategorizedView*
/// @param param1 QRect*
///
void k_categorizedview_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KCategorizedView*
/// @param param1 QRegion*
///
void k_categorizedview_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KCategorizedView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_categorizedview_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KCategorizedView*
/// @param param1 QRect*
///
void k_categorizedview_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KCategorizedView*
/// @param param1 QRegion*
///
void k_categorizedview_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KCategorizedView*
/// @param hidden bool
///
void k_categorizedview_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KCategorizedView*
///
void k_categorizedview_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KCategorizedView*
///
void k_categorizedview_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KCategorizedView*
///
void k_categorizedview_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KCategorizedView*
///
void k_categorizedview_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KCategorizedView*
///
void k_categorizedview_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KCategorizedView*
///
void k_categorizedview_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KCategorizedView*
///
void k_categorizedview_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KCategorizedView*
///
void k_categorizedview_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KCategorizedView*
/// @param param1 QWidget*
///
void k_categorizedview_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KCategorizedView*
/// @param x int
/// @param y int
///
void k_categorizedview_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KCategorizedView*
/// @param param1 QPoint*
///
void k_categorizedview_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KCategorizedView*
/// @param w int
/// @param h int
///
void k_categorizedview_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KCategorizedView*
/// @param param1 QSize*
///
void k_categorizedview_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KCategorizedView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_categorizedview_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KCategorizedView*
/// @param geometry QRect*
///
void k_categorizedview_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KCategorizedView*
///
char* k_categorizedview_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KCategorizedView*
/// @param geometry const char*
///
bool k_categorizedview_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KCategorizedView*
///
void k_categorizedview_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_is_visible(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KCategorizedView*
/// @param param1 QWidget*
///
bool k_categorizedview_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KCategorizedView*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_categorizedview_window_state(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KCategorizedView*
/// @param state flag of enum Qt__WindowState
///
void k_categorizedview_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KCategorizedView*
/// @param state flag of enum Qt__WindowState
///
void k_categorizedview_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KCategorizedView*
///
QSizePolicy* k_categorizedview_size_policy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KCategorizedView*
/// @param sizePolicy QSizePolicy*
///
void k_categorizedview_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KCategorizedView*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_categorizedview_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KCategorizedView*
///
QRegion* k_categorizedview_visible_region(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KCategorizedView*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_categorizedview_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KCategorizedView*
/// @param margins QMargins*
///
void k_categorizedview_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KCategorizedView*
///
QMargins* k_categorizedview_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KCategorizedView*
///
QRect* k_categorizedview_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KCategorizedView*
///
QLayout* k_categorizedview_layout(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KCategorizedView*
/// @param layout QLayout*
///
void k_categorizedview_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KCategorizedView*
///
void k_categorizedview_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KCategorizedView*
/// @param parent QWidget*
///
void k_categorizedview_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KCategorizedView*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_categorizedview_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KCategorizedView*
/// @param dx int
/// @param dy int
///
void k_categorizedview_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KCategorizedView*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_categorizedview_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KCategorizedView*
///
QWidget* k_categorizedview_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KCategorizedView*
///
QWidget* k_categorizedview_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KCategorizedView*
///
QWidget* k_categorizedview_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KCategorizedView*
/// @param on bool
///
void k_categorizedview_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KCategorizedView*
/// @param action QAction*
///
void k_categorizedview_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KCategorizedView*
/// @param actions libqt_list of QAction*
///
void k_categorizedview_add_actions(void* self, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KCategorizedView*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_categorizedview_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KCategorizedView*
/// @param before QAction*
/// @param action QAction*
///
void k_categorizedview_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KCategorizedView*
/// @param action QAction*
///
void k_categorizedview_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KCategorizedView*
///
/// @return libqt_list of QAction*
///
libqt_list k_categorizedview_actions(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KCategorizedView*
/// @param text const char*
///
QAction* k_categorizedview_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KCategorizedView*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_categorizedview_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KCategorizedView*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_categorizedview_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KCategorizedView*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_categorizedview_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KCategorizedView*
///
QWidget* k_categorizedview_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KCategorizedView*
/// @param type flag of enum Qt__WindowType
///
void k_categorizedview_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KCategorizedView*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_categorizedview_window_flags(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KCategorizedView*
/// @param param1 enum Qt__WindowType
///
void k_categorizedview_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KCategorizedView*
/// @param type flag of enum Qt__WindowType
///
void k_categorizedview_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KCategorizedView*
///
/// @return enum Qt__WindowType
///
int32_t k_categorizedview_window_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
///
QWidget* k_categorizedview_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KCategorizedView*
/// @param x int
/// @param y int
///
QWidget* k_categorizedview_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KCategorizedView*
/// @param p QPoint*
///
QWidget* k_categorizedview_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KCategorizedView*
/// @param p QPointF*
///
QWidget* k_categorizedview_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KCategorizedView*
/// @param param1 enum Qt__WidgetAttribute
///
void k_categorizedview_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KCategorizedView*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_categorizedview_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KCategorizedView*
///
void k_categorizedview_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KCategorizedView*
/// @param child QWidget*
///
bool k_categorizedview_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KCategorizedView*
/// @param enabled bool
///
void k_categorizedview_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KCategorizedView*
///
QBackingStore* k_categorizedview_backing_store(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KCategorizedView*
///
QWindow* k_categorizedview_window_handle(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KCategorizedView*
///
QScreen* k_categorizedview_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KCategorizedView*
/// @param screen QScreen*
///
void k_categorizedview_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_categorizedview_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KCategorizedView*
/// @param title const char*
///
void k_categorizedview_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, const char* title)
///
void k_categorizedview_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KCategorizedView*
/// @param icon QIcon*
///
void k_categorizedview_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QIcon* icon)
///
void k_categorizedview_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KCategorizedView*
/// @param iconText const char*
///
void k_categorizedview_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, const char* iconText)
///
void k_categorizedview_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KCategorizedView*
/// @param pos QPoint*
///
void k_categorizedview_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QPoint* pos)
///
void k_categorizedview_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KCategorizedView*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_categorizedview_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KCategorizedView*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_categorizedview_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KCategorizedView*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_categorizedview_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KCategorizedView*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_categorizedview_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KCategorizedView*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_categorizedview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KCategorizedView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_categorizedview_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KCategorizedView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_categorizedview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KCategorizedView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_categorizedview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KCategorizedView*
/// @param rectangle QRect*
///
QPixmap* k_categorizedview_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KCategorizedView*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_categorizedview_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KCategorizedView*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_categorizedview_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KCategorizedView*
/// @param id int
/// @param enable bool
///
void k_categorizedview_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KCategorizedView*
/// @param id int
/// @param enable bool
///
void k_categorizedview_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KCategorizedView*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_categorizedview_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KCategorizedView*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_categorizedview_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_categorizedview_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_categorizedview_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KCategorizedView*
///
const char* k_categorizedview_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KCategorizedView*
/// @param name char*
///
void k_categorizedview_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KCategorizedView*
/// @param b bool
///
bool k_categorizedview_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KCategorizedView*
///
QThread* k_categorizedview_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KCategorizedView*
/// @param thread QThread*
///
bool k_categorizedview_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCategorizedView*
/// @param interval int
///
int32_t k_categorizedview_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCategorizedView*
/// @param time int64_t of nanoseconds
///
int32_t k_categorizedview_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KCategorizedView*
/// @param id int
///
void k_categorizedview_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KCategorizedView*
/// @param id enum Qt__TimerId
///
void k_categorizedview_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KCategorizedView*
///
/// @return libqt_list of QObject*
///
libqt_list k_categorizedview_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KCategorizedView*
/// @param filterObj QObject*
///
void k_categorizedview_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KCategorizedView*
/// @param obj QObject*
///
void k_categorizedview_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_categorizedview_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KCategorizedView*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_categorizedview_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_categorizedview_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_categorizedview_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KCategorizedView*
///
void k_categorizedview_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KCategorizedView*
///
void k_categorizedview_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KCategorizedView*
/// @param name const char*
/// @param value QVariant*
///
bool k_categorizedview_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KCategorizedView*
/// @param name const char*
///
QVariant* k_categorizedview_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KCategorizedView*
///
const char** k_categorizedview_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KCategorizedView*
///
QBindingStorage* k_categorizedview_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KCategorizedView*
///
const QBindingStorage* k_categorizedview_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCategorizedView*
///
void k_categorizedview_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self)
///
void k_categorizedview_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KCategorizedView*
///
QObject* k_categorizedview_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KCategorizedView*
/// @param classname const char*
///
bool k_categorizedview_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KCategorizedView*
///
void k_categorizedview_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KCategorizedView*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_categorizedview_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCategorizedView*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_categorizedview_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KCategorizedView*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_categorizedview_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_categorizedview_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KCategorizedView*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_categorizedview_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCategorizedView*
/// @param param1 QObject*
///
void k_categorizedview_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QObject* param1)
///
void k_categorizedview_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KCategorizedView*
///
bool k_categorizedview_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KCategorizedView*
///
double k_categorizedview_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KCategorizedView*
///
double k_categorizedview_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_categorizedview_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_categorizedview_encode_metric_f(int32_t metric, double value);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param index QModelIndex*
/// @param hint enum QAbstractItemView__ScrollHint
///
void k_categorizedview_scroll_to(void* self, void* index, int32_t hint);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param index QModelIndex*
/// @param hint enum QAbstractItemView__ScrollHint
///
void k_categorizedview_qbase_scroll_to(void* self, void* index, int32_t hint);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint)
///
void k_categorizedview_on_scroll_to(void* self, void (*callback)(void*, void*, int32_t));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
///
void k_categorizedview_do_items_layout(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
///
void k_categorizedview_qbase_do_items_layout(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func()
///
void k_categorizedview_on_do_items_layout(void* self, void (*callback)());

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param index QModelIndex*
///
void k_categorizedview_set_root_index(void* self, void* index);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param index QModelIndex*
///
void k_categorizedview_qbase_set_root_index(void* self, void* index);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QModelIndex* index)
///
void k_categorizedview_on_set_root_index(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param e QEvent*
///
bool k_categorizedview_event(void* self, void* e);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param e QEvent*
///
bool k_categorizedview_qbase_event(void* self, void* e);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback bool func(KCategorizedView* self, QEvent* e)
///
void k_categorizedview_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param dx int
/// @param dy int
///
void k_categorizedview_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param dx int
/// @param dy int
///
void k_categorizedview_qbase_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, int dx, int dy)
///
void k_categorizedview_on_scroll_contents_by(void* self, void (*callback)(void*, int, int));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param e QWheelEvent*
///
void k_categorizedview_wheel_event(void* self, void* e);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param e QWheelEvent*
///
void k_categorizedview_qbase_wheel_event(void* self, void* e);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QWheelEvent* e)
///
void k_categorizedview_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param e QTimerEvent*
///
void k_categorizedview_timer_event(void* self, void* e);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param e QTimerEvent*
///
void k_categorizedview_qbase_timer_event(void* self, void* e);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QTimerEvent* e)
///
void k_categorizedview_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param option QStyleOptionViewItem*
///
void k_categorizedview_init_view_item_option(void* self, void* option);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param option QStyleOptionViewItem*
///
void k_categorizedview_qbase_init_view_item_option(void* self, void* option);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QStyleOptionViewItem* option)
///
void k_categorizedview_on_init_view_item_option(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_horizontal_offset(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_qbase_horizontal_offset(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback int32_t func()
///
void k_categorizedview_on_horizontal_offset(void* self, int32_t (*callback)());

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_vertical_offset(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_qbase_vertical_offset(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback int32_t func()
///
void k_categorizedview_on_vertical_offset(void* self, int32_t (*callback)());

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param selection QItemSelection*
///
QRegion* k_categorizedview_visual_region_for_selection(void* self, void* selection);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param selection QItemSelection*
///
QRegion* k_categorizedview_qbase_visual_region_for_selection(void* self, void* selection);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback QRegion* func(KCategorizedView* self, QItemSelection* selection)
///
void k_categorizedview_on_visual_region_for_selection(void* self, QRegion* (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_categorizedview_selected_indexes(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
///
/// @return libqt_list of QModelIndex*
///
libqt_list k_categorizedview_qbase_selected_indexes(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback QModelIndex** func()
///
void k_categorizedview_on_selected_indexes(void* self, QModelIndex** (*callback)());

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param index QModelIndex*
///
bool k_categorizedview_is_index_hidden(void* self, void* index);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param index QModelIndex*
///
bool k_categorizedview_qbase_is_index_hidden(void* self, void* index);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback bool func(KCategorizedView* self, QModelIndex* index)
///
void k_categorizedview_on_is_index_hidden(void* self, bool (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param selected QItemSelection*
/// @param deselected QItemSelection*
///
void k_categorizedview_selection_changed(void* self, void* selected, void* deselected);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param selected QItemSelection*
/// @param deselected QItemSelection*
///
void k_categorizedview_qbase_selection_changed(void* self, void* selected, void* deselected);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QItemSelection* selected, QItemSelection* deselected)
///
void k_categorizedview_on_selection_changed(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
///
QSize* k_categorizedview_viewport_size_hint(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
///
QSize* k_categorizedview_qbase_viewport_size_hint(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback QSize* func()
///
void k_categorizedview_on_viewport_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param selectionModel QItemSelectionModel*
///
void k_categorizedview_set_selection_model(void* self, void* selectionModel);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param selectionModel QItemSelectionModel*
///
void k_categorizedview_qbase_set_selection_model(void* self, void* selectionModel);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QItemSelectionModel* selectionModel)
///
void k_categorizedview_on_set_selection_model(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param search const char*
///
void k_categorizedview_keyboard_search(void* self, const char* search);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param search const char*
///
void k_categorizedview_qbase_keyboard_search(void* self, const char* search);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, const char* search)
///
void k_categorizedview_on_keyboard_search(void* self, void (*callback)(void*, const char*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param row int
///
int32_t k_categorizedview_size_hint_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param row int
///
int32_t k_categorizedview_qbase_size_hint_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback int32_t func(KCategorizedView* self, int row)
///
void k_categorizedview_on_size_hint_for_row(void* self, int32_t (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param column int
///
int32_t k_categorizedview_size_hint_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param column int
///
int32_t k_categorizedview_qbase_size_hint_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback int32_t func(KCategorizedView* self, int column)
///
void k_categorizedview_on_size_hint_for_column(void* self, int32_t (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param index QModelIndex*
///
QAbstractItemDelegate* k_categorizedview_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param index QModelIndex*
///
QAbstractItemDelegate* k_categorizedview_qbase_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback QAbstractItemDelegate* func(KCategorizedView* self, QModelIndex* index)
///
void k_categorizedview_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param query enum Qt__InputMethodQuery
///
QVariant* k_categorizedview_input_method_query(void* self, int32_t query);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param query enum Qt__InputMethodQuery
///
QVariant* k_categorizedview_qbase_input_method_query(void* self, int32_t query);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback QVariant* func(KCategorizedView* self, enum Qt__InputMethodQuery query)
///
void k_categorizedview_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
///
void k_categorizedview_select_all(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
///
void k_categorizedview_qbase_select_all(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func()
///
void k_categorizedview_on_select_all(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
///
void k_categorizedview_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
///
void k_categorizedview_qbase_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func()
///
void k_categorizedview_on_update_editor_data(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
///
void k_categorizedview_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
///
void k_categorizedview_qbase_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func()
///
void k_categorizedview_on_update_editor_geometries(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param action int
///
void k_categorizedview_vertical_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param action int
///
void k_categorizedview_qbase_vertical_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, int action)
///
void k_categorizedview_on_vertical_scrollbar_action(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param action int
///
void k_categorizedview_horizontal_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param action int
///
void k_categorizedview_qbase_horizontal_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, int action)
///
void k_categorizedview_on_horizontal_scrollbar_action(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param value int
///
void k_categorizedview_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param value int
///
void k_categorizedview_qbase_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, int value)
///
void k_categorizedview_on_vertical_scrollbar_value_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param value int
///
void k_categorizedview_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param value int
///
void k_categorizedview_qbase_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, int value)
///
void k_categorizedview_on_horizontal_scrollbar_value_changed(void* self, void (*callback)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param editor QWidget*
/// @param hint enum QAbstractItemDelegate__EndEditHint
///
void k_categorizedview_close_editor(void* self, void* editor, int32_t hint);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param editor QWidget*
/// @param hint enum QAbstractItemDelegate__EndEditHint
///
void k_categorizedview_qbase_close_editor(void* self, void* editor, int32_t hint);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint)
///
void k_categorizedview_on_close_editor(void* self, void (*callback)(void*, void*, int32_t));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param editor QWidget*
///
void k_categorizedview_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param editor QWidget*
///
void k_categorizedview_qbase_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QWidget* editor)
///
void k_categorizedview_on_commit_data(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param editor QObject*
///
void k_categorizedview_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param editor QObject*
///
void k_categorizedview_qbase_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QObject* editor)
///
void k_categorizedview_on_editor_destroyed(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param index QModelIndex*
/// @param trigger enum QAbstractItemView__EditTrigger
/// @param event QEvent*
///
bool k_categorizedview_edit2(void* self, void* index, int32_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param index QModelIndex*
/// @param trigger enum QAbstractItemView__EditTrigger
/// @param event QEvent*
///
bool k_categorizedview_qbase_edit2(void* self, void* index, int32_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback bool func(KCategorizedView* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event)
///
void k_categorizedview_on_edit2(void* self, bool (*callback)(void*, void*, int32_t, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param index QModelIndex*
/// @param event QEvent*
///
/// @return flag of enum QItemSelectionModel__SelectionFlag
///
int32_t k_categorizedview_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param index QModelIndex*
/// @param event QEvent*
///
/// @return flag of enum QItemSelectionModel__SelectionFlag
///
int32_t k_categorizedview_qbase_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback int32_t func(KCategorizedView* self, QModelIndex* index, QEvent* event)
///
void k_categorizedview_on_selection_command(void* self, int32_t (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param next bool
///
bool k_categorizedview_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param next bool
///
bool k_categorizedview_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback bool func(KCategorizedView* self, bool next)
///
void k_categorizedview_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param event QEvent*
///
bool k_categorizedview_viewport_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param event QEvent*
///
bool k_categorizedview_qbase_viewport_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback bool func(KCategorizedView* self, QEvent* event)
///
void k_categorizedview_on_viewport_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param event QMouseEvent*
///
void k_categorizedview_mouse_double_click_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param event QMouseEvent*
///
void k_categorizedview_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QMouseEvent* event)
///
void k_categorizedview_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param event QFocusEvent*
///
void k_categorizedview_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param event QFocusEvent*
///
void k_categorizedview_qbase_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QFocusEvent* event)
///
void k_categorizedview_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param event QFocusEvent*
///
void k_categorizedview_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param event QFocusEvent*
///
void k_categorizedview_qbase_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QFocusEvent* event)
///
void k_categorizedview_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param event QKeyEvent*
///
void k_categorizedview_key_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param event QKeyEvent*
///
void k_categorizedview_qbase_key_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QKeyEvent* event)
///
void k_categorizedview_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param event QInputMethodEvent*
///
void k_categorizedview_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param event QInputMethodEvent*
///
void k_categorizedview_qbase_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QInputMethodEvent* event)
///
void k_categorizedview_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param object QObject*
/// @param event QEvent*
///
bool k_categorizedview_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param object QObject*
/// @param event QEvent*
///
bool k_categorizedview_qbase_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback bool func(KCategorizedView* self, QObject* object, QEvent* event)
///
void k_categorizedview_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
///
QSize* k_categorizedview_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
///
QSize* k_categorizedview_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback QSize* func()
///
void k_categorizedview_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
///
QSize* k_categorizedview_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
///
QSize* k_categorizedview_qbase_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback QSize* func()
///
void k_categorizedview_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param viewport QWidget*
///
void k_categorizedview_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param viewport QWidget*
///
void k_categorizedview_qbase_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QWidget* viewport)
///
void k_categorizedview_on_setup_viewport(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param param1 QContextMenuEvent*
///
void k_categorizedview_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param param1 QContextMenuEvent*
///
void k_categorizedview_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QContextMenuEvent* param1)
///
void k_categorizedview_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param param1 QEvent*
///
void k_categorizedview_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param param1 QEvent*
///
void k_categorizedview_qbase_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QEvent* param1)
///
void k_categorizedview_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param option QStyleOptionFrame*
///
void k_categorizedview_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param option QStyleOptionFrame*
///
void k_categorizedview_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QStyleOptionFrame* option)
///
void k_categorizedview_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback int32_t func()
///
void k_categorizedview_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param visible bool
///
void k_categorizedview_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param visible bool
///
void k_categorizedview_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, bool visible)
///
void k_categorizedview_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param param1 int
///
int32_t k_categorizedview_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param param1 int
///
int32_t k_categorizedview_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback int32_t func(KCategorizedView* self, int param1)
///
void k_categorizedview_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
///
bool k_categorizedview_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
///
bool k_categorizedview_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback bool func()
///
void k_categorizedview_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
///
QPaintEngine* k_categorizedview_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
///
QPaintEngine* k_categorizedview_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback QPaintEngine* func()
///
void k_categorizedview_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param event QKeyEvent*
///
void k_categorizedview_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param event QKeyEvent*
///
void k_categorizedview_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QKeyEvent* event)
///
void k_categorizedview_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param event QEnterEvent*
///
void k_categorizedview_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param event QEnterEvent*
///
void k_categorizedview_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QEnterEvent* event)
///
void k_categorizedview_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param event QMoveEvent*
///
void k_categorizedview_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param event QMoveEvent*
///
void k_categorizedview_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QMoveEvent* event)
///
void k_categorizedview_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param event QCloseEvent*
///
void k_categorizedview_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param event QCloseEvent*
///
void k_categorizedview_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QCloseEvent* event)
///
void k_categorizedview_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param event QTabletEvent*
///
void k_categorizedview_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param event QTabletEvent*
///
void k_categorizedview_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QTabletEvent* event)
///
void k_categorizedview_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param event QActionEvent*
///
void k_categorizedview_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param event QActionEvent*
///
void k_categorizedview_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QActionEvent* event)
///
void k_categorizedview_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param event QShowEvent*
///
void k_categorizedview_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param event QShowEvent*
///
void k_categorizedview_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QShowEvent* event)
///
void k_categorizedview_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param event QHideEvent*
///
void k_categorizedview_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param event QHideEvent*
///
void k_categorizedview_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QHideEvent* event)
///
void k_categorizedview_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_categorizedview_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool k_categorizedview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback bool func(KCategorizedView* self, const char* eventType, void* message, intptr_t* result)
///
void k_categorizedview_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_categorizedview_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_categorizedview_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback int32_t func(KCategorizedView* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_categorizedview_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param painter QPainter*
///
void k_categorizedview_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param painter QPainter*
///
void k_categorizedview_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QPainter* painter)
///
void k_categorizedview_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param offset QPoint*
///
QPaintDevice* k_categorizedview_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param offset QPoint*
///
QPaintDevice* k_categorizedview_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback QPaintDevice* func(KCategorizedView* self, QPoint* offset)
///
void k_categorizedview_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
///
QPainter* k_categorizedview_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
///
QPainter* k_categorizedview_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback QPainter* func()
///
void k_categorizedview_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param event QChildEvent*
///
void k_categorizedview_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param event QChildEvent*
///
void k_categorizedview_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QChildEvent* event)
///
void k_categorizedview_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param event QEvent*
///
void k_categorizedview_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param event QEvent*
///
void k_categorizedview_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QEvent* event)
///
void k_categorizedview_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param signal QMetaMethod*
///
void k_categorizedview_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param signal QMetaMethod*
///
void k_categorizedview_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QMetaMethod* signal)
///
void k_categorizedview_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param signal QMetaMethod*
///
void k_categorizedview_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param signal QMetaMethod*
///
void k_categorizedview_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QMetaMethod* signal)
///
void k_categorizedview_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param width int
/// @param height int
///
void k_categorizedview_resize_contents(void* self, int width, int height);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param width int
/// @param height int
///
void k_categorizedview_qbase_resize_contents(void* self, int width, int height);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, int width, int height)
///
void k_categorizedview_on_resize_contents(void* self, void (*callback)(void*, int, int));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
///
QSize* k_categorizedview_contents_size(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
///
QSize* k_categorizedview_qbase_contents_size(void* self);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback QSize* func()
///
void k_categorizedview_on_contents_size(void* self, QSize* (*callback)());

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param index QModelIndex*
///
QRect* k_categorizedview_rect_for_index(void* self, void* index);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param index QModelIndex*
///
QRect* k_categorizedview_qbase_rect_for_index(void* self, void* index);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback QRect* func(KCategorizedView* self, QModelIndex* index)
///
void k_categorizedview_on_rect_for_index(void* self, QRect* (*callback)(void*, void*));

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param position QPoint*
/// @param index QModelIndex*
///
void k_categorizedview_set_position_for_index(void* self, void* position, void* index);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param position QPoint*
/// @param index QModelIndex*
///
void k_categorizedview_qbase_set_position_for_index(void* self, void* position, void* index);

/// Inherited from QListView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QPoint* position, QModelIndex* index)
///
void k_categorizedview_on_set_position_for_index(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
///
/// @return enum QAbstractItemView__State
///
int32_t k_categorizedview_state(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
///
/// @return enum QAbstractItemView__State
///
int32_t k_categorizedview_qbase_state(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback int32_t func()
///
void k_categorizedview_on_state(void* self, int32_t (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param state enum QAbstractItemView__State
///
void k_categorizedview_set_state(void* self, int32_t state);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param state enum QAbstractItemView__State
///
void k_categorizedview_qbase_set_state(void* self, int32_t state);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, enum QAbstractItemView__State state)
///
void k_categorizedview_on_set_state(void* self, void (*callback)(void*, int32_t));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
///
void k_categorizedview_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
///
void k_categorizedview_qbase_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func()
///
void k_categorizedview_on_schedule_delayed_items_layout(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
///
void k_categorizedview_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
///
void k_categorizedview_qbase_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func()
///
void k_categorizedview_on_execute_delayed_items_layout(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param region QRegion*
///
void k_categorizedview_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param region QRegion*
///
void k_categorizedview_qbase_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QRegion* region)
///
void k_categorizedview_on_set_dirty_region(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param dx int
/// @param dy int
///
void k_categorizedview_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param dx int
/// @param dy int
///
void k_categorizedview_qbase_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, int dx, int dy)
///
void k_categorizedview_on_scroll_dirty_region(void* self, void (*callback)(void*, int, int));

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
///
QPoint* k_categorizedview_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
///
QPoint* k_categorizedview_qbase_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback QPoint* func()
///
void k_categorizedview_on_dirty_region_offset(void* self, QPoint* (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
///
void k_categorizedview_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
///
void k_categorizedview_qbase_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func()
///
void k_categorizedview_on_start_auto_scroll(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
///
void k_categorizedview_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
///
void k_categorizedview_qbase_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func()
///
void k_categorizedview_on_stop_auto_scroll(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
///
void k_categorizedview_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
///
void k_categorizedview_qbase_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func()
///
void k_categorizedview_on_do_auto_scroll(void* self, void (*callback)());

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
///
/// @return enum QAbstractItemView__DropIndicatorPosition
///
int32_t k_categorizedview_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
///
/// @return enum QAbstractItemView__DropIndicatorPosition
///
int32_t k_categorizedview_qbase_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback int32_t func()
///
void k_categorizedview_on_drop_indicator_position(void* self, int32_t (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_categorizedview_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_categorizedview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, int left, int top, int right, int bottom)
///
void k_categorizedview_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
///
QMargins* k_categorizedview_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
///
QMargins* k_categorizedview_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback QMargins* func()
///
void k_categorizedview_on_viewport_margins(void* self, QMargins* (*callback)());

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param param1 QPainter*
///
void k_categorizedview_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param param1 QPainter*
///
void k_categorizedview_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, QPainter* param1)
///
void k_categorizedview_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
///
void k_categorizedview_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
///
void k_categorizedview_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func()
///
void k_categorizedview_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
///
void k_categorizedview_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
///
void k_categorizedview_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func()
///
void k_categorizedview_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
///
void k_categorizedview_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
///
void k_categorizedview_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback void func()
///
void k_categorizedview_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
///
bool k_categorizedview_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
///
bool k_categorizedview_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback bool func()
///
void k_categorizedview_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
///
bool k_categorizedview_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
///
bool k_categorizedview_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback bool func()
///
void k_categorizedview_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
///
QObject* k_categorizedview_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
///
QObject* k_categorizedview_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback QObject* func()
///
void k_categorizedview_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
///
int32_t k_categorizedview_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback int32_t func()
///
void k_categorizedview_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param signal const char*
///
int32_t k_categorizedview_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param signal const char*
///
int32_t k_categorizedview_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback int32_t func(KCategorizedView* self, const char* signal)
///
void k_categorizedview_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param signal QMetaMethod*
///
bool k_categorizedview_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param signal QMetaMethod*
///
bool k_categorizedview_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback bool func(KCategorizedView* self, QMetaMethod* signal)
///
void k_categorizedview_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KCategorizedView*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_categorizedview_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_categorizedview_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KCategorizedView*
/// @param callback double func(KCategorizedView* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_categorizedview_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KCategorizedView*
/// @param callback void func(KCategorizedView* self, const char* objectName)
///
void k_categorizedview_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kcategorizedview.html#dtor.KCategorizedView)
///
/// Delete this object from C++ memory.
///
/// @param self KCategorizedView*
///
void k_categorizedview_delete(void* self);

#endif
