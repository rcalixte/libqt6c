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

/// https://doc.qt.io/qt-6/qtableview.html

/// q_tableview_new constructs a new QTableView object.
///
/// ``` QWidget* parent ```
QTableView* q_tableview_new(void* parent) {
    return QTableView_new((QWidget*)parent);
}

/// q_tableview_new2 constructs a new QTableView object.
///
///
QTableView* q_tableview_new2() {
    return QTableView_new2();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTableView* self ```
QMetaObject* q_tableview_meta_object(void* self) {
    return QTableView_MetaObject((QTableView*)self);
}

/// ``` QTableView* self, const char* param1 ```
void* q_tableview_metacast(void* self, const char* param1) {
    return QTableView_Metacast((QTableView*)self, param1);
}

/// ``` QTableView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_tableview_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTableView_Metacall((QTableView*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, int32_t (*slot)(QTableView*, enum QMetaObject__Call, int, void*) ```
void q_tableview_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QTableView_OnMetacall((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_tableview_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTableView_QBaseMetacall((QTableView*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_tableview_tr(const char* s) {
    libqt_string _str = QTableView_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setModel)
///
/// ``` QTableView* self, QAbstractItemModel* model ```
void q_tableview_set_model(void* self, void* model) {
    QTableView_SetModel((QTableView*)self, (QAbstractItemModel*)model);
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QAbstractItemModel*) ```
void q_tableview_on_set_model(void* self, void (*slot)(void*, void*)) {
    QTableView_OnSetModel((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self, QAbstractItemModel* model ```
void q_tableview_qbase_set_model(void* self, void* model) {
    QTableView_QBaseSetModel((QTableView*)self, (QAbstractItemModel*)model);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setRootIndex)
///
/// ``` QTableView* self, QModelIndex* index ```
void q_tableview_set_root_index(void* self, void* index) {
    QTableView_SetRootIndex((QTableView*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QModelIndex*) ```
void q_tableview_on_set_root_index(void* self, void (*slot)(void*, void*)) {
    QTableView_OnSetRootIndex((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self, QModelIndex* index ```
void q_tableview_qbase_set_root_index(void* self, void* index) {
    QTableView_QBaseSetRootIndex((QTableView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSelectionModel)
///
/// ``` QTableView* self, QItemSelectionModel* selectionModel ```
void q_tableview_set_selection_model(void* self, void* selectionModel) {
    QTableView_SetSelectionModel((QTableView*)self, (QItemSelectionModel*)selectionModel);
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QItemSelectionModel*) ```
void q_tableview_on_set_selection_model(void* self, void (*slot)(void*, void*)) {
    QTableView_OnSetSelectionModel((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self, QItemSelectionModel* selectionModel ```
void q_tableview_qbase_set_selection_model(void* self, void* selectionModel) {
    QTableView_QBaseSetSelectionModel((QTableView*)self, (QItemSelectionModel*)selectionModel);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#doItemsLayout)
///
/// ``` QTableView* self ```
void q_tableview_do_items_layout(void* self) {
    QTableView_DoItemsLayout((QTableView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)() ```
void q_tableview_on_do_items_layout(void* self, void (*slot)()) {
    QTableView_OnDoItemsLayout((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self ```
void q_tableview_qbase_do_items_layout(void* self) {
    QTableView_QBaseDoItemsLayout((QTableView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalHeader)
///
/// ``` QTableView* self ```
QHeaderView* q_tableview_horizontal_header(void* self) {
    return QTableView_HorizontalHeader((QTableView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalHeader)
///
/// ``` QTableView* self ```
QHeaderView* q_tableview_vertical_header(void* self) {
    return QTableView_VerticalHeader((QTableView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setHorizontalHeader)
///
/// ``` QTableView* self, QHeaderView* header ```
void q_tableview_set_horizontal_header(void* self, void* header) {
    QTableView_SetHorizontalHeader((QTableView*)self, (QHeaderView*)header);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setVerticalHeader)
///
/// ``` QTableView* self, QHeaderView* header ```
void q_tableview_set_vertical_header(void* self, void* header) {
    QTableView_SetVerticalHeader((QTableView*)self, (QHeaderView*)header);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowViewportPosition)
///
/// ``` QTableView* self, int row ```
int32_t q_tableview_row_viewport_position(void* self, int row) {
    return QTableView_RowViewportPosition((QTableView*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowAt)
///
/// ``` QTableView* self, int y ```
int32_t q_tableview_row_at(void* self, int y) {
    return QTableView_RowAt((QTableView*)self, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setRowHeight)
///
/// ``` QTableView* self, int row, int height ```
void q_tableview_set_row_height(void* self, int row, int height) {
    QTableView_SetRowHeight((QTableView*)self, row, height);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowHeight)
///
/// ``` QTableView* self, int row ```
int32_t q_tableview_row_height(void* self, int row) {
    return QTableView_RowHeight((QTableView*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnViewportPosition)
///
/// ``` QTableView* self, int column ```
int32_t q_tableview_column_viewport_position(void* self, int column) {
    return QTableView_ColumnViewportPosition((QTableView*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnAt)
///
/// ``` QTableView* self, int x ```
int32_t q_tableview_column_at(void* self, int x) {
    return QTableView_ColumnAt((QTableView*)self, x);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setColumnWidth)
///
/// ``` QTableView* self, int column, int width ```
void q_tableview_set_column_width(void* self, int column, int width) {
    QTableView_SetColumnWidth((QTableView*)self, column, width);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnWidth)
///
/// ``` QTableView* self, int column ```
int32_t q_tableview_column_width(void* self, int column) {
    return QTableView_ColumnWidth((QTableView*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isRowHidden)
///
/// ``` QTableView* self, int row ```
bool q_tableview_is_row_hidden(void* self, int row) {
    return QTableView_IsRowHidden((QTableView*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setRowHidden)
///
/// ``` QTableView* self, int row, bool hide ```
void q_tableview_set_row_hidden(void* self, int row, bool hide) {
    QTableView_SetRowHidden((QTableView*)self, row, hide);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isColumnHidden)
///
/// ``` QTableView* self, int column ```
bool q_tableview_is_column_hidden(void* self, int column) {
    return QTableView_IsColumnHidden((QTableView*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setColumnHidden)
///
/// ``` QTableView* self, int column, bool hide ```
void q_tableview_set_column_hidden(void* self, int column, bool hide) {
    QTableView_SetColumnHidden((QTableView*)self, column, hide);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSortingEnabled)
///
/// ``` QTableView* self, bool enable ```
void q_tableview_set_sorting_enabled(void* self, bool enable) {
    QTableView_SetSortingEnabled((QTableView*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isSortingEnabled)
///
/// ``` QTableView* self ```
bool q_tableview_is_sorting_enabled(void* self) {
    return QTableView_IsSortingEnabled((QTableView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#showGrid)
///
/// ``` QTableView* self ```
bool q_tableview_show_grid(void* self) {
    return QTableView_ShowGrid((QTableView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#gridStyle)
///
/// ``` QTableView* self ```
int64_t q_tableview_grid_style(void* self) {
    return QTableView_GridStyle((QTableView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setGridStyle)
///
/// ``` QTableView* self, enum Qt__PenStyle style ```
void q_tableview_set_grid_style(void* self, int64_t style) {
    QTableView_SetGridStyle((QTableView*)self, style);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setWordWrap)
///
/// ``` QTableView* self, bool on ```
void q_tableview_set_word_wrap(void* self, bool on) {
    QTableView_SetWordWrap((QTableView*)self, on);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#wordWrap)
///
/// ``` QTableView* self ```
bool q_tableview_word_wrap(void* self) {
    return QTableView_WordWrap((QTableView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setCornerButtonEnabled)
///
/// ``` QTableView* self, bool enable ```
void q_tableview_set_corner_button_enabled(void* self, bool enable) {
    QTableView_SetCornerButtonEnabled((QTableView*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isCornerButtonEnabled)
///
/// ``` QTableView* self ```
bool q_tableview_is_corner_button_enabled(void* self) {
    return QTableView_IsCornerButtonEnabled((QTableView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#visualRect)
///
/// ``` QTableView* self, QModelIndex* index ```
QRect* q_tableview_visual_rect(void* self, void* index) {
    return QTableView_VisualRect((QTableView*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, QRect* (*slot)(QTableView*, QModelIndex*) ```
void q_tableview_on_visual_rect(void* self, QRect* (*slot)(void*, void*)) {
    QTableView_OnVisualRect((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self, QModelIndex* index ```
QRect* q_tableview_qbase_visual_rect(void* self, void* index) {
    return QTableView_QBaseVisualRect((QTableView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#scrollTo)
///
/// ``` QTableView* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_tableview_scroll_to(void* self, void* index, int64_t hint) {
    QTableView_ScrollTo((QTableView*)self, (QModelIndex*)index, hint);
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QModelIndex*, enum QAbstractItemView__ScrollHint) ```
void q_tableview_on_scroll_to(void* self, void (*slot)(void*, void*, int64_t)) {
    QTableView_OnScrollTo((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_tableview_qbase_scroll_to(void* self, void* index, int64_t hint) {
    QTableView_QBaseScrollTo((QTableView*)self, (QModelIndex*)index, hint);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#indexAt)
///
/// ``` QTableView* self, QPoint* p ```
QModelIndex* q_tableview_index_at(void* self, void* p) {
    return QTableView_IndexAt((QTableView*)self, (QPoint*)p);
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, QModelIndex* (*slot)(QTableView*, QPoint*) ```
void q_tableview_on_index_at(void* self, QModelIndex* (*slot)(void*, void*)) {
    QTableView_OnIndexAt((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self, QPoint* p ```
QModelIndex* q_tableview_qbase_index_at(void* self, void* p) {
    return QTableView_QBaseIndexAt((QTableView*)self, (QPoint*)p);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSpan)
///
/// ``` QTableView* self, int row, int column, int rowSpan, int columnSpan ```
void q_tableview_set_span(void* self, int row, int column, int rowSpan, int columnSpan) {
    QTableView_SetSpan((QTableView*)self, row, column, rowSpan, columnSpan);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowSpan)
///
/// ``` QTableView* self, int row, int column ```
int32_t q_tableview_row_span(void* self, int row, int column) {
    return QTableView_RowSpan((QTableView*)self, row, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnSpan)
///
/// ``` QTableView* self, int row, int column ```
int32_t q_tableview_column_span(void* self, int row, int column) {
    return QTableView_ColumnSpan((QTableView*)self, row, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#clearSpans)
///
/// ``` QTableView* self ```
void q_tableview_clear_spans(void* self) {
    QTableView_ClearSpans((QTableView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectRow)
///
/// ``` QTableView* self, int row ```
void q_tableview_select_row(void* self, int row) {
    QTableView_SelectRow((QTableView*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectColumn)
///
/// ``` QTableView* self, int column ```
void q_tableview_select_column(void* self, int column) {
    QTableView_SelectColumn((QTableView*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#hideRow)
///
/// ``` QTableView* self, int row ```
void q_tableview_hide_row(void* self, int row) {
    QTableView_HideRow((QTableView*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#hideColumn)
///
/// ``` QTableView* self, int column ```
void q_tableview_hide_column(void* self, int column) {
    QTableView_HideColumn((QTableView*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#showRow)
///
/// ``` QTableView* self, int row ```
void q_tableview_show_row(void* self, int row) {
    QTableView_ShowRow((QTableView*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#showColumn)
///
/// ``` QTableView* self, int column ```
void q_tableview_show_column(void* self, int column) {
    QTableView_ShowColumn((QTableView*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#resizeRowToContents)
///
/// ``` QTableView* self, int row ```
void q_tableview_resize_row_to_contents(void* self, int row) {
    QTableView_ResizeRowToContents((QTableView*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#resizeRowsToContents)
///
/// ``` QTableView* self ```
void q_tableview_resize_rows_to_contents(void* self) {
    QTableView_ResizeRowsToContents((QTableView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#resizeColumnToContents)
///
/// ``` QTableView* self, int column ```
void q_tableview_resize_column_to_contents(void* self, int column) {
    QTableView_ResizeColumnToContents((QTableView*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#resizeColumnsToContents)
///
/// ``` QTableView* self ```
void q_tableview_resize_columns_to_contents(void* self) {
    QTableView_ResizeColumnsToContents((QTableView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sortByColumn)
///
/// ``` QTableView* self, int column, enum Qt__SortOrder order ```
void q_tableview_sort_by_column(void* self, int column, int64_t order) {
    QTableView_SortByColumn((QTableView*)self, column, order);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setShowGrid)
///
/// ``` QTableView* self, bool show ```
void q_tableview_set_show_grid(void* self, bool show) {
    QTableView_SetShowGrid((QTableView*)self, show);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowMoved)
///
/// ``` QTableView* self, int row, int oldIndex, int newIndex ```
void q_tableview_row_moved(void* self, int row, int oldIndex, int newIndex) {
    QTableView_RowMoved((QTableView*)self, row, oldIndex, newIndex);
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, int, int, int) ```
void q_tableview_on_row_moved(void* self, void (*slot)(void*, int, int, int)) {
    QTableView_OnRowMoved((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self, int row, int oldIndex, int newIndex ```
void q_tableview_qbase_row_moved(void* self, int row, int oldIndex, int newIndex) {
    QTableView_QBaseRowMoved((QTableView*)self, row, oldIndex, newIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnMoved)
///
/// ``` QTableView* self, int column, int oldIndex, int newIndex ```
void q_tableview_column_moved(void* self, int column, int oldIndex, int newIndex) {
    QTableView_ColumnMoved((QTableView*)self, column, oldIndex, newIndex);
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, int, int, int) ```
void q_tableview_on_column_moved(void* self, void (*slot)(void*, int, int, int)) {
    QTableView_OnColumnMoved((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self, int column, int oldIndex, int newIndex ```
void q_tableview_qbase_column_moved(void* self, int column, int oldIndex, int newIndex) {
    QTableView_QBaseColumnMoved((QTableView*)self, column, oldIndex, newIndex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowResized)
///
/// ``` QTableView* self, int row, int oldHeight, int newHeight ```
void q_tableview_row_resized(void* self, int row, int oldHeight, int newHeight) {
    QTableView_RowResized((QTableView*)self, row, oldHeight, newHeight);
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, int, int, int) ```
void q_tableview_on_row_resized(void* self, void (*slot)(void*, int, int, int)) {
    QTableView_OnRowResized((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self, int row, int oldHeight, int newHeight ```
void q_tableview_qbase_row_resized(void* self, int row, int oldHeight, int newHeight) {
    QTableView_QBaseRowResized((QTableView*)self, row, oldHeight, newHeight);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnResized)
///
/// ``` QTableView* self, int column, int oldWidth, int newWidth ```
void q_tableview_column_resized(void* self, int column, int oldWidth, int newWidth) {
    QTableView_ColumnResized((QTableView*)self, column, oldWidth, newWidth);
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, int, int, int) ```
void q_tableview_on_column_resized(void* self, void (*slot)(void*, int, int, int)) {
    QTableView_OnColumnResized((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self, int column, int oldWidth, int newWidth ```
void q_tableview_qbase_column_resized(void* self, int column, int oldWidth, int newWidth) {
    QTableView_QBaseColumnResized((QTableView*)self, column, oldWidth, newWidth);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowCountChanged)
///
/// ``` QTableView* self, int oldCount, int newCount ```
void q_tableview_row_count_changed(void* self, int oldCount, int newCount) {
    QTableView_RowCountChanged((QTableView*)self, oldCount, newCount);
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, int, int) ```
void q_tableview_on_row_count_changed(void* self, void (*slot)(void*, int, int)) {
    QTableView_OnRowCountChanged((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self, int oldCount, int newCount ```
void q_tableview_qbase_row_count_changed(void* self, int oldCount, int newCount) {
    QTableView_QBaseRowCountChanged((QTableView*)self, oldCount, newCount);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnCountChanged)
///
/// ``` QTableView* self, int oldCount, int newCount ```
void q_tableview_column_count_changed(void* self, int oldCount, int newCount) {
    QTableView_ColumnCountChanged((QTableView*)self, oldCount, newCount);
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, int, int) ```
void q_tableview_on_column_count_changed(void* self, void (*slot)(void*, int, int)) {
    QTableView_OnColumnCountChanged((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self, int oldCount, int newCount ```
void q_tableview_qbase_column_count_changed(void* self, int oldCount, int newCount) {
    QTableView_QBaseColumnCountChanged((QTableView*)self, oldCount, newCount);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#scrollContentsBy)
///
/// ``` QTableView* self, int dx, int dy ```
void q_tableview_scroll_contents_by(void* self, int dx, int dy) {
    QTableView_ScrollContentsBy((QTableView*)self, dx, dy);
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, int, int) ```
void q_tableview_on_scroll_contents_by(void* self, void (*slot)(void*, int, int)) {
    QTableView_OnScrollContentsBy((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self, int dx, int dy ```
void q_tableview_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QTableView_QBaseScrollContentsBy((QTableView*)self, dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#initViewItemOption)
///
/// ``` QTableView* self, QStyleOptionViewItem* option ```
void q_tableview_init_view_item_option(void* self, void* option) {
    QTableView_InitViewItemOption((QTableView*)self, (QStyleOptionViewItem*)option);
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QStyleOptionViewItem*) ```
void q_tableview_on_init_view_item_option(void* self, void (*slot)(void*, void*)) {
    QTableView_OnInitViewItemOption((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self, QStyleOptionViewItem* option ```
void q_tableview_qbase_init_view_item_option(void* self, void* option) {
    QTableView_QBaseInitViewItemOption((QTableView*)self, (QStyleOptionViewItem*)option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#paintEvent)
///
/// ``` QTableView* self, QPaintEvent* e ```
void q_tableview_paint_event(void* self, void* e) {
    QTableView_PaintEvent((QTableView*)self, (QPaintEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QPaintEvent*) ```
void q_tableview_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnPaintEvent((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self, QPaintEvent* e ```
void q_tableview_qbase_paint_event(void* self, void* e) {
    QTableView_QBasePaintEvent((QTableView*)self, (QPaintEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#timerEvent)
///
/// ``` QTableView* self, QTimerEvent* event ```
void q_tableview_timer_event(void* self, void* event) {
    QTableView_TimerEvent((QTableView*)self, (QTimerEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QTimerEvent*) ```
void q_tableview_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnTimerEvent((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self, QTimerEvent* event ```
void q_tableview_qbase_timer_event(void* self, void* event) {
    QTableView_QBaseTimerEvent((QTableView*)self, (QTimerEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalOffset)
///
/// ``` QTableView* self ```
int32_t q_tableview_horizontal_offset(void* self) {
    return QTableView_HorizontalOffset((QTableView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, int32_t (*slot)() ```
void q_tableview_on_horizontal_offset(void* self, int32_t (*slot)()) {
    QTableView_OnHorizontalOffset((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self ```
int32_t q_tableview_qbase_horizontal_offset(void* self) {
    return QTableView_QBaseHorizontalOffset((QTableView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalOffset)
///
/// ``` QTableView* self ```
int32_t q_tableview_vertical_offset(void* self) {
    return QTableView_VerticalOffset((QTableView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, int32_t (*slot)() ```
void q_tableview_on_vertical_offset(void* self, int32_t (*slot)()) {
    QTableView_OnVerticalOffset((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self ```
int32_t q_tableview_qbase_vertical_offset(void* self) {
    return QTableView_QBaseVerticalOffset((QTableView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#moveCursor)
///
/// ``` QTableView* self, enum QAbstractItemView__CursorAction cursorAction, int modifiers ```
QModelIndex* q_tableview_move_cursor(void* self, int64_t cursorAction, int64_t modifiers) {
    return QTableView_MoveCursor((QTableView*)self, cursorAction, modifiers);
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, QModelIndex* (*slot)(QTableView*, enum QAbstractItemView__CursorAction, int) ```
void q_tableview_on_move_cursor(void* self, QModelIndex* (*slot)(void*, int64_t, int64_t)) {
    QTableView_OnMoveCursor((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self, enum QAbstractItemView__CursorAction cursorAction, int modifiers ```
QModelIndex* q_tableview_qbase_move_cursor(void* self, int64_t cursorAction, int64_t modifiers) {
    return QTableView_QBaseMoveCursor((QTableView*)self, cursorAction, modifiers);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSelection)
///
/// ``` QTableView* self, QRect* rect, int command ```
void q_tableview_set_selection(void* self, void* rect, int64_t command) {
    QTableView_SetSelection((QTableView*)self, (QRect*)rect, command);
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QRect*, int) ```
void q_tableview_on_set_selection(void* self, void (*slot)(void*, void*, int64_t)) {
    QTableView_OnSetSelection((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self, QRect* rect, int command ```
void q_tableview_qbase_set_selection(void* self, void* rect, int64_t command) {
    QTableView_QBaseSetSelection((QTableView*)self, (QRect*)rect, command);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#visualRegionForSelection)
///
/// ``` QTableView* self, QItemSelection* selection ```
QRegion* q_tableview_visual_region_for_selection(void* self, void* selection) {
    return QTableView_VisualRegionForSelection((QTableView*)self, (QItemSelection*)selection);
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, QRegion* (*slot)(QTableView*, QItemSelection*) ```
void q_tableview_on_visual_region_for_selection(void* self, QRegion* (*slot)(void*, void*)) {
    QTableView_OnVisualRegionForSelection((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self, QItemSelection* selection ```
QRegion* q_tableview_qbase_visual_region_for_selection(void* self, void* selection) {
    return QTableView_QBaseVisualRegionForSelection((QTableView*)self, (QItemSelection*)selection);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectedIndexes)
///
/// ``` QTableView* self ```
libqt_list /* of QModelIndex* */ q_tableview_selected_indexes(void* self) {
    libqt_list _arr = QTableView_SelectedIndexes((QTableView*)self);
    return _arr;
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_tableview_on_selected_indexes(void* self, libqt_list /* of QModelIndex* */ (*slot)()) {
    QTableView_OnSelectedIndexes((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self ```
libqt_list /* of QModelIndex* */ q_tableview_qbase_selected_indexes(void* self) {
    libqt_list _arr = QTableView_QBaseSelectedIndexes((QTableView*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#updateGeometries)
///
/// ``` QTableView* self ```
void q_tableview_update_geometries(void* self) {
    QTableView_UpdateGeometries((QTableView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)() ```
void q_tableview_on_update_geometries(void* self, void (*slot)()) {
    QTableView_OnUpdateGeometries((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self ```
void q_tableview_qbase_update_geometries(void* self) {
    QTableView_QBaseUpdateGeometries((QTableView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#viewportSizeHint)
///
/// ``` QTableView* self ```
QSize* q_tableview_viewport_size_hint(void* self) {
    return QTableView_ViewportSizeHint((QTableView*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, QSize* (*slot)() ```
void q_tableview_on_viewport_size_hint(void* self, QSize* (*slot)()) {
    QTableView_OnViewportSizeHint((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self ```
QSize* q_tableview_qbase_viewport_size_hint(void* self) {
    return QTableView_QBaseViewportSizeHint((QTableView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sizeHintForRow)
///
/// ``` QTableView* self, int row ```
int32_t q_tableview_size_hint_for_row(void* self, int row) {
    return QTableView_SizeHintForRow((QTableView*)self, row);
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, int32_t (*slot)(QTableView*, int) ```
void q_tableview_on_size_hint_for_row(void* self, int32_t (*slot)(void*, int)) {
    QTableView_OnSizeHintForRow((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self, int row ```
int32_t q_tableview_qbase_size_hint_for_row(void* self, int row) {
    return QTableView_QBaseSizeHintForRow((QTableView*)self, row);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sizeHintForColumn)
///
/// ``` QTableView* self, int column ```
int32_t q_tableview_size_hint_for_column(void* self, int column) {
    return QTableView_SizeHintForColumn((QTableView*)self, column);
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, int32_t (*slot)(QTableView*, int) ```
void q_tableview_on_size_hint_for_column(void* self, int32_t (*slot)(void*, int)) {
    QTableView_OnSizeHintForColumn((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self, int column ```
int32_t q_tableview_qbase_size_hint_for_column(void* self, int column) {
    return QTableView_QBaseSizeHintForColumn((QTableView*)self, column);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalScrollbarAction)
///
/// ``` QTableView* self, int action ```
void q_tableview_vertical_scrollbar_action(void* self, int action) {
    QTableView_VerticalScrollbarAction((QTableView*)self, action);
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, int) ```
void q_tableview_on_vertical_scrollbar_action(void* self, void (*slot)(void*, int)) {
    QTableView_OnVerticalScrollbarAction((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self, int action ```
void q_tableview_qbase_vertical_scrollbar_action(void* self, int action) {
    QTableView_QBaseVerticalScrollbarAction((QTableView*)self, action);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalScrollbarAction)
///
/// ``` QTableView* self, int action ```
void q_tableview_horizontal_scrollbar_action(void* self, int action) {
    QTableView_HorizontalScrollbarAction((QTableView*)self, action);
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, int) ```
void q_tableview_on_horizontal_scrollbar_action(void* self, void (*slot)(void*, int)) {
    QTableView_OnHorizontalScrollbarAction((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self, int action ```
void q_tableview_qbase_horizontal_scrollbar_action(void* self, int action) {
    QTableView_QBaseHorizontalScrollbarAction((QTableView*)self, action);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isIndexHidden)
///
/// ``` QTableView* self, QModelIndex* index ```
bool q_tableview_is_index_hidden(void* self, void* index) {
    return QTableView_IsIndexHidden((QTableView*)self, (QModelIndex*)index);
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, bool (*slot)(QTableView*, QModelIndex*) ```
void q_tableview_on_is_index_hidden(void* self, bool (*slot)(void*, void*)) {
    QTableView_OnIsIndexHidden((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self, QModelIndex* index ```
bool q_tableview_qbase_is_index_hidden(void* self, void* index) {
    return QTableView_QBaseIsIndexHidden((QTableView*)self, (QModelIndex*)index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectionChanged)
///
/// ``` QTableView* self, QItemSelection* selected, QItemSelection* deselected ```
void q_tableview_selection_changed(void* self, void* selected, void* deselected) {
    QTableView_SelectionChanged((QTableView*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QItemSelection*, QItemSelection*) ```
void q_tableview_on_selection_changed(void* self, void (*slot)(void*, void*, void*)) {
    QTableView_OnSelectionChanged((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self, QItemSelection* selected, QItemSelection* deselected ```
void q_tableview_qbase_selection_changed(void* self, void* selected, void* deselected) {
    QTableView_QBaseSelectionChanged((QTableView*)self, (QItemSelection*)selected, (QItemSelection*)deselected);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#currentChanged)
///
/// ``` QTableView* self, QModelIndex* current, QModelIndex* previous ```
void q_tableview_current_changed(void* self, void* current, void* previous) {
    QTableView_CurrentChanged((QTableView*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QModelIndex*, QModelIndex*) ```
void q_tableview_on_current_changed(void* self, void (*slot)(void*, void*, void*)) {
    QTableView_OnCurrentChanged((QTableView*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTableView* self, QModelIndex* current, QModelIndex* previous ```
void q_tableview_qbase_current_changed(void* self, void* current, void* previous) {
    QTableView_QBaseCurrentChanged((QTableView*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_tableview_tr2(const char* s, const char* c) {
    libqt_string _str = QTableView_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_tableview_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QTableView_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#model)
///
/// ``` QTableView* self ```
QAbstractItemModel* q_tableview_model(void* self) {
    return QAbstractItemView_Model((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
///
/// ``` QTableView* self ```
QItemSelectionModel* q_tableview_selection_model(void* self) {
    return QAbstractItemView_SelectionModel((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
///
/// ``` QTableView* self, QAbstractItemDelegate* delegate ```
void q_tableview_set_item_delegate(void* self, void* delegate) {
    QAbstractItemView_SetItemDelegate((QAbstractItemView*)self, (QAbstractItemDelegate*)delegate);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QTableView* self ```
QAbstractItemDelegate* q_tableview_item_delegate(void* self) {
    return QAbstractItemView_ItemDelegate((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
///
/// ``` QTableView* self, enum QAbstractItemView__SelectionMode mode ```
void q_tableview_set_selection_mode(void* self, int64_t mode) {
    QAbstractItemView_SetSelectionMode((QAbstractItemView*)self, mode);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
///
/// ``` QTableView* self ```
int64_t q_tableview_selection_mode(void* self) {
    return QAbstractItemView_SelectionMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
///
/// ``` QTableView* self, enum QAbstractItemView__SelectionBehavior behavior ```
void q_tableview_set_selection_behavior(void* self, int64_t behavior) {
    QAbstractItemView_SetSelectionBehavior((QAbstractItemView*)self, behavior);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
///
/// ``` QTableView* self ```
int64_t q_tableview_selection_behavior(void* self) {
    return QAbstractItemView_SelectionBehavior((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
///
/// ``` QTableView* self ```
QModelIndex* q_tableview_current_index(void* self) {
    return QAbstractItemView_CurrentIndex((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
///
/// ``` QTableView* self ```
QModelIndex* q_tableview_root_index(void* self) {
    return QAbstractItemView_RootIndex((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
///
/// ``` QTableView* self, int triggers ```
void q_tableview_set_edit_triggers(void* self, int64_t triggers) {
    QAbstractItemView_SetEditTriggers((QAbstractItemView*)self, triggers);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
///
/// ``` QTableView* self ```
int64_t q_tableview_edit_triggers(void* self) {
    return QAbstractItemView_EditTriggers((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
///
/// ``` QTableView* self, enum QAbstractItemView__ScrollMode mode ```
void q_tableview_set_vertical_scroll_mode(void* self, int64_t mode) {
    QAbstractItemView_SetVerticalScrollMode((QAbstractItemView*)self, mode);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
///
/// ``` QTableView* self ```
int64_t q_tableview_vertical_scroll_mode(void* self) {
    return QAbstractItemView_VerticalScrollMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
///
/// ``` QTableView* self ```
void q_tableview_reset_vertical_scroll_mode(void* self) {
    QAbstractItemView_ResetVerticalScrollMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
///
/// ``` QTableView* self, enum QAbstractItemView__ScrollMode mode ```
void q_tableview_set_horizontal_scroll_mode(void* self, int64_t mode) {
    QAbstractItemView_SetHorizontalScrollMode((QAbstractItemView*)self, mode);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
///
/// ``` QTableView* self ```
int64_t q_tableview_horizontal_scroll_mode(void* self) {
    return QAbstractItemView_HorizontalScrollMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
///
/// ``` QTableView* self ```
void q_tableview_reset_horizontal_scroll_mode(void* self) {
    QAbstractItemView_ResetHorizontalScrollMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
///
/// ``` QTableView* self, bool enable ```
void q_tableview_set_auto_scroll(void* self, bool enable) {
    QAbstractItemView_SetAutoScroll((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
///
/// ``` QTableView* self ```
bool q_tableview_has_auto_scroll(void* self) {
    return QAbstractItemView_HasAutoScroll((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
///
/// ``` QTableView* self, int margin ```
void q_tableview_set_auto_scroll_margin(void* self, int margin) {
    QAbstractItemView_SetAutoScrollMargin((QAbstractItemView*)self, margin);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
///
/// ``` QTableView* self ```
int32_t q_tableview_auto_scroll_margin(void* self) {
    return QAbstractItemView_AutoScrollMargin((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
///
/// ``` QTableView* self, bool enable ```
void q_tableview_set_tab_key_navigation(void* self, bool enable) {
    QAbstractItemView_SetTabKeyNavigation((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
///
/// ``` QTableView* self ```
bool q_tableview_tab_key_navigation(void* self) {
    return QAbstractItemView_TabKeyNavigation((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
///
/// ``` QTableView* self, bool enable ```
void q_tableview_set_drop_indicator_shown(void* self, bool enable) {
    QAbstractItemView_SetDropIndicatorShown((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
///
/// ``` QTableView* self ```
bool q_tableview_show_drop_indicator(void* self) {
    return QAbstractItemView_ShowDropIndicator((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
///
/// ``` QTableView* self, bool enable ```
void q_tableview_set_drag_enabled(void* self, bool enable) {
    QAbstractItemView_SetDragEnabled((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
///
/// ``` QTableView* self ```
bool q_tableview_drag_enabled(void* self) {
    return QAbstractItemView_DragEnabled((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
///
/// ``` QTableView* self, bool overwrite ```
void q_tableview_set_drag_drop_overwrite_mode(void* self, bool overwrite) {
    QAbstractItemView_SetDragDropOverwriteMode((QAbstractItemView*)self, overwrite);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
///
/// ``` QTableView* self ```
bool q_tableview_drag_drop_overwrite_mode(void* self) {
    return QAbstractItemView_DragDropOverwriteMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
///
/// ``` QTableView* self, enum QAbstractItemView__DragDropMode behavior ```
void q_tableview_set_drag_drop_mode(void* self, int64_t behavior) {
    QAbstractItemView_SetDragDropMode((QAbstractItemView*)self, behavior);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
///
/// ``` QTableView* self ```
int64_t q_tableview_drag_drop_mode(void* self) {
    return QAbstractItemView_DragDropMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
///
/// ``` QTableView* self, enum Qt__DropAction dropAction ```
void q_tableview_set_default_drop_action(void* self, int64_t dropAction) {
    QAbstractItemView_SetDefaultDropAction((QAbstractItemView*)self, dropAction);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
///
/// ``` QTableView* self ```
int64_t q_tableview_default_drop_action(void* self) {
    return QAbstractItemView_DefaultDropAction((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
///
/// ``` QTableView* self, bool enable ```
void q_tableview_set_alternating_row_colors(void* self, bool enable) {
    QAbstractItemView_SetAlternatingRowColors((QAbstractItemView*)self, enable);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
///
/// ``` QTableView* self ```
bool q_tableview_alternating_row_colors(void* self) {
    return QAbstractItemView_AlternatingRowColors((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
///
/// ``` QTableView* self, QSize* size ```
void q_tableview_set_icon_size(void* self, void* size) {
    QAbstractItemView_SetIconSize((QAbstractItemView*)self, (QSize*)size);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
///
/// ``` QTableView* self ```
QSize* q_tableview_icon_size(void* self) {
    return QAbstractItemView_IconSize((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
///
/// ``` QTableView* self, enum Qt__TextElideMode mode ```
void q_tableview_set_text_elide_mode(void* self, int64_t mode) {
    QAbstractItemView_SetTextElideMode((QAbstractItemView*)self, mode);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
///
/// ``` QTableView* self ```
int64_t q_tableview_text_elide_mode(void* self) {
    return QAbstractItemView_TextElideMode((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
///
/// ``` QTableView* self, QModelIndex* index ```
QSize* q_tableview_size_hint_for_index(void* self, void* index) {
    return QAbstractItemView_SizeHintForIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#openPersistentEditor)
///
/// ``` QTableView* self, QModelIndex* index ```
void q_tableview_open_persistent_editor(void* self, void* index) {
    QAbstractItemView_OpenPersistentEditor((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closePersistentEditor)
///
/// ``` QTableView* self, QModelIndex* index ```
void q_tableview_close_persistent_editor(void* self, void* index) {
    QAbstractItemView_ClosePersistentEditor((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#isPersistentEditorOpen)
///
/// ``` QTableView* self, QModelIndex* index ```
bool q_tableview_is_persistent_editor_open(void* self, void* index) {
    return QAbstractItemView_IsPersistentEditorOpen((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
///
/// ``` QTableView* self, QModelIndex* index, QWidget* widget ```
void q_tableview_set_index_widget(void* self, void* index, void* widget) {
    QAbstractItemView_SetIndexWidget((QAbstractItemView*)self, (QModelIndex*)index, (QWidget*)widget);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
///
/// ``` QTableView* self, QModelIndex* index ```
QWidget* q_tableview_index_widget(void* self, void* index) {
    return QAbstractItemView_IndexWidget((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
///
/// ``` QTableView* self, int row, QAbstractItemDelegate* delegate ```
void q_tableview_set_item_delegate_for_row(void* self, int row, void* delegate) {
    QAbstractItemView_SetItemDelegateForRow((QAbstractItemView*)self, row, (QAbstractItemDelegate*)delegate);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
///
/// ``` QTableView* self, int row ```
QAbstractItemDelegate* q_tableview_item_delegate_for_row(void* self, int row) {
    return QAbstractItemView_ItemDelegateForRow((QAbstractItemView*)self, row);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
///
/// ``` QTableView* self, int column, QAbstractItemDelegate* delegate ```
void q_tableview_set_item_delegate_for_column(void* self, int column, void* delegate) {
    QAbstractItemView_SetItemDelegateForColumn((QAbstractItemView*)self, column, (QAbstractItemDelegate*)delegate);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
///
/// ``` QTableView* self, int column ```
QAbstractItemDelegate* q_tableview_item_delegate_for_column(void* self, int column) {
    return QAbstractItemView_ItemDelegateForColumn((QAbstractItemView*)self, column);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QTableView* self, QModelIndex* index ```
QAbstractItemDelegate* q_tableview_item_delegate_with_index(void* self, void* index) {
    return QAbstractItemView_ItemDelegateWithIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// ``` QTableView* self, QModelIndex* index ```
void q_tableview_edit(void* self, void* index) {
    QAbstractItemView_Edit((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
///
/// ``` QTableView* self ```
void q_tableview_clear_selection(void* self) {
    QAbstractItemView_ClearSelection((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
///
/// ``` QTableView* self, QModelIndex* index ```
void q_tableview_set_current_index(void* self, void* index) {
    QAbstractItemView_SetCurrentIndex((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
///
/// ``` QTableView* self ```
void q_tableview_scroll_to_top(void* self) {
    QAbstractItemView_ScrollToTop((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
///
/// ``` QTableView* self ```
void q_tableview_scroll_to_bottom(void* self) {
    QAbstractItemView_ScrollToBottom((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#update)
///
/// ``` QTableView* self, QModelIndex* index ```
void q_tableview_update(void* self, void* index) {
    QAbstractItemView_Update((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// ``` QTableView* self, QModelIndex* index ```
void q_tableview_pressed(void* self, void* index) {
    QAbstractItemView_Pressed((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QTableView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_tableview_on_pressed(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Pressed((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// ``` QTableView* self, QModelIndex* index ```
void q_tableview_clicked(void* self, void* index) {
    QAbstractItemView_Clicked((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QTableView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_tableview_on_clicked(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Clicked((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// ``` QTableView* self, QModelIndex* index ```
void q_tableview_double_clicked(void* self, void* index) {
    QAbstractItemView_DoubleClicked((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QTableView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_tableview_on_double_clicked(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_DoubleClicked((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// ``` QTableView* self, QModelIndex* index ```
void q_tableview_activated(void* self, void* index) {
    QAbstractItemView_Activated((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QTableView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_tableview_on_activated(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Activated((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// ``` QTableView* self, QModelIndex* index ```
void q_tableview_entered(void* self, void* index) {
    QAbstractItemView_Entered((QAbstractItemView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// ``` QTableView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_tableview_on_entered(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_Entered((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// ``` QTableView* self ```
void q_tableview_viewport_entered(void* self) {
    QAbstractItemView_ViewportEntered((QAbstractItemView*)self);
}

/// Inherited from QAbstractItemView
///
/// ``` QTableView* self, void (*slot)(QAbstractItemView*) ```
void q_tableview_on_viewport_entered(void* self, void (*slot)(void*)) {
    QAbstractItemView_Connect_ViewportEntered((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// ``` QTableView* self, QSize* size ```
void q_tableview_icon_size_changed(void* self, void* size) {
    QAbstractItemView_IconSizeChanged((QAbstractItemView*)self, (QSize*)size);
}

/// Inherited from QAbstractItemView
///
/// ``` QTableView* self, void (*slot)(QAbstractItemView*, QSize*) ```
void q_tableview_on_icon_size_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractItemView_Connect_IconSizeChanged((QAbstractItemView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// ``` QTableView* self ```
int64_t q_tableview_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// ``` QTableView* self, enum Qt__ScrollBarPolicy verticalScrollBarPolicy ```
void q_tableview_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// ``` QTableView* self ```
QScrollBar* q_tableview_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// ``` QTableView* self, QScrollBar* scrollbar ```
void q_tableview_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// ``` QTableView* self ```
int64_t q_tableview_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// ``` QTableView* self, enum Qt__ScrollBarPolicy horizontalScrollBarPolicy ```
void q_tableview_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// ``` QTableView* self ```
QScrollBar* q_tableview_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// ``` QTableView* self, QScrollBar* scrollbar ```
void q_tableview_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// ``` QTableView* self ```
QWidget* q_tableview_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// ``` QTableView* self, QWidget* widget ```
void q_tableview_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// ``` QTableView* self, QWidget* widget, int alignment ```
void q_tableview_add_scroll_bar_widget(void* self, void* widget, int64_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// ``` QTableView* self, int alignment ```
libqt_list /* of QWidget* */ q_tableview_scroll_bar_widgets(void* self, int64_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// ``` QTableView* self ```
QWidget* q_tableview_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// ``` QTableView* self, QWidget* widget ```
void q_tableview_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// ``` QTableView* self ```
QSize* q_tableview_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// ``` QTableView* self ```
int64_t q_tableview_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// ``` QTableView* self, enum QAbstractScrollArea__SizeAdjustPolicy policy ```
void q_tableview_set_size_adjust_policy(void* self, int64_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QTableView* self ```
int32_t q_tableview_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QTableView* self, int frameStyle ```
void q_tableview_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QTableView* self ```
int32_t q_tableview_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QTableView* self ```
int64_t q_tableview_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QTableView* self, enum QFrame__Shape frameShape ```
void q_tableview_set_frame_shape(void* self, int64_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QTableView* self ```
int64_t q_tableview_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QTableView* self, enum QFrame__Shadow frameShadow ```
void q_tableview_set_frame_shadow(void* self, int64_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QTableView* self ```
int32_t q_tableview_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QTableView* self, int lineWidth ```
void q_tableview_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QTableView* self ```
int32_t q_tableview_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QTableView* self, int midLineWidth ```
void q_tableview_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QTableView* self ```
QRect* q_tableview_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QTableView* self, QRect* frameRect ```
void q_tableview_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QTableView* self ```
uintptr_t q_tableview_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QTableView* self ```
void q_tableview_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QTableView* self ```
uintptr_t q_tableview_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QTableView* self ```
uintptr_t q_tableview_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QTableView* self ```
QStyle* q_tableview_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QTableView* self, QStyle* style ```
void q_tableview_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QTableView* self ```
bool q_tableview_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QTableView* self ```
bool q_tableview_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QTableView* self ```
bool q_tableview_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QTableView* self ```
int64_t q_tableview_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QTableView* self, enum Qt__WindowModality windowModality ```
void q_tableview_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QTableView* self ```
bool q_tableview_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QTableView* self, QWidget* param1 ```
bool q_tableview_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QTableView* self, bool enabled ```
void q_tableview_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QTableView* self, bool disabled ```
void q_tableview_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QTableView* self, bool windowModified ```
void q_tableview_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QTableView* self ```
QRect* q_tableview_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QTableView* self ```
QRect* q_tableview_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QTableView* self ```
QRect* q_tableview_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QTableView* self ```
int32_t q_tableview_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QTableView* self ```
int32_t q_tableview_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QTableView* self ```
QPoint* q_tableview_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QTableView* self ```
QSize* q_tableview_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QTableView* self ```
QSize* q_tableview_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QTableView* self ```
int32_t q_tableview_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QTableView* self ```
int32_t q_tableview_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QTableView* self ```
QRect* q_tableview_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QTableView* self ```
QRect* q_tableview_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QTableView* self ```
QRegion* q_tableview_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QTableView* self ```
QSize* q_tableview_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QTableView* self ```
QSize* q_tableview_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QTableView* self ```
int32_t q_tableview_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QTableView* self ```
int32_t q_tableview_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QTableView* self ```
int32_t q_tableview_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QTableView* self ```
int32_t q_tableview_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QTableView* self, QSize* minimumSize ```
void q_tableview_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QTableView* self, int minw, int minh ```
void q_tableview_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QTableView* self, QSize* maximumSize ```
void q_tableview_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QTableView* self, int maxw, int maxh ```
void q_tableview_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QTableView* self, int minw ```
void q_tableview_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QTableView* self, int minh ```
void q_tableview_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QTableView* self, int maxw ```
void q_tableview_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QTableView* self, int maxh ```
void q_tableview_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QTableView* self ```
QSize* q_tableview_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QTableView* self, QSize* sizeIncrement ```
void q_tableview_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QTableView* self, int w, int h ```
void q_tableview_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QTableView* self ```
QSize* q_tableview_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QTableView* self, QSize* baseSize ```
void q_tableview_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QTableView* self, int basew, int baseh ```
void q_tableview_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QTableView* self, QSize* fixedSize ```
void q_tableview_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QTableView* self, int w, int h ```
void q_tableview_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QTableView* self, int w ```
void q_tableview_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QTableView* self, int h ```
void q_tableview_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QTableView* self, QPointF* param1 ```
QPointF* q_tableview_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QTableView* self, QPoint* param1 ```
QPoint* q_tableview_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QTableView* self, QPointF* param1 ```
QPointF* q_tableview_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QTableView* self, QPoint* param1 ```
QPoint* q_tableview_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QTableView* self, QPointF* param1 ```
QPointF* q_tableview_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QTableView* self, QPoint* param1 ```
QPoint* q_tableview_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QTableView* self, QPointF* param1 ```
QPointF* q_tableview_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QTableView* self, QPoint* param1 ```
QPoint* q_tableview_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QTableView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_tableview_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QTableView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_tableview_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QTableView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_tableview_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QTableView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_tableview_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QTableView* self ```
QWidget* q_tableview_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QTableView* self ```
QWidget* q_tableview_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QTableView* self ```
QWidget* q_tableview_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QTableView* self ```
QPalette* q_tableview_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QTableView* self, QPalette* palette ```
void q_tableview_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QTableView* self, enum QPalette__ColorRole backgroundRole ```
void q_tableview_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QTableView* self ```
int64_t q_tableview_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QTableView* self, enum QPalette__ColorRole foregroundRole ```
void q_tableview_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QTableView* self ```
int64_t q_tableview_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QTableView* self ```
QFont* q_tableview_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QTableView* self, QFont* font ```
void q_tableview_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QTableView* self ```
QFontMetrics* q_tableview_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QTableView* self ```
QFontInfo* q_tableview_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QTableView* self ```
QCursor* q_tableview_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QTableView* self, QCursor* cursor ```
void q_tableview_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QTableView* self ```
void q_tableview_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QTableView* self, bool enable ```
void q_tableview_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QTableView* self ```
bool q_tableview_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QTableView* self ```
bool q_tableview_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QTableView* self, bool enable ```
void q_tableview_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QTableView* self ```
bool q_tableview_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QTableView* self, QBitmap* mask ```
void q_tableview_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QTableView* self, QRegion* mask ```
void q_tableview_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QTableView* self ```
QRegion* q_tableview_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QTableView* self ```
void q_tableview_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTableView* self, QPaintDevice* target ```
void q_tableview_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTableView* self, QPainter* painter ```
void q_tableview_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QTableView* self ```
QPixmap* q_tableview_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QTableView* self ```
QGraphicsEffect* q_tableview_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QTableView* self, QGraphicsEffect* effect ```
void q_tableview_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QTableView* self, enum Qt__GestureType typeVal ```
void q_tableview_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QTableView* self, enum Qt__GestureType typeVal ```
void q_tableview_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QTableView* self, const char* windowTitle ```
void q_tableview_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QTableView* self, const char* styleSheet ```
void q_tableview_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QTableView* self ```
const char* q_tableview_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QTableView* self ```
const char* q_tableview_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QTableView* self, QIcon* icon ```
void q_tableview_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QTableView* self ```
QIcon* q_tableview_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QTableView* self, const char* windowIconText ```
void q_tableview_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QTableView* self ```
const char* q_tableview_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QTableView* self, const char* windowRole ```
void q_tableview_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QTableView* self ```
const char* q_tableview_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QTableView* self, const char* filePath ```
void q_tableview_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QTableView* self ```
const char* q_tableview_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QTableView* self, double level ```
void q_tableview_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QTableView* self ```
double q_tableview_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QTableView* self ```
bool q_tableview_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QTableView* self, const char* toolTip ```
void q_tableview_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QTableView* self ```
const char* q_tableview_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QTableView* self, int msec ```
void q_tableview_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QTableView* self ```
int32_t q_tableview_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QTableView* self, const char* statusTip ```
void q_tableview_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QTableView* self ```
const char* q_tableview_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QTableView* self, const char* whatsThis ```
void q_tableview_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QTableView* self ```
const char* q_tableview_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QTableView* self ```
const char* q_tableview_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QTableView* self, const char* name ```
void q_tableview_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QTableView* self ```
const char* q_tableview_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QTableView* self, const char* description ```
void q_tableview_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QTableView* self, enum Qt__LayoutDirection direction ```
void q_tableview_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QTableView* self ```
int64_t q_tableview_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QTableView* self ```
void q_tableview_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QTableView* self, QLocale* locale ```
void q_tableview_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QTableView* self ```
QLocale* q_tableview_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QTableView* self ```
void q_tableview_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QTableView* self ```
bool q_tableview_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QTableView* self ```
bool q_tableview_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QTableView* self ```
void q_tableview_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QTableView* self ```
bool q_tableview_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QTableView* self ```
void q_tableview_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QTableView* self ```
void q_tableview_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QTableView* self, enum Qt__FocusReason reason ```
void q_tableview_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QTableView* self ```
int64_t q_tableview_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QTableView* self, enum Qt__FocusPolicy policy ```
void q_tableview_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QTableView* self ```
bool q_tableview_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_tableview_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QTableView* self, QWidget* focusProxy ```
void q_tableview_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QTableView* self ```
QWidget* q_tableview_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QTableView* self ```
int64_t q_tableview_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QTableView* self, enum Qt__ContextMenuPolicy policy ```
void q_tableview_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QTableView* self ```
void q_tableview_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QTableView* self, QCursor* param1 ```
void q_tableview_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QTableView* self ```
void q_tableview_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QTableView* self ```
void q_tableview_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QTableView* self ```
void q_tableview_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QTableView* self, QKeySequence* key ```
int32_t q_tableview_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QTableView* self, int id ```
void q_tableview_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QTableView* self, int id ```
void q_tableview_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QTableView* self, int id ```
void q_tableview_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_tableview_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_tableview_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QTableView* self ```
bool q_tableview_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QTableView* self, bool enable ```
void q_tableview_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QTableView* self ```
QGraphicsProxyWidget* q_tableview_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTableView* self ```
void q_tableview_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTableView* self, int x, int y, int w, int h ```
void q_tableview_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTableView* self, QRect* param1 ```
void q_tableview_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTableView* self, QRegion* param1 ```
void q_tableview_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTableView* self, int x, int y, int w, int h ```
void q_tableview_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTableView* self, QRect* param1 ```
void q_tableview_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTableView* self, QRegion* param1 ```
void q_tableview_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QTableView* self, bool hidden ```
void q_tableview_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QTableView* self ```
void q_tableview_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QTableView* self ```
void q_tableview_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QTableView* self ```
void q_tableview_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QTableView* self ```
void q_tableview_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QTableView* self ```
void q_tableview_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QTableView* self ```
void q_tableview_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QTableView* self ```
bool q_tableview_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QTableView* self ```
void q_tableview_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QTableView* self ```
void q_tableview_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QTableView* self, QWidget* param1 ```
void q_tableview_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QTableView* self, int x, int y ```
void q_tableview_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QTableView* self, QPoint* param1 ```
void q_tableview_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QTableView* self, int w, int h ```
void q_tableview_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QTableView* self, QSize* param1 ```
void q_tableview_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QTableView* self, int x, int y, int w, int h ```
void q_tableview_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QTableView* self, QRect* geometry ```
void q_tableview_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QTableView* self ```
char* q_tableview_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QTableView* self, const char* geometry ```
bool q_tableview_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QTableView* self ```
void q_tableview_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QTableView* self ```
bool q_tableview_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QTableView* self, QWidget* param1 ```
bool q_tableview_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QTableView* self ```
bool q_tableview_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QTableView* self ```
bool q_tableview_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QTableView* self ```
bool q_tableview_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QTableView* self ```
bool q_tableview_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QTableView* self ```
int64_t q_tableview_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QTableView* self, int state ```
void q_tableview_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QTableView* self, int state ```
void q_tableview_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QTableView* self ```
QSizePolicy* q_tableview_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QTableView* self, QSizePolicy* sizePolicy ```
void q_tableview_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QTableView* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_tableview_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QTableView* self ```
QRegion* q_tableview_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QTableView* self, int left, int top, int right, int bottom ```
void q_tableview_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QTableView* self, QMargins* margins ```
void q_tableview_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QTableView* self ```
QMargins* q_tableview_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QTableView* self ```
QRect* q_tableview_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QTableView* self ```
QLayout* q_tableview_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QTableView* self, QLayout* layout ```
void q_tableview_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QTableView* self ```
void q_tableview_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QTableView* self, QWidget* parent ```
void q_tableview_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QTableView* self, QWidget* parent, int f ```
void q_tableview_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QTableView* self, int dx, int dy ```
void q_tableview_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QTableView* self, int dx, int dy, QRect* param3 ```
void q_tableview_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QTableView* self ```
QWidget* q_tableview_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QTableView* self ```
QWidget* q_tableview_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QTableView* self ```
QWidget* q_tableview_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QTableView* self ```
bool q_tableview_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QTableView* self, bool on ```
void q_tableview_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTableView* self, QAction* action ```
void q_tableview_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QTableView* self, QAction* actions[] ```
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

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QTableView* self, QAction* before, QAction* actions[] ```
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

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QTableView* self, QAction* before, QAction* action ```
void q_tableview_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QTableView* self, QAction* action ```
void q_tableview_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QTableView* self ```
libqt_list /* of QAction* */ q_tableview_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTableView* self, const char* text ```
QAction* q_tableview_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTableView* self, QIcon* icon, const char* text ```
QAction* q_tableview_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTableView* self, const char* text, QKeySequence* shortcut ```
QAction* q_tableview_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTableView* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_tableview_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QTableView* self ```
QWidget* q_tableview_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QTableView* self, int typeVal ```
void q_tableview_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QTableView* self ```
int64_t q_tableview_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QTableView* self, enum Qt__WindowType param1 ```
void q_tableview_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QTableView* self, int typeVal ```
void q_tableview_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QTableView* self ```
int64_t q_tableview_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_tableview_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QTableView* self, int x, int y ```
QWidget* q_tableview_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QTableView* self, QPoint* p ```
QWidget* q_tableview_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QTableView* self, enum Qt__WidgetAttribute param1 ```
void q_tableview_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QTableView* self, enum Qt__WidgetAttribute param1 ```
bool q_tableview_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QTableView* self ```
void q_tableview_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QTableView* self, QWidget* child ```
bool q_tableview_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QTableView* self ```
bool q_tableview_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QTableView* self, bool enabled ```
void q_tableview_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QTableView* self ```
QBackingStore* q_tableview_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QTableView* self ```
QWindow* q_tableview_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QTableView* self ```
QScreen* q_tableview_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QTableView* self, QScreen* screen ```
void q_tableview_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_tableview_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QTableView* self, const char* title ```
void q_tableview_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QTableView* self, void (*slot)(QWidget*, const char*) ```
void q_tableview_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QTableView* self, QIcon* icon ```
void q_tableview_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QTableView* self, void (*slot)(QWidget*, QIcon*) ```
void q_tableview_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QTableView* self, const char* iconText ```
void q_tableview_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QTableView* self, void (*slot)(QWidget*, const char*) ```
void q_tableview_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QTableView* self, QPoint* pos ```
void q_tableview_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QTableView* self, void (*slot)(QWidget*, QPoint*) ```
void q_tableview_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QTableView* self ```
int64_t q_tableview_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QTableView* self, int hints ```
void q_tableview_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTableView* self, QPaintDevice* target, QPoint* targetOffset ```
void q_tableview_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTableView* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_tableview_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTableView* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_tableview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTableView* self, QPainter* painter, QPoint* targetOffset ```
void q_tableview_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTableView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_tableview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTableView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_tableview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QTableView* self, QRect* rectangle ```
QPixmap* q_tableview_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QTableView* self, enum Qt__GestureType typeVal, int flags ```
void q_tableview_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QTableView* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_tableview_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QTableView* self, int id, bool enable ```
void q_tableview_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QTableView* self, int id, bool enable ```
void q_tableview_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QTableView* self, enum Qt__WindowType param1, bool on ```
void q_tableview_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QTableView* self, enum Qt__WidgetAttribute param1, bool on ```
void q_tableview_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_tableview_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_tableview_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTableView* self ```
const char* q_tableview_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTableView* self, const char* name ```
void q_tableview_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTableView* self ```
bool q_tableview_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTableView* self ```
bool q_tableview_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTableView* self ```
bool q_tableview_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTableView* self ```
bool q_tableview_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTableView* self, bool b ```
bool q_tableview_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTableView* self ```
QThread* q_tableview_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTableView* self, QThread* thread ```
void q_tableview_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTableView* self, int interval ```
int32_t q_tableview_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTableView* self, int id ```
void q_tableview_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTableView* self ```
libqt_list /* of QObject* */ q_tableview_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTableView* self, QObject* filterObj ```
void q_tableview_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTableView* self, QObject* obj ```
void q_tableview_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_tableview_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTableView* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_tableview_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_tableview_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_tableview_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTableView* self ```
void q_tableview_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTableView* self ```
void q_tableview_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTableView* self, const char* name, QVariant* value ```
bool q_tableview_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTableView* self, const char* name ```
QVariant* q_tableview_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTableView* self ```
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

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTableView* self ```
QBindingStorage* q_tableview_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTableView* self ```
QBindingStorage* q_tableview_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTableView* self ```
void q_tableview_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QTableView* self, void (*slot)(QObject*) ```
void q_tableview_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTableView* self ```
QObject* q_tableview_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTableView* self, const char* classname ```
bool q_tableview_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTableView* self ```
void q_tableview_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTableView* self, int interval, enum Qt__TimerType timerType ```
int32_t q_tableview_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_tableview_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTableView* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_tableview_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTableView* self, QObject* param1 ```
void q_tableview_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QTableView* self, void (*slot)(QObject*, QObject*) ```
void q_tableview_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QTableView* self ```
bool q_tableview_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QTableView* self ```
int32_t q_tableview_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QTableView* self ```
int32_t q_tableview_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QTableView* self ```
int32_t q_tableview_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QTableView* self ```
int32_t q_tableview_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QTableView* self ```
int32_t q_tableview_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QTableView* self ```
int32_t q_tableview_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QTableView* self ```
double q_tableview_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QTableView* self ```
double q_tableview_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QTableView* self ```
int32_t q_tableview_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QTableView* self ```
int32_t q_tableview_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_tableview_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, const char* search ```
void q_tableview_keyboard_search(void* self, const char* search) {
    QTableView_KeyboardSearch((QTableView*)self, qstring(search));
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, const char* search ```
void q_tableview_qbase_keyboard_search(void* self, const char* search) {
    QTableView_QBaseKeyboardSearch((QTableView*)self, qstring(search));
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, const char*) ```
void q_tableview_on_keyboard_search(void* self, void (*slot)(void*, const char*)) {
    QTableView_OnKeyboardSearch((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QModelIndex* index ```
QAbstractItemDelegate* q_tableview_item_delegate_for_index(void* self, void* index) {
    return QTableView_ItemDelegateForIndex((QTableView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QModelIndex* index ```
QAbstractItemDelegate* q_tableview_qbase_item_delegate_for_index(void* self, void* index) {
    return QTableView_QBaseItemDelegateForIndex((QTableView*)self, (QModelIndex*)index);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, QAbstractItemDelegate* (*slot)(QTableView*, QModelIndex*) ```
void q_tableview_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*slot)(void*, void*)) {
    QTableView_OnItemDelegateForIndex((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, enum Qt__InputMethodQuery query ```
QVariant* q_tableview_input_method_query(void* self, int64_t query) {
    return QTableView_InputMethodQuery((QTableView*)self, query);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, enum Qt__InputMethodQuery query ```
QVariant* q_tableview_qbase_input_method_query(void* self, int64_t query) {
    return QTableView_QBaseInputMethodQuery((QTableView*)self, query);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, QVariant* (*slot)(QTableView*, enum Qt__InputMethodQuery) ```
void q_tableview_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QTableView_OnInputMethodQuery((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_reset(void* self) {
    QTableView_Reset((QTableView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_qbase_reset(void* self) {
    QTableView_QBaseReset((QTableView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)() ```
void q_tableview_on_reset(void* self, void (*slot)()) {
    QTableView_OnReset((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_select_all(void* self) {
    QTableView_SelectAll((QTableView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_qbase_select_all(void* self) {
    QTableView_QBaseSelectAll((QTableView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)() ```
void q_tableview_on_select_all(void* self, void (*slot)()) {
    QTableView_OnSelectAll((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
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

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
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

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QModelIndex*, QModelIndex*, int*[]) ```
void q_tableview_on_data_changed(void* self, void (*slot)(void*, void*, void*, int*)) {
    QTableView_OnDataChanged((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsInserted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QModelIndex* parent, int start, int end ```
void q_tableview_rows_inserted(void* self, void* parent, int start, int end) {
    QTableView_RowsInserted((QTableView*)self, (QModelIndex*)parent, start, end);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QModelIndex* parent, int start, int end ```
void q_tableview_qbase_rows_inserted(void* self, void* parent, int start, int end) {
    QTableView_QBaseRowsInserted((QTableView*)self, (QModelIndex*)parent, start, end);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QModelIndex*, int, int) ```
void q_tableview_on_rows_inserted(void* self, void (*slot)(void*, void*, int, int)) {
    QTableView_OnRowsInserted((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QModelIndex* parent, int start, int end ```
void q_tableview_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QTableView_RowsAboutToBeRemoved((QTableView*)self, (QModelIndex*)parent, start, end);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QModelIndex* parent, int start, int end ```
void q_tableview_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end) {
    QTableView_QBaseRowsAboutToBeRemoved((QTableView*)self, (QModelIndex*)parent, start, end);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QModelIndex*, int, int) ```
void q_tableview_on_rows_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int)) {
    QTableView_OnRowsAboutToBeRemoved((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_update_editor_data(void* self) {
    QTableView_UpdateEditorData((QTableView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_qbase_update_editor_data(void* self) {
    QTableView_QBaseUpdateEditorData((QTableView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)() ```
void q_tableview_on_update_editor_data(void* self, void (*slot)()) {
    QTableView_OnUpdateEditorData((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_update_editor_geometries(void* self) {
    QTableView_UpdateEditorGeometries((QTableView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_qbase_update_editor_geometries(void* self) {
    QTableView_QBaseUpdateEditorGeometries((QTableView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)() ```
void q_tableview_on_update_editor_geometries(void* self, void (*slot)()) {
    QTableView_OnUpdateEditorGeometries((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, int value ```
void q_tableview_vertical_scrollbar_value_changed(void* self, int value) {
    QTableView_VerticalScrollbarValueChanged((QTableView*)self, value);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, int value ```
void q_tableview_qbase_vertical_scrollbar_value_changed(void* self, int value) {
    QTableView_QBaseVerticalScrollbarValueChanged((QTableView*)self, value);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, int) ```
void q_tableview_on_vertical_scrollbar_value_changed(void* self, void (*slot)(void*, int)) {
    QTableView_OnVerticalScrollbarValueChanged((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, int value ```
void q_tableview_horizontal_scrollbar_value_changed(void* self, int value) {
    QTableView_HorizontalScrollbarValueChanged((QTableView*)self, value);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, int value ```
void q_tableview_qbase_horizontal_scrollbar_value_changed(void* self, int value) {
    QTableView_QBaseHorizontalScrollbarValueChanged((QTableView*)self, value);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, int) ```
void q_tableview_on_horizontal_scrollbar_value_changed(void* self, void (*slot)(void*, int)) {
    QTableView_OnHorizontalScrollbarValueChanged((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_tableview_close_editor(void* self, void* editor, int64_t hint) {
    QTableView_CloseEditor((QTableView*)self, (QWidget*)editor, hint);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_tableview_qbase_close_editor(void* self, void* editor, int64_t hint) {
    QTableView_QBaseCloseEditor((QTableView*)self, (QWidget*)editor, hint);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QWidget*, enum QAbstractItemDelegate__EndEditHint) ```
void q_tableview_on_close_editor(void* self, void (*slot)(void*, void*, int64_t)) {
    QTableView_OnCloseEditor((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QWidget* editor ```
void q_tableview_commit_data(void* self, void* editor) {
    QTableView_CommitData((QTableView*)self, (QWidget*)editor);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QWidget* editor ```
void q_tableview_qbase_commit_data(void* self, void* editor) {
    QTableView_QBaseCommitData((QTableView*)self, (QWidget*)editor);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QWidget*) ```
void q_tableview_on_commit_data(void* self, void (*slot)(void*, void*)) {
    QTableView_OnCommitData((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QObject* editor ```
void q_tableview_editor_destroyed(void* self, void* editor) {
    QTableView_EditorDestroyed((QTableView*)self, (QObject*)editor);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QObject* editor ```
void q_tableview_qbase_editor_destroyed(void* self, void* editor) {
    QTableView_QBaseEditorDestroyed((QTableView*)self, (QObject*)editor);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QObject*) ```
void q_tableview_on_editor_destroyed(void* self, void (*slot)(void*, void*)) {
    QTableView_OnEditorDestroyed((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_tableview_edit2(void* self, void* index, int64_t trigger, void* event) {
    return QTableView_Edit2((QTableView*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_tableview_qbase_edit2(void* self, void* index, int64_t trigger, void* event) {
    return QTableView_QBaseEdit2((QTableView*)self, (QModelIndex*)index, trigger, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, bool (*slot)(QTableView*, QModelIndex*, enum QAbstractItemView__EditTrigger, QEvent*) ```
void q_tableview_on_edit2(void* self, bool (*slot)(void*, void*, int64_t, void*)) {
    QTableView_OnEdit2((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QModelIndex* index, QEvent* event ```
int64_t q_tableview_selection_command(void* self, void* index, void* event) {
    return QTableView_SelectionCommand((QTableView*)self, (QModelIndex*)index, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QModelIndex* index, QEvent* event ```
int64_t q_tableview_qbase_selection_command(void* self, void* index, void* event) {
    return QTableView_QBaseSelectionCommand((QTableView*)self, (QModelIndex*)index, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, int64_t (*slot)(QTableView*, QModelIndex*, QEvent*) ```
void q_tableview_on_selection_command(void* self, int64_t (*slot)(void*, void*, void*)) {
    QTableView_OnSelectionCommand((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, int supportedActions ```
void q_tableview_start_drag(void* self, int64_t supportedActions) {
    QTableView_StartDrag((QTableView*)self, supportedActions);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, int supportedActions ```
void q_tableview_qbase_start_drag(void* self, int64_t supportedActions) {
    QTableView_QBaseStartDrag((QTableView*)self, supportedActions);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, int) ```
void q_tableview_on_start_drag(void* self, void (*slot)(void*, int64_t)) {
    QTableView_OnStartDrag((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, bool next ```
bool q_tableview_focus_next_prev_child(void* self, bool next) {
    return QTableView_FocusNextPrevChild((QTableView*)self, next);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, bool next ```
bool q_tableview_qbase_focus_next_prev_child(void* self, bool next) {
    return QTableView_QBaseFocusNextPrevChild((QTableView*)self, next);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, bool (*slot)(QTableView*, bool) ```
void q_tableview_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QTableView_OnFocusNextPrevChild((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QEvent* event ```
bool q_tableview_event(void* self, void* event) {
    return QTableView_Event((QTableView*)self, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QEvent* event ```
bool q_tableview_qbase_event(void* self, void* event) {
    return QTableView_QBaseEvent((QTableView*)self, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, bool (*slot)(QTableView*, QEvent*) ```
void q_tableview_on_event(void* self, bool (*slot)(void*, void*)) {
    QTableView_OnEvent((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QEvent* event ```
bool q_tableview_viewport_event(void* self, void* event) {
    return QTableView_ViewportEvent((QTableView*)self, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QEvent* event ```
bool q_tableview_qbase_viewport_event(void* self, void* event) {
    return QTableView_QBaseViewportEvent((QTableView*)self, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, bool (*slot)(QTableView*, QEvent*) ```
void q_tableview_on_viewport_event(void* self, bool (*slot)(void*, void*)) {
    QTableView_OnViewportEvent((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QMouseEvent* event ```
void q_tableview_mouse_press_event(void* self, void* event) {
    QTableView_MousePressEvent((QTableView*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QMouseEvent* event ```
void q_tableview_qbase_mouse_press_event(void* self, void* event) {
    QTableView_QBaseMousePressEvent((QTableView*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QMouseEvent*) ```
void q_tableview_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnMousePressEvent((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QMouseEvent* event ```
void q_tableview_mouse_move_event(void* self, void* event) {
    QTableView_MouseMoveEvent((QTableView*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QMouseEvent* event ```
void q_tableview_qbase_mouse_move_event(void* self, void* event) {
    QTableView_QBaseMouseMoveEvent((QTableView*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QMouseEvent*) ```
void q_tableview_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnMouseMoveEvent((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QMouseEvent* event ```
void q_tableview_mouse_release_event(void* self, void* event) {
    QTableView_MouseReleaseEvent((QTableView*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QMouseEvent* event ```
void q_tableview_qbase_mouse_release_event(void* self, void* event) {
    QTableView_QBaseMouseReleaseEvent((QTableView*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QMouseEvent*) ```
void q_tableview_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnMouseReleaseEvent((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QMouseEvent* event ```
void q_tableview_mouse_double_click_event(void* self, void* event) {
    QTableView_MouseDoubleClickEvent((QTableView*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QMouseEvent* event ```
void q_tableview_qbase_mouse_double_click_event(void* self, void* event) {
    QTableView_QBaseMouseDoubleClickEvent((QTableView*)self, (QMouseEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QMouseEvent*) ```
void q_tableview_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnMouseDoubleClickEvent((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QDragEnterEvent* event ```
void q_tableview_drag_enter_event(void* self, void* event) {
    QTableView_DragEnterEvent((QTableView*)self, (QDragEnterEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QDragEnterEvent* event ```
void q_tableview_qbase_drag_enter_event(void* self, void* event) {
    QTableView_QBaseDragEnterEvent((QTableView*)self, (QDragEnterEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QDragEnterEvent*) ```
void q_tableview_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnDragEnterEvent((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QDragMoveEvent* event ```
void q_tableview_drag_move_event(void* self, void* event) {
    QTableView_DragMoveEvent((QTableView*)self, (QDragMoveEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QDragMoveEvent* event ```
void q_tableview_qbase_drag_move_event(void* self, void* event) {
    QTableView_QBaseDragMoveEvent((QTableView*)self, (QDragMoveEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QDragMoveEvent*) ```
void q_tableview_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnDragMoveEvent((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QDragLeaveEvent* event ```
void q_tableview_drag_leave_event(void* self, void* event) {
    QTableView_DragLeaveEvent((QTableView*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QDragLeaveEvent* event ```
void q_tableview_qbase_drag_leave_event(void* self, void* event) {
    QTableView_QBaseDragLeaveEvent((QTableView*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QDragLeaveEvent*) ```
void q_tableview_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnDragLeaveEvent((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QDropEvent* event ```
void q_tableview_drop_event(void* self, void* event) {
    QTableView_DropEvent((QTableView*)self, (QDropEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QDropEvent* event ```
void q_tableview_qbase_drop_event(void* self, void* event) {
    QTableView_QBaseDropEvent((QTableView*)self, (QDropEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QDropEvent*) ```
void q_tableview_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnDropEvent((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QFocusEvent* event ```
void q_tableview_focus_in_event(void* self, void* event) {
    QTableView_FocusInEvent((QTableView*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QFocusEvent* event ```
void q_tableview_qbase_focus_in_event(void* self, void* event) {
    QTableView_QBaseFocusInEvent((QTableView*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QFocusEvent*) ```
void q_tableview_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnFocusInEvent((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QFocusEvent* event ```
void q_tableview_focus_out_event(void* self, void* event) {
    QTableView_FocusOutEvent((QTableView*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QFocusEvent* event ```
void q_tableview_qbase_focus_out_event(void* self, void* event) {
    QTableView_QBaseFocusOutEvent((QTableView*)self, (QFocusEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QFocusEvent*) ```
void q_tableview_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnFocusOutEvent((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QKeyEvent* event ```
void q_tableview_key_press_event(void* self, void* event) {
    QTableView_KeyPressEvent((QTableView*)self, (QKeyEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QKeyEvent* event ```
void q_tableview_qbase_key_press_event(void* self, void* event) {
    QTableView_QBaseKeyPressEvent((QTableView*)self, (QKeyEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QKeyEvent*) ```
void q_tableview_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnKeyPressEvent((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QResizeEvent* event ```
void q_tableview_resize_event(void* self, void* event) {
    QTableView_ResizeEvent((QTableView*)self, (QResizeEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QResizeEvent* event ```
void q_tableview_qbase_resize_event(void* self, void* event) {
    QTableView_QBaseResizeEvent((QTableView*)self, (QResizeEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QResizeEvent*) ```
void q_tableview_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnResizeEvent((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QInputMethodEvent* event ```
void q_tableview_input_method_event(void* self, void* event) {
    QTableView_InputMethodEvent((QTableView*)self, (QInputMethodEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QInputMethodEvent* event ```
void q_tableview_qbase_input_method_event(void* self, void* event) {
    QTableView_QBaseInputMethodEvent((QTableView*)self, (QInputMethodEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QInputMethodEvent*) ```
void q_tableview_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnInputMethodEvent((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QObject* object, QEvent* event ```
bool q_tableview_event_filter(void* self, void* object, void* event) {
    return QTableView_EventFilter((QTableView*)self, (QObject*)object, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QObject* object, QEvent* event ```
bool q_tableview_qbase_event_filter(void* self, void* object, void* event) {
    return QTableView_QBaseEventFilter((QTableView*)self, (QObject*)object, (QEvent*)event);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, bool (*slot)(QTableView*, QObject*, QEvent*) ```
void q_tableview_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QTableView_OnEventFilter((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
QSize* q_tableview_minimum_size_hint(void* self) {
    return QTableView_MinimumSizeHint((QTableView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
QSize* q_tableview_qbase_minimum_size_hint(void* self) {
    return QTableView_QBaseMinimumSizeHint((QTableView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, QSize* (*slot)() ```
void q_tableview_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QTableView_OnMinimumSizeHint((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
QSize* q_tableview_size_hint(void* self) {
    return QTableView_SizeHint((QTableView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
QSize* q_tableview_qbase_size_hint(void* self) {
    return QTableView_QBaseSizeHint((QTableView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, QSize* (*slot)() ```
void q_tableview_on_size_hint(void* self, QSize* (*slot)()) {
    QTableView_OnSizeHint((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QWidget* viewport ```
void q_tableview_setup_viewport(void* self, void* viewport) {
    QTableView_SetupViewport((QTableView*)self, (QWidget*)viewport);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QWidget* viewport ```
void q_tableview_qbase_setup_viewport(void* self, void* viewport) {
    QTableView_QBaseSetupViewport((QTableView*)self, (QWidget*)viewport);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QWidget*) ```
void q_tableview_on_setup_viewport(void* self, void (*slot)(void*, void*)) {
    QTableView_OnSetupViewport((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QWheelEvent* param1 ```
void q_tableview_wheel_event(void* self, void* param1) {
    QTableView_WheelEvent((QTableView*)self, (QWheelEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QWheelEvent* param1 ```
void q_tableview_qbase_wheel_event(void* self, void* param1) {
    QTableView_QBaseWheelEvent((QTableView*)self, (QWheelEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QWheelEvent*) ```
void q_tableview_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnWheelEvent((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QContextMenuEvent* param1 ```
void q_tableview_context_menu_event(void* self, void* param1) {
    QTableView_ContextMenuEvent((QTableView*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QContextMenuEvent* param1 ```
void q_tableview_qbase_context_menu_event(void* self, void* param1) {
    QTableView_QBaseContextMenuEvent((QTableView*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QContextMenuEvent*) ```
void q_tableview_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnContextMenuEvent((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QEvent* param1 ```
void q_tableview_change_event(void* self, void* param1) {
    QTableView_ChangeEvent((QTableView*)self, (QEvent*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QEvent* param1 ```
void q_tableview_qbase_change_event(void* self, void* param1) {
    QTableView_QBaseChangeEvent((QTableView*)self, (QEvent*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QEvent*) ```
void q_tableview_on_change_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnChangeEvent((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QStyleOptionFrame* option ```
void q_tableview_init_style_option(void* self, void* option) {
    QTableView_InitStyleOption((QTableView*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QStyleOptionFrame* option ```
void q_tableview_qbase_init_style_option(void* self, void* option) {
    QTableView_QBaseInitStyleOption((QTableView*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QStyleOptionFrame*) ```
void q_tableview_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QTableView_OnInitStyleOption((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
int32_t q_tableview_dev_type(void* self) {
    return QTableView_DevType((QTableView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
int32_t q_tableview_qbase_dev_type(void* self) {
    return QTableView_QBaseDevType((QTableView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, int32_t (*slot)() ```
void q_tableview_on_dev_type(void* self, int32_t (*slot)()) {
    QTableView_OnDevType((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, bool visible ```
void q_tableview_set_visible(void* self, bool visible) {
    QTableView_SetVisible((QTableView*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, bool visible ```
void q_tableview_qbase_set_visible(void* self, bool visible) {
    QTableView_QBaseSetVisible((QTableView*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, bool) ```
void q_tableview_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QTableView_OnSetVisible((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, int param1 ```
int32_t q_tableview_height_for_width(void* self, int param1) {
    return QTableView_HeightForWidth((QTableView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, int param1 ```
int32_t q_tableview_qbase_height_for_width(void* self, int param1) {
    return QTableView_QBaseHeightForWidth((QTableView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, int32_t (*slot)(QTableView*, int) ```
void q_tableview_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QTableView_OnHeightForWidth((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
bool q_tableview_has_height_for_width(void* self) {
    return QTableView_HasHeightForWidth((QTableView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
bool q_tableview_qbase_has_height_for_width(void* self) {
    return QTableView_QBaseHasHeightForWidth((QTableView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, bool (*slot)() ```
void q_tableview_on_has_height_for_width(void* self, bool (*slot)()) {
    QTableView_OnHasHeightForWidth((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
QPaintEngine* q_tableview_paint_engine(void* self) {
    return QTableView_PaintEngine((QTableView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
QPaintEngine* q_tableview_qbase_paint_engine(void* self) {
    return QTableView_QBasePaintEngine((QTableView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, QPaintEngine* (*slot)() ```
void q_tableview_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QTableView_OnPaintEngine((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QKeyEvent* event ```
void q_tableview_key_release_event(void* self, void* event) {
    QTableView_KeyReleaseEvent((QTableView*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QKeyEvent* event ```
void q_tableview_qbase_key_release_event(void* self, void* event) {
    QTableView_QBaseKeyReleaseEvent((QTableView*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QKeyEvent*) ```
void q_tableview_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnKeyReleaseEvent((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QEnterEvent* event ```
void q_tableview_enter_event(void* self, void* event) {
    QTableView_EnterEvent((QTableView*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QEnterEvent* event ```
void q_tableview_qbase_enter_event(void* self, void* event) {
    QTableView_QBaseEnterEvent((QTableView*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QEnterEvent*) ```
void q_tableview_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnEnterEvent((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QEvent* event ```
void q_tableview_leave_event(void* self, void* event) {
    QTableView_LeaveEvent((QTableView*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QEvent* event ```
void q_tableview_qbase_leave_event(void* self, void* event) {
    QTableView_QBaseLeaveEvent((QTableView*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QEvent*) ```
void q_tableview_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnLeaveEvent((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QMoveEvent* event ```
void q_tableview_move_event(void* self, void* event) {
    QTableView_MoveEvent((QTableView*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QMoveEvent* event ```
void q_tableview_qbase_move_event(void* self, void* event) {
    QTableView_QBaseMoveEvent((QTableView*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QMoveEvent*) ```
void q_tableview_on_move_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnMoveEvent((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QCloseEvent* event ```
void q_tableview_close_event(void* self, void* event) {
    QTableView_CloseEvent((QTableView*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QCloseEvent* event ```
void q_tableview_qbase_close_event(void* self, void* event) {
    QTableView_QBaseCloseEvent((QTableView*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QCloseEvent*) ```
void q_tableview_on_close_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnCloseEvent((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QTabletEvent* event ```
void q_tableview_tablet_event(void* self, void* event) {
    QTableView_TabletEvent((QTableView*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QTabletEvent* event ```
void q_tableview_qbase_tablet_event(void* self, void* event) {
    QTableView_QBaseTabletEvent((QTableView*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QTabletEvent*) ```
void q_tableview_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnTabletEvent((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QActionEvent* event ```
void q_tableview_action_event(void* self, void* event) {
    QTableView_ActionEvent((QTableView*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QActionEvent* event ```
void q_tableview_qbase_action_event(void* self, void* event) {
    QTableView_QBaseActionEvent((QTableView*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QActionEvent*) ```
void q_tableview_on_action_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnActionEvent((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QShowEvent* event ```
void q_tableview_show_event(void* self, void* event) {
    QTableView_ShowEvent((QTableView*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QShowEvent* event ```
void q_tableview_qbase_show_event(void* self, void* event) {
    QTableView_QBaseShowEvent((QTableView*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QShowEvent*) ```
void q_tableview_on_show_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnShowEvent((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QHideEvent* event ```
void q_tableview_hide_event(void* self, void* event) {
    QTableView_HideEvent((QTableView*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QHideEvent* event ```
void q_tableview_qbase_hide_event(void* self, void* event) {
    QTableView_QBaseHideEvent((QTableView*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QHideEvent*) ```
void q_tableview_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnHideEvent((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, const char* eventType, void* message, intptr_t* result ```
bool q_tableview_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QTableView_NativeEvent((QTableView*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, const char* eventType, void* message, intptr_t* result ```
bool q_tableview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QTableView_QBaseNativeEvent((QTableView*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, bool (*slot)(QTableView*, const char*, void*, intptr_t*) ```
void q_tableview_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QTableView_OnNativeEvent((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_tableview_metric(void* self, int64_t param1) {
    return QTableView_Metric((QTableView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_tableview_qbase_metric(void* self, int64_t param1) {
    return QTableView_QBaseMetric((QTableView*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, int32_t (*slot)(QTableView*, enum QPaintDevice__PaintDeviceMetric) ```
void q_tableview_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QTableView_OnMetric((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QPainter* painter ```
void q_tableview_init_painter(void* self, void* painter) {
    QTableView_InitPainter((QTableView*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QPainter* painter ```
void q_tableview_qbase_init_painter(void* self, void* painter) {
    QTableView_QBaseInitPainter((QTableView*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QPainter*) ```
void q_tableview_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QTableView_OnInitPainter((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QPoint* offset ```
QPaintDevice* q_tableview_redirected(void* self, void* offset) {
    return QTableView_Redirected((QTableView*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QPoint* offset ```
QPaintDevice* q_tableview_qbase_redirected(void* self, void* offset) {
    return QTableView_QBaseRedirected((QTableView*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, QPaintDevice* (*slot)(QTableView*, QPoint*) ```
void q_tableview_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QTableView_OnRedirected((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
QPainter* q_tableview_shared_painter(void* self) {
    return QTableView_SharedPainter((QTableView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
QPainter* q_tableview_qbase_shared_painter(void* self) {
    return QTableView_QBaseSharedPainter((QTableView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, QPainter* (*slot)() ```
void q_tableview_on_shared_painter(void* self, QPainter* (*slot)()) {
    QTableView_OnSharedPainter((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QChildEvent* event ```
void q_tableview_child_event(void* self, void* event) {
    QTableView_ChildEvent((QTableView*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QChildEvent* event ```
void q_tableview_qbase_child_event(void* self, void* event) {
    QTableView_QBaseChildEvent((QTableView*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QChildEvent*) ```
void q_tableview_on_child_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnChildEvent((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QEvent* event ```
void q_tableview_custom_event(void* self, void* event) {
    QTableView_CustomEvent((QTableView*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QEvent* event ```
void q_tableview_qbase_custom_event(void* self, void* event) {
    QTableView_QBaseCustomEvent((QTableView*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QEvent*) ```
void q_tableview_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QTableView_OnCustomEvent((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QMetaMethod* signal ```
void q_tableview_connect_notify(void* self, void* signal) {
    QTableView_ConnectNotify((QTableView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QMetaMethod* signal ```
void q_tableview_qbase_connect_notify(void* self, void* signal) {
    QTableView_QBaseConnectNotify((QTableView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QMetaMethod*) ```
void q_tableview_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QTableView_OnConnectNotify((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QMetaMethod* signal ```
void q_tableview_disconnect_notify(void* self, void* signal) {
    QTableView_DisconnectNotify((QTableView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QMetaMethod* signal ```
void q_tableview_qbase_disconnect_notify(void* self, void* signal) {
    QTableView_QBaseDisconnectNotify((QTableView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QMetaMethod*) ```
void q_tableview_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QTableView_OnDisconnectNotify((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
int64_t q_tableview_state(void* self) {
    return QTableView_State((QTableView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
int64_t q_tableview_qbase_state(void* self) {
    return QTableView_QBaseState((QTableView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, int64_t (*slot)() ```
void q_tableview_on_state(void* self, int64_t (*slot)()) {
    QTableView_OnState((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, enum QAbstractItemView__State state ```
void q_tableview_set_state(void* self, int64_t state) {
    QTableView_SetState((QTableView*)self, state);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, enum QAbstractItemView__State state ```
void q_tableview_qbase_set_state(void* self, int64_t state) {
    QTableView_QBaseSetState((QTableView*)self, state);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, enum QAbstractItemView__State) ```
void q_tableview_on_set_state(void* self, void (*slot)(void*, int64_t)) {
    QTableView_OnSetState((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_schedule_delayed_items_layout(void* self) {
    QTableView_ScheduleDelayedItemsLayout((QTableView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_qbase_schedule_delayed_items_layout(void* self) {
    QTableView_QBaseScheduleDelayedItemsLayout((QTableView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)() ```
void q_tableview_on_schedule_delayed_items_layout(void* self, void (*slot)()) {
    QTableView_OnScheduleDelayedItemsLayout((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_execute_delayed_items_layout(void* self) {
    QTableView_ExecuteDelayedItemsLayout((QTableView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_qbase_execute_delayed_items_layout(void* self) {
    QTableView_QBaseExecuteDelayedItemsLayout((QTableView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)() ```
void q_tableview_on_execute_delayed_items_layout(void* self, void (*slot)()) {
    QTableView_OnExecuteDelayedItemsLayout((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QRegion* region ```
void q_tableview_set_dirty_region(void* self, void* region) {
    QTableView_SetDirtyRegion((QTableView*)self, (QRegion*)region);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QRegion* region ```
void q_tableview_qbase_set_dirty_region(void* self, void* region) {
    QTableView_QBaseSetDirtyRegion((QTableView*)self, (QRegion*)region);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QRegion*) ```
void q_tableview_on_set_dirty_region(void* self, void (*slot)(void*, void*)) {
    QTableView_OnSetDirtyRegion((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, int dx, int dy ```
void q_tableview_scroll_dirty_region(void* self, int dx, int dy) {
    QTableView_ScrollDirtyRegion((QTableView*)self, dx, dy);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, int dx, int dy ```
void q_tableview_qbase_scroll_dirty_region(void* self, int dx, int dy) {
    QTableView_QBaseScrollDirtyRegion((QTableView*)self, dx, dy);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, int, int) ```
void q_tableview_on_scroll_dirty_region(void* self, void (*slot)(void*, int, int)) {
    QTableView_OnScrollDirtyRegion((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
QPoint* q_tableview_dirty_region_offset(void* self) {
    return QTableView_DirtyRegionOffset((QTableView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
QPoint* q_tableview_qbase_dirty_region_offset(void* self) {
    return QTableView_QBaseDirtyRegionOffset((QTableView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, QPoint* (*slot)() ```
void q_tableview_on_dirty_region_offset(void* self, QPoint* (*slot)()) {
    QTableView_OnDirtyRegionOffset((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_start_auto_scroll(void* self) {
    QTableView_StartAutoScroll((QTableView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_qbase_start_auto_scroll(void* self) {
    QTableView_QBaseStartAutoScroll((QTableView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)() ```
void q_tableview_on_start_auto_scroll(void* self, void (*slot)()) {
    QTableView_OnStartAutoScroll((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_stop_auto_scroll(void* self) {
    QTableView_StopAutoScroll((QTableView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_qbase_stop_auto_scroll(void* self) {
    QTableView_QBaseStopAutoScroll((QTableView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)() ```
void q_tableview_on_stop_auto_scroll(void* self, void (*slot)()) {
    QTableView_OnStopAutoScroll((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_do_auto_scroll(void* self) {
    QTableView_DoAutoScroll((QTableView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_qbase_do_auto_scroll(void* self) {
    QTableView_QBaseDoAutoScroll((QTableView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)() ```
void q_tableview_on_do_auto_scroll(void* self, void (*slot)()) {
    QTableView_OnDoAutoScroll((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
int64_t q_tableview_drop_indicator_position(void* self) {
    return QTableView_DropIndicatorPosition((QTableView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
int64_t q_tableview_qbase_drop_indicator_position(void* self) {
    return QTableView_QBaseDropIndicatorPosition((QTableView*)self);
}

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, int64_t (*slot)() ```
void q_tableview_on_drop_indicator_position(void* self, int64_t (*slot)()) {
    QTableView_OnDropIndicatorPosition((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, int left, int top, int right, int bottom ```
void q_tableview_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QTableView_SetViewportMargins((QTableView*)self, left, top, right, bottom);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, int left, int top, int right, int bottom ```
void q_tableview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QTableView_QBaseSetViewportMargins((QTableView*)self, left, top, right, bottom);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, int, int, int, int) ```
void q_tableview_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int)) {
    QTableView_OnSetViewportMargins((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
QMargins* q_tableview_viewport_margins(void* self) {
    return QTableView_ViewportMargins((QTableView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
QMargins* q_tableview_qbase_viewport_margins(void* self) {
    return QTableView_QBaseViewportMargins((QTableView*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, QMargins* (*slot)() ```
void q_tableview_on_viewport_margins(void* self, QMargins* (*slot)()) {
    QTableView_OnViewportMargins((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QPainter* param1 ```
void q_tableview_draw_frame(void* self, void* param1) {
    QTableView_DrawFrame((QTableView*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QPainter* param1 ```
void q_tableview_qbase_draw_frame(void* self, void* param1) {
    QTableView_QBaseDrawFrame((QTableView*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QPainter*) ```
void q_tableview_on_draw_frame(void* self, void (*slot)(void*, void*)) {
    QTableView_OnDrawFrame((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_update_micro_focus(void* self) {
    QTableView_UpdateMicroFocus((QTableView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_qbase_update_micro_focus(void* self) {
    QTableView_QBaseUpdateMicroFocus((QTableView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)() ```
void q_tableview_on_update_micro_focus(void* self, void (*slot)()) {
    QTableView_OnUpdateMicroFocus((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_create(void* self) {
    QTableView_Create((QTableView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_qbase_create(void* self) {
    QTableView_QBaseCreate((QTableView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)() ```
void q_tableview_on_create(void* self, void (*slot)()) {
    QTableView_OnCreate((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_destroy(void* self) {
    QTableView_Destroy((QTableView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_qbase_destroy(void* self) {
    QTableView_QBaseDestroy((QTableView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)() ```
void q_tableview_on_destroy(void* self, void (*slot)()) {
    QTableView_OnDestroy((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
bool q_tableview_focus_next_child(void* self) {
    return QTableView_FocusNextChild((QTableView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
bool q_tableview_qbase_focus_next_child(void* self) {
    return QTableView_QBaseFocusNextChild((QTableView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, bool (*slot)() ```
void q_tableview_on_focus_next_child(void* self, bool (*slot)()) {
    QTableView_OnFocusNextChild((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
bool q_tableview_focus_previous_child(void* self) {
    return QTableView_FocusPreviousChild((QTableView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
bool q_tableview_qbase_focus_previous_child(void* self) {
    return QTableView_QBaseFocusPreviousChild((QTableView*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, bool (*slot)() ```
void q_tableview_on_focus_previous_child(void* self, bool (*slot)()) {
    QTableView_OnFocusPreviousChild((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
QObject* q_tableview_sender(void* self) {
    return QTableView_Sender((QTableView*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
QObject* q_tableview_qbase_sender(void* self) {
    return QTableView_QBaseSender((QTableView*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, QObject* (*slot)() ```
void q_tableview_on_sender(void* self, QObject* (*slot)()) {
    QTableView_OnSender((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
int32_t q_tableview_sender_signal_index(void* self) {
    return QTableView_SenderSignalIndex((QTableView*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
int32_t q_tableview_qbase_sender_signal_index(void* self) {
    return QTableView_QBaseSenderSignalIndex((QTableView*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, int32_t (*slot)() ```
void q_tableview_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QTableView_OnSenderSignalIndex((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, const char* signal ```
int32_t q_tableview_receivers(void* self, const char* signal) {
    return QTableView_Receivers((QTableView*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, const char* signal ```
int32_t q_tableview_qbase_receivers(void* self, const char* signal) {
    return QTableView_QBaseReceivers((QTableView*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, int32_t (*slot)(QTableView*, const char*) ```
void q_tableview_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QTableView_OnReceivers((QTableView*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QMetaMethod* signal ```
bool q_tableview_is_signal_connected(void* self, void* signal) {
    return QTableView_IsSignalConnected((QTableView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QMetaMethod* signal ```
bool q_tableview_qbase_is_signal_connected(void* self, void* signal) {
    return QTableView_QBaseIsSignalConnected((QTableView*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, bool (*slot)(QTableView*, QMetaMethod*) ```
void q_tableview_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QTableView_OnIsSignalConnected((QTableView*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QTableView* self ```
void q_tableview_delete(void* self) {
    QTableView_Delete((QTableView*)(self));
}