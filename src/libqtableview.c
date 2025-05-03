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
#include "libqheaderview.hpp"
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
#include "libqtableview.hpp"
#include "libqtableview.h"

QTableView* q_tableview_new(void* parent) {
    return QTableView_new((QWidget*)parent);
}

QTableView* q_tableview_new2() {
    return QTableView_new2();
}

QMetaObject* q_tableview_meta_object(void* self) {
    return QTableView_MetaObject((QTableView*)self);
}

void* q_tableview_metacast(void* self, const char* param1) {
    return QTableView_Metacast((QTableView*)self, param1);
}

int32_t q_tableview_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTableView_Metacall((QTableView*)self, param1, param2, param3);
}

void q_tableview_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QTableView_OnMetacall((QTableView*)self, (intptr_t)slot);
}

int32_t q_tableview_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTableView_QBaseMetacall((QTableView*)self, param1, param2, param3);
}

const char* q_tableview_tr(const char* s) {
    libqt_string _str = QTableView_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tableview_set_model(void* self, void* model) {
    QTableView_SetModel((QTableView*)self, (QAbstractItemModel*)model);
}

void q_tableview_on_set_model(void* self, void (*slot)(void*, void*)) {
    QTableView_OnSetModel((QTableView*)self, (intptr_t)slot);
}

void q_tableview_qbase_set_model(void* self, void* model) {
    QTableView_QBaseSetModel((QTableView*)self, (QAbstractItemModel*)model);
}

void q_tableview_set_root_index(void* self, void* index) {
    QTableView_SetRootIndex((QTableView*)self, (QModelIndex*)index);
}

void q_tableview_on_set_root_index(void* self, void (*slot)(void*, void*)) {
    QTableView_OnSetRootIndex((QTableView*)self, (intptr_t)slot);
}

void q_tableview_qbase_set_root_index(void* self, void* index) {
    QTableView_QBaseSetRootIndex((QTableView*)self, (QModelIndex*)index);
}

void q_tableview_set_selection_model(void* self, void* selectionModel) {
    QTableView_SetSelectionModel((QTableView*)self, (QItemSelectionModel*)selectionModel);
}

void q_tableview_on_set_selection_model(void* self, void (*slot)(void*, void*)) {
    QTableView_OnSetSelectionModel((QTableView*)self, (intptr_t)slot);
}

void q_tableview_qbase_set_selection_model(void* self, void* selectionModel) {
    QTableView_QBaseSetSelectionModel((QTableView*)self, (QItemSelectionModel*)selectionModel);
}

void q_tableview_do_items_layout(void* self) {
    QTableView_DoItemsLayout((QTableView*)self);
}

void q_tableview_on_do_items_layout(void* self, void (*slot)()) {
    QTableView_OnDoItemsLayout((QTableView*)self, (intptr_t)slot);
}

void q_tableview_qbase_do_items_layout(void* self) {
    QTableView_QBaseDoItemsLayout((QTableView*)self);
}

QHeaderView* q_tableview_horizontal_header(void* self) {
    return QTableView_HorizontalHeader((QTableView*)self);
}

QHeaderView* q_tableview_vertical_header(void* self) {
    return QTableView_VerticalHeader((QTableView*)self);
}

void q_tableview_set_horizontal_header(void* self, void* header) {
    QTableView_SetHorizontalHeader((QTableView*)self, (QHeaderView*)header);
}

void q_tableview_set_vertical_header(void* self, void* header) {
    QTableView_SetVerticalHeader((QTableView*)self, (QHeaderView*)header);
}

int32_t q_tableview_row_viewport_position(void* self, int row) {
    return QTableView_RowViewportPosition((QTableView*)self, row);
}

int32_t q_tableview_row_at(void* self, int y) {
    return QTableView_RowAt((QTableView*)self, y);
}

void q_tableview_set_row_height(void* self, int row, int height) {
    QTableView_SetRowHeight((QTableView*)self, row, height);
}

int32_t q_tableview_row_height(void* self, int row) {
    return QTableView_RowHeight((QTableView*)self, row);
}

int32_t q_tableview_column_viewport_position(void* self, int column) {
    return QTableView_ColumnViewportPosition((QTableView*)self, column);
}

int32_t q_tableview_column_at(void* self, int x) {
    return QTableView_ColumnAt((QTableView*)self, x);
}

void q_tableview_set_column_width(void* self, int column, int width) {
    QTableView_SetColumnWidth((QTableView*)self, column, width);
}

int32_t q_tableview_column_width(void* self, int column) {
    return QTableView_ColumnWidth((QTableView*)self, column);
}

bool q_tableview_is_row_hidden(void* self, int row) {
    return QTableView_IsRowHidden((QTableView*)self, row);
}

void q_tableview_set_row_hidden(void* self, int row, bool hide) {
    QTableView_SetRowHidden((QTableView*)self, row, hide);
}

bool q_tableview_is_column_hidden(void* self, int column) {
    return QTableView_IsColumnHidden((QTableView*)self, column);
}

void q_tableview_set_column_hidden(void* self, int column, bool hide) {
    QTableView_SetColumnHidden((QTableView*)self, column, hide);
}

void q_tableview_set_sorting_enabled(void* self, bool enable) {
    QTableView_SetSortingEnabled((QTableView*)self, enable);
}

bool q_tableview_is_sorting_enabled(void* self) {
    return QTableView_IsSortingEnabled((QTableView*)self);
}

bool q_tableview_show_grid(void* self) {
    return QTableView_ShowGrid((QTableView*)self);
}

int64_t q_tableview_grid_style(void* self) {
    return QTableView_GridStyle((QTableView*)self);
}

void q_tableview_set_grid_style(void* self, int64_t style) {
    QTableView_SetGridStyle((QTableView*)self, style);
}

void q_tableview_set_word_wrap(void* self, bool on) {
    QTableView_SetWordWrap((QTableView*)self, on);
}

bool q_tableview_word_wrap(void* self) {
    return QTableView_WordWrap((QTableView*)self);
}

void q_tableview_set_corner_button_enabled(void* self, bool enable) {
    QTableView_SetCornerButtonEnabled((QTableView*)self, enable);
}

bool q_tableview_is_corner_button_enabled(void* self) {
    return QTableView_IsCornerButtonEnabled((QTableView*)self);
}

QRect* q_tableview_visual_rect(void* self, void* index) {
    return QTableView_VisualRect((QTableView*)self, (QModelIndex*)index);
}

void q_tableview_on_visual_rect(void* self, QRect* (*slot)(void*, void*)) {
    QTableView_OnVisualRect((QTableView*)self, (intptr_t)slot);
}

QRect* q_tableview_qbase_visual_rect(void* self, void* index) {
    return QTableView_QBaseVisualRect((QTableView*)self, (QModelIndex*)index);
}

void q_tableview_scroll_to(void* self, void* index, int64_t hint) {
    QTableView_ScrollTo((QTableView*)self, (QModelIndex*)index, hint);
}

void q_tableview_on_scroll_to(void* self, void (*slot)(void*, void*, int64_t)) {
    QTableView_OnScrollTo((QTableView*)self, (intptr_t)slot);
}

void q_tableview_qbase_scroll_to(void* self, void* index, int64_t hint) {
    QTableView_QBaseScrollTo((QTableView*)self, (QModelIndex*)index, hint);
}

QModelIndex* q_tableview_index_at(void* self, void* p) {
    return QTableView_IndexAt((QTableView*)self, (QPoint*)p);
}

void q_tableview_on_index_at(void* self, QModelIndex* (*slot)(void*, void*)) {
    QTableView_OnIndexAt((QTableView*)self, (intptr_t)slot);
}

QModelIndex* q_tableview_qbase_index_at(void* self, void* p) {
    return QTableView_QBaseIndexAt((QTableView*)self, (QPoint*)p);
}

void q_tableview_set_span(void* self, int row, int column, int rowSpan, int columnSpan) {
    QTableView_SetSpan((QTableView*)self, row, column, rowSpan, columnSpan);
}

int32_t q_tableview_row_span(void* self, int row, int column) {
    return QTableView_RowSpan((QTableView*)self, row, column);
}

int32_t q_tableview_column_span(void* self, int row, int column) {
    return QTableView_ColumnSpan((QTableView*)self, row, column);
}

void q_tableview_clear_spans(void* self) {
    QTableView_ClearSpans((QTableView*)self);
}

void q_tableview_select_row(void* self, int row) {
    QTableView_SelectRow((QTableView*)self, row);
}

void q_tableview_select_column(void* self, int column) {
    QTableView_SelectColumn((QTableView*)self, column);
}

void q_tableview_hide_row(void* self, int row) {
    QTableView_HideRow((QTableView*)self, row);
}

void q_tableview_hide_column(void* self, int column) {
    QTableView_HideColumn((QTableView*)self, column);
}

void q_tableview_show_row(void* self, int row) {
    QTableView_ShowRow((QTableView*)self, row);
}

void q_tableview_show_column(void* self, int column) {
    QTableView_ShowColumn((QTableView*)self, column);
}

void q_tableview_resize_row_to_contents(void* self, int row) {
    QTableView_ResizeRowToContents((QTableView*)self, row);
}

void q_tableview_resize_rows_to_contents(void* self) {
    QTableView_ResizeRowsToContents((QTableView*)self);
}

void q_tableview_resize_column_to_contents(void* self, int column) {
    QTableView_ResizeColumnToContents((QTableView*)self, column);
}

void q_tableview_resize_columns_to_contents(void* self) {
    QTableView_ResizeColumnsToContents((QTableView*)self);
}

void q_tableview_sort_by_column(void* self, int column, int64_t order) {
    QTableView_SortByColumn((QTableView*)self, column, order);
}

void q_tableview_set_show_grid(void* self, bool show) {
    QTableView_SetShowGrid((QTableView*)self, show);
}

void q_tableview_row_moved(void* self, int row, int oldIndex, int newIndex) {
    QTableView_RowMoved((QTableView*)self, row, oldIndex, newIndex);
}

void q_tableview_on_row_moved(void* self, void (*slot)(void*, int, int, int)) {
    QTableView_OnRowMoved((QTableView*)self, (intptr_t)slot);
}

void q_tableview_qbase_row_moved(void* self, int row, int oldIndex, int newIndex) {
    QTableView_QBaseRowMoved((QTableView*)self, row, oldIndex, newIndex);
}

void q_tableview_column_moved(void* self, int column, int oldIndex, int newIndex) {
    QTableView_ColumnMoved((QTableView*)self, column, oldIndex, newIndex);
}

void q_tableview_on_column_moved(void* self, void (*slot)(void*, int, int, int)) {
    QTableView_OnColumnMoved((QTableView*)self, (intptr_t)slot);
}

void q_tableview_qbase_column_moved(void* self, int column, int oldIndex, int newIndex) {
    QTableView_QBaseColumnMoved((QTableView*)self, column, oldIndex, newIndex);
}

void q_tableview_row_resized(void* self, int row, int oldHeight, int newHeight) {
    QTableView_RowResized((QTableView*)self, row, oldHeight, newHeight);
}

void q_tableview_on_row_resized(void* self, void (*slot)(void*, int, int, int)) {
    QTableView_OnRowResized((QTableView*)self, (intptr_t)slot);
}

void q_tableview_qbase_row_resized(void* self, int row, int oldHeight, int newHeight) {
    QTableView_QBaseRowResized((QTableView*)self, row, oldHeight, newHeight);
}

void q_tableview_column_resized(void* self, int column, int oldWidth, int newWidth) {
    QTableView_ColumnResized((QTableView*)self, column, oldWidth, newWidth);
}

void q_tableview_on_column_resized(void* self, void (*slot)(void*, int, int, int)) {
    QTableView_OnColumnResized((QTableView*)self, (intptr_t)slot);
}

void q_tableview_qbase_column_resized(void* self, int column, int oldWidth, int newWidth) {
    QTableView_QBaseColumnResized((QTableView*)self, column, oldWidth, newWidth);
}

void q_tableview_row_count_changed(void* self, int oldCount, int newCount) {
    QTableView_RowCountChanged((QTableView*)self, oldCount, newCount);
}

void q_tableview_on_row_count_changed(void* self, void (*slot)(void*, int, int)) {
    QTableView_OnRowCountChanged((QTableView*)self, (intptr_t)slot);
}

void q_tableview_qbase_row_count_changed(void* self, int oldCount, int newCount) {
    QTableView_QBaseRowCountChanged((QTableView*)self, oldCount, newCount);
}

void q_tableview_column_count_changed(void* self, int oldCount, int newCount) {
    QTableView_ColumnCountChanged((QTableView*)self, oldCount, newCount);
}

void q_tableview_on_column_count_changed(void* self, void (*slot)(void*, int, int)) {
    QTableView_OnColumnCountChanged((QTableView*)self, (intptr_t)slot);
}

void q_tableview_qbase_column_count_changed(void* self, int oldCount, int newCount) {
    QTableView_QBaseColumnCountChanged((QTableView*)self, oldCount, newCount);
}

void q_tableview_scroll_contents_by(void* self, int dx, int dy) {
    QTableView_ScrollContentsBy((QTableView*)self, dx, dy);
}

void q_tableview_on_scroll_contents_by(void* self, void (*slot)(void*, int, int)) {
    QTableView_OnScrollContentsBy((QTableView*)self, (intptr_t)slot);
}

void q_tableview_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QTableView_QBaseScrollContentsBy((QTableView*)self, dx, dy);
}

void q_tableview_init_view_item_option(void* self, void* option) {
    QTableView_InitViewItemOption((QTableView*)self, (QStyleOptionViewItem*)option);
}

void q_tableview_on_init_view_item_option(void* self, void (*slot)(void*, void*)) {
    QTableView_OnInitViewItemOption((QTableView*)self, (intptr_t)slot);
}

void q_tableview_qbase_init_view_item_option(void* self, void* option) {
    QTableView_QBaseInitViewItemOption((QTableView*)self, (QStyleOptionViewItem*)option);
}

void q_tableview_paint_event(void* self, void* e) {
    QTableView_PaintEvent((QTableView*)self, (QPaintEvent*)e);
}

void q_tableview_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnPaintEvent((QTableView*)self, (intptr_t)slot);
}

void q_tableview_qbase_paint_event(void* self, void* e) {
    QTableView_QBasePaintEvent((QTableView*)self, (QPaintEvent*)e);
}

void q_tableview_timer_event(void* self, void* event) {
    QTableView_TimerEvent((QTableView*)self, (QTimerEvent*)event);
}

void q_tableview_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnTimerEvent((QTableView*)self, (intptr_t)slot);
}

void q_tableview_qbase_timer_event(void* self, void* event) {
    QTableView_QBaseTimerEvent((QTableView*)self, (QTimerEvent*)event);
}

int32_t q_tableview_horizontal_offset(void* self) {
    return QTableView_HorizontalOffset((QTableView*)self);
}

void q_tableview_on_horizontal_offset(void* self, int32_t (*slot)()) {
    QTableView_OnHorizontalOffset((QTableView*)self, (intptr_t)slot);
}

int32_t q_tableview_qbase_horizontal_offset(void* self) {
    return QTableView_QBaseHorizontalOffset((QTableView*)self);
}

int32_t q_tableview_vertical_offset(void* self) {
    return QTableView_VerticalOffset((QTableView*)self);
}

void q_tableview_on_vertical_offset(void* self, int32_t (*slot)()) {
    QTableView_OnVerticalOffset((QTableView*)self, (intptr_t)slot);
}

int32_t q_tableview_qbase_vertical_offset(void* self) {
    return QTableView_QBaseVerticalOffset((QTableView*)self);
}

QModelIndex* q_tableview_move_cursor(void* self, int64_t cursorAction, int64_t modifiers) {
    return QTableView_MoveCursor((QTableView*)self, cursorAction, modifiers);
}

void q_tableview_on_move_cursor(void* self, QModelIndex* (*slot)(void*, int64_t, int64_t)) {
    QTableView_OnMoveCursor((QTableView*)self, (intptr_t)slot);
}

QModelIndex* q_tableview_qbase_move_cursor(void* self, int64_t cursorAction, int64_t modifiers) {
    return QTableView_QBaseMoveCursor((QTableView*)self, cursorAction, modifiers);
}

void q_tableview_set_selection(void* self, void* rect, int64_t command) {
    QTableView_SetSelection((QTableView*)self, (QRect*)rect, command);
}

void q_tableview_on_set_selection(void* self, void (*slot)(void*, void*, int64_t)) {
    QTableView_OnSetSelection((QTableView*)self, (intptr_t)slot);
}

void q_tableview_qbase_set_selection(void* self, void* rect, int64_t command) {
    QTableView_QBaseSetSelection((QTableView*)self, (QRect*)rect, command);
}

QRegion* q_tableview_visual_region_for_selection(void* self, void* selection) {
    return QTableView_VisualRegionForSelection((QTableView*)self, (QItemSelection*)selection);
}

void q_tableview_on_visual_region_for_selection(void* self, QRegion* (*slot)(void*, void*)) {
    QTableView_OnVisualRegionForSelection((QTableView*)self, (intptr_t)slot);
}

QRegion* q_tableview_qbase_visual_region_for_selection(void* self, void* selection) {
    return QTableView_QBaseVisualRegionForSelection((QTableView*)self, (QItemSelection*)selection);
}

libqt_list /* of QModelIndex* */ q_tableview_selected_indexes(void* self) {
    libqt_list _arr = QTableView_SelectedIndexes((QTableView*)self);
    return _arr;
}

void q_tableview_on_selected_indexes(void* self, libqt_list /* of QModelIndex* */ (*slot)()) {
    QTableView_OnSelectedIndexes((QTableView*)self, (intptr_t)slot);
}

libqt_list /* of QModelIndex* */ q_tableview_qbase_selected_indexes(void* self) {
    libqt_list _arr = QTableView_QBaseSelectedIndexes((QTableView*)self);
    return _arr;
}

void q_tableview_update_geometries(void* self) {
    QTableView_UpdateGeometries((QTableView*)self);
}

void q_tableview_on_update_geometries(void* self, void (*slot)()) {
    QTableView_OnUpdateGeometries((QTableView*)self, (intptr_t)slot);
}

void q_tableview_qbase_update_geometries(void* self) {
    QTableView_QBaseUpdateGeometries((QTableView*)self);
}

QSize* q_tableview_viewport_size_hint(void* self) {
    return QTableView_ViewportSizeHint((QTableView*)self);
}

void q_tableview_on_viewport_size_hint(void* self, QSize* (*slot)()) {
    QTableView_OnViewportSizeHint((QTableView*)self, (intptr_t)slot);
}

QSize* q_tableview_qbase_viewport_size_hint(void* self) {
    return QTableView_QBaseViewportSizeHint((QTableView*)self);
}

int32_t q_tableview_size_hint_for_row(void* self, int row) {
    return QTableView_SizeHintForRow((QTableView*)self, row);
}

void q_tableview_on_size_hint_for_row(void* self, int32_t (*slot)(void*, int)) {
    QTableView_OnSizeHintForRow((QTableView*)self, (intptr_t)slot);
}

int32_t q_tableview_qbase_size_hint_for_row(void* self, int row) {
    return QTableView_QBaseSizeHintForRow((QTableView*)self, row);
}

int32_t q_tableview_size_hint_for_column(void* self, int column) {
    return QTableView_SizeHintForColumn((QTableView*)self, column);
}

void q_tableview_on_size_hint_for_column(void* self, int32_t (*slot)(void*, int)) {
    QTableView_OnSizeHintForColumn((QTableView*)self, (intptr_t)slot);
}

int32_t q_tableview_qbase_size_hint_for_column(void* self, int column) {
    return QTableView_QBaseSizeHintForColumn((QTableView*)self, column);
}

void q_tableview_vertical_scrollbar_action(void* self, int action) {
    QTableView_VerticalScrollbarAction((QTableView*)self, action);
}

void q_tableview_on_vertical_scrollbar_action(void* self, void (*slot)(void*, int)) {
    QTableView_OnVerticalScrollbarAction((QTableView*)self, (intptr_t)slot);
}

void q_tableview_qbase_vertical_scrollbar_action(void* self, int action) {
    QTableView_QBaseVerticalScrollbarAction((QTableView*)self, action);
}

void q_tableview_horizontal_scrollbar_action(void* self, int action) {
    QTableView_HorizontalScrollbarAction((QTableView*)self, action);
}

void q_tableview_on_horizontal_scrollbar_action(void* self, void (*slot)(void*, int)) {
    QTableView_OnHorizontalScrollbarAction((QTableView*)self, (intptr_t)slot);
}

void q_tableview_qbase_horizontal_scrollbar_action(void* self, int action) {
    QTableView_QBaseHorizontalScrollbarAction((QTableView*)self, action);
}

bool q_tableview_is_index_hidden(void* self, void* index) {
    return QTableView_IsIndexHidden((QTableView*)self, (QModelIndex*)index);
}

void q_tableview_on_is_index_hidden(void* self, bool (*slot)(void*, void*)) {
    QTableView_OnIsIndexHidden((QTableView*)self, (intptr_t)slot);
}

bool q_tableview_qbase_is_index_hidden(void* self, void* index) {
    return QTableView_QBaseIsIndexHidden((QTableView*)self, (QModelIndex*)index);
}

void q_tableview_selection_changed(void* self, void* selected, void* deselected) {
    QTableView_SelectionChanged((QTableView*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

void q_tableview_on_selection_changed(void* self, void (*slot)(void*, void*, void*)) {
    QTableView_OnSelectionChanged((QTableView*)self, (intptr_t)slot);
}

void q_tableview_qbase_selection_changed(void* self, void* selected, void* deselected) {
    QTableView_QBaseSelectionChanged((QTableView*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

void q_tableview_current_changed(void* self, void* current, void* previous) {
    QTableView_CurrentChanged((QTableView*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

void q_tableview_on_current_changed(void* self, void (*slot)(void*, void*, void*)) {
    QTableView_OnCurrentChanged((QTableView*)self, (intptr_t)slot);
}

void q_tableview_qbase_current_changed(void* self, void* current, void* previous) {
    QTableView_QBaseCurrentChanged((QTableView*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

const char* q_tableview_tr2(const char* s, const char* c) {
    libqt_string _str = QTableView_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_tableview_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QTableView_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAbstractItemModel* q_tableview_model(void* self) {
    return QAbstractItemView_Model((QAbstractItemView*)self);
}

QItemSelectionModel* q_tableview_selection_model(void* self) {
    return QAbstractItemView_SelectionModel((QAbstractItemView*)self);
}

void q_tableview_set_item_delegate(void* self, void* delegate) {
    QAbstractItemView_SetItemDelegate((QAbstractItemView*)self, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* q_tableview_item_delegate(void* self) {
    return QAbstractItemView_ItemDelegate((QAbstractItemView*)self);
}

void q_tableview_set_selection_mode(void* self, int64_t mode) {
    QAbstractItemView_SetSelectionMode((QAbstractItemView*)self, mode);
}

int64_t q_tableview_selection_mode(void* self) {
    return QAbstractItemView_SelectionMode((QAbstractItemView*)self);
}

void q_tableview_set_selection_behavior(void* self, int64_t behavior) {
    QAbstractItemView_SetSelectionBehavior((QAbstractItemView*)self, behavior);
}

int64_t q_tableview_selection_behavior(void* self) {
    return QAbstractItemView_SelectionBehavior((QAbstractItemView*)self);
}

QModelIndex* q_tableview_current_index(void* self) {
    return QAbstractItemView_CurrentIndex((QAbstractItemView*)self);
}

QModelIndex* q_tableview_root_index(void* self) {
    return QAbstractItemView_RootIndex((QAbstractItemView*)self);
}

void q_tableview_set_edit_triggers(void* self, int64_t triggers) {
    QAbstractItemView_SetEditTriggers((QAbstractItemView*)self, triggers);
}

int64_t q_tableview_edit_triggers(void* self) {
    return QAbstractItemView_EditTriggers((QAbstractItemView*)self);
}

void q_tableview_set_vertical_scroll_mode(void* self, int64_t mode) {
    QAbstractItemView_SetVerticalScrollMode((QAbstractItemView*)self, mode);
}

int64_t q_tableview_vertical_scroll_mode(void* self) {
    return QAbstractItemView_VerticalScrollMode((QAbstractItemView*)self);
}

void q_tableview_reset_vertical_scroll_mode(void* self) {
    QAbstractItemView_ResetVerticalScrollMode((QAbstractItemView*)self);
}

void q_tableview_set_horizontal_scroll_mode(void* self, int64_t mode) {
    QAbstractItemView_SetHorizontalScrollMode((QAbstractItemView*)self, mode);
}

int64_t q_tableview_horizontal_scroll_mode(void* self) {
    return QAbstractItemView_HorizontalScrollMode((QAbstractItemView*)self);
}

void q_tableview_reset_horizontal_scroll_mode(void* self) {
    QAbstractItemView_ResetHorizontalScrollMode((QAbstractItemView*)self);
}

void q_tableview_set_auto_scroll(void* self, bool enable) {
    QAbstractItemView_SetAutoScroll((QAbstractItemView*)self, enable);
}

bool q_tableview_has_auto_scroll(void* self) {
    return QAbstractItemView_HasAutoScroll((QAbstractItemView*)self);
}

void q_tableview_set_auto_scroll_margin(void* self, int margin) {
    QAbstractItemView_SetAutoScrollMargin((QAbstractItemView*)self, margin);
}

int32_t q_tableview_auto_scroll_margin(void* self) {
    return QAbstractItemView_AutoScrollMargin((QAbstractItemView*)self);
}

void q_tableview_set_tab_key_navigation(void* self, bool enable) {
    QAbstractItemView_SetTabKeyNavigation((QAbstractItemView*)self, enable);
}

bool q_tableview_tab_key_navigation(void* self) {
    return QAbstractItemView_TabKeyNavigation((QAbstractItemView*)self);
}

void q_tableview_set_drop_indicator_shown(void* self, bool enable) {
    QAbstractItemView_SetDropIndicatorShown((QAbstractItemView*)self, enable);
}

bool q_tableview_show_drop_indicator(void* self) {
    return QAbstractItemView_ShowDropIndicator((QAbstractItemView*)self);
}

void q_tableview_set_drag_enabled(void* self, bool enable) {
    QAbstractItemView_SetDragEnabled((QAbstractItemView*)self, enable);
}

bool q_tableview_drag_enabled(void* self) {
    return QAbstractItemView_DragEnabled((QAbstractItemView*)self);
}

void q_tableview_set_drag_drop_overwrite_mode(void* self, bool overwrite) {
    QAbstractItemView_SetDragDropOverwriteMode((QAbstractItemView*)self, overwrite);
}

bool q_tableview_drag_drop_overwrite_mode(void* self) {
    return QAbstractItemView_DragDropOverwriteMode((QAbstractItemView*)self);
}

void q_tableview_set_drag_drop_mode(void* self, int64_t behavior) {
    QAbstractItemView_SetDragDropMode((QAbstractItemView*)self, behavior);
}

int64_t q_tableview_drag_drop_mode(void* self) {
    return QAbstractItemView_DragDropMode((QAbstractItemView*)self);
}

void q_tableview_set_default_drop_action(void* self, int64_t dropAction) {
    QAbstractItemView_SetDefaultDropAction((QAbstractItemView*)self, dropAction);
}

int64_t q_tableview_default_drop_action(void* self) {
    return QAbstractItemView_DefaultDropAction((QAbstractItemView*)self);
}

void q_tableview_set_alternating_row_colors(void* self, bool enable) {
    QAbstractItemView_SetAlternatingRowColors((QAbstractItemView*)self, enable);
}

bool q_tableview_alternating_row_colors(void* self) {
    return QAbstractItemView_AlternatingRowColors((QAbstractItemView*)self);
}

void q_tableview_set_icon_size(void* self, void* size) {
    QAbstractItemView_SetIconSize((QAbstractItemView*)self, (QSize*)size);
}

QSize* q_tableview_icon_size(void* self) {
    return QAbstractItemView_IconSize((QAbstractItemView*)self);
}

void q_tableview_set_text_elide_mode(void* self, int64_t mode) {
    QAbstractItemView_SetTextElideMode((QAbstractItemView*)self, mode);
}

int64_t q_tableview_text_elide_mode(void* self) {
    return QAbstractItemView_TextElideMode((QAbstractItemView*)self);
}

QSize* q_tableview_size_hint_for_index(void* self, void* index) {
    return QAbstractItemView_SizeHintForIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_tableview_open_persistent_editor(void* self, void* index) {
    QAbstractItemView_OpenPersistentEditor((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_tableview_close_persistent_editor(void* self, void* index) {
    QAbstractItemView_ClosePersistentEditor((QAbstractItemView*)self, (QModelIndex*)index);
}

bool q_tableview_is_persistent_editor_open(void* self, void* index) {
    return QAbstractItemView_IsPersistentEditorOpen((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_tableview_set_index_widget(void* self, void* index, void* widget) {
    QAbstractItemView_SetIndexWidget((QAbstractItemView*)self, (QModelIndex*)index, (QWidget*)widget);
}

QWidget* q_tableview_index_widget(void* self, void* index) {
    return QAbstractItemView_IndexWidget((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_tableview_set_item_delegate_for_row(void* self, int row, void* delegate) {
    QAbstractItemView_SetItemDelegateForRow((QAbstractItemView*)self, row, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* q_tableview_item_delegate_for_row(void* self, int row) {
    return QAbstractItemView_ItemDelegateForRow((QAbstractItemView*)self, row);
}

void q_tableview_set_item_delegate_for_column(void* self, int column, void* delegate) {
    QAbstractItemView_SetItemDelegateForColumn((QAbstractItemView*)self, column, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* q_tableview_item_delegate_for_column(void* self, int column) {
    return QAbstractItemView_ItemDelegateForColumn((QAbstractItemView*)self, column);
}

QAbstractItemDelegate* q_tableview_item_delegate_with_index(void* self, void* index) {
    return QAbstractItemView_ItemDelegateWithIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_tableview_edit(void* self, void* index) {
    QAbstractItemView_Edit((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_tableview_clear_selection(void* self) {
    QAbstractItemView_ClearSelection((QAbstractItemView*)self);
}

void q_tableview_set_current_index(void* self, void* index) {
    QAbstractItemView_SetCurrentIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_tableview_scroll_to_top(void* self) {
    QAbstractItemView_ScrollToTop((QAbstractItemView*)self);
}

void q_tableview_scroll_to_bottom(void* self) {
    QAbstractItemView_ScrollToBottom((QAbstractItemView*)self);
}

void q_tableview_update(void* self, void* index) {
    QAbstractItemView_Update((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_tableview_pressed(void* self, void* index) {
    QAbstractItemView_Pressed((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_tableview_on_pressed(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Pressed((QAbstractItemView*)self, (intptr_t)slot);
}

void q_tableview_clicked(void* self, void* index) {
    QAbstractItemView_Clicked((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_tableview_on_clicked(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Clicked((QAbstractItemView*)self, (intptr_t)slot);
}

void q_tableview_double_clicked(void* self, void* index) {
    QAbstractItemView_DoubleClicked((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_tableview_on_double_clicked(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_DoubleClicked((QAbstractItemView*)self, (intptr_t)slot);
}

void q_tableview_activated(void* self, void* index) {
    QAbstractItemView_Activated((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_tableview_on_activated(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Activated((QAbstractItemView*)self, (intptr_t)slot);
}

void q_tableview_entered(void* self, void* index) {
    QAbstractItemView_Entered((QAbstractItemView*)self, (QModelIndex*)index);
}

void q_tableview_on_entered(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Entered((QAbstractItemView*)self, (intptr_t)slot);
}

void q_tableview_viewport_entered(void* self) {
    QAbstractItemView_ViewportEntered((QAbstractItemView*)self);
}

void q_tableview_on_viewport_entered(void* self, void (*slot)(void*)) {
    QAbstractItemView_Connect_ViewportEntered((QAbstractItemView*)self, (intptr_t)slot);
}

void q_tableview_icon_size_changed(void* self, void* size) {
    QAbstractItemView_IconSizeChanged((QAbstractItemView*)self, (QSize*)size);
}

void q_tableview_on_icon_size_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_IconSizeChanged((QAbstractItemView*)self, (intptr_t)slot);
}

int64_t q_tableview_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_tableview_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

QScrollBar* q_tableview_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

void q_tableview_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

int64_t q_tableview_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

void q_tableview_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

QScrollBar* q_tableview_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

void q_tableview_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

QWidget* q_tableview_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

void q_tableview_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

void q_tableview_add_scroll_bar_widget(void* self, void* widget, int64_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

libqt_list /* of QWidget* */ q_tableview_scroll_bar_widgets(void* self, int64_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

QWidget* q_tableview_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

void q_tableview_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

QSize* q_tableview_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

int64_t q_tableview_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

void q_tableview_set_size_adjust_policy(void* self, int64_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

int32_t q_tableview_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

void q_tableview_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

int32_t q_tableview_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

int64_t q_tableview_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

void q_tableview_set_frame_shape(void* self, int64_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

int64_t q_tableview_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

void q_tableview_set_frame_shadow(void* self, int64_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

int32_t q_tableview_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

void q_tableview_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

int32_t q_tableview_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

void q_tableview_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

QRect* q_tableview_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

void q_tableview_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

uintptr_t q_tableview_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_tableview_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_tableview_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_tableview_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_tableview_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_tableview_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_tableview_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_tableview_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_tableview_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_tableview_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_tableview_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_tableview_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_tableview_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_tableview_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_tableview_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_tableview_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_tableview_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

QRect* q_tableview_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_tableview_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_tableview_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_tableview_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_tableview_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_tableview_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_tableview_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_tableview_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_tableview_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_tableview_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_tableview_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_tableview_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_tableview_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_tableview_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_tableview_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_tableview_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_tableview_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_tableview_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_tableview_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_tableview_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_tableview_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_tableview_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_tableview_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_tableview_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_tableview_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_tableview_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_tableview_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_tableview_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_tableview_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_tableview_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_tableview_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_tableview_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_tableview_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_tableview_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_tableview_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_tableview_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_tableview_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_tableview_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_tableview_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_tableview_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_tableview_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_tableview_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_tableview_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_tableview_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_tableview_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_tableview_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_tableview_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_tableview_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_tableview_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_tableview_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_tableview_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

QPalette* q_tableview_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_tableview_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_tableview_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_tableview_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_tableview_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_tableview_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

QFont* q_tableview_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_tableview_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_tableview_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_tableview_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_tableview_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_tableview_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_tableview_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_tableview_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_tableview_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_tableview_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_tableview_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_tableview_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_tableview_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_tableview_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

QRegion* q_tableview_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_tableview_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_tableview_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_tableview_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_tableview_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_tableview_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_tableview_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_tableview_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_tableview_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_tableview_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_tableview_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_tableview_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_tableview_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tableview_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_tableview_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_tableview_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_tableview_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tableview_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_tableview_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tableview_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_tableview_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tableview_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_tableview_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_tableview_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_tableview_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_tableview_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tableview_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_tableview_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_tableview_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_tableview_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tableview_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_tableview_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_tableview_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tableview_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_tableview_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tableview_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_tableview_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_tableview_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_tableview_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_tableview_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_tableview_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_tableview_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_tableview_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_tableview_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_tableview_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_tableview_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_tableview_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_tableview_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_tableview_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

int64_t q_tableview_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_tableview_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_tableview_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_tableview_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_tableview_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_tableview_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_tableview_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_tableview_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_tableview_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_tableview_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

void q_tableview_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_tableview_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_tableview_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_tableview_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_tableview_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_tableview_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_tableview_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_tableview_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_tableview_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_tableview_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_tableview_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_tableview_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_tableview_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_tableview_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_tableview_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

void q_tableview_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

void q_tableview_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_tableview_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

void q_tableview_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

void q_tableview_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_tableview_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_tableview_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_tableview_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_tableview_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_tableview_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_tableview_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_tableview_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_tableview_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_tableview_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_tableview_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_tableview_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_tableview_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

void q_tableview_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_tableview_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

void q_tableview_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_tableview_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

char* q_tableview_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_tableview_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_tableview_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_tableview_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_tableview_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_tableview_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_tableview_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_tableview_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_tableview_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_tableview_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_tableview_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_tableview_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_tableview_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_tableview_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_tableview_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_tableview_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_tableview_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_tableview_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

QMargins* q_tableview_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_tableview_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_tableview_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_tableview_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_tableview_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_tableview_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_tableview_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_tableview_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_tableview_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_tableview_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_tableview_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_tableview_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_tableview_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_tableview_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_tableview_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_tableview_add_actions(void* self, void* actions[]) {
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

void q_tableview_insert_actions(void* self, void* before, void* actions[]) {
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

void q_tableview_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_tableview_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_tableview_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_tableview_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

QAction* q_tableview_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_tableview_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_tableview_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_tableview_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_tableview_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_tableview_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_tableview_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_tableview_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_tableview_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_tableview_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_tableview_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_tableview_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

void q_tableview_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_tableview_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_tableview_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_tableview_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_tableview_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_tableview_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_tableview_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_tableview_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_tableview_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_tableview_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_tableview_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_tableview_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_tableview_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

void q_tableview_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_tableview_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

void q_tableview_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_tableview_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

void q_tableview_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_tableview_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

int64_t q_tableview_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_tableview_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_tableview_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_tableview_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_tableview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_tableview_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_tableview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_tableview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_tableview_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_tableview_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_tableview_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_tableview_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_tableview_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_tableview_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_tableview_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_tableview_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_tableview_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_tableview_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tableview_set_object_name(void* self, char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_tableview_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_tableview_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_tableview_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_tableview_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_tableview_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_tableview_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_tableview_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_tableview_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_tableview_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_tableview_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_tableview_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_tableview_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_tableview_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_tableview_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_tableview_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_tableview_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_tableview_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_tableview_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_tableview_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_tableview_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_tableview_dynamic_property_names(void* self) {
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

QBindingStorage* q_tableview_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_tableview_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_tableview_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_tableview_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_tableview_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_tableview_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_tableview_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_tableview_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_tableview_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_tableview_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_tableview_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_tableview_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_tableview_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_tableview_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_tableview_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_tableview_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_tableview_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_tableview_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_tableview_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_tableview_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_tableview_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_tableview_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_tableview_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_tableview_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

void q_tableview_keyboard_search(void* self, const char* search) {
    QTableView_KeyboardSearch((QTableView*)self, qstring(search));
}

void q_tableview_qbase_keyboard_search(void* self, const char* search) {
    QTableView_QBaseKeyboardSearch((QTableView*)self, qstring(search));
}

void q_tableview_on_keyboard_search(void* self, void (*slot)(void*, const char*)) {
    QTableView_OnKeyboardSearch((QTableView*)self, (intptr_t)slot);
}

QAbstractItemDelegate* q_tableview_item_delegate_for_index(void* self, void* index) {
    return QTableView_ItemDelegateForIndex((QTableView*)self, (QModelIndex*)index);
}

QAbstractItemDelegate* q_tableview_qbase_item_delegate_for_index(void* self, void* index) {
    return QTableView_QBaseItemDelegateForIndex((QTableView*)self, (QModelIndex*)index);
}

void q_tableview_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*slot)(void*, void*)) {
    QTableView_OnItemDelegateForIndex((QTableView*)self, (intptr_t)slot);
}

QVariant* q_tableview_input_method_query(void* self, int64_t query) {
    return QTableView_InputMethodQuery((QTableView*)self, query);
}

QVariant* q_tableview_qbase_input_method_query(void* self, int64_t query) {
    return QTableView_QBaseInputMethodQuery((QTableView*)self, query);
}

void q_tableview_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QTableView_OnInputMethodQuery((QTableView*)self, (intptr_t)slot);
}

void q_tableview_reset(void* self) {
    QTableView_Reset((QTableView*)self);
}

void q_tableview_qbase_reset(void* self) {
    QTableView_QBaseReset((QTableView*)self);
}

void q_tableview_on_reset(void* self, void (*slot)()) {
    QTableView_OnReset((QTableView*)self, (intptr_t)slot);
}

void q_tableview_select_all(void* self) {
    QTableView_SelectAll((QTableView*)self);
}

void q_tableview_qbase_select_all(void* self) {
    QTableView_QBaseSelectAll((QTableView*)self);
}

void q_tableview_on_select_all(void* self, void (*slot)()) {
    QTableView_OnSelectAll((QTableView*)self, (intptr_t)slot);
}

void q_tableview_data_changed(void* self, void* topLeft, void* bottomRight, int* roles[]) {
    size_t roles_len = 0;
    while (roles[roles_len] != NULL) {
        roles_len++;
    }
    libqt_list roles_list = {
        .len = roles_len,
        .data = {(int*)roles},
    };
    QTableView_DataChanged((QTableView*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles_list);
}

void q_tableview_qbase_data_changed(void* self, void* topLeft, void* bottomRight, int* roles[]) {
    size_t roles_len = 0;
    while (roles[roles_len] != NULL) {
        roles_len++;
    }
    libqt_list roles_list = {
        .len = roles_len,
        .data = {(int*)roles},
    };
    QTableView_QBaseDataChanged((QTableView*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles_list);
}

void q_tableview_on_data_changed(void* self, void (*slot)(void*, void*, void*, int*)) {
    QTableView_OnDataChanged((QTableView*)self, (intptr_t)slot);
}

void q_tableview_rows_inserted(void* self, void* parent, int start, int end) {
    QTableView_RowsInserted((QTableView*)self, (QModelIndex*)parent, start, end);
}

void q_tableview_qbase_rows_inserted(void* self, void* parent, int start, int end) {
    QTableView_QBaseRowsInserted((QTableView*)self, (QModelIndex*)parent, start, end);
}

void q_tableview_on_rows_inserted(void* self, void (*slot)(void*, void*, int, int)) {
    QTableView_OnRowsInserted((QTableView*)self, (intptr_t)slot);
}

void q_tableview_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QTableView_RowsAboutToBeRemoved((QTableView*)self, (QModelIndex*)parent, start, end);
}

void q_tableview_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QTableView_QBaseRowsAboutToBeRemoved((QTableView*)self, (QModelIndex*)parent, start, end);
}

void q_tableview_on_rows_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int)) {
    QTableView_OnRowsAboutToBeRemoved((QTableView*)self, (intptr_t)slot);
}

void q_tableview_update_editor_data(void* self) {
    QTableView_UpdateEditorData((QTableView*)self);
}

void q_tableview_qbase_update_editor_data(void* self) {
    QTableView_QBaseUpdateEditorData((QTableView*)self);
}

void q_tableview_on_update_editor_data(void* self, void (*slot)()) {
    QTableView_OnUpdateEditorData((QTableView*)self, (intptr_t)slot);
}

void q_tableview_update_editor_geometries(void* self) {
    QTableView_UpdateEditorGeometries((QTableView*)self);
}

void q_tableview_qbase_update_editor_geometries(void* self) {
    QTableView_QBaseUpdateEditorGeometries((QTableView*)self);
}

void q_tableview_on_update_editor_geometries(void* self, void (*slot)()) {
    QTableView_OnUpdateEditorGeometries((QTableView*)self, (intptr_t)slot);
}

void q_tableview_vertical_scrollbar_value_changed(void* self, int value) {
    QTableView_VerticalScrollbarValueChanged((QTableView*)self, value);
}

void q_tableview_qbase_vertical_scrollbar_value_changed(void* self, int value) {
    QTableView_QBaseVerticalScrollbarValueChanged((QTableView*)self, value);
}

void q_tableview_on_vertical_scrollbar_value_changed(void* self, void (*slot)(void*, int)) {
    QTableView_OnVerticalScrollbarValueChanged((QTableView*)self, (intptr_t)slot);
}

void q_tableview_horizontal_scrollbar_value_changed(void* self, int value) {
    QTableView_HorizontalScrollbarValueChanged((QTableView*)self, value);
}

void q_tableview_qbase_horizontal_scrollbar_value_changed(void* self, int value) {
    QTableView_QBaseHorizontalScrollbarValueChanged((QTableView*)self, value);
}

void q_tableview_on_horizontal_scrollbar_value_changed(void* self, void (*slot)(void*, int)) {
    QTableView_OnHorizontalScrollbarValueChanged((QTableView*)self, (intptr_t)slot);
}

void q_tableview_close_editor(void* self, void* editor, int64_t hint) {
    QTableView_CloseEditor((QTableView*)self, (QWidget*)editor, hint);
}

void q_tableview_qbase_close_editor(void* self, void* editor, int64_t hint) {
    QTableView_QBaseCloseEditor((QTableView*)self, (QWidget*)editor, hint);
}

void q_tableview_on_close_editor(void* self, void (*slot)(void*, void*, int64_t)) {
    QTableView_OnCloseEditor((QTableView*)self, (intptr_t)slot);
}

void q_tableview_commit_data(void* self, void* editor) {
    QTableView_CommitData((QTableView*)self, (QWidget*)editor);
}

void q_tableview_qbase_commit_data(void* self, void* editor) {
    QTableView_QBaseCommitData((QTableView*)self, (QWidget*)editor);
}

void q_tableview_on_commit_data(void* self, void (*slot)(void*, void*)) {
    QTableView_OnCommitData((QTableView*)self, (intptr_t)slot);
}

void q_tableview_editor_destroyed(void* self, void* editor) {
    QTableView_EditorDestroyed((QTableView*)self, (QObject*)editor);
}

void q_tableview_qbase_editor_destroyed(void* self, void* editor) {
    QTableView_QBaseEditorDestroyed((QTableView*)self, (QObject*)editor);
}

void q_tableview_on_editor_destroyed(void* self, void (*slot)(void*, void*)) {
    QTableView_OnEditorDestroyed((QTableView*)self, (intptr_t)slot);
}

bool q_tableview_edit2(void* self, void* index, int64_t trigger, void* event) {
    return QTableView_Edit2((QTableView*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

bool q_tableview_qbase_edit2(void* self, void* index, int64_t trigger, void* event) {
    return QTableView_QBaseEdit2((QTableView*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

void q_tableview_on_edit2(void* self, bool (*slot)(void*, void*, int64_t, void*)) {
    QTableView_OnEdit2((QTableView*)self, (intptr_t)slot);
}

int64_t q_tableview_selection_command(void* self, void* index, void* event) {
    return QTableView_SelectionCommand((QTableView*)self, (QModelIndex*)index, (QEvent*)event);
}

int64_t q_tableview_qbase_selection_command(void* self, void* index, void* event) {
    return QTableView_QBaseSelectionCommand((QTableView*)self, (QModelIndex*)index, (QEvent*)event);
}

void q_tableview_on_selection_command(void* self, int64_t (*slot)(void*, void*, void*)) {
    QTableView_OnSelectionCommand((QTableView*)self, (intptr_t)slot);
}

void q_tableview_start_drag(void* self, int64_t supportedActions) {
    QTableView_StartDrag((QTableView*)self, supportedActions);
}

void q_tableview_qbase_start_drag(void* self, int64_t supportedActions) {
    QTableView_QBaseStartDrag((QTableView*)self, supportedActions);
}

void q_tableview_on_start_drag(void* self, void (*slot)(void*, int64_t)) {
    QTableView_OnStartDrag((QTableView*)self, (intptr_t)slot);
}

bool q_tableview_focus_next_prev_child(void* self, bool next) {
    return QTableView_FocusNextPrevChild((QTableView*)self, next);
}

bool q_tableview_qbase_focus_next_prev_child(void* self, bool next) {
    return QTableView_QBaseFocusNextPrevChild((QTableView*)self, next);
}

void q_tableview_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QTableView_OnFocusNextPrevChild((QTableView*)self, (intptr_t)slot);
}

bool q_tableview_event(void* self, void* event) {
    return QTableView_Event((QTableView*)self, (QEvent*)event);
}

bool q_tableview_qbase_event(void* self, void* event) {
    return QTableView_QBaseEvent((QTableView*)self, (QEvent*)event);
}

void q_tableview_on_event(void* self, bool (*slot)(void*, void*)) {
    QTableView_OnEvent((QTableView*)self, (intptr_t)slot);
}

bool q_tableview_viewport_event(void* self, void* event) {
    return QTableView_ViewportEvent((QTableView*)self, (QEvent*)event);
}

bool q_tableview_qbase_viewport_event(void* self, void* event) {
    return QTableView_QBaseViewportEvent((QTableView*)self, (QEvent*)event);
}

void q_tableview_on_viewport_event(void* self, bool (*slot)(void*, void*)) {
    QTableView_OnViewportEvent((QTableView*)self, (intptr_t)slot);
}

void q_tableview_mouse_press_event(void* self, void* event) {
    QTableView_MousePressEvent((QTableView*)self, (QMouseEvent*)event);
}

void q_tableview_qbase_mouse_press_event(void* self, void* event) {
    QTableView_QBaseMousePressEvent((QTableView*)self, (QMouseEvent*)event);
}

void q_tableview_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnMousePressEvent((QTableView*)self, (intptr_t)slot);
}

void q_tableview_mouse_move_event(void* self, void* event) {
    QTableView_MouseMoveEvent((QTableView*)self, (QMouseEvent*)event);
}

void q_tableview_qbase_mouse_move_event(void* self, void* event) {
    QTableView_QBaseMouseMoveEvent((QTableView*)self, (QMouseEvent*)event);
}

void q_tableview_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnMouseMoveEvent((QTableView*)self, (intptr_t)slot);
}

void q_tableview_mouse_release_event(void* self, void* event) {
    QTableView_MouseReleaseEvent((QTableView*)self, (QMouseEvent*)event);
}

void q_tableview_qbase_mouse_release_event(void* self, void* event) {
    QTableView_QBaseMouseReleaseEvent((QTableView*)self, (QMouseEvent*)event);
}

void q_tableview_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnMouseReleaseEvent((QTableView*)self, (intptr_t)slot);
}

void q_tableview_mouse_double_click_event(void* self, void* event) {
    QTableView_MouseDoubleClickEvent((QTableView*)self, (QMouseEvent*)event);
}

void q_tableview_qbase_mouse_double_click_event(void* self, void* event) {
    QTableView_QBaseMouseDoubleClickEvent((QTableView*)self, (QMouseEvent*)event);
}

void q_tableview_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnMouseDoubleClickEvent((QTableView*)self, (intptr_t)slot);
}

void q_tableview_drag_enter_event(void* self, void* event) {
    QTableView_DragEnterEvent((QTableView*)self, (QDragEnterEvent*)event);
}

void q_tableview_qbase_drag_enter_event(void* self, void* event) {
    QTableView_QBaseDragEnterEvent((QTableView*)self, (QDragEnterEvent*)event);
}

void q_tableview_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnDragEnterEvent((QTableView*)self, (intptr_t)slot);
}

void q_tableview_drag_move_event(void* self, void* event) {
    QTableView_DragMoveEvent((QTableView*)self, (QDragMoveEvent*)event);
}

void q_tableview_qbase_drag_move_event(void* self, void* event) {
    QTableView_QBaseDragMoveEvent((QTableView*)self, (QDragMoveEvent*)event);
}

void q_tableview_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnDragMoveEvent((QTableView*)self, (intptr_t)slot);
}

void q_tableview_drag_leave_event(void* self, void* event) {
    QTableView_DragLeaveEvent((QTableView*)self, (QDragLeaveEvent*)event);
}

void q_tableview_qbase_drag_leave_event(void* self, void* event) {
    QTableView_QBaseDragLeaveEvent((QTableView*)self, (QDragLeaveEvent*)event);
}

void q_tableview_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnDragLeaveEvent((QTableView*)self, (intptr_t)slot);
}

void q_tableview_drop_event(void* self, void* event) {
    QTableView_DropEvent((QTableView*)self, (QDropEvent*)event);
}

void q_tableview_qbase_drop_event(void* self, void* event) {
    QTableView_QBaseDropEvent((QTableView*)self, (QDropEvent*)event);
}

void q_tableview_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnDropEvent((QTableView*)self, (intptr_t)slot);
}

void q_tableview_focus_in_event(void* self, void* event) {
    QTableView_FocusInEvent((QTableView*)self, (QFocusEvent*)event);
}

void q_tableview_qbase_focus_in_event(void* self, void* event) {
    QTableView_QBaseFocusInEvent((QTableView*)self, (QFocusEvent*)event);
}

void q_tableview_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnFocusInEvent((QTableView*)self, (intptr_t)slot);
}

void q_tableview_focus_out_event(void* self, void* event) {
    QTableView_FocusOutEvent((QTableView*)self, (QFocusEvent*)event);
}

void q_tableview_qbase_focus_out_event(void* self, void* event) {
    QTableView_QBaseFocusOutEvent((QTableView*)self, (QFocusEvent*)event);
}

void q_tableview_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnFocusOutEvent((QTableView*)self, (intptr_t)slot);
}

void q_tableview_key_press_event(void* self, void* event) {
    QTableView_KeyPressEvent((QTableView*)self, (QKeyEvent*)event);
}

void q_tableview_qbase_key_press_event(void* self, void* event) {
    QTableView_QBaseKeyPressEvent((QTableView*)self, (QKeyEvent*)event);
}

void q_tableview_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnKeyPressEvent((QTableView*)self, (intptr_t)slot);
}

void q_tableview_resize_event(void* self, void* event) {
    QTableView_ResizeEvent((QTableView*)self, (QResizeEvent*)event);
}

void q_tableview_qbase_resize_event(void* self, void* event) {
    QTableView_QBaseResizeEvent((QTableView*)self, (QResizeEvent*)event);
}

void q_tableview_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnResizeEvent((QTableView*)self, (intptr_t)slot);
}

void q_tableview_input_method_event(void* self, void* event) {
    QTableView_InputMethodEvent((QTableView*)self, (QInputMethodEvent*)event);
}

void q_tableview_qbase_input_method_event(void* self, void* event) {
    QTableView_QBaseInputMethodEvent((QTableView*)self, (QInputMethodEvent*)event);
}

void q_tableview_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnInputMethodEvent((QTableView*)self, (intptr_t)slot);
}

bool q_tableview_event_filter(void* self, void* object, void* event) {
    return QTableView_EventFilter((QTableView*)self, (QObject*)object, (QEvent*)event);
}

bool q_tableview_qbase_event_filter(void* self, void* object, void* event) {
    return QTableView_QBaseEventFilter((QTableView*)self, (QObject*)object, (QEvent*)event);
}

void q_tableview_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QTableView_OnEventFilter((QTableView*)self, (intptr_t)slot);
}

QSize* q_tableview_minimum_size_hint(void* self) {
    return QTableView_MinimumSizeHint((QTableView*)self);
}

QSize* q_tableview_qbase_minimum_size_hint(void* self) {
    return QTableView_QBaseMinimumSizeHint((QTableView*)self);
}

void q_tableview_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QTableView_OnMinimumSizeHint((QTableView*)self, (intptr_t)slot);
}

QSize* q_tableview_size_hint(void* self) {
    return QTableView_SizeHint((QTableView*)self);
}

QSize* q_tableview_qbase_size_hint(void* self) {
    return QTableView_QBaseSizeHint((QTableView*)self);
}

void q_tableview_on_size_hint(void* self, QSize* (*slot)()) {
    QTableView_OnSizeHint((QTableView*)self, (intptr_t)slot);
}

void q_tableview_setup_viewport(void* self, void* viewport) {
    QTableView_SetupViewport((QTableView*)self, (QWidget*)viewport);
}

void q_tableview_qbase_setup_viewport(void* self, void* viewport) {
    QTableView_QBaseSetupViewport((QTableView*)self, (QWidget*)viewport);
}

void q_tableview_on_setup_viewport(void* self, void (*slot)(void*, void*)) {
    QTableView_OnSetupViewport((QTableView*)self, (intptr_t)slot);
}

void q_tableview_wheel_event(void* self, void* param1) {
    QTableView_WheelEvent((QTableView*)self, (QWheelEvent*)param1);
}

void q_tableview_qbase_wheel_event(void* self, void* param1) {
    QTableView_QBaseWheelEvent((QTableView*)self, (QWheelEvent*)param1);
}

void q_tableview_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnWheelEvent((QTableView*)self, (intptr_t)slot);
}

void q_tableview_context_menu_event(void* self, void* param1) {
    QTableView_ContextMenuEvent((QTableView*)self, (QContextMenuEvent*)param1);
}

void q_tableview_qbase_context_menu_event(void* self, void* param1) {
    QTableView_QBaseContextMenuEvent((QTableView*)self, (QContextMenuEvent*)param1);
}

void q_tableview_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnContextMenuEvent((QTableView*)self, (intptr_t)slot);
}

void q_tableview_change_event(void* self, void* param1) {
    QTableView_ChangeEvent((QTableView*)self, (QEvent*)param1);
}

void q_tableview_qbase_change_event(void* self, void* param1) {
    QTableView_QBaseChangeEvent((QTableView*)self, (QEvent*)param1);
}

void q_tableview_on_change_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnChangeEvent((QTableView*)self, (intptr_t)slot);
}

void q_tableview_init_style_option(void* self, void* option) {
    QTableView_InitStyleOption((QTableView*)self, (QStyleOptionFrame*)option);
}

void q_tableview_qbase_init_style_option(void* self, void* option) {
    QTableView_QBaseInitStyleOption((QTableView*)self, (QStyleOptionFrame*)option);
}

void q_tableview_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QTableView_OnInitStyleOption((QTableView*)self, (intptr_t)slot);
}

int32_t q_tableview_dev_type(void* self) {
    return QTableView_DevType((QTableView*)self);
}

int32_t q_tableview_qbase_dev_type(void* self) {
    return QTableView_QBaseDevType((QTableView*)self);
}

void q_tableview_on_dev_type(void* self, int32_t (*slot)()) {
    QTableView_OnDevType((QTableView*)self, (intptr_t)slot);
}

void q_tableview_set_visible(void* self, bool visible) {
    QTableView_SetVisible((QTableView*)self, visible);
}

void q_tableview_qbase_set_visible(void* self, bool visible) {
    QTableView_QBaseSetVisible((QTableView*)self, visible);
}

void q_tableview_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QTableView_OnSetVisible((QTableView*)self, (intptr_t)slot);
}

int32_t q_tableview_height_for_width(void* self, int param1) {
    return QTableView_HeightForWidth((QTableView*)self, param1);
}

int32_t q_tableview_qbase_height_for_width(void* self, int param1) {
    return QTableView_QBaseHeightForWidth((QTableView*)self, param1);
}

void q_tableview_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QTableView_OnHeightForWidth((QTableView*)self, (intptr_t)slot);
}

bool q_tableview_has_height_for_width(void* self) {
    return QTableView_HasHeightForWidth((QTableView*)self);
}

bool q_tableview_qbase_has_height_for_width(void* self) {
    return QTableView_QBaseHasHeightForWidth((QTableView*)self);
}

void q_tableview_on_has_height_for_width(void* self, bool (*slot)()) {
    QTableView_OnHasHeightForWidth((QTableView*)self, (intptr_t)slot);
}

QPaintEngine* q_tableview_paint_engine(void* self) {
    return QTableView_PaintEngine((QTableView*)self);
}

QPaintEngine* q_tableview_qbase_paint_engine(void* self) {
    return QTableView_QBasePaintEngine((QTableView*)self);
}

void q_tableview_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QTableView_OnPaintEngine((QTableView*)self, (intptr_t)slot);
}

void q_tableview_key_release_event(void* self, void* event) {
    QTableView_KeyReleaseEvent((QTableView*)self, (QKeyEvent*)event);
}

void q_tableview_qbase_key_release_event(void* self, void* event) {
    QTableView_QBaseKeyReleaseEvent((QTableView*)self, (QKeyEvent*)event);
}

void q_tableview_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnKeyReleaseEvent((QTableView*)self, (intptr_t)slot);
}

void q_tableview_enter_event(void* self, void* event) {
    QTableView_EnterEvent((QTableView*)self, (QEnterEvent*)event);
}

void q_tableview_qbase_enter_event(void* self, void* event) {
    QTableView_QBaseEnterEvent((QTableView*)self, (QEnterEvent*)event);
}

void q_tableview_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnEnterEvent((QTableView*)self, (intptr_t)slot);
}

void q_tableview_leave_event(void* self, void* event) {
    QTableView_LeaveEvent((QTableView*)self, (QEvent*)event);
}

void q_tableview_qbase_leave_event(void* self, void* event) {
    QTableView_QBaseLeaveEvent((QTableView*)self, (QEvent*)event);
}

void q_tableview_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnLeaveEvent((QTableView*)self, (intptr_t)slot);
}

void q_tableview_move_event(void* self, void* event) {
    QTableView_MoveEvent((QTableView*)self, (QMoveEvent*)event);
}

void q_tableview_qbase_move_event(void* self, void* event) {
    QTableView_QBaseMoveEvent((QTableView*)self, (QMoveEvent*)event);
}

void q_tableview_on_move_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnMoveEvent((QTableView*)self, (intptr_t)slot);
}

void q_tableview_close_event(void* self, void* event) {
    QTableView_CloseEvent((QTableView*)self, (QCloseEvent*)event);
}

void q_tableview_qbase_close_event(void* self, void* event) {
    QTableView_QBaseCloseEvent((QTableView*)self, (QCloseEvent*)event);
}

void q_tableview_on_close_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnCloseEvent((QTableView*)self, (intptr_t)slot);
}

void q_tableview_tablet_event(void* self, void* event) {
    QTableView_TabletEvent((QTableView*)self, (QTabletEvent*)event);
}

void q_tableview_qbase_tablet_event(void* self, void* event) {
    QTableView_QBaseTabletEvent((QTableView*)self, (QTabletEvent*)event);
}

void q_tableview_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnTabletEvent((QTableView*)self, (intptr_t)slot);
}

void q_tableview_action_event(void* self, void* event) {
    QTableView_ActionEvent((QTableView*)self, (QActionEvent*)event);
}

void q_tableview_qbase_action_event(void* self, void* event) {
    QTableView_QBaseActionEvent((QTableView*)self, (QActionEvent*)event);
}

void q_tableview_on_action_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnActionEvent((QTableView*)self, (intptr_t)slot);
}

void q_tableview_show_event(void* self, void* event) {
    QTableView_ShowEvent((QTableView*)self, (QShowEvent*)event);
}

void q_tableview_qbase_show_event(void* self, void* event) {
    QTableView_QBaseShowEvent((QTableView*)self, (QShowEvent*)event);
}

void q_tableview_on_show_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnShowEvent((QTableView*)self, (intptr_t)slot);
}

void q_tableview_hide_event(void* self, void* event) {
    QTableView_HideEvent((QTableView*)self, (QHideEvent*)event);
}

void q_tableview_qbase_hide_event(void* self, void* event) {
    QTableView_QBaseHideEvent((QTableView*)self, (QHideEvent*)event);
}

void q_tableview_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnHideEvent((QTableView*)self, (intptr_t)slot);
}

bool q_tableview_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QTableView_NativeEvent((QTableView*)self, qstring(eventType), message, result);
}

bool q_tableview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QTableView_QBaseNativeEvent((QTableView*)self, qstring(eventType), message, result);
}

void q_tableview_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QTableView_OnNativeEvent((QTableView*)self, (intptr_t)slot);
}

int32_t q_tableview_metric(void* self, int64_t param1) {
    return QTableView_Metric((QTableView*)self, param1);
}

int32_t q_tableview_qbase_metric(void* self, int64_t param1) {
    return QTableView_QBaseMetric((QTableView*)self, param1);
}

void q_tableview_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QTableView_OnMetric((QTableView*)self, (intptr_t)slot);
}

void q_tableview_init_painter(void* self, void* painter) {
    QTableView_InitPainter((QTableView*)self, (QPainter*)painter);
}

void q_tableview_qbase_init_painter(void* self, void* painter) {
    QTableView_QBaseInitPainter((QTableView*)self, (QPainter*)painter);
}

void q_tableview_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QTableView_OnInitPainter((QTableView*)self, (intptr_t)slot);
}

QPaintDevice* q_tableview_redirected(void* self, void* offset) {
    return QTableView_Redirected((QTableView*)self, (QPoint*)offset);
}

QPaintDevice* q_tableview_qbase_redirected(void* self, void* offset) {
    return QTableView_QBaseRedirected((QTableView*)self, (QPoint*)offset);
}

void q_tableview_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QTableView_OnRedirected((QTableView*)self, (intptr_t)slot);
}

QPainter* q_tableview_shared_painter(void* self) {
    return QTableView_SharedPainter((QTableView*)self);
}

QPainter* q_tableview_qbase_shared_painter(void* self) {
    return QTableView_QBaseSharedPainter((QTableView*)self);
}

void q_tableview_on_shared_painter(void* self, QPainter* (*slot)()) {
    QTableView_OnSharedPainter((QTableView*)self, (intptr_t)slot);
}

void q_tableview_child_event(void* self, void* event) {
    QTableView_ChildEvent((QTableView*)self, (QChildEvent*)event);
}

void q_tableview_qbase_child_event(void* self, void* event) {
    QTableView_QBaseChildEvent((QTableView*)self, (QChildEvent*)event);
}

void q_tableview_on_child_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnChildEvent((QTableView*)self, (intptr_t)slot);
}

void q_tableview_custom_event(void* self, void* event) {
    QTableView_CustomEvent((QTableView*)self, (QEvent*)event);
}

void q_tableview_qbase_custom_event(void* self, void* event) {
    QTableView_QBaseCustomEvent((QTableView*)self, (QEvent*)event);
}

void q_tableview_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnCustomEvent((QTableView*)self, (intptr_t)slot);
}

void q_tableview_connect_notify(void* self, void* signal) {
    QTableView_ConnectNotify((QTableView*)self, (QMetaMethod*)signal);
}

void q_tableview_qbase_connect_notify(void* self, void* signal) {
    QTableView_QBaseConnectNotify((QTableView*)self, (QMetaMethod*)signal);
}

void q_tableview_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QTableView_OnConnectNotify((QTableView*)self, (intptr_t)slot);
}

void q_tableview_disconnect_notify(void* self, void* signal) {
    QTableView_DisconnectNotify((QTableView*)self, (QMetaMethod*)signal);
}

void q_tableview_qbase_disconnect_notify(void* self, void* signal) {
    QTableView_QBaseDisconnectNotify((QTableView*)self, (QMetaMethod*)signal);
}

void q_tableview_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QTableView_OnDisconnectNotify((QTableView*)self, (intptr_t)slot);
}

int64_t q_tableview_state(void* self) {
    return QTableView_State((QTableView*)self);
}

int64_t q_tableview_qbase_state(void* self) {
    return QTableView_QBaseState((QTableView*)self);
}

void q_tableview_on_state(void* self, int64_t (*slot)()) {
    QTableView_OnState((QTableView*)self, (intptr_t)slot);
}

void q_tableview_set_state(void* self, int64_t state) {
    QTableView_SetState((QTableView*)self, state);
}

void q_tableview_qbase_set_state(void* self, int64_t state) {
    QTableView_QBaseSetState((QTableView*)self, state);
}

void q_tableview_on_set_state(void* self, void (*slot)(void*, int64_t)) {
    QTableView_OnSetState((QTableView*)self, (intptr_t)slot);
}

void q_tableview_schedule_delayed_items_layout(void* self) {
    QTableView_ScheduleDelayedItemsLayout((QTableView*)self);
}

void q_tableview_qbase_schedule_delayed_items_layout(void* self) {
    QTableView_QBaseScheduleDelayedItemsLayout((QTableView*)self);
}

void q_tableview_on_schedule_delayed_items_layout(void* self, void (*slot)()) {
    QTableView_OnScheduleDelayedItemsLayout((QTableView*)self, (intptr_t)slot);
}

void q_tableview_execute_delayed_items_layout(void* self) {
    QTableView_ExecuteDelayedItemsLayout((QTableView*)self);
}

void q_tableview_qbase_execute_delayed_items_layout(void* self) {
    QTableView_QBaseExecuteDelayedItemsLayout((QTableView*)self);
}

void q_tableview_on_execute_delayed_items_layout(void* self, void (*slot)()) {
    QTableView_OnExecuteDelayedItemsLayout((QTableView*)self, (intptr_t)slot);
}

void q_tableview_set_dirty_region(void* self, void* region) {
    QTableView_SetDirtyRegion((QTableView*)self, (QRegion*)region);
}

void q_tableview_qbase_set_dirty_region(void* self, void* region) {
    QTableView_QBaseSetDirtyRegion((QTableView*)self, (QRegion*)region);
}

void q_tableview_on_set_dirty_region(void* self, void (*slot)(void*, void*)) {
    QTableView_OnSetDirtyRegion((QTableView*)self, (intptr_t)slot);
}

void q_tableview_scroll_dirty_region(void* self, int dx, int dy) {
    QTableView_ScrollDirtyRegion((QTableView*)self, dx, dy);
}

void q_tableview_qbase_scroll_dirty_region(void* self, int dx, int dy) {
    QTableView_QBaseScrollDirtyRegion((QTableView*)self, dx, dy);
}

void q_tableview_on_scroll_dirty_region(void* self, void (*slot)(void*, int, int)) {
    QTableView_OnScrollDirtyRegion((QTableView*)self, (intptr_t)slot);
}

QPoint* q_tableview_dirty_region_offset(void* self) {
    return QTableView_DirtyRegionOffset((QTableView*)self);
}

QPoint* q_tableview_qbase_dirty_region_offset(void* self) {
    return QTableView_QBaseDirtyRegionOffset((QTableView*)self);
}

void q_tableview_on_dirty_region_offset(void* self, QPoint* (*slot)()) {
    QTableView_OnDirtyRegionOffset((QTableView*)self, (intptr_t)slot);
}

void q_tableview_start_auto_scroll(void* self) {
    QTableView_StartAutoScroll((QTableView*)self);
}

void q_tableview_qbase_start_auto_scroll(void* self) {
    QTableView_QBaseStartAutoScroll((QTableView*)self);
}

void q_tableview_on_start_auto_scroll(void* self, void (*slot)()) {
    QTableView_OnStartAutoScroll((QTableView*)self, (intptr_t)slot);
}

void q_tableview_stop_auto_scroll(void* self) {
    QTableView_StopAutoScroll((QTableView*)self);
}

void q_tableview_qbase_stop_auto_scroll(void* self) {
    QTableView_QBaseStopAutoScroll((QTableView*)self);
}

void q_tableview_on_stop_auto_scroll(void* self, void (*slot)()) {
    QTableView_OnStopAutoScroll((QTableView*)self, (intptr_t)slot);
}

void q_tableview_do_auto_scroll(void* self) {
    QTableView_DoAutoScroll((QTableView*)self);
}

void q_tableview_qbase_do_auto_scroll(void* self) {
    QTableView_QBaseDoAutoScroll((QTableView*)self);
}

void q_tableview_on_do_auto_scroll(void* self, void (*slot)()) {
    QTableView_OnDoAutoScroll((QTableView*)self, (intptr_t)slot);
}

int64_t q_tableview_drop_indicator_position(void* self) {
    return QTableView_DropIndicatorPosition((QTableView*)self);
}

int64_t q_tableview_qbase_drop_indicator_position(void* self) {
    return QTableView_QBaseDropIndicatorPosition((QTableView*)self);
}

void q_tableview_on_drop_indicator_position(void* self, int64_t (*slot)()) {
    QTableView_OnDropIndicatorPosition((QTableView*)self, (intptr_t)slot);
}

void q_tableview_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QTableView_SetViewportMargins((QTableView*)self, left, top, right, bottom);
}

void q_tableview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QTableView_QBaseSetViewportMargins((QTableView*)self, left, top, right, bottom);
}

void q_tableview_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int)) {
    QTableView_OnSetViewportMargins((QTableView*)self, (intptr_t)slot);
}

QMargins* q_tableview_viewport_margins(void* self) {
    return QTableView_ViewportMargins((QTableView*)self);
}

QMargins* q_tableview_qbase_viewport_margins(void* self) {
    return QTableView_QBaseViewportMargins((QTableView*)self);
}

void q_tableview_on_viewport_margins(void* self, QMargins* (*slot)()) {
    QTableView_OnViewportMargins((QTableView*)self, (intptr_t)slot);
}

void q_tableview_draw_frame(void* self, void* param1) {
    QTableView_DrawFrame((QTableView*)self, (QPainter*)param1);
}

void q_tableview_qbase_draw_frame(void* self, void* param1) {
    QTableView_QBaseDrawFrame((QTableView*)self, (QPainter*)param1);
}

void q_tableview_on_draw_frame(void* self, void (*slot)(void*, void*)) {
    QTableView_OnDrawFrame((QTableView*)self, (intptr_t)slot);
}

void q_tableview_update_micro_focus(void* self) {
    QTableView_UpdateMicroFocus((QTableView*)self);
}

void q_tableview_qbase_update_micro_focus(void* self) {
    QTableView_QBaseUpdateMicroFocus((QTableView*)self);
}

void q_tableview_on_update_micro_focus(void* self, void (*slot)()) {
    QTableView_OnUpdateMicroFocus((QTableView*)self, (intptr_t)slot);
}

void q_tableview_create(void* self) {
    QTableView_Create((QTableView*)self);
}

void q_tableview_qbase_create(void* self) {
    QTableView_QBaseCreate((QTableView*)self);
}

void q_tableview_on_create(void* self, void (*slot)()) {
    QTableView_OnCreate((QTableView*)self, (intptr_t)slot);
}

void q_tableview_destroy(void* self) {
    QTableView_Destroy((QTableView*)self);
}

void q_tableview_qbase_destroy(void* self) {
    QTableView_QBaseDestroy((QTableView*)self);
}

void q_tableview_on_destroy(void* self, void (*slot)()) {
    QTableView_OnDestroy((QTableView*)self, (intptr_t)slot);
}

bool q_tableview_focus_next_child(void* self) {
    return QTableView_FocusNextChild((QTableView*)self);
}

bool q_tableview_qbase_focus_next_child(void* self) {
    return QTableView_QBaseFocusNextChild((QTableView*)self);
}

void q_tableview_on_focus_next_child(void* self, bool (*slot)()) {
    QTableView_OnFocusNextChild((QTableView*)self, (intptr_t)slot);
}

bool q_tableview_focus_previous_child(void* self) {
    return QTableView_FocusPreviousChild((QTableView*)self);
}

bool q_tableview_qbase_focus_previous_child(void* self) {
    return QTableView_QBaseFocusPreviousChild((QTableView*)self);
}

void q_tableview_on_focus_previous_child(void* self, bool (*slot)()) {
    QTableView_OnFocusPreviousChild((QTableView*)self, (intptr_t)slot);
}

QObject* q_tableview_sender(void* self) {
    return QTableView_Sender((QTableView*)self);
}

QObject* q_tableview_qbase_sender(void* self) {
    return QTableView_QBaseSender((QTableView*)self);
}

void q_tableview_on_sender(void* self, QObject* (*slot)()) {
    QTableView_OnSender((QTableView*)self, (intptr_t)slot);
}

int32_t q_tableview_sender_signal_index(void* self) {
    return QTableView_SenderSignalIndex((QTableView*)self);
}

int32_t q_tableview_qbase_sender_signal_index(void* self) {
    return QTableView_QBaseSenderSignalIndex((QTableView*)self);
}

void q_tableview_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QTableView_OnSenderSignalIndex((QTableView*)self, (intptr_t)slot);
}

int32_t q_tableview_receivers(void* self, const char* signal) {
    return QTableView_Receivers((QTableView*)self, signal);
}

int32_t q_tableview_qbase_receivers(void* self, const char* signal) {
    return QTableView_QBaseReceivers((QTableView*)self, signal);
}

void q_tableview_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QTableView_OnReceivers((QTableView*)self, (intptr_t)slot);
}

bool q_tableview_is_signal_connected(void* self, void* signal) {
    return QTableView_IsSignalConnected((QTableView*)self, (QMetaMethod*)signal);
}

bool q_tableview_qbase_is_signal_connected(void* self, void* signal) {
    return QTableView_QBaseIsSignalConnected((QTableView*)self, (QMetaMethod*)signal);
}

void q_tableview_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QTableView_OnIsSignalConnected((QTableView*)self, (intptr_t)slot);
}

void q_tableview_delete(void* self) {
    QTableView_Delete((QTableView*)(self));
}
