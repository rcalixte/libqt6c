#pragma once
#ifndef SRCQT6C_LIBQUNDOVIEW_H
#define SRCQT6C_LIBQUNDOVIEW_H

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
#include "libqaction.h"
#include "libqevent.h"
#include "libqanystringview.h"
#include "libqbackingstore.h"
#include "libqbindingstorage.h"
#include "libqbitmap.h"
#include "libqcursor.h"
#include "libqfont.h"
#include "libqfontinfo.h"
#include "libqfontmetrics.h"
#include "libqframe.h"
#include "libqgraphicseffect.h"
#include "libqgraphicsproxywidget.h"
#include "libqicon.h"
#include "libqitemselectionmodel.h"
#include "libqkeysequence.h"
#include "libqlayout.h"
#include "libqlistview.h"
#include "libqlocale.h"
#include "libqmargins.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpaintdevice.h"
#include "libqpaintengine.h"
#include "libqpainter.h"
#include "libqpalette.h"
#include "libqpixmap.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqregion.h"
#include "libqscreen.h"
#include "libqscrollbar.h"
#include "libqsize.h"
#include "libqsizepolicy.h"
#include <string.h>
#include "libqstyle.h"
#include "libqstyleoption.h"
#include "libqthread.h"
#include "libqundogroup.h"
#include "libqundostack.h"
#include "libqvariant.h"
#include "libqwidget.h"
#include "libqwindow.h"

/// https://doc.qt.io/qt-6/qundoview.html

/// q_undoview_new constructs a new QUndoView object.
///
/// ``` QWidget* parent ```
QUndoView* q_undoview_new(void* parent);

/// q_undoview_new2 constructs a new QUndoView object.
///
///
QUndoView* q_undoview_new2();

/// q_undoview_new3 constructs a new QUndoView object.
///
/// ``` QUndoStack* stack ```
QUndoView* q_undoview_new3(void* stack);

/// q_undoview_new4 constructs a new QUndoView object.
///
/// ``` QUndoGroup* group ```
QUndoView* q_undoview_new4(void* group);

/// q_undoview_new5 constructs a new QUndoView object.
///
/// ``` QUndoStack* stack, QWidget* parent ```
QUndoView* q_undoview_new5(void* stack, void* parent);

/// q_undoview_new6 constructs a new QUndoView object.
///
/// ``` QUndoGroup* group, QWidget* parent ```
QUndoView* q_undoview_new6(void* group, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QUndoView* self ```
QMetaObject* q_undoview_meta_object(void* self);

/// ``` QUndoView* self, const char* param1 ```
void* q_undoview_metacast(void* self, const char* param1);

/// ``` QUndoView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_undoview_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QUndoView* self, int32_t (*slot)(QUndoView*, enum QMetaObject__Call, int, void*) ```
void q_undoview_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QUndoView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_undoview_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_undoview_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qundoview.html#stack)
///
/// ``` QUndoView* self ```
QUndoStack* q_undoview_stack(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundoview.html#group)
///
/// ``` QUndoView* self ```
QUndoGroup* q_undoview_group(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundoview.html#setEmptyLabel)
///
/// ``` QUndoView* self, const char* label ```
void q_undoview_set_empty_label(void* self, const char* label);

/// [Qt documentation](https://doc.qt.io/qt-6/qundoview.html#emptyLabel)
///
/// ``` QUndoView* self ```
const char* q_undoview_empty_label(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundoview.html#setCleanIcon)
///
/// ``` QUndoView* self, QIcon* icon ```
void q_undoview_set_clean_icon(void* self, void* icon);

/// [Qt documentation](https://doc.qt.io/qt-6/qundoview.html#cleanIcon)
///
/// ``` QUndoView* self ```
QIcon* q_undoview_clean_icon(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qundoview.html#setStack)
///
/// ``` QUndoView* self, QUndoStack* stack ```
void q_undoview_set_stack(void* self, void* stack);

/// [Qt documentation](https://doc.qt.io/qt-6/qundoview.html#setGroup)
///
/// ``` QUndoView* self, QUndoGroup* group ```
void q_undoview_set_group(void* self, void* group);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_undoview_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_undoview_tr3(const char* s, const char* c, int n);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setMovement)
///
/// ``` QUndoView* self, enum QListView__Movement movement ```
void q_undoview_set_movement(void* self, int64_t movement);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#movement)
///
/// ``` QUndoView* self ```
int64_t q_undoview_movement(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setFlow)
///
/// ``` QUndoView* self, enum QListView__Flow flow ```
void q_undoview_set_flow(void* self, int64_t flow);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#flow)
///
/// ``` QUndoView* self ```
int64_t q_undoview_flow(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setWrapping)
///
/// ``` QUndoView* self, bool enable ```
void q_undoview_set_wrapping(void* self, bool enable);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isWrapping)
///
/// ``` QUndoView* self ```
bool q_undoview_is_wrapping(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setResizeMode)
///
/// ``` QUndoView* self, enum QListView__ResizeMode mode ```
void q_undoview_set_resize_mode(void* self, int64_t mode);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeMode)
///
/// ``` QUndoView* self ```
int64_t q_undoview_resize_mode(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setLayoutMode)
///
/// ``` QUndoView* self, enum QListView__LayoutMode mode ```
void q_undoview_set_layout_mode(void* self, int64_t mode);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#layoutMode)
///
/// ``` QUndoView* self ```
int64_t q_undoview_layout_mode(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSpacing)
///
/// ``` QUndoView* self, int space ```
void q_undoview_set_spacing(void* self, int space);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#spacing)
///
/// ``` QUndoView* self ```
int32_t q_undoview_spacing(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setBatchSize)
///
/// ``` QUndoView* self, int batchSize ```
void q_undoview_set_batch_size(void* self, int batchSize);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#batchSize)
///
/// ``` QUndoView* self ```
int32_t q_undoview_batch_size(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setGridSize)
///
/// ``` QUndoView* self, QSize* size ```
void q_undoview_set_grid_size(void* self, void* size);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#gridSize)
///
/// ``` QUndoView* self ```
QSize* q_undoview_grid_size(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setViewMode)
///
/// ``` QUndoView* self, enum QListView__ViewMode mode ```
void q_undoview_set_view_mode(void* self, int64_t mode);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#viewMode)
///
/// ``` QUndoView* self ```
int64_t q_undoview_view_mode(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#clearPropertyFlags)
///
/// ``` QUndoView* self ```
void q_undoview_clear_property_flags(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isRowHidden)
///
/// ``` QUndoView* self, int row ```
bool q_undoview_is_row_hidden(void* self, int row);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setRowHidden)
///
/// ``` QUndoView* self, int row, bool hide ```
void q_undoview_set_row_hidden(void* self, int row, bool hide);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setModelColumn)
///
/// ``` QUndoView* self, int column ```
void q_undoview_set_model_column(void* self, int column);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#modelColumn)
///
/// ``` QUndoView* self ```
int32_t q_undoview_model_column(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setUniformItemSizes)
///
/// ``` QUndoView* self, bool enable ```
void q_undoview_set_uniform_item_sizes(void* self, bool enable);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#uniformItemSizes)
///
/// ``` QUndoView* self ```
bool q_undoview_uniform_item_sizes(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setWordWrap)
///
/// ``` QUndoView* self, bool on ```
void q_undoview_set_word_wrap(void* self, bool on);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#wordWrap)
///
/// ``` QUndoView* self ```
bool q_undoview_word_wrap(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSelectionRectVisible)
///
/// ``` QUndoView* self, bool show ```
void q_undoview_set_selection_rect_visible(void* self, bool show);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isSelectionRectVisible)
///
/// ``` QUndoView* self ```
bool q_undoview_is_selection_rect_visible(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setItemAlignment)
///
/// ``` QUndoView* self, int alignment ```
void q_undoview_set_item_alignment(void* self, int64_t alignment);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#itemAlignment)
///
/// ``` QUndoView* self ```
int64_t q_undoview_item_alignment(void* self);

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#indexesMoved)
///
/// ``` QUndoView* self, QModelIndex* indexes[] ```
void q_undoview_indexes_moved(void* self, void* indexes[]);

/// Inherited from QListView
///
/// ``` QUndoView* self, void (*slot)(QListView*, QModelIndex*[]) ```
void q_undoview_on_indexes_moved(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#model)
///
/// ``` QUndoView* self ```
QAbstractItemModel* q_undoview_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
///
/// ``` QUndoView* self ```
QItemSelectionModel* q_undoview_selection_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
///
/// ``` QUndoView* self, QAbstractItemDelegate* delegate ```
void q_undoview_set_item_delegate(void* self, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QUndoView* self ```
QAbstractItemDelegate* q_undoview_item_delegate(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
///
/// ``` QUndoView* self, enum QAbstractItemView__SelectionMode mode ```
void q_undoview_set_selection_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
///
/// ``` QUndoView* self ```
int64_t q_undoview_selection_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
///
/// ``` QUndoView* self, enum QAbstractItemView__SelectionBehavior behavior ```
void q_undoview_set_selection_behavior(void* self, int64_t behavior);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
///
/// ``` QUndoView* self ```
int64_t q_undoview_selection_behavior(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
///
/// ``` QUndoView* self ```
QModelIndex* q_undoview_current_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
///
/// ``` QUndoView* self ```
QModelIndex* q_undoview_root_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
///
/// ``` QUndoView* self, int triggers ```
void q_undoview_set_edit_triggers(void* self, int64_t triggers);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
///
/// ``` QUndoView* self ```
int64_t q_undoview_edit_triggers(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
///
/// ``` QUndoView* self, enum QAbstractItemView__ScrollMode mode ```
void q_undoview_set_vertical_scroll_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
///
/// ``` QUndoView* self ```
int64_t q_undoview_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
///
/// ``` QUndoView* self ```
void q_undoview_reset_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
///
/// ``` QUndoView* self, enum QAbstractItemView__ScrollMode mode ```
void q_undoview_set_horizontal_scroll_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
///
/// ``` QUndoView* self ```
int64_t q_undoview_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
///
/// ``` QUndoView* self ```
void q_undoview_reset_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
///
/// ``` QUndoView* self, bool enable ```
void q_undoview_set_auto_scroll(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
///
/// ``` QUndoView* self ```
bool q_undoview_has_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
///
/// ``` QUndoView* self, int margin ```
void q_undoview_set_auto_scroll_margin(void* self, int margin);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
///
/// ``` QUndoView* self ```
int32_t q_undoview_auto_scroll_margin(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
///
/// ``` QUndoView* self, bool enable ```
void q_undoview_set_tab_key_navigation(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
///
/// ``` QUndoView* self ```
bool q_undoview_tab_key_navigation(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
///
/// ``` QUndoView* self, bool enable ```
void q_undoview_set_drop_indicator_shown(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
///
/// ``` QUndoView* self ```
bool q_undoview_show_drop_indicator(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
///
/// ``` QUndoView* self, bool enable ```
void q_undoview_set_drag_enabled(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
///
/// ``` QUndoView* self ```
bool q_undoview_drag_enabled(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
///
/// ``` QUndoView* self, bool overwrite ```
void q_undoview_set_drag_drop_overwrite_mode(void* self, bool overwrite);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
///
/// ``` QUndoView* self ```
bool q_undoview_drag_drop_overwrite_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
///
/// ``` QUndoView* self, enum QAbstractItemView__DragDropMode behavior ```
void q_undoview_set_drag_drop_mode(void* self, int64_t behavior);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
///
/// ``` QUndoView* self ```
int64_t q_undoview_drag_drop_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
///
/// ``` QUndoView* self, enum Qt__DropAction dropAction ```
void q_undoview_set_default_drop_action(void* self, int64_t dropAction);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
///
/// ``` QUndoView* self ```
int64_t q_undoview_default_drop_action(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
///
/// ``` QUndoView* self, bool enable ```
void q_undoview_set_alternating_row_colors(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
///
/// ``` QUndoView* self ```
bool q_undoview_alternating_row_colors(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
///
/// ``` QUndoView* self, QSize* size ```
void q_undoview_set_icon_size(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
///
/// ``` QUndoView* self ```
QSize* q_undoview_icon_size(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
///
/// ``` QUndoView* self, enum Qt__TextElideMode mode ```
void q_undoview_set_text_elide_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
///
/// ``` QUndoView* self ```
int64_t q_undoview_text_elide_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
///
/// ``` QUndoView* self, QModelIndex* index ```
QSize* q_undoview_size_hint_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#openPersistentEditor)
///
/// ``` QUndoView* self, QModelIndex* index ```
void q_undoview_open_persistent_editor(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closePersistentEditor)
///
/// ``` QUndoView* self, QModelIndex* index ```
void q_undoview_close_persistent_editor(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#isPersistentEditorOpen)
///
/// ``` QUndoView* self, QModelIndex* index ```
bool q_undoview_is_persistent_editor_open(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
///
/// ``` QUndoView* self, QModelIndex* index, QWidget* widget ```
void q_undoview_set_index_widget(void* self, void* index, void* widget);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
///
/// ``` QUndoView* self, QModelIndex* index ```
QWidget* q_undoview_index_widget(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
///
/// ``` QUndoView* self, int row, QAbstractItemDelegate* delegate ```
void q_undoview_set_item_delegate_for_row(void* self, int row, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
///
/// ``` QUndoView* self, int row ```
QAbstractItemDelegate* q_undoview_item_delegate_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
///
/// ``` QUndoView* self, int column, QAbstractItemDelegate* delegate ```
void q_undoview_set_item_delegate_for_column(void* self, int column, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
///
/// ``` QUndoView* self, int column ```
QAbstractItemDelegate* q_undoview_item_delegate_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QUndoView* self, QModelIndex* index ```
QAbstractItemDelegate* q_undoview_item_delegate_with_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// ``` QUndoView* self, QModelIndex* index ```
void q_undoview_edit(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
///
/// ``` QUndoView* self ```
void q_undoview_clear_selection(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
///
/// ``` QUndoView* self, QModelIndex* index ```
void q_undoview_set_current_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
///
/// ``` QUndoView* self ```
void q_undoview_scroll_to_top(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
///
/// ``` QUndoView* self ```
void q_undoview_scroll_to_bottom(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#update)
///
/// ``` QUndoView* self, QModelIndex* index ```
void q_undoview_update(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// ``` QUndoView* self, QModelIndex* index ```
void q_undoview_pressed(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// ``` QUndoView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_undoview_on_pressed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// ``` QUndoView* self, QModelIndex* index ```
void q_undoview_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// ``` QUndoView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_undoview_on_clicked(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// ``` QUndoView* self, QModelIndex* index ```
void q_undoview_double_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// ``` QUndoView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_undoview_on_double_clicked(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// ``` QUndoView* self, QModelIndex* index ```
void q_undoview_activated(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// ``` QUndoView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_undoview_on_activated(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// ``` QUndoView* self, QModelIndex* index ```
void q_undoview_entered(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// ``` QUndoView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_undoview_on_entered(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// ``` QUndoView* self ```
void q_undoview_viewport_entered(void* self);

/// Inherited from QAbstractItemView
///
/// ``` QUndoView* self, void (*slot)(QAbstractItemView*) ```
void q_undoview_on_viewport_entered(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// ``` QUndoView* self, QSize* size ```
void q_undoview_icon_size_changed(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// ``` QUndoView* self, void (*slot)(QAbstractItemView*, QSize*) ```
void q_undoview_on_icon_size_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// ``` QUndoView* self ```
int64_t q_undoview_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// ``` QUndoView* self, enum Qt__ScrollBarPolicy verticalScrollBarPolicy ```
void q_undoview_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// ``` QUndoView* self ```
QScrollBar* q_undoview_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// ``` QUndoView* self, QScrollBar* scrollbar ```
void q_undoview_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// ``` QUndoView* self ```
int64_t q_undoview_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// ``` QUndoView* self, enum Qt__ScrollBarPolicy horizontalScrollBarPolicy ```
void q_undoview_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// ``` QUndoView* self ```
QScrollBar* q_undoview_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// ``` QUndoView* self, QScrollBar* scrollbar ```
void q_undoview_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// ``` QUndoView* self ```
QWidget* q_undoview_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// ``` QUndoView* self, QWidget* widget ```
void q_undoview_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// ``` QUndoView* self, QWidget* widget, int alignment ```
void q_undoview_add_scroll_bar_widget(void* self, void* widget, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// ``` QUndoView* self, int alignment ```
libqt_list /* of QWidget* */ q_undoview_scroll_bar_widgets(void* self, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// ``` QUndoView* self ```
QWidget* q_undoview_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// ``` QUndoView* self, QWidget* widget ```
void q_undoview_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// ``` QUndoView* self ```
QSize* q_undoview_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// ``` QUndoView* self ```
int64_t q_undoview_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// ``` QUndoView* self, enum QAbstractScrollArea__SizeAdjustPolicy policy ```
void q_undoview_set_size_adjust_policy(void* self, int64_t policy);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QUndoView* self ```
int32_t q_undoview_frame_style(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QUndoView* self, int frameStyle ```
void q_undoview_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QUndoView* self ```
int32_t q_undoview_frame_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QUndoView* self ```
int64_t q_undoview_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QUndoView* self, enum QFrame__Shape frameShape ```
void q_undoview_set_frame_shape(void* self, int64_t frameShape);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QUndoView* self ```
int64_t q_undoview_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QUndoView* self, enum QFrame__Shadow frameShadow ```
void q_undoview_set_frame_shadow(void* self, int64_t frameShadow);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QUndoView* self ```
int32_t q_undoview_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QUndoView* self, int lineWidth ```
void q_undoview_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QUndoView* self ```
int32_t q_undoview_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QUndoView* self, int midLineWidth ```
void q_undoview_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QUndoView* self ```
QRect* q_undoview_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QUndoView* self, QRect* frameRect ```
void q_undoview_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QUndoView* self ```
uintptr_t q_undoview_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QUndoView* self ```
void q_undoview_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QUndoView* self ```
uintptr_t q_undoview_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QUndoView* self ```
uintptr_t q_undoview_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QUndoView* self ```
QStyle* q_undoview_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QUndoView* self, QStyle* style ```
void q_undoview_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QUndoView* self ```
bool q_undoview_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QUndoView* self ```
bool q_undoview_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QUndoView* self ```
bool q_undoview_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QUndoView* self ```
int64_t q_undoview_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QUndoView* self, enum Qt__WindowModality windowModality ```
void q_undoview_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QUndoView* self ```
bool q_undoview_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QUndoView* self, QWidget* param1 ```
bool q_undoview_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QUndoView* self, bool enabled ```
void q_undoview_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QUndoView* self, bool disabled ```
void q_undoview_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QUndoView* self, bool windowModified ```
void q_undoview_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QUndoView* self ```
QRect* q_undoview_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QUndoView* self ```
QRect* q_undoview_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QUndoView* self ```
QRect* q_undoview_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QUndoView* self ```
int32_t q_undoview_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QUndoView* self ```
int32_t q_undoview_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QUndoView* self ```
QPoint* q_undoview_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QUndoView* self ```
QSize* q_undoview_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QUndoView* self ```
QSize* q_undoview_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QUndoView* self ```
int32_t q_undoview_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QUndoView* self ```
int32_t q_undoview_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QUndoView* self ```
QRect* q_undoview_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QUndoView* self ```
QRect* q_undoview_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QUndoView* self ```
QRegion* q_undoview_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QUndoView* self ```
QSize* q_undoview_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QUndoView* self ```
QSize* q_undoview_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QUndoView* self ```
int32_t q_undoview_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QUndoView* self ```
int32_t q_undoview_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QUndoView* self ```
int32_t q_undoview_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QUndoView* self ```
int32_t q_undoview_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QUndoView* self, QSize* minimumSize ```
void q_undoview_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QUndoView* self, int minw, int minh ```
void q_undoview_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QUndoView* self, QSize* maximumSize ```
void q_undoview_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QUndoView* self, int maxw, int maxh ```
void q_undoview_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QUndoView* self, int minw ```
void q_undoview_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QUndoView* self, int minh ```
void q_undoview_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QUndoView* self, int maxw ```
void q_undoview_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QUndoView* self, int maxh ```
void q_undoview_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QUndoView* self ```
QSize* q_undoview_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QUndoView* self, QSize* sizeIncrement ```
void q_undoview_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QUndoView* self, int w, int h ```
void q_undoview_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QUndoView* self ```
QSize* q_undoview_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QUndoView* self, QSize* baseSize ```
void q_undoview_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QUndoView* self, int basew, int baseh ```
void q_undoview_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QUndoView* self, QSize* fixedSize ```
void q_undoview_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QUndoView* self, int w, int h ```
void q_undoview_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QUndoView* self, int w ```
void q_undoview_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QUndoView* self, int h ```
void q_undoview_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QUndoView* self, QPointF* param1 ```
QPointF* q_undoview_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QUndoView* self, QPoint* param1 ```
QPoint* q_undoview_map_to_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QUndoView* self, QPointF* param1 ```
QPointF* q_undoview_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QUndoView* self, QPoint* param1 ```
QPoint* q_undoview_map_from_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QUndoView* self, QPointF* param1 ```
QPointF* q_undoview_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QUndoView* self, QPoint* param1 ```
QPoint* q_undoview_map_to_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QUndoView* self, QPointF* param1 ```
QPointF* q_undoview_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QUndoView* self, QPoint* param1 ```
QPoint* q_undoview_map_from_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QUndoView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_undoview_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QUndoView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_undoview_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QUndoView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_undoview_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QUndoView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_undoview_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QUndoView* self ```
QWidget* q_undoview_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QUndoView* self ```
QWidget* q_undoview_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QUndoView* self ```
QWidget* q_undoview_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QUndoView* self ```
QPalette* q_undoview_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QUndoView* self, QPalette* palette ```
void q_undoview_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QUndoView* self, enum QPalette__ColorRole backgroundRole ```
void q_undoview_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QUndoView* self ```
int64_t q_undoview_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QUndoView* self, enum QPalette__ColorRole foregroundRole ```
void q_undoview_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QUndoView* self ```
int64_t q_undoview_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QUndoView* self ```
QFont* q_undoview_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QUndoView* self, QFont* font ```
void q_undoview_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QUndoView* self ```
QFontMetrics* q_undoview_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QUndoView* self ```
QFontInfo* q_undoview_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QUndoView* self ```
QCursor* q_undoview_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QUndoView* self, QCursor* cursor ```
void q_undoview_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QUndoView* self ```
void q_undoview_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QUndoView* self, bool enable ```
void q_undoview_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QUndoView* self ```
bool q_undoview_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QUndoView* self ```
bool q_undoview_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QUndoView* self, bool enable ```
void q_undoview_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QUndoView* self ```
bool q_undoview_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QUndoView* self, QBitmap* mask ```
void q_undoview_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QUndoView* self, QRegion* mask ```
void q_undoview_set_mask_with_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QUndoView* self ```
QRegion* q_undoview_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QUndoView* self ```
void q_undoview_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QUndoView* self, QPaintDevice* target ```
void q_undoview_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QUndoView* self, QPainter* painter ```
void q_undoview_render_with_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QUndoView* self ```
QPixmap* q_undoview_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QUndoView* self ```
QGraphicsEffect* q_undoview_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QUndoView* self, QGraphicsEffect* effect ```
void q_undoview_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QUndoView* self, enum Qt__GestureType typeVal ```
void q_undoview_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QUndoView* self, enum Qt__GestureType typeVal ```
void q_undoview_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QUndoView* self, const char* windowTitle ```
void q_undoview_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QUndoView* self, const char* styleSheet ```
void q_undoview_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QUndoView* self ```
const char* q_undoview_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QUndoView* self ```
const char* q_undoview_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QUndoView* self, QIcon* icon ```
void q_undoview_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QUndoView* self ```
QIcon* q_undoview_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QUndoView* self, const char* windowIconText ```
void q_undoview_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QUndoView* self ```
const char* q_undoview_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QUndoView* self, const char* windowRole ```
void q_undoview_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QUndoView* self ```
const char* q_undoview_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QUndoView* self, const char* filePath ```
void q_undoview_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QUndoView* self ```
const char* q_undoview_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QUndoView* self, double level ```
void q_undoview_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QUndoView* self ```
double q_undoview_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QUndoView* self ```
bool q_undoview_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QUndoView* self, const char* toolTip ```
void q_undoview_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QUndoView* self ```
const char* q_undoview_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QUndoView* self, int msec ```
void q_undoview_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QUndoView* self ```
int32_t q_undoview_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QUndoView* self, const char* statusTip ```
void q_undoview_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QUndoView* self ```
const char* q_undoview_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QUndoView* self, const char* whatsThis ```
void q_undoview_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QUndoView* self ```
const char* q_undoview_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QUndoView* self ```
const char* q_undoview_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QUndoView* self, const char* name ```
void q_undoview_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QUndoView* self ```
const char* q_undoview_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QUndoView* self, const char* description ```
void q_undoview_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QUndoView* self, enum Qt__LayoutDirection direction ```
void q_undoview_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QUndoView* self ```
int64_t q_undoview_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QUndoView* self ```
void q_undoview_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QUndoView* self, QLocale* locale ```
void q_undoview_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QUndoView* self ```
QLocale* q_undoview_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QUndoView* self ```
void q_undoview_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QUndoView* self ```
bool q_undoview_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QUndoView* self ```
bool q_undoview_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QUndoView* self ```
void q_undoview_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QUndoView* self ```
bool q_undoview_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QUndoView* self ```
void q_undoview_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QUndoView* self ```
void q_undoview_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QUndoView* self, enum Qt__FocusReason reason ```
void q_undoview_set_focus_with_reason(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QUndoView* self ```
int64_t q_undoview_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QUndoView* self, enum Qt__FocusPolicy policy ```
void q_undoview_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QUndoView* self ```
bool q_undoview_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_undoview_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QUndoView* self, QWidget* focusProxy ```
void q_undoview_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QUndoView* self ```
QWidget* q_undoview_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QUndoView* self ```
int64_t q_undoview_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QUndoView* self, enum Qt__ContextMenuPolicy policy ```
void q_undoview_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QUndoView* self ```
void q_undoview_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QUndoView* self, QCursor* param1 ```
void q_undoview_grab_mouse_with_q_cursor(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QUndoView* self ```
void q_undoview_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QUndoView* self ```
void q_undoview_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QUndoView* self ```
void q_undoview_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QUndoView* self, QKeySequence* key ```
int32_t q_undoview_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QUndoView* self, int id ```
void q_undoview_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QUndoView* self, int id ```
void q_undoview_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QUndoView* self, int id ```
void q_undoview_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_undoview_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_undoview_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QUndoView* self ```
bool q_undoview_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QUndoView* self, bool enable ```
void q_undoview_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QUndoView* self ```
QGraphicsProxyWidget* q_undoview_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QUndoView* self ```
void q_undoview_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QUndoView* self, int x, int y, int w, int h ```
void q_undoview_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QUndoView* self, QRect* param1 ```
void q_undoview_update_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QUndoView* self, QRegion* param1 ```
void q_undoview_update_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QUndoView* self, int x, int y, int w, int h ```
void q_undoview_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QUndoView* self, QRect* param1 ```
void q_undoview_repaint_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QUndoView* self, QRegion* param1 ```
void q_undoview_repaint_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QUndoView* self, bool hidden ```
void q_undoview_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QUndoView* self ```
void q_undoview_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QUndoView* self ```
void q_undoview_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QUndoView* self ```
void q_undoview_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QUndoView* self ```
void q_undoview_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QUndoView* self ```
void q_undoview_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QUndoView* self ```
void q_undoview_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QUndoView* self ```
bool q_undoview_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QUndoView* self ```
void q_undoview_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QUndoView* self ```
void q_undoview_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QUndoView* self, QWidget* param1 ```
void q_undoview_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QUndoView* self, int x, int y ```
void q_undoview_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QUndoView* self, QPoint* param1 ```
void q_undoview_move_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QUndoView* self, int w, int h ```
void q_undoview_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QUndoView* self, QSize* param1 ```
void q_undoview_resize_with_q_size(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QUndoView* self, int x, int y, int w, int h ```
void q_undoview_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QUndoView* self, QRect* geometry ```
void q_undoview_set_geometry_with_geometry(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QUndoView* self ```
char* q_undoview_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QUndoView* self, const char* geometry ```
bool q_undoview_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QUndoView* self ```
void q_undoview_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QUndoView* self ```
bool q_undoview_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QUndoView* self, QWidget* param1 ```
bool q_undoview_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QUndoView* self ```
bool q_undoview_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QUndoView* self ```
bool q_undoview_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QUndoView* self ```
bool q_undoview_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QUndoView* self ```
bool q_undoview_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QUndoView* self ```
int64_t q_undoview_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QUndoView* self, int state ```
void q_undoview_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QUndoView* self, int state ```
void q_undoview_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QUndoView* self ```
QSizePolicy* q_undoview_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QUndoView* self, QSizePolicy* sizePolicy ```
void q_undoview_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QUndoView* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_undoview_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QUndoView* self ```
QRegion* q_undoview_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QUndoView* self, int left, int top, int right, int bottom ```
void q_undoview_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QUndoView* self, QMargins* margins ```
void q_undoview_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QUndoView* self ```
QMargins* q_undoview_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QUndoView* self ```
QRect* q_undoview_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QUndoView* self ```
QLayout* q_undoview_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QUndoView* self, QLayout* layout ```
void q_undoview_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QUndoView* self ```
void q_undoview_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QUndoView* self, QWidget* parent ```
void q_undoview_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QUndoView* self, QWidget* parent, int f ```
void q_undoview_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QUndoView* self, int dx, int dy ```
void q_undoview_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QUndoView* self, int dx, int dy, QRect* param3 ```
void q_undoview_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QUndoView* self ```
QWidget* q_undoview_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QUndoView* self ```
QWidget* q_undoview_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QUndoView* self ```
QWidget* q_undoview_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QUndoView* self ```
bool q_undoview_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QUndoView* self, bool on ```
void q_undoview_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QUndoView* self, QAction* action ```
void q_undoview_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QUndoView* self, QAction* actions[] ```
void q_undoview_add_actions(void* self, void* actions[]);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QUndoView* self, QAction* before, QAction* actions[] ```
void q_undoview_insert_actions(void* self, void* before, void* actions[]);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QUndoView* self, QAction* before, QAction* action ```
void q_undoview_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QUndoView* self, QAction* action ```
void q_undoview_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QUndoView* self ```
libqt_list /* of QAction* */ q_undoview_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QUndoView* self, const char* text ```
QAction* q_undoview_add_action_with_text(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QUndoView* self, QIcon* icon, const char* text ```
QAction* q_undoview_add_action2(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QUndoView* self, const char* text, QKeySequence* shortcut ```
QAction* q_undoview_add_action3(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QUndoView* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_undoview_add_action4(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QUndoView* self ```
QWidget* q_undoview_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QUndoView* self, int typeVal ```
void q_undoview_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QUndoView* self ```
int64_t q_undoview_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QUndoView* self, enum Qt__WindowType param1 ```
void q_undoview_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QUndoView* self, int typeVal ```
void q_undoview_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QUndoView* self ```
int64_t q_undoview_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_undoview_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QUndoView* self, int x, int y ```
QWidget* q_undoview_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QUndoView* self, QPoint* p ```
QWidget* q_undoview_child_at_with_q_point(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QUndoView* self, enum Qt__WidgetAttribute param1 ```
void q_undoview_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QUndoView* self, enum Qt__WidgetAttribute param1 ```
bool q_undoview_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QUndoView* self ```
void q_undoview_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QUndoView* self, QWidget* child ```
bool q_undoview_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QUndoView* self ```
bool q_undoview_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QUndoView* self, bool enabled ```
void q_undoview_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QUndoView* self ```
QBackingStore* q_undoview_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QUndoView* self ```
QWindow* q_undoview_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QUndoView* self ```
QScreen* q_undoview_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QUndoView* self, QScreen* screen ```
void q_undoview_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_undoview_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QUndoView* self, const char* title ```
void q_undoview_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// ``` QUndoView* self, void (*slot)(QWidget*, const char*) ```
void q_undoview_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QUndoView* self, QIcon* icon ```
void q_undoview_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// ``` QUndoView* self, void (*slot)(QWidget*, QIcon*) ```
void q_undoview_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QUndoView* self, const char* iconText ```
void q_undoview_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// ``` QUndoView* self, void (*slot)(QWidget*, const char*) ```
void q_undoview_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QUndoView* self, QPoint* pos ```
void q_undoview_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// ``` QUndoView* self, void (*slot)(QWidget*, QPoint*) ```
void q_undoview_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QUndoView* self ```
int64_t q_undoview_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QUndoView* self, int hints ```
void q_undoview_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QUndoView* self, QPaintDevice* target, QPoint* targetOffset ```
void q_undoview_render2(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QUndoView* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_undoview_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QUndoView* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_undoview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QUndoView* self, QPainter* painter, QPoint* targetOffset ```
void q_undoview_render22(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QUndoView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_undoview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QUndoView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_undoview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QUndoView* self, QRect* rectangle ```
QPixmap* q_undoview_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QUndoView* self, enum Qt__GestureType typeVal, int flags ```
void q_undoview_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QUndoView* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_undoview_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QUndoView* self, int id, bool enable ```
void q_undoview_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QUndoView* self, int id, bool enable ```
void q_undoview_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QUndoView* self, enum Qt__WindowType param1, bool on ```
void q_undoview_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QUndoView* self, enum Qt__WidgetAttribute param1, bool on ```
void q_undoview_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_undoview_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_undoview_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QUndoView* self ```
const char* q_undoview_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QUndoView* self, char* name ```
void q_undoview_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QUndoView* self ```
bool q_undoview_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QUndoView* self ```
bool q_undoview_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QUndoView* self ```
bool q_undoview_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QUndoView* self ```
bool q_undoview_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QUndoView* self, bool b ```
bool q_undoview_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QUndoView* self ```
QThread* q_undoview_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QUndoView* self, QThread* thread ```
void q_undoview_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QUndoView* self, int interval ```
int32_t q_undoview_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QUndoView* self, int id ```
void q_undoview_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QUndoView* self ```
libqt_list /* of QObject* */ q_undoview_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QUndoView* self, QObject* filterObj ```
void q_undoview_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QUndoView* self, QObject* obj ```
void q_undoview_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_undoview_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QUndoView* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_undoview_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_undoview_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_undoview_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QUndoView* self ```
void q_undoview_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QUndoView* self ```
void q_undoview_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QUndoView* self, const char* name, QVariant* value ```
bool q_undoview_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QUndoView* self, const char* name ```
QVariant* q_undoview_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QUndoView* self ```
const char** q_undoview_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QUndoView* self ```
QBindingStorage* q_undoview_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QUndoView* self ```
QBindingStorage* q_undoview_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QUndoView* self ```
void q_undoview_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QUndoView* self, void (*slot)(QObject*) ```
void q_undoview_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QUndoView* self ```
QObject* q_undoview_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QUndoView* self, const char* classname ```
bool q_undoview_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QUndoView* self ```
void q_undoview_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QUndoView* self, int interval, enum Qt__TimerType timerType ```
int32_t q_undoview_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_undoview_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QUndoView* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_undoview_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QUndoView* self, QObject* param1 ```
void q_undoview_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QUndoView* self, void (*slot)(QObject*, QObject*) ```
void q_undoview_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QUndoView* self ```
bool q_undoview_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QUndoView* self ```
int32_t q_undoview_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QUndoView* self ```
int32_t q_undoview_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QUndoView* self ```
int32_t q_undoview_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QUndoView* self ```
int32_t q_undoview_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QUndoView* self ```
int32_t q_undoview_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QUndoView* self ```
int32_t q_undoview_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QUndoView* self ```
double q_undoview_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QUndoView* self ```
double q_undoview_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QUndoView* self ```
int32_t q_undoview_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QUndoView* self ```
int32_t q_undoview_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_undoview_device_pixel_ratio_f_scale();

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRect)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QModelIndex* index ```
QRect* q_undoview_visual_rect(void* self, void* index);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QModelIndex* index ```
QRect* q_undoview_qbase_visual_rect(void* self, void* index);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, QRect* (*slot)(QUndoView*, QModelIndex*) ```
void q_undoview_on_visual_rect(void* self, QRect* (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_undoview_scroll_to(void* self, void* index, int64_t hint);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_undoview_qbase_scroll_to(void* self, void* index, int64_t hint);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QModelIndex*, enum QAbstractItemView__ScrollHint) ```
void q_undoview_on_scroll_to(void* self, void (*slot)(void*, void*, int64_t));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#indexAt)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QPoint* p ```
QModelIndex* q_undoview_index_at(void* self, void* p);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QPoint* p ```
QModelIndex* q_undoview_qbase_index_at(void* self, void* p);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, QModelIndex* (*slot)(QUndoView*, QPoint*) ```
void q_undoview_on_index_at(void* self, QModelIndex* (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
void q_undoview_do_items_layout(void* self);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
void q_undoview_qbase_do_items_layout(void* self);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)() ```
void q_undoview_on_do_items_layout(void* self, void (*slot)());

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
void q_undoview_reset(void* self);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
void q_undoview_qbase_reset(void* self);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)() ```
void q_undoview_on_reset(void* self, void (*slot)());

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QModelIndex* index ```
void q_undoview_set_root_index(void* self, void* index);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QModelIndex* index ```
void q_undoview_qbase_set_root_index(void* self, void* index);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QModelIndex*) ```
void q_undoview_on_set_root_index(void* self, void (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QEvent* e ```
bool q_undoview_event(void* self, void* e);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QEvent* e ```
bool q_undoview_qbase_event(void* self, void* e);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, bool (*slot)(QUndoView*, QEvent*) ```
void q_undoview_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, int dx, int dy ```
void q_undoview_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, int dx, int dy ```
void q_undoview_qbase_scroll_contents_by(void* self, int dx, int dy);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, int, int) ```
void q_undoview_on_scroll_contents_by(void* self, void (*slot)(void*, int, int));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dataChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_undoview_data_changed(void* self, void* topLeft, void* bottomRight, int* roles[]);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_undoview_qbase_data_changed(void* self, void* topLeft, void* bottomRight, int* roles[]);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QModelIndex*, QModelIndex*, int*[]) ```
void q_undoview_on_data_changed(void* self, void (*slot)(void*, void*, void*, int*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsInserted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QModelIndex* parent, int start, int end ```
void q_undoview_rows_inserted(void* self, void* parent, int start, int end);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QModelIndex* parent, int start, int end ```
void q_undoview_qbase_rows_inserted(void* self, void* parent, int start, int end);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QModelIndex*, int, int) ```
void q_undoview_on_rows_inserted(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QModelIndex* parent, int start, int end ```
void q_undoview_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QModelIndex* parent, int start, int end ```
void q_undoview_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QModelIndex*, int, int) ```
void q_undoview_on_rows_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QMouseEvent* e ```
void q_undoview_mouse_move_event(void* self, void* e);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QMouseEvent* e ```
void q_undoview_qbase_mouse_move_event(void* self, void* e);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QMouseEvent*) ```
void q_undoview_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QMouseEvent* e ```
void q_undoview_mouse_release_event(void* self, void* e);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QMouseEvent* e ```
void q_undoview_qbase_mouse_release_event(void* self, void* e);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QMouseEvent*) ```
void q_undoview_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QWheelEvent* e ```
void q_undoview_wheel_event(void* self, void* e);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QWheelEvent* e ```
void q_undoview_qbase_wheel_event(void* self, void* e);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QWheelEvent*) ```
void q_undoview_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QTimerEvent* e ```
void q_undoview_timer_event(void* self, void* e);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QTimerEvent* e ```
void q_undoview_qbase_timer_event(void* self, void* e);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QTimerEvent*) ```
void q_undoview_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QResizeEvent* e ```
void q_undoview_resize_event(void* self, void* e);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QResizeEvent* e ```
void q_undoview_qbase_resize_event(void* self, void* e);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QResizeEvent*) ```
void q_undoview_on_resize_event(void* self, void (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QDragMoveEvent* e ```
void q_undoview_drag_move_event(void* self, void* e);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QDragMoveEvent* e ```
void q_undoview_qbase_drag_move_event(void* self, void* e);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QDragMoveEvent*) ```
void q_undoview_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QDragLeaveEvent* e ```
void q_undoview_drag_leave_event(void* self, void* e);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QDragLeaveEvent* e ```
void q_undoview_qbase_drag_leave_event(void* self, void* e);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QDragLeaveEvent*) ```
void q_undoview_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QDropEvent* e ```
void q_undoview_drop_event(void* self, void* e);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QDropEvent* e ```
void q_undoview_qbase_drop_event(void* self, void* e);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QDropEvent*) ```
void q_undoview_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#startDrag)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, int supportedActions ```
void q_undoview_start_drag(void* self, int64_t supportedActions);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, int supportedActions ```
void q_undoview_qbase_start_drag(void* self, int64_t supportedActions);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, int) ```
void q_undoview_on_start_drag(void* self, void (*slot)(void*, int64_t));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QStyleOptionViewItem* option ```
void q_undoview_init_view_item_option(void* self, void* option);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QStyleOptionViewItem* option ```
void q_undoview_qbase_init_view_item_option(void* self, void* option);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QStyleOptionViewItem*) ```
void q_undoview_on_init_view_item_option(void* self, void (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QPaintEvent* e ```
void q_undoview_paint_event(void* self, void* e);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QPaintEvent* e ```
void q_undoview_qbase_paint_event(void* self, void* e);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QPaintEvent*) ```
void q_undoview_on_paint_event(void* self, void (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
int32_t q_undoview_horizontal_offset(void* self);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
int32_t q_undoview_qbase_horizontal_offset(void* self);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, int32_t (*slot)() ```
void q_undoview_on_horizontal_offset(void* self, int32_t (*slot)());

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
int32_t q_undoview_vertical_offset(void* self);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
int32_t q_undoview_qbase_vertical_offset(void* self);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, int32_t (*slot)() ```
void q_undoview_on_vertical_offset(void* self, int32_t (*slot)());

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, enum QAbstractItemView__CursorAction cursorAction, int modifiers ```
QModelIndex* q_undoview_move_cursor(void* self, int64_t cursorAction, int64_t modifiers);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, enum QAbstractItemView__CursorAction cursorAction, int modifiers ```
QModelIndex* q_undoview_qbase_move_cursor(void* self, int64_t cursorAction, int64_t modifiers);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, QModelIndex* (*slot)(QUndoView*, enum QAbstractItemView__CursorAction, int) ```
void q_undoview_on_move_cursor(void* self, QModelIndex* (*slot)(void*, int64_t, int64_t));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QRect* rect, int command ```
void q_undoview_set_selection(void* self, void* rect, int64_t command);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QRect* rect, int command ```
void q_undoview_qbase_set_selection(void* self, void* rect, int64_t command);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QRect*, int) ```
void q_undoview_on_set_selection(void* self, void (*slot)(void*, void*, int64_t));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QItemSelection* selection ```
QRegion* q_undoview_visual_region_for_selection(void* self, void* selection);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QItemSelection* selection ```
QRegion* q_undoview_qbase_visual_region_for_selection(void* self, void* selection);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, QRegion* (*slot)(QUndoView*, QItemSelection*) ```
void q_undoview_on_visual_region_for_selection(void* self, QRegion* (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
libqt_list /* of QModelIndex* */ q_undoview_selected_indexes(void* self);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
libqt_list /* of QModelIndex* */ q_undoview_qbase_selected_indexes(void* self);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_undoview_on_selected_indexes(void* self, libqt_list /* of QModelIndex* */ (*slot)());

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
void q_undoview_update_geometries(void* self);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
void q_undoview_qbase_update_geometries(void* self);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)() ```
void q_undoview_on_update_geometries(void* self, void (*slot)());

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QModelIndex* index ```
bool q_undoview_is_index_hidden(void* self, void* index);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QModelIndex* index ```
bool q_undoview_qbase_is_index_hidden(void* self, void* index);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, bool (*slot)(QUndoView*, QModelIndex*) ```
void q_undoview_on_is_index_hidden(void* self, bool (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QItemSelection* selected, QItemSelection* deselected ```
void q_undoview_selection_changed(void* self, void* selected, void* deselected);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QItemSelection* selected, QItemSelection* deselected ```
void q_undoview_qbase_selection_changed(void* self, void* selected, void* deselected);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QItemSelection*, QItemSelection*) ```
void q_undoview_on_selection_changed(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QModelIndex* current, QModelIndex* previous ```
void q_undoview_current_changed(void* self, void* current, void* previous);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QModelIndex* current, QModelIndex* previous ```
void q_undoview_qbase_current_changed(void* self, void* current, void* previous);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QModelIndex*, QModelIndex*) ```
void q_undoview_on_current_changed(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
QSize* q_undoview_viewport_size_hint(void* self);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
QSize* q_undoview_qbase_viewport_size_hint(void* self);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, QSize* (*slot)() ```
void q_undoview_on_viewport_size_hint(void* self, QSize* (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QAbstractItemModel* model ```
void q_undoview_set_model(void* self, void* model);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QAbstractItemModel* model ```
void q_undoview_qbase_set_model(void* self, void* model);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QAbstractItemModel*) ```
void q_undoview_on_set_model(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QItemSelectionModel* selectionModel ```
void q_undoview_set_selection_model(void* self, void* selectionModel);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QItemSelectionModel* selectionModel ```
void q_undoview_qbase_set_selection_model(void* self, void* selectionModel);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QItemSelectionModel*) ```
void q_undoview_on_set_selection_model(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, const char* search ```
void q_undoview_keyboard_search(void* self, const char* search);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, const char* search ```
void q_undoview_qbase_keyboard_search(void* self, const char* search);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, const char*) ```
void q_undoview_on_keyboard_search(void* self, void (*slot)(void*, const char*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, int row ```
int32_t q_undoview_size_hint_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, int row ```
int32_t q_undoview_qbase_size_hint_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, int32_t (*slot)(QUndoView*, int) ```
void q_undoview_on_size_hint_for_row(void* self, int32_t (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, int column ```
int32_t q_undoview_size_hint_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, int column ```
int32_t q_undoview_qbase_size_hint_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, int32_t (*slot)(QUndoView*, int) ```
void q_undoview_on_size_hint_for_column(void* self, int32_t (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QModelIndex* index ```
QAbstractItemDelegate* q_undoview_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QModelIndex* index ```
QAbstractItemDelegate* q_undoview_qbase_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, QAbstractItemDelegate* (*slot)(QUndoView*, QModelIndex*) ```
void q_undoview_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, enum Qt__InputMethodQuery query ```
QVariant* q_undoview_input_method_query(void* self, int64_t query);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, enum Qt__InputMethodQuery query ```
QVariant* q_undoview_qbase_input_method_query(void* self, int64_t query);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, QVariant* (*slot)(QUndoView*, enum Qt__InputMethodQuery) ```
void q_undoview_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
void q_undoview_select_all(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
void q_undoview_qbase_select_all(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)() ```
void q_undoview_on_select_all(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
void q_undoview_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
void q_undoview_qbase_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)() ```
void q_undoview_on_update_editor_data(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
void q_undoview_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
void q_undoview_qbase_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)() ```
void q_undoview_on_update_editor_geometries(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, int action ```
void q_undoview_vertical_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, int action ```
void q_undoview_qbase_vertical_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, int) ```
void q_undoview_on_vertical_scrollbar_action(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, int action ```
void q_undoview_horizontal_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, int action ```
void q_undoview_qbase_horizontal_scrollbar_action(void* self, int action);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, int) ```
void q_undoview_on_horizontal_scrollbar_action(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, int value ```
void q_undoview_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, int value ```
void q_undoview_qbase_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, int) ```
void q_undoview_on_vertical_scrollbar_value_changed(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, int value ```
void q_undoview_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, int value ```
void q_undoview_qbase_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, int) ```
void q_undoview_on_horizontal_scrollbar_value_changed(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_undoview_close_editor(void* self, void* editor, int64_t hint);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_undoview_qbase_close_editor(void* self, void* editor, int64_t hint);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QWidget*, enum QAbstractItemDelegate__EndEditHint) ```
void q_undoview_on_close_editor(void* self, void (*slot)(void*, void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QWidget* editor ```
void q_undoview_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QWidget* editor ```
void q_undoview_qbase_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QWidget*) ```
void q_undoview_on_commit_data(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QObject* editor ```
void q_undoview_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QObject* editor ```
void q_undoview_qbase_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QObject*) ```
void q_undoview_on_editor_destroyed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_undoview_edit2(void* self, void* index, int64_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_undoview_qbase_edit2(void* self, void* index, int64_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, bool (*slot)(QUndoView*, QModelIndex*, enum QAbstractItemView__EditTrigger, QEvent*) ```
void q_undoview_on_edit2(void* self, bool (*slot)(void*, void*, int64_t, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QModelIndex* index, QEvent* event ```
int64_t q_undoview_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QModelIndex* index, QEvent* event ```
int64_t q_undoview_qbase_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, int64_t (*slot)(QUndoView*, QModelIndex*, QEvent*) ```
void q_undoview_on_selection_command(void* self, int64_t (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, bool next ```
bool q_undoview_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, bool next ```
bool q_undoview_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, bool (*slot)(QUndoView*, bool) ```
void q_undoview_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QEvent* event ```
bool q_undoview_viewport_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QEvent* event ```
bool q_undoview_qbase_viewport_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, bool (*slot)(QUndoView*, QEvent*) ```
void q_undoview_on_viewport_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QMouseEvent* event ```
void q_undoview_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QMouseEvent* event ```
void q_undoview_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QMouseEvent*) ```
void q_undoview_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QMouseEvent* event ```
void q_undoview_mouse_double_click_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QMouseEvent* event ```
void q_undoview_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QMouseEvent*) ```
void q_undoview_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QDragEnterEvent* event ```
void q_undoview_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QDragEnterEvent* event ```
void q_undoview_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QDragEnterEvent*) ```
void q_undoview_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QFocusEvent* event ```
void q_undoview_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QFocusEvent* event ```
void q_undoview_qbase_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QFocusEvent*) ```
void q_undoview_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QFocusEvent* event ```
void q_undoview_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QFocusEvent* event ```
void q_undoview_qbase_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QFocusEvent*) ```
void q_undoview_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QKeyEvent* event ```
void q_undoview_key_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QKeyEvent* event ```
void q_undoview_qbase_key_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QKeyEvent*) ```
void q_undoview_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QInputMethodEvent* event ```
void q_undoview_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QInputMethodEvent* event ```
void q_undoview_qbase_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QInputMethodEvent*) ```
void q_undoview_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QObject* object, QEvent* event ```
bool q_undoview_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QObject* object, QEvent* event ```
bool q_undoview_qbase_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, bool (*slot)(QUndoView*, QObject*, QEvent*) ```
void q_undoview_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
QSize* q_undoview_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
QSize* q_undoview_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, QSize* (*slot)() ```
void q_undoview_on_minimum_size_hint(void* self, QSize* (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
QSize* q_undoview_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
QSize* q_undoview_qbase_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, QSize* (*slot)() ```
void q_undoview_on_size_hint(void* self, QSize* (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QWidget* viewport ```
void q_undoview_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QWidget* viewport ```
void q_undoview_qbase_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QWidget*) ```
void q_undoview_on_setup_viewport(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QContextMenuEvent* param1 ```
void q_undoview_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QContextMenuEvent* param1 ```
void q_undoview_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QContextMenuEvent*) ```
void q_undoview_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QEvent* param1 ```
void q_undoview_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QEvent* param1 ```
void q_undoview_qbase_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QEvent*) ```
void q_undoview_on_change_event(void* self, void (*slot)(void*, void*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QStyleOptionFrame* option ```
void q_undoview_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QStyleOptionFrame* option ```
void q_undoview_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QStyleOptionFrame*) ```
void q_undoview_on_init_style_option(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
int32_t q_undoview_dev_type(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
int32_t q_undoview_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, int32_t (*slot)() ```
void q_undoview_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, bool visible ```
void q_undoview_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, bool visible ```
void q_undoview_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, bool) ```
void q_undoview_on_set_visible(void* self, void (*slot)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, int param1 ```
int32_t q_undoview_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, int param1 ```
int32_t q_undoview_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, int32_t (*slot)(QUndoView*, int) ```
void q_undoview_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
bool q_undoview_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
bool q_undoview_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, bool (*slot)() ```
void q_undoview_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
QPaintEngine* q_undoview_paint_engine(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
QPaintEngine* q_undoview_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, QPaintEngine* (*slot)() ```
void q_undoview_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QKeyEvent* event ```
void q_undoview_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QKeyEvent* event ```
void q_undoview_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QKeyEvent*) ```
void q_undoview_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QEnterEvent* event ```
void q_undoview_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QEnterEvent* event ```
void q_undoview_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QEnterEvent*) ```
void q_undoview_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QEvent* event ```
void q_undoview_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QEvent* event ```
void q_undoview_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QEvent*) ```
void q_undoview_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QMoveEvent* event ```
void q_undoview_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QMoveEvent* event ```
void q_undoview_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QMoveEvent*) ```
void q_undoview_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QCloseEvent* event ```
void q_undoview_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QCloseEvent* event ```
void q_undoview_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QCloseEvent*) ```
void q_undoview_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QTabletEvent* event ```
void q_undoview_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QTabletEvent* event ```
void q_undoview_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QTabletEvent*) ```
void q_undoview_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QActionEvent* event ```
void q_undoview_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QActionEvent* event ```
void q_undoview_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QActionEvent*) ```
void q_undoview_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QShowEvent* event ```
void q_undoview_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QShowEvent* event ```
void q_undoview_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QShowEvent*) ```
void q_undoview_on_show_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QHideEvent* event ```
void q_undoview_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QHideEvent* event ```
void q_undoview_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QHideEvent*) ```
void q_undoview_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, const char* eventType, void* message, intptr_t* result ```
bool q_undoview_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, const char* eventType, void* message, intptr_t* result ```
bool q_undoview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, bool (*slot)(QUndoView*, const char*, void*, intptr_t*) ```
void q_undoview_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_undoview_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_undoview_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, int32_t (*slot)(QUndoView*, enum QPaintDevice__PaintDeviceMetric) ```
void q_undoview_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QPainter* painter ```
void q_undoview_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QPainter* painter ```
void q_undoview_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QPainter*) ```
void q_undoview_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QPoint* offset ```
QPaintDevice* q_undoview_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QPoint* offset ```
QPaintDevice* q_undoview_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, QPaintDevice* (*slot)(QUndoView*, QPoint*) ```
void q_undoview_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
QPainter* q_undoview_shared_painter(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
QPainter* q_undoview_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, QPainter* (*slot)() ```
void q_undoview_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QChildEvent* event ```
void q_undoview_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QChildEvent* event ```
void q_undoview_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QChildEvent*) ```
void q_undoview_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QEvent* event ```
void q_undoview_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QEvent* event ```
void q_undoview_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QEvent*) ```
void q_undoview_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QMetaMethod* signal ```
void q_undoview_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QMetaMethod* signal ```
void q_undoview_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QMetaMethod*) ```
void q_undoview_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QMetaMethod* signal ```
void q_undoview_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QMetaMethod* signal ```
void q_undoview_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QMetaMethod*) ```
void q_undoview_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, int width, int height ```
void q_undoview_resize_contents(void* self, int width, int height);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, int width, int height ```
void q_undoview_qbase_resize_contents(void* self, int width, int height);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, int, int) ```
void q_undoview_on_resize_contents(void* self, void (*slot)(void*, int, int));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
QSize* q_undoview_contents_size(void* self);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
QSize* q_undoview_qbase_contents_size(void* self);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, QSize* (*slot)() ```
void q_undoview_on_contents_size(void* self, QSize* (*slot)());

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QModelIndex* index ```
QRect* q_undoview_rect_for_index(void* self, void* index);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QModelIndex* index ```
QRect* q_undoview_qbase_rect_for_index(void* self, void* index);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, QRect* (*slot)(QUndoView*, QModelIndex*) ```
void q_undoview_on_rect_for_index(void* self, QRect* (*slot)(void*, void*));

/// Inherited from QListView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QPoint* position, QModelIndex* index ```
void q_undoview_set_position_for_index(void* self, void* position, void* index);

/// Inherited from QListView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QPoint* position, QModelIndex* index ```
void q_undoview_qbase_set_position_for_index(void* self, void* position, void* index);

/// Inherited from QListView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QPoint*, QModelIndex*) ```
void q_undoview_on_set_position_for_index(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
int64_t q_undoview_state(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
int64_t q_undoview_qbase_state(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, int64_t (*slot)() ```
void q_undoview_on_state(void* self, int64_t (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, enum QAbstractItemView__State state ```
void q_undoview_set_state(void* self, int64_t state);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, enum QAbstractItemView__State state ```
void q_undoview_qbase_set_state(void* self, int64_t state);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, enum QAbstractItemView__State) ```
void q_undoview_on_set_state(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
void q_undoview_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
void q_undoview_qbase_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)() ```
void q_undoview_on_schedule_delayed_items_layout(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
void q_undoview_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
void q_undoview_qbase_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)() ```
void q_undoview_on_execute_delayed_items_layout(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QRegion* region ```
void q_undoview_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QRegion* region ```
void q_undoview_qbase_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QRegion*) ```
void q_undoview_on_set_dirty_region(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, int dx, int dy ```
void q_undoview_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, int dx, int dy ```
void q_undoview_qbase_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, int, int) ```
void q_undoview_on_scroll_dirty_region(void* self, void (*slot)(void*, int, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
QPoint* q_undoview_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
QPoint* q_undoview_qbase_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, QPoint* (*slot)() ```
void q_undoview_on_dirty_region_offset(void* self, QPoint* (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
void q_undoview_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
void q_undoview_qbase_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)() ```
void q_undoview_on_start_auto_scroll(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
void q_undoview_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
void q_undoview_qbase_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)() ```
void q_undoview_on_stop_auto_scroll(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
void q_undoview_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
void q_undoview_qbase_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)() ```
void q_undoview_on_do_auto_scroll(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
int64_t q_undoview_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
int64_t q_undoview_qbase_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, int64_t (*slot)() ```
void q_undoview_on_drop_indicator_position(void* self, int64_t (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, int left, int top, int right, int bottom ```
void q_undoview_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, int left, int top, int right, int bottom ```
void q_undoview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, int, int, int, int) ```
void q_undoview_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
QMargins* q_undoview_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
QMargins* q_undoview_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, QMargins* (*slot)() ```
void q_undoview_on_viewport_margins(void* self, QMargins* (*slot)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QPainter* param1 ```
void q_undoview_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QPainter* param1 ```
void q_undoview_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)(QUndoView*, QPainter*) ```
void q_undoview_on_draw_frame(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
void q_undoview_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
void q_undoview_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)() ```
void q_undoview_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
void q_undoview_create(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
void q_undoview_qbase_create(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)() ```
void q_undoview_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
void q_undoview_destroy(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
void q_undoview_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, void (*slot)() ```
void q_undoview_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
bool q_undoview_focus_next_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
bool q_undoview_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, bool (*slot)() ```
void q_undoview_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
bool q_undoview_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
bool q_undoview_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, bool (*slot)() ```
void q_undoview_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
QObject* q_undoview_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
QObject* q_undoview_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, QObject* (*slot)() ```
void q_undoview_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self ```
int32_t q_undoview_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self ```
int32_t q_undoview_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, int32_t (*slot)() ```
void q_undoview_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, const char* signal ```
int32_t q_undoview_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, const char* signal ```
int32_t q_undoview_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, int32_t (*slot)(QUndoView*, const char*) ```
void q_undoview_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QUndoView* self, QMetaMethod* signal ```
bool q_undoview_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QUndoView* self, QMetaMethod* signal ```
bool q_undoview_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QUndoView* self, bool (*slot)(QUndoView*, QMetaMethod*) ```
void q_undoview_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QUndoView* self ```
void q_undoview_delete(void* self);

#endif
