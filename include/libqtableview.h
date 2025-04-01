#pragma once
#ifndef SRCQT6C_LIBQTABLEVIEW_H
#define SRCQT6C_LIBQTABLEVIEW_H

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
#include "libqheaderview.h"
#include "libqicon.h"
#include "libqitemselectionmodel.h"
#include "libqkeysequence.h"
#include "libqlayout.h"
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
#include "libqvariant.h"
#include "libqwidget.h"
#include "libqwindow.h"

/// https://doc.qt.io/qt-6/qtableview.html

/// q_tableview_new constructs a new QTableView object.
///
/// ``` QWidget* parent ```
QTableView* q_tableview_new(void* parent);

/// q_tableview_new2 constructs a new QTableView object.
///
///
QTableView* q_tableview_new2();

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTableView* self ```
QMetaObject* q_tableview_meta_object(void* self);

/// ``` QTableView* self, const char* param1 ```
void* q_tableview_metacast(void* self, const char* param1);

/// ``` QTableView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_tableview_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, int32_t (*slot)(QTableView*, enum QMetaObject__Call, int, void*) ```
void q_tableview_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QTableView* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_tableview_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_tableview_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setModel)
///
/// ``` QTableView* self, QAbstractItemModel* model ```
void q_tableview_set_model(void* self, void* model);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QAbstractItemModel*) ```
void q_tableview_on_set_model(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QTableView* self, QAbstractItemModel* model ```
void q_tableview_qbase_set_model(void* self, void* model);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setRootIndex)
///
/// ``` QTableView* self, QModelIndex* index ```
void q_tableview_set_root_index(void* self, void* index);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QModelIndex*) ```
void q_tableview_on_set_root_index(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QTableView* self, QModelIndex* index ```
void q_tableview_qbase_set_root_index(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSelectionModel)
///
/// ``` QTableView* self, QItemSelectionModel* selectionModel ```
void q_tableview_set_selection_model(void* self, void* selectionModel);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QItemSelectionModel*) ```
void q_tableview_on_set_selection_model(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QTableView* self, QItemSelectionModel* selectionModel ```
void q_tableview_qbase_set_selection_model(void* self, void* selectionModel);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#doItemsLayout)
///
/// ``` QTableView* self ```
void q_tableview_do_items_layout(void* self);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)() ```
void q_tableview_on_do_items_layout(void* self, void (*slot)());

/// Base class method implementation
///
/// ``` QTableView* self ```
void q_tableview_qbase_do_items_layout(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalHeader)
///
/// ``` QTableView* self ```
QHeaderView* q_tableview_horizontal_header(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalHeader)
///
/// ``` QTableView* self ```
QHeaderView* q_tableview_vertical_header(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setHorizontalHeader)
///
/// ``` QTableView* self, QHeaderView* header ```
void q_tableview_set_horizontal_header(void* self, void* header);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setVerticalHeader)
///
/// ``` QTableView* self, QHeaderView* header ```
void q_tableview_set_vertical_header(void* self, void* header);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowViewportPosition)
///
/// ``` QTableView* self, int row ```
int32_t q_tableview_row_viewport_position(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowAt)
///
/// ``` QTableView* self, int y ```
int32_t q_tableview_row_at(void* self, int y);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setRowHeight)
///
/// ``` QTableView* self, int row, int height ```
void q_tableview_set_row_height(void* self, int row, int height);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowHeight)
///
/// ``` QTableView* self, int row ```
int32_t q_tableview_row_height(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnViewportPosition)
///
/// ``` QTableView* self, int column ```
int32_t q_tableview_column_viewport_position(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnAt)
///
/// ``` QTableView* self, int x ```
int32_t q_tableview_column_at(void* self, int x);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setColumnWidth)
///
/// ``` QTableView* self, int column, int width ```
void q_tableview_set_column_width(void* self, int column, int width);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnWidth)
///
/// ``` QTableView* self, int column ```
int32_t q_tableview_column_width(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isRowHidden)
///
/// ``` QTableView* self, int row ```
bool q_tableview_is_row_hidden(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setRowHidden)
///
/// ``` QTableView* self, int row, bool hide ```
void q_tableview_set_row_hidden(void* self, int row, bool hide);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isColumnHidden)
///
/// ``` QTableView* self, int column ```
bool q_tableview_is_column_hidden(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setColumnHidden)
///
/// ``` QTableView* self, int column, bool hide ```
void q_tableview_set_column_hidden(void* self, int column, bool hide);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSortingEnabled)
///
/// ``` QTableView* self, bool enable ```
void q_tableview_set_sorting_enabled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isSortingEnabled)
///
/// ``` QTableView* self ```
bool q_tableview_is_sorting_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#showGrid)
///
/// ``` QTableView* self ```
bool q_tableview_show_grid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#gridStyle)
///
/// ``` QTableView* self ```
int64_t q_tableview_grid_style(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setGridStyle)
///
/// ``` QTableView* self, enum Qt__PenStyle style ```
void q_tableview_set_grid_style(void* self, int64_t style);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setWordWrap)
///
/// ``` QTableView* self, bool on ```
void q_tableview_set_word_wrap(void* self, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#wordWrap)
///
/// ``` QTableView* self ```
bool q_tableview_word_wrap(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setCornerButtonEnabled)
///
/// ``` QTableView* self, bool enable ```
void q_tableview_set_corner_button_enabled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isCornerButtonEnabled)
///
/// ``` QTableView* self ```
bool q_tableview_is_corner_button_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#visualRect)
///
/// ``` QTableView* self, QModelIndex* index ```
QRect* q_tableview_visual_rect(void* self, void* index);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, QRect* (*slot)(QTableView*, QModelIndex*) ```
void q_tableview_on_visual_rect(void* self, QRect* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QTableView* self, QModelIndex* index ```
QRect* q_tableview_qbase_visual_rect(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#scrollTo)
///
/// ``` QTableView* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_tableview_scroll_to(void* self, void* index, int64_t hint);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QModelIndex*, enum QAbstractItemView__ScrollHint) ```
void q_tableview_on_scroll_to(void* self, void (*slot)(void*, void*, int64_t));

/// Base class method implementation
///
/// ``` QTableView* self, QModelIndex* index, enum QAbstractItemView__ScrollHint hint ```
void q_tableview_qbase_scroll_to(void* self, void* index, int64_t hint);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#indexAt)
///
/// ``` QTableView* self, QPoint* p ```
QModelIndex* q_tableview_index_at(void* self, void* p);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, QModelIndex* (*slot)(QTableView*, QPoint*) ```
void q_tableview_on_index_at(void* self, QModelIndex* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QTableView* self, QPoint* p ```
QModelIndex* q_tableview_qbase_index_at(void* self, void* p);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSpan)
///
/// ``` QTableView* self, int row, int column, int rowSpan, int columnSpan ```
void q_tableview_set_span(void* self, int row, int column, int rowSpan, int columnSpan);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowSpan)
///
/// ``` QTableView* self, int row, int column ```
int32_t q_tableview_row_span(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnSpan)
///
/// ``` QTableView* self, int row, int column ```
int32_t q_tableview_column_span(void* self, int row, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#clearSpans)
///
/// ``` QTableView* self ```
void q_tableview_clear_spans(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectRow)
///
/// ``` QTableView* self, int row ```
void q_tableview_select_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectColumn)
///
/// ``` QTableView* self, int column ```
void q_tableview_select_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#hideRow)
///
/// ``` QTableView* self, int row ```
void q_tableview_hide_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#hideColumn)
///
/// ``` QTableView* self, int column ```
void q_tableview_hide_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#showRow)
///
/// ``` QTableView* self, int row ```
void q_tableview_show_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#showColumn)
///
/// ``` QTableView* self, int column ```
void q_tableview_show_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#resizeRowToContents)
///
/// ``` QTableView* self, int row ```
void q_tableview_resize_row_to_contents(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#resizeRowsToContents)
///
/// ``` QTableView* self ```
void q_tableview_resize_rows_to_contents(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#resizeColumnToContents)
///
/// ``` QTableView* self, int column ```
void q_tableview_resize_column_to_contents(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#resizeColumnsToContents)
///
/// ``` QTableView* self ```
void q_tableview_resize_columns_to_contents(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sortByColumn)
///
/// ``` QTableView* self, int column, enum Qt__SortOrder order ```
void q_tableview_sort_by_column(void* self, int column, int64_t order);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setShowGrid)
///
/// ``` QTableView* self, bool show ```
void q_tableview_set_show_grid(void* self, bool show);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowMoved)
///
/// ``` QTableView* self, int row, int oldIndex, int newIndex ```
void q_tableview_row_moved(void* self, int row, int oldIndex, int newIndex);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, int, int, int) ```
void q_tableview_on_row_moved(void* self, void (*slot)(void*, int, int, int));

/// Base class method implementation
///
/// ``` QTableView* self, int row, int oldIndex, int newIndex ```
void q_tableview_qbase_row_moved(void* self, int row, int oldIndex, int newIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnMoved)
///
/// ``` QTableView* self, int column, int oldIndex, int newIndex ```
void q_tableview_column_moved(void* self, int column, int oldIndex, int newIndex);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, int, int, int) ```
void q_tableview_on_column_moved(void* self, void (*slot)(void*, int, int, int));

/// Base class method implementation
///
/// ``` QTableView* self, int column, int oldIndex, int newIndex ```
void q_tableview_qbase_column_moved(void* self, int column, int oldIndex, int newIndex);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowResized)
///
/// ``` QTableView* self, int row, int oldHeight, int newHeight ```
void q_tableview_row_resized(void* self, int row, int oldHeight, int newHeight);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, int, int, int) ```
void q_tableview_on_row_resized(void* self, void (*slot)(void*, int, int, int));

/// Base class method implementation
///
/// ``` QTableView* self, int row, int oldHeight, int newHeight ```
void q_tableview_qbase_row_resized(void* self, int row, int oldHeight, int newHeight);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnResized)
///
/// ``` QTableView* self, int column, int oldWidth, int newWidth ```
void q_tableview_column_resized(void* self, int column, int oldWidth, int newWidth);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, int, int, int) ```
void q_tableview_on_column_resized(void* self, void (*slot)(void*, int, int, int));

/// Base class method implementation
///
/// ``` QTableView* self, int column, int oldWidth, int newWidth ```
void q_tableview_qbase_column_resized(void* self, int column, int oldWidth, int newWidth);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#rowCountChanged)
///
/// ``` QTableView* self, int oldCount, int newCount ```
void q_tableview_row_count_changed(void* self, int oldCount, int newCount);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, int, int) ```
void q_tableview_on_row_count_changed(void* self, void (*slot)(void*, int, int));

/// Base class method implementation
///
/// ``` QTableView* self, int oldCount, int newCount ```
void q_tableview_qbase_row_count_changed(void* self, int oldCount, int newCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#columnCountChanged)
///
/// ``` QTableView* self, int oldCount, int newCount ```
void q_tableview_column_count_changed(void* self, int oldCount, int newCount);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, int, int) ```
void q_tableview_on_column_count_changed(void* self, void (*slot)(void*, int, int));

/// Base class method implementation
///
/// ``` QTableView* self, int oldCount, int newCount ```
void q_tableview_qbase_column_count_changed(void* self, int oldCount, int newCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#scrollContentsBy)
///
/// ``` QTableView* self, int dx, int dy ```
void q_tableview_scroll_contents_by(void* self, int dx, int dy);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, int, int) ```
void q_tableview_on_scroll_contents_by(void* self, void (*slot)(void*, int, int));

/// Base class method implementation
///
/// ``` QTableView* self, int dx, int dy ```
void q_tableview_qbase_scroll_contents_by(void* self, int dx, int dy);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#initViewItemOption)
///
/// ``` QTableView* self, QStyleOptionViewItem* option ```
void q_tableview_init_view_item_option(void* self, void* option);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QStyleOptionViewItem*) ```
void q_tableview_on_init_view_item_option(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QTableView* self, QStyleOptionViewItem* option ```
void q_tableview_qbase_init_view_item_option(void* self, void* option);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#paintEvent)
///
/// ``` QTableView* self, QPaintEvent* e ```
void q_tableview_paint_event(void* self, void* e);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QPaintEvent*) ```
void q_tableview_on_paint_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QTableView* self, QPaintEvent* e ```
void q_tableview_qbase_paint_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#timerEvent)
///
/// ``` QTableView* self, QTimerEvent* event ```
void q_tableview_timer_event(void* self, void* event);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QTimerEvent*) ```
void q_tableview_on_timer_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QTableView* self, QTimerEvent* event ```
void q_tableview_qbase_timer_event(void* self, void* event);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalOffset)
///
/// ``` QTableView* self ```
int32_t q_tableview_horizontal_offset(void* self);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, int32_t (*slot)() ```
void q_tableview_on_horizontal_offset(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QTableView* self ```
int32_t q_tableview_qbase_horizontal_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalOffset)
///
/// ``` QTableView* self ```
int32_t q_tableview_vertical_offset(void* self);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, int32_t (*slot)() ```
void q_tableview_on_vertical_offset(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QTableView* self ```
int32_t q_tableview_qbase_vertical_offset(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#moveCursor)
///
/// ``` QTableView* self, enum QAbstractItemView__CursorAction cursorAction, int modifiers ```
QModelIndex* q_tableview_move_cursor(void* self, int64_t cursorAction, int64_t modifiers);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, QModelIndex* (*slot)(QTableView*, enum QAbstractItemView__CursorAction, int) ```
void q_tableview_on_move_cursor(void* self, QModelIndex* (*slot)(void*, int64_t, int64_t));

/// Base class method implementation
///
/// ``` QTableView* self, enum QAbstractItemView__CursorAction cursorAction, int modifiers ```
QModelIndex* q_tableview_qbase_move_cursor(void* self, int64_t cursorAction, int64_t modifiers);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#setSelection)
///
/// ``` QTableView* self, QRect* rect, int command ```
void q_tableview_set_selection(void* self, void* rect, int64_t command);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QRect*, int) ```
void q_tableview_on_set_selection(void* self, void (*slot)(void*, void*, int64_t));

/// Base class method implementation
///
/// ``` QTableView* self, QRect* rect, int command ```
void q_tableview_qbase_set_selection(void* self, void* rect, int64_t command);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#visualRegionForSelection)
///
/// ``` QTableView* self, QItemSelection* selection ```
QRegion* q_tableview_visual_region_for_selection(void* self, void* selection);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, QRegion* (*slot)(QTableView*, QItemSelection*) ```
void q_tableview_on_visual_region_for_selection(void* self, QRegion* (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QTableView* self, QItemSelection* selection ```
QRegion* q_tableview_qbase_visual_region_for_selection(void* self, void* selection);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectedIndexes)
///
/// ``` QTableView* self ```
libqt_list /* of QModelIndex* */ q_tableview_selected_indexes(void* self);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, libqt_list /* of QModelIndex* */ (*slot)() ```
void q_tableview_on_selected_indexes(void* self, libqt_list /* of QModelIndex* */ (*slot)());

/// Base class method implementation
///
/// ``` QTableView* self ```
libqt_list /* of QModelIndex* */ q_tableview_qbase_selected_indexes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#updateGeometries)
///
/// ``` QTableView* self ```
void q_tableview_update_geometries(void* self);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)() ```
void q_tableview_on_update_geometries(void* self, void (*slot)());

/// Base class method implementation
///
/// ``` QTableView* self ```
void q_tableview_qbase_update_geometries(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#viewportSizeHint)
///
/// ``` QTableView* self ```
QSize* q_tableview_viewport_size_hint(void* self);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, QSize* (*slot)() ```
void q_tableview_on_viewport_size_hint(void* self, QSize* (*slot)());

/// Base class method implementation
///
/// ``` QTableView* self ```
QSize* q_tableview_qbase_viewport_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sizeHintForRow)
///
/// ``` QTableView* self, int row ```
int32_t q_tableview_size_hint_for_row(void* self, int row);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, int32_t (*slot)(QTableView*, int) ```
void q_tableview_on_size_hint_for_row(void* self, int32_t (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QTableView* self, int row ```
int32_t q_tableview_qbase_size_hint_for_row(void* self, int row);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#sizeHintForColumn)
///
/// ``` QTableView* self, int column ```
int32_t q_tableview_size_hint_for_column(void* self, int column);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, int32_t (*slot)(QTableView*, int) ```
void q_tableview_on_size_hint_for_column(void* self, int32_t (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QTableView* self, int column ```
int32_t q_tableview_qbase_size_hint_for_column(void* self, int column);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#verticalScrollbarAction)
///
/// ``` QTableView* self, int action ```
void q_tableview_vertical_scrollbar_action(void* self, int action);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, int) ```
void q_tableview_on_vertical_scrollbar_action(void* self, void (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QTableView* self, int action ```
void q_tableview_qbase_vertical_scrollbar_action(void* self, int action);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#horizontalScrollbarAction)
///
/// ``` QTableView* self, int action ```
void q_tableview_horizontal_scrollbar_action(void* self, int action);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, int) ```
void q_tableview_on_horizontal_scrollbar_action(void* self, void (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QTableView* self, int action ```
void q_tableview_qbase_horizontal_scrollbar_action(void* self, int action);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#isIndexHidden)
///
/// ``` QTableView* self, QModelIndex* index ```
bool q_tableview_is_index_hidden(void* self, void* index);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, bool (*slot)(QTableView*, QModelIndex*) ```
void q_tableview_on_is_index_hidden(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QTableView* self, QModelIndex* index ```
bool q_tableview_qbase_is_index_hidden(void* self, void* index);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#selectionChanged)
///
/// ``` QTableView* self, QItemSelection* selected, QItemSelection* deselected ```
void q_tableview_selection_changed(void* self, void* selected, void* deselected);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QItemSelection*, QItemSelection*) ```
void q_tableview_on_selection_changed(void* self, void (*slot)(void*, void*, void*));

/// Base class method implementation
///
/// ``` QTableView* self, QItemSelection* selected, QItemSelection* deselected ```
void q_tableview_qbase_selection_changed(void* self, void* selected, void* deselected);

/// [Qt documentation](https://doc.qt.io/qt-6/qtableview.html#currentChanged)
///
/// ``` QTableView* self, QModelIndex* current, QModelIndex* previous ```
void q_tableview_current_changed(void* self, void* current, void* previous);

/// Allows for overriding the related default method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QModelIndex*, QModelIndex*) ```
void q_tableview_on_current_changed(void* self, void (*slot)(void*, void*, void*));

/// Base class method implementation
///
/// ``` QTableView* self, QModelIndex* current, QModelIndex* previous ```
void q_tableview_qbase_current_changed(void* self, void* current, void* previous);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_tableview_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_tableview_tr3(const char* s, const char* c, int n);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#model)
///
/// ``` QTableView* self ```
QAbstractItemModel* q_tableview_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
///
/// ``` QTableView* self ```
QItemSelectionModel* q_tableview_selection_model(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
///
/// ``` QTableView* self, QAbstractItemDelegate* delegate ```
void q_tableview_set_item_delegate(void* self, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QTableView* self ```
QAbstractItemDelegate* q_tableview_item_delegate(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
///
/// ``` QTableView* self, enum QAbstractItemView__SelectionMode mode ```
void q_tableview_set_selection_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
///
/// ``` QTableView* self ```
int64_t q_tableview_selection_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
///
/// ``` QTableView* self, enum QAbstractItemView__SelectionBehavior behavior ```
void q_tableview_set_selection_behavior(void* self, int64_t behavior);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
///
/// ``` QTableView* self ```
int64_t q_tableview_selection_behavior(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
///
/// ``` QTableView* self ```
QModelIndex* q_tableview_current_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
///
/// ``` QTableView* self ```
QModelIndex* q_tableview_root_index(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
///
/// ``` QTableView* self, int triggers ```
void q_tableview_set_edit_triggers(void* self, int64_t triggers);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
///
/// ``` QTableView* self ```
int64_t q_tableview_edit_triggers(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
///
/// ``` QTableView* self, enum QAbstractItemView__ScrollMode mode ```
void q_tableview_set_vertical_scroll_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
///
/// ``` QTableView* self ```
int64_t q_tableview_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
///
/// ``` QTableView* self ```
void q_tableview_reset_vertical_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
///
/// ``` QTableView* self, enum QAbstractItemView__ScrollMode mode ```
void q_tableview_set_horizontal_scroll_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
///
/// ``` QTableView* self ```
int64_t q_tableview_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
///
/// ``` QTableView* self ```
void q_tableview_reset_horizontal_scroll_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
///
/// ``` QTableView* self, bool enable ```
void q_tableview_set_auto_scroll(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
///
/// ``` QTableView* self ```
bool q_tableview_has_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
///
/// ``` QTableView* self, int margin ```
void q_tableview_set_auto_scroll_margin(void* self, int margin);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
///
/// ``` QTableView* self ```
int32_t q_tableview_auto_scroll_margin(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
///
/// ``` QTableView* self, bool enable ```
void q_tableview_set_tab_key_navigation(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
///
/// ``` QTableView* self ```
bool q_tableview_tab_key_navigation(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
///
/// ``` QTableView* self, bool enable ```
void q_tableview_set_drop_indicator_shown(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
///
/// ``` QTableView* self ```
bool q_tableview_show_drop_indicator(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
///
/// ``` QTableView* self, bool enable ```
void q_tableview_set_drag_enabled(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
///
/// ``` QTableView* self ```
bool q_tableview_drag_enabled(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
///
/// ``` QTableView* self, bool overwrite ```
void q_tableview_set_drag_drop_overwrite_mode(void* self, bool overwrite);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
///
/// ``` QTableView* self ```
bool q_tableview_drag_drop_overwrite_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
///
/// ``` QTableView* self, enum QAbstractItemView__DragDropMode behavior ```
void q_tableview_set_drag_drop_mode(void* self, int64_t behavior);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
///
/// ``` QTableView* self ```
int64_t q_tableview_drag_drop_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
///
/// ``` QTableView* self, enum Qt__DropAction dropAction ```
void q_tableview_set_default_drop_action(void* self, int64_t dropAction);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
///
/// ``` QTableView* self ```
int64_t q_tableview_default_drop_action(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
///
/// ``` QTableView* self, bool enable ```
void q_tableview_set_alternating_row_colors(void* self, bool enable);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
///
/// ``` QTableView* self ```
bool q_tableview_alternating_row_colors(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
///
/// ``` QTableView* self, QSize* size ```
void q_tableview_set_icon_size(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
///
/// ``` QTableView* self ```
QSize* q_tableview_icon_size(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
///
/// ``` QTableView* self, enum Qt__TextElideMode mode ```
void q_tableview_set_text_elide_mode(void* self, int64_t mode);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
///
/// ``` QTableView* self ```
int64_t q_tableview_text_elide_mode(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
///
/// ``` QTableView* self, QModelIndex* index ```
QSize* q_tableview_size_hint_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#openPersistentEditor)
///
/// ``` QTableView* self, QModelIndex* index ```
void q_tableview_open_persistent_editor(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closePersistentEditor)
///
/// ``` QTableView* self, QModelIndex* index ```
void q_tableview_close_persistent_editor(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#isPersistentEditorOpen)
///
/// ``` QTableView* self, QModelIndex* index ```
bool q_tableview_is_persistent_editor_open(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
///
/// ``` QTableView* self, QModelIndex* index, QWidget* widget ```
void q_tableview_set_index_widget(void* self, void* index, void* widget);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
///
/// ``` QTableView* self, QModelIndex* index ```
QWidget* q_tableview_index_widget(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
///
/// ``` QTableView* self, int row, QAbstractItemDelegate* delegate ```
void q_tableview_set_item_delegate_for_row(void* self, int row, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
///
/// ``` QTableView* self, int row ```
QAbstractItemDelegate* q_tableview_item_delegate_for_row(void* self, int row);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
///
/// ``` QTableView* self, int column, QAbstractItemDelegate* delegate ```
void q_tableview_set_item_delegate_for_column(void* self, int column, void* delegate);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
///
/// ``` QTableView* self, int column ```
QAbstractItemDelegate* q_tableview_item_delegate_for_column(void* self, int column);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
///
/// ``` QTableView* self, QModelIndex* index ```
QAbstractItemDelegate* q_tableview_item_delegate_with_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// ``` QTableView* self, QModelIndex* index ```
void q_tableview_edit(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
///
/// ``` QTableView* self ```
void q_tableview_clear_selection(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
///
/// ``` QTableView* self, QModelIndex* index ```
void q_tableview_set_current_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
///
/// ``` QTableView* self ```
void q_tableview_scroll_to_top(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
///
/// ``` QTableView* self ```
void q_tableview_scroll_to_bottom(void* self);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#update)
///
/// ``` QTableView* self, QModelIndex* index ```
void q_tableview_update(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
///
/// ``` QTableView* self, QModelIndex* index ```
void q_tableview_pressed(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// ``` QTableView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_tableview_on_pressed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
///
/// ``` QTableView* self, QModelIndex* index ```
void q_tableview_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// ``` QTableView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_tableview_on_clicked(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
///
/// ``` QTableView* self, QModelIndex* index ```
void q_tableview_double_clicked(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// ``` QTableView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_tableview_on_double_clicked(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
///
/// ``` QTableView* self, QModelIndex* index ```
void q_tableview_activated(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// ``` QTableView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_tableview_on_activated(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
///
/// ``` QTableView* self, QModelIndex* index ```
void q_tableview_entered(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// ``` QTableView* self, void (*slot)(QAbstractItemView*, QModelIndex*) ```
void q_tableview_on_entered(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
///
/// ``` QTableView* self ```
void q_tableview_viewport_entered(void* self);

/// Inherited from QAbstractItemView
///
/// ``` QTableView* self, void (*slot)(QAbstractItemView*) ```
void q_tableview_on_viewport_entered(void* self, void (*slot)(void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
///
/// ``` QTableView* self, QSize* size ```
void q_tableview_icon_size_changed(void* self, void* size);

/// Inherited from QAbstractItemView
///
/// ``` QTableView* self, void (*slot)(QAbstractItemView*, QSize*) ```
void q_tableview_on_icon_size_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// ``` QTableView* self ```
int64_t q_tableview_vertical_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// ``` QTableView* self, enum Qt__ScrollBarPolicy verticalScrollBarPolicy ```
void q_tableview_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// ``` QTableView* self ```
QScrollBar* q_tableview_vertical_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// ``` QTableView* self, QScrollBar* scrollbar ```
void q_tableview_set_vertical_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// ``` QTableView* self ```
int64_t q_tableview_horizontal_scroll_bar_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// ``` QTableView* self, enum Qt__ScrollBarPolicy horizontalScrollBarPolicy ```
void q_tableview_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// ``` QTableView* self ```
QScrollBar* q_tableview_horizontal_scroll_bar(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// ``` QTableView* self, QScrollBar* scrollbar ```
void q_tableview_set_horizontal_scroll_bar(void* self, void* scrollbar);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// ``` QTableView* self ```
QWidget* q_tableview_corner_widget(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// ``` QTableView* self, QWidget* widget ```
void q_tableview_set_corner_widget(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// ``` QTableView* self, QWidget* widget, int alignment ```
void q_tableview_add_scroll_bar_widget(void* self, void* widget, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// ``` QTableView* self, int alignment ```
libqt_list /* of QWidget* */ q_tableview_scroll_bar_widgets(void* self, int64_t alignment);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// ``` QTableView* self ```
QWidget* q_tableview_viewport(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// ``` QTableView* self, QWidget* widget ```
void q_tableview_set_viewport(void* self, void* widget);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// ``` QTableView* self ```
QSize* q_tableview_maximum_viewport_size(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// ``` QTableView* self ```
int64_t q_tableview_size_adjust_policy(void* self);

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// ``` QTableView* self, enum QAbstractScrollArea__SizeAdjustPolicy policy ```
void q_tableview_set_size_adjust_policy(void* self, int64_t policy);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QTableView* self ```
int32_t q_tableview_frame_style(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QTableView* self, int frameStyle ```
void q_tableview_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QTableView* self ```
int32_t q_tableview_frame_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QTableView* self ```
int64_t q_tableview_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QTableView* self, enum QFrame__Shape frameShape ```
void q_tableview_set_frame_shape(void* self, int64_t frameShape);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QTableView* self ```
int64_t q_tableview_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QTableView* self, enum QFrame__Shadow frameShadow ```
void q_tableview_set_frame_shadow(void* self, int64_t frameShadow);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QTableView* self ```
int32_t q_tableview_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QTableView* self, int lineWidth ```
void q_tableview_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QTableView* self ```
int32_t q_tableview_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QTableView* self, int midLineWidth ```
void q_tableview_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QTableView* self ```
QRect* q_tableview_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QTableView* self, QRect* frameRect ```
void q_tableview_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QTableView* self ```
uintptr_t q_tableview_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QTableView* self ```
void q_tableview_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QTableView* self ```
uintptr_t q_tableview_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QTableView* self ```
uintptr_t q_tableview_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QTableView* self ```
QStyle* q_tableview_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QTableView* self, QStyle* style ```
void q_tableview_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QTableView* self ```
bool q_tableview_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QTableView* self ```
bool q_tableview_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QTableView* self ```
bool q_tableview_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QTableView* self ```
int64_t q_tableview_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QTableView* self, enum Qt__WindowModality windowModality ```
void q_tableview_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QTableView* self ```
bool q_tableview_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QTableView* self, QWidget* param1 ```
bool q_tableview_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QTableView* self, bool enabled ```
void q_tableview_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QTableView* self, bool disabled ```
void q_tableview_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QTableView* self, bool windowModified ```
void q_tableview_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QTableView* self ```
QRect* q_tableview_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QTableView* self ```
QRect* q_tableview_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QTableView* self ```
QRect* q_tableview_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QTableView* self ```
int32_t q_tableview_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QTableView* self ```
int32_t q_tableview_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QTableView* self ```
QPoint* q_tableview_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QTableView* self ```
QSize* q_tableview_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QTableView* self ```
QSize* q_tableview_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QTableView* self ```
int32_t q_tableview_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QTableView* self ```
int32_t q_tableview_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QTableView* self ```
QRect* q_tableview_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QTableView* self ```
QRect* q_tableview_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QTableView* self ```
QRegion* q_tableview_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QTableView* self ```
QSize* q_tableview_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QTableView* self ```
QSize* q_tableview_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QTableView* self ```
int32_t q_tableview_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QTableView* self ```
int32_t q_tableview_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QTableView* self ```
int32_t q_tableview_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QTableView* self ```
int32_t q_tableview_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QTableView* self, QSize* minimumSize ```
void q_tableview_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QTableView* self, int minw, int minh ```
void q_tableview_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QTableView* self, QSize* maximumSize ```
void q_tableview_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QTableView* self, int maxw, int maxh ```
void q_tableview_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QTableView* self, int minw ```
void q_tableview_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QTableView* self, int minh ```
void q_tableview_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QTableView* self, int maxw ```
void q_tableview_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QTableView* self, int maxh ```
void q_tableview_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QTableView* self ```
QSize* q_tableview_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QTableView* self, QSize* sizeIncrement ```
void q_tableview_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QTableView* self, int w, int h ```
void q_tableview_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QTableView* self ```
QSize* q_tableview_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QTableView* self, QSize* baseSize ```
void q_tableview_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QTableView* self, int basew, int baseh ```
void q_tableview_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QTableView* self, QSize* fixedSize ```
void q_tableview_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QTableView* self, int w, int h ```
void q_tableview_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QTableView* self, int w ```
void q_tableview_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QTableView* self, int h ```
void q_tableview_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QTableView* self, QPointF* param1 ```
QPointF* q_tableview_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QTableView* self, QPoint* param1 ```
QPoint* q_tableview_map_to_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QTableView* self, QPointF* param1 ```
QPointF* q_tableview_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QTableView* self, QPoint* param1 ```
QPoint* q_tableview_map_from_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QTableView* self, QPointF* param1 ```
QPointF* q_tableview_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QTableView* self, QPoint* param1 ```
QPoint* q_tableview_map_to_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QTableView* self, QPointF* param1 ```
QPointF* q_tableview_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QTableView* self, QPoint* param1 ```
QPoint* q_tableview_map_from_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QTableView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_tableview_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QTableView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_tableview_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QTableView* self, QWidget* param1, QPointF* param2 ```
QPointF* q_tableview_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QTableView* self, QWidget* param1, QPoint* param2 ```
QPoint* q_tableview_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QTableView* self ```
QWidget* q_tableview_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QTableView* self ```
QWidget* q_tableview_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QTableView* self ```
QWidget* q_tableview_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QTableView* self ```
QPalette* q_tableview_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QTableView* self, QPalette* palette ```
void q_tableview_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QTableView* self, enum QPalette__ColorRole backgroundRole ```
void q_tableview_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QTableView* self ```
int64_t q_tableview_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QTableView* self, enum QPalette__ColorRole foregroundRole ```
void q_tableview_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QTableView* self ```
int64_t q_tableview_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QTableView* self ```
QFont* q_tableview_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QTableView* self, QFont* font ```
void q_tableview_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QTableView* self ```
QFontMetrics* q_tableview_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QTableView* self ```
QFontInfo* q_tableview_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QTableView* self ```
QCursor* q_tableview_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QTableView* self, QCursor* cursor ```
void q_tableview_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QTableView* self ```
void q_tableview_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QTableView* self, bool enable ```
void q_tableview_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QTableView* self ```
bool q_tableview_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QTableView* self ```
bool q_tableview_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QTableView* self, bool enable ```
void q_tableview_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QTableView* self ```
bool q_tableview_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QTableView* self, QBitmap* mask ```
void q_tableview_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QTableView* self, QRegion* mask ```
void q_tableview_set_mask_with_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QTableView* self ```
QRegion* q_tableview_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QTableView* self ```
void q_tableview_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTableView* self, QPaintDevice* target ```
void q_tableview_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTableView* self, QPainter* painter ```
void q_tableview_render_with_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QTableView* self ```
QPixmap* q_tableview_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QTableView* self ```
QGraphicsEffect* q_tableview_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QTableView* self, QGraphicsEffect* effect ```
void q_tableview_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QTableView* self, enum Qt__GestureType typeVal ```
void q_tableview_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QTableView* self, enum Qt__GestureType typeVal ```
void q_tableview_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QTableView* self, const char* windowTitle ```
void q_tableview_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QTableView* self, const char* styleSheet ```
void q_tableview_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QTableView* self ```
const char* q_tableview_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QTableView* self ```
const char* q_tableview_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QTableView* self, QIcon* icon ```
void q_tableview_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QTableView* self ```
QIcon* q_tableview_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QTableView* self, const char* windowIconText ```
void q_tableview_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QTableView* self ```
const char* q_tableview_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QTableView* self, const char* windowRole ```
void q_tableview_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QTableView* self ```
const char* q_tableview_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QTableView* self, const char* filePath ```
void q_tableview_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QTableView* self ```
const char* q_tableview_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QTableView* self, double level ```
void q_tableview_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QTableView* self ```
double q_tableview_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QTableView* self ```
bool q_tableview_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QTableView* self, const char* toolTip ```
void q_tableview_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QTableView* self ```
const char* q_tableview_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QTableView* self, int msec ```
void q_tableview_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QTableView* self ```
int32_t q_tableview_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QTableView* self, const char* statusTip ```
void q_tableview_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QTableView* self ```
const char* q_tableview_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QTableView* self, const char* whatsThis ```
void q_tableview_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QTableView* self ```
const char* q_tableview_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QTableView* self ```
const char* q_tableview_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QTableView* self, const char* name ```
void q_tableview_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QTableView* self ```
const char* q_tableview_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QTableView* self, const char* description ```
void q_tableview_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QTableView* self, enum Qt__LayoutDirection direction ```
void q_tableview_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QTableView* self ```
int64_t q_tableview_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QTableView* self ```
void q_tableview_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QTableView* self, QLocale* locale ```
void q_tableview_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QTableView* self ```
QLocale* q_tableview_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QTableView* self ```
void q_tableview_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QTableView* self ```
bool q_tableview_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QTableView* self ```
bool q_tableview_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QTableView* self ```
void q_tableview_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QTableView* self ```
bool q_tableview_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QTableView* self ```
void q_tableview_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QTableView* self ```
void q_tableview_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QTableView* self, enum Qt__FocusReason reason ```
void q_tableview_set_focus_with_reason(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QTableView* self ```
int64_t q_tableview_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QTableView* self, enum Qt__FocusPolicy policy ```
void q_tableview_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QTableView* self ```
bool q_tableview_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_tableview_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QTableView* self, QWidget* focusProxy ```
void q_tableview_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QTableView* self ```
QWidget* q_tableview_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QTableView* self ```
int64_t q_tableview_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QTableView* self, enum Qt__ContextMenuPolicy policy ```
void q_tableview_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QTableView* self ```
void q_tableview_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QTableView* self, QCursor* param1 ```
void q_tableview_grab_mouse_with_q_cursor(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QTableView* self ```
void q_tableview_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QTableView* self ```
void q_tableview_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QTableView* self ```
void q_tableview_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QTableView* self, QKeySequence* key ```
int32_t q_tableview_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QTableView* self, int id ```
void q_tableview_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QTableView* self, int id ```
void q_tableview_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QTableView* self, int id ```
void q_tableview_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_tableview_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_tableview_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QTableView* self ```
bool q_tableview_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QTableView* self, bool enable ```
void q_tableview_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QTableView* self ```
QGraphicsProxyWidget* q_tableview_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTableView* self ```
void q_tableview_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTableView* self, int x, int y, int w, int h ```
void q_tableview_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTableView* self, QRect* param1 ```
void q_tableview_update_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTableView* self, QRegion* param1 ```
void q_tableview_update_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTableView* self, int x, int y, int w, int h ```
void q_tableview_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTableView* self, QRect* param1 ```
void q_tableview_repaint_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTableView* self, QRegion* param1 ```
void q_tableview_repaint_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QTableView* self, bool hidden ```
void q_tableview_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QTableView* self ```
void q_tableview_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QTableView* self ```
void q_tableview_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QTableView* self ```
void q_tableview_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QTableView* self ```
void q_tableview_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QTableView* self ```
void q_tableview_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QTableView* self ```
void q_tableview_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QTableView* self ```
bool q_tableview_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QTableView* self ```
void q_tableview_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QTableView* self ```
void q_tableview_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QTableView* self, QWidget* param1 ```
void q_tableview_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QTableView* self, int x, int y ```
void q_tableview_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QTableView* self, QPoint* param1 ```
void q_tableview_move_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QTableView* self, int w, int h ```
void q_tableview_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QTableView* self, QSize* param1 ```
void q_tableview_resize_with_q_size(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QTableView* self, int x, int y, int w, int h ```
void q_tableview_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QTableView* self, QRect* geometry ```
void q_tableview_set_geometry_with_geometry(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QTableView* self ```
char* q_tableview_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QTableView* self, const char* geometry ```
bool q_tableview_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QTableView* self ```
void q_tableview_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QTableView* self ```
bool q_tableview_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QTableView* self, QWidget* param1 ```
bool q_tableview_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QTableView* self ```
bool q_tableview_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QTableView* self ```
bool q_tableview_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QTableView* self ```
bool q_tableview_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QTableView* self ```
bool q_tableview_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QTableView* self ```
int64_t q_tableview_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QTableView* self, int state ```
void q_tableview_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QTableView* self, int state ```
void q_tableview_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QTableView* self ```
QSizePolicy* q_tableview_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QTableView* self, QSizePolicy* sizePolicy ```
void q_tableview_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QTableView* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_tableview_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QTableView* self ```
QRegion* q_tableview_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QTableView* self, int left, int top, int right, int bottom ```
void q_tableview_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QTableView* self, QMargins* margins ```
void q_tableview_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QTableView* self ```
QMargins* q_tableview_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QTableView* self ```
QRect* q_tableview_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QTableView* self ```
QLayout* q_tableview_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QTableView* self, QLayout* layout ```
void q_tableview_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QTableView* self ```
void q_tableview_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QTableView* self, QWidget* parent ```
void q_tableview_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QTableView* self, QWidget* parent, int f ```
void q_tableview_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QTableView* self, int dx, int dy ```
void q_tableview_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QTableView* self, int dx, int dy, QRect* param3 ```
void q_tableview_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QTableView* self ```
QWidget* q_tableview_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QTableView* self ```
QWidget* q_tableview_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QTableView* self ```
QWidget* q_tableview_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QTableView* self ```
bool q_tableview_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QTableView* self, bool on ```
void q_tableview_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTableView* self, QAction* action ```
void q_tableview_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QTableView* self, QAction* actions[] ```
void q_tableview_add_actions(void* self, void* actions[]);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QTableView* self, QAction* before, QAction* actions[] ```
void q_tableview_insert_actions(void* self, void* before, void* actions[]);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QTableView* self, QAction* before, QAction* action ```
void q_tableview_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QTableView* self, QAction* action ```
void q_tableview_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QTableView* self ```
libqt_list /* of QAction* */ q_tableview_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTableView* self, const char* text ```
QAction* q_tableview_add_action_with_text(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTableView* self, QIcon* icon, const char* text ```
QAction* q_tableview_add_action2(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTableView* self, const char* text, QKeySequence* shortcut ```
QAction* q_tableview_add_action3(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTableView* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_tableview_add_action4(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QTableView* self ```
QWidget* q_tableview_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QTableView* self, int typeVal ```
void q_tableview_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QTableView* self ```
int64_t q_tableview_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QTableView* self, enum Qt__WindowType param1 ```
void q_tableview_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QTableView* self, int typeVal ```
void q_tableview_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QTableView* self ```
int64_t q_tableview_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_tableview_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QTableView* self, int x, int y ```
QWidget* q_tableview_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QTableView* self, QPoint* p ```
QWidget* q_tableview_child_at_with_q_point(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QTableView* self, enum Qt__WidgetAttribute param1 ```
void q_tableview_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QTableView* self, enum Qt__WidgetAttribute param1 ```
bool q_tableview_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QTableView* self ```
void q_tableview_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QTableView* self, QWidget* child ```
bool q_tableview_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QTableView* self ```
bool q_tableview_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QTableView* self, bool enabled ```
void q_tableview_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QTableView* self ```
QBackingStore* q_tableview_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QTableView* self ```
QWindow* q_tableview_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QTableView* self ```
QScreen* q_tableview_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QTableView* self, QScreen* screen ```
void q_tableview_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_tableview_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QTableView* self, const char* title ```
void q_tableview_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// ``` QTableView* self, void (*slot)(QWidget*, const char*) ```
void q_tableview_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QTableView* self, QIcon* icon ```
void q_tableview_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// ``` QTableView* self, void (*slot)(QWidget*, QIcon*) ```
void q_tableview_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QTableView* self, const char* iconText ```
void q_tableview_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// ``` QTableView* self, void (*slot)(QWidget*, const char*) ```
void q_tableview_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QTableView* self, QPoint* pos ```
void q_tableview_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// ``` QTableView* self, void (*slot)(QWidget*, QPoint*) ```
void q_tableview_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QTableView* self ```
int64_t q_tableview_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QTableView* self, int hints ```
void q_tableview_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTableView* self, QPaintDevice* target, QPoint* targetOffset ```
void q_tableview_render2(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTableView* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_tableview_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTableView* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_tableview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTableView* self, QPainter* painter, QPoint* targetOffset ```
void q_tableview_render22(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTableView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_tableview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTableView* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_tableview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QTableView* self, QRect* rectangle ```
QPixmap* q_tableview_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QTableView* self, enum Qt__GestureType typeVal, int flags ```
void q_tableview_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QTableView* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_tableview_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QTableView* self, int id, bool enable ```
void q_tableview_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QTableView* self, int id, bool enable ```
void q_tableview_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QTableView* self, enum Qt__WindowType param1, bool on ```
void q_tableview_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QTableView* self, enum Qt__WidgetAttribute param1, bool on ```
void q_tableview_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_tableview_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_tableview_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTableView* self ```
const char* q_tableview_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTableView* self, const char* name ```
void q_tableview_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTableView* self ```
bool q_tableview_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTableView* self ```
bool q_tableview_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTableView* self ```
bool q_tableview_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTableView* self ```
bool q_tableview_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTableView* self, bool b ```
bool q_tableview_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTableView* self ```
QThread* q_tableview_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTableView* self, QThread* thread ```
void q_tableview_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTableView* self, int interval ```
int32_t q_tableview_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTableView* self, int id ```
void q_tableview_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTableView* self ```
libqt_list /* of QObject* */ q_tableview_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTableView* self, QObject* filterObj ```
void q_tableview_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTableView* self, QObject* obj ```
void q_tableview_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_tableview_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTableView* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_tableview_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_tableview_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_tableview_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTableView* self ```
void q_tableview_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTableView* self ```
void q_tableview_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTableView* self, const char* name, QVariant* value ```
bool q_tableview_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTableView* self, const char* name ```
QVariant* q_tableview_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTableView* self ```
const char** q_tableview_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTableView* self ```
QBindingStorage* q_tableview_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTableView* self ```
QBindingStorage* q_tableview_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTableView* self ```
void q_tableview_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QTableView* self, void (*slot)(QObject*) ```
void q_tableview_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTableView* self ```
QObject* q_tableview_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTableView* self, const char* classname ```
bool q_tableview_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTableView* self ```
void q_tableview_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTableView* self, int interval, enum Qt__TimerType timerType ```
int32_t q_tableview_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_tableview_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTableView* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_tableview_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTableView* self, QObject* param1 ```
void q_tableview_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QTableView* self, void (*slot)(QObject*, QObject*) ```
void q_tableview_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QTableView* self ```
bool q_tableview_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QTableView* self ```
int32_t q_tableview_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QTableView* self ```
int32_t q_tableview_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QTableView* self ```
int32_t q_tableview_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QTableView* self ```
int32_t q_tableview_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QTableView* self ```
int32_t q_tableview_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QTableView* self ```
int32_t q_tableview_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QTableView* self ```
double q_tableview_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QTableView* self ```
double q_tableview_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QTableView* self ```
int32_t q_tableview_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QTableView* self ```
int32_t q_tableview_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_tableview_device_pixel_ratio_f_scale();

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, const char* search ```
void q_tableview_keyboard_search(void* self, const char* search);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, const char* search ```
void q_tableview_qbase_keyboard_search(void* self, const char* search);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, const char*) ```
void q_tableview_on_keyboard_search(void* self, void (*slot)(void*, const char*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QModelIndex* index ```
QAbstractItemDelegate* q_tableview_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QModelIndex* index ```
QAbstractItemDelegate* q_tableview_qbase_item_delegate_for_index(void* self, void* index);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, QAbstractItemDelegate* (*slot)(QTableView*, QModelIndex*) ```
void q_tableview_on_item_delegate_for_index(void* self, QAbstractItemDelegate* (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, enum Qt__InputMethodQuery query ```
QVariant* q_tableview_input_method_query(void* self, int64_t query);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, enum Qt__InputMethodQuery query ```
QVariant* q_tableview_qbase_input_method_query(void* self, int64_t query);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, QVariant* (*slot)(QTableView*, enum Qt__InputMethodQuery) ```
void q_tableview_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#reset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_reset(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_qbase_reset(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)() ```
void q_tableview_on_reset(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_select_all(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_qbase_select_all(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)() ```
void q_tableview_on_select_all(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dataChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_tableview_data_changed(void* self, void* topLeft, void* bottomRight, int* roles[]);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QModelIndex* topLeft, QModelIndex* bottomRight, int* roles[] ```
void q_tableview_qbase_data_changed(void* self, void* topLeft, void* bottomRight, int* roles[]);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QModelIndex*, QModelIndex*, int*[]) ```
void q_tableview_on_data_changed(void* self, void (*slot)(void*, void*, void*, int*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsInserted)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QModelIndex* parent, int start, int end ```
void q_tableview_rows_inserted(void* self, void* parent, int start, int end);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QModelIndex* parent, int start, int end ```
void q_tableview_qbase_rows_inserted(void* self, void* parent, int start, int end);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QModelIndex*, int, int) ```
void q_tableview_on_rows_inserted(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#rowsAboutToBeRemoved)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QModelIndex* parent, int start, int end ```
void q_tableview_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QModelIndex* parent, int start, int end ```
void q_tableview_qbase_rows_about_to_be_removed(void* self, void* parent, int start, int end);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QModelIndex*, int, int) ```
void q_tableview_on_rows_about_to_be_removed(void* self, void (*slot)(void*, void*, int, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_qbase_update_editor_data(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)() ```
void q_tableview_on_update_editor_data(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_qbase_update_editor_geometries(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)() ```
void q_tableview_on_update_editor_geometries(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, int value ```
void q_tableview_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, int value ```
void q_tableview_qbase_vertical_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, int) ```
void q_tableview_on_vertical_scrollbar_value_changed(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, int value ```
void q_tableview_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, int value ```
void q_tableview_qbase_horizontal_scrollbar_value_changed(void* self, int value);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, int) ```
void q_tableview_on_horizontal_scrollbar_value_changed(void* self, void (*slot)(void*, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_tableview_close_editor(void* self, void* editor, int64_t hint);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QWidget* editor, enum QAbstractItemDelegate__EndEditHint hint ```
void q_tableview_qbase_close_editor(void* self, void* editor, int64_t hint);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QWidget*, enum QAbstractItemDelegate__EndEditHint) ```
void q_tableview_on_close_editor(void* self, void (*slot)(void*, void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QWidget* editor ```
void q_tableview_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QWidget* editor ```
void q_tableview_qbase_commit_data(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QWidget*) ```
void q_tableview_on_commit_data(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QObject* editor ```
void q_tableview_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QObject* editor ```
void q_tableview_qbase_editor_destroyed(void* self, void* editor);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QObject*) ```
void q_tableview_on_editor_destroyed(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_tableview_edit2(void* self, void* index, int64_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QModelIndex* index, enum QAbstractItemView__EditTrigger trigger, QEvent* event ```
bool q_tableview_qbase_edit2(void* self, void* index, int64_t trigger, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, bool (*slot)(QTableView*, QModelIndex*, enum QAbstractItemView__EditTrigger, QEvent*) ```
void q_tableview_on_edit2(void* self, bool (*slot)(void*, void*, int64_t, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QModelIndex* index, QEvent* event ```
int64_t q_tableview_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QModelIndex* index, QEvent* event ```
int64_t q_tableview_qbase_selection_command(void* self, void* index, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, int64_t (*slot)(QTableView*, QModelIndex*, QEvent*) ```
void q_tableview_on_selection_command(void* self, int64_t (*slot)(void*, void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, int supportedActions ```
void q_tableview_start_drag(void* self, int64_t supportedActions);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, int supportedActions ```
void q_tableview_qbase_start_drag(void* self, int64_t supportedActions);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, int) ```
void q_tableview_on_start_drag(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, bool next ```
bool q_tableview_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, bool next ```
bool q_tableview_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, bool (*slot)(QTableView*, bool) ```
void q_tableview_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QEvent* event ```
bool q_tableview_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QEvent* event ```
bool q_tableview_qbase_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, bool (*slot)(QTableView*, QEvent*) ```
void q_tableview_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QEvent* event ```
bool q_tableview_viewport_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QEvent* event ```
bool q_tableview_qbase_viewport_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, bool (*slot)(QTableView*, QEvent*) ```
void q_tableview_on_viewport_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QMouseEvent* event ```
void q_tableview_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QMouseEvent* event ```
void q_tableview_qbase_mouse_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QMouseEvent*) ```
void q_tableview_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QMouseEvent* event ```
void q_tableview_mouse_move_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QMouseEvent* event ```
void q_tableview_qbase_mouse_move_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QMouseEvent*) ```
void q_tableview_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QMouseEvent* event ```
void q_tableview_mouse_release_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QMouseEvent* event ```
void q_tableview_qbase_mouse_release_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QMouseEvent*) ```
void q_tableview_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QMouseEvent* event ```
void q_tableview_mouse_double_click_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QMouseEvent* event ```
void q_tableview_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QMouseEvent*) ```
void q_tableview_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QDragEnterEvent* event ```
void q_tableview_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QDragEnterEvent* event ```
void q_tableview_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QDragEnterEvent*) ```
void q_tableview_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QDragMoveEvent* event ```
void q_tableview_drag_move_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QDragMoveEvent* event ```
void q_tableview_qbase_drag_move_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QDragMoveEvent*) ```
void q_tableview_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QDragLeaveEvent* event ```
void q_tableview_drag_leave_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QDragLeaveEvent* event ```
void q_tableview_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QDragLeaveEvent*) ```
void q_tableview_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QDropEvent* event ```
void q_tableview_drop_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QDropEvent* event ```
void q_tableview_qbase_drop_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QDropEvent*) ```
void q_tableview_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QFocusEvent* event ```
void q_tableview_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QFocusEvent* event ```
void q_tableview_qbase_focus_in_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QFocusEvent*) ```
void q_tableview_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QFocusEvent* event ```
void q_tableview_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QFocusEvent* event ```
void q_tableview_qbase_focus_out_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QFocusEvent*) ```
void q_tableview_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QKeyEvent* event ```
void q_tableview_key_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QKeyEvent* event ```
void q_tableview_qbase_key_press_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QKeyEvent*) ```
void q_tableview_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QResizeEvent* event ```
void q_tableview_resize_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QResizeEvent* event ```
void q_tableview_qbase_resize_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QResizeEvent*) ```
void q_tableview_on_resize_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QInputMethodEvent* event ```
void q_tableview_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QInputMethodEvent* event ```
void q_tableview_qbase_input_method_event(void* self, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QInputMethodEvent*) ```
void q_tableview_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QObject* object, QEvent* event ```
bool q_tableview_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QObject* object, QEvent* event ```
bool q_tableview_qbase_event_filter(void* self, void* object, void* event);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, bool (*slot)(QTableView*, QObject*, QEvent*) ```
void q_tableview_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
QSize* q_tableview_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
QSize* q_tableview_qbase_minimum_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, QSize* (*slot)() ```
void q_tableview_on_minimum_size_hint(void* self, QSize* (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
QSize* q_tableview_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
QSize* q_tableview_qbase_size_hint(void* self);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, QSize* (*slot)() ```
void q_tableview_on_size_hint(void* self, QSize* (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QWidget* viewport ```
void q_tableview_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QWidget* viewport ```
void q_tableview_qbase_setup_viewport(void* self, void* viewport);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QWidget*) ```
void q_tableview_on_setup_viewport(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QWheelEvent* param1 ```
void q_tableview_wheel_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QWheelEvent* param1 ```
void q_tableview_qbase_wheel_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QWheelEvent*) ```
void q_tableview_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QContextMenuEvent* param1 ```
void q_tableview_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QContextMenuEvent* param1 ```
void q_tableview_qbase_context_menu_event(void* self, void* param1);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QContextMenuEvent*) ```
void q_tableview_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QEvent* param1 ```
void q_tableview_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QEvent* param1 ```
void q_tableview_qbase_change_event(void* self, void* param1);

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QEvent*) ```
void q_tableview_on_change_event(void* self, void (*slot)(void*, void*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QStyleOptionFrame* option ```
void q_tableview_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QStyleOptionFrame* option ```
void q_tableview_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QStyleOptionFrame*) ```
void q_tableview_on_init_style_option(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
int32_t q_tableview_dev_type(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
int32_t q_tableview_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, int32_t (*slot)() ```
void q_tableview_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, bool visible ```
void q_tableview_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, bool visible ```
void q_tableview_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, bool) ```
void q_tableview_on_set_visible(void* self, void (*slot)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, int param1 ```
int32_t q_tableview_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, int param1 ```
int32_t q_tableview_qbase_height_for_width(void* self, int param1);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, int32_t (*slot)(QTableView*, int) ```
void q_tableview_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
bool q_tableview_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
bool q_tableview_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, bool (*slot)() ```
void q_tableview_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
QPaintEngine* q_tableview_paint_engine(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
QPaintEngine* q_tableview_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, QPaintEngine* (*slot)() ```
void q_tableview_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QKeyEvent* event ```
void q_tableview_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QKeyEvent* event ```
void q_tableview_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QKeyEvent*) ```
void q_tableview_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QEnterEvent* event ```
void q_tableview_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QEnterEvent* event ```
void q_tableview_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QEnterEvent*) ```
void q_tableview_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QEvent* event ```
void q_tableview_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QEvent* event ```
void q_tableview_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QEvent*) ```
void q_tableview_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QMoveEvent* event ```
void q_tableview_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QMoveEvent* event ```
void q_tableview_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QMoveEvent*) ```
void q_tableview_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QCloseEvent* event ```
void q_tableview_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QCloseEvent* event ```
void q_tableview_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QCloseEvent*) ```
void q_tableview_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QTabletEvent* event ```
void q_tableview_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QTabletEvent* event ```
void q_tableview_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QTabletEvent*) ```
void q_tableview_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QActionEvent* event ```
void q_tableview_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QActionEvent* event ```
void q_tableview_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QActionEvent*) ```
void q_tableview_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QShowEvent* event ```
void q_tableview_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QShowEvent* event ```
void q_tableview_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QShowEvent*) ```
void q_tableview_on_show_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QHideEvent* event ```
void q_tableview_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QHideEvent* event ```
void q_tableview_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QHideEvent*) ```
void q_tableview_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, const char* eventType, void* message, intptr_t* result ```
bool q_tableview_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, const char* eventType, void* message, intptr_t* result ```
bool q_tableview_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, bool (*slot)(QTableView*, const char*, void*, intptr_t*) ```
void q_tableview_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_tableview_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_tableview_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, int32_t (*slot)(QTableView*, enum QPaintDevice__PaintDeviceMetric) ```
void q_tableview_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QPainter* painter ```
void q_tableview_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QPainter* painter ```
void q_tableview_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QPainter*) ```
void q_tableview_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QPoint* offset ```
QPaintDevice* q_tableview_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QPoint* offset ```
QPaintDevice* q_tableview_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, QPaintDevice* (*slot)(QTableView*, QPoint*) ```
void q_tableview_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
QPainter* q_tableview_shared_painter(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
QPainter* q_tableview_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, QPainter* (*slot)() ```
void q_tableview_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QChildEvent* event ```
void q_tableview_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QChildEvent* event ```
void q_tableview_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QChildEvent*) ```
void q_tableview_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QEvent* event ```
void q_tableview_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QEvent* event ```
void q_tableview_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QEvent*) ```
void q_tableview_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QMetaMethod* signal ```
void q_tableview_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QMetaMethod* signal ```
void q_tableview_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QMetaMethod*) ```
void q_tableview_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QMetaMethod* signal ```
void q_tableview_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QMetaMethod* signal ```
void q_tableview_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QMetaMethod*) ```
void q_tableview_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#state)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
int64_t q_tableview_state(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
int64_t q_tableview_qbase_state(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, int64_t (*slot)() ```
void q_tableview_on_state(void* self, int64_t (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, enum QAbstractItemView__State state ```
void q_tableview_set_state(void* self, int64_t state);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, enum QAbstractItemView__State state ```
void q_tableview_qbase_set_state(void* self, int64_t state);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, enum QAbstractItemView__State) ```
void q_tableview_on_set_state(void* self, void (*slot)(void*, int64_t));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_qbase_schedule_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)() ```
void q_tableview_on_schedule_delayed_items_layout(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_qbase_execute_delayed_items_layout(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)() ```
void q_tableview_on_execute_delayed_items_layout(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QRegion* region ```
void q_tableview_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QRegion* region ```
void q_tableview_qbase_set_dirty_region(void* self, void* region);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QRegion*) ```
void q_tableview_on_set_dirty_region(void* self, void (*slot)(void*, void*));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, int dx, int dy ```
void q_tableview_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, int dx, int dy ```
void q_tableview_qbase_scroll_dirty_region(void* self, int dx, int dy);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, int, int) ```
void q_tableview_on_scroll_dirty_region(void* self, void (*slot)(void*, int, int));

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
QPoint* q_tableview_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
QPoint* q_tableview_qbase_dirty_region_offset(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, QPoint* (*slot)() ```
void q_tableview_on_dirty_region_offset(void* self, QPoint* (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_qbase_start_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)() ```
void q_tableview_on_start_auto_scroll(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_qbase_stop_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)() ```
void q_tableview_on_stop_auto_scroll(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_qbase_do_auto_scroll(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)() ```
void q_tableview_on_do_auto_scroll(void* self, void (*slot)());

/// Inherited from QAbstractItemView
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
int64_t q_tableview_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
int64_t q_tableview_qbase_drop_indicator_position(void* self);

/// Inherited from QAbstractItemView
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, int64_t (*slot)() ```
void q_tableview_on_drop_indicator_position(void* self, int64_t (*slot)());

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, int left, int top, int right, int bottom ```
void q_tableview_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, int left, int top, int right, int bottom ```
void q_tableview_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, int, int, int, int) ```
void q_tableview_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int));

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
QMargins* q_tableview_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
QMargins* q_tableview_qbase_viewport_margins(void* self);

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, QMargins* (*slot)() ```
void q_tableview_on_viewport_margins(void* self, QMargins* (*slot)());

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QPainter* param1 ```
void q_tableview_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QPainter* param1 ```
void q_tableview_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)(QTableView*, QPainter*) ```
void q_tableview_on_draw_frame(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)() ```
void q_tableview_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_create(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_qbase_create(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)() ```
void q_tableview_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_destroy(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
void q_tableview_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, void (*slot)() ```
void q_tableview_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
bool q_tableview_focus_next_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
bool q_tableview_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, bool (*slot)() ```
void q_tableview_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
bool q_tableview_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
bool q_tableview_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, bool (*slot)() ```
void q_tableview_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
QObject* q_tableview_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
QObject* q_tableview_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, QObject* (*slot)() ```
void q_tableview_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self ```
int32_t q_tableview_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self ```
int32_t q_tableview_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, int32_t (*slot)() ```
void q_tableview_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, const char* signal ```
int32_t q_tableview_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, const char* signal ```
int32_t q_tableview_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, int32_t (*slot)(QTableView*, const char*) ```
void q_tableview_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTableView* self, QMetaMethod* signal ```
bool q_tableview_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTableView* self, QMetaMethod* signal ```
bool q_tableview_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTableView* self, bool (*slot)(QTableView*, QMetaMethod*) ```
void q_tableview_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QTableView* self ```
void q_tableview_delete(void* self);

#endif
