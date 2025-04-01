#include "libqabstractitemdelegate.hpp"
#include "libqabstractitemmodel.hpp"
#include "libqabstractitemview.hpp"
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
#include "libqcolumnview.hpp"
#include "libqcolumnview.h"

QColumnView* q_columnview_new(void* parent) {
    return QColumnView_new((QWidget*)parent);
}

QColumnView* q_columnview_new2() {
    return QColumnView_new2();
}

QMetaObject* q_columnview_meta_object(void* self) {
    return QColumnView_MetaObject((QColumnView*)self);
}

void* q_columnview_metacast(void* self, const char* param1) {
    return QColumnView_Metacast((QColumnView*)self, param1);
}

int32_t q_columnview_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QColumnView_Metacall((QColumnView*)self, param1, param2, param3);
}

void q_columnview_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QColumnView_OnMetacall((QColumnView*)self, (intptr_t)slot);
}

int32_t q_columnview_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QColumnView_QBaseMetacall((QColumnView*)self, param1, param2, param3);
}

const char* q_columnview_tr(const char* s) {
    libqt_string _str = QColumnView_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_columnview_update_preview_widget(void* self, void* index) {
    QColumnView_UpdatePreviewWidget((QColumnView*)self, (QModelIndex*)index);
}

void q_columnview_on_update_preview_widget(void* self, void (*slot)(void*, void*)) {
    QColumnView_Connect_UpdatePreviewWidget((QColumnView*)self, (intptr_t)slot);
}

QModelIndex* q_columnview_index_at(void* self, void* point) {
    return QColumnView_IndexAt((QColumnView*)self, (QPoint*)point);
}

void q_columnview_on_index_at(void* self, QModelIndex* (*slot)(void*, void*)) {
    QColumnView_OnIndexAt((QColumnView*)self, (intptr_t)slot);
}

QModelIndex* q_columnview_qbase_index_at(void* self, void* point) {
    return QColumnView_QBaseIndexAt((QColumnView*)self, (QPoint*)point);
}

void q_columnview_scroll_to(void* self, void* index, int64_t hint) {
    QColumnView_ScrollTo((QColumnView*)self, (QModelIndex*)index, hint);
}

void q_columnview_on_scroll_to(void* self, void (*slot)(void*, void*, int64_t)) {
    QColumnView_OnScrollTo((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_qbase_scroll_to(void* self, void* index, int64_t hint) {
    QColumnView_QBaseScrollTo((QColumnView*)self, (QModelIndex*)index, hint);
}

QSize* q_columnview_size_hint(void* self) {
    return QColumnView_SizeHint((QColumnView*)self);
}

void q_columnview_on_size_hint(void* self, QSize* (*slot)()) {
    QColumnView_OnSizeHint((QColumnView*)self, (intptr_t)slot);
}

QSize* q_columnview_qbase_size_hint(void* self) {
    return QColumnView_QBaseSizeHint((QColumnView*)self);
}

QRect* q_columnview_visual_rect(void* self, void* index) {
    return QColumnView_VisualRect((QColumnView*)self, (QModelIndex*)index);
}

void q_columnview_on_visual_rect(void* self, QRect* (*slot)(void*, void*)) {
    QColumnView_OnVisualRect((QColumnView*)self, (intptr_t)slot);
}

QRect* q_columnview_qbase_visual_rect(void* self, void* index) {
    return QColumnView_QBaseVisualRect((QColumnView*)self, (QModelIndex*)index);
}

void q_columnview_set_model(void* self, void* model) {
    QColumnView_SetModel((QColumnView*)self, (QAbstractItemModel*)model);
}

void q_columnview_on_set_model(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnSetModel((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_qbase_set_model(void* self, void* model) {
    QColumnView_QBaseSetModel((QColumnView*)self, (QAbstractItemModel*)model);
}

void q_columnview_set_selection_model(void* self, void* selectionModel) {
    QColumnView_SetSelectionModel((QColumnView*)self, (QItemSelectionModel*)selectionModel);
}

void q_columnview_on_set_selection_model(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnSetSelectionModel((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_qbase_set_selection_model(void* self, void* selectionModel) {
    QColumnView_QBaseSetSelectionModel((QColumnView*)self, (QItemSelectionModel*)selectionModel);
}

void q_columnview_set_root_index(void* self, void* index) {
    QColumnView_SetRootIndex((QColumnView*)self, (QModelIndex*)index);
}

void q_columnview_on_set_root_index(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnSetRootIndex((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_qbase_set_root_index(void* self, void* index) {
    QColumnView_QBaseSetRootIndex((QColumnView*)self, (QModelIndex*)index);
}

void q_columnview_select_all(void* self) {
    QColumnView_SelectAll((QColumnView*)self);
}

void q_columnview_on_select_all(void* self, void (*slot)()) {
    QColumnView_OnSelectAll((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_qbase_select_all(void* self) {
    QColumnView_QBaseSelectAll((QColumnView*)self);
}

void q_columnview_set_resize_grips_visible(void* self, bool visible) {
    QColumnView_SetResizeGripsVisible((QColumnView*)self, visible);
}

bool q_columnview_resize_grips_visible(void* self) {
    return QColumnView_ResizeGripsVisible((QColumnView*)self);
}

QWidget* q_columnview_preview_widget(void* self) {
    return QColumnView_PreviewWidget((QColumnView*)self);
}

void q_columnview_set_preview_widget(void* self, void* widget) {
    QColumnView_SetPreviewWidget((QColumnView*)self, (QWidget*)widget);
}

void q_columnview_set_column_widths(void* self, int* list[]) {
    size_t list_len = 0;
    while (list[list_len] != NULL) {
        list_len++;
    }
    libqt_list list_list = {
        .len = list_len,
        .data = {(int*)list},
    };
    QColumnView_SetColumnWidths((QColumnView*)self, list_list);
}

libqt_list /* of int */ q_columnview_column_widths(void* self) {
    libqt_list _arr = QColumnView_ColumnWidths((QColumnView*)self);
    return _arr;
}

bool q_columnview_is_index_hidden(void* self, void* index) {
    return QColumnView_IsIndexHidden((QColumnView*)self, (QModelIndex*)index);
}

void q_columnview_on_is_index_hidden(void* self, bool (*slot)(void*, void*)) {
    QColumnView_OnIsIndexHidden((QColumnView*)self, (intptr_t)slot);
}

bool q_columnview_qbase_is_index_hidden(void* self, void* index) {
    return QColumnView_QBaseIsIndexHidden((QColumnView*)self, (QModelIndex*)index);
}

QModelIndex* q_columnview_move_cursor(void* self, int64_t cursorAction, int64_t modifiers) {
    return QColumnView_MoveCursor((QColumnView*)self, cursorAction, modifiers);
}

void q_columnview_on_move_cursor(void* self, QModelIndex* (*slot)(void*, int64_t, int64_t)) {
    QColumnView_OnMoveCursor((QColumnView*)self, (intptr_t)slot);
}

QModelIndex* q_columnview_qbase_move_cursor(void* self, int64_t cursorAction, int64_t modifiers) {
    return QColumnView_QBaseMoveCursor((QColumnView*)self, cursorAction, modifiers);
}

void q_columnview_resize_event(void* self, void* event) {
    QColumnView_ResizeEvent((QColumnView*)self, (QResizeEvent*)event);
}

void q_columnview_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnResizeEvent((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_qbase_resize_event(void* self, void* event) {
    QColumnView_QBaseResizeEvent((QColumnView*)self, (QResizeEvent*)event);
}

void q_columnview_set_selection(void* self, void* rect, int64_t command) {
    QColumnView_SetSelection((QColumnView*)self, (QRect*)rect, command);
}

void q_columnview_on_set_selection(void* self, void (*slot)(void*, void*, int64_t)) {
    QColumnView_OnSetSelection((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_qbase_set_selection(void* self, void* rect, int64_t command) {
    QColumnView_QBaseSetSelection((QColumnView*)self, (QRect*)rect, command);
}

QRegion* q_columnview_visual_region_for_selection(void* self, void* selection) {
    return QColumnView_VisualRegionForSelection((QColumnView*)self, (QItemSelection*)selection);
}

void q_columnview_on_visual_region_for_selection(void* self, QRegion* (*slot)(void*, void*)) {
    QColumnView_OnVisualRegionForSelection((QColumnView*)self, (intptr_t)slot);
}

QRegion* q_columnview_qbase_visual_region_for_selection(void* self, void* selection) {
    return QColumnView_QBaseVisualRegionForSelection((QColumnView*)self, (QItemSelection*)selection);
}

int32_t q_columnview_horizontal_offset(void* self) {
    return QColumnView_HorizontalOffset((QColumnView*)self);
}

void q_columnview_on_horizontal_offset(void* self, int32_t (*slot)()) {
    QColumnView_OnHorizontalOffset((QColumnView*)self, (intptr_t)slot);
}

int32_t q_columnview_qbase_horizontal_offset(void* self) {
    return QColumnView_QBaseHorizontalOffset((QColumnView*)self);
}

int32_t q_columnview_vertical_offset(void* self) {
    return QColumnView_VerticalOffset((QColumnView*)self);
}

void q_columnview_on_vertical_offset(void* self, int32_t (*slot)()) {
    QColumnView_OnVerticalOffset((QColumnView*)self, (intptr_t)slot);
}

int32_t q_columnview_qbase_vertical_offset(void* self) {
    return QColumnView_QBaseVerticalOffset((QColumnView*)self);
}

void q_columnview_rows_inserted(void* self, void* parent, int start, int end) {
    QColumnView_RowsInserted((QColumnView*)self, (QModelIndex*)parent, start, end);
}

void q_columnview_on_rows_inserted(void* self, void (*slot)(void*, void*, int, int)) {
    QColumnView_OnRowsInserted((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_qbase_rows_inserted(void* self, void* parent, int start, int end) {
    QColumnView_QBaseRowsInserted((QColumnView*)self, (QModelIndex*)parent, start, end);
}

void q_columnview_current_changed(void* self, void* current, void* previous) {
    QColumnView_CurrentChanged((QColumnView*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

void q_columnview_on_current_changed(void* self, void (*slot)(void*, void*, void*)) {
    QColumnView_OnCurrentChanged((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_qbase_current_changed(void* self, void* current, void* previous) {
    QColumnView_QBaseCurrentChanged((QColumnView*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

void q_columnview_scroll_contents_by(void* self, int dx, int dy) {
    QColumnView_ScrollContentsBy((QColumnView*)self, dx, dy);
}

void q_columnview_on_scroll_contents_by(void* self, void (*slot)(void*, int, int)) {
    QColumnView_OnScrollContentsBy((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QColumnView_QBaseScrollContentsBy((QColumnView*)self, dx, dy);
}

QAbstractItemView* q_columnview_create_column(void* self, void* rootIndex) {
    return QColumnView_CreateColumn((QColumnView*)self, (QModelIndex*)rootIndex);
}

void q_columnview_on_create_column(void* self, QAbstractItemView* (*slot)(void*, void*)) {
    QColumnView_OnCreateColumn((QColumnView*)self, (intptr_t)slot);
}

QAbstractItemView* q_columnview_qbase_create_column(void* self, void* rootIndex) {
    return QColumnView_QBaseCreateColumn((QColumnView*)self, (QModelIndex*)rootIndex);
}

void q_columnview_initialize_column(void* self, void* column) {
    QColumnView_InitializeColumn((QColumnView*)self, (QAbstractItemView*)column);
}

void q_columnview_on_initialize_column(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnInitializeColumn((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_qbase_initialize_column(void* self, void* column) {
    QColumnView_QBaseInitializeColumn((QColumnView*)self, (QAbstractItemView*)column);
}

const char* q_columnview_tr2(const char* s, const char* c) {
    libqt_string _str = QColumnView_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_columnview_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QColumnView_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAbstractItemModel* q_columnview_model(void* self) {
    return QAbstractItemView_Model((QAbstractItemView*)self);
}

QItemSelectionModel* q_columnview_selection_model(void* self) {
    return QAbstractItemView_SelectionModel((QAbstractItemView*)self);
}

void q_columnview_set_item_delegate(void* self, void* delegate) {
    QAbstractItemView_SetItemDelegate((QAbstractItemView*)self, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* q_columnview_item_delegate(void* self) {
    return QAbstractItemView_ItemDelegate((QAbstractItemView*)self);
}

void q_columnview_set_selection_mode(void* self, int64_t mode) {
    QAbstractItemView_SetSelectionMode((QAbstractItemView*)self, mode);
}

int64_t q_columnview_selection_mode(void* self) {
    return QAbstractItemView_SelectionMode((QAbstractItemView*)self);
}

void q_columnview_set_selection_behavior(void* self, int64_t behavior) {
    QAbstractItemView_SetSelectionBehavior((QAbstractItemView*)self, behavior);
}

int64_t q_columnview_selection_behavior(void* self) {
    return QAbstractItemView_SelectionBehavior((QAbstractItemView*)self);
}

QModelIndex* q_columnview_current_index(void* self) {
    return QAbstractItemView_CurrentIndex((QAbstractItemView*)self);
}

QModelIndex* q_columnview_root_index(void* self) {
    return QAbstractItemView_RootIndex((QAbstractItemView*)self);
}

void q_columnview_set_edit_triggers(void* self, int64_t triggers) {
    QAbstractItemView_SetEditTriggers((QAbstractItemView*)self, triggers);
}

int64_t q_columnview_edit_triggers(void* self) {
    return QAbstractItemView_EditTriggers((QAbstractItemView*)self);
}

void q_columnview_set_vertical_scroll_mode(void* self, int64_t mode) {
    QAbstractItemView_SetVerticalScrollMode((QAbstractItemView*)self, mode);
}

int64_t q_columnview_vertical_scroll_mode(void* self) {
    return QAbstractItemView_VerticalScrollMode((QAbstractItemView*)self);
}

void q_columnview_reset_vertical_scroll_mode(void* self) {
    QAbstractItemView_ResetVerticalScrollMode((QAbstractItemView*)self);
}

void q_columnview_set_horizontal_scroll_mode(void* self, int64_t mode) {
    QAbstractItemView_SetHorizontalScrollMode((QAbstractItemView*)self, mode);
}

int64_t q_columnview_horizontal_scroll_mode(void* self) {
    return QAbstractItemView_HorizontalScrollMode((QAbstractItemView*)self);
}

void q_columnview_reset_horizontal_scroll_mode(void* self) {
    QAbstractItemView_ResetHorizontalScrollMode((QAbstractItemView*)self);
}

void q_columnview_set_auto_scroll(void* self, bool enable) {
    QAbstractItemView_SetAutoScroll((QAbstractItemView*)self, enable);
}

bool q_columnview_has_auto_scroll(void* self) {
    return QAbstractItemView_HasAutoScroll((QAbstractItemView*)self);
}

void q_columnview_set_auto_scroll_margin(void* self, int margin) {
    QAbstractItemView_SetAutoScrollMargin((QAbstractItemView*)self, margin);
}

int32_t q_columnview_auto_scroll_margin(void* self) {
    return QAbstractItemView_AutoScrollMargin((QAbstractItemView*)self);
}

void q_columnview_set_tab_key_navigation(void* self, bool enable) {
    QAbstractItemView_SetTabKeyNavigation((QAbstractItemView*)self, enable);
}

bool q_columnview_tab_key_navigation(void* self) {
    return QAbstractItemView_TabKeyNavigation((QAbstractItemView*)self);
}

void q_columnview_set_drop_indicator_shown(void* self, bool enable) {
    QAbstractItemView_SetDropIndicatorShown((QAbstractItemView*)self, enable);
}

bool q_columnview_show_drop_indicator(void* self) {
    return QAbstractItemView_ShowDropIndicator((QAbstractItemView*)self);
}

void q_columnview_set_drag_enabled(void* self, bool enable) {
    QAbstractItemView_SetDragEnabled((QAbstractItemView*)self, enable);
}

bool q_columnview_drag_enabled(void* self) {
    return QAbstractItemView_DragEnabled((QAbstractItemView*)self);
}

void q_columnview_set_drag_drop_overwrite_mode(void* self, bool overwrite) {
    QAbstractItemView_SetDragDropOverwriteMode((QAbstractItemView*)self, overwrite);
}

bool q_columnview_drag_drop_overwrite_mode(void* self) {
    return QAbstractItemView_DragDropOverwriteMode((QAbstractItemView*)self);
}

void q_columnview_set_drag_drop_mode(void* self, int64_t behavior) {
    QAbstractItemView_SetDragDropMode((QAbstractItemView*)self, behavior);
}

int64_t q_columnview_drag_drop_mode(void* self) {
    return QAbstractItemView_DragDropMode((QAbstractItemView*)self);
}

void q_columnview_set_default_drop_action(void* self, int64_t dropAction) {
    QAbstractItemView_SetDefaultDropAction((QAbstractItemView*)self, dropAction);
}

int64_t q_columnview_default_drop_action(void* self) {
    return QAbstractItemView_DefaultDropAction((QAbstractItemView*)self);
}

void q_columnview_set_alternating_row_colors(void* self, bool enable) {
    QAbstractItemView_SetAlternatingRowColors((QAbstractItemView*)self, enable);
}

bool q_columnview_alternating_row_colors(void* self) {
    return QAbstractItemView_AlternatingRowColors((QAbstractItemView*)self);
}

void q_columnview_set_icon_size(void* self, void* size) {
    QAbstractItemView_SetIconSize((QAbstractItemView*)self, (QSize*)size);
}

QSize* q_columnview_icon_size(void* self) {
    return QAbstractItemView_IconSize((QAbstractItemView*)self);
}

void q_columnview_set_text_elide_mode(void* self, int64_t mode) {
    QAbstractItemView_SetTextElideMode((QAbstractItemView*)self, mode);
}

int64_t q_columnview_text_elide_mode(void* self) {
    return QAbstractItemView_TextElideMode((QAbstractItemView*)self);
}

QSize* q_columnview_size_hint_for_index(void* self, void* index) {
    return QAbstractItemView_SizeHintForIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_columnview_open_persistent_editor(void* self, void* index) {
    QAbstractItemView_OpenPersistentEditor((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_columnview_close_persistent_editor(void* self, void* index) {
    QAbstractItemView_ClosePersistentEditor((QAbstractItemView*)self, (QModelIndex*)index);
}

bool q_columnview_is_persistent_editor_open(void* self, void* index) {
    return QAbstractItemView_IsPersistentEditorOpen((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_columnview_set_index_widget(void* self, void* index, void* widget) {
    QAbstractItemView_SetIndexWidget((QAbstractItemView*)self, (QModelIndex*)index, (QWidget*)widget);
}

QWidget* q_columnview_index_widget(void* self, void* index) {
    return QAbstractItemView_IndexWidget((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_columnview_set_item_delegate_for_row(void* self, int row, void* delegate) {
    QAbstractItemView_SetItemDelegateForRow((QAbstractItemView*)self, row, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* q_columnview_item_delegate_for_row(void* self, int row) {
    return QAbstractItemView_ItemDelegateForRow((QAbstractItemView*)self, row);
}

void q_columnview_set_item_delegate_for_column(void* self, int column, void* delegate) {
    QAbstractItemView_SetItemDelegateForColumn((QAbstractItemView*)self, column, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* q_columnview_item_delegate_for_column(void* self, int column) {
    return QAbstractItemView_ItemDelegateForColumn((QAbstractItemView*)self, column);
}

QAbstractItemDelegate* q_columnview_item_delegate_with_index(void* self, void* index) {
    return QAbstractItemView_ItemDelegateWithIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_columnview_edit(void* self, void* index) {
    QAbstractItemView_Edit((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_columnview_clear_selection(void* self) {
    QAbstractItemView_ClearSelection((QAbstractItemView*)self);
}

void q_columnview_set_current_index(void* self, void* index) {
    QAbstractItemView_SetCurrentIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_columnview_scroll_to_top(void* self) {
    QAbstractItemView_ScrollToTop((QAbstractItemView*)self);
}

void q_columnview_scroll_to_bottom(void* self) {
    QAbstractItemView_ScrollToBottom((QAbstractItemView*)self);
}

void q_columnview_update(void* self, void* index) {
    QAbstractItemView_Update((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_columnview_pressed(void* self, void* index) {
    QAbstractItemView_Pressed((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_columnview_on_pressed(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Pressed((QAbstractItemView*)self, (intptr_t)slot);
}

void q_columnview_clicked(void* self, void* index) {
    QAbstractItemView_Clicked((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_columnview_on_clicked(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Clicked((QAbstractItemView*)self, (intptr_t)slot);
}

void q_columnview_double_clicked(void* self, void* index) {
    QAbstractItemView_DoubleClicked((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_columnview_on_double_clicked(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_DoubleClicked((QAbstractItemView*)self, (intptr_t)slot);
}

void q_columnview_activated(void* self, void* index) {
    QAbstractItemView_Activated((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_columnview_on_activated(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Activated((QAbstractItemView*)self, (intptr_t)slot);
}

void q_columnview_entered(void* self, void* index) {
    QAbstractItemView_Entered((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_columnview_on_entered(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Entered((QAbstractItemView*)self, (intptr_t)slot);
}

void q_columnview_viewport_entered(void* self) {
    QAbstractItemView_ViewportEntered((QAbstractItemView*)self);
}

void q_columnview_on_viewport_entered(void* self, void (*slot)(void*)) {
    QAbstractItemView_Connect_ViewportEntered((QAbstractItemView*)self, (intptr_t)slot);
}

void q_columnview_icon_size_changed(void* self, void* size) {
    QAbstractItemView_IconSizeChanged((QAbstractItemView*)self, (QSize*)size);
}

void q_columnview_on_icon_size_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_IconSizeChanged((QAbstractItemView*)self, (intptr_t)slot);
}

int64_t q_columnview_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_columnview_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

QScrollBar* q_columnview_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

void q_columnview_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

int64_t q_columnview_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_columnview_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

QScrollBar* q_columnview_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

void q_columnview_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

QWidget* q_columnview_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

void q_columnview_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

void q_columnview_add_scroll_bar_widget(void* self, void* widget, int64_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

libqt_list /* of QWidget* */ q_columnview_scroll_bar_widgets(void* self, int64_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

QWidget* q_columnview_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

void q_columnview_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

QSize* q_columnview_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

int64_t q_columnview_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

void q_columnview_set_size_adjust_policy(void* self, int64_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

int32_t q_columnview_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void q_columnview_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t q_columnview_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int64_t q_columnview_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void q_columnview_set_frame_shape(void* self, int64_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int64_t q_columnview_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void q_columnview_set_frame_shadow(void* self, int64_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t q_columnview_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void q_columnview_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t q_columnview_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void q_columnview_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* q_columnview_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void q_columnview_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t q_columnview_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_columnview_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_columnview_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_columnview_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_columnview_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_columnview_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_columnview_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_columnview_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_columnview_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_columnview_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_columnview_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_columnview_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_columnview_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_columnview_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_columnview_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_columnview_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_columnview_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

QRect* q_columnview_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_columnview_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_columnview_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_columnview_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_columnview_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_columnview_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_columnview_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_columnview_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_columnview_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_columnview_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_columnview_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_columnview_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_columnview_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_columnview_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_columnview_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_columnview_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_columnview_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_columnview_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_columnview_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_columnview_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_columnview_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_columnview_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_columnview_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_columnview_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_columnview_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_columnview_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_columnview_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_columnview_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_columnview_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_columnview_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_columnview_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_columnview_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_columnview_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_columnview_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_columnview_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_columnview_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_columnview_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_columnview_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_columnview_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_columnview_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_columnview_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_columnview_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_columnview_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_columnview_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_columnview_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_columnview_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_columnview_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_columnview_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_columnview_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_columnview_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_columnview_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

QPalette* q_columnview_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_columnview_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_columnview_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_columnview_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_columnview_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_columnview_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

QFont* q_columnview_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_columnview_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_columnview_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_columnview_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_columnview_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_columnview_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_columnview_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_columnview_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_columnview_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_columnview_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_columnview_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_columnview_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_columnview_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_columnview_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

QRegion* q_columnview_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_columnview_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_columnview_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_columnview_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_columnview_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_columnview_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_columnview_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_columnview_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_columnview_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_columnview_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_columnview_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_columnview_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_columnview_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_columnview_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_columnview_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_columnview_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_columnview_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_columnview_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_columnview_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_columnview_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_columnview_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_columnview_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_columnview_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_columnview_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_columnview_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_columnview_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_columnview_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_columnview_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_columnview_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_columnview_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_columnview_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_columnview_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_columnview_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_columnview_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_columnview_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_columnview_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_columnview_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_columnview_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_columnview_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_columnview_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_columnview_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_columnview_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_columnview_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_columnview_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_columnview_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_columnview_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_columnview_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_columnview_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_columnview_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

int64_t q_columnview_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_columnview_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_columnview_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_columnview_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_columnview_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_columnview_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_columnview_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_columnview_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_columnview_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_columnview_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

void q_columnview_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_columnview_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_columnview_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_columnview_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_columnview_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_columnview_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_columnview_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_columnview_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_columnview_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_columnview_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_columnview_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_columnview_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_columnview_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_columnview_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_columnview_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

void q_columnview_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

void q_columnview_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_columnview_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

void q_columnview_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

void q_columnview_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_columnview_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_columnview_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_columnview_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_columnview_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_columnview_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_columnview_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_columnview_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_columnview_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_columnview_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_columnview_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_columnview_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_columnview_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

void q_columnview_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_columnview_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

void q_columnview_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_columnview_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

char* q_columnview_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_columnview_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_columnview_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_columnview_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_columnview_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_columnview_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_columnview_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_columnview_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_columnview_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_columnview_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_columnview_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_columnview_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_columnview_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_columnview_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_columnview_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_columnview_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_columnview_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_columnview_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

QMargins* q_columnview_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_columnview_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_columnview_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_columnview_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_columnview_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_columnview_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_columnview_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_columnview_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_columnview_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_columnview_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_columnview_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_columnview_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_columnview_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_columnview_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_columnview_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_columnview_add_actions(void* self, void* actions[]) {
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

void q_columnview_insert_actions(void* self, void* before, void* actions[]) {
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

void q_columnview_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_columnview_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_columnview_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_columnview_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

QAction* q_columnview_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_columnview_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_columnview_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_columnview_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_columnview_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_columnview_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_columnview_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_columnview_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_columnview_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_columnview_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_columnview_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_columnview_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

void q_columnview_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_columnview_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_columnview_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_columnview_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_columnview_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_columnview_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_columnview_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_columnview_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_columnview_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_columnview_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_columnview_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_columnview_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_columnview_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

void q_columnview_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_columnview_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

void q_columnview_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_columnview_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

void q_columnview_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_columnview_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

int64_t q_columnview_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_columnview_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_columnview_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_columnview_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_columnview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_columnview_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_columnview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_columnview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_columnview_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_columnview_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_columnview_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_columnview_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_columnview_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_columnview_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_columnview_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_columnview_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_columnview_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_columnview_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_columnview_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_columnview_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_columnview_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_columnview_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_columnview_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_columnview_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_columnview_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_columnview_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_columnview_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_columnview_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_columnview_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_columnview_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_columnview_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_columnview_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_columnview_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_columnview_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_columnview_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_columnview_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_columnview_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_columnview_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_columnview_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_columnview_dynamic_property_names(void* self) {
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

QBindingStorage* q_columnview_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_columnview_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_columnview_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_columnview_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_columnview_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_columnview_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_columnview_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_columnview_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_columnview_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_columnview_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_columnview_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_columnview_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_columnview_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_columnview_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_columnview_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_columnview_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_columnview_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_columnview_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_columnview_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_columnview_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_columnview_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_columnview_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_columnview_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_columnview_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

void q_columnview_keyboard_search(void* self, const char* search) {
    QColumnView_KeyboardSearch((QColumnView*)self, qstring(search));
}

void q_columnview_qbase_keyboard_search(void* self, const char* search) {
    QColumnView_QBaseKeyboardSearch((QColumnView*)self, qstring(search));
}

void q_columnview_on_keyboard_search(void* self, void (*slot)(void*, const char*)) {
    QColumnView_OnKeyboardSearch((QColumnView*)self, (intptr_t)slot);
}

int32_t q_columnview_size_hint_for_row(void* self, int row) {
    return QColumnView_SizeHintForRow((QColumnView*)self, row);
}

int32_t q_columnview_qbase_size_hint_for_row(void* self, int row) {
    return QColumnView_QBaseSizeHintForRow((QColumnView*)self, row);
}

void q_columnview_on_size_hint_for_row(void* self, int32_t (*slot)(void*, int)) {
    QColumnView_OnSizeHintForRow((QColumnView*)self, (intptr_t)slot);
}

int32_t q_columnview_size_hint_for_column(void* self, int column) {
    return QColumnView_SizeHintForColumn((QColumnView*)self, column);
}

int32_t q_columnview_qbase_size_hint_for_column(void* self, int column) {
    return QColumnView_QBaseSizeHintForColumn((QColumnView*)self, column);
}

void q_columnview_on_size_hint_for_column(void* self, int32_t (*slot)(void*, int)) {
    QColumnView_OnSizeHintForColumn((QColumnView*)self, (intptr_t)slot);
}

QAbstractItemDelegate* q_columnview_item_delegate_for_index(void* self, void* index) {
    return QColumnView_ItemDelegateForIndex((QColumnView*)self, (QModelIndex*)index);
}

QAbstractItemDelegate* q_columnview_qbase_item_delegate_for_index(void* self, void* index) {
    return QColumnView_QBaseItemDelegateForIndex((QColumnView*)self, (QModelIndex*)index);
}

void q_columnview_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*slot)(void*, void*)) {
    QColumnView_OnItemDelegateForIndex((QColumnView*)self, (intptr_t)slot);
}

QVariant* q_columnview_input_method_query(void* self, int64_t query) {
    return QColumnView_InputMethodQuery((QColumnView*)self, query);
}

QVariant* q_columnview_qbase_input_method_query(void* self, int64_t query) {
    return QColumnView_QBaseInputMethodQuery((QColumnView*)self, query);
}

void q_columnview_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QColumnView_OnInputMethodQuery((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_reset(void* self) {
    QColumnView_Reset((QColumnView*)self);
}

void q_columnview_qbase_reset(void* self) {
    QColumnView_QBaseReset((QColumnView*)self);
}

void q_columnview_on_reset(void* self, void (*slot)()) {
    QColumnView_OnReset((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_do_items_layout(void* self) {
    QColumnView_DoItemsLayout((QColumnView*)self);
}

void q_columnview_qbase_do_items_layout(void* self) {
    QColumnView_QBaseDoItemsLayout((QColumnView*)self);
}

void q_columnview_on_do_items_layout(void* self, void (*slot)()) {
    QColumnView_OnDoItemsLayout((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_data_changed(void* self, void* topLeft, void* bottomRight, int* roles[]) {
    size_t roles_len = 0;
    while (roles[roles_len] != NULL) {
        roles_len++;
    }
    libqt_list roles_list = {
        .len = roles_len,
        .data = {(int*)roles},
    };
    QColumnView_DataChanged((QColumnView*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles_list);
}

void q_columnview_qbase_data_changed(void* self, void* topLeft, void* bottomRight, int* roles[]) {
    size_t roles_len = 0;
    while (roles[roles_len] != NULL) {
        roles_len++;
    }
    libqt_list roles_list = {
        .len = roles_len,
        .data = {(int*)roles},
    };
    QColumnView_QBaseDataChanged((QColumnView*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles_list);
}

void q_columnview_on_data_changed(void* self, void (*slot)(void*, void*, void*, int*)) {
    QColumnView_OnDataChanged((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QColumnView_RowsAboutToBeRemoved((QColumnView*)self, (QModelIndex*)parent, start, end);
}

void q_columnview_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QColumnView_QBaseRowsAboutToBeRemoved((QColumnView*)self, (QModelIndex*)parent, start, end);
}

void q_columnview_on_rows_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int)) {
    QColumnView_OnRowsAboutToBeRemoved((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_selection_changed(void* self, void* selected, void* deselected) {
    QColumnView_SelectionChanged((QColumnView*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

void q_columnview_qbase_selection_changed(void* self, void* selected, void* deselected) {
    QColumnView_QBaseSelectionChanged((QColumnView*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

void q_columnview_on_selection_changed(void* self, void (*slot)(void*, void*, void*)) {
    QColumnView_OnSelectionChanged((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_update_editor_data(void* self) {
    QColumnView_UpdateEditorData((QColumnView*)self);
}

void q_columnview_qbase_update_editor_data(void* self) {
    QColumnView_QBaseUpdateEditorData((QColumnView*)self);
}

void q_columnview_on_update_editor_data(void* self, void (*slot)()) {
    QColumnView_OnUpdateEditorData((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_update_editor_geometries(void* self) {
    QColumnView_UpdateEditorGeometries((QColumnView*)self);
}

void q_columnview_qbase_update_editor_geometries(void* self) {
    QColumnView_QBaseUpdateEditorGeometries((QColumnView*)self);
}

void q_columnview_on_update_editor_geometries(void* self, void (*slot)()) {
    QColumnView_OnUpdateEditorGeometries((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_update_geometries(void* self) {
    QColumnView_UpdateGeometries((QColumnView*)self);
}

void q_columnview_qbase_update_geometries(void* self) {
    QColumnView_QBaseUpdateGeometries((QColumnView*)self);
}

void q_columnview_on_update_geometries(void* self, void (*slot)()) {
    QColumnView_OnUpdateGeometries((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_vertical_scrollbar_action(void* self, int action) {
    QColumnView_VerticalScrollbarAction((QColumnView*)self, action);
}

void q_columnview_qbase_vertical_scrollbar_action(void* self, int action) {
    QColumnView_QBaseVerticalScrollbarAction((QColumnView*)self, action);
}

void q_columnview_on_vertical_scrollbar_action(void* self, void (*slot)(void*, int)) {
    QColumnView_OnVerticalScrollbarAction((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_horizontal_scrollbar_action(void* self, int action) {
    QColumnView_HorizontalScrollbarAction((QColumnView*)self, action);
}

void q_columnview_qbase_horizontal_scrollbar_action(void* self, int action) {
    QColumnView_QBaseHorizontalScrollbarAction((QColumnView*)self, action);
}

void q_columnview_on_horizontal_scrollbar_action(void* self, void (*slot)(void*, int)) {
    QColumnView_OnHorizontalScrollbarAction((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_vertical_scrollbar_value_changed(void* self, int value) {
    QColumnView_VerticalScrollbarValueChanged((QColumnView*)self, value);
}

void q_columnview_qbase_vertical_scrollbar_value_changed(void* self, int value) {
    QColumnView_QBaseVerticalScrollbarValueChanged((QColumnView*)self, value);
}

void q_columnview_on_vertical_scrollbar_value_changed(void* self, void (*slot)(void*, int)) {
    QColumnView_OnVerticalScrollbarValueChanged((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_horizontal_scrollbar_value_changed(void* self, int value) {
    QColumnView_HorizontalScrollbarValueChanged((QColumnView*)self, value);
}

void q_columnview_qbase_horizontal_scrollbar_value_changed(void* self, int value) {
    QColumnView_QBaseHorizontalScrollbarValueChanged((QColumnView*)self, value);
}

void q_columnview_on_horizontal_scrollbar_value_changed(void* self, void (*slot)(void*, int)) {
    QColumnView_OnHorizontalScrollbarValueChanged((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_close_editor(void* self, void* editor, int64_t hint) {
    QColumnView_CloseEditor((QColumnView*)self, (QWidget*)editor, hint);
}

void q_columnview_qbase_close_editor(void* self, void* editor, int64_t hint) {
    QColumnView_QBaseCloseEditor((QColumnView*)self, (QWidget*)editor, hint);
}

void q_columnview_on_close_editor(void* self, void (*slot)(void*, void*, int64_t)) {
    QColumnView_OnCloseEditor((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_commit_data(void* self, void* editor) {
    QColumnView_CommitData((QColumnView*)self, (QWidget*)editor);
}

void q_columnview_qbase_commit_data(void* self, void* editor) {
    QColumnView_QBaseCommitData((QColumnView*)self, (QWidget*)editor);
}

void q_columnview_on_commit_data(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnCommitData((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_editor_destroyed(void* self, void* editor) {
    QColumnView_EditorDestroyed((QColumnView*)self, (QObject*)editor);
}

void q_columnview_qbase_editor_destroyed(void* self, void* editor) {
    QColumnView_QBaseEditorDestroyed((QColumnView*)self, (QObject*)editor);
}

void q_columnview_on_editor_destroyed(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnEditorDestroyed((QColumnView*)self, (intptr_t)slot);
}

libqt_list /* of QModelIndex* */ q_columnview_selected_indexes(void* self) {
    libqt_list _arr = QColumnView_SelectedIndexes((QColumnView*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_columnview_qbase_selected_indexes(void* self) {
    libqt_list _arr = QColumnView_QBaseSelectedIndexes((QColumnView*)self);
    return _arr;
}

void q_columnview_on_selected_indexes(void* self, libqt_list /* of QModelIndex* */ (*slot)()) {
    QColumnView_OnSelectedIndexes((QColumnView*)self, (intptr_t)slot);
}

bool q_columnview_edit2(void* self, void* index, int64_t trigger, void* event) {
    return QColumnView_Edit2((QColumnView*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

bool q_columnview_qbase_edit2(void* self, void* index, int64_t trigger, void* event) {
    return QColumnView_QBaseEdit2((QColumnView*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

void q_columnview_on_edit2(void* self, bool (*slot)(void*, void*, int64_t, void*)) {
    QColumnView_OnEdit2((QColumnView*)self, (intptr_t)slot);
}

int64_t q_columnview_selection_command(void* self, void* index, void* event) {
    return QColumnView_SelectionCommand((QColumnView*)self, (QModelIndex*)index, (QEvent*)event);
}

int64_t q_columnview_qbase_selection_command(void* self, void* index, void* event) {
    return QColumnView_QBaseSelectionCommand((QColumnView*)self, (QModelIndex*)index, (QEvent*)event);
}

void q_columnview_on_selection_command(void* self, int64_t (*slot)(void*, void*, void*)) {
    QColumnView_OnSelectionCommand((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_start_drag(void* self, int64_t supportedActions) {
    QColumnView_StartDrag((QColumnView*)self, supportedActions);
}

void q_columnview_qbase_start_drag(void* self, int64_t supportedActions) {
    QColumnView_QBaseStartDrag((QColumnView*)self, supportedActions);
}

void q_columnview_on_start_drag(void* self, void (*slot)(void*, int64_t)) {
    QColumnView_OnStartDrag((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_init_view_item_option(void* self, void* option) {
    QColumnView_InitViewItemOption((QColumnView*)self, (QStyleOptionViewItem*)option);
}

void q_columnview_qbase_init_view_item_option(void* self, void* option) {
    QColumnView_QBaseInitViewItemOption((QColumnView*)self, (QStyleOptionViewItem*)option);
}

void q_columnview_on_init_view_item_option(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnInitViewItemOption((QColumnView*)self, (intptr_t)slot);
}

bool q_columnview_focus_next_prev_child(void* self, bool next) {
    return QColumnView_FocusNextPrevChild((QColumnView*)self, next);
}

bool q_columnview_qbase_focus_next_prev_child(void* self, bool next) {
    return QColumnView_QBaseFocusNextPrevChild((QColumnView*)self, next);
}

void q_columnview_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QColumnView_OnFocusNextPrevChild((QColumnView*)self, (intptr_t)slot);
}

bool q_columnview_event(void* self, void* event) {
    return QColumnView_Event((QColumnView*)self, (QEvent*)event);
}

bool q_columnview_qbase_event(void* self, void* event) {
    return QColumnView_QBaseEvent((QColumnView*)self, (QEvent*)event);
}

void q_columnview_on_event(void* self, bool (*slot)(void*, void*)) {
    QColumnView_OnEvent((QColumnView*)self, (intptr_t)slot);
}

bool q_columnview_viewport_event(void* self, void* event) {
    return QColumnView_ViewportEvent((QColumnView*)self, (QEvent*)event);
}

bool q_columnview_qbase_viewport_event(void* self, void* event) {
    return QColumnView_QBaseViewportEvent((QColumnView*)self, (QEvent*)event);
}

void q_columnview_on_viewport_event(void* self, bool (*slot)(void*, void*)) {
    QColumnView_OnViewportEvent((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_mouse_press_event(void* self, void* event) {
    QColumnView_MousePressEvent((QColumnView*)self, (QMouseEvent*)event);
}

void q_columnview_qbase_mouse_press_event(void* self, void* event) {
    QColumnView_QBaseMousePressEvent((QColumnView*)self, (QMouseEvent*)event);
}

void q_columnview_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnMousePressEvent((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_mouse_move_event(void* self, void* event) {
    QColumnView_MouseMoveEvent((QColumnView*)self, (QMouseEvent*)event);
}

void q_columnview_qbase_mouse_move_event(void* self, void* event) {
    QColumnView_QBaseMouseMoveEvent((QColumnView*)self, (QMouseEvent*)event);
}

void q_columnview_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnMouseMoveEvent((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_mouse_release_event(void* self, void* event) {
    QColumnView_MouseReleaseEvent((QColumnView*)self, (QMouseEvent*)event);
}

void q_columnview_qbase_mouse_release_event(void* self, void* event) {
    QColumnView_QBaseMouseReleaseEvent((QColumnView*)self, (QMouseEvent*)event);
}

void q_columnview_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnMouseReleaseEvent((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_mouse_double_click_event(void* self, void* event) {
    QColumnView_MouseDoubleClickEvent((QColumnView*)self, (QMouseEvent*)event);
}

void q_columnview_qbase_mouse_double_click_event(void* self, void* event) {
    QColumnView_QBaseMouseDoubleClickEvent((QColumnView*)self, (QMouseEvent*)event);
}

void q_columnview_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnMouseDoubleClickEvent((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_drag_enter_event(void* self, void* event) {
    QColumnView_DragEnterEvent((QColumnView*)self, (QDragEnterEvent*)event);
}

void q_columnview_qbase_drag_enter_event(void* self, void* event) {
    QColumnView_QBaseDragEnterEvent((QColumnView*)self, (QDragEnterEvent*)event);
}

void q_columnview_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnDragEnterEvent((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_drag_move_event(void* self, void* event) {
    QColumnView_DragMoveEvent((QColumnView*)self, (QDragMoveEvent*)event);
}

void q_columnview_qbase_drag_move_event(void* self, void* event) {
    QColumnView_QBaseDragMoveEvent((QColumnView*)self, (QDragMoveEvent*)event);
}

void q_columnview_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnDragMoveEvent((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_drag_leave_event(void* self, void* event) {
    QColumnView_DragLeaveEvent((QColumnView*)self, (QDragLeaveEvent*)event);
}

void q_columnview_qbase_drag_leave_event(void* self, void* event) {
    QColumnView_QBaseDragLeaveEvent((QColumnView*)self, (QDragLeaveEvent*)event);
}

void q_columnview_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnDragLeaveEvent((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_drop_event(void* self, void* event) {
    QColumnView_DropEvent((QColumnView*)self, (QDropEvent*)event);
}

void q_columnview_qbase_drop_event(void* self, void* event) {
    QColumnView_QBaseDropEvent((QColumnView*)self, (QDropEvent*)event);
}

void q_columnview_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnDropEvent((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_focus_in_event(void* self, void* event) {
    QColumnView_FocusInEvent((QColumnView*)self, (QFocusEvent*)event);
}

void q_columnview_qbase_focus_in_event(void* self, void* event) {
    QColumnView_QBaseFocusInEvent((QColumnView*)self, (QFocusEvent*)event);
}

void q_columnview_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnFocusInEvent((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_focus_out_event(void* self, void* event) {
    QColumnView_FocusOutEvent((QColumnView*)self, (QFocusEvent*)event);
}

void q_columnview_qbase_focus_out_event(void* self, void* event) {
    QColumnView_QBaseFocusOutEvent((QColumnView*)self, (QFocusEvent*)event);
}

void q_columnview_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnFocusOutEvent((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_key_press_event(void* self, void* event) {
    QColumnView_KeyPressEvent((QColumnView*)self, (QKeyEvent*)event);
}

void q_columnview_qbase_key_press_event(void* self, void* event) {
    QColumnView_QBaseKeyPressEvent((QColumnView*)self, (QKeyEvent*)event);
}

void q_columnview_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnKeyPressEvent((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_timer_event(void* self, void* event) {
    QColumnView_TimerEvent((QColumnView*)self, (QTimerEvent*)event);
}

void q_columnview_qbase_timer_event(void* self, void* event) {
    QColumnView_QBaseTimerEvent((QColumnView*)self, (QTimerEvent*)event);
}

void q_columnview_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnTimerEvent((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_input_method_event(void* self, void* event) {
    QColumnView_InputMethodEvent((QColumnView*)self, (QInputMethodEvent*)event);
}

void q_columnview_qbase_input_method_event(void* self, void* event) {
    QColumnView_QBaseInputMethodEvent((QColumnView*)self, (QInputMethodEvent*)event);
}

void q_columnview_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnInputMethodEvent((QColumnView*)self, (intptr_t)slot);
}

bool q_columnview_event_filter(void* self, void* object, void* event) {
    return QColumnView_EventFilter((QColumnView*)self, (QObject*)object, (QEvent*)event);
}

bool q_columnview_qbase_event_filter(void* self, void* object, void* event) {
    return QColumnView_QBaseEventFilter((QColumnView*)self, (QObject*)object, (QEvent*)event);
}

void q_columnview_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QColumnView_OnEventFilter((QColumnView*)self, (intptr_t)slot);
}

QSize* q_columnview_viewport_size_hint(void* self) {
    return QColumnView_ViewportSizeHint((QColumnView*)self);
}

QSize* q_columnview_qbase_viewport_size_hint(void* self) {
    return QColumnView_QBaseViewportSizeHint((QColumnView*)self);
}

void q_columnview_on_viewport_size_hint(void* self, QSize* (*slot)()) {
    QColumnView_OnViewportSizeHint((QColumnView*)self, (intptr_t)slot);
}

QSize* q_columnview_minimum_size_hint(void* self) {
    return QColumnView_MinimumSizeHint((QColumnView*)self);
}

QSize* q_columnview_qbase_minimum_size_hint(void* self) {
    return QColumnView_QBaseMinimumSizeHint((QColumnView*)self);
}

void q_columnview_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QColumnView_OnMinimumSizeHint((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_setup_viewport(void* self, void* viewport) {
    QColumnView_SetupViewport((QColumnView*)self, (QWidget*)viewport);
}

void q_columnview_qbase_setup_viewport(void* self, void* viewport) {
    QColumnView_QBaseSetupViewport((QColumnView*)self, (QWidget*)viewport);
}

void q_columnview_on_setup_viewport(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnSetupViewport((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_paint_event(void* self, void* param1) {
    QColumnView_PaintEvent((QColumnView*)self, (QPaintEvent*)param1);
}

void q_columnview_qbase_paint_event(void* self, void* param1) {
    QColumnView_QBasePaintEvent((QColumnView*)self, (QPaintEvent*)param1);
}

void q_columnview_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnPaintEvent((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_wheel_event(void* self, void* param1) {
    QColumnView_WheelEvent((QColumnView*)self, (QWheelEvent*)param1);
}

void q_columnview_qbase_wheel_event(void* self, void* param1) {
    QColumnView_QBaseWheelEvent((QColumnView*)self, (QWheelEvent*)param1);
}

void q_columnview_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnWheelEvent((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_context_menu_event(void* self, void* param1) {
    QColumnView_ContextMenuEvent((QColumnView*)self, (QContextMenuEvent*)param1);
}

void q_columnview_qbase_context_menu_event(void* self, void* param1) {
    QColumnView_QBaseContextMenuEvent((QColumnView*)self, (QContextMenuEvent*)param1);
}

void q_columnview_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnContextMenuEvent((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_change_event(void* self, void* param1) {
    QColumnView_ChangeEvent((QColumnView*)self, (QEvent*)param1);
}

void q_columnview_qbase_change_event(void* self, void* param1) {
    QColumnView_QBaseChangeEvent((QColumnView*)self, (QEvent*)param1);
}

void q_columnview_on_change_event(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnChangeEvent((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_init_style_option(void* self, void* option) {
    QColumnView_InitStyleOption((QColumnView*)self, (QStyleOptionFrame*)option);
}

void q_columnview_qbase_init_style_option(void* self, void* option) {
    QColumnView_QBaseInitStyleOption((QColumnView*)self, (QStyleOptionFrame*)option);
}

void q_columnview_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnInitStyleOption((QColumnView*)self, (intptr_t)slot);
}

int32_t q_columnview_dev_type(void* self) {
    return QColumnView_DevType((QColumnView*)self);
}

int32_t q_columnview_qbase_dev_type(void* self) {
    return QColumnView_QBaseDevType((QColumnView*)self);
}

void q_columnview_on_dev_type(void* self, int32_t (*slot)()) {
    QColumnView_OnDevType((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_set_visible(void* self, bool visible) {
    QColumnView_SetVisible((QColumnView*)self, visible);
}

void q_columnview_qbase_set_visible(void* self, bool visible) {
    QColumnView_QBaseSetVisible((QColumnView*)self, visible);
}

void q_columnview_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QColumnView_OnSetVisible((QColumnView*)self, (intptr_t)slot);
}

int32_t q_columnview_height_for_width(void* self, int param1) {
    return QColumnView_HeightForWidth((QColumnView*)self, param1);
}

int32_t q_columnview_qbase_height_for_width(void* self, int param1) {
    return QColumnView_QBaseHeightForWidth((QColumnView*)self, param1);
}

void q_columnview_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QColumnView_OnHeightForWidth((QColumnView*)self, (intptr_t)slot);
}

bool q_columnview_has_height_for_width(void* self) {
    return QColumnView_HasHeightForWidth((QColumnView*)self);
}

bool q_columnview_qbase_has_height_for_width(void* self) {
    return QColumnView_QBaseHasHeightForWidth((QColumnView*)self);
}

void q_columnview_on_has_height_for_width(void* self, bool (*slot)()) {
    QColumnView_OnHasHeightForWidth((QColumnView*)self, (intptr_t)slot);
}

QPaintEngine* q_columnview_paint_engine(void* self) {
    return QColumnView_PaintEngine((QColumnView*)self);
}

QPaintEngine* q_columnview_qbase_paint_engine(void* self) {
    return QColumnView_QBasePaintEngine((QColumnView*)self);
}

void q_columnview_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QColumnView_OnPaintEngine((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_key_release_event(void* self, void* event) {
    QColumnView_KeyReleaseEvent((QColumnView*)self, (QKeyEvent*)event);
}

void q_columnview_qbase_key_release_event(void* self, void* event) {
    QColumnView_QBaseKeyReleaseEvent((QColumnView*)self, (QKeyEvent*)event);
}

void q_columnview_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnKeyReleaseEvent((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_enter_event(void* self, void* event) {
    QColumnView_EnterEvent((QColumnView*)self, (QEnterEvent*)event);
}

void q_columnview_qbase_enter_event(void* self, void* event) {
    QColumnView_QBaseEnterEvent((QColumnView*)self, (QEnterEvent*)event);
}

void q_columnview_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnEnterEvent((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_leave_event(void* self, void* event) {
    QColumnView_LeaveEvent((QColumnView*)self, (QEvent*)event);
}

void q_columnview_qbase_leave_event(void* self, void* event) {
    QColumnView_QBaseLeaveEvent((QColumnView*)self, (QEvent*)event);
}

void q_columnview_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnLeaveEvent((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_move_event(void* self, void* event) {
    QColumnView_MoveEvent((QColumnView*)self, (QMoveEvent*)event);
}

void q_columnview_qbase_move_event(void* self, void* event) {
    QColumnView_QBaseMoveEvent((QColumnView*)self, (QMoveEvent*)event);
}

void q_columnview_on_move_event(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnMoveEvent((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_close_event(void* self, void* event) {
    QColumnView_CloseEvent((QColumnView*)self, (QCloseEvent*)event);
}

void q_columnview_qbase_close_event(void* self, void* event) {
    QColumnView_QBaseCloseEvent((QColumnView*)self, (QCloseEvent*)event);
}

void q_columnview_on_close_event(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnCloseEvent((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_tablet_event(void* self, void* event) {
    QColumnView_TabletEvent((QColumnView*)self, (QTabletEvent*)event);
}

void q_columnview_qbase_tablet_event(void* self, void* event) {
    QColumnView_QBaseTabletEvent((QColumnView*)self, (QTabletEvent*)event);
}

void q_columnview_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnTabletEvent((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_action_event(void* self, void* event) {
    QColumnView_ActionEvent((QColumnView*)self, (QActionEvent*)event);
}

void q_columnview_qbase_action_event(void* self, void* event) {
    QColumnView_QBaseActionEvent((QColumnView*)self, (QActionEvent*)event);
}

void q_columnview_on_action_event(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnActionEvent((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_show_event(void* self, void* event) {
    QColumnView_ShowEvent((QColumnView*)self, (QShowEvent*)event);
}

void q_columnview_qbase_show_event(void* self, void* event) {
    QColumnView_QBaseShowEvent((QColumnView*)self, (QShowEvent*)event);
}

void q_columnview_on_show_event(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnShowEvent((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_hide_event(void* self, void* event) {
    QColumnView_HideEvent((QColumnView*)self, (QHideEvent*)event);
}

void q_columnview_qbase_hide_event(void* self, void* event) {
    QColumnView_QBaseHideEvent((QColumnView*)self, (QHideEvent*)event);
}

void q_columnview_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnHideEvent((QColumnView*)self, (intptr_t)slot);
}

bool q_columnview_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QColumnView_NativeEvent((QColumnView*)self, qstring(eventType), message, result);
}

bool q_columnview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QColumnView_QBaseNativeEvent((QColumnView*)self, qstring(eventType), message, result);
}

void q_columnview_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QColumnView_OnNativeEvent((QColumnView*)self, (intptr_t)slot);
}

int32_t q_columnview_metric(void* self, int64_t param1) {
    return QColumnView_Metric((QColumnView*)self, param1);
}

int32_t q_columnview_qbase_metric(void* self, int64_t param1) {
    return QColumnView_QBaseMetric((QColumnView*)self, param1);
}

void q_columnview_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QColumnView_OnMetric((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_init_painter(void* self, void* painter) {
    QColumnView_InitPainter((QColumnView*)self, (QPainter*)painter);
}

void q_columnview_qbase_init_painter(void* self, void* painter) {
    QColumnView_QBaseInitPainter((QColumnView*)self, (QPainter*)painter);
}

void q_columnview_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnInitPainter((QColumnView*)self, (intptr_t)slot);
}

QPaintDevice* q_columnview_redirected(void* self, void* offset) {
    return QColumnView_Redirected((QColumnView*)self, (QPoint*)offset);
}

QPaintDevice* q_columnview_qbase_redirected(void* self, void* offset) {
    return QColumnView_QBaseRedirected((QColumnView*)self, (QPoint*)offset);
}

void q_columnview_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QColumnView_OnRedirected((QColumnView*)self, (intptr_t)slot);
}

QPainter* q_columnview_shared_painter(void* self) {
    return QColumnView_SharedPainter((QColumnView*)self);
}

QPainter* q_columnview_qbase_shared_painter(void* self) {
    return QColumnView_QBaseSharedPainter((QColumnView*)self);
}

void q_columnview_on_shared_painter(void* self, QPainter* (*slot)()) {
    QColumnView_OnSharedPainter((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_child_event(void* self, void* event) {
    QColumnView_ChildEvent((QColumnView*)self, (QChildEvent*)event);
}

void q_columnview_qbase_child_event(void* self, void* event) {
    QColumnView_QBaseChildEvent((QColumnView*)self, (QChildEvent*)event);
}

void q_columnview_on_child_event(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnChildEvent((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_custom_event(void* self, void* event) {
    QColumnView_CustomEvent((QColumnView*)self, (QEvent*)event);
}

void q_columnview_qbase_custom_event(void* self, void* event) {
    QColumnView_QBaseCustomEvent((QColumnView*)self, (QEvent*)event);
}

void q_columnview_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnCustomEvent((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_connect_notify(void* self, void* signal) {
    QColumnView_ConnectNotify((QColumnView*)self, (QMetaMethod*)signal);
}

void q_columnview_qbase_connect_notify(void* self, void* signal) {
    QColumnView_QBaseConnectNotify((QColumnView*)self, (QMetaMethod*)signal);
}

void q_columnview_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnConnectNotify((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_disconnect_notify(void* self, void* signal) {
    QColumnView_DisconnectNotify((QColumnView*)self, (QMetaMethod*)signal);
}

void q_columnview_qbase_disconnect_notify(void* self, void* signal) {
    QColumnView_QBaseDisconnectNotify((QColumnView*)self, (QMetaMethod*)signal);
}

void q_columnview_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnDisconnectNotify((QColumnView*)self, (intptr_t)slot);
}

int64_t q_columnview_state(void* self) {
    return QColumnView_State((QColumnView*)self);
}

int64_t q_columnview_qbase_state(void* self) {
    return QColumnView_QBaseState((QColumnView*)self);
}

void q_columnview_on_state(void* self, int64_t (*slot)()) {
    QColumnView_OnState((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_set_state(void* self, int64_t state) {
    QColumnView_SetState((QColumnView*)self, state);
}

void q_columnview_qbase_set_state(void* self, int64_t state) {
    QColumnView_QBaseSetState((QColumnView*)self, state);
}

void q_columnview_on_set_state(void* self, void (*slot)(void*, int64_t)) {
    QColumnView_OnSetState((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_schedule_delayed_items_layout(void* self) {
    QColumnView_ScheduleDelayedItemsLayout((QColumnView*)self);
}

void q_columnview_qbase_schedule_delayed_items_layout(void* self) {
    QColumnView_QBaseScheduleDelayedItemsLayout((QColumnView*)self);
}

void q_columnview_on_schedule_delayed_items_layout(void* self, void (*slot)()) {
    QColumnView_OnScheduleDelayedItemsLayout((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_execute_delayed_items_layout(void* self) {
    QColumnView_ExecuteDelayedItemsLayout((QColumnView*)self);
}

void q_columnview_qbase_execute_delayed_items_layout(void* self) {
    QColumnView_QBaseExecuteDelayedItemsLayout((QColumnView*)self);
}

void q_columnview_on_execute_delayed_items_layout(void* self, void (*slot)()) {
    QColumnView_OnExecuteDelayedItemsLayout((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_set_dirty_region(void* self, void* region) {
    QColumnView_SetDirtyRegion((QColumnView*)self, (QRegion*)region);
}

void q_columnview_qbase_set_dirty_region(void* self, void* region) {
    QColumnView_QBaseSetDirtyRegion((QColumnView*)self, (QRegion*)region);
}

void q_columnview_on_set_dirty_region(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnSetDirtyRegion((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_scroll_dirty_region(void* self, int dx, int dy) {
    QColumnView_ScrollDirtyRegion((QColumnView*)self, dx, dy);
}

void q_columnview_qbase_scroll_dirty_region(void* self, int dx, int dy) {
    QColumnView_QBaseScrollDirtyRegion((QColumnView*)self, dx, dy);
}

void q_columnview_on_scroll_dirty_region(void* self, void (*slot)(void*, int, int)) {
    QColumnView_OnScrollDirtyRegion((QColumnView*)self, (intptr_t)slot);
}

QPoint* q_columnview_dirty_region_offset(void* self) {
    return QColumnView_DirtyRegionOffset((QColumnView*)self);
}

QPoint* q_columnview_qbase_dirty_region_offset(void* self) {
    return QColumnView_QBaseDirtyRegionOffset((QColumnView*)self);
}

void q_columnview_on_dirty_region_offset(void* self, QPoint* (*slot)()) {
    QColumnView_OnDirtyRegionOffset((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_start_auto_scroll(void* self) {
    QColumnView_StartAutoScroll((QColumnView*)self);
}

void q_columnview_qbase_start_auto_scroll(void* self) {
    QColumnView_QBaseStartAutoScroll((QColumnView*)self);
}

void q_columnview_on_start_auto_scroll(void* self, void (*slot)()) {
    QColumnView_OnStartAutoScroll((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_stop_auto_scroll(void* self) {
    QColumnView_StopAutoScroll((QColumnView*)self);
}

void q_columnview_qbase_stop_auto_scroll(void* self) {
    QColumnView_QBaseStopAutoScroll((QColumnView*)self);
}

void q_columnview_on_stop_auto_scroll(void* self, void (*slot)()) {
    QColumnView_OnStopAutoScroll((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_do_auto_scroll(void* self) {
    QColumnView_DoAutoScroll((QColumnView*)self);
}

void q_columnview_qbase_do_auto_scroll(void* self) {
    QColumnView_QBaseDoAutoScroll((QColumnView*)self);
}

void q_columnview_on_do_auto_scroll(void* self, void (*slot)()) {
    QColumnView_OnDoAutoScroll((QColumnView*)self, (intptr_t)slot);
}

int64_t q_columnview_drop_indicator_position(void* self) {
    return QColumnView_DropIndicatorPosition((QColumnView*)self);
}

int64_t q_columnview_qbase_drop_indicator_position(void* self) {
    return QColumnView_QBaseDropIndicatorPosition((QColumnView*)self);
}

void q_columnview_on_drop_indicator_position(void* self, int64_t (*slot)()) {
    QColumnView_OnDropIndicatorPosition((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QColumnView_SetViewportMargins((QColumnView*)self, left, top, right, bottom);
}

void q_columnview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QColumnView_QBaseSetViewportMargins((QColumnView*)self, left, top, right, bottom);
}

void q_columnview_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int)) {
    QColumnView_OnSetViewportMargins((QColumnView*)self, (intptr_t)slot);
}

QMargins* q_columnview_viewport_margins(void* self) {
    return QColumnView_ViewportMargins((QColumnView*)self);
}

QMargins* q_columnview_qbase_viewport_margins(void* self) {
    return QColumnView_QBaseViewportMargins((QColumnView*)self);
}

void q_columnview_on_viewport_margins(void* self, QMargins* (*slot)()) {
    QColumnView_OnViewportMargins((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_draw_frame(void* self, void* param1) {
    QColumnView_DrawFrame((QColumnView*)self, (QPainter*)param1);
}

void q_columnview_qbase_draw_frame(void* self, void* param1) {
    QColumnView_QBaseDrawFrame((QColumnView*)self, (QPainter*)param1);
}

void q_columnview_on_draw_frame(void* self, void (*slot)(void*, void*)) {
    QColumnView_OnDrawFrame((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_update_micro_focus(void* self) {
    QColumnView_UpdateMicroFocus((QColumnView*)self);
}

void q_columnview_qbase_update_micro_focus(void* self) {
    QColumnView_QBaseUpdateMicroFocus((QColumnView*)self);
}

void q_columnview_on_update_micro_focus(void* self, void (*slot)()) {
    QColumnView_OnUpdateMicroFocus((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_create(void* self) {
    QColumnView_Create((QColumnView*)self);
}

void q_columnview_qbase_create(void* self) {
    QColumnView_QBaseCreate((QColumnView*)self);
}

void q_columnview_on_create(void* self, void (*slot)()) {
    QColumnView_OnCreate((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_destroy(void* self) {
    QColumnView_Destroy((QColumnView*)self);
}

void q_columnview_qbase_destroy(void* self) {
    QColumnView_QBaseDestroy((QColumnView*)self);
}

void q_columnview_on_destroy(void* self, void (*slot)()) {
    QColumnView_OnDestroy((QColumnView*)self, (intptr_t)slot);
}

bool q_columnview_focus_next_child(void* self) {
    return QColumnView_FocusNextChild((QColumnView*)self);
}

bool q_columnview_qbase_focus_next_child(void* self) {
    return QColumnView_QBaseFocusNextChild((QColumnView*)self);
}

void q_columnview_on_focus_next_child(void* self, bool (*slot)()) {
    QColumnView_OnFocusNextChild((QColumnView*)self, (intptr_t)slot);
}

bool q_columnview_focus_previous_child(void* self) {
    return QColumnView_FocusPreviousChild((QColumnView*)self);
}

bool q_columnview_qbase_focus_previous_child(void* self) {
    return QColumnView_QBaseFocusPreviousChild((QColumnView*)self);
}

void q_columnview_on_focus_previous_child(void* self, bool (*slot)()) {
    QColumnView_OnFocusPreviousChild((QColumnView*)self, (intptr_t)slot);
}

QObject* q_columnview_sender(void* self) {
    return QColumnView_Sender((QColumnView*)self);
}

QObject* q_columnview_qbase_sender(void* self) {
    return QColumnView_QBaseSender((QColumnView*)self);
}

void q_columnview_on_sender(void* self, QObject* (*slot)()) {
    QColumnView_OnSender((QColumnView*)self, (intptr_t)slot);
}

int32_t q_columnview_sender_signal_index(void* self) {
    return QColumnView_SenderSignalIndex((QColumnView*)self);
}

int32_t q_columnview_qbase_sender_signal_index(void* self) {
    return QColumnView_QBaseSenderSignalIndex((QColumnView*)self);
}

void q_columnview_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QColumnView_OnSenderSignalIndex((QColumnView*)self, (intptr_t)slot);
}

int32_t q_columnview_receivers(void* self, const char* signal) {
    return QColumnView_Receivers((QColumnView*)self, signal);
}

int32_t q_columnview_qbase_receivers(void* self, const char* signal) {
    return QColumnView_QBaseReceivers((QColumnView*)self, signal);
}

void q_columnview_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QColumnView_OnReceivers((QColumnView*)self, (intptr_t)slot);
}

bool q_columnview_is_signal_connected(void* self, void* signal) {
    return QColumnView_IsSignalConnected((QColumnView*)self, (QMetaMethod*)signal);
}

bool q_columnview_qbase_is_signal_connected(void* self, void* signal) {
    return QColumnView_QBaseIsSignalConnected((QColumnView*)self, (QMetaMethod*)signal);
}

void q_columnview_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QColumnView_OnIsSignalConnected((QColumnView*)self, (intptr_t)slot);
}

void q_columnview_delete(void* self) {
    QColumnView_Delete((QColumnView*)(self));
}
