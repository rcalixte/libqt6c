#include "libqabstractitemdelegate.hpp"
#include "libqabstractitemmodel.hpp"
#include "libqabstractitemview.hpp"
#include "libqabstractscrollarea.hpp"
#include "libqevent.hpp"
#include "libqcoreevent.hpp"
#include "libqframe.hpp"
#include "libqheaderview.hpp"
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
#include "libqtreeview.hpp"
#include "libqtreeview.h"

QTreeView* q_treeview_new(void* parent) {
    return QTreeView_new((QWidget*)parent);
}

QTreeView* q_treeview_new2() {
    return QTreeView_new2();
}

const QMetaObject* q_treeview_meta_object(void* self) {
    return QTreeView_MetaObject((QTreeView*)self);
}

void q_treeview_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QTreeView_OnMetaObject((QTreeView*)self, (intptr_t)callback);
}

const QMetaObject* q_treeview_qbase_meta_object(void* self) {
    return QTreeView_QBaseMetaObject((QTreeView*)self);
}

void* q_treeview_metacast(void* self, const char* param1) {
    return QTreeView_Metacast((QTreeView*)self, param1);
}

void q_treeview_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QTreeView_OnMetacast((QTreeView*)self, (intptr_t)callback);
}

void* q_treeview_qbase_metacast(void* self, const char* param1) {
    return QTreeView_QBaseMetacast((QTreeView*)self, param1);
}

int32_t q_treeview_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QTreeView_Metacall((QTreeView*)self, param1, param2, param3);
}

void q_treeview_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QTreeView_OnMetacall((QTreeView*)self, (intptr_t)callback);
}

int32_t q_treeview_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QTreeView_QBaseMetacall((QTreeView*)self, param1, param2, param3);
}

const char* q_treeview_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_treeview_set_model(void* self, void* model) {
    QTreeView_SetModel((QTreeView*)self, (QAbstractItemModel*)model);
}

void q_treeview_on_set_model(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnSetModel((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_set_model(void* self, void* model) {
    QTreeView_QBaseSetModel((QTreeView*)self, (QAbstractItemModel*)model);
}

void q_treeview_set_root_index(void* self, void* index) {
    QTreeView_SetRootIndex((QTreeView*)self, (QModelIndex*)index);
}

void q_treeview_on_set_root_index(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnSetRootIndex((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_set_root_index(void* self, void* index) {
    QTreeView_QBaseSetRootIndex((QTreeView*)self, (QModelIndex*)index);
}

void q_treeview_set_selection_model(void* self, void* selectionModel) {
    QTreeView_SetSelectionModel((QTreeView*)self, (QItemSelectionModel*)selectionModel);
}

void q_treeview_on_set_selection_model(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnSetSelectionModel((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_set_selection_model(void* self, void* selectionModel) {
    QTreeView_QBaseSetSelectionModel((QTreeView*)self, (QItemSelectionModel*)selectionModel);
}

QHeaderView* q_treeview_header(void* self) {
    return QTreeView_Header((QTreeView*)self);
}

void q_treeview_set_header(void* self, void* header) {
    QTreeView_SetHeader((QTreeView*)self, (QHeaderView*)header);
}

int32_t q_treeview_auto_expand_delay(void* self) {
    return QTreeView_AutoExpandDelay((QTreeView*)self);
}

void q_treeview_set_auto_expand_delay(void* self, int delay) {
    QTreeView_SetAutoExpandDelay((QTreeView*)self, delay);
}

int32_t q_treeview_indentation(void* self) {
    return QTreeView_Indentation((QTreeView*)self);
}

void q_treeview_set_indentation(void* self, int i) {
    QTreeView_SetIndentation((QTreeView*)self, i);
}

void q_treeview_reset_indentation(void* self) {
    QTreeView_ResetIndentation((QTreeView*)self);
}

bool q_treeview_root_is_decorated(void* self) {
    return QTreeView_RootIsDecorated((QTreeView*)self);
}

void q_treeview_set_root_is_decorated(void* self, bool show) {
    QTreeView_SetRootIsDecorated((QTreeView*)self, show);
}

bool q_treeview_uniform_row_heights(void* self) {
    return QTreeView_UniformRowHeights((QTreeView*)self);
}

void q_treeview_set_uniform_row_heights(void* self, bool uniform) {
    QTreeView_SetUniformRowHeights((QTreeView*)self, uniform);
}

bool q_treeview_items_expandable(void* self) {
    return QTreeView_ItemsExpandable((QTreeView*)self);
}

void q_treeview_set_items_expandable(void* self, bool enable) {
    QTreeView_SetItemsExpandable((QTreeView*)self, enable);
}

bool q_treeview_expands_on_double_click(void* self) {
    return QTreeView_ExpandsOnDoubleClick((QTreeView*)self);
}

void q_treeview_set_expands_on_double_click(void* self, bool enable) {
    QTreeView_SetExpandsOnDoubleClick((QTreeView*)self, enable);
}

int32_t q_treeview_column_viewport_position(void* self, int column) {
    return QTreeView_ColumnViewportPosition((QTreeView*)self, column);
}

int32_t q_treeview_column_width(void* self, int column) {
    return QTreeView_ColumnWidth((QTreeView*)self, column);
}

void q_treeview_set_column_width(void* self, int column, int width) {
    QTreeView_SetColumnWidth((QTreeView*)self, column, width);
}

int32_t q_treeview_column_at(void* self, int x) {
    return QTreeView_ColumnAt((QTreeView*)self, x);
}

bool q_treeview_is_column_hidden(void* self, int column) {
    return QTreeView_IsColumnHidden((QTreeView*)self, column);
}

void q_treeview_set_column_hidden(void* self, int column, bool hide) {
    QTreeView_SetColumnHidden((QTreeView*)self, column, hide);
}

bool q_treeview_is_header_hidden(void* self) {
    return QTreeView_IsHeaderHidden((QTreeView*)self);
}

void q_treeview_set_header_hidden(void* self, bool hide) {
    QTreeView_SetHeaderHidden((QTreeView*)self, hide);
}

bool q_treeview_is_row_hidden(void* self, int row, void* parent) {
    return QTreeView_IsRowHidden((QTreeView*)self, row, (QModelIndex*)parent);
}

void q_treeview_set_row_hidden(void* self, int row, void* parent, bool hide) {
    QTreeView_SetRowHidden((QTreeView*)self, row, (QModelIndex*)parent, hide);
}

bool q_treeview_is_first_column_spanned(void* self, int row, void* parent) {
    return QTreeView_IsFirstColumnSpanned((QTreeView*)self, row, (QModelIndex*)parent);
}

void q_treeview_set_first_column_spanned(void* self, int row, void* parent, bool span) {
    QTreeView_SetFirstColumnSpanned((QTreeView*)self, row, (QModelIndex*)parent, span);
}

bool q_treeview_is_expanded(void* self, void* index) {
    return QTreeView_IsExpanded((QTreeView*)self, (QModelIndex*)index);
}

void q_treeview_set_expanded(void* self, void* index, bool expand) {
    QTreeView_SetExpanded((QTreeView*)self, (QModelIndex*)index, expand);
}

void q_treeview_set_sorting_enabled(void* self, bool enable) {
    QTreeView_SetSortingEnabled((QTreeView*)self, enable);
}

bool q_treeview_is_sorting_enabled(void* self) {
    return QTreeView_IsSortingEnabled((QTreeView*)self);
}

void q_treeview_set_animated(void* self, bool enable) {
    QTreeView_SetAnimated((QTreeView*)self, enable);
}

bool q_treeview_is_animated(void* self) {
    return QTreeView_IsAnimated((QTreeView*)self);
}

void q_treeview_set_all_columns_show_focus(void* self, bool enable) {
    QTreeView_SetAllColumnsShowFocus((QTreeView*)self, enable);
}

bool q_treeview_all_columns_show_focus(void* self) {
    return QTreeView_AllColumnsShowFocus((QTreeView*)self);
}

void q_treeview_set_word_wrap(void* self, bool on) {
    QTreeView_SetWordWrap((QTreeView*)self, on);
}

bool q_treeview_word_wrap(void* self) {
    return QTreeView_WordWrap((QTreeView*)self);
}

void q_treeview_set_tree_position(void* self, int logicalIndex) {
    QTreeView_SetTreePosition((QTreeView*)self, logicalIndex);
}

int32_t q_treeview_tree_position(void* self) {
    return QTreeView_TreePosition((QTreeView*)self);
}

void q_treeview_keyboard_search(void* self, const char* search) {
    QTreeView_KeyboardSearch((QTreeView*)self, qstring(search));
}

void q_treeview_on_keyboard_search(void* self, void (*callback)(void*, const char*)) {
    QTreeView_OnKeyboardSearch((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_keyboard_search(void* self, const char* search) {
    QTreeView_QBaseKeyboardSearch((QTreeView*)self, qstring(search));
}

QRect* q_treeview_visual_rect(void* self, void* index) {
    return QTreeView_VisualRect((QTreeView*)self, (QModelIndex*)index);
}

void q_treeview_on_visual_rect(void* self, QRect* (*callback)(void*, void*)) {
    QTreeView_OnVisualRect((QTreeView*)self, (intptr_t)callback);
}

QRect* q_treeview_qbase_visual_rect(void* self, void* index) {
    return QTreeView_QBaseVisualRect((QTreeView*)self, (QModelIndex*)index);
}

void q_treeview_scroll_to(void* self, void* index, int32_t hint) {
    QTreeView_ScrollTo((QTreeView*)self, (QModelIndex*)index, hint);
}

void q_treeview_on_scroll_to(void* self, void (*callback)(void*, void*, int32_t)) {
    QTreeView_OnScrollTo((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_scroll_to(void* self, void* index, int32_t hint) {
    QTreeView_QBaseScrollTo((QTreeView*)self, (QModelIndex*)index, hint);
}

QModelIndex* q_treeview_index_at(void* self, void* p) {
    return QTreeView_IndexAt((QTreeView*)self, (QPoint*)p);
}

void q_treeview_on_index_at(void* self, QModelIndex* (*callback)(void*, void*)) {
    QTreeView_OnIndexAt((QTreeView*)self, (intptr_t)callback);
}

QModelIndex* q_treeview_qbase_index_at(void* self, void* p) {
    return QTreeView_QBaseIndexAt((QTreeView*)self, (QPoint*)p);
}

QModelIndex* q_treeview_index_above(void* self, void* index) {
    return QTreeView_IndexAbove((QTreeView*)self, (QModelIndex*)index);
}

QModelIndex* q_treeview_index_below(void* self, void* index) {
    return QTreeView_IndexBelow((QTreeView*)self, (QModelIndex*)index);
}

void q_treeview_do_items_layout(void* self) {
    QTreeView_DoItemsLayout((QTreeView*)self);
}

void q_treeview_on_do_items_layout(void* self, void (*callback)()) {
    QTreeView_OnDoItemsLayout((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_do_items_layout(void* self) {
    QTreeView_QBaseDoItemsLayout((QTreeView*)self);
}

void q_treeview_reset(void* self) {
    QTreeView_Reset((QTreeView*)self);
}

void q_treeview_on_reset(void* self, void (*callback)()) {
    QTreeView_OnReset((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_reset(void* self) {
    QTreeView_QBaseReset((QTreeView*)self);
}

void q_treeview_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles) {
    QTreeView_DataChanged((QTreeView*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_treeview_on_data_changed(void* self, void (*callback)(void*, void*, void*, libqt_list /* of int */)) {
    QTreeView_OnDataChanged((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_data_changed(void* self, void* topLeft, void* bottomRight, libqt_list /* of int */ roles) {
    QTreeView_QBaseDataChanged((QTreeView*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void q_treeview_select_all(void* self) {
    QTreeView_SelectAll((QTreeView*)self);
}

void q_treeview_on_select_all(void* self, void (*callback)()) {
    QTreeView_OnSelectAll((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_select_all(void* self) {
    QTreeView_QBaseSelectAll((QTreeView*)self);
}

void q_treeview_expanded(void* self, void* index) {
    QTreeView_Expanded((QTreeView*)self, (QModelIndex*)index);
}

void q_treeview_on_expanded(void* self, void (*callback)(void*, void*)) {
    QTreeView_Connect_Expanded((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_collapsed(void* self, void* index) {
    QTreeView_Collapsed((QTreeView*)self, (QModelIndex*)index);
}

void q_treeview_on_collapsed(void* self, void (*callback)(void*, void*)) {
    QTreeView_Connect_Collapsed((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_hide_column(void* self, int column) {
    QTreeView_HideColumn((QTreeView*)self, column);
}

void q_treeview_show_column(void* self, int column) {
    QTreeView_ShowColumn((QTreeView*)self, column);
}

void q_treeview_expand(void* self, void* index) {
    QTreeView_Expand((QTreeView*)self, (QModelIndex*)index);
}

void q_treeview_collapse(void* self, void* index) {
    QTreeView_Collapse((QTreeView*)self, (QModelIndex*)index);
}

void q_treeview_resize_column_to_contents(void* self, int column) {
    QTreeView_ResizeColumnToContents((QTreeView*)self, column);
}

void q_treeview_sort_by_column(void* self, int column, int32_t order) {
    QTreeView_SortByColumn((QTreeView*)self, column, order);
}

void q_treeview_expand_all(void* self) {
    QTreeView_ExpandAll((QTreeView*)self);
}

void q_treeview_expand_recursively(void* self, void* index) {
    QTreeView_ExpandRecursively((QTreeView*)self, (QModelIndex*)index);
}

void q_treeview_collapse_all(void* self) {
    QTreeView_CollapseAll((QTreeView*)self);
}

void q_treeview_expand_to_depth(void* self, int depth) {
    QTreeView_ExpandToDepth((QTreeView*)self, depth);
}

void q_treeview_column_resized(void* self, int column, int oldSize, int newSize) {
    QTreeView_ColumnResized((QTreeView*)self, column, oldSize, newSize);
}

void q_treeview_on_column_resized(void* self, void (*callback)(void*, int, int, int)) {
    QTreeView_OnColumnResized((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_column_resized(void* self, int column, int oldSize, int newSize) {
    QTreeView_QBaseColumnResized((QTreeView*)self, column, oldSize, newSize);
}

void q_treeview_column_count_changed(void* self, int oldCount, int newCount) {
    QTreeView_ColumnCountChanged((QTreeView*)self, oldCount, newCount);
}

void q_treeview_on_column_count_changed(void* self, void (*callback)(void*, int, int)) {
    QTreeView_OnColumnCountChanged((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_column_count_changed(void* self, int oldCount, int newCount) {
    QTreeView_QBaseColumnCountChanged((QTreeView*)self, oldCount, newCount);
}

void q_treeview_column_moved(void* self) {
    QTreeView_ColumnMoved((QTreeView*)self);
}

void q_treeview_on_column_moved(void* self, void (*callback)()) {
    QTreeView_OnColumnMoved((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_column_moved(void* self) {
    QTreeView_QBaseColumnMoved((QTreeView*)self);
}

void q_treeview_reexpand(void* self) {
    QTreeView_Reexpand((QTreeView*)self);
}

void q_treeview_on_reexpand(void* self, void (*callback)()) {
    QTreeView_OnReexpand((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_reexpand(void* self) {
    QTreeView_QBaseReexpand((QTreeView*)self);
}

void q_treeview_rows_removed(void* self, void* parent, int first, int last) {
    QTreeView_RowsRemoved((QTreeView*)self, (QModelIndex*)parent, first, last);
}

void q_treeview_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QTreeView_OnRowsRemoved((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_rows_removed(void* self, void* parent, int first, int last) {
    QTreeView_QBaseRowsRemoved((QTreeView*)self, (QModelIndex*)parent, first, last);
}

void q_treeview_vertical_scrollbar_value_changed(void* self, int value) {
    QTreeView_VerticalScrollbarValueChanged((QTreeView*)self, value);
}

void q_treeview_on_vertical_scrollbar_value_changed(void* self, void (*callback)(void*, int)) {
    QTreeView_OnVerticalScrollbarValueChanged((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_vertical_scrollbar_value_changed(void* self, int value) {
    QTreeView_QBaseVerticalScrollbarValueChanged((QTreeView*)self, value);
}

void q_treeview_scroll_contents_by(void* self, int dx, int dy) {
    QTreeView_ScrollContentsBy((QTreeView*)self, dx, dy);
}

void q_treeview_on_scroll_contents_by(void* self, void (*callback)(void*, int, int)) {
    QTreeView_OnScrollContentsBy((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QTreeView_QBaseScrollContentsBy((QTreeView*)self, dx, dy);
}

void q_treeview_rows_inserted(void* self, void* parent, int start, int end) {
    QTreeView_RowsInserted((QTreeView*)self, (QModelIndex*)parent, start, end);
}

void q_treeview_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QTreeView_OnRowsInserted((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_rows_inserted(void* self, void* parent, int start, int end) {
    QTreeView_QBaseRowsInserted((QTreeView*)self, (QModelIndex*)parent, start, end);
}

void q_treeview_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QTreeView_RowsAboutToBeRemoved((QTreeView*)self, (QModelIndex*)parent, start, end);
}

void q_treeview_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QTreeView_OnRowsAboutToBeRemoved((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QTreeView_QBaseRowsAboutToBeRemoved((QTreeView*)self, (QModelIndex*)parent, start, end);
}

QModelIndex* q_treeview_move_cursor(void* self, int32_t cursorAction, int32_t modifiers) {
    return QTreeView_MoveCursor((QTreeView*)self, cursorAction, modifiers);
}

void q_treeview_on_move_cursor(void* self, QModelIndex* (*callback)(void*, int32_t, int32_t)) {
    QTreeView_OnMoveCursor((QTreeView*)self, (intptr_t)callback);
}

QModelIndex* q_treeview_qbase_move_cursor(void* self, int32_t cursorAction, int32_t modifiers) {
    return QTreeView_QBaseMoveCursor((QTreeView*)self, cursorAction, modifiers);
}

int32_t q_treeview_horizontal_offset(void* self) {
    return QTreeView_HorizontalOffset((QTreeView*)self);
}

void q_treeview_on_horizontal_offset(void* self, int32_t (*callback)()) {
    QTreeView_OnHorizontalOffset((QTreeView*)self, (intptr_t)callback);
}

int32_t q_treeview_qbase_horizontal_offset(void* self) {
    return QTreeView_QBaseHorizontalOffset((QTreeView*)self);
}

int32_t q_treeview_vertical_offset(void* self) {
    return QTreeView_VerticalOffset((QTreeView*)self);
}

void q_treeview_on_vertical_offset(void* self, int32_t (*callback)()) {
    QTreeView_OnVerticalOffset((QTreeView*)self, (intptr_t)callback);
}

int32_t q_treeview_qbase_vertical_offset(void* self) {
    return QTreeView_QBaseVerticalOffset((QTreeView*)self);
}

void q_treeview_set_selection(void* self, void* rect, int32_t command) {
    QTreeView_SetSelection((QTreeView*)self, (QRect*)rect, command);
}

void q_treeview_on_set_selection(void* self, void (*callback)(void*, void*, int32_t)) {
    QTreeView_OnSetSelection((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_set_selection(void* self, void* rect, int32_t command) {
    QTreeView_QBaseSetSelection((QTreeView*)self, (QRect*)rect, command);
}

QRegion* q_treeview_visual_region_for_selection(void* self, void* selection) {
    return QTreeView_VisualRegionForSelection((QTreeView*)self, (QItemSelection*)selection);
}

void q_treeview_on_visual_region_for_selection(void* self, QRegion* (*callback)(void*, void*)) {
    QTreeView_OnVisualRegionForSelection((QTreeView*)self, (intptr_t)callback);
}

QRegion* q_treeview_qbase_visual_region_for_selection(void* self, void* selection) {
    return QTreeView_QBaseVisualRegionForSelection((QTreeView*)self, (QItemSelection*)selection);
}

libqt_list /* of QModelIndex* */ q_treeview_selected_indexes(void* self) {
    libqt_list _arr = QTreeView_SelectedIndexes((QTreeView*)self);
    return _arr;
}

void q_treeview_on_selected_indexes(void* self, libqt_list /* of QModelIndex* */ (*callback)()) {
    QTreeView_OnSelectedIndexes((QTreeView*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ q_treeview_qbase_selected_indexes(void* self) {
    libqt_list _arr = QTreeView_QBaseSelectedIndexes((QTreeView*)self);
    return _arr;
}

void q_treeview_change_event(void* self, void* event) {
    QTreeView_ChangeEvent((QTreeView*)self, (QEvent*)event);
}

void q_treeview_on_change_event(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnChangeEvent((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_change_event(void* self, void* event) {
    QTreeView_QBaseChangeEvent((QTreeView*)self, (QEvent*)event);
}

void q_treeview_timer_event(void* self, void* event) {
    QTreeView_TimerEvent((QTreeView*)self, (QTimerEvent*)event);
}

void q_treeview_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnTimerEvent((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_timer_event(void* self, void* event) {
    QTreeView_QBaseTimerEvent((QTreeView*)self, (QTimerEvent*)event);
}

void q_treeview_paint_event(void* self, void* event) {
    QTreeView_PaintEvent((QTreeView*)self, (QPaintEvent*)event);
}

void q_treeview_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnPaintEvent((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_paint_event(void* self, void* event) {
    QTreeView_QBasePaintEvent((QTreeView*)self, (QPaintEvent*)event);
}

void q_treeview_draw_tree(void* self, void* painter, void* region) {
    QTreeView_DrawTree((QTreeView*)self, (QPainter*)painter, (QRegion*)region);
}

void q_treeview_on_draw_tree(void* self, void (*callback)(void*, void*, void*)) {
    QTreeView_OnDrawTree((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_draw_tree(void* self, void* painter, void* region) {
    QTreeView_QBaseDrawTree((QTreeView*)self, (QPainter*)painter, (QRegion*)region);
}

void q_treeview_draw_row(void* self, void* painter, void* options, void* index) {
    QTreeView_DrawRow((QTreeView*)self, (QPainter*)painter, (QStyleOptionViewItem*)options, (QModelIndex*)index);
}

void q_treeview_on_draw_row(void* self, void (*callback)(void*, void*, void*, void*)) {
    QTreeView_OnDrawRow((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_draw_row(void* self, void* painter, void* options, void* index) {
    QTreeView_QBaseDrawRow((QTreeView*)self, (QPainter*)painter, (QStyleOptionViewItem*)options, (QModelIndex*)index);
}

void q_treeview_draw_branches(void* self, void* painter, void* rect, void* index) {
    QTreeView_DrawBranches((QTreeView*)self, (QPainter*)painter, (QRect*)rect, (QModelIndex*)index);
}

void q_treeview_on_draw_branches(void* self, void (*callback)(void*, void*, void*, void*)) {
    QTreeView_OnDrawBranches((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_draw_branches(void* self, void* painter, void* rect, void* index) {
    QTreeView_QBaseDrawBranches((QTreeView*)self, (QPainter*)painter, (QRect*)rect, (QModelIndex*)index);
}

void q_treeview_mouse_press_event(void* self, void* event) {
    QTreeView_MousePressEvent((QTreeView*)self, (QMouseEvent*)event);
}

void q_treeview_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnMousePressEvent((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_mouse_press_event(void* self, void* event) {
    QTreeView_QBaseMousePressEvent((QTreeView*)self, (QMouseEvent*)event);
}

void q_treeview_mouse_release_event(void* self, void* event) {
    QTreeView_MouseReleaseEvent((QTreeView*)self, (QMouseEvent*)event);
}

void q_treeview_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnMouseReleaseEvent((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_mouse_release_event(void* self, void* event) {
    QTreeView_QBaseMouseReleaseEvent((QTreeView*)self, (QMouseEvent*)event);
}

void q_treeview_mouse_double_click_event(void* self, void* event) {
    QTreeView_MouseDoubleClickEvent((QTreeView*)self, (QMouseEvent*)event);
}

void q_treeview_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnMouseDoubleClickEvent((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_mouse_double_click_event(void* self, void* event) {
    QTreeView_QBaseMouseDoubleClickEvent((QTreeView*)self, (QMouseEvent*)event);
}

void q_treeview_mouse_move_event(void* self, void* event) {
    QTreeView_MouseMoveEvent((QTreeView*)self, (QMouseEvent*)event);
}

void q_treeview_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnMouseMoveEvent((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_mouse_move_event(void* self, void* event) {
    QTreeView_QBaseMouseMoveEvent((QTreeView*)self, (QMouseEvent*)event);
}

void q_treeview_key_press_event(void* self, void* event) {
    QTreeView_KeyPressEvent((QTreeView*)self, (QKeyEvent*)event);
}

void q_treeview_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnKeyPressEvent((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_key_press_event(void* self, void* event) {
    QTreeView_QBaseKeyPressEvent((QTreeView*)self, (QKeyEvent*)event);
}

void q_treeview_drag_move_event(void* self, void* event) {
    QTreeView_DragMoveEvent((QTreeView*)self, (QDragMoveEvent*)event);
}

void q_treeview_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnDragMoveEvent((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_drag_move_event(void* self, void* event) {
    QTreeView_QBaseDragMoveEvent((QTreeView*)self, (QDragMoveEvent*)event);
}

bool q_treeview_viewport_event(void* self, void* event) {
    return QTreeView_ViewportEvent((QTreeView*)self, (QEvent*)event);
}

void q_treeview_on_viewport_event(void* self, bool (*callback)(void*, void*)) {
    QTreeView_OnViewportEvent((QTreeView*)self, (intptr_t)callback);
}

bool q_treeview_qbase_viewport_event(void* self, void* event) {
    return QTreeView_QBaseViewportEvent((QTreeView*)self, (QEvent*)event);
}

void q_treeview_update_geometries(void* self) {
    QTreeView_UpdateGeometries((QTreeView*)self);
}

void q_treeview_on_update_geometries(void* self, void (*callback)()) {
    QTreeView_OnUpdateGeometries((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_update_geometries(void* self) {
    QTreeView_QBaseUpdateGeometries((QTreeView*)self);
}

QSize* q_treeview_viewport_size_hint(void* self) {
    return QTreeView_ViewportSizeHint((QTreeView*)self);
}

void q_treeview_on_viewport_size_hint(void* self, QSize* (*callback)()) {
    QTreeView_OnViewportSizeHint((QTreeView*)self, (intptr_t)callback);
}

QSize* q_treeview_qbase_viewport_size_hint(void* self) {
    return QTreeView_QBaseViewportSizeHint((QTreeView*)self);
}

int32_t q_treeview_size_hint_for_column(void* self, int column) {
    return QTreeView_SizeHintForColumn((QTreeView*)self, column);
}

void q_treeview_on_size_hint_for_column(void* self, int32_t (*callback)(void*, int)) {
    QTreeView_OnSizeHintForColumn((QTreeView*)self, (intptr_t)callback);
}

int32_t q_treeview_qbase_size_hint_for_column(void* self, int column) {
    return QTreeView_QBaseSizeHintForColumn((QTreeView*)self, column);
}

int32_t q_treeview_index_row_size_hint(void* self, void* index) {
    return QTreeView_IndexRowSizeHint((QTreeView*)self, (QModelIndex*)index);
}

void q_treeview_on_index_row_size_hint(void* self, int32_t (*callback)(void*, void*)) {
    QTreeView_OnIndexRowSizeHint((QTreeView*)self, (intptr_t)callback);
}

int32_t q_treeview_qbase_index_row_size_hint(void* self, void* index) {
    return QTreeView_QBaseIndexRowSizeHint((QTreeView*)self, (QModelIndex*)index);
}

int32_t q_treeview_row_height(void* self, void* index) {
    return QTreeView_RowHeight((QTreeView*)self, (QModelIndex*)index);
}

void q_treeview_on_row_height(void* self, int32_t (*callback)(void*, void*)) {
    QTreeView_OnRowHeight((QTreeView*)self, (intptr_t)callback);
}

int32_t q_treeview_qbase_row_height(void* self, void* index) {
    return QTreeView_QBaseRowHeight((QTreeView*)self, (QModelIndex*)index);
}

void q_treeview_horizontal_scrollbar_action(void* self, int action) {
    QTreeView_HorizontalScrollbarAction((QTreeView*)self, action);
}

void q_treeview_on_horizontal_scrollbar_action(void* self, void (*callback)(void*, int)) {
    QTreeView_OnHorizontalScrollbarAction((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_horizontal_scrollbar_action(void* self, int action) {
    QTreeView_QBaseHorizontalScrollbarAction((QTreeView*)self, action);
}

bool q_treeview_is_index_hidden(void* self, void* index) {
    return QTreeView_IsIndexHidden((QTreeView*)self, (QModelIndex*)index);
}

void q_treeview_on_is_index_hidden(void* self, bool (*callback)(void*, void*)) {
    QTreeView_OnIsIndexHidden((QTreeView*)self, (intptr_t)callback);
}

bool q_treeview_qbase_is_index_hidden(void* self, void* index) {
    return QTreeView_QBaseIsIndexHidden((QTreeView*)self, (QModelIndex*)index);
}

void q_treeview_selection_changed(void* self, void* selected, void* deselected) {
    QTreeView_SelectionChanged((QTreeView*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

void q_treeview_on_selection_changed(void* self, void (*callback)(void*, void*, void*)) {
    QTreeView_OnSelectionChanged((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_selection_changed(void* self, void* selected, void* deselected) {
    QTreeView_QBaseSelectionChanged((QTreeView*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

void q_treeview_current_changed(void* self, void* current, void* previous) {
    QTreeView_CurrentChanged((QTreeView*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

void q_treeview_on_current_changed(void* self, void (*callback)(void*, void*, void*)) {
    QTreeView_OnCurrentChanged((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_qbase_current_changed(void* self, void* current, void* previous) {
    QTreeView_QBaseCurrentChanged((QTreeView*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

const char* q_treeview_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_treeview_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_treeview_expand_recursively2(void* self, void* index, int depth) {
    QTreeView_ExpandRecursively2((QTreeView*)self, (QModelIndex*)index, depth);
}

QAbstractItemModel* q_treeview_model(void* self) {
    return QAbstractItemView_Model((QAbstractItemView*)self);
}

QItemSelectionModel* q_treeview_selection_model(void* self) {
    return QAbstractItemView_SelectionModel((QAbstractItemView*)self);
}

void q_treeview_set_item_delegate(void* self, void* delegate) {
    QAbstractItemView_SetItemDelegate((QAbstractItemView*)self, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* q_treeview_item_delegate(void* self) {
    return QAbstractItemView_ItemDelegate((QAbstractItemView*)self);
}

void q_treeview_set_selection_mode(void* self, int32_t mode) {
    QAbstractItemView_SetSelectionMode((QAbstractItemView*)self, mode);
}

int32_t q_treeview_selection_mode(void* self) {
    return QAbstractItemView_SelectionMode((QAbstractItemView*)self);
}

void q_treeview_set_selection_behavior(void* self, int32_t behavior) {
    QAbstractItemView_SetSelectionBehavior((QAbstractItemView*)self, behavior);
}

int32_t q_treeview_selection_behavior(void* self) {
    return QAbstractItemView_SelectionBehavior((QAbstractItemView*)self);
}

QModelIndex* q_treeview_current_index(void* self) {
    return QAbstractItemView_CurrentIndex((QAbstractItemView*)self);
}

QModelIndex* q_treeview_root_index(void* self) {
    return QAbstractItemView_RootIndex((QAbstractItemView*)self);
}

void q_treeview_set_edit_triggers(void* self, int32_t triggers) {
    QAbstractItemView_SetEditTriggers((QAbstractItemView*)self, triggers);
}

int32_t q_treeview_edit_triggers(void* self) {
    return QAbstractItemView_EditTriggers((QAbstractItemView*)self);
}

void q_treeview_set_vertical_scroll_mode(void* self, int32_t mode) {
    QAbstractItemView_SetVerticalScrollMode((QAbstractItemView*)self, mode);
}

int32_t q_treeview_vertical_scroll_mode(void* self) {
    return QAbstractItemView_VerticalScrollMode((QAbstractItemView*)self);
}

void q_treeview_reset_vertical_scroll_mode(void* self) {
    QAbstractItemView_ResetVerticalScrollMode((QAbstractItemView*)self);
}

void q_treeview_set_horizontal_scroll_mode(void* self, int32_t mode) {
    QAbstractItemView_SetHorizontalScrollMode((QAbstractItemView*)self, mode);
}

int32_t q_treeview_horizontal_scroll_mode(void* self) {
    return QAbstractItemView_HorizontalScrollMode((QAbstractItemView*)self);
}

void q_treeview_reset_horizontal_scroll_mode(void* self) {
    QAbstractItemView_ResetHorizontalScrollMode((QAbstractItemView*)self);
}

void q_treeview_set_auto_scroll(void* self, bool enable) {
    QAbstractItemView_SetAutoScroll((QAbstractItemView*)self, enable);
}

bool q_treeview_has_auto_scroll(void* self) {
    return QAbstractItemView_HasAutoScroll((QAbstractItemView*)self);
}

void q_treeview_set_auto_scroll_margin(void* self, int margin) {
    QAbstractItemView_SetAutoScrollMargin((QAbstractItemView*)self, margin);
}

int32_t q_treeview_auto_scroll_margin(void* self) {
    return QAbstractItemView_AutoScrollMargin((QAbstractItemView*)self);
}

void q_treeview_set_tab_key_navigation(void* self, bool enable) {
    QAbstractItemView_SetTabKeyNavigation((QAbstractItemView*)self, enable);
}

bool q_treeview_tab_key_navigation(void* self) {
    return QAbstractItemView_TabKeyNavigation((QAbstractItemView*)self);
}

void q_treeview_set_drop_indicator_shown(void* self, bool enable) {
    QAbstractItemView_SetDropIndicatorShown((QAbstractItemView*)self, enable);
}

bool q_treeview_show_drop_indicator(void* self) {
    return QAbstractItemView_ShowDropIndicator((QAbstractItemView*)self);
}

void q_treeview_set_drag_enabled(void* self, bool enable) {
    QAbstractItemView_SetDragEnabled((QAbstractItemView*)self, enable);
}

bool q_treeview_drag_enabled(void* self) {
    return QAbstractItemView_DragEnabled((QAbstractItemView*)self);
}

void q_treeview_set_drag_drop_overwrite_mode(void* self, bool overwrite) {
    QAbstractItemView_SetDragDropOverwriteMode((QAbstractItemView*)self, overwrite);
}

bool q_treeview_drag_drop_overwrite_mode(void* self) {
    return QAbstractItemView_DragDropOverwriteMode((QAbstractItemView*)self);
}

void q_treeview_set_drag_drop_mode(void* self, int32_t behavior) {
    QAbstractItemView_SetDragDropMode((QAbstractItemView*)self, behavior);
}

int32_t q_treeview_drag_drop_mode(void* self) {
    return QAbstractItemView_DragDropMode((QAbstractItemView*)self);
}

void q_treeview_set_default_drop_action(void* self, int32_t dropAction) {
    QAbstractItemView_SetDefaultDropAction((QAbstractItemView*)self, dropAction);
}

int32_t q_treeview_default_drop_action(void* self) {
    return QAbstractItemView_DefaultDropAction((QAbstractItemView*)self);
}

void q_treeview_set_alternating_row_colors(void* self, bool enable) {
    QAbstractItemView_SetAlternatingRowColors((QAbstractItemView*)self, enable);
}

bool q_treeview_alternating_row_colors(void* self) {
    return QAbstractItemView_AlternatingRowColors((QAbstractItemView*)self);
}

void q_treeview_set_icon_size(void* self, void* size) {
    QAbstractItemView_SetIconSize((QAbstractItemView*)self, (QSize*)size);
}

QSize* q_treeview_icon_size(void* self) {
    return QAbstractItemView_IconSize((QAbstractItemView*)self);
}

void q_treeview_set_text_elide_mode(void* self, int32_t mode) {
    QAbstractItemView_SetTextElideMode((QAbstractItemView*)self, mode);
}

int32_t q_treeview_text_elide_mode(void* self) {
    return QAbstractItemView_TextElideMode((QAbstractItemView*)self);
}

QSize* q_treeview_size_hint_for_index(void* self, void* index) {
    return QAbstractItemView_SizeHintForIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_treeview_open_persistent_editor(void* self, void* index) {
    QAbstractItemView_OpenPersistentEditor((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_treeview_close_persistent_editor(void* self, void* index) {
    QAbstractItemView_ClosePersistentEditor((QAbstractItemView*)self, (QModelIndex*)index);
}

bool q_treeview_is_persistent_editor_open(void* self, void* index) {
    return QAbstractItemView_IsPersistentEditorOpen((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_treeview_set_index_widget(void* self, void* index, void* widget) {
    QAbstractItemView_SetIndexWidget((QAbstractItemView*)self, (QModelIndex*)index, (QWidget*)widget);
}

QWidget* q_treeview_index_widget(void* self, void* index) {
    return QAbstractItemView_IndexWidget((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_treeview_set_item_delegate_for_row(void* self, int row, void* delegate) {
    QAbstractItemView_SetItemDelegateForRow((QAbstractItemView*)self, row, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* q_treeview_item_delegate_for_row(void* self, int row) {
    return QAbstractItemView_ItemDelegateForRow((QAbstractItemView*)self, row);
}

void q_treeview_set_item_delegate_for_column(void* self, int column, void* delegate) {
    QAbstractItemView_SetItemDelegateForColumn((QAbstractItemView*)self, column, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* q_treeview_item_delegate_for_column(void* self, int column) {
    return QAbstractItemView_ItemDelegateForColumn((QAbstractItemView*)self, column);
}

QAbstractItemDelegate* q_treeview_item_delegate2(void* self, void* index) {
    return QAbstractItemView_ItemDelegate2((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_treeview_edit(void* self, void* index) {
    QAbstractItemView_Edit((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_treeview_clear_selection(void* self) {
    QAbstractItemView_ClearSelection((QAbstractItemView*)self);
}

void q_treeview_set_current_index(void* self, void* index) {
    QAbstractItemView_SetCurrentIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_treeview_scroll_to_top(void* self) {
    QAbstractItemView_ScrollToTop((QAbstractItemView*)self);
}

void q_treeview_scroll_to_bottom(void* self) {
    QAbstractItemView_ScrollToBottom((QAbstractItemView*)self);
}

void q_treeview_update(void* self, void* index) {
    QAbstractItemView_Update((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_treeview_pressed(void* self, void* index) {
    QAbstractItemView_Pressed((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_treeview_on_pressed(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Pressed((QAbstractItemView*)self, (intptr_t)callback);
}

void q_treeview_clicked(void* self, void* index) {
    QAbstractItemView_Clicked((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_treeview_on_clicked(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Clicked((QAbstractItemView*)self, (intptr_t)callback);
}

void q_treeview_double_clicked(void* self, void* index) {
    QAbstractItemView_DoubleClicked((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_treeview_on_double_clicked(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_DoubleClicked((QAbstractItemView*)self, (intptr_t)callback);
}

void q_treeview_activated(void* self, void* index) {
    QAbstractItemView_Activated((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_treeview_on_activated(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Activated((QAbstractItemView*)self, (intptr_t)callback);
}

void q_treeview_entered(void* self, void* index) {
    QAbstractItemView_Entered((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_treeview_on_entered(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_Entered((QAbstractItemView*)self, (intptr_t)callback);
}

void q_treeview_viewport_entered(void* self) {
    QAbstractItemView_ViewportEntered((QAbstractItemView*)self);
}

void q_treeview_on_viewport_entered(void* self, void (*callback)(void*)) {
    QAbstractItemView_Connect_ViewportEntered((QAbstractItemView*)self, (intptr_t)callback);
}

void q_treeview_icon_size_changed(void* self, void* size) {
    QAbstractItemView_IconSizeChanged((QAbstractItemView*)self, (QSize*)size);
}

void q_treeview_on_icon_size_changed(void* self, void (*callback)(void*, void*)) {
    QAbstractItemView_Connect_IconSizeChanged((QAbstractItemView*)self, (intptr_t)callback);
}

int32_t q_treeview_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_treeview_set_vertical_scroll_bar_policy(void* self, int32_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

QScrollBar* q_treeview_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

void q_treeview_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

int32_t q_treeview_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_treeview_set_horizontal_scroll_bar_policy(void* self, int32_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

QScrollBar* q_treeview_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

void q_treeview_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

QWidget* q_treeview_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

void q_treeview_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

void q_treeview_add_scroll_bar_widget(void* self, void* widget, int32_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

libqt_list /* of QWidget* */ q_treeview_scroll_bar_widgets(void* self, int32_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

QWidget* q_treeview_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

void q_treeview_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

QSize* q_treeview_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

int32_t q_treeview_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

void q_treeview_set_size_adjust_policy(void* self, int32_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

int32_t q_treeview_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void q_treeview_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t q_treeview_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int32_t q_treeview_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void q_treeview_set_frame_shape(void* self, int32_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int32_t q_treeview_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void q_treeview_set_frame_shadow(void* self, int32_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t q_treeview_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void q_treeview_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t q_treeview_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void q_treeview_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* q_treeview_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void q_treeview_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t q_treeview_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_treeview_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_treeview_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_treeview_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_treeview_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_treeview_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_treeview_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_treeview_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_treeview_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_treeview_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_treeview_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_treeview_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_treeview_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_treeview_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_treeview_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_treeview_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_treeview_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_treeview_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_treeview_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_treeview_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_treeview_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_treeview_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_treeview_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_treeview_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_treeview_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_treeview_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_treeview_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_treeview_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_treeview_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_treeview_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_treeview_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_treeview_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_treeview_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_treeview_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_treeview_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_treeview_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_treeview_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_treeview_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_treeview_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_treeview_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_treeview_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_treeview_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_treeview_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_treeview_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_treeview_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_treeview_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_treeview_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_treeview_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_treeview_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_treeview_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_treeview_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_treeview_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_treeview_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_treeview_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_treeview_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_treeview_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_treeview_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_treeview_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_treeview_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_treeview_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_treeview_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_treeview_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_treeview_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_treeview_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_treeview_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_treeview_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_treeview_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_treeview_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_treeview_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_treeview_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_treeview_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_treeview_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_treeview_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_treeview_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_treeview_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_treeview_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_treeview_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_treeview_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_treeview_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_treeview_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_treeview_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_treeview_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_treeview_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_treeview_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_treeview_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_treeview_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_treeview_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_treeview_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_treeview_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_treeview_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_treeview_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_treeview_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_treeview_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_treeview_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_treeview_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_treeview_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_treeview_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_treeview_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_treeview_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_treeview_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_treeview_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_treeview_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_treeview_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_treeview_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_treeview_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_treeview_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_treeview_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_treeview_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_treeview_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_treeview_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_treeview_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_treeview_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_treeview_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_treeview_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_treeview_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_treeview_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_treeview_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_treeview_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_treeview_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_treeview_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_treeview_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_treeview_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_treeview_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_treeview_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_treeview_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_treeview_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_treeview_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_treeview_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_treeview_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_treeview_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_treeview_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_treeview_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_treeview_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_treeview_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_treeview_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_treeview_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_treeview_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_treeview_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_treeview_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_treeview_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_treeview_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_treeview_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_treeview_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_treeview_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_treeview_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_treeview_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_treeview_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_treeview_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_treeview_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_treeview_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_treeview_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_treeview_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_treeview_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_treeview_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_treeview_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_treeview_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_treeview_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_treeview_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_treeview_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_treeview_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_treeview_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_treeview_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_treeview_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_treeview_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_treeview_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_treeview_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_treeview_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_treeview_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_treeview_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_treeview_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_treeview_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_treeview_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_treeview_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_treeview_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_treeview_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_treeview_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_treeview_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_treeview_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_treeview_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_treeview_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_treeview_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_treeview_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_treeview_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_treeview_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_treeview_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_treeview_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_treeview_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_treeview_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_treeview_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_treeview_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_treeview_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_treeview_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_treeview_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_treeview_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_treeview_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_treeview_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_treeview_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_treeview_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_treeview_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_treeview_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_treeview_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_treeview_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_treeview_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_treeview_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_treeview_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_treeview_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_treeview_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_treeview_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_treeview_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_treeview_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_treeview_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_treeview_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_treeview_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_treeview_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_treeview_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_treeview_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_treeview_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_treeview_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_treeview_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_treeview_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_treeview_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_treeview_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_treeview_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_treeview_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_treeview_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_treeview_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_treeview_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t q_treeview_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_treeview_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_treeview_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t q_treeview_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_treeview_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_treeview_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_treeview_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_treeview_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_treeview_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_treeview_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_treeview_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_treeview_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_treeview_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_treeview_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_treeview_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_treeview_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_treeview_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_treeview_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_treeview_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_treeview_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_treeview_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_treeview_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_treeview_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_treeview_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_treeview_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_treeview_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_treeview_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t q_treeview_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_treeview_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_treeview_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_treeview_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_treeview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_treeview_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_treeview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_treeview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_treeview_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_treeview_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_treeview_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_treeview_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_treeview_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_treeview_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_treeview_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_treeview_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_treeview_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_treeview_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_treeview_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_treeview_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_treeview_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_treeview_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_treeview_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_treeview_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_treeview_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_treeview_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_treeview_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_treeview_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_treeview_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_treeview_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_treeview_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_treeview_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_treeview_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_treeview_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_treeview_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_treeview_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_treeview_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_treeview_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_treeview_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_treeview_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_treeview_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_treeview_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_treeview_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_treeview_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_treeview_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_treeview_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_treeview_dynamic_property_names\n");
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

QBindingStorage* q_treeview_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_treeview_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_treeview_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_treeview_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_treeview_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_treeview_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_treeview_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_treeview_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_treeview_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_treeview_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_treeview_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_treeview_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_treeview_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_treeview_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_treeview_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_treeview_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_treeview_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_treeview_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_treeview_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_treeview_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_treeview_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_treeview_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_treeview_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_treeview_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_treeview_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_treeview_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_treeview_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_treeview_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_treeview_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_treeview_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_treeview_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t q_treeview_size_hint_for_row(void* self, int row) {
    return QTreeView_SizeHintForRow((QTreeView*)self, row);
}

int32_t q_treeview_qbase_size_hint_for_row(void* self, int row) {
    return QTreeView_QBaseSizeHintForRow((QTreeView*)self, row);
}

void q_treeview_on_size_hint_for_row(void* self, int32_t (*callback)(void*, int)) {
    QTreeView_OnSizeHintForRow((QTreeView*)self, (intptr_t)callback);
}

QAbstractItemDelegate* q_treeview_item_delegate_for_index(void* self, void* index) {
    return QTreeView_ItemDelegateForIndex((QTreeView*)self, (QModelIndex*)index);
}

QAbstractItemDelegate* q_treeview_qbase_item_delegate_for_index(void* self, void* index) {
    return QTreeView_QBaseItemDelegateForIndex((QTreeView*)self, (QModelIndex*)index);
}

void q_treeview_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*callback)(void*, void*)) {
    QTreeView_OnItemDelegateForIndex((QTreeView*)self, (intptr_t)callback);
}

QVariant* q_treeview_input_method_query(void* self, int32_t query) {
    return QTreeView_InputMethodQuery((QTreeView*)self, query);
}

QVariant* q_treeview_qbase_input_method_query(void* self, int32_t query) {
    return QTreeView_QBaseInputMethodQuery((QTreeView*)self, query);
}

void q_treeview_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QTreeView_OnInputMethodQuery((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_update_editor_data(void* self) {
    QTreeView_UpdateEditorData((QTreeView*)self);
}

void q_treeview_qbase_update_editor_data(void* self) {
    QTreeView_QBaseUpdateEditorData((QTreeView*)self);
}

void q_treeview_on_update_editor_data(void* self, void (*callback)()) {
    QTreeView_OnUpdateEditorData((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_update_editor_geometries(void* self) {
    QTreeView_UpdateEditorGeometries((QTreeView*)self);
}

void q_treeview_qbase_update_editor_geometries(void* self) {
    QTreeView_QBaseUpdateEditorGeometries((QTreeView*)self);
}

void q_treeview_on_update_editor_geometries(void* self, void (*callback)()) {
    QTreeView_OnUpdateEditorGeometries((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_vertical_scrollbar_action(void* self, int action) {
    QTreeView_VerticalScrollbarAction((QTreeView*)self, action);
}

void q_treeview_qbase_vertical_scrollbar_action(void* self, int action) {
    QTreeView_QBaseVerticalScrollbarAction((QTreeView*)self, action);
}

void q_treeview_on_vertical_scrollbar_action(void* self, void (*callback)(void*, int)) {
    QTreeView_OnVerticalScrollbarAction((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_horizontal_scrollbar_value_changed(void* self, int value) {
    QTreeView_HorizontalScrollbarValueChanged((QTreeView*)self, value);
}

void q_treeview_qbase_horizontal_scrollbar_value_changed(void* self, int value) {
    QTreeView_QBaseHorizontalScrollbarValueChanged((QTreeView*)self, value);
}

void q_treeview_on_horizontal_scrollbar_value_changed(void* self, void (*callback)(void*, int)) {
    QTreeView_OnHorizontalScrollbarValueChanged((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_close_editor(void* self, void* editor, int32_t hint) {
    QTreeView_CloseEditor((QTreeView*)self, (QWidget*)editor, hint);
}

void q_treeview_qbase_close_editor(void* self, void* editor, int32_t hint) {
    QTreeView_QBaseCloseEditor((QTreeView*)self, (QWidget*)editor, hint);
}

void q_treeview_on_close_editor(void* self, void (*callback)(void*, void*, int32_t)) {
    QTreeView_OnCloseEditor((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_commit_data(void* self, void* editor) {
    QTreeView_CommitData((QTreeView*)self, (QWidget*)editor);
}

void q_treeview_qbase_commit_data(void* self, void* editor) {
    QTreeView_QBaseCommitData((QTreeView*)self, (QWidget*)editor);
}

void q_treeview_on_commit_data(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnCommitData((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_editor_destroyed(void* self, void* editor) {
    QTreeView_EditorDestroyed((QTreeView*)self, (QObject*)editor);
}

void q_treeview_qbase_editor_destroyed(void* self, void* editor) {
    QTreeView_QBaseEditorDestroyed((QTreeView*)self, (QObject*)editor);
}

void q_treeview_on_editor_destroyed(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnEditorDestroyed((QTreeView*)self, (intptr_t)callback);
}

bool q_treeview_edit2(void* self, void* index, int32_t trigger, void* event) {
    return QTreeView_Edit2((QTreeView*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

bool q_treeview_qbase_edit2(void* self, void* index, int32_t trigger, void* event) {
    return QTreeView_QBaseEdit2((QTreeView*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

void q_treeview_on_edit2(void* self, bool (*callback)(void*, void*, int32_t, void*)) {
    QTreeView_OnEdit2((QTreeView*)self, (intptr_t)callback);
}

int32_t q_treeview_selection_command(void* self, void* index, void* event) {
    return QTreeView_SelectionCommand((QTreeView*)self, (QModelIndex*)index, (QEvent*)event);
}

int32_t q_treeview_qbase_selection_command(void* self, void* index, void* event) {
    return QTreeView_QBaseSelectionCommand((QTreeView*)self, (QModelIndex*)index, (QEvent*)event);
}

void q_treeview_on_selection_command(void* self, int32_t (*callback)(void*, void*, void*)) {
    QTreeView_OnSelectionCommand((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_start_drag(void* self, int32_t supportedActions) {
    QTreeView_StartDrag((QTreeView*)self, supportedActions);
}

void q_treeview_qbase_start_drag(void* self, int32_t supportedActions) {
    QTreeView_QBaseStartDrag((QTreeView*)self, supportedActions);
}

void q_treeview_on_start_drag(void* self, void (*callback)(void*, int32_t)) {
    QTreeView_OnStartDrag((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_init_view_item_option(void* self, void* option) {
    QTreeView_InitViewItemOption((QTreeView*)self, (QStyleOptionViewItem*)option);
}

void q_treeview_qbase_init_view_item_option(void* self, void* option) {
    QTreeView_QBaseInitViewItemOption((QTreeView*)self, (QStyleOptionViewItem*)option);
}

void q_treeview_on_init_view_item_option(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnInitViewItemOption((QTreeView*)self, (intptr_t)callback);
}

bool q_treeview_focus_next_prev_child(void* self, bool next) {
    return QTreeView_FocusNextPrevChild((QTreeView*)self, next);
}

bool q_treeview_qbase_focus_next_prev_child(void* self, bool next) {
    return QTreeView_QBaseFocusNextPrevChild((QTreeView*)self, next);
}

void q_treeview_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QTreeView_OnFocusNextPrevChild((QTreeView*)self, (intptr_t)callback);
}

bool q_treeview_event(void* self, void* event) {
    return QTreeView_Event((QTreeView*)self, (QEvent*)event);
}

bool q_treeview_qbase_event(void* self, void* event) {
    return QTreeView_QBaseEvent((QTreeView*)self, (QEvent*)event);
}

void q_treeview_on_event(void* self, bool (*callback)(void*, void*)) {
    QTreeView_OnEvent((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_drag_enter_event(void* self, void* event) {
    QTreeView_DragEnterEvent((QTreeView*)self, (QDragEnterEvent*)event);
}

void q_treeview_qbase_drag_enter_event(void* self, void* event) {
    QTreeView_QBaseDragEnterEvent((QTreeView*)self, (QDragEnterEvent*)event);
}

void q_treeview_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnDragEnterEvent((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_drag_leave_event(void* self, void* event) {
    QTreeView_DragLeaveEvent((QTreeView*)self, (QDragLeaveEvent*)event);
}

void q_treeview_qbase_drag_leave_event(void* self, void* event) {
    QTreeView_QBaseDragLeaveEvent((QTreeView*)self, (QDragLeaveEvent*)event);
}

void q_treeview_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnDragLeaveEvent((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_drop_event(void* self, void* event) {
    QTreeView_DropEvent((QTreeView*)self, (QDropEvent*)event);
}

void q_treeview_qbase_drop_event(void* self, void* event) {
    QTreeView_QBaseDropEvent((QTreeView*)self, (QDropEvent*)event);
}

void q_treeview_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnDropEvent((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_focus_in_event(void* self, void* event) {
    QTreeView_FocusInEvent((QTreeView*)self, (QFocusEvent*)event);
}

void q_treeview_qbase_focus_in_event(void* self, void* event) {
    QTreeView_QBaseFocusInEvent((QTreeView*)self, (QFocusEvent*)event);
}

void q_treeview_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnFocusInEvent((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_focus_out_event(void* self, void* event) {
    QTreeView_FocusOutEvent((QTreeView*)self, (QFocusEvent*)event);
}

void q_treeview_qbase_focus_out_event(void* self, void* event) {
    QTreeView_QBaseFocusOutEvent((QTreeView*)self, (QFocusEvent*)event);
}

void q_treeview_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnFocusOutEvent((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_resize_event(void* self, void* event) {
    QTreeView_ResizeEvent((QTreeView*)self, (QResizeEvent*)event);
}

void q_treeview_qbase_resize_event(void* self, void* event) {
    QTreeView_QBaseResizeEvent((QTreeView*)self, (QResizeEvent*)event);
}

void q_treeview_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnResizeEvent((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_input_method_event(void* self, void* event) {
    QTreeView_InputMethodEvent((QTreeView*)self, (QInputMethodEvent*)event);
}

void q_treeview_qbase_input_method_event(void* self, void* event) {
    QTreeView_QBaseInputMethodEvent((QTreeView*)self, (QInputMethodEvent*)event);
}

void q_treeview_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnInputMethodEvent((QTreeView*)self, (intptr_t)callback);
}

bool q_treeview_event_filter(void* self, void* object, void* event) {
    return QTreeView_EventFilter((QTreeView*)self, (QObject*)object, (QEvent*)event);
}

bool q_treeview_qbase_event_filter(void* self, void* object, void* event) {
    return QTreeView_QBaseEventFilter((QTreeView*)self, (QObject*)object, (QEvent*)event);
}

void q_treeview_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QTreeView_OnEventFilter((QTreeView*)self, (intptr_t)callback);
}

QSize* q_treeview_minimum_size_hint(void* self) {
    return QTreeView_MinimumSizeHint((QTreeView*)self);
}

QSize* q_treeview_qbase_minimum_size_hint(void* self) {
    return QTreeView_QBaseMinimumSizeHint((QTreeView*)self);
}

void q_treeview_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QTreeView_OnMinimumSizeHint((QTreeView*)self, (intptr_t)callback);
}

QSize* q_treeview_size_hint(void* self) {
    return QTreeView_SizeHint((QTreeView*)self);
}

QSize* q_treeview_qbase_size_hint(void* self) {
    return QTreeView_QBaseSizeHint((QTreeView*)self);
}

void q_treeview_on_size_hint(void* self, QSize* (*callback)()) {
    QTreeView_OnSizeHint((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_setup_viewport(void* self, void* viewport) {
    QTreeView_SetupViewport((QTreeView*)self, (QWidget*)viewport);
}

void q_treeview_qbase_setup_viewport(void* self, void* viewport) {
    QTreeView_QBaseSetupViewport((QTreeView*)self, (QWidget*)viewport);
}

void q_treeview_on_setup_viewport(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnSetupViewport((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_wheel_event(void* self, void* param1) {
    QTreeView_WheelEvent((QTreeView*)self, (QWheelEvent*)param1);
}

void q_treeview_qbase_wheel_event(void* self, void* param1) {
    QTreeView_QBaseWheelEvent((QTreeView*)self, (QWheelEvent*)param1);
}

void q_treeview_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnWheelEvent((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_context_menu_event(void* self, void* param1) {
    QTreeView_ContextMenuEvent((QTreeView*)self, (QContextMenuEvent*)param1);
}

void q_treeview_qbase_context_menu_event(void* self, void* param1) {
    QTreeView_QBaseContextMenuEvent((QTreeView*)self, (QContextMenuEvent*)param1);
}

void q_treeview_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnContextMenuEvent((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_init_style_option(void* self, void* option) {
    QTreeView_InitStyleOption((QTreeView*)self, (QStyleOptionFrame*)option);
}

void q_treeview_qbase_init_style_option(void* self, void* option) {
    QTreeView_QBaseInitStyleOption((QTreeView*)self, (QStyleOptionFrame*)option);
}

void q_treeview_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnInitStyleOption((QTreeView*)self, (intptr_t)callback);
}

int32_t q_treeview_dev_type(void* self) {
    return QTreeView_DevType((QTreeView*)self);
}

int32_t q_treeview_qbase_dev_type(void* self) {
    return QTreeView_QBaseDevType((QTreeView*)self);
}

void q_treeview_on_dev_type(void* self, int32_t (*callback)()) {
    QTreeView_OnDevType((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_set_visible(void* self, bool visible) {
    QTreeView_SetVisible((QTreeView*)self, visible);
}

void q_treeview_qbase_set_visible(void* self, bool visible) {
    QTreeView_QBaseSetVisible((QTreeView*)self, visible);
}

void q_treeview_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QTreeView_OnSetVisible((QTreeView*)self, (intptr_t)callback);
}

int32_t q_treeview_height_for_width(void* self, int param1) {
    return QTreeView_HeightForWidth((QTreeView*)self, param1);
}

int32_t q_treeview_qbase_height_for_width(void* self, int param1) {
    return QTreeView_QBaseHeightForWidth((QTreeView*)self, param1);
}

void q_treeview_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QTreeView_OnHeightForWidth((QTreeView*)self, (intptr_t)callback);
}

bool q_treeview_has_height_for_width(void* self) {
    return QTreeView_HasHeightForWidth((QTreeView*)self);
}

bool q_treeview_qbase_has_height_for_width(void* self) {
    return QTreeView_QBaseHasHeightForWidth((QTreeView*)self);
}

void q_treeview_on_has_height_for_width(void* self, bool (*callback)()) {
    QTreeView_OnHasHeightForWidth((QTreeView*)self, (intptr_t)callback);
}

QPaintEngine* q_treeview_paint_engine(void* self) {
    return QTreeView_PaintEngine((QTreeView*)self);
}

QPaintEngine* q_treeview_qbase_paint_engine(void* self) {
    return QTreeView_QBasePaintEngine((QTreeView*)self);
}

void q_treeview_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QTreeView_OnPaintEngine((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_key_release_event(void* self, void* event) {
    QTreeView_KeyReleaseEvent((QTreeView*)self, (QKeyEvent*)event);
}

void q_treeview_qbase_key_release_event(void* self, void* event) {
    QTreeView_QBaseKeyReleaseEvent((QTreeView*)self, (QKeyEvent*)event);
}

void q_treeview_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnKeyReleaseEvent((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_enter_event(void* self, void* event) {
    QTreeView_EnterEvent((QTreeView*)self, (QEnterEvent*)event);
}

void q_treeview_qbase_enter_event(void* self, void* event) {
    QTreeView_QBaseEnterEvent((QTreeView*)self, (QEnterEvent*)event);
}

void q_treeview_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnEnterEvent((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_leave_event(void* self, void* event) {
    QTreeView_LeaveEvent((QTreeView*)self, (QEvent*)event);
}

void q_treeview_qbase_leave_event(void* self, void* event) {
    QTreeView_QBaseLeaveEvent((QTreeView*)self, (QEvent*)event);
}

void q_treeview_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnLeaveEvent((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_move_event(void* self, void* event) {
    QTreeView_MoveEvent((QTreeView*)self, (QMoveEvent*)event);
}

void q_treeview_qbase_move_event(void* self, void* event) {
    QTreeView_QBaseMoveEvent((QTreeView*)self, (QMoveEvent*)event);
}

void q_treeview_on_move_event(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnMoveEvent((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_close_event(void* self, void* event) {
    QTreeView_CloseEvent((QTreeView*)self, (QCloseEvent*)event);
}

void q_treeview_qbase_close_event(void* self, void* event) {
    QTreeView_QBaseCloseEvent((QTreeView*)self, (QCloseEvent*)event);
}

void q_treeview_on_close_event(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnCloseEvent((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_tablet_event(void* self, void* event) {
    QTreeView_TabletEvent((QTreeView*)self, (QTabletEvent*)event);
}

void q_treeview_qbase_tablet_event(void* self, void* event) {
    QTreeView_QBaseTabletEvent((QTreeView*)self, (QTabletEvent*)event);
}

void q_treeview_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnTabletEvent((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_action_event(void* self, void* event) {
    QTreeView_ActionEvent((QTreeView*)self, (QActionEvent*)event);
}

void q_treeview_qbase_action_event(void* self, void* event) {
    QTreeView_QBaseActionEvent((QTreeView*)self, (QActionEvent*)event);
}

void q_treeview_on_action_event(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnActionEvent((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_show_event(void* self, void* event) {
    QTreeView_ShowEvent((QTreeView*)self, (QShowEvent*)event);
}

void q_treeview_qbase_show_event(void* self, void* event) {
    QTreeView_QBaseShowEvent((QTreeView*)self, (QShowEvent*)event);
}

void q_treeview_on_show_event(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnShowEvent((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_hide_event(void* self, void* event) {
    QTreeView_HideEvent((QTreeView*)self, (QHideEvent*)event);
}

void q_treeview_qbase_hide_event(void* self, void* event) {
    QTreeView_QBaseHideEvent((QTreeView*)self, (QHideEvent*)event);
}

void q_treeview_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnHideEvent((QTreeView*)self, (intptr_t)callback);
}

bool q_treeview_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return QTreeView_NativeEvent((QTreeView*)self, qstring(eventType), message, result);
}

bool q_treeview_qbase_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return QTreeView_QBaseNativeEvent((QTreeView*)self, qstring(eventType), message, result);
}

void q_treeview_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    QTreeView_OnNativeEvent((QTreeView*)self, (intptr_t)callback);
}

int32_t q_treeview_metric(void* self, int32_t param1) {
    return QTreeView_Metric((QTreeView*)self, param1);
}

int32_t q_treeview_qbase_metric(void* self, int32_t param1) {
    return QTreeView_QBaseMetric((QTreeView*)self, param1);
}

void q_treeview_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QTreeView_OnMetric((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_init_painter(void* self, void* painter) {
    QTreeView_InitPainter((QTreeView*)self, (QPainter*)painter);
}

void q_treeview_qbase_init_painter(void* self, void* painter) {
    QTreeView_QBaseInitPainter((QTreeView*)self, (QPainter*)painter);
}

void q_treeview_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnInitPainter((QTreeView*)self, (intptr_t)callback);
}

QPaintDevice* q_treeview_redirected(void* self, void* offset) {
    return QTreeView_Redirected((QTreeView*)self, (QPoint*)offset);
}

QPaintDevice* q_treeview_qbase_redirected(void* self, void* offset) {
    return QTreeView_QBaseRedirected((QTreeView*)self, (QPoint*)offset);
}

void q_treeview_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QTreeView_OnRedirected((QTreeView*)self, (intptr_t)callback);
}

QPainter* q_treeview_shared_painter(void* self) {
    return QTreeView_SharedPainter((QTreeView*)self);
}

QPainter* q_treeview_qbase_shared_painter(void* self) {
    return QTreeView_QBaseSharedPainter((QTreeView*)self);
}

void q_treeview_on_shared_painter(void* self, QPainter* (*callback)()) {
    QTreeView_OnSharedPainter((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_child_event(void* self, void* event) {
    QTreeView_ChildEvent((QTreeView*)self, (QChildEvent*)event);
}

void q_treeview_qbase_child_event(void* self, void* event) {
    QTreeView_QBaseChildEvent((QTreeView*)self, (QChildEvent*)event);
}

void q_treeview_on_child_event(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnChildEvent((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_custom_event(void* self, void* event) {
    QTreeView_CustomEvent((QTreeView*)self, (QEvent*)event);
}

void q_treeview_qbase_custom_event(void* self, void* event) {
    QTreeView_QBaseCustomEvent((QTreeView*)self, (QEvent*)event);
}

void q_treeview_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnCustomEvent((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_connect_notify(void* self, void* signal) {
    QTreeView_ConnectNotify((QTreeView*)self, (QMetaMethod*)signal);
}

void q_treeview_qbase_connect_notify(void* self, void* signal) {
    QTreeView_QBaseConnectNotify((QTreeView*)self, (QMetaMethod*)signal);
}

void q_treeview_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnConnectNotify((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_disconnect_notify(void* self, void* signal) {
    QTreeView_DisconnectNotify((QTreeView*)self, (QMetaMethod*)signal);
}

void q_treeview_qbase_disconnect_notify(void* self, void* signal) {
    QTreeView_QBaseDisconnectNotify((QTreeView*)self, (QMetaMethod*)signal);
}

void q_treeview_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnDisconnectNotify((QTreeView*)self, (intptr_t)callback);
}

int32_t q_treeview_state(void* self) {
    return QTreeView_State((QTreeView*)self);
}

int32_t q_treeview_qbase_state(void* self) {
    return QTreeView_QBaseState((QTreeView*)self);
}

void q_treeview_on_state(void* self, int32_t (*callback)()) {
    QTreeView_OnState((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_set_state(void* self, int32_t state) {
    QTreeView_SetState((QTreeView*)self, state);
}

void q_treeview_qbase_set_state(void* self, int32_t state) {
    QTreeView_QBaseSetState((QTreeView*)self, state);
}

void q_treeview_on_set_state(void* self, void (*callback)(void*, int32_t)) {
    QTreeView_OnSetState((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_schedule_delayed_items_layout(void* self) {
    QTreeView_ScheduleDelayedItemsLayout((QTreeView*)self);
}

void q_treeview_qbase_schedule_delayed_items_layout(void* self) {
    QTreeView_QBaseScheduleDelayedItemsLayout((QTreeView*)self);
}

void q_treeview_on_schedule_delayed_items_layout(void* self, void (*callback)()) {
    QTreeView_OnScheduleDelayedItemsLayout((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_execute_delayed_items_layout(void* self) {
    QTreeView_ExecuteDelayedItemsLayout((QTreeView*)self);
}

void q_treeview_qbase_execute_delayed_items_layout(void* self) {
    QTreeView_QBaseExecuteDelayedItemsLayout((QTreeView*)self);
}

void q_treeview_on_execute_delayed_items_layout(void* self, void (*callback)()) {
    QTreeView_OnExecuteDelayedItemsLayout((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_set_dirty_region(void* self, void* region) {
    QTreeView_SetDirtyRegion((QTreeView*)self, (QRegion*)region);
}

void q_treeview_qbase_set_dirty_region(void* self, void* region) {
    QTreeView_QBaseSetDirtyRegion((QTreeView*)self, (QRegion*)region);
}

void q_treeview_on_set_dirty_region(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnSetDirtyRegion((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_scroll_dirty_region(void* self, int dx, int dy) {
    QTreeView_ScrollDirtyRegion((QTreeView*)self, dx, dy);
}

void q_treeview_qbase_scroll_dirty_region(void* self, int dx, int dy) {
    QTreeView_QBaseScrollDirtyRegion((QTreeView*)self, dx, dy);
}

void q_treeview_on_scroll_dirty_region(void* self, void (*callback)(void*, int, int)) {
    QTreeView_OnScrollDirtyRegion((QTreeView*)self, (intptr_t)callback);
}

QPoint* q_treeview_dirty_region_offset(void* self) {
    return QTreeView_DirtyRegionOffset((QTreeView*)self);
}

QPoint* q_treeview_qbase_dirty_region_offset(void* self) {
    return QTreeView_QBaseDirtyRegionOffset((QTreeView*)self);
}

void q_treeview_on_dirty_region_offset(void* self, QPoint* (*callback)()) {
    QTreeView_OnDirtyRegionOffset((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_start_auto_scroll(void* self) {
    QTreeView_StartAutoScroll((QTreeView*)self);
}

void q_treeview_qbase_start_auto_scroll(void* self) {
    QTreeView_QBaseStartAutoScroll((QTreeView*)self);
}

void q_treeview_on_start_auto_scroll(void* self, void (*callback)()) {
    QTreeView_OnStartAutoScroll((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_stop_auto_scroll(void* self) {
    QTreeView_StopAutoScroll((QTreeView*)self);
}

void q_treeview_qbase_stop_auto_scroll(void* self) {
    QTreeView_QBaseStopAutoScroll((QTreeView*)self);
}

void q_treeview_on_stop_auto_scroll(void* self, void (*callback)()) {
    QTreeView_OnStopAutoScroll((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_do_auto_scroll(void* self) {
    QTreeView_DoAutoScroll((QTreeView*)self);
}

void q_treeview_qbase_do_auto_scroll(void* self) {
    QTreeView_QBaseDoAutoScroll((QTreeView*)self);
}

void q_treeview_on_do_auto_scroll(void* self, void (*callback)()) {
    QTreeView_OnDoAutoScroll((QTreeView*)self, (intptr_t)callback);
}

int32_t q_treeview_drop_indicator_position(void* self) {
    return QTreeView_DropIndicatorPosition((QTreeView*)self);
}

int32_t q_treeview_qbase_drop_indicator_position(void* self) {
    return QTreeView_QBaseDropIndicatorPosition((QTreeView*)self);
}

void q_treeview_on_drop_indicator_position(void* self, int32_t (*callback)()) {
    QTreeView_OnDropIndicatorPosition((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QTreeView_SetViewportMargins((QTreeView*)self, left, top, right, bottom);
}

void q_treeview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QTreeView_QBaseSetViewportMargins((QTreeView*)self, left, top, right, bottom);
}

void q_treeview_on_set_viewport_margins(void* self, void (*callback)(void*, int, int, int, int)) {
    QTreeView_OnSetViewportMargins((QTreeView*)self, (intptr_t)callback);
}

QMargins* q_treeview_viewport_margins(void* self) {
    return QTreeView_ViewportMargins((QTreeView*)self);
}

QMargins* q_treeview_qbase_viewport_margins(void* self) {
    return QTreeView_QBaseViewportMargins((QTreeView*)self);
}

void q_treeview_on_viewport_margins(void* self, QMargins* (*callback)()) {
    QTreeView_OnViewportMargins((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_draw_frame(void* self, void* param1) {
    QTreeView_DrawFrame((QTreeView*)self, (QPainter*)param1);
}

void q_treeview_qbase_draw_frame(void* self, void* param1) {
    QTreeView_QBaseDrawFrame((QTreeView*)self, (QPainter*)param1);
}

void q_treeview_on_draw_frame(void* self, void (*callback)(void*, void*)) {
    QTreeView_OnDrawFrame((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_update_micro_focus(void* self) {
    QTreeView_UpdateMicroFocus((QTreeView*)self);
}

void q_treeview_qbase_update_micro_focus(void* self) {
    QTreeView_QBaseUpdateMicroFocus((QTreeView*)self);
}

void q_treeview_on_update_micro_focus(void* self, void (*callback)()) {
    QTreeView_OnUpdateMicroFocus((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_create(void* self) {
    QTreeView_Create((QTreeView*)self);
}

void q_treeview_qbase_create(void* self) {
    QTreeView_QBaseCreate((QTreeView*)self);
}

void q_treeview_on_create(void* self, void (*callback)()) {
    QTreeView_OnCreate((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_destroy(void* self) {
    QTreeView_Destroy((QTreeView*)self);
}

void q_treeview_qbase_destroy(void* self) {
    QTreeView_QBaseDestroy((QTreeView*)self);
}

void q_treeview_on_destroy(void* self, void (*callback)()) {
    QTreeView_OnDestroy((QTreeView*)self, (intptr_t)callback);
}

bool q_treeview_focus_next_child(void* self) {
    return QTreeView_FocusNextChild((QTreeView*)self);
}

bool q_treeview_qbase_focus_next_child(void* self) {
    return QTreeView_QBaseFocusNextChild((QTreeView*)self);
}

void q_treeview_on_focus_next_child(void* self, bool (*callback)()) {
    QTreeView_OnFocusNextChild((QTreeView*)self, (intptr_t)callback);
}

bool q_treeview_focus_previous_child(void* self) {
    return QTreeView_FocusPreviousChild((QTreeView*)self);
}

bool q_treeview_qbase_focus_previous_child(void* self) {
    return QTreeView_QBaseFocusPreviousChild((QTreeView*)self);
}

void q_treeview_on_focus_previous_child(void* self, bool (*callback)()) {
    QTreeView_OnFocusPreviousChild((QTreeView*)self, (intptr_t)callback);
}

QObject* q_treeview_sender(void* self) {
    return QTreeView_Sender((QTreeView*)self);
}

QObject* q_treeview_qbase_sender(void* self) {
    return QTreeView_QBaseSender((QTreeView*)self);
}

void q_treeview_on_sender(void* self, QObject* (*callback)()) {
    QTreeView_OnSender((QTreeView*)self, (intptr_t)callback);
}

int32_t q_treeview_sender_signal_index(void* self) {
    return QTreeView_SenderSignalIndex((QTreeView*)self);
}

int32_t q_treeview_qbase_sender_signal_index(void* self) {
    return QTreeView_QBaseSenderSignalIndex((QTreeView*)self);
}

void q_treeview_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QTreeView_OnSenderSignalIndex((QTreeView*)self, (intptr_t)callback);
}

int32_t q_treeview_receivers(void* self, const char* signal) {
    return QTreeView_Receivers((QTreeView*)self, signal);
}

int32_t q_treeview_qbase_receivers(void* self, const char* signal) {
    return QTreeView_QBaseReceivers((QTreeView*)self, signal);
}

void q_treeview_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QTreeView_OnReceivers((QTreeView*)self, (intptr_t)callback);
}

bool q_treeview_is_signal_connected(void* self, void* signal) {
    return QTreeView_IsSignalConnected((QTreeView*)self, (QMetaMethod*)signal);
}

bool q_treeview_qbase_is_signal_connected(void* self, void* signal) {
    return QTreeView_QBaseIsSignalConnected((QTreeView*)self, (QMetaMethod*)signal);
}

void q_treeview_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QTreeView_OnIsSignalConnected((QTreeView*)self, (intptr_t)callback);
}

double q_treeview_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QTreeView_GetDecodedMetricF((QTreeView*)self, metricA, metricB);
}

double q_treeview_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QTreeView_QBaseGetDecodedMetricF((QTreeView*)self, metricA, metricB);
}

void q_treeview_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QTreeView_OnGetDecodedMetricF((QTreeView*)self, (intptr_t)callback);
}

void q_treeview_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_treeview_delete(void* self) {
    QTreeView_Delete((QTreeView*)(self));
}
