#include "libqabstractitemdelegate.hpp"
#include "libqabstractitemmodel.hpp"
#include "libqabstractscrollarea.hpp"
#include "libqaction.hpp"
#include "libqevent.hpp"
#include "libqanystringview.hpp"
#include "libqbackingstore.hpp"
#include "libqbindingstorage.hpp"
#include "libqbitmap.hpp"
#include "libqcursor.hpp"
#include "libqfont.hpp"
#include "libqfontinfo.hpp"
#include "libqfontmetrics.hpp"
#include "libqframe.hpp"
#include "libqgraphicseffect.hpp"
#include "libqgraphicsproxywidget.hpp"
#include "libqicon.hpp"
#include "libqitemselectionmodel.hpp"
#include "libqkeysequence.hpp"
#include "libqlayout.hpp"
#include "libqlocale.hpp"
#include "libqmargins.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpalette.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqscreen.hpp"
#include "libqscrollbar.hpp"
#include "libqsize.hpp"
#include "libqsizepolicy.hpp"
#include <string.h>
#include "libqstyle.hpp"
#include "libqstyleoption.hpp"
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqabstractitemview.hpp"
#include "libqabstractitemview.h"

/// https://doc.qt.io/qt-6/qabstractitemview.html

/// q_abstractitemview_new constructs a new QAbstractItemView object.
///
/// ``` QWidget* parent ```
QAbstractItemView* q_abstractitemview_new(void* parent) {
    return QAbstractItemView_new((QWidget*)parent);
}

/// q_abstractitemview_new2 constructs a new QAbstractItemView object.
///
///
QAbstractItemView* q_abstractitemview_new2() {
    return QAbstractItemView_new2();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAbstractItemView* self ```
QMetaObject* q_abstractitemview_meta_object(void* self) {
    return QAbstractItemView_MetaObject((QAbstractItemView*)self);
}

/// ``` QAbstractItemView* self, const char* param1 ```
void* q_abstractitemview_metacast(void* self, const char* param1) {
    return QAbstractItemView_Metacast((QAbstractItemView*)self, param1);
}

/// ``` QAbstractItemView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractitemview_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractItemView_Metacall((QAbstractItemView*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, int32_t (*slot)(QAbstractItemView*, enum QMetaObject__Call, int, void*) ```
void q_abstractitemview_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAbstractItemView_OnMetacall((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractitemview_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractItemView_QBaseMetacall((QAbstractItemView*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_abstractitemview_tr(const char* s) {
    libqt_string _str = QAbstractItemView_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
///
/// ``` QAbstractItemView* self, QAbstractItemModel* model ```
void q_abstractitemview_set_model(void* self, void* model) {
    QAbstractItemView_SetModel((QAbstractItemView*)self, (QAbstractItemModel*)model);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QAbstractItemModel*) ```
void q_abstractitemview_on_set_model(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnSetModel((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QAbstractItemModel* model ```
void q_abstractitemview_qbase_set_model(void* self, void* model) {
    QAbstractItemView_QBaseSetModel((QAbstractItemView*)self, (QAbstractItemModel*)model);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#model)
///
/// ``` QAbstractItemView* self ```
QAbstractItemModel* q_abstractitemview_model(void* self) {
    return QAbstractItemView_Model((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionModel)
///
/// ``` QAbstractItemView* self, QItemSelectionModel* selectionModel ```
void q_abstractitemview_set_selection_model(void* self, void* selectionModel) {
    QAbstractItemView_SetSelectionModel((QAbstractItemView*)self, (QItemSelectionModel*)selectionModel);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QItemSelectionModel*) ```
void q_abstractitemview_on_set_selection_model(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnSetSelectionModel((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QItemSelectionModel* selectionModel ```
void q_abstractitemview_qbase_set_selection_model(void* self, void* selectionModel) {
    QAbstractItemView_QBaseSetSelectionModel((QAbstractItemView*)self, (QItemSelectionModel*)selectionModel);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
///
/// ``` QAbstractItemView* self ```
QItemSelectionModel* q_abstractitemview_selection_model(void* self) {
    return QAbstractItemView_SelectionModel((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
///
/// ``` QAbstractItemView* self, QAbstractItemDelegate* delegate ```
void q_abstractitemview_set_item_delegate(void* self, void* delegate) {
    QAbstractItemView_SetItemDelegate((QAbstractItemView*)self, (QAbstractItemDelegate*)delegate);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QAbstractItemView* self ```
QAbstractItemDelegate* q_abstractitemview_item_delegate(void* self) {
    return QAbstractItemView_ItemDelegate((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
///
/// ``` QAbstractItemView* self, enum QAbstractItemView__SelectionMode mode ```
void q_abstractitemview_set_selection_mode(void* self, int64_t mode) {
    QAbstractItemView_SetSelectionMode((QAbstractItemView*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_selection_mode(void* self) {
    return QAbstractItemView_SelectionMode((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
///
/// ``` QAbstractItemView* self, enum QAbstractItemView__SelectionBehavior behavior ```
void q_abstractitemview_set_selection_behavior(void* self, int64_t behavior) {
    QAbstractItemView_SetSelectionBehavior((QAbstractItemView*)self, behavior);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_selection_behavior(void* self) {
    return QAbstractItemView_SelectionBehavior((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
///
/// ``` QAbstractItemView* self ```
QModelIndex* q_abstractitemview_current_index(void* self) {
    return QAbstractItemView_CurrentIndex((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
///
/// ``` QAbstractItemView* self ```
QModelIndex* q_abstractitemview_root_index(void* self) {
    return QAbstractItemView_RootIndex((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
///
/// ``` QAbstractItemView* self, int triggers ```
void q_abstractitemview_set_edit_triggers(void* self, int64_t triggers) {
    QAbstractItemView_SetEditTriggers((QAbstractItemView*)self, triggers);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_edit_triggers(void* self) {
    return QAbstractItemView_EditTriggers((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
///
/// ``` QAbstractItemView* self, enum QAbstractItemView__ScrollMode mode ```
void q_abstractitemview_set_vertical_scroll_mode(void* self, int64_t mode) {
    QAbstractItemView_SetVerticalScrollMode((QAbstractItemView*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_vertical_scroll_mode(void* self) {
    return QAbstractItemView_VerticalScrollMode((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_reset_vertical_scroll_mode(void* self) {
    QAbstractItemView_ResetVerticalScrollMode((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
///
/// ``` QAbstractItemView* self, enum QAbstractItemView__ScrollMode mode ```
void q_abstractitemview_set_horizontal_scroll_mode(void* self, int64_t mode) {
    QAbstractItemView_SetHorizontalScrollMode((QAbstractItemView*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_horizontal_scroll_mode(void* self) {
    return QAbstractItemView_HorizontalScrollMode((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_reset_horizontal_scroll_mode(void* self) {
    QAbstractItemView_ResetHorizontalScrollMode((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
///
/// ``` QAbstractItemView* self, bool enable ```
void q_abstractitemview_set_auto_scroll(void* self, bool enable) {
    QAbstractItemView_SetAutoScroll((QAbstractItemView*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_has_auto_scroll(void* self) {
    return QAbstractItemView_HasAutoScroll((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
///
/// ``` QAbstractItemView* self, int margin ```
void q_abstractitemview_set_auto_scroll_margin(void* self, int margin) {
    QAbstractItemView_SetAutoScrollMargin((QAbstractItemView*)self, margin);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_auto_scroll_margin(void* self) {
    return QAbstractItemView_AutoScrollMargin((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
///
/// ``` QAbstractItemView* self, bool enable ```
void q_abstractitemview_set_tab_key_navigation(void* self, bool enable) {
    QAbstractItemView_SetTabKeyNavigation((QAbstractItemView*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_tab_key_navigation(void* self) {
    return QAbstractItemView_TabKeyNavigation((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
///
/// ``` QAbstractItemView* self, bool enable ```
void q_abstractitemview_set_drop_indicator_shown(void* self, bool enable) {
    QAbstractItemView_SetDropIndicatorShown((QAbstractItemView*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_show_drop_indicator(void* self) {
    return QAbstractItemView_ShowDropIndicator((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
///
/// ``` QAbstractItemView* self, bool enable ```
void q_abstractitemview_set_drag_enabled(void* self, bool enable) {
    QAbstractItemView_SetDragEnabled((QAbstractItemView*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_drag_enabled(void* self) {
    return QAbstractItemView_DragEnabled((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
///
/// ``` QAbstractItemView* self, bool overwrite ```
void q_abstractitemview_set_drag_drop_overwrite_mode(void* self, bool overwrite) {
    QAbstractItemView_SetDragDropOverwriteMode((QAbstractItemView*)self, overwrite);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_drag_drop_overwrite_mode(void* self) {
    return QAbstractItemView_DragDropOverwriteMode((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
///
/// ``` QAbstractItemView* self, enum QAbstractItemView__DragDropMode behavior ```
void q_abstractitemview_set_drag_drop_mode(void* self, int64_t behavior) {
    QAbstractItemView_SetDragDropMode((QAbstractItemView*)self, behavior);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_drag_drop_mode(void* self) {
    return QAbstractItemView_DragDropMode((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
///
/// ``` QAbstractItemView* self, enum Qt__DropAction dropAction ```
void q_abstractitemview_set_default_drop_action(void* self, int64_t dropAction) {
    QAbstractItemView_SetDefaultDropAction((QAbstractItemView*)self, dropAction);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_default_drop_action(void* self) {
    return QAbstractItemView_DefaultDropAction((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
///
/// ``` QAbstractItemView* self, bool enable ```
void q_abstractitemview_set_alternating_row_colors(void* self, bool enable) {
    QAbstractItemView_SetAlternatingRowColors((QAbstractItemView*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_alternating_row_colors(void* self) {
    return QAbstractItemView_AlternatingRowColors((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
///
/// ``` QAbstractItemView* self, QSize* size ```
void q_abstractitemview_set_icon_size(void* self, void* size) {
    QAbstractItemView_SetIconSize((QAbstractItemView*)self, (QSize*)size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
///
/// ``` QAbstractItemView* self ```
QSize* q_abstractitemview_icon_size(void* self) {
    return QAbstractItemView_IconSize((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
///
/// ``` QAbstractItemView* self, enum Qt__TextElideMode mode ```
void q_abstractitemview_set_text_elide_mode(void* self, int64_t mode) {
    QAbstractItemView_SetTextElideMode((QAbstractItemView*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_text_elide_mode(void* self) {
    return QAbstractItemView_TextElideMode((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// ``` QAbstractItemView* self, const char* search ```
void q_abstractitemview_keyboard_search(void* self, const char* search) {
    QAbstractItemView_KeyboardSearch((QAbstractItemView*)self, qstring(search));
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, const char*) ```
void q_abstractitemview_on_keyboard_search(void* self, void (*slot)(void*, const char*)) {
    QAbstractItemView_OnKeyboardSearch((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, const char* search ```
void q_abstractitemview_qbase_keyboard_search(void* self, const char* search) {
    QAbstractItemView_QBaseKeyboardSearch((QAbstractItemView*)self, qstring(search));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#visualRect)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
QRect* q_abstractitemview_visual_rect(void* self, void* index) {
    return QAbstractItemView_VisualRect((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, QRect* (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_abstractitemview_on_visual_rect(void* self, QRect* (*slot)(void*, void*)) {
    QAbstractItemView_OnVisualRect((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
QRect* q_abstractitemview_qbase_visual_rect(void* self, void* index) {
    return QAbstractItemView_QBaseVisualRect((QAbstractItemView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollTo)
///
/// ``` QAbstractItemView* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_abstractitemview_scroll_to(void* self, void* index, int64_t hint) {
    QAbstractItemView_ScrollTo((QAbstractItemView*)self, (QModelIndex*)index, hint);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QModelIndex*, enum QAbstractItemView__ScrollHint) ```
void q_abstractitemview_on_scroll_to(void* self, void (*slot)(void*, void*, int64_t)) {
    QAbstractItemView_OnScrollTo((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_abstractitemview_qbase_scroll_to(void* self, void* index, int64_t hint) {
    QAbstractItemView_QBaseScrollTo((QAbstractItemView*)self, (QModelIndex*)index, hint);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexAt)
///
/// ``` QAbstractItemView* self, QPoint* point ```
QModelIndex* q_abstractitemview_index_at(void* self, void* point) {
    return QAbstractItemView_IndexAt((QAbstractItemView*)self, (QPoint*)point);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, QModelIndex* (*slot)(QAbstractItemView*, QPoint*) ```
void q_abstractitemview_on_index_at(void* self, QModelIndex* (*slot)(void*, void*)) {
    QAbstractItemView_OnIndexAt((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QPoint* point ```
QModelIndex* q_abstractitemview_qbase_index_at(void* self, void* point) {
    return QAbstractItemView_QBaseIndexAt((QAbstractItemView*)self, (QPoint*)point);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
QSize* q_abstractitemview_size_hint_for_index(void* self, void* index) {
    return QAbstractItemView_SizeHintForIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
///
/// ``` QAbstractItemView* self, int row ```
int32_t q_abstractitemview_size_hint_for_row(void* self, int row) {
    return QAbstractItemView_SizeHintForRow((QAbstractItemView*)self, row);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, int32_t (*slot)(QAbstractItemView*, int) ```
void q_abstractitemview_on_size_hint_for_row(void* self, int32_t (*slot)(void*, int)) {
    QAbstractItemView_OnSizeHintForRow((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, int row ```
int32_t q_abstractitemview_qbase_size_hint_for_row(void* self, int row) {
    return QAbstractItemView_QBaseSizeHintForRow((QAbstractItemView*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
///
/// ``` QAbstractItemView* self, int column ```
int32_t q_abstractitemview_size_hint_for_column(void* self, int column) {
    return QAbstractItemView_SizeHintForColumn((QAbstractItemView*)self, column);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, int32_t (*slot)(QAbstractItemView*, int) ```
void q_abstractitemview_on_size_hint_for_column(void* self, int32_t (*slot)(void*, int)) {
    QAbstractItemView_OnSizeHintForColumn((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, int column ```
int32_t q_abstractitemview_qbase_size_hint_for_column(void* self, int column) {
    return QAbstractItemView_QBaseSizeHintForColumn((QAbstractItemView*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#openPersistentEditor)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
void q_abstractitemview_open_persistent_editor(void* self, void* index) {
    QAbstractItemView_OpenPersistentEditor((QAbstractItemView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closePersistentEditor)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
void q_abstractitemview_close_persistent_editor(void* self, void* index) {
    QAbstractItemView_ClosePersistentEditor((QAbstractItemView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#isPersistentEditorOpen)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
bool q_abstractitemview_is_persistent_editor_open(void* self, void* index) {
    return QAbstractItemView_IsPersistentEditorOpen((QAbstractItemView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
///
/// ``` QAbstractItemView* self, QModelIndex* index, QWidget* widget ```
void q_abstractitemview_set_index_widget(void* self, void* index, void* widget) {
    QAbstractItemView_SetIndexWidget((QAbstractItemView*)self, (QModelIndex*)index, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
QWidget* q_abstractitemview_index_widget(void* self, void* index) {
    return QAbstractItemView_IndexWidget((QAbstractItemView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
///
/// ``` QAbstractItemView* self, int row, QAbstractItemDelegate* delegate ```
void q_abstractitemview_set_item_delegate_for_row(void* self, int row, void* delegate) {
    QAbstractItemView_SetItemDelegateForRow((QAbstractItemView*)self, row, (QAbstractItemDelegate*)delegate);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
///
/// ``` QAbstractItemView* self, int row ```
QAbstractItemDelegate* q_abstractitemview_item_delegate_for_row(void* self, int row) {
    return QAbstractItemView_ItemDelegateForRow((QAbstractItemView*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
///
/// ``` QAbstractItemView* self, int column, QAbstractItemDelegate* delegate ```
void q_abstractitemview_set_item_delegate_for_column(void* self, int column, void* delegate) {
    QAbstractItemView_SetItemDelegateForColumn((QAbstractItemView*)self, column, (QAbstractItemDelegate*)delegate);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
///
/// ``` QAbstractItemView* self, int column ```
QAbstractItemDelegate* q_abstractitemview_item_delegate_for_column(void* self, int column) {
    return QAbstractItemView_ItemDelegateForColumn((QAbstractItemView*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
QAbstractItemDelegate* q_abstractitemview_item_delegate_with_index(void* self, void* index) {
    return QAbstractItemView_ItemDelegateWithIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
QAbstractItemDelegate* q_abstractitemview_item_delegate_for_index(void* self, void* index) {
    return QAbstractItemView_ItemDelegateForIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, QAbstractItemDelegate* (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_abstractitemview_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*slot)(void*, void*)) {
    QAbstractItemView_OnItemDelegateForIndex((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
QAbstractItemDelegate* q_abstractitemview_qbase_item_delegate_for_index(void* self, void* index) {
    return QAbstractItemView_QBaseItemDelegateForIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// ``` QAbstractItemView* self, enum Qt__InputMethodQuery query ```
QVariant* q_abstractitemview_input_method_query(void* self, int64_t query) {
    return QAbstractItemView_InputMethodQuery((QAbstractItemView*)self, query);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, QVariant* (*slot)(QAbstractItemView*, enum Qt__InputMethodQuery) ```
void q_abstractitemview_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QAbstractItemView_OnInputMethodQuery((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, enum Qt__InputMethodQuery query ```
QVariant* q_abstractitemview_qbase_input_method_query(void* self, int64_t query) {
    return QAbstractItemView_QBaseInputMethodQuery((QAbstractItemView*)self, query);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_reset(void* self) {
    QAbstractItemView_Reset((QAbstractItemView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)() ```
void q_abstractitemview_on_reset(void* self, void (*slot)()) {
    QAbstractItemView_OnReset((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_qbase_reset(void* self) {
    QAbstractItemView_QBaseReset((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setRootIndex)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
void q_abstractitemview_set_root_index(void* self, void* index) {
    QAbstractItemView_SetRootIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_abstractitemview_on_set_root_index(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnSetRootIndex((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
void q_abstractitemview_qbase_set_root_index(void* self, void* index) {
    QAbstractItemView_QBaseSetRootIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doItemsLayout)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_do_items_layout(void* self) {
    QAbstractItemView_DoItemsLayout((QAbstractItemView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)() ```
void q_abstractitemview_on_do_items_layout(void* self, void (*slot)()) {
    QAbstractItemView_OnDoItemsLayout((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_qbase_do_items_layout(void* self) {
    QAbstractItemView_QBaseDoItemsLayout((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_select_all(void* self) {
    QAbstractItemView_SelectAll((QAbstractItemView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)() ```
void q_abstractitemview_on_select_all(void* self, void (*slot)()) {
    QAbstractItemView_OnSelectAll((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_qbase_select_all(void* self) {
    QAbstractItemView_QBaseSelectAll((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
void q_abstractitemview_edit(void* self, void* index) {
    QAbstractItemView_Edit((QAbstractItemView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_clear_selection(void* self) {
    QAbstractItemView_ClearSelection((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
void q_abstractitemview_set_current_index(void* self, void* index) {
    QAbstractItemView_SetCurrentIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_scroll_to_top(void* self) {
    QAbstractItemView_ScrollToTop((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_scroll_to_bottom(void* self) {
    QAbstractItemView_ScrollToBottom((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#update)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
void q_abstractitemview_update(void* self, void* index) {
    QAbstractItemView_Update((QAbstractItemView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
///
/// ``` QAbstractItemView* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_abstractitemview_data_changed(void* self, void* topLeft, void* bottomRight, int* roles[]) {
    size_t roles_len = 0;
    while (roles[roles_len] != NULL) {
        roles_len++;
    }
    libqt_list roles_list = {
        .len = roles_len,
        .data = {(int*)roles},
    };
    QAbstractItemView_DataChanged((QAbstractItemView*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles_list);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QModelIndex*, QModelIndex*, int*[]) ```
void q_abstractitemview_on_data_changed(void* self, void (*slot)(void*, void*, void*, int*)) {
    QAbstractItemView_OnDataChanged((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_abstractitemview_qbase_data_changed(void* self, void* topLeft, void* bottomRight, int* roles[]) {
    size_t roles_len = 0;
    while (roles[roles_len] != NULL) {
        roles_len++;
    }
    libqt_list roles_list = {
        .len = roles_len,
        .data = {(int*)roles},
    };
    QAbstractItemView_QBaseDataChanged((QAbstractItemView*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsInserted)
///
/// ``` QAbstractItemView* self, QModelIndex* parent, int start, int end ```
void q_abstractitemview_rows_inserted(void* self, void* parent, int start, int end) {
    QAbstractItemView_RowsInserted((QAbstractItemView*)self, (QModelIndex*)parent, start, end);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QModelIndex*, int, int) ```
void q_abstractitemview_on_rows_inserted(void* self, void (*slot)(void*, void*, int, int)) {
    QAbstractItemView_OnRowsInserted((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QModelIndex* parent, int start, int end ```
void q_abstractitemview_qbase_rows_inserted(void* self, void* parent, int start, int end) {
    QAbstractItemView_QBaseRowsInserted((QAbstractItemView*)self, (QModelIndex*)parent, start, end);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
///
/// ``` QAbstractItemView* self, QModelIndex* parent, int start, int end ```
void q_abstractitemview_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QAbstractItemView_RowsAboutToBeRemoved((QAbstractItemView*)self, (QModelIndex*)parent, start, end);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QModelIndex*, int, int) ```
void q_abstractitemview_on_rows_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int)) {
    QAbstractItemView_OnRowsAboutToBeRemoved((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QModelIndex* parent, int start, int end ```
void q_abstractitemview_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QAbstractItemView_QBaseRowsAboutToBeRemoved((QAbstractItemView*)self, (QModelIndex*)parent, start, end);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionChanged)
///
/// ``` QAbstractItemView* self, QItemSelection* selected, QItemSelection* deselected ```
void q_abstractitemview_selection_changed(void* self, void* selected, void* deselected) {
    QAbstractItemView_SelectionChanged((QAbstractItemView*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QItemSelection*, QItemSelection*) ```
void q_abstractitemview_on_selection_changed(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractItemView_OnSelectionChanged((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QItemSelection* selected, QItemSelection* deselected ```
void q_abstractitemview_qbase_selection_changed(void* self, void* selected, void* deselected) {
    QAbstractItemView_QBaseSelectionChanged((QAbstractItemView*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentChanged)
///
/// ``` QAbstractItemView* self, QModelIndex* current, QModelIndex* previous ```
void q_abstractitemview_current_changed(void* self, void* current, void* previous) {
    QAbstractItemView_CurrentChanged((QAbstractItemView*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QModelIndex*, QModelIndex*) ```
void q_abstractitemview_on_current_changed(void* self, void (*slot)(void*, void*, void*)) {
    QAbstractItemView_OnCurrentChanged((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QModelIndex* current, QModelIndex* previous ```
void q_abstractitemview_qbase_current_changed(void* self, void* current, void* previous) {
    QAbstractItemView_QBaseCurrentChanged((QAbstractItemView*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_update_editor_data(void* self) {
    QAbstractItemView_UpdateEditorData((QAbstractItemView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)() ```
void q_abstractitemview_on_update_editor_data(void* self, void (*slot)()) {
    QAbstractItemView_OnUpdateEditorData((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_qbase_update_editor_data(void* self) {
    QAbstractItemView_QBaseUpdateEditorData((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_update_editor_geometries(void* self) {
    QAbstractItemView_UpdateEditorGeometries((QAbstractItemView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)() ```
void q_abstractitemview_on_update_editor_geometries(void* self, void (*slot)()) {
    QAbstractItemView_OnUpdateEditorGeometries((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_qbase_update_editor_geometries(void* self) {
    QAbstractItemView_QBaseUpdateEditorGeometries((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateGeometries)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_update_geometries(void* self) {
    QAbstractItemView_UpdateGeometries((QAbstractItemView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)() ```
void q_abstractitemview_on_update_geometries(void* self, void (*slot)()) {
    QAbstractItemView_OnUpdateGeometries((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_qbase_update_geometries(void* self) {
    QAbstractItemView_QBaseUpdateGeometries((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
///
/// ``` QAbstractItemView* self, int action ```
void q_abstractitemview_vertical_scrollbar_action(void* self, int action) {
    QAbstractItemView_VerticalScrollbarAction((QAbstractItemView*)self, action);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, int) ```
void q_abstractitemview_on_vertical_scrollbar_action(void* self, void (*slot)(void*, int)) {
    QAbstractItemView_OnVerticalScrollbarAction((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, int action ```
void q_abstractitemview_qbase_vertical_scrollbar_action(void* self, int action) {
    QAbstractItemView_QBaseVerticalScrollbarAction((QAbstractItemView*)self, action);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
///
/// ``` QAbstractItemView* self, int action ```
void q_abstractitemview_horizontal_scrollbar_action(void* self, int action) {
    QAbstractItemView_HorizontalScrollbarAction((QAbstractItemView*)self, action);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, int) ```
void q_abstractitemview_on_horizontal_scrollbar_action(void* self, void (*slot)(void*, int)) {
    QAbstractItemView_OnHorizontalScrollbarAction((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, int action ```
void q_abstractitemview_qbase_horizontal_scrollbar_action(void* self, int action) {
    QAbstractItemView_QBaseHorizontalScrollbarAction((QAbstractItemView*)self, action);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// ``` QAbstractItemView* self, int value ```
void q_abstractitemview_vertical_scrollbar_value_changed(void* self, int value) {
    QAbstractItemView_VerticalScrollbarValueChanged((QAbstractItemView*)self, value);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, int) ```
void q_abstractitemview_on_vertical_scrollbar_value_changed(void* self, void (*slot)(void*, int)) {
    QAbstractItemView_OnVerticalScrollbarValueChanged((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, int value ```
void q_abstractitemview_qbase_vertical_scrollbar_value_changed(void* self, int value) {
    QAbstractItemView_QBaseVerticalScrollbarValueChanged((QAbstractItemView*)self, value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// ``` QAbstractItemView* self, int value ```
void q_abstractitemview_horizontal_scrollbar_value_changed(void* self, int value) {
    QAbstractItemView_HorizontalScrollbarValueChanged((QAbstractItemView*)self, value);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, int) ```
void q_abstractitemview_on_horizontal_scrollbar_value_changed(void* self, void (*slot)(void*, int)) {
    QAbstractItemView_OnHorizontalScrollbarValueChanged((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, int value ```
void q_abstractitemview_qbase_horizontal_scrollbar_value_changed(void* self, int value) {
    QAbstractItemView_QBaseHorizontalScrollbarValueChanged((QAbstractItemView*)self, value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// ``` QAbstractItemView* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_abstractitemview_close_editor(void* self, void* editor, int64_t hint) {
    QAbstractItemView_CloseEditor((QAbstractItemView*)self, (QWidget*)editor, hint);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QWidget*, enum QAbstractItemDelegate__EndEditHint) ```
void q_abstractitemview_on_close_editor(void* self, void (*slot)(void*, void*, int64_t)) {
    QAbstractItemView_OnCloseEditor((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_abstractitemview_qbase_close_editor(void* self, void* editor, int64_t hint) {
    QAbstractItemView_QBaseCloseEditor((QAbstractItemView*)self, (QWidget*)editor, hint);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// ``` QAbstractItemView* self, QWidget* editor ```
void q_abstractitemview_commit_data(void* self, void* editor) {
    QAbstractItemView_CommitData((QAbstractItemView*)self, (QWidget*)editor);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QWidget*) ```
void q_abstractitemview_on_commit_data(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnCommitData((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QWidget* editor ```
void q_abstractitemview_qbase_commit_data(void* self, void* editor) {
    QAbstractItemView_QBaseCommitData((QAbstractItemView*)self, (QWidget*)editor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// ``` QAbstractItemView* self, QObject* editor ```
void q_abstractitemview_editor_destroyed(void* self, void* editor) {
    QAbstractItemView_EditorDestroyed((QAbstractItemView*)self, (QObject*)editor);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QObject*) ```
void q_abstractitemview_on_editor_destroyed(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnEditorDestroyed((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QObject* editor ```
void q_abstractitemview_qbase_editor_destroyed(void* self, void* editor) {
    QAbstractItemView_QBaseEditorDestroyed((QAbstractItemView*)self, (QObject*)editor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
void q_abstractitemview_pressed(void* self, void* index) {
    QAbstractItemView_Pressed((QAbstractItemView*)self, (QModelIndex*)index);
}

/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_abstractitemview_on_pressed(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Pressed((QAbstractItemView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
void q_abstractitemview_clicked(void* self, void* index) {
    QAbstractItemView_Clicked((QAbstractItemView*)self, (QModelIndex*)index);
}

/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_abstractitemview_on_clicked(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Clicked((QAbstractItemView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
void q_abstractitemview_double_clicked(void* self, void* index) {
    QAbstractItemView_DoubleClicked((QAbstractItemView*)self, (QModelIndex*)index);
}

/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_abstractitemview_on_double_clicked(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_DoubleClicked((QAbstractItemView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
void q_abstractitemview_activated(void* self, void* index) {
    QAbstractItemView_Activated((QAbstractItemView*)self, (QModelIndex*)index);
}

/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_abstractitemview_on_activated(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Activated((QAbstractItemView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
void q_abstractitemview_entered(void* self, void* index) {
    QAbstractItemView_Entered((QAbstractItemView*)self, (QModelIndex*)index);
}

/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_abstractitemview_on_entered(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Entered((QAbstractItemView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_viewport_entered(void* self) {
    QAbstractItemView_ViewportEntered((QAbstractItemView*)self);
}

/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*) ```
void q_abstractitemview_on_viewport_entered(void* self, void (*slot)(void*)) {
    QAbstractItemView_Connect_ViewportEntered((QAbstractItemView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// ``` QAbstractItemView* self, QSize* size ```
void q_abstractitemview_icon_size_changed(void* self, void* size) {
    QAbstractItemView_IconSizeChanged((QAbstractItemView*)self, (QSize*)size);
}

/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QSize*) ```
void q_abstractitemview_on_icon_size_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_IconSizeChanged((QAbstractItemView*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#moveCursor)
///
/// ``` QAbstractItemView* self, enum QAbstractItemView__CursorAction cursorAction, int modifiers ```
QModelIndex* q_abstractitemview_move_cursor(void* self, int64_t cursorAction, int64_t modifiers) {
    return QAbstractItemView_MoveCursor((QAbstractItemView*)self, cursorAction, modifiers);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, QModelIndex* (*slot)(QAbstractItemView*, enum QAbstractItemView__CursorAction, int) ```
void q_abstractitemview_on_move_cursor(void* self, QModelIndex* (*slot)(void*, int64_t, int64_t)) {
    QAbstractItemView_OnMoveCursor((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, enum QAbstractItemView__CursorAction cursorAction, int modifiers ```
QModelIndex* q_abstractitemview_qbase_move_cursor(void* self, int64_t cursorAction, int64_t modifiers) {
    return QAbstractItemView_QBaseMoveCursor((QAbstractItemView*)self, cursorAction, modifiers);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalOffset)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_horizontal_offset(void* self) {
    return QAbstractItemView_HorizontalOffset((QAbstractItemView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, int32_t (*slot)() ```
void q_abstractitemview_on_horizontal_offset(void* self, int32_t (*slot)()) {
    QAbstractItemView_OnHorizontalOffset((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_qbase_horizontal_offset(void* self) {
    return QAbstractItemView_QBaseHorizontalOffset((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalOffset)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_vertical_offset(void* self) {
    return QAbstractItemView_VerticalOffset((QAbstractItemView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, int32_t (*slot)() ```
void q_abstractitemview_on_vertical_offset(void* self, int32_t (*slot)()) {
    QAbstractItemView_OnVerticalOffset((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_qbase_vertical_offset(void* self) {
    return QAbstractItemView_QBaseVerticalOffset((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#isIndexHidden)
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
bool q_abstractitemview_is_index_hidden(void* self, void* index) {
    return QAbstractItemView_IsIndexHidden((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, bool (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_abstractitemview_on_is_index_hidden(void* self, bool (*slot)(void*, void*)) {
    QAbstractItemView_OnIsIndexHidden((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QModelIndex* index ```
bool q_abstractitemview_qbase_is_index_hidden(void* self, void* index) {
    return QAbstractItemView_QBaseIsIndexHidden((QAbstractItemView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelection)
///
/// ``` QAbstractItemView* self, QRect* rect, int command ```
void q_abstractitemview_set_selection(void* self, void* rect, int64_t command) {
    QAbstractItemView_SetSelection((QAbstractItemView*)self, (QRect*)rect, command);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QRect*, int) ```
void q_abstractitemview_on_set_selection(void* self, void (*slot)(void*, void*, int64_t)) {
    QAbstractItemView_OnSetSelection((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QRect* rect, int command ```
void q_abstractitemview_qbase_set_selection(void* self, void* rect, int64_t command) {
    QAbstractItemView_QBaseSetSelection((QAbstractItemView*)self, (QRect*)rect, command);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#visualRegionForSelection)
///
/// ``` QAbstractItemView* self, QItemSelection* selection ```
QRegion* q_abstractitemview_visual_region_for_selection(void* self, void* selection) {
    return QAbstractItemView_VisualRegionForSelection((QAbstractItemView*)self, (QItemSelection*)selection);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, QRegion* (*slot)(QAbstractItemView*, QItemSelection*) ```
void q_abstractitemview_on_visual_region_for_selection(void* self, QRegion* (*slot)(void*, void*)) {
    QAbstractItemView_OnVisualRegionForSelection((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QItemSelection* selection ```
QRegion* q_abstractitemview_qbase_visual_region_for_selection(void* self, void* selection) {
    return QAbstractItemView_QBaseVisualRegionForSelection((QAbstractItemView*)self, (QItemSelection*)selection);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectedIndexes)
///
/// ``` QAbstractItemView* self ```
libqt_list /* of QModelIndex* */ q_abstractitemview_selected_indexes(void* self) {
    libqt_list _arr = QAbstractItemView_SelectedIndexes((QAbstractItemView*)self);
    return _arr;
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_abstractitemview_on_selected_indexes(void* self, libqt_list /* of QModelIndex* */ (*slot)()) {
    QAbstractItemView_OnSelectedIndexes((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
libqt_list /* of QModelIndex* */ q_abstractitemview_qbase_selected_indexes(void* self) {
    libqt_list _arr = QAbstractItemView_QBaseSelectedIndexes((QAbstractItemView*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// ``` QAbstractItemView* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_abstractitemview_edit2(void* self, void* index, int64_t trigger, void* event) {
    return QAbstractItemView_Edit2((QAbstractItemView*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, bool (*slot)(QAbstractItemView*, QModelIndex*, enum QAbstractItemView__EditTrigger, QEvent*) ```
void q_abstractitemview_on_edit2(void* self, bool (*slot)(void*, void*, int64_t, void*)) {
    QAbstractItemView_OnEdit2((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_abstractitemview_qbase_edit2(void* self, void* index, int64_t trigger, void* event) {
    return QAbstractItemView_QBaseEdit2((QAbstractItemView*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// ``` QAbstractItemView* self, QModelIndex* index, QEvent* event ```
int64_t q_abstractitemview_selection_command(void* self, void* index, void* event) {
    return QAbstractItemView_SelectionCommand((QAbstractItemView*)self, (QModelIndex*)index, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, int64_t (*slot)(QAbstractItemView*, QModelIndex*, QEvent*) ```
void q_abstractitemview_on_selection_command(void* self, int64_t (*slot)(void*, void*, void*)) {
    QAbstractItemView_OnSelectionCommand((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QModelIndex* index, QEvent* event ```
int64_t q_abstractitemview_qbase_selection_command(void* self, void* index, void* event) {
    return QAbstractItemView_QBaseSelectionCommand((QAbstractItemView*)self, (QModelIndex*)index, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// ``` QAbstractItemView* self, int supportedActions ```
void q_abstractitemview_start_drag(void* self, int64_t supportedActions) {
    QAbstractItemView_StartDrag((QAbstractItemView*)self, supportedActions);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, int) ```
void q_abstractitemview_on_start_drag(void* self, void (*slot)(void*, int64_t)) {
    QAbstractItemView_OnStartDrag((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, int supportedActions ```
void q_abstractitemview_qbase_start_drag(void* self, int64_t supportedActions) {
    QAbstractItemView_QBaseStartDrag((QAbstractItemView*)self, supportedActions);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
///
/// ``` QAbstractItemView* self, QStyleOptionViewItem* option ```
void q_abstractitemview_init_view_item_option(void* self, void* option) {
    QAbstractItemView_InitViewItemOption((QAbstractItemView*)self, (QStyleOptionViewItem*)option);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QStyleOptionViewItem*) ```
void q_abstractitemview_on_init_view_item_option(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnInitViewItemOption((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QStyleOptionViewItem* option ```
void q_abstractitemview_qbase_init_view_item_option(void* self, void* option) {
    QAbstractItemView_QBaseInitViewItemOption((QAbstractItemView*)self, (QStyleOptionViewItem*)option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_state(void* self) {
    return QAbstractItemView_State((QAbstractItemView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, int64_t (*slot)() ```
void q_abstractitemview_on_state(void* self, int64_t (*slot)()) {
    QAbstractItemView_OnState((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_qbase_state(void* self) {
    return QAbstractItemView_QBaseState((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// ``` QAbstractItemView* self, enum QAbstractItemView__State state ```
void q_abstractitemview_set_state(void* self, int64_t state) {
    QAbstractItemView_SetState((QAbstractItemView*)self, state);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, enum QAbstractItemView__State) ```
void q_abstractitemview_on_set_state(void* self, void (*slot)(void*, int64_t)) {
    QAbstractItemView_OnSetState((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, enum QAbstractItemView__State state ```
void q_abstractitemview_qbase_set_state(void* self, int64_t state) {
    QAbstractItemView_QBaseSetState((QAbstractItemView*)self, state);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_schedule_delayed_items_layout(void* self) {
    QAbstractItemView_ScheduleDelayedItemsLayout((QAbstractItemView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)() ```
void q_abstractitemview_on_schedule_delayed_items_layout(void* self, void (*slot)()) {
    QAbstractItemView_OnScheduleDelayedItemsLayout((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_qbase_schedule_delayed_items_layout(void* self) {
    QAbstractItemView_QBaseScheduleDelayedItemsLayout((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_execute_delayed_items_layout(void* self) {
    QAbstractItemView_ExecuteDelayedItemsLayout((QAbstractItemView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)() ```
void q_abstractitemview_on_execute_delayed_items_layout(void* self, void (*slot)()) {
    QAbstractItemView_OnExecuteDelayedItemsLayout((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_qbase_execute_delayed_items_layout(void* self) {
    QAbstractItemView_QBaseExecuteDelayedItemsLayout((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// ``` QAbstractItemView* self, QRegion* region ```
void q_abstractitemview_set_dirty_region(void* self, void* region) {
    QAbstractItemView_SetDirtyRegion((QAbstractItemView*)self, (QRegion*)region);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QRegion*) ```
void q_abstractitemview_on_set_dirty_region(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnSetDirtyRegion((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QRegion* region ```
void q_abstractitemview_qbase_set_dirty_region(void* self, void* region) {
    QAbstractItemView_QBaseSetDirtyRegion((QAbstractItemView*)self, (QRegion*)region);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// ``` QAbstractItemView* self, int dx, int dy ```
void q_abstractitemview_scroll_dirty_region(void* self, int dx, int dy) {
    QAbstractItemView_ScrollDirtyRegion((QAbstractItemView*)self, dx, dy);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, int, int) ```
void q_abstractitemview_on_scroll_dirty_region(void* self, void (*slot)(void*, int, int)) {
    QAbstractItemView_OnScrollDirtyRegion((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, int dx, int dy ```
void q_abstractitemview_qbase_scroll_dirty_region(void* self, int dx, int dy) {
    QAbstractItemView_QBaseScrollDirtyRegion((QAbstractItemView*)self, dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// ``` QAbstractItemView* self ```
QPoint* q_abstractitemview_dirty_region_offset(void* self) {
    return QAbstractItemView_DirtyRegionOffset((QAbstractItemView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, QPoint* (*slot)() ```
void q_abstractitemview_on_dirty_region_offset(void* self, QPoint* (*slot)()) {
    QAbstractItemView_OnDirtyRegionOffset((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
QPoint* q_abstractitemview_qbase_dirty_region_offset(void* self) {
    return QAbstractItemView_QBaseDirtyRegionOffset((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_start_auto_scroll(void* self) {
    QAbstractItemView_StartAutoScroll((QAbstractItemView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)() ```
void q_abstractitemview_on_start_auto_scroll(void* self, void (*slot)()) {
    QAbstractItemView_OnStartAutoScroll((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_qbase_start_auto_scroll(void* self) {
    QAbstractItemView_QBaseStartAutoScroll((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_stop_auto_scroll(void* self) {
    QAbstractItemView_StopAutoScroll((QAbstractItemView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)() ```
void q_abstractitemview_on_stop_auto_scroll(void* self, void (*slot)()) {
    QAbstractItemView_OnStopAutoScroll((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_qbase_stop_auto_scroll(void* self) {
    QAbstractItemView_QBaseStopAutoScroll((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_do_auto_scroll(void* self) {
    QAbstractItemView_DoAutoScroll((QAbstractItemView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)() ```
void q_abstractitemview_on_do_auto_scroll(void* self, void (*slot)()) {
    QAbstractItemView_OnDoAutoScroll((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_qbase_do_auto_scroll(void* self) {
    QAbstractItemView_QBaseDoAutoScroll((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// ``` QAbstractItemView* self, bool next ```
bool q_abstractitemview_focus_next_prev_child(void* self, bool next) {
    return QAbstractItemView_FocusNextPrevChild((QAbstractItemView*)self, next);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, bool (*slot)(QAbstractItemView*, bool) ```
void q_abstractitemview_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QAbstractItemView_OnFocusNextPrevChild((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, bool next ```
bool q_abstractitemview_qbase_focus_next_prev_child(void* self, bool next) {
    return QAbstractItemView_QBaseFocusNextPrevChild((QAbstractItemView*)self, next);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#event)
///
/// ``` QAbstractItemView* self, QEvent* event ```
bool q_abstractitemview_event(void* self, void* event) {
    return QAbstractItemView_Event((QAbstractItemView*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, bool (*slot)(QAbstractItemView*, QEvent*) ```
void q_abstractitemview_on_event(void* self, bool (*slot)(void*, void*)) {
    QAbstractItemView_OnEvent((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QEvent* event ```
bool q_abstractitemview_qbase_event(void* self, void* event) {
    return QAbstractItemView_QBaseEvent((QAbstractItemView*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// ``` QAbstractItemView* self, QEvent* event ```
bool q_abstractitemview_viewport_event(void* self, void* event) {
    return QAbstractItemView_ViewportEvent((QAbstractItemView*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, bool (*slot)(QAbstractItemView*, QEvent*) ```
void q_abstractitemview_on_viewport_event(void* self, bool (*slot)(void*, void*)) {
    QAbstractItemView_OnViewportEvent((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QEvent* event ```
bool q_abstractitemview_qbase_viewport_event(void* self, void* event) {
    return QAbstractItemView_QBaseViewportEvent((QAbstractItemView*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// ``` QAbstractItemView* self, QMouseEvent* event ```
void q_abstractitemview_mouse_press_event(void* self, void* event) {
    QAbstractItemView_MousePressEvent((QAbstractItemView*)self, (QMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QMouseEvent*) ```
void q_abstractitemview_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnMousePressEvent((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QMouseEvent* event ```
void q_abstractitemview_qbase_mouse_press_event(void* self, void* event) {
    QAbstractItemView_QBaseMousePressEvent((QAbstractItemView*)self, (QMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
///
/// ``` QAbstractItemView* self, QMouseEvent* event ```
void q_abstractitemview_mouse_move_event(void* self, void* event) {
    QAbstractItemView_MouseMoveEvent((QAbstractItemView*)self, (QMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QMouseEvent*) ```
void q_abstractitemview_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnMouseMoveEvent((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QMouseEvent* event ```
void q_abstractitemview_qbase_mouse_move_event(void* self, void* event) {
    QAbstractItemView_QBaseMouseMoveEvent((QAbstractItemView*)self, (QMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
///
/// ``` QAbstractItemView* self, QMouseEvent* event ```
void q_abstractitemview_mouse_release_event(void* self, void* event) {
    QAbstractItemView_MouseReleaseEvent((QAbstractItemView*)self, (QMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QMouseEvent*) ```
void q_abstractitemview_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnMouseReleaseEvent((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QMouseEvent* event ```
void q_abstractitemview_qbase_mouse_release_event(void* self, void* event) {
    QAbstractItemView_QBaseMouseReleaseEvent((QAbstractItemView*)self, (QMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// ``` QAbstractItemView* self, QMouseEvent* event ```
void q_abstractitemview_mouse_double_click_event(void* self, void* event) {
    QAbstractItemView_MouseDoubleClickEvent((QAbstractItemView*)self, (QMouseEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QMouseEvent*) ```
void q_abstractitemview_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnMouseDoubleClickEvent((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QMouseEvent* event ```
void q_abstractitemview_qbase_mouse_double_click_event(void* self, void* event) {
    QAbstractItemView_QBaseMouseDoubleClickEvent((QAbstractItemView*)self, (QMouseEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// ``` QAbstractItemView* self, QDragEnterEvent* event ```
void q_abstractitemview_drag_enter_event(void* self, void* event) {
    QAbstractItemView_DragEnterEvent((QAbstractItemView*)self, (QDragEnterEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QDragEnterEvent*) ```
void q_abstractitemview_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnDragEnterEvent((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QDragEnterEvent* event ```
void q_abstractitemview_qbase_drag_enter_event(void* self, void* event) {
    QAbstractItemView_QBaseDragEnterEvent((QAbstractItemView*)self, (QDragEnterEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
///
/// ``` QAbstractItemView* self, QDragMoveEvent* event ```
void q_abstractitemview_drag_move_event(void* self, void* event) {
    QAbstractItemView_DragMoveEvent((QAbstractItemView*)self, (QDragMoveEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QDragMoveEvent*) ```
void q_abstractitemview_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnDragMoveEvent((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QDragMoveEvent* event ```
void q_abstractitemview_qbase_drag_move_event(void* self, void* event) {
    QAbstractItemView_QBaseDragMoveEvent((QAbstractItemView*)self, (QDragMoveEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// ``` QAbstractItemView* self, QDragLeaveEvent* event ```
void q_abstractitemview_drag_leave_event(void* self, void* event) {
    QAbstractItemView_DragLeaveEvent((QAbstractItemView*)self, (QDragLeaveEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QDragLeaveEvent*) ```
void q_abstractitemview_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnDragLeaveEvent((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QDragLeaveEvent* event ```
void q_abstractitemview_qbase_drag_leave_event(void* self, void* event) {
    QAbstractItemView_QBaseDragLeaveEvent((QAbstractItemView*)self, (QDragLeaveEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
///
/// ``` QAbstractItemView* self, QDropEvent* event ```
void q_abstractitemview_drop_event(void* self, void* event) {
    QAbstractItemView_DropEvent((QAbstractItemView*)self, (QDropEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QDropEvent*) ```
void q_abstractitemview_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnDropEvent((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QDropEvent* event ```
void q_abstractitemview_qbase_drop_event(void* self, void* event) {
    QAbstractItemView_QBaseDropEvent((QAbstractItemView*)self, (QDropEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// ``` QAbstractItemView* self, QFocusEvent* event ```
void q_abstractitemview_focus_in_event(void* self, void* event) {
    QAbstractItemView_FocusInEvent((QAbstractItemView*)self, (QFocusEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QFocusEvent*) ```
void q_abstractitemview_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnFocusInEvent((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QFocusEvent* event ```
void q_abstractitemview_qbase_focus_in_event(void* self, void* event) {
    QAbstractItemView_QBaseFocusInEvent((QAbstractItemView*)self, (QFocusEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// ``` QAbstractItemView* self, QFocusEvent* event ```
void q_abstractitemview_focus_out_event(void* self, void* event) {
    QAbstractItemView_FocusOutEvent((QAbstractItemView*)self, (QFocusEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QFocusEvent*) ```
void q_abstractitemview_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnFocusOutEvent((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QFocusEvent* event ```
void q_abstractitemview_qbase_focus_out_event(void* self, void* event) {
    QAbstractItemView_QBaseFocusOutEvent((QAbstractItemView*)self, (QFocusEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// ``` QAbstractItemView* self, QKeyEvent* event ```
void q_abstractitemview_key_press_event(void* self, void* event) {
    QAbstractItemView_KeyPressEvent((QAbstractItemView*)self, (QKeyEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QKeyEvent*) ```
void q_abstractitemview_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnKeyPressEvent((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QKeyEvent* event ```
void q_abstractitemview_qbase_key_press_event(void* self, void* event) {
    QAbstractItemView_QBaseKeyPressEvent((QAbstractItemView*)self, (QKeyEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// ``` QAbstractItemView* self, QResizeEvent* event ```
void q_abstractitemview_resize_event(void* self, void* event) {
    QAbstractItemView_ResizeEvent((QAbstractItemView*)self, (QResizeEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QResizeEvent*) ```
void q_abstractitemview_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnResizeEvent((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QResizeEvent* event ```
void q_abstractitemview_qbase_resize_event(void* self, void* event) {
    QAbstractItemView_QBaseResizeEvent((QAbstractItemView*)self, (QResizeEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#timerEvent)
///
/// ``` QAbstractItemView* self, QTimerEvent* event ```
void q_abstractitemview_timer_event(void* self, void* event) {
    QAbstractItemView_TimerEvent((QAbstractItemView*)self, (QTimerEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QTimerEvent*) ```
void q_abstractitemview_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnTimerEvent((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QTimerEvent* event ```
void q_abstractitemview_qbase_timer_event(void* self, void* event) {
    QAbstractItemView_QBaseTimerEvent((QAbstractItemView*)self, (QTimerEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// ``` QAbstractItemView* self, QInputMethodEvent* event ```
void q_abstractitemview_input_method_event(void* self, void* event) {
    QAbstractItemView_InputMethodEvent((QAbstractItemView*)self, (QInputMethodEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QInputMethodEvent*) ```
void q_abstractitemview_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnInputMethodEvent((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QInputMethodEvent* event ```
void q_abstractitemview_qbase_input_method_event(void* self, void* event) {
    QAbstractItemView_QBaseInputMethodEvent((QAbstractItemView*)self, (QInputMethodEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// ``` QAbstractItemView* self, QObject* object, QEvent* event ```
bool q_abstractitemview_event_filter(void* self, void* object, void* event) {
    return QAbstractItemView_EventFilter((QAbstractItemView*)self, (QObject*)object, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, bool (*slot)(QAbstractItemView*, QObject*, QEvent*) ```
void q_abstractitemview_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAbstractItemView_OnEventFilter((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self, QObject* object, QEvent* event ```
bool q_abstractitemview_qbase_event_filter(void* self, void* object, void* event) {
    return QAbstractItemView_QBaseEventFilter((QAbstractItemView*)self, (QObject*)object, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_drop_indicator_position(void* self) {
    return QAbstractItemView_DropIndicatorPosition((QAbstractItemView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, int64_t (*slot)() ```
void q_abstractitemview_on_drop_indicator_position(void* self, int64_t (*slot)()) {
    QAbstractItemView_OnDropIndicatorPosition((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_qbase_drop_indicator_position(void* self) {
    return QAbstractItemView_QBaseDropIndicatorPosition((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportSizeHint)
///
/// ``` QAbstractItemView* self ```
QSize* q_abstractitemview_viewport_size_hint(void* self) {
    return QAbstractItemView_ViewportSizeHint((QAbstractItemView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractItemView* self, QSize* (*slot)() ```
void q_abstractitemview_on_viewport_size_hint(void* self, QSize* (*slot)()) {
    QAbstractItemView_OnViewportSizeHint((QAbstractItemView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractItemView* self ```
QSize* q_abstractitemview_qbase_viewport_size_hint(void* self) {
    return QAbstractItemView_QBaseViewportSizeHint((QAbstractItemView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_abstractitemview_tr2(const char* s, const char* c) {
    libqt_string _str = QAbstractItemView_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_abstractitemview_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAbstractItemView_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// ``` QAbstractItemView* self, enum Qt__ScrollBarPolicy verticalScrollBarPolicy ```
void q_abstractitemview_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// ``` QAbstractItemView* self ```
QScrollBar* q_abstractitemview_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// ``` QAbstractItemView* self, QScrollBar* scrollbar ```
void q_abstractitemview_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// ``` QAbstractItemView* self, enum Qt__ScrollBarPolicy horizontalScrollBarPolicy ```
void q_abstractitemview_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// ``` QAbstractItemView* self ```
QScrollBar* q_abstractitemview_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// ``` QAbstractItemView* self, QScrollBar* scrollbar ```
void q_abstractitemview_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// ``` QAbstractItemView* self ```
QWidget* q_abstractitemview_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// ``` QAbstractItemView* self, QWidget* widget ```
void q_abstractitemview_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// ``` QAbstractItemView* self, QWidget* widget, int alignment ```
void q_abstractitemview_add_scroll_bar_widget(void* self, void* widget, int64_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// ``` QAbstractItemView* self, int alignment ```
libqt_list /* of QWidget* */ q_abstractitemview_scroll_bar_widgets(void* self, int64_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// ``` QAbstractItemView* self ```
QWidget* q_abstractitemview_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// ``` QAbstractItemView* self, QWidget* widget ```
void q_abstractitemview_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// ``` QAbstractItemView* self ```
QSize* q_abstractitemview_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// ``` QAbstractItemView* self, enum QAbstractScrollArea__SizeAdjustPolicy policy ```
void q_abstractitemview_set_size_adjust_policy(void* self, int64_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QAbstractItemView* self, int frameStyle ```
void q_abstractitemview_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QAbstractItemView* self, enum QFrame__Shape frameShape ```
void q_abstractitemview_set_frame_shape(void* self, int64_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QAbstractItemView* self, enum QFrame__Shadow frameShadow ```
void q_abstractitemview_set_frame_shadow(void* self, int64_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QAbstractItemView* self, int lineWidth ```
void q_abstractitemview_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QAbstractItemView* self, int midLineWidth ```
void q_abstractitemview_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QAbstractItemView* self ```
QRect* q_abstractitemview_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QAbstractItemView* self, QRect* frameRect ```
void q_abstractitemview_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QAbstractItemView* self ```
uintptr_t q_abstractitemview_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QAbstractItemView* self ```
uintptr_t q_abstractitemview_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QAbstractItemView* self ```
uintptr_t q_abstractitemview_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QAbstractItemView* self ```
QStyle* q_abstractitemview_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QAbstractItemView* self, QStyle* style ```
void q_abstractitemview_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QAbstractItemView* self, enum Qt__WindowModality windowModality ```
void q_abstractitemview_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QAbstractItemView* self, QWidget* param1 ```
bool q_abstractitemview_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QAbstractItemView* self, bool enabled ```
void q_abstractitemview_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QAbstractItemView* self, bool disabled ```
void q_abstractitemview_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QAbstractItemView* self, bool windowModified ```
void q_abstractitemview_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QAbstractItemView* self ```
QRect* q_abstractitemview_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QAbstractItemView* self ```
QRect* q_abstractitemview_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QAbstractItemView* self ```
QRect* q_abstractitemview_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QAbstractItemView* self ```
QPoint* q_abstractitemview_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QAbstractItemView* self ```
QSize* q_abstractitemview_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QAbstractItemView* self ```
QSize* q_abstractitemview_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QAbstractItemView* self ```
QRect* q_abstractitemview_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QAbstractItemView* self ```
QRect* q_abstractitemview_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QAbstractItemView* self ```
QRegion* q_abstractitemview_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QAbstractItemView* self ```
QSize* q_abstractitemview_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QAbstractItemView* self ```
QSize* q_abstractitemview_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QAbstractItemView* self, QSize* minimumSize ```
void q_abstractitemview_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QAbstractItemView* self, int minw, int minh ```
void q_abstractitemview_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QAbstractItemView* self, QSize* maximumSize ```
void q_abstractitemview_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QAbstractItemView* self, int maxw, int maxh ```
void q_abstractitemview_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QAbstractItemView* self, int minw ```
void q_abstractitemview_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QAbstractItemView* self, int minh ```
void q_abstractitemview_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QAbstractItemView* self, int maxw ```
void q_abstractitemview_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QAbstractItemView* self, int maxh ```
void q_abstractitemview_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QAbstractItemView* self ```
QSize* q_abstractitemview_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QAbstractItemView* self, QSize* sizeIncrement ```
void q_abstractitemview_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QAbstractItemView* self, int w, int h ```
void q_abstractitemview_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QAbstractItemView* self ```
QSize* q_abstractitemview_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QAbstractItemView* self, QSize* baseSize ```
void q_abstractitemview_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QAbstractItemView* self, int basew, int baseh ```
void q_abstractitemview_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QAbstractItemView* self, QSize* fixedSize ```
void q_abstractitemview_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QAbstractItemView* self, int w, int h ```
void q_abstractitemview_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QAbstractItemView* self, int w ```
void q_abstractitemview_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QAbstractItemView* self, int h ```
void q_abstractitemview_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QAbstractItemView* self, QPointF* param1 ```
QPointF* q_abstractitemview_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QAbstractItemView* self, QPoint* param1 ```
QPoint* q_abstractitemview_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QAbstractItemView* self, QPointF* param1 ```
QPointF* q_abstractitemview_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QAbstractItemView* self, QPoint* param1 ```
QPoint* q_abstractitemview_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QAbstractItemView* self, QPointF* param1 ```
QPointF* q_abstractitemview_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QAbstractItemView* self, QPoint* param1 ```
QPoint* q_abstractitemview_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QAbstractItemView* self, QPointF* param1 ```
QPointF* q_abstractitemview_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QAbstractItemView* self, QPoint* param1 ```
QPoint* q_abstractitemview_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QAbstractItemView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_abstractitemview_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QAbstractItemView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_abstractitemview_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QAbstractItemView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_abstractitemview_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QAbstractItemView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_abstractitemview_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QAbstractItemView* self ```
QWidget* q_abstractitemview_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QAbstractItemView* self ```
QWidget* q_abstractitemview_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QAbstractItemView* self ```
QWidget* q_abstractitemview_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QAbstractItemView* self ```
QPalette* q_abstractitemview_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QAbstractItemView* self, QPalette* palette ```
void q_abstractitemview_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QAbstractItemView* self, enum QPalette__ColorRole backgroundRole ```
void q_abstractitemview_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QAbstractItemView* self, enum QPalette__ColorRole foregroundRole ```
void q_abstractitemview_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QAbstractItemView* self ```
QFont* q_abstractitemview_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QAbstractItemView* self, QFont* font ```
void q_abstractitemview_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QAbstractItemView* self ```
QFontMetrics* q_abstractitemview_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QAbstractItemView* self ```
QFontInfo* q_abstractitemview_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QAbstractItemView* self ```
QCursor* q_abstractitemview_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QAbstractItemView* self, QCursor* cursor ```
void q_abstractitemview_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QAbstractItemView* self, bool enable ```
void q_abstractitemview_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QAbstractItemView* self, bool enable ```
void q_abstractitemview_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QAbstractItemView* self, QBitmap* mask ```
void q_abstractitemview_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QAbstractItemView* self, QRegion* mask ```
void q_abstractitemview_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QAbstractItemView* self ```
QRegion* q_abstractitemview_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractItemView* self, QPaintDevice* target ```
void q_abstractitemview_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractItemView* self, QPainter* painter ```
void q_abstractitemview_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QAbstractItemView* self ```
QPixmap* q_abstractitemview_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QAbstractItemView* self ```
QGraphicsEffect* q_abstractitemview_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QAbstractItemView* self, QGraphicsEffect* effect ```
void q_abstractitemview_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QAbstractItemView* self, enum Qt__GestureType typeVal ```
void q_abstractitemview_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QAbstractItemView* self, enum Qt__GestureType typeVal ```
void q_abstractitemview_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QAbstractItemView* self, const char* windowTitle ```
void q_abstractitemview_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QAbstractItemView* self, const char* styleSheet ```
void q_abstractitemview_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QAbstractItemView* self ```
const char* q_abstractitemview_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QAbstractItemView* self ```
const char* q_abstractitemview_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QAbstractItemView* self, QIcon* icon ```
void q_abstractitemview_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QAbstractItemView* self ```
QIcon* q_abstractitemview_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QAbstractItemView* self, const char* windowIconText ```
void q_abstractitemview_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QAbstractItemView* self ```
const char* q_abstractitemview_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QAbstractItemView* self, const char* windowRole ```
void q_abstractitemview_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QAbstractItemView* self ```
const char* q_abstractitemview_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QAbstractItemView* self, const char* filePath ```
void q_abstractitemview_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QAbstractItemView* self ```
const char* q_abstractitemview_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QAbstractItemView* self, double level ```
void q_abstractitemview_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QAbstractItemView* self ```
double q_abstractitemview_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QAbstractItemView* self, const char* toolTip ```
void q_abstractitemview_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QAbstractItemView* self ```
const char* q_abstractitemview_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QAbstractItemView* self, int msec ```
void q_abstractitemview_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QAbstractItemView* self, const char* statusTip ```
void q_abstractitemview_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QAbstractItemView* self ```
const char* q_abstractitemview_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QAbstractItemView* self, const char* whatsThis ```
void q_abstractitemview_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QAbstractItemView* self ```
const char* q_abstractitemview_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QAbstractItemView* self ```
const char* q_abstractitemview_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QAbstractItemView* self, const char* name ```
void q_abstractitemview_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QAbstractItemView* self ```
const char* q_abstractitemview_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QAbstractItemView* self, const char* description ```
void q_abstractitemview_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QAbstractItemView* self, enum Qt__LayoutDirection direction ```
void q_abstractitemview_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QAbstractItemView* self, QLocale* locale ```
void q_abstractitemview_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QAbstractItemView* self ```
QLocale* q_abstractitemview_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QAbstractItemView* self, enum Qt__FocusReason reason ```
void q_abstractitemview_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QAbstractItemView* self, enum Qt__FocusPolicy policy ```
void q_abstractitemview_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_abstractitemview_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QAbstractItemView* self, QWidget* focusProxy ```
void q_abstractitemview_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QAbstractItemView* self ```
QWidget* q_abstractitemview_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QAbstractItemView* self, enum Qt__ContextMenuPolicy policy ```
void q_abstractitemview_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QAbstractItemView* self, QCursor* param1 ```
void q_abstractitemview_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QAbstractItemView* self, QKeySequence* key ```
int32_t q_abstractitemview_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QAbstractItemView* self, int id ```
void q_abstractitemview_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QAbstractItemView* self, int id ```
void q_abstractitemview_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QAbstractItemView* self, int id ```
void q_abstractitemview_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_abstractitemview_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_abstractitemview_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QAbstractItemView* self, bool enable ```
void q_abstractitemview_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QAbstractItemView* self ```
QGraphicsProxyWidget* q_abstractitemview_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QAbstractItemView* self, int x, int y, int w, int h ```
void q_abstractitemview_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QAbstractItemView* self, QRect* param1 ```
void q_abstractitemview_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QAbstractItemView* self, QRegion* param1 ```
void q_abstractitemview_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QAbstractItemView* self, int x, int y, int w, int h ```
void q_abstractitemview_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QAbstractItemView* self, QRect* param1 ```
void q_abstractitemview_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QAbstractItemView* self, QRegion* param1 ```
void q_abstractitemview_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QAbstractItemView* self, bool hidden ```
void q_abstractitemview_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QAbstractItemView* self, QWidget* param1 ```
void q_abstractitemview_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QAbstractItemView* self, int x, int y ```
void q_abstractitemview_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QAbstractItemView* self, QPoint* param1 ```
void q_abstractitemview_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QAbstractItemView* self, int w, int h ```
void q_abstractitemview_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QAbstractItemView* self, QSize* param1 ```
void q_abstractitemview_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QAbstractItemView* self, int x, int y, int w, int h ```
void q_abstractitemview_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QAbstractItemView* self, QRect* geometry ```
void q_abstractitemview_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QAbstractItemView* self ```
char* q_abstractitemview_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QAbstractItemView* self, const char* geometry ```
bool q_abstractitemview_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QAbstractItemView* self, QWidget* param1 ```
bool q_abstractitemview_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QAbstractItemView* self, int state ```
void q_abstractitemview_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QAbstractItemView* self, int state ```
void q_abstractitemview_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QAbstractItemView* self ```
QSizePolicy* q_abstractitemview_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QAbstractItemView* self, QSizePolicy* sizePolicy ```
void q_abstractitemview_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QAbstractItemView* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_abstractitemview_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QAbstractItemView* self ```
QRegion* q_abstractitemview_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QAbstractItemView* self, int left, int top, int right, int bottom ```
void q_abstractitemview_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QAbstractItemView* self, QMargins* margins ```
void q_abstractitemview_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QAbstractItemView* self ```
QMargins* q_abstractitemview_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QAbstractItemView* self ```
QRect* q_abstractitemview_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QAbstractItemView* self ```
QLayout* q_abstractitemview_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QAbstractItemView* self, QLayout* layout ```
void q_abstractitemview_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QAbstractItemView* self, QWidget* parent ```
void q_abstractitemview_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QAbstractItemView* self, QWidget* parent, int f ```
void q_abstractitemview_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QAbstractItemView* self, int dx, int dy ```
void q_abstractitemview_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QAbstractItemView* self, int dx, int dy, QRect* param3 ```
void q_abstractitemview_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QAbstractItemView* self ```
QWidget* q_abstractitemview_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QAbstractItemView* self ```
QWidget* q_abstractitemview_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QAbstractItemView* self ```
QWidget* q_abstractitemview_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QAbstractItemView* self, bool on ```
void q_abstractitemview_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QAbstractItemView* self, QAction* action ```
void q_abstractitemview_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QAbstractItemView* self, QAction* actions[] ```
void q_abstractitemview_add_actions(void* self, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_AddActions((QWidget*)self, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QAbstractItemView* self, QAction* before, QAction* actions[] ```
void q_abstractitemview_insert_actions(void* self, void* before, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QAbstractItemView* self, QAction* before, QAction* action ```
void q_abstractitemview_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QAbstractItemView* self, QAction* action ```
void q_abstractitemview_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QAbstractItemView* self ```
libqt_list /* of QAction* */ q_abstractitemview_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QAbstractItemView* self, const char* text ```
QAction* q_abstractitemview_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QAbstractItemView* self, QIcon* icon, const char* text ```
QAction* q_abstractitemview_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QAbstractItemView* self, const char* text, QKeySequence* shortcut ```
QAction* q_abstractitemview_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QAbstractItemView* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_abstractitemview_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QAbstractItemView* self ```
QWidget* q_abstractitemview_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QAbstractItemView* self, int typeVal ```
void q_abstractitemview_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QAbstractItemView* self, enum Qt__WindowType param1 ```
void q_abstractitemview_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QAbstractItemView* self, int typeVal ```
void q_abstractitemview_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_abstractitemview_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QAbstractItemView* self, int x, int y ```
QWidget* q_abstractitemview_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QAbstractItemView* self, QPoint* p ```
QWidget* q_abstractitemview_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QAbstractItemView* self, enum Qt__WidgetAttribute param1 ```
void q_abstractitemview_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QAbstractItemView* self, enum Qt__WidgetAttribute param1 ```
bool q_abstractitemview_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QAbstractItemView* self, QWidget* child ```
bool q_abstractitemview_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QAbstractItemView* self, bool enabled ```
void q_abstractitemview_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QAbstractItemView* self ```
QBackingStore* q_abstractitemview_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QAbstractItemView* self ```
QWindow* q_abstractitemview_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QAbstractItemView* self ```
QScreen* q_abstractitemview_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QAbstractItemView* self, QScreen* screen ```
void q_abstractitemview_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_abstractitemview_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QAbstractItemView* self, const char* title ```
void q_abstractitemview_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QAbstractItemView* self, void (*slot)(QWidget*, const char*) ```
void q_abstractitemview_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QAbstractItemView* self, QIcon* icon ```
void q_abstractitemview_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QAbstractItemView* self, void (*slot)(QWidget*, QIcon*) ```
void q_abstractitemview_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QAbstractItemView* self, const char* iconText ```
void q_abstractitemview_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QAbstractItemView* self, void (*slot)(QWidget*, const char*) ```
void q_abstractitemview_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QAbstractItemView* self, QPoint* pos ```
void q_abstractitemview_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QAbstractItemView* self, void (*slot)(QWidget*, QPoint*) ```
void q_abstractitemview_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QAbstractItemView* self ```
int64_t q_abstractitemview_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QAbstractItemView* self, int hints ```
void q_abstractitemview_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractItemView* self, QPaintDevice* target, QPoint* targetOffset ```
void q_abstractitemview_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractItemView* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_abstractitemview_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractItemView* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_abstractitemview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractItemView* self, QPainter* painter, QPoint* targetOffset ```
void q_abstractitemview_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractItemView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_abstractitemview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractItemView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_abstractitemview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QAbstractItemView* self, QRect* rectangle ```
QPixmap* q_abstractitemview_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QAbstractItemView* self, enum Qt__GestureType typeVal, int flags ```
void q_abstractitemview_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QAbstractItemView* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_abstractitemview_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QAbstractItemView* self, int id, bool enable ```
void q_abstractitemview_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QAbstractItemView* self, int id, bool enable ```
void q_abstractitemview_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QAbstractItemView* self, enum Qt__WindowType param1, bool on ```
void q_abstractitemview_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QAbstractItemView* self, enum Qt__WidgetAttribute param1, bool on ```
void q_abstractitemview_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_abstractitemview_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_abstractitemview_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAbstractItemView* self ```
const char* q_abstractitemview_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAbstractItemView* self, const char* name ```
void q_abstractitemview_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAbstractItemView* self, bool b ```
bool q_abstractitemview_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAbstractItemView* self ```
QThread* q_abstractitemview_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractItemView* self, QThread* thread ```
void q_abstractitemview_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractItemView* self, int interval ```
int32_t q_abstractitemview_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractItemView* self, int id ```
void q_abstractitemview_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAbstractItemView* self ```
libqt_list /* of QObject* */ q_abstractitemview_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAbstractItemView* self, QObject* filterObj ```
void q_abstractitemview_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAbstractItemView* self, QObject* obj ```
void q_abstractitemview_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_abstractitemview_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractItemView* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_abstractitemview_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_abstractitemview_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_abstractitemview_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAbstractItemView* self, const char* name, QVariant* value ```
bool q_abstractitemview_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAbstractItemView* self, const char* name ```
QVariant* q_abstractitemview_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAbstractItemView* self ```
const char** q_abstractitemview_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractItemView* self ```
QBindingStorage* q_abstractitemview_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractItemView* self ```
QBindingStorage* q_abstractitemview_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QAbstractItemView* self, void (*slot)(QObject*) ```
void q_abstractitemview_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAbstractItemView* self ```
QObject* q_abstractitemview_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAbstractItemView* self, const char* classname ```
bool q_abstractitemview_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractItemView* self, int interval, enum Qt__TimerType timerType ```
int32_t q_abstractitemview_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractitemview_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractItemView* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractitemview_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractItemView* self, QObject* param1 ```
void q_abstractitemview_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QAbstractItemView* self, void (*slot)(QObject*, QObject*) ```
void q_abstractitemview_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QAbstractItemView* self ```
double q_abstractitemview_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QAbstractItemView* self ```
double q_abstractitemview_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_abstractitemview_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self ```
QSize* q_abstractitemview_minimum_size_hint(void* self) {
    return QAbstractItemView_MinimumSizeHint((QAbstractItemView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self ```
QSize* q_abstractitemview_qbase_minimum_size_hint(void* self) {
    return QAbstractItemView_QBaseMinimumSizeHint((QAbstractItemView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, QSize* (*slot)() ```
void q_abstractitemview_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QAbstractItemView_OnMinimumSizeHint((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self ```
QSize* q_abstractitemview_size_hint(void* self) {
    return QAbstractItemView_SizeHint((QAbstractItemView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self ```
QSize* q_abstractitemview_qbase_size_hint(void* self) {
    return QAbstractItemView_QBaseSizeHint((QAbstractItemView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, QSize* (*slot)() ```
void q_abstractitemview_on_size_hint(void* self, QSize* (*slot)()) {
    QAbstractItemView_OnSizeHint((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QWidget* viewport ```
void q_abstractitemview_setup_viewport(void* self, void* viewport) {
    QAbstractItemView_SetupViewport((QAbstractItemView*)self, (QWidget*)viewport);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QWidget* viewport ```
void q_abstractitemview_qbase_setup_viewport(void* self, void* viewport) {
    QAbstractItemView_QBaseSetupViewport((QAbstractItemView*)self, (QWidget*)viewport);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QWidget*) ```
void q_abstractitemview_on_setup_viewport(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnSetupViewport((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QPaintEvent* param1 ```
void q_abstractitemview_paint_event(void* self, void* param1) {
    QAbstractItemView_PaintEvent((QAbstractItemView*)self, (QPaintEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QPaintEvent* param1 ```
void q_abstractitemview_qbase_paint_event(void* self, void* param1) {
    QAbstractItemView_QBasePaintEvent((QAbstractItemView*)self, (QPaintEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QPaintEvent*) ```
void q_abstractitemview_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnPaintEvent((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QWheelEvent* param1 ```
void q_abstractitemview_wheel_event(void* self, void* param1) {
    QAbstractItemView_WheelEvent((QAbstractItemView*)self, (QWheelEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QWheelEvent* param1 ```
void q_abstractitemview_qbase_wheel_event(void* self, void* param1) {
    QAbstractItemView_QBaseWheelEvent((QAbstractItemView*)self, (QWheelEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QWheelEvent*) ```
void q_abstractitemview_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnWheelEvent((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QContextMenuEvent* param1 ```
void q_abstractitemview_context_menu_event(void* self, void* param1) {
    QAbstractItemView_ContextMenuEvent((QAbstractItemView*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QContextMenuEvent* param1 ```
void q_abstractitemview_qbase_context_menu_event(void* self, void* param1) {
    QAbstractItemView_QBaseContextMenuEvent((QAbstractItemView*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QContextMenuEvent*) ```
void q_abstractitemview_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnContextMenuEvent((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollContentsBy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, int dx, int dy ```
void q_abstractitemview_scroll_contents_by(void* self, int dx, int dy) {
    QAbstractItemView_ScrollContentsBy((QAbstractItemView*)self, dx, dy);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, int dx, int dy ```
void q_abstractitemview_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QAbstractItemView_QBaseScrollContentsBy((QAbstractItemView*)self, dx, dy);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, int, int) ```
void q_abstractitemview_on_scroll_contents_by(void* self, void (*slot)(void*, int, int)) {
    QAbstractItemView_OnScrollContentsBy((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QEvent* param1 ```
void q_abstractitemview_change_event(void* self, void* param1) {
    QAbstractItemView_ChangeEvent((QAbstractItemView*)self, (QEvent*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QEvent* param1 ```
void q_abstractitemview_qbase_change_event(void* self, void* param1) {
    QAbstractItemView_QBaseChangeEvent((QAbstractItemView*)self, (QEvent*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QEvent*) ```
void q_abstractitemview_on_change_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnChangeEvent((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QStyleOptionFrame* option ```
void q_abstractitemview_init_style_option(void* self, void* option) {
    QAbstractItemView_InitStyleOption((QAbstractItemView*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QStyleOptionFrame* option ```
void q_abstractitemview_qbase_init_style_option(void* self, void* option) {
    QAbstractItemView_QBaseInitStyleOption((QAbstractItemView*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QStyleOptionFrame*) ```
void q_abstractitemview_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnInitStyleOption((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_dev_type(void* self) {
    return QAbstractItemView_DevType((QAbstractItemView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_qbase_dev_type(void* self) {
    return QAbstractItemView_QBaseDevType((QAbstractItemView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, int32_t (*slot)() ```
void q_abstractitemview_on_dev_type(void* self, int32_t (*slot)()) {
    QAbstractItemView_OnDevType((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, bool visible ```
void q_abstractitemview_set_visible(void* self, bool visible) {
    QAbstractItemView_SetVisible((QAbstractItemView*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, bool visible ```
void q_abstractitemview_qbase_set_visible(void* self, bool visible) {
    QAbstractItemView_QBaseSetVisible((QAbstractItemView*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, bool) ```
void q_abstractitemview_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QAbstractItemView_OnSetVisible((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, int param1 ```
int32_t q_abstractitemview_height_for_width(void* self, int param1) {
    return QAbstractItemView_HeightForWidth((QAbstractItemView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, int param1 ```
int32_t q_abstractitemview_qbase_height_for_width(void* self, int param1) {
    return QAbstractItemView_QBaseHeightForWidth((QAbstractItemView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, int32_t (*slot)(QAbstractItemView*, int) ```
void q_abstractitemview_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QAbstractItemView_OnHeightForWidth((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_has_height_for_width(void* self) {
    return QAbstractItemView_HasHeightForWidth((QAbstractItemView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_qbase_has_height_for_width(void* self) {
    return QAbstractItemView_QBaseHasHeightForWidth((QAbstractItemView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, bool (*slot)() ```
void q_abstractitemview_on_has_height_for_width(void* self, bool (*slot)()) {
    QAbstractItemView_OnHasHeightForWidth((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self ```
QPaintEngine* q_abstractitemview_paint_engine(void* self) {
    return QAbstractItemView_PaintEngine((QAbstractItemView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self ```
QPaintEngine* q_abstractitemview_qbase_paint_engine(void* self) {
    return QAbstractItemView_QBasePaintEngine((QAbstractItemView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, QPaintEngine* (*slot)() ```
void q_abstractitemview_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QAbstractItemView_OnPaintEngine((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QKeyEvent* event ```
void q_abstractitemview_key_release_event(void* self, void* event) {
    QAbstractItemView_KeyReleaseEvent((QAbstractItemView*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QKeyEvent* event ```
void q_abstractitemview_qbase_key_release_event(void* self, void* event) {
    QAbstractItemView_QBaseKeyReleaseEvent((QAbstractItemView*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QKeyEvent*) ```
void q_abstractitemview_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnKeyReleaseEvent((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QEnterEvent* event ```
void q_abstractitemview_enter_event(void* self, void* event) {
    QAbstractItemView_EnterEvent((QAbstractItemView*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QEnterEvent* event ```
void q_abstractitemview_qbase_enter_event(void* self, void* event) {
    QAbstractItemView_QBaseEnterEvent((QAbstractItemView*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QEnterEvent*) ```
void q_abstractitemview_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnEnterEvent((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QEvent* event ```
void q_abstractitemview_leave_event(void* self, void* event) {
    QAbstractItemView_LeaveEvent((QAbstractItemView*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QEvent* event ```
void q_abstractitemview_qbase_leave_event(void* self, void* event) {
    QAbstractItemView_QBaseLeaveEvent((QAbstractItemView*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QEvent*) ```
void q_abstractitemview_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnLeaveEvent((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QMoveEvent* event ```
void q_abstractitemview_move_event(void* self, void* event) {
    QAbstractItemView_MoveEvent((QAbstractItemView*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QMoveEvent* event ```
void q_abstractitemview_qbase_move_event(void* self, void* event) {
    QAbstractItemView_QBaseMoveEvent((QAbstractItemView*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QMoveEvent*) ```
void q_abstractitemview_on_move_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnMoveEvent((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QCloseEvent* event ```
void q_abstractitemview_close_event(void* self, void* event) {
    QAbstractItemView_CloseEvent((QAbstractItemView*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QCloseEvent* event ```
void q_abstractitemview_qbase_close_event(void* self, void* event) {
    QAbstractItemView_QBaseCloseEvent((QAbstractItemView*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QCloseEvent*) ```
void q_abstractitemview_on_close_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnCloseEvent((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QTabletEvent* event ```
void q_abstractitemview_tablet_event(void* self, void* event) {
    QAbstractItemView_TabletEvent((QAbstractItemView*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QTabletEvent* event ```
void q_abstractitemview_qbase_tablet_event(void* self, void* event) {
    QAbstractItemView_QBaseTabletEvent((QAbstractItemView*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QTabletEvent*) ```
void q_abstractitemview_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnTabletEvent((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QActionEvent* event ```
void q_abstractitemview_action_event(void* self, void* event) {
    QAbstractItemView_ActionEvent((QAbstractItemView*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QActionEvent* event ```
void q_abstractitemview_qbase_action_event(void* self, void* event) {
    QAbstractItemView_QBaseActionEvent((QAbstractItemView*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QActionEvent*) ```
void q_abstractitemview_on_action_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnActionEvent((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QShowEvent* event ```
void q_abstractitemview_show_event(void* self, void* event) {
    QAbstractItemView_ShowEvent((QAbstractItemView*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QShowEvent* event ```
void q_abstractitemview_qbase_show_event(void* self, void* event) {
    QAbstractItemView_QBaseShowEvent((QAbstractItemView*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QShowEvent*) ```
void q_abstractitemview_on_show_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnShowEvent((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QHideEvent* event ```
void q_abstractitemview_hide_event(void* self, void* event) {
    QAbstractItemView_HideEvent((QAbstractItemView*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QHideEvent* event ```
void q_abstractitemview_qbase_hide_event(void* self, void* event) {
    QAbstractItemView_QBaseHideEvent((QAbstractItemView*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QHideEvent*) ```
void q_abstractitemview_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnHideEvent((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, const char* eventType, void* message, intptr_t* result ```
bool q_abstractitemview_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QAbstractItemView_NativeEvent((QAbstractItemView*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, const char* eventType, void* message, intptr_t* result ```
bool q_abstractitemview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QAbstractItemView_QBaseNativeEvent((QAbstractItemView*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, bool (*slot)(QAbstractItemView*, const char*, void*, intptr_t*) ```
void q_abstractitemview_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QAbstractItemView_OnNativeEvent((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_abstractitemview_metric(void* self, int64_t param1) {
    return QAbstractItemView_Metric((QAbstractItemView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_abstractitemview_qbase_metric(void* self, int64_t param1) {
    return QAbstractItemView_QBaseMetric((QAbstractItemView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, int32_t (*slot)(QAbstractItemView*, enum QPaintDevice__PaintDeviceMetric) ```
void q_abstractitemview_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QAbstractItemView_OnMetric((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QPainter* painter ```
void q_abstractitemview_init_painter(void* self, void* painter) {
    QAbstractItemView_InitPainter((QAbstractItemView*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QPainter* painter ```
void q_abstractitemview_qbase_init_painter(void* self, void* painter) {
    QAbstractItemView_QBaseInitPainter((QAbstractItemView*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QPainter*) ```
void q_abstractitemview_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnInitPainter((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QPoint* offset ```
QPaintDevice* q_abstractitemview_redirected(void* self, void* offset) {
    return QAbstractItemView_Redirected((QAbstractItemView*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QPoint* offset ```
QPaintDevice* q_abstractitemview_qbase_redirected(void* self, void* offset) {
    return QAbstractItemView_QBaseRedirected((QAbstractItemView*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, QPaintDevice* (*slot)(QAbstractItemView*, QPoint*) ```
void q_abstractitemview_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QAbstractItemView_OnRedirected((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self ```
QPainter* q_abstractitemview_shared_painter(void* self) {
    return QAbstractItemView_SharedPainter((QAbstractItemView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self ```
QPainter* q_abstractitemview_qbase_shared_painter(void* self) {
    return QAbstractItemView_QBaseSharedPainter((QAbstractItemView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, QPainter* (*slot)() ```
void q_abstractitemview_on_shared_painter(void* self, QPainter* (*slot)()) {
    QAbstractItemView_OnSharedPainter((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QChildEvent* event ```
void q_abstractitemview_child_event(void* self, void* event) {
    QAbstractItemView_ChildEvent((QAbstractItemView*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QChildEvent* event ```
void q_abstractitemview_qbase_child_event(void* self, void* event) {
    QAbstractItemView_QBaseChildEvent((QAbstractItemView*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QChildEvent*) ```
void q_abstractitemview_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnChildEvent((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QEvent* event ```
void q_abstractitemview_custom_event(void* self, void* event) {
    QAbstractItemView_CustomEvent((QAbstractItemView*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QEvent* event ```
void q_abstractitemview_qbase_custom_event(void* self, void* event) {
    QAbstractItemView_QBaseCustomEvent((QAbstractItemView*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QEvent*) ```
void q_abstractitemview_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnCustomEvent((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QMetaMethod* signal ```
void q_abstractitemview_connect_notify(void* self, void* signal) {
    QAbstractItemView_ConnectNotify((QAbstractItemView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QMetaMethod* signal ```
void q_abstractitemview_qbase_connect_notify(void* self, void* signal) {
    QAbstractItemView_QBaseConnectNotify((QAbstractItemView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QMetaMethod*) ```
void q_abstractitemview_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnConnectNotify((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QMetaMethod* signal ```
void q_abstractitemview_disconnect_notify(void* self, void* signal) {
    QAbstractItemView_DisconnectNotify((QAbstractItemView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QMetaMethod* signal ```
void q_abstractitemview_qbase_disconnect_notify(void* self, void* signal) {
    QAbstractItemView_QBaseDisconnectNotify((QAbstractItemView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QMetaMethod*) ```
void q_abstractitemview_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnDisconnectNotify((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, int left, int top, int right, int bottom ```
void q_abstractitemview_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QAbstractItemView_SetViewportMargins((QAbstractItemView*)self, left, top, right, bottom);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, int left, int top, int right, int bottom ```
void q_abstractitemview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QAbstractItemView_QBaseSetViewportMargins((QAbstractItemView*)self, left, top, right, bottom);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, int, int, int, int) ```
void q_abstractitemview_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int)) {
    QAbstractItemView_OnSetViewportMargins((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self ```
QMargins* q_abstractitemview_viewport_margins(void* self) {
    return QAbstractItemView_ViewportMargins((QAbstractItemView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self ```
QMargins* q_abstractitemview_qbase_viewport_margins(void* self) {
    return QAbstractItemView_QBaseViewportMargins((QAbstractItemView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, QMargins* (*slot)() ```
void q_abstractitemview_on_viewport_margins(void* self, QMargins* (*slot)()) {
    QAbstractItemView_OnViewportMargins((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QPainter* param1 ```
void q_abstractitemview_draw_frame(void* self, void* param1) {
    QAbstractItemView_DrawFrame((QAbstractItemView*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QPainter* param1 ```
void q_abstractitemview_qbase_draw_frame(void* self, void* param1) {
    QAbstractItemView_QBaseDrawFrame((QAbstractItemView*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)(QAbstractItemView*, QPainter*) ```
void q_abstractitemview_on_draw_frame(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_OnDrawFrame((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_update_micro_focus(void* self) {
    QAbstractItemView_UpdateMicroFocus((QAbstractItemView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_qbase_update_micro_focus(void* self) {
    QAbstractItemView_QBaseUpdateMicroFocus((QAbstractItemView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)() ```
void q_abstractitemview_on_update_micro_focus(void* self, void (*slot)()) {
    QAbstractItemView_OnUpdateMicroFocus((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_create(void* self) {
    QAbstractItemView_Create((QAbstractItemView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_qbase_create(void* self) {
    QAbstractItemView_QBaseCreate((QAbstractItemView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)() ```
void q_abstractitemview_on_create(void* self, void (*slot)()) {
    QAbstractItemView_OnCreate((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_destroy(void* self) {
    QAbstractItemView_Destroy((QAbstractItemView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_qbase_destroy(void* self) {
    QAbstractItemView_QBaseDestroy((QAbstractItemView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, void (*slot)() ```
void q_abstractitemview_on_destroy(void* self, void (*slot)()) {
    QAbstractItemView_OnDestroy((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_focus_next_child(void* self) {
    return QAbstractItemView_FocusNextChild((QAbstractItemView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_qbase_focus_next_child(void* self) {
    return QAbstractItemView_QBaseFocusNextChild((QAbstractItemView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, bool (*slot)() ```
void q_abstractitemview_on_focus_next_child(void* self, bool (*slot)()) {
    QAbstractItemView_OnFocusNextChild((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_focus_previous_child(void* self) {
    return QAbstractItemView_FocusPreviousChild((QAbstractItemView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self ```
bool q_abstractitemview_qbase_focus_previous_child(void* self) {
    return QAbstractItemView_QBaseFocusPreviousChild((QAbstractItemView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, bool (*slot)() ```
void q_abstractitemview_on_focus_previous_child(void* self, bool (*slot)()) {
    QAbstractItemView_OnFocusPreviousChild((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self ```
QObject* q_abstractitemview_sender(void* self) {
    return QAbstractItemView_Sender((QAbstractItemView*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self ```
QObject* q_abstractitemview_qbase_sender(void* self) {
    return QAbstractItemView_QBaseSender((QAbstractItemView*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, QObject* (*slot)() ```
void q_abstractitemview_on_sender(void* self, QObject* (*slot)()) {
    QAbstractItemView_OnSender((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_sender_signal_index(void* self) {
    return QAbstractItemView_SenderSignalIndex((QAbstractItemView*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self ```
int32_t q_abstractitemview_qbase_sender_signal_index(void* self) {
    return QAbstractItemView_QBaseSenderSignalIndex((QAbstractItemView*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, int32_t (*slot)() ```
void q_abstractitemview_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAbstractItemView_OnSenderSignalIndex((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, const char* signal ```
int32_t q_abstractitemview_receivers(void* self, const char* signal) {
    return QAbstractItemView_Receivers((QAbstractItemView*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, const char* signal ```
int32_t q_abstractitemview_qbase_receivers(void* self, const char* signal) {
    return QAbstractItemView_QBaseReceivers((QAbstractItemView*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, int32_t (*slot)(QAbstractItemView*, const char*) ```
void q_abstractitemview_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAbstractItemView_OnReceivers((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractItemView* self, QMetaMethod* signal ```
bool q_abstractitemview_is_signal_connected(void* self, void* signal) {
    return QAbstractItemView_IsSignalConnected((QAbstractItemView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractItemView* self, QMetaMethod* signal ```
bool q_abstractitemview_qbase_is_signal_connected(void* self, void* signal) {
    return QAbstractItemView_QBaseIsSignalConnected((QAbstractItemView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractItemView* self, bool (*slot)(QAbstractItemView*, QMetaMethod*) ```
void q_abstractitemview_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAbstractItemView_OnIsSignalConnected((QAbstractItemView*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAbstractItemView* self ```
void q_abstractitemview_delete(void* self) {
    QAbstractItemView_Delete((QAbstractItemView*)(self));
}