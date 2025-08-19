#include "libqabstractitemdelegate.hpp"
#include "libqabstractitemmodel.hpp"
#include "libqabstractitemview.hpp"
#include "libqabstractscrollarea.hpp"
#include "libqevent.hpp"
#include "libqcoreevent.hpp"
#include "libqframe.hpp"
#include "libqicon.hpp"
#include "libqitemselectionmodel.hpp"
#include "libqlistview.hpp"
#include "libqmargins.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqsize.hpp"
#include "libqstyleoption.hpp"
#include "libqundogroup.hpp"
#include "libqundostack.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqundoview.hpp"
#include "libqundoview.h"

QUndoView* q_undoview_new(void* parent) {
    return QUndoView_new((QWidget*)parent);
}

QUndoView* q_undoview_new2() {
    return QUndoView_new2();
}

QUndoView* q_undoview_new3(void* stack) {
    return QUndoView_new3((QUndoStack*)stack);
}

QUndoView* q_undoview_new4(void* group) {
    return QUndoView_new4((QUndoGroup*)group);
}

QUndoView* q_undoview_new5(void* stack, void* parent) {
    return QUndoView_new5((QUndoStack*)stack, (QWidget*)parent);
}

QUndoView* q_undoview_new6(void* group, void* parent) {
    return QUndoView_new6((QUndoGroup*)group, (QWidget*)parent);
}

const QMetaObject* q_undoview_meta_object(void* self) {
    return QUndoView_MetaObject((QUndoView*)self);
}

void* q_undoview_metacast(void* self, const char* param1) {
    return QUndoView_Metacast((QUndoView*)self, param1);
}

int32_t q_undoview_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QUndoView_Metacall((QUndoView*)self, param1, param2, param3);
}

void q_undoview_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QUndoView_OnMetacall((QUndoView*)self, (intptr_t)callback);
}

int32_t q_undoview_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QUndoView_QBaseMetacall((QUndoView*)self, param1, param2, param3);
}

const char* q_undoview_tr(const char* s) {
    libqt_string _str = QUndoView_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUndoStack* q_undoview_stack(void* self) {
    return QUndoView_Stack((QUndoView*)self);
}

QUndoGroup* q_undoview_group(void* self) {
    return QUndoView_Group((QUndoView*)self);
}

void q_undoview_set_empty_label(void* self, const char* label) {
    QUndoView_SetEmptyLabel((QUndoView*)self, qstring(label));
}

const char* q_undoview_empty_label(void* self) {
    libqt_string _str = QUndoView_EmptyLabel((QUndoView*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_undoview_set_clean_icon(void* self, void* icon) {
    QUndoView_SetCleanIcon((QUndoView*)self, (QIcon*)icon);
}

QIcon* q_undoview_clean_icon(void* self) {
    return QUndoView_CleanIcon((QUndoView*)self);
}

void q_undoview_set_stack(void* self, void* stack) {
    QUndoView_SetStack((QUndoView*)self, (QUndoStack*)stack);
}

void q_undoview_set_group(void* self, void* group) {
    QUndoView_SetGroup((QUndoView*)self, (QUndoGroup*)group);
}

const char* q_undoview_tr2(const char* s, const char* c) {
    libqt_string _str = QUndoView_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_undoview_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QUndoView_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_undoview_set_movement(void* self, int32_t movement) {
    QListView_SetMovement((QListView*)self, movement);
}

int32_t q_undoview_movement(void* self) {
    return QListView_Movement((QListView*)self);
}

void q_undoview_set_flow(void* self, int32_t flow) {
    QListView_SetFlow((QListView*)self, flow);
}

int32_t q_undoview_flow(void* self) {
    return QListView_Flow((QListView*)self);
}

void q_undoview_set_wrapping(void* self, bool enable) {
    QListView_SetWrapping((QListView*)self, enable);
}

bool q_undoview_is_wrapping(void* self) {
    return QListView_IsWrapping((QListView*)self);
}

void q_undoview_set_resize_mode(void* self, int32_t mode) {
    QListView_SetResizeMode((QListView*)self, mode);
}

int32_t q_undoview_resize_mode(void* self) {
    return QListView_ResizeMode((QListView*)self);
}

void q_undoview_set_layout_mode(void* self, int32_t mode) {
    QListView_SetLayoutMode((QListView*)self, mode);
}

int32_t q_undoview_layout_mode(void* self) {
    return QListView_LayoutMode((QListView*)self);
}

void q_undoview_set_spacing(void* self, int space) {
    QListView_SetSpacing((QListView*)self, space);
}

int32_t q_undoview_spacing(void* self) {
    return QListView_Spacing((QListView*)self);
}

void q_undoview_set_batch_size(void* self, int batchSize) {
    QListView_SetBatchSize((QListView*)self, batchSize);
}

int32_t q_undoview_batch_size(void* self) {
    return QListView_BatchSize((QListView*)self);
}

void q_undoview_set_grid_size(void* self, void* size) {
    QListView_SetGridSize((QListView*)self, (QSize*)size);
}

QSize* q_undoview_grid_size(void* self) {
    return QListView_GridSize((QListView*)self);
}

void q_undoview_set_view_mode(void* self, int32_t mode) {
    QListView_SetViewMode((QListView*)self, mode);
}

int32_t q_undoview_view_mode(void* self) {
    return QListView_ViewMode((QListView*)self);
}

void q_undoview_clear_property_flags(void* self) {
    QListView_ClearPropertyFlags((QListView*)self);
}

bool q_undoview_is_row_hidden(void* self, int row) {
    return QListView_IsRowHidden((QListView*)self, row);
}

void q_undoview_set_row_hidden(void* self, int row, bool hide) {
    QListView_SetRowHidden((QListView*)self, row, hide);
}

void q_undoview_set_model_column(void* self, int column) {
    QListView_SetModelColumn((QListView*)self, column);
}

int32_t q_undoview_model_column(void* self) {
    return QListView_ModelColumn((QListView*)self);
}

void q_undoview_set_uniform_item_sizes(void* self, bool enable) {
    QListView_SetUniformItemSizes((QListView*)self, enable);
}

bool q_undoview_uniform_item_sizes(void* self) {
    return QListView_UniformItemSizes((QListView*)self);
}

void q_undoview_set_word_wrap(void* self, bool on) {
    QListView_SetWordWrap((QListView*)self, on);
}

bool q_undoview_word_wrap(void* self) {
    return QListView_WordWrap((QListView*)self);
}

void q_undoview_set_selection_rect_visible(void* self, bool show) {
    QListView_SetSelectionRectVisible((QListView*)self, show);
}

bool q_undoview_is_selection_rect_visible(void* self) {
    return QListView_IsSelectionRectVisible((QListView*)self);
}

void q_undoview_set_item_alignment(void* self, int64_t alignment) {
    QListView_SetItemAlignment((QListView*)self, alignment);
}

int64_t q_undoview_item_alignment(void* self) {
    return QListView_ItemAlignment((QListView*)self);
}

void q_undoview_indexes_moved(void* self, libqt_list indexes) {
    QListView_IndexesMoved((QListView*)self, indexes);
}

void q_undoview_on_indexes_moved(void* self, void (*callback)(void*, libqt_list)) {
    QListView_Connect_IndexesMoved((QListView*)self, (intptr_t)callback);
}

QAbstractItemModel* q_undoview_model(void* self) {
    return QAbstractItemView_Model((QAbstractItemView*)self);
}

QItemSelectionModel* q_undoview_selection_model(void* self) {
    return QAbstractItemView_SelectionModel((QAbstractItemView*)self);
}

void q_undoview_set_item_delegate(void* self, void* delegate) {
    QAbstractItemView_SetItemDelegate((QAbstractItemView*)self, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* q_undoview_item_delegate(void* self) {
    return QAbstractItemView_ItemDelegate((QAbstractItemView*)self);
}

void q_undoview_set_selection_mode(void* self, int32_t mode) {
    QAbstractItemView_SetSelectionMode((QAbstractItemView*)self, mode);
}

int32_t q_undoview_selection_mode(void* self) {
    return QAbstractItemView_SelectionMode((QAbstractItemView*)self);
}

void q_undoview_set_selection_behavior(void* self, int32_t behavior) {
    QAbstractItemView_SetSelectionBehavior((QAbstractItemView*)self, behavior);
}

int32_t q_undoview_selection_behavior(void* self) {
    return QAbstractItemView_SelectionBehavior((QAbstractItemView*)self);
}

QModelIndex* q_undoview_current_index(void* self) {
    return QAbstractItemView_CurrentIndex((QAbstractItemView*)self);
}

QModelIndex* q_undoview_root_index(void* self) {
    return QAbstractItemView_RootIndex((QAbstractItemView*)self);
}

void q_undoview_set_edit_triggers(void* self, int64_t triggers) {
    QAbstractItemView_SetEditTriggers((QAbstractItemView*)self, triggers);
}

int64_t q_undoview_edit_triggers(void* self) {
    return QAbstractItemView_EditTriggers((QAbstractItemView*)self);
}

void q_undoview_set_vertical_scroll_mode(void* self, int32_t mode) {
    QAbstractItemView_SetVerticalScrollMode((QAbstractItemView*)self, mode);
}

int32_t q_undoview_vertical_scroll_mode(void* self) {
    return QAbstractItemView_VerticalScrollMode((QAbstractItemView*)self);
}

void q_undoview_reset_vertical_scroll_mode(void* self) {
    QAbstractItemView_ResetVerticalScrollMode((QAbstractItemView*)self);
}

void q_undoview_set_horizontal_scroll_mode(void* self, int32_t mode) {
    QAbstractItemView_SetHorizontalScrollMode((QAbstractItemView*)self, mode);
}

int32_t q_undoview_horizontal_scroll_mode(void* self) {
    return QAbstractItemView_HorizontalScrollMode((QAbstractItemView*)self);
}

void q_undoview_reset_horizontal_scroll_mode(void* self) {
    QAbstractItemView_ResetHorizontalScrollMode((QAbstractItemView*)self);
}

void q_undoview_set_auto_scroll(void* self, bool enable) {
    QAbstractItemView_SetAutoScroll((QAbstractItemView*)self, enable);
}

bool q_undoview_has_auto_scroll(void* self) {
    return QAbstractItemView_HasAutoScroll((QAbstractItemView*)self);
}

void q_undoview_set_auto_scroll_margin(void* self, int margin) {
    QAbstractItemView_SetAutoScrollMargin((QAbstractItemView*)self, margin);
}

int32_t q_undoview_auto_scroll_margin(void* self) {
    return QAbstractItemView_AutoScrollMargin((QAbstractItemView*)self);
}

void q_undoview_set_tab_key_navigation(void* self, bool enable) {
    QAbstractItemView_SetTabKeyNavigation((QAbstractItemView*)self, enable);
}

bool q_undoview_tab_key_navigation(void* self) {
    return QAbstractItemView_TabKeyNavigation((QAbstractItemView*)self);
}

void q_undoview_set_drop_indicator_shown(void* self, bool enable) {
    QAbstractItemView_SetDropIndicatorShown((QAbstractItemView*)self, enable);
}

bool q_undoview_show_drop_indicator(void* self) {
    return QAbstractItemView_ShowDropIndicator((QAbstractItemView*)self);
}

void q_undoview_set_drag_enabled(void* self, bool enable) {
    QAbstractItemView_SetDragEnabled((QAbstractItemView*)self, enable);
}

bool q_undoview_drag_enabled(void* self) {
    return QAbstractItemView_DragEnabled((QAbstractItemView*)self);
}

void q_undoview_set_drag_drop_overwrite_mode(void* self, bool overwrite) {
    QAbstractItemView_SetDragDropOverwriteMode((QAbstractItemView*)self, overwrite);
}

bool q_undoview_drag_drop_overwrite_mode(void* self) {
    return QAbstractItemView_DragDropOverwriteMode((QAbstractItemView*)self);
}

void q_undoview_set_drag_drop_mode(void* self, int32_t behavior) {
    QAbstractItemView_SetDragDropMode((QAbstractItemView*)self, behavior);
}

int32_t q_undoview_drag_drop_mode(void* self) {
    return QAbstractItemView_DragDropMode((QAbstractItemView*)self);
}

void q_undoview_set_default_drop_action(void* self, int32_t dropAction) {
    QAbstractItemView_SetDefaultDropAction((QAbstractItemView*)self, dropAction);
}

int32_t q_undoview_default_drop_action(void* self) {
    return QAbstractItemView_DefaultDropAction((QAbstractItemView*)self);
}

void q_undoview_set_alternating_row_colors(void* self, bool enable) {
    QAbstractItemView_SetAlternatingRowColors((QAbstractItemView*)self, enable);
}

bool q_undoview_alternating_row_colors(void* self) {
    return QAbstractItemView_AlternatingRowColors((QAbstractItemView*)self);
}

void q_undoview_set_icon_size(void* self, void* size) {
    QAbstractItemView_SetIconSize((QAbstractItemView*)self, (QSize*)size);
}

QSize* q_undoview_icon_size(void* self) {
    return QAbstractItemView_IconSize((QAbstractItemView*)self);
}

void q_undoview_set_text_elide_mode(void* self, int32_t mode) {
    QAbstractItemView_SetTextElideMode((QAbstractItemView*)self, mode);
}

int32_t q_undoview_text_elide_mode(void* self) {
    return QAbstractItemView_TextElideMode((QAbstractItemView*)self);
}

QSize* q_undoview_size_hint_for_index(void* self, void* index) {
    return QAbstractItemView_SizeHintForIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_undoview_open_persistent_editor(void* self, void* index) {
    QAbstractItemView_OpenPersistentEditor((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_undoview_close_persistent_editor(void* self, void* index) {
    QAbstractItemView_ClosePersistentEditor((QAbstractItemView*)self, (QModelIndex*)index);
}

bool q_undoview_is_persistent_editor_open(void* self, void* index) {
    return QAbstractItemView_IsPersistentEditorOpen((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_undoview_set_index_widget(void* self, void* index, void* widget) {
    QAbstractItemView_SetIndexWidget((QAbstractItemView*)self, (QModelIndex*)index, (QWidget*)widget);
}

QWidget* q_undoview_index_widget(void* self, void* index) {
    return QAbstractItemView_IndexWidget((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_undoview_set_item_delegate_for_row(void* self, int row, void* delegate) {
    QAbstractItemView_SetItemDelegateForRow((QAbstractItemView*)self, row, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* q_undoview_item_delegate_for_row(void* self, int row) {
    return QAbstractItemView_ItemDelegateForRow((QAbstractItemView*)self, row);
}

void q_undoview_set_item_delegate_for_column(void* self, int column, void* delegate) {
    QAbstractItemView_SetItemDelegateForColumn((QAbstractItemView*)self, column, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* q_undoview_item_delegate_for_column(void* self, int column) {
    return QAbstractItemView_ItemDelegateForColumn((QAbstractItemView*)self, column);
}

QAbstractItemDelegate* q_undoview_item_delegate2(void* self, void* index) {
    return QAbstractItemView_ItemDelegate2((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_undoview_edit(void* self, void* index) {
    QAbstractItemView_Edit((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_undoview_clear_selection(void* self) {
    QAbstractItemView_ClearSelection((QAbstractItemView*)self);
}

void q_undoview_set_current_index(void* self, void* index) {
    QAbstractItemView_SetCurrentIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_undoview_scroll_to_top(void* self) {
    QAbstractItemView_ScrollToTop((QAbstractItemView*)self);
}

void q_undoview_scroll_to_bottom(void* self) {
    QAbstractItemView_ScrollToBottom((QAbstractItemView*)self);
}

void q_undoview_update(void* self, void* index) {
    QAbstractItemView_Update((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_undoview_pressed(void* self, void* index) {
    QAbstractItemView_Pressed((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_undoview_on_pressed(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Pressed((QAbstractItemView*)self, (intptr_t)callback);
}

void q_undoview_clicked(void* self, void* index) {
    QAbstractItemView_Clicked((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_undoview_on_clicked(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Clicked((QAbstractItemView*)self, (intptr_t)callback);
}

void q_undoview_double_clicked(void* self, void* index) {
    QAbstractItemView_DoubleClicked((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_undoview_on_double_clicked(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_DoubleClicked((QAbstractItemView*)self, (intptr_t)callback);
}

void q_undoview_activated(void* self, void* index) {
    QAbstractItemView_Activated((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_undoview_on_activated(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Activated((QAbstractItemView*)self, (intptr_t)callback);
}

void q_undoview_entered(void* self, void* index) {
    QAbstractItemView_Entered((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_undoview_on_entered(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Entered((QAbstractItemView*)self, (intptr_t)callback);
}

void q_undoview_viewport_entered(void* self) {
    QAbstractItemView_ViewportEntered((QAbstractItemView*)self);
}

void q_undoview_on_viewport_entered(void* self, void (*callback)(void*)) {
    QAbstractItemView_Connect_ViewportEntered((QAbstractItemView*)self, (intptr_t)callback);
}

void q_undoview_icon_size_changed(void* self, void* size) {
    QAbstractItemView_IconSizeChanged((QAbstractItemView*)self, (QSize*)size);
}

void q_undoview_on_icon_size_changed(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_IconSizeChanged((QAbstractItemView*)self, (intptr_t)callback);
}

int32_t q_undoview_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_undoview_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

QScrollBar* q_undoview_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

void q_undoview_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

int32_t q_undoview_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_undoview_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

QScrollBar* q_undoview_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

void q_undoview_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

QWidget* q_undoview_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

void q_undoview_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

void q_undoview_add_scroll_bar_widget(void* self, void* widget, int64_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

libqt_list /* of QWidget* */ q_undoview_scroll_bar_widgets(void* self, int64_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

QWidget* q_undoview_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

void q_undoview_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

QSize* q_undoview_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

int32_t q_undoview_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

void q_undoview_set_size_adjust_policy(void* self, int32_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

int32_t q_undoview_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void q_undoview_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t q_undoview_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int32_t q_undoview_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void q_undoview_set_frame_shape(void* self, int32_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int32_t q_undoview_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void q_undoview_set_frame_shadow(void* self, int32_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t q_undoview_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void q_undoview_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t q_undoview_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void q_undoview_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* q_undoview_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void q_undoview_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t q_undoview_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_undoview_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_undoview_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_undoview_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_undoview_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_undoview_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_undoview_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_undoview_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_undoview_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_undoview_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_undoview_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_undoview_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_undoview_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_undoview_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_undoview_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_undoview_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_undoview_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_undoview_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_undoview_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_undoview_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_undoview_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_undoview_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_undoview_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_undoview_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_undoview_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_undoview_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_undoview_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_undoview_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_undoview_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_undoview_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_undoview_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_undoview_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_undoview_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_undoview_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_undoview_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_undoview_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_undoview_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_undoview_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_undoview_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_undoview_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_undoview_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_undoview_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_undoview_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_undoview_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_undoview_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_undoview_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_undoview_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_undoview_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_undoview_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_undoview_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_undoview_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_undoview_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_undoview_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_undoview_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_undoview_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_undoview_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_undoview_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_undoview_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_undoview_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_undoview_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_undoview_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_undoview_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_undoview_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_undoview_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_undoview_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_undoview_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_undoview_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_undoview_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_undoview_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_undoview_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_undoview_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_undoview_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_undoview_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_undoview_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_undoview_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_undoview_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_undoview_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_undoview_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_undoview_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_undoview_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_undoview_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_undoview_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_undoview_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_undoview_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_undoview_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_undoview_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_undoview_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_undoview_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_undoview_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_undoview_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_undoview_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_undoview_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_undoview_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_undoview_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_undoview_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_undoview_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_undoview_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_undoview_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_undoview_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_undoview_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_undoview_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_undoview_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_undoview_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_undoview_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_undoview_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_undoview_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_undoview_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_undoview_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_undoview_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_undoview_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_undoview_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_undoview_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_undoview_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_undoview_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_undoview_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_undoview_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_undoview_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_undoview_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_undoview_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_undoview_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_undoview_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_undoview_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_undoview_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_undoview_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_undoview_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_undoview_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_undoview_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_undoview_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_undoview_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_undoview_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_undoview_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_undoview_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_undoview_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_undoview_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_undoview_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_undoview_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_undoview_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_undoview_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_undoview_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_undoview_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_undoview_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_undoview_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_undoview_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_undoview_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_undoview_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_undoview_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_undoview_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_undoview_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_undoview_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_undoview_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_undoview_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_undoview_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_undoview_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_undoview_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_undoview_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_undoview_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_undoview_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_undoview_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_undoview_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_undoview_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_undoview_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_undoview_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_undoview_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_undoview_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_undoview_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_undoview_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_undoview_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_undoview_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_undoview_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_undoview_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_undoview_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_undoview_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_undoview_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_undoview_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_undoview_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_undoview_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_undoview_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_undoview_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_undoview_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_undoview_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_undoview_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_undoview_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_undoview_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_undoview_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_undoview_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_undoview_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_undoview_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_undoview_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_undoview_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_undoview_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_undoview_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_undoview_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_undoview_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_undoview_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_undoview_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_undoview_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_undoview_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_undoview_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_undoview_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_undoview_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_undoview_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_undoview_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_undoview_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_undoview_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_undoview_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_undoview_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_undoview_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_undoview_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_undoview_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_undoview_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_undoview_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_undoview_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_undoview_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_undoview_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_undoview_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_undoview_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_undoview_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_undoview_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_undoview_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_undoview_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_undoview_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_undoview_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_undoview_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_undoview_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_undoview_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_undoview_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_undoview_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_undoview_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_undoview_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_undoview_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_undoview_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_undoview_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_undoview_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_undoview_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_undoview_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_undoview_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_undoview_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_undoview_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_undoview_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_undoview_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_undoview_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_undoview_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_undoview_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_undoview_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_undoview_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_undoview_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_undoview_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_undoview_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_undoview_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_undoview_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_undoview_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_undoview_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_undoview_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_undoview_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t q_undoview_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_undoview_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_undoview_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_undoview_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_undoview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_undoview_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_undoview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_undoview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_undoview_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_undoview_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_undoview_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_undoview_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_undoview_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_undoview_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_undoview_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_undoview_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_undoview_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_undoview_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_undoview_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_undoview_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_undoview_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_undoview_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_undoview_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_undoview_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_undoview_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_undoview_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_undoview_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_undoview_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_undoview_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_undoview_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_undoview_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_undoview_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_undoview_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_undoview_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_undoview_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_undoview_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_undoview_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_undoview_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_undoview_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_undoview_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_undoview_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_undoview_dynamic_property_names");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_undoview_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_undoview_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_undoview_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_undoview_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_undoview_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_undoview_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_undoview_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_undoview_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_undoview_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_undoview_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_undoview_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_undoview_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_undoview_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_undoview_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_undoview_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_undoview_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_undoview_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_undoview_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_undoview_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_undoview_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_undoview_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_undoview_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_undoview_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_undoview_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_undoview_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_undoview_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QRect* q_undoview_visual_rect(void* self, void* index) {
    return QUndoView_VisualRect((QUndoView*)self, (QModelIndex*)index);
}

QRect* q_undoview_qbase_visual_rect(void* self, void* index) {
    return QUndoView_QBaseVisualRect((QUndoView*)self, (QModelIndex*)index);
}

void q_undoview_on_visual_rect(void* self, QRect* (*callback)(void*, void*)) {
    QUndoView_OnVisualRect((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_scroll_to(void* self, void* index, int32_t hint) {
    QUndoView_ScrollTo((QUndoView*)self, (QModelIndex*)index, hint);
}

void q_undoview_qbase_scroll_to(void* self, void* index, int32_t hint) {
    QUndoView_QBaseScrollTo((QUndoView*)self, (QModelIndex*)index, hint);
}

void q_undoview_on_scroll_to(void* self, void (*callback)(void*, void*, int32_t)) {
    QUndoView_OnScrollTo((QUndoView*)self, (intptr_t)callback);
}

QModelIndex* q_undoview_index_at(void* self, void* p) {
    return QUndoView_IndexAt((QUndoView*)self, (QPoint*)p);
}

QModelIndex* q_undoview_qbase_index_at(void* self, void* p) {
    return QUndoView_QBaseIndexAt((QUndoView*)self, (QPoint*)p);
}

void q_undoview_on_index_at(void* self, QModelIndex* (*callback)(void*, void*)) {
    QUndoView_OnIndexAt((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_do_items_layout(void* self) {
    QUndoView_DoItemsLayout((QUndoView*)self);
}

void q_undoview_qbase_do_items_layout(void* self) {
    QUndoView_QBaseDoItemsLayout((QUndoView*)self);
}

void q_undoview_on_do_items_layout(void* self, void (*callback)()) {
    QUndoView_OnDoItemsLayout((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_reset(void* self) {
    QUndoView_Reset((QUndoView*)self);
}

void q_undoview_qbase_reset(void* self) {
    QUndoView_QBaseReset((QUndoView*)self);
}

void q_undoview_on_reset(void* self, void (*callback)()) {
    QUndoView_OnReset((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_set_root_index(void* self, void* index) {
    QUndoView_SetRootIndex((QUndoView*)self, (QModelIndex*)index);
}

void q_undoview_qbase_set_root_index(void* self, void* index) {
    QUndoView_QBaseSetRootIndex((QUndoView*)self, (QModelIndex*)index);
}

void q_undoview_on_set_root_index(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnSetRootIndex((QUndoView*)self, (intptr_t)callback);
}

bool q_undoview_event(void* self, void* e) {
    return QUndoView_Event((QUndoView*)self, (QEvent*)e);
}

bool q_undoview_qbase_event(void* self, void* e) {
    return QUndoView_QBaseEvent((QUndoView*)self, (QEvent*)e);
}

void q_undoview_on_event(void* self, bool (*callback)(void*, void*)) {
    QUndoView_OnEvent((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_scroll_contents_by(void* self, int dx, int dy) {
    QUndoView_ScrollContentsBy((QUndoView*)self, dx, dy);
}

void q_undoview_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QUndoView_QBaseScrollContentsBy((QUndoView*)self, dx, dy);
}

void q_undoview_on_scroll_contents_by(void* self, void (*callback)(void*, int, int)) {
    QUndoView_OnScrollContentsBy((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles) {
    QUndoView_DataChanged((QUndoView*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_undoview_qbase_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles) {
    QUndoView_QBaseDataChanged((QUndoView*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_undoview_on_data_changed(void* self, void (*callback)(void*, void*, void*, libqt_list)) {
    QUndoView_OnDataChanged((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_rows_inserted(void* self, void* parent, int start, int end) {
    QUndoView_RowsInserted((QUndoView*)self, (QModelIndex*)parent, start, end);
}

void q_undoview_qbase_rows_inserted(void* self, void* parent, int start, int end) {
    QUndoView_QBaseRowsInserted((QUndoView*)self, (QModelIndex*)parent, start, end);
}

void q_undoview_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QUndoView_OnRowsInserted((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QUndoView_RowsAboutToBeRemoved((QUndoView*)self, (QModelIndex*)parent, start, end);
}

void q_undoview_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QUndoView_QBaseRowsAboutToBeRemoved((QUndoView*)self, (QModelIndex*)parent, start, end);
}

void q_undoview_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QUndoView_OnRowsAboutToBeRemoved((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_mouse_move_event(void* self, void* e) {
    QUndoView_MouseMoveEvent((QUndoView*)self, (QMouseEvent*)e);
}

void q_undoview_qbase_mouse_move_event(void* self, void* e) {
    QUndoView_QBaseMouseMoveEvent((QUndoView*)self, (QMouseEvent*)e);
}

void q_undoview_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnMouseMoveEvent((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_mouse_release_event(void* self, void* e) {
    QUndoView_MouseReleaseEvent((QUndoView*)self, (QMouseEvent*)e);
}

void q_undoview_qbase_mouse_release_event(void* self, void* e) {
    QUndoView_QBaseMouseReleaseEvent((QUndoView*)self, (QMouseEvent*)e);
}

void q_undoview_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnMouseReleaseEvent((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_wheel_event(void* self, void* e) {
    QUndoView_WheelEvent((QUndoView*)self, (QWheelEvent*)e);
}

void q_undoview_qbase_wheel_event(void* self, void* e) {
    QUndoView_QBaseWheelEvent((QUndoView*)self, (QWheelEvent*)e);
}

void q_undoview_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnWheelEvent((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_timer_event(void* self, void* e) {
    QUndoView_TimerEvent((QUndoView*)self, (QTimerEvent*)e);
}

void q_undoview_qbase_timer_event(void* self, void* e) {
    QUndoView_QBaseTimerEvent((QUndoView*)self, (QTimerEvent*)e);
}

void q_undoview_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnTimerEvent((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_resize_event(void* self, void* e) {
    QUndoView_ResizeEvent((QUndoView*)self, (QResizeEvent*)e);
}

void q_undoview_qbase_resize_event(void* self, void* e) {
    QUndoView_QBaseResizeEvent((QUndoView*)self, (QResizeEvent*)e);
}

void q_undoview_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnResizeEvent((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_drag_move_event(void* self, void* e) {
    QUndoView_DragMoveEvent((QUndoView*)self, (QDragMoveEvent*)e);
}

void q_undoview_qbase_drag_move_event(void* self, void* e) {
    QUndoView_QBaseDragMoveEvent((QUndoView*)self, (QDragMoveEvent*)e);
}

void q_undoview_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnDragMoveEvent((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_drag_leave_event(void* self, void* e) {
    QUndoView_DragLeaveEvent((QUndoView*)self, (QDragLeaveEvent*)e);
}

void q_undoview_qbase_drag_leave_event(void* self, void* e) {
    QUndoView_QBaseDragLeaveEvent((QUndoView*)self, (QDragLeaveEvent*)e);
}

void q_undoview_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnDragLeaveEvent((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_drop_event(void* self, void* e) {
    QUndoView_DropEvent((QUndoView*)self, (QDropEvent*)e);
}

void q_undoview_qbase_drop_event(void* self, void* e) {
    QUndoView_QBaseDropEvent((QUndoView*)self, (QDropEvent*)e);
}

void q_undoview_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnDropEvent((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_start_drag(void* self, int64_t supportedActions) {
    QUndoView_StartDrag((QUndoView*)self, supportedActions);
}

void q_undoview_qbase_start_drag(void* self, int64_t supportedActions) {
    QUndoView_QBaseStartDrag((QUndoView*)self, supportedActions);
}

void q_undoview_on_start_drag(void* self, void (*callback)(void*, int64_t)) {
    QUndoView_OnStartDrag((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_init_view_item_option(void* self, void* option) {
    QUndoView_InitViewItemOption((QUndoView*)self, (QStyleOptionViewItem*)option);
}

void q_undoview_qbase_init_view_item_option(void* self, void* option) {
    QUndoView_QBaseInitViewItemOption((QUndoView*)self, (QStyleOptionViewItem*)option);
}

void q_undoview_on_init_view_item_option(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnInitViewItemOption((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_paint_event(void* self, void* e) {
    QUndoView_PaintEvent((QUndoView*)self, (QPaintEvent*)e);
}

void q_undoview_qbase_paint_event(void* self, void* e) {
    QUndoView_QBasePaintEvent((QUndoView*)self, (QPaintEvent*)e);
}

void q_undoview_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnPaintEvent((QUndoView*)self, (intptr_t)callback);
}

int32_t q_undoview_horizontal_offset(void* self) {
    return QUndoView_HorizontalOffset((QUndoView*)self);
}

int32_t q_undoview_qbase_horizontal_offset(void* self) {
    return QUndoView_QBaseHorizontalOffset((QUndoView*)self);
}

void q_undoview_on_horizontal_offset(void* self, int32_t (*callback)()) {
    QUndoView_OnHorizontalOffset((QUndoView*)self, (intptr_t)callback);
}

int32_t q_undoview_vertical_offset(void* self) {
    return QUndoView_VerticalOffset((QUndoView*)self);
}

int32_t q_undoview_qbase_vertical_offset(void* self) {
    return QUndoView_QBaseVerticalOffset((QUndoView*)self);
}

void q_undoview_on_vertical_offset(void* self, int32_t (*callback)()) {
    QUndoView_OnVerticalOffset((QUndoView*)self, (intptr_t)callback);
}

QModelIndex* q_undoview_move_cursor(void* self, int32_t cursorAction, int64_t modifiers) {
    return QUndoView_MoveCursor((QUndoView*)self, cursorAction, modifiers);
}

QModelIndex* q_undoview_qbase_move_cursor(void* self, int32_t cursorAction, int64_t modifiers) {
    return QUndoView_QBaseMoveCursor((QUndoView*)self, cursorAction, modifiers);
}

void q_undoview_on_move_cursor(void* self, QModelIndex* (*callback)(void*, int32_t, int64_t)) {
    QUndoView_OnMoveCursor((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_set_selection(void* self, void* rect, int64_t command) {
    QUndoView_SetSelection((QUndoView*)self, (QRect*)rect, command);
}

void q_undoview_qbase_set_selection(void* self, void* rect, int64_t command) {
    QUndoView_QBaseSetSelection((QUndoView*)self, (QRect*)rect, command);
}

void q_undoview_on_set_selection(void* self, void (*callback)(void*, void*, int64_t)) {
    QUndoView_OnSetSelection((QUndoView*)self, (intptr_t)callback);
}

QRegion* q_undoview_visual_region_for_selection(void* self, void* selection) {
    return QUndoView_VisualRegionForSelection((QUndoView*)self, (QItemSelection*)selection);
}

QRegion* q_undoview_qbase_visual_region_for_selection(void* self, void* selection) {
    return QUndoView_QBaseVisualRegionForSelection((QUndoView*)self, (QItemSelection*)selection);
}

void q_undoview_on_visual_region_for_selection(void* self, QRegion* (*callback)(void*, void*)) {
    QUndoView_OnVisualRegionForSelection((QUndoView*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_undoview_selected_indexes(void* self) {
    libqt_list _arr = QUndoView_SelectedIndexes((QUndoView*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ q_undoview_qbase_selected_indexes(void* self) {
    libqt_list _arr = QUndoView_QBaseSelectedIndexes((QUndoView*)self);
    return _arr;
}

void q_undoview_on_selected_indexes(void* self, libqt_list /* of QModelIndex* */ (*callback)()) {
    QUndoView_OnSelectedIndexes((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_update_geometries(void* self) {
    QUndoView_UpdateGeometries((QUndoView*)self);
}

void q_undoview_qbase_update_geometries(void* self) {
    QUndoView_QBaseUpdateGeometries((QUndoView*)self);
}

void q_undoview_on_update_geometries(void* self, void (*callback)()) {
    QUndoView_OnUpdateGeometries((QUndoView*)self, (intptr_t)callback);
}

bool q_undoview_is_index_hidden(void* self, void* index) {
    return QUndoView_IsIndexHidden((QUndoView*)self, (QModelIndex*)index);
}

bool q_undoview_qbase_is_index_hidden(void* self, void* index) {
    return QUndoView_QBaseIsIndexHidden((QUndoView*)self, (QModelIndex*)index);
}

void q_undoview_on_is_index_hidden(void* self, bool (*callback)(void*, void*)) {
    QUndoView_OnIsIndexHidden((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_selection_changed(void* self, void* selected, void* deselected) {
    QUndoView_SelectionChanged((QUndoView*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

void q_undoview_qbase_selection_changed(void* self, void* selected, void* deselected) {
    QUndoView_QBaseSelectionChanged((QUndoView*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

void q_undoview_on_selection_changed(void* self, void (*callback)(void*, void*, void*)) {
    QUndoView_OnSelectionChanged((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_current_changed(void* self, void* current, void* previous) {
    QUndoView_CurrentChanged((QUndoView*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

void q_undoview_qbase_current_changed(void* self, void* current, void* previous) {
    QUndoView_QBaseCurrentChanged((QUndoView*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

void q_undoview_on_current_changed(void* self, void (*callback)(void*, void*, void*)) {
    QUndoView_OnCurrentChanged((QUndoView*)self, (intptr_t)callback);
}

QSize* q_undoview_viewport_size_hint(void* self) {
    return QUndoView_ViewportSizeHint((QUndoView*)self);
}

QSize* q_undoview_qbase_viewport_size_hint(void* self) {
    return QUndoView_QBaseViewportSizeHint((QUndoView*)self);
}

void q_undoview_on_viewport_size_hint(void* self, QSize* (*callback)()) {
    QUndoView_OnViewportSizeHint((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_set_model(void* self, void* model) {
    QUndoView_SetModel((QUndoView*)self, (QAbstractItemModel*)model);
}

void q_undoview_qbase_set_model(void* self, void* model) {
    QUndoView_QBaseSetModel((QUndoView*)self, (QAbstractItemModel*)model);
}

void q_undoview_on_set_model(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnSetModel((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_set_selection_model(void* self, void* selectionModel) {
    QUndoView_SetSelectionModel((QUndoView*)self, (QItemSelectionModel*)selectionModel);
}

void q_undoview_qbase_set_selection_model(void* self, void* selectionModel) {
    QUndoView_QBaseSetSelectionModel((QUndoView*)self, (QItemSelectionModel*)selectionModel);
}

void q_undoview_on_set_selection_model(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnSetSelectionModel((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_keyboard_search(void* self, const char* search) {
    QUndoView_KeyboardSearch((QUndoView*)self, qstring(search));
}

void q_undoview_qbase_keyboard_search(void* self, const char* search) {
    QUndoView_QBaseKeyboardSearch((QUndoView*)self, qstring(search));
}

void q_undoview_on_keyboard_search(void* self, void (*callback)(void*, const char*)) {
    QUndoView_OnKeyboardSearch((QUndoView*)self, (intptr_t)callback);
}

int32_t q_undoview_size_hint_for_row(void* self, int row) {
    return QUndoView_SizeHintForRow((QUndoView*)self, row);
}

int32_t q_undoview_qbase_size_hint_for_row(void* self, int row) {
    return QUndoView_QBaseSizeHintForRow((QUndoView*)self, row);
}

void q_undoview_on_size_hint_for_row(void* self, int32_t (*callback)(void*, int)) {
    QUndoView_OnSizeHintForRow((QUndoView*)self, (intptr_t)callback);
}

int32_t q_undoview_size_hint_for_column(void* self, int column) {
    return QUndoView_SizeHintForColumn((QUndoView*)self, column);
}

int32_t q_undoview_qbase_size_hint_for_column(void* self, int column) {
    return QUndoView_QBaseSizeHintForColumn((QUndoView*)self, column);
}

void q_undoview_on_size_hint_for_column(void* self, int32_t (*callback)(void*, int)) {
    QUndoView_OnSizeHintForColumn((QUndoView*)self, (intptr_t)callback);
}

QAbstractItemDelegate* q_undoview_item_delegate_for_index(void* self, void* index) {
    return QUndoView_ItemDelegateForIndex((QUndoView*)self, (QModelIndex*)index);
}

QAbstractItemDelegate* q_undoview_qbase_item_delegate_for_index(void* self, void* index) {
    return QUndoView_QBaseItemDelegateForIndex((QUndoView*)self, (QModelIndex*)index);
}

void q_undoview_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*callback)(void*, void*)) {
    QUndoView_OnItemDelegateForIndex((QUndoView*)self, (intptr_t)callback);
}

QVariant* q_undoview_input_method_query(void* self, int64_t query) {
    return QUndoView_InputMethodQuery((QUndoView*)self, query);
}

QVariant* q_undoview_qbase_input_method_query(void* self, int64_t query) {
    return QUndoView_QBaseInputMethodQuery((QUndoView*)self, query);
}

void q_undoview_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    QUndoView_OnInputMethodQuery((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_select_all(void* self) {
    QUndoView_SelectAll((QUndoView*)self);
}

void q_undoview_qbase_select_all(void* self) {
    QUndoView_QBaseSelectAll((QUndoView*)self);
}

void q_undoview_on_select_all(void* self, void (*callback)()) {
    QUndoView_OnSelectAll((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_update_editor_data(void* self) {
    QUndoView_UpdateEditorData((QUndoView*)self);
}

void q_undoview_qbase_update_editor_data(void* self) {
    QUndoView_QBaseUpdateEditorData((QUndoView*)self);
}

void q_undoview_on_update_editor_data(void* self, void (*callback)()) {
    QUndoView_OnUpdateEditorData((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_update_editor_geometries(void* self) {
    QUndoView_UpdateEditorGeometries((QUndoView*)self);
}

void q_undoview_qbase_update_editor_geometries(void* self) {
    QUndoView_QBaseUpdateEditorGeometries((QUndoView*)self);
}

void q_undoview_on_update_editor_geometries(void* self, void (*callback)()) {
    QUndoView_OnUpdateEditorGeometries((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_vertical_scrollbar_action(void* self, int action) {
    QUndoView_VerticalScrollbarAction((QUndoView*)self, action);
}

void q_undoview_qbase_vertical_scrollbar_action(void* self, int action) {
    QUndoView_QBaseVerticalScrollbarAction((QUndoView*)self, action);
}

void q_undoview_on_vertical_scrollbar_action(void* self, void (*callback)(void*, int)) {
    QUndoView_OnVerticalScrollbarAction((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_horizontal_scrollbar_action(void* self, int action) {
    QUndoView_HorizontalScrollbarAction((QUndoView*)self, action);
}

void q_undoview_qbase_horizontal_scrollbar_action(void* self, int action) {
    QUndoView_QBaseHorizontalScrollbarAction((QUndoView*)self, action);
}

void q_undoview_on_horizontal_scrollbar_action(void* self, void (*callback)(void*, int)) {
    QUndoView_OnHorizontalScrollbarAction((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_vertical_scrollbar_value_changed(void* self, int value) {
    QUndoView_VerticalScrollbarValueChanged((QUndoView*)self, value);
}

void q_undoview_qbase_vertical_scrollbar_value_changed(void* self, int value) {
    QUndoView_QBaseVerticalScrollbarValueChanged((QUndoView*)self, value);
}

void q_undoview_on_vertical_scrollbar_value_changed(void* self, void (*callback)(void*, int)) {
    QUndoView_OnVerticalScrollbarValueChanged((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_horizontal_scrollbar_value_changed(void* self, int value) {
    QUndoView_HorizontalScrollbarValueChanged((QUndoView*)self, value);
}

void q_undoview_qbase_horizontal_scrollbar_value_changed(void* self, int value) {
    QUndoView_QBaseHorizontalScrollbarValueChanged((QUndoView*)self, value);
}

void q_undoview_on_horizontal_scrollbar_value_changed(void* self, void (*callback)(void*, int)) {
    QUndoView_OnHorizontalScrollbarValueChanged((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_close_editor(void* self, void* editor, int32_t hint) {
    QUndoView_CloseEditor((QUndoView*)self, (QWidget*)editor, hint);
}

void q_undoview_qbase_close_editor(void* self, void* editor, int32_t hint) {
    QUndoView_QBaseCloseEditor((QUndoView*)self, (QWidget*)editor, hint);
}

void q_undoview_on_close_editor(void* self, void (*callback)(void*, void*, int32_t)) {
    QUndoView_OnCloseEditor((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_commit_data(void* self, void* editor) {
    QUndoView_CommitData((QUndoView*)self, (QWidget*)editor);
}

void q_undoview_qbase_commit_data(void* self, void* editor) {
    QUndoView_QBaseCommitData((QUndoView*)self, (QWidget*)editor);
}

void q_undoview_on_commit_data(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnCommitData((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_editor_destroyed(void* self, void* editor) {
    QUndoView_EditorDestroyed((QUndoView*)self, (QObject*)editor);
}

void q_undoview_qbase_editor_destroyed(void* self, void* editor) {
    QUndoView_QBaseEditorDestroyed((QUndoView*)self, (QObject*)editor);
}

void q_undoview_on_editor_destroyed(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnEditorDestroyed((QUndoView*)self, (intptr_t)callback);
}

bool q_undoview_edit2(void* self, void* index, int32_t trigger, void* event) {
    return QUndoView_Edit2((QUndoView*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

bool q_undoview_qbase_edit2(void* self, void* index, int32_t trigger, void* event) {
    return QUndoView_QBaseEdit2((QUndoView*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

void q_undoview_on_edit2(void* self, bool (*callback)(void*, void*, int32_t, void*)) {
    QUndoView_OnEdit2((QUndoView*)self, (intptr_t)callback);
}

int64_t q_undoview_selection_command(void* self, void* index, void* event) {
    return QUndoView_SelectionCommand((QUndoView*)self, (QModelIndex*)index, (QEvent*)event);
}

int64_t q_undoview_qbase_selection_command(void* self, void* index, void* event) {
    return QUndoView_QBaseSelectionCommand((QUndoView*)self, (QModelIndex*)index, (QEvent*)event);
}

void q_undoview_on_selection_command(void* self, int64_t (*callback)(void*, void*, void*)) {
    QUndoView_OnSelectionCommand((QUndoView*)self, (intptr_t)callback);
}

bool q_undoview_focus_next_prev_child(void* self, bool next) {
    return QUndoView_FocusNextPrevChild((QUndoView*)self, next);
}

bool q_undoview_qbase_focus_next_prev_child(void* self, bool next) {
    return QUndoView_QBaseFocusNextPrevChild((QUndoView*)self, next);
}

void q_undoview_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QUndoView_OnFocusNextPrevChild((QUndoView*)self, (intptr_t)callback);
}

bool q_undoview_viewport_event(void* self, void* event) {
    return QUndoView_ViewportEvent((QUndoView*)self, (QEvent*)event);
}

bool q_undoview_qbase_viewport_event(void* self, void* event) {
    return QUndoView_QBaseViewportEvent((QUndoView*)self, (QEvent*)event);
}

void q_undoview_on_viewport_event(void* self, bool (*callback)(void*, void*)) {
    QUndoView_OnViewportEvent((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_mouse_press_event(void* self, void* event) {
    QUndoView_MousePressEvent((QUndoView*)self, (QMouseEvent*)event);
}

void q_undoview_qbase_mouse_press_event(void* self, void* event) {
    QUndoView_QBaseMousePressEvent((QUndoView*)self, (QMouseEvent*)event);
}

void q_undoview_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnMousePressEvent((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_mouse_double_click_event(void* self, void* event) {
    QUndoView_MouseDoubleClickEvent((QUndoView*)self, (QMouseEvent*)event);
}

void q_undoview_qbase_mouse_double_click_event(void* self, void* event) {
    QUndoView_QBaseMouseDoubleClickEvent((QUndoView*)self, (QMouseEvent*)event);
}

void q_undoview_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnMouseDoubleClickEvent((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_drag_enter_event(void* self, void* event) {
    QUndoView_DragEnterEvent((QUndoView*)self, (QDragEnterEvent*)event);
}

void q_undoview_qbase_drag_enter_event(void* self, void* event) {
    QUndoView_QBaseDragEnterEvent((QUndoView*)self, (QDragEnterEvent*)event);
}

void q_undoview_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnDragEnterEvent((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_focus_in_event(void* self, void* event) {
    QUndoView_FocusInEvent((QUndoView*)self, (QFocusEvent*)event);
}

void q_undoview_qbase_focus_in_event(void* self, void* event) {
    QUndoView_QBaseFocusInEvent((QUndoView*)self, (QFocusEvent*)event);
}

void q_undoview_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnFocusInEvent((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_focus_out_event(void* self, void* event) {
    QUndoView_FocusOutEvent((QUndoView*)self, (QFocusEvent*)event);
}

void q_undoview_qbase_focus_out_event(void* self, void* event) {
    QUndoView_QBaseFocusOutEvent((QUndoView*)self, (QFocusEvent*)event);
}

void q_undoview_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnFocusOutEvent((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_key_press_event(void* self, void* event) {
    QUndoView_KeyPressEvent((QUndoView*)self, (QKeyEvent*)event);
}

void q_undoview_qbase_key_press_event(void* self, void* event) {
    QUndoView_QBaseKeyPressEvent((QUndoView*)self, (QKeyEvent*)event);
}

void q_undoview_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnKeyPressEvent((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_input_method_event(void* self, void* event) {
    QUndoView_InputMethodEvent((QUndoView*)self, (QInputMethodEvent*)event);
}

void q_undoview_qbase_input_method_event(void* self, void* event) {
    QUndoView_QBaseInputMethodEvent((QUndoView*)self, (QInputMethodEvent*)event);
}

void q_undoview_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnInputMethodEvent((QUndoView*)self, (intptr_t)callback);
}

bool q_undoview_event_filter(void* self, void* object, void* event) {
    return QUndoView_EventFilter((QUndoView*)self, (QObject*)object, (QEvent*)event);
}

bool q_undoview_qbase_event_filter(void* self, void* object, void* event) {
    return QUndoView_QBaseEventFilter((QUndoView*)self, (QObject*)object, (QEvent*)event);
}

void q_undoview_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QUndoView_OnEventFilter((QUndoView*)self, (intptr_t)callback);
}

QSize* q_undoview_minimum_size_hint(void* self) {
    return QUndoView_MinimumSizeHint((QUndoView*)self);
}

QSize* q_undoview_qbase_minimum_size_hint(void* self) {
    return QUndoView_QBaseMinimumSizeHint((QUndoView*)self);
}

void q_undoview_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QUndoView_OnMinimumSizeHint((QUndoView*)self, (intptr_t)callback);
}

QSize* q_undoview_size_hint(void* self) {
    return QUndoView_SizeHint((QUndoView*)self);
}

QSize* q_undoview_qbase_size_hint(void* self) {
    return QUndoView_QBaseSizeHint((QUndoView*)self);
}

void q_undoview_on_size_hint(void* self, QSize* (*callback)()) {
    QUndoView_OnSizeHint((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_setup_viewport(void* self, void* viewport) {
    QUndoView_SetupViewport((QUndoView*)self, (QWidget*)viewport);
}

void q_undoview_qbase_setup_viewport(void* self, void* viewport) {
    QUndoView_QBaseSetupViewport((QUndoView*)self, (QWidget*)viewport);
}

void q_undoview_on_setup_viewport(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnSetupViewport((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_context_menu_event(void* self, void* param1) {
    QUndoView_ContextMenuEvent((QUndoView*)self, (QContextMenuEvent*)param1);
}

void q_undoview_qbase_context_menu_event(void* self, void* param1) {
    QUndoView_QBaseContextMenuEvent((QUndoView*)self, (QContextMenuEvent*)param1);
}

void q_undoview_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnContextMenuEvent((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_change_event(void* self, void* param1) {
    QUndoView_ChangeEvent((QUndoView*)self, (QEvent*)param1);
}

void q_undoview_qbase_change_event(void* self, void* param1) {
    QUndoView_QBaseChangeEvent((QUndoView*)self, (QEvent*)param1);
}

void q_undoview_on_change_event(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnChangeEvent((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_init_style_option(void* self, void* option) {
    QUndoView_InitStyleOption((QUndoView*)self, (QStyleOptionFrame*)option);
}

void q_undoview_qbase_init_style_option(void* self, void* option) {
    QUndoView_QBaseInitStyleOption((QUndoView*)self, (QStyleOptionFrame*)option);
}

void q_undoview_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnInitStyleOption((QUndoView*)self, (intptr_t)callback);
}

int32_t q_undoview_dev_type(void* self) {
    return QUndoView_DevType((QUndoView*)self);
}

int32_t q_undoview_qbase_dev_type(void* self) {
    return QUndoView_QBaseDevType((QUndoView*)self);
}

void q_undoview_on_dev_type(void* self, int32_t (*callback)()) {
    QUndoView_OnDevType((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_set_visible(void* self, bool visible) {
    QUndoView_SetVisible((QUndoView*)self, visible);
}

void q_undoview_qbase_set_visible(void* self, bool visible) {
    QUndoView_QBaseSetVisible((QUndoView*)self, visible);
}

void q_undoview_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QUndoView_OnSetVisible((QUndoView*)self, (intptr_t)callback);
}

int32_t q_undoview_height_for_width(void* self, int param1) {
    return QUndoView_HeightForWidth((QUndoView*)self, param1);
}

int32_t q_undoview_qbase_height_for_width(void* self, int param1) {
    return QUndoView_QBaseHeightForWidth((QUndoView*)self, param1);
}

void q_undoview_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QUndoView_OnHeightForWidth((QUndoView*)self, (intptr_t)callback);
}

bool q_undoview_has_height_for_width(void* self) {
    return QUndoView_HasHeightForWidth((QUndoView*)self);
}

bool q_undoview_qbase_has_height_for_width(void* self) {
    return QUndoView_QBaseHasHeightForWidth((QUndoView*)self);
}

void q_undoview_on_has_height_for_width(void* self, bool (*callback)()) {
    QUndoView_OnHasHeightForWidth((QUndoView*)self, (intptr_t)callback);
}

QPaintEngine* q_undoview_paint_engine(void* self) {
    return QUndoView_PaintEngine((QUndoView*)self);
}

QPaintEngine* q_undoview_qbase_paint_engine(void* self) {
    return QUndoView_QBasePaintEngine((QUndoView*)self);
}

void q_undoview_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QUndoView_OnPaintEngine((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_key_release_event(void* self, void* event) {
    QUndoView_KeyReleaseEvent((QUndoView*)self, (QKeyEvent*)event);
}

void q_undoview_qbase_key_release_event(void* self, void* event) {
    QUndoView_QBaseKeyReleaseEvent((QUndoView*)self, (QKeyEvent*)event);
}

void q_undoview_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnKeyReleaseEvent((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_enter_event(void* self, void* event) {
    QUndoView_EnterEvent((QUndoView*)self, (QEnterEvent*)event);
}

void q_undoview_qbase_enter_event(void* self, void* event) {
    QUndoView_QBaseEnterEvent((QUndoView*)self, (QEnterEvent*)event);
}

void q_undoview_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnEnterEvent((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_leave_event(void* self, void* event) {
    QUndoView_LeaveEvent((QUndoView*)self, (QEvent*)event);
}

void q_undoview_qbase_leave_event(void* self, void* event) {
    QUndoView_QBaseLeaveEvent((QUndoView*)self, (QEvent*)event);
}

void q_undoview_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnLeaveEvent((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_move_event(void* self, void* event) {
    QUndoView_MoveEvent((QUndoView*)self, (QMoveEvent*)event);
}

void q_undoview_qbase_move_event(void* self, void* event) {
    QUndoView_QBaseMoveEvent((QUndoView*)self, (QMoveEvent*)event);
}

void q_undoview_on_move_event(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnMoveEvent((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_close_event(void* self, void* event) {
    QUndoView_CloseEvent((QUndoView*)self, (QCloseEvent*)event);
}

void q_undoview_qbase_close_event(void* self, void* event) {
    QUndoView_QBaseCloseEvent((QUndoView*)self, (QCloseEvent*)event);
}

void q_undoview_on_close_event(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnCloseEvent((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_tablet_event(void* self, void* event) {
    QUndoView_TabletEvent((QUndoView*)self, (QTabletEvent*)event);
}

void q_undoview_qbase_tablet_event(void* self, void* event) {
    QUndoView_QBaseTabletEvent((QUndoView*)self, (QTabletEvent*)event);
}

void q_undoview_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnTabletEvent((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_action_event(void* self, void* event) {
    QUndoView_ActionEvent((QUndoView*)self, (QActionEvent*)event);
}

void q_undoview_qbase_action_event(void* self, void* event) {
    QUndoView_QBaseActionEvent((QUndoView*)self, (QActionEvent*)event);
}

void q_undoview_on_action_event(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnActionEvent((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_show_event(void* self, void* event) {
    QUndoView_ShowEvent((QUndoView*)self, (QShowEvent*)event);
}

void q_undoview_qbase_show_event(void* self, void* event) {
    QUndoView_QBaseShowEvent((QUndoView*)self, (QShowEvent*)event);
}

void q_undoview_on_show_event(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnShowEvent((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_hide_event(void* self, void* event) {
    QUndoView_HideEvent((QUndoView*)self, (QHideEvent*)event);
}

void q_undoview_qbase_hide_event(void* self, void* event) {
    QUndoView_QBaseHideEvent((QUndoView*)self, (QHideEvent*)event);
}

void q_undoview_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnHideEvent((QUndoView*)self, (intptr_t)callback);
}

bool q_undoview_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QUndoView_NativeEvent((QUndoView*)self, qstring(eventType), message, result);
}

bool q_undoview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QUndoView_QBaseNativeEvent((QUndoView*)self, qstring(eventType), message, result);
}

void q_undoview_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QUndoView_OnNativeEvent((QUndoView*)self, (intptr_t)callback);
}

int32_t q_undoview_metric(void* self, int32_t param1) {
    return QUndoView_Metric((QUndoView*)self, param1);
}

int32_t q_undoview_qbase_metric(void* self, int32_t param1) {
    return QUndoView_QBaseMetric((QUndoView*)self, param1);
}

void q_undoview_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QUndoView_OnMetric((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_init_painter(void* self, void* painter) {
    QUndoView_InitPainter((QUndoView*)self, (QPainter*)painter);
}

void q_undoview_qbase_init_painter(void* self, void* painter) {
    QUndoView_QBaseInitPainter((QUndoView*)self, (QPainter*)painter);
}

void q_undoview_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnInitPainter((QUndoView*)self, (intptr_t)callback);
}

QPaintDevice* q_undoview_redirected(void* self, void* offset) {
    return QUndoView_Redirected((QUndoView*)self, (QPoint*)offset);
}

QPaintDevice* q_undoview_qbase_redirected(void* self, void* offset) {
    return QUndoView_QBaseRedirected((QUndoView*)self, (QPoint*)offset);
}

void q_undoview_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QUndoView_OnRedirected((QUndoView*)self, (intptr_t)callback);
}

QPainter* q_undoview_shared_painter(void* self) {
    return QUndoView_SharedPainter((QUndoView*)self);
}

QPainter* q_undoview_qbase_shared_painter(void* self) {
    return QUndoView_QBaseSharedPainter((QUndoView*)self);
}

void q_undoview_on_shared_painter(void* self, QPainter* (*callback)()) {
    QUndoView_OnSharedPainter((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_child_event(void* self, void* event) {
    QUndoView_ChildEvent((QUndoView*)self, (QChildEvent*)event);
}

void q_undoview_qbase_child_event(void* self, void* event) {
    QUndoView_QBaseChildEvent((QUndoView*)self, (QChildEvent*)event);
}

void q_undoview_on_child_event(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnChildEvent((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_custom_event(void* self, void* event) {
    QUndoView_CustomEvent((QUndoView*)self, (QEvent*)event);
}

void q_undoview_qbase_custom_event(void* self, void* event) {
    QUndoView_QBaseCustomEvent((QUndoView*)self, (QEvent*)event);
}

void q_undoview_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnCustomEvent((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_connect_notify(void* self, void* signal) {
    QUndoView_ConnectNotify((QUndoView*)self, (QMetaMethod*)signal);
}

void q_undoview_qbase_connect_notify(void* self, void* signal) {
    QUndoView_QBaseConnectNotify((QUndoView*)self, (QMetaMethod*)signal);
}

void q_undoview_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnConnectNotify((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_disconnect_notify(void* self, void* signal) {
    QUndoView_DisconnectNotify((QUndoView*)self, (QMetaMethod*)signal);
}

void q_undoview_qbase_disconnect_notify(void* self, void* signal) {
    QUndoView_QBaseDisconnectNotify((QUndoView*)self, (QMetaMethod*)signal);
}

void q_undoview_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnDisconnectNotify((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_resize_contents(void* self, int width, int height) {
    QUndoView_ResizeContents((QUndoView*)self, width, height);
}

void q_undoview_qbase_resize_contents(void* self, int width, int height) {
    QUndoView_QBaseResizeContents((QUndoView*)self, width, height);
}

void q_undoview_on_resize_contents(void* self, void (*callback)(void*, int, int)) {
    QUndoView_OnResizeContents((QUndoView*)self, (intptr_t)callback);
}

QSize* q_undoview_contents_size(void* self) {
    return QUndoView_ContentsSize((QUndoView*)self);
}

QSize* q_undoview_qbase_contents_size(void* self) {
    return QUndoView_QBaseContentsSize((QUndoView*)self);
}

void q_undoview_on_contents_size(void* self, QSize* (*callback)()) {
    QUndoView_OnContentsSize((QUndoView*)self, (intptr_t)callback);
}

QRect* q_undoview_rect_for_index(void* self, void* index) {
    return QUndoView_RectForIndex((QUndoView*)self, (QModelIndex*)index);
}

QRect* q_undoview_qbase_rect_for_index(void* self, void* index) {
    return QUndoView_QBaseRectForIndex((QUndoView*)self, (QModelIndex*)index);
}

void q_undoview_on_rect_for_index(void* self, QRect* (*callback)(void*, void*)) {
    QUndoView_OnRectForIndex((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_set_position_for_index(void* self, void* position, void* index) {
    QUndoView_SetPositionForIndex((QUndoView*)self, (QPoint*)position, (QModelIndex*)index);
}

void q_undoview_qbase_set_position_for_index(void* self, void* position, void* index) {
    QUndoView_QBaseSetPositionForIndex((QUndoView*)self, (QPoint*)position, (QModelIndex*)index);
}

void q_undoview_on_set_position_for_index(void* self, void (*callback)(void*, void*, void*)) {
    QUndoView_OnSetPositionForIndex((QUndoView*)self, (intptr_t)callback);
}

int32_t q_undoview_state(void* self) {
    return QUndoView_State((QUndoView*)self);
}

int32_t q_undoview_qbase_state(void* self) {
    return QUndoView_QBaseState((QUndoView*)self);
}

void q_undoview_on_state(void* self, int32_t (*callback)()) {
    QUndoView_OnState((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_set_state(void* self, int32_t state) {
    QUndoView_SetState((QUndoView*)self, state);
}

void q_undoview_qbase_set_state(void* self, int32_t state) {
    QUndoView_QBaseSetState((QUndoView*)self, state);
}

void q_undoview_on_set_state(void* self, void (*callback)(void*, int32_t)) {
    QUndoView_OnSetState((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_schedule_delayed_items_layout(void* self) {
    QUndoView_ScheduleDelayedItemsLayout((QUndoView*)self);
}

void q_undoview_qbase_schedule_delayed_items_layout(void* self) {
    QUndoView_QBaseScheduleDelayedItemsLayout((QUndoView*)self);
}

void q_undoview_on_schedule_delayed_items_layout(void* self, void (*callback)()) {
    QUndoView_OnScheduleDelayedItemsLayout((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_execute_delayed_items_layout(void* self) {
    QUndoView_ExecuteDelayedItemsLayout((QUndoView*)self);
}

void q_undoview_qbase_execute_delayed_items_layout(void* self) {
    QUndoView_QBaseExecuteDelayedItemsLayout((QUndoView*)self);
}

void q_undoview_on_execute_delayed_items_layout(void* self, void (*callback)()) {
    QUndoView_OnExecuteDelayedItemsLayout((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_set_dirty_region(void* self, void* region) {
    QUndoView_SetDirtyRegion((QUndoView*)self, (QRegion*)region);
}

void q_undoview_qbase_set_dirty_region(void* self, void* region) {
    QUndoView_QBaseSetDirtyRegion((QUndoView*)self, (QRegion*)region);
}

void q_undoview_on_set_dirty_region(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnSetDirtyRegion((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_scroll_dirty_region(void* self, int dx, int dy) {
    QUndoView_ScrollDirtyRegion((QUndoView*)self, dx, dy);
}

void q_undoview_qbase_scroll_dirty_region(void* self, int dx, int dy) {
    QUndoView_QBaseScrollDirtyRegion((QUndoView*)self, dx, dy);
}

void q_undoview_on_scroll_dirty_region(void* self, void (*callback)(void*, int, int)) {
    QUndoView_OnScrollDirtyRegion((QUndoView*)self, (intptr_t)callback);
}

QPoint* q_undoview_dirty_region_offset(void* self) {
    return QUndoView_DirtyRegionOffset((QUndoView*)self);
}

QPoint* q_undoview_qbase_dirty_region_offset(void* self) {
    return QUndoView_QBaseDirtyRegionOffset((QUndoView*)self);
}

void q_undoview_on_dirty_region_offset(void* self, QPoint* (*callback)()) {
    QUndoView_OnDirtyRegionOffset((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_start_auto_scroll(void* self) {
    QUndoView_StartAutoScroll((QUndoView*)self);
}

void q_undoview_qbase_start_auto_scroll(void* self) {
    QUndoView_QBaseStartAutoScroll((QUndoView*)self);
}

void q_undoview_on_start_auto_scroll(void* self, void (*callback)()) {
    QUndoView_OnStartAutoScroll((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_stop_auto_scroll(void* self) {
    QUndoView_StopAutoScroll((QUndoView*)self);
}

void q_undoview_qbase_stop_auto_scroll(void* self) {
    QUndoView_QBaseStopAutoScroll((QUndoView*)self);
}

void q_undoview_on_stop_auto_scroll(void* self, void (*callback)()) {
    QUndoView_OnStopAutoScroll((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_do_auto_scroll(void* self) {
    QUndoView_DoAutoScroll((QUndoView*)self);
}

void q_undoview_qbase_do_auto_scroll(void* self) {
    QUndoView_QBaseDoAutoScroll((QUndoView*)self);
}

void q_undoview_on_do_auto_scroll(void* self, void (*callback)()) {
    QUndoView_OnDoAutoScroll((QUndoView*)self, (intptr_t)callback);
}

int32_t q_undoview_drop_indicator_position(void* self) {
    return QUndoView_DropIndicatorPosition((QUndoView*)self);
}

int32_t q_undoview_qbase_drop_indicator_position(void* self) {
    return QUndoView_QBaseDropIndicatorPosition((QUndoView*)self);
}

void q_undoview_on_drop_indicator_position(void* self, int32_t (*callback)()) {
    QUndoView_OnDropIndicatorPosition((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QUndoView_SetViewportMargins((QUndoView*)self, left, top, right, bottom);
}

void q_undoview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QUndoView_QBaseSetViewportMargins((QUndoView*)self, left, top, right, bottom);
}

void q_undoview_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int)) {
    QUndoView_OnSetViewportMargins((QUndoView*)self, (intptr_t)callback);
}

QMargins* q_undoview_viewport_margins(void* self) {
    return QUndoView_ViewportMargins((QUndoView*)self);
}

QMargins* q_undoview_qbase_viewport_margins(void* self) {
    return QUndoView_QBaseViewportMargins((QUndoView*)self);
}

void q_undoview_on_viewport_margins(void* self, QMargins* (*callback)()) {
    QUndoView_OnViewportMargins((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_draw_frame(void* self, void* param1) {
    QUndoView_DrawFrame((QUndoView*)self, (QPainter*)param1);
}

void q_undoview_qbase_draw_frame(void* self, void* param1) {
    QUndoView_QBaseDrawFrame((QUndoView*)self, (QPainter*)param1);
}

void q_undoview_on_draw_frame(void* self, void (*callback)(void*, void*)) {
    QUndoView_OnDrawFrame((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_update_micro_focus(void* self) {
    QUndoView_UpdateMicroFocus((QUndoView*)self);
}

void q_undoview_qbase_update_micro_focus(void* self) {
    QUndoView_QBaseUpdateMicroFocus((QUndoView*)self);
}

void q_undoview_on_update_micro_focus(void* self, void (*callback)()) {
    QUndoView_OnUpdateMicroFocus((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_create(void* self) {
    QUndoView_Create((QUndoView*)self);
}

void q_undoview_qbase_create(void* self) {
    QUndoView_QBaseCreate((QUndoView*)self);
}

void q_undoview_on_create(void* self, void (*callback)()) {
    QUndoView_OnCreate((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_destroy(void* self) {
    QUndoView_Destroy((QUndoView*)self);
}

void q_undoview_qbase_destroy(void* self) {
    QUndoView_QBaseDestroy((QUndoView*)self);
}

void q_undoview_on_destroy(void* self, void (*callback)()) {
    QUndoView_OnDestroy((QUndoView*)self, (intptr_t)callback);
}

bool q_undoview_focus_next_child(void* self) {
    return QUndoView_FocusNextChild((QUndoView*)self);
}

bool q_undoview_qbase_focus_next_child(void* self) {
    return QUndoView_QBaseFocusNextChild((QUndoView*)self);
}

void q_undoview_on_focus_next_child(void* self, bool (*callback)()) {
    QUndoView_OnFocusNextChild((QUndoView*)self, (intptr_t)callback);
}

bool q_undoview_focus_previous_child(void* self) {
    return QUndoView_FocusPreviousChild((QUndoView*)self);
}

bool q_undoview_qbase_focus_previous_child(void* self) {
    return QUndoView_QBaseFocusPreviousChild((QUndoView*)self);
}

void q_undoview_on_focus_previous_child(void* self, bool (*callback)()) {
    QUndoView_OnFocusPreviousChild((QUndoView*)self, (intptr_t)callback);
}

QObject* q_undoview_sender(void* self) {
    return QUndoView_Sender((QUndoView*)self);
}

QObject* q_undoview_qbase_sender(void* self) {
    return QUndoView_QBaseSender((QUndoView*)self);
}

void q_undoview_on_sender(void* self, QObject* (*callback)()) {
    QUndoView_OnSender((QUndoView*)self, (intptr_t)callback);
}

int32_t q_undoview_sender_signal_index(void* self) {
    return QUndoView_SenderSignalIndex((QUndoView*)self);
}

int32_t q_undoview_qbase_sender_signal_index(void* self) {
    return QUndoView_QBaseSenderSignalIndex((QUndoView*)self);
}

void q_undoview_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QUndoView_OnSenderSignalIndex((QUndoView*)self, (intptr_t)callback);
}

int32_t q_undoview_receivers(void* self, const char* signal) {
    return QUndoView_Receivers((QUndoView*)self, signal);
}

int32_t q_undoview_qbase_receivers(void* self, const char* signal) {
    return QUndoView_QBaseReceivers((QUndoView*)self, signal);
}

void q_undoview_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QUndoView_OnReceivers((QUndoView*)self, (intptr_t)callback);
}

bool q_undoview_is_signal_connected(void* self, void* signal) {
    return QUndoView_IsSignalConnected((QUndoView*)self, (QMetaMethod*)signal);
}

bool q_undoview_qbase_is_signal_connected(void* self, void* signal) {
    return QUndoView_QBaseIsSignalConnected((QUndoView*)self, (QMetaMethod*)signal);
}

void q_undoview_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QUndoView_OnIsSignalConnected((QUndoView*)self, (intptr_t)callback);
}

double q_undoview_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QUndoView_GetDecodedMetricF((QUndoView*)self, metricA, metricB);
}

double q_undoview_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QUndoView_QBaseGetDecodedMetricF((QUndoView*)self, metricA, metricB);
}

void q_undoview_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QUndoView_OnGetDecodedMetricF((QUndoView*)self, (intptr_t)callback);
}

void q_undoview_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_undoview_delete(void* self) {
    QUndoView_Delete((QUndoView*)(self));
}
