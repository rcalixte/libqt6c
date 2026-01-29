#include "libqabstractitemdelegate.hpp"
#include "libqabstractitemmodel.hpp"
#include "libqabstractitemview.hpp"
#include "libqabstractscrollarea.hpp"
#include "libqevent.hpp"
#include "libqcoreevent.hpp"
#include "libqframe.hpp"
#include "libqitemselectionmodel.hpp"
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
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqlistview.hpp"
#include "libqlistview.h"

QListView* q_listview_new(void* parent) {
    return QListView_new((QWidget*)parent);
}

QListView* q_listview_new2() {
    return QListView_new2();
}

const QMetaObject* q_listview_meta_object(void* self) {
    return QListView_MetaObject((QListView*)self);
}

void q_listview_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QListView_OnMetaObject((QListView*)self, (intptr_t)callback);
}

const QMetaObject* q_listview_qbase_meta_object(void* self) {
    return QListView_QBaseMetaObject((QListView*)self);
}

void* q_listview_metacast(void* self, const char* param1) {
    return QListView_Metacast((QListView*)self, param1);
}

void q_listview_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QListView_OnMetacast((QListView*)self, (intptr_t)callback);
}

void* q_listview_qbase_metacast(void* self, const char* param1) {
    return QListView_QBaseMetacast((QListView*)self, param1);
}

int32_t q_listview_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QListView_Metacall((QListView*)self, param1, param2, param3);
}

void q_listview_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QListView_OnMetacall((QListView*)self, (intptr_t)callback);
}

int32_t q_listview_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QListView_QBaseMetacall((QListView*)self, param1, param2, param3);
}

const char* q_listview_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_listview_set_movement(void* self, int32_t movement) {
    QListView_SetMovement((QListView*)self, movement);
}

int32_t q_listview_movement(void* self) {
    return QListView_Movement((QListView*)self);
}

void q_listview_set_flow(void* self, int32_t flow) {
    QListView_SetFlow((QListView*)self, flow);
}

int32_t q_listview_flow(void* self) {
    return QListView_Flow((QListView*)self);
}

void q_listview_set_wrapping(void* self, bool enable) {
    QListView_SetWrapping((QListView*)self, enable);
}

bool q_listview_is_wrapping(void* self) {
    return QListView_IsWrapping((QListView*)self);
}

void q_listview_set_resize_mode(void* self, int32_t mode) {
    QListView_SetResizeMode((QListView*)self, mode);
}

int32_t q_listview_resize_mode(void* self) {
    return QListView_ResizeMode((QListView*)self);
}

void q_listview_set_layout_mode(void* self, int32_t mode) {
    QListView_SetLayoutMode((QListView*)self, mode);
}

int32_t q_listview_layout_mode(void* self) {
    return QListView_LayoutMode((QListView*)self);
}

void q_listview_set_spacing(void* self, int space) {
    QListView_SetSpacing((QListView*)self, space);
}

int32_t q_listview_spacing(void* self) {
    return QListView_Spacing((QListView*)self);
}

void q_listview_set_batch_size(void* self, int batchSize) {
    QListView_SetBatchSize((QListView*)self, batchSize);
}

int32_t q_listview_batch_size(void* self) {
    return QListView_BatchSize((QListView*)self);
}

void q_listview_set_grid_size(void* self, void* size) {
    QListView_SetGridSize((QListView*)self, (QSize*)size);
}

QSize* q_listview_grid_size(void* self) {
    return QListView_GridSize((QListView*)self);
}

void q_listview_set_view_mode(void* self, int32_t mode) {
    QListView_SetViewMode((QListView*)self, mode);
}

int32_t q_listview_view_mode(void* self) {
    return QListView_ViewMode((QListView*)self);
}

void q_listview_clear_property_flags(void* self) {
    QListView_ClearPropertyFlags((QListView*)self);
}

bool q_listview_is_row_hidden(void* self, int row) {
    return QListView_IsRowHidden((QListView*)self, row);
}

void q_listview_set_row_hidden(void* self, int row, bool hide) {
    QListView_SetRowHidden((QListView*)self, row, hide);
}

void q_listview_set_model_column(void* self, int column) {
    QListView_SetModelColumn((QListView*)self, column);
}

int32_t q_listview_model_column(void* self) {
    return QListView_ModelColumn((QListView*)self);
}

void q_listview_set_uniform_item_sizes(void* self, bool enable) {
    QListView_SetUniformItemSizes((QListView*)self, enable);
}

bool q_listview_uniform_item_sizes(void* self) {
    return QListView_UniformItemSizes((QListView*)self);
}

void q_listview_set_word_wrap(void* self, bool on) {
    QListView_SetWordWrap((QListView*)self, on);
}

bool q_listview_word_wrap(void* self) {
    return QListView_WordWrap((QListView*)self);
}

void q_listview_set_selection_rect_visible(void* self, bool show) {
    QListView_SetSelectionRectVisible((QListView*)self, show);
}

bool q_listview_is_selection_rect_visible(void* self) {
    return QListView_IsSelectionRectVisible((QListView*)self);
}

void q_listview_set_item_alignment(void* self, int32_t alignment) {
    QListView_SetItemAlignment((QListView*)self, alignment);
}

int32_t q_listview_item_alignment(void* self) {
    return QListView_ItemAlignment((QListView*)self);
}

QRect* q_listview_visual_rect(void* self, void* index) {
    return QListView_VisualRect((QListView*)self, (QModelIndex*)index);
}

void q_listview_on_visual_rect(void* self, QRect* (*callback)(void*, void*)) {
    QListView_OnVisualRect((QListView*)self, (intptr_t)callback);
}

QRect* q_listview_qbase_visual_rect(void* self, void* index) {
    return QListView_QBaseVisualRect((QListView*)self, (QModelIndex*)index);
}

void q_listview_scroll_to(void* self, void* index, int32_t hint) {
    QListView_ScrollTo((QListView*)self, (QModelIndex*)index, hint);
}

void q_listview_on_scroll_to(void* self, void (*callback)(void*, void*, int32_t)) {
    QListView_OnScrollTo((QListView*)self, (intptr_t)callback);
}

void q_listview_qbase_scroll_to(void* self, void* index, int32_t hint) {
    QListView_QBaseScrollTo((QListView*)self, (QModelIndex*)index, hint);
}

QModelIndex* q_listview_index_at(void* self, void* p) {
    return QListView_IndexAt((QListView*)self, (QPoint*)p);
}

void q_listview_on_index_at(void* self, QModelIndex* (*callback)(void*, void*)) {
    QListView_OnIndexAt((QListView*)self, (intptr_t)callback);
}

QModelIndex* q_listview_qbase_index_at(void* self, void* p) {
    return QListView_QBaseIndexAt((QListView*)self, (QPoint*)p);
}

void q_listview_do_items_layout(void* self) {
    QListView_DoItemsLayout((QListView*)self);
}

void q_listview_on_do_items_layout(void* self, void (*callback)()) {
    QListView_OnDoItemsLayout((QListView*)self, (intptr_t)callback);
}

void q_listview_qbase_do_items_layout(void* self) {
    QListView_QBaseDoItemsLayout((QListView*)self);
}

void q_listview_reset(void* self) {
    QListView_Reset((QListView*)self);
}

void q_listview_on_reset(void* self, void (*callback)()) {
    QListView_OnReset((QListView*)self, (intptr_t)callback);
}

void q_listview_qbase_reset(void* self) {
    QListView_QBaseReset((QListView*)self);
}

void q_listview_set_root_index(void* self, void* index) {
    QListView_SetRootIndex((QListView*)self, (QModelIndex*)index);
}

void q_listview_on_set_root_index(void* self, void (*callback)(void*, void*)) {
    QListView_OnSetRootIndex((QListView*)self, (intptr_t)callback);
}

void q_listview_qbase_set_root_index(void* self, void* index) {
    QListView_QBaseSetRootIndex((QListView*)self, (QModelIndex*)index);
}

void q_listview_indexes_moved(void* self, libqt_list /* of QModelIndex* */ indexes) {
    QListView_IndexesMoved((QListView*)self, indexes);
}

void q_listview_on_indexes_moved(void* self, void (*callback)(void*, QModelIndex**)) {
    QListView_Connect_IndexesMoved((QListView*)self, (intptr_t)callback);
}

bool q_listview_event(void* self, void* e) {
    return QListView_Event((QListView*)self, (QEvent*)e);
}

void q_listview_on_event(void* self, bool (*callback)(void*, void*)) {
    QListView_OnEvent((QListView*)self, (intptr_t)callback);
}

bool q_listview_qbase_event(void* self, void* e) {
    return QListView_QBaseEvent((QListView*)self, (QEvent*)e);
}

void q_listview_scroll_contents_by(void* self, int dx, int dy) {
    QListView_ScrollContentsBy((QListView*)self, dx, dy);
}

void q_listview_on_scroll_contents_by(void* self, void (*callback)(void*, int, int)) {
    QListView_OnScrollContentsBy((QListView*)self, (intptr_t)callback);
}

void q_listview_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QListView_QBaseScrollContentsBy((QListView*)self, dx, dy);
}

void q_listview_resize_contents(void* self, int width, int height) {
    QListView_ResizeContents((QListView*)self, width, height);
}

void q_listview_on_resize_contents(void* self, void (*callback)(void*, int, int)) {
    QListView_OnResizeContents((QListView*)self, (intptr_t)callback);
}

void q_listview_qbase_resize_contents(void* self, int width, int height) {
    QListView_QBaseResizeContents((QListView*)self, width, height);
}

QSize* q_listview_contents_size(void* self) {
    return QListView_ContentsSize((QListView*)self);
}

void q_listview_on_contents_size(void* self, QSize* (*callback)()) {
    QListView_OnContentsSize((QListView*)self, (intptr_t)callback);
}

QSize* q_listview_qbase_contents_size(void* self) {
    return QListView_QBaseContentsSize((QListView*)self);
}

void q_listview_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles) {
    QListView_DataChanged((QListView*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_listview_on_data_changed(void* self, void (*callback)(void*, void*, void*, libqt_list /* of int */)) {
    QListView_OnDataChanged((QListView*)self, (intptr_t)callback);
}

void q_listview_qbase_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles) {
    QListView_QBaseDataChanged((QListView*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_listview_rows_inserted(void* self, void* parent, int start, int end) {
    QListView_RowsInserted((QListView*)self, (QModelIndex*)parent, start, end);
}

void q_listview_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QListView_OnRowsInserted((QListView*)self, (intptr_t)callback);
}

void q_listview_qbase_rows_inserted(void* self, void* parent, int start, int end) {
    QListView_QBaseRowsInserted((QListView*)self, (QModelIndex*)parent, start, end);
}

void q_listview_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QListView_RowsAboutToBeRemoved((QListView*)self, (QModelIndex*)parent, start, end);
}

void q_listview_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QListView_OnRowsAboutToBeRemoved((QListView*)self, (intptr_t)callback);
}

void q_listview_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QListView_QBaseRowsAboutToBeRemoved((QListView*)self, (QModelIndex*)parent, start, end);
}

void q_listview_mouse_move_event(void* self, void* e) {
    QListView_MouseMoveEvent((QListView*)self, (QMouseEvent*)e);
}

void q_listview_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QListView_OnMouseMoveEvent((QListView*)self, (intptr_t)callback);
}

void q_listview_qbase_mouse_move_event(void* self, void* e) {
    QListView_QBaseMouseMoveEvent((QListView*)self, (QMouseEvent*)e);
}

void q_listview_mouse_release_event(void* self, void* e) {
    QListView_MouseReleaseEvent((QListView*)self, (QMouseEvent*)e);
}

void q_listview_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QListView_OnMouseReleaseEvent((QListView*)self, (intptr_t)callback);
}

void q_listview_qbase_mouse_release_event(void* self, void* e) {
    QListView_QBaseMouseReleaseEvent((QListView*)self, (QMouseEvent*)e);
}

void q_listview_wheel_event(void* self, void* e) {
    QListView_WheelEvent((QListView*)self, (QWheelEvent*)e);
}

void q_listview_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QListView_OnWheelEvent((QListView*)self, (intptr_t)callback);
}

void q_listview_qbase_wheel_event(void* self, void* e) {
    QListView_QBaseWheelEvent((QListView*)self, (QWheelEvent*)e);
}

void q_listview_timer_event(void* self, void* e) {
    QListView_TimerEvent((QListView*)self, (QTimerEvent*)e);
}

void q_listview_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QListView_OnTimerEvent((QListView*)self, (intptr_t)callback);
}

void q_listview_qbase_timer_event(void* self, void* e) {
    QListView_QBaseTimerEvent((QListView*)self, (QTimerEvent*)e);
}

void q_listview_resize_event(void* self, void* e) {
    QListView_ResizeEvent((QListView*)self, (QResizeEvent*)e);
}

void q_listview_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QListView_OnResizeEvent((QListView*)self, (intptr_t)callback);
}

void q_listview_qbase_resize_event(void* self, void* e) {
    QListView_QBaseResizeEvent((QListView*)self, (QResizeEvent*)e);
}

void q_listview_drag_move_event(void* self, void* e) {
    QListView_DragMoveEvent((QListView*)self, (QDragMoveEvent*)e);
}

void q_listview_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QListView_OnDragMoveEvent((QListView*)self, (intptr_t)callback);
}

void q_listview_qbase_drag_move_event(void* self, void* e) {
    QListView_QBaseDragMoveEvent((QListView*)self, (QDragMoveEvent*)e);
}

void q_listview_drag_leave_event(void* self, void* e) {
    QListView_DragLeaveEvent((QListView*)self, (QDragLeaveEvent*)e);
}

void q_listview_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QListView_OnDragLeaveEvent((QListView*)self, (intptr_t)callback);
}

void q_listview_qbase_drag_leave_event(void* self, void* e) {
    QListView_QBaseDragLeaveEvent((QListView*)self, (QDragLeaveEvent*)e);
}

void q_listview_drop_event(void* self, void* e) {
    QListView_DropEvent((QListView*)self, (QDropEvent*)e);
}

void q_listview_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QListView_OnDropEvent((QListView*)self, (intptr_t)callback);
}

void q_listview_qbase_drop_event(void* self, void* e) {
    QListView_QBaseDropEvent((QListView*)self, (QDropEvent*)e);
}

void q_listview_start_drag(void* self, int32_t supportedActions) {
    QListView_StartDrag((QListView*)self, supportedActions);
}

void q_listview_on_start_drag(void* self, void (*callback)(void*, int32_t)) {
    QListView_OnStartDrag((QListView*)self, (intptr_t)callback);
}

void q_listview_qbase_start_drag(void* self, int32_t supportedActions) {
    QListView_QBaseStartDrag((QListView*)self, supportedActions);
}

void q_listview_init_view_item_option(void* self, void* option) {
    QListView_InitViewItemOption((QListView*)self, (QStyleOptionViewItem*)option);
}

void q_listview_on_init_view_item_option(void* self, void (*callback)(void*, void*)) {
    QListView_OnInitViewItemOption((QListView*)self, (intptr_t)callback);
}

void q_listview_qbase_init_view_item_option(void* self, void* option) {
    QListView_QBaseInitViewItemOption((QListView*)self, (QStyleOptionViewItem*)option);
}

void q_listview_paint_event(void* self, void* e) {
    QListView_PaintEvent((QListView*)self, (QPaintEvent*)e);
}

void q_listview_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QListView_OnPaintEvent((QListView*)self, (intptr_t)callback);
}

void q_listview_qbase_paint_event(void* self, void* e) {
    QListView_QBasePaintEvent((QListView*)self, (QPaintEvent*)e);
}

int32_t q_listview_horizontal_offset(void* self) {
    return QListView_HorizontalOffset((QListView*)self);
}

void q_listview_on_horizontal_offset(void* self, int32_t (*callback)()) {
    QListView_OnHorizontalOffset((QListView*)self, (intptr_t)callback);
}

int32_t q_listview_qbase_horizontal_offset(void* self) {
    return QListView_QBaseHorizontalOffset((QListView*)self);
}

int32_t q_listview_vertical_offset(void* self) {
    return QListView_VerticalOffset((QListView*)self);
}

void q_listview_on_vertical_offset(void* self, int32_t (*callback)()) {
    QListView_OnVerticalOffset((QListView*)self, (intptr_t)callback);
}

int32_t q_listview_qbase_vertical_offset(void* self) {
    return QListView_QBaseVerticalOffset((QListView*)self);
}

QModelIndex* q_listview_move_cursor(void* self, int32_t cursorAction, int32_t modifiers) {
    return QListView_MoveCursor((QListView*)self, cursorAction, modifiers);
}

void q_listview_on_move_cursor(void* self, QModelIndex* (*callback)(void*, int32_t, int32_t)) {
    QListView_OnMoveCursor((QListView*)self, (intptr_t)callback);
}

QModelIndex* q_listview_qbase_move_cursor(void* self, int32_t cursorAction, int32_t modifiers) {
    return QListView_QBaseMoveCursor((QListView*)self, cursorAction, modifiers);
}

QRect* q_listview_rect_for_index(void* self, void* index) {
    return QListView_RectForIndex((QListView*)self, (QModelIndex*)index);
}

void q_listview_on_rect_for_index(void* self, QRect* (*callback)(void*, void*)) {
    QListView_OnRectForIndex((QListView*)self, (intptr_t)callback);
}

QRect* q_listview_qbase_rect_for_index(void* self, void* index) {
    return QListView_QBaseRectForIndex((QListView*)self, (QModelIndex*)index);
}

void q_listview_set_position_for_index(void* self, void* position, void* index) {
    QListView_SetPositionForIndex((QListView*)self, (QPoint*)position, (QModelIndex*)index);
}

void q_listview_on_set_position_for_index(void* self, void (*callback)(void*, void*, void*)) {
    QListView_OnSetPositionForIndex((QListView*)self, (intptr_t)callback);
}

void q_listview_qbase_set_position_for_index(void* self, void* position, void* index) {
    QListView_QBaseSetPositionForIndex((QListView*)self, (QPoint*)position, (QModelIndex*)index);
}

void q_listview_set_selection(void* self, void* rect, int32_t command) {
    QListView_SetSelection((QListView*)self, (QRect*)rect, command);
}

void q_listview_on_set_selection(void* self, void (*callback)(void*, void*, int32_t)) {
    QListView_OnSetSelection((QListView*)self, (intptr_t)callback);
}

void q_listview_qbase_set_selection(void* self, void* rect, int32_t command) {
    QListView_QBaseSetSelection((QListView*)self, (QRect*)rect, command);
}

QRegion* q_listview_visual_region_for_selection(void* self, void* selection) {
    return QListView_VisualRegionForSelection((QListView*)self, (QItemSelection*)selection);
}

void q_listview_on_visual_region_for_selection(void* self, QRegion* (*callback)(void*, void*)) {
    QListView_OnVisualRegionForSelection((QListView*)self, (intptr_t)callback);
}

QRegion* q_listview_qbase_visual_region_for_selection(void* self, void* selection) {
    return QListView_QBaseVisualRegionForSelection((QListView*)self, (QItemSelection*)selection);
}

libqt_list /* of QModelIndex* */ q_listview_selected_indexes(void* self) {
    libqt_list _arr = QListView_SelectedIndexes((QListView*)self);
    return _arr;
}

void q_listview_on_selected_indexes(void* self, QModelIndex** (*callback)()) {
    QListView_OnSelectedIndexes((QListView*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_listview_qbase_selected_indexes(void* self) {
    libqt_list _arr = QListView_QBaseSelectedIndexes((QListView*)self);
    return _arr;
}

void q_listview_update_geometries(void* self) {
    QListView_UpdateGeometries((QListView*)self);
}

void q_listview_on_update_geometries(void* self, void (*callback)()) {
    QListView_OnUpdateGeometries((QListView*)self, (intptr_t)callback);
}

void q_listview_qbase_update_geometries(void* self) {
    QListView_QBaseUpdateGeometries((QListView*)self);
}

bool q_listview_is_index_hidden(void* self, void* index) {
    return QListView_IsIndexHidden((QListView*)self, (QModelIndex*)index);
}

void q_listview_on_is_index_hidden(void* self, bool (*callback)(void*, void*)) {
    QListView_OnIsIndexHidden((QListView*)self, (intptr_t)callback);
}

bool q_listview_qbase_is_index_hidden(void* self, void* index) {
    return QListView_QBaseIsIndexHidden((QListView*)self, (QModelIndex*)index);
}

void q_listview_selection_changed(void* self, void* selected, void* deselected) {
    QListView_SelectionChanged((QListView*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

void q_listview_on_selection_changed(void* self, void (*callback)(void*, void*, void*)) {
    QListView_OnSelectionChanged((QListView*)self, (intptr_t)callback);
}

void q_listview_qbase_selection_changed(void* self, void* selected, void* deselected) {
    QListView_QBaseSelectionChanged((QListView*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

void q_listview_current_changed(void* self, void* current, void* previous) {
    QListView_CurrentChanged((QListView*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

void q_listview_on_current_changed(void* self, void (*callback)(void*, void*, void*)) {
    QListView_OnCurrentChanged((QListView*)self, (intptr_t)callback);
}

void q_listview_qbase_current_changed(void* self, void* current, void* previous) {
    QListView_QBaseCurrentChanged((QListView*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

QSize* q_listview_viewport_size_hint(void* self) {
    return QListView_ViewportSizeHint((QListView*)self);
}

void q_listview_on_viewport_size_hint(void* self, QSize* (*callback)()) {
    QListView_OnViewportSizeHint((QListView*)self, (intptr_t)callback);
}

QSize* q_listview_qbase_viewport_size_hint(void* self) {
    return QListView_QBaseViewportSizeHint((QListView*)self);
}

const char* q_listview_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_listview_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAbstractItemModel* q_listview_model(void* self) {
    return QAbstractItemView_Model((QAbstractItemView*)self);
}

QItemSelectionModel* q_listview_selection_model(void* self) {
    return QAbstractItemView_SelectionModel((QAbstractItemView*)self);
}

void q_listview_set_item_delegate(void* self, void* delegate) {
    QAbstractItemView_SetItemDelegate((QAbstractItemView*)self, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* q_listview_item_delegate(void* self) {
    return QAbstractItemView_ItemDelegate((QAbstractItemView*)self);
}

void q_listview_set_selection_mode(void* self, int32_t mode) {
    QAbstractItemView_SetSelectionMode((QAbstractItemView*)self, mode);
}

int32_t q_listview_selection_mode(void* self) {
    return QAbstractItemView_SelectionMode((QAbstractItemView*)self);
}

void q_listview_set_selection_behavior(void* self, int32_t behavior) {
    QAbstractItemView_SetSelectionBehavior((QAbstractItemView*)self, behavior);
}

int32_t q_listview_selection_behavior(void* self) {
    return QAbstractItemView_SelectionBehavior((QAbstractItemView*)self);
}

QModelIndex* q_listview_current_index(void* self) {
    return QAbstractItemView_CurrentIndex((QAbstractItemView*)self);
}

QModelIndex* q_listview_root_index(void* self) {
    return QAbstractItemView_RootIndex((QAbstractItemView*)self);
}

void q_listview_set_edit_triggers(void* self, int32_t triggers) {
    QAbstractItemView_SetEditTriggers((QAbstractItemView*)self, triggers);
}

int32_t q_listview_edit_triggers(void* self) {
    return QAbstractItemView_EditTriggers((QAbstractItemView*)self);
}

void q_listview_set_vertical_scroll_mode(void* self, int32_t mode) {
    QAbstractItemView_SetVerticalScrollMode((QAbstractItemView*)self, mode);
}

int32_t q_listview_vertical_scroll_mode(void* self) {
    return QAbstractItemView_VerticalScrollMode((QAbstractItemView*)self);
}

void q_listview_reset_vertical_scroll_mode(void* self) {
    QAbstractItemView_ResetVerticalScrollMode((QAbstractItemView*)self);
}

void q_listview_set_horizontal_scroll_mode(void* self, int32_t mode) {
    QAbstractItemView_SetHorizontalScrollMode((QAbstractItemView*)self, mode);
}

int32_t q_listview_horizontal_scroll_mode(void* self) {
    return QAbstractItemView_HorizontalScrollMode((QAbstractItemView*)self);
}

void q_listview_reset_horizontal_scroll_mode(void* self) {
    QAbstractItemView_ResetHorizontalScrollMode((QAbstractItemView*)self);
}

void q_listview_set_auto_scroll(void* self, bool enable) {
    QAbstractItemView_SetAutoScroll((QAbstractItemView*)self, enable);
}

bool q_listview_has_auto_scroll(void* self) {
    return QAbstractItemView_HasAutoScroll((QAbstractItemView*)self);
}

void q_listview_set_auto_scroll_margin(void* self, int margin) {
    QAbstractItemView_SetAutoScrollMargin((QAbstractItemView*)self, margin);
}

int32_t q_listview_auto_scroll_margin(void* self) {
    return QAbstractItemView_AutoScrollMargin((QAbstractItemView*)self);
}

void q_listview_set_tab_key_navigation(void* self, bool enable) {
    QAbstractItemView_SetTabKeyNavigation((QAbstractItemView*)self, enable);
}

bool q_listview_tab_key_navigation(void* self) {
    return QAbstractItemView_TabKeyNavigation((QAbstractItemView*)self);
}

void q_listview_set_drop_indicator_shown(void* self, bool enable) {
    QAbstractItemView_SetDropIndicatorShown((QAbstractItemView*)self, enable);
}

bool q_listview_show_drop_indicator(void* self) {
    return QAbstractItemView_ShowDropIndicator((QAbstractItemView*)self);
}

void q_listview_set_drag_enabled(void* self, bool enable) {
    QAbstractItemView_SetDragEnabled((QAbstractItemView*)self, enable);
}

bool q_listview_drag_enabled(void* self) {
    return QAbstractItemView_DragEnabled((QAbstractItemView*)self);
}

void q_listview_set_drag_drop_overwrite_mode(void* self, bool overwrite) {
    QAbstractItemView_SetDragDropOverwriteMode((QAbstractItemView*)self, overwrite);
}

bool q_listview_drag_drop_overwrite_mode(void* self) {
    return QAbstractItemView_DragDropOverwriteMode((QAbstractItemView*)self);
}

void q_listview_set_drag_drop_mode(void* self, int32_t behavior) {
    QAbstractItemView_SetDragDropMode((QAbstractItemView*)self, behavior);
}

int32_t q_listview_drag_drop_mode(void* self) {
    return QAbstractItemView_DragDropMode((QAbstractItemView*)self);
}

void q_listview_set_default_drop_action(void* self, int32_t dropAction) {
    QAbstractItemView_SetDefaultDropAction((QAbstractItemView*)self, dropAction);
}

int32_t q_listview_default_drop_action(void* self) {
    return QAbstractItemView_DefaultDropAction((QAbstractItemView*)self);
}

void q_listview_set_alternating_row_colors(void* self, bool enable) {
    QAbstractItemView_SetAlternatingRowColors((QAbstractItemView*)self, enable);
}

bool q_listview_alternating_row_colors(void* self) {
    return QAbstractItemView_AlternatingRowColors((QAbstractItemView*)self);
}

void q_listview_set_icon_size(void* self, void* size) {
    QAbstractItemView_SetIconSize((QAbstractItemView*)self, (QSize*)size);
}

QSize* q_listview_icon_size(void* self) {
    return QAbstractItemView_IconSize((QAbstractItemView*)self);
}

void q_listview_set_text_elide_mode(void* self, int32_t mode) {
    QAbstractItemView_SetTextElideMode((QAbstractItemView*)self, mode);
}

int32_t q_listview_text_elide_mode(void* self) {
    return QAbstractItemView_TextElideMode((QAbstractItemView*)self);
}

QSize* q_listview_size_hint_for_index(void* self, void* index) {
    return QAbstractItemView_SizeHintForIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_listview_open_persistent_editor(void* self, void* index) {
    QAbstractItemView_OpenPersistentEditor((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_listview_close_persistent_editor(void* self, void* index) {
    QAbstractItemView_ClosePersistentEditor((QAbstractItemView*)self, (QModelIndex*)index);
}

bool q_listview_is_persistent_editor_open(void* self, void* index) {
    return QAbstractItemView_IsPersistentEditorOpen((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_listview_set_index_widget(void* self, void* index, void* widget) {
    QAbstractItemView_SetIndexWidget((QAbstractItemView*)self, (QModelIndex*)index, (QWidget*)widget);
}

QWidget* q_listview_index_widget(void* self, void* index) {
    return QAbstractItemView_IndexWidget((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_listview_set_item_delegate_for_row(void* self, int row, void* delegate) {
    QAbstractItemView_SetItemDelegateForRow((QAbstractItemView*)self, row, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* q_listview_item_delegate_for_row(void* self, int row) {
    return QAbstractItemView_ItemDelegateForRow((QAbstractItemView*)self, row);
}

void q_listview_set_item_delegate_for_column(void* self, int column, void* delegate) {
    QAbstractItemView_SetItemDelegateForColumn((QAbstractItemView*)self, column, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* q_listview_item_delegate_for_column(void* self, int column) {
    return QAbstractItemView_ItemDelegateForColumn((QAbstractItemView*)self, column);
}

QAbstractItemDelegate* q_listview_item_delegate2(void* self, void* index) {
    return QAbstractItemView_ItemDelegate2((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_listview_edit(void* self, void* index) {
    QAbstractItemView_Edit((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_listview_clear_selection(void* self) {
    QAbstractItemView_ClearSelection((QAbstractItemView*)self);
}

void q_listview_set_current_index(void* self, void* index) {
    QAbstractItemView_SetCurrentIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_listview_scroll_to_top(void* self) {
    QAbstractItemView_ScrollToTop((QAbstractItemView*)self);
}

void q_listview_scroll_to_bottom(void* self) {
    QAbstractItemView_ScrollToBottom((QAbstractItemView*)self);
}

void q_listview_update(void* self, void* index) {
    QAbstractItemView_Update((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_listview_pressed(void* self, void* index) {
    QAbstractItemView_Pressed((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_listview_on_pressed(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Pressed((QAbstractItemView*)self, (intptr_t)callback);
}

void q_listview_clicked(void* self, void* index) {
    QAbstractItemView_Clicked((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_listview_on_clicked(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Clicked((QAbstractItemView*)self, (intptr_t)callback);
}

void q_listview_double_clicked(void* self, void* index) {
    QAbstractItemView_DoubleClicked((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_listview_on_double_clicked(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_DoubleClicked((QAbstractItemView*)self, (intptr_t)callback);
}

void q_listview_activated(void* self, void* index) {
    QAbstractItemView_Activated((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_listview_on_activated(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Activated((QAbstractItemView*)self, (intptr_t)callback);
}

void q_listview_entered(void* self, void* index) {
    QAbstractItemView_Entered((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_listview_on_entered(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Entered((QAbstractItemView*)self, (intptr_t)callback);
}

void q_listview_viewport_entered(void* self) {
    QAbstractItemView_ViewportEntered((QAbstractItemView*)self);
}

void q_listview_on_viewport_entered(void* self, void (*callback)(void*)) {
    QAbstractItemView_Connect_ViewportEntered((QAbstractItemView*)self, (intptr_t)callback);
}

void q_listview_icon_size_changed(void* self, void* size) {
    QAbstractItemView_IconSizeChanged((QAbstractItemView*)self, (QSize*)size);
}

void q_listview_on_icon_size_changed(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_IconSizeChanged((QAbstractItemView*)self, (intptr_t)callback);
}

int32_t q_listview_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_listview_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

QScrollBar* q_listview_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

void q_listview_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

int32_t q_listview_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_listview_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

QScrollBar* q_listview_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

void q_listview_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

QWidget* q_listview_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

void q_listview_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

void q_listview_add_scroll_bar_widget(void* self, void* widget, int32_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

libqt_list /* of QWidget* */ q_listview_scroll_bar_widgets(void* self, int32_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

QWidget* q_listview_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

void q_listview_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

QSize* q_listview_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

int32_t q_listview_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

void q_listview_set_size_adjust_policy(void* self, int32_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

int32_t q_listview_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void q_listview_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t q_listview_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int32_t q_listview_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void q_listview_set_frame_shape(void* self, int32_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int32_t q_listview_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void q_listview_set_frame_shadow(void* self, int32_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t q_listview_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void q_listview_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t q_listview_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void q_listview_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* q_listview_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void q_listview_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t q_listview_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_listview_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_listview_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_listview_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_listview_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_listview_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_listview_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_listview_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_listview_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_listview_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_listview_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_listview_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_listview_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_listview_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_listview_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_listview_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_listview_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_listview_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_listview_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_listview_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_listview_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_listview_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_listview_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_listview_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_listview_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_listview_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_listview_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_listview_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_listview_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_listview_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_listview_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_listview_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_listview_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_listview_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_listview_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_listview_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_listview_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_listview_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_listview_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_listview_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_listview_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_listview_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_listview_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_listview_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_listview_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_listview_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_listview_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_listview_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_listview_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_listview_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_listview_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_listview_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_listview_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_listview_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_listview_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_listview_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_listview_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_listview_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_listview_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_listview_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_listview_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_listview_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_listview_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_listview_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_listview_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_listview_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_listview_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_listview_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_listview_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_listview_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_listview_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_listview_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_listview_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_listview_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_listview_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_listview_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_listview_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_listview_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_listview_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_listview_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_listview_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_listview_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_listview_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_listview_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_listview_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_listview_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_listview_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_listview_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_listview_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_listview_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_listview_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_listview_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_listview_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_listview_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_listview_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_listview_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_listview_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_listview_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_listview_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_listview_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_listview_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_listview_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_listview_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_listview_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_listview_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_listview_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_listview_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_listview_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_listview_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_listview_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_listview_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_listview_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_listview_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_listview_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_listview_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_listview_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_listview_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_listview_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_listview_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_listview_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_listview_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_listview_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_listview_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_listview_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_listview_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_listview_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_listview_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_listview_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_listview_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_listview_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_listview_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_listview_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_listview_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_listview_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_listview_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_listview_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_listview_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_listview_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_listview_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_listview_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_listview_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_listview_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_listview_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_listview_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_listview_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_listview_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_listview_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_listview_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_listview_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_listview_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_listview_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_listview_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_listview_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_listview_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_listview_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_listview_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_listview_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_listview_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_listview_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_listview_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_listview_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_listview_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_listview_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_listview_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_listview_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_listview_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_listview_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_listview_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_listview_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_listview_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_listview_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_listview_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_listview_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_listview_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_listview_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_listview_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_listview_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_listview_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_listview_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_listview_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_listview_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_listview_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_listview_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_listview_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_listview_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_listview_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_listview_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_listview_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_listview_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_listview_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_listview_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_listview_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_listview_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_listview_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_listview_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_listview_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_listview_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_listview_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_listview_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_listview_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_listview_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_listview_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_listview_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_listview_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_listview_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_listview_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_listview_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_listview_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_listview_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_listview_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_listview_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_listview_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_listview_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_listview_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_listview_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_listview_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_listview_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_listview_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_listview_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_listview_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_listview_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_listview_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_listview_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_listview_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_listview_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_listview_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_listview_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t q_listview_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_listview_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_listview_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t q_listview_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_listview_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_listview_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_listview_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_listview_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_listview_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_listview_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_listview_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_listview_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_listview_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_listview_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_listview_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_listview_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_listview_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_listview_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_listview_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_listview_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_listview_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_listview_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_listview_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_listview_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_listview_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_listview_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_listview_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t q_listview_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_listview_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_listview_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_listview_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_listview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_listview_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_listview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_listview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_listview_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_listview_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_listview_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_listview_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_listview_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_listview_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_listview_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_listview_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_listview_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_listview_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_listview_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_listview_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_listview_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_listview_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_listview_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_listview_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_listview_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_listview_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_listview_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_listview_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_listview_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_listview_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_listview_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_listview_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_listview_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_listview_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_listview_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_listview_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_listview_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_listview_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_listview_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_listview_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_listview_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_listview_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_listview_dynamic_property_names\n");
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

QBindingStorage* q_listview_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_listview_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_listview_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_listview_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_listview_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_listview_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_listview_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_listview_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_listview_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_listview_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_listview_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_listview_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_listview_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_listview_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_listview_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_listview_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_listview_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_listview_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_listview_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_listview_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_listview_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_listview_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_listview_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_listview_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_listview_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_listview_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void q_listview_set_model(void* self, void* model) {
    QListView_SetModel((QListView*)self, (QAbstractItemModel*)model);
}

void q_listview_qbase_set_model(void* self, void* model) {
    QListView_QBaseSetModel((QListView*)self, (QAbstractItemModel*)model);
}

void q_listview_on_set_model(void* self, void (*callback)(void*, void*)) {
    QListView_OnSetModel((QListView*)self, (intptr_t)callback);
}

void q_listview_set_selection_model(void* self, void* selectionModel) {
    QListView_SetSelectionModel((QListView*)self, (QItemSelectionModel*)selectionModel);
}

void q_listview_qbase_set_selection_model(void* self, void* selectionModel) {
    QListView_QBaseSetSelectionModel((QListView*)self, (QItemSelectionModel*)selectionModel);
}

void q_listview_on_set_selection_model(void* self, void (*callback)(void*, void*)) {
    QListView_OnSetSelectionModel((QListView*)self, (intptr_t)callback);
}

void q_listview_keyboard_search(void* self, const char* search) {
    QListView_KeyboardSearch((QListView*)self, qstring(search));
}

void q_listview_qbase_keyboard_search(void* self, const char* search) {
    QListView_QBaseKeyboardSearch((QListView*)self, qstring(search));
}

void q_listview_on_keyboard_search(void* self, void (*callback)(void*, const char*)) {
    QListView_OnKeyboardSearch((QListView*)self, (intptr_t)callback);
}

int32_t q_listview_size_hint_for_row(void* self, int row) {
    return QListView_SizeHintForRow((QListView*)self, row);
}

int32_t q_listview_qbase_size_hint_for_row(void* self, int row) {
    return QListView_QBaseSizeHintForRow((QListView*)self, row);
}

void q_listview_on_size_hint_for_row(void* self, int32_t (*callback)(void*, int)) {
    QListView_OnSizeHintForRow((QListView*)self, (intptr_t)callback);
}

int32_t q_listview_size_hint_for_column(void* self, int column) {
    return QListView_SizeHintForColumn((QListView*)self, column);
}

int32_t q_listview_qbase_size_hint_for_column(void* self, int column) {
    return QListView_QBaseSizeHintForColumn((QListView*)self, column);
}

void q_listview_on_size_hint_for_column(void* self, int32_t (*callback)(void*, int)) {
    QListView_OnSizeHintForColumn((QListView*)self, (intptr_t)callback);
}

QAbstractItemDelegate* q_listview_item_delegate_for_index(void* self, void* index) {
    return QListView_ItemDelegateForIndex((QListView*)self, (QModelIndex*)index);
}

QAbstractItemDelegate* q_listview_qbase_item_delegate_for_index(void* self, void* index) {
    return QListView_QBaseItemDelegateForIndex((QListView*)self, (QModelIndex*)index);
}

void q_listview_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*callback)(void*, void*)) {
    QListView_OnItemDelegateForIndex((QListView*)self, (intptr_t)callback);
}

QVariant* q_listview_input_method_query(void* self, int32_t query) {
    return QListView_InputMethodQuery((QListView*)self, query);
}

QVariant* q_listview_qbase_input_method_query(void* self, int32_t query) {
    return QListView_QBaseInputMethodQuery((QListView*)self, query);
}

void q_listview_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QListView_OnInputMethodQuery((QListView*)self, (intptr_t)callback);
}

void q_listview_select_all(void* self) {
    QListView_SelectAll((QListView*)self);
}

void q_listview_qbase_select_all(void* self) {
    QListView_QBaseSelectAll((QListView*)self);
}

void q_listview_on_select_all(void* self, void (*callback)()) {
    QListView_OnSelectAll((QListView*)self, (intptr_t)callback);
}

void q_listview_update_editor_data(void* self) {
    QListView_UpdateEditorData((QListView*)self);
}

void q_listview_qbase_update_editor_data(void* self) {
    QListView_QBaseUpdateEditorData((QListView*)self);
}

void q_listview_on_update_editor_data(void* self, void (*callback)()) {
    QListView_OnUpdateEditorData((QListView*)self, (intptr_t)callback);
}

void q_listview_update_editor_geometries(void* self) {
    QListView_UpdateEditorGeometries((QListView*)self);
}

void q_listview_qbase_update_editor_geometries(void* self) {
    QListView_QBaseUpdateEditorGeometries((QListView*)self);
}

void q_listview_on_update_editor_geometries(void* self, void (*callback)()) {
    QListView_OnUpdateEditorGeometries((QListView*)self, (intptr_t)callback);
}

void q_listview_vertical_scrollbar_action(void* self, int action) {
    QListView_VerticalScrollbarAction((QListView*)self, action);
}

void q_listview_qbase_vertical_scrollbar_action(void* self, int action) {
    QListView_QBaseVerticalScrollbarAction((QListView*)self, action);
}

void q_listview_on_vertical_scrollbar_action(void* self, void (*callback)(void*, int)) {
    QListView_OnVerticalScrollbarAction((QListView*)self, (intptr_t)callback);
}

void q_listview_horizontal_scrollbar_action(void* self, int action) {
    QListView_HorizontalScrollbarAction((QListView*)self, action);
}

void q_listview_qbase_horizontal_scrollbar_action(void* self, int action) {
    QListView_QBaseHorizontalScrollbarAction((QListView*)self, action);
}

void q_listview_on_horizontal_scrollbar_action(void* self, void (*callback)(void*, int)) {
    QListView_OnHorizontalScrollbarAction((QListView*)self, (intptr_t)callback);
}

void q_listview_vertical_scrollbar_value_changed(void* self, int value) {
    QListView_VerticalScrollbarValueChanged((QListView*)self, value);
}

void q_listview_qbase_vertical_scrollbar_value_changed(void* self, int value) {
    QListView_QBaseVerticalScrollbarValueChanged((QListView*)self, value);
}

void q_listview_on_vertical_scrollbar_value_changed(void* self, void (*callback)(void*, int)) {
    QListView_OnVerticalScrollbarValueChanged((QListView*)self, (intptr_t)callback);
}

void q_listview_horizontal_scrollbar_value_changed(void* self, int value) {
    QListView_HorizontalScrollbarValueChanged((QListView*)self, value);
}

void q_listview_qbase_horizontal_scrollbar_value_changed(void* self, int value) {
    QListView_QBaseHorizontalScrollbarValueChanged((QListView*)self, value);
}

void q_listview_on_horizontal_scrollbar_value_changed(void* self, void (*callback)(void*, int)) {
    QListView_OnHorizontalScrollbarValueChanged((QListView*)self, (intptr_t)callback);
}

void q_listview_close_editor(void* self, void* editor, int32_t hint) {
    QListView_CloseEditor((QListView*)self, (QWidget*)editor, hint);
}

void q_listview_qbase_close_editor(void* self, void* editor, int32_t hint) {
    QListView_QBaseCloseEditor((QListView*)self, (QWidget*)editor, hint);
}

void q_listview_on_close_editor(void* self, void (*callback)(void*, void*, int32_t)) {
    QListView_OnCloseEditor((QListView*)self, (intptr_t)callback);
}

void q_listview_commit_data(void* self, void* editor) {
    QListView_CommitData((QListView*)self, (QWidget*)editor);
}

void q_listview_qbase_commit_data(void* self, void* editor) {
    QListView_QBaseCommitData((QListView*)self, (QWidget*)editor);
}

void q_listview_on_commit_data(void* self, void (*callback)(void*, void*)) {
    QListView_OnCommitData((QListView*)self, (intptr_t)callback);
}

void q_listview_editor_destroyed(void* self, void* editor) {
    QListView_EditorDestroyed((QListView*)self, (QObject*)editor);
}

void q_listview_qbase_editor_destroyed(void* self, void* editor) {
    QListView_QBaseEditorDestroyed((QListView*)self, (QObject*)editor);
}

void q_listview_on_editor_destroyed(void* self, void (*callback)(void*, void*)) {
    QListView_OnEditorDestroyed((QListView*)self, (intptr_t)callback);
}

bool q_listview_edit2(void* self, void* index, int32_t trigger, void* event) {
    return QListView_Edit2((QListView*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

bool q_listview_qbase_edit2(void* self, void* index, int32_t trigger, void* event) {
    return QListView_QBaseEdit2((QListView*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

void q_listview_on_edit2(void* self, bool (*callback)(void*, void*, int32_t, void*)) {
    QListView_OnEdit2((QListView*)self, (intptr_t)callback);
}

int32_t q_listview_selection_command(void* self, void* index, void* event) {
    return QListView_SelectionCommand((QListView*)self, (QModelIndex*)index, (QEvent*)event);
}

int32_t q_listview_qbase_selection_command(void* self, void* index, void* event) {
    return QListView_QBaseSelectionCommand((QListView*)self, (QModelIndex*)index, (QEvent*)event);
}

void q_listview_on_selection_command(void* self, int32_t (*callback)(void*, void*, void*)) {
    QListView_OnSelectionCommand((QListView*)self, (intptr_t)callback);
}

bool q_listview_focus_next_prev_child(void* self, bool next) {
    return QListView_FocusNextPrevChild((QListView*)self, next);
}

bool q_listview_qbase_focus_next_prev_child(void* self, bool next) {
    return QListView_QBaseFocusNextPrevChild((QListView*)self, next);
}

void q_listview_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QListView_OnFocusNextPrevChild((QListView*)self, (intptr_t)callback);
}

bool q_listview_viewport_event(void* self, void* event) {
    return QListView_ViewportEvent((QListView*)self, (QEvent*)event);
}

bool q_listview_qbase_viewport_event(void* self, void* event) {
    return QListView_QBaseViewportEvent((QListView*)self, (QEvent*)event);
}

void q_listview_on_viewport_event(void* self, bool (*callback)(void*, void*)) {
    QListView_OnViewportEvent((QListView*)self, (intptr_t)callback);
}

void q_listview_mouse_press_event(void* self, void* event) {
    QListView_MousePressEvent((QListView*)self, (QMouseEvent*)event);
}

void q_listview_qbase_mouse_press_event(void* self, void* event) {
    QListView_QBaseMousePressEvent((QListView*)self, (QMouseEvent*)event);
}

void q_listview_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QListView_OnMousePressEvent((QListView*)self, (intptr_t)callback);
}

void q_listview_mouse_double_click_event(void* self, void* event) {
    QListView_MouseDoubleClickEvent((QListView*)self, (QMouseEvent*)event);
}

void q_listview_qbase_mouse_double_click_event(void* self, void* event) {
    QListView_QBaseMouseDoubleClickEvent((QListView*)self, (QMouseEvent*)event);
}

void q_listview_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QListView_OnMouseDoubleClickEvent((QListView*)self, (intptr_t)callback);
}

void q_listview_drag_enter_event(void* self, void* event) {
    QListView_DragEnterEvent((QListView*)self, (QDragEnterEvent*)event);
}

void q_listview_qbase_drag_enter_event(void* self, void* event) {
    QListView_QBaseDragEnterEvent((QListView*)self, (QDragEnterEvent*)event);
}

void q_listview_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QListView_OnDragEnterEvent((QListView*)self, (intptr_t)callback);
}

void q_listview_focus_in_event(void* self, void* event) {
    QListView_FocusInEvent((QListView*)self, (QFocusEvent*)event);
}

void q_listview_qbase_focus_in_event(void* self, void* event) {
    QListView_QBaseFocusInEvent((QListView*)self, (QFocusEvent*)event);
}

void q_listview_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QListView_OnFocusInEvent((QListView*)self, (intptr_t)callback);
}

void q_listview_focus_out_event(void* self, void* event) {
    QListView_FocusOutEvent((QListView*)self, (QFocusEvent*)event);
}

void q_listview_qbase_focus_out_event(void* self, void* event) {
    QListView_QBaseFocusOutEvent((QListView*)self, (QFocusEvent*)event);
}

void q_listview_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QListView_OnFocusOutEvent((QListView*)self, (intptr_t)callback);
}

void q_listview_key_press_event(void* self, void* event) {
    QListView_KeyPressEvent((QListView*)self, (QKeyEvent*)event);
}

void q_listview_qbase_key_press_event(void* self, void* event) {
    QListView_QBaseKeyPressEvent((QListView*)self, (QKeyEvent*)event);
}

void q_listview_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QListView_OnKeyPressEvent((QListView*)self, (intptr_t)callback);
}

void q_listview_input_method_event(void* self, void* event) {
    QListView_InputMethodEvent((QListView*)self, (QInputMethodEvent*)event);
}

void q_listview_qbase_input_method_event(void* self, void* event) {
    QListView_QBaseInputMethodEvent((QListView*)self, (QInputMethodEvent*)event);
}

void q_listview_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QListView_OnInputMethodEvent((QListView*)self, (intptr_t)callback);
}

bool q_listview_event_filter(void* self, void* object, void* event) {
    return QListView_EventFilter((QListView*)self, (QObject*)object, (QEvent*)event);
}

bool q_listview_qbase_event_filter(void* self, void* object, void* event) {
    return QListView_QBaseEventFilter((QListView*)self, (QObject*)object, (QEvent*)event);
}

void q_listview_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QListView_OnEventFilter((QListView*)self, (intptr_t)callback);
}

QSize* q_listview_minimum_size_hint(void* self) {
    return QListView_MinimumSizeHint((QListView*)self);
}

QSize* q_listview_qbase_minimum_size_hint(void* self) {
    return QListView_QBaseMinimumSizeHint((QListView*)self);
}

void q_listview_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QListView_OnMinimumSizeHint((QListView*)self, (intptr_t)callback);
}

QSize* q_listview_size_hint(void* self) {
    return QListView_SizeHint((QListView*)self);
}

QSize* q_listview_qbase_size_hint(void* self) {
    return QListView_QBaseSizeHint((QListView*)self);
}

void q_listview_on_size_hint(void* self, QSize* (*callback)()) {
    QListView_OnSizeHint((QListView*)self, (intptr_t)callback);
}

void q_listview_setup_viewport(void* self, void* viewport) {
    QListView_SetupViewport((QListView*)self, (QWidget*)viewport);
}

void q_listview_qbase_setup_viewport(void* self, void* viewport) {
    QListView_QBaseSetupViewport((QListView*)self, (QWidget*)viewport);
}

void q_listview_on_setup_viewport(void* self, void (*callback)(void*, void*)) {
    QListView_OnSetupViewport((QListView*)self, (intptr_t)callback);
}

void q_listview_context_menu_event(void* self, void* param1) {
    QListView_ContextMenuEvent((QListView*)self, (QContextMenuEvent*)param1);
}

void q_listview_qbase_context_menu_event(void* self, void* param1) {
    QListView_QBaseContextMenuEvent((QListView*)self, (QContextMenuEvent*)param1);
}

void q_listview_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QListView_OnContextMenuEvent((QListView*)self, (intptr_t)callback);
}

void q_listview_change_event(void* self, void* param1) {
    QListView_ChangeEvent((QListView*)self, (QEvent*)param1);
}

void q_listview_qbase_change_event(void* self, void* param1) {
    QListView_QBaseChangeEvent((QListView*)self, (QEvent*)param1);
}

void q_listview_on_change_event(void* self, void (*callback)(void*, void*)) {
    QListView_OnChangeEvent((QListView*)self, (intptr_t)callback);
}

void q_listview_init_style_option(void* self, void* option) {
    QListView_InitStyleOption((QListView*)self, (QStyleOptionFrame*)option);
}

void q_listview_qbase_init_style_option(void* self, void* option) {
    QListView_QBaseInitStyleOption((QListView*)self, (QStyleOptionFrame*)option);
}

void q_listview_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    QListView_OnInitStyleOption((QListView*)self, (intptr_t)callback);
}

int32_t q_listview_dev_type(void* self) {
    return QListView_DevType((QListView*)self);
}

int32_t q_listview_qbase_dev_type(void* self) {
    return QListView_QBaseDevType((QListView*)self);
}

void q_listview_on_dev_type(void* self, int32_t (*callback)()) {
    QListView_OnDevType((QListView*)self, (intptr_t)callback);
}

void q_listview_set_visible(void* self, bool visible) {
    QListView_SetVisible((QListView*)self, visible);
}

void q_listview_qbase_set_visible(void* self, bool visible) {
    QListView_QBaseSetVisible((QListView*)self, visible);
}

void q_listview_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QListView_OnSetVisible((QListView*)self, (intptr_t)callback);
}

int32_t q_listview_height_for_width(void* self, int param1) {
    return QListView_HeightForWidth((QListView*)self, param1);
}

int32_t q_listview_qbase_height_for_width(void* self, int param1) {
    return QListView_QBaseHeightForWidth((QListView*)self, param1);
}

void q_listview_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QListView_OnHeightForWidth((QListView*)self, (intptr_t)callback);
}

bool q_listview_has_height_for_width(void* self) {
    return QListView_HasHeightForWidth((QListView*)self);
}

bool q_listview_qbase_has_height_for_width(void* self) {
    return QListView_QBaseHasHeightForWidth((QListView*)self);
}

void q_listview_on_has_height_for_width(void* self, bool (*callback)()) {
    QListView_OnHasHeightForWidth((QListView*)self, (intptr_t)callback);
}

QPaintEngine* q_listview_paint_engine(void* self) {
    return QListView_PaintEngine((QListView*)self);
}

QPaintEngine* q_listview_qbase_paint_engine(void* self) {
    return QListView_QBasePaintEngine((QListView*)self);
}

void q_listview_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QListView_OnPaintEngine((QListView*)self, (intptr_t)callback);
}

void q_listview_key_release_event(void* self, void* event) {
    QListView_KeyReleaseEvent((QListView*)self, (QKeyEvent*)event);
}

void q_listview_qbase_key_release_event(void* self, void* event) {
    QListView_QBaseKeyReleaseEvent((QListView*)self, (QKeyEvent*)event);
}

void q_listview_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QListView_OnKeyReleaseEvent((QListView*)self, (intptr_t)callback);
}

void q_listview_enter_event(void* self, void* event) {
    QListView_EnterEvent((QListView*)self, (QEnterEvent*)event);
}

void q_listview_qbase_enter_event(void* self, void* event) {
    QListView_QBaseEnterEvent((QListView*)self, (QEnterEvent*)event);
}

void q_listview_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QListView_OnEnterEvent((QListView*)self, (intptr_t)callback);
}

void q_listview_leave_event(void* self, void* event) {
    QListView_LeaveEvent((QListView*)self, (QEvent*)event);
}

void q_listview_qbase_leave_event(void* self, void* event) {
    QListView_QBaseLeaveEvent((QListView*)self, (QEvent*)event);
}

void q_listview_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QListView_OnLeaveEvent((QListView*)self, (intptr_t)callback);
}

void q_listview_move_event(void* self, void* event) {
    QListView_MoveEvent((QListView*)self, (QMoveEvent*)event);
}

void q_listview_qbase_move_event(void* self, void* event) {
    QListView_QBaseMoveEvent((QListView*)self, (QMoveEvent*)event);
}

void q_listview_on_move_event(void* self, void (*callback)(void*, void*)) {
    QListView_OnMoveEvent((QListView*)self, (intptr_t)callback);
}

void q_listview_close_event(void* self, void* event) {
    QListView_CloseEvent((QListView*)self, (QCloseEvent*)event);
}

void q_listview_qbase_close_event(void* self, void* event) {
    QListView_QBaseCloseEvent((QListView*)self, (QCloseEvent*)event);
}

void q_listview_on_close_event(void* self, void (*callback)(void*, void*)) {
    QListView_OnCloseEvent((QListView*)self, (intptr_t)callback);
}

void q_listview_tablet_event(void* self, void* event) {
    QListView_TabletEvent((QListView*)self, (QTabletEvent*)event);
}

void q_listview_qbase_tablet_event(void* self, void* event) {
    QListView_QBaseTabletEvent((QListView*)self, (QTabletEvent*)event);
}

void q_listview_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QListView_OnTabletEvent((QListView*)self, (intptr_t)callback);
}

void q_listview_action_event(void* self, void* event) {
    QListView_ActionEvent((QListView*)self, (QActionEvent*)event);
}

void q_listview_qbase_action_event(void* self, void* event) {
    QListView_QBaseActionEvent((QListView*)self, (QActionEvent*)event);
}

void q_listview_on_action_event(void* self, void (*callback)(void*, void*)) {
    QListView_OnActionEvent((QListView*)self, (intptr_t)callback);
}

void q_listview_show_event(void* self, void* event) {
    QListView_ShowEvent((QListView*)self, (QShowEvent*)event);
}

void q_listview_qbase_show_event(void* self, void* event) {
    QListView_QBaseShowEvent((QListView*)self, (QShowEvent*)event);
}

void q_listview_on_show_event(void* self, void (*callback)(void*, void*)) {
    QListView_OnShowEvent((QListView*)self, (intptr_t)callback);
}

void q_listview_hide_event(void* self, void* event) {
    QListView_HideEvent((QListView*)self, (QHideEvent*)event);
}

void q_listview_qbase_hide_event(void* self, void* event) {
    QListView_QBaseHideEvent((QListView*)self, (QHideEvent*)event);
}

void q_listview_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QListView_OnHideEvent((QListView*)self, (intptr_t)callback);
}

bool q_listview_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QListView_NativeEvent((QListView*)self, qstring(eventType), message, result);
}

bool q_listview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QListView_QBaseNativeEvent((QListView*)self, qstring(eventType), message, result);
}

void q_listview_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QListView_OnNativeEvent((QListView*)self, (intptr_t)callback);
}

int32_t q_listview_metric(void* self, int32_t param1) {
    return QListView_Metric((QListView*)self, param1);
}

int32_t q_listview_qbase_metric(void* self, int32_t param1) {
    return QListView_QBaseMetric((QListView*)self, param1);
}

void q_listview_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QListView_OnMetric((QListView*)self, (intptr_t)callback);
}

void q_listview_init_painter(void* self, void* painter) {
    QListView_InitPainter((QListView*)self, (QPainter*)painter);
}

void q_listview_qbase_init_painter(void* self, void* painter) {
    QListView_QBaseInitPainter((QListView*)self, (QPainter*)painter);
}

void q_listview_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QListView_OnInitPainter((QListView*)self, (intptr_t)callback);
}

QPaintDevice* q_listview_redirected(void* self, void* offset) {
    return QListView_Redirected((QListView*)self, (QPoint*)offset);
}

QPaintDevice* q_listview_qbase_redirected(void* self, void* offset) {
    return QListView_QBaseRedirected((QListView*)self, (QPoint*)offset);
}

void q_listview_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QListView_OnRedirected((QListView*)self, (intptr_t)callback);
}

QPainter* q_listview_shared_painter(void* self) {
    return QListView_SharedPainter((QListView*)self);
}

QPainter* q_listview_qbase_shared_painter(void* self) {
    return QListView_QBaseSharedPainter((QListView*)self);
}

void q_listview_on_shared_painter(void* self, QPainter* (*callback)()) {
    QListView_OnSharedPainter((QListView*)self, (intptr_t)callback);
}

void q_listview_child_event(void* self, void* event) {
    QListView_ChildEvent((QListView*)self, (QChildEvent*)event);
}

void q_listview_qbase_child_event(void* self, void* event) {
    QListView_QBaseChildEvent((QListView*)self, (QChildEvent*)event);
}

void q_listview_on_child_event(void* self, void (*callback)(void*, void*)) {
    QListView_OnChildEvent((QListView*)self, (intptr_t)callback);
}

void q_listview_custom_event(void* self, void* event) {
    QListView_CustomEvent((QListView*)self, (QEvent*)event);
}

void q_listview_qbase_custom_event(void* self, void* event) {
    QListView_QBaseCustomEvent((QListView*)self, (QEvent*)event);
}

void q_listview_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QListView_OnCustomEvent((QListView*)self, (intptr_t)callback);
}

void q_listview_connect_notify(void* self, void* signal) {
    QListView_ConnectNotify((QListView*)self, (QMetaMethod*)signal);
}

void q_listview_qbase_connect_notify(void* self, void* signal) {
    QListView_QBaseConnectNotify((QListView*)self, (QMetaMethod*)signal);
}

void q_listview_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QListView_OnConnectNotify((QListView*)self, (intptr_t)callback);
}

void q_listview_disconnect_notify(void* self, void* signal) {
    QListView_DisconnectNotify((QListView*)self, (QMetaMethod*)signal);
}

void q_listview_qbase_disconnect_notify(void* self, void* signal) {
    QListView_QBaseDisconnectNotify((QListView*)self, (QMetaMethod*)signal);
}

void q_listview_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QListView_OnDisconnectNotify((QListView*)self, (intptr_t)callback);
}

int32_t q_listview_state(void* self) {
    return QListView_State((QListView*)self);
}

int32_t q_listview_qbase_state(void* self) {
    return QListView_QBaseState((QListView*)self);
}

void q_listview_on_state(void* self, int32_t (*callback)()) {
    QListView_OnState((QListView*)self, (intptr_t)callback);
}

void q_listview_set_state(void* self, int32_t state) {
    QListView_SetState((QListView*)self, state);
}

void q_listview_qbase_set_state(void* self, int32_t state) {
    QListView_QBaseSetState((QListView*)self, state);
}

void q_listview_on_set_state(void* self, void (*callback)(void*, int32_t)) {
    QListView_OnSetState((QListView*)self, (intptr_t)callback);
}

void q_listview_schedule_delayed_items_layout(void* self) {
    QListView_ScheduleDelayedItemsLayout((QListView*)self);
}

void q_listview_qbase_schedule_delayed_items_layout(void* self) {
    QListView_QBaseScheduleDelayedItemsLayout((QListView*)self);
}

void q_listview_on_schedule_delayed_items_layout(void* self, void (*callback)()) {
    QListView_OnScheduleDelayedItemsLayout((QListView*)self, (intptr_t)callback);
}

void q_listview_execute_delayed_items_layout(void* self) {
    QListView_ExecuteDelayedItemsLayout((QListView*)self);
}

void q_listview_qbase_execute_delayed_items_layout(void* self) {
    QListView_QBaseExecuteDelayedItemsLayout((QListView*)self);
}

void q_listview_on_execute_delayed_items_layout(void* self, void (*callback)()) {
    QListView_OnExecuteDelayedItemsLayout((QListView*)self, (intptr_t)callback);
}

void q_listview_set_dirty_region(void* self, void* region) {
    QListView_SetDirtyRegion((QListView*)self, (QRegion*)region);
}

void q_listview_qbase_set_dirty_region(void* self, void* region) {
    QListView_QBaseSetDirtyRegion((QListView*)self, (QRegion*)region);
}

void q_listview_on_set_dirty_region(void* self, void (*callback)(void*, void*)) {
    QListView_OnSetDirtyRegion((QListView*)self, (intptr_t)callback);
}

void q_listview_scroll_dirty_region(void* self, int dx, int dy) {
    QListView_ScrollDirtyRegion((QListView*)self, dx, dy);
}

void q_listview_qbase_scroll_dirty_region(void* self, int dx, int dy) {
    QListView_QBaseScrollDirtyRegion((QListView*)self, dx, dy);
}

void q_listview_on_scroll_dirty_region(void* self, void (*callback)(void*, int, int)) {
    QListView_OnScrollDirtyRegion((QListView*)self, (intptr_t)callback);
}

QPoint* q_listview_dirty_region_offset(void* self) {
    return QListView_DirtyRegionOffset((QListView*)self);
}

QPoint* q_listview_qbase_dirty_region_offset(void* self) {
    return QListView_QBaseDirtyRegionOffset((QListView*)self);
}

void q_listview_on_dirty_region_offset(void* self, QPoint* (*callback)()) {
    QListView_OnDirtyRegionOffset((QListView*)self, (intptr_t)callback);
}

void q_listview_start_auto_scroll(void* self) {
    QListView_StartAutoScroll((QListView*)self);
}

void q_listview_qbase_start_auto_scroll(void* self) {
    QListView_QBaseStartAutoScroll((QListView*)self);
}

void q_listview_on_start_auto_scroll(void* self, void (*callback)()) {
    QListView_OnStartAutoScroll((QListView*)self, (intptr_t)callback);
}

void q_listview_stop_auto_scroll(void* self) {
    QListView_StopAutoScroll((QListView*)self);
}

void q_listview_qbase_stop_auto_scroll(void* self) {
    QListView_QBaseStopAutoScroll((QListView*)self);
}

void q_listview_on_stop_auto_scroll(void* self, void (*callback)()) {
    QListView_OnStopAutoScroll((QListView*)self, (intptr_t)callback);
}

void q_listview_do_auto_scroll(void* self) {
    QListView_DoAutoScroll((QListView*)self);
}

void q_listview_qbase_do_auto_scroll(void* self) {
    QListView_QBaseDoAutoScroll((QListView*)self);
}

void q_listview_on_do_auto_scroll(void* self, void (*callback)()) {
    QListView_OnDoAutoScroll((QListView*)self, (intptr_t)callback);
}

int32_t q_listview_drop_indicator_position(void* self) {
    return QListView_DropIndicatorPosition((QListView*)self);
}

int32_t q_listview_qbase_drop_indicator_position(void* self) {
    return QListView_QBaseDropIndicatorPosition((QListView*)self);
}

void q_listview_on_drop_indicator_position(void* self, int32_t (*callback)()) {
    QListView_OnDropIndicatorPosition((QListView*)self, (intptr_t)callback);
}

void q_listview_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QListView_SetViewportMargins((QListView*)self, left, top, right, bottom);
}

void q_listview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QListView_QBaseSetViewportMargins((QListView*)self, left, top, right, bottom);
}

void q_listview_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int)) {
    QListView_OnSetViewportMargins((QListView*)self, (intptr_t)callback);
}

QMargins* q_listview_viewport_margins(void* self) {
    return QListView_ViewportMargins((QListView*)self);
}

QMargins* q_listview_qbase_viewport_margins(void* self) {
    return QListView_QBaseViewportMargins((QListView*)self);
}

void q_listview_on_viewport_margins(void* self, QMargins* (*callback)()) {
    QListView_OnViewportMargins((QListView*)self, (intptr_t)callback);
}

void q_listview_draw_frame(void* self, void* param1) {
    QListView_DrawFrame((QListView*)self, (QPainter*)param1);
}

void q_listview_qbase_draw_frame(void* self, void* param1) {
    QListView_QBaseDrawFrame((QListView*)self, (QPainter*)param1);
}

void q_listview_on_draw_frame(void* self, void (*callback)(void*, void*)) {
    QListView_OnDrawFrame((QListView*)self, (intptr_t)callback);
}

void q_listview_update_micro_focus(void* self) {
    QListView_UpdateMicroFocus((QListView*)self);
}

void q_listview_qbase_update_micro_focus(void* self) {
    QListView_QBaseUpdateMicroFocus((QListView*)self);
}

void q_listview_on_update_micro_focus(void* self, void (*callback)()) {
    QListView_OnUpdateMicroFocus((QListView*)self, (intptr_t)callback);
}

void q_listview_create(void* self) {
    QListView_Create((QListView*)self);
}

void q_listview_qbase_create(void* self) {
    QListView_QBaseCreate((QListView*)self);
}

void q_listview_on_create(void* self, void (*callback)()) {
    QListView_OnCreate((QListView*)self, (intptr_t)callback);
}

void q_listview_destroy(void* self) {
    QListView_Destroy((QListView*)self);
}

void q_listview_qbase_destroy(void* self) {
    QListView_QBaseDestroy((QListView*)self);
}

void q_listview_on_destroy(void* self, void (*callback)()) {
    QListView_OnDestroy((QListView*)self, (intptr_t)callback);
}

bool q_listview_focus_next_child(void* self) {
    return QListView_FocusNextChild((QListView*)self);
}

bool q_listview_qbase_focus_next_child(void* self) {
    return QListView_QBaseFocusNextChild((QListView*)self);
}

void q_listview_on_focus_next_child(void* self, bool (*callback)()) {
    QListView_OnFocusNextChild((QListView*)self, (intptr_t)callback);
}

bool q_listview_focus_previous_child(void* self) {
    return QListView_FocusPreviousChild((QListView*)self);
}

bool q_listview_qbase_focus_previous_child(void* self) {
    return QListView_QBaseFocusPreviousChild((QListView*)self);
}

void q_listview_on_focus_previous_child(void* self, bool (*callback)()) {
    QListView_OnFocusPreviousChild((QListView*)self, (intptr_t)callback);
}

QObject* q_listview_sender(void* self) {
    return QListView_Sender((QListView*)self);
}

QObject* q_listview_qbase_sender(void* self) {
    return QListView_QBaseSender((QListView*)self);
}

void q_listview_on_sender(void* self, QObject* (*callback)()) {
    QListView_OnSender((QListView*)self, (intptr_t)callback);
}

int32_t q_listview_sender_signal_index(void* self) {
    return QListView_SenderSignalIndex((QListView*)self);
}

int32_t q_listview_qbase_sender_signal_index(void* self) {
    return QListView_QBaseSenderSignalIndex((QListView*)self);
}

void q_listview_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QListView_OnSenderSignalIndex((QListView*)self, (intptr_t)callback);
}

int32_t q_listview_receivers(void* self, const char* signal) {
    return QListView_Receivers((QListView*)self, signal);
}

int32_t q_listview_qbase_receivers(void* self, const char* signal) {
    return QListView_QBaseReceivers((QListView*)self, signal);
}

void q_listview_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QListView_OnReceivers((QListView*)self, (intptr_t)callback);
}

bool q_listview_is_signal_connected(void* self, void* signal) {
    return QListView_IsSignalConnected((QListView*)self, (QMetaMethod*)signal);
}

bool q_listview_qbase_is_signal_connected(void* self, void* signal) {
    return QListView_QBaseIsSignalConnected((QListView*)self, (QMetaMethod*)signal);
}

void q_listview_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QListView_OnIsSignalConnected((QListView*)self, (intptr_t)callback);
}

double q_listview_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QListView_GetDecodedMetricF((QListView*)self, metricA, metricB);
}

double q_listview_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QListView_QBaseGetDecodedMetricF((QListView*)self, metricA, metricB);
}

void q_listview_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QListView_OnGetDecodedMetricF((QListView*)self, (intptr_t)callback);
}

void q_listview_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_listview_delete(void* self) {
    QListView_Delete((QListView*)(self));
}
