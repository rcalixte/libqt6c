#include "../libqabstractitemdelegate.hpp"
#include "../libqabstractitemmodel.hpp"
#include "../libqabstractitemview.hpp"
#include "../libqabstractscrollarea.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqframe.hpp"
#include "../libqitemselectionmodel.hpp"
#include "../libqlistview.hpp"
#include "../libqmargins.hpp"
#include "../libqmenu.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "../libqregion.hpp"
#include "../libqsize.hpp"
#include "../libqstyleoption.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkfileplacesview.hpp"
#include "libkfileplacesview.h"

KFilePlacesView* k_fileplacesview_new(void* parent) {
    return KFilePlacesView_new((QWidget*)parent);
}

KFilePlacesView* k_fileplacesview_new2() {
    return KFilePlacesView_new2();
}

const QMetaObject* k_fileplacesview_meta_object(void* self) {
    return KFilePlacesView_MetaObject((KFilePlacesView*)self);
}

void* k_fileplacesview_metacast(void* self, const char* param1) {
    return KFilePlacesView_Metacast((KFilePlacesView*)self, param1);
}

int32_t k_fileplacesview_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KFilePlacesView_Metacall((KFilePlacesView*)self, param1, param2, param3);
}

void k_fileplacesview_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KFilePlacesView_OnMetacall((KFilePlacesView*)self, (intptr_t)callback);
}

int32_t k_fileplacesview_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KFilePlacesView_QBaseMetacall((KFilePlacesView*)self, param1, param2, param3);
}

const char* k_fileplacesview_tr(const char* s) {
    libqt_string _str = KFilePlacesView_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_fileplacesview_all_places_shown(void* self) {
    return KFilePlacesView_AllPlacesShown((KFilePlacesView*)self);
}

void k_fileplacesview_set_drop_on_place_enabled(void* self, bool enabled) {
    KFilePlacesView_SetDropOnPlaceEnabled((KFilePlacesView*)self, enabled);
}

bool k_fileplacesview_is_drop_on_place_enabled(void* self) {
    return KFilePlacesView_IsDropOnPlaceEnabled((KFilePlacesView*)self);
}

void k_fileplacesview_set_drag_auto_activation_delay(void* self, int delay) {
    KFilePlacesView_SetDragAutoActivationDelay((KFilePlacesView*)self, delay);
}

int32_t k_fileplacesview_drag_auto_activation_delay(void* self) {
    return KFilePlacesView_DragAutoActivationDelay((KFilePlacesView*)self);
}

void k_fileplacesview_set_auto_resize_items_enabled(void* self, bool enabled) {
    KFilePlacesView_SetAutoResizeItemsEnabled((KFilePlacesView*)self, enabled);
}

bool k_fileplacesview_is_auto_resize_items_enabled(void* self) {
    return KFilePlacesView_IsAutoResizeItemsEnabled((KFilePlacesView*)self);
}

QSize* k_fileplacesview_size_hint(void* self) {
    return KFilePlacesView_SizeHint((KFilePlacesView*)self);
}

void k_fileplacesview_on_size_hint(void* self, QSize* (*callback)()) {
    KFilePlacesView_OnSizeHint((KFilePlacesView*)self, (intptr_t)callback);
}

QSize* k_fileplacesview_qbase_size_hint(void* self) {
    return KFilePlacesView_QBaseSizeHint((KFilePlacesView*)self);
}

void k_fileplacesview_set_url(void* self, void* url) {
    KFilePlacesView_SetUrl((KFilePlacesView*)self, (QUrl*)url);
}

void k_fileplacesview_set_show_all(void* self, bool showAll) {
    KFilePlacesView_SetShowAll((KFilePlacesView*)self, showAll);
}

void k_fileplacesview_set_model(void* self, void* model) {
    KFilePlacesView_SetModel((KFilePlacesView*)self, (QAbstractItemModel*)model);
}

void k_fileplacesview_on_set_model(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnSetModel((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_qbase_set_model(void* self, void* model) {
    KFilePlacesView_QBaseSetModel((KFilePlacesView*)self, (QAbstractItemModel*)model);
}

void k_fileplacesview_key_press_event(void* self, void* event) {
    KFilePlacesView_KeyPressEvent((KFilePlacesView*)self, (QKeyEvent*)event);
}

void k_fileplacesview_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnKeyPressEvent((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_qbase_key_press_event(void* self, void* event) {
    KFilePlacesView_QBaseKeyPressEvent((KFilePlacesView*)self, (QKeyEvent*)event);
}

void k_fileplacesview_context_menu_event(void* self, void* event) {
    KFilePlacesView_ContextMenuEvent((KFilePlacesView*)self, (QContextMenuEvent*)event);
}

void k_fileplacesview_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnContextMenuEvent((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_qbase_context_menu_event(void* self, void* event) {
    KFilePlacesView_QBaseContextMenuEvent((KFilePlacesView*)self, (QContextMenuEvent*)event);
}

void k_fileplacesview_resize_event(void* self, void* event) {
    KFilePlacesView_ResizeEvent((KFilePlacesView*)self, (QResizeEvent*)event);
}

void k_fileplacesview_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnResizeEvent((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_qbase_resize_event(void* self, void* event) {
    KFilePlacesView_QBaseResizeEvent((KFilePlacesView*)self, (QResizeEvent*)event);
}

void k_fileplacesview_show_event(void* self, void* event) {
    KFilePlacesView_ShowEvent((KFilePlacesView*)self, (QShowEvent*)event);
}

void k_fileplacesview_on_show_event(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnShowEvent((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_qbase_show_event(void* self, void* event) {
    KFilePlacesView_QBaseShowEvent((KFilePlacesView*)self, (QShowEvent*)event);
}

void k_fileplacesview_hide_event(void* self, void* event) {
    KFilePlacesView_HideEvent((KFilePlacesView*)self, (QHideEvent*)event);
}

void k_fileplacesview_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnHideEvent((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_qbase_hide_event(void* self, void* event) {
    KFilePlacesView_QBaseHideEvent((KFilePlacesView*)self, (QHideEvent*)event);
}

void k_fileplacesview_drag_enter_event(void* self, void* event) {
    KFilePlacesView_DragEnterEvent((KFilePlacesView*)self, (QDragEnterEvent*)event);
}

void k_fileplacesview_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnDragEnterEvent((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_qbase_drag_enter_event(void* self, void* event) {
    KFilePlacesView_QBaseDragEnterEvent((KFilePlacesView*)self, (QDragEnterEvent*)event);
}

void k_fileplacesview_drag_leave_event(void* self, void* event) {
    KFilePlacesView_DragLeaveEvent((KFilePlacesView*)self, (QDragLeaveEvent*)event);
}

void k_fileplacesview_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnDragLeaveEvent((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_qbase_drag_leave_event(void* self, void* event) {
    KFilePlacesView_QBaseDragLeaveEvent((KFilePlacesView*)self, (QDragLeaveEvent*)event);
}

void k_fileplacesview_drag_move_event(void* self, void* event) {
    KFilePlacesView_DragMoveEvent((KFilePlacesView*)self, (QDragMoveEvent*)event);
}

void k_fileplacesview_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnDragMoveEvent((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_qbase_drag_move_event(void* self, void* event) {
    KFilePlacesView_QBaseDragMoveEvent((KFilePlacesView*)self, (QDragMoveEvent*)event);
}

void k_fileplacesview_drop_event(void* self, void* event) {
    KFilePlacesView_DropEvent((KFilePlacesView*)self, (QDropEvent*)event);
}

void k_fileplacesview_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnDropEvent((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_qbase_drop_event(void* self, void* event) {
    KFilePlacesView_QBaseDropEvent((KFilePlacesView*)self, (QDropEvent*)event);
}

void k_fileplacesview_paint_event(void* self, void* event) {
    KFilePlacesView_PaintEvent((KFilePlacesView*)self, (QPaintEvent*)event);
}

void k_fileplacesview_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnPaintEvent((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_qbase_paint_event(void* self, void* event) {
    KFilePlacesView_QBasePaintEvent((KFilePlacesView*)self, (QPaintEvent*)event);
}

void k_fileplacesview_start_drag(void* self, int32_t supportedActions) {
    KFilePlacesView_StartDrag((KFilePlacesView*)self, supportedActions);
}

void k_fileplacesview_on_start_drag(void* self, void (*callback)(void*, int32_t)) {
    KFilePlacesView_OnStartDrag((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_qbase_start_drag(void* self, int32_t supportedActions) {
    KFilePlacesView_QBaseStartDrag((KFilePlacesView*)self, supportedActions);
}

void k_fileplacesview_mouse_press_event(void* self, void* event) {
    KFilePlacesView_MousePressEvent((KFilePlacesView*)self, (QMouseEvent*)event);
}

void k_fileplacesview_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnMousePressEvent((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_qbase_mouse_press_event(void* self, void* event) {
    KFilePlacesView_QBaseMousePressEvent((KFilePlacesView*)self, (QMouseEvent*)event);
}

void k_fileplacesview_rows_inserted(void* self, void* parent, int start, int end) {
    KFilePlacesView_RowsInserted((KFilePlacesView*)self, (QModelIndex*)parent, start, end);
}

void k_fileplacesview_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    KFilePlacesView_OnRowsInserted((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_qbase_rows_inserted(void* self, void* parent, int start, int end) {
    KFilePlacesView_QBaseRowsInserted((KFilePlacesView*)self, (QModelIndex*)parent, start, end);
}

void k_fileplacesview_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles) {
    KFilePlacesView_DataChanged((KFilePlacesView*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void k_fileplacesview_on_data_changed(void* self, void (*callback)(void*, void*, void*, int*)) {
    KFilePlacesView_OnDataChanged((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_qbase_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list roles) {
    KFilePlacesView_QBaseDataChanged((KFilePlacesView*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void k_fileplacesview_place_activated(void* self, void* url) {
    KFilePlacesView_PlaceActivated((KFilePlacesView*)self, (QUrl*)url);
}

void k_fileplacesview_on_place_activated(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_Connect_PlaceActivated((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_tab_requested(void* self, void* url) {
    KFilePlacesView_TabRequested((KFilePlacesView*)self, (QUrl*)url);
}

void k_fileplacesview_on_tab_requested(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_Connect_TabRequested((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_active_tab_requested(void* self, void* url) {
    KFilePlacesView_ActiveTabRequested((KFilePlacesView*)self, (QUrl*)url);
}

void k_fileplacesview_on_active_tab_requested(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_Connect_ActiveTabRequested((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_new_window_requested(void* self, void* url) {
    KFilePlacesView_NewWindowRequested((KFilePlacesView*)self, (QUrl*)url);
}

void k_fileplacesview_on_new_window_requested(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_Connect_NewWindowRequested((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_context_menu_about_to_show(void* self, void* index, void* menu) {
    KFilePlacesView_ContextMenuAboutToShow((KFilePlacesView*)self, (QModelIndex*)index, (QMenu*)menu);
}

void k_fileplacesview_on_context_menu_about_to_show(void* self, void (*callback)(void*, void*, void*)) {
    KFilePlacesView_Connect_ContextMenuAboutToShow((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_all_places_shown_changed(void* self, bool allPlacesShown) {
    KFilePlacesView_AllPlacesShownChanged((KFilePlacesView*)self, allPlacesShown);
}

void k_fileplacesview_on_all_places_shown_changed(void* self, void (*callback)(void*, bool)) {
    KFilePlacesView_Connect_AllPlacesShownChanged((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_url_changed(void* self, void* url) {
    KFilePlacesView_UrlChanged((KFilePlacesView*)self, (QUrl*)url);
}

void k_fileplacesview_on_url_changed(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_Connect_UrlChanged((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_urls_dropped(void* self, void* dest, void* event, void* parent) {
    KFilePlacesView_UrlsDropped((KFilePlacesView*)self, (QUrl*)dest, (QDropEvent*)event, (QWidget*)parent);
}

void k_fileplacesview_on_urls_dropped(void* self, void (*callback)(void*, void*, void*, void*)) {
    KFilePlacesView_Connect_UrlsDropped((KFilePlacesView*)self, (intptr_t)callback);
}

const char* k_fileplacesview_tr2(const char* s, const char* c) {
    libqt_string _str = KFilePlacesView_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_fileplacesview_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KFilePlacesView_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fileplacesview_set_movement(void* self, int32_t movement) {
    QListView_SetMovement((QListView*)self, movement);
}

int32_t k_fileplacesview_movement(void* self) {
    return QListView_Movement((QListView*)self);
}

void k_fileplacesview_set_flow(void* self, int32_t flow) {
    QListView_SetFlow((QListView*)self, flow);
}

int32_t k_fileplacesview_flow(void* self) {
    return QListView_Flow((QListView*)self);
}

void k_fileplacesview_set_wrapping(void* self, bool enable) {
    QListView_SetWrapping((QListView*)self, enable);
}

bool k_fileplacesview_is_wrapping(void* self) {
    return QListView_IsWrapping((QListView*)self);
}

void k_fileplacesview_set_resize_mode(void* self, int32_t mode) {
    QListView_SetResizeMode((QListView*)self, mode);
}

int32_t k_fileplacesview_resize_mode(void* self) {
    return QListView_ResizeMode((QListView*)self);
}

void k_fileplacesview_set_layout_mode(void* self, int32_t mode) {
    QListView_SetLayoutMode((QListView*)self, mode);
}

int32_t k_fileplacesview_layout_mode(void* self) {
    return QListView_LayoutMode((QListView*)self);
}

void k_fileplacesview_set_spacing(void* self, int space) {
    QListView_SetSpacing((QListView*)self, space);
}

int32_t k_fileplacesview_spacing(void* self) {
    return QListView_Spacing((QListView*)self);
}

void k_fileplacesview_set_batch_size(void* self, int batchSize) {
    QListView_SetBatchSize((QListView*)self, batchSize);
}

int32_t k_fileplacesview_batch_size(void* self) {
    return QListView_BatchSize((QListView*)self);
}

void k_fileplacesview_set_grid_size(void* self, void* size) {
    QListView_SetGridSize((QListView*)self, (QSize*)size);
}

QSize* k_fileplacesview_grid_size(void* self) {
    return QListView_GridSize((QListView*)self);
}

void k_fileplacesview_set_view_mode(void* self, int32_t mode) {
    QListView_SetViewMode((QListView*)self, mode);
}

int32_t k_fileplacesview_view_mode(void* self) {
    return QListView_ViewMode((QListView*)self);
}

void k_fileplacesview_clear_property_flags(void* self) {
    QListView_ClearPropertyFlags((QListView*)self);
}

bool k_fileplacesview_is_row_hidden(void* self, int row) {
    return QListView_IsRowHidden((QListView*)self, row);
}

void k_fileplacesview_set_row_hidden(void* self, int row, bool hide) {
    QListView_SetRowHidden((QListView*)self, row, hide);
}

void k_fileplacesview_set_model_column(void* self, int column) {
    QListView_SetModelColumn((QListView*)self, column);
}

int32_t k_fileplacesview_model_column(void* self) {
    return QListView_ModelColumn((QListView*)self);
}

void k_fileplacesview_set_uniform_item_sizes(void* self, bool enable) {
    QListView_SetUniformItemSizes((QListView*)self, enable);
}

bool k_fileplacesview_uniform_item_sizes(void* self) {
    return QListView_UniformItemSizes((QListView*)self);
}

void k_fileplacesview_set_word_wrap(void* self, bool on) {
    QListView_SetWordWrap((QListView*)self, on);
}

bool k_fileplacesview_word_wrap(void* self) {
    return QListView_WordWrap((QListView*)self);
}

void k_fileplacesview_set_selection_rect_visible(void* self, bool show) {
    QListView_SetSelectionRectVisible((QListView*)self, show);
}

bool k_fileplacesview_is_selection_rect_visible(void* self) {
    return QListView_IsSelectionRectVisible((QListView*)self);
}

void k_fileplacesview_set_item_alignment(void* self, int32_t alignment) {
    QListView_SetItemAlignment((QListView*)self, alignment);
}

int32_t k_fileplacesview_item_alignment(void* self) {
    return QListView_ItemAlignment((QListView*)self);
}

void k_fileplacesview_indexes_moved(void* self, libqt_list indexes) {
    QListView_IndexesMoved((QListView*)self, indexes);
}

void k_fileplacesview_on_indexes_moved(void* self, void (*callback)(void*, QModelIndex**)) {
    QListView_Connect_IndexesMoved((QListView*)self, (intptr_t)callback);
}

QAbstractItemModel* k_fileplacesview_model(void* self) {
    return QAbstractItemView_Model((QAbstractItemView*)self);
}

QItemSelectionModel* k_fileplacesview_selection_model(void* self) {
    return QAbstractItemView_SelectionModel((QAbstractItemView*)self);
}

void k_fileplacesview_set_item_delegate(void* self, void* delegate) {
    QAbstractItemView_SetItemDelegate((QAbstractItemView*)self, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* k_fileplacesview_item_delegate(void* self) {
    return QAbstractItemView_ItemDelegate((QAbstractItemView*)self);
}

void k_fileplacesview_set_selection_mode(void* self, int32_t mode) {
    QAbstractItemView_SetSelectionMode((QAbstractItemView*)self, mode);
}

int32_t k_fileplacesview_selection_mode(void* self) {
    return QAbstractItemView_SelectionMode((QAbstractItemView*)self);
}

void k_fileplacesview_set_selection_behavior(void* self, int32_t behavior) {
    QAbstractItemView_SetSelectionBehavior((QAbstractItemView*)self, behavior);
}

int32_t k_fileplacesview_selection_behavior(void* self) {
    return QAbstractItemView_SelectionBehavior((QAbstractItemView*)self);
}

QModelIndex* k_fileplacesview_current_index(void* self) {
    return QAbstractItemView_CurrentIndex((QAbstractItemView*)self);
}

QModelIndex* k_fileplacesview_root_index(void* self) {
    return QAbstractItemView_RootIndex((QAbstractItemView*)self);
}

void k_fileplacesview_set_edit_triggers(void* self, int32_t triggers) {
    QAbstractItemView_SetEditTriggers((QAbstractItemView*)self, triggers);
}

int32_t k_fileplacesview_edit_triggers(void* self) {
    return QAbstractItemView_EditTriggers((QAbstractItemView*)self);
}

void k_fileplacesview_set_vertical_scroll_mode(void* self, int32_t mode) {
    QAbstractItemView_SetVerticalScrollMode((QAbstractItemView*)self, mode);
}

int32_t k_fileplacesview_vertical_scroll_mode(void* self) {
    return QAbstractItemView_VerticalScrollMode((QAbstractItemView*)self);
}

void k_fileplacesview_reset_vertical_scroll_mode(void* self) {
    QAbstractItemView_ResetVerticalScrollMode((QAbstractItemView*)self);
}

void k_fileplacesview_set_horizontal_scroll_mode(void* self, int32_t mode) {
    QAbstractItemView_SetHorizontalScrollMode((QAbstractItemView*)self, mode);
}

int32_t k_fileplacesview_horizontal_scroll_mode(void* self) {
    return QAbstractItemView_HorizontalScrollMode((QAbstractItemView*)self);
}

void k_fileplacesview_reset_horizontal_scroll_mode(void* self) {
    QAbstractItemView_ResetHorizontalScrollMode((QAbstractItemView*)self);
}

void k_fileplacesview_set_auto_scroll(void* self, bool enable) {
    QAbstractItemView_SetAutoScroll((QAbstractItemView*)self, enable);
}

bool k_fileplacesview_has_auto_scroll(void* self) {
    return QAbstractItemView_HasAutoScroll((QAbstractItemView*)self);
}

void k_fileplacesview_set_auto_scroll_margin(void* self, int margin) {
    QAbstractItemView_SetAutoScrollMargin((QAbstractItemView*)self, margin);
}

int32_t k_fileplacesview_auto_scroll_margin(void* self) {
    return QAbstractItemView_AutoScrollMargin((QAbstractItemView*)self);
}

void k_fileplacesview_set_tab_key_navigation(void* self, bool enable) {
    QAbstractItemView_SetTabKeyNavigation((QAbstractItemView*)self, enable);
}

bool k_fileplacesview_tab_key_navigation(void* self) {
    return QAbstractItemView_TabKeyNavigation((QAbstractItemView*)self);
}

void k_fileplacesview_set_drop_indicator_shown(void* self, bool enable) {
    QAbstractItemView_SetDropIndicatorShown((QAbstractItemView*)self, enable);
}

bool k_fileplacesview_show_drop_indicator(void* self) {
    return QAbstractItemView_ShowDropIndicator((QAbstractItemView*)self);
}

void k_fileplacesview_set_drag_enabled(void* self, bool enable) {
    QAbstractItemView_SetDragEnabled((QAbstractItemView*)self, enable);
}

bool k_fileplacesview_drag_enabled(void* self) {
    return QAbstractItemView_DragEnabled((QAbstractItemView*)self);
}

void k_fileplacesview_set_drag_drop_overwrite_mode(void* self, bool overwrite) {
    QAbstractItemView_SetDragDropOverwriteMode((QAbstractItemView*)self, overwrite);
}

bool k_fileplacesview_drag_drop_overwrite_mode(void* self) {
    return QAbstractItemView_DragDropOverwriteMode((QAbstractItemView*)self);
}

void k_fileplacesview_set_drag_drop_mode(void* self, int32_t behavior) {
    QAbstractItemView_SetDragDropMode((QAbstractItemView*)self, behavior);
}

int32_t k_fileplacesview_drag_drop_mode(void* self) {
    return QAbstractItemView_DragDropMode((QAbstractItemView*)self);
}

void k_fileplacesview_set_default_drop_action(void* self, int32_t dropAction) {
    QAbstractItemView_SetDefaultDropAction((QAbstractItemView*)self, dropAction);
}

int32_t k_fileplacesview_default_drop_action(void* self) {
    return QAbstractItemView_DefaultDropAction((QAbstractItemView*)self);
}

void k_fileplacesview_set_alternating_row_colors(void* self, bool enable) {
    QAbstractItemView_SetAlternatingRowColors((QAbstractItemView*)self, enable);
}

bool k_fileplacesview_alternating_row_colors(void* self) {
    return QAbstractItemView_AlternatingRowColors((QAbstractItemView*)self);
}

void k_fileplacesview_set_icon_size(void* self, void* size) {
    QAbstractItemView_SetIconSize((QAbstractItemView*)self, (QSize*)size);
}

QSize* k_fileplacesview_icon_size(void* self) {
    return QAbstractItemView_IconSize((QAbstractItemView*)self);
}

void k_fileplacesview_set_text_elide_mode(void* self, int32_t mode) {
    QAbstractItemView_SetTextElideMode((QAbstractItemView*)self, mode);
}

int32_t k_fileplacesview_text_elide_mode(void* self) {
    return QAbstractItemView_TextElideMode((QAbstractItemView*)self);
}

QSize* k_fileplacesview_size_hint_for_index(void* self, void* index) {
    return QAbstractItemView_SizeHintForIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_fileplacesview_open_persistent_editor(void* self, void* index) {
    QAbstractItemView_OpenPersistentEditor((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_fileplacesview_close_persistent_editor(void* self, void* index) {
    QAbstractItemView_ClosePersistentEditor((QAbstractItemView*)self, (QModelIndex*)index);
}

bool k_fileplacesview_is_persistent_editor_open(void* self, void* index) {
    return QAbstractItemView_IsPersistentEditorOpen((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_fileplacesview_set_index_widget(void* self, void* index, void* widget) {
    QAbstractItemView_SetIndexWidget((QAbstractItemView*)self, (QModelIndex*)index, (QWidget*)widget);
}

QWidget* k_fileplacesview_index_widget(void* self, void* index) {
    return QAbstractItemView_IndexWidget((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_fileplacesview_set_item_delegate_for_row(void* self, int row, void* delegate) {
    QAbstractItemView_SetItemDelegateForRow((QAbstractItemView*)self, row, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* k_fileplacesview_item_delegate_for_row(void* self, int row) {
    return QAbstractItemView_ItemDelegateForRow((QAbstractItemView*)self, row);
}

void k_fileplacesview_set_item_delegate_for_column(void* self, int column, void* delegate) {
    QAbstractItemView_SetItemDelegateForColumn((QAbstractItemView*)self, column, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* k_fileplacesview_item_delegate_for_column(void* self, int column) {
    return QAbstractItemView_ItemDelegateForColumn((QAbstractItemView*)self, column);
}

QAbstractItemDelegate* k_fileplacesview_item_delegate2(void* self, void* index) {
    return QAbstractItemView_ItemDelegate2((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_fileplacesview_edit(void* self, void* index) {
    QAbstractItemView_Edit((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_fileplacesview_clear_selection(void* self) {
    QAbstractItemView_ClearSelection((QAbstractItemView*)self);
}

void k_fileplacesview_set_current_index(void* self, void* index) {
    QAbstractItemView_SetCurrentIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_fileplacesview_scroll_to_top(void* self) {
    QAbstractItemView_ScrollToTop((QAbstractItemView*)self);
}

void k_fileplacesview_scroll_to_bottom(void* self) {
    QAbstractItemView_ScrollToBottom((QAbstractItemView*)self);
}

void k_fileplacesview_update(void* self, void* index) {
    QAbstractItemView_Update((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_fileplacesview_pressed(void* self, void* index) {
    QAbstractItemView_Pressed((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_fileplacesview_on_pressed(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Pressed((QAbstractItemView*)self, (intptr_t)callback);
}

void k_fileplacesview_clicked(void* self, void* index) {
    QAbstractItemView_Clicked((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_fileplacesview_on_clicked(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Clicked((QAbstractItemView*)self, (intptr_t)callback);
}

void k_fileplacesview_double_clicked(void* self, void* index) {
    QAbstractItemView_DoubleClicked((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_fileplacesview_on_double_clicked(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_DoubleClicked((QAbstractItemView*)self, (intptr_t)callback);
}

void k_fileplacesview_activated(void* self, void* index) {
    QAbstractItemView_Activated((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_fileplacesview_on_activated(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Activated((QAbstractItemView*)self, (intptr_t)callback);
}

void k_fileplacesview_entered(void* self, void* index) {
    QAbstractItemView_Entered((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_fileplacesview_on_entered(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Entered((QAbstractItemView*)self, (intptr_t)callback);
}

void k_fileplacesview_viewport_entered(void* self) {
    QAbstractItemView_ViewportEntered((QAbstractItemView*)self);
}

void k_fileplacesview_on_viewport_entered(void* self, void (*callback)(void*)) {
    QAbstractItemView_Connect_ViewportEntered((QAbstractItemView*)self, (intptr_t)callback);
}

void k_fileplacesview_icon_size_changed(void* self, void* size) {
    QAbstractItemView_IconSizeChanged((QAbstractItemView*)self, (QSize*)size);
}

void k_fileplacesview_on_icon_size_changed(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_IconSizeChanged((QAbstractItemView*)self, (intptr_t)callback);
}

int32_t k_fileplacesview_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

void k_fileplacesview_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

QScrollBar* k_fileplacesview_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

void k_fileplacesview_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

int32_t k_fileplacesview_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

void k_fileplacesview_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

QScrollBar* k_fileplacesview_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

void k_fileplacesview_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

QWidget* k_fileplacesview_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

void k_fileplacesview_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

void k_fileplacesview_add_scroll_bar_widget(void* self, void* widget, int32_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

libqt_list /* of QWidget* */ k_fileplacesview_scroll_bar_widgets(void* self, int32_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

QWidget* k_fileplacesview_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

void k_fileplacesview_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

QSize* k_fileplacesview_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

int32_t k_fileplacesview_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

void k_fileplacesview_set_size_adjust_policy(void* self, int32_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

int32_t k_fileplacesview_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void k_fileplacesview_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t k_fileplacesview_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int32_t k_fileplacesview_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void k_fileplacesview_set_frame_shape(void* self, int32_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int32_t k_fileplacesview_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void k_fileplacesview_set_frame_shadow(void* self, int32_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t k_fileplacesview_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void k_fileplacesview_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t k_fileplacesview_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void k_fileplacesview_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* k_fileplacesview_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void k_fileplacesview_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t k_fileplacesview_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_fileplacesview_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_fileplacesview_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_fileplacesview_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_fileplacesview_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_fileplacesview_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_fileplacesview_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_fileplacesview_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_fileplacesview_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_fileplacesview_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_fileplacesview_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_fileplacesview_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_fileplacesview_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_fileplacesview_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_fileplacesview_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_fileplacesview_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_fileplacesview_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_fileplacesview_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_fileplacesview_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_fileplacesview_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_fileplacesview_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_fileplacesview_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_fileplacesview_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_fileplacesview_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_fileplacesview_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_fileplacesview_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_fileplacesview_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_fileplacesview_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_fileplacesview_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_fileplacesview_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_fileplacesview_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_fileplacesview_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_fileplacesview_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_fileplacesview_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_fileplacesview_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_fileplacesview_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_fileplacesview_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_fileplacesview_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_fileplacesview_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_fileplacesview_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_fileplacesview_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_fileplacesview_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_fileplacesview_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_fileplacesview_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_fileplacesview_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_fileplacesview_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_fileplacesview_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_fileplacesview_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_fileplacesview_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_fileplacesview_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_fileplacesview_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_fileplacesview_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_fileplacesview_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_fileplacesview_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_fileplacesview_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_fileplacesview_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_fileplacesview_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_fileplacesview_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_fileplacesview_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_fileplacesview_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_fileplacesview_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_fileplacesview_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_fileplacesview_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_fileplacesview_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_fileplacesview_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_fileplacesview_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_fileplacesview_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_fileplacesview_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_fileplacesview_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_fileplacesview_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_fileplacesview_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_fileplacesview_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_fileplacesview_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_fileplacesview_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_fileplacesview_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_fileplacesview_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_fileplacesview_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_fileplacesview_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_fileplacesview_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_fileplacesview_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_fileplacesview_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_fileplacesview_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_fileplacesview_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_fileplacesview_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_fileplacesview_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_fileplacesview_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_fileplacesview_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_fileplacesview_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_fileplacesview_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_fileplacesview_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_fileplacesview_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_fileplacesview_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_fileplacesview_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_fileplacesview_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_fileplacesview_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_fileplacesview_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_fileplacesview_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_fileplacesview_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_fileplacesview_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_fileplacesview_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_fileplacesview_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fileplacesview_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_fileplacesview_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_fileplacesview_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_fileplacesview_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fileplacesview_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_fileplacesview_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fileplacesview_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_fileplacesview_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fileplacesview_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_fileplacesview_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_fileplacesview_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_fileplacesview_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_fileplacesview_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fileplacesview_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_fileplacesview_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_fileplacesview_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_fileplacesview_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fileplacesview_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_fileplacesview_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_fileplacesview_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fileplacesview_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_fileplacesview_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fileplacesview_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_fileplacesview_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_fileplacesview_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_fileplacesview_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_fileplacesview_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_fileplacesview_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_fileplacesview_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_fileplacesview_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_fileplacesview_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_fileplacesview_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_fileplacesview_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_fileplacesview_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_fileplacesview_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_fileplacesview_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_fileplacesview_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_fileplacesview_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_fileplacesview_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_fileplacesview_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_fileplacesview_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_fileplacesview_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_fileplacesview_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_fileplacesview_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_fileplacesview_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_fileplacesview_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_fileplacesview_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_fileplacesview_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_fileplacesview_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_fileplacesview_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_fileplacesview_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_fileplacesview_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_fileplacesview_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_fileplacesview_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_fileplacesview_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_fileplacesview_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_fileplacesview_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_fileplacesview_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_fileplacesview_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_fileplacesview_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_fileplacesview_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_fileplacesview_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_fileplacesview_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_fileplacesview_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_fileplacesview_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_fileplacesview_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_fileplacesview_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_fileplacesview_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_fileplacesview_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_fileplacesview_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_fileplacesview_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_fileplacesview_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_fileplacesview_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_fileplacesview_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_fileplacesview_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_fileplacesview_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_fileplacesview_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_fileplacesview_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_fileplacesview_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_fileplacesview_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_fileplacesview_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_fileplacesview_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_fileplacesview_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_fileplacesview_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_fileplacesview_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_fileplacesview_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_fileplacesview_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_fileplacesview_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_fileplacesview_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_fileplacesview_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_fileplacesview_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_fileplacesview_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_fileplacesview_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_fileplacesview_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_fileplacesview_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_fileplacesview_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_fileplacesview_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_fileplacesview_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_fileplacesview_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_fileplacesview_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_fileplacesview_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_fileplacesview_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_fileplacesview_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_fileplacesview_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_fileplacesview_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_fileplacesview_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_fileplacesview_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_fileplacesview_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_fileplacesview_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_fileplacesview_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_fileplacesview_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_fileplacesview_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_fileplacesview_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_fileplacesview_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_fileplacesview_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_fileplacesview_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_fileplacesview_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_fileplacesview_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_fileplacesview_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_fileplacesview_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_fileplacesview_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_fileplacesview_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_fileplacesview_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_fileplacesview_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_fileplacesview_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_fileplacesview_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t k_fileplacesview_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_fileplacesview_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_fileplacesview_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t k_fileplacesview_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_fileplacesview_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_fileplacesview_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_fileplacesview_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_fileplacesview_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_fileplacesview_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_fileplacesview_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_fileplacesview_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_fileplacesview_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_fileplacesview_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_fileplacesview_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_fileplacesview_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_fileplacesview_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_fileplacesview_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_fileplacesview_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_fileplacesview_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_fileplacesview_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_fileplacesview_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_fileplacesview_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_fileplacesview_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_fileplacesview_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_fileplacesview_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_fileplacesview_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_fileplacesview_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_fileplacesview_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_fileplacesview_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_fileplacesview_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_fileplacesview_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_fileplacesview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_fileplacesview_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_fileplacesview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_fileplacesview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_fileplacesview_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_fileplacesview_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_fileplacesview_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_fileplacesview_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_fileplacesview_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_fileplacesview_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_fileplacesview_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_fileplacesview_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_fileplacesview_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_fileplacesview_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fileplacesview_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_fileplacesview_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_fileplacesview_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_fileplacesview_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_fileplacesview_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_fileplacesview_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_fileplacesview_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_fileplacesview_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_fileplacesview_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_fileplacesview_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_fileplacesview_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_fileplacesview_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_fileplacesview_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_fileplacesview_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_fileplacesview_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_fileplacesview_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_fileplacesview_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_fileplacesview_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_fileplacesview_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_fileplacesview_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_fileplacesview_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_fileplacesview_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_fileplacesview_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_fileplacesview_dynamic_property_names");
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

QBindingStorage* k_fileplacesview_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_fileplacesview_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_fileplacesview_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_fileplacesview_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_fileplacesview_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_fileplacesview_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_fileplacesview_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_fileplacesview_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_fileplacesview_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_fileplacesview_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_fileplacesview_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_fileplacesview_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_fileplacesview_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_fileplacesview_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_fileplacesview_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_fileplacesview_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_fileplacesview_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_fileplacesview_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_fileplacesview_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_fileplacesview_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_fileplacesview_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_fileplacesview_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_fileplacesview_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_fileplacesview_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_fileplacesview_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_fileplacesview_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QRect* k_fileplacesview_visual_rect(void* self, void* index) {
    return KFilePlacesView_VisualRect((KFilePlacesView*)self, (QModelIndex*)index);
}

QRect* k_fileplacesview_qbase_visual_rect(void* self, void* index) {
    return KFilePlacesView_QBaseVisualRect((KFilePlacesView*)self, (QModelIndex*)index);
}

void k_fileplacesview_on_visual_rect(void* self, QRect* (*callback)(void*, void*)) {
    KFilePlacesView_OnVisualRect((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_scroll_to(void* self, void* index, int32_t hint) {
    KFilePlacesView_ScrollTo((KFilePlacesView*)self, (QModelIndex*)index, hint);
}

void k_fileplacesview_qbase_scroll_to(void* self, void* index, int32_t hint) {
    KFilePlacesView_QBaseScrollTo((KFilePlacesView*)self, (QModelIndex*)index, hint);
}

void k_fileplacesview_on_scroll_to(void* self, void (*callback)(void*, void*, int32_t)) {
    KFilePlacesView_OnScrollTo((KFilePlacesView*)self, (intptr_t)callback);
}

QModelIndex* k_fileplacesview_index_at(void* self, void* p) {
    return KFilePlacesView_IndexAt((KFilePlacesView*)self, (QPoint*)p);
}

QModelIndex* k_fileplacesview_qbase_index_at(void* self, void* p) {
    return KFilePlacesView_QBaseIndexAt((KFilePlacesView*)self, (QPoint*)p);
}

void k_fileplacesview_on_index_at(void* self, QModelIndex* (*callback)(void*, void*)) {
    KFilePlacesView_OnIndexAt((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_do_items_layout(void* self) {
    KFilePlacesView_DoItemsLayout((KFilePlacesView*)self);
}

void k_fileplacesview_qbase_do_items_layout(void* self) {
    KFilePlacesView_QBaseDoItemsLayout((KFilePlacesView*)self);
}

void k_fileplacesview_on_do_items_layout(void* self, void (*callback)()) {
    KFilePlacesView_OnDoItemsLayout((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_reset(void* self) {
    KFilePlacesView_Reset((KFilePlacesView*)self);
}

void k_fileplacesview_qbase_reset(void* self) {
    KFilePlacesView_QBaseReset((KFilePlacesView*)self);
}

void k_fileplacesview_on_reset(void* self, void (*callback)()) {
    KFilePlacesView_OnReset((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_set_root_index(void* self, void* index) {
    KFilePlacesView_SetRootIndex((KFilePlacesView*)self, (QModelIndex*)index);
}

void k_fileplacesview_qbase_set_root_index(void* self, void* index) {
    KFilePlacesView_QBaseSetRootIndex((KFilePlacesView*)self, (QModelIndex*)index);
}

void k_fileplacesview_on_set_root_index(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnSetRootIndex((KFilePlacesView*)self, (intptr_t)callback);
}

bool k_fileplacesview_event(void* self, void* e) {
    return KFilePlacesView_Event((KFilePlacesView*)self, (QEvent*)e);
}

bool k_fileplacesview_qbase_event(void* self, void* e) {
    return KFilePlacesView_QBaseEvent((KFilePlacesView*)self, (QEvent*)e);
}

void k_fileplacesview_on_event(void* self, bool (*callback)(void*, void*)) {
    KFilePlacesView_OnEvent((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_scroll_contents_by(void* self, int dx, int dy) {
    KFilePlacesView_ScrollContentsBy((KFilePlacesView*)self, dx, dy);
}

void k_fileplacesview_qbase_scroll_contents_by(void* self, int dx, int dy) {
    KFilePlacesView_QBaseScrollContentsBy((KFilePlacesView*)self, dx, dy);
}

void k_fileplacesview_on_scroll_contents_by(void* self, void (*callback)(void*, int, int)) {
    KFilePlacesView_OnScrollContentsBy((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    KFilePlacesView_RowsAboutToBeRemoved((KFilePlacesView*)self, (QModelIndex*)parent, start, end);
}

void k_fileplacesview_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    KFilePlacesView_QBaseRowsAboutToBeRemoved((KFilePlacesView*)self, (QModelIndex*)parent, start, end);
}

void k_fileplacesview_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    KFilePlacesView_OnRowsAboutToBeRemoved((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_mouse_move_event(void* self, void* e) {
    KFilePlacesView_MouseMoveEvent((KFilePlacesView*)self, (QMouseEvent*)e);
}

void k_fileplacesview_qbase_mouse_move_event(void* self, void* e) {
    KFilePlacesView_QBaseMouseMoveEvent((KFilePlacesView*)self, (QMouseEvent*)e);
}

void k_fileplacesview_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnMouseMoveEvent((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_mouse_release_event(void* self, void* e) {
    KFilePlacesView_MouseReleaseEvent((KFilePlacesView*)self, (QMouseEvent*)e);
}

void k_fileplacesview_qbase_mouse_release_event(void* self, void* e) {
    KFilePlacesView_QBaseMouseReleaseEvent((KFilePlacesView*)self, (QMouseEvent*)e);
}

void k_fileplacesview_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnMouseReleaseEvent((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_wheel_event(void* self, void* e) {
    KFilePlacesView_WheelEvent((KFilePlacesView*)self, (QWheelEvent*)e);
}

void k_fileplacesview_qbase_wheel_event(void* self, void* e) {
    KFilePlacesView_QBaseWheelEvent((KFilePlacesView*)self, (QWheelEvent*)e);
}

void k_fileplacesview_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnWheelEvent((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_timer_event(void* self, void* e) {
    KFilePlacesView_TimerEvent((KFilePlacesView*)self, (QTimerEvent*)e);
}

void k_fileplacesview_qbase_timer_event(void* self, void* e) {
    KFilePlacesView_QBaseTimerEvent((KFilePlacesView*)self, (QTimerEvent*)e);
}

void k_fileplacesview_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnTimerEvent((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_init_view_item_option(void* self, void* option) {
    KFilePlacesView_InitViewItemOption((KFilePlacesView*)self, (QStyleOptionViewItem*)option);
}

void k_fileplacesview_qbase_init_view_item_option(void* self, void* option) {
    KFilePlacesView_QBaseInitViewItemOption((KFilePlacesView*)self, (QStyleOptionViewItem*)option);
}

void k_fileplacesview_on_init_view_item_option(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnInitViewItemOption((KFilePlacesView*)self, (intptr_t)callback);
}

int32_t k_fileplacesview_horizontal_offset(void* self) {
    return KFilePlacesView_HorizontalOffset((KFilePlacesView*)self);
}

int32_t k_fileplacesview_qbase_horizontal_offset(void* self) {
    return KFilePlacesView_QBaseHorizontalOffset((KFilePlacesView*)self);
}

void k_fileplacesview_on_horizontal_offset(void* self, int32_t (*callback)()) {
    KFilePlacesView_OnHorizontalOffset((KFilePlacesView*)self, (intptr_t)callback);
}

int32_t k_fileplacesview_vertical_offset(void* self) {
    return KFilePlacesView_VerticalOffset((KFilePlacesView*)self);
}

int32_t k_fileplacesview_qbase_vertical_offset(void* self) {
    return KFilePlacesView_QBaseVerticalOffset((KFilePlacesView*)self);
}

void k_fileplacesview_on_vertical_offset(void* self, int32_t (*callback)()) {
    KFilePlacesView_OnVerticalOffset((KFilePlacesView*)self, (intptr_t)callback);
}

QModelIndex* k_fileplacesview_move_cursor(void* self, int32_t cursorAction, int64_t modifiers) {
    return KFilePlacesView_MoveCursor((KFilePlacesView*)self, cursorAction, modifiers);
}

QModelIndex* k_fileplacesview_qbase_move_cursor(void* self, int32_t cursorAction, int64_t modifiers) {
    return KFilePlacesView_QBaseMoveCursor((KFilePlacesView*)self, cursorAction, modifiers);
}

void k_fileplacesview_on_move_cursor(void* self, QModelIndex* (*callback)(void*, int32_t, int64_t)) {
    KFilePlacesView_OnMoveCursor((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_set_selection(void* self, void* rect, int32_t command) {
    KFilePlacesView_SetSelection((KFilePlacesView*)self, (QRect*)rect, command);
}

void k_fileplacesview_qbase_set_selection(void* self, void* rect, int32_t command) {
    KFilePlacesView_QBaseSetSelection((KFilePlacesView*)self, (QRect*)rect, command);
}

void k_fileplacesview_on_set_selection(void* self, void (*callback)(void*, void*, int32_t)) {
    KFilePlacesView_OnSetSelection((KFilePlacesView*)self, (intptr_t)callback);
}

QRegion* k_fileplacesview_visual_region_for_selection(void* self, void* selection) {
    return KFilePlacesView_VisualRegionForSelection((KFilePlacesView*)self, (QItemSelection*)selection);
}

QRegion* k_fileplacesview_qbase_visual_region_for_selection(void* self, void* selection) {
    return KFilePlacesView_QBaseVisualRegionForSelection((KFilePlacesView*)self, (QItemSelection*)selection);
}

void k_fileplacesview_on_visual_region_for_selection(void* self, QRegion* (*callback)(void*, void*)) {
    KFilePlacesView_OnVisualRegionForSelection((KFilePlacesView*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_fileplacesview_selected_indexes(void* self) {
    libqt_list _arr = KFilePlacesView_SelectedIndexes((KFilePlacesView*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_fileplacesview_qbase_selected_indexes(void* self) {
    libqt_list _arr = KFilePlacesView_QBaseSelectedIndexes((KFilePlacesView*)self);
    return _arr;
}

void k_fileplacesview_on_selected_indexes(void* self, QModelIndex** (*callback)()) {
    KFilePlacesView_OnSelectedIndexes((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_update_geometries(void* self) {
    KFilePlacesView_UpdateGeometries((KFilePlacesView*)self);
}

void k_fileplacesview_qbase_update_geometries(void* self) {
    KFilePlacesView_QBaseUpdateGeometries((KFilePlacesView*)self);
}

void k_fileplacesview_on_update_geometries(void* self, void (*callback)()) {
    KFilePlacesView_OnUpdateGeometries((KFilePlacesView*)self, (intptr_t)callback);
}

bool k_fileplacesview_is_index_hidden(void* self, void* index) {
    return KFilePlacesView_IsIndexHidden((KFilePlacesView*)self, (QModelIndex*)index);
}

bool k_fileplacesview_qbase_is_index_hidden(void* self, void* index) {
    return KFilePlacesView_QBaseIsIndexHidden((KFilePlacesView*)self, (QModelIndex*)index);
}

void k_fileplacesview_on_is_index_hidden(void* self, bool (*callback)(void*, void*)) {
    KFilePlacesView_OnIsIndexHidden((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_selection_changed(void* self, void* selected, void* deselected) {
    KFilePlacesView_SelectionChanged((KFilePlacesView*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

void k_fileplacesview_qbase_selection_changed(void* self, void* selected, void* deselected) {
    KFilePlacesView_QBaseSelectionChanged((KFilePlacesView*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

void k_fileplacesview_on_selection_changed(void* self, void (*callback)(void*, void*, void*)) {
    KFilePlacesView_OnSelectionChanged((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_current_changed(void* self, void* current, void* previous) {
    KFilePlacesView_CurrentChanged((KFilePlacesView*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

void k_fileplacesview_qbase_current_changed(void* self, void* current, void* previous) {
    KFilePlacesView_QBaseCurrentChanged((KFilePlacesView*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

void k_fileplacesview_on_current_changed(void* self, void (*callback)(void*, void*, void*)) {
    KFilePlacesView_OnCurrentChanged((KFilePlacesView*)self, (intptr_t)callback);
}

QSize* k_fileplacesview_viewport_size_hint(void* self) {
    return KFilePlacesView_ViewportSizeHint((KFilePlacesView*)self);
}

QSize* k_fileplacesview_qbase_viewport_size_hint(void* self) {
    return KFilePlacesView_QBaseViewportSizeHint((KFilePlacesView*)self);
}

void k_fileplacesview_on_viewport_size_hint(void* self, QSize* (*callback)()) {
    KFilePlacesView_OnViewportSizeHint((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_set_selection_model(void* self, void* selectionModel) {
    KFilePlacesView_SetSelectionModel((KFilePlacesView*)self, (QItemSelectionModel*)selectionModel);
}

void k_fileplacesview_qbase_set_selection_model(void* self, void* selectionModel) {
    KFilePlacesView_QBaseSetSelectionModel((KFilePlacesView*)self, (QItemSelectionModel*)selectionModel);
}

void k_fileplacesview_on_set_selection_model(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnSetSelectionModel((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_keyboard_search(void* self, const char* search) {
    KFilePlacesView_KeyboardSearch((KFilePlacesView*)self, qstring(search));
}

void k_fileplacesview_qbase_keyboard_search(void* self, const char* search) {
    KFilePlacesView_QBaseKeyboardSearch((KFilePlacesView*)self, qstring(search));
}

void k_fileplacesview_on_keyboard_search(void* self, void (*callback)(void*, const char*)) {
    KFilePlacesView_OnKeyboardSearch((KFilePlacesView*)self, (intptr_t)callback);
}

int32_t k_fileplacesview_size_hint_for_row(void* self, int row) {
    return KFilePlacesView_SizeHintForRow((KFilePlacesView*)self, row);
}

int32_t k_fileplacesview_qbase_size_hint_for_row(void* self, int row) {
    return KFilePlacesView_QBaseSizeHintForRow((KFilePlacesView*)self, row);
}

void k_fileplacesview_on_size_hint_for_row(void* self, int32_t (*callback)(void*, int)) {
    KFilePlacesView_OnSizeHintForRow((KFilePlacesView*)self, (intptr_t)callback);
}

int32_t k_fileplacesview_size_hint_for_column(void* self, int column) {
    return KFilePlacesView_SizeHintForColumn((KFilePlacesView*)self, column);
}

int32_t k_fileplacesview_qbase_size_hint_for_column(void* self, int column) {
    return KFilePlacesView_QBaseSizeHintForColumn((KFilePlacesView*)self, column);
}

void k_fileplacesview_on_size_hint_for_column(void* self, int32_t (*callback)(void*, int)) {
    KFilePlacesView_OnSizeHintForColumn((KFilePlacesView*)self, (intptr_t)callback);
}

QAbstractItemDelegate* k_fileplacesview_item_delegate_for_index(void* self, void* index) {
    return KFilePlacesView_ItemDelegateForIndex((KFilePlacesView*)self, (QModelIndex*)index);
}

QAbstractItemDelegate* k_fileplacesview_qbase_item_delegate_for_index(void* self, void* index) {
    return KFilePlacesView_QBaseItemDelegateForIndex((KFilePlacesView*)self, (QModelIndex*)index);
}

void k_fileplacesview_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*callback)(void*, void*)) {
    KFilePlacesView_OnItemDelegateForIndex((KFilePlacesView*)self, (intptr_t)callback);
}

QVariant* k_fileplacesview_input_method_query(void* self, int64_t query) {
    return KFilePlacesView_InputMethodQuery((KFilePlacesView*)self, query);
}

QVariant* k_fileplacesview_qbase_input_method_query(void* self, int64_t query) {
    return KFilePlacesView_QBaseInputMethodQuery((KFilePlacesView*)self, query);
}

void k_fileplacesview_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KFilePlacesView_OnInputMethodQuery((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_select_all(void* self) {
    KFilePlacesView_SelectAll((KFilePlacesView*)self);
}

void k_fileplacesview_qbase_select_all(void* self) {
    KFilePlacesView_QBaseSelectAll((KFilePlacesView*)self);
}

void k_fileplacesview_on_select_all(void* self, void (*callback)()) {
    KFilePlacesView_OnSelectAll((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_update_editor_data(void* self) {
    KFilePlacesView_UpdateEditorData((KFilePlacesView*)self);
}

void k_fileplacesview_qbase_update_editor_data(void* self) {
    KFilePlacesView_QBaseUpdateEditorData((KFilePlacesView*)self);
}

void k_fileplacesview_on_update_editor_data(void* self, void (*callback)()) {
    KFilePlacesView_OnUpdateEditorData((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_update_editor_geometries(void* self) {
    KFilePlacesView_UpdateEditorGeometries((KFilePlacesView*)self);
}

void k_fileplacesview_qbase_update_editor_geometries(void* self) {
    KFilePlacesView_QBaseUpdateEditorGeometries((KFilePlacesView*)self);
}

void k_fileplacesview_on_update_editor_geometries(void* self, void (*callback)()) {
    KFilePlacesView_OnUpdateEditorGeometries((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_vertical_scrollbar_action(void* self, int action) {
    KFilePlacesView_VerticalScrollbarAction((KFilePlacesView*)self, action);
}

void k_fileplacesview_qbase_vertical_scrollbar_action(void* self, int action) {
    KFilePlacesView_QBaseVerticalScrollbarAction((KFilePlacesView*)self, action);
}

void k_fileplacesview_on_vertical_scrollbar_action(void* self, void (*callback)(void*, int)) {
    KFilePlacesView_OnVerticalScrollbarAction((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_horizontal_scrollbar_action(void* self, int action) {
    KFilePlacesView_HorizontalScrollbarAction((KFilePlacesView*)self, action);
}

void k_fileplacesview_qbase_horizontal_scrollbar_action(void* self, int action) {
    KFilePlacesView_QBaseHorizontalScrollbarAction((KFilePlacesView*)self, action);
}

void k_fileplacesview_on_horizontal_scrollbar_action(void* self, void (*callback)(void*, int)) {
    KFilePlacesView_OnHorizontalScrollbarAction((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_vertical_scrollbar_value_changed(void* self, int value) {
    KFilePlacesView_VerticalScrollbarValueChanged((KFilePlacesView*)self, value);
}

void k_fileplacesview_qbase_vertical_scrollbar_value_changed(void* self, int value) {
    KFilePlacesView_QBaseVerticalScrollbarValueChanged((KFilePlacesView*)self, value);
}

void k_fileplacesview_on_vertical_scrollbar_value_changed(void* self, void (*callback)(void*, int)) {
    KFilePlacesView_OnVerticalScrollbarValueChanged((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_horizontal_scrollbar_value_changed(void* self, int value) {
    KFilePlacesView_HorizontalScrollbarValueChanged((KFilePlacesView*)self, value);
}

void k_fileplacesview_qbase_horizontal_scrollbar_value_changed(void* self, int value) {
    KFilePlacesView_QBaseHorizontalScrollbarValueChanged((KFilePlacesView*)self, value);
}

void k_fileplacesview_on_horizontal_scrollbar_value_changed(void* self, void (*callback)(void*, int)) {
    KFilePlacesView_OnHorizontalScrollbarValueChanged((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_close_editor(void* self, void* editor, int32_t hint) {
    KFilePlacesView_CloseEditor((KFilePlacesView*)self, (QWidget*)editor, hint);
}

void k_fileplacesview_qbase_close_editor(void* self, void* editor, int32_t hint) {
    KFilePlacesView_QBaseCloseEditor((KFilePlacesView*)self, (QWidget*)editor, hint);
}

void k_fileplacesview_on_close_editor(void* self, void (*callback)(void*, void*, int32_t)) {
    KFilePlacesView_OnCloseEditor((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_commit_data(void* self, void* editor) {
    KFilePlacesView_CommitData((KFilePlacesView*)self, (QWidget*)editor);
}

void k_fileplacesview_qbase_commit_data(void* self, void* editor) {
    KFilePlacesView_QBaseCommitData((KFilePlacesView*)self, (QWidget*)editor);
}

void k_fileplacesview_on_commit_data(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnCommitData((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_editor_destroyed(void* self, void* editor) {
    KFilePlacesView_EditorDestroyed((KFilePlacesView*)self, (QObject*)editor);
}

void k_fileplacesview_qbase_editor_destroyed(void* self, void* editor) {
    KFilePlacesView_QBaseEditorDestroyed((KFilePlacesView*)self, (QObject*)editor);
}

void k_fileplacesview_on_editor_destroyed(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnEditorDestroyed((KFilePlacesView*)self, (intptr_t)callback);
}

bool k_fileplacesview_edit2(void* self, void* index, int32_t trigger, void* event) {
    return KFilePlacesView_Edit2((KFilePlacesView*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

bool k_fileplacesview_qbase_edit2(void* self, void* index, int32_t trigger, void* event) {
    return KFilePlacesView_QBaseEdit2((KFilePlacesView*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

void k_fileplacesview_on_edit2(void* self, bool (*callback)(void*, void*, int32_t, void*)) {
    KFilePlacesView_OnEdit2((KFilePlacesView*)self, (intptr_t)callback);
}

int32_t k_fileplacesview_selection_command(void* self, void* index, void* event) {
    return KFilePlacesView_SelectionCommand((KFilePlacesView*)self, (QModelIndex*)index, (QEvent*)event);
}

int32_t k_fileplacesview_qbase_selection_command(void* self, void* index, void* event) {
    return KFilePlacesView_QBaseSelectionCommand((KFilePlacesView*)self, (QModelIndex*)index, (QEvent*)event);
}

void k_fileplacesview_on_selection_command(void* self, int32_t (*callback)(void*, void*, void*)) {
    KFilePlacesView_OnSelectionCommand((KFilePlacesView*)self, (intptr_t)callback);
}

bool k_fileplacesview_focus_next_prev_child(void* self, bool next) {
    return KFilePlacesView_FocusNextPrevChild((KFilePlacesView*)self, next);
}

bool k_fileplacesview_qbase_focus_next_prev_child(void* self, bool next) {
    return KFilePlacesView_QBaseFocusNextPrevChild((KFilePlacesView*)self, next);
}

void k_fileplacesview_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KFilePlacesView_OnFocusNextPrevChild((KFilePlacesView*)self, (intptr_t)callback);
}

bool k_fileplacesview_viewport_event(void* self, void* event) {
    return KFilePlacesView_ViewportEvent((KFilePlacesView*)self, (QEvent*)event);
}

bool k_fileplacesview_qbase_viewport_event(void* self, void* event) {
    return KFilePlacesView_QBaseViewportEvent((KFilePlacesView*)self, (QEvent*)event);
}

void k_fileplacesview_on_viewport_event(void* self, bool (*callback)(void*, void*)) {
    KFilePlacesView_OnViewportEvent((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_mouse_double_click_event(void* self, void* event) {
    KFilePlacesView_MouseDoubleClickEvent((KFilePlacesView*)self, (QMouseEvent*)event);
}

void k_fileplacesview_qbase_mouse_double_click_event(void* self, void* event) {
    KFilePlacesView_QBaseMouseDoubleClickEvent((KFilePlacesView*)self, (QMouseEvent*)event);
}

void k_fileplacesview_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnMouseDoubleClickEvent((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_focus_in_event(void* self, void* event) {
    KFilePlacesView_FocusInEvent((KFilePlacesView*)self, (QFocusEvent*)event);
}

void k_fileplacesview_qbase_focus_in_event(void* self, void* event) {
    KFilePlacesView_QBaseFocusInEvent((KFilePlacesView*)self, (QFocusEvent*)event);
}

void k_fileplacesview_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnFocusInEvent((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_focus_out_event(void* self, void* event) {
    KFilePlacesView_FocusOutEvent((KFilePlacesView*)self, (QFocusEvent*)event);
}

void k_fileplacesview_qbase_focus_out_event(void* self, void* event) {
    KFilePlacesView_QBaseFocusOutEvent((KFilePlacesView*)self, (QFocusEvent*)event);
}

void k_fileplacesview_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnFocusOutEvent((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_input_method_event(void* self, void* event) {
    KFilePlacesView_InputMethodEvent((KFilePlacesView*)self, (QInputMethodEvent*)event);
}

void k_fileplacesview_qbase_input_method_event(void* self, void* event) {
    KFilePlacesView_QBaseInputMethodEvent((KFilePlacesView*)self, (QInputMethodEvent*)event);
}

void k_fileplacesview_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnInputMethodEvent((KFilePlacesView*)self, (intptr_t)callback);
}

bool k_fileplacesview_event_filter(void* self, void* object, void* event) {
    return KFilePlacesView_EventFilter((KFilePlacesView*)self, (QObject*)object, (QEvent*)event);
}

bool k_fileplacesview_qbase_event_filter(void* self, void* object, void* event) {
    return KFilePlacesView_QBaseEventFilter((KFilePlacesView*)self, (QObject*)object, (QEvent*)event);
}

void k_fileplacesview_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KFilePlacesView_OnEventFilter((KFilePlacesView*)self, (intptr_t)callback);
}

QSize* k_fileplacesview_minimum_size_hint(void* self) {
    return KFilePlacesView_MinimumSizeHint((KFilePlacesView*)self);
}

QSize* k_fileplacesview_qbase_minimum_size_hint(void* self) {
    return KFilePlacesView_QBaseMinimumSizeHint((KFilePlacesView*)self);
}

void k_fileplacesview_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KFilePlacesView_OnMinimumSizeHint((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_setup_viewport(void* self, void* viewport) {
    KFilePlacesView_SetupViewport((KFilePlacesView*)self, (QWidget*)viewport);
}

void k_fileplacesview_qbase_setup_viewport(void* self, void* viewport) {
    KFilePlacesView_QBaseSetupViewport((KFilePlacesView*)self, (QWidget*)viewport);
}

void k_fileplacesview_on_setup_viewport(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnSetupViewport((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_change_event(void* self, void* param1) {
    KFilePlacesView_ChangeEvent((KFilePlacesView*)self, (QEvent*)param1);
}

void k_fileplacesview_qbase_change_event(void* self, void* param1) {
    KFilePlacesView_QBaseChangeEvent((KFilePlacesView*)self, (QEvent*)param1);
}

void k_fileplacesview_on_change_event(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnChangeEvent((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_init_style_option(void* self, void* option) {
    KFilePlacesView_InitStyleOption((KFilePlacesView*)self, (QStyleOptionFrame*)option);
}

void k_fileplacesview_qbase_init_style_option(void* self, void* option) {
    KFilePlacesView_QBaseInitStyleOption((KFilePlacesView*)self, (QStyleOptionFrame*)option);
}

void k_fileplacesview_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnInitStyleOption((KFilePlacesView*)self, (intptr_t)callback);
}

int32_t k_fileplacesview_dev_type(void* self) {
    return KFilePlacesView_DevType((KFilePlacesView*)self);
}

int32_t k_fileplacesview_qbase_dev_type(void* self) {
    return KFilePlacesView_QBaseDevType((KFilePlacesView*)self);
}

void k_fileplacesview_on_dev_type(void* self, int32_t (*callback)()) {
    KFilePlacesView_OnDevType((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_set_visible(void* self, bool visible) {
    KFilePlacesView_SetVisible((KFilePlacesView*)self, visible);
}

void k_fileplacesview_qbase_set_visible(void* self, bool visible) {
    KFilePlacesView_QBaseSetVisible((KFilePlacesView*)self, visible);
}

void k_fileplacesview_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KFilePlacesView_OnSetVisible((KFilePlacesView*)self, (intptr_t)callback);
}

int32_t k_fileplacesview_height_for_width(void* self, int param1) {
    return KFilePlacesView_HeightForWidth((KFilePlacesView*)self, param1);
}

int32_t k_fileplacesview_qbase_height_for_width(void* self, int param1) {
    return KFilePlacesView_QBaseHeightForWidth((KFilePlacesView*)self, param1);
}

void k_fileplacesview_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KFilePlacesView_OnHeightForWidth((KFilePlacesView*)self, (intptr_t)callback);
}

bool k_fileplacesview_has_height_for_width(void* self) {
    return KFilePlacesView_HasHeightForWidth((KFilePlacesView*)self);
}

bool k_fileplacesview_qbase_has_height_for_width(void* self) {
    return KFilePlacesView_QBaseHasHeightForWidth((KFilePlacesView*)self);
}

void k_fileplacesview_on_has_height_for_width(void* self, bool (*callback)()) {
    KFilePlacesView_OnHasHeightForWidth((KFilePlacesView*)self, (intptr_t)callback);
}

QPaintEngine* k_fileplacesview_paint_engine(void* self) {
    return KFilePlacesView_PaintEngine((KFilePlacesView*)self);
}

QPaintEngine* k_fileplacesview_qbase_paint_engine(void* self) {
    return KFilePlacesView_QBasePaintEngine((KFilePlacesView*)self);
}

void k_fileplacesview_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KFilePlacesView_OnPaintEngine((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_key_release_event(void* self, void* event) {
    KFilePlacesView_KeyReleaseEvent((KFilePlacesView*)self, (QKeyEvent*)event);
}

void k_fileplacesview_qbase_key_release_event(void* self, void* event) {
    KFilePlacesView_QBaseKeyReleaseEvent((KFilePlacesView*)self, (QKeyEvent*)event);
}

void k_fileplacesview_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnKeyReleaseEvent((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_enter_event(void* self, void* event) {
    KFilePlacesView_EnterEvent((KFilePlacesView*)self, (QEnterEvent*)event);
}

void k_fileplacesview_qbase_enter_event(void* self, void* event) {
    KFilePlacesView_QBaseEnterEvent((KFilePlacesView*)self, (QEnterEvent*)event);
}

void k_fileplacesview_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnEnterEvent((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_leave_event(void* self, void* event) {
    KFilePlacesView_LeaveEvent((KFilePlacesView*)self, (QEvent*)event);
}

void k_fileplacesview_qbase_leave_event(void* self, void* event) {
    KFilePlacesView_QBaseLeaveEvent((KFilePlacesView*)self, (QEvent*)event);
}

void k_fileplacesview_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnLeaveEvent((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_move_event(void* self, void* event) {
    KFilePlacesView_MoveEvent((KFilePlacesView*)self, (QMoveEvent*)event);
}

void k_fileplacesview_qbase_move_event(void* self, void* event) {
    KFilePlacesView_QBaseMoveEvent((KFilePlacesView*)self, (QMoveEvent*)event);
}

void k_fileplacesview_on_move_event(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnMoveEvent((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_close_event(void* self, void* event) {
    KFilePlacesView_CloseEvent((KFilePlacesView*)self, (QCloseEvent*)event);
}

void k_fileplacesview_qbase_close_event(void* self, void* event) {
    KFilePlacesView_QBaseCloseEvent((KFilePlacesView*)self, (QCloseEvent*)event);
}

void k_fileplacesview_on_close_event(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnCloseEvent((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_tablet_event(void* self, void* event) {
    KFilePlacesView_TabletEvent((KFilePlacesView*)self, (QTabletEvent*)event);
}

void k_fileplacesview_qbase_tablet_event(void* self, void* event) {
    KFilePlacesView_QBaseTabletEvent((KFilePlacesView*)self, (QTabletEvent*)event);
}

void k_fileplacesview_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnTabletEvent((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_action_event(void* self, void* event) {
    KFilePlacesView_ActionEvent((KFilePlacesView*)self, (QActionEvent*)event);
}

void k_fileplacesview_qbase_action_event(void* self, void* event) {
    KFilePlacesView_QBaseActionEvent((KFilePlacesView*)self, (QActionEvent*)event);
}

void k_fileplacesview_on_action_event(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnActionEvent((KFilePlacesView*)self, (intptr_t)callback);
}

bool k_fileplacesview_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KFilePlacesView_NativeEvent((KFilePlacesView*)self, qstring(eventType), message, result);
}

bool k_fileplacesview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KFilePlacesView_QBaseNativeEvent((KFilePlacesView*)self, qstring(eventType), message, result);
}

void k_fileplacesview_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KFilePlacesView_OnNativeEvent((KFilePlacesView*)self, (intptr_t)callback);
}

int32_t k_fileplacesview_metric(void* self, int32_t param1) {
    return KFilePlacesView_Metric((KFilePlacesView*)self, param1);
}

int32_t k_fileplacesview_qbase_metric(void* self, int32_t param1) {
    return KFilePlacesView_QBaseMetric((KFilePlacesView*)self, param1);
}

void k_fileplacesview_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KFilePlacesView_OnMetric((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_init_painter(void* self, void* painter) {
    KFilePlacesView_InitPainter((KFilePlacesView*)self, (QPainter*)painter);
}

void k_fileplacesview_qbase_init_painter(void* self, void* painter) {
    KFilePlacesView_QBaseInitPainter((KFilePlacesView*)self, (QPainter*)painter);
}

void k_fileplacesview_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnInitPainter((KFilePlacesView*)self, (intptr_t)callback);
}

QPaintDevice* k_fileplacesview_redirected(void* self, void* offset) {
    return KFilePlacesView_Redirected((KFilePlacesView*)self, (QPoint*)offset);
}

QPaintDevice* k_fileplacesview_qbase_redirected(void* self, void* offset) {
    return KFilePlacesView_QBaseRedirected((KFilePlacesView*)self, (QPoint*)offset);
}

void k_fileplacesview_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KFilePlacesView_OnRedirected((KFilePlacesView*)self, (intptr_t)callback);
}

QPainter* k_fileplacesview_shared_painter(void* self) {
    return KFilePlacesView_SharedPainter((KFilePlacesView*)self);
}

QPainter* k_fileplacesview_qbase_shared_painter(void* self) {
    return KFilePlacesView_QBaseSharedPainter((KFilePlacesView*)self);
}

void k_fileplacesview_on_shared_painter(void* self, QPainter* (*callback)()) {
    KFilePlacesView_OnSharedPainter((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_child_event(void* self, void* event) {
    KFilePlacesView_ChildEvent((KFilePlacesView*)self, (QChildEvent*)event);
}

void k_fileplacesview_qbase_child_event(void* self, void* event) {
    KFilePlacesView_QBaseChildEvent((KFilePlacesView*)self, (QChildEvent*)event);
}

void k_fileplacesview_on_child_event(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnChildEvent((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_custom_event(void* self, void* event) {
    KFilePlacesView_CustomEvent((KFilePlacesView*)self, (QEvent*)event);
}

void k_fileplacesview_qbase_custom_event(void* self, void* event) {
    KFilePlacesView_QBaseCustomEvent((KFilePlacesView*)self, (QEvent*)event);
}

void k_fileplacesview_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnCustomEvent((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_connect_notify(void* self, void* signal) {
    KFilePlacesView_ConnectNotify((KFilePlacesView*)self, (QMetaMethod*)signal);
}

void k_fileplacesview_qbase_connect_notify(void* self, void* signal) {
    KFilePlacesView_QBaseConnectNotify((KFilePlacesView*)self, (QMetaMethod*)signal);
}

void k_fileplacesview_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnConnectNotify((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_disconnect_notify(void* self, void* signal) {
    KFilePlacesView_DisconnectNotify((KFilePlacesView*)self, (QMetaMethod*)signal);
}

void k_fileplacesview_qbase_disconnect_notify(void* self, void* signal) {
    KFilePlacesView_QBaseDisconnectNotify((KFilePlacesView*)self, (QMetaMethod*)signal);
}

void k_fileplacesview_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnDisconnectNotify((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_resize_contents(void* self, int width, int height) {
    KFilePlacesView_ResizeContents((KFilePlacesView*)self, width, height);
}

void k_fileplacesview_qbase_resize_contents(void* self, int width, int height) {
    KFilePlacesView_QBaseResizeContents((KFilePlacesView*)self, width, height);
}

void k_fileplacesview_on_resize_contents(void* self, void (*callback)(void*, int, int)) {
    KFilePlacesView_OnResizeContents((KFilePlacesView*)self, (intptr_t)callback);
}

QSize* k_fileplacesview_contents_size(void* self) {
    return KFilePlacesView_ContentsSize((KFilePlacesView*)self);
}

QSize* k_fileplacesview_qbase_contents_size(void* self) {
    return KFilePlacesView_QBaseContentsSize((KFilePlacesView*)self);
}

void k_fileplacesview_on_contents_size(void* self, QSize* (*callback)()) {
    KFilePlacesView_OnContentsSize((KFilePlacesView*)self, (intptr_t)callback);
}

QRect* k_fileplacesview_rect_for_index(void* self, void* index) {
    return KFilePlacesView_RectForIndex((KFilePlacesView*)self, (QModelIndex*)index);
}

QRect* k_fileplacesview_qbase_rect_for_index(void* self, void* index) {
    return KFilePlacesView_QBaseRectForIndex((KFilePlacesView*)self, (QModelIndex*)index);
}

void k_fileplacesview_on_rect_for_index(void* self, QRect* (*callback)(void*, void*)) {
    KFilePlacesView_OnRectForIndex((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_set_position_for_index(void* self, void* position, void* index) {
    KFilePlacesView_SetPositionForIndex((KFilePlacesView*)self, (QPoint*)position, (QModelIndex*)index);
}

void k_fileplacesview_qbase_set_position_for_index(void* self, void* position, void* index) {
    KFilePlacesView_QBaseSetPositionForIndex((KFilePlacesView*)self, (QPoint*)position, (QModelIndex*)index);
}

void k_fileplacesview_on_set_position_for_index(void* self, void (*callback)(void*, void*, void*)) {
    KFilePlacesView_OnSetPositionForIndex((KFilePlacesView*)self, (intptr_t)callback);
}

int32_t k_fileplacesview_state(void* self) {
    return KFilePlacesView_State((KFilePlacesView*)self);
}

int32_t k_fileplacesview_qbase_state(void* self) {
    return KFilePlacesView_QBaseState((KFilePlacesView*)self);
}

void k_fileplacesview_on_state(void* self, int32_t (*callback)()) {
    KFilePlacesView_OnState((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_set_state(void* self, int32_t state) {
    KFilePlacesView_SetState((KFilePlacesView*)self, state);
}

void k_fileplacesview_qbase_set_state(void* self, int32_t state) {
    KFilePlacesView_QBaseSetState((KFilePlacesView*)self, state);
}

void k_fileplacesview_on_set_state(void* self, void (*callback)(void*, int32_t)) {
    KFilePlacesView_OnSetState((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_schedule_delayed_items_layout(void* self) {
    KFilePlacesView_ScheduleDelayedItemsLayout((KFilePlacesView*)self);
}

void k_fileplacesview_qbase_schedule_delayed_items_layout(void* self) {
    KFilePlacesView_QBaseScheduleDelayedItemsLayout((KFilePlacesView*)self);
}

void k_fileplacesview_on_schedule_delayed_items_layout(void* self, void (*callback)()) {
    KFilePlacesView_OnScheduleDelayedItemsLayout((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_execute_delayed_items_layout(void* self) {
    KFilePlacesView_ExecuteDelayedItemsLayout((KFilePlacesView*)self);
}

void k_fileplacesview_qbase_execute_delayed_items_layout(void* self) {
    KFilePlacesView_QBaseExecuteDelayedItemsLayout((KFilePlacesView*)self);
}

void k_fileplacesview_on_execute_delayed_items_layout(void* self, void (*callback)()) {
    KFilePlacesView_OnExecuteDelayedItemsLayout((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_set_dirty_region(void* self, void* region) {
    KFilePlacesView_SetDirtyRegion((KFilePlacesView*)self, (QRegion*)region);
}

void k_fileplacesview_qbase_set_dirty_region(void* self, void* region) {
    KFilePlacesView_QBaseSetDirtyRegion((KFilePlacesView*)self, (QRegion*)region);
}

void k_fileplacesview_on_set_dirty_region(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnSetDirtyRegion((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_scroll_dirty_region(void* self, int dx, int dy) {
    KFilePlacesView_ScrollDirtyRegion((KFilePlacesView*)self, dx, dy);
}

void k_fileplacesview_qbase_scroll_dirty_region(void* self, int dx, int dy) {
    KFilePlacesView_QBaseScrollDirtyRegion((KFilePlacesView*)self, dx, dy);
}

void k_fileplacesview_on_scroll_dirty_region(void* self, void (*callback)(void*, int, int)) {
    KFilePlacesView_OnScrollDirtyRegion((KFilePlacesView*)self, (intptr_t)callback);
}

QPoint* k_fileplacesview_dirty_region_offset(void* self) {
    return KFilePlacesView_DirtyRegionOffset((KFilePlacesView*)self);
}

QPoint* k_fileplacesview_qbase_dirty_region_offset(void* self) {
    return KFilePlacesView_QBaseDirtyRegionOffset((KFilePlacesView*)self);
}

void k_fileplacesview_on_dirty_region_offset(void* self, QPoint* (*callback)()) {
    KFilePlacesView_OnDirtyRegionOffset((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_start_auto_scroll(void* self) {
    KFilePlacesView_StartAutoScroll((KFilePlacesView*)self);
}

void k_fileplacesview_qbase_start_auto_scroll(void* self) {
    KFilePlacesView_QBaseStartAutoScroll((KFilePlacesView*)self);
}

void k_fileplacesview_on_start_auto_scroll(void* self, void (*callback)()) {
    KFilePlacesView_OnStartAutoScroll((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_stop_auto_scroll(void* self) {
    KFilePlacesView_StopAutoScroll((KFilePlacesView*)self);
}

void k_fileplacesview_qbase_stop_auto_scroll(void* self) {
    KFilePlacesView_QBaseStopAutoScroll((KFilePlacesView*)self);
}

void k_fileplacesview_on_stop_auto_scroll(void* self, void (*callback)()) {
    KFilePlacesView_OnStopAutoScroll((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_do_auto_scroll(void* self) {
    KFilePlacesView_DoAutoScroll((KFilePlacesView*)self);
}

void k_fileplacesview_qbase_do_auto_scroll(void* self) {
    KFilePlacesView_QBaseDoAutoScroll((KFilePlacesView*)self);
}

void k_fileplacesview_on_do_auto_scroll(void* self, void (*callback)()) {
    KFilePlacesView_OnDoAutoScroll((KFilePlacesView*)self, (intptr_t)callback);
}

int32_t k_fileplacesview_drop_indicator_position(void* self) {
    return KFilePlacesView_DropIndicatorPosition((KFilePlacesView*)self);
}

int32_t k_fileplacesview_qbase_drop_indicator_position(void* self) {
    return KFilePlacesView_QBaseDropIndicatorPosition((KFilePlacesView*)self);
}

void k_fileplacesview_on_drop_indicator_position(void* self, int32_t (*callback)()) {
    KFilePlacesView_OnDropIndicatorPosition((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    KFilePlacesView_SetViewportMargins((KFilePlacesView*)self, left, top, right, bottom);
}

void k_fileplacesview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    KFilePlacesView_QBaseSetViewportMargins((KFilePlacesView*)self, left, top, right, bottom);
}

void k_fileplacesview_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int)) {
    KFilePlacesView_OnSetViewportMargins((KFilePlacesView*)self, (intptr_t)callback);
}

QMargins* k_fileplacesview_viewport_margins(void* self) {
    return KFilePlacesView_ViewportMargins((KFilePlacesView*)self);
}

QMargins* k_fileplacesview_qbase_viewport_margins(void* self) {
    return KFilePlacesView_QBaseViewportMargins((KFilePlacesView*)self);
}

void k_fileplacesview_on_viewport_margins(void* self, QMargins* (*callback)()) {
    KFilePlacesView_OnViewportMargins((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_draw_frame(void* self, void* param1) {
    KFilePlacesView_DrawFrame((KFilePlacesView*)self, (QPainter*)param1);
}

void k_fileplacesview_qbase_draw_frame(void* self, void* param1) {
    KFilePlacesView_QBaseDrawFrame((KFilePlacesView*)self, (QPainter*)param1);
}

void k_fileplacesview_on_draw_frame(void* self, void (*callback)(void*, void*)) {
    KFilePlacesView_OnDrawFrame((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_update_micro_focus(void* self) {
    KFilePlacesView_UpdateMicroFocus((KFilePlacesView*)self);
}

void k_fileplacesview_qbase_update_micro_focus(void* self) {
    KFilePlacesView_QBaseUpdateMicroFocus((KFilePlacesView*)self);
}

void k_fileplacesview_on_update_micro_focus(void* self, void (*callback)()) {
    KFilePlacesView_OnUpdateMicroFocus((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_create(void* self) {
    KFilePlacesView_Create((KFilePlacesView*)self);
}

void k_fileplacesview_qbase_create(void* self) {
    KFilePlacesView_QBaseCreate((KFilePlacesView*)self);
}

void k_fileplacesview_on_create(void* self, void (*callback)()) {
    KFilePlacesView_OnCreate((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_destroy(void* self) {
    KFilePlacesView_Destroy((KFilePlacesView*)self);
}

void k_fileplacesview_qbase_destroy(void* self) {
    KFilePlacesView_QBaseDestroy((KFilePlacesView*)self);
}

void k_fileplacesview_on_destroy(void* self, void (*callback)()) {
    KFilePlacesView_OnDestroy((KFilePlacesView*)self, (intptr_t)callback);
}

bool k_fileplacesview_focus_next_child(void* self) {
    return KFilePlacesView_FocusNextChild((KFilePlacesView*)self);
}

bool k_fileplacesview_qbase_focus_next_child(void* self) {
    return KFilePlacesView_QBaseFocusNextChild((KFilePlacesView*)self);
}

void k_fileplacesview_on_focus_next_child(void* self, bool (*callback)()) {
    KFilePlacesView_OnFocusNextChild((KFilePlacesView*)self, (intptr_t)callback);
}

bool k_fileplacesview_focus_previous_child(void* self) {
    return KFilePlacesView_FocusPreviousChild((KFilePlacesView*)self);
}

bool k_fileplacesview_qbase_focus_previous_child(void* self) {
    return KFilePlacesView_QBaseFocusPreviousChild((KFilePlacesView*)self);
}

void k_fileplacesview_on_focus_previous_child(void* self, bool (*callback)()) {
    KFilePlacesView_OnFocusPreviousChild((KFilePlacesView*)self, (intptr_t)callback);
}

QObject* k_fileplacesview_sender(void* self) {
    return KFilePlacesView_Sender((KFilePlacesView*)self);
}

QObject* k_fileplacesview_qbase_sender(void* self) {
    return KFilePlacesView_QBaseSender((KFilePlacesView*)self);
}

void k_fileplacesview_on_sender(void* self, QObject* (*callback)()) {
    KFilePlacesView_OnSender((KFilePlacesView*)self, (intptr_t)callback);
}

int32_t k_fileplacesview_sender_signal_index(void* self) {
    return KFilePlacesView_SenderSignalIndex((KFilePlacesView*)self);
}

int32_t k_fileplacesview_qbase_sender_signal_index(void* self) {
    return KFilePlacesView_QBaseSenderSignalIndex((KFilePlacesView*)self);
}

void k_fileplacesview_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KFilePlacesView_OnSenderSignalIndex((KFilePlacesView*)self, (intptr_t)callback);
}

int32_t k_fileplacesview_receivers(void* self, const char* signal) {
    return KFilePlacesView_Receivers((KFilePlacesView*)self, signal);
}

int32_t k_fileplacesview_qbase_receivers(void* self, const char* signal) {
    return KFilePlacesView_QBaseReceivers((KFilePlacesView*)self, signal);
}

void k_fileplacesview_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KFilePlacesView_OnReceivers((KFilePlacesView*)self, (intptr_t)callback);
}

bool k_fileplacesview_is_signal_connected(void* self, void* signal) {
    return KFilePlacesView_IsSignalConnected((KFilePlacesView*)self, (QMetaMethod*)signal);
}

bool k_fileplacesview_qbase_is_signal_connected(void* self, void* signal) {
    return KFilePlacesView_QBaseIsSignalConnected((KFilePlacesView*)self, (QMetaMethod*)signal);
}

void k_fileplacesview_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KFilePlacesView_OnIsSignalConnected((KFilePlacesView*)self, (intptr_t)callback);
}

double k_fileplacesview_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KFilePlacesView_GetDecodedMetricF((KFilePlacesView*)self, metricA, metricB);
}

double k_fileplacesview_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KFilePlacesView_QBaseGetDecodedMetricF((KFilePlacesView*)self, metricA, metricB);
}

void k_fileplacesview_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KFilePlacesView_OnGetDecodedMetricF((KFilePlacesView*)self, (intptr_t)callback);
}

void k_fileplacesview_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_fileplacesview_delete(void* self) {
    KFilePlacesView_Delete((KFilePlacesView*)(self));
}
