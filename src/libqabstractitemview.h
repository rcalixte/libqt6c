#pragma once
#ifndef SRCQT6C_LIBQABSTRACTITEMVIEW_H
#define SRCQT6C_LIBQABSTRACTITEMVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqabstractitemdelegate.h"
#include "libqabstractitemmodel.h"
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

/// https://doc.qt.io/qt-6/qabstractitemview.html

/// q_abstractitemview_new constructs a new QAbstractItemView object.
///
/// ``` QWidget* parent ```
QAbstractItemView* q_abstractitemview_new(void* parent);

/// q_abstractitemview_new2 constructs a new QAbstractItemView object.
///
///
QAbstractItemView* q_abstractitemview_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAbstractItemView* self ```
const QMetaObject* q_abstractitemview_meta_object(void* self);

/// ``` QAbstractItemView* self, const char* param1 ```
void* q_abstractitemview_metacast(void* self, const char* param1);

/// ``` QAbstractItemView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractitemview_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, int32_t (*slot)(QAbstractItemView*, enum QMetaObject__Call, int, void*) ```
void q_abstractitemview_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QAbstractItemView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractitemview_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_abstractitemview_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
///
/// ``` QAbstractItemView* self, QAbstractItemModel* model ```
void q_abstractitemview_set_model(void* self, void* model);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QAbstractItemModel*) ```
void q_abstractitemview_on_set_model(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QAbstractItemModel* model ```
void q_abstractitemview_qbase_set_model(void* self, void* model);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#model)
///
/// ``` QAbstractItemView* self ```
QAbstractItemModel* q_abstractitemview_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
///
/// ``` QAbstractItemView* self, QItemSelectionModel* selectionModel ```
void q_abstractitemview_set_selection_model(void* self, void* selectionModel);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QItemSelectionModel*) ```
void q_abstractitemview_on_set_selection_model(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QItemSelectionModel* selectionModel ```
void q_abstractitemview_qbase_set_selection_model(void* self, void* selectionModel);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
///
/// ``` QAbstractItemView* self ```
QItemSelectionModel* q_abstractitemview_selection_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
///
/// ``` QAbstractItemView* self, QAbstractItemDelegate* delegate ```
void q_abstractitemview_set_item_delegate(void* self, void* delegate);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QAbstractItemView* self ```
QAbstractItemDelegate* q_abstractitemview_item_delegate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
///
/// ``` QAbstractItemView* self, enum QAbstractItemView__SelectionMode mode ```
void q_abstractitemview_set_selection_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_selection_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
///
/// ``` QAbstractItemView* self, enum QAbstractItemView__SelectionBehavior behavior ```
void q_abstractitemview_set_selection_behavior(void* self, int64_t behavior);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_selection_behavior(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
///
/// ``` QAbstractItemView* self ```
QModelIndex* q_abstractitemview_current_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
///
/// ``` QAbstractItemView* self ```
QModelIndex* q_abstractitemview_root_index(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
///
/// ``` QAbstractItemView* self, int triggers ```
void q_abstractitemview_set_edit_triggers(void* self, int64_t triggers);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_edit_triggers(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
///
/// ``` QAbstractItemView* self, enum QAbstractItemView__ScrollMode mode ```
void q_abstractitemview_set_vertical_scroll_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_vertical_scroll_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_reset_vertical_scroll_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
///
/// ``` QAbstractItemView* self, enum QAbstractItemView__ScrollMode mode ```
void q_abstractitemview_set_horizontal_scroll_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_horizontal_scroll_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_reset_horizontal_scroll_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
///
/// ``` QAbstractItemView* self, bool enable ```
void q_abstractitemview_set_auto_scroll(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_has_auto_scroll(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
///
/// ``` QAbstractItemView* self, int margin ```
void q_abstractitemview_set_auto_scroll_margin(void* self, int margin);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_auto_scroll_margin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
///
/// ``` QAbstractItemView* self, bool enable ```
void q_abstractitemview_set_tab_key_navigation(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_tab_key_navigation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
///
/// ``` QAbstractItemView* self, bool enable ```
void q_abstractitemview_set_drop_indicator_shown(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_show_drop_indicator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
///
/// ``` QAbstractItemView* self, bool enable ```
void q_abstractitemview_set_drag_enabled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_drag_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
///
/// ``` QAbstractItemView* self, bool overwrite ```
void q_abstractitemview_set_drag_drop_overwrite_mode(void* self, bool overwrite);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_drag_drop_overwrite_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
///
/// ``` QAbstractItemView* self, enum QAbstractItemView__DragDropMode behavior ```
void q_abstractitemview_set_drag_drop_mode(void* self, int64_t behavior);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_drag_drop_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
///
/// ``` QAbstractItemView* self, enum Qt__DropAction dropAction ```
void q_abstractitemview_set_default_drop_action(void* self, int64_t dropAction);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_default_drop_action(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
///
/// ``` QAbstractItemView* self, bool enable ```
void q_abstractitemview_set_alternating_row_colors(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_alternating_row_colors(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
///
/// ``` QAbstractItemView* self, QSize* size ```
void q_abstractitemview_set_icon_size(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
///
/// ``` QAbstractItemView* self ```
QSize* q_abstractitemview_icon_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
///
/// ``` QAbstractItemView* self, enum Qt__TextElideMode mode ```
void q_abstractitemview_set_text_elide_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_text_elide_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// ``` QAbstractItemView* self, const char* search ```
void q_abstractitemview_keyboard_search(void* self, const char* search);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, const char*) ```
void q_abstractitemview_on_keyboard_search(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, const char* search ```
void q_abstractitemview_qbase_keyboard_search(void* self, const char* search);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#visualRect)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
QRect* q_abstractitemview_visual_rect(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#visualRect)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, QRect* (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_abstractitemview_on_visual_rect(void* self, QRect* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#visualRect)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
QRect* q_abstractitemview_qbase_visual_rect(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollTo)
///
/// ``` QAbstractItemView* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_abstractitemview_scroll_to(void* self, void* index, int64_t hint);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollTo)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QModelIndex*, enum QAbstractItemView__ScrollHint) ```
void q_abstractitemview_on_scroll_to(void* self, void (*slot)(void*, void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollTo)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_abstractitemview_qbase_scroll_to(void* self, void* index, int64_t hint);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexAt)
///
/// ``` QAbstractItemView* self, QPoint* point ```
QModelIndex* q_abstractitemview_index_at(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexAt)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, QModelIndex* (*slot)(QAbstractItemView*, QPoint*) ```
void q_abstractitemview_on_index_at(void* self, QModelIndex* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexAt)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QPoint* point ```
QModelIndex* q_abstractitemview_qbase_index_at(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
QSize* q_abstractitemview_size_hint_for_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// ``` QAbstractItemView* self, int row ```
int32_t q_abstractitemview_size_hint_for_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, int32_t (*slot)(QAbstractItemView*, int) ```
void q_abstractitemview_on_size_hint_for_row(void* self, int32_t (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, int row ```
int32_t q_abstractitemview_qbase_size_hint_for_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// ``` QAbstractItemView* self, int column ```
int32_t q_abstractitemview_size_hint_for_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, int32_t (*slot)(QAbstractItemView*, int) ```
void q_abstractitemview_on_size_hint_for_column(void* self, int32_t (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, int column ```
int32_t q_abstractitemview_qbase_size_hint_for_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#openPersistentEditor)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
void q_abstractitemview_open_persistent_editor(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closePersistentEditor)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
void q_abstractitemview_close_persistent_editor(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#isPersistentEditorOpen)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
bool q_abstractitemview_is_persistent_editor_open(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
///
/// ``` QAbstractItemView* self, QModelIndex* index, QWidget* widget ```
void q_abstractitemview_set_index_widget(void* self, void* index, void* widget);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
QWidget* q_abstractitemview_index_widget(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
///
/// ``` QAbstractItemView* self, int row, QAbstractItemDelegate* delegate ```
void q_abstractitemview_set_item_delegate_for_row(void* self, int row, void* delegate);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
///
/// ``` QAbstractItemView* self, int row ```
QAbstractItemDelegate* q_abstractitemview_item_delegate_for_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
///
/// ``` QAbstractItemView* self, int column, QAbstractItemDelegate* delegate ```
void q_abstractitemview_set_item_delegate_for_column(void* self, int column, void* delegate);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
///
/// ``` QAbstractItemView* self, int column ```
QAbstractItemDelegate* q_abstractitemview_item_delegate_for_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
QAbstractItemDelegate* q_abstractitemview_item_delegate_with_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
QAbstractItemDelegate* q_abstractitemview_item_delegate_for_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, QAbstractItemDelegate* (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_abstractitemview_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
QAbstractItemDelegate* q_abstractitemview_qbase_item_delegate_for_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// ``` QAbstractItemView* self, enum Qt__InputMethodQuery query ```
QVariant* q_abstractitemview_input_method_query(void* self, int64_t query);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, QVariant* (*slot)(QAbstractItemView*, enum Qt__InputMethodQuery) ```
void q_abstractitemview_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, enum Qt__InputMethodQuery query ```
QVariant* q_abstractitemview_qbase_input_method_query(void* self, int64_t query);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_reset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)() ```
void q_abstractitemview_on_reset(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_qbase_reset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setRootIndex)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
void q_abstractitemview_set_root_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setRootIndex)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_abstractitemview_on_set_root_index(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setRootIndex)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
void q_abstractitemview_qbase_set_root_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doItemsLayout)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_do_items_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doItemsLayout)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)() ```
void q_abstractitemview_on_do_items_layout(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doItemsLayout)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_qbase_do_items_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_select_all(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)() ```
void q_abstractitemview_on_select_all(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_qbase_select_all(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
void q_abstractitemview_edit(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_clear_selection(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
void q_abstractitemview_set_current_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_scroll_to_top(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_scroll_to_bottom(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#update)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
void q_abstractitemview_update(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
///
/// ``` QAbstractItemView* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles ```
void q_abstractitemview_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QModelIndex*, QModelIndex*, libqt_list /* of int */ roles ) ```
void q_abstractitemview_on_data_changed(void* self, void (*slot)(void*, void*, void*, libqt_list));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QModelIndex* topLeft, QModelIndex* bottomRight, libqt_list /* of int */ roles ```
void q_abstractitemview_qbase_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsInserted)
///
/// ``` QAbstractItemView* self, QModelIndex* parent, int start, int end ```
void q_abstractitemview_rows_inserted(void* self, void* parent, int start, int end);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsInserted)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QModelIndex*, int, int) ```
void q_abstractitemview_on_rows_inserted(void* self, void (*slot)(void*, void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsInserted)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QModelIndex* parent, int start, int end ```
void q_abstractitemview_qbase_rows_inserted(void* self, void* parent, int start, int end);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
///
/// ``` QAbstractItemView* self, QModelIndex* parent, int start, int end ```
void q_abstractitemview_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QModelIndex*, int, int) ```
void q_abstractitemview_on_rows_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QModelIndex* parent, int start, int end ```
void q_abstractitemview_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionChanged)
///
/// ``` QAbstractItemView* self, QItemSelection* selected, QItemSelection* deselected ```
void q_abstractitemview_selection_changed(void* self, void* selected, void* deselected);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionChanged)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QItemSelection*, QItemSelection*) ```
void q_abstractitemview_on_selection_changed(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionChanged)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QItemSelection* selected, QItemSelection* deselected ```
void q_abstractitemview_qbase_selection_changed(void* self, void* selected, void* deselected);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentChanged)
///
/// ``` QAbstractItemView* self, QModelIndex* current, QModelIndex* previous ```
void q_abstractitemview_current_changed(void* self, void* current, void* previous);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentChanged)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QModelIndex*, QModelIndex*) ```
void q_abstractitemview_on_current_changed(void* self, void (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentChanged)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QModelIndex* current, QModelIndex* previous ```
void q_abstractitemview_qbase_current_changed(void* self, void* current, void* previous);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_update_editor_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)() ```
void q_abstractitemview_on_update_editor_data(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_qbase_update_editor_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_update_editor_geometries(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)() ```
void q_abstractitemview_on_update_editor_geometries(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_qbase_update_editor_geometries(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateGeometries)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_update_geometries(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateGeometries)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)() ```
void q_abstractitemview_on_update_geometries(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateGeometries)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_qbase_update_geometries(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// ``` QAbstractItemView* self, int action ```
void q_abstractitemview_vertical_scrollbar_action(void* self, int action);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, int) ```
void q_abstractitemview_on_vertical_scrollbar_action(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, int action ```
void q_abstractitemview_qbase_vertical_scrollbar_action(void* self, int action);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// ``` QAbstractItemView* self, int action ```
void q_abstractitemview_horizontal_scrollbar_action(void* self, int action);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, int) ```
void q_abstractitemview_on_horizontal_scrollbar_action(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, int action ```
void q_abstractitemview_qbase_horizontal_scrollbar_action(void* self, int action);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// ``` QAbstractItemView* self, int value ```
void q_abstractitemview_vertical_scrollbar_value_changed(void* self, int value);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, int) ```
void q_abstractitemview_on_vertical_scrollbar_value_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, int value ```
void q_abstractitemview_qbase_vertical_scrollbar_value_changed(void* self, int value);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// ``` QAbstractItemView* self, int value ```
void q_abstractitemview_horizontal_scrollbar_value_changed(void* self, int value);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, int) ```
void q_abstractitemview_on_horizontal_scrollbar_value_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, int value ```
void q_abstractitemview_qbase_horizontal_scrollbar_value_changed(void* self, int value);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// ``` QAbstractItemView* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_abstractitemview_close_editor(void* self, void* editor, int64_t hint);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QWidget*, enum QAbstractItemDelegate__EndEditHint) ```
void q_abstractitemview_on_close_editor(void* self, void (*slot)(void*, void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_abstractitemview_qbase_close_editor(void* self, void* editor, int64_t hint);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// ``` QAbstractItemView* self, QWidget* editor ```
void q_abstractitemview_commit_data(void* self, void* editor);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QWidget*) ```
void q_abstractitemview_on_commit_data(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QWidget* editor ```
void q_abstractitemview_qbase_commit_data(void* self, void* editor);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// ``` QAbstractItemView* self, QObject* editor ```
void q_abstractitemview_editor_destroyed(void* self, void* editor);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QObject*) ```
void q_abstractitemview_on_editor_destroyed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QObject* editor ```
void q_abstractitemview_qbase_editor_destroyed(void* self, void* editor);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
void q_abstractitemview_pressed(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_abstractitemview_on_pressed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
void q_abstractitemview_clicked(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_abstractitemview_on_clicked(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
void q_abstractitemview_double_clicked(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_abstractitemview_on_double_clicked(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
void q_abstractitemview_activated(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_abstractitemview_on_activated(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
void q_abstractitemview_entered(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_abstractitemview_on_entered(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_viewport_entered(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*) ```
void q_abstractitemview_on_viewport_entered(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// ``` QAbstractItemView* self, QSize* size ```
void q_abstractitemview_icon_size_changed(void* self, void* size);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QSize*) ```
void q_abstractitemview_on_icon_size_changed(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#moveCursor)
///
/// ``` QAbstractItemView* self, enum QAbstractItemView__CursorAction cursorAction, int modifiers ```
QModelIndex* q_abstractitemview_move_cursor(void* self, int64_t cursorAction, int64_t modifiers);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#moveCursor)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, QModelIndex* (*slot)(QAbstractItemView*, enum QAbstractItemView__CursorAction, int) ```
void q_abstractitemview_on_move_cursor(void* self, QModelIndex* (*slot)(void*, int64_t, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#moveCursor)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, enum QAbstractItemView__CursorAction cursorAction, int modifiers ```
QModelIndex* q_abstractitemview_qbase_move_cursor(void* self, int64_t cursorAction, int64_t modifiers);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalOffset)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_horizontal_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalOffset)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, int32_t (*slot)() ```
void q_abstractitemview_on_horizontal_offset(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalOffset)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_qbase_horizontal_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalOffset)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_vertical_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalOffset)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, int32_t (*slot)() ```
void q_abstractitemview_on_vertical_offset(void* self, int32_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalOffset)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_qbase_vertical_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#isIndexHidden)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
bool q_abstractitemview_is_index_hidden(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#isIndexHidden)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, bool (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_abstractitemview_on_is_index_hidden(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#isIndexHidden)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
bool q_abstractitemview_qbase_is_index_hidden(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelection)
///
/// ``` QAbstractItemView* self, QRect* rect, int command ```
void q_abstractitemview_set_selection(void* self, void* rect, int64_t command);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelection)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QRect*, int) ```
void q_abstractitemview_on_set_selection(void* self, void (*slot)(void*, void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelection)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QRect* rect, int command ```
void q_abstractitemview_qbase_set_selection(void* self, void* rect, int64_t command);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#visualRegionForSelection)
///
/// ``` QAbstractItemView* self, QItemSelection* selection ```
QRegion* q_abstractitemview_visual_region_for_selection(void* self, void* selection);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#visualRegionForSelection)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, QRegion* (*slot)(QAbstractItemView*, QItemSelection*) ```
void q_abstractitemview_on_visual_region_for_selection(void* self, QRegion* (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#visualRegionForSelection)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QItemSelection* selection ```
QRegion* q_abstractitemview_qbase_visual_region_for_selection(void* self, void* selection);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectedIndexes)
///
/// ``` QAbstractItemView* self ```
libqt_list /* of QModelIndex* */ q_abstractitemview_selected_indexes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectedIndexes)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_abstractitemview_on_selected_indexes(void* self, libqt_list /* of QModelIndex* */ (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectedIndexes)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
libqt_list /* of QModelIndex* */ q_abstractitemview_qbase_selected_indexes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// ``` QAbstractItemView* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_abstractitemview_edit2(void* self, void* index, int64_t trigger, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, bool (*slot)(QAbstractItemView*, QModelIndex*, enum QAbstractItemView__EditTrigger, QEvent*) ```
void q_abstractitemview_on_edit2(void* self, bool (*slot)(void*, void*, int64_t, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_abstractitemview_qbase_edit2(void* self, void* index, int64_t trigger, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// ``` QAbstractItemView* self, QModelIndex* index, QEvent* event ```
int64_t q_abstractitemview_selection_command(void* self, void* index, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, int64_t (*slot)(QAbstractItemView*, QModelIndex*, QEvent*) ```
void q_abstractitemview_on_selection_command(void* self, int64_t (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QModelIndex* index, QEvent* event ```
int64_t q_abstractitemview_qbase_selection_command(void* self, void* index, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// ``` QAbstractItemView* self, int supportedActions ```
void q_abstractitemview_start_drag(void* self, int64_t supportedActions);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, int) ```
void q_abstractitemview_on_start_drag(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, int supportedActions ```
void q_abstractitemview_qbase_start_drag(void* self, int64_t supportedActions);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
///
/// ``` QAbstractItemView* self, QStyleOptionViewItem* option ```
void q_abstractitemview_init_view_item_option(void* self, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QStyleOptionViewItem*) ```
void q_abstractitemview_on_init_view_item_option(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QStyleOptionViewItem* option ```
void q_abstractitemview_qbase_init_view_item_option(void* self, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, int64_t (*slot)() ```
void q_abstractitemview_on_state(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_qbase_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// ``` QAbstractItemView* self, enum QAbstractItemView__State state ```
void q_abstractitemview_set_state(void* self, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, enum QAbstractItemView__State) ```
void q_abstractitemview_on_set_state(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, enum QAbstractItemView__State state ```
void q_abstractitemview_qbase_set_state(void* self, int64_t state);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_schedule_delayed_items_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)() ```
void q_abstractitemview_on_schedule_delayed_items_layout(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_qbase_schedule_delayed_items_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_execute_delayed_items_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)() ```
void q_abstractitemview_on_execute_delayed_items_layout(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_qbase_execute_delayed_items_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// ``` QAbstractItemView* self, QRegion* region ```
void q_abstractitemview_set_dirty_region(void* self, void* region);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QRegion*) ```
void q_abstractitemview_on_set_dirty_region(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QRegion* region ```
void q_abstractitemview_qbase_set_dirty_region(void* self, void* region);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// ``` QAbstractItemView* self, int dx, int dy ```
void q_abstractitemview_scroll_dirty_region(void* self, int dx, int dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, int, int) ```
void q_abstractitemview_on_scroll_dirty_region(void* self, void (*slot)(void*, int, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, int dx, int dy ```
void q_abstractitemview_qbase_scroll_dirty_region(void* self, int dx, int dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// ``` QAbstractItemView* self ```
QPoint* q_abstractitemview_dirty_region_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, QPoint* (*slot)() ```
void q_abstractitemview_on_dirty_region_offset(void* self, QPoint* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
QPoint* q_abstractitemview_qbase_dirty_region_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_start_auto_scroll(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)() ```
void q_abstractitemview_on_start_auto_scroll(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_qbase_start_auto_scroll(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_stop_auto_scroll(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)() ```
void q_abstractitemview_on_stop_auto_scroll(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_qbase_stop_auto_scroll(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_do_auto_scroll(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)() ```
void q_abstractitemview_on_do_auto_scroll(void* self, void (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_qbase_do_auto_scroll(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// ``` QAbstractItemView* self, bool next ```
bool q_abstractitemview_focus_next_prev_child(void* self, bool next);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, bool (*slot)(QAbstractItemView*, bool) ```
void q_abstractitemview_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, bool next ```
bool q_abstractitemview_qbase_focus_next_prev_child(void* self, bool next);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#event)
///
/// ``` QAbstractItemView* self, QEvent* event ```
bool q_abstractitemview_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#event)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, bool (*slot)(QAbstractItemView*, QEvent*) ```
void q_abstractitemview_on_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#event)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QEvent* event ```
bool q_abstractitemview_qbase_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// ``` QAbstractItemView* self, QEvent* event ```
bool q_abstractitemview_viewport_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, bool (*slot)(QAbstractItemView*, QEvent*) ```
void q_abstractitemview_on_viewport_event(void* self, bool (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QEvent* event ```
bool q_abstractitemview_qbase_viewport_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// ``` QAbstractItemView* self, QMouseEvent* event ```
void q_abstractitemview_mouse_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QMouseEvent*) ```
void q_abstractitemview_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QMouseEvent* event ```
void q_abstractitemview_qbase_mouse_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
///
/// ``` QAbstractItemView* self, QMouseEvent* event ```
void q_abstractitemview_mouse_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QMouseEvent*) ```
void q_abstractitemview_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QMouseEvent* event ```
void q_abstractitemview_qbase_mouse_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
///
/// ``` QAbstractItemView* self, QMouseEvent* event ```
void q_abstractitemview_mouse_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QMouseEvent*) ```
void q_abstractitemview_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QMouseEvent* event ```
void q_abstractitemview_qbase_mouse_release_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// ``` QAbstractItemView* self, QMouseEvent* event ```
void q_abstractitemview_mouse_double_click_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QMouseEvent*) ```
void q_abstractitemview_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QMouseEvent* event ```
void q_abstractitemview_qbase_mouse_double_click_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// ``` QAbstractItemView* self, QDragEnterEvent* event ```
void q_abstractitemview_drag_enter_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QDragEnterEvent*) ```
void q_abstractitemview_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QDragEnterEvent* event ```
void q_abstractitemview_qbase_drag_enter_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
///
/// ``` QAbstractItemView* self, QDragMoveEvent* event ```
void q_abstractitemview_drag_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QDragMoveEvent*) ```
void q_abstractitemview_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QDragMoveEvent* event ```
void q_abstractitemview_qbase_drag_move_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// ``` QAbstractItemView* self, QDragLeaveEvent* event ```
void q_abstractitemview_drag_leave_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QDragLeaveEvent*) ```
void q_abstractitemview_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QDragLeaveEvent* event ```
void q_abstractitemview_qbase_drag_leave_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
///
/// ``` QAbstractItemView* self, QDropEvent* event ```
void q_abstractitemview_drop_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QDropEvent*) ```
void q_abstractitemview_on_drop_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QDropEvent* event ```
void q_abstractitemview_qbase_drop_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// ``` QAbstractItemView* self, QFocusEvent* event ```
void q_abstractitemview_focus_in_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QFocusEvent*) ```
void q_abstractitemview_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QFocusEvent* event ```
void q_abstractitemview_qbase_focus_in_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// ``` QAbstractItemView* self, QFocusEvent* event ```
void q_abstractitemview_focus_out_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QFocusEvent*) ```
void q_abstractitemview_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QFocusEvent* event ```
void q_abstractitemview_qbase_focus_out_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// ``` QAbstractItemView* self, QKeyEvent* event ```
void q_abstractitemview_key_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QKeyEvent*) ```
void q_abstractitemview_on_key_press_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QKeyEvent* event ```
void q_abstractitemview_qbase_key_press_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// ``` QAbstractItemView* self, QResizeEvent* event ```
void q_abstractitemview_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QResizeEvent*) ```
void q_abstractitemview_on_resize_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QResizeEvent* event ```
void q_abstractitemview_qbase_resize_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#timerEvent)
///
/// ``` QAbstractItemView* self, QTimerEvent* event ```
void q_abstractitemview_timer_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#timerEvent)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QTimerEvent*) ```
void q_abstractitemview_on_timer_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#timerEvent)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QTimerEvent* event ```
void q_abstractitemview_qbase_timer_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// ``` QAbstractItemView* self, QInputMethodEvent* event ```
void q_abstractitemview_input_method_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QInputMethodEvent*) ```
void q_abstractitemview_on_input_method_event(void* self, void (*slot)(void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QInputMethodEvent* event ```
void q_abstractitemview_qbase_input_method_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// ``` QAbstractItemView* self, QObject* object, QEvent* event ```
bool q_abstractitemview_event_filter(void* self, void* object, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, bool (*slot)(QAbstractItemView*, QObject*, QEvent*) ```
void q_abstractitemview_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self, QObject* object, QEvent* event ```
bool q_abstractitemview_qbase_event_filter(void* self, void* object, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_drop_indicator_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, int64_t (*slot)() ```
void q_abstractitemview_on_drop_indicator_position(void* self, int64_t (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_qbase_drop_indicator_position(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportSizeHint)
///
/// ``` QAbstractItemView* self ```
QSize* q_abstractitemview_viewport_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportSizeHint)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, QSize* (*slot)() ```
void q_abstractitemview_on_viewport_size_hint(void* self, QSize* (*slot)());

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportSizeHint)
///
/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
QSize* q_abstractitemview_qbase_viewport_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_abstractitemview_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_abstractitemview_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// ``` QAbstractItemView* self, enum Qt__ScrollBarPolicy verticalScrollBarPolicy ```
void q_abstractitemview_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// ``` QAbstractItemView* self ```
QScrollBar* q_abstractitemview_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// ``` QAbstractItemView* self, QScrollBar* scrollbar ```
void q_abstractitemview_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// ``` QAbstractItemView* self, enum Qt__ScrollBarPolicy horizontalScrollBarPolicy ```
void q_abstractitemview_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// ``` QAbstractItemView* self ```
QScrollBar* q_abstractitemview_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// ``` QAbstractItemView* self, QScrollBar* scrollbar ```
void q_abstractitemview_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// ``` QAbstractItemView* self ```
QWidget* q_abstractitemview_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// ``` QAbstractItemView* self, QWidget* widget ```
void q_abstractitemview_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// ``` QAbstractItemView* self, QWidget* widget, int alignment ```
void q_abstractitemview_add_scroll_bar_widget(void* self, void* widget, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// ``` QAbstractItemView* self, int alignment ```
libqt_list /* of QWidget* */ q_abstractitemview_scroll_bar_widgets(void* self, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// ``` QAbstractItemView* self ```
QWidget* q_abstractitemview_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// ``` QAbstractItemView* self, QWidget* widget ```
void q_abstractitemview_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// ``` QAbstractItemView* self ```
QSize* q_abstractitemview_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// ``` QAbstractItemView* self, enum QAbstractScrollArea__SizeAdjustPolicy policy ```
void q_abstractitemview_set_size_adjust_policy(void* self, int64_t policy);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_frame_style(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QAbstractItemView* self, int frameStyle ```
void q_abstractitemview_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_frame_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QAbstractItemView* self, enum QFrame__Shape frameShape ```
void q_abstractitemview_set_frame_shape(void* self, int64_t frameShape);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QAbstractItemView* self, enum QFrame__Shadow frameShadow ```
void q_abstractitemview_set_frame_shadow(void* self, int64_t frameShadow);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QAbstractItemView* self, int lineWidth ```
void q_abstractitemview_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QAbstractItemView* self, int midLineWidth ```
void q_abstractitemview_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QAbstractItemView* self ```
QRect* q_abstractitemview_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QAbstractItemView* self, QRect* frameRect ```
void q_abstractitemview_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QAbstractItemView* self ```
uintptr_t q_abstractitemview_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QAbstractItemView* self ```
uintptr_t q_abstractitemview_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QAbstractItemView* self ```
uintptr_t q_abstractitemview_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QAbstractItemView* self ```
QStyle* q_abstractitemview_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QAbstractItemView* self, QStyle* style ```
void q_abstractitemview_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QAbstractItemView* self, enum Qt__WindowModality windowModality ```
void q_abstractitemview_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QAbstractItemView* self, QWidget* param1 ```
bool q_abstractitemview_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QAbstractItemView* self, bool enabled ```
void q_abstractitemview_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QAbstractItemView* self, bool disabled ```
void q_abstractitemview_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QAbstractItemView* self, bool windowModified ```
void q_abstractitemview_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QAbstractItemView* self ```
QRect* q_abstractitemview_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QAbstractItemView* self ```
const QRect* q_abstractitemview_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QAbstractItemView* self ```
QRect* q_abstractitemview_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QAbstractItemView* self ```
QPoint* q_abstractitemview_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QAbstractItemView* self ```
QSize* q_abstractitemview_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QAbstractItemView* self ```
QSize* q_abstractitemview_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QAbstractItemView* self ```
QRect* q_abstractitemview_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QAbstractItemView* self ```
QRect* q_abstractitemview_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QAbstractItemView* self ```
QRegion* q_abstractitemview_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QAbstractItemView* self ```
QSize* q_abstractitemview_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QAbstractItemView* self ```
QSize* q_abstractitemview_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QAbstractItemView* self, QSize* minimumSize ```
void q_abstractitemview_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QAbstractItemView* self, int minw, int minh ```
void q_abstractitemview_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QAbstractItemView* self, QSize* maximumSize ```
void q_abstractitemview_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QAbstractItemView* self, int maxw, int maxh ```
void q_abstractitemview_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QAbstractItemView* self, int minw ```
void q_abstractitemview_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QAbstractItemView* self, int minh ```
void q_abstractitemview_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QAbstractItemView* self, int maxw ```
void q_abstractitemview_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QAbstractItemView* self, int maxh ```
void q_abstractitemview_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QAbstractItemView* self ```
QSize* q_abstractitemview_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QAbstractItemView* self, QSize* sizeIncrement ```
void q_abstractitemview_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QAbstractItemView* self, int w, int h ```
void q_abstractitemview_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QAbstractItemView* self ```
QSize* q_abstractitemview_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QAbstractItemView* self, QSize* baseSize ```
void q_abstractitemview_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QAbstractItemView* self, int basew, int baseh ```
void q_abstractitemview_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QAbstractItemView* self, QSize* fixedSize ```
void q_abstractitemview_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QAbstractItemView* self, int w, int h ```
void q_abstractitemview_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QAbstractItemView* self, int w ```
void q_abstractitemview_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QAbstractItemView* self, int h ```
void q_abstractitemview_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QAbstractItemView* self, QPointF* param1 ```
QPointF* q_abstractitemview_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QAbstractItemView* self, QPoint* param1 ```
QPoint* q_abstractitemview_map_to_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QAbstractItemView* self, QPointF* param1 ```
QPointF* q_abstractitemview_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QAbstractItemView* self, QPoint* param1 ```
QPoint* q_abstractitemview_map_from_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QAbstractItemView* self, QPointF* param1 ```
QPointF* q_abstractitemview_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QAbstractItemView* self, QPoint* param1 ```
QPoint* q_abstractitemview_map_to_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QAbstractItemView* self, QPointF* param1 ```
QPointF* q_abstractitemview_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QAbstractItemView* self, QPoint* param1 ```
QPoint* q_abstractitemview_map_from_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QAbstractItemView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_abstractitemview_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QAbstractItemView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_abstractitemview_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QAbstractItemView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_abstractitemview_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QAbstractItemView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_abstractitemview_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QAbstractItemView* self ```
QWidget* q_abstractitemview_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QAbstractItemView* self ```
QWidget* q_abstractitemview_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QAbstractItemView* self ```
QWidget* q_abstractitemview_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QAbstractItemView* self ```
const QPalette* q_abstractitemview_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QAbstractItemView* self, QPalette* palette ```
void q_abstractitemview_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QAbstractItemView* self, enum QPalette__ColorRole backgroundRole ```
void q_abstractitemview_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QAbstractItemView* self, enum QPalette__ColorRole foregroundRole ```
void q_abstractitemview_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QAbstractItemView* self ```
const QFont* q_abstractitemview_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QAbstractItemView* self, QFont* font ```
void q_abstractitemview_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QAbstractItemView* self ```
QFontMetrics* q_abstractitemview_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QAbstractItemView* self ```
QFontInfo* q_abstractitemview_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QAbstractItemView* self ```
QCursor* q_abstractitemview_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QAbstractItemView* self, QCursor* cursor ```
void q_abstractitemview_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QAbstractItemView* self, bool enable ```
void q_abstractitemview_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QAbstractItemView* self, bool enable ```
void q_abstractitemview_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QAbstractItemView* self, QBitmap* mask ```
void q_abstractitemview_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QAbstractItemView* self, QRegion* mask ```
void q_abstractitemview_set_mask_with_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QAbstractItemView* self ```
QRegion* q_abstractitemview_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractItemView* self, QPaintDevice* target ```
void q_abstractitemview_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractItemView* self, QPainter* painter ```
void q_abstractitemview_render_with_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QAbstractItemView* self ```
QPixmap* q_abstractitemview_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QAbstractItemView* self ```
QGraphicsEffect* q_abstractitemview_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QAbstractItemView* self, QGraphicsEffect* effect ```
void q_abstractitemview_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QAbstractItemView* self, enum Qt__GestureType typeVal ```
void q_abstractitemview_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QAbstractItemView* self, enum Qt__GestureType typeVal ```
void q_abstractitemview_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QAbstractItemView* self, const char* windowTitle ```
void q_abstractitemview_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QAbstractItemView* self, const char* styleSheet ```
void q_abstractitemview_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QAbstractItemView* self ```
const char* q_abstractitemview_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QAbstractItemView* self ```
const char* q_abstractitemview_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QAbstractItemView* self, QIcon* icon ```
void q_abstractitemview_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QAbstractItemView* self ```
QIcon* q_abstractitemview_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QAbstractItemView* self, const char* windowIconText ```
void q_abstractitemview_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QAbstractItemView* self ```
const char* q_abstractitemview_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QAbstractItemView* self, const char* windowRole ```
void q_abstractitemview_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QAbstractItemView* self ```
const char* q_abstractitemview_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QAbstractItemView* self, const char* filePath ```
void q_abstractitemview_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QAbstractItemView* self ```
const char* q_abstractitemview_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QAbstractItemView* self, double level ```
void q_abstractitemview_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QAbstractItemView* self ```
double q_abstractitemview_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QAbstractItemView* self, const char* toolTip ```
void q_abstractitemview_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QAbstractItemView* self ```
const char* q_abstractitemview_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QAbstractItemView* self, int msec ```
void q_abstractitemview_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QAbstractItemView* self, const char* statusTip ```
void q_abstractitemview_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QAbstractItemView* self ```
const char* q_abstractitemview_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QAbstractItemView* self, const char* whatsThis ```
void q_abstractitemview_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QAbstractItemView* self ```
const char* q_abstractitemview_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QAbstractItemView* self ```
const char* q_abstractitemview_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QAbstractItemView* self, const char* name ```
void q_abstractitemview_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QAbstractItemView* self ```
const char* q_abstractitemview_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QAbstractItemView* self, const char* description ```
void q_abstractitemview_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QAbstractItemView* self, enum Qt__LayoutDirection direction ```
void q_abstractitemview_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QAbstractItemView* self, QLocale* locale ```
void q_abstractitemview_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QAbstractItemView* self ```
QLocale* q_abstractitemview_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QAbstractItemView* self, enum Qt__FocusReason reason ```
void q_abstractitemview_set_focus_with_reason(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QAbstractItemView* self, enum Qt__FocusPolicy policy ```
void q_abstractitemview_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_abstractitemview_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QAbstractItemView* self, QWidget* focusProxy ```
void q_abstractitemview_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QAbstractItemView* self ```
QWidget* q_abstractitemview_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QAbstractItemView* self, enum Qt__ContextMenuPolicy policy ```
void q_abstractitemview_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QAbstractItemView* self, QCursor* param1 ```
void q_abstractitemview_grab_mouse_with_q_cursor(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QAbstractItemView* self, QKeySequence* key ```
int32_t q_abstractitemview_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QAbstractItemView* self, int id ```
void q_abstractitemview_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QAbstractItemView* self, int id ```
void q_abstractitemview_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QAbstractItemView* self, int id ```
void q_abstractitemview_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_abstractitemview_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_abstractitemview_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QAbstractItemView* self, bool enable ```
void q_abstractitemview_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QAbstractItemView* self ```
QGraphicsProxyWidget* q_abstractitemview_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QAbstractItemView* self, int x, int y, int w, int h ```
void q_abstractitemview_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QAbstractItemView* self, QRect* param1 ```
void q_abstractitemview_update_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QAbstractItemView* self, QRegion* param1 ```
void q_abstractitemview_update_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QAbstractItemView* self, int x, int y, int w, int h ```
void q_abstractitemview_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QAbstractItemView* self, QRect* param1 ```
void q_abstractitemview_repaint_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QAbstractItemView* self, QRegion* param1 ```
void q_abstractitemview_repaint_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QAbstractItemView* self, bool hidden ```
void q_abstractitemview_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QAbstractItemView* self, QWidget* param1 ```
void q_abstractitemview_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QAbstractItemView* self, int x, int y ```
void q_abstractitemview_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QAbstractItemView* self, QPoint* param1 ```
void q_abstractitemview_move_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QAbstractItemView* self, int w, int h ```
void q_abstractitemview_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QAbstractItemView* self, QSize* param1 ```
void q_abstractitemview_resize_with_q_size(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QAbstractItemView* self, int x, int y, int w, int h ```
void q_abstractitemview_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QAbstractItemView* self, QRect* geometry ```
void q_abstractitemview_set_geometry_with_geometry(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QAbstractItemView* self ```
char* q_abstractitemview_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QAbstractItemView* self, const char* geometry ```
bool q_abstractitemview_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QAbstractItemView* self, QWidget* param1 ```
bool q_abstractitemview_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QAbstractItemView* self, int state ```
void q_abstractitemview_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QAbstractItemView* self, int state ```
void q_abstractitemview_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QAbstractItemView* self ```
QSizePolicy* q_abstractitemview_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QAbstractItemView* self, QSizePolicy* sizePolicy ```
void q_abstractitemview_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QAbstractItemView* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_abstractitemview_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QAbstractItemView* self ```
QRegion* q_abstractitemview_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QAbstractItemView* self, int left, int top, int right, int bottom ```
void q_abstractitemview_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QAbstractItemView* self, QMargins* margins ```
void q_abstractitemview_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QAbstractItemView* self ```
QMargins* q_abstractitemview_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QAbstractItemView* self ```
QRect* q_abstractitemview_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QAbstractItemView* self ```
QLayout* q_abstractitemview_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QAbstractItemView* self, QLayout* layout ```
void q_abstractitemview_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QAbstractItemView* self, QWidget* parent ```
void q_abstractitemview_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QAbstractItemView* self, QWidget* parent, int f ```
void q_abstractitemview_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QAbstractItemView* self, int dx, int dy ```
void q_abstractitemview_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QAbstractItemView* self, int dx, int dy, QRect* param3 ```
void q_abstractitemview_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QAbstractItemView* self ```
QWidget* q_abstractitemview_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QAbstractItemView* self ```
QWidget* q_abstractitemview_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QAbstractItemView* self ```
QWidget* q_abstractitemview_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QAbstractItemView* self, bool on ```
void q_abstractitemview_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QAbstractItemView* self, QAction* action ```
void q_abstractitemview_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QAbstractItemView* self, libqt_list /* of QAction* */ actions ```
void q_abstractitemview_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QAbstractItemView* self, QAction* before, libqt_list /* of QAction* */ actions ```
void q_abstractitemview_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QAbstractItemView* self, QAction* before, QAction* action ```
void q_abstractitemview_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QAbstractItemView* self, QAction* action ```
void q_abstractitemview_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QAbstractItemView* self ```
libqt_list /* of QAction* */ q_abstractitemview_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QAbstractItemView* self, const char* text ```
QAction* q_abstractitemview_add_action_with_text(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QAbstractItemView* self, QIcon* icon, const char* text ```
QAction* q_abstractitemview_add_action2(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QAbstractItemView* self, const char* text, QKeySequence* shortcut ```
QAction* q_abstractitemview_add_action3(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QAbstractItemView* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_abstractitemview_add_action4(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QAbstractItemView* self ```
QWidget* q_abstractitemview_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QAbstractItemView* self, int typeVal ```
void q_abstractitemview_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QAbstractItemView* self, enum Qt__WindowType param1 ```
void q_abstractitemview_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QAbstractItemView* self, int typeVal ```
void q_abstractitemview_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_abstractitemview_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QAbstractItemView* self, int x, int y ```
QWidget* q_abstractitemview_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QAbstractItemView* self, QPoint* p ```
QWidget* q_abstractitemview_child_at_with_q_point(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QAbstractItemView* self, enum Qt__WidgetAttribute param1 ```
void q_abstractitemview_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QAbstractItemView* self, enum Qt__WidgetAttribute param1 ```
bool q_abstractitemview_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QAbstractItemView* self, QWidget* child ```
bool q_abstractitemview_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QAbstractItemView* self, bool enabled ```
void q_abstractitemview_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QAbstractItemView* self ```
QBackingStore* q_abstractitemview_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QAbstractItemView* self ```
QWindow* q_abstractitemview_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QAbstractItemView* self ```
QScreen* q_abstractitemview_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QAbstractItemView* self, QScreen* screen ```
void q_abstractitemview_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_abstractitemview_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QAbstractItemView* self, const char* title ```
void q_abstractitemview_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QAbstractItemView* self, void (*slot)(QWidget*, const char*) ```
void q_abstractitemview_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QAbstractItemView* self, QIcon* icon ```
void q_abstractitemview_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QAbstractItemView* self, void (*slot)(QWidget*, QIcon*) ```
void q_abstractitemview_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QAbstractItemView* self, const char* iconText ```
void q_abstractitemview_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QAbstractItemView* self, void (*slot)(QWidget*, const char*) ```
void q_abstractitemview_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QAbstractItemView* self, QPoint* pos ```
void q_abstractitemview_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QAbstractItemView* self, void (*slot)(QWidget*, QPoint*) ```
void q_abstractitemview_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QAbstractItemView* self, int hints ```
void q_abstractitemview_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractItemView* self, QPaintDevice* target, QPoint* targetOffset ```
void q_abstractitemview_render2(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractItemView* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_abstractitemview_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractItemView* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_abstractitemview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractItemView* self, QPainter* painter, QPoint* targetOffset ```
void q_abstractitemview_render22(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractItemView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_abstractitemview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractItemView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_abstractitemview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QAbstractItemView* self, QRect* rectangle ```
QPixmap* q_abstractitemview_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QAbstractItemView* self, enum Qt__GestureType typeVal, int flags ```
void q_abstractitemview_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QAbstractItemView* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_abstractitemview_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QAbstractItemView* self, int id, bool enable ```
void q_abstractitemview_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QAbstractItemView* self, int id, bool enable ```
void q_abstractitemview_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QAbstractItemView* self, enum Qt__WindowType param1, bool on ```
void q_abstractitemview_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QAbstractItemView* self, enum Qt__WidgetAttribute param1, bool on ```
void q_abstractitemview_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_abstractitemview_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_abstractitemview_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAbstractItemView* self ```
const char* q_abstractitemview_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAbstractItemView* self, char* name ```
void q_abstractitemview_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAbstractItemView* self, bool b ```
bool q_abstractitemview_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAbstractItemView* self ```
QThread* q_abstractitemview_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractItemView* self, QThread* thread ```
void q_abstractitemview_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractItemView* self, int interval ```
int32_t q_abstractitemview_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractItemView* self, int id ```
void q_abstractitemview_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAbstractItemView* self ```
libqt_list /* of QObject* */ q_abstractitemview_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAbstractItemView* self, QObject* filterObj ```
void q_abstractitemview_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAbstractItemView* self, QObject* obj ```
void q_abstractitemview_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_abstractitemview_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractItemView* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_abstractitemview_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_abstractitemview_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_abstractitemview_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAbstractItemView* self, const char* name, QVariant* value ```
bool q_abstractitemview_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAbstractItemView* self, const char* name ```
QVariant* q_abstractitemview_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAbstractItemView* self ```
const char** q_abstractitemview_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractItemView* self ```
QBindingStorage* q_abstractitemview_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractItemView* self ```
const QBindingStorage* q_abstractitemview_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractItemView* self, void (*slot)(QObject*) ```
void q_abstractitemview_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAbstractItemView* self ```
QObject* q_abstractitemview_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAbstractItemView* self, const char* classname ```
bool q_abstractitemview_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractItemView* self, int interval, enum Qt__TimerType timerType ```
int32_t q_abstractitemview_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractitemview_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractItemView* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractitemview_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractItemView* self, QObject* param1 ```
void q_abstractitemview_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractItemView* self, void (*slot)(QObject*, QObject*) ```
void q_abstractitemview_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QAbstractItemView* self ```
double q_abstractitemview_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QAbstractItemView* self ```
double q_abstractitemview_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_abstractitemview_device_pixel_ratio_f_scale();

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self ```
QSize* q_abstractitemview_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self ```
QSize* q_abstractitemview_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, QSize* (*slot)() ```
void q_abstractitemview_on_minimum_size_hint(void* self, QSize* (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self ```
QSize* q_abstractitemview_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self ```
QSize* q_abstractitemview_qbase_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, QSize* (*slot)() ```
void q_abstractitemview_on_size_hint(void* self, QSize* (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QWidget* viewport ```
void q_abstractitemview_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QWidget* viewport ```
void q_abstractitemview_qbase_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QWidget*) ```
void q_abstractitemview_on_setup_viewport(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QPaintEvent* param1 ```
void q_abstractitemview_paint_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QPaintEvent* param1 ```
void q_abstractitemview_qbase_paint_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QPaintEvent*) ```
void q_abstractitemview_on_paint_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QWheelEvent* param1 ```
void q_abstractitemview_wheel_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QWheelEvent* param1 ```
void q_abstractitemview_qbase_wheel_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QWheelEvent*) ```
void q_abstractitemview_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QContextMenuEvent* param1 ```
void q_abstractitemview_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QContextMenuEvent* param1 ```
void q_abstractitemview_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QContextMenuEvent*) ```
void q_abstractitemview_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollContentsBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, int dx, int dy ```
void q_abstractitemview_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollContentsBy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, int dx, int dy ```
void q_abstractitemview_qbase_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollContentsBy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, int, int) ```
void q_abstractitemview_on_scroll_contents_by(void* self, void (*slot)(void*, int, int));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QEvent* param1 ```
void q_abstractitemview_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QEvent* param1 ```
void q_abstractitemview_qbase_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QEvent*) ```
void q_abstractitemview_on_change_event(void* self, void (*slot)(void*, void*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QStyleOptionFrame* option ```
void q_abstractitemview_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QStyleOptionFrame* option ```
void q_abstractitemview_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QStyleOptionFrame*) ```
void q_abstractitemview_on_init_style_option(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, int32_t (*slot)() ```
void q_abstractitemview_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, bool visible ```
void q_abstractitemview_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, bool visible ```
void q_abstractitemview_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, bool) ```
void q_abstractitemview_on_set_visible(void* self, void (*slot)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, int param1 ```
int32_t q_abstractitemview_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, int param1 ```
int32_t q_abstractitemview_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, int32_t (*slot)(QAbstractItemView*, int) ```
void q_abstractitemview_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, bool (*slot)() ```
void q_abstractitemview_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self ```
QPaintEngine* q_abstractitemview_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self ```
QPaintEngine* q_abstractitemview_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, QPaintEngine* (*slot)() ```
void q_abstractitemview_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QKeyEvent* event ```
void q_abstractitemview_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QKeyEvent* event ```
void q_abstractitemview_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QKeyEvent*) ```
void q_abstractitemview_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QEnterEvent* event ```
void q_abstractitemview_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QEnterEvent* event ```
void q_abstractitemview_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QEnterEvent*) ```
void q_abstractitemview_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QEvent* event ```
void q_abstractitemview_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QEvent* event ```
void q_abstractitemview_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QEvent*) ```
void q_abstractitemview_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QMoveEvent* event ```
void q_abstractitemview_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QMoveEvent* event ```
void q_abstractitemview_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QMoveEvent*) ```
void q_abstractitemview_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QCloseEvent* event ```
void q_abstractitemview_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QCloseEvent* event ```
void q_abstractitemview_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QCloseEvent*) ```
void q_abstractitemview_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QTabletEvent* event ```
void q_abstractitemview_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QTabletEvent* event ```
void q_abstractitemview_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QTabletEvent*) ```
void q_abstractitemview_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QActionEvent* event ```
void q_abstractitemview_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QActionEvent* event ```
void q_abstractitemview_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QActionEvent*) ```
void q_abstractitemview_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QShowEvent* event ```
void q_abstractitemview_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QShowEvent* event ```
void q_abstractitemview_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QShowEvent*) ```
void q_abstractitemview_on_show_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QHideEvent* event ```
void q_abstractitemview_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QHideEvent* event ```
void q_abstractitemview_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QHideEvent*) ```
void q_abstractitemview_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, const char* eventType, void* message, intptr_t* result ```
bool q_abstractitemview_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, const char* eventType, void* message, intptr_t* result ```
bool q_abstractitemview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, bool (*slot)(QAbstractItemView*, const char*, void*, intptr_t*) ```
void q_abstractitemview_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_abstractitemview_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_abstractitemview_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, int32_t (*slot)(QAbstractItemView*, enum QPaintDevice__PaintDeviceMetric) ```
void q_abstractitemview_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QPainter* painter ```
void q_abstractitemview_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QPainter* painter ```
void q_abstractitemview_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QPainter*) ```
void q_abstractitemview_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QPoint* offset ```
QPaintDevice* q_abstractitemview_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QPoint* offset ```
QPaintDevice* q_abstractitemview_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, QPaintDevice* (*slot)(QAbstractItemView*, QPoint*) ```
void q_abstractitemview_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self ```
QPainter* q_abstractitemview_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self ```
QPainter* q_abstractitemview_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, QPainter* (*slot)() ```
void q_abstractitemview_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QChildEvent* event ```
void q_abstractitemview_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QChildEvent* event ```
void q_abstractitemview_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QChildEvent*) ```
void q_abstractitemview_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QEvent* event ```
void q_abstractitemview_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QEvent* event ```
void q_abstractitemview_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QEvent*) ```
void q_abstractitemview_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QMetaMethod* signal ```
void q_abstractitemview_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QMetaMethod* signal ```
void q_abstractitemview_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QMetaMethod*) ```
void q_abstractitemview_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QMetaMethod* signal ```
void q_abstractitemview_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QMetaMethod* signal ```
void q_abstractitemview_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QMetaMethod*) ```
void q_abstractitemview_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, int left, int top, int right, int bottom ```
void q_abstractitemview_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, int left, int top, int right, int bottom ```
void q_abstractitemview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, int, int, int, int) ```
void q_abstractitemview_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self ```
QMargins* q_abstractitemview_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self ```
QMargins* q_abstractitemview_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, QMargins* (*slot)() ```
void q_abstractitemview_on_viewport_margins(void* self, QMargins* (*slot)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QPainter* param1 ```
void q_abstractitemview_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QPainter* param1 ```
void q_abstractitemview_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QPainter*) ```
void q_abstractitemview_on_draw_frame(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)() ```
void q_abstractitemview_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)() ```
void q_abstractitemview_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)() ```
void q_abstractitemview_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, bool (*slot)() ```
void q_abstractitemview_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, bool (*slot)() ```
void q_abstractitemview_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self ```
QObject* q_abstractitemview_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self ```
QObject* q_abstractitemview_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, QObject* (*slot)() ```
void q_abstractitemview_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, int32_t (*slot)() ```
void q_abstractitemview_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, const char* signal ```
int32_t q_abstractitemview_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, const char* signal ```
int32_t q_abstractitemview_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, int32_t (*slot)(QAbstractItemView*, const char*) ```
void q_abstractitemview_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QMetaMethod* signal ```
bool q_abstractitemview_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QMetaMethod* signal ```
bool q_abstractitemview_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, bool (*slot)(QAbstractItemView*, QMetaMethod*) ```
void q_abstractitemview_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QAbstractItemView* self, void (*slot)(QObject*, const char*) ```
void q_abstractitemview_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dtor.QAbstractItemView)
///
/// Delete this object from C++ memory.
///
/// ``` QAbstractItemView* self ```
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
