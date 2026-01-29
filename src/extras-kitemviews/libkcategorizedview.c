#include "libkcategorydrawer.hpp"
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
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkcategorizedview.hpp"
#include "libkcategorizedview.h"

KCategorizedView* k_categorizedview_new(void* parent) {
    return KCategorizedView_new((QWidget*)parent);
}

KCategorizedView* k_categorizedview_new2() {
    return KCategorizedView_new2();
}

const QMetaObject* k_categorizedview_meta_object(void* self) {
    return KCategorizedView_MetaObject((KCategorizedView*)self);
}

void k_categorizedview_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KCategorizedView_OnMetaObject((KCategorizedView*)self, (intptr_t)callback);
}

const QMetaObject* k_categorizedview_qbase_meta_object(void* self) {
    return KCategorizedView_QBaseMetaObject((KCategorizedView*)self);
}

void* k_categorizedview_metacast(void* self, const char* param1) {
    return KCategorizedView_Metacast((KCategorizedView*)self, param1);
}

void k_categorizedview_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KCategorizedView_OnMetacast((KCategorizedView*)self, (intptr_t)callback);
}

void* k_categorizedview_qbase_metacast(void* self, const char* param1) {
    return KCategorizedView_QBaseMetacast((KCategorizedView*)self, param1);
}

int32_t k_categorizedview_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KCategorizedView_Metacall((KCategorizedView*)self, param1, param2, param3);
}

void k_categorizedview_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KCategorizedView_OnMetacall((KCategorizedView*)self, (intptr_t)callback);
}

int32_t k_categorizedview_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KCategorizedView_QBaseMetacall((KCategorizedView*)self, param1, param2, param3);
}

const char* k_categorizedview_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_categorizedview_set_model(void* self, void* model) {
    KCategorizedView_SetModel((KCategorizedView*)self, (QAbstractItemModel*)model);
}

void k_categorizedview_on_set_model(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnSetModel((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_qbase_set_model(void* self, void* model) {
    KCategorizedView_QBaseSetModel((KCategorizedView*)self, (QAbstractItemModel*)model);
}

void k_categorizedview_set_grid_size(void* self, void* size) {
    KCategorizedView_SetGridSize((KCategorizedView*)self, (QSize*)size);
}

void k_categorizedview_set_grid_size_own(void* self, void* size) {
    KCategorizedView_SetGridSizeOwn((KCategorizedView*)self, (QSize*)size);
}

QRect* k_categorizedview_visual_rect(void* self, void* index) {
    return KCategorizedView_VisualRect((KCategorizedView*)self, (QModelIndex*)index);
}

void k_categorizedview_on_visual_rect(void* self, QRect* (*callback)(void*, void*)) {
    KCategorizedView_OnVisualRect((KCategorizedView*)self, (intptr_t)callback);
}

QRect* k_categorizedview_qbase_visual_rect(void* self, void* index) {
    return KCategorizedView_QBaseVisualRect((KCategorizedView*)self, (QModelIndex*)index);
}

KCategoryDrawer* k_categorizedview_category_drawer(void* self) {
    return KCategorizedView_CategoryDrawer((KCategorizedView*)self);
}

void k_categorizedview_set_category_drawer(void* self, void* categoryDrawer) {
    KCategorizedView_SetCategoryDrawer((KCategorizedView*)self, (KCategoryDrawer*)categoryDrawer);
}

int32_t k_categorizedview_category_spacing(void* self) {
    return KCategorizedView_CategorySpacing((KCategorizedView*)self);
}

void k_categorizedview_set_category_spacing(void* self, int categorySpacing) {
    KCategorizedView_SetCategorySpacing((KCategorizedView*)self, categorySpacing);
}

bool k_categorizedview_alternating_block_colors(void* self) {
    return KCategorizedView_AlternatingBlockColors((KCategorizedView*)self);
}

void k_categorizedview_set_alternating_block_colors(void* self, bool enable) {
    KCategorizedView_SetAlternatingBlockColors((KCategorizedView*)self, enable);
}

bool k_categorizedview_collapsible_blocks(void* self) {
    return KCategorizedView_CollapsibleBlocks((KCategorizedView*)self);
}

void k_categorizedview_set_collapsible_blocks(void* self, bool enable) {
    KCategorizedView_SetCollapsibleBlocks((KCategorizedView*)self, enable);
}

libqt_list /* of QModelIndex* */ k_categorizedview_block(void* self, const char* category) {
    libqt_list _arr = KCategorizedView_Block((KCategorizedView*)self, qstring(category));
    return _arr;
}

libqt_list /* of QModelIndex* */ k_categorizedview_block2(void* self, void* representative) {
    libqt_list _arr = KCategorizedView_Block2((KCategorizedView*)self, (QModelIndex*)representative);
    return _arr;
}

QModelIndex* k_categorizedview_index_at(void* self, void* point) {
    return KCategorizedView_IndexAt((KCategorizedView*)self, (QPoint*)point);
}

void k_categorizedview_on_index_at(void* self, QModelIndex* (*callback)(void*, void*)) {
    KCategorizedView_OnIndexAt((KCategorizedView*)self, (intptr_t)callback);
}

QModelIndex* k_categorizedview_qbase_index_at(void* self, void* point) {
    return KCategorizedView_QBaseIndexAt((KCategorizedView*)self, (QPoint*)point);
}

void k_categorizedview_reset(void* self) {
    KCategorizedView_Reset((KCategorizedView*)self);
}

void k_categorizedview_on_reset(void* self, void (*callback)()) {
    KCategorizedView_OnReset((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_qbase_reset(void* self) {
    KCategorizedView_QBaseReset((KCategorizedView*)self);
}

void k_categorizedview_category_spacing_changed(void* self, int spacing) {
    KCategorizedView_CategorySpacingChanged((KCategorizedView*)self, spacing);
}

void k_categorizedview_on_category_spacing_changed(void* self, void (*callback)(void*, int)) {
    KCategorizedView_Connect_CategorySpacingChanged((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_alternating_block_colors_changed(void* self, bool enable) {
    KCategorizedView_AlternatingBlockColorsChanged((KCategorizedView*)self, enable);
}

void k_categorizedview_on_alternating_block_colors_changed(void* self, void (*callback)(void*, bool)) {
    KCategorizedView_Connect_AlternatingBlockColorsChanged((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_collapsible_blocks_changed(void* self, bool enable) {
    KCategorizedView_CollapsibleBlocksChanged((KCategorizedView*)self, enable);
}

void k_categorizedview_on_collapsible_blocks_changed(void* self, void (*callback)(void*, bool)) {
    KCategorizedView_Connect_CollapsibleBlocksChanged((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_paint_event(void* self, void* event) {
    KCategorizedView_PaintEvent((KCategorizedView*)self, (QPaintEvent*)event);
}

void k_categorizedview_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnPaintEvent((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_qbase_paint_event(void* self, void* event) {
    KCategorizedView_QBasePaintEvent((KCategorizedView*)self, (QPaintEvent*)event);
}

void k_categorizedview_resize_event(void* self, void* event) {
    KCategorizedView_ResizeEvent((KCategorizedView*)self, (QResizeEvent*)event);
}

void k_categorizedview_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnResizeEvent((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_qbase_resize_event(void* self, void* event) {
    KCategorizedView_QBaseResizeEvent((KCategorizedView*)self, (QResizeEvent*)event);
}

void k_categorizedview_set_selection(void* self, void* rect, int32_t flags) {
    KCategorizedView_SetSelection((KCategorizedView*)self, (QRect*)rect, flags);
}

void k_categorizedview_on_set_selection(void* self, void (*callback)(void*, void*, int32_t)) {
    KCategorizedView_OnSetSelection((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_qbase_set_selection(void* self, void* rect, int32_t flags) {
    KCategorizedView_QBaseSetSelection((KCategorizedView*)self, (QRect*)rect, flags);
}

void k_categorizedview_mouse_move_event(void* self, void* event) {
    KCategorizedView_MouseMoveEvent((KCategorizedView*)self, (QMouseEvent*)event);
}

void k_categorizedview_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnMouseMoveEvent((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_qbase_mouse_move_event(void* self, void* event) {
    KCategorizedView_QBaseMouseMoveEvent((KCategorizedView*)self, (QMouseEvent*)event);
}

void k_categorizedview_mouse_press_event(void* self, void* event) {
    KCategorizedView_MousePressEvent((KCategorizedView*)self, (QMouseEvent*)event);
}

void k_categorizedview_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnMousePressEvent((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_qbase_mouse_press_event(void* self, void* event) {
    KCategorizedView_QBaseMousePressEvent((KCategorizedView*)self, (QMouseEvent*)event);
}

void k_categorizedview_mouse_release_event(void* self, void* event) {
    KCategorizedView_MouseReleaseEvent((KCategorizedView*)self, (QMouseEvent*)event);
}

void k_categorizedview_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnMouseReleaseEvent((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_qbase_mouse_release_event(void* self, void* event) {
    KCategorizedView_QBaseMouseReleaseEvent((KCategorizedView*)self, (QMouseEvent*)event);
}

void k_categorizedview_leave_event(void* self, void* event) {
    KCategorizedView_LeaveEvent((KCategorizedView*)self, (QEvent*)event);
}

void k_categorizedview_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnLeaveEvent((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_qbase_leave_event(void* self, void* event) {
    KCategorizedView_QBaseLeaveEvent((KCategorizedView*)self, (QEvent*)event);
}

void k_categorizedview_start_drag(void* self, int32_t supportedActions) {
    KCategorizedView_StartDrag((KCategorizedView*)self, supportedActions);
}

void k_categorizedview_on_start_drag(void* self, void (*callback)(void*, int32_t)) {
    KCategorizedView_OnStartDrag((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_qbase_start_drag(void* self, int32_t supportedActions) {
    KCategorizedView_QBaseStartDrag((KCategorizedView*)self, supportedActions);
}

void k_categorizedview_drag_move_event(void* self, void* event) {
    KCategorizedView_DragMoveEvent((KCategorizedView*)self, (QDragMoveEvent*)event);
}

void k_categorizedview_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnDragMoveEvent((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_qbase_drag_move_event(void* self, void* event) {
    KCategorizedView_QBaseDragMoveEvent((KCategorizedView*)self, (QDragMoveEvent*)event);
}

void k_categorizedview_drag_enter_event(void* self, void* event) {
    KCategorizedView_DragEnterEvent((KCategorizedView*)self, (QDragEnterEvent*)event);
}

void k_categorizedview_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnDragEnterEvent((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_qbase_drag_enter_event(void* self, void* event) {
    KCategorizedView_QBaseDragEnterEvent((KCategorizedView*)self, (QDragEnterEvent*)event);
}

void k_categorizedview_drag_leave_event(void* self, void* event) {
    KCategorizedView_DragLeaveEvent((KCategorizedView*)self, (QDragLeaveEvent*)event);
}

void k_categorizedview_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnDragLeaveEvent((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_qbase_drag_leave_event(void* self, void* event) {
    KCategorizedView_QBaseDragLeaveEvent((KCategorizedView*)self, (QDragLeaveEvent*)event);
}

void k_categorizedview_drop_event(void* self, void* event) {
    KCategorizedView_DropEvent((KCategorizedView*)self, (QDropEvent*)event);
}

void k_categorizedview_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnDropEvent((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_qbase_drop_event(void* self, void* event) {
    KCategorizedView_QBaseDropEvent((KCategorizedView*)self, (QDropEvent*)event);
}

QModelIndex* k_categorizedview_move_cursor(void* self, int32_t cursorAction, int32_t modifiers) {
    return KCategorizedView_MoveCursor((KCategorizedView*)self, cursorAction, modifiers);
}

void k_categorizedview_on_move_cursor(void* self, QModelIndex* (*callback)(void*, int32_t, int32_t)) {
    KCategorizedView_OnMoveCursor((KCategorizedView*)self, (intptr_t)callback);
}

QModelIndex* k_categorizedview_qbase_move_cursor(void* self, int32_t cursorAction, int32_t modifiers) {
    return KCategorizedView_QBaseMoveCursor((KCategorizedView*)self, cursorAction, modifiers);
}

void k_categorizedview_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    KCategorizedView_RowsAboutToBeRemoved((KCategorizedView*)self, (QModelIndex*)parent, start, end);
}

void k_categorizedview_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    KCategorizedView_OnRowsAboutToBeRemoved((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    KCategorizedView_QBaseRowsAboutToBeRemoved((KCategorizedView*)self, (QModelIndex*)parent, start, end);
}

void k_categorizedview_update_geometries(void* self) {
    KCategorizedView_UpdateGeometries((KCategorizedView*)self);
}

void k_categorizedview_on_update_geometries(void* self, void (*callback)()) {
    KCategorizedView_OnUpdateGeometries((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_qbase_update_geometries(void* self) {
    KCategorizedView_QBaseUpdateGeometries((KCategorizedView*)self);
}

void k_categorizedview_current_changed(void* self, void* current, void* previous) {
    KCategorizedView_CurrentChanged((KCategorizedView*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

void k_categorizedview_on_current_changed(void* self, void (*callback)(void*, void*, void*)) {
    KCategorizedView_OnCurrentChanged((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_qbase_current_changed(void* self, void* current, void* previous) {
    KCategorizedView_QBaseCurrentChanged((KCategorizedView*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

void k_categorizedview_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles) {
    KCategorizedView_DataChanged((KCategorizedView*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void k_categorizedview_on_data_changed(void* self, void (*callback)(void*, void*, void*, libqt_list /* of int */)) {
    KCategorizedView_OnDataChanged((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_qbase_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles) {
    KCategorizedView_QBaseDataChanged((KCategorizedView*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void k_categorizedview_rows_inserted(void* self, void* parent, int start, int end) {
    KCategorizedView_RowsInserted((KCategorizedView*)self, (QModelIndex*)parent, start, end);
}

void k_categorizedview_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    KCategorizedView_OnRowsInserted((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_qbase_rows_inserted(void* self, void* parent, int start, int end) {
    KCategorizedView_QBaseRowsInserted((KCategorizedView*)self, (QModelIndex*)parent, start, end);
}

void k_categorizedview_slot_layout_changed(void* self) {
    KCategorizedView_SlotLayoutChanged((KCategorizedView*)self);
}

void k_categorizedview_on_slot_layout_changed(void* self, void (*callback)()) {
    KCategorizedView_OnSlotLayoutChanged((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_qbase_slot_layout_changed(void* self) {
    KCategorizedView_QBaseSlotLayoutChanged((KCategorizedView*)self);
}

const char* k_categorizedview_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_categorizedview_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_categorizedview_set_movement(void* self, int32_t movement) {
    QListView_SetMovement((QListView*)self, movement);
}

int32_t k_categorizedview_movement(void* self) {
    return QListView_Movement((QListView*)self);
}

void k_categorizedview_set_flow(void* self, int32_t flow) {
    QListView_SetFlow((QListView*)self, flow);
}

int32_t k_categorizedview_flow(void* self) {
    return QListView_Flow((QListView*)self);
}

void k_categorizedview_set_wrapping(void* self, bool enable) {
    QListView_SetWrapping((QListView*)self, enable);
}

bool k_categorizedview_is_wrapping(void* self) {
    return QListView_IsWrapping((QListView*)self);
}

void k_categorizedview_set_resize_mode(void* self, int32_t mode) {
    QListView_SetResizeMode((QListView*)self, mode);
}

int32_t k_categorizedview_resize_mode(void* self) {
    return QListView_ResizeMode((QListView*)self);
}

void k_categorizedview_set_layout_mode(void* self, int32_t mode) {
    QListView_SetLayoutMode((QListView*)self, mode);
}

int32_t k_categorizedview_layout_mode(void* self) {
    return QListView_LayoutMode((QListView*)self);
}

void k_categorizedview_set_spacing(void* self, int space) {
    QListView_SetSpacing((QListView*)self, space);
}

int32_t k_categorizedview_spacing(void* self) {
    return QListView_Spacing((QListView*)self);
}

void k_categorizedview_set_batch_size(void* self, int batchSize) {
    QListView_SetBatchSize((QListView*)self, batchSize);
}

int32_t k_categorizedview_batch_size(void* self) {
    return QListView_BatchSize((QListView*)self);
}

QSize* k_categorizedview_grid_size(void* self) {
    return QListView_GridSize((QListView*)self);
}

void k_categorizedview_set_view_mode(void* self, int32_t mode) {
    QListView_SetViewMode((QListView*)self, mode);
}

int32_t k_categorizedview_view_mode(void* self) {
    return QListView_ViewMode((QListView*)self);
}

void k_categorizedview_clear_property_flags(void* self) {
    QListView_ClearPropertyFlags((QListView*)self);
}

bool k_categorizedview_is_row_hidden(void* self, int row) {
    return QListView_IsRowHidden((QListView*)self, row);
}

void k_categorizedview_set_row_hidden(void* self, int row, bool hide) {
    QListView_SetRowHidden((QListView*)self, row, hide);
}

void k_categorizedview_set_model_column(void* self, int column) {
    QListView_SetModelColumn((QListView*)self, column);
}

int32_t k_categorizedview_model_column(void* self) {
    return QListView_ModelColumn((QListView*)self);
}

void k_categorizedview_set_uniform_item_sizes(void* self, bool enable) {
    QListView_SetUniformItemSizes((QListView*)self, enable);
}

bool k_categorizedview_uniform_item_sizes(void* self) {
    return QListView_UniformItemSizes((QListView*)self);
}

void k_categorizedview_set_word_wrap(void* self, bool on) {
    QListView_SetWordWrap((QListView*)self, on);
}

bool k_categorizedview_word_wrap(void* self) {
    return QListView_WordWrap((QListView*)self);
}

void k_categorizedview_set_selection_rect_visible(void* self, bool show) {
    QListView_SetSelectionRectVisible((QListView*)self, show);
}

bool k_categorizedview_is_selection_rect_visible(void* self) {
    return QListView_IsSelectionRectVisible((QListView*)self);
}

void k_categorizedview_set_item_alignment(void* self, int32_t alignment) {
    QListView_SetItemAlignment((QListView*)self, alignment);
}

int32_t k_categorizedview_item_alignment(void* self) {
    return QListView_ItemAlignment((QListView*)self);
}

void k_categorizedview_indexes_moved(void* self, libqt_list /* of QModelIndex* */ indexes) {
    QListView_IndexesMoved((QListView*)self, indexes);
}

void k_categorizedview_on_indexes_moved(void* self, void (*callback)(void*, QModelIndex**)) {
    QListView_Connect_IndexesMoved((QListView*)self, (intptr_t)callback);
}

QAbstractItemModel* k_categorizedview_model(void* self) {
    return QAbstractItemView_Model((QAbstractItemView*)self);
}

QItemSelectionModel* k_categorizedview_selection_model(void* self) {
    return QAbstractItemView_SelectionModel((QAbstractItemView*)self);
}

void k_categorizedview_set_item_delegate(void* self, void* delegate) {
    QAbstractItemView_SetItemDelegate((QAbstractItemView*)self, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* k_categorizedview_item_delegate(void* self) {
    return QAbstractItemView_ItemDelegate((QAbstractItemView*)self);
}

void k_categorizedview_set_selection_mode(void* self, int32_t mode) {
    QAbstractItemView_SetSelectionMode((QAbstractItemView*)self, mode);
}

int32_t k_categorizedview_selection_mode(void* self) {
    return QAbstractItemView_SelectionMode((QAbstractItemView*)self);
}

void k_categorizedview_set_selection_behavior(void* self, int32_t behavior) {
    QAbstractItemView_SetSelectionBehavior((QAbstractItemView*)self, behavior);
}

int32_t k_categorizedview_selection_behavior(void* self) {
    return QAbstractItemView_SelectionBehavior((QAbstractItemView*)self);
}

QModelIndex* k_categorizedview_current_index(void* self) {
    return QAbstractItemView_CurrentIndex((QAbstractItemView*)self);
}

QModelIndex* k_categorizedview_root_index(void* self) {
    return QAbstractItemView_RootIndex((QAbstractItemView*)self);
}

void k_categorizedview_set_edit_triggers(void* self, int32_t triggers) {
    QAbstractItemView_SetEditTriggers((QAbstractItemView*)self, triggers);
}

int32_t k_categorizedview_edit_triggers(void* self) {
    return QAbstractItemView_EditTriggers((QAbstractItemView*)self);
}

void k_categorizedview_set_vertical_scroll_mode(void* self, int32_t mode) {
    QAbstractItemView_SetVerticalScrollMode((QAbstractItemView*)self, mode);
}

int32_t k_categorizedview_vertical_scroll_mode(void* self) {
    return QAbstractItemView_VerticalScrollMode((QAbstractItemView*)self);
}

void k_categorizedview_reset_vertical_scroll_mode(void* self) {
    QAbstractItemView_ResetVerticalScrollMode((QAbstractItemView*)self);
}

void k_categorizedview_set_horizontal_scroll_mode(void* self, int32_t mode) {
    QAbstractItemView_SetHorizontalScrollMode((QAbstractItemView*)self, mode);
}

int32_t k_categorizedview_horizontal_scroll_mode(void* self) {
    return QAbstractItemView_HorizontalScrollMode((QAbstractItemView*)self);
}

void k_categorizedview_reset_horizontal_scroll_mode(void* self) {
    QAbstractItemView_ResetHorizontalScrollMode((QAbstractItemView*)self);
}

void k_categorizedview_set_auto_scroll(void* self, bool enable) {
    QAbstractItemView_SetAutoScroll((QAbstractItemView*)self, enable);
}

bool k_categorizedview_has_auto_scroll(void* self) {
    return QAbstractItemView_HasAutoScroll((QAbstractItemView*)self);
}

void k_categorizedview_set_auto_scroll_margin(void* self, int margin) {
    QAbstractItemView_SetAutoScrollMargin((QAbstractItemView*)self, margin);
}

int32_t k_categorizedview_auto_scroll_margin(void* self) {
    return QAbstractItemView_AutoScrollMargin((QAbstractItemView*)self);
}

void k_categorizedview_set_tab_key_navigation(void* self, bool enable) {
    QAbstractItemView_SetTabKeyNavigation((QAbstractItemView*)self, enable);
}

bool k_categorizedview_tab_key_navigation(void* self) {
    return QAbstractItemView_TabKeyNavigation((QAbstractItemView*)self);
}

void k_categorizedview_set_drop_indicator_shown(void* self, bool enable) {
    QAbstractItemView_SetDropIndicatorShown((QAbstractItemView*)self, enable);
}

bool k_categorizedview_show_drop_indicator(void* self) {
    return QAbstractItemView_ShowDropIndicator((QAbstractItemView*)self);
}

void k_categorizedview_set_drag_enabled(void* self, bool enable) {
    QAbstractItemView_SetDragEnabled((QAbstractItemView*)self, enable);
}

bool k_categorizedview_drag_enabled(void* self) {
    return QAbstractItemView_DragEnabled((QAbstractItemView*)self);
}

void k_categorizedview_set_drag_drop_overwrite_mode(void* self, bool overwrite) {
    QAbstractItemView_SetDragDropOverwriteMode((QAbstractItemView*)self, overwrite);
}

bool k_categorizedview_drag_drop_overwrite_mode(void* self) {
    return QAbstractItemView_DragDropOverwriteMode((QAbstractItemView*)self);
}

void k_categorizedview_set_drag_drop_mode(void* self, int32_t behavior) {
    QAbstractItemView_SetDragDropMode((QAbstractItemView*)self, behavior);
}

int32_t k_categorizedview_drag_drop_mode(void* self) {
    return QAbstractItemView_DragDropMode((QAbstractItemView*)self);
}

void k_categorizedview_set_default_drop_action(void* self, int32_t dropAction) {
    QAbstractItemView_SetDefaultDropAction((QAbstractItemView*)self, dropAction);
}

int32_t k_categorizedview_default_drop_action(void* self) {
    return QAbstractItemView_DefaultDropAction((QAbstractItemView*)self);
}

void k_categorizedview_set_alternating_row_colors(void* self, bool enable) {
    QAbstractItemView_SetAlternatingRowColors((QAbstractItemView*)self, enable);
}

bool k_categorizedview_alternating_row_colors(void* self) {
    return QAbstractItemView_AlternatingRowColors((QAbstractItemView*)self);
}

void k_categorizedview_set_icon_size(void* self, void* size) {
    QAbstractItemView_SetIconSize((QAbstractItemView*)self, (QSize*)size);
}

QSize* k_categorizedview_icon_size(void* self) {
    return QAbstractItemView_IconSize((QAbstractItemView*)self);
}

void k_categorizedview_set_text_elide_mode(void* self, int32_t mode) {
    QAbstractItemView_SetTextElideMode((QAbstractItemView*)self, mode);
}

int32_t k_categorizedview_text_elide_mode(void* self) {
    return QAbstractItemView_TextElideMode((QAbstractItemView*)self);
}

QSize* k_categorizedview_size_hint_for_index(void* self, void* index) {
    return QAbstractItemView_SizeHintForIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_categorizedview_open_persistent_editor(void* self, void* index) {
    QAbstractItemView_OpenPersistentEditor((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_categorizedview_close_persistent_editor(void* self, void* index) {
    QAbstractItemView_ClosePersistentEditor((QAbstractItemView*)self, (QModelIndex*)index);
}

bool k_categorizedview_is_persistent_editor_open(void* self, void* index) {
    return QAbstractItemView_IsPersistentEditorOpen((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_categorizedview_set_index_widget(void* self, void* index, void* widget) {
    QAbstractItemView_SetIndexWidget((QAbstractItemView*)self, (QModelIndex*)index, (QWidget*)widget);
}

QWidget* k_categorizedview_index_widget(void* self, void* index) {
    return QAbstractItemView_IndexWidget((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_categorizedview_set_item_delegate_for_row(void* self, int row, void* delegate) {
    QAbstractItemView_SetItemDelegateForRow((QAbstractItemView*)self, row, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* k_categorizedview_item_delegate_for_row(void* self, int row) {
    return QAbstractItemView_ItemDelegateForRow((QAbstractItemView*)self, row);
}

void k_categorizedview_set_item_delegate_for_column(void* self, int column, void* delegate) {
    QAbstractItemView_SetItemDelegateForColumn((QAbstractItemView*)self, column, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* k_categorizedview_item_delegate_for_column(void* self, int column) {
    return QAbstractItemView_ItemDelegateForColumn((QAbstractItemView*)self, column);
}

QAbstractItemDelegate* k_categorizedview_item_delegate2(void* self, void* index) {
    return QAbstractItemView_ItemDelegate2((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_categorizedview_edit(void* self, void* index) {
    QAbstractItemView_Edit((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_categorizedview_clear_selection(void* self) {
    QAbstractItemView_ClearSelection((QAbstractItemView*)self);
}

void k_categorizedview_set_current_index(void* self, void* index) {
    QAbstractItemView_SetCurrentIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_categorizedview_scroll_to_top(void* self) {
    QAbstractItemView_ScrollToTop((QAbstractItemView*)self);
}

void k_categorizedview_scroll_to_bottom(void* self) {
    QAbstractItemView_ScrollToBottom((QAbstractItemView*)self);
}

void k_categorizedview_update(void* self, void* index) {
    QAbstractItemView_Update((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_categorizedview_pressed(void* self, void* index) {
    QAbstractItemView_Pressed((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_categorizedview_on_pressed(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Pressed((QAbstractItemView*)self, (intptr_t)callback);
}

void k_categorizedview_clicked(void* self, void* index) {
    QAbstractItemView_Clicked((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_categorizedview_on_clicked(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Clicked((QAbstractItemView*)self, (intptr_t)callback);
}

void k_categorizedview_double_clicked(void* self, void* index) {
    QAbstractItemView_DoubleClicked((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_categorizedview_on_double_clicked(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_DoubleClicked((QAbstractItemView*)self, (intptr_t)callback);
}

void k_categorizedview_activated(void* self, void* index) {
    QAbstractItemView_Activated((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_categorizedview_on_activated(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Activated((QAbstractItemView*)self, (intptr_t)callback);
}

void k_categorizedview_entered(void* self, void* index) {
    QAbstractItemView_Entered((QAbstractItemView*)self, (QModelIndex*)index);
}

void k_categorizedview_on_entered(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Entered((QAbstractItemView*)self, (intptr_t)callback);
}

void k_categorizedview_viewport_entered(void* self) {
    QAbstractItemView_ViewportEntered((QAbstractItemView*)self);
}

void k_categorizedview_on_viewport_entered(void* self, void (*callback)(void*)) {
    QAbstractItemView_Connect_ViewportEntered((QAbstractItemView*)self, (intptr_t)callback);
}

void k_categorizedview_icon_size_changed(void* self, void* size) {
    QAbstractItemView_IconSizeChanged((QAbstractItemView*)self, (QSize*)size);
}

void k_categorizedview_on_icon_size_changed(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_IconSizeChanged((QAbstractItemView*)self, (intptr_t)callback);
}

int32_t k_categorizedview_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

void k_categorizedview_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

QScrollBar* k_categorizedview_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

void k_categorizedview_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

int32_t k_categorizedview_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

void k_categorizedview_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

QScrollBar* k_categorizedview_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

void k_categorizedview_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

QWidget* k_categorizedview_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

void k_categorizedview_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

void k_categorizedview_add_scroll_bar_widget(void* self, void* widget, int32_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

libqt_list /* of QWidget* */ k_categorizedview_scroll_bar_widgets(void* self, int32_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

QWidget* k_categorizedview_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

void k_categorizedview_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

QSize* k_categorizedview_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

int32_t k_categorizedview_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

void k_categorizedview_set_size_adjust_policy(void* self, int32_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

int32_t k_categorizedview_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void k_categorizedview_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t k_categorizedview_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int32_t k_categorizedview_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void k_categorizedview_set_frame_shape(void* self, int32_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int32_t k_categorizedview_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void k_categorizedview_set_frame_shadow(void* self, int32_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t k_categorizedview_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void k_categorizedview_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t k_categorizedview_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void k_categorizedview_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* k_categorizedview_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void k_categorizedview_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t k_categorizedview_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_categorizedview_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_categorizedview_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_categorizedview_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_categorizedview_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_categorizedview_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_categorizedview_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_categorizedview_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_categorizedview_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_categorizedview_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_categorizedview_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_categorizedview_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_categorizedview_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_categorizedview_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_categorizedview_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_categorizedview_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_categorizedview_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_categorizedview_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_categorizedview_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_categorizedview_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_categorizedview_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_categorizedview_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_categorizedview_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_categorizedview_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_categorizedview_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_categorizedview_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_categorizedview_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_categorizedview_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_categorizedview_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_categorizedview_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_categorizedview_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_categorizedview_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_categorizedview_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_categorizedview_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_categorizedview_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_categorizedview_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_categorizedview_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_categorizedview_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_categorizedview_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_categorizedview_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_categorizedview_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_categorizedview_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_categorizedview_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_categorizedview_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_categorizedview_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_categorizedview_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_categorizedview_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_categorizedview_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_categorizedview_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_categorizedview_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_categorizedview_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_categorizedview_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_categorizedview_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_categorizedview_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_categorizedview_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_categorizedview_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_categorizedview_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_categorizedview_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_categorizedview_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_categorizedview_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_categorizedview_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_categorizedview_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_categorizedview_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_categorizedview_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_categorizedview_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_categorizedview_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_categorizedview_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_categorizedview_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_categorizedview_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_categorizedview_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_categorizedview_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_categorizedview_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_categorizedview_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_categorizedview_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_categorizedview_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_categorizedview_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_categorizedview_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_categorizedview_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_categorizedview_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_categorizedview_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_categorizedview_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_categorizedview_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_categorizedview_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_categorizedview_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_categorizedview_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_categorizedview_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_categorizedview_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_categorizedview_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_categorizedview_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_categorizedview_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_categorizedview_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_categorizedview_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_categorizedview_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_categorizedview_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_categorizedview_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_categorizedview_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_categorizedview_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_categorizedview_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_categorizedview_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_categorizedview_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_categorizedview_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_categorizedview_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_categorizedview_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_categorizedview_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_categorizedview_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_categorizedview_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_categorizedview_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_categorizedview_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_categorizedview_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_categorizedview_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_categorizedview_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_categorizedview_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_categorizedview_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_categorizedview_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_categorizedview_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_categorizedview_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_categorizedview_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_categorizedview_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_categorizedview_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_categorizedview_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_categorizedview_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_categorizedview_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_categorizedview_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_categorizedview_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_categorizedview_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_categorizedview_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_categorizedview_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_categorizedview_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_categorizedview_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_categorizedview_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_categorizedview_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_categorizedview_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_categorizedview_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_categorizedview_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_categorizedview_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_categorizedview_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_categorizedview_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_categorizedview_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_categorizedview_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_categorizedview_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_categorizedview_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_categorizedview_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_categorizedview_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_categorizedview_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_categorizedview_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_categorizedview_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_categorizedview_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_categorizedview_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_categorizedview_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_categorizedview_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_categorizedview_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_categorizedview_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_categorizedview_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_categorizedview_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_categorizedview_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_categorizedview_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_categorizedview_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_categorizedview_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_categorizedview_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_categorizedview_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_categorizedview_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_categorizedview_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_categorizedview_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_categorizedview_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_categorizedview_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_categorizedview_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_categorizedview_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_categorizedview_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_categorizedview_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_categorizedview_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_categorizedview_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_categorizedview_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_categorizedview_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_categorizedview_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_categorizedview_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_categorizedview_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_categorizedview_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_categorizedview_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_categorizedview_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_categorizedview_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_categorizedview_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_categorizedview_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_categorizedview_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_categorizedview_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_categorizedview_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_categorizedview_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_categorizedview_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_categorizedview_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_categorizedview_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_categorizedview_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_categorizedview_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_categorizedview_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_categorizedview_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_categorizedview_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_categorizedview_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_categorizedview_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_categorizedview_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_categorizedview_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_categorizedview_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_categorizedview_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_categorizedview_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_categorizedview_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_categorizedview_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_categorizedview_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_categorizedview_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_categorizedview_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_categorizedview_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_categorizedview_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_categorizedview_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_categorizedview_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_categorizedview_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_categorizedview_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_categorizedview_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_categorizedview_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_categorizedview_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_categorizedview_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_categorizedview_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_categorizedview_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_categorizedview_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_categorizedview_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_categorizedview_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_categorizedview_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_categorizedview_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_categorizedview_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_categorizedview_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_categorizedview_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_categorizedview_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_categorizedview_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_categorizedview_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_categorizedview_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_categorizedview_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_categorizedview_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_categorizedview_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_categorizedview_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_categorizedview_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_categorizedview_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_categorizedview_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_categorizedview_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_categorizedview_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_categorizedview_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_categorizedview_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_categorizedview_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_categorizedview_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_categorizedview_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_categorizedview_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_categorizedview_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_categorizedview_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_categorizedview_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_categorizedview_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_categorizedview_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_categorizedview_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_categorizedview_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_categorizedview_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_categorizedview_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_categorizedview_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_categorizedview_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_categorizedview_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_categorizedview_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_categorizedview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_categorizedview_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_categorizedview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_categorizedview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_categorizedview_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_categorizedview_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_categorizedview_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_categorizedview_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_categorizedview_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_categorizedview_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_categorizedview_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_categorizedview_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_categorizedview_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_categorizedview_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_categorizedview_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_categorizedview_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_categorizedview_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_categorizedview_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_categorizedview_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_categorizedview_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_categorizedview_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_categorizedview_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_categorizedview_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_categorizedview_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_categorizedview_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_categorizedview_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_categorizedview_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_categorizedview_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_categorizedview_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_categorizedview_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_categorizedview_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_categorizedview_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_categorizedview_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_categorizedview_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_categorizedview_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_categorizedview_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_categorizedview_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_categorizedview_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_categorizedview_dynamic_property_names\n");
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

QBindingStorage* k_categorizedview_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_categorizedview_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_categorizedview_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_categorizedview_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_categorizedview_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_categorizedview_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_categorizedview_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_categorizedview_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_categorizedview_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_categorizedview_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_categorizedview_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_categorizedview_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_categorizedview_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_categorizedview_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_categorizedview_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_categorizedview_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_categorizedview_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_categorizedview_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_categorizedview_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_categorizedview_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_categorizedview_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_categorizedview_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_categorizedview_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_categorizedview_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_categorizedview_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_categorizedview_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void k_categorizedview_scroll_to(void* self, void* index, int32_t hint) {
    KCategorizedView_ScrollTo((KCategorizedView*)self, (QModelIndex*)index, hint);
}

void k_categorizedview_qbase_scroll_to(void* self, void* index, int32_t hint) {
    KCategorizedView_QBaseScrollTo((KCategorizedView*)self, (QModelIndex*)index, hint);
}

void k_categorizedview_on_scroll_to(void* self, void (*callback)(void*, void*, int32_t)) {
    KCategorizedView_OnScrollTo((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_do_items_layout(void* self) {
    KCategorizedView_DoItemsLayout((KCategorizedView*)self);
}

void k_categorizedview_qbase_do_items_layout(void* self) {
    KCategorizedView_QBaseDoItemsLayout((KCategorizedView*)self);
}

void k_categorizedview_on_do_items_layout(void* self, void (*callback)()) {
    KCategorizedView_OnDoItemsLayout((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_set_root_index(void* self, void* index) {
    KCategorizedView_SetRootIndex((KCategorizedView*)self, (QModelIndex*)index);
}

void k_categorizedview_qbase_set_root_index(void* self, void* index) {
    KCategorizedView_QBaseSetRootIndex((KCategorizedView*)self, (QModelIndex*)index);
}

void k_categorizedview_on_set_root_index(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnSetRootIndex((KCategorizedView*)self, (intptr_t)callback);
}

bool k_categorizedview_event(void* self, void* e) {
    return KCategorizedView_Event((KCategorizedView*)self, (QEvent*)e);
}

bool k_categorizedview_qbase_event(void* self, void* e) {
    return KCategorizedView_QBaseEvent((KCategorizedView*)self, (QEvent*)e);
}

void k_categorizedview_on_event(void* self, bool (*callback)(void*, void*)) {
    KCategorizedView_OnEvent((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_scroll_contents_by(void* self, int dx, int dy) {
    KCategorizedView_ScrollContentsBy((KCategorizedView*)self, dx, dy);
}

void k_categorizedview_qbase_scroll_contents_by(void* self, int dx, int dy) {
    KCategorizedView_QBaseScrollContentsBy((KCategorizedView*)self, dx, dy);
}

void k_categorizedview_on_scroll_contents_by(void* self, void (*callback)(void*, int, int)) {
    KCategorizedView_OnScrollContentsBy((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_wheel_event(void* self, void* e) {
    KCategorizedView_WheelEvent((KCategorizedView*)self, (QWheelEvent*)e);
}

void k_categorizedview_qbase_wheel_event(void* self, void* e) {
    KCategorizedView_QBaseWheelEvent((KCategorizedView*)self, (QWheelEvent*)e);
}

void k_categorizedview_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnWheelEvent((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_timer_event(void* self, void* e) {
    KCategorizedView_TimerEvent((KCategorizedView*)self, (QTimerEvent*)e);
}

void k_categorizedview_qbase_timer_event(void* self, void* e) {
    KCategorizedView_QBaseTimerEvent((KCategorizedView*)self, (QTimerEvent*)e);
}

void k_categorizedview_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnTimerEvent((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_init_view_item_option(void* self, void* option) {
    KCategorizedView_InitViewItemOption((KCategorizedView*)self, (QStyleOptionViewItem*)option);
}

void k_categorizedview_qbase_init_view_item_option(void* self, void* option) {
    KCategorizedView_QBaseInitViewItemOption((KCategorizedView*)self, (QStyleOptionViewItem*)option);
}

void k_categorizedview_on_init_view_item_option(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnInitViewItemOption((KCategorizedView*)self, (intptr_t)callback);
}

int32_t k_categorizedview_horizontal_offset(void* self) {
    return KCategorizedView_HorizontalOffset((KCategorizedView*)self);
}

int32_t k_categorizedview_qbase_horizontal_offset(void* self) {
    return KCategorizedView_QBaseHorizontalOffset((KCategorizedView*)self);
}

void k_categorizedview_on_horizontal_offset(void* self, int32_t (*callback)()) {
    KCategorizedView_OnHorizontalOffset((KCategorizedView*)self, (intptr_t)callback);
}

int32_t k_categorizedview_vertical_offset(void* self) {
    return KCategorizedView_VerticalOffset((KCategorizedView*)self);
}

int32_t k_categorizedview_qbase_vertical_offset(void* self) {
    return KCategorizedView_QBaseVerticalOffset((KCategorizedView*)self);
}

void k_categorizedview_on_vertical_offset(void* self, int32_t (*callback)()) {
    KCategorizedView_OnVerticalOffset((KCategorizedView*)self, (intptr_t)callback);
}

QRegion* k_categorizedview_visual_region_for_selection(void* self, void* selection) {
    return KCategorizedView_VisualRegionForSelection((KCategorizedView*)self, (QItemSelection*)selection);
}

QRegion* k_categorizedview_qbase_visual_region_for_selection(void* self, void* selection) {
    return KCategorizedView_QBaseVisualRegionForSelection((KCategorizedView*)self, (QItemSelection*)selection);
}

void k_categorizedview_on_visual_region_for_selection(void* self, QRegion* (*callback)(void*, void*)) {
    KCategorizedView_OnVisualRegionForSelection((KCategorizedView*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_categorizedview_selected_indexes(void* self) {
    libqt_list _arr = KCategorizedView_SelectedIndexes((KCategorizedView*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_categorizedview_qbase_selected_indexes(void* self) {
    libqt_list _arr = KCategorizedView_QBaseSelectedIndexes((KCategorizedView*)self);
    return _arr;
}

void k_categorizedview_on_selected_indexes(void* self, QModelIndex** (*callback)()) {
    KCategorizedView_OnSelectedIndexes((KCategorizedView*)self, (intptr_t)callback);
}

bool k_categorizedview_is_index_hidden(void* self, void* index) {
    return KCategorizedView_IsIndexHidden((KCategorizedView*)self, (QModelIndex*)index);
}

bool k_categorizedview_qbase_is_index_hidden(void* self, void* index) {
    return KCategorizedView_QBaseIsIndexHidden((KCategorizedView*)self, (QModelIndex*)index);
}

void k_categorizedview_on_is_index_hidden(void* self, bool (*callback)(void*, void*)) {
    KCategorizedView_OnIsIndexHidden((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_selection_changed(void* self, void* selected, void* deselected) {
    KCategorizedView_SelectionChanged((KCategorizedView*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

void k_categorizedview_qbase_selection_changed(void* self, void* selected, void* deselected) {
    KCategorizedView_QBaseSelectionChanged((KCategorizedView*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

void k_categorizedview_on_selection_changed(void* self, void (*callback)(void*, void*, void*)) {
    KCategorizedView_OnSelectionChanged((KCategorizedView*)self, (intptr_t)callback);
}

QSize* k_categorizedview_viewport_size_hint(void* self) {
    return KCategorizedView_ViewportSizeHint((KCategorizedView*)self);
}

QSize* k_categorizedview_qbase_viewport_size_hint(void* self) {
    return KCategorizedView_QBaseViewportSizeHint((KCategorizedView*)self);
}

void k_categorizedview_on_viewport_size_hint(void* self, QSize* (*callback)()) {
    KCategorizedView_OnViewportSizeHint((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_set_selection_model(void* self, void* selectionModel) {
    KCategorizedView_SetSelectionModel((KCategorizedView*)self, (QItemSelectionModel*)selectionModel);
}

void k_categorizedview_qbase_set_selection_model(void* self, void* selectionModel) {
    KCategorizedView_QBaseSetSelectionModel((KCategorizedView*)self, (QItemSelectionModel*)selectionModel);
}

void k_categorizedview_on_set_selection_model(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnSetSelectionModel((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_keyboard_search(void* self, const char* search) {
    KCategorizedView_KeyboardSearch((KCategorizedView*)self, qstring(search));
}

void k_categorizedview_qbase_keyboard_search(void* self, const char* search) {
    KCategorizedView_QBaseKeyboardSearch((KCategorizedView*)self, qstring(search));
}

void k_categorizedview_on_keyboard_search(void* self, void (*callback)(void*, const char*)) {
    KCategorizedView_OnKeyboardSearch((KCategorizedView*)self, (intptr_t)callback);
}

int32_t k_categorizedview_size_hint_for_row(void* self, int row) {
    return KCategorizedView_SizeHintForRow((KCategorizedView*)self, row);
}

int32_t k_categorizedview_qbase_size_hint_for_row(void* self, int row) {
    return KCategorizedView_QBaseSizeHintForRow((KCategorizedView*)self, row);
}

void k_categorizedview_on_size_hint_for_row(void* self, int32_t (*callback)(void*, int)) {
    KCategorizedView_OnSizeHintForRow((KCategorizedView*)self, (intptr_t)callback);
}

int32_t k_categorizedview_size_hint_for_column(void* self, int column) {
    return KCategorizedView_SizeHintForColumn((KCategorizedView*)self, column);
}

int32_t k_categorizedview_qbase_size_hint_for_column(void* self, int column) {
    return KCategorizedView_QBaseSizeHintForColumn((KCategorizedView*)self, column);
}

void k_categorizedview_on_size_hint_for_column(void* self, int32_t (*callback)(void*, int)) {
    KCategorizedView_OnSizeHintForColumn((KCategorizedView*)self, (intptr_t)callback);
}

QAbstractItemDelegate* k_categorizedview_item_delegate_for_index(void* self, void* index) {
    return KCategorizedView_ItemDelegateForIndex((KCategorizedView*)self, (QModelIndex*)index);
}

QAbstractItemDelegate* k_categorizedview_qbase_item_delegate_for_index(void* self, void* index) {
    return KCategorizedView_QBaseItemDelegateForIndex((KCategorizedView*)self, (QModelIndex*)index);
}

void k_categorizedview_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*callback)(void*, void*)) {
    KCategorizedView_OnItemDelegateForIndex((KCategorizedView*)self, (intptr_t)callback);
}

QVariant* k_categorizedview_input_method_query(void* self, int32_t query) {
    return KCategorizedView_InputMethodQuery((KCategorizedView*)self, query);
}

QVariant* k_categorizedview_qbase_input_method_query(void* self, int32_t query) {
    return KCategorizedView_QBaseInputMethodQuery((KCategorizedView*)self, query);
}

void k_categorizedview_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KCategorizedView_OnInputMethodQuery((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_select_all(void* self) {
    KCategorizedView_SelectAll((KCategorizedView*)self);
}

void k_categorizedview_qbase_select_all(void* self) {
    KCategorizedView_QBaseSelectAll((KCategorizedView*)self);
}

void k_categorizedview_on_select_all(void* self, void (*callback)()) {
    KCategorizedView_OnSelectAll((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_update_editor_data(void* self) {
    KCategorizedView_UpdateEditorData((KCategorizedView*)self);
}

void k_categorizedview_qbase_update_editor_data(void* self) {
    KCategorizedView_QBaseUpdateEditorData((KCategorizedView*)self);
}

void k_categorizedview_on_update_editor_data(void* self, void (*callback)()) {
    KCategorizedView_OnUpdateEditorData((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_update_editor_geometries(void* self) {
    KCategorizedView_UpdateEditorGeometries((KCategorizedView*)self);
}

void k_categorizedview_qbase_update_editor_geometries(void* self) {
    KCategorizedView_QBaseUpdateEditorGeometries((KCategorizedView*)self);
}

void k_categorizedview_on_update_editor_geometries(void* self, void (*callback)()) {
    KCategorizedView_OnUpdateEditorGeometries((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_vertical_scrollbar_action(void* self, int action) {
    KCategorizedView_VerticalScrollbarAction((KCategorizedView*)self, action);
}

void k_categorizedview_qbase_vertical_scrollbar_action(void* self, int action) {
    KCategorizedView_QBaseVerticalScrollbarAction((KCategorizedView*)self, action);
}

void k_categorizedview_on_vertical_scrollbar_action(void* self, void (*callback)(void*, int)) {
    KCategorizedView_OnVerticalScrollbarAction((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_horizontal_scrollbar_action(void* self, int action) {
    KCategorizedView_HorizontalScrollbarAction((KCategorizedView*)self, action);
}

void k_categorizedview_qbase_horizontal_scrollbar_action(void* self, int action) {
    KCategorizedView_QBaseHorizontalScrollbarAction((KCategorizedView*)self, action);
}

void k_categorizedview_on_horizontal_scrollbar_action(void* self, void (*callback)(void*, int)) {
    KCategorizedView_OnHorizontalScrollbarAction((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_vertical_scrollbar_value_changed(void* self, int value) {
    KCategorizedView_VerticalScrollbarValueChanged((KCategorizedView*)self, value);
}

void k_categorizedview_qbase_vertical_scrollbar_value_changed(void* self, int value) {
    KCategorizedView_QBaseVerticalScrollbarValueChanged((KCategorizedView*)self, value);
}

void k_categorizedview_on_vertical_scrollbar_value_changed(void* self, void (*callback)(void*, int)) {
    KCategorizedView_OnVerticalScrollbarValueChanged((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_horizontal_scrollbar_value_changed(void* self, int value) {
    KCategorizedView_HorizontalScrollbarValueChanged((KCategorizedView*)self, value);
}

void k_categorizedview_qbase_horizontal_scrollbar_value_changed(void* self, int value) {
    KCategorizedView_QBaseHorizontalScrollbarValueChanged((KCategorizedView*)self, value);
}

void k_categorizedview_on_horizontal_scrollbar_value_changed(void* self, void (*callback)(void*, int)) {
    KCategorizedView_OnHorizontalScrollbarValueChanged((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_close_editor(void* self, void* editor, int32_t hint) {
    KCategorizedView_CloseEditor((KCategorizedView*)self, (QWidget*)editor, hint);
}

void k_categorizedview_qbase_close_editor(void* self, void* editor, int32_t hint) {
    KCategorizedView_QBaseCloseEditor((KCategorizedView*)self, (QWidget*)editor, hint);
}

void k_categorizedview_on_close_editor(void* self, void (*callback)(void*, void*, int32_t)) {
    KCategorizedView_OnCloseEditor((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_commit_data(void* self, void* editor) {
    KCategorizedView_CommitData((KCategorizedView*)self, (QWidget*)editor);
}

void k_categorizedview_qbase_commit_data(void* self, void* editor) {
    KCategorizedView_QBaseCommitData((KCategorizedView*)self, (QWidget*)editor);
}

void k_categorizedview_on_commit_data(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnCommitData((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_editor_destroyed(void* self, void* editor) {
    KCategorizedView_EditorDestroyed((KCategorizedView*)self, (QObject*)editor);
}

void k_categorizedview_qbase_editor_destroyed(void* self, void* editor) {
    KCategorizedView_QBaseEditorDestroyed((KCategorizedView*)self, (QObject*)editor);
}

void k_categorizedview_on_editor_destroyed(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnEditorDestroyed((KCategorizedView*)self, (intptr_t)callback);
}

bool k_categorizedview_edit2(void* self, void* index, int32_t trigger, void* event) {
    return KCategorizedView_Edit2((KCategorizedView*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

bool k_categorizedview_qbase_edit2(void* self, void* index, int32_t trigger, void* event) {
    return KCategorizedView_QBaseEdit2((KCategorizedView*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

void k_categorizedview_on_edit2(void* self, bool (*callback)(void*, void*, int32_t, void*)) {
    KCategorizedView_OnEdit2((KCategorizedView*)self, (intptr_t)callback);
}

int32_t k_categorizedview_selection_command(void* self, void* index, void* event) {
    return KCategorizedView_SelectionCommand((KCategorizedView*)self, (QModelIndex*)index, (QEvent*)event);
}

int32_t k_categorizedview_qbase_selection_command(void* self, void* index, void* event) {
    return KCategorizedView_QBaseSelectionCommand((KCategorizedView*)self, (QModelIndex*)index, (QEvent*)event);
}

void k_categorizedview_on_selection_command(void* self, int32_t (*callback)(void*, void*, void*)) {
    KCategorizedView_OnSelectionCommand((KCategorizedView*)self, (intptr_t)callback);
}

bool k_categorizedview_focus_next_prev_child(void* self, bool next) {
    return KCategorizedView_FocusNextPrevChild((KCategorizedView*)self, next);
}

bool k_categorizedview_qbase_focus_next_prev_child(void* self, bool next) {
    return KCategorizedView_QBaseFocusNextPrevChild((KCategorizedView*)self, next);
}

void k_categorizedview_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KCategorizedView_OnFocusNextPrevChild((KCategorizedView*)self, (intptr_t)callback);
}

bool k_categorizedview_viewport_event(void* self, void* event) {
    return KCategorizedView_ViewportEvent((KCategorizedView*)self, (QEvent*)event);
}

bool k_categorizedview_qbase_viewport_event(void* self, void* event) {
    return KCategorizedView_QBaseViewportEvent((KCategorizedView*)self, (QEvent*)event);
}

void k_categorizedview_on_viewport_event(void* self, bool (*callback)(void*, void*)) {
    KCategorizedView_OnViewportEvent((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_mouse_double_click_event(void* self, void* event) {
    KCategorizedView_MouseDoubleClickEvent((KCategorizedView*)self, (QMouseEvent*)event);
}

void k_categorizedview_qbase_mouse_double_click_event(void* self, void* event) {
    KCategorizedView_QBaseMouseDoubleClickEvent((KCategorizedView*)self, (QMouseEvent*)event);
}

void k_categorizedview_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnMouseDoubleClickEvent((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_focus_in_event(void* self, void* event) {
    KCategorizedView_FocusInEvent((KCategorizedView*)self, (QFocusEvent*)event);
}

void k_categorizedview_qbase_focus_in_event(void* self, void* event) {
    KCategorizedView_QBaseFocusInEvent((KCategorizedView*)self, (QFocusEvent*)event);
}

void k_categorizedview_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnFocusInEvent((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_focus_out_event(void* self, void* event) {
    KCategorizedView_FocusOutEvent((KCategorizedView*)self, (QFocusEvent*)event);
}

void k_categorizedview_qbase_focus_out_event(void* self, void* event) {
    KCategorizedView_QBaseFocusOutEvent((KCategorizedView*)self, (QFocusEvent*)event);
}

void k_categorizedview_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnFocusOutEvent((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_key_press_event(void* self, void* event) {
    KCategorizedView_KeyPressEvent((KCategorizedView*)self, (QKeyEvent*)event);
}

void k_categorizedview_qbase_key_press_event(void* self, void* event) {
    KCategorizedView_QBaseKeyPressEvent((KCategorizedView*)self, (QKeyEvent*)event);
}

void k_categorizedview_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnKeyPressEvent((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_input_method_event(void* self, void* event) {
    KCategorizedView_InputMethodEvent((KCategorizedView*)self, (QInputMethodEvent*)event);
}

void k_categorizedview_qbase_input_method_event(void* self, void* event) {
    KCategorizedView_QBaseInputMethodEvent((KCategorizedView*)self, (QInputMethodEvent*)event);
}

void k_categorizedview_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnInputMethodEvent((KCategorizedView*)self, (intptr_t)callback);
}

bool k_categorizedview_event_filter(void* self, void* object, void* event) {
    return KCategorizedView_EventFilter((KCategorizedView*)self, (QObject*)object, (QEvent*)event);
}

bool k_categorizedview_qbase_event_filter(void* self, void* object, void* event) {
    return KCategorizedView_QBaseEventFilter((KCategorizedView*)self, (QObject*)object, (QEvent*)event);
}

void k_categorizedview_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KCategorizedView_OnEventFilter((KCategorizedView*)self, (intptr_t)callback);
}

QSize* k_categorizedview_minimum_size_hint(void* self) {
    return KCategorizedView_MinimumSizeHint((KCategorizedView*)self);
}

QSize* k_categorizedview_qbase_minimum_size_hint(void* self) {
    return KCategorizedView_QBaseMinimumSizeHint((KCategorizedView*)self);
}

void k_categorizedview_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KCategorizedView_OnMinimumSizeHint((KCategorizedView*)self, (intptr_t)callback);
}

QSize* k_categorizedview_size_hint(void* self) {
    return KCategorizedView_SizeHint((KCategorizedView*)self);
}

QSize* k_categorizedview_qbase_size_hint(void* self) {
    return KCategorizedView_QBaseSizeHint((KCategorizedView*)self);
}

void k_categorizedview_on_size_hint(void* self, QSize* (*callback)()) {
    KCategorizedView_OnSizeHint((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_setup_viewport(void* self, void* viewport) {
    KCategorizedView_SetupViewport((KCategorizedView*)self, (QWidget*)viewport);
}

void k_categorizedview_qbase_setup_viewport(void* self, void* viewport) {
    KCategorizedView_QBaseSetupViewport((KCategorizedView*)self, (QWidget*)viewport);
}

void k_categorizedview_on_setup_viewport(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnSetupViewport((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_context_menu_event(void* self, void* param1) {
    KCategorizedView_ContextMenuEvent((KCategorizedView*)self, (QContextMenuEvent*)param1);
}

void k_categorizedview_qbase_context_menu_event(void* self, void* param1) {
    KCategorizedView_QBaseContextMenuEvent((KCategorizedView*)self, (QContextMenuEvent*)param1);
}

void k_categorizedview_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnContextMenuEvent((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_change_event(void* self, void* param1) {
    KCategorizedView_ChangeEvent((KCategorizedView*)self, (QEvent*)param1);
}

void k_categorizedview_qbase_change_event(void* self, void* param1) {
    KCategorizedView_QBaseChangeEvent((KCategorizedView*)self, (QEvent*)param1);
}

void k_categorizedview_on_change_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnChangeEvent((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_init_style_option(void* self, void* option) {
    KCategorizedView_InitStyleOption((KCategorizedView*)self, (QStyleOptionFrame*)option);
}

void k_categorizedview_qbase_init_style_option(void* self, void* option) {
    KCategorizedView_QBaseInitStyleOption((KCategorizedView*)self, (QStyleOptionFrame*)option);
}

void k_categorizedview_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnInitStyleOption((KCategorizedView*)self, (intptr_t)callback);
}

int32_t k_categorizedview_dev_type(void* self) {
    return KCategorizedView_DevType((KCategorizedView*)self);
}

int32_t k_categorizedview_qbase_dev_type(void* self) {
    return KCategorizedView_QBaseDevType((KCategorizedView*)self);
}

void k_categorizedview_on_dev_type(void* self, int32_t (*callback)()) {
    KCategorizedView_OnDevType((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_set_visible(void* self, bool visible) {
    KCategorizedView_SetVisible((KCategorizedView*)self, visible);
}

void k_categorizedview_qbase_set_visible(void* self, bool visible) {
    KCategorizedView_QBaseSetVisible((KCategorizedView*)self, visible);
}

void k_categorizedview_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KCategorizedView_OnSetVisible((KCategorizedView*)self, (intptr_t)callback);
}

int32_t k_categorizedview_height_for_width(void* self, int param1) {
    return KCategorizedView_HeightForWidth((KCategorizedView*)self, param1);
}

int32_t k_categorizedview_qbase_height_for_width(void* self, int param1) {
    return KCategorizedView_QBaseHeightForWidth((KCategorizedView*)self, param1);
}

void k_categorizedview_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KCategorizedView_OnHeightForWidth((KCategorizedView*)self, (intptr_t)callback);
}

bool k_categorizedview_has_height_for_width(void* self) {
    return KCategorizedView_HasHeightForWidth((KCategorizedView*)self);
}

bool k_categorizedview_qbase_has_height_for_width(void* self) {
    return KCategorizedView_QBaseHasHeightForWidth((KCategorizedView*)self);
}

void k_categorizedview_on_has_height_for_width(void* self, bool (*callback)()) {
    KCategorizedView_OnHasHeightForWidth((KCategorizedView*)self, (intptr_t)callback);
}

QPaintEngine* k_categorizedview_paint_engine(void* self) {
    return KCategorizedView_PaintEngine((KCategorizedView*)self);
}

QPaintEngine* k_categorizedview_qbase_paint_engine(void* self) {
    return KCategorizedView_QBasePaintEngine((KCategorizedView*)self);
}

void k_categorizedview_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KCategorizedView_OnPaintEngine((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_key_release_event(void* self, void* event) {
    KCategorizedView_KeyReleaseEvent((KCategorizedView*)self, (QKeyEvent*)event);
}

void k_categorizedview_qbase_key_release_event(void* self, void* event) {
    KCategorizedView_QBaseKeyReleaseEvent((KCategorizedView*)self, (QKeyEvent*)event);
}

void k_categorizedview_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnKeyReleaseEvent((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_enter_event(void* self, void* event) {
    KCategorizedView_EnterEvent((KCategorizedView*)self, (QEnterEvent*)event);
}

void k_categorizedview_qbase_enter_event(void* self, void* event) {
    KCategorizedView_QBaseEnterEvent((KCategorizedView*)self, (QEnterEvent*)event);
}

void k_categorizedview_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnEnterEvent((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_move_event(void* self, void* event) {
    KCategorizedView_MoveEvent((KCategorizedView*)self, (QMoveEvent*)event);
}

void k_categorizedview_qbase_move_event(void* self, void* event) {
    KCategorizedView_QBaseMoveEvent((KCategorizedView*)self, (QMoveEvent*)event);
}

void k_categorizedview_on_move_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnMoveEvent((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_close_event(void* self, void* event) {
    KCategorizedView_CloseEvent((KCategorizedView*)self, (QCloseEvent*)event);
}

void k_categorizedview_qbase_close_event(void* self, void* event) {
    KCategorizedView_QBaseCloseEvent((KCategorizedView*)self, (QCloseEvent*)event);
}

void k_categorizedview_on_close_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnCloseEvent((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_tablet_event(void* self, void* event) {
    KCategorizedView_TabletEvent((KCategorizedView*)self, (QTabletEvent*)event);
}

void k_categorizedview_qbase_tablet_event(void* self, void* event) {
    KCategorizedView_QBaseTabletEvent((KCategorizedView*)self, (QTabletEvent*)event);
}

void k_categorizedview_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnTabletEvent((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_action_event(void* self, void* event) {
    KCategorizedView_ActionEvent((KCategorizedView*)self, (QActionEvent*)event);
}

void k_categorizedview_qbase_action_event(void* self, void* event) {
    KCategorizedView_QBaseActionEvent((KCategorizedView*)self, (QActionEvent*)event);
}

void k_categorizedview_on_action_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnActionEvent((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_show_event(void* self, void* event) {
    KCategorizedView_ShowEvent((KCategorizedView*)self, (QShowEvent*)event);
}

void k_categorizedview_qbase_show_event(void* self, void* event) {
    KCategorizedView_QBaseShowEvent((KCategorizedView*)self, (QShowEvent*)event);
}

void k_categorizedview_on_show_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnShowEvent((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_hide_event(void* self, void* event) {
    KCategorizedView_HideEvent((KCategorizedView*)self, (QHideEvent*)event);
}

void k_categorizedview_qbase_hide_event(void* self, void* event) {
    KCategorizedView_QBaseHideEvent((KCategorizedView*)self, (QHideEvent*)event);
}

void k_categorizedview_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnHideEvent((KCategorizedView*)self, (intptr_t)callback);
}

bool k_categorizedview_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KCategorizedView_NativeEvent((KCategorizedView*)self, qstring(eventType), message, result);
}

bool k_categorizedview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KCategorizedView_QBaseNativeEvent((KCategorizedView*)self, qstring(eventType), message, result);
}

void k_categorizedview_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KCategorizedView_OnNativeEvent((KCategorizedView*)self, (intptr_t)callback);
}

int32_t k_categorizedview_metric(void* self, int32_t param1) {
    return KCategorizedView_Metric((KCategorizedView*)self, param1);
}

int32_t k_categorizedview_qbase_metric(void* self, int32_t param1) {
    return KCategorizedView_QBaseMetric((KCategorizedView*)self, param1);
}

void k_categorizedview_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KCategorizedView_OnMetric((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_init_painter(void* self, void* painter) {
    KCategorizedView_InitPainter((KCategorizedView*)self, (QPainter*)painter);
}

void k_categorizedview_qbase_init_painter(void* self, void* painter) {
    KCategorizedView_QBaseInitPainter((KCategorizedView*)self, (QPainter*)painter);
}

void k_categorizedview_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnInitPainter((KCategorizedView*)self, (intptr_t)callback);
}

QPaintDevice* k_categorizedview_redirected(void* self, void* offset) {
    return KCategorizedView_Redirected((KCategorizedView*)self, (QPoint*)offset);
}

QPaintDevice* k_categorizedview_qbase_redirected(void* self, void* offset) {
    return KCategorizedView_QBaseRedirected((KCategorizedView*)self, (QPoint*)offset);
}

void k_categorizedview_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KCategorizedView_OnRedirected((KCategorizedView*)self, (intptr_t)callback);
}

QPainter* k_categorizedview_shared_painter(void* self) {
    return KCategorizedView_SharedPainter((KCategorizedView*)self);
}

QPainter* k_categorizedview_qbase_shared_painter(void* self) {
    return KCategorizedView_QBaseSharedPainter((KCategorizedView*)self);
}

void k_categorizedview_on_shared_painter(void* self, QPainter* (*callback)()) {
    KCategorizedView_OnSharedPainter((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_child_event(void* self, void* event) {
    KCategorizedView_ChildEvent((KCategorizedView*)self, (QChildEvent*)event);
}

void k_categorizedview_qbase_child_event(void* self, void* event) {
    KCategorizedView_QBaseChildEvent((KCategorizedView*)self, (QChildEvent*)event);
}

void k_categorizedview_on_child_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnChildEvent((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_custom_event(void* self, void* event) {
    KCategorizedView_CustomEvent((KCategorizedView*)self, (QEvent*)event);
}

void k_categorizedview_qbase_custom_event(void* self, void* event) {
    KCategorizedView_QBaseCustomEvent((KCategorizedView*)self, (QEvent*)event);
}

void k_categorizedview_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnCustomEvent((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_connect_notify(void* self, void* signal) {
    KCategorizedView_ConnectNotify((KCategorizedView*)self, (QMetaMethod*)signal);
}

void k_categorizedview_qbase_connect_notify(void* self, void* signal) {
    KCategorizedView_QBaseConnectNotify((KCategorizedView*)self, (QMetaMethod*)signal);
}

void k_categorizedview_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnConnectNotify((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_disconnect_notify(void* self, void* signal) {
    KCategorizedView_DisconnectNotify((KCategorizedView*)self, (QMetaMethod*)signal);
}

void k_categorizedview_qbase_disconnect_notify(void* self, void* signal) {
    KCategorizedView_QBaseDisconnectNotify((KCategorizedView*)self, (QMetaMethod*)signal);
}

void k_categorizedview_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnDisconnectNotify((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_resize_contents(void* self, int width, int height) {
    KCategorizedView_ResizeContents((KCategorizedView*)self, width, height);
}

void k_categorizedview_qbase_resize_contents(void* self, int width, int height) {
    KCategorizedView_QBaseResizeContents((KCategorizedView*)self, width, height);
}

void k_categorizedview_on_resize_contents(void* self, void (*callback)(void*, int, int)) {
    KCategorizedView_OnResizeContents((KCategorizedView*)self, (intptr_t)callback);
}

QSize* k_categorizedview_contents_size(void* self) {
    return KCategorizedView_ContentsSize((KCategorizedView*)self);
}

QSize* k_categorizedview_qbase_contents_size(void* self) {
    return KCategorizedView_QBaseContentsSize((KCategorizedView*)self);
}

void k_categorizedview_on_contents_size(void* self, QSize* (*callback)()) {
    KCategorizedView_OnContentsSize((KCategorizedView*)self, (intptr_t)callback);
}

QRect* k_categorizedview_rect_for_index(void* self, void* index) {
    return KCategorizedView_RectForIndex((KCategorizedView*)self, (QModelIndex*)index);
}

QRect* k_categorizedview_qbase_rect_for_index(void* self, void* index) {
    return KCategorizedView_QBaseRectForIndex((KCategorizedView*)self, (QModelIndex*)index);
}

void k_categorizedview_on_rect_for_index(void* self, QRect* (*callback)(void*, void*)) {
    KCategorizedView_OnRectForIndex((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_set_position_for_index(void* self, void* position, void* index) {
    KCategorizedView_SetPositionForIndex((KCategorizedView*)self, (QPoint*)position, (QModelIndex*)index);
}

void k_categorizedview_qbase_set_position_for_index(void* self, void* position, void* index) {
    KCategorizedView_QBaseSetPositionForIndex((KCategorizedView*)self, (QPoint*)position, (QModelIndex*)index);
}

void k_categorizedview_on_set_position_for_index(void* self, void (*callback)(void*, void*, void*)) {
    KCategorizedView_OnSetPositionForIndex((KCategorizedView*)self, (intptr_t)callback);
}

int32_t k_categorizedview_state(void* self) {
    return KCategorizedView_State((KCategorizedView*)self);
}

int32_t k_categorizedview_qbase_state(void* self) {
    return KCategorizedView_QBaseState((KCategorizedView*)self);
}

void k_categorizedview_on_state(void* self, int32_t (*callback)()) {
    KCategorizedView_OnState((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_set_state(void* self, int32_t state) {
    KCategorizedView_SetState((KCategorizedView*)self, state);
}

void k_categorizedview_qbase_set_state(void* self, int32_t state) {
    KCategorizedView_QBaseSetState((KCategorizedView*)self, state);
}

void k_categorizedview_on_set_state(void* self, void (*callback)(void*, int32_t)) {
    KCategorizedView_OnSetState((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_schedule_delayed_items_layout(void* self) {
    KCategorizedView_ScheduleDelayedItemsLayout((KCategorizedView*)self);
}

void k_categorizedview_qbase_schedule_delayed_items_layout(void* self) {
    KCategorizedView_QBaseScheduleDelayedItemsLayout((KCategorizedView*)self);
}

void k_categorizedview_on_schedule_delayed_items_layout(void* self, void (*callback)()) {
    KCategorizedView_OnScheduleDelayedItemsLayout((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_execute_delayed_items_layout(void* self) {
    KCategorizedView_ExecuteDelayedItemsLayout((KCategorizedView*)self);
}

void k_categorizedview_qbase_execute_delayed_items_layout(void* self) {
    KCategorizedView_QBaseExecuteDelayedItemsLayout((KCategorizedView*)self);
}

void k_categorizedview_on_execute_delayed_items_layout(void* self, void (*callback)()) {
    KCategorizedView_OnExecuteDelayedItemsLayout((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_set_dirty_region(void* self, void* region) {
    KCategorizedView_SetDirtyRegion((KCategorizedView*)self, (QRegion*)region);
}

void k_categorizedview_qbase_set_dirty_region(void* self, void* region) {
    KCategorizedView_QBaseSetDirtyRegion((KCategorizedView*)self, (QRegion*)region);
}

void k_categorizedview_on_set_dirty_region(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnSetDirtyRegion((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_scroll_dirty_region(void* self, int dx, int dy) {
    KCategorizedView_ScrollDirtyRegion((KCategorizedView*)self, dx, dy);
}

void k_categorizedview_qbase_scroll_dirty_region(void* self, int dx, int dy) {
    KCategorizedView_QBaseScrollDirtyRegion((KCategorizedView*)self, dx, dy);
}

void k_categorizedview_on_scroll_dirty_region(void* self, void (*callback)(void*, int, int)) {
    KCategorizedView_OnScrollDirtyRegion((KCategorizedView*)self, (intptr_t)callback);
}

QPoint* k_categorizedview_dirty_region_offset(void* self) {
    return KCategorizedView_DirtyRegionOffset((KCategorizedView*)self);
}

QPoint* k_categorizedview_qbase_dirty_region_offset(void* self) {
    return KCategorizedView_QBaseDirtyRegionOffset((KCategorizedView*)self);
}

void k_categorizedview_on_dirty_region_offset(void* self, QPoint* (*callback)()) {
    KCategorizedView_OnDirtyRegionOffset((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_start_auto_scroll(void* self) {
    KCategorizedView_StartAutoScroll((KCategorizedView*)self);
}

void k_categorizedview_qbase_start_auto_scroll(void* self) {
    KCategorizedView_QBaseStartAutoScroll((KCategorizedView*)self);
}

void k_categorizedview_on_start_auto_scroll(void* self, void (*callback)()) {
    KCategorizedView_OnStartAutoScroll((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_stop_auto_scroll(void* self) {
    KCategorizedView_StopAutoScroll((KCategorizedView*)self);
}

void k_categorizedview_qbase_stop_auto_scroll(void* self) {
    KCategorizedView_QBaseStopAutoScroll((KCategorizedView*)self);
}

void k_categorizedview_on_stop_auto_scroll(void* self, void (*callback)()) {
    KCategorizedView_OnStopAutoScroll((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_do_auto_scroll(void* self) {
    KCategorizedView_DoAutoScroll((KCategorizedView*)self);
}

void k_categorizedview_qbase_do_auto_scroll(void* self) {
    KCategorizedView_QBaseDoAutoScroll((KCategorizedView*)self);
}

void k_categorizedview_on_do_auto_scroll(void* self, void (*callback)()) {
    KCategorizedView_OnDoAutoScroll((KCategorizedView*)self, (intptr_t)callback);
}

int32_t k_categorizedview_drop_indicator_position(void* self) {
    return KCategorizedView_DropIndicatorPosition((KCategorizedView*)self);
}

int32_t k_categorizedview_qbase_drop_indicator_position(void* self) {
    return KCategorizedView_QBaseDropIndicatorPosition((KCategorizedView*)self);
}

void k_categorizedview_on_drop_indicator_position(void* self, int32_t (*callback)()) {
    KCategorizedView_OnDropIndicatorPosition((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    KCategorizedView_SetViewportMargins((KCategorizedView*)self, left, top, right, bottom);
}

void k_categorizedview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    KCategorizedView_QBaseSetViewportMargins((KCategorizedView*)self, left, top, right, bottom);
}

void k_categorizedview_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int)) {
    KCategorizedView_OnSetViewportMargins((KCategorizedView*)self, (intptr_t)callback);
}

QMargins* k_categorizedview_viewport_margins(void* self) {
    return KCategorizedView_ViewportMargins((KCategorizedView*)self);
}

QMargins* k_categorizedview_qbase_viewport_margins(void* self) {
    return KCategorizedView_QBaseViewportMargins((KCategorizedView*)self);
}

void k_categorizedview_on_viewport_margins(void* self, QMargins* (*callback)()) {
    KCategorizedView_OnViewportMargins((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_draw_frame(void* self, void* param1) {
    KCategorizedView_DrawFrame((KCategorizedView*)self, (QPainter*)param1);
}

void k_categorizedview_qbase_draw_frame(void* self, void* param1) {
    KCategorizedView_QBaseDrawFrame((KCategorizedView*)self, (QPainter*)param1);
}

void k_categorizedview_on_draw_frame(void* self, void (*callback)(void*, void*)) {
    KCategorizedView_OnDrawFrame((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_update_micro_focus(void* self) {
    KCategorizedView_UpdateMicroFocus((KCategorizedView*)self);
}

void k_categorizedview_qbase_update_micro_focus(void* self) {
    KCategorizedView_QBaseUpdateMicroFocus((KCategorizedView*)self);
}

void k_categorizedview_on_update_micro_focus(void* self, void (*callback)()) {
    KCategorizedView_OnUpdateMicroFocus((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_create(void* self) {
    KCategorizedView_Create((KCategorizedView*)self);
}

void k_categorizedview_qbase_create(void* self) {
    KCategorizedView_QBaseCreate((KCategorizedView*)self);
}

void k_categorizedview_on_create(void* self, void (*callback)()) {
    KCategorizedView_OnCreate((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_destroy(void* self) {
    KCategorizedView_Destroy((KCategorizedView*)self);
}

void k_categorizedview_qbase_destroy(void* self) {
    KCategorizedView_QBaseDestroy((KCategorizedView*)self);
}

void k_categorizedview_on_destroy(void* self, void (*callback)()) {
    KCategorizedView_OnDestroy((KCategorizedView*)self, (intptr_t)callback);
}

bool k_categorizedview_focus_next_child(void* self) {
    return KCategorizedView_FocusNextChild((KCategorizedView*)self);
}

bool k_categorizedview_qbase_focus_next_child(void* self) {
    return KCategorizedView_QBaseFocusNextChild((KCategorizedView*)self);
}

void k_categorizedview_on_focus_next_child(void* self, bool (*callback)()) {
    KCategorizedView_OnFocusNextChild((KCategorizedView*)self, (intptr_t)callback);
}

bool k_categorizedview_focus_previous_child(void* self) {
    return KCategorizedView_FocusPreviousChild((KCategorizedView*)self);
}

bool k_categorizedview_qbase_focus_previous_child(void* self) {
    return KCategorizedView_QBaseFocusPreviousChild((KCategorizedView*)self);
}

void k_categorizedview_on_focus_previous_child(void* self, bool (*callback)()) {
    KCategorizedView_OnFocusPreviousChild((KCategorizedView*)self, (intptr_t)callback);
}

QObject* k_categorizedview_sender(void* self) {
    return KCategorizedView_Sender((KCategorizedView*)self);
}

QObject* k_categorizedview_qbase_sender(void* self) {
    return KCategorizedView_QBaseSender((KCategorizedView*)self);
}

void k_categorizedview_on_sender(void* self, QObject* (*callback)()) {
    KCategorizedView_OnSender((KCategorizedView*)self, (intptr_t)callback);
}

int32_t k_categorizedview_sender_signal_index(void* self) {
    return KCategorizedView_SenderSignalIndex((KCategorizedView*)self);
}

int32_t k_categorizedview_qbase_sender_signal_index(void* self) {
    return KCategorizedView_QBaseSenderSignalIndex((KCategorizedView*)self);
}

void k_categorizedview_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KCategorizedView_OnSenderSignalIndex((KCategorizedView*)self, (intptr_t)callback);
}

int32_t k_categorizedview_receivers(void* self, const char* signal) {
    return KCategorizedView_Receivers((KCategorizedView*)self, signal);
}

int32_t k_categorizedview_qbase_receivers(void* self, const char* signal) {
    return KCategorizedView_QBaseReceivers((KCategorizedView*)self, signal);
}

void k_categorizedview_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KCategorizedView_OnReceivers((KCategorizedView*)self, (intptr_t)callback);
}

bool k_categorizedview_is_signal_connected(void* self, void* signal) {
    return KCategorizedView_IsSignalConnected((KCategorizedView*)self, (QMetaMethod*)signal);
}

bool k_categorizedview_qbase_is_signal_connected(void* self, void* signal) {
    return KCategorizedView_QBaseIsSignalConnected((KCategorizedView*)self, (QMetaMethod*)signal);
}

void k_categorizedview_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KCategorizedView_OnIsSignalConnected((KCategorizedView*)self, (intptr_t)callback);
}

double k_categorizedview_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KCategorizedView_GetDecodedMetricF((KCategorizedView*)self, metricA, metricB);
}

double k_categorizedview_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KCategorizedView_QBaseGetDecodedMetricF((KCategorizedView*)self, metricA, metricB);
}

void k_categorizedview_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KCategorizedView_OnGetDecodedMetricF((KCategorizedView*)self, (intptr_t)callback);
}

void k_categorizedview_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_categorizedview_delete(void* self) {
    KCategorizedView_Delete((KCategorizedView*)(self));
}
