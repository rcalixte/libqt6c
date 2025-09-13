#pragma once
#ifndef SRCQT6C_LIBQABSTRACTITEMVIEW_H
#define SRCQT6C_LIBQABSTRACTITEMVIEW_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qabstractitemview.html

/// q_abstractitemview_new constructs a new QAbstractItemView object.
///
/// @param parent QWidget*
QAbstractItemView* q_abstractitemview_new(void* parent);

/// q_abstractitemview_new2 constructs a new QAbstractItemView object.
///
QAbstractItemView* q_abstractitemview_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QAbstractItemView*
const QMetaObject* q_abstractitemview_meta_object(void* self);

/// @param self QAbstractItemView*
/// @param param1 const char*
void* q_abstractitemview_metacast(void* self, const char* param1);

/// @param self QAbstractItemView*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_abstractitemview_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback int32_t func(QAbstractItemView* self, enum QMetaObject__Call param1, int param2, void* param3)
void q_abstractitemview_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_abstractitemview_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_abstractitemview_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
///
/// @param self QAbstractItemView*
/// @param model QAbstractItemModel*
void q_abstractitemview_set_model(void* self, void* model);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QAbstractItemModel* model)
void q_abstractitemview_on_set_model(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param model QAbstractItemModel*
void q_abstractitemview_qbase_set_model(void* self, void* model);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#model)
///
/// @param self QAbstractItemView*
QAbstractItemModel* q_abstractitemview_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
///
/// @param self QAbstractItemView*
/// @param selectionModel QItemSelectionModel*
void q_abstractitemview_set_selection_model(void* self, void* selectionModel);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QItemSelectionModel* selectionModel)
void q_abstractitemview_on_set_selection_model(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param selectionModel QItemSelectionModel*
void q_abstractitemview_qbase_set_selection_model(void* self, void* selectionModel);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
///
/// @param self QAbstractItemView*
QItemSelectionModel* q_abstractitemview_selection_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
///
/// @param self QAbstractItemView*
/// @param delegate QAbstractItemDelegate*
void q_abstractitemview_set_item_delegate(void* self, void* delegate);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// @param self QAbstractItemView*
QAbstractItemDelegate* q_abstractitemview_item_delegate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
///
/// @param self QAbstractItemView*
/// @param mode enum QAbstractItemView__SelectionMode
void q_abstractitemview_set_selection_mode(void* self, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
///
/// @param self QAbstractItemView*
///
/// @return enum QAbstractItemView__SelectionMode
int32_t q_abstractitemview_selection_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
///
/// @param self QAbstractItemView*
/// @param behavior enum QAbstractItemView__SelectionBehavior
void q_abstractitemview_set_selection_behavior(void* self, int32_t behavior);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
///
/// @param self QAbstractItemView*
///
/// @return enum QAbstractItemView__SelectionBehavior
int32_t q_abstractitemview_selection_behavior(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
///
/// @param self QAbstractItemView*
QModelIndex* q_abstractitemview_current_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
///
/// @param self QAbstractItemView*
QModelIndex* q_abstractitemview_root_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
///
/// @param self QAbstractItemView*
/// @param triggers flag of enum QAbstractItemView__EditTrigger
void q_abstractitemview_set_edit_triggers(void* self, int32_t triggers);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
///
/// @param self QAbstractItemView*
///
/// @return flag of enum QAbstractItemView__EditTrigger
int32_t q_abstractitemview_edit_triggers(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
///
/// @param self QAbstractItemView*
/// @param mode enum QAbstractItemView__ScrollMode
void q_abstractitemview_set_vertical_scroll_mode(void* self, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
///
/// @param self QAbstractItemView*
///
/// @return enum QAbstractItemView__ScrollMode
int32_t q_abstractitemview_vertical_scroll_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
///
/// @param self QAbstractItemView*
void q_abstractitemview_reset_vertical_scroll_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
///
/// @param self QAbstractItemView*
/// @param mode enum QAbstractItemView__ScrollMode
void q_abstractitemview_set_horizontal_scroll_mode(void* self, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
///
/// @param self QAbstractItemView*
///
/// @return enum QAbstractItemView__ScrollMode
int32_t q_abstractitemview_horizontal_scroll_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
///
/// @param self QAbstractItemView*
void q_abstractitemview_reset_horizontal_scroll_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
///
/// @param self QAbstractItemView*
/// @param enable bool
void q_abstractitemview_set_auto_scroll(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
///
/// @param self QAbstractItemView*
bool q_abstractitemview_has_auto_scroll(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
///
/// @param self QAbstractItemView*
/// @param margin int
void q_abstractitemview_set_auto_scroll_margin(void* self, int margin);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
///
/// @param self QAbstractItemView*
int32_t q_abstractitemview_auto_scroll_margin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
///
/// @param self QAbstractItemView*
/// @param enable bool
void q_abstractitemview_set_tab_key_navigation(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
///
/// @param self QAbstractItemView*
bool q_abstractitemview_tab_key_navigation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
///
/// @param self QAbstractItemView*
/// @param enable bool
void q_abstractitemview_set_drop_indicator_shown(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
///
/// @param self QAbstractItemView*
bool q_abstractitemview_show_drop_indicator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
///
/// @param self QAbstractItemView*
/// @param enable bool
void q_abstractitemview_set_drag_enabled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
///
/// @param self QAbstractItemView*
bool q_abstractitemview_drag_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
///
/// @param self QAbstractItemView*
/// @param overwrite bool
void q_abstractitemview_set_drag_drop_overwrite_mode(void* self, bool overwrite);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
///
/// @param self QAbstractItemView*
bool q_abstractitemview_drag_drop_overwrite_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
///
/// @param self QAbstractItemView*
/// @param behavior enum QAbstractItemView__DragDropMode
void q_abstractitemview_set_drag_drop_mode(void* self, int32_t behavior);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
///
/// @param self QAbstractItemView*
///
/// @return enum QAbstractItemView__DragDropMode
int32_t q_abstractitemview_drag_drop_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
///
/// @param self QAbstractItemView*
/// @param dropAction enum Qt__DropAction
void q_abstractitemview_set_default_drop_action(void* self, int32_t dropAction);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
///
/// @param self QAbstractItemView*
///
/// @return enum Qt__DropAction
int32_t q_abstractitemview_default_drop_action(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
///
/// @param self QAbstractItemView*
/// @param enable bool
void q_abstractitemview_set_alternating_row_colors(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
///
/// @param self QAbstractItemView*
bool q_abstractitemview_alternating_row_colors(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
///
/// @param self QAbstractItemView*
/// @param size QSize*
void q_abstractitemview_set_icon_size(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
///
/// @param self QAbstractItemView*
QSize* q_abstractitemview_icon_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
///
/// @param self QAbstractItemView*
/// @param mode enum Qt__TextElideMode
void q_abstractitemview_set_text_elide_mode(void* self, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
///
/// @param self QAbstractItemView*
///
/// @return enum Qt__TextElideMode
int32_t q_abstractitemview_text_elide_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// @param self QAbstractItemView*
/// @param search const char*
void q_abstractitemview_keyboard_search(void* self, const char* search);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, const char* search)
void q_abstractitemview_on_keyboard_search(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param search const char*
void q_abstractitemview_qbase_keyboard_search(void* self, const char* search);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#visualRect)
///
/// @param self QAbstractItemView*
/// @param index QModelIndex*
QRect* q_abstractitemview_visual_rect(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#visualRect)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback QRect* func(QAbstractItemView* self, QModelIndex* index)
void q_abstractitemview_on_visual_rect(void* self, QRect* (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#visualRect)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param index QModelIndex*
QRect* q_abstractitemview_qbase_visual_rect(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollTo)
///
/// @param self QAbstractItemView*
/// @param index QModelIndex*
/// @param hint enum QAbstractItemView__ScrollHint
void q_abstractitemview_scroll_to(void* self, void* index, int32_t hint);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollTo)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint)
void q_abstractitemview_on_scroll_to(void* self, void (*callback)(void*, void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollTo)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param index QModelIndex*
/// @param hint enum QAbstractItemView__ScrollHint
void q_abstractitemview_qbase_scroll_to(void* self, void* index, int32_t hint);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexAt)
///
/// @param self QAbstractItemView*
/// @param point QPoint*
QModelIndex* q_abstractitemview_index_at(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexAt)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback QModelIndex* func(QAbstractItemView* self, QPoint* point)
void q_abstractitemview_on_index_at(void* self, QModelIndex* (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexAt)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param point QPoint*
QModelIndex* q_abstractitemview_qbase_index_at(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
///
/// @param self QAbstractItemView*
/// @param index QModelIndex*
QSize* q_abstractitemview_size_hint_for_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// @param self QAbstractItemView*
/// @param row int
int32_t q_abstractitemview_size_hint_for_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback int32_t func(QAbstractItemView* self, int row)
void q_abstractitemview_on_size_hint_for_row(void* self, int32_t (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param row int
int32_t q_abstractitemview_qbase_size_hint_for_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// @param self QAbstractItemView*
/// @param column int
int32_t q_abstractitemview_size_hint_for_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback int32_t func(QAbstractItemView* self, int column)
void q_abstractitemview_on_size_hint_for_column(void* self, int32_t (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param column int
int32_t q_abstractitemview_qbase_size_hint_for_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#openPersistentEditor)
///
/// @param self QAbstractItemView*
/// @param index QModelIndex*
void q_abstractitemview_open_persistent_editor(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closePersistentEditor)
///
/// @param self QAbstractItemView*
/// @param index QModelIndex*
void q_abstractitemview_close_persistent_editor(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#isPersistentEditorOpen)
///
/// @param self QAbstractItemView*
/// @param index QModelIndex*
bool q_abstractitemview_is_persistent_editor_open(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
///
/// @param self QAbstractItemView*
/// @param index QModelIndex*
/// @param widget QWidget*
void q_abstractitemview_set_index_widget(void* self, void* index, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
///
/// @param self QAbstractItemView*
/// @param index QModelIndex*
QWidget* q_abstractitemview_index_widget(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
///
/// @param self QAbstractItemView*
/// @param row int
/// @param delegate QAbstractItemDelegate*
void q_abstractitemview_set_item_delegate_for_row(void* self, int row, void* delegate);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
///
/// @param self QAbstractItemView*
/// @param row int
QAbstractItemDelegate* q_abstractitemview_item_delegate_for_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
///
/// @param self QAbstractItemView*
/// @param column int
/// @param delegate QAbstractItemDelegate*
void q_abstractitemview_set_item_delegate_for_column(void* self, int column, void* delegate);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
///
/// @param self QAbstractItemView*
/// @param column int
QAbstractItemDelegate* q_abstractitemview_item_delegate_for_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// @param self QAbstractItemView*
/// @param index QModelIndex*
QAbstractItemDelegate* q_abstractitemview_item_delegate2(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// @param self QAbstractItemView*
/// @param index QModelIndex*
QAbstractItemDelegate* q_abstractitemview_item_delegate_for_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback QAbstractItemDelegate* func(QAbstractItemView* self, QModelIndex* index)
void q_abstractitemview_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param index QModelIndex*
QAbstractItemDelegate* q_abstractitemview_qbase_item_delegate_for_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// @param self QAbstractItemView*
/// @param query enum Qt__InputMethodQuery
QVariant* q_abstractitemview_input_method_query(void* self, int64_t query);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback QVariant* func(QAbstractItemView* self, enum Qt__InputMethodQuery query)
void q_abstractitemview_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param query enum Qt__InputMethodQuery
QVariant* q_abstractitemview_qbase_input_method_query(void* self, int64_t query);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
///
/// @param self QAbstractItemView*
void q_abstractitemview_reset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func()
void q_abstractitemview_on_reset(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
void q_abstractitemview_qbase_reset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setRootIndex)
///
/// @param self QAbstractItemView*
/// @param index QModelIndex*
void q_abstractitemview_set_root_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setRootIndex)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QModelIndex* index)
void q_abstractitemview_on_set_root_index(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setRootIndex)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param index QModelIndex*
void q_abstractitemview_qbase_set_root_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doItemsLayout)
///
/// @param self QAbstractItemView*
void q_abstractitemview_do_items_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doItemsLayout)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func()
void q_abstractitemview_on_do_items_layout(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doItemsLayout)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
void q_abstractitemview_qbase_do_items_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// @param self QAbstractItemView*
void q_abstractitemview_select_all(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func()
void q_abstractitemview_on_select_all(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
void q_abstractitemview_qbase_select_all(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// @param self QAbstractItemView*
/// @param index QModelIndex*
void q_abstractitemview_edit(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
///
/// @param self QAbstractItemView*
void q_abstractitemview_clear_selection(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
///
/// @param self QAbstractItemView*
/// @param index QModelIndex*
void q_abstractitemview_set_current_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
///
/// @param self QAbstractItemView*
void q_abstractitemview_scroll_to_top(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
///
/// @param self QAbstractItemView*
void q_abstractitemview_scroll_to_bottom(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#update)
///
/// @param self QAbstractItemView*
/// @param index QModelIndex*
void q_abstractitemview_update(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
///
/// @param self QAbstractItemView*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list /* of int */
void q_abstractitemview_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* /* of int */)
void q_abstractitemview_on_data_changed(void* self, void (*callback)(void*, void*, void*, int*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param topLeft QModelIndex*
/// @param bottomRight QModelIndex*
/// @param roles libqt_list /* of int */
void q_abstractitemview_qbase_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsInserted)
///
/// @param self QAbstractItemView*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
void q_abstractitemview_rows_inserted(void* self, void* parent, int start, int end);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsInserted)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QModelIndex* parent, int start, int end)
void q_abstractitemview_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsInserted)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
void q_abstractitemview_qbase_rows_inserted(void* self, void* parent, int start, int end);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
///
/// @param self QAbstractItemView*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
void q_abstractitemview_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QModelIndex* parent, int start, int end)
void q_abstractitemview_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param parent QModelIndex*
/// @param start int
/// @param end int
void q_abstractitemview_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionChanged)
///
/// @param self QAbstractItemView*
/// @param selected QItemSelection*
/// @param deselected QItemSelection*
void q_abstractitemview_selection_changed(void* self, void* selected, void* deselected);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionChanged)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QItemSelection* selected, QItemSelection* deselected)
void q_abstractitemview_on_selection_changed(void* self, void (*callback)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionChanged)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param selected QItemSelection*
/// @param deselected QItemSelection*
void q_abstractitemview_qbase_selection_changed(void* self, void* selected, void* deselected);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentChanged)
///
/// @param self QAbstractItemView*
/// @param current QModelIndex*
/// @param previous QModelIndex*
void q_abstractitemview_current_changed(void* self, void* current, void* previous);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentChanged)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QModelIndex* current, QModelIndex* previous)
void q_abstractitemview_on_current_changed(void* self, void (*callback)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentChanged)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param current QModelIndex*
/// @param previous QModelIndex*
void q_abstractitemview_qbase_current_changed(void* self, void* current, void* previous);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// @param self QAbstractItemView*
void q_abstractitemview_update_editor_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func()
void q_abstractitemview_on_update_editor_data(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
void q_abstractitemview_qbase_update_editor_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// @param self QAbstractItemView*
void q_abstractitemview_update_editor_geometries(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func()
void q_abstractitemview_on_update_editor_geometries(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
void q_abstractitemview_qbase_update_editor_geometries(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateGeometries)
///
/// @param self QAbstractItemView*
void q_abstractitemview_update_geometries(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateGeometries)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func()
void q_abstractitemview_on_update_geometries(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateGeometries)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
void q_abstractitemview_qbase_update_geometries(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// @param self QAbstractItemView*
/// @param action int
void q_abstractitemview_vertical_scrollbar_action(void* self, int action);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, int action)
void q_abstractitemview_on_vertical_scrollbar_action(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param action int
void q_abstractitemview_qbase_vertical_scrollbar_action(void* self, int action);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// @param self QAbstractItemView*
/// @param action int
void q_abstractitemview_horizontal_scrollbar_action(void* self, int action);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, int action)
void q_abstractitemview_on_horizontal_scrollbar_action(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param action int
void q_abstractitemview_qbase_horizontal_scrollbar_action(void* self, int action);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// @param self QAbstractItemView*
/// @param value int
void q_abstractitemview_vertical_scrollbar_value_changed(void* self, int value);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, int value)
void q_abstractitemview_on_vertical_scrollbar_value_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param value int
void q_abstractitemview_qbase_vertical_scrollbar_value_changed(void* self, int value);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// @param self QAbstractItemView*
/// @param value int
void q_abstractitemview_horizontal_scrollbar_value_changed(void* self, int value);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, int value)
void q_abstractitemview_on_horizontal_scrollbar_value_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param value int
void q_abstractitemview_qbase_horizontal_scrollbar_value_changed(void* self, int value);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// @param self QAbstractItemView*
/// @param editor QWidget*
/// @param hint enum QAbstractItemDelegate__EndEditHint
void q_abstractitemview_close_editor(void* self, void* editor, int32_t hint);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint)
void q_abstractitemview_on_close_editor(void* self, void (*callback)(void*, void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param editor QWidget*
/// @param hint enum QAbstractItemDelegate__EndEditHint
void q_abstractitemview_qbase_close_editor(void* self, void* editor, int32_t hint);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// @param self QAbstractItemView*
/// @param editor QWidget*
void q_abstractitemview_commit_data(void* self, void* editor);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QWidget* editor)
void q_abstractitemview_on_commit_data(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param editor QWidget*
void q_abstractitemview_qbase_commit_data(void* self, void* editor);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// @param self QAbstractItemView*
/// @param editor QObject*
void q_abstractitemview_editor_destroyed(void* self, void* editor);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QObject* editor)
void q_abstractitemview_on_editor_destroyed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param editor QObject*
void q_abstractitemview_qbase_editor_destroyed(void* self, void* editor);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// @param self QAbstractItemView*
/// @param index QModelIndex*
void q_abstractitemview_pressed(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QModelIndex* index)
void q_abstractitemview_on_pressed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// @param self QAbstractItemView*
/// @param index QModelIndex*
void q_abstractitemview_clicked(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QModelIndex* index)
void q_abstractitemview_on_clicked(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// @param self QAbstractItemView*
/// @param index QModelIndex*
void q_abstractitemview_double_clicked(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QModelIndex* index)
void q_abstractitemview_on_double_clicked(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// @param self QAbstractItemView*
/// @param index QModelIndex*
void q_abstractitemview_activated(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QModelIndex* index)
void q_abstractitemview_on_activated(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// @param self QAbstractItemView*
/// @param index QModelIndex*
void q_abstractitemview_entered(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QModelIndex* index)
void q_abstractitemview_on_entered(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// @param self QAbstractItemView*
void q_abstractitemview_viewport_entered(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self)
void q_abstractitemview_on_viewport_entered(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// @param self QAbstractItemView*
/// @param size QSize*
void q_abstractitemview_icon_size_changed(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QSize* size)
void q_abstractitemview_on_icon_size_changed(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#moveCursor)
///
/// @param self QAbstractItemView*
/// @param cursorAction enum QAbstractItemView__CursorAction
/// @param modifiers flag of enum Qt__KeyboardModifier
QModelIndex* q_abstractitemview_move_cursor(void* self, int32_t cursorAction, int64_t modifiers);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#moveCursor)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback QModelIndex* func(QAbstractItemView* self, enum QAbstractItemView__CursorAction cursorAction, flag of enum Qt__KeyboardModifier modifiers)
void q_abstractitemview_on_move_cursor(void* self, QModelIndex* (*callback)(void*, int32_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#moveCursor)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param cursorAction enum QAbstractItemView__CursorAction
/// @param modifiers flag of enum Qt__KeyboardModifier
QModelIndex* q_abstractitemview_qbase_move_cursor(void* self, int32_t cursorAction, int64_t modifiers);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalOffset)
///
/// @param self QAbstractItemView*
int32_t q_abstractitemview_horizontal_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalOffset)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback int32_t func()
void q_abstractitemview_on_horizontal_offset(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalOffset)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
int32_t q_abstractitemview_qbase_horizontal_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalOffset)
///
/// @param self QAbstractItemView*
int32_t q_abstractitemview_vertical_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalOffset)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback int32_t func()
void q_abstractitemview_on_vertical_offset(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalOffset)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
int32_t q_abstractitemview_qbase_vertical_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#isIndexHidden)
///
/// @param self QAbstractItemView*
/// @param index QModelIndex*
bool q_abstractitemview_is_index_hidden(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#isIndexHidden)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback bool func(QAbstractItemView* self, QModelIndex* index)
void q_abstractitemview_on_is_index_hidden(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#isIndexHidden)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param index QModelIndex*
bool q_abstractitemview_qbase_is_index_hidden(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelection)
///
/// @param self QAbstractItemView*
/// @param rect QRect*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
void q_abstractitemview_set_selection(void* self, void* rect, int32_t command);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelection)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QRect* rect, flag of enum QItemSelectionModel__SelectionFlag command)
void q_abstractitemview_on_set_selection(void* self, void (*callback)(void*, void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelection)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param rect QRect*
/// @param command flag of enum QItemSelectionModel__SelectionFlag
void q_abstractitemview_qbase_set_selection(void* self, void* rect, int32_t command);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#visualRegionForSelection)
///
/// @param self QAbstractItemView*
/// @param selection QItemSelection*
QRegion* q_abstractitemview_visual_region_for_selection(void* self, void* selection);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#visualRegionForSelection)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback QRegion* func(QAbstractItemView* self, QItemSelection* selection)
void q_abstractitemview_on_visual_region_for_selection(void* self, QRegion* (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#visualRegionForSelection)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param selection QItemSelection*
QRegion* q_abstractitemview_qbase_visual_region_for_selection(void* self, void* selection);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectedIndexes)
///
/// @param self QAbstractItemView*
libqt_list /* of QModelIndex* */ q_abstractitemview_selected_indexes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectedIndexes)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback QModelIndex** func()
void q_abstractitemview_on_selected_indexes(void* self, QModelIndex** (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectedIndexes)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
libqt_list /* of QModelIndex* */ q_abstractitemview_qbase_selected_indexes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// @param self QAbstractItemView*
/// @param index QModelIndex*
/// @param trigger enum QAbstractItemView__EditTrigger
/// @param event QEvent*
bool q_abstractitemview_edit2(void* self, void* index, int32_t trigger, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback bool func(QAbstractItemView* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event)
void q_abstractitemview_on_edit2(void* self, bool (*callback)(void*, void*, int32_t, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param index QModelIndex*
/// @param trigger enum QAbstractItemView__EditTrigger
/// @param event QEvent*
bool q_abstractitemview_qbase_edit2(void* self, void* index, int32_t trigger, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// @param self QAbstractItemView*
/// @param index QModelIndex*
/// @param event QEvent*
///
/// @return flag of enum QItemSelectionModel__SelectionFlag
int32_t q_abstractitemview_selection_command(void* self, void* index, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback int32_t func(QAbstractItemView* self, QModelIndex* index, QEvent* event)
void q_abstractitemview_on_selection_command(void* self, int32_t (*callback)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param index QModelIndex*
/// @param event QEvent*
///
/// @return flag of enum QItemSelectionModel__SelectionFlag
int32_t q_abstractitemview_qbase_selection_command(void* self, void* index, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// @param self QAbstractItemView*
/// @param supportedActions flag of enum Qt__DropAction
void q_abstractitemview_start_drag(void* self, int32_t supportedActions);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, flag of enum Qt__DropAction supportedActions)
void q_abstractitemview_on_start_drag(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param supportedActions flag of enum Qt__DropAction
void q_abstractitemview_qbase_start_drag(void* self, int32_t supportedActions);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
///
/// @param self QAbstractItemView*
/// @param option QStyleOptionViewItem*
void q_abstractitemview_init_view_item_option(void* self, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QStyleOptionViewItem* option)
void q_abstractitemview_on_init_view_item_option(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param option QStyleOptionViewItem*
void q_abstractitemview_qbase_init_view_item_option(void* self, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// @param self QAbstractItemView*
///
/// @return enum QAbstractItemView__State
int32_t q_abstractitemview_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback int32_t func()
void q_abstractitemview_on_state(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
///
/// @return enum QAbstractItemView__State
int32_t q_abstractitemview_qbase_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// @param self QAbstractItemView*
/// @param state enum QAbstractItemView__State
void q_abstractitemview_set_state(void* self, int32_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, enum QAbstractItemView__State state)
void q_abstractitemview_on_set_state(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param state enum QAbstractItemView__State
void q_abstractitemview_qbase_set_state(void* self, int32_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// @param self QAbstractItemView*
void q_abstractitemview_schedule_delayed_items_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func()
void q_abstractitemview_on_schedule_delayed_items_layout(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
void q_abstractitemview_qbase_schedule_delayed_items_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// @param self QAbstractItemView*
void q_abstractitemview_execute_delayed_items_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func()
void q_abstractitemview_on_execute_delayed_items_layout(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
void q_abstractitemview_qbase_execute_delayed_items_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// @param self QAbstractItemView*
/// @param region QRegion*
void q_abstractitemview_set_dirty_region(void* self, void* region);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QRegion* region)
void q_abstractitemview_on_set_dirty_region(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param region QRegion*
void q_abstractitemview_qbase_set_dirty_region(void* self, void* region);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// @param self QAbstractItemView*
/// @param dx int
/// @param dy int
void q_abstractitemview_scroll_dirty_region(void* self, int dx, int dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, int dx, int dy)
void q_abstractitemview_on_scroll_dirty_region(void* self, void (*callback)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param dx int
/// @param dy int
void q_abstractitemview_qbase_scroll_dirty_region(void* self, int dx, int dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// @param self QAbstractItemView*
QPoint* q_abstractitemview_dirty_region_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback QPoint* func()
void q_abstractitemview_on_dirty_region_offset(void* self, QPoint* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
QPoint* q_abstractitemview_qbase_dirty_region_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// @param self QAbstractItemView*
void q_abstractitemview_start_auto_scroll(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func()
void q_abstractitemview_on_start_auto_scroll(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
void q_abstractitemview_qbase_start_auto_scroll(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// @param self QAbstractItemView*
void q_abstractitemview_stop_auto_scroll(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func()
void q_abstractitemview_on_stop_auto_scroll(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
void q_abstractitemview_qbase_stop_auto_scroll(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// @param self QAbstractItemView*
void q_abstractitemview_do_auto_scroll(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func()
void q_abstractitemview_on_do_auto_scroll(void* self, void (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
void q_abstractitemview_qbase_do_auto_scroll(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// @param self QAbstractItemView*
/// @param next bool
bool q_abstractitemview_focus_next_prev_child(void* self, bool next);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback bool func(QAbstractItemView* self, bool next)
void q_abstractitemview_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param next bool
bool q_abstractitemview_qbase_focus_next_prev_child(void* self, bool next);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#event)
///
/// @param self QAbstractItemView*
/// @param event QEvent*
bool q_abstractitemview_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#event)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback bool func(QAbstractItemView* self, QEvent* event)
void q_abstractitemview_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#event)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param event QEvent*
bool q_abstractitemview_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// @param self QAbstractItemView*
/// @param event QEvent*
bool q_abstractitemview_viewport_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback bool func(QAbstractItemView* self, QEvent* event)
void q_abstractitemview_on_viewport_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param event QEvent*
bool q_abstractitemview_qbase_viewport_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// @param self QAbstractItemView*
/// @param event QMouseEvent*
void q_abstractitemview_mouse_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QMouseEvent* event)
void q_abstractitemview_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param event QMouseEvent*
void q_abstractitemview_qbase_mouse_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
///
/// @param self QAbstractItemView*
/// @param event QMouseEvent*
void q_abstractitemview_mouse_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QMouseEvent* event)
void q_abstractitemview_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param event QMouseEvent*
void q_abstractitemview_qbase_mouse_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
///
/// @param self QAbstractItemView*
/// @param event QMouseEvent*
void q_abstractitemview_mouse_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QMouseEvent* event)
void q_abstractitemview_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param event QMouseEvent*
void q_abstractitemview_qbase_mouse_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// @param self QAbstractItemView*
/// @param event QMouseEvent*
void q_abstractitemview_mouse_double_click_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QMouseEvent* event)
void q_abstractitemview_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param event QMouseEvent*
void q_abstractitemview_qbase_mouse_double_click_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// @param self QAbstractItemView*
/// @param event QDragEnterEvent*
void q_abstractitemview_drag_enter_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QDragEnterEvent* event)
void q_abstractitemview_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param event QDragEnterEvent*
void q_abstractitemview_qbase_drag_enter_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
///
/// @param self QAbstractItemView*
/// @param event QDragMoveEvent*
void q_abstractitemview_drag_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QDragMoveEvent* event)
void q_abstractitemview_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param event QDragMoveEvent*
void q_abstractitemview_qbase_drag_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// @param self QAbstractItemView*
/// @param event QDragLeaveEvent*
void q_abstractitemview_drag_leave_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QDragLeaveEvent* event)
void q_abstractitemview_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param event QDragLeaveEvent*
void q_abstractitemview_qbase_drag_leave_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
///
/// @param self QAbstractItemView*
/// @param event QDropEvent*
void q_abstractitemview_drop_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QDropEvent* event)
void q_abstractitemview_on_drop_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param event QDropEvent*
void q_abstractitemview_qbase_drop_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// @param self QAbstractItemView*
/// @param event QFocusEvent*
void q_abstractitemview_focus_in_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QFocusEvent* event)
void q_abstractitemview_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param event QFocusEvent*
void q_abstractitemview_qbase_focus_in_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// @param self QAbstractItemView*
/// @param event QFocusEvent*
void q_abstractitemview_focus_out_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QFocusEvent* event)
void q_abstractitemview_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param event QFocusEvent*
void q_abstractitemview_qbase_focus_out_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// @param self QAbstractItemView*
/// @param event QKeyEvent*
void q_abstractitemview_key_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QKeyEvent* event)
void q_abstractitemview_on_key_press_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param event QKeyEvent*
void q_abstractitemview_qbase_key_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// @param self QAbstractItemView*
/// @param event QResizeEvent*
void q_abstractitemview_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QResizeEvent* event)
void q_abstractitemview_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param event QResizeEvent*
void q_abstractitemview_qbase_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#timerEvent)
///
/// @param self QAbstractItemView*
/// @param event QTimerEvent*
void q_abstractitemview_timer_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QTimerEvent* event)
void q_abstractitemview_on_timer_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#timerEvent)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param event QTimerEvent*
void q_abstractitemview_qbase_timer_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// @param self QAbstractItemView*
/// @param event QInputMethodEvent*
void q_abstractitemview_input_method_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QInputMethodEvent* event)
void q_abstractitemview_on_input_method_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param event QInputMethodEvent*
void q_abstractitemview_qbase_input_method_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// @param self QAbstractItemView*
/// @param object QObject*
/// @param event QEvent*
bool q_abstractitemview_event_filter(void* self, void* object, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback bool func(QAbstractItemView* self, QObject* object, QEvent* event)
void q_abstractitemview_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
/// @param object QObject*
/// @param event QEvent*
bool q_abstractitemview_qbase_event_filter(void* self, void* object, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// @param self QAbstractItemView*
///
/// @return enum QAbstractItemView__DropIndicatorPosition
int32_t q_abstractitemview_drop_indicator_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback int32_t func()
void q_abstractitemview_on_drop_indicator_position(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
///
/// @return enum QAbstractItemView__DropIndicatorPosition
int32_t q_abstractitemview_qbase_drop_indicator_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportSizeHint)
///
/// @param self QAbstractItemView*
QSize* q_abstractitemview_viewport_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractItemView*
/// @param callback QSize* func()
void q_abstractitemview_on_viewport_size_hint(void* self, QSize* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportSizeHint)
///
/// Base class method implementation
///
/// @param self QAbstractItemView*
QSize* q_abstractitemview_qbase_viewport_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_abstractitemview_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_abstractitemview_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// @param self QAbstractItemView*
///
/// @return enum Qt__ScrollBarPolicy
int32_t q_abstractitemview_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// @param self QAbstractItemView*
/// @param verticalScrollBarPolicy enum Qt__ScrollBarPolicy
void q_abstractitemview_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// @param self QAbstractItemView*
QScrollBar* q_abstractitemview_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// @param self QAbstractItemView*
/// @param scrollbar QScrollBar*
void q_abstractitemview_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// @param self QAbstractItemView*
///
/// @return enum Qt__ScrollBarPolicy
int32_t q_abstractitemview_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// @param self QAbstractItemView*
/// @param horizontalScrollBarPolicy enum Qt__ScrollBarPolicy
void q_abstractitemview_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// @param self QAbstractItemView*
QScrollBar* q_abstractitemview_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// @param self QAbstractItemView*
/// @param scrollbar QScrollBar*
void q_abstractitemview_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// @param self QAbstractItemView*
QWidget* q_abstractitemview_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// @param self QAbstractItemView*
/// @param widget QWidget*
void q_abstractitemview_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// @param self QAbstractItemView*
/// @param widget QWidget*
/// @param alignment flag of enum Qt__AlignmentFlag
void q_abstractitemview_add_scroll_bar_widget(void* self, void* widget, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// @param self QAbstractItemView*
/// @param alignment flag of enum Qt__AlignmentFlag
libqt_list /* of QWidget* */ q_abstractitemview_scroll_bar_widgets(void* self, int32_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// @param self QAbstractItemView*
QWidget* q_abstractitemview_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// @param self QAbstractItemView*
/// @param widget QWidget*
void q_abstractitemview_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// @param self QAbstractItemView*
QSize* q_abstractitemview_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// @param self QAbstractItemView*
///
/// @return enum QAbstractScrollArea__SizeAdjustPolicy
int32_t q_abstractitemview_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// @param self QAbstractItemView*
/// @param policy enum QAbstractScrollArea__SizeAdjustPolicy
void q_abstractitemview_set_size_adjust_policy(void* self, int32_t policy);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self QAbstractItemView*
int32_t q_abstractitemview_frame_style(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self QAbstractItemView*
/// @param frameStyle int
void q_abstractitemview_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self QAbstractItemView*
int32_t q_abstractitemview_frame_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self QAbstractItemView*
///
/// @return enum QFrame__Shape
int32_t q_abstractitemview_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self QAbstractItemView*
/// @param frameShape enum QFrame__Shape
void q_abstractitemview_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self QAbstractItemView*
///
/// @return enum QFrame__Shadow
int32_t q_abstractitemview_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self QAbstractItemView*
/// @param frameShadow enum QFrame__Shadow
void q_abstractitemview_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self QAbstractItemView*
int32_t q_abstractitemview_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self QAbstractItemView*
/// @param lineWidth int
void q_abstractitemview_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self QAbstractItemView*
int32_t q_abstractitemview_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self QAbstractItemView*
/// @param midLineWidth int
void q_abstractitemview_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self QAbstractItemView*
QRect* q_abstractitemview_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self QAbstractItemView*
/// @param frameRect QRect*
void q_abstractitemview_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self QAbstractItemView*
uintptr_t q_abstractitemview_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self QAbstractItemView*
void q_abstractitemview_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self QAbstractItemView*
uintptr_t q_abstractitemview_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self QAbstractItemView*
uintptr_t q_abstractitemview_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self QAbstractItemView*
QStyle* q_abstractitemview_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self QAbstractItemView*
/// @param style QStyle*
void q_abstractitemview_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self QAbstractItemView*
bool q_abstractitemview_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self QAbstractItemView*
bool q_abstractitemview_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self QAbstractItemView*
bool q_abstractitemview_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self QAbstractItemView*
///
/// @return enum Qt__WindowModality
int32_t q_abstractitemview_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self QAbstractItemView*
/// @param windowModality enum Qt__WindowModality
void q_abstractitemview_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self QAbstractItemView*
bool q_abstractitemview_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self QAbstractItemView*
/// @param param1 QWidget*
bool q_abstractitemview_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self QAbstractItemView*
/// @param enabled bool
void q_abstractitemview_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self QAbstractItemView*
/// @param disabled bool
void q_abstractitemview_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self QAbstractItemView*
/// @param windowModified bool
void q_abstractitemview_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self QAbstractItemView*
QRect* q_abstractitemview_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self QAbstractItemView*
const QRect* q_abstractitemview_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self QAbstractItemView*
QRect* q_abstractitemview_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self QAbstractItemView*
int32_t q_abstractitemview_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self QAbstractItemView*
int32_t q_abstractitemview_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self QAbstractItemView*
QPoint* q_abstractitemview_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self QAbstractItemView*
QSize* q_abstractitemview_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self QAbstractItemView*
QSize* q_abstractitemview_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self QAbstractItemView*
int32_t q_abstractitemview_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self QAbstractItemView*
int32_t q_abstractitemview_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self QAbstractItemView*
QRect* q_abstractitemview_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self QAbstractItemView*
QRect* q_abstractitemview_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self QAbstractItemView*
QRegion* q_abstractitemview_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self QAbstractItemView*
QSize* q_abstractitemview_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self QAbstractItemView*
QSize* q_abstractitemview_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self QAbstractItemView*
int32_t q_abstractitemview_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self QAbstractItemView*
int32_t q_abstractitemview_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self QAbstractItemView*
int32_t q_abstractitemview_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self QAbstractItemView*
int32_t q_abstractitemview_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QAbstractItemView*
/// @param minimumSize QSize*
void q_abstractitemview_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self QAbstractItemView*
/// @param minw int
/// @param minh int
void q_abstractitemview_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QAbstractItemView*
/// @param maximumSize QSize*
void q_abstractitemview_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self QAbstractItemView*
/// @param maxw int
/// @param maxh int
void q_abstractitemview_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self QAbstractItemView*
/// @param minw int
void q_abstractitemview_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self QAbstractItemView*
/// @param minh int
void q_abstractitemview_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self QAbstractItemView*
/// @param maxw int
void q_abstractitemview_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self QAbstractItemView*
/// @param maxh int
void q_abstractitemview_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self QAbstractItemView*
QSize* q_abstractitemview_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QAbstractItemView*
/// @param sizeIncrement QSize*
void q_abstractitemview_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self QAbstractItemView*
/// @param w int
/// @param h int
void q_abstractitemview_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self QAbstractItemView*
QSize* q_abstractitemview_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QAbstractItemView*
/// @param baseSize QSize*
void q_abstractitemview_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self QAbstractItemView*
/// @param basew int
/// @param baseh int
void q_abstractitemview_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QAbstractItemView*
/// @param fixedSize QSize*
void q_abstractitemview_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self QAbstractItemView*
/// @param w int
/// @param h int
void q_abstractitemview_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self QAbstractItemView*
/// @param w int
void q_abstractitemview_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self QAbstractItemView*
/// @param h int
void q_abstractitemview_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QAbstractItemView*
/// @param param1 QPointF*
QPointF* q_abstractitemview_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self QAbstractItemView*
/// @param param1 QPoint*
QPoint* q_abstractitemview_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QAbstractItemView*
/// @param param1 QPointF*
QPointF* q_abstractitemview_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self QAbstractItemView*
/// @param param1 QPoint*
QPoint* q_abstractitemview_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QAbstractItemView*
/// @param param1 QPointF*
QPointF* q_abstractitemview_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self QAbstractItemView*
/// @param param1 QPoint*
QPoint* q_abstractitemview_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QAbstractItemView*
/// @param param1 QPointF*
QPointF* q_abstractitemview_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self QAbstractItemView*
/// @param param1 QPoint*
QPoint* q_abstractitemview_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QAbstractItemView*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* q_abstractitemview_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self QAbstractItemView*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* q_abstractitemview_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QAbstractItemView*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* q_abstractitemview_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self QAbstractItemView*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* q_abstractitemview_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self QAbstractItemView*
QWidget* q_abstractitemview_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self QAbstractItemView*
QWidget* q_abstractitemview_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self QAbstractItemView*
QWidget* q_abstractitemview_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self QAbstractItemView*
const QPalette* q_abstractitemview_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self QAbstractItemView*
/// @param palette QPalette*
void q_abstractitemview_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self QAbstractItemView*
/// @param backgroundRole enum QPalette__ColorRole
void q_abstractitemview_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self QAbstractItemView*
///
/// @return enum QPalette__ColorRole
int32_t q_abstractitemview_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self QAbstractItemView*
/// @param foregroundRole enum QPalette__ColorRole
void q_abstractitemview_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self QAbstractItemView*
///
/// @return enum QPalette__ColorRole
int32_t q_abstractitemview_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self QAbstractItemView*
const QFont* q_abstractitemview_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self QAbstractItemView*
/// @param font QFont*
void q_abstractitemview_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self QAbstractItemView*
QFontMetrics* q_abstractitemview_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self QAbstractItemView*
QFontInfo* q_abstractitemview_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self QAbstractItemView*
QCursor* q_abstractitemview_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self QAbstractItemView*
/// @param cursor QCursor*
void q_abstractitemview_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self QAbstractItemView*
void q_abstractitemview_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self QAbstractItemView*
/// @param enable bool
void q_abstractitemview_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self QAbstractItemView*
bool q_abstractitemview_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self QAbstractItemView*
bool q_abstractitemview_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self QAbstractItemView*
/// @param enable bool
void q_abstractitemview_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self QAbstractItemView*
bool q_abstractitemview_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QAbstractItemView*
/// @param mask QBitmap*
void q_abstractitemview_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self QAbstractItemView*
/// @param mask QRegion*
void q_abstractitemview_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self QAbstractItemView*
QRegion* q_abstractitemview_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self QAbstractItemView*
void q_abstractitemview_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QAbstractItemView*
/// @param target QPaintDevice*
void q_abstractitemview_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QAbstractItemView*
/// @param painter QPainter*
void q_abstractitemview_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QAbstractItemView*
QPixmap* q_abstractitemview_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self QAbstractItemView*
QGraphicsEffect* q_abstractitemview_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self QAbstractItemView*
/// @param effect QGraphicsEffect*
void q_abstractitemview_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QAbstractItemView*
/// @param typeVal enum Qt__GestureType
void q_abstractitemview_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self QAbstractItemView*
/// @param typeVal enum Qt__GestureType
void q_abstractitemview_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self QAbstractItemView*
/// @param windowTitle const char*
void q_abstractitemview_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self QAbstractItemView*
/// @param styleSheet const char*
void q_abstractitemview_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractItemView*
const char* q_abstractitemview_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractItemView*
const char* q_abstractitemview_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self QAbstractItemView*
/// @param icon QIcon*
void q_abstractitemview_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self QAbstractItemView*
QIcon* q_abstractitemview_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self QAbstractItemView*
/// @param windowIconText const char*
void q_abstractitemview_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractItemView*
const char* q_abstractitemview_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self QAbstractItemView*
/// @param windowRole const char*
void q_abstractitemview_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractItemView*
const char* q_abstractitemview_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self QAbstractItemView*
/// @param filePath const char*
void q_abstractitemview_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractItemView*
const char* q_abstractitemview_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self QAbstractItemView*
/// @param level double
void q_abstractitemview_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self QAbstractItemView*
double q_abstractitemview_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self QAbstractItemView*
bool q_abstractitemview_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self QAbstractItemView*
/// @param toolTip const char*
void q_abstractitemview_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractItemView*
const char* q_abstractitemview_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self QAbstractItemView*
/// @param msec int
void q_abstractitemview_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self QAbstractItemView*
int32_t q_abstractitemview_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self QAbstractItemView*
/// @param statusTip const char*
void q_abstractitemview_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractItemView*
const char* q_abstractitemview_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self QAbstractItemView*
/// @param whatsThis const char*
void q_abstractitemview_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractItemView*
const char* q_abstractitemview_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractItemView*
const char* q_abstractitemview_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self QAbstractItemView*
/// @param name const char*
void q_abstractitemview_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractItemView*
const char* q_abstractitemview_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self QAbstractItemView*
/// @param description const char*
void q_abstractitemview_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self QAbstractItemView*
/// @param direction enum Qt__LayoutDirection
void q_abstractitemview_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self QAbstractItemView*
///
/// @return enum Qt__LayoutDirection
int32_t q_abstractitemview_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self QAbstractItemView*
void q_abstractitemview_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self QAbstractItemView*
/// @param locale QLocale*
void q_abstractitemview_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self QAbstractItemView*
QLocale* q_abstractitemview_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self QAbstractItemView*
void q_abstractitemview_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self QAbstractItemView*
bool q_abstractitemview_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self QAbstractItemView*
bool q_abstractitemview_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QAbstractItemView*
void q_abstractitemview_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self QAbstractItemView*
bool q_abstractitemview_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self QAbstractItemView*
void q_abstractitemview_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self QAbstractItemView*
void q_abstractitemview_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self QAbstractItemView*
/// @param reason enum Qt__FocusReason
void q_abstractitemview_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self QAbstractItemView*
///
/// @return enum Qt__FocusPolicy
int32_t q_abstractitemview_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self QAbstractItemView*
/// @param policy enum Qt__FocusPolicy
void q_abstractitemview_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self QAbstractItemView*
bool q_abstractitemview_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void q_abstractitemview_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self QAbstractItemView*
/// @param focusProxy QWidget*
void q_abstractitemview_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self QAbstractItemView*
QWidget* q_abstractitemview_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self QAbstractItemView*
///
/// @return enum Qt__ContextMenuPolicy
int32_t q_abstractitemview_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self QAbstractItemView*
/// @param policy enum Qt__ContextMenuPolicy
void q_abstractitemview_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QAbstractItemView*
void q_abstractitemview_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self QAbstractItemView*
/// @param param1 QCursor*
void q_abstractitemview_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self QAbstractItemView*
void q_abstractitemview_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self QAbstractItemView*
void q_abstractitemview_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self QAbstractItemView*
void q_abstractitemview_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QAbstractItemView*
/// @param key QKeySequence*
int32_t q_abstractitemview_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self QAbstractItemView*
/// @param id int
void q_abstractitemview_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QAbstractItemView*
/// @param id int
void q_abstractitemview_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QAbstractItemView*
/// @param id int
void q_abstractitemview_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* q_abstractitemview_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* q_abstractitemview_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self QAbstractItemView*
bool q_abstractitemview_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self QAbstractItemView*
/// @param enable bool
void q_abstractitemview_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self QAbstractItemView*
QGraphicsProxyWidget* q_abstractitemview_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QAbstractItemView*
void q_abstractitemview_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QAbstractItemView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_abstractitemview_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QAbstractItemView*
/// @param param1 QRect*
void q_abstractitemview_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self QAbstractItemView*
/// @param param1 QRegion*
void q_abstractitemview_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QAbstractItemView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_abstractitemview_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QAbstractItemView*
/// @param param1 QRect*
void q_abstractitemview_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self QAbstractItemView*
/// @param param1 QRegion*
void q_abstractitemview_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self QAbstractItemView*
/// @param hidden bool
void q_abstractitemview_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self QAbstractItemView*
void q_abstractitemview_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self QAbstractItemView*
void q_abstractitemview_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self QAbstractItemView*
void q_abstractitemview_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self QAbstractItemView*
void q_abstractitemview_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self QAbstractItemView*
void q_abstractitemview_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self QAbstractItemView*
void q_abstractitemview_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self QAbstractItemView*
bool q_abstractitemview_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self QAbstractItemView*
void q_abstractitemview_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self QAbstractItemView*
void q_abstractitemview_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self QAbstractItemView*
/// @param param1 QWidget*
void q_abstractitemview_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QAbstractItemView*
/// @param x int
/// @param y int
void q_abstractitemview_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self QAbstractItemView*
/// @param param1 QPoint*
void q_abstractitemview_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QAbstractItemView*
/// @param w int
/// @param h int
void q_abstractitemview_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self QAbstractItemView*
/// @param param1 QSize*
void q_abstractitemview_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QAbstractItemView*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void q_abstractitemview_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self QAbstractItemView*
/// @param geometry QRect*
void q_abstractitemview_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractItemView*
char* q_abstractitemview_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self QAbstractItemView*
/// @param geometry const char*
bool q_abstractitemview_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self QAbstractItemView*
void q_abstractitemview_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self QAbstractItemView*
bool q_abstractitemview_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self QAbstractItemView*
/// @param param1 QWidget*
bool q_abstractitemview_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self QAbstractItemView*
bool q_abstractitemview_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self QAbstractItemView*
bool q_abstractitemview_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self QAbstractItemView*
bool q_abstractitemview_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self QAbstractItemView*
bool q_abstractitemview_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self QAbstractItemView*
///
/// @return flag of enum Qt__WindowState
int32_t q_abstractitemview_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self QAbstractItemView*
/// @param state flag of enum Qt__WindowState
void q_abstractitemview_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self QAbstractItemView*
/// @param state flag of enum Qt__WindowState
void q_abstractitemview_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self QAbstractItemView*
QSizePolicy* q_abstractitemview_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QAbstractItemView*
/// @param sizePolicy QSizePolicy*
void q_abstractitemview_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self QAbstractItemView*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void q_abstractitemview_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self QAbstractItemView*
QRegion* q_abstractitemview_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QAbstractItemView*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void q_abstractitemview_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self QAbstractItemView*
/// @param margins QMargins*
void q_abstractitemview_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self QAbstractItemView*
QMargins* q_abstractitemview_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self QAbstractItemView*
QRect* q_abstractitemview_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self QAbstractItemView*
QLayout* q_abstractitemview_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self QAbstractItemView*
/// @param layout QLayout*
void q_abstractitemview_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self QAbstractItemView*
void q_abstractitemview_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QAbstractItemView*
/// @param parent QWidget*
void q_abstractitemview_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self QAbstractItemView*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void q_abstractitemview_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QAbstractItemView*
/// @param dx int
/// @param dy int
void q_abstractitemview_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self QAbstractItemView*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void q_abstractitemview_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self QAbstractItemView*
QWidget* q_abstractitemview_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self QAbstractItemView*
QWidget* q_abstractitemview_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self QAbstractItemView*
QWidget* q_abstractitemview_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self QAbstractItemView*
bool q_abstractitemview_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self QAbstractItemView*
/// @param on bool
void q_abstractitemview_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QAbstractItemView*
/// @param action QAction*
void q_abstractitemview_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self QAbstractItemView*
/// @param actions libqt_list /* of QAction* */
void q_abstractitemview_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self QAbstractItemView*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void q_abstractitemview_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self QAbstractItemView*
/// @param before QAction*
/// @param action QAction*
void q_abstractitemview_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self QAbstractItemView*
/// @param action QAction*
void q_abstractitemview_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self QAbstractItemView*
libqt_list /* of QAction* */ q_abstractitemview_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QAbstractItemView*
/// @param text const char*
QAction* q_abstractitemview_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QAbstractItemView*
/// @param icon QIcon*
/// @param text const char*
QAction* q_abstractitemview_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QAbstractItemView*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* q_abstractitemview_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self QAbstractItemView*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* q_abstractitemview_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self QAbstractItemView*
QWidget* q_abstractitemview_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self QAbstractItemView*
/// @param typeVal flag of enum Qt__WindowType
void q_abstractitemview_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self QAbstractItemView*
///
/// @return flag of enum Qt__WindowType
int64_t q_abstractitemview_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QAbstractItemView*
/// @param param1 enum Qt__WindowType
void q_abstractitemview_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self QAbstractItemView*
/// @param typeVal flag of enum Qt__WindowType
void q_abstractitemview_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self QAbstractItemView*
///
/// @return enum Qt__WindowType
int64_t q_abstractitemview_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* q_abstractitemview_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QAbstractItemView*
/// @param x int
/// @param y int
QWidget* q_abstractitemview_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QAbstractItemView*
/// @param p QPoint*
QWidget* q_abstractitemview_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self QAbstractItemView*
/// @param p QPointF*
QWidget* q_abstractitemview_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QAbstractItemView*
/// @param param1 enum Qt__WidgetAttribute
void q_abstractitemview_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self QAbstractItemView*
/// @param param1 enum Qt__WidgetAttribute
bool q_abstractitemview_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self QAbstractItemView*
void q_abstractitemview_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self QAbstractItemView*
/// @param child QWidget*
bool q_abstractitemview_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self QAbstractItemView*
bool q_abstractitemview_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self QAbstractItemView*
/// @param enabled bool
void q_abstractitemview_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self QAbstractItemView*
QBackingStore* q_abstractitemview_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self QAbstractItemView*
QWindow* q_abstractitemview_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self QAbstractItemView*
QScreen* q_abstractitemview_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self QAbstractItemView*
/// @param screen QScreen*
void q_abstractitemview_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* q_abstractitemview_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QAbstractItemView*
/// @param title const char*
void q_abstractitemview_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, const char* title)
void q_abstractitemview_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QAbstractItemView*
/// @param icon QIcon*
void q_abstractitemview_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QIcon* icon)
void q_abstractitemview_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QAbstractItemView*
/// @param iconText const char*
void q_abstractitemview_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, const char* iconText)
void q_abstractitemview_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QAbstractItemView*
/// @param pos QPoint*
void q_abstractitemview_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QPoint* pos)
void q_abstractitemview_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self QAbstractItemView*
///
/// @return flag of enum Qt__InputMethodHint
int64_t q_abstractitemview_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self QAbstractItemView*
/// @param hints flag of enum Qt__InputMethodHint
void q_abstractitemview_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QAbstractItemView*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void q_abstractitemview_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QAbstractItemView*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void q_abstractitemview_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QAbstractItemView*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void q_abstractitemview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QAbstractItemView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void q_abstractitemview_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QAbstractItemView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void q_abstractitemview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self QAbstractItemView*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void q_abstractitemview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self QAbstractItemView*
/// @param rectangle QRect*
QPixmap* q_abstractitemview_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self QAbstractItemView*
/// @param typeVal enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void q_abstractitemview_grab_gesture2(void* self, int64_t typeVal, int32_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self QAbstractItemView*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t q_abstractitemview_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self QAbstractItemView*
/// @param id int
/// @param enable bool
void q_abstractitemview_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self QAbstractItemView*
/// @param id int
/// @param enable bool
void q_abstractitemview_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self QAbstractItemView*
/// @param param1 enum Qt__WindowType
/// @param on bool
void q_abstractitemview_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self QAbstractItemView*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void q_abstractitemview_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* q_abstractitemview_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* q_abstractitemview_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractItemView*
const char* q_abstractitemview_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QAbstractItemView*
/// @param name char*
void q_abstractitemview_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QAbstractItemView*
bool q_abstractitemview_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QAbstractItemView*
bool q_abstractitemview_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QAbstractItemView*
bool q_abstractitemview_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QAbstractItemView*
bool q_abstractitemview_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QAbstractItemView*
/// @param b bool
bool q_abstractitemview_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QAbstractItemView*
QThread* q_abstractitemview_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstractItemView*
/// @param thread QThread*
bool q_abstractitemview_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractItemView*
/// @param interval int
int32_t q_abstractitemview_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractItemView*
/// @param id int
void q_abstractitemview_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QAbstractItemView*
/// @param id enum Qt__TimerId
void q_abstractitemview_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QAbstractItemView*
libqt_list /* of QObject* */ q_abstractitemview_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QAbstractItemView*
/// @param filterObj QObject*
void q_abstractitemview_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QAbstractItemView*
/// @param obj QObject*
void q_abstractitemview_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_abstractitemview_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAbstractItemView*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_abstractitemview_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_abstractitemview_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_abstractitemview_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QAbstractItemView*
void q_abstractitemview_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QAbstractItemView*
void q_abstractitemview_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QAbstractItemView*
/// @param name const char*
/// @param value QVariant*
bool q_abstractitemview_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QAbstractItemView*
/// @param name const char*
QVariant* q_abstractitemview_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QAbstractItemView*
const char** q_abstractitemview_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractItemView*
QBindingStorage* q_abstractitemview_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QAbstractItemView*
const QBindingStorage* q_abstractitemview_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractItemView*
void q_abstractitemview_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self)
void q_abstractitemview_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QAbstractItemView*
QObject* q_abstractitemview_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QAbstractItemView*
/// @param classname const char*
bool q_abstractitemview_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QAbstractItemView*
void q_abstractitemview_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QAbstractItemView*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_abstractitemview_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QAbstractItemView*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_abstractitemview_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_abstractitemview_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QAbstractItemView*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_abstractitemview_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractItemView*
/// @param param1 QObject*
void q_abstractitemview_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QObject* param1)
void q_abstractitemview_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QAbstractItemView*
bool q_abstractitemview_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QAbstractItemView*
int32_t q_abstractitemview_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QAbstractItemView*
int32_t q_abstractitemview_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QAbstractItemView*
int32_t q_abstractitemview_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QAbstractItemView*
int32_t q_abstractitemview_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QAbstractItemView*
int32_t q_abstractitemview_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QAbstractItemView*
int32_t q_abstractitemview_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QAbstractItemView*
double q_abstractitemview_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QAbstractItemView*
double q_abstractitemview_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QAbstractItemView*
int32_t q_abstractitemview_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QAbstractItemView*
int32_t q_abstractitemview_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_abstractitemview_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t q_abstractitemview_encode_metric_f(int32_t metric, double value);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
QSize* q_abstractitemview_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
QSize* q_abstractitemview_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback QSize* func()
void q_abstractitemview_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
QSize* q_abstractitemview_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
QSize* q_abstractitemview_qbase_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback QSize* func()
void q_abstractitemview_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
/// @param viewport QWidget*
void q_abstractitemview_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param viewport QWidget*
void q_abstractitemview_qbase_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QWidget* viewport)
void q_abstractitemview_on_setup_viewport(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
/// @param param1 QPaintEvent*
void q_abstractitemview_paint_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param param1 QPaintEvent*
void q_abstractitemview_qbase_paint_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QPaintEvent* param1)
void q_abstractitemview_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
/// @param param1 QWheelEvent*
void q_abstractitemview_wheel_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param param1 QWheelEvent*
void q_abstractitemview_qbase_wheel_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QWheelEvent* param1)
void q_abstractitemview_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
/// @param param1 QContextMenuEvent*
void q_abstractitemview_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param param1 QContextMenuEvent*
void q_abstractitemview_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QContextMenuEvent* param1)
void q_abstractitemview_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollContentsBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
/// @param dx int
/// @param dy int
void q_abstractitemview_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollContentsBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param dx int
/// @param dy int
void q_abstractitemview_qbase_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollContentsBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, int dx, int dy)
void q_abstractitemview_on_scroll_contents_by(void* self, void (*callback)(void*, int, int));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
/// @param param1 QEvent*
void q_abstractitemview_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param param1 QEvent*
void q_abstractitemview_qbase_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QEvent* param1)
void q_abstractitemview_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
/// @param option QStyleOptionFrame*
void q_abstractitemview_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param option QStyleOptionFrame*
void q_abstractitemview_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QStyleOptionFrame* option)
void q_abstractitemview_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
int32_t q_abstractitemview_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
int32_t q_abstractitemview_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback int32_t func()
void q_abstractitemview_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
/// @param visible bool
void q_abstractitemview_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param visible bool
void q_abstractitemview_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, bool visible)
void q_abstractitemview_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
/// @param param1 int
int32_t q_abstractitemview_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param param1 int
int32_t q_abstractitemview_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback int32_t func(QAbstractItemView* self, int param1)
void q_abstractitemview_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
bool q_abstractitemview_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
bool q_abstractitemview_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback bool func()
void q_abstractitemview_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
QPaintEngine* q_abstractitemview_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
QPaintEngine* q_abstractitemview_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback QPaintEngine* func()
void q_abstractitemview_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
/// @param event QKeyEvent*
void q_abstractitemview_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param event QKeyEvent*
void q_abstractitemview_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QKeyEvent* event)
void q_abstractitemview_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
/// @param event QEnterEvent*
void q_abstractitemview_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param event QEnterEvent*
void q_abstractitemview_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QEnterEvent* event)
void q_abstractitemview_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
/// @param event QEvent*
void q_abstractitemview_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param event QEvent*
void q_abstractitemview_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QEvent* event)
void q_abstractitemview_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
/// @param event QMoveEvent*
void q_abstractitemview_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param event QMoveEvent*
void q_abstractitemview_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QMoveEvent* event)
void q_abstractitemview_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
/// @param event QCloseEvent*
void q_abstractitemview_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param event QCloseEvent*
void q_abstractitemview_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QCloseEvent* event)
void q_abstractitemview_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
/// @param event QTabletEvent*
void q_abstractitemview_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param event QTabletEvent*
void q_abstractitemview_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QTabletEvent* event)
void q_abstractitemview_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
/// @param event QActionEvent*
void q_abstractitemview_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param event QActionEvent*
void q_abstractitemview_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QActionEvent* event)
void q_abstractitemview_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
/// @param event QShowEvent*
void q_abstractitemview_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param event QShowEvent*
void q_abstractitemview_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QShowEvent* event)
void q_abstractitemview_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
/// @param event QHideEvent*
void q_abstractitemview_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param event QHideEvent*
void q_abstractitemview_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QHideEvent* event)
void q_abstractitemview_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_abstractitemview_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool q_abstractitemview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback bool func(QAbstractItemView* self, const char* eventType, void* message, intptr_t* result)
void q_abstractitemview_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_abstractitemview_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_abstractitemview_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback int32_t func(QAbstractItemView* self, enum QPaintDevice__PaintDeviceMetric param1)
void q_abstractitemview_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
/// @param painter QPainter*
void q_abstractitemview_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param painter QPainter*
void q_abstractitemview_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QPainter* painter)
void q_abstractitemview_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
/// @param offset QPoint*
QPaintDevice* q_abstractitemview_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param offset QPoint*
QPaintDevice* q_abstractitemview_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback QPaintDevice* func(QAbstractItemView* self, QPoint* offset)
void q_abstractitemview_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
QPainter* q_abstractitemview_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
QPainter* q_abstractitemview_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback QPainter* func()
void q_abstractitemview_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
/// @param event QChildEvent*
void q_abstractitemview_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param event QChildEvent*
void q_abstractitemview_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QChildEvent* event)
void q_abstractitemview_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
/// @param event QEvent*
void q_abstractitemview_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param event QEvent*
void q_abstractitemview_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QEvent* event)
void q_abstractitemview_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
/// @param signal QMetaMethod*
void q_abstractitemview_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param signal QMetaMethod*
void q_abstractitemview_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QMetaMethod* signal)
void q_abstractitemview_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
/// @param signal QMetaMethod*
void q_abstractitemview_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param signal QMetaMethod*
void q_abstractitemview_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QMetaMethod* signal)
void q_abstractitemview_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void q_abstractitemview_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void q_abstractitemview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, int left, int top, int right, int bottom)
void q_abstractitemview_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
QMargins* q_abstractitemview_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
QMargins* q_abstractitemview_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback QMargins* func()
void q_abstractitemview_on_viewport_margins(void* self, QMargins* (*callback)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
/// @param param1 QPainter*
void q_abstractitemview_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param param1 QPainter*
void q_abstractitemview_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, QPainter* param1)
void q_abstractitemview_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
void q_abstractitemview_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
void q_abstractitemview_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback void func()
void q_abstractitemview_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
void q_abstractitemview_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
void q_abstractitemview_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback void func()
void q_abstractitemview_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
void q_abstractitemview_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
void q_abstractitemview_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback void func()
void q_abstractitemview_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
bool q_abstractitemview_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
bool q_abstractitemview_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback bool func()
void q_abstractitemview_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
bool q_abstractitemview_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
bool q_abstractitemview_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback bool func()
void q_abstractitemview_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
QObject* q_abstractitemview_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
QObject* q_abstractitemview_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback QObject* func()
void q_abstractitemview_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
int32_t q_abstractitemview_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
int32_t q_abstractitemview_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback int32_t func()
void q_abstractitemview_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
/// @param signal const char*
int32_t q_abstractitemview_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param signal const char*
int32_t q_abstractitemview_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback int32_t func(QAbstractItemView* self, const char* signal)
void q_abstractitemview_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
/// @param signal QMetaMethod*
bool q_abstractitemview_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param signal QMetaMethod*
bool q_abstractitemview_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback bool func(QAbstractItemView* self, QMetaMethod* signal)
void q_abstractitemview_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QAbstractItemView*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_abstractitemview_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_abstractitemview_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QAbstractItemView*
/// @param callback double func(QAbstractItemView* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void q_abstractitemview_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QAbstractItemView*
/// @param callback void func(QAbstractItemView* self, const char* objectName)
void q_abstractitemview_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dtor.QAbstractItemView)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractItemView*
void q_abstractitemview_delete(void* self);

/// https://doc.qt.io/qt-6/qabstractitemview.html#types

typedef enum {
    QABSTRACTITEMVIEW_SELECTIONMODE_NOSELECTION = 0,
    QABSTRACTITEMVIEW_SELECTIONMODE_SINGLESELECTION = 1,
    QABSTRACTITEMVIEW_SELECTIONMODE_MULTISELECTION = 2,
    QABSTRACTITEMVIEW_SELECTIONMODE_EXTENDEDSELECTION = 3,
    QABSTRACTITEMVIEW_SELECTIONMODE_CONTIGUOUSSELECTION = 4
} QAbstractItemView__SelectionMode;

typedef enum {
    QABSTRACTITEMVIEW_SELECTIONBEHAVIOR_SELECTITEMS = 0,
    QABSTRACTITEMVIEW_SELECTIONBEHAVIOR_SELECTROWS = 1,
    QABSTRACTITEMVIEW_SELECTIONBEHAVIOR_SELECTCOLUMNS = 2
} QAbstractItemView__SelectionBehavior;

typedef enum {
    QABSTRACTITEMVIEW_SCROLLHINT_ENSUREVISIBLE = 0,
    QABSTRACTITEMVIEW_SCROLLHINT_POSITIONATTOP = 1,
    QABSTRACTITEMVIEW_SCROLLHINT_POSITIONATBOTTOM = 2,
    QABSTRACTITEMVIEW_SCROLLHINT_POSITIONATCENTER = 3
} QAbstractItemView__ScrollHint;

typedef enum {
    QABSTRACTITEMVIEW_EDITTRIGGER_NOEDITTRIGGERS = 0,
    QABSTRACTITEMVIEW_EDITTRIGGER_CURRENTCHANGED = 1,
    QABSTRACTITEMVIEW_EDITTRIGGER_DOUBLECLICKED = 2,
    QABSTRACTITEMVIEW_EDITTRIGGER_SELECTEDCLICKED = 4,
    QABSTRACTITEMVIEW_EDITTRIGGER_EDITKEYPRESSED = 8,
    QABSTRACTITEMVIEW_EDITTRIGGER_ANYKEYPRESSED = 16,
    QABSTRACTITEMVIEW_EDITTRIGGER_ALLEDITTRIGGERS = 31
} QAbstractItemView__EditTrigger;

typedef enum {
    QABSTRACTITEMVIEW_SCROLLMODE_SCROLLPERITEM = 0,
    QABSTRACTITEMVIEW_SCROLLMODE_SCROLLPERPIXEL = 1
} QAbstractItemView__ScrollMode;

typedef enum {
    QABSTRACTITEMVIEW_DRAGDROPMODE_NODRAGDROP = 0,
    QABSTRACTITEMVIEW_DRAGDROPMODE_DRAGONLY = 1,
    QABSTRACTITEMVIEW_DRAGDROPMODE_DROPONLY = 2,
    QABSTRACTITEMVIEW_DRAGDROPMODE_DRAGDROP = 3,
    QABSTRACTITEMVIEW_DRAGDROPMODE_INTERNALMOVE = 4
} QAbstractItemView__DragDropMode;

typedef enum {
    QABSTRACTITEMVIEW_CURSORACTION_MOVEUP = 0,
    QABSTRACTITEMVIEW_CURSORACTION_MOVEDOWN = 1,
    QABSTRACTITEMVIEW_CURSORACTION_MOVELEFT = 2,
    QABSTRACTITEMVIEW_CURSORACTION_MOVERIGHT = 3,
    QABSTRACTITEMVIEW_CURSORACTION_MOVEHOME = 4,
    QABSTRACTITEMVIEW_CURSORACTION_MOVEEND = 5,
    QABSTRACTITEMVIEW_CURSORACTION_MOVEPAGEUP = 6,
    QABSTRACTITEMVIEW_CURSORACTION_MOVEPAGEDOWN = 7,
    QABSTRACTITEMVIEW_CURSORACTION_MOVENEXT = 8,
    QABSTRACTITEMVIEW_CURSORACTION_MOVEPREVIOUS = 9
} QAbstractItemView__CursorAction;

typedef enum {
    QABSTRACTITEMVIEW_STATE_NOSTATE = 0,
    QABSTRACTITEMVIEW_STATE_DRAGGINGSTATE = 1,
    QABSTRACTITEMVIEW_STATE_DRAGSELECTINGSTATE = 2,
    QABSTRACTITEMVIEW_STATE_EDITINGSTATE = 3,
    QABSTRACTITEMVIEW_STATE_EXPANDINGSTATE = 4,
    QABSTRACTITEMVIEW_STATE_COLLAPSINGSTATE = 5,
    QABSTRACTITEMVIEW_STATE_ANIMATINGSTATE = 6
} QAbstractItemView__State;

typedef enum {
    QABSTRACTITEMVIEW_DROPINDICATORPOSITION_ONITEM = 0,
    QABSTRACTITEMVIEW_DROPINDICATORPOSITION_ABOVEITEM = 1,
    QABSTRACTITEMVIEW_DROPINDICATORPOSITION_BELOWITEM = 2,
    QABSTRACTITEMVIEW_DROPINDICATORPOSITION_ONVIEWPORT = 3
} QAbstractItemView__DropIndicatorPosition;

#endif
